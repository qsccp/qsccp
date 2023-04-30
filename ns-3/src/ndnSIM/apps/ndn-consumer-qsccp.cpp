#include "ndn-consumer-qsccp.hpp"
#include <ndn-cxx/lp/tags.hpp>
#include "ns3/ptr.h"
#include "ns3/log.h"
#include "ns3/simulator.h"
#include "ns3/packet.h"
#include "ns3/callback.h"
#include "ns3/string.h"
#include "ns3/boolean.h"
#include "ns3/uinteger.h"
#include "ns3/integer.h"
#include "ns3/double.h"

NS_LOG_COMPONENT_DEFINE("ndn.ConsumerQSCCP");
namespace ns3 {
    namespace ndn {
        NS_OBJECT_ENSURE_REGISTERED(ConsumerQSCCP);


        TypeId ConsumerQSCCP::GetTypeId() {
            static TypeId tid =
                    TypeId("ns3::ndn::ConsumerQSCCP")
                            .SetGroupName("Ndn")
                            .SetParent<Consumer>()
                            .AddConstructor<ConsumerQSCCP>()
                                    // Add Attribute here
                            .AddAttribute("Tos",
                                          "Type of service",
                                          UintegerValue(1),
                                          MakeUintegerAccessor(&ConsumerQSCCP::tos),
                                          MakeUintegerChecker<uint32_t>())
                            .AddAttribute("Dsz",
                                          "Data size",
                                          UintegerValue(8800),
                                          MakeUintegerAccessor(&ConsumerQSCCP::dsz),
                                          MakeUintegerChecker<uint32_t>())
                            .AddAttribute("ReqNum",
                                          "Request Data Num(-1 indicator infinity)",
                                          IntegerValue(-1),
                                          MakeIntegerAccessor(&ConsumerQSCCP::m_reqNum),
                                          MakeIntegerChecker<int32_t>())
                            .AddAttribute("InitialSendRate",
                                          "Initial send rate",
                                          UintegerValue(100000),
                                          MakeUintegerAccessor(&ConsumerQSCCP::sendRate),
                                          MakeUintegerChecker<uint32_t>())
                            .AddAttribute("FixedRate",
                                          "Fixed Send Rate",
                                          IntegerValue(-1),
                                          MakeIntegerAccessor(&ConsumerQSCCP::fixedRate),
                                          MakeIntegerChecker<int32_t>())
                            .AddAttribute("TimingStop",
                                          "Timing stop (ms)",
                                          IntegerValue(-1),
                                          MakeIntegerAccessor(&ConsumerQSCCP::timingStop),
                                          MakeIntegerChecker<int32_t>())
                            .AddAttribute("DelayGreedy",
                                          "Start greedy after the specified time (ms)",
                                          IntegerValue(-1),
                                          MakeIntegerAccessor(&ConsumerQSCCP::delayGreedy),
                                          MakeIntegerChecker<int32_t>())
                            .AddAttribute("GreedyRate",
                                          "Transmission rate when greedy (bps)",
                                          IntegerValue(-1),
                                          MakeIntegerAccessor(&ConsumerQSCCP::greedyRate),
                                          MakeIntegerChecker<int32_t>())
                            .AddAttribute("DelayStart",
                                          "Delay start time (ms)",
                                          UintegerValue(0),
                                          MakeUintegerAccessor(&ConsumerQSCCP::delayStart),
                                          MakeUintegerChecker<uint32_t>());
            return tid;
        }

        ConsumerQSCCP::ConsumerQSCCP(): tos(1), dsz(1040), sendRate(0), fixedRate(-1), timingStop(-1) {
            m_seqMax = std::numeric_limits<uint32_t>::max();
        }

        uint64_t ConsumerQSCCP::updateRate(uint64_t newRate) {
            if (this->fixedRate > 0) {
                return this->fixedRate;
            }
            if (this->sendRate == 0) {
                this->sendRate = newRate;
            } else {
                this->sendRate = 0.8 * this->sendRate + 0.2 * newRate;
            }

            // if (this->GetNode()->GetId() == 1 && m_interestName.toUri() == "/Warner") {
            //   std::cout << "sendRate: " << this->sendRate << ", dsz" << this->dsz << ", targetRate: " << newRate << std::endl;
            // }
            NS_LOG_DEBUG("sendRate: " << this->sendRate << ", dsz" << this->dsz << ", targetRate: " << newRate);
            return this->sendRate;
        }

        void ConsumerQSCCP::stop() {
            this->m_seqMax = 0;
            this->m_seq = 0;
            this->StopApplication();

        }

        void ConsumerQSCCP::startGreedy() {
            this->fixedRate = this->greedyRate;
            this->sendRate = this->greedyRate;
        }

        void ConsumerQSCCP::OnData(shared_ptr<const Data> data) {
            Consumer::OnData(data);
            // print tags
            auto targetRate = data->getTargetRate();
            if (targetRate) {
                this->updateRate(*targetRate);
            } else {
                NS_LOG_DEBUG("no target rate");
            }

            ++this->m_recvDataNum;
            if (this->m_reqNum == this->m_recvDataNum) {
                this->StopApplication();
                return;
            }
            
            ScheduleNextPacket();
        }

        void ConsumerQSCCP::ScheduleNextPacket() {
            if (this->m_firstTime) {
                this->m_firstTime = false;
                
                if (this->m_reqNum > 0) {
                    this->m_seqMax = this->m_reqNum;
                }

                if (this->fixedRate > 0) {
                    this->sendRate = fixedRate;
                }

                if (this->timingStop > 0) {
                    Simulator::Schedule(MilliSeconds(this->timingStop), &ConsumerQSCCP::stop, this);
                }

                if (this->delayGreedy > 0 && this->greedyRate > 0) {
                    Simulator::Schedule(MilliSeconds(this->delayGreedy), &ConsumerQSCCP::startGreedy, this);
                }

                m_sendEvent = Simulator::Schedule(MilliSeconds(this->delayStart), &ConsumerQSCCP::SendPacket, this);
            } else if (!m_sendEvent.IsRunning()) {
                auto waitTime = (this->dsz * 1000000000) / this->sendRate + 1;
                if (m_random != 0) {
                    waitTime = m_random->GetValue() * 1000000000;
                }

                m_sendEvent = Simulator::Schedule(NanoSeconds(waitTime), &ConsumerQSCCP::SendPacket, this);
            } 
        }

        void ConsumerQSCCP::SendPacket() {
            if (!m_active)
                return;

            // NS_LOG_FUNCTION_NOARGS();

            uint32_t seq = std::numeric_limits<uint32_t>::max();
            while (m_retxSeqs.size()) {
                seq = *m_retxSeqs.begin();
                m_retxSeqs.erase(m_retxSeqs.begin());
                break;
            }

            if (seq == std::numeric_limits<uint32_t>::max()) {
                if (m_seqMax != std::numeric_limits<uint32_t>::max()) {
                    if (m_seq >= m_seqMax) {
                        return;
                    }
                }

                seq = m_seq++;
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
            interest->setServiceClass(this->tos);
            interest->setDsz(this->dsz);
            time::milliseconds interestLifeTime(m_interestLifeTime.GetMilliSeconds());
            interest->setInterestLifetime(interestLifeTime);

            // NS_LOG_INFO ("Requesting Interest: \n" << *interest);
            //NS_LOG_INFO("> Interest for " << seq);

            WillSendOutInterest(seq);

            m_transmittedInterests(interest, this, m_face);
            m_appLink->onReceiveInterest(*interest);

            ScheduleNextPacket();
        }
        
    }
}
