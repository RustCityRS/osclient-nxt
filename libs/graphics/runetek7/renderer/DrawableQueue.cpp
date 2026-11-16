// libs/graphics/runetek7/renderer/DrawableQueue.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

#include "DrawableQueue.h"

namespace jag::graphics {
    // 0x1007e1a40, 112 bytes, base-object constructor, placed by class name and debug map
    // DrawableQueue::DrawableQueue(ThreadPool*, eastl::fixed_vector<DrawableQueue::RenderPassDrawableGroupsConfig, 10ul, true, eastl::allocator> const&)
    void DrawableQueue::DrawableQueue(ThreadPool* param_1, fixed_vector* param_2) {
        new (this) std::array<DrawableGroupList, 10ul>();
        field_6240 = param_1;
        if (param_1 == (ThreadPool*)0) {
            /* WARNING: Subroutine does not return */
            LogAssert("pThreadPool",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "renderer/DrawableQueue.cpp",
                      23, (char*)0);
        }
        SetMaxGroupDrawables(this, param_2);
    }

    // 0x1007e1ac0, 256 bytes, placed by class name and debug map
    // DrawableQueue::SetMaxGroupDrawables(eastl::fixed_vector<DrawableQueue::RenderPassDrawableGroupsConfig, 10ul, true, eastl::allocator> const&)
    void DrawableQueue::SetMaxGroupDrawables(fixed_vector* param_1) {
        uint uVar1;
        int* piVar2;
        int* piVar3;
        DrawableGroupList* pDVar4;
        array<DrawableGroup, 13ul>* this_00;
        NXTPixToolkit* this_01;
        NXTPixToolkit* pNVar5;
        vector<DrawableElementInfo, eastl::allocator>* this_02;

        piVar2 = (int*)param_1->HeapBeginPtr();
        piVar3 = (int*)param_1->end();
        while (true) {
            if (piVar2 == piVar3) {
                return;
            }
            if (*piVar2 == -1)
                break;
            uVar1 = oldscape::option::transforms::IntegerToValueTypeTransform<int>::IntegerToValueType(*piVar2);
            pDVar4 = (DrawableGroupList*)std::array<DrawableGroupList, 10ul>::operator[](
                (array<DrawableGroupList, 10ul>*)this, (ulong)uVar1);
            pDVar4->SetOpaqueGroupsSortKeyType(piVar2[4]);
            this_00 = (array<DrawableGroup, 13ul>*)GetRenderPassDrawableGroups(this, *piVar2);
            this_01 = (NXTPixToolkit*)std::array<DrawableGroup, 13ul>::begin(this_00);
            pNVar5 = (NXTPixToolkit*)std::array<DrawableGroup, 13ul>::end(this_00);
            for (; this_01 != pNVar5; this_01 = (NXTPixToolkit*)&this_01->field_48) {
                this_02 = (vector<DrawableElementInfo, eastl::allocator>*)this_01->GetScreen();
                eastl::vector<DrawableElementInfo, eastl::allocator>::reserve(this_02, *(ulong*)(piVar2 + 2));
            }
            piVar2 = piVar2 + 6;
        }
        /* WARNING: Subroutine does not return */
        LogAssert("renderPassConfig.m_renderPass != RenderPassType::UNKNOWN",
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/renderer/"
                  "DrawableQueue.cpp",
                  33, (char*)0);
    }

    // 0x1007e1bd0, 16 bytes, complete-object constructor, placed by class name and debug map
    // DrawableQueue::DrawableQueue(ThreadPool*, eastl::fixed_vector<DrawableQueue::RenderPassDrawableGroupsConfig, 10ul, true, eastl::allocator> const&): jumps straight to the base-object constructor

    // 0x1007e1cd0, 320 bytes, placed by class name
    // DrawableQueue::RenderGroup(RT7Core&, render::DrawCallState const&, SceneViewData const&, DrawableGroupType, RenderPassType, EffectManager&)
    void DrawableQueue::RenderGroup(RT7Core* param_1, undefined8 param_2, undefined8 param_3, ulong param_5,
                                    undefined4 param_6, undefined8 param_7) {
        array<DrawableGroup, 13ul>* this_00;
        NXTPixToolkit* this_01;
        Layout* this_02;
        long lVar2;
        long lVar3;
        long* plVar4;
        RT7Core* pRVar5;
        long* plVar6;
        undefined8 uVar7;
        RT7Core* pRVar8;

        this_00 = (array<DrawableGroup, 13ul>*)GetRenderPassDrawableGroups(this, param_6);
        pRVar5 = (RT7Core*)(param_5 & 4294967295);
        this_01 = (NXTPixToolkit*)std::array<DrawableGroup, 13ul>::operator[](this_00, (ulong)pRVar5);
        this_02 = (Layout*)this_01->GetScreen();
        lVar2 = eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::
            Layout::HeapBeginPtr(this_02);
        lVar3 = this_02->end();
        while (true) {
            if (lVar2 == lVar3) {
                pRVar5 = (RT7Core*)param_1->GetDrawableBatchRenderers();
                plVar4 = (long*)pRVar5->begin();
                plVar6 = (long*)pRVar5->end();
                for (; plVar4 != plVar6; plVar4 = plVar4 + 1) {
                    pRVar8 = (RT7Core*)*plVar4;
                    uVar7 = pRVar5->GetRenderContext();
                    (*(code*)pRVar8->field_0[2])(pRVar8, uVar7, param_2, param_3, param_6, param_7);
                    pRVar5 = pRVar8;
                }
                return;
            }
            if (!std::operator!=((unique_ptr*)(lVar2 + 8), (_func_decltype_nullptr*)pRVar5))
                break;
            plVar4 = (long*)std::unique_ptr<DrawableElement, DrawableElementDeleter>::operator->(
                (unique_ptr<DrawableElement, DrawableElementDeleter>*)(lVar2 + 8));
            pRVar5 = param_1;
            (**(code**)(*plVar4 + 24))(plVar4, param_1, param_2, param_3, param_6, param_7);
            lVar2 = lVar2 + 24;
        }
        /* WARNING: Subroutine does not return */
        LogAssert("drawable.m_drawableElement != nullptr",
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/renderer/"
                  "DrawableQueue.cpp",
                  61, (char*)0);
    }

    // 0x1007e1e80, 336 bytes, placed by class name
    // DrawableQueue::RenderGroup(RT7Core&, render::DrawCallState const&, SceneViewData const&, DrawableGroupType, RenderPassType, EffectManager&, unsigned int)
    void DrawableQueue::RenderGroup(RT7Core* param_1, undefined8 param_2, undefined8 param_3, ulong param_5,
                                    undefined4 param_6, undefined8 param_7, uint param_8) {
        uint uVar2;
        array<DrawableGroup, 13ul>* this_00;
        NXTPixToolkit* this_01;
        Layout* this_02;
        DrawableSortKey* this_03;
        DrawableSortKey* pDVar3;
        long* plVar4;
        RT7Core* pRVar5;
        long* plVar6;
        undefined8 uVar7;
        RT7Core* pRVar8;

        this_00 = (array<DrawableGroup, 13ul>*)GetRenderPassDrawableGroups(this, param_6);
        pRVar5 = (RT7Core*)(param_5 & 4294967295);
        this_01 = (NXTPixToolkit*)std::array<DrawableGroup, 13ul>::operator[](this_00, (ulong)pRVar5);
        this_02 = (Layout*)this_01->GetScreen();
        this_03 = (DrawableSortKey*)
            eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                    eastl::allocator>>::Layout::HeapBeginPtr(this_02);
        pDVar3 = (DrawableSortKey*)this_02->end();
        while (true) {
            if (this_03 == pDVar3) {
                pRVar5 = (RT7Core*)param_1->GetDrawableBatchRenderers();
                plVar4 = (long*)pRVar5->begin();
                plVar6 = (long*)pRVar5->end();
                for (; plVar4 != plVar6; plVar4 = plVar4 + 1) {
                    pRVar8 = (RT7Core*)*plVar4;
                    uVar7 = pRVar5->GetRenderContext();
                    (*(code*)pRVar8->field_0[2])(pRVar8, uVar7, param_2, param_3, param_6, param_7);
                    pRVar5 = pRVar8;
                }
                return;
            }
            if (!std::operator!=((unique_ptr*)(this_03 + 1), (_func_decltype_nullptr*)pRVar5))
                break;
            uVar2 = this_03->GetLayer();
            if ((param_8 & uVar2) != 0) {
                plVar4 = (long*)std::unique_ptr<DrawableElement, DrawableElementDeleter>::operator->(
                    (unique_ptr<DrawableElement, DrawableElementDeleter>*)(this_03 + 1));
                pRVar5 = param_1;
                (**(code**)(*plVar4 + 24))(plVar4, param_1, param_2, param_3, param_6, param_7);
            }
            this_03 = this_03 + 3;
        }
        /* WARNING: Subroutine does not return */
        LogAssert("drawable.m_drawableElement != nullptr",
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/renderer/"
                  "DrawableQueue.cpp",
                  84, (char*)0);
    }

    // 0x1007e1fe0, 384 bytes, placed by class name
    // DrawableQueue::RenderGroup(RT7Core&, render::DrawCallState const&, SceneViewData const&, DrawableGroupType, RenderPassType, EffectManager&, std::function<bool (math::OBB const&, SceneViewData const&)> const&, SceneViewData const&)
    /* DrawableQueue::RenderGroup(RT7Core&, render::DrawCallState
   const&, SceneViewData const&, DrawableGroupType,
   RenderPassType, EffectManager&, std::function<bool (math::OBB
   const&, SceneViewData const&)> const&, SceneViewData const&) */

    void DrawableQueue::RenderGroup(DrawableQueue* param_1, RT7Core* param_2, undefined8 param_3, undefined8 param_4,
                                    ulong param_5, undefined4 param_6, undefined8 param_7, OBB* param_8) {
        unique_ptr<DrawableElement, DrawableElementDeleter>* this;
        array<DrawableGroup, 13ul>* this_00;
        NXTPixToolkit* this_01;
        Layout* this_02;
        long lVar3;
        long lVar4;
        long lVar5;
        RT7Core* pRVar6;
        long* plVar7;
        long* plVar8;
        undefined8 uVar9;
        RT7Core* pRVar10;

        this_00 = (array<DrawableGroup, 13ul>*)GetRenderPassDrawableGroups(param_1, param_6);
        pRVar6 = (RT7Core*)(param_5 & 4294967295);
        this_01 = (NXTPixToolkit*)std::array<DrawableGroup, 13ul>::operator[](this_00, (ulong)pRVar6);
        this_02 = (Layout*)this_01->GetScreen();
        lVar3 = eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::
            Layout::HeapBeginPtr(this_02);
        lVar4 = this_02->end();
        do {
            if (lVar3 == lVar4) {
                pRVar6 = (RT7Core*)param_2->GetDrawableBatchRenderers();
                plVar7 = (long*)pRVar6->begin();
                plVar8 = (long*)pRVar6->end();
                for (; plVar7 != plVar8; plVar7 = plVar7 + 1) {
                    pRVar10 = (RT7Core*)*plVar7;
                    uVar9 = pRVar6->GetRenderContext();
                    (*(code*)pRVar10->field_0[2])(pRVar10, uVar9, param_3, param_4, param_6, param_7);
                    pRVar6 = pRVar10;
                }
                return;
            }
            this = (unique_ptr<DrawableElement, DrawableElementDeleter>*)(lVar3 + 8);
            if (!std::operator!=((unique_ptr*)this, (_func_decltype_nullptr*)pRVar6)) {
                /* WARNING: Subroutine does not return */
                LogAssert("drawable.m_drawableElement != nullptr",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                          "renderer/DrawableQueue.cpp",
                          111, (char*)0);
            }
            lVar5 = std::unique_ptr<DrawableElement, DrawableElementDeleter>::operator*(this);
            if ((*(byte*)(lVar5 + 96) & 4) == 0) {
                pRVar6 = (RT7Core*)(lVar5 + 16);
                if (std::function<bool(math::OBB_const&, SceneViewData_const&)>::operator()(
                        param_8, (SceneViewData*)pRVar6) != '\0')
                    goto LAB_1007e2050;
            } else {
            LAB_1007e2050:
                plVar7 = (long*)std::unique_ptr<DrawableElement, DrawableElementDeleter>::operator->(this);
                pRVar6 = param_2;
                (**(code**)(*plVar7 + 24))(plVar7, param_2, param_3, param_4, param_6, param_7);
            }
            lVar3 = lVar3 + 24;
        } while (true);
    }

    // 0x1007e2170, 896 bytes, placed by class name
    // DrawableQueue::RenderGroupWithAsyncTest(RT7Core&, render::DrawCallState const&, SceneViewData const&, DrawableGroupType, RenderPassType, EffectManager&, std::function<bool (math::OBB const&, SceneViewData const&)> const&, SceneViewData const&)
    /* DrawableQueue::RenderGroupWithAsyncTest(RT7Core&,
   render::DrawCallState const&, SceneViewData const&,
   DrawableGroupType, RenderPassType, EffectManager&,
   std::function<bool (math::OBB const&, SceneViewData const&)> const&,
   SceneViewData const&) */

    void DrawableQueue::RenderGroupWithAsyncTest(RT7Core* param_1, undefined8 param_2, undefined8 param_3,
                                                 ulong param_5, undefined4 param_6, undefined8 param_7,
                                                 undefined8 param_8, undefined8 param_9) {
        ThreadPool* pTVar1;
        char cVar2;
        bool bVar3;
        array<DrawableGroup, 13ul>* this_00;
        NXTPixToolkit* this_01;
        vector<oldscape::highlight::EntityWithCoord<oldscape::dash3d::Decor>, eastl::allocator>* pvVar4;
        ulong uVar5;
        long lVar6;
        ulong uVar7;
        future<void>* this_02;
        vector<DrawableElementInfo, eastl::allocator>* this_03;
        int* piVar8;
        long* plVar9;
        RT7Core* this_04;
        long* plVar10;
        undefined8 uVar11;
        _func_decltype_nullptr* p_Var12;
        RT7Core* pRVar13;
        _func_decltype_nullptr* p_Var14;
        _func_decltype_nullptr* p_Var15;
        ulong local_d8;
        vector<std::pair<unsigned long, unsigned long>, BucketAllocatorEASTL>* local_d0;
        NXTPixToolkit* local_c8;
        Array<int, BucketAllocatorEASTL>* local_c0;
        undefined8 local_b8;
        undefined8 local_b0;
        vector<std::pair<unsigned long, unsigned long>, BucketAllocatorEASTL> local_a8[24];
        Array<int, BucketAllocatorEASTL> local_90[24];
        vector<std::future<void>, BucketAllocatorEASTL> local_78[24];
        undefined1 local_60[8];
        _func_decltype_nullptr* local_58;
        undefined8 local_50;
        undefined8 local_48;
        RT7Core* local_40;
        undefined4 local_34;

        local_50 = param_3;
        local_48 = param_2;
        local_40 = param_1;
        local_34 = param_6;
        this_00 = (array<DrawableGroup, 13ul>*)GetRenderPassDrawableGroups(this, param_6);
        this_01 = (NXTPixToolkit*)std::array<DrawableGroup, 13ul>::operator[](this_00, param_5 & 4294967295);
        pvVar4 = (vector<oldscape::highlight::EntityWithCoord<oldscape::dash3d::Decor>, eastl::allocator>*)
                     this_01->GetScreen();
        local_58 = (_func_decltype_nullptr*)
            eastl::vector<oldscape::highlight::EntityWithCoord<oldscape::dash3d::Decor>, eastl::allocator>::size(
                pvVar4);
        if (local_58 != (_func_decltype_nullptr*)0) {
            pTVar1 = field_6240;
            pvVar4 = (vector<oldscape::highlight::EntityWithCoord<oldscape::dash3d::Decor>, eastl::allocator>*)
                         this_01->GetScreen();
            uVar5 =
                eastl::vector<oldscape::highlight::EntityWithCoord<oldscape::dash3d::Decor>, eastl::allocator>::size(
                    pvVar4);
            local_a8->InitialiseWorkGroups((ulong)pTVar1, uVar5);
            uVar5 = local_a8->size();
            if (uVar5 == 0) {
                pvVar4 = (vector<oldscape::highlight::EntityWithCoord<oldscape::dash3d::Decor>, eastl::allocator>*)
                             this_01->GetScreen();
                lVar6 = eastl::vector<oldscape::highlight::EntityWithCoord<oldscape::dash3d::Decor>,
                                      eastl::allocator>::size(pvVar4);
                if (lVar6 != 0) {
                    /* WARNING: Subroutine does not return */
                    LogAssert("numWorkers > 0 || (numWorkers == 0 && drawableGroup.GetDrawableElements().size() == 0)",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                              "renderer/DrawableQueue.cpp",
                              152, (char*)0);
                }
            }
            pvVar4 = (vector<oldscape::highlight::EntityWithCoord<oldscape::dash3d::Decor>, eastl::allocator>*)
                         this_01->GetScreen();
            uVar7 =
                eastl::vector<oldscape::highlight::EntityWithCoord<oldscape::dash3d::Decor>, eastl::allocator>::size(
                    pvVar4);
            Array<int, BucketAllocatorEASTL>::Array(local_90, uVar7);
            eastl::vector<std::future<void>, BucketAllocatorEASTL>::vector();
            eastl::vector<std::future<void>, BucketAllocatorEASTL>::reserve(local_78, uVar5);
            if (uVar5 != 0) {
                pTVar1 = field_6240;
                uVar7 = 0;
                do {
                    local_d0 = local_a8;
                    local_c0 = local_90;
                    local_b8 = param_8;
                    local_b0 = param_9;
                    local_d8 = uVar7;
                    local_c8 = this_01;
                    ThreadPool::AddTask<DrawableQueue::RenderGroupWithAsyncTest(
                        RT7Core&, render::DrawCallState_const&, SceneViewData_const&, DrawableGroupType, RenderPassType,
                        EffectManager&, std::function<bool(math::OBB_const&, SceneViewData_const&)> const&,
                        SceneViewData_const&)::__19>((ThreadPool*)local_60, (char*)pTVar1, (__19*)&local_d8);
                    eastl::vector<std::future<void>, BucketAllocatorEASTL>::push_back(local_78, (future*)local_60);
                    local_60->~future();
                    uVar7 = uVar7 + 1;
                } while (uVar5 != uVar7);
                uVar7 = 0;
                do {
                    this_02 = (future<void>*)eastl::vector<std::future<void>, BucketAllocatorEASTL>::operator[](
                        local_78, uVar7);
                    cVar2 = std::future<void>::valid(this_02);
                    if (cVar2 == '\0') {
                        /* WARNING: Subroutine does not return */
                        LogAssert("workers[i].valid()",
                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                  "runetek7/renderer/DrawableQueue.cpp",
                                  182, (char*)0);
                    }
                    eastl::vector<std::future<void>, BucketAllocatorEASTL>::operator[](local_78, uVar7);
                    std::future<void>::wait();
                    uVar7 = uVar7 + 1;
                } while (uVar5 != uVar7);
            }
            p_Var14 = (_func_decltype_nullptr*)&DAT_00000001;
            if (&DAT_00000001 < local_58) {
                p_Var14 = local_58;
            }
            p_Var15 = (_func_decltype_nullptr*)0;
            do {
                this_03 = (vector<DrawableElementInfo, eastl::allocator>*)this_01->GetScreen();
                p_Var12 = p_Var15;
                lVar6 = eastl::vector<DrawableElementInfo, eastl::allocator>::operator[](this_03, (ulong)p_Var15);
                bVar3 = std::operator!=((unique_ptr*)(lVar6 + 8), p_Var12);
                if (!bVar3) {
                    /* WARNING: Subroutine does not return */
                    LogAssert("drawable.m_drawableElement != nullptr",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                              "renderer/DrawableQueue.cpp",
                              190, (char*)0);
                }
                piVar8 = (int*)Array<int, BucketAllocatorEASTL>::operator[](local_90, (ulong)p_Var15);
                if (*piVar8 != 0) {
                    plVar9 = (long*)std::unique_ptr<DrawableElement, DrawableElementDeleter>::operator->(
                        (unique_ptr<DrawableElement, DrawableElementDeleter>*)(lVar6 + 8));
                    (**(code**)(*plVar9 + 24))(plVar9, local_40, local_48, local_50, local_34, param_7);
                }
                p_Var15 = p_Var15 + 1;
            } while (p_Var14 != p_Var15);
            this_04 = (RT7Core*)local_40->GetDrawableBatchRenderers();
            plVar9 = (long*)this_04->begin();
            plVar10 = (long*)this_04->end();
            for (; plVar9 != plVar10; plVar9 = plVar9 + 1) {
                pRVar13 = (RT7Core*)*plVar9;
                uVar11 = this_04->GetRenderContext();
                (*(code*)pRVar13->field_0[2])(pRVar13, uVar11, local_48, local_50, local_34, param_7);
                this_04 = pRVar13;
            }
            eastl::vector<std::future<void>, BucketAllocatorEASTL>::~vector(local_78);
            local_90->~Array();
            eastl::vector<std::pair<unsigned long, unsigned long>, BucketAllocatorEASTL>::~vector(local_a8);
        }
    }

    // 0x1007e26e0, 112 bytes, placed by class name
    // DrawableQueue::Iter(DrawableGroupType, RenderPassType, std::function<void (DrawableElementInfo const&)> const&) const
    /* DrawableQueue::Iter(DrawableGroupType,
   RenderPassType, std::function<void (DrawableElementInfo const&)>
   const&) const */

    void DrawableQueue::Iter(uint param_2, undefined4 param_3, function<void(DrawableElementInfo_const&)>* param_4) {
        array<DrawableGroup, 13ul>* this_00;
        NXTPixToolkit* this_01;
        Layout* this_02;
        DrawableElementInfo* pDVar1;
        DrawableElementInfo* pDVar2;

        this_00 = (array<DrawableGroup, 13ul>*)GetRenderPassDrawableGroups(this, param_3);
        this_01 = (NXTPixToolkit*)std::array<DrawableGroup, 13ul>::operator[](this_00, (ulong)param_2);
        this_02 = (Layout*)this_01->GetScreen();
        pDVar1 = (DrawableElementInfo*)
            eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                    eastl::allocator>>::Layout::HeapBeginPtr(this_02);
        pDVar2 = (DrawableElementInfo*)this_02->end();
        for (; pDVar1 != pDVar2; pDVar1 = pDVar1 + 1) {
            std::function<void(DrawableElementInfo_const&)>::operator()(param_4, pDVar1);
        }
    }

    // 0x1007e2780, 112 bytes, placed by class name
    // DrawableQueue::Iter(DrawableGroupType, RenderPassType, std::function<void (DrawableElementInfo&)> const&)
    /* DrawableQueue::Iter(DrawableGroupType,
   RenderPassType, std::function<void (DrawableElementInfo&)> const&)
    */

    void DrawableQueue::Iter(uint param_2, undefined4 param_3, function<void(DrawableElementInfo&)>* param_4) {
        array<DrawableGroup, 13ul>* this_00;
        NXTPixToolkit* this_01;
        Layout* this_02;
        DrawableElementInfo* pDVar1;
        DrawableElementInfo* pDVar2;

        this_00 = (array<DrawableGroup, 13ul>*)GetRenderPassDrawableGroups(this, param_3);
        this_01 = (NXTPixToolkit*)std::array<DrawableGroup, 13ul>::operator[](this_00, (ulong)param_2);
        this_02 = (Layout*)this_01->GetScreen();
        pDVar1 = (DrawableElementInfo*)
            eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                    eastl::allocator>>::Layout::HeapBeginPtr(this_02);
        pDVar2 = (DrawableElementInfo*)this_02->end();
        for (; pDVar1 != pDVar2; pDVar1 = pDVar1 + 1) {
            std::function<void(DrawableElementInfo&)>::operator()(param_4, pDVar1);
        }
    }

    // 0x1007e2800, 208 bytes, placed by class name
    // DrawableQueue::Filter(DrawableGroupType, RenderPassType, std::function<bool (Drawable*, std::unique_ptr<DrawableElement, DrawableElementDeleter> const&)> const&)
    /* DrawableQueue::Filter(DrawableGroupType,
   RenderPassType, std::function<bool (Drawable*,
   std::unique_ptr<DrawableElement, DrawableElementDeleter> const&)>
   const&) */

    void DrawableQueue::Filter(uint param_2, undefined4 param_3, function* param_4) {
        array<DrawableGroup, 13ul>* this_00;
        NXTPixToolkit* this_01;
        Layout* this_02;
        undefined8 uVar1;
        undefined8 uVar2;
        DrawableElementInfo* pDVar3;
        DrawableElementInfo* pDVar4;
        function<bool(Drawable*, std::unique_ptr<DrawableElement, DrawableElementDeleter> const&)> local_68[48];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        this_00 = (array<DrawableGroup, 13ul>*)GetRenderPassDrawableGroups(this, param_3);
        this_01 = (NXTPixToolkit*)std::array<DrawableGroup, 13ul>::operator[](this_00, (ulong)param_2);
        this_02 = (Layout*)this_01->GetScreen();
        uVar1 = eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::
            Layout::HeapBeginPtr(this_02);
        uVar2 = this_02->end();
        std::function<bool(Drawable*, std::unique_ptr<DrawableElement, DrawableElementDeleter> const&)>::function(
            local_68, param_4);
        pDVar3 = std::remove_if<
            DrawableElementInfo*,
            (DrawableGroupType)
                ->Filter(RenderPassType,
                         std::function<bool(Drawable*, std::unique_ptr<DrawableElement,
                                                                       DrawableElementDeleter> const&)> const&)::__20>(
            uVar1, uVar2, local_68);
        Filter(DrawableGroupType, RenderPassType,
               std::function<bool(Drawable*, std::unique_ptr<DrawableElement, DrawableElementDeleter> const&)> const&)::
            $_20::~__20((__20*)local_68);
        pDVar4 = (DrawableElementInfo*)this_02->end();
        this_02->erase(pDVar3, pDVar4);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x1007e29e0, 720 bytes, placed by class name
    // DrawableQueue::FilterAsync(DrawableGroupType, RenderPassType, std::function<bool (Drawable*, std::unique_ptr<DrawableElement, DrawableElementDeleter> const&)> const&)
    /* DrawableQueue::FilterAsync(DrawableGroupType,
   RenderPassType, std::function<bool (Drawable*,
   std::unique_ptr<DrawableElement, DrawableElementDeleter> const&)>
   const&) */

    void DrawableQueue::FilterAsync(uint param_2, undefined4 param_3, undefined8 param_4) {
        ThreadPool* pTVar1;
        Layout* pLVar2;
        char cVar3;
        array<DrawableGroup, 13ul>* this_00;
        NXTPixToolkit* this_01;
        vector<oldscape::highlight::EntityWithCoord<oldscape::dash3d::Decor>, eastl::allocator>* pvVar4;
        ulong uVar5;
        long lVar6;
        ulong uVar7;
        future<void>* this_02;
        int* piVar8;
        DrawableElementInfo* pDVar9;
        DrawableElementInfo* this_03;
        int* piVar10;
        DrawableElementInfo* pDVar11;
        ulong local_c0;
        vector<std::pair<unsigned long, unsigned long>, BucketAllocatorEASTL>* local_b8;
        Array<int, BucketAllocatorEASTL>* local_b0;
        undefined8 local_a8;
        Layout* local_a0;
        vector<std::pair<unsigned long, unsigned long>, BucketAllocatorEASTL> local_98[24];
        Array<int, BucketAllocatorEASTL> local_80[24];
        vector<std::future<void>, BucketAllocatorEASTL> local_68[24];
        undefined1 local_50[16];
        ThreadPool* local_40;
        Layout* local_38;

        local_50._8_8_ = param_4;
        this_00 = (array<DrawableGroup, 13ul>*)GetRenderPassDrawableGroups(this, param_3);
        this_01 = (NXTPixToolkit*)std::array<DrawableGroup, 13ul>::operator[](this_00, (ulong)param_2);
        local_38 = (Layout*)this_01->GetScreen();
        pTVar1 = field_6240;
        pvVar4 = (vector<oldscape::highlight::EntityWithCoord<oldscape::dash3d::Decor>, eastl::allocator>*)
                     this_01->GetScreen();
        uVar5 = eastl::vector<oldscape::highlight::EntityWithCoord<oldscape::dash3d::Decor>, eastl::allocator>::size(
            pvVar4);
        local_40 = pTVar1;
        local_98->InitialiseWorkGroups((ulong)pTVar1, uVar5);
        uVar5 = local_98->size();
        if (uVar5 == 0) {
            pvVar4 = (vector<oldscape::highlight::EntityWithCoord<oldscape::dash3d::Decor>, eastl::allocator>*)
                         this_01->GetScreen();
            lVar6 =
                eastl::vector<oldscape::highlight::EntityWithCoord<oldscape::dash3d::Decor>, eastl::allocator>::size(
                    pvVar4);
            if (lVar6 != 0) {
                /* WARNING: Subroutine does not return */
                LogAssert("numWorkers > 0 || (numWorkers == 0 && drawableGroup.GetDrawableElements().size() == 0)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                          "renderer/DrawableQueue.cpp",
                          255, (char*)0);
            }
        }
        pvVar4 = (vector<oldscape::highlight::EntityWithCoord<oldscape::dash3d::Decor>, eastl::allocator>*)
                     this_01->GetScreen();
        uVar7 = eastl::vector<oldscape::highlight::EntityWithCoord<oldscape::dash3d::Decor>, eastl::allocator>::size(
            pvVar4);
        Array<int, BucketAllocatorEASTL>::Array(local_80, uVar7);
        eastl::vector<std::future<void>, BucketAllocatorEASTL>::vector();
        eastl::vector<std::future<void>, BucketAllocatorEASTL>::reserve(local_68, uVar5);
        if (uVar5 != 0) {
            uVar7 = 0;
            do {
                local_b8 = local_98;
                local_b0 = local_80;
                local_a8 = local_50._8_8_;
                local_a0 = local_38;
                local_c0 = uVar7;
                ThreadPool::AddTask<DrawableQueue::FilterAsync(
                    DrawableGroupType, RenderPassType,
                    std::function<bool(Drawable*,
                                       std::unique_ptr<DrawableElement, DrawableElementDeleter> const&)> const&)::__21>(
                    (ThreadPool*)local_50, (char*)local_40, (__21*)&local_c0);
                eastl::vector<std::future<void>, BucketAllocatorEASTL>::push_back(local_68, (future*)local_50);
                local_50->~future();
                uVar7 = uVar7 + 1;
            } while (uVar5 != uVar7);
            uVar7 = 0;
            do {
                this_02 =
                    (future<void>*)eastl::vector<std::future<void>, BucketAllocatorEASTL>::operator[](local_68, uVar7);
                cVar3 = std::future<void>::valid(this_02);
                if (cVar3 == '\0') {
                    /* WARNING: Subroutine does not return */
                    LogAssert("workers[i].valid()",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                              "renderer/DrawableQueue.cpp",
                              281, (char*)0);
                }
                eastl::vector<std::future<void>, BucketAllocatorEASTL>::operator[](local_68, uVar7);
                std::future<void>::wait();
                uVar7 = uVar7 + 1;
            } while (uVar5 != uVar7);
        }
        piVar8 = (int*)local_80->data();
        pLVar2 = local_38;
        pDVar9 = (DrawableElementInfo*)
            eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                    eastl::allocator>>::Layout::HeapBeginPtr(local_38);
        this_03 = (DrawableElementInfo*)
            eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                    eastl::allocator>>::Layout::HeapBeginPtr(pLVar2);
        while (true) {
            piVar10 = (int*)local_80->end();
            pLVar2 = local_38;
            if (piVar8 == piVar10)
                break;
            pDVar11 = this_03;
            if (*piVar8 != 0) {
                pDVar11 = this_03 + 1;
                DrawableElementInfo::operator=(this_03, pDVar9);
            }
            pDVar9 = pDVar9 + 1;
            piVar8 = piVar8 + 1;
            this_03 = pDVar11;
        }
        pDVar9 = (DrawableElementInfo*)local_38->end();
        pLVar2->erase(this_03, pDVar9);
        eastl::vector<std::future<void>, BucketAllocatorEASTL>::~vector(local_68);
        local_80->~Array();
        eastl::vector<std::pair<unsigned long, unsigned long>, BucketAllocatorEASTL>::~vector(local_98);
    }

    // 0x1007e2e50, 368 bytes, placed by class name
    // DrawableQueue::FilterMulti(DrawableGroupType, RenderPassType, RenderPassType, std::function<bool (Drawable*, std::unique_ptr<DrawableElement, DrawableElementDeleter> const&)> const&)
    /* DrawableQueue::FilterMulti(DrawableGroupType,
   RenderPassType, RenderPassType, std::function<bool
   (Drawable*, std::unique_ptr<DrawableElement,
   DrawableElementDeleter> const&)> const&) */

    void DrawableQueue::FilterMulti(uint param_2, undefined4 param_3, undefined4 param_4, function* param_5) {
        array<DrawableGroup, 13ul>* paVar1;
        NXTPixToolkit* pNVar2;
        vector<oldscape::highlight::EntityWithCoord<oldscape::dash3d::Decor>, eastl::allocator>* this_00;
        vector<oldscape::highlight::EntityWithCoord<oldscape::dash3d::Decor>, eastl::allocator>* this_01;
        long lVar3;
        long lVar4;
        undefined8 uVar5;
        undefined8 uVar6;
        undefined8 uVar7;
        DrawableElementInfo* pDVar8;
        undefined1 auVar9[16];
        function<bool(Drawable*, std::unique_ptr<DrawableElement, DrawableElementDeleter> const&)> local_68[48];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        paVar1 = (array<DrawableGroup, 13ul>*)GetRenderPassDrawableGroups(this, param_3);
        pNVar2 = (NXTPixToolkit*)std::array<DrawableGroup, 13ul>::operator[](paVar1, (ulong)param_2);
        this_00 = (vector<oldscape::highlight::EntityWithCoord<oldscape::dash3d::Decor>, eastl::allocator>*)
                      pNVar2->GetScreen();
        paVar1 = (array<DrawableGroup, 13ul>*)GetRenderPassDrawableGroups(this, param_4);
        pNVar2 = (NXTPixToolkit*)std::array<DrawableGroup, 13ul>::operator[](paVar1, (ulong)param_2);
        this_01 = (vector<oldscape::highlight::EntityWithCoord<oldscape::dash3d::Decor>, eastl::allocator>*)
                      pNVar2->GetScreen();
        lVar3 = eastl::vector<oldscape::highlight::EntityWithCoord<oldscape::dash3d::Decor>, eastl::allocator>::size(
            this_00);
        lVar4 = eastl::vector<oldscape::highlight::EntityWithCoord<oldscape::dash3d::Decor>, eastl::allocator>::size(
            this_01);
        if (lVar3 != lVar4) {
            /* WARNING: Subroutine does not return */
            LogAssert("drawableElements.size() == mirrorElements.size()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "renderer/DrawableQueue.cpp",
                      313, (char*)0);
        }
        uVar5 = this_00->HeapBeginPtr();
        uVar6 = this_00->end();
        uVar7 = this_01->HeapBeginPtr();
        this_01->end();
        std::function<bool(Drawable*, std::unique_ptr<DrawableElement, DrawableElementDeleter> const&)>::function(
            local_68, param_5);
        auVar9 = remove_multi_if<
            DrawableElementInfo*,
            (DrawableGroupType)
                ->FilterMulti(
                    RenderPassType, RenderPassType,
                    std::function<bool(Drawable*,
                                       std::unique_ptr<DrawableElement, DrawableElementDeleter> const&)> const&)::__22>(
            uVar5, uVar6, uVar7, local_68);
        FilterMulti(
            DrawableGroupType, RenderPassType, RenderPassType,
            std::function<bool(Drawable*, std::unique_ptr<DrawableElement, DrawableElementDeleter> const&)> const&)::
            $_22::~__22((__22*)local_68);
        pDVar8 = (DrawableElementInfo*)this_00->end();
        this_00->erase(auVar9._0_8_, pDVar8);
        pDVar8 = (DrawableElementInfo*)this_01->end();
        this_01->erase(auVar9._8_8_, pDVar8);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x1007e3100, 896 bytes, placed by class name
    // DrawableQueue::FilterMultiAsync(DrawableGroupType, RenderPassType, RenderPassType, std::function<bool (Drawable*, std::unique_ptr<DrawableElement, DrawableElementDeleter> const&)> const&)
    /* DrawableQueue::FilterMultiAsync(DrawableGroupType,
   RenderPassType, RenderPassType, std::function<bool
   (Drawable*, std::unique_ptr<DrawableElement,
   DrawableElementDeleter> const&)> const&) */

    void DrawableQueue::FilterMultiAsync(uint param_2, undefined4 param_3, undefined4 param_4, undefined8 param_5) {
        ThreadPool* pTVar1;
        Layout* pLVar2;
        char cVar3;
        array<DrawableGroup, 13ul>* paVar4;
        NXTPixToolkit* this_00;
        NXTPixToolkit* this_01;
        vector<oldscape::highlight::EntityWithCoord<oldscape::dash3d::Decor>, eastl::allocator>* pvVar5;
        long lVar6;
        long lVar7;
        ulong uVar8;
        ulong uVar9;
        future<void>* this_02;
        int* piVar10;
        DrawableElementInfo* pDVar11;
        DrawableElementInfo* pDVar12;
        DrawableElementInfo* pDVar13;
        DrawableElementInfo* this_03;
        int* piVar14;
        DrawableElementInfo* pDVar15;
        DrawableElementInfo* pDVar16;
        ulong local_c8;
        vector<std::pair<unsigned long, unsigned long>, BucketAllocatorEASTL>* local_c0;
        Array<int, BucketAllocatorEASTL>* local_b8;
        undefined8 local_b0;
        vector<oldscape::highlight::EntityWithCoord<oldscape::dash3d::Decor>, eastl::allocator>* local_a8;
        vector<std::pair<unsigned long, unsigned long>, BucketAllocatorEASTL> local_a0[24];
        Array<int, BucketAllocatorEASTL> local_88[24];
        vector<std::future<void>, BucketAllocatorEASTL> local_70[24];
        undefined1 local_58[16];
        ThreadPool* local_48;
        Layout* local_40;
        vector<oldscape::highlight::EntityWithCoord<oldscape::dash3d::Decor>, eastl::allocator>* local_38;

        local_58._8_8_ = param_5;
        paVar4 = (array<DrawableGroup, 13ul>*)GetRenderPassDrawableGroups(this, param_3);
        this_00 = (NXTPixToolkit*)std::array<DrawableGroup, 13ul>::operator[](paVar4, (ulong)param_2);
        local_38 = (vector<oldscape::highlight::EntityWithCoord<oldscape::dash3d::Decor>, eastl::allocator>*)
                       this_00->GetScreen();
        paVar4 = (array<DrawableGroup, 13ul>*)GetRenderPassDrawableGroups(this, param_4);
        this_01 = (NXTPixToolkit*)std::array<DrawableGroup, 13ul>::operator[](paVar4, (ulong)param_2);
        local_40 = (Layout*)this_01->GetScreen();
        pvVar5 = (vector<oldscape::highlight::EntityWithCoord<oldscape::dash3d::Decor>, eastl::allocator>*)
                     this_00->GetScreen();
        lVar6 = eastl::vector<oldscape::highlight::EntityWithCoord<oldscape::dash3d::Decor>, eastl::allocator>::size(
            pvVar5);
        pvVar5 = (vector<oldscape::highlight::EntityWithCoord<oldscape::dash3d::Decor>, eastl::allocator>*)
                     this_01->GetScreen();
        lVar7 = eastl::vector<oldscape::highlight::EntityWithCoord<oldscape::dash3d::Decor>, eastl::allocator>::size(
            pvVar5);
        if (lVar6 != lVar7) {
            /* WARNING: Subroutine does not return */
            LogAssert("drawableGroup.GetDrawableElements().size() == mirrorGroup.GetDrawableElements().size()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "renderer/DrawableQueue.cpp",
                      334, (char*)0);
        }
        pTVar1 = field_6240;
        pvVar5 = (vector<oldscape::highlight::EntityWithCoord<oldscape::dash3d::Decor>, eastl::allocator>*)
                     this_00->GetScreen();
        uVar8 = eastl::vector<oldscape::highlight::EntityWithCoord<oldscape::dash3d::Decor>, eastl::allocator>::size(
            pvVar5);
        local_48 = pTVar1;
        local_a0->InitialiseWorkGroups((ulong)pTVar1, uVar8);
        uVar8 = local_a0->size();
        if (uVar8 == 0) {
            lVar6 =
                eastl::vector<oldscape::highlight::EntityWithCoord<oldscape::dash3d::Decor>, eastl::allocator>::size(
                    local_38);
            if (lVar6 != 0) {
                /* WARNING: Subroutine does not return */
                LogAssert("numWorkers > 0 || (numWorkers == 0 && drawableElements.size() == 0)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                          "renderer/DrawableQueue.cpp",
                          341, (char*)0);
            }
        }
        uVar9 = eastl::vector<oldscape::highlight::EntityWithCoord<oldscape::dash3d::Decor>, eastl::allocator>::size(
            local_38);
        Array<int, BucketAllocatorEASTL>::Array(local_88, uVar9);
        eastl::vector<std::future<void>, BucketAllocatorEASTL>::vector();
        eastl::vector<std::future<void>, BucketAllocatorEASTL>::reserve(local_70, uVar8);
        if (uVar8 != 0) {
            uVar9 = 0;
            do {
                local_c0 = local_a0;
                local_b8 = local_88;
                local_b0 = local_58._8_8_;
                local_a8 = local_38;
                local_c8 = uVar9;
                ThreadPool::AddTask<DrawableQueue::FilterMultiAsync(
                    DrawableGroupType, RenderPassType, RenderPassType,
                    std::function<bool(Drawable*,
                                       std::unique_ptr<DrawableElement, DrawableElementDeleter> const&)> const&)::__23>(
                    (ThreadPool*)local_58, (char*)local_48, (__23*)&local_c8);
                eastl::vector<std::future<void>, BucketAllocatorEASTL>::push_back(local_70, (future*)local_58);
                local_58->~future();
                uVar9 = uVar9 + 1;
            } while (uVar8 != uVar9);
            uVar9 = 0;
            do {
                this_02 =
                    (future<void>*)eastl::vector<std::future<void>, BucketAllocatorEASTL>::operator[](local_70, uVar9);
                cVar3 = std::future<void>::valid(this_02);
                if (cVar3 == '\0') {
                    /* WARNING: Subroutine does not return */
                    LogAssert("workers[i].valid()",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                              "renderer/DrawableQueue.cpp",
                              367, (char*)0);
                }
                eastl::vector<std::future<void>, BucketAllocatorEASTL>::operator[](local_70, uVar9);
                std::future<void>::wait();
                uVar9 = uVar9 + 1;
            } while (uVar8 != uVar9);
        }
        piVar10 = (int*)local_88->data();
        pvVar5 = local_38;
        pDVar11 = (DrawableElementInfo*)local_38->HeapBeginPtr();
        pDVar12 = (DrawableElementInfo*)pvVar5->HeapBeginPtr();
        pLVar2 = local_40;
        pDVar13 = (DrawableElementInfo*)
            eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                    eastl::allocator>>::Layout::HeapBeginPtr(local_40);
        this_03 = (DrawableElementInfo*)
            eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                    eastl::allocator>>::Layout::HeapBeginPtr(pLVar2);
        while (true) {
            piVar14 = (int*)local_88->end();
            pvVar5 = local_38;
            if (piVar10 == piVar14)
                break;
            pDVar15 = this_03;
            pDVar16 = pDVar12;
            if (*piVar10 != 0) {
                pDVar16 = pDVar12 + 1;
                DrawableElementInfo::operator=(pDVar12, pDVar11);
                pDVar15 = this_03 + 1;
                DrawableElementInfo::operator=(this_03, pDVar13);
            }
            pDVar11 = pDVar11 + 1;
            pDVar13 = pDVar13 + 1;
            piVar10 = piVar10 + 1;
            this_03 = pDVar15;
            pDVar12 = pDVar16;
        }
        pDVar11 = (DrawableElementInfo*)local_38->end();
        pvVar5->erase(pDVar12, pDVar11);
        pLVar2 = local_40;
        pDVar12 = (DrawableElementInfo*)local_40->end();
        pLVar2->erase(this_03, pDVar12);
        eastl::vector<std::future<void>, BucketAllocatorEASTL>::~vector(local_70);
        local_88->~Array();
        eastl::vector<std::pair<unsigned long, unsigned long>, BucketAllocatorEASTL>::~vector(local_a0);
    }

    // 0x1007e3620, 144 bytes, placed by class name
    // DrawableQueue::RenderDebug(DrawableGroupType, RenderPassType) const
    void DrawableQueue::RenderDebug(uint param_2, undefined4 param_3) {
        long* plVar1;
        array<DrawableGroup, 13ul>* this_00;
        NXTPixToolkit* this_01;
        Layout* this_02;
        unique_ptr<DrawableElement, DrawableElementDeleter>* puVar2;
        unique_ptr<DrawableElement, DrawableElementDeleter>* puVar3;
        undefined8 uVar4;
        unique_ptr<DrawableElement, DrawableElementDeleter>* puVar5;

        this_00 = (array<DrawableGroup, 13ul>*)GetRenderPassDrawableGroups(this, param_3);
        this_01 = (NXTPixToolkit*)std::array<DrawableGroup, 13ul>::operator[](this_00, (ulong)param_2);
        this_02 = (Layout*)this_01->GetScreen();
        puVar2 = (unique_ptr<DrawableElement, DrawableElementDeleter>*)
            eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                    eastl::allocator>>::Layout::HeapBeginPtr(this_02);
        puVar3 = (unique_ptr<DrawableElement, DrawableElementDeleter>*)this_02->end();
        if (puVar2 != puVar3) {
            puVar2 = puVar2 + 8;
            do {
                plVar1 = *(long**)(puVar2 + 8);
                uVar4 = std::unique_ptr<DrawableElement, DrawableElementDeleter>::operator*(puVar2);
                (**(code**)(*plVar1 + 40))(plVar1, param_3, uVar4);
                puVar5 = puVar2 + 16;
                puVar2 = puVar2 + 24;
            } while (puVar5 != puVar3);
        }
    }

    // 0x1007e36b0, 48 bytes, placed by class name
    // DrawableQueue::ClearGroup(DrawableGroupType, RenderPassType)
    void DrawableQueue::ClearGroup(uint param_2, undefined4 param_3) {
        array<DrawableGroup, 13ul>* this_00;
        DrawableGroup* this_01;

        this_00 = (array<DrawableGroup, 13ul>*)GetRenderPassDrawableGroups(this, param_3);
        this_01 = (DrawableGroup*)std::array<DrawableGroup, 13ul>::operator[](this_00, (ulong)param_2);
        this_01->ClearDrawableElements();
    }

    // 0x1007e3700, 80 bytes, placed by class name
    // DrawableQueue::ClearAllGroups(RenderPassType)
    void DrawableQueue::ClearAllGroups() {
        array<DrawableGroup, 13ul>* this;
        DrawableGroup* this_00;
        DrawableGroup* pDVar1;

        this = (array<DrawableGroup, 13ul>*)GetRenderPassDrawableGroups();
        this_00 = (DrawableGroup*)std::array<DrawableGroup, 13ul>::begin(this);
        pDVar1 = (DrawableGroup*)std::array<DrawableGroup, 13ul>::end(this);
        for (; this_00 != pDVar1; this_00 = this_00 + 2) {
            this_00->ClearDrawableElements();
        }
    }

    // 0x1007e3750, 144 bytes, placed by class name
    // DrawableQueue::ClearAllGroupsInAllPasses()
    void DrawableQueue::ClearAllGroupsInAllPasses() {
        Layout* this_00;
        Layout* pLVar1;
        vector* this_01;
        DrawableGroup* this_02;
        DrawableGroup* pDVar2;
        type* in_RSI;

        this_00 = (Layout*)begin();
        pLVar1 = (Layout*)end();
        for (; this_00 != pLVar1; this_00 = this_00 + 624) {
            this_01 = eastl::string::Layout::SSOBeginPtr(this_00, in_RSI);
            this_02 = (DrawableGroup*)this_01->begin();
            pDVar2 = (DrawableGroup*)this_01->end();
            for (; this_02 != pDVar2; this_02 = this_02 + 2) {
                this_02->ClearDrawableElements();
            }
        }
    }

    // 0x1007e3810, 208 bytes, placed by class name
    // DrawableQueue::BinTriangles(RenderPassType, SceneViewData const&, BinInfoSSE&)
    void DrawableQueue::BinTriangles(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4) {
        array<DrawableGroup, 13ul>* this;
        NXTPixToolkit* this_00;
        NXTPixToolkit* pNVar1;
        Layout* this_01;
        long lVar2;
        long lVar3;

        this = (array<DrawableGroup, 13ul>*)GetRenderPassDrawableGroups();
        this_00 = (NXTPixToolkit*)std::array<DrawableGroup, 13ul>::begin(this);
        pNVar1 = (NXTPixToolkit*)std::array<DrawableGroup, 13ul>::end(this);
        do {
            if (this_00 == pNVar1) {
                return;
            }
            this_01 = (Layout*)this_00->GetScreen();
            lVar2 =
                eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::
                    Layout::HeapBeginPtr(this_01);
            lVar3 = this_01->end();
            for (; lVar2 != lVar3; lVar2 = lVar2 + 24) {
                if (*(long*)(lVar2 + 16) == 0) {
                    /* WARNING: Subroutine does not return */
                    LogAssert("drawable.m_drawable != nullptr",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                              "renderer/DrawableQueue.cpp",
                              438, (char*)0);
                }
                (**(code**)(**(long**)(lVar2 + 16) + 24))(*(long**)(lVar2 + 16), param_3, param_4);
            }
            this_00 = (NXTPixToolkit*)&this_00->field_48;
        } while (true);
    }

} // namespace jag::graphics
