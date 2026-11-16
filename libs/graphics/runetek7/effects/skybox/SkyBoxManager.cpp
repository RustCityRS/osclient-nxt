// libs/graphics/runetek7/effects/skybox/SkyBoxManager.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

#include "SkyBoxManager.h"

namespace jag::graphics {
    // 0x10091c610, 288 bytes, base-object constructor, placed by class name and debug map
    // SkyBoxManager::SkyBoxManager(RT7Core&)
    void SkyBoxManager::SkyBoxManager(RT7Core* param_1) {
        allocator local_170[8];
        RenderPassDrawableGroupsConfig local_168;
        fixed_vector local_150[280];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        field_0 = param_1;
        new (field_16) ViewTransforms();
        new (field_224) math::Frustum();
        new (&local_168) DrawableQueue::RenderPassDrawableGroupsConfig(4, 16, 2);
        eastl::allocator::allocator(local_170, "EASTL fixed_vector");
        eastl::fixed_vector<DrawableQueue::RenderPassDrawableGroupsConfig, 10ul, true, eastl::allocator>::fixed_vector(
            local_150, &local_168, 1, local_170);
        new (&field_384, param_1, local_150, 16, 0) Renderer();
        local_150->~fixed_vector();
        new (&field_6712) eastl::vector<SkyBoxEntry, eastl::allocator>();
        field_6744 = 0;
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x10091c740, 16 bytes, complete-object constructor, placed by class name and debug map
    // SkyBoxManager::SkyBoxManager(RT7Core&): jumps straight to the base-object constructor

    // 0x10091c750, 16 bytes, placed by class name and debug map
    // SkyBoxManager::Destroy()
    void SkyBoxManager::Destroy() {
        DestroyRenderingResources(this);
    }

    // 0x10091c760, 144 bytes, placed by class name and debug map
    // SkyBoxManager::DestroyRenderingResources()
    void SkyBoxManager::DestroyRenderingResources() {
        long lVar1;
        long lVar2;
        RenderTargetsManager* this_00;
        PointLightShadows* this_01;
        shared_ptr* psVar3;
        AutoSingleton<ShaderThreadPoolSingleton> local_30[8];

        local_30->~AutoSingleton("SkyBox_Manager");
        lVar1 = (&field_6712)->HeapBeginPtr();
        lVar2 = (&field_6712)->end();
        for (; lVar1 != lVar2; lVar1 = lVar1 + 32) {
            this_00 = (RenderTargetsManager*)field_0->GetRenderTargetsManager();
            this_01 = (PointLightShadows*)shared_ptr<SkyBox>::operator->((shared_ptr<SkyBox>*)(lVar1 + 8));
            psVar3 = (shared_ptr*)this_01->GetPointLightSMManager();
            this_00->Unregister(psVar3);
        }
    }

    // 0x10091c7f0, 112 bytes, placed by class name and debug map
    // SkyBoxManager::MainLogic()
    void SkyBoxManager::MainLogic() {
        ulonglong uVar1;
        undefined8 uVar2;
        undefined8 uVar3;
        SkyBoxEntry* pSVar4;
        SkyBoxEntry* pSVar5;
        undefined1* this_00;

        uVar1 = SystemTimer::GetTimeMS<std::chrono::steady_clock>((SystemTimer*)this);
        this_00 = &field_6712;
        uVar2 = this_00->HeapBeginPtr();
        uVar3 = this_00->end();
        pSVar4 = std::remove_if<SkyBoxEntry*, SkyBoxManager::MainLogic()::__5>(uVar2, uVar3, uVar1);
        pSVar5 = (SkyBoxEntry*)this_00->end();
        this_00->erase(pSVar4, pSVar5);
    }

    // 0x10091c960, 192 bytes, placed by class name and debug map
    // SkyBoxManager::GetSkyBoxTexture(int)
    undefined8 SkyBoxManager::GetSkyBoxTexture(int param_1) {
        bool bVar1;
        undefined8 uVar2;
        undefined8 uVar3;
        SkyBoxEntry* pSVar4;
        SkyBoxEntry* pSVar5;
        PointLightShadows* this_00;
        shared_ptr* this_01;
        RenderTargets* this_02;
        vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>* this_03;
        undefined8* puVar6;
        undefined1* this_04;

        if ((field_6744 == '\0') || (param_1 != -1)) {
            this_04 = &field_6712;
            uVar2 = this_04->HeapBeginPtr();
            uVar3 = this_04->end();
            pSVar4 = eastl::find_if<SkyBoxEntry_const*, int->GetSkyBoxTexture()::__6>(uVar2, uVar3, param_1);
            pSVar5 = (SkyBoxEntry*)this_04->end();
            if (pSVar4 != pSVar5) {
                this_00 = (PointLightShadows*)shared_ptr<SkyBox>::operator->((shared_ptr<SkyBox>*)&pSVar4->field_8);
                this_01 = (shared_ptr*)this_00->GetPointLightSMManager();
                bVar1 = shared_ptr::operator_cast_to_bool(this_01);
                if (bVar1) {
                    this_02 = (RenderTargets*)shared_ptr<render::RenderTargets>::operator->(
                        (shared_ptr<render::RenderTargets>*)this_01);
                    this_03 = (vector<render::Texture*,
                                      eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>*)
                                  this_02->GetColourTargetTextures();
                    puVar6 = (undefined8*)eastl::vector<
                        render::Texture*,
                        eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>::operator[](this_03,
                                                                                                               0);
                    return *puVar6;
                }
            }
        }
        return 0;
    }

    // 0x10091ca70, 80 bytes, placed by class name and debug map
    // SkyBoxManager::SetViewTransforms(ViewTransforms const&)
    void SkyBoxManager::SetViewTransforms(ViewTransforms* param_1) {
        undefined1* this_00;
        Matrix44T* pMVar1;
        Matrix44T* pMVar2;

        this_00 = field_16;
        ViewTransforms::operator=((ViewTransforms*)this_00, param_1);
        pMVar1 = (Matrix44T*)this_00->GetScreen();
        pMVar2 = (Matrix44T*)this_00->GetOrigin();
        (field_224, pMVar1, pMVar2)->Set();
    }

    // 0x10091cac0, 1088 bytes, placed by class name and debug map
    // SkyBoxManager::Render(unsigned int, int, EffectManager&, render::Viewport const&, std::function<bool (std::array<math::IntersectionType, 10ul>&, math::Frustum&, math::Frustum const&, int, math::AABB const&, math::OBB const&)>&, GraphRoot*)
    /* SkyBoxManager::Render(unsigned int, int, EffectManager&,
   render::Viewport const&, std::function<bool (std::array<math::IntersectionType, 10ul>&,
   math::Frustum&, math::Frustum const&, int, math::AABB const&, math::OBB
   const&)>&, GraphRoot*) */

    void SkyBoxManager::Render(uint param_1, int param_2, EffectManager* param_3, Viewport* param_4, function* param_5,
                               GraphRoot* param_6) {
        shared_ptr<SkyBox>* this;
        Renderer* this_00;
        char cVar1;
        RenderPass* pRVar2;
        undefined1* puVar3;
        EffectManager* pEVar4;
        int* piVar5;
        SkyBox* pSVar6;
        PointLightShadows* this_01;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_02;
        SkyBox* this_03;
        Vector4T* pVVar7;
        Rect<float>* this_04;
        DrawableQueue* pDVar8;
        undefined4 in_register_0000003c;
        undefined8* puVar9;
        RT7Core* this_05;
        undefined4 uVar10;
        allocator local_29c8[24];
        int* local_29b0;
        Callstack local_29a8;
        RenderContext* local_2988;
        Renderer* local_2980;
        undefined8* local_2978;
        EffectStateSaveRestore local_2970[309];
        Viewport local_1620[176];
        undefined1 local_2d8[416];
        undefined4 local_138;
        undefined1 local_68;
        long local_38;

        puVar9 = (undefined8*)CONCAT44(in_register_0000003c, param_1);
        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        new (local_2d8) SceneViewData();
        render::Viewport::Viewport(local_1620, 0, 0, *(int*)(param_5 + 8), *(int*)(param_5 + 12), 0.0, 1.0);
        eastl::allocator::allocator(local_29c8, "EASTL fixed_vector");
        eastl::fixed_vector<render::Viewport, 2ul, true, eastl::allocator>::fixed_vector(local_2970, local_1620, 1,
                                                                                         local_29c8);
        local_2d8->SetRenderTargetViewports(local_2970);
        local_2970->~fixed_vector();
        local_2d8->SetTransforms((ViewTransforms*)(puVar9 + 2));
        uVar10._0_1_ = 0;
        uVar10._1_3_ = 0;
        new (local_29c8) ImVec4(0.0, 0.0, 0.0, 0.0);
        local_138 = 3;
        local_68 = 1;
        pRVar2 = (RenderPass*)(*puVar9)->GetForwardLightingPass();
        this_05 = (RT7Core*)local_2d8;
        this_05->RenderPassPushBack(pRVar2);
        local_2988 = (RenderContext*)this_05->GetRenderContext();
        new (local_1620) eastl::fixed_map<EffectType, bool, 121ul, true, eastl::less<EffectType>, eastl::allocator>();
        local_2970[0].field_0._0_1_ = 50;
        puVar3 = (undefined1*)eastl::map<EffectType, bool, eastl::less<EffectType>,
                                         eastl::fixed_node_allocator<40ul, 121ul, 1ul, 0ul, true, eastl::allocator>>::
        operator[]((map<EffectType, bool, eastl::less<EffectType>,
                        eastl::fixed_node_allocator<40ul, 121ul, 1ul, 0ul, true, eastl::allocator>>*)local_1620,
                   (EffectType*)local_2970);
        *puVar3 = 0;
        local_2970[0].field_0._0_1_ = 108;
        puVar3 = (undefined1*)eastl::map<EffectType, bool, eastl::less<EffectType>,
                                         eastl::fixed_node_allocator<40ul, 121ul, 1ul, 0ul, true, eastl::allocator>>::
        operator[]((map<EffectType, bool, eastl::less<EffectType>,
                        eastl::fixed_node_allocator<40ul, 121ul, 1ul, 0ul, true, eastl::allocator>>*)local_1620,
                   (EffectType*)local_2970);
        *puVar3 = 0;
        pEVar4 = (EffectManager*)(*puVar9)->GetEffectManager();
        EffectStateSaveRestore::EffectStateSaveRestore(local_2970, pEVar4, (fixed_map*)local_1620);
        local_2978 = puVar9;
        piVar5 = (int*)((puVar9 + 839))->HeapBeginPtr();
        local_29b0 = (int*)((puVar9 + 839))->end();
        if (piVar5 != local_29b0) {
            local_2980 = (Renderer*)(local_2978 + 48);
            do {
                this = (shared_ptr<SkyBox>*)(piVar5 + 2);
                pSVar6 = (SkyBox*)shared_ptr<SkyBox>::operator->(this);
                cVar1 =
                    pSVar6->UpdateRenderTargets((RT7Core*)*local_2978, *(uint*)(param_5 + 8), *(uint*)(param_5 + 12));
                if (cVar1 != '\0') {
                    if (*piVar5 == -1) {
                        *(undefined1*)(local_2978 + 843) = 1;
                    }
                    this_01 = (PointLightShadows*)shared_ptr<SkyBox>::operator->(this);
                    this_02 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)
                                  this_01->GetPointLightSMManager();
                    local_2d8._368_8_ =
                        eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(this_02);
                    pSVar6 = (SkyBox*)shared_ptr<SkyBox>::operator->(this);
                    this_03 = (SkyBox*)shared_ptr<SkyBox>::operator->(this);
                    pVVar7 = (Vector4T*)this_03->GetClearColour();
                    local_29a8._0_8_ = pSVar6->GetDesiredClearColour(pVVar7);
                    local_29a8._8_4_ = uVar10;
                    local_29a8._12_4_ = 0;
                    this_04 = (Rect<float>*)std::array<math::Vector4T<float>, 2ul>::operator[](
                        (array<math::Vector4T<float>, 2ul>*)(local_2d8 + 384), 0);
                    math::Rect<float>::operator=(this_04, (Rect*)&local_29a8);
                    local_29a8.m_stackFrames = 0;
                    new (&local_29a8) callstack::Callstack();
                    local_2980->RenderViewBegin(local_2988, local_2d8, param_4, (RenderPassBitSet*)&local_29a8);
                    pSVar6 = (SkyBox*)shared_ptr<SkyBox>::operator->(this);
                    pDVar8 = (DrawableQueue*)local_2980->GetOrigin();
                    pSVar6->GatherForwardDrawableElements(pDVar8, (RT7Core*)*local_2978, local_2d8, param_4);
                    local_29a8.m_stackFrames = 0;
                    new (&local_29a8) callstack::Callstack();
                    this_00 = local_2980;
                    local_2980->RenderViewRenderPasses(local_2d8, local_2988, false, param_4,
                                                       (RenderPassBitSet*)&local_29a8);
                    pDVar8 = (DrawableQueue*)this_00->GetOrigin();
                    pDVar8->ClearAllGroupsInAllPasses();
                    Renderer::RenderViewEnd((RenderContext*)local_2980);
                    if (*piVar5 == -1) {
                        *(undefined1*)(local_2978 + 843) = 0;
                    }
                }
                piVar5 = piVar5 + 8;
            } while (piVar5 != local_29b0);
        }
        local_2970->~EffectStateSaveRestore();
        local_1620->~fixed_map();
        local_2d8->~SceneViewData();
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x10091cf20, 48 bytes, placed by class name and debug map
    // SkyBoxManager::CreateRenderingResources()
    undefined8 SkyBoxManager::CreateRenderingResources() {
        AutoSingleton<ShaderThreadPoolSingleton> local_10[8];

        local_10->~AutoSingleton("SkyBox_Manager");
        return 1;
    }

    // 0x10091cf50, 224 bytes, placed by class name and debug map
    // SkyBoxManager::RegisterSkyBox(int)
    SkyBoxManager* SkyBoxManager::RegisterSkyBox(int param_1) {
        undefined8 uVar1;
        MakeSharedPool<SkyBox, 16>* this_00;
        SkyBoxEntry* pSVar2;
        SkyBoxEntry* pSVar3;
        int in_EDX;
        undefined4 in_register_00000034;
        Layout* this_01;
        Layout* this_02;
        SkyBoxEntry local_58;
        shared_ptr local_38;
        int local_24;

        this_02 = (Layout*)(CONCAT44(in_register_00000034, param_1) + 6712);
        local_24 = in_EDX;
        uVar1 = eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::
            Layout::HeapBeginPtr(this_02);
        this_00 = (MakeSharedPool<SkyBox, 16>*)this_02->end();
        pSVar2 = eastl::find_if<SkyBoxEntry*, int->RegisterSkyBox()::__7>(uVar1, this_00, &local_24);
        this_01 = this_02;
        pSVar3 = (SkyBoxEntry*)this_02->end();
        if (pSVar2 == pSVar3) {
            MakeSharedPool<SkyBox, 16>::MakeShared<>(&local_38, this_00);
            new (&local_58) SkyBoxEntry(local_24, &local_38);
            this_02->push_back(&local_58);
            local_58.~pair();
            shared_ptr<oldscape::RSevenDebugPresetProvider>::shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(
                (shared_ptr<oldscape::RSevenDebugPresetProvider>*)this, &local_38);
            local_38.~shared_ptr();
        } else {
            pSVar2->field_24 = SystemTimer::GetTimeMS<std::chrono::steady_clock>((SystemTimer*)this_01);
            new (this) shared_ptr<oldscape::dash3d::Decor>((shared_ptr*)&pSVar2->field_8);
        }
        return this;
    }

    // 0x10091d1e0, 176 bytes, placed by class name and debug map
    // SkyBoxManager::DestroySkyBox(shared_ptr<SkyBox>)
    void SkyBoxManager::DestroySkyBox(shared_ptr param_1) {
        undefined1* this_00;
        undefined8 uVar1;
        undefined8 uVar2;
        SkyBoxEntry* pSVar3;
        SkyBoxEntry* pSVar4;
        RenderTargetsManager* this_01;
        PointLightShadows* this_02;
        shared_ptr* psVar5;
        shared_ptr<SkyBox>* in_RSI;

        this_00 = &field_6712;
        uVar1 = this_00->HeapBeginPtr();
        uVar2 = this_00->end();
        pSVar3 = eastl::find_if<SkyBoxEntry*, (shared_ptr<SkyBox>)->DestroySkyBox()::__8>(uVar1, uVar2);
        pSVar4 = (SkyBoxEntry*)this_00->end();
        if (pSVar3 == pSVar4) {
            /* WARNING: Subroutine does not return */
            LogAssert("found != m_skyBoxes.end()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/effects/"
                      "skybox/SkyBoxManager.cpp",
                      175, (char*)0);
        }
        this_00->erase(pSVar3);
        this_01 = (RenderTargetsManager*)field_0->GetRenderTargetsManager();
        this_02 = (PointLightShadows*)shared_ptr<SkyBox>::operator->(in_RSI);
        psVar5 = (shared_ptr*)this_02->GetPointLightSMManager();
        this_01->Unregister(psVar5);
    }

    // 0x10091d340, 112 bytes, placed by class name and debug map
    // SkyBoxManager::UnregisterRenderTargets()
    void SkyBoxManager::UnregisterRenderTargets() {
        long lVar1;
        long lVar2;
        RenderTargetsManager* this_00;
        PointLightShadows* this_01;
        shared_ptr* psVar3;

        lVar1 = (&field_6712)->HeapBeginPtr();
        lVar2 = (&field_6712)->end();
        for (; lVar1 != lVar2; lVar1 = lVar1 + 32) {
            this_00 = (RenderTargetsManager*)field_0->GetRenderTargetsManager();
            this_01 = (PointLightShadows*)shared_ptr<SkyBox>::operator->((shared_ptr<SkyBox>*)(lVar1 + 8));
            psVar3 = (shared_ptr*)this_01->GetPointLightSMManager();
            this_00->Unregister(psVar3);
        }
    }

    // 0x1009285e0, 64 bytes, placed by class name
    // SkyBoxManager::MainLogic()::$_5::operator()(SkyBoxEntry&) const
    /* SkyBoxManager::MainLogic()::$_5::TEMPNAMEPLACEHOLDERVALUE(SkyBoxEntry&)
   const */

    undefined8 SkyBoxManager::MainLogic()::$_5::operator()(SkyBoxEntry* param_1) {
        undefined8 uVar1;
        SkyBox* this_00;

        if ((param_1->field_0 < 0) || (uVar1 = 1, *(long*)this - param_1->field_24 < 10001)) {
            this_00 = (SkyBox*)shared_ptr<SkyBox>::operator->((shared_ptr<SkyBox>*)&param_1->field_8);
            this_00->MainLogic();
            uVar1 = 0;
        }
        return uVar1;
    }

    // 0x100928780, 16 bytes, placed by class name
    // SkyBoxManager::GetSkyBoxTexture(int)::$_6::operator()(SkyBoxEntry const&) const
    /* SkyBoxManager::GetSkyBoxTexture(int)::$_6::TEMPNAMEPLACEHOLDERVALUE(SkyBoxEntry
   const&) const */

    undefined4 SkyBoxManager::GetSkyBoxTexture(int)::$_6::operator()(SkyBoxEntry* param_1) {
        return CONCAT31((int3)((uint)param_1->field_0 >> 8), param_1->field_0 == *(int*)this);
    }

    // 0x1009287c0, 16 bytes, placed by class name
    // SkyBoxManager::RegisterSkyBox(int)::$_7::operator()(SkyBoxEntry const&) const
    /* SkyBoxManager::RegisterSkyBox(int)::$_7::TEMPNAMEPLACEHOLDERVALUE(SkyBoxEntry
   const&) const */

    undefined4 SkyBoxManager::RegisterSkyBox(int)::$_7::operator()(SkyBoxEntry* param_1) {
        return CONCAT31((int3)((uint)param_1->field_0 >> 8), param_1->field_0 == **(int**)this);
    }

} // namespace jag::graphics
