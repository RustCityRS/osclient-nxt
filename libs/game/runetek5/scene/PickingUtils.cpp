// libs/game/runetek5/scene/PickingUtils.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.game.runetek5

namespace jag::game {
    // 0x10047bb70, 3328 bytes, placed by __FILE__ string
    // DoEntityPicking(eastl::fixed_vector<shared_ptr<Entity>, 128ul, true, eastl::allocator>&, unsigned int, World&, int, int, int, int, int, render::Viewport const&, bool)
    void DoEntityPicking(fixed_vector* param_1, uint param_2, World* param_3, int param_4, int param_5, int param_6,
                         int param_7, int param_8, Viewport* param_9, bool param_10) {
        int iVar1;
        shared_ptr* this;
        char cVar2;
        RT7Core* this_00;
        char* pcVar3;
        ulong uVar4;
        ulong uVar5;
        future<void>* pfVar6;
        Layout* pLVar7;
        long lVar8;
        long lVar9;
        vector<shared_ptr<oldscape::dash3d::ModelUnlit>, BucketAllocatorEASTL>* this_01;
        int* piVar10;
        vector* pvVar11;
        float* pfVar12;
        pair* ppVar13;
        pair* ppVar14;
        SceneManager* this_02;
        shared_ptr* psVar15;
        shared_ptr* psVar16;
        shared_ptr* psVar17;
        shared_ptr* psVar18;
        type* ptVar19;
        long lVar20;
        Array<eastl::fixed_vector<shared_ptr<Entity>, 128ul, true, eastl::allocator>, BucketAllocatorEASTL>
            local_ca00[24];
        Array<std::pair<int, int>, BucketAllocatorEASTL> local_c9e8[24];
        Array<eastl::fixed_vector<shared_ptr<Entity>, 128ul, true, eastl::allocator>, BucketAllocatorEASTL>
            local_c9d0[24];
        undefined1 local_c9b8[16];
        Point* local_c9a8;
        bool* local_c9a0;
        shared_ptr* local_c998;
        World* local_c990;
        Point<float>* local_c988;
        Point<float>* local_c980;
        ThreadPool* local_c978;
        Point local_c970[24];
        Point<float> local_c958[16];
        vector<std::future<void>, BucketAllocatorEASTL> local_c948[28];
        uint local_c92c;
        undefined1 local_c928[32];
        Point<float> local_c908[8];
        shared_ptr* local_c900;
        char* local_c8f8;
        ulong local_c8f0;
        undefined1 local_c8e8[16];
        Point<float> local_c8d8[12];
        uint local_c8cc;
        vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>* local_c8c8;
        ulong local_c8c0;
        int local_c8b8;
        bool local_c8b1;
        ThreadPool local_c8b0[82];
        shared_ptr local_8888;
        World* local_8878;
        Array<eastl::fixed_vector<shared_ptr<Entity>, 128ul, true, eastl::allocator>, BucketAllocatorEASTL>* local_8870;
        Array<eastl::fixed_vector<shared_ptr<Entity>, 128ul, true, eastl::allocator>, BucketAllocatorEASTL>* local_8868;
        Array<std::pair<int, int>, BucketAllocatorEASTL>* local_8860;
        vector<shared_ptr<oldscape::dash3d::ModelUnlit>, BucketAllocatorEASTL>* local_8858;
        Point<float>* local_8850;
        int* local_8848;
        uint* local_8840;
        fixed_vector<shared_ptr<Entity>, 128ul, true, eastl::allocator> local_860[2088];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        local_c8b1 = param_10;
        local_c92c = param_2;
        local_c900 = (shared_ptr*)param_1;
        local_c8b8 = param_6;
        eastl::fixed_vector<shared_ptr<Entity>, 128ul, true, eastl::allocator>::fixed_vector(local_860);
        cVar2 = param_9->Contains(param_4, param_8 - param_5);
        if (cVar2 != '\0') {
            local_c8e8._8_8_ = param_3;
            math::Point<float>::Point(
                local_c8d8, ((float)param_7 * (float)(param_4 - param_9->field_0)) / (float)param_9->field_8,
                ((float)param_8 * (float)((param_8 - param_5) - param_9->field_4)) / (float)param_9->field_12);
            param_3 = (World*)local_c8e8._8_8_;
            local_c8c8 = (vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>*)
                             local_c8e8._8_8_->GetPickableEntities();
            cVar2 =
                eastl::vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>::empty(
                    local_c8c8);
            if (cVar2 == '\0') {
                local_c900->clear();
                this_00 = (RT7Core*)param_3->GetRT7Core();
                pcVar3 = (char*)this_00->GetImmediateThreadPool();
                uVar4 = local_c8c8->size();
                local_c8f8 = pcVar3;
                local_c928->InitialiseWorkGroups((ulong)pcVar3, uVar4);
                uVar4 = local_c928->size();
                if (uVar4 == 0) {
                    /* WARNING: Subroutine does not return */
                    LogAssert("numWorkers > 0",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                              "scene/PickingUtils.cpp",
                              76, (char*)0);
                }
                uVar5 = local_c928->size();
                Array<eastl::fixed_vector<shared_ptr<Entity>, 128ul, true, eastl::allocator>,
                      BucketAllocatorEASTL>::Array(local_ca00, uVar5);
                uVar5 = local_c928->size();
                Array<eastl::fixed_vector<shared_ptr<Entity>, 128ul, true, eastl::allocator>,
                      BucketAllocatorEASTL>::Array(local_c9d0, uVar5);
                uVar5 = local_c928->size();
                Array<std::pair<int, int>, BucketAllocatorEASTL>::Array(local_c9e8, uVar5);
                eastl::vector<std::future<void>, BucketAllocatorEASTL>::vector();
                eastl::vector<std::future<void>, BucketAllocatorEASTL>::reserve(local_c948, uVar4);
                local_c8f0 = uVar4;
                if (uVar4 == 0) {
                    lVar20 = 0;
                    local_c8cc = 0;
                    local_c8c8 = (vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true,
                                                                            eastl::allocator>>*)((ulong)local_c8c8 &
                                                                                                 18446744069414584320);
                } else {
                    uVar4 = 0;
                    do {
                        local_8888.field_8 = (long)local_c928;
                        local_8878 = (World*)local_c8e8._8_8_;
                        local_8870 = local_ca00;
                        local_8868 = local_c9d0;
                        local_8860 = local_c9e8;
                        local_8858 =
                            (vector<shared_ptr<oldscape::dash3d::ModelUnlit>, BucketAllocatorEASTL>*)local_c8c8;
                        local_8850 = local_c8d8;
                        local_8848 = &local_c8b8;
                        local_8888._0_8_ = uVar4;
                        local_8840 = &local_c92c;
                        ThreadPool::AddTask<DoEntityPicking(
                            eastl::fixed_vector<shared_ptr<Entity>, 128ul, true, eastl::allocator>&, unsigned int,
                            World&, int, int, int, int, int, render::Viewport_const&, bool)::__7>(
                            local_c8b0, local_c8f8, (__7*)&local_8888);
                        eastl::vector<std::future<void>, BucketAllocatorEASTL>::push_back(local_c948,
                                                                                          (future*)local_c8b0);
                        local_c8b0->~future();
                        uVar4 = uVar4 + 1;
                    } while (local_c8f0 != uVar4);
                    local_c8c8 = (vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true,
                                                                            eastl::allocator>>*)((ulong)local_c8c8 &
                                                                                                 18446744069414584320);
                    local_c8cc = 0;
                    lVar20 = 0;
                    uVar4 = 0;
                    do {
                        pfVar6 = (future<void>*)eastl::vector<std::future<void>, BucketAllocatorEASTL>::operator[](
                            local_c948, uVar4);
                        cVar2 = std::future<void>::valid(pfVar6);
                        if (cVar2 == '\0') {
                            /* WARNING: Subroutine does not return */
                            LogAssert("workers[i].valid()",
                                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/"
                                      "runetek5/scene/PickingUtils.cpp",
                                      122, (char*)0);
                        }
                        eastl::vector<std::future<void>, BucketAllocatorEASTL>::operator[](local_c948, uVar4);
                        std::future<void>::wait();
                        pLVar7 = (Layout*)Array<eastl::fixed_vector<shared_ptr<Entity>, 128ul, true, eastl::allocator>,
                                                BucketAllocatorEASTL>::operator[](local_ca00, uVar4);
                        lVar8 = eastl::basic_string<
                            char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                eastl::allocator>>::Layout::HeapBeginPtr(pLVar7);
                        lVar9 = pLVar7->end();
                        for (; lVar8 != lVar9; lVar8 = lVar8 + 16) {
                            eastl::fixed_vector<shared_ptr<Entity>, 128ul, true, eastl::allocator>::push_back(
                                local_c900);
                        }
                        this_01 = (vector<shared_ptr<oldscape::dash3d::ModelUnlit>, BucketAllocatorEASTL>*)
                            Array<eastl::fixed_vector<shared_ptr<Entity>, 128ul, true, eastl::allocator>,
                                  BucketAllocatorEASTL>::operator[](local_c9d0, uVar4);
                        lVar8 = eastl::vector<shared_ptr<oldscape::dash3d::ModelUnlit>, BucketAllocatorEASTL>::size(
                            this_01);
                        piVar10 = (int*)Array<std::pair<int, int>, BucketAllocatorEASTL>::operator[](local_c9e8, uVar4);
                        iVar1 = *piVar10;
                        lVar9 = Array<std::pair<int, int>, BucketAllocatorEASTL>::operator[](local_c9e8, uVar4);
                        lVar20 = lVar20 + lVar8;
                        local_c8cc = local_c8cc + iVar1;
                        local_c8c8 =
                            (vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>*)
                                CONCAT44(local_c8c8._4_4_, (uint)local_c8c8 + *(int*)(lVar9 + 4));
                        uVar4 = uVar4 + 1;
                    } while (uVar4 != local_c8f0);
                }
                uVar4 = local_c8f0;
                new (&local_8888) eastl::fixed_vector<shared_ptr<Entity>, 2048ul, true, eastl::allocator>();
                new (local_c8b0) eastl::fixed_vector<
                    std::pair<shared_ptr<Entity>, std::pair<math::Point<float>, math::Point<float>>>, 512ul, true,
                    eastl::allocator>();
                if (lVar20 != 0) {
                    if (local_c8b8 == 0) {
                        if (uVar4 != 0) {
                            uVar4 = 0;
                            do {
                                pLVar7 = (Layout*)
                                    Array<eastl::fixed_vector<shared_ptr<Entity>, 128ul, true, eastl::allocator>,
                                          BucketAllocatorEASTL>::operator[](local_c9d0, uVar4);
                                lVar20 = eastl::basic_string<
                                    char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::
                                    Layout::HeapBeginPtr(pLVar7);
                                lVar8 = pLVar7->end();
                                for (; lVar20 != lVar8; lVar20 = lVar20 + 16) {
                                    eastl::fixed_vector<shared_ptr<Entity>, 2048ul, true, eastl::allocator>::push_back(
                                        &local_8888);
                                }
                                uVar4 = uVar4 + 1;
                            } while (uVar4 != local_c8f0);
                        }
                        uVar4 = local_8888.size();
                    } else {
                        ptVar19 = (type*)(lVar20 * 6);
                        local_c8b0->reserve((ulong)ptVar19);
                        pvVar11 = local_c8d8->SSOBeginPtr(ptVar19);
                        local_c8c0._0_4_ = *(float*)pvVar11;
                        pfVar12 = (float*)local_c8d8->y();
                        math::Point<float>::Point(local_c958, (float)local_c8c0, *pfVar12 - (float)local_c8b8);
                        pvVar11 = local_c8d8->SSOBeginPtr(ptVar19);
                        local_c8c0._0_4_ = *(float*)pvVar11;
                        pfVar12 = (float*)local_c8d8->y();
                        new (local_c8e8) math::Point<float>((float)local_c8c0, (float)local_c8b8 + *pfVar12);
                        pvVar11 = local_c8d8->SSOBeginPtr(ptVar19);
                        local_c8c0._0_4_ = *(float*)pvVar11 - (float)local_c8b8;
                        pfVar12 = (float*)local_c8d8->y();
                        new ((local_c928 + 24)) math::Point<float>((float)local_c8c0, *pfVar12);
                        pvVar11 = local_c8d8->SSOBeginPtr(ptVar19);
                        local_c8c0 = CONCAT44(local_c8c0._4_4_, (float)local_c8b8 + *(float*)pvVar11);
                        pfVar12 = (float*)local_c8d8->y();
                        math::Point<float>::Point(local_c908, (float)local_c8c0, *pfVar12);
                        uVar5 = local_c8c0;
                        if (uVar4 != 0) {
                            local_c8c0 = 0;
                            do {
                                pLVar7 = (Layout*)
                                    Array<eastl::fixed_vector<shared_ptr<Entity>, 128ul, true, eastl::allocator>,
                                          BucketAllocatorEASTL>::operator[](local_c9d0, local_c8c0);
                                ppVar13 = (pair*)eastl::basic_string<
                                    char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::
                                    Layout::HeapBeginPtr(pLVar7);
                                ppVar14 = (pair*)pLVar7->end();
                                uVar5 = local_c8c0;
                                for (; ppVar13 != ppVar14; ppVar13 = ppVar13 + 16) {
                                    local_c8c0 = uVar5;
                                    std::make_pair<math::Point<float>&, math::Point<float>&>(local_c970,
                                                                                             (Point*)local_c958);
                                    std::make_pair<shared_ptr<Entity>&,
                                                   std::pair<math::Point<float>, math::Point<float>>>(
                                        (shared_ptr*)local_c9b8, ppVar13);
                                    local_c8b0->push_back(local_c9b8);
                                    local_c9b8->~LRUHashCacheWrapper();
                                    std::make_pair<math::Point<float>&, math::Point<float>&>(local_c970,
                                                                                             (Point*)(local_c928 + 24));
                                    std::make_pair<shared_ptr<Entity>&,
                                                   std::pair<math::Point<float>, math::Point<float>>>(
                                        (shared_ptr*)local_c9b8, ppVar13);
                                    local_c8b0->push_back(local_c9b8);
                                    local_c9b8->~LRUHashCacheWrapper();
                                    std::make_pair<math::Point<float>&, math::Point<float>&>(local_c970,
                                                                                             (Point*)local_c958);
                                    std::make_pair<shared_ptr<Entity>&,
                                                   std::pair<math::Point<float>, math::Point<float>>>(
                                        (shared_ptr*)local_c9b8, ppVar13);
                                    local_c8b0->push_back(local_c9b8);
                                    local_c9b8->~LRUHashCacheWrapper();
                                    std::make_pair<math::Point<float>&, math::Point<float>&>(local_c970,
                                                                                             (Point*)local_c908);
                                    std::make_pair<shared_ptr<Entity>&,
                                                   std::pair<math::Point<float>, math::Point<float>>>(
                                        (shared_ptr*)local_c9b8, ppVar13);
                                    local_c8b0->push_back(local_c9b8);
                                    local_c9b8->~LRUHashCacheWrapper();
                                    std::make_pair<math::Point<float>&, math::Point<float>&>(local_c970,
                                                                                             (Point*)local_c8e8);
                                    std::make_pair<shared_ptr<Entity>&,
                                                   std::pair<math::Point<float>, math::Point<float>>>(
                                        (shared_ptr*)local_c9b8, ppVar13);
                                    local_c8b0->push_back(local_c9b8);
                                    local_c9b8->~LRUHashCacheWrapper();
                                    std::make_pair<math::Point<float>&, math::Point<float>&>(local_c970,
                                                                                             (Point*)(local_c928 + 24));
                                    std::make_pair<shared_ptr<Entity>&,
                                                   std::pair<math::Point<float>, math::Point<float>>>(
                                        (shared_ptr*)local_c9b8, ppVar13);
                                    local_c8b0->push_back(local_c9b8);
                                    local_c9b8->~LRUHashCacheWrapper();
                                    uVar5 = local_c8c0;
                                }
                                local_c8c0 = uVar5 + 1;
                            } while (local_c8c0 != local_c8f0);
                        }
                        local_c8c0 = uVar5;
                        uVar4 = local_c8b0->size();
                    }
                    local_c9b8->InitialiseWorkGroups((ulong)local_c8f8, uVar4);
                    eastl::vector<std::pair<unsigned long, unsigned long>, BucketAllocatorEASTL>::operator=(
                        (vector<std::pair<unsigned long, unsigned long>, BucketAllocatorEASTL>*)local_c928,
                        (vector*)local_c9b8);
                    local_c9b8->~vector();
                    uVar4 = local_c928->size();
                    if (uVar4 == 0) {
                        /* WARNING: Subroutine does not return */
                        LogAssert("numWorkers > 0",
                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                  "scene/PickingUtils.cpp",
                                  195, (char*)0);
                    }
                    uVar5 = local_c928->size();
                    new (local_c970) Array<eastl::fixed_vector<shared_ptr<Entity>, 128ul, true, eastl::allocator>,
                                           BucketAllocatorEASTL>(uVar5);
                    local_c948->clear();
                    eastl::vector<std::future<void>, BucketAllocatorEASTL>::reserve(local_c948, uVar4);
                    this_02 = (SceneManager*)local_c8e8._8_8_->size();
                    this_02->GetGameSceneRect();
                    math::Rect<int>::ToType<float>((Rect<int>*)local_c958);
                    if (uVar4 != 0) {
                        uVar5 = 0;
                        do {
                            local_c9b8._8_8_ = local_c928;
                            local_c9a8 = local_c970;
                            local_c9a0 = &local_c8b1;
                            local_c998 = &local_8888;
                            local_c990 = (World*)local_c8e8._8_8_;
                            local_c988 = local_c958;
                            local_c980 = local_c8d8;
                            local_c978 = local_c8b0;
                            local_c9b8._0_8_ = uVar5;
                            ThreadPool::AddTask<DoEntityPicking(
                                eastl::fixed_vector<shared_ptr<Entity>, 128ul, true, eastl::allocator>&, unsigned int,
                                World&, int, int, int, int, int, render::Viewport_const&, bool)::__8>(
                                (ThreadPool*)local_c8e8, local_c8f8, (__8*)local_c9b8);
                            eastl::vector<std::future<void>, BucketAllocatorEASTL>::push_back(local_c948,
                                                                                              (future*)local_c8e8);
                            local_c8e8->~future();
                            uVar5 = uVar5 + 1;
                        } while (uVar4 != uVar5);
                        uVar5 = 0;
                        do {
                            pfVar6 = (future<void>*)eastl::vector<std::future<void>, BucketAllocatorEASTL>::operator[](
                                local_c948, uVar5);
                            cVar2 = std::future<void>::valid(pfVar6);
                            if (cVar2 == '\0') {
                                /* WARNING: Subroutine does not return */
                                LogAssert("workers[i].valid()",
                                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/"
                                          "runetek5/scene/PickingUtils.cpp",
                                          263, (char*)0);
                            }
                            eastl::vector<std::future<void>, BucketAllocatorEASTL>::operator[](local_c948, uVar5);
                            std::future<void>::wait();
                            uVar5 = uVar5 + 1;
                        } while (uVar4 != uVar5);
                    }
                    lVar20 = local_c970->end();
                    this = local_c900;
                    if (lVar20 != 0) {
                        uVar4 = 0;
                        do {
                            pLVar7 =
                                (Layout*)Array<eastl::fixed_vector<shared_ptr<Entity>, 128ul, true, eastl::allocator>,
                                               BucketAllocatorEASTL>::
                                operator[](
                                    (Array<eastl::fixed_vector<shared_ptr<Entity>, 128ul, true, eastl::allocator>,
                                           BucketAllocatorEASTL>*)local_c970,
                                    uVar4);
                            psVar15 = (shared_ptr*)eastl::basic_string<
                                char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                    eastl::allocator>>::Layout::HeapBeginPtr(pLVar7);
                            psVar16 = (shared_ptr*)pLVar7->end();
                            for (; psVar15 != psVar16; psVar15 = psVar15 + 1) {
                                psVar17 = (shared_ptr*)HeapBeginPtr();
                                psVar18 = (shared_ptr*)end();
                                psVar17 =
                                    eastl::find<shared_ptr<Entity>*, shared_ptr<Entity>>(psVar17, psVar18, psVar15);
                                psVar18 = (shared_ptr*)end();
                                if (psVar17 == psVar18) {
                                    eastl::fixed_vector<shared_ptr<Entity>, 128ul, true, eastl::allocator>::push_back(
                                        this);
                                    local_c8c8 = (vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true,
                                                                                            eastl::allocator>>*)
                                        CONCAT44(local_c8c8._4_4_, (uint)local_c8c8 + 1);
                                }
                            }
                            uVar4 = uVar4 + 1;
                            uVar5 = local_c970->end();
                        } while (uVar4 < uVar5);
                    }
                    local_c970->~Array();
                }
                local_c8e8._8_8_->DebugSetPickingCounts(local_c8cc, (uint)local_c8c8);
                local_c8b0->~fixed_vector();
                local_8888.~fixed_vector();
                eastl::vector<std::future<void>, BucketAllocatorEASTL>::~vector(local_c948);
                local_c9e8->~Array();
                local_c9d0->~Array();
                local_ca00->~Array();
                local_c928->~vector();
                goto LAB_10047c6b6;
            }
        }
        param_3->DebugSetPickingCounts(0, 0);
    LAB_10047c6b6:
        eastl::fixed_vector<shared_ptr<Entity>, 128ul, true, eastl::allocator>::~fixed_vector(local_860);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

} // namespace jag::game
