#include "ndn-consumer-pcon-zipf.hpp"
#include <math.h>
#include <ndn-cxx/lp/tags.hpp>

NS_LOG_COMPONENT_DEFINE("ndn.ConsumerPconZipf");

namespace ns3 {
namespace ndn {
    NS_OBJECT_ENSURE_REGISTERED(ConsumerPconZipf);

    TypeId
    ConsumerPconZipf::GetTypeId(void)
    {
    static TypeId tid =
        TypeId("ns3::ndn::ConsumerPconZipf")
        .SetGroupName("Ndn")
        .SetParent<ConsumerPcon>()
        .AddConstructor<ConsumerPconZipf>()

        .AddAttribute("NumberOfContents", "Number of the Contents in total", StringValue("100"),
                        MakeUintegerAccessor(&ConsumerPconZipf::SetNumberOfContents,
                                            &ConsumerPconZipf::GetNumberOfContents),
                        MakeUintegerChecker<uint32_t>())

        .AddAttribute("q", "parameter of improve rank", StringValue("0.7"),
                        MakeDoubleAccessor(&ConsumerPconZipf::SetQ,
                                        &ConsumerPconZipf::GetQ),
                        MakeDoubleChecker<double>())

        .AddAttribute("s", "parameter of power", StringValue("0.7"),
                        MakeDoubleAccessor(&ConsumerPconZipf::SetS,
                                        &ConsumerPconZipf::GetS),
                        MakeDoubleChecker<double>());

    return tid;
    }

    ConsumerPconZipf::ConsumerPconZipf()
        : m_N(100) // needed here to make sure when SetQ/SetS are called, there is a valid value of N
        , m_q(0.7)
        , m_s(0.7)
        , m_seqRng(CreateObject<UniformRandomVariable>())
    {
    // SetNumberOfContents is called by NS-3 object system during the initialization
    }


    ConsumerPconZipf::~ConsumerPconZipf()
    {
    }

    void
    ConsumerPconZipf::SetNumberOfContents(uint32_t numOfContents)
    {
        m_N = numOfContents;

        NS_LOG_DEBUG(m_q << " and " << m_s << " and " << m_N);

        m_Pcum = std::vector<double>(m_N + 1);

        m_Pcum[0] = 0.0;
        for (uint32_t i = 1; i <= m_N; i++) {
            m_Pcum[i] = m_Pcum[i - 1] + 1.0 / std::pow(i + m_q, m_s);
        }

        for (uint32_t i = 1; i <= m_N; i++) {
            m_Pcum[i] = m_Pcum[i] / m_Pcum[m_N];
            NS_LOG_LOGIC("Cumulative probability [" << i << "]=" << m_Pcum[i]);
        }
    }

    uint32_t
    ConsumerPconZipf::GetNumberOfContents() const
    {
        return m_N;
    }

    void
    ConsumerPconZipf::SetQ(double q)
    {
        m_q = q;
        SetNumberOfContents(m_N);
    }

    double
    ConsumerPconZipf::GetQ() const
    {
        return m_q;
    }

    void
    ConsumerPconZipf::SetS(double s)
    {
    m_s = s;
        SetNumberOfContents(m_N);
    }

    double
    ConsumerPconZipf::GetS() const
    {
        return m_s;
    }

    uint32_t
    ConsumerPconZipf::GetNextSeq()
    {
        uint32_t content_index = 1; //[1, m_N]
        double p_sum = 0;

        double p_random = m_seqRng->GetValue();
        while (p_random == 0) {
            p_random = m_seqRng->GetValue();
        }
        // if (p_random == 0)
        NS_LOG_LOGIC("p_random=" << p_random);
        for (uint32_t i = 1; i <= m_N; i++) {
            p_sum = m_Pcum[i]; // m_Pcum[i] = m_Pcum[i-1] + p[i], p[0] = 0;   e.g.: p_cum[1] = p[1],
                            // p_cum[2] = p[1] + p[2]
            if (p_random <= p_sum) {
            content_index = i;
            break;
            } // if
        }   // for
        // content_index = 1;
        NS_LOG_DEBUG("RandomNumber=" << content_index);
        return content_index;
    }

    void
    ConsumerPconZipf::ScheduleNextPacket()
    {
        if (m_window == static_cast<uint32_t>(0)) {
            Simulator::Remove(m_sendEvent);

            NS_LOG_DEBUG(
            "Next event in " << (std::min<double>(0.5, m_rtt->RetransmitTimeout().ToDouble(Time::S)))
                            << " sec");
            m_sendEvent =
            Simulator::Schedule(Seconds(
                                    std::min<double>(0.5, m_rtt->RetransmitTimeout().ToDouble(Time::S))),
                                &ConsumerPconZipf::SendPacket, this);
        }
        else if (m_inFlight >= m_window) {
            // simply do nothing
        }
        else {
            if (m_sendEvent.IsRunning()) {
            Simulator::Remove(m_sendEvent);
            }

            m_sendEvent = Simulator::ScheduleNow(&ConsumerPconZipf::SendPacket, this);
        }
    }

    void
    ConsumerPconZipf::SendPacket()
    {
        if (!m_active)
            return;

        NS_LOG_FUNCTION_NOARGS();

        uint32_t seq = std::numeric_limits<uint32_t>::max(); // invalid

        while (m_retxSeqs.size()) {
            seq = *m_retxSeqs.begin();
            m_retxSeqs.erase(m_retxSeqs.begin());
            break;
        }

        if (seq == std::numeric_limits<uint32_t>::max()) {
            if (m_seqMax != std::numeric_limits<uint32_t>::max()) {
                if (m_seq >= m_seqMax) {
                    return; // we are totally done
                }
            }

            seq = ConsumerPconZipf::GetNextSeq();
            m_seq++;
        }

        //
        shared_ptr<Name> nameWithSequence = make_shared<Name>(m_interestName);
        nameWithSequence->appendSequenceNumber(seq);
        //

        // shared_ptr<Interest> interest = make_shared<Interest> ();
        shared_ptr<Interest> interest = make_shared<Interest>();
        interest->setNonce(m_rand->GetValue(0, std::numeric_limits<uint32_t>::max()));
        interest->setName(*nameWithSequence);
        interest->setCanBePrefix(false);
        time::milliseconds interestLifeTime(m_interestLifeTime.GetMilliSeconds());
        interest->setInterestLifetime(interestLifeTime);

        // NS_LOG_INFO ("Requesting Interest: \n" << *interest);
        NS_LOG_INFO("> Interest for " << seq);

        WillSendOutInterest(seq);

        m_transmittedInterests(interest, this, m_face);
        m_appLink->onReceiveInterest(*interest);

        ConsumerPconZipf::ScheduleNextPacket();
    }
}
}