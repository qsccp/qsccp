#ifndef NS_QUEUES_HPP
#define NS_QUEUES_HPP

#include <deque>
#include <unordered_map>
#include <memory>
#include "common/global.hpp"
#include "link-service.hpp"
#include <ndn-cxx/lp/tags.hpp>
#include "TokenBucket.hpp"

namespace nfd {
    namespace face {
        class VirtualQueue;

        struct VirtualQueueItem {
            int seq;
            std::shared_ptr<const Interest> item;
            EndpointId endpointId;
            uint32_t dataSize;
            uint32_t waitNsTime;
            std::shared_ptr<VirtualQueue> queue;
        };

        class VirtualQueue : public std::enable_shared_from_this<VirtualQueue>{
        public:
            explicit VirtualQueue(double weight, int size) :
                    std::enable_shared_from_this<VirtualQueue>(),
                    penaltyFactor(1.0),
                    weight(weight), size(size), currentSize(0), lastSeq(0),
                    C(0) {

            }

            void enableTokenBucket(uint32_t limitRate) {
                this->C = limitRate;
            }

            bool push(int seq, const std::shared_ptr<const Interest>& interest, const EndpointId &endpointId,
                      uint64_t dataSize, bool needInsert);

            bool empty() {
                return this->innerQueue.empty();
            }

            uint32_t frontSeq() {
                if (this->innerQueue.empty()) {
                    return this->lastSeq;
                }
                return this->innerQueue.front().seq;
            }

            VirtualQueueItem front() {
                return this->innerQueue.front();
            }

            uint32_t backSeq() {
                return this->lastSeq;
            }

            VirtualQueueItem back() {
                return this->innerQueue.back();
            }

            void pop() {
                if (this->currentSize <= 0) {
                    return;
                }
                this->currentSize--;
                this->innerQueue.pop_front();
            }

            void popBack() {
                if (this->currentSize <= 0) {
                    return;
                }
                this->currentSize--;
                this->innerQueue.pop_back();
            }

            int len() {
                return this->innerQueue.size();
            }

            void setLastSeq(uint32_t seq) {
                this->lastSeq = seq;
            }

            uint32_t getLastSeq() {
                return lastSeq;
            }

            void setWeight(double weight) {
                this->weight = weight;
            }

            double getWeight() {
                return this->weight;
            }

        public:
            uint32_t objectRate;
            double penaltyFactor = 1.0;
            uint32_t gredyTimes = 0;
            double gredyRatio = 1.2;
            double gredyThreshold = 5;
            double weight = 1.0;
            uint32_t tos = 5;

            double balance = 0;
            int size = 0;
            int currentSize = 0;
            uint32_t recvBits = 0;
            uint32_t currentFlowRate = 0;
            double currentRatio = 0.0;
        private:
            uint32_t lastSeq;
            int C;
            std::deque<VirtualQueueItem> innerQueue;
        };

        class WDRRQueue {
        public:
            explicit WDRRQueue(uint32_t rateLimit, uint32_t availableBandwidth, double weight, const std::string& name,
                                uint32_t tos = 5, size_t vqSize = 20);

            void updateAvailableBandwidth(uint32_t C);

            bool appendInterest(const Interest &interest, const EndpointId &endpointId);

            std::shared_ptr<VirtualQueueItem> scheduleNext();

            uint32_t calObjectRate(bool getCurrentRateOnly);

            void setCDTLimit(int cdt) {
                this->cdt = cdt;
            }

            uint32_t scheduleOnePacketForWFQ(uint32_t totalLastSeq);

            std::shared_ptr<VirtualQueueItem> frontForWFQ(uint32_t totalLastSeq) {
                if (this->cachePacketForWFQ == nullptr) {
                    this->scheduleOnePacketForWFQ(totalLastSeq);
                }
                return this->cachePacketForWFQ;
            }

            void popForWFQ() {
                this->cachePacketForWFQ = nullptr;
            }

            double getRemainBandwidthRate(double curAvailableBandWidth) {
                auto currentRate = this->calObjectRate(true);
                if (currentRate > curAvailableBandWidth) {
                    return 0;
                }
                return (curAvailableBandWidth - currentRate) * 1.0 / curAvailableBandWidth;
            }

            uint32_t getRemainBandwidth() {
                return this->availableBandwidth - this->calObjectRate(true);
            }

            double getWeight() {
                return this->weight;
            }

            uint32_t getAvailableBandwidth() {
                return this->availableBandwidth;
            }

            /**
             * @brief 
             * 
             * \sigma=\frac{1}{3}\arccot\funcapply(8\delta-4)
             * @param x 
             * @return double 
             */
            double calDiscountFactor(double x) {
                return 1.0 / 3 * (M_PI / 2 - atan(8 * x - 4)) + 0.034;
            }

            /**
             * @brief Get the Object Rate By Flow Key object
             * 
             * @param key 
             * @return uint32_t 
             */
            uint32_t getObjectRateByFlowKey(const std::string& key) {
                if (this->virtualQueues.count(key) == 0) {
                    std::cout << "FUCK: " << key << ", count: " << this->virtualQueues.size() << 
                    ", flow: " << this->flows.size() << "availbleRate: " << this->availableBandwidth << std::endl;
                    return 0;
                }
                return this->virtualQueues[key]->objectRate;
            }

        public:
            double originAvaliableBandwidth = 0;

        private:
            std::unordered_map<std::string, std::shared_ptr<VirtualQueue>> virtualQueues;
            std::vector<std::string> flows;
            size_t nextScheduleQueue = 0;
            std::shared_ptr<TokenBucket> tokenBucket;
            uint32_t availableBandwidth;
            // uint32_t extraBandwidth;
            double weight;
            std::string name;
            uint32_t tos = 5;
            bool needRateLimit;
            double totalWeight;
            uint32_t sendBits = 0;
            uint32_t recvBits = 0;
            int vqSize = 20;
            int cdt = -1;
            int currentPacketNum = 0;
            int MTU_QUANTA = 2 * 1000 * 8;
            int calObjectRateInterval = 100;
            int64_t lastSeq = -1;
            std::shared_ptr<VirtualQueueItem> cachePacketForWFQ = nullptr;
        };

        class DelaySensitiveServiceSP {
        public:
            explicit DelaySensitiveServiceSP(uint32_t availableBandwidth, size_t vqSize = 20) {
                this->CS7Queue = std::make_shared<WDRRQueue>((uint32_t) (0.2 * availableBandwidth), (uint32_t) (0.2 * availableBandwidth), 2, "CS7", 2, vqSize);
                this->CS6Queue = std::make_shared<WDRRQueue>((uint32_t) (0.2 * availableBandwidth), (uint32_t) (0.2 * availableBandwidth), 2, "CS6", 1, vqSize);
                this->EFQueue = std::make_shared<WDRRQueue>((uint32_t) (0.3 * availableBandwidth), (uint32_t) (0.3 * availableBandwidth), 3, "EF", 0, vqSize);
            }

            std::shared_ptr<VirtualQueueItem> scheduleNext();

            uint32_t calObjectRate(bool getCurrentRateOnly);

            std::shared_ptr<WDRRQueue> getCS7Queue() {
                return this->CS7Queue;
            }

            std::shared_ptr<WDRRQueue> getCS6Queue() {
                return this->CS6Queue;
            }

            std::shared_ptr<WDRRQueue> getEFQueue() {
                return this->EFQueue;
            }

        private:
            std::shared_ptr<WDRRQueue> CS7Queue;
            std::shared_ptr<WDRRQueue> CS6Queue;
            std::shared_ptr<WDRRQueue> EFQueue;
        };

        class WFQQueue {
        public:

            explicit WFQQueue(uint32_t availableBandwidth, size_t vqSize) :
                    AF4Weight(5),
                    AF3Weight(4),
                    AF2Weight(3),
                    AF1Weight(2),
                    BEWeight(1),
                    totalWeight(AF4Weight + AF3Weight + AF2Weight + AF1Weight + BEWeight),
                    queues(5),
                    lastSeq(0),
                    availableBandwidth(availableBandwidth) {
                this->queues[0] = std::make_shared<WDRRQueue>(0, availableBandwidth * AF4Weight / totalWeight, 5, "AF4", 3, vqSize);
                this->queues[1] = std::make_shared<WDRRQueue>(0, availableBandwidth * AF3Weight / totalWeight, 4, "AF3", 4, vqSize);
                this->queues[2] = std::make_shared<WDRRQueue>(0, availableBandwidth * AF2Weight / totalWeight, 3, "AF2", 5, vqSize);
                this->queues[3] = std::make_shared<WDRRQueue>(0, availableBandwidth * AF1Weight / totalWeight, 2, "AF1", 6, vqSize);
                this->queues[4] = std::make_shared<WDRRQueue>(0, availableBandwidth * BEWeight / totalWeight, 1, "BE", 7, vqSize);
                for (auto &queue: this->queues) {
                    queue->setCDTLimit(this->cdt);
                }
            }

            std::shared_ptr<VirtualQueueItem> scheduleNext();

            uint32_t calObjectRate(uint32_t availableBandwidth);

            std::shared_ptr<WDRRQueue> getAF4Queue() {
                return this->queues[0];
            }

            std::shared_ptr<WDRRQueue> getAF3Queue() {
                return this->queues[1];
            }

            std::shared_ptr<WDRRQueue> getAF2Queue() {
                return this->queues[2];
            }

            std::shared_ptr<WDRRQueue> getAF1Queue() {
                return this->queues[3];
            }

            std::shared_ptr<WDRRQueue> getBEQueue() {
                return this->queues[4];
            }

        private:
            double AF4Weight = 5;
            double AF3Weight = 4;
            double AF2Weight = 3;
            double AF1Weight = 2;
            double BEWeight = 1;
            double totalWeight = 15;
            std::vector<std::shared_ptr<WDRRQueue>> queues;
            uint32_t lastSeq;
            u_int32_t availableBandwidth;
            int cdt = 200;
            int hql;
        };

        class GlobalSP {
        public:
            explicit GlobalSP(uint32_t availableBandwidth, size_t vqSize = 20) :
                    delaySensitiveServiceSp(availableBandwidth, vqSize),
                    wfqQueue(availableBandwidth, vqSize),
                    availableBandwidth(availableBandwidth) {
                
                getScheduler().schedule(time::nanoseconds(1000000 * this->calObjectRateInterval),
                                        [this] { this->calObjectRate(false); });
            }

            std::shared_ptr<VirtualQueueItem> scheduleNext();

            bool appendInterest(const Interest &interest, const EndpointId &endpointId);

            void receiveInterest(const Interest &interest);

            void calObjectRate(bool getCurrentRateOnly);

            std::shared_ptr<WDRRQueue> getQueueByTos(int tosValue);

            void assignObjectRate(const Data &data);

        private:
            DelaySensitiveServiceSP delaySensitiveServiceSp;
            WFQQueue wfqQueue;
            int calObjectRateInterval = 100;
            uint32_t availableBandwidth;
            size_t interestBytes = 0;
        };
    }
}


#endif //NS_QUEUES_HPP
