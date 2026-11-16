// libs/graphics/runetek7/renderer/DrawableQueue.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

#include "DrawableQueue.h"

namespace jag::graphics {
    // 0x1007e1a40
    DrawableQueue::DrawableQueue(
        ThreadPool* threadPool,
        const eastl::fixed_vector<DrawableQueue::RenderPassDrawableGroupsConfig, 10ul>& renderPassDrawableGroupsConfigs)
        : std::array<DrawableGroupList, 10ul>(), field_6240(threadPool) {
        if (threadPool == nullptr) {
            LogAssert("pThreadPool",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "renderer/DrawableQueue.cpp",
                      23, nullptr);
        }
        SetMaxGroupDrawables(renderPassDrawableGroupsConfigs);
    }

    // 0x1007e1ac0
    void DrawableQueue::SetMaxGroupDrawables(const eastl::fixed_vector<DrawableQueue::RenderPassDrawableGroupsConfig,
                                                                       10ul>& renderPassDrawableGroupsConfigs) {
        unsigned int uVar1;
        NXTPixToolkit* this_01;
        NXTPixToolkit* pNVar4;

        auto pRVar2 = renderPassDrawableGroupsConfigs.HeapBeginPtr();
        auto pRVar3 = renderPassDrawableGroupsConfigs.end();
        while (true) {
            if (pRVar2 == pRVar3) {
                return;
            }
            if (*pRVar2 == 4294967295)
                break;
            uVar1 = oldscape::option::transforms::IntegerToValueTypeTransform<int>::IntegerToValueType(*pRVar2);
            ((DrawableGroupList*)(*this)[(unsigned long)uVar1])->SetOpaqueGroupsSortKeyType(pRVar2[4]);
            GetRenderPassDrawableGroups(*pRVar2);
            this_01 = (NXTPixToolkit*)std::array<DrawableGroup, 13ul>::begin();
            pNVar4 = (NXTPixToolkit*)std::array<DrawableGroup, 13ul>::end();
            for (; this_01 != pNVar4; this_01 = (NXTPixToolkit*)(this_01->m_screen + 32)) {
                ((vector<DrawableElementInfo>*)this_01->GetScreen())->reserve(*(uint64_t*)(pRVar2 + 2));
            }
            pRVar2 = pRVar2 + 6;
        }
        LogAssert("renderPassConfig.m_renderPass != RenderPassType::UNKNOWN",
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/renderer/"
                  "DrawableQueue.cpp",
                  33, nullptr);
    }

    // 0x1007e1cd0
    void DrawableQueue::RenderGroup(RT7Core& rt7Core, const render::DrawCallState& drawCallState,
                                    const SceneViewData& sceneViewData, DrawableGroupType drawableGroupType,
                                    RenderPassType renderPassType, EffectManager& effectManager) {
        array<DrawableGroup, 13ul>* array;
        long* plVar4;
        RT7Core* this_02;
        long* plVar5;
        uint32_t in_register_0000000c;
        RT7Core* pRVar7;
        uint64_t in_stack_00000008;

        DrawCallState* arg2 = (DrawCallState*)(unsigned long)renderPassType;
        array = (array<DrawableGroup, 13ul>*)GetRenderPassDrawableGroups((DrawableQueue*)rt7Core,
                                                                         (RenderPassType)effectManager);
        NXTPixToolkit* this_00 = (NXTPixToolkit*)(*array)[(unsigned long)arg2];
        auto this_01 = this_00->GetScreen();
        long lVar2 = this_01->HeapBeginPtr();
        long lVar3 = this_01->end();
        while (true) {
            if (lVar2 == lVar3) {
                this_02 = drawCallState.GetDrawableBatchRenderers();
                plVar4 = std::array<DrawableBatchRenderer*, 1ul>::begin();
                plVar5 = std::array<DrawableBatchRenderer*, 1ul>::end();
                for (; plVar4 != plVar5; plVar4 = plVar4 + 1) {
                    pRVar7 = (RT7Core*)*plVar4;
                    pRVar7->~(this_02->GetRenderContext(), sceneViewData,
                              (((uint64_t)in_register_0000000c << 32) | (uint32_t)drawableGroupType),
                              (unsigned long)effectManager & 4294967295, in_stack_00000008);
                    this_02 = pRVar7;
                }
                return;
            }
            if (!((lVar2 + 8)) != arg2)
                break;
            plVar4 = (long*)(*((lVar2 + 8))).operator->();
            arg2 = drawCallState;
            (**(void (**)(...))(*plVar4 + 24))(plVar4, drawCallState, sceneViewData,
                                               (((uint64_t)in_register_0000000c << 32) | (uint32_t)drawableGroupType),
                                               (unsigned long)effectManager & 4294967295, in_stack_00000008);
            lVar2 = lVar2 + 24;
        }
        LogAssert("drawable.m_drawableElement != nullptr",
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/renderer/"
                  "DrawableQueue.cpp",
                  61, nullptr);
    }

    // 0x1007e1e80
    void DrawableQueue::RenderGroup(RT7Core& rt7Core, const render::DrawCallState& drawCallState,
                                    const SceneViewData& sceneViewData, DrawableGroupType drawableGroupType,
                                    RenderPassType renderPassType, EffectManager& effectManager, unsigned int arg7) {
        unsigned int uVar2;
        long* plVar4;
        long* plVar6;
        RT7Core* pRVar8;

        RT7Core* pRVar5 = (RT7Core*)(unsigned long)drawableGroupType;
        auto this_00 = GetRenderPassDrawableGroups(renderPassType);
        NXTPixToolkit* this_01 = (NXTPixToolkit*)(*this_00)[(unsigned long)pRVar5];
        auto this_02 = this_01->GetScreen();
        auto this_03 = this_02->HeapBeginPtr();
        auto pDVar3 = this_02->end();
        while (true) {
            if (this_03 == pDVar3) {
                pRVar5 = rt7Core.GetDrawableBatchRenderers();
                plVar4 = std::array<DrawableBatchRenderer*, 1ul>::begin();
                plVar6 = std::array<DrawableBatchRenderer*, 1ul>::end();
                for (; plVar4 != plVar6; plVar4 = plVar4 + 1) {
                    pRVar8 = (RT7Core*)*plVar4;
                    pRVar8->~(pRVar5->GetRenderContext(), drawCallState, sceneViewData, (unsigned long)renderPassType,
                              effectManager);
                    pRVar5 = pRVar8;
                }
                return;
            }
            if (!((this_03 + 1)) != pRVar5)
                break;
            uVar2 = this_03->GetLayer();
            if ((arg7 & uVar2) != 0) {
                plVar4 = (long*)(*((this_03 + 1))).operator->();
                pRVar5 = rt7Core;
                (**(void (**)(...))(*plVar4 + 24))(plVar4, rt7Core, drawCallState, sceneViewData, renderPassType,
                                                   effectManager);
            }
            this_03 = this_03 + 3;
        }
        LogAssert("drawable.m_drawableElement != nullptr",
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/renderer/"
                  "DrawableQueue.cpp",
                  84, nullptr);
    }

    // 0x1007e1fe0
    void DrawableQueue::RenderGroup(RT7Core& rt7Core, const render::DrawCallState& drawCallState,
                                    const SceneViewData& sceneViewData1, DrawableGroupType drawableGroupType,
                                    RenderPassType renderPassType, EffectManager& effectManager,
                                    std::function<bool(math::OBB const&, SceneViewData const&)> const& callback,
                                    const SceneViewData& sceneViewData2) {
        unique_ptr<DrawableElement, DrawableElementDeleter>* drawableElement;
        long lVar5;
        long* plVar7;
        long* plVar8;
        RT7Core* pRVar10;

        RT7Core* pRVar6 = (RT7Core*)(unsigned long)drawableGroupType;
        auto this_00 = GetRenderPassDrawableGroups(renderPassType);
        NXTPixToolkit* this_01 = (NXTPixToolkit*)(*this_00)[(unsigned long)pRVar6];
        auto this_02 = this_01->GetScreen();
        long lVar3 = this_02->HeapBeginPtr();
        long lVar4 = this_02->end();
        do {
            if (lVar3 == lVar4) {
                pRVar6 = rt7Core.GetDrawableBatchRenderers();
                plVar7 = std::array<DrawableBatchRenderer*, 1ul>::begin();
                plVar8 = std::array<DrawableBatchRenderer*, 1ul>::end();
                for (; plVar7 != plVar8; plVar7 = plVar7 + 1) {
                    pRVar10 = (RT7Core*)*plVar7;
                    pRVar10->~(pRVar6->GetRenderContext(), drawCallState, sceneViewData1, (unsigned long)renderPassType,
                               effectManager);
                    pRVar6 = pRVar10;
                }
                return;
            }
            drawableElement = (unique_ptr<DrawableElement, DrawableElementDeleter>*)(lVar3 + 8);
            if (!drawableElement != pRVar6) {
                LogAssert("drawable.m_drawableElement != nullptr",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                          "renderer/DrawableQueue.cpp",
                          111, nullptr);
            }
            lVar5 = **drawableElement;
            if ((*(uint8_t*)(lVar5 + 96) & 4) == 0) {
                pRVar6 = (RT7Core*)(lVar5 + 16);
                if (std::function<bool(math::OBB const&, SceneViewData const&)>::operator()(
                        (function<bool(math::OBB const&, SceneViewData const&)>*)callback, (OBB*)pRVar6,
                        sceneViewData2) != '\0')
                    goto LAB_1007e2050;
            } else {
            LAB_1007e2050:
                plVar7 = (long*)(*drawableElement).operator->();
                pRVar6 = rt7Core;
                (**(void (**)(...))(*plVar7 + 24))(plVar7, rt7Core, drawCallState, sceneViewData1, renderPassType,
                                                   effectManager);
            }
            lVar3 = lVar3 + 24;
        } while (true);
    }

    // 0x1007e2170
    void
    DrawableQueue::RenderGroupWithAsyncTest(RT7Core& rt7Core, const render::DrawCallState& drawCallState,
                                            const SceneViewData& sceneViewData1, DrawableGroupType drawableGroupType,
                                            RenderPassType renderPassType, EffectManager& effectManager,
                                            std::function<bool(math::OBB const&, SceneViewData const&)> const& callback,
                                            const SceneViewData& sceneViewData2) {
        ThreadPool* pTVar1;
        unsigned long uVar5;
        long lVar6;
        unsigned long uVar7;
        future<void>* pfVar8;
        vector<DrawableElementInfo>* this_02;
        int* piVar9;
        long* plVar10;
        RT7Core* this_03;
        long* plVar11;
        uint64_t uVar12;
        uint8_t* arg2;
        RT7Core* pRVar13;
        uint8_t* puVar14;
        uint8_t* arg1;
        unsigned long local_d8;
        vector<std::pair<unsigned long, unsigned long>, BucketAllocatorEASTL>* local_d0;
        NXTPixToolkit* local_c8;
        Array<int, BucketAllocatorEASTL>* local_c0;
        function<bool_(math::OBB const&, SceneViewData const&)>* local_b8;
        SceneViewData* local_b0;
        vector<std::pair<unsigned long, unsigned long>, BucketAllocatorEASTL> local_a8;
        Array<int, BucketAllocatorEASTL> local_90;
        vector<std::future<void>, BucketAllocatorEASTL> local_78;
        ReturnValue local_60;

        SceneViewData* local_50 = sceneViewData1;
        DrawCallState* local_48 = drawCallState;
        RT7Core* local_40 = rt7Core;
        RenderPassType local_34 = renderPassType;
        auto this_00 = GetRenderPassDrawableGroups(renderPassType);
        NXTPixToolkit* this_01 = (NXTPixToolkit*)(*this_00)[(unsigned long)drawableGroupType];
        auto pvVar4 = this_01->GetScreen();
        auto local_58 = pvVar4->size();
        if (local_58 != nullptr) {
            pTVar1 = field_6240;
            pvVar4 = (vector<oldscape::highlight::EntityWithCoord<oldscape::dash3d::Decor>>*)this_01->GetScreen();
            uVar5 = pvVar4->size();
            local_a8.InitialiseWorkGroups((unsigned long)pTVar1, uVar5);
            uVar5 = local_a8.size();
            if (uVar5 == 0) {
                pvVar4 = (vector<oldscape::highlight::EntityWithCoord<oldscape::dash3d::Decor>>*)this_01->GetScreen();
                lVar6 = pvVar4->size();
                if (lVar6 != 0) {
                    LogAssert("numWorkers > 0 || (numWorkers == 0 && drawableGroup.GetDrawableElements().size() == 0)",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                              "renderer/DrawableQueue.cpp",
                              152, nullptr);
                }
            }
            pvVar4 = (vector<oldscape::highlight::EntityWithCoord<oldscape::dash3d::Decor>>*)this_01->GetScreen();
            uVar7 = pvVar4->size();
            local_90 = Array<int, BucketAllocatorEASTL>(uVar7);
            local_78 = eastl::vector<std::future<void>, BucketAllocatorEASTL>();
            local_78.reserve(uVar5);
            if (uVar5 != 0) {
                pTVar1 = field_6240;
                uVar7 = 0;
                do {
                    local_d0 = &local_a8;
                    local_c0 = &local_90;
                    local_b8 = callback;
                    local_b0 = sceneViewData2;
                    local_d8 = uVar7;
                    local_c8 = this_01;
                    ThreadPool::AddTask<DrawableQueue::RenderGroupWithAsyncTest(
                        RT7Core&, render::DrawCallState const&, SceneViewData const&, DrawableGroupType, RenderPassType,
                        EffectManager&, std::function<bool(math::OBB const&, SceneViewData const&)> const&,
                        SceneViewData const&)::__19>(&local_60, (char*)pTVar1, (__19*)&local_d8);
                    local_78.push_back(local_60);
                    uVar7 = uVar7 + 1;
                } while (uVar5 != uVar7);
                uVar7 = 0;
                do {
                    pfVar8 = &local_78[uVar7];
                    if (!(pfVar8->valid())) {
                        LogAssert("workers[i].valid()",
                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                  "runetek7/renderer/DrawableQueue.cpp",
                                  182, nullptr);
                    }
                    pfVar8 = &local_78[uVar7];
                    pfVar8->wait();
                    uVar7 = uVar7 + 1;
                } while (uVar5 != uVar7);
            }
            puVar14 = &DAT_00000001;
            if (&DAT_00000001 < local_58) {
                puVar14 = local_58;
            }
            arg1 = nullptr;
            do {
                this_02 = (vector<DrawableElementInfo>*)this_01->GetScreen();
                arg2 = arg1;
                lVar6 = (*this_02)[(unsigned long)arg1];
                if (!(((lVar6 + 8)) != arg2)) {
                    LogAssert("drawable.m_drawableElement != nullptr",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                              "renderer/DrawableQueue.cpp",
                              190, nullptr);
                }
                piVar9 = &local_90[(unsigned long)arg1];
                if (*piVar9 != 0) {
                    plVar10 = (long*)(*((lVar6 + 8))).operator->();
                    (**(void (**)(...))(*plVar10 + 24))(plVar10, local_40, local_48, local_50, local_34, effectManager);
                }
                arg1 = arg1 + 1;
            } while (puVar14 != arg1);
            this_03 = local_40->GetDrawableBatchRenderers();
            plVar10 = std::array<DrawableBatchRenderer*, 1ul>::begin();
            plVar11 = std::array<DrawableBatchRenderer*, 1ul>::end();
            for (; plVar10 != plVar11; plVar10 = plVar10 + 1) {
                pRVar13 = (RT7Core*)*plVar10;
                uVar12 = this_03->GetRenderContext();
                pRVar13->~(uVar12, local_48, local_50, (unsigned long)local_34, effectManager);
                this_03 = pRVar13;
            }
        }
    }

    // 0x1007e26e0
    void DrawableQueue::Iter(DrawableGroupType drawableGroupType, RenderPassType renderPassType,
                             std::function<void(DrawableElementInfo const&)> const& callback) const {
        DrawableElementInfo* drawableElementInfo;

        auto this_00 = GetRenderPassDrawableGroups(renderPassType);
        NXTPixToolkit* this_01 = (NXTPixToolkit*)(*this_00)[(unsigned long)drawableGroupType];
        auto this_02 = this_01->GetScreen();
        drawableElementInfo = (DrawableElementInfo*)this_02->HeapBeginPtr();
        auto pDVar1 = this_02->end();
        for (; drawableElementInfo != pDVar1; drawableElementInfo = drawableElementInfo + 1) {
            std::function<void(DrawableElementInfo const&)>::operator()(
                (function<void(DrawableElementInfo const&)>*)callback, drawableElementInfo);
        }
    }

    // 0x1007e2780
    void DrawableQueue::Iter(DrawableGroupType drawableGroupType, RenderPassType renderPassType,
                             std::function<void(DrawableElementInfo&)> const& callback) {
        DrawableElementInfo* drawableElementInfo;

        auto this_00 = GetRenderPassDrawableGroups(renderPassType);
        NXTPixToolkit* this_01 = (NXTPixToolkit*)(*this_00)[(unsigned long)drawableGroupType];
        auto this_02 = this_01->GetScreen();
        drawableElementInfo = (DrawableElementInfo*)this_02->HeapBeginPtr();
        auto pDVar1 = this_02->end();
        for (; drawableElementInfo != pDVar1; drawableElementInfo = drawableElementInfo + 1) {
            std::function<void(DrawableElementInfo&)>::operator()((function<void(DrawableElementInfo&)>*)callback,
                                                                  drawableElementInfo);
        }
    }

    // 0x1007e2800
    void DrawableQueue::Filter(
        DrawableGroupType drawableGroupType, RenderPassType renderPassType,
        std::function<bool(Drawable*, std::unique_ptr<DrawableElement, DrawableElementDeleter> const&)> const&
            callback) {
        function<bool(Drawable*, std::unique_ptr<DrawableElement, DrawableElementDeleter> const&)> local_68[48];
        long local_38;

        auto this_00 = GetRenderPassDrawableGroups(renderPassType);
        NXTPixToolkit* this_01 = (NXTPixToolkit*)(*this_00)[(unsigned long)drawableGroupType];
        auto this_02 = this_01->GetScreen();
        auto pDVar1 = this_02->HeapBeginPtr();
        auto pDVar2 = this_02->end();
        new (local_68)
            std::function<bool(Drawable*, std::unique_ptr<DrawableElement, DrawableElementDeleter> const&)>(callback);
        pDVar1 = std::remove_if<
            DrawableElementInfo*,
            (DrawableGroupType)
                ->Filter(RenderPassType,
                         std::function<bool(Drawable*, std::unique_ptr<DrawableElement,
                                                                       DrawableElementDeleter> const&)> const&)::__20>(
            pDVar1, pDVar2, (__20*)local_68);
        Filter(DrawableGroupType, RenderPassType,
               std::function<bool(Drawable*, std::unique_ptr<DrawableElement, DrawableElementDeleter> const&)> const&)::
            $_20::~__20((__20*)local_68);
        pDVar2 = (DrawableElementInfo*)this_02->end();
        this_02->erase(pDVar1, pDVar2);
    }

    // 0x1007e29e0
    void DrawableQueue::FilterAsync(
        DrawableGroupType drawableGroupType, RenderPassType renderPassType,
        std::function<bool(Drawable*, std::unique_ptr<DrawableElement, DrawableElementDeleter> const&)> const&
            callback) {
        long lVar5;
        future<void>* pfVar7;
        DrawableElementInfo* drawableElementInfo1;
        int* piVar10;
        DrawableElementInfo* pDVar11;
        unsigned long local_c0;
        vector<std::pair<unsigned long, unsigned long>, BucketAllocatorEASTL>* local_b8;
        Array<int, BucketAllocatorEASTL>* local_b0;
        function<bool_(Drawable*, std::unique_ptr<DrawableElement, DrawableElementDeleter> const&)>* local_a8;
        Layout* local_a0;
        vector<std::pair<unsigned long, unsigned long>, BucketAllocatorEASTL> local_98;
        ReturnValue local_50;
        function<bool_(Drawable*, std::unique_ptr<DrawableElement, DrawableElementDeleter> const&)>* local_48;

        local_48 = callback;
        auto this_00 = GetRenderPassDrawableGroups(renderPassType);
        NXTPixToolkit* this_01 = (NXTPixToolkit*)(*this_00)[(unsigned long)drawableGroupType];
        auto local_38 = this_01->GetScreen();
        ThreadPool* arg1 = field_6240;
        auto pvVar3 = this_01->GetScreen();
        unsigned long uVar4 = pvVar3->size();
        ThreadPool* local_40 = arg1;
        local_98.InitialiseWorkGroups((unsigned long)arg1, uVar4);
        uVar4 = local_98.size();
        if (uVar4 == 0) {
            pvVar3 = (vector<oldscape::highlight::EntityWithCoord<oldscape::dash3d::Decor>>*)this_01->GetScreen();
            lVar5 = pvVar3->size();
            if (lVar5 != 0) {
                LogAssert("numWorkers > 0 || (numWorkers == 0 && drawableGroup.GetDrawableElements().size() == 0)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                          "renderer/DrawableQueue.cpp",
                          255, nullptr);
            }
        }
        pvVar3 = (vector<oldscape::highlight::EntityWithCoord<oldscape::dash3d::Decor>>*)this_01->GetScreen();
        unsigned long uVar6 = pvVar3->size();
        Array<int, BucketAllocatorEASTL> local_80(uVar6);
        vector<std::future<void>, BucketAllocatorEASTL> local_68;
        local_68.reserve(uVar4);
        if (uVar4 != 0) {
            uVar6 = 0;
            do {
                local_b8 = &local_98;
                local_b0 = &local_80;
                local_a8 = local_48;
                local_a0 = local_38;
                local_c0 = uVar6;
                ThreadPool::AddTask<DrawableQueue::FilterAsync(
                    DrawableGroupType, RenderPassType,
                    std::function<bool(Drawable*,
                                       std::unique_ptr<DrawableElement, DrawableElementDeleter> const&)> const&)::__21>(
                    &local_50, (char*)local_40, (__21*)&local_c0);
                local_68.push_back(local_50);
                uVar6 = uVar6 + 1;
            } while (uVar4 != uVar6);
            uVar6 = 0;
            do {
                pfVar7 = &local_68[uVar6];
                if (!(pfVar7->valid())) {
                    LogAssert("workers[i].valid()",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                              "renderer/DrawableQueue.cpp",
                              281, nullptr);
                }
                pfVar7 = &local_68[uVar6];
                pfVar7->wait();
                uVar6 = uVar6 + 1;
            } while (uVar4 != uVar6);
        }
        auto piVar8 = local_80.data();
        Layout* pLVar1 = local_38;
        auto pDVar9 = local_38->HeapBeginPtr();
        drawableElementInfo1 = (DrawableElementInfo*)pLVar1->HeapBeginPtr();
        while (true) {
            piVar10 = (int*)local_80.end();
            pLVar1 = local_38;
            if (piVar8 == piVar10)
                break;
            pDVar11 = drawableElementInfo1;
            if (*piVar8 != 0) {
                pDVar11 = drawableElementInfo1 + 1;
                *drawableElementInfo1 = *pDVar9;
            }
            pDVar9 = pDVar9 + 1;
            piVar8 = piVar8 + 1;
            drawableElementInfo1 = pDVar11;
        }
        pDVar9 = (DrawableElementInfo*)local_38->end();
        pLVar1->erase(drawableElementInfo1, pDVar9);
        local_98.~vector();
    }

    // 0x1007e2e50
    void DrawableQueue::FilterMulti(
        DrawableGroupType drawableGroupType, RenderPassType renderPassType1, RenderPassType renderPassType2,
        std::function<bool(Drawable*, std::unique_ptr<DrawableElement, DrawableElementDeleter> const&)> const&
            callback) {
        DrawableElementInfo* drawableElementInfo2;
        DrawableElementInfo* drawableElementInfo3;
        function<bool_(Drawable*, std::unique_ptr<DrawableElement, DrawableElementDeleter> const&)>* arg5;
        uint8_t auVar6[16];
        long local_38;

        arg5 = callback;
        auto paVar1 = GetRenderPassDrawableGroups(renderPassType1);
        NXTPixToolkit* pNVar2 = (NXTPixToolkit*)(*paVar1)[(unsigned long)drawableGroupType];
        auto this_00 = pNVar2->GetScreen();
        paVar1 = (array<DrawableGroup, 13ul>*)GetRenderPassDrawableGroups(renderPassType2);
        pNVar2 = (NXTPixToolkit*)(*paVar1)[(unsigned long)drawableGroupType];
        auto this_01 = pNVar2->GetScreen();
        long lVar3 = this_00->size();
        long lVar4 = this_01->size();
        if (lVar3 != lVar4) {
            LogAssert("drawableElements.size() == mirrorElements.size()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "renderer/DrawableQueue.cpp",
                      313, nullptr);
        }
        auto pDVar5 = this_00->HeapBeginPtr();
        drawableElementInfo2 = (DrawableElementInfo*)this_00->end();
        drawableElementInfo3 = (DrawableElementInfo*)this_01->HeapBeginPtr();
        this_01->end();
        DrawableElementInfo local_68(Drawable*, std::unique_ptr<DrawableElement, DrawableElementDeleter> const&) >
            (callback);
        auVar6 = remove_multi_if<
            DrawableElementInfo*,
            (DrawableGroupType)
                ->FilterMulti(
                    RenderPassType, RenderPassType,
                    std::function<bool(Drawable*,
                                       std::unique_ptr<DrawableElement, DrawableElementDeleter> const&)> const&)::__22>(
            pDVar5, drawableElementInfo2, drawableElementInfo3, &local_68, (__22*)arg5);
        FilterMulti(
            DrawableGroupType, RenderPassType, RenderPassType,
            std::function<bool(Drawable*, std::unique_ptr<DrawableElement, DrawableElementDeleter> const&)> const&)::
            $_22::~__22(&local_68);
        pDVar5 = (DrawableElementInfo*)this_00->end();
        this_00->erase(auVar6._0_8_, pDVar5);
        pDVar5 = (DrawableElementInfo*)this_01->end();
        this_01->erase(auVar6._8_8_, pDVar5);
    }

    // 0x1007e3100
    void DrawableQueue::FilterMultiAsync(
        DrawableGroupType drawableGroupType, RenderPassType renderPassType1, RenderPassType renderPassType2,
        std::function<bool(Drawable*, std::unique_ptr<DrawableElement, DrawableElementDeleter> const&)> const&
            callback) {
        future<void>* pfVar9;
        DrawableElementInfo* drawableElementInfo;
        DrawableElementInfo* drawableElementInfo1;
        int* piVar13;
        DrawableElementInfo* pDVar14;
        DrawableElementInfo* pDVar15;
        unsigned long local_c8;
        vector<std::pair<unsigned long, unsigned long>, BucketAllocatorEASTL>* local_c0;
        Array<int, BucketAllocatorEASTL>* local_b8;
        function<bool_(Drawable*, std::unique_ptr<DrawableElement, DrawableElementDeleter> const&)>* local_b0;
        vector<oldscape::highlight::EntityWithCoord<oldscape::dash3d::Decor>>* local_a8;
        vector<std::pair<unsigned long, unsigned long>, BucketAllocatorEASTL> local_a0;
        ReturnValue local_58;
        function<bool_(Drawable*, std::unique_ptr<DrawableElement, DrawableElementDeleter> const&)>* local_50;

        local_50 = callback;
        auto paVar3 = GetRenderPassDrawableGroups(renderPassType1);
        NXTPixToolkit* this_00 = (NXTPixToolkit*)(*paVar3)[(unsigned long)drawableGroupType];
        auto local_38 = this_00->GetScreen();
        paVar3 = (array<DrawableGroup, 13ul>*)GetRenderPassDrawableGroups(renderPassType2);
        NXTPixToolkit* this_01 = (NXTPixToolkit*)(*paVar3)[(unsigned long)drawableGroupType];
        auto local_40 = this_01->GetScreen();
        auto pvVar4 = this_00->GetScreen();
        long lVar5 = pvVar4->size();
        pvVar4 = (vector<oldscape::highlight::EntityWithCoord<oldscape::dash3d::Decor>>*)this_01->GetScreen();
        long lVar6 = pvVar4->size();
        if (lVar5 != lVar6) {
            LogAssert("drawableGroup.GetDrawableElements().size() == mirrorGroup.GetDrawableElements().size()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "renderer/DrawableQueue.cpp",
                      334, nullptr);
        }
        ThreadPool* arg1 = field_6240;
        pvVar4 = (vector<oldscape::highlight::EntityWithCoord<oldscape::dash3d::Decor>>*)this_00->GetScreen();
        unsigned long uVar7 = pvVar4->size();
        ThreadPool* local_48 = arg1;
        local_a0.InitialiseWorkGroups((unsigned long)arg1, uVar7);
        uVar7 = local_a0.size();
        if (uVar7 == 0) {
            lVar5 = local_38->size();
            if (lVar5 != 0) {
                LogAssert("numWorkers > 0 || (numWorkers == 0 && drawableElements.size() == 0)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                          "renderer/DrawableQueue.cpp",
                          341, nullptr);
            }
        }
        unsigned long uVar8 = local_38->size();
        Array<int, BucketAllocatorEASTL> local_88(uVar8);
        vector<std::future<void>, BucketAllocatorEASTL> local_70;
        local_70.reserve(uVar7);
        if (uVar7 != 0) {
            uVar8 = 0;
            do {
                local_c0 = &local_a0;
                local_b8 = &local_88;
                local_b0 = local_50;
                local_a8 = local_38;
                local_c8 = uVar8;
                ThreadPool::AddTask<DrawableQueue::FilterMultiAsync(
                    DrawableGroupType, RenderPassType, RenderPassType,
                    std::function<bool(Drawable*,
                                       std::unique_ptr<DrawableElement, DrawableElementDeleter> const&)> const&)::__23>(
                    &local_58, (char*)local_48, (__23*)&local_c8);
                local_70.push_back(local_58);
                uVar8 = uVar8 + 1;
            } while (uVar7 != uVar8);
            uVar8 = 0;
            do {
                pfVar9 = &local_70[uVar8];
                if (!(pfVar9->valid())) {
                    LogAssert("workers[i].valid()",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                              "renderer/DrawableQueue.cpp",
                              367, nullptr);
                }
                pfVar9 = &local_70[uVar8];
                pfVar9->wait();
                uVar8 = uVar8 + 1;
            } while (uVar7 != uVar8);
        }
        auto piVar10 = local_88.data();
        pvVar4 = local_38;
        auto pDVar11 = local_38->HeapBeginPtr();
        auto pDVar12 = pvVar4->HeapBeginPtr();
        Layout* pLVar1 = local_40;
        drawableElementInfo = (DrawableElementInfo*)local_40->HeapBeginPtr();
        drawableElementInfo1 = (DrawableElementInfo*)pLVar1->HeapBeginPtr();
        while (true) {
            piVar13 = (int*)local_88.end();
            pvVar4 = local_38;
            if (piVar10 == piVar13)
                break;
            pDVar14 = drawableElementInfo1;
            pDVar15 = pDVar12;
            if (*piVar10 != 0) {
                pDVar15 = pDVar12 + 1;
                *pDVar12 = *pDVar11;
                pDVar14 = drawableElementInfo1 + 1;
                *drawableElementInfo1 = *drawableElementInfo;
            }
            pDVar11 = pDVar11 + 1;
            drawableElementInfo = drawableElementInfo + 1;
            piVar10 = piVar10 + 1;
            drawableElementInfo1 = pDVar14;
            pDVar12 = pDVar15;
        }
        pDVar11 = (DrawableElementInfo*)local_38->end();
        pvVar4->erase(pDVar12, pDVar11);
        pLVar1 = local_40;
        pDVar12 = (DrawableElementInfo*)local_40->end();
        pLVar1->erase(drawableElementInfo1, pDVar12);
        local_a0.~vector();
    }

    // 0x1007e3620
    void DrawableQueue::RenderDebug(DrawableGroupType drawableGroupType, RenderPassType renderPassType) const {
        long* plVar1;
        uint64_t uVar4;
        unique_ptr<DrawableElement, DrawableElementDeleter>* puVar5;

        auto this_00 = GetRenderPassDrawableGroups(renderPassType);
        NXTPixToolkit* this_01 = (NXTPixToolkit*)(*this_00)[(unsigned long)drawableGroupType];
        auto this_02 = this_01->GetScreen();
        auto puVar2 = this_02->HeapBeginPtr();
        auto puVar3 = this_02->end();
        if (puVar2 != puVar3) {
            puVar2 = puVar2 + 8;
            do {
                plVar1 = *(long**)(puVar2 + 8);
                uVar4 = **puVar2;
                (**(void (**)(...))(*plVar1 + 40))(plVar1, renderPassType, uVar4);
                puVar5 = puVar2 + 16;
                puVar2 = puVar2 + 24;
            } while (puVar5 != puVar3);
        }
    }

    // 0x1007e36b0
    void DrawableQueue::ClearGroup(DrawableGroupType drawableGroupType, RenderPassType renderPassType) {
        auto this_00 = GetRenderPassDrawableGroups(renderPassType);
        ((DrawableGroup*)(*this_00)[(unsigned long)drawableGroupType])->ClearDrawableElements();
    }

    // 0x1007e3700
    void DrawableQueue::ClearAllGroups(RenderPassType renderPassType) {
        GetRenderPassDrawableGroups(renderPassType);
        DrawableGroup* this_00 = (DrawableGroup*)std::array<DrawableGroup, 13ul>::begin();
        DrawableGroup* pDVar1 = (DrawableGroup*)std::array<DrawableGroup, 13ul>::end();
        for (; this_00 != pDVar1; this_00 = this_00 + 2) {
            this_00->ClearDrawableElements();
        }
    }

    // 0x1007e3750
    void DrawableQueue::ClearAllGroupsInAllPasses() {
        DrawableGroup* this_01;
        DrawableGroup* pDVar2;

        Layout* this_00 = (Layout*)std::array<DrawableGroupList, 10ul>::begin();
        Layout* pLVar1 = (Layout*)std::array<DrawableGroupList, 10ul>::end();
        for (; this_00 != pLVar1; this_00 = this_00 + 624) {
            this_00->SSOBeginPtr();
            this_01 = (DrawableGroup*)std::array<DrawableGroup, 13ul>::begin();
            pDVar2 = (DrawableGroup*)std::array<DrawableGroup, 13ul>::end();
            for (; this_01 != pDVar2; this_01 = this_01 + 2) {
                this_01->ClearDrawableElements();
            }
        }
    }

    // 0x1007e3810
    void DrawableQueue::BinTriangles(RenderPassType renderPassType, const SceneViewData& sceneViewData,
                                     BinInfoSSE& binInfoSSE) {
        Layout* this_01;
        long lVar2;
        long lVar3;

        GetRenderPassDrawableGroups(renderPassType);
        NXTPixToolkit* this_00 = (NXTPixToolkit*)std::array<DrawableGroup, 13ul>::begin();
        NXTPixToolkit* pNVar1 = (NXTPixToolkit*)std::array<DrawableGroup, 13ul>::end();
        do {
            if (this_00 == pNVar1) {
                return;
            }
            this_01 = (Layout*)this_00->GetScreen();
            lVar2 = this_01->HeapBeginPtr();
            lVar3 = this_01->end();
            for (; lVar2 != lVar3; lVar2 = lVar2 + 24) {
                if (*(long*)(lVar2 + 16) == 0) {
                    LogAssert("drawable.m_drawable != nullptr",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                              "renderer/DrawableQueue.cpp",
                              438, nullptr);
                }
                (**(void (**)(...))(**(long**)(lVar2 + 16) + 24))(*(long**)(lVar2 + 16), sceneViewData, binInfoSSE);
            }
            this_00 = (NXTPixToolkit*)(this_00->m_screen + 32);
        } while (true);
    }

} // namespace jag::graphics
