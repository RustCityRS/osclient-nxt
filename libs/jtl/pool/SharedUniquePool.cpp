// libs/jtl/pool/SharedUniquePool.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.jtl

namespace jag::shareduniquedebug {
    // 0x100cbe050, 304 bytes, placed by debug map only (low confidence)
    // GetSubFunctionName(eastl::fixed_string<char, 128, true, eastl::allocator>&, char const*)
    void GetSubFunctionName(fixed_string* param_1, char* param_2) {
        int iVar1;
        long lVar2;
        ulong uVar3;
        char* pcVar4;
        fixed_string<char, 512, true, eastl::allocator> local_250[552];
        undefined8 local_28;

        local_28 = *(undefined8*)PTR____stack_chk_guard_100ee9d98;
        eastl::fixed_string<char, 512, true, eastl::allocator>::fixed_string(local_250, param_2);
        lVar2 = local_250->find("[T = ", 0);
        if (lVar2 != -1) {
            local_250->replace(0, lVar2 + 5, "");
            uVar3 = local_250->find(', ', 0);
            if (uVar3 != 18446744073709551615) {
                pcVar4 = (char*)eastl::basic_string<
                    char, eastl::fixed_vector_allocator<1ul, 512ul, 1ul, 0ul, true, eastl::allocator>>::begin();
                param_1->assign(pcVar4, uVar3);
                iVar1 = param_1->compare(0, 5, "jag::");
                if (iVar1 == 0) {
                    param_1->replace(0, 5, "");
                }
                goto LAB_100cbe12d;
            }
        }
        eastl::fixed_string<char, 16, true, eastl::allocator>::operator=(
            (fixed_string<char, 16, true, eastl::allocator>*)param_1, param_2);
    LAB_100cbe12d:
        /* WARNING: Subroutine does not return */
        local_250->~fixed_string();
    }

    // 0x100cbe2d0, 224 bytes, placed by debug map only (low confidence)
    // RegisterSharedUniquePoolSub(char const*, std::function<void (SharedPoolInfo&)> const&, PoolPair&)
    /* RegisterSharedUniquePoolSub(char const*, std::function<void
   (SharedPoolInfo&)> const&, PoolPair&) */

    void RegisterSharedUniquePoolSub(char* param_1, function* param_2, PoolPair* param_3) {
        eastl local_1b8[224];
        fixed_string<char, 128, true, eastl::allocator> local_d8[168];
        undefined8 local_30;

        local_30 = *(undefined8*)PTR____stack_chk_guard_100ee9d98;
        eastl::fixed_string<char, 128, true, eastl::allocator>::fixed_string(local_d8);
        GetSubFunctionName((fixed_string*)local_d8, param_1);
        eastl::make_pair<eastl::fixed_string<char, 128, true, eastl::allocator>&,
                         std::function<void(SharedPoolInfo&)> const&>(local_1b8, (fixed_string*)local_d8, param_2);
        eastl::fixed_vector<
            eastl::pair<eastl::fixed_string<char, 128, true, eastl::allocator>, std::function<void(SharedPoolInfo&)>>,
            200ul, true, eastl::allocator>::
            push_back((fixed_vector<eastl::pair<eastl::fixed_string<char, 128, true, eastl::allocator>,
                                                std::function<void(SharedPoolInfo&)>>,
                                    200ul, true, eastl::allocator>*)param_3,
                      (pair*)local_1b8);
        eastl::pair<eastl::fixed_string<char, 128, true, eastl::allocator>, std::function<void(SharedPoolInfo&)>>::
            ~pair((pair<eastl::fixed_string<char, 128, true, eastl::allocator>, std::function<void(SharedPoolInfo&)>>*)
                      local_1b8);
        param_3[44848] = (PoolPair)0;
        /* WARNING: Subroutine does not return */
        local_d8->~fixed_string();
    }

    // 0x100cbe430, 48 bytes, placed by debug map only (low confidence)
    // RegisterUniquePool(char const*, std::function<void (SharedPoolInfo&)> const&)
    /* RegisterUniquePool(char const*, std::function<void
   (SharedPoolInfo&)> const&) */

    void RegisterUniquePool(char* param_1, function* param_2) {
        GetUniquePoolList();
        RegisterSharedUniquePoolSub(param_1, param_2, (PoolPair*)&GetUniquePoolList()::uniquePools);
    }

    // 0x100cbe460, 128 bytes, placed by debug map only (low confidence)
    // GetUniquePoolList()
    void GetUniquePoolList() {
        if (GetUniquePoolList()::uniquePools == '\0') {
            if (___cxa_guard_acquire(&GetUniquePoolList()::uniquePools) != 0) {
                new (&GetUniquePoolList()::uniquePools) PoolPair();
                ___cxa_atexit(PTR__PoolPair_100ee63e0, &GetUniquePoolList()::uniquePools, 4294967296);
                ___cxa_guard_release(&GetUniquePoolList()::uniquePools);
            }
        }
    }

    // 0x100cbe4e0, 48 bytes, placed by debug map only (low confidence)
    // RegisterSharedPool(char const*, std::function<void (SharedPoolInfo&)> const&)
    /* RegisterSharedPool(char const*, std::function<void
   (SharedPoolInfo&)> const&) */

    void RegisterSharedPool(char* param_1, function* param_2) {
        GetSharedPoolList();
        RegisterSharedUniquePoolSub(param_1, param_2, (PoolPair*)&GetSharedPoolList()::sharedPools);
    }

    // 0x100cbe510, 128 bytes, placed by debug map only (low confidence)
    // GetSharedPoolList()
    void GetSharedPoolList() {
        if (GetSharedPoolList()::sharedPools == '\0') {
            if (___cxa_guard_acquire(&GetSharedPoolList()::sharedPools) != 0) {
                new (&GetSharedPoolList()::sharedPools) PoolPair();
                ___cxa_atexit(PTR__PoolPair_100ee63e0, &GetSharedPoolList()::sharedPools, 4294967296);
                ___cxa_guard_release(&GetSharedPoolList()::sharedPools);
            }
        }
    }

    // 0x100cbe590, 160 bytes, placed by debug map only (low confidence)
    // GetSharedUniquePoolListSub(eastl::fixed_vector<SharedPoolInfo, 200ul, true, eastl::allocator>&, PoolPair&)
    void GetSharedUniquePoolListSub(fixed_vector* param_1, PoolPair* param_2) {
        undefined8 uVar1;
        undefined8 uVar2;
        long lVar3;
        long lVar4;
        SharedPoolInfo* pSVar5;

        if (param_2[44848] == (PoolPair)0) {
            param_2[44848] = (PoolPair)1;
            uVar1 = param_2->HeapBeginPtr();
            uVar2 = param_2->end();
            eastl::sort<eastl::pair<eastl::fixed_string<char, 128, true, eastl::allocator>,
                                    std::function<void(SharedPoolInfo&)>>*,
                        GetSharedUniquePoolListSub(eastl::fixed_vector<SharedPoolInfo, 200ul, true, eastl::allocator>&,
                                                   PoolPair&)::__0>(uVar1, uVar2);
        }
        lVar3 = param_2->HeapBeginPtr();
        lVar4 = param_2->end();
        for (; lVar3 != lVar4; lVar3 = lVar3 + 224) {
            pSVar5 = (SharedPoolInfo*)eastl::fixed_vector<SharedPoolInfo, 200ul, true, eastl::allocator>::push_back();
            std::function<void(SharedPoolInfo&)>::operator()((function<void(SharedPoolInfo&)>*)(lVar3 + 176), pSVar5);
            uVar1 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            *(undefined8*)(pSVar5 + 64) = uVar1;
        }
    }

    // 0x100cbe660, 48 bytes, placed by debug map only (low confidence)
    // GetSharedPoolList(eastl::fixed_vector<SharedPoolInfo, 200ul, true, eastl::allocator>&)
    void GetSharedPoolList(fixed_vector* param_1) {
        GetSharedPoolList();
        GetSharedUniquePoolListSub(param_1, (PoolPair*)&GetSharedPoolList()::sharedPools);
    }

    // 0x100cbe690, 48 bytes, placed by debug map only (low confidence)
    // GetUniquePoolList(eastl::fixed_vector<SharedPoolInfo, 200ul, true, eastl::allocator>&)
    void GetUniquePoolList(fixed_vector* param_1) {
        GetUniquePoolList();
        GetSharedUniquePoolListSub(param_1, (PoolPair*)&GetUniquePoolList()::uniquePools);
    }

    // 0x100cbe6c0, 208 bytes, placed by debug map only (low confidence)
    // ValidatePoolsAreEmpty(PoolPair const&)
    void ValidatePoolsAreEmpty(PoolPair* param_1) {
        long lVar1;
        long lVar2;
        undefined8 uVar3;
        undefined8 uVar4;
        long local_78[9];

        lVar1 = param_1->HeapBeginPtr();
        lVar2 = param_1->end();
        if (lVar1 != lVar2) {
            do {
                std::function<void(SharedPoolInfo&)>::operator()((function<void(SharedPoolInfo&)>*)(lVar1 + 176),
                                                                 (SharedPoolInfo*)local_78);
                if (local_78[0] != 0) {
                    uVar3 = logger::default_logger();
                    uVar4 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                    logger::Logger::Log(uVar3, 0, 3,
                                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/"
                                        "pool/SharedUniquePool.cpp",
                                        191, "Pool %s still has %zu entries at client exit", uVar4, local_78[0]);
                    /* WARNING: Subroutine does not return */
                    LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/"
                                    "SharedUniquePool.cpp",
                                    192, (char*)0);
                }
                lVar1 = lVar1 + 224;
            } while (lVar1 != lVar2);
        }
    }

    // 0x100cbe790, 48 bytes, placed by debug map only (low confidence)
    // ValidatePoolsAreEmpty()
    void ValidatePoolsAreEmpty() {
        GetSharedPoolList();
        ValidatePoolsAreEmpty((PoolPair*)&GetSharedPoolList()::sharedPools);
        GetUniquePoolList();
        ValidatePoolsAreEmpty((PoolPair*)&GetUniquePoolList()::uniquePools);
    }

} // namespace jag::shareduniquedebug
