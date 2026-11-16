// libs/graphics/runetek7/renderer/renderpasses/ReflectionPass.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

#include "ReflectionPass.h"

namespace jag::graphics {
    // 0x1039bd14f, 1 bytes, __common; zero-initialised
    ReflectionPass::m_showReflectionMap;

    // 0x1007ab950, 160 bytes, base-object constructor, placed by class name and debug map
    // ReflectionPass::ReflectionPass(render::RenderTargetsManager*, ThreadPool*)
    void ReflectionPass::ReflectionPass(RenderTargetsManager* param_1, ThreadPool* param_2) {
        Desc local_58;

        new (this) SceneRenderPass(2, param_1, param_2);
        field_0 = &PTR__ReflectionPass_100f14390;
        new (&field_796) render::DepthStencilState();
        new (&local_58) render::DepthStencilState::Desc();
        local_58.field_12 = 519;
        (&field_796, &local_58)->Create();
        SetOcclusionTestEnabled(true);
        (field_16, 0.0)->SetMinimumDepthVariation();
    }

    // 0x1007ab9f0, 16 bytes, complete-object constructor, placed by class name and debug map
    // ReflectionPass::ReflectionPass(render::RenderTargetsManager*, ThreadPool*): jumps straight to the base-object constructor

    // 0x1007aba00, 48 bytes, base-object destructor, placed by class name and debug map
    // ReflectionPass::~ReflectionPass()
    void ReflectionPass::~ReflectionPass() {
        field_0 = &PTR__ReflectionPass_100f14390;
        (&field_796)->~DepthStencilState();
        ~SceneRenderPass();
    }

    // 0x1007aba30, 16 bytes, complete-object destructor, placed by class name and debug map
    // ReflectionPass::~ReflectionPass(): jumps straight to the base-object destructor

    // 0x1007aba40, 32 bytes, deleting destructor, placed by class name and debug map
    // ReflectionPass::~ReflectionPass()
    void ReflectionPass::~ReflectionPass() {
        ~ReflectionPass(this);
        operator_delete(this);
    }

    // 0x1007aba60, 16 bytes, placed by class name and debug map
    // ReflectionPass::PreparePass(RT7Core&, EffectManager&, SceneViewData const&, DrawableQueue&)
    void ReflectionPass::PreparePass(RT7Core* param_1, EffectManager* param_2, SceneViewData* param_3,
                                     DrawableQueue* param_4) {
        PreparePass(param_1, param_2, param_3, param_4);
    }

    // 0x1007aba70, 144 bytes, placed by class name and debug map
    // ReflectionPass::BeginPass(render::DrawCallState&, render::RenderContext&, EffectManager&, SceneViewData const&, DrawableQueue const&)
    undefined8 ReflectionPass::BeginPass(DrawCallState* param_1, RenderContext* param_2, EffectManager* param_3,
                                         SceneViewData* param_4, DrawableQueue* param_5) {
        undefined1* this_00;
        uint uVar1;
        Viewport* pVVar2;
        SceneRenderPass* this_01;

        pVVar2 = (Viewport*)param_1->GetOutputMergerState();
        this_00 = &param_4->field_432;
        uVar1 = this_00->HeapBeginPtr();
        this_00->size();
        render::OutputMergerState::SetViewports(pVVar2, uVar1);
        this_01 = (SceneRenderPass*)param_1->GetOutputMergerState();
        this_01->SetRenderTargets(*(RenderTargets**)&param_4->field_368);
        this_01->ClearRenderTargets(param_2, (RenderTargetData*)&param_4->field_368, (fixed_vector*)this_00);
        return 1;
    }

    // 0x1007abb00, 1520 bytes, placed by class name and debug map
    // ReflectionPass::Render(RT7Core&, render::DrawCallState const&, EffectManager&, SceneViewData const&, DrawableQueue&)
    void ReflectionPass::Render(RT7Core* param_1, DrawCallState* param_2, EffectManager* param_3,
                                SceneViewData* param_4, DrawableQueue* param_5) {
        undefined1 uVar2;
        SunlightDirectLighting* this_00;
        ReflectionManager* this_01;
        compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>* pcVar3;
        RenderPipelineState* pRVar4;
        long lVar5;
        Layout* pLVar6;
        Texture* pTVar7;
        DrawCallState* pDVar8;
        undefined1 auVar9[16];
        ulong uVar11;
        undefined4 uVar13;
        undefined8 uVar12;
        DrawCallState local_a8;
        DrawCallState local_78;

        this_00 = EffectManager::GetEffect<SunlightDirectLighting>(param_3, 107);
        this_01 = (ReflectionManager*)this_00->GetDefaultValue();
        new (&local_a8) render::DrawCallState(param_2);
        new (&local_78) render::DrawCallState(&local_a8);
        pDVar8 = &local_78;
        pcVar3 = (compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>*)
                     pDVar8->GetRenderPipelineState();
        auVar9 = pDVar8->Instance();
        eastl::compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>::compressed_pair_imp(
            pcVar3, (EntityHighlight**)(auVar9._0_8_ + 1524), auVar9._8_8_);
        pDVar8 = &local_78;
        pRVar4 = (RenderPipelineState*)pDVar8->GetRenderPipelineState();
        lVar5 = pDVar8->Instance();
        pRVar4->SetRasteriserState((RasteriserState*)(lVar5 + 1272));
        pLVar6 = (Layout*)local_78.GetRenderPipelineState();
        eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::Layout::
            SetHeapSize(pLVar6, (ulong)&field_796);
        param_5->RenderGroup(param_1, &local_78, param_4, 3, 6, param_3, 2);
        local_78.~DrawCallState();
        pTVar7 = (Texture*)this_01->GetReflectionMapAtlasDT();
        uVar11 = (ulong)param_3 & 18446744069414584320;
        DownsampleGPUDepthBuffer(param_1, param_3, param_4, param_5, pTVar7, false);
        uVar2 = GetGPUOcclusionEnabled(param_4);
        new (&local_78) render::DrawCallState(&local_a8);
        pDVar8 = &local_78;
        pcVar3 = (compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>*)
                     pDVar8->GetRenderPipelineState();
        auVar9 = pDVar8->Instance();
        eastl::compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>::compressed_pair_imp(
            pcVar3, (EntityHighlight**)(auVar9._0_8_ + 2284), auVar9._8_8_);
        pDVar8 = &local_78;
        pLVar6 = (Layout*)pDVar8->GetRenderPipelineState();
        lVar5 = pDVar8->Instance();
        eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::Layout::
            SetHeapSize(pLVar6, lVar5 + 720);
        pDVar8 = &local_78;
        pRVar4 = (RenderPipelineState*)pDVar8->GetRenderPipelineState();
        lVar5 = pDVar8->Instance();
        pRVar4->SetRasteriserState((RasteriserState*)(lVar5 + 1200));
        uVar11 = uVar11 & 18446744069414584320;
        1065353216->RenderOccludedDrawableGroup(this, param_1, &local_78, param_3, param_4, param_5, uVar11, uVar2, 0);
        uVar13 = (undefined4)(uVar11 >> 32);
        local_78.~DrawCallState();
        new (&local_78) render::DrawCallState(&local_a8);
        pDVar8 = &local_78;
        pcVar3 = (compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>*)
                     pDVar8->GetRenderPipelineState();
        auVar9 = pDVar8->Instance();
        eastl::compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>::compressed_pair_imp(
            pcVar3, (EntityHighlight**)(auVar9._0_8_ + 1524), auVar9._8_8_);
        pDVar8 = &local_78;
        pLVar6 = (Layout*)pDVar8->GetRenderPipelineState();
        lVar5 = pDVar8->Instance();
        eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::Layout::
            SetHeapSize(pLVar6, lVar5 + 720);
        pDVar8 = &local_78;
        pRVar4 = (RenderPipelineState*)pDVar8->GetRenderPipelineState();
        lVar5 = pDVar8->Instance();
        pRVar4->SetRasteriserState((RasteriserState*)(lVar5 + 1200));
        uVar12 = CONCAT44(uVar13, 1);
        1065353216->RenderOccludedDrawableGroup(this, param_1, &local_78, param_3, param_4, param_5, uVar12, uVar2, 0);
        uVar13 = (undefined4)((ulong)uVar12 >> 32);
        local_78.~DrawCallState();
        new (&local_78) render::DrawCallState(&local_a8);
        pDVar8 = &local_78;
        pcVar3 = (compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>*)
                     pDVar8->GetRenderPipelineState();
        auVar9 = pDVar8->Instance();
        eastl::compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>::compressed_pair_imp(
            pcVar3, (EntityHighlight**)(auVar9._0_8_ + 1676), auVar9._8_8_);
        pDVar8 = &local_78;
        pLVar6 = (Layout*)pDVar8->GetRenderPipelineState();
        lVar5 = pDVar8->Instance();
        eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::Layout::
            SetHeapSize(pLVar6, lVar5 + 720);
        pDVar8 = &local_78;
        pRVar4 = (RenderPipelineState*)pDVar8->GetRenderPipelineState();
        lVar5 = pDVar8->Instance();
        pRVar4->SetRasteriserState((RasteriserState*)(lVar5 + 1200));
        uVar12 = CONCAT44(uVar13, 3);
        1065353216->RenderOccludedDrawableGroup(this, param_1, &local_78, param_3, param_4, param_5, uVar12, uVar2, 0);
        uVar13 = (undefined4)((ulong)uVar12 >> 32);
        local_78.~DrawCallState();
        new (&local_78) render::DrawCallState(&local_a8);
        pDVar8 = &local_78;
        pcVar3 = (compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>*)
                     pDVar8->GetRenderPipelineState();
        auVar9 = pDVar8->Instance();
        eastl::compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>::compressed_pair_imp(
            pcVar3, (EntityHighlight**)(auVar9._0_8_ + 1904), auVar9._8_8_);
        pDVar8 = &local_78;
        pRVar4 = (RenderPipelineState*)pDVar8->GetRenderPipelineState();
        lVar5 = pDVar8->Instance();
        pRVar4->SetRasteriserState((RasteriserState*)(lVar5 + 1200));
        pDVar8 = &local_78;
        pLVar6 = (Layout*)pDVar8->GetRenderPipelineState();
        lVar5 = pDVar8->Instance();
        eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::Layout::
            SetHeapSize(pLVar6, lVar5 + 720);
        uVar12 = CONCAT44(uVar13, 4);
        1065353216->RenderOccludedDrawableGroup(this, param_1, &local_78, param_3, param_4, param_5, uVar12, uVar2, 0);
        uVar13 = (undefined4)((ulong)uVar12 >> 32);
        local_78.~DrawCallState();
        new (&local_78) render::DrawCallState(&local_a8);
        pDVar8 = &local_78;
        pcVar3 = (compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>*)
                     pDVar8->GetRenderPipelineState();
        auVar9 = pDVar8->Instance();
        eastl::compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>::compressed_pair_imp(
            pcVar3, (EntityHighlight**)(auVar9._0_8_ + 1676), auVar9._8_8_);
        pDVar8 = &local_78;
        pLVar6 = (Layout*)pDVar8->GetRenderPipelineState();
        lVar5 = pDVar8->Instance();
        eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::Layout::
            SetHeapSize(pLVar6, lVar5 + 720);
        pDVar8 = &local_78;
        pRVar4 = (RenderPipelineState*)pDVar8->GetRenderPipelineState();
        lVar5 = pDVar8->Instance();
        pRVar4->SetRasteriserState((RasteriserState*)(lVar5 + 1200));
        uVar12 = CONCAT44(uVar13, 2);
        1065353216->RenderOccludedDrawableGroup(this, param_1, &local_78, param_3, param_4, param_5, uVar12, uVar2, 0);
        uVar13 = (undefined4)((ulong)uVar12 >> 32);
        local_78.~DrawCallState();
        new (&local_78) render::DrawCallState(&local_a8);
        pDVar8 = &local_78;
        pcVar3 = (compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>*)
                     pDVar8->GetRenderPipelineState();
        auVar9 = pDVar8->Instance();
        eastl::compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>::compressed_pair_imp(
            pcVar3, (EntityHighlight**)(auVar9._0_8_ + 1904), auVar9._8_8_);
        pDVar8 = &local_78;
        pRVar4 = (RenderPipelineState*)pDVar8->GetRenderPipelineState();
        lVar5 = pDVar8->Instance();
        pRVar4->SetRasteriserState((RasteriserState*)(lVar5 + 1200));
        pDVar8 = &local_78;
        pLVar6 = (Layout*)pDVar8->GetRenderPipelineState();
        lVar5 = pDVar8->Instance();
        eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::Layout::
            SetHeapSize(pLVar6, lVar5 + 720);
        1065353216->RenderOccludedDrawableGroup(this, param_1, &local_78, param_3, param_4, param_5,
                                                CONCAT44(uVar13, 5), uVar2, 0);
        local_78.~DrawCallState();
        local_a8.~DrawCallState();
    }

    // 0x1007ac150, 320 bytes, placed by class name and debug map
    // ReflectionPass::RenderDebug(EffectManager&, DrawableQueue&)
    void ReflectionPass::RenderDebug(EffectManager* param_1, DrawableQueue* param_2) {
        undefined4 uVar1;
        SunlightDirectLighting* this_00;
        long* plVar2;
        ReflectionManager* this_01;
        undefined8 uVar3;
        int iVar4;
        ImVec4 local_60[16];
        Point<float> local_50[8];
        undefined1 local_48[16];
        undefined1 local_38[8];

        iVar4 = 0;
        do {
            uVar1 = GetPos();
            param_2->RenderDebug(iVar4, uVar1);
            iVar4 = iVar4 + 1;
        } while (iVar4 != 13);
        if (m_showReflectionMap != '\0') {
            this_00 = EffectManager::GetEffect<SunlightDirectLighting>(param_1, 107);
            plVar2 = (long*)DebugPrimitiveCollectorBasic::GetCollector("");
            if (plVar2 != (long*)0) {
                this_01 = (ReflectionManager*)this_00->GetDefaultValue();
                uVar3 = this_01->GetReflectionMapAtlas();
                ImVec4::ImVec4(local_60, 0.0, 0.0, 0.5, 0.5);
                new ((local_48 + 8)) math::Point<float>(0.0, 0.0);
                math::Point<float>::Point(local_50, 1.0, 1.0);
                new (local_38) math::ColourStorage8888<math::ARGB8StorageLayout>(255, 255, 255, 255);
                iVar4 = local_38->GetX();
                new (local_48) oldscape::sidebars::SideBarData(iVar4, 0);
                (**(code**)(*plVar2 + 112))(plVar2, uVar3, local_60, local_48 + 8, local_50, 0, 0, 0,
                                            (SideBarData*)local_48);
            }
        }
        field_16->RenderDebug();
    }

    // 0x1007ac290, 96 bytes, placed by class name and debug map
    // ReflectionPass::RegisterTweakVarsOcclusion(tweak::Container&)
    void ReflectionPass::RegisterTweakVarsOcclusion(Container* param_1) {
        param_1->AddCheckBox("Enable On Reflection Pass", &field_776);
        param_1->AddCheckBox("Enable Reflection Pass CPU Reprojection Mask", &field_778);
        param_1->AddCheckBox("Show Reflection Depth Buffer", (bool*)(field_16 + 8));
    }

    // 0x1007ac2f0, 112 bytes, placed by class name and debug map
    // ReflectionPass::OnOcclusionEnabled()
    void ReflectionPass::OnOcclusionEnabled() {
        char* pcVar1;
        eastl::string local_38[32];

        (*(code*)field_0[9])(local_38);
        pcVar1 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        InitOcclusion((RenderTargetsManager*)(ReflectionPass*)this, pcVar1, true, 32, 96);
        eastl::string::~basic_string(local_38);
    }

} // namespace jag::graphics
