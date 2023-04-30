#ifndef NDN_CONSUMER_PCON_ZIPF_H_
#define NDN_CONSUMER_PCON_ZIPF_H_

#include "ns3/ndnSIM/model/ndn-common.hpp"

#include "ndn-consumer.hpp"
#include "ndn-consumer-pcon.hpp"

#include "ns3/ptr.h"
#include "ns3/log.h"
#include "ns3/simulator.h"
#include "ns3/packet.h"
#include "ns3/callback.h"
#include "ns3/string.h"
#include "ns3/uinteger.h"
#include "ns3/double.h"
#include "ns3/random-variable-stream.h"

namespace ns3 {
namespace ndn {
    class ConsumerPconZipf : public ConsumerPcon {
        public:
            static TypeId GetTypeId();

            ConsumerPconZipf();
            virtual ~ConsumerPconZipf();

            virtual void SendPacket();

            uint32_t  GetNextSeq();

        protected:
            virtual void
            ScheduleNextPacket();

        private:
            void
            SetNumberOfContents(uint32_t numOfContents);

            uint32_t
            GetNumberOfContents() const;

            void
            SetQ(double q);

            double
            GetQ() const;

            void
            SetS(double s);

            double
            GetS() const;

        private:
            uint32_t m_N;               // number of the contents
            double m_q;                 // q in (k+q)^s
            double m_s;                 // s in (k+q)^s
            std::vector<double> m_Pcum; // cumulative probability

            Ptr<UniformRandomVariable> m_seqRng; // RNG
    };
}
}
#endif