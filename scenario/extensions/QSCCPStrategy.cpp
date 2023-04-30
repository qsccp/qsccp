#include "QSCCPStrategy.h"
#include <ndn-cxx/lp/tags.hpp>
#include <boost/random/discrete_distribution.hpp>
#include <boost/random/uniform_real_distribution.hpp>
#include "common/global.hpp"

NFD_LOG_INIT(QSCCPStrategy);

namespace nfd
{
    namespace fw
    {
        //////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        //// QSCCPStrategy
        //////////////////////////////////////////////////////////////////////////////////////////////////////////////////

        const time::milliseconds QSCCPStrategy::RETX_SUPPRESSION_INITIAL(10);
        const time::milliseconds QSCCPStrategy::RETX_SUPPRESSION_MAX(250);

        QSCCPStrategy::QSCCPStrategy(nfd::Forwarder &forwarder, const ndn::Name &name)
            : Strategy(forwarder), ProcessNackTraits<QSCCPStrategy>(this)
        {
            this->setInstanceName(makeInstanceName(name, getStrategyName()));
        }

        void
        QSCCPStrategy::afterReceiveInterest(const nfd::FaceEndpoint &ingress, const ndn::Interest &interest,
                                            const std::shared_ptr<nfd::pit::Entry> &pitEntry)
        {
            RetxSuppressionResult suppression = m_retxSuppression.decidePerPitEntry(*pitEntry);
            if (suppression == RetxSuppressionResult::SUPPRESS)
            {
                NFD_LOG_DEBUG(interest << " from=" << ingress << " suppressed");
                return;
            }

            const fib::Entry &fibEntry = this->lookupFib(*pitEntry);
            const fib::NextHopList &nexthops = fibEntry.getNextHops();
            auto selected = nexthops.end();

            if (ingress.face.getScope() != ndn::nfd::FACE_SCOPE_NON_LOCAL)
            {
                selected = std::find_if(nexthops.begin(), nexthops.end(), [&](const auto &nexthop) {
                    return isNextHopEligible(ingress.face, interest, nexthop, pitEntry);
                });
            }
            else
            {
                auto selectedFaceId = rs.afterReceiveInterest(ingress, interest, pitEntry, fibEntry);
                if (selectedFaceId == ingress.face.getId() || selectedFaceId == 0)
                {
                    selected = nexthops.end();
                }
                else
                {
                    for (auto it = nexthops.begin(); it != nexthops.end(); it++)
                    {
                        if (it->getFace().getId() == selectedFaceId)
                        {
                            selected = it;
                            break;
                        }
                    }
                }
            }

            if (selected == nexthops.end())
            {
                lp::NackHeader nackHeader;
                nackHeader.setReason(lp::NackReason::NO_ROUTE);
                this->sendNack(pitEntry, ingress, nackHeader);
                this->rejectPendingInterest(pitEntry);
                return;
            }
            else
            {
                this->sendInterest(pitEntry, FaceEndpoint(selected->getFace(), 0), interest);
            }
        }

        void QSCCPStrategy::afterReceiveNack(const nfd::FaceEndpoint &ingress, const ndn::lp::Nack &nack,
                                             const std::shared_ptr<nfd::pit::Entry> &pitEntry)
        {
            rs.afterReceiveNack(ingress, nack, pitEntry);
            this->processNack(ingress.face, nack, pitEntry);
        }

        void QSCCPStrategy::beforeSatisfyInterest(const std::shared_ptr<nfd::pit::Entry> &pitEntry,
                                                  const nfd::FaceEndpoint &ingress, const ndn::Data &data)
        {
            if (ingress.face.getId() <= 256) {
                return;
            }
            rs.beforeSatisfyInterest(pitEntry, ingress, data);
            NFD_LOG_DEBUG("BeforeSatisfyInterest");
        }

        const ndn::Name &QSCCPStrategy::getStrategyName()
        {
            static Name strategyName("/localhost/nfd/strategy/QSCCP/%FD%01");
            return strategyName;
        }

        void QSCCPStrategy::afterContentStoreHit(const shared_ptr<pit::Entry> &pitEntry,
                                                 const FaceEndpoint &ingress, const Data &data)
        {
            NFD_LOG_DEBUG("After Content Store Hit: " << pitEntry->getName().toUri());
        }

        void QSCCPStrategy::afterReceiveData(const shared_ptr<pit::Entry> &pitEntry, const FaceEndpoint &ingress,
                                             const Data &data)
        {

            if (ingress.face.getScope() != ndn::nfd::FACE_SCOPE_NON_LOCAL)
            {
                this->sendDataToAll(pitEntry, ingress, data);
                return;
            }

            rs.beforeSatisfyInterest(pitEntry, ingress, data);
            //
            // this->beforeSatisfyInterest(pitEntry, ingress, data);

            // Override sendDataToAll
            std::set<Face *> pendingDownstreams;
            auto now = time::steady_clock::now();

            // remember pending downstreams
            for (const pit::InRecord &inRecord : pitEntry->getInRecords())
            {
                if (inRecord.getExpiry() > now)
                {
                    if (inRecord.getFace().getId() == ingress.face.getId() &&
                        inRecord.getFace().getLinkType() != ndn::nfd::LINK_TYPE_AD_HOC)
                    {
                        continue;
                    }
                    pendingDownstreams.emplace(&inRecord.getFace());
                }
            }

            // int downStreamNum = 0;
            for (const auto &pendingDownstream : pendingDownstreams)
            {
                FaceEndpoint egress(*pendingDownstream, 0);
                if (ingress.face.getId() > 256) {
                    this->rs.beforeSendData(pitEntry, egress, data);
                }
                this->sendData(pitEntry, data, egress);
                // downStreamNum++;
            }
            // NFD_LOG_DEBUG("DownStreamNum: " << downStreamNum);
        }

        //////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        //// RateCollection
        //////////////////////////////////////////////////////////////////////////////////////////////////////////////////

        void RateCollection::doPeriodicCleaning(bool needErase, uint32_t defaultValue) {
            // std::cout << "\n\n===================== doPeriodicCleaning ==========================" << std::endl; 
            bool hasClean = false;
            for(auto it=this->rates.begin(); it != this->rates.end();) {
                if (it->second->recvCount == 0) {
                    if (needErase) {
                        this->totalRate -= it->second->rateValue;
                        // std::cout << "hasClean: " << it->second->recvCount << ", id: " << it->second->id << std::endl;
                        this->rates.erase(it++); //here is the key
                    } else {
                        this->addOrUpdateRate(it->second->id, defaultValue);
                    }
                    
                    hasClean = true;
                } else {
                    // std::cout << "recvCount: " << it->second->recvCount << ", id: " << it->second->id << std::endl;
                    it->second->recvCount = 0;
                    it++;
                }
            }

            if (needErase && hasClean) {
                this->items.resize(this->rates.size());
                int idx = 0;
                for (auto it=this->rates.begin(); it != this->rates.end(); it++, idx++) {
                    this->items[idx] = it->second;
                }
            }
        }

        bool RateCollection::addOrUpdateRate(face::FaceId id, uint32_t rate)
        {
            bool needUpdate = false; 
            bool newFace = false;
            // NFD_LOG_DEBUG("addOrUpdateRate: " << this->name << ", " << id << ", " << rate);
            if (this->rates.count(id) == 0)
            {
                needUpdate = true;
                this->rates[id] = std::make_shared<RateItem>(rate, id);
                this->rates[id]->recvCount = 1;
                this->items.push_back(this->rates[id]);
                this->totalRate += rate;
                newFace = true;
            }
            else
            {
                if (rate != this->rates[id]->rateValue)
                {
                    needUpdate = true;
                }
                this->rates[id]->recvCount += 1;
                this->totalRate = this->totalRate - this->rates[id]->rateValue + rate;
                this->rates[id]->rateValue = rate;
            }

            if (needUpdate)
            {
                for (size_t i = 0; i < this->items.size(); i++)
                {
                    if (this->totalRate < 1) {
                        this->items[i]->ratio = 1 / this->items.size();
                    } else {
                        this->items[i]->ratio = this->items[i]->rateValue * 1.0 / this->totalRate;
                    }
                }
            }
            return newFace;
        }

        face::FaceId RateCollection::selectNextFace(uint64_t dataSize, face::FaceId exceptId)
        {
            if (this->nextForwardFace >= this->items.size())
            {
                for (auto &item : this->items)
                {
                    if (item->balance < 100000) {
                        item->balance += (item->ratio * this->MTU_QUANTA);
                        // std::cout << "banlance+: " << item->balance << ", ratio: " << item->ratio << std::endl;
                    } else {
                        // std::cout << "banlance-: " << item->balance << ", ratio: " << item->ratio << std::endl;                        
                    }
                    // NFD_LOG_DEBUG("Begin select next face: " << item->balance << ", " << item->ratio);
                }
                this->nextForwardFace = 0;
            }

            face::FaceId selectedId = 0;
            size_t exceptCount = 0;
            for (; this->nextForwardFace < this->items.size(); this->nextForwardFace++)
            {
                if (this->items[this->nextForwardFace]->balance > dataSize && 
                    this->items[this->nextForwardFace]->id != exceptId)
                {
                    selectedId = this->items[this->nextForwardFace]->id;
                    this->items[this->nextForwardFace]->balance -= dataSize;
                    break;
                } else if (this->items[this->nextForwardFace]->id == exceptId || this->items[this->nextForwardFace]->ratio < 10e-6) {
                    exceptCount++;
                }
            }

            if (selectedId == 0 && (this->items.size() - exceptCount) > 0)
            {
                // std::cout << "select: " << this->items.size() << ", count: " << exceptCount << std::endl;
                return selectNextFace(dataSize, exceptId);
            }
            else
            {
                return selectedId;
            }
        }

        face::FaceId RateCollection::selectFaceByRatio(const FaceEndpoint &ingress, const fib::Entry &fibEntry, const ndn::Interest &interest)
        {
            if (this->items.empty())
            {
                const fib::NextHopList &nexthops = fibEntry.getNextHops();
                for (auto nexthop : nexthops)
                {
                    this->addOrUpdateRate(nexthop.getFace().getId(), 2000000);
                }

                if (this->items.empty())
                {
                    return 0;
                }
            }

            auto inId = ingress.face.getId();

            if (this->items.size() == 1)
            {
                // NFD_LOG_DEBUG("ONE ratio => " << ", " << this->items[0]->rateValue);
                if (this->items[0]->id == inId) {
                    std::cout << "1" << std::endl;
                    return 0;
                }
                return this->items[0]->id;
            }
            else
            {
                // auto res = ingress.face.getId();

                uint64_t dataSize = 9000;
                auto dsz = interest.getDsz();
                if (dsz)
                {
                    dataSize = *dsz;
                }
                // std::cout << "nexthop num: " << fibEntry.getNextHops().size() << ", item size: " << this->items.size() << std::endl;
                return this->selectNextFace(dataSize, inId);
            }
        }

        double RateCollection::getRatioByFace(face::FaceId id) {
            if (totalRate == 0 && this->getFaceNum() > 0) {
                return 1.0 / this->getFaceNum();
            }
            else if (rates.count(id) == 0)
            {
                return 0.01;
            }
            else
            {
                return this->rates[id]->rateValue * 1.0 / this->totalRate;
            }
        }

        void RateCollection::calSplitRateByRate() {
            if (this->totalAvaliableRate == 0 || this->items.size() == 0) {
                return;
            }
            if (this->items.size() == 1) {
                this->items[0]->allocateRate = this->items[0]->rateValue < this->totalAvaliableRate ?
                                this->items[0]->rateValue : this->totalAvaliableRate;
                return;
            } 
            std::vector<shared_ptr<RateItem>> sortedItems;
            sortedItems.assign(this->items.begin(), this->items.end());
            std::sort(sortedItems.begin(), sortedItems.end(), [](shared_ptr<RateItem>& ri1, shared_ptr<RateItem>& ri2) {
                return ri1->rateValue < ri2->rateValue;
            });

            uint32_t remainRate = this->totalAvaliableRate;
            int remainCount = sortedItems.size();
            // std::cout << "\n\n=========== begin ===========" << std::endl;
            for (auto &rateItem : sortedItems) {
                int thisTurn = remainRate / remainCount;
                if (thisTurn <= rateItem->rateValue) {
                    remainRate -= thisTurn;
                    rateItem->allocateRate = thisTurn;
                    // std::cout << "assign1: " << thisTurn << ", rateValue: " << rateItem->rateValue << ", totalReaminRate: " << this->totalAvaliableRate << std::endl;
                } else {
                    remainRate -= rateItem->rateValue;
                    rateItem->allocateRate = rateItem->rateValue;
                    // std::cout << "assign2: " << rateItem->rateValue << ", rateValue: " << rateItem->rateValue << std::endl;
                }
                remainCount--;
            }
            // std::cout << "=========== end ===========\n\n" << std::endl;
        }

        uint32_t RateCollection::getAllocateRate(face::FaceId id) {
            if (rates.count(id) == 0)
            {
                return 0;
            } else {
                return this->rates[id]->allocateRate;
            }
        }

        //////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        //// RateStore
        //////////////////////////////////////////////////////////////////////////////////////////////////////////////////

        RateStore::RateStore() {
            getScheduler().schedule(time::milliseconds(100), std::bind(&RateStore::periodicCleaning, this));
        }

        void
        RateStore::periodicCleaning() {
            getScheduler().schedule(time::milliseconds(100), std::bind(&RateStore::periodicCleaning, this));
            if (turn % 1 == 0) {
                for (auto it = this->ART.begin(); it != this->ART.end(); it++) {
                    it->second->doPeriodicCleaning(true);
                }
                for (auto it = this->RRT.begin(); it != this->RRT.end(); it++) {
                    it->second->doPeriodicCleaning(false, 2000000);
                }
            }
            // for (auto it = this->ART.begin(); it != this->ART.end(); it++) {
            //     it->second->calSplitRateByRate();
            // }
            turn++;
        }

        face::FaceId RateStore::afterReceiveInterest(const nfd::FaceEndpoint &ingress, const ndn::Interest &interest,
                                                     const std::shared_ptr<nfd::pit::Entry> &pitEntry,
                                                     const fib::Entry &fibEntry)
        {
            auto flowKey = interest.getName().getPrefix(1).toUri();

            auto downstreamRate = interest.getDownstreamRate();
            if (downstreamRate)
            {
                if (this->ART.count(flowKey) == 0)
                {
                    this->ART[flowKey] = make_shared<RateCollection>();
                    this->ART[flowKey]->setName("ART");
                }
                auto &rc = this->ART[flowKey];
                if (rc->addOrUpdateRate(ingress.face.getId(), *downstreamRate)) {
                    rc->calSplitRateByRate();
                }
            }

            if (this->RRT.count(flowKey) == 0)
            {
                this->RRT[flowKey] = make_shared<RateCollection>();
                this->RRT[flowKey]->setName("RRT");
            }

            auto selectedFaceId = this->RRT[flowKey]->selectFaceByRatio(ingress, fibEntry, interest);

            if (selectedFaceId > 0) {
                // DR(/p, j) = min(OR(/p, j), RR(/p, j) / sum(RR(/p)) * sum(AR(/p)))
                // 这边只计算了 RR(/p, j) / sum(RR(/p)) * sum(AR(/p)) ，和 OR 的对比见 ns3/src/ndnSIM/NFD/damon/face/queues.cpp
                auto newDR = this->RRT[flowKey]->getRatioByFace(selectedFaceId) * this->ART[flowKey]->getMergeRate();
                interest.setDownstreamRate(newDR);
            }
            return selectedFaceId;
        }

        void RateStore::afterReceiveNack(const nfd::FaceEndpoint &ingress, const ndn::lp::Nack &nack,
                                         const std::shared_ptr<nfd::pit::Entry> &pitEntry)
        {
        }

        void RateStore::beforeSatisfyInterest(const std::shared_ptr<nfd::pit::Entry> &pitEntry,
                                              const nfd::FaceEndpoint &ingress, const ndn::Data &data)
        {
            auto targetRate = data.getTargetRate();
            auto flowKey = data.getName().getPrefix(1).toUri();
            if (this->RRT.count(flowKey) == 0)
            {
                this->RRT[flowKey] = make_shared<RateCollection>();
                this->RRT[flowKey]->setName("RRT");
            }
            if (targetRate)
            {
                // 保存 Data 中携带的 Target Rate
                this->RRT[flowKey]->addOrUpdateRate(ingress.face.getId(), *targetRate);
            }
            else
            {
                this->RRT[flowKey]->addOrUpdateRate(ingress.face.getId(), QSCCPStrategy::getMaxTR());
            }
        }

        void RateStore::beforeSendData(const shared_ptr<pit::Entry> &pitEntry, const FaceEndpoint &egress,
                                       const Data &data)
        {
            auto flowKey = data.getName().getPrefix(1).toUri();

            auto mergeRate = this->RRT[flowKey]->getMergeRate();
            if (this->ART.count(flowKey) == 0)
            {
                this->ART[flowKey] = make_shared<RateCollection>();
                this->ART[flowKey]->setName("ART");
            }

            auto rc = this->ART[flowKey];
            rc->updateTotalAvaliableRate(mergeRate);
            // rc->calSplitRateByRate();

            if (rc->getFaceNum() <= 1)
            {
                data.setTargetRate(mergeRate);
            }
            else
            {
                data.setTargetRate(static_cast<uint64_t>(rc->getRatioByFace(egress.face.getId()) * mergeRate));
            }
        }
    }
}