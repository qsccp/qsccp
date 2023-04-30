#ifndef NDN_CONSUMER_QSCCP_H
#define NDN_CONSUMER_QSCCP_H

#include "ns3/ndnSIM/model/ndn-common.hpp"
#include "ndn-consumer.hpp"
#include "ns3/traced-value.h"


namespace ns3 {
    namespace ndn {

        class ConsumerQSCCP : public Consumer {
        public:
            static TypeId GetTypeId();

            explicit ConsumerQSCCP();

            virtual void OnData(shared_ptr<const Data> data) override;

        protected:
            /**
           * \brief Constructs the Interest packet and sends it using a callback to the underlying NDN
           * protocol
           */
            virtual void ScheduleNextPacket() override;

            void SendPacket();

            /**
             * @brief Set type of frequency randomization
             * @param value Either 'none', 'uniform', or 'exponential'
             */
            void
            SetRandomize(const std::string& value);

            /**
             * @brief Get type of frequency randomization
             * @returns either 'none', 'uniform', or 'exponential'
             */
            std::string
            GetRandomize() const;
            
            uint64_t updateSendRate(uint64_t newSendRate);

            // Stop send packet
            void stop();    

            void startGreedy();
        private:
            // private function here
            uint64_t updateRate(uint64_t newRate);

        protected:
            bool m_firstTime = true;
            // private attribute here
            uint64_t tos;
            uint64_t delayStart;
            uint64_t dsz;
            uint64_t sendRate;
            int32_t fixedRate;
            int32_t timingStop;
            int32_t delayGreedy;
            int32_t greedyRate;
            int32_t m_reqNum;
            uint64_t m_recvDataNum;

            Ptr<RandomVariableStream> m_random;
            std::string m_randomType;
        };

    }
}

#endif

