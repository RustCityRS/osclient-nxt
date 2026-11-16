// libs/game/runetek5/scene/PickingUtils.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.runetek5

namespace jag::game {
    // 0x10047bb70
    void DoEntityPicking(eastl::fixed_vector<shared_ptr<Entity>, 128ul>& entitys, unsigned int arg2, World& world,
                         int arg4, int arg5, int arg6, int arg7, int arg8, const render::Viewport& viewport,
                         bool arg10) {
        int iVar1;
        RT7Core* this_00;
        char* arg1;
        unsigned long uVar3;
        unsigned long uVar4;
        future<void>* pfVar5;
        Layout* pLVar6;
        shared_ptr<Entity>* psVar7;
        shared_ptr<Entity>* psVar8;
        long lVar9;
        int* piVar10;
        long lVar11;
        float* pfVar12;
        pair<math::Point<float>, math::Point<float> _>* arg2_00;
        pair<math::Point<float>, math::Point<float> _>* ppVar13;
        shared_ptr<postprocess::PostProcessEffect>* postProcessEffect3;
        shared_ptr<postprocess::PostProcessEffect>* psVar14;
        shared_ptr<postprocess::PostProcessEffect>* psVar15;
        shared_ptr<postprocess::PostProcessEffect>* psVar16;
        long lVar17;
        Array<eastl::fixed_vector<shared_ptr<Entity>, 128ul>, BucketAllocatorEASTL> local_ca00;
        Array<std::pair<int, int>, BucketAllocatorEASTL> local_c9e8;
        Array<eastl::fixed_vector<shared_ptr<Entity>, 128ul>, BucketAllocatorEASTL> local_c9d0;
        uint8_t local_c9b8[16];
        Point<float>* local_c9a8;
        bool* local_c9a0;
        unsigned long* local_c998;
        World* local_c990;
        Point<float>* local_c988;
        Point<float>* local_c980;
        ReturnValue* local_c978;
        Point<float> local_c970;
        Point<float> local_c958;
        vector<std::future<void>, BucketAllocatorEASTL> local_c948;
        uint8_t local_c928[32];
        Point<float> local_c908;
        char* local_c8f8;
        unsigned long local_c8f0;
        ReturnValue local_c8e8;
        World* local_c8e0;
        Point<float> local_c8d8;
        unsigned int local_c8cc;
        vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true>>* local_c8c8;
        unsigned long local_c8c0;
        ReturnValue local_c8b0;
        unsigned long local_8888;
        uint8_t* local_8880;
        World* local_8878;
        Array<eastl::fixed_vector<shared_ptr<Entity>, 128ul>, BucketAllocatorEASTL>* local_8870;
        Array<eastl::fixed_vector<shared_ptr<Entity>, 128ul>, BucketAllocatorEASTL>* local_8868;
        Array<std::pair<int, int>, BucketAllocatorEASTL>* local_8860;
        vector<shared_ptr<oldscape::dash3d::ModelUnlit>, BucketAllocatorEASTL>* local_8858;
        Point<float>* local_8850;
        int* local_8848;
        unsigned int* local_8840;

        bool local_c8b1 = arg10;
        unsigned int local_c92c = arg2;
        int local_c8b8 = arg6;
        fixed_vector<shared_ptr<Entity>, 128ul> local_860;
        if (viewport.Contains(arg4, arg8 - arg5)) {
            local_c8e0 = world;
            local_c8d8 =
                math::Point(((float)arg7 * (float)(arg4 - viewport.field_0)) / (float)viewport.field_8,
                            ((float)arg8 * (float)((arg8 - arg5) - viewport.field_4)) / (float)viewport.field_12);
            world = local_c8e0;
            local_c8c8 = (vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true>>*)
                             local_c8e0->GetPickableEntities();
            if (!(local_c8c8->empty())) {
                ((vector<shared_ptr<oldscape::rseven::Terrain>>*)(fixed_vector<shared_ptr<Entity>, 128ul>*)entitys)
                    ->clear();
                this_00 = world.GetRT7Core();
                arg1 = (char*)this_00->GetImmediateThreadPool();
                uVar3 = local_c8c8->size();
                local_c8f8 = arg1;
                local_c928->InitialiseWorkGroups((unsigned long)arg1, uVar3);
                uVar3 = local_c928->size();
                if (uVar3 == 0) {
                    LogAssert("numWorkers > 0",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                              "scene/PickingUtils.cpp",
                              76, nullptr);
                }
                uVar4 = local_c928->size();
                local_ca00 = Array<eastl::fixed_vector<shared_ptr<Entity>, 128ul>, BucketAllocatorEASTL>(uVar4);
                uVar4 = local_c928->size();
                local_c9d0 = Array<eastl::fixed_vector<shared_ptr<Entity>, 128ul>, BucketAllocatorEASTL>(uVar4);
                uVar4 = local_c928->size();
                local_c9e8 = Array<std::pair<int, int>, BucketAllocatorEASTL>(uVar4);
                local_c948 = eastl::vector<std::future<void>, BucketAllocatorEASTL>();
                local_c948.reserve(uVar3);
                local_c8f0 = uVar3;
                if (uVar3 == 0) {
                    lVar17 = 0;
                    local_c8cc = 0;
                    local_c8c8 =
                        (vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true>>*)((unsigned long)
                                                                                                    local_c8c8 &
                                                                                                18446744069414584320);
                } else {
                    uVar3 = 0;
                    do {
                        local_8880 = local_c928;
                        local_8878 = local_c8e0;
                        local_8870 = &local_ca00;
                        local_8868 = &local_c9d0;
                        local_8860 = &local_c9e8;
                        local_8858 =
                            (vector<shared_ptr<oldscape::dash3d::ModelUnlit>, BucketAllocatorEASTL>*)local_c8c8;
                        local_8850 = &local_c8d8;
                        local_8848 = &local_c8b8;
                        local_8888 = uVar3;
                        local_8840 = &local_c92c;
                        ThreadPool::AddTask<DoEntityPicking(
                            eastl::fixed_vector<shared_ptr<Entity>, 128ul>&, unsigned int, World&, int, int, int, int,
                            int, render::Viewport const&, bool)::__7>(&local_c8b0, local_c8f8, (__7*)&local_8888);
                        local_c948.push_back(local_c8b0);
                        std::future<void>::~future(&local_c8b0);
                        uVar3 = uVar3 + 1;
                    } while (local_c8f0 != uVar3);
                    local_c8c8 =
                        (vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true>>*)((unsigned long)
                                                                                                    local_c8c8 &
                                                                                                18446744069414584320);
                    local_c8cc = 0;
                    lVar17 = 0;
                    uVar3 = 0;
                    do {
                        pfVar5 = &local_c948[uVar3];
                        if (!(pfVar5->valid())) {
                            LogAssert("workers[i].valid()",
                                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/"
                                      "runetek5/scene/PickingUtils.cpp",
                                      122, nullptr);
                        }
                        pfVar5 = &local_c948[uVar3];
                        pfVar5->wait();
                        pLVar6 = &local_ca00[uVar3];
                        psVar7 = (shared_ptr<Entity>*)pLVar6->HeapBeginPtr();
                        psVar8 = (shared_ptr<Entity>*)pLVar6->end();
                        for (; psVar7 != psVar8; psVar7 = psVar7 + 16) {
                            entitys.push_back(*psVar7);
                        }
                        lVar9 =
                            ((vector<shared_ptr<oldscape::dash3d::ModelUnlit>, BucketAllocatorEASTL>*)local_c9d0[uVar3])
                                ->size();
                        piVar10 = &local_c9e8[uVar3];
                        iVar1 = *piVar10;
                        lVar11 = local_c9e8[uVar3];
                        lVar17 = lVar17 + lVar9;
                        local_c8cc = local_c8cc + iVar1;
                        local_c8c8 =
                            (vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul,
                                                                       true>>*)(((uint64_t)local_c8c8._4_4_ << 32) |
                                                                                (uint32_t)((unsigned int)local_c8c8 +
                                                                                           *(int*)(lVar11 + 4)));
                        uVar3 = uVar3 + 1;
                    } while (uVar3 != local_c8f0);
                }
                uVar3 = local_c8f0;
                new (&local_8888) eastl::fixed_vector<shared_ptr<Entity>, 2048ul>();
                local_c8b0 = eastl::fixed_vector<
                    std::pair<shared_ptr<Entity>, std::pair<math::Point<float>, math::Point<float>>>, 512ul>();
                if (lVar17 != 0) {
                    if (local_c8b8 == 0) {
                        if (uVar3 != 0) {
                            uVar3 = 0;
                            do {
                                pLVar6 = &local_c9d0[uVar3];
                                psVar7 = (shared_ptr<Entity>*)pLVar6->HeapBeginPtr();
                                psVar8 = (shared_ptr<Entity>*)pLVar6->end();
                                for (; psVar7 != psVar8; psVar7 = psVar7 + 16) {
                                    local_8888.push_back(*psVar7);
                                }
                                uVar3 = uVar3 + 1;
                            } while (uVar3 != local_c8f0);
                        }
                        uVar3 = local_8888.size();
                    } else {
                        local_c8b0.reserve(lVar17 * 6);
                        pfVar12 = (float*)local_c8d8.SSOBeginPtr();
                        local_c8c0._0_4_ = *pfVar12;
                        pfVar12 = (float*)local_c8d8.y();
                        local_c958 = math::Point((float)local_c8c0, *pfVar12 - (float)local_c8b8);
                        pfVar12 = (float*)local_c8d8.SSOBeginPtr();
                        local_c8c0._0_4_ = *pfVar12;
                        pfVar12 = (float*)local_c8d8.y();
                        new (&local_c8e8) math::Point((float)local_c8c0, (float)local_c8b8 + *pfVar12);
                        pfVar12 = (float*)local_c8d8.SSOBeginPtr();
                        local_c8c0._0_4_ = *pfVar12 - (float)local_c8b8;
                        pfVar12 = (float*)local_c8d8.y();
                        new ((local_c928 + 24)) math::Point((float)local_c8c0, *pfVar12);
                        pfVar12 = (float*)local_c8d8.SSOBeginPtr();
                        local_c8c0 = (((uint64_t)local_c8c0._4_4_ << 32) | (uint32_t)((float)local_c8b8 + *pfVar12));
                        pfVar12 = (float*)local_c8d8.y();
                        local_c908 = math::Point((float)local_c8c0, *pfVar12);
                        uVar4 = local_c8c0;
                        if (uVar3 != 0) {
                            local_c8c0 = 0;
                            do {
                                pLVar6 = &local_c9d0[local_c8c0];
                                arg2_00 = (pair<math::Point<float>, math::Point<float> _>*)pLVar6->HeapBeginPtr();
                                ppVar13 = (pair<math::Point<float>, math::Point<float> _>*)pLVar6->end();
                                uVar4 = local_c8c0;
                                for (; arg2_00 != ppVar13; arg2_00 = arg2_00 + 16) {
                                    local_c8c0 = uVar4;
                                    std::make_pair<math::Point<float>&, math::Point<float>&>(local_c970, local_c958);
                                    std::make_pair<shared_ptr<Entity>&,
                                                   std::pair<math::Point<float>, math::Point<float>>>(*local_c9b8,
                                                                                                      *arg2_00);
                                    local_c8b0.push_back(*local_c9b8);
                                    std::make_pair<math::Point<float>&, math::Point<float>&>(local_c970,
                                                                                             *((local_c928 + 24)));
                                    std::make_pair<shared_ptr<Entity>&,
                                                   std::pair<math::Point<float>, math::Point<float>>>(*local_c9b8,
                                                                                                      *arg2_00);
                                    local_c8b0.push_back(*local_c9b8);
                                    std::make_pair<math::Point<float>&, math::Point<float>&>(local_c970, local_c958);
                                    std::make_pair<shared_ptr<Entity>&,
                                                   std::pair<math::Point<float>, math::Point<float>>>(*local_c9b8,
                                                                                                      *arg2_00);
                                    local_c8b0.push_back(*local_c9b8);
                                    std::make_pair<math::Point<float>&, math::Point<float>&>(local_c970, local_c908);
                                    std::make_pair<shared_ptr<Entity>&,
                                                   std::pair<math::Point<float>, math::Point<float>>>(*local_c9b8,
                                                                                                      *arg2_00);
                                    local_c8b0.push_back(*local_c9b8);
                                    std::make_pair<math::Point<float>&, math::Point<float>&>(local_c970, local_c8e8);
                                    std::make_pair<shared_ptr<Entity>&,
                                                   std::pair<math::Point<float>, math::Point<float>>>(*local_c9b8,
                                                                                                      *arg2_00);
                                    local_c8b0.push_back(*local_c9b8);
                                    std::make_pair<math::Point<float>&, math::Point<float>&>(local_c970,
                                                                                             *((local_c928 + 24)));
                                    std::make_pair<shared_ptr<Entity>&,
                                                   std::pair<math::Point<float>, math::Point<float>>>(*local_c9b8,
                                                                                                      *arg2_00);
                                    local_c8b0.push_back(*local_c9b8);
                                    uVar4 = local_c8c0;
                                }
                                local_c8c0 = uVar4 + 1;
                            } while (local_c8c0 != local_c8f0);
                        }
                        local_c8c0 = uVar4;
                        uVar3 = local_c8b0.size();
                    }
                    local_c9b8->InitialiseWorkGroups((unsigned long)local_c8f8, uVar3);
                    *local_c928 = *local_c9b8;
                    uVar3 = local_c928->size();
                    if (uVar3 == 0) {
                        LogAssert("numWorkers > 0",
                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                  "scene/PickingUtils.cpp",
                                  195, nullptr);
                    }
                    uVar4 = local_c928->size();
                    local_c970 = Array<eastl::fixed_vector<shared_ptr<Entity>, 128ul>, BucketAllocatorEASTL>(uVar4);
                    local_c948.clear();
                    local_c948.reserve(uVar3);
                    ((SceneManager*)local_c8e0->size())->GetGameSceneRect();
                    math::Rect<int>::ToType<float>(&local_c958);
                    if (uVar3 != 0) {
                        uVar4 = 0;
                        do {
                            local_c9b8._8_8_ = local_c928;
                            local_c9a8 = &local_c970;
                            local_c9a0 = &local_c8b1;
                            local_c998 = &local_8888;
                            local_c990 = local_c8e0;
                            local_c988 = &local_c958;
                            local_c980 = &local_c8d8;
                            local_c978 = &local_c8b0;
                            local_c9b8._0_8_ = uVar4;
                            ThreadPool::AddTask<DoEntityPicking(eastl::fixed_vector<shared_ptr<Entity>, 128ul>&,
                                                                unsigned int, World&, int, int, int, int, int,
                                                                render::Viewport const&, bool)::__8>(
                                &local_c8e8, local_c8f8, (__8*)local_c9b8);
                            local_c948.push_back(local_c8e8);
                            uVar4 = uVar4 + 1;
                        } while (uVar3 != uVar4);
                        uVar4 = 0;
                        do {
                            pfVar5 = &local_c948[uVar4];
                            if (!(pfVar5->valid())) {
                                LogAssert("workers[i].valid()",
                                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/"
                                          "runetek5/scene/PickingUtils.cpp",
                                          263, nullptr);
                            }
                            pfVar5 = &local_c948[uVar4];
                            pfVar5->wait();
                            uVar4 = uVar4 + 1;
                        } while (uVar3 != uVar4);
                    }
                    lVar17 = local_c970.end();
                    if (lVar17 != 0) {
                        uVar3 = 0;
                        do {
                            pLVar6 = &local_c970[uVar3];
                            postProcessEffect3 = (shared_ptr<postprocess::PostProcessEffect>*)pLVar6->HeapBeginPtr();
                            psVar14 = (shared_ptr<postprocess::PostProcessEffect>*)pLVar6->end();
                            for (; postProcessEffect3 != psVar14; postProcessEffect3 = postProcessEffect3 + 16) {
                                psVar15 =
                                    (shared_ptr<postprocess::PostProcessEffect>*)((Layout*)(fixed_vector<
                                                                                            shared_ptr<Entity>, 128ul>*)
                                                                                      entitys)
                                        ->HeapBeginPtr();
                                psVar16 =
                                    (shared_ptr<
                                        postprocess::
                                            PostProcessEffect>*)((vector<
                                                                     oldscape::dash3d::EntityHighlight*,
                                                                     BucketAllocatorEASTL>*)(fixed_vector<shared_ptr<Entity>,
                                                                                                          128ul>*)
                                                                     entitys)
                                        ->end();
                                psVar15 = eastl::find<shared_ptr<Entity>*, shared_ptr<Entity>>(psVar15, psVar16,
                                                                                               *postProcessEffect3);
                                psVar16 =
                                    (shared_ptr<
                                        postprocess::
                                            PostProcessEffect>*)((vector<
                                                                     oldscape::dash3d::EntityHighlight*,
                                                                     BucketAllocatorEASTL>*)(fixed_vector<shared_ptr<Entity>,
                                                                                                          128ul>*)
                                                                     entitys)
                                        ->end();
                                if (psVar15 == psVar16) {
                                    entitys.push_back(*postProcessEffect3);
                                    local_c8c8 =
                                        (vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul,
                                                                                   true>>*)(((uint64_t)local_c8c8._4_4_
                                                                                             << 32) |
                                                                                            (uint32_t)((unsigned int)
                                                                                                           local_c8c8 +
                                                                                                       1));
                                }
                            }
                            uVar3 = uVar3 + 1;
                            uVar4 = local_c970.end();
                        } while (uVar3 < uVar4);
                    }
                }
                local_c8e0->DebugSetPickingCounts(local_c8cc, (unsigned int)local_c8c8);
                goto LAB_10047c6b6;
            }
        }
        world.DebugSetPickingCounts(0, 0);
    LAB_10047c6b6:
    }

} // namespace jag::game
