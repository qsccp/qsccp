//
// Created by gdcni21 on 3/24/22.
//
#include <boost/random/mersenne_twister.hpp>
#include "face/face.hpp"
#include "fw/strategy.hpp"
#include "fw/retx-suppression-exponential.hpp"
#include "fw/retx-suppression-fixed.hpp"
#include "fw/algorithm.hpp"
#include "fw/process-nack-traits.hpp"
#include <unordered_map>
#include <limits>

namespace nfd
{
    namespace fw
    {
        struct RateItem
        {
            uint32_t rateValue;
            face::FaceId id;
            double ratio;
            double balance;
            uint32_t allocateRate;
            uint32_t recvCount;
            explicit RateItem(uint32_t value = 0, face::FaceId faceId = 0) : 
                            rateValue(value), id(faceId), ratio(0), 
                            balance(0.0), allocateRate(0), recvCount(0) {}
            
        };

        class RateCollection
        {
        public:
            bool addOrUpdateRate(face::FaceId id, uint32_t rate);

            size_t getFaceNum()
            {
                return this->rates.size();
            }

            uint32_t getMergeRate() const
            {
                return this->totalRate;
            }

            face::FaceId selectNextFace(uint64_t dataSize, face::FaceId exceptId);

            face::FaceId selectFaceByRatio(const FaceEndpoint &ingress, const fib::Entry &fibEntry, const ndn::Interest &interest);

            double getRatioByFace(face::FaceId id);

            void calSplitRateByRate();

            uint32_t getAllocateRate(face::FaceId id);

            void updateTotalAvaliableRate(uint32_t totalAvailableRate) {
                if (totalAvailableRate > 1.2 * this->totalAvaliableRate || totalAvailableRate < 0.8 * this->totalAvaliableRate) {
                    this->totalAvaliableRate = totalAvailableRate;
                    this->calSplitRateByRate();
                } else {
                    this->totalAvaliableRate = totalAvailableRate;
                }
                // std::cout << "updateRate: " << totalAvailableRate << std::endl;
            }

            void setName(const std::string &name) { this->name = name; }

            std::string getName() { return this->name; }

            void doPeriodicCleaning(bool needErase = true, uint32_t defaultValue = 0);

        private:
            std::unordered_map<face::FaceId, shared_ptr<RateItem>> rates;
            std::vector<shared_ptr<RateItem>> items;
            uint32_t totalRate;
            boost::random::mt19937 m_randomGenerator;

            float randomThreshold = 0.99;
            int nextForwardFace;
            int MTU_QUANTA = 2 * 1000 * 8;
            std::string name = "";
            uint32_t totalAvaliableRate = 0;
        };

        class RateStore
        {
        public:
            explicit RateStore();

            face::FaceId
            afterReceiveInterest(const FaceEndpoint &ingress, const Interest &interest,
                                 const shared_ptr<pit::Entry> &pitEntry, const fib::Entry &fibEntry);

            void
            afterReceiveNack(const FaceEndpoint &ingress, const lp::Nack &nack,
                             const shared_ptr<pit::Entry> &pitEntry);

            void
            beforeSatisfyInterest(const shared_ptr<pit::Entry> &pitEntry,
                                  const FaceEndpoint &ingress, const Data &data);

            void
            beforeSendData(const shared_ptr<pit::Entry> &pitEntry,
                           const FaceEndpoint &egress, const Data &data);

            void 
            periodicCleaning();

        private:
            // ART => Available Rate Table =>
            std::unordered_map<std::string, shared_ptr<RateCollection>> ART;
            // RRT => Recommend Rate Table => 
            std::unordered_map<std::string, shared_ptr<RateCollection>> RRT;
            uint32_t turn = 0;
        };

        class QSCCPStrategy : public Strategy, public ProcessNackTraits<QSCCPStrategy>
        {
        public:
            explicit QSCCPStrategy(Forwarder &forwarder, const Name &name = getStrategyName());

            ~QSCCPStrategy() override = default;

            void
            afterReceiveInterest(const FaceEndpoint &ingress, const Interest &interest,
                                 const shared_ptr<pit::Entry> &pitEntry) override;

            void
            afterReceiveNack(const FaceEndpoint &ingress, const lp::Nack &nack,
                             const shared_ptr<pit::Entry> &pitEntry) override;

            void
            beforeSatisfyInterest(const shared_ptr<pit::Entry> &pitEntry,
                                  const FaceEndpoint &ingress, const Data &data) override;

            void
            afterReceiveData(const shared_ptr<pit::Entry> &pitEntry,
                             const FaceEndpoint &ingress, const Data &data) override;

            void
            afterContentStoreHit(const shared_ptr<pit::Entry> &pitEntry,
                                 const FaceEndpoint &ingress, const Data &data) override;

            static uint64_t
            getMaxTR()
            {
                return std::numeric_limits<uint32_t>::max();
            }

            static const Name &
            getStrategyName();

        protected:
            friend ProcessNackTraits<QSCCPStrategy>;

        private:
            static const time::milliseconds RETX_SUPPRESSION_INITIAL;
            static const time::milliseconds RETX_SUPPRESSION_MAX;
            RetxSuppressionFixed m_retxSuppression;
            RateStore rs;
        };
    }
}