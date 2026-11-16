// libs/graphics/runetek7/renderer/renderpasses/ForwardLightingPass.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

#include "ForwardLightingPass.h"

namespace jag::graphics {
    // 0x100f43790, 1 bytes, __data
    ForwardLightingPass::m_sortByMaterial = 1;

    // 0x100f43791, 1 bytes, __data
    ForwardLightingPass::m_DrawOpaque = 1;

    // 0x100f43792, 1 bytes, __data
    ForwardLightingPass::m_DrawAlphaTested = 1;

    // 0x100f43793, 1 bytes, __data
    ForwardLightingPass::m_DrawRefracted = 1;

    // 0x100f43794, 1 bytes, __data
    ForwardLightingPass::m_DrawAlphaBlended = 1;

    // 0x100f43795, 1 bytes, __data
    ForwardLightingPass::m_DrawRT7Materials = 1;

    // 0x100f43796, 1 bytes, __data
    ForwardLightingPass::m_DrawRT5Materials = 1;

    // 0x1039bd149, 1 bytes, __common; zero-initialised
    ForwardLightingPass::m_showOpaqueScene;

    // 0x1039bd14a, 1 bytes, __common; zero-initialised
    ForwardLightingPass::m_showOpaqueSceneDepth;

    // 0x1007a5ed0, 176 bytes, base-object constructor, placed by class name and debug map
    // ForwardLightingPass::ForwardLightingPass(render::RenderTargetsManager*, postprocess::PostProcessManager&, ThreadPool*)
    void ForwardLightingPass::ForwardLightingPass(RenderTargetsManager* param_1, PostProcessManager* param_2,
                                                  ThreadPool* param_3) {
        Desc local_58;

        new (this) SceneRenderPass(4, param_1);
        field_0 = &PTR__ForwardLightingPass_100f14170;
        field_800 = param_2;
        new (&field_808) render::DepthStencilState();
        m_alphaBlendDepthWrite = true;
        new (&local_58) render::DepthStencilState::Desc();
        local_58.field_0 = '\x01';
        local_58.field_2 = '\0';
        local_58.field_12 = 515;
        (&field_808, &local_58)->Create();
        SetOcclusionTestEnabled(true);
    }

    // 0x1007a6120, 16 bytes, complete-object constructor, placed by class name
    // ForwardLightingPass::ForwardLightingPass(render::RenderTargetsManager*, postprocess::PostProcessManager&, ThreadPool*): jumps straight to the base-object constructor

    // 0x1007a6130, 48 bytes, base-object destructor, placed by class name
    // ForwardLightingPass::~ForwardLightingPass()
    void ForwardLightingPass::~ForwardLightingPass() {
        field_0 = &PTR__ForwardLightingPass_100f14170;
        (&field_808)->~DepthStencilState();
        ~SceneRenderPass();
    }

    // 0x1007a6160, 16 bytes, complete-object destructor, placed by class name
    // ForwardLightingPass::~ForwardLightingPass(): jumps straight to the base-object destructor

    // 0x1007a6170, 32 bytes, deleting destructor, placed by class name
    // ForwardLightingPass::~ForwardLightingPass()
    void ForwardLightingPass::~ForwardLightingPass() {
        ~ForwardLightingPass(this);
        operator_delete(this);
    }

    // 0x1007a6190, 144 bytes, placed by class name
    // ForwardLightingPass::BeginPass(render::DrawCallState&, render::RenderContext&, EffectManager&, SceneViewData const&, DrawableQueue const&)
    undefined8 ForwardLightingPass::BeginPass(DrawCallState* param_1, RenderContext* param_2, EffectManager* param_3,
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

    // 0x1007a6220, 2800 bytes, placed by class name
    // ForwardLightingPass::Render(RT7Core&, render::DrawCallState const&, EffectManager&, SceneViewData const&, DrawableQueue&)
    void ForwardLightingPass::Render(RT7Core* param_1, DrawCallState* param_2, EffectManager* param_3,
                                     SceneViewData* param_4, DrawableQueue* param_5) {
        EffectManager* pEVar1;
        RenderContext* this_00;
        DrawCallState* pDVar2;
        RT7Core* pRVar3;
        char cVar4;
        uint uVar5;
        int iVar6;
        undefined4 uVar7;
        NXTPixScreen* this_01;
        RenderDevice* this_02;
        compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>* pcVar8;
        RenderPipelineState* pRVar9;
        long lVar10;
        Layout* pLVar11;
        ulong uVar12;
        OutputMergerState* pOVar13;
        RenderTargets* pRVar14;
        PostProcessManager* this_03;
        RenderToTextureHelper* pRVar15;
        SunlightDirectLighting* pSVar16;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* pvVar17;
        RenderTargets* pRVar18;
        vector<render::Viewport, eastl::fixed_vector_allocator<24ul, 2ul, 4ul, 0ul, true, eastl::allocator>>* this_04;
        _func_decltype_nullptr* p_Var19;
        Texture* pTVar20;
        undefined1* puVar21;
        ForwardLightingPass* pFVar22;
        function* pfVar23;
        undefined1 auVar24[16];
        undefined8 in_stack_fffffffffffffeb8;
        uint uVar27;
        PagedLayer* pPVar25;
        undefined8 uVar26;
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_128[16];
        DrawableQueue* local_118;
        ForwardLightingPass* local_110;
        EffectManager* local_108;
        RenderContext* local_100;
        DrawCallState* local_f8;
        RT7Core* local_f0;
        uint local_e4;
        PagedLayer* local_e0;
        function local_d8;
        long local_38;

        uVar27 = (uint)((ulong)in_stack_fffffffffffffeb8 >> 32);
        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        local_108 = param_3;
        local_f8 = param_2;
        local_f0 = param_1;
        local_100 = (RenderContext*)GetRenderContext();
        local_e0 = (PagedLayer*)param_4;
        cVar4 = GetCPUOcclusionEnabled(param_4);
        if (cVar4 != '\0') {
            (field_16, local_f0, 4, local_e0, param_5)->RasterizeToDepthBuffer();
        }
        pFVar22 = this;
        cVar4 = GetOcclusionEnabled(local_e0);
        if (cVar4 == '\0') {
            uVar5 = 0;
        } else {
            pFVar22 = this;
            uVar5 = IsViewChangeValidForOcclusion(local_e0);
        }
        this_01 = (NXTPixScreen*)pFVar22->Instance();
        iVar6 = this_01->GetUIHeight();
        local_110 = this;
        if (iVar6 == 1) {
            this_02 = (RenderDevice*)this_01->Instance();
            fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>::function<
                ForwardLightingPass::Render(RT7Core&, render::DrawCallState_const&, EffectManager&,
                                            SceneViewData_const&, DrawableQueue&)::__0,
                void>((__0*)&local_d8);
            this_02->RunOnRenderThread(&local_d8);
            fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>::~function(
                (function<void(render::RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>*)&local_d8);
        }
        pFVar22 = local_110;
        pfVar23 = &local_d8;
        new (pfVar23) render::DrawCallState(local_f8);
        pcVar8 = (compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>*)
                     pfVar23->GetRenderPipelineState();
        auVar24 = pfVar23->Instance();
        eastl::compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>::compressed_pair_imp(
            pcVar8, (EntityHighlight**)(auVar24._0_8_ + 1524), auVar24._8_8_);
        pfVar23 = &local_d8;
        pRVar9 = (RenderPipelineState*)pfVar23->GetRenderPipelineState();
        lVar10 = pfVar23->Instance();
        pRVar9->SetRasteriserState((RasteriserState*)(lVar10 + 1200));
        pfVar23 = &local_d8;
        pLVar11 = (Layout*)pfVar23->GetRenderPipelineState();
        if (local_e0->field_624 == '\0') {
            lVar10 = pfVar23->Instance();
            puVar21 = (undefined1*)(lVar10 + 720);
        } else {
            puVar21 = &pFVar22->field_808;
        }
        eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::Layout::
            SetHeapSize(pLVar11, (ulong)puVar21);
        local_e4 = uVar5 & 255;
        lVar10 = (ulong)uVar27 << 32;
        1065353216->RenderOccludedDrawableGroup(pFVar22, local_f0, &local_d8, local_108, local_e0, param_5, lVar10,
                                                local_e4, 0);
        uVar7 = (undefined4)((ulong)lVar10 >> 32);
        local_d8.~DrawCallState();
        pfVar23 = &local_d8;
        new (pfVar23) render::DrawCallState(local_f8);
        pcVar8 = (compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>*)
                     pfVar23->GetRenderPipelineState();
        auVar24 = pfVar23->Instance();
        eastl::compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>::compressed_pair_imp(
            pcVar8, (EntityHighlight**)(auVar24._0_8_ + 1524), auVar24._8_8_);
        pfVar23 = &local_d8;
        pRVar9 = (RenderPipelineState*)pfVar23->GetRenderPipelineState();
        lVar10 = pfVar23->Instance();
        pRVar9->SetRasteriserState((RasteriserState*)(lVar10 + 1200));
        pfVar23 = &local_d8;
        pLVar11 = (Layout*)pfVar23->GetRenderPipelineState();
        if (local_e0->field_624 == '\0') {
            lVar10 = pfVar23->Instance();
            puVar21 = (undefined1*)(lVar10 + 720);
        } else {
            puVar21 = &pFVar22->field_808;
        }
        eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::Layout::
            SetHeapSize(pLVar11, (ulong)puVar21);
        1065353216->RenderOccludedDrawableGroup(pFVar22, local_f0, &local_d8, local_108, local_e0, param_5,
                                                CONCAT44(uVar7, 1), local_e4, 0);
        local_d8.~DrawCallState();
        pfVar23 = &local_d8;
        new (pfVar23) render::DrawCallState(local_f8);
        pcVar8 = (compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>*)
                     pfVar23->GetRenderPipelineState();
        auVar24 = pfVar23->Instance();
        eastl::compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>::compressed_pair_imp(
            pcVar8, (EntityHighlight**)(auVar24._0_8_ + 1676), auVar24._8_8_);
        pfVar23 = &local_d8;
        pRVar9 = (RenderPipelineState*)pfVar23->GetRenderPipelineState();
        lVar10 = pfVar23->Instance();
        pRVar9->SetRasteriserState((RasteriserState*)(lVar10 + 1200));
        pfVar23 = &local_d8;
        pLVar11 = (Layout*)pfVar23->GetRenderPipelineState();
        if (pFVar22->m_alphaBlendDepthWrite == false) {
            lVar10 = pfVar23->Instance();
            uVar12 = lVar10 + 960;
        } else {
            lVar10 = pfVar23->Instance();
            uVar12 = lVar10 + 720;
        }
        eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::Layout::
            SetHeapSize(pLVar11, uVar12);
        uVar7 = pFVar22->GetPos();
        DrawableQueue::SortGroup<SortKeyLessThan>(param_5, 3, uVar7);
        uVar7 = pFVar22->GetPos();
        param_5->RenderGroup(local_f0, &local_d8, local_e0, 3, uVar7, local_108);
        local_d8.~DrawCallState();
        pOVar13 = (OutputMergerState*)local_f8->GetOutputMergerState();
        pRVar14 = (RenderTargets*)pOVar13->GetRenderTargets();
        pRVar3 = local_f0;
        this_03 = (PostProcessManager*)local_f0->GetVertexDataBuffer();
        pRVar15 = (RenderToTextureHelper*)this_03->GetRenderToTexture();
        pEVar1 = local_108;
        pPVar25 = local_e0;
        RenderFullscreenEffects((ForwardLightingPass*)this_03, pRVar3, local_100, pRVar14, pRVar15, local_108,
                                (SceneViewData*)local_e0);
        uVar7 = (undefined4)((ulong)pPVar25 >> 32);
        cVar4 = pEVar1->IsEnabled(108);
        if (cVar4 != '\0') {
            pSVar16 = EffectManager::GetEffect<SunlightDirectLighting>(pEVar1, 108);
            pvVar17 =
                (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)pSVar16->get_overflow_allocator();
            pRVar14 =
                (RenderTargets*)eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(pvVar17);
            if (pRVar14 != (RenderTargets*)0) {
                pOVar13 = (OutputMergerState*)local_f8->GetOutputMergerState();
                pRVar18 = (RenderTargets*)pOVar13->GetRenderTargets();
                local_100->SetRenderTargets(pRVar18);
                this_04 = (vector<render::Viewport,
                                  eastl::fixed_vector_allocator<24ul, 2ul, 4ul, 0ul, true, eastl::allocator>>*)
                              local_e0->GetStaticChildren();
                p_Var19 = (_func_decltype_nullptr*)eastl::vector<
                    render::Viewport,
                    eastl::fixed_vector_allocator<24ul, 2ul, 4ul, 0ul, true, eastl::allocator>>::operator[](this_04, 0);
                local_d8.GetScreenRect();
                shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>::shared_ptr(local_128, p_Var19);
                pFVar22 = local_110;
                local_100->ResolveColourTargetData(pRVar14, 268452096, (Rect*)&local_d8, local_128);
            }
        }
        lVar10 = local_f0->GetForwardDepthTexture();
        pRVar3 = local_f0;
        if (lVar10 != 0) {
            pTVar20 = (Texture*)local_f0->GetForwardDepthTexture();
            pFVar22->DownsampleGPUDepthBuffer(pRVar3, pEVar1, local_e0, param_5, pTVar20, false);
        }
        pfVar23 = &local_d8;
        new (pfVar23) render::DrawCallState(local_f8);
        pcVar8 = (compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>*)
                     pfVar23->GetRenderPipelineState();
        auVar24 = pfVar23->Instance();
        eastl::compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>::compressed_pair_imp(
            pcVar8, (EntityHighlight**)(auVar24._0_8_ + 1524), auVar24._8_8_);
        pfVar23 = &local_d8;
        pRVar9 = (RenderPipelineState*)pfVar23->GetRenderPipelineState();
        lVar10 = pfVar23->Instance();
        pRVar9->SetRasteriserState((RasteriserState*)(lVar10 + 1200));
        pfVar23 = &local_d8;
        pLVar11 = (Layout*)pfVar23->GetRenderPipelineState();
        lVar10 = pfVar23->Instance();
        eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::Layout::
            SetHeapSize(pLVar11, lVar10 + 720);
        uVar26 = CONCAT44(uVar7, 7);
        1065353216->RenderOccludedDrawableGroup(pFVar22, local_f0, &local_d8, pEVar1, local_e0, param_5, uVar26,
                                                local_e4, 0);
        uVar7 = (undefined4)((ulong)uVar26 >> 32);
        RenderBlurredRefractionBuffers(pFVar22, local_f0, local_100, pEVar1, (SceneViewData*)local_e0, param_5,
                                       SUB41(local_e4, 0));
        uVar26 = CONCAT44(uVar7, 8);
        1065353216->RenderOccludedDrawableGroup(pFVar22, local_f0, &local_d8, pEVar1, local_e0, param_5, uVar26,
                                                local_e4, 0);
        uVar7 = (undefined4)((ulong)uVar26 >> 32);
        local_d8.~DrawCallState();
        pfVar23 = &local_d8;
        new (pfVar23) render::DrawCallState(local_f8);
        pcVar8 = (compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>*)
                     pfVar23->GetRenderPipelineState();
        auVar24 = pfVar23->Instance();
        eastl::compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>::compressed_pair_imp(
            pcVar8, (EntityHighlight**)(auVar24._0_8_ + 1904), auVar24._8_8_);
        pfVar23 = &local_d8;
        pRVar9 = (RenderPipelineState*)pfVar23->GetRenderPipelineState();
        lVar10 = pfVar23->Instance();
        pRVar9->SetRasteriserState((RasteriserState*)(lVar10 + 1200));
        pfVar23 = &local_d8;
        pLVar11 = (Layout*)pfVar23->GetRenderPipelineState();
        lVar10 = pfVar23->Instance();
        eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::Layout::
            SetHeapSize(pLVar11, lVar10 + 720);
        uVar26 = CONCAT44(uVar7, 4);
        1065353216->RenderOccludedDrawableGroup(pFVar22, local_f0, &local_d8, pEVar1, local_e0, param_5, uVar26,
                                                local_e4, 0);
        uVar7 = (undefined4)((ulong)uVar26 >> 32);
        local_d8.~DrawCallState();
        pfVar23 = &local_d8;
        new (pfVar23) render::DrawCallState(local_f8);
        pcVar8 = (compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>*)
                     pfVar23->GetRenderPipelineState();
        auVar24 = pfVar23->Instance();
        eastl::compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>::compressed_pair_imp(
            pcVar8, (EntityHighlight**)(auVar24._0_8_ + 1676), auVar24._8_8_);
        pfVar23 = &local_d8;
        pRVar9 = (RenderPipelineState*)pfVar23->GetRenderPipelineState();
        lVar10 = pfVar23->Instance();
        pRVar9->SetRasteriserState((RasteriserState*)(lVar10 + 1200));
        pfVar23 = &local_d8;
        pLVar11 = (Layout*)pfVar23->GetRenderPipelineState();
        if (pFVar22->m_alphaBlendDepthWrite == false) {
            lVar10 = pfVar23->Instance();
            uVar12 = lVar10 + 960;
        } else {
            lVar10 = pfVar23->Instance();
            uVar12 = lVar10 + 720;
        }
        eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::Layout::
            SetHeapSize(pLVar11, uVar12);
        uVar26 = CONCAT44(uVar7, 2);
        1065353216->RenderOccludedDrawableGroup(pFVar22, local_f0, &local_d8, pEVar1, local_e0, param_5, uVar26,
                                                local_e4, 0);
        uVar7 = (undefined4)((ulong)uVar26 >> 32);
        local_d8.~DrawCallState();
        pfVar23 = &local_d8;
        new (pfVar23) render::DrawCallState(local_f8);
        pcVar8 = (compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>*)
                     pfVar23->GetRenderPipelineState();
        auVar24 = pfVar23->Instance();
        eastl::compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>::compressed_pair_imp(
            pcVar8, (EntityHighlight**)(auVar24._0_8_ + 1904), auVar24._8_8_);
        pfVar23 = &local_d8;
        pRVar9 = (RenderPipelineState*)pfVar23->GetRenderPipelineState();
        lVar10 = pfVar23->Instance();
        pRVar9->SetRasteriserState((RasteriserState*)(lVar10 + 1200));
        pfVar23 = &local_d8;
        pLVar11 = (Layout*)pfVar23->GetRenderPipelineState();
        lVar10 = pfVar23->Instance();
        eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::Layout::
            SetHeapSize(pLVar11, lVar10 + 720);
        uVar26 = CONCAT44(uVar7, 5);
        1065353216->RenderOccludedDrawableGroup(pFVar22, local_f0, &local_d8, pEVar1, local_e0, param_5, uVar26,
                                                local_e4, 0);
        uVar7 = (undefined4)((ulong)uVar26 >> 32);
        local_d8.~DrawCallState();
        cVar4 = pEVar1->IsEnabled(108);
        if (cVar4 != '\0') {
            cVar4 = param_5->IsDrawableGroupEmpty(4, 6);
            if (cVar4 == '\0') {
                pSVar16 = EffectManager::GetEffect<SunlightDirectLighting>(pEVar1, 108);
                pvVar17 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)
                              pSVar16->get_overflow_allocator();
                pRVar14 = (RenderTargets*)eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(
                    pvVar17);
                pDVar2 = local_f8;
                if (pRVar14 != (RenderTargets*)0) {
                    local_118 = param_5;
                    pOVar13 = (OutputMergerState*)local_f8->GetOutputMergerState();
                    pRVar18 = (RenderTargets*)pOVar13->GetRenderTargets();
                    this_00 = local_100;
                    local_100->SetRenderTargets(pRVar18);
                    new (&local_d8) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(pRVar18);
                    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>::shared_ptr(
                        local_128, (_func_decltype_nullptr*)pRVar18);
                    this_00->ResolveColourTargetData(pRVar14, 805323008, (Rect*)&local_d8, local_128);
                    pfVar23 = &local_d8;
                    new (pfVar23) render::DrawCallState(pDVar2);
                    pcVar8 = (compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>*)
                                 pfVar23->GetRenderPipelineState();
                    auVar24 = pfVar23->Instance();
                    eastl::compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL,
                                               2>::compressed_pair_imp(pcVar8,
                                                                       (EntityHighlight**)(auVar24._0_8_ + 1676),
                                                                       auVar24._8_8_);
                    pfVar23 = &local_d8;
                    pRVar9 = (RenderPipelineState*)pfVar23->GetRenderPipelineState();
                    lVar10 = pfVar23->Instance();
                    pRVar9->SetRasteriserState((RasteriserState*)(lVar10 + 1200));
                    pfVar23 = &local_d8;
                    pLVar11 = (Layout*)pfVar23->GetRenderPipelineState();
                    lVar10 = pfVar23->Instance();
                    eastl::basic_string<char,
                                        eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::
                        Layout::SetHeapSize(pLVar11, lVar10 + 720);
                    1065353216->RenderOccludedDrawableGroup(local_110, local_f0, &local_d8, local_108, local_e0,
                                                            local_118, CONCAT44(uVar7, 6), local_e4, 0);
                    local_d8.~DrawCallState();
                }
            }
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x1007a7100, 480 bytes, placed by class name
    // ForwardLightingPass::RenderFullscreenEffects(RT7Core&, render::RenderContext&, render::RenderTargets const*, graphicutils::RenderToTextureHelper const&, EffectManager&, SceneViewData const&) const
    void ForwardLightingPass::RenderFullscreenEffects(RT7Core* param_1, RenderContext* param_2, RenderTargets* param_3,
                                                      RenderToTextureHelper* param_4, EffectManager* param_5,
                                                      SceneViewData* param_6) {
        char cVar1;
        SkyBoxManager* this_00;
        Texture* pTVar2;
        Layout* this_01;
        long lVar3;
        vector<render::Viewport, eastl::fixed_vector_allocator<24ul, 2ul, 4ul, 0ul, true, eastl::allocator>>* pvVar4;
        Viewport* pVVar5;
        VolumetricScatteringEffect* this_02;
        Viewport* pVVar6;
        RenderTargets* pRVar7;
        vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>* this_03;
        undefined8* puVar8;
        DrawCallState* this_04;
        DrawCallState local_78;
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_48[16];
        RenderToTextureHelper* local_38;

        if (param_3 != (RenderTargets*)0) {
            local_38 = param_4;
            cVar1 = param_5->IsEnabled(85);
            if (cVar1 != '\0') {
                this_00 = (SkyBoxManager*)param_1->GetSkyBoxManager();
                pTVar2 = (Texture*)this_00->GetSkyBoxTexture(-1);
                if (pTVar2 != (Texture*)0) {
                    this_04 = &local_78;
                    render::DrawCallState::DrawCallState(this_04);
                    this_01 = (Layout*)this_04->GetRenderPipelineState();
                    lVar3 = this_04->Instance();
                    eastl::basic_string<char,
                                        eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::
                        Layout::SetHeapSize(this_01, lVar3 + 1140);
                    pvVar4 = (vector<render::Viewport,
                                     eastl::fixed_vector_allocator<24ul, 2ul, 4ul, 0ul, true, eastl::allocator>>*)
                                 param_6->GetStaticChildren();
                    pVVar5 = (Viewport*)eastl::vector<
                        render::Viewport,
                        eastl::fixed_vector_allocator<24ul, 2ul, 4ul, 0ul, true, eastl::allocator>>::operator[](pvVar4,
                                                                                                                0);
                    local_38->RenderTextureToQuadDepth(param_2, &local_78, param_3, pTVar2, 1.0, pVVar5);
                    local_78.~DrawCallState();
                }
            }
            cVar1 = param_5->IsEnabled(50);
            if (cVar1 != '\0') {
                cVar1 = param_6->IsForwardPassOnly();
                if (cVar1 == '\0') {
                    this_02 =
                        (VolumetricScatteringEffect*)EffectManager::GetEffect<SunlightDirectLighting>(param_5, 50);
                    cVar1 = this_02->IsReady();
                    if (cVar1 != '\0') {
                        cVar1 = this_02->CanSkip(param_5);
                        if (cVar1 == '\0') {
                            this_02->Update(param_5, param_6);
                            param_2->SetRenderTargets(param_3);
                            pvVar4 =
                                (vector<render::Viewport,
                                        eastl::fixed_vector_allocator<24ul, 2ul, 4ul, 0ul, true, eastl::allocator>>*)
                                    param_6->GetStaticChildren();
                            pVVar6 = (Viewport*)
                                eastl::vector<render::Viewport,
                                              eastl::fixed_vector_allocator<24ul, 2ul, 4ul, 0ul, true,
                                                                            eastl::allocator>>::operator[](pvVar4, 0);
                            pRVar7 = (RenderTargets*)this_02->GetResolvedRT();
                            pVVar5 = pVVar6;
                            local_78.GetScreenRect();
                            shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>::shared_ptr(
                                local_48, (_func_decltype_nullptr*)pVVar5);
                            param_2->ResolveColourTargetData(pRVar7, 16640, (Rect*)&local_78, local_48);
                            this_03 =
                                (vector<render::Texture*,
                                        eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>*)
                                    param_3->GetColourTargetTextures();
                            puVar8 = (undefined8*)
                                eastl::vector<render::Texture*,
                                              eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true,
                                                                            eastl::allocator>>::operator[](this_03, 0);
                            this_02->Render(param_2, param_3, (Texture*)*puVar8, pVVar6, local_38);
                        }
                    }
                }
            }
        }
    }

    // 0x1007a74d0, 1376 bytes, placed by class name
    // ForwardLightingPass::RenderBlurredRefractionBuffers(RT7Core&, render::RenderContext&, EffectManager&, SceneViewData const&, DrawableQueue&, bool)
    void ForwardLightingPass::RenderBlurredRefractionBuffers(RT7Core* param_1, RenderContext* param_2,
                                                             EffectManager* param_3, SceneViewData* param_4,
                                                             DrawableQueue* param_5, bool param_6) {
        RenderContext* pRVar1;
        char cVar2;
        undefined4 uVar3;
        NXTPixToolkit* this_00;
        vector<oldscape::highlight::EntityWithCoord<oldscape::dash3d::Decor>, eastl::allocator>* this_01;
        long lVar4;
        SunlightDirectLighting* pSVar5;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_02;
        RenderTargets* this_03;
        vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>* pvVar6;
        undefined8* puVar7;
        uint* puVar8;
        undefined1* puVar9;
        Viewport* pVVar10;
        OutputMergerState* this_04;
        compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>* pcVar11;
        RenderPipelineState* pRVar12;
        Layout* pLVar13;
        GaussianBlurFilter* this_05;
        uint uVar14;
        DrawCallState* pDVar15;
        undefined1 auVar16[16];
        Data local_27b8;
        undefined8 uStack_2790;
        undefined1 local_2780[40];
        DrawCallState local_2758;
        DrawCallState local_2728;
        RenderContext* local_26f8;
        SunlightDirectLighting* local_26f0;
        RT7Core* local_26e8;
        DrawableQueue* local_26e0;
        SceneViewData* local_26d8;
        EffectStateSaveRestore local_26d0[309];
        fixed_map<EffectType, bool, 121ul, true, eastl::less<EffectType>, eastl::allocator> local_1380[4936];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        local_26f8 = param_2;
        local_26e8 = param_1;
        cVar2 = param_3->IsEnabled(108);
        if (cVar2 != '\0') {
            uVar3 = GetPos();
            this_00 = (NXTPixToolkit*)param_5->GetDrawableGroup(uVar3, 8);
            this_01 = (vector<oldscape::highlight::EntityWithCoord<oldscape::dash3d::Decor>, eastl::allocator>*)
                          this_00->GetScreen();
            lVar4 =
                eastl::vector<oldscape::highlight::EntityWithCoord<oldscape::dash3d::Decor>, eastl::allocator>::size(
                    this_01);
            if (lVar4 != 0) {
                pSVar5 = EffectManager::GetEffect<SunlightDirectLighting>(param_3);
                this_02 =
                    (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)pSVar5->get_overflow_allocator();
                this_03 = (RenderTargets*)eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(
                    this_02);
                if (this_03 != (RenderTargets*)0) {
                    local_26e0 = param_5;
                    local_26d8 = param_4;
                    pvVar6 = (vector<render::Texture*,
                                     eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>*)
                                 this_03->GetColourTargetTextures();
                    puVar7 = (undefined8*)eastl::vector<
                        render::Texture*,
                        eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>::operator[](pvVar6,
                                                                                                               0);
                    puVar8 = (uint*)(*puVar7)->second();
                    new (&local_2758) render::DrawCallState();
                    eastl::fixed_map<EffectType, bool, 121ul, true, eastl::less<EffectType>,
                                     eastl::allocator>::fixed_map(local_1380);
                    local_26d0[0].field_0._0_1_ = 108;
                    puVar9 = (undefined1*)
                        eastl::map<EffectType, bool, eastl::less<EffectType>,
                                   eastl::fixed_node_allocator<40ul, 121ul, 1ul, 0ul, true, eastl::allocator>>::
                        operator[]((map<EffectType, bool, eastl::less<EffectType>,
                                        eastl::fixed_node_allocator<40ul, 121ul, 1ul, 0ul, true, eastl::allocator>>*)
                                       local_1380,
                                   (EffectType*)local_26d0);
                    *puVar9 = 0;
                    EffectStateSaveRestore::EffectStateSaveRestore(local_26d0, param_3, (fixed_map*)local_1380);
                    new (local_2780) render::Viewport(0, 0, *puVar8, puVar8[1], 0.0, 1.0);
                    pVVar10 = (Viewport*)local_2758.GetOutputMergerState();
                    render::OutputMergerState::SetViewports(pVVar10, (uint)local_2780);
                    this_04 = (OutputMergerState*)local_2758.GetOutputMergerState();
                    this_04->SetRenderTargets(this_03);
                    pDVar15 = &local_2758;
                    pcVar11 = (compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>*)
                                  pDVar15->GetRenderPipelineState();
                    auVar16 = pDVar15->Instance();
                    eastl::compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL,
                                               2>::compressed_pair_imp(pcVar11,
                                                                       (EntityHighlight**)(auVar16._0_8_ + 1524),
                                                                       auVar16._8_8_);
                    pDVar15 = &local_2758;
                    pRVar12 = (RenderPipelineState*)pDVar15->GetRenderPipelineState();
                    lVar4 = pDVar15->Instance();
                    pRVar12->SetRasteriserState((RasteriserState*)(lVar4 + 1200));
                    pDVar15 = &local_2758;
                    pLVar13 = (Layout*)pDVar15->GetRenderPipelineState();
                    lVar4 = pDVar15->Instance();
                    eastl::basic_string<char,
                                        eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::
                        Layout::SetHeapSize(pLVar13, lVar4 + 720);
                    pSVar5 = EffectManager::GetEffect<SunlightDirectLighting>(param_3, 106);
                    puVar7 = (undefined8*)pSVar5->GetDefaultValue();
                    local_27b8._0_8_ = *puVar7;
                    local_27b8._8_8_ = puVar7[1];
                    local_27b8._16_8_ = puVar7[2];
                    local_27b8._24_8_ = puVar7[3];
                    local_27b8._32_8_ = puVar7[4];
                    uStack_2790 = puVar7[5];
                    new (&local_2728) math::Point<float>((float)*puVar8, (float)puVar8[1]);
                    pSVar5->SetViewportLookupScale(local_2780, (Vector2T*)&local_2728);
                    local_26f0 = pSVar5;
                    new (&local_2728) ImVec4(0.0, 0.0, 1.0, 1.0);
                    WaterParameters::SetFeatureFlags((Vector4T*)&local_2728);
                    1065353216->RenderOccludedDrawableGroup(this, local_26e8, &local_2758, param_3, local_26d8,
                                                            local_26e0, 7, param_6, 0);
                    new (&local_2728) render::DrawCallState(&local_2758);
                    pDVar15 = &local_2728;
                    pcVar11 = (compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>*)
                                  pDVar15->GetRenderPipelineState();
                    auVar16 = pDVar15->Instance();
                    eastl::compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL,
                                               2>::compressed_pair_imp(pcVar11,
                                                                       (EntityHighlight**)(auVar16._0_8_ + 1676),
                                                                       auVar16._8_8_);
                    pDVar15 = &local_2728;
                    pRVar12 = (RenderPipelineState*)pDVar15->GetRenderPipelineState();
                    lVar4 = pDVar15->Instance();
                    pRVar12->SetRasteriserState((RasteriserState*)(lVar4 + 1200));
                    pDVar15 = &local_2728;
                    pLVar13 = (Layout*)pDVar15->GetRenderPipelineState();
                    lVar4 = pDVar15->Instance();
                    eastl::basic_string<char,
                                        eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::
                        Layout::SetHeapSize(pLVar13, lVar4 + 720);
                    1065353216->RenderOccludedDrawableGroup(this, local_26e8, &local_2728, param_3, local_26d8,
                                                            local_26e0, 2, param_6, 0);
                    new ((local_2780 + 24)) ImVec4(1.0, 1.0, 1.0, 1.0);
                    WaterParameters::SetFeatureFlags((Vector4T*)(local_2780 + 24));
                    local_26f0->SetData(&local_27b8);
                    local_2728.~DrawCallState();
                    local_26d0->~EffectStateSaveRestore();
                    eastl::fixed_map<EffectType, bool, 121ul, true, eastl::less<EffectType>,
                                     eastl::allocator>::~fixed_map(local_1380);
                    local_2758.~DrawCallState();
                    cVar2 = param_3->IsEnabled();
                    if (cVar2 != '\0') {
                        pvVar6 = (vector<render::Texture*,
                                         eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>*)
                                     this_03->GetColourTargetTextures();
                        puVar7 = (undefined8*)eastl::vector<
                            render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true,
                                                                            eastl::allocator>>::operator[](pvVar6, 0);
                        lVar4 = (*puVar7)->second();
                        pRVar1 = local_26f8;
                        if (1 < *(uint*)(lVar4 + 8)) {
                            uVar14 = 1;
                            do {
                                this_03->SetTargetMipLayerLevel(0, 0, uVar14);
                                this_05 = (GaussianBlurFilter*)field_800->GetGaussianBlurFilter();
                                pvVar6 =
                                    (vector<render::Texture*,
                                            eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>*)
                                        this_03->GetColourTargetTextures();
                                puVar7 = (undefined8*)
                                    eastl::vector<render::Texture*,
                                                  eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true,
                                                                                eastl::allocator>>::operator[](pvVar6,
                                                                                                               0);
                                this_05->BlurMultiPass13Tap(pRVar1, this_03, (Texture*)*puVar7,
                                                            (float)uVar14 + (float)uVar14, 1, uVar14 - 1);
                                pvVar6 =
                                    (vector<render::Texture*,
                                            eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>*)
                                        this_03->GetColourTargetTextures();
                                puVar7 = (undefined8*)
                                    eastl::vector<render::Texture*,
                                                  eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true,
                                                                                eastl::allocator>>::operator[](pvVar6,
                                                                                                               0);
                                lVar4 = (*puVar7)->second();
                                uVar14 = uVar14 + 1;
                            } while (uVar14 < *(uint*)(lVar4 + 8));
                        }
                        this_03->SetTargetMipLayerLevel(0, 0, 0);
                    }
                }
            }
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x1007a7a60, 784 bytes, placed by class name
    // ForwardLightingPass::RenderDebug(EffectManager&, DrawableQueue&)
    void ForwardLightingPass::RenderDebug(EffectManager* param_1, DrawableQueue* param_2) {
        char cVar1;
        undefined4 uVar2;
        int iVar3;
        SunlightDirectLighting* pSVar4;
        long* plVar5;
        shared_ptr<render::RenderTargets>* psVar6;
        RenderTargets* pRVar7;
        vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>* this_00;
        undefined8* puVar8;
        undefined8 uVar9;
        ImVec4 local_60[16];
        undefined1 local_50[16];
        Point<float> local_40[8];
        undefined1 local_38[8];

        uVar2 = GetPos();
        param_2->RenderDebug(0, uVar2);
        uVar2 = GetPos();
        param_2->RenderDebug(1, uVar2);
        uVar2 = GetPos();
        param_2->RenderDebug(3, uVar2);
        uVar2 = GetPos();
        param_2->RenderDebug(7, uVar2);
        uVar2 = GetPos();
        param_2->RenderDebug(8, uVar2);
        uVar2 = GetPos();
        param_2->RenderDebug(4, uVar2);
        uVar2 = GetPos();
        param_2->RenderDebug(2, uVar2);
        uVar2 = GetPos();
        param_2->RenderDebug(5, uVar2);
        uVar2 = GetPos();
        param_2->RenderDebug(6, uVar2);
        cVar1 = param_1->IsEnabled(108);
        if (cVar1 != '\0') {
            if (m_showOpaqueScene != '\0') {
                pSVar4 = EffectManager::GetEffect<SunlightDirectLighting>(param_1);
                plVar5 = (long*)DebugPrimitiveCollectorBasic::GetCollector("");
                if (plVar5 != (long*)0) {
                    psVar6 = (shared_ptr<render::RenderTargets>*)pSVar4->get_overflow_allocator();
                    pRVar7 = (RenderTargets*)shared_ptr<render::RenderTargets>::operator->(psVar6);
                    this_00 = (vector<render::Texture*,
                                      eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>*)
                                  pRVar7->GetColourTargetTextures();
                    puVar8 = (undefined8*)eastl::vector<
                        render::Texture*,
                        eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>::operator[](this_00,
                                                                                                               0);
                    uVar9 = *puVar8;
                    ImVec4::ImVec4(local_60, 0.0, 0.0, 0.5, 0.5);
                    math::Point<float>::Point(local_40, 0.0, 0.0);
                    new ((local_50 + 8)) math::Point<float>(1.0, 1.0);
                    new (local_38) math::ColourStorage8888<math::ARGB8StorageLayout>(255, 255, 255, 255);
                    iVar3 = local_38->GetX();
                    new (local_50) oldscape::sidebars::SideBarData(iVar3, 0);
                    (**(code**)(*plVar5 + 112))(plVar5, uVar9, local_60, local_40, local_50 + 8, 0, 0, 0,
                                                (SideBarData*)local_50);
                }
            }
            if (m_showOpaqueSceneDepth != '\0') {
                pSVar4 = EffectManager::GetEffect<SunlightDirectLighting>(param_1, 108);
                plVar5 = (long*)DebugPrimitiveCollectorBasic::GetCollector("");
                if (plVar5 != (long*)0) {
                    psVar6 = (shared_ptr<render::RenderTargets>*)pSVar4->get_overflow_allocator();
                    pRVar7 = (RenderTargets*)shared_ptr<render::RenderTargets>::operator->(psVar6);
                    uVar9 = pRVar7->GetDepthStencilTargetTexture();
                    ImVec4::ImVec4(local_60, 0.0, 0.0, 0.5, 0.5);
                    math::Point<float>::Point(local_40, 0.0, 0.0);
                    new ((local_50 + 8)) math::Point<float>(1.0, 1.0);
                    new (local_38) math::ColourStorage8888<math::ARGB8StorageLayout>(255, 255, 255, 255);
                    iVar3 = local_38->GetX();
                    new (local_50) oldscape::sidebars::SideBarData(iVar3, 0);
                    (**(code**)(*plVar5 + 112))(plVar5, uVar9, local_60, local_40, (Point<float>*)(local_50 + 8), 0, 1,
                                                0, (SideBarData*)local_50);
                }
            }
        }
        cVar1 = GetOcclusionTestEnabled();
        if (cVar1 != '\0') {
            field_16->RenderDebug();
        }
    }

    // 0x1007a7d70, 64 bytes, placed by class name
    // ForwardLightingPass::RegisterTweakVarsOcclusion(tweak::Container&)
    void ForwardLightingPass::RegisterTweakVarsOcclusion(Container* param_1) {
        param_1->AddCheckBox("Enable On Forward Pass", &field_776);
        param_1->AddCheckBox("Show Forward Depth Buffer", (bool*)(field_16 + 8));
    }

    // 0x1007bdf70, 48 bytes, placed by class name
    // ForwardLightingPass::Render(RT7Core&, render::DrawCallState const&, EffectManager&, SceneViewData const&, DrawableQueue&)::$_0::operator()(render::RenderContext&) const
    /* ForwardLightingPass::Render(RT7Core&, render::DrawCallState
   const&, EffectManager&, SceneViewData const&,
   DrawableQueue&)::$_0::TEMPNAMEPLACEHOLDERVALUE(render::RenderContext&) const
    */

    void ForwardLightingPass::Render(RT7Core&, render::DrawCallState_const&, EffectManager&, SceneViewData_const&,
                                     DrawableQueue&)::$_0::operator()(RenderContext* param_1) {
        _glFlush();
        render::CheckGlErrorInternal("glFlush",
                                     "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                     "runetek7/renderer/renderpasses/ForwardLightingPass.cpp",
                                     105);
    }

} // namespace jag::graphics
