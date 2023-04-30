#include "TokenBucket.hpp"

#include "common/global.hpp"
#include "common/logger.hpp"
#include <functional>

namespace nfd {
    namespace face {

        NFD_LOG_INIT(QSCCPTokenBucket);

        TokenBucket::TokenBucket(uint64_t rateLimit, uint64_t bucketSize, const std::string& name): rateLimit(rateLimit), bucketSize(bucketSize), name(name) {
            this->eachStep = this->rateLimit / 250.0;
            this->currentTokenSize = 0;
            this->isStart = false;
            // NFD_LOG_DEBUG("Create tokenBucket: " << name << ", eachStep: " << this->eachStep << ", rateLimit: " << this->rateLimit);
        }

        void TokenBucket::start() {
            if (this->isStart) {
                return;
            }
            // 每 4ms 增加一次令牌
            getScheduler().schedule(time::milliseconds(4), std::bind(&TokenBucket::generateToken, this));
        }

        void TokenBucket::generateToken() {
            // NFD_LOG_DEBUG(this->name << "=> do generateToken => " << this->currentTokenSize);
            if (this->currentTokenSize + this->eachStep > this->bucketSize) {
                this->currentTokenSize = this->bucketSize;
            } else {
                this->currentTokenSize += this->eachStep;
            }
            getScheduler().schedule(time::milliseconds(4), std::bind(&TokenBucket::generateToken, this));
        }

        bool TokenBucket::use(uint64_t tokenNum) {
            if(this->currentTokenSize > tokenNum) {
                this->currentTokenSize -= tokenNum;
                // NFD_LOG_DEBUG(this->name << "=> use success => " << this->currentTokenSize);
                return true;
            } else {
                // NFD_LOG_DEBUG(this->name << "=> use failed => " << this->currentTokenSize);
                return false;
            }
        }
    }
}