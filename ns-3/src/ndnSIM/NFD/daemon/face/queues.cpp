#include "queues.hpp"
#include "common/global.hpp"
#include <ndn-cxx/encoding/estimator.hpp>
#include <iostream>

namespace nfd {
    namespace face {

        NFD_LOG_INIT(QSCCPQueue);
        bool VirtualQueue::push(int seq, const std::shared_ptr<const Interest>& interest, const EndpointId &endpointId,
                                uint64_t dataSize, bool needInsert) {
            this->recvBits += dataSize;
            if (!needInsert) {
                return false;
            }

            if (this->currentSize >= this->size) {
                
                return false;
            }
            this->lastSeq = seq;
            VirtualQueueItem vqi;
            vqi.seq = seq;
            vqi.item = interest;
            vqi.endpointId = endpointId;
            vqi.queue = shared_from_this();

            vqi.dataSize = dataSize;
            this->innerQueue.push_back(vqi);
            this->currentSize++;

            auto serviceClass = interest->getServiceClass();
            if (serviceClass && *serviceClass > 7) {
                this->penaltyFactor = 0.5;
            }
            return true;
        }

        WDRRQueue::WDRRQueue(uint32_t rateLimit, uint32_t availableBandwidth, double weight, const std::string& name,
                            uint32_t tos, size_t vqSize):
                availableBandwidth(availableBandwidth),
                weight(weight), name(name), tos(tos), vqSize(vqSize) {
            
            if (rateLimit > 0) {
                this->needRateLimit = true;
                this->tokenBucket = std::make_shared<TokenBucket>(rateLimit, 20 * 1000 * 8, name);
                this->tokenBucket->start();
            } else {
                this->needRateLimit = false;
            }
        }

        void WDRRQueue::updateAvailableBandwidth(uint32_t C) {
            this->availableBandwidth = C;
            
        }

        bool WDRRQueue::appendInterest(const Interest &interest, const EndpointId &endpointId) {
            std::string key = interest.getName().getPrefix(1).toUri();
            if (this->virtualQueues.count(key) == 0) {
                
                this->virtualQueues[key] = std::make_shared<VirtualQueue>(1, this->vqSize);
                this->virtualQueues[key]->tos = this->tos;
                this->flows.push_back(key);
                this->totalWeight += 1;

                for (auto &item: this->virtualQueues) {
                    item.second->objectRate = this->availableBandwidth * item.second->weight / this->totalWeight;
                    item.second->objectRate = item.second->objectRate * item.second->penaltyFactor;
                }
            }

            bool needInsert = true;
            if (this->cdt > 0 && this->currentPacketNum >= this->cdt) {
                
                needInsert = false;
            }

            uint64_t dataSize = 9000;
            auto dsz = interest.getDsz();
            if (dsz) {
                dataSize = *dsz;
            }

            this->recvBits += dataSize;

            auto success = this->virtualQueues[key]->push(0, interest.shared_from_this(), endpointId, dataSize, needInsert);
            if(success) {
                this->currentPacketNum++;
            }
            return success;

        }

        std::shared_ptr<VirtualQueueItem> WDRRQueue::scheduleNext() {
            if (this->nextScheduleQueue >= this->flows.size()) {
                for (auto &key: this->flows) {
                    if(this->virtualQueues.count(key) == 0) {
                        continue;
                    }
                    auto &item = this->virtualQueues[key];
                    item->balance += item->weight * item->penaltyFactor * this->MTU_QUANTA;
                    
                }
                this->nextScheduleQueue = 0;
            }

            std::shared_ptr<VirtualQueue> selectedVQ = nullptr;
            for (; this->nextScheduleQueue < this->flows.size(); this->nextScheduleQueue++) {
                auto &item = this->virtualQueues[this->flows[this->nextScheduleQueue]];
                if (item->empty()) {
                    item->balance = 0;
                    continue;
                }
                if (item->front().dataSize < item->balance) {
                    selectedVQ = item;
                    break;
                }
                if (item->len() > 10) {
                    
                }
            }

            if (selectedVQ == nullptr && this->currentPacketNum > 0) {
                return scheduleNext();
            }

            if (selectedVQ != nullptr) {
                if (needRateLimit && !this->tokenBucket->use(selectedVQ->front().dataSize)) {
                    return nullptr;
                }
                auto item = std::make_shared<VirtualQueueItem>(selectedVQ->front());
                selectedVQ->balance -= item->dataSize;
                selectedVQ->pop();
                if (selectedVQ->penaltyFactor < 0.9) {
                    item->item->setServiceClass(selectedVQ->tos + 8);
                }
                this->sendBits += item->dataSize;
                this->currentPacketNum--;
                return item;
            }
            return nullptr;
        }

        uint32_t WDRRQueue::calObjectRate(bool getCurrentRateOnly) {
            uint32_t currentRate = this->recvBits * 1000 / this->calObjectRateInterval;
            uint32_t currentSendRate = this->sendBits * 1000 / this->calObjectRateInterval;
            if (getCurrentRateOnly) {
                return currentRate;
            }

            bool hasCleanFlow = false;
            for(auto it=this->virtualQueues.begin(); it != this->virtualQueues.end();) {
                if (it->second->recvBits == 0 && it->second->empty()) {
                    this->totalWeight -= it->second->weight;
                    this->virtualQueues.erase(it++); //here is the key
                    hasCleanFlow = true;
                } else {
                    it++;
                }
            }

            if (hasCleanFlow) {
                this->flows.resize(this->virtualQueues.size());
                int idx = 0;
                for(auto it=this->virtualQueues.begin(); it != this->virtualQueues.end(); it++, idx++) {
                    this->flows[idx] = it->first;
                }
            }

            double totalHightSpeedFlowWeight = 0;
            int hightSppedFlowNum = 0;

            uint32_t consumeRate = 0; 

            double totalWeightThisTerm = 0;
            for (auto &item : this->virtualQueues) {
                totalWeightThisTerm += (item.second->weight * item.second->penaltyFactor);
            }
            
            for (auto &item: this->virtualQueues) {
                item.second->objectRate = this->availableBandwidth * item.second->weight
                                            * item.second->penaltyFactor / totalWeightThisTerm;
                item.second->currentFlowRate = item.second->recvBits * 1000 / this->calObjectRateInterval;

                item.second->currentRatio = item.second->currentFlowRate * 1.0 / item.second->objectRate;
                
                auto targetHighFlowRate = (item.second->objectRate - 500000) * 1.0 / item.second->objectRate;
                if (item.second->currentRatio > targetHighFlowRate) {
                    
                    if (item.second->penaltyFactor > 0.99) {
                        hightSppedFlowNum++;
                        totalHightSpeedFlowWeight += item.second->weight;
                    }
                    consumeRate += item.second->objectRate;
                } else {
                    consumeRate += item.second->currentFlowRate;
                }

                NFD_LOG_DEBUG(this->name << " => currentRate: " << item.second->currentFlowRate << ", consumerRate: " << consumeRate << ", objectRate: " << item.second->objectRate <<
                    ", availableBandwidth" << this->availableBandwidth << ", weight: " << item.second->weight << ", totalWeight: " <<
                    this->totalWeight << ", currentSendRate: " << currentSendRate);
                
                item.second->recvBits = 0;
            }

            
            
            if (consumeRate < this->availableBandwidth && hightSppedFlowNum > 0) {
                
                auto remainRate = this->availableBandwidth - consumeRate;
                for (auto &item: this->virtualQueues) {
                    if (item.second->penaltyFactor > 0.99 && item.second->currentRatio > 0.8) {
                        item.second->objectRate += (remainRate * item.second->weight / totalHightSpeedFlowWeight);
                    }
                    NFD_LOG_DEBUG(this->name << " => objectRate: " << item.second->objectRate << ", remainRate: " << 
                    remainRate << ", item.weight: " << item.second->weight << ", totalWeight: " << totalHightSpeedFlowWeight);
                }
            }
            
            for (auto &item : this->virtualQueues) {
                
                if (item.second->currentFlowRate * 1.0 / item.second->objectRate > item.second->gredyRatio) {
                    if (item.second->gredyTimes < item.second->gredyThreshold) {
                        item.second->gredyTimes++;
                    }
                    if (item.second->gredyTimes == item.second->gredyThreshold) {
                        item.second->penaltyFactor = 0.5;
                        item.second->size = 20;
                    }
                } else {
                    if (item.second->gredyTimes > 0) {
                        item.second->gredyTimes--;
                    }
                }
            }
            for(auto &item : this->virtualQueues) {
                if (item.second->penaltyFactor > 0.99) {
                    auto rate = this->calDiscountFactor(item.second->currentSize * 1.0 / item.second->size);
                    item.second->objectRate *= rate;
                }
            }

            this->sendBits = 0;
            this->recvBits = 0;
            return currentRate;
        }

        uint32_t WDRRQueue::scheduleOnePacketForWFQ(uint32_t totalLastSeq) {
            if (this->cachePacketForWFQ != nullptr) {
                return this->cachePacketForWFQ->seq;
            }
            if (this->currentPacketNum == 0) {
                return UINT32_MAX;
            }

            this->cachePacketForWFQ = this->scheduleNext();

            if (this->cachePacketForWFQ == nullptr) {
                
                return UINT32_MAX;
            }

            if (this->lastSeq == -1) {
                this->lastSeq = totalLastSeq;
            }

            this->cachePacketForWFQ->seq = this->lastSeq + 1.0 * this->cachePacketForWFQ->dataSize / this->weight;

            if (this->currentPacketNum == 0) {
                this->lastSeq = -1;
            } else {
                this->lastSeq = this->cachePacketForWFQ->seq;
            }
            
            return this->cachePacketForWFQ->seq;
        }

        std::shared_ptr<VirtualQueueItem> DelaySensitiveServiceSP::scheduleNext() {
            auto res = this->CS7Queue->scheduleNext();
            if (res == nullptr) {
                res = this->CS6Queue->scheduleNext();
            }
            if (res == nullptr) {
                res = this->EFQueue->scheduleNext();
                
            }
            return res;
        }

        uint32_t DelaySensitiveServiceSP::calObjectRate(bool getCurrentRateOnly) {
            uint32_t res = this->CS7Queue->calObjectRate(getCurrentRateOnly);
            res += this->CS6Queue->calObjectRate(getCurrentRateOnly);
            res += this->EFQueue->calObjectRate(getCurrentRateOnly);
            return res;
        }

        std::shared_ptr<VirtualQueueItem> WFQQueue::scheduleNext() {
            std::shared_ptr<WDRRQueue> selectedQueue = nullptr;
            uint32_t currentMinSeq = UINT32_MAX;
            for (auto &queue: this->queues) {
                uint32_t seq = queue->scheduleOnePacketForWFQ(this->lastSeq);
                if (seq < currentMinSeq) {
                    currentMinSeq = seq;
                    selectedQueue = queue;
                }
            }

            if (selectedQueue != nullptr) {
                this->lastSeq = currentMinSeq;
                auto selectPacket = selectedQueue->frontForWFQ(this->lastSeq);
                selectedQueue->popForWFQ();
                
                return selectPacket;
            }

            return nullptr;
        }

        uint32_t WFQQueue::calObjectRate(uint32_t availableBandwidth) {
            int totalRate = 0;
            double totalHightSpeedFlowWeight = 0;
            int hightSppedFlowNum = 0;
            double totalHasFlowQueueWeight = 0;
            int hasFlowQueueNum = 0;
            for(auto &queue : this->queues) {
                auto recvRate = queue->calObjectRate(true);
                queue->originAvaliableBandwidth = (queue->getWeight() / totalWeight) * availableBandwidth;
                auto remainRate = queue->getRemainBandwidthRate(queue->originAvaliableBandwidth);
                if(remainRate < 0.2) {
                    hightSppedFlowNum++;
                    totalHightSpeedFlowWeight += queue->getWeight();
                    totalRate += queue->originAvaliableBandwidth; 
                } else if (remainRate < 0.95) {
                    hasFlowQueueNum++;
                    totalHasFlowQueueWeight += queue->getWeight();
                    totalRate += recvRate;
                } else {
                    totalRate += recvRate;
                }
            }

            this->availableBandwidth = availableBandwidth;

            int remain = this->availableBandwidth - totalRate;

            if (hightSppedFlowNum > 0) {
                for(auto &queue : this->queues) {
                    if(queue->getRemainBandwidthRate(queue->originAvaliableBandwidth) < 0.2) {
                        queue->updateAvailableBandwidth(
                            queue->getWeight() * remain * 1.0 / totalHightSpeedFlowWeight + 
                            queue->originAvaliableBandwidth);
                    } else {
                        queue->updateAvailableBandwidth(queue->originAvaliableBandwidth);
                    }
                }
            } else {
                for(auto &queue : this->queues) {
                    if(queue->getRemainBandwidthRate(queue->originAvaliableBandwidth) < 0.95) {
                        queue->updateAvailableBandwidth(
                            queue->getWeight() * remain * 1.0 / totalHasFlowQueueWeight + 
                            queue->originAvaliableBandwidth);    
                    } else {
                        queue->updateAvailableBandwidth(queue->originAvaliableBandwidth);
                    }
                }
            }

            uint32_t currentTotalRate = 0;
            
            for(auto &queue : this->queues) {
                currentTotalRate += queue->calObjectRate(false);
            }

            return currentTotalRate;
        }

        std::shared_ptr<VirtualQueueItem> GlobalSP::scheduleNext() {
            std::shared_ptr<VirtualQueueItem> selectedPacket = this->delaySensitiveServiceSp.scheduleNext();
            if (selectedPacket == nullptr) {
                selectedPacket = wfqQueue.scheduleNext();
            }
            if (selectedPacket != nullptr) {
                selectedPacket->waitNsTime = selectedPacket->dataSize * 1000000000.0 / this->availableBandwidth + 1;
                // 计算 DR => DR'(/p, j) = min(OR(/p, j), RR(/p, j) / sum(RR(/p)) * sum(AR(/p)))
                auto currentObjectRate = selectedPacket->queue->objectRate;
                auto downstreamRate = selectedPacket->item->getDownstreamRate();
                if (downstreamRate) {
                    if (*downstreamRate > currentObjectRate) {
                        selectedPacket->item->setDownstreamRate(currentObjectRate);
                    }
                } else {
                    selectedPacket->item->setDownstreamRate(currentObjectRate);
                }
            }
            return selectedPacket;
        }

        std::shared_ptr<WDRRQueue> GlobalSP::getQueueByTos(int tosValue) {
            switch (tosValue) {
                case 0:
                    return this->delaySensitiveServiceSp.getCS7Queue();
                case 1:
                    return this->delaySensitiveServiceSp.getCS6Queue();
                case 2:
                    return this->delaySensitiveServiceSp.getEFQueue();
                case 3:
                    return this->wfqQueue.getAF4Queue();
                case 4:
                    return this->wfqQueue.getAF3Queue();
                case 5:
                    return this->wfqQueue.getAF2Queue();
                case 6:
                    return this->wfqQueue.getAF1Queue();
                case 7:
                default:
                    return this->wfqQueue.getBEQueue();
            }
        }

        bool GlobalSP::appendInterest(const Interest &interest, const EndpointId &endpointId) {
            int serviceClass = 7;
            if (interest.getServiceClass()) {
                serviceClass = (*interest.getServiceClass()) % 8;
            }
            return this->getQueueByTos(serviceClass)->appendInterest(interest, endpointId);
        }

        void GlobalSP::receiveInterest(const Interest &interest) {
            ndn::encoding::EncodingEstimator estimator;
            auto size = interest.wireEncode(estimator) + 9;
            this->interestBytes += size;
        }
        

        void GlobalSP::calObjectRate(bool getCurrentRateOnly) {
            getScheduler().schedule(time::nanoseconds(1000000 * this->calObjectRateInterval),
                                        [this] { this->calObjectRate(false); });
            uint32_t remain = this->availableBandwidth;
            remain -= this->interestBytes * 8000 / this->calObjectRateInterval;
            this->interestBytes = 0;
            remain -= this->delaySensitiveServiceSp.calObjectRate(false);
            
            
            this->wfqQueue.calObjectRate(remain);
        }

        void GlobalSP::assignObjectRate(const Data &data) {
            std::string key = data.getName().getPrefix(1).toUri();
            int serviceClass = 7;
            if (data.getServiceClass()) {
                serviceClass = (*data.getServiceClass()) % 8;
            }
            auto objectRate = this->getQueueByTos(serviceClass)->getObjectRateByFlowKey(key);
            auto targetRate = data.getTargetRate();
            if (!targetRate || *targetRate > objectRate) {
                data.setTargetRate(objectRate);
            }
        }

    }
}
