// libs/jtl/pool/SharedUniquePool.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.jtl

namespace jag::shareduniquedebug {
    // 0x100cbe050
    void GetSubFunctionName(eastl::fixed_string<char, 128>& str1, const char* str2) {
        unsigned long arg2;

        fixed_string<char, 512> local_250(str2);
        long lVar2 = local_250.find("[T = ", 0);
        if (lVar2 != -1) {
            local_250.replace(0, lVar2 + 5, "");
            arg2 = local_250.find(',', 0);
            if (arg2 != 18446744073709551615) {
                str1.assign((char*)local_250.begin(), arg2);
                if (str1.compare(0, 5, "jag::") == 0) {
                    str1.replace(0, 5, "");
                }
                goto LAB_100cbe12d;
            }
        }
        str1 = str2;
    LAB_100cbe12d:
    }

    // 0x100cbe2d0
    void RegisterSharedUniquePoolSub(const char* str, std::function<void(SharedPoolInfo&)> const& callback,
                                     PoolPair& poolPair) {

        fixed_string<char, 128> local_d8;
        GetSubFunctionName(&local_d8, str);
        auto local_1b8 = eastl::make_pair<eastl::fixed_string<char, 128>&, std::function<void(SharedPoolInfo&)> const&>(
            local_d8, callback);
        poolPair.push_back(local_1b8);
        poolPair[44848] = (PoolPair)0;
    }

    // 0x100cbe430
    void RegisterUniquePool(const char* str, std::function<void(SharedPoolInfo&)> const& callback) {
        GetUniquePoolList();
        RegisterSharedUniquePoolSub(str, callback, (PoolPair*)&GetUniquePoolList()::uniquePools);
    }

    // 0x100cbe460
    void GetUniquePoolList() {
        if (GetUniquePoolList()::uniquePools == '\0') {
            if (___cxa_guard_acquire(&GetUniquePoolList()::uniquePools) != 0) {
                new ((PoolPair*)&GetUniquePoolList()::uniquePools) PoolPair();
                ___cxa_atexit(PTR__PoolPair_100ee63e0, &GetUniquePoolList()::uniquePools, 4294967296);
                ___cxa_guard_release(&GetUniquePoolList()::uniquePools);
            }
        }
    }

    // 0x100cbe4e0
    void RegisterSharedPool(const char* str, std::function<void(SharedPoolInfo&)> const& callback) {
        GetSharedPoolList();
        RegisterSharedUniquePoolSub(str, callback, (PoolPair*)&GetSharedPoolList()::sharedPools);
    }

    // 0x100cbe510
    void GetSharedPoolList() {
        if (GetSharedPoolList()::sharedPools == '\0') {
            if (___cxa_guard_acquire(&GetSharedPoolList()::sharedPools) != 0) {
                new ((PoolPair*)&GetSharedPoolList()::sharedPools) PoolPair();
                ___cxa_atexit(PTR__PoolPair_100ee63e0, &GetSharedPoolList()::sharedPools, 4294967296);
                ___cxa_guard_release(&GetSharedPoolList()::sharedPools);
            }
        }
    }

    // 0x100cbe590
    void GetSharedUniquePoolListSub(eastl::fixed_vector<SharedPoolInfo, 200ul>& sharedPoolInfos, PoolPair& poolPair) {
        pair<eastl::fixed_string<char, _128>, std::function<void_(SharedPoolInfo&)> _>* arg1;
        SharedPoolInfo* sharedPoolInfo;
        uint64_t uVar3;
        uint8_t auVar4[16];

        if (poolPair[44848] == (PoolPair)0) {
            poolPair[44848] = (PoolPair)1;
            arg1 = (pair<eastl::fixed_string<char, _128>, std::function<void_(SharedPoolInfo&)> _>*)
                       poolPair.HeapBeginPtr();
            auVar4 = poolPair.end();
            eastl::sort<eastl::pair<eastl::fixed_string<char, 128>, std::function<void(SharedPoolInfo&)>>*,
                        GetSharedUniquePoolListSub(*(eastl::fixed_vector<SharedPoolInfo, 200ul>&), *(PoolPair&))::__0>(
                arg1, auVar4._0_8_, auVar4._8_8_);
        }
        long lVar1 = poolPair.HeapBeginPtr();
        long lVar2 = poolPair.end();
        for (; lVar1 != lVar2; lVar1 = lVar1 + 224) {
            sharedPoolInfo = (SharedPoolInfo*)eastl::fixed_vector<SharedPoolInfo, 200ul>::push_back();
            std::function<void(SharedPoolInfo&)>::operator()((function<void(SharedPoolInfo&)>*)(lVar1 + 176),
                                                             sharedPoolInfo);
            uVar3 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            *(uint64_t*)(sharedPoolInfo + 64) = uVar3;
        }
    }

    // 0x100cbe660
    void GetSharedPoolList(eastl::fixed_vector<SharedPoolInfo, 200ul>& sharedPoolInfos) {
        GetSharedPoolList();
        GetSharedUniquePoolListSub(sharedPoolInfos, (PoolPair*)&GetSharedPoolList()::sharedPools);
    }

    // 0x100cbe690
    void GetUniquePoolList(eastl::fixed_vector<SharedPoolInfo, 200ul>& sharedPoolInfos) {
        GetUniquePoolList();
        GetSharedUniquePoolListSub(sharedPoolInfos, (PoolPair*)&GetUniquePoolList()::uniquePools);
    }

    // 0x100cbe6c0
    void ValidatePoolsAreEmpty(const PoolPair& poolPair) {
        Logger* logger;
        uint64_t uVar3;
        long local_78[9];

        long lVar1 = poolPair.HeapBeginPtr();
        long lVar2 = poolPair.end();
        if (lVar1 != lVar2) {
            do {
                std::function<void(SharedPoolInfo&)>::operator()((function<void(SharedPoolInfo&)>*)(lVar1 + 176),
                                                                 (SharedPoolInfo*)local_78);
                if (local_78[0] != 0) {
                    logger = logger::default_logger();
                    uVar3 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                    logger->Log(false, 3,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/"
                                "SharedUniquePool.cpp",
                                191, "Pool %s still has %zu entries at client exit", uVar3, local_78[0]);
                    LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/"
                                    "SharedUniquePool.cpp",
                                    192, nullptr);
                }
                lVar1 = lVar1 + 224;
            } while (lVar1 != lVar2);
        }
    }

    // 0x100cbe790
    void ValidatePoolsAreEmpty() {
        GetSharedPoolList();
        ValidatePoolsAreEmpty((PoolPair*)&GetSharedPoolList()::sharedPools);
        GetUniquePoolList();
        ValidatePoolsAreEmpty((PoolPair*)&GetUniquePoolList()::uniquePools);
    }

} // namespace jag::shareduniquedebug
