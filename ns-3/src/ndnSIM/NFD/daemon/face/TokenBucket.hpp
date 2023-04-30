//
// Created by gdcni21 on 3/25/22.
//

#ifndef NS_TOKENBUCKET_H
#define NS_TOKENBUCKET_H

#include <memory>
#include <string>

namespace nfd {
    namespace face {
        class TokenBucket {
        public:
            explicit TokenBucket(uint64_t rateLimit, uint64_t bucketSize, const std::string& name);

            void start();

            /**
             * 周期性增加token
             **/
            void generateToken();

            /**
             * 尝试消费n个token
             * @param tokenNum
             * @return
             */
            bool use(uint64_t tokenNum);

        public:
            double eachStep; // 每个周期增加的令牌
            double currentTokenSize; // 当前令牌数
            uint64_t rateLimit;     // 令牌生成速率
            uint64_t bucketSize;    // 令牌桶容量
            std::string name;
            bool isStart; // 标识是否启动
        };
    }
}
#endif //NS_TOKENBUCKET_H
