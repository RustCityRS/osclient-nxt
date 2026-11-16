// libs/graphics/runetek7/renderer/renderpasses/ForwardLightingPass.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

#include "ForwardLightingPass.h"

namespace jag::graphics {
    // 0x100f43790
    bool ForwardLightingPass::m_sortByMaterial = 1;

    // 0x100f43791
    bool ForwardLightingPass::m_DrawOpaque = 1;

    // 0x100f43792
    bool ForwardLightingPass::m_DrawAlphaTested = 1;

    // 0x100f43793
    bool ForwardLightingPass::m_DrawRefracted = 1;

    // 0x100f43794
    bool ForwardLightingPass::m_DrawAlphaBlended = 1;

    // 0x100f43795
    bool ForwardLightingPass::m_DrawRT7Materials = 1;

    // 0x100f43796
    bool ForwardLightingPass::m_DrawRT5Materials = 1;

    // 0x1039bd149
    bool ForwardLightingPass::m_showOpaqueScene;

    // 0x1039bd14a
    bool ForwardLightingPass::m_showOpaqueSceneDepth;

    // 0x1007a5ed0
    ForwardLightingPass::ForwardLightingPass(render::RenderTargetsManager* renderTargetsManager,
                                             postprocess::PostProcessManager& postProcessManager,
                                             ThreadPool* threadPool)
        : SceneRenderPass(4, renderTargetsManager, threadPool), field_800(postProcessManager),
          m_alphaBlendDepthWrite(true) {

        Desc local_58;
        local_58.field_0 = '\x01';
        local_58.field_2 = '\0';
        local_58.field_12 = 515;
        field_808.Create(local_58);
        SetOcclusionTestEnabled(true);
    }

    // 0x1007a6130
    ForwardLightingPass::~ForwardLightingPass() {
        field_808.~DepthStencilState();
    }

    // 0x1007a6190
    uint64_t ForwardLightingPass::BeginPass(render::DrawCallState& drawCallState, render::RenderContext& renderContext,
                                            EffectManager& effectManager, const SceneViewData& sceneViewData,
                                            const DrawableQueue& drawableQueue) {
        auto this_01 = drawCallState.GetOutputMergerState();
        uint8_t* this_00 = &sceneViewData.field_432;
        auto viewport = this_00->HeapBeginPtr();
        unsigned int arg2 = this_00->size();
        this_01->SetViewports(viewport, arg2);
        auto this_02 = drawCallState.GetOutputMergerState();
        this_02->SetRenderTargets(*(RenderTargets**)&sceneViewData.field_368);
        this_02->ClearRenderTargets(renderContext, sceneViewData.field_368, *this_00);
        return 1;
    }

    // 0x1007a6220
    void ForwardLightingPass::Render(RT7Core& rt7Core, const render::DrawCallState& drawCallState,
                                     EffectManager& effectManager, const SceneViewData& sceneViewData,
                                     DrawableQueue& drawableQueue) {
        RenderContext* this_00;
        uint8_t arg7;
        bool arg6;
        RenderDevice* this_02;
        void* pvVar9;
        RenderToTextureHelper* renderToTextureHelper;
        FogEffect* pFVar12;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* pvVar13;
        RenderTargets* pRVar14;
        vector<render::Viewport, eastl::fixed_vector_allocator<24ul, _2ul, _4ul, _0ul, true> _>* this_04;
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_128;
        DrawCallState local_d8;

        auto local_100 = GetRenderContext();
        if (GetCPUOcclusionEnabled(sceneViewData)) {
            field_16->RasterizeToDepthBuffer(rt7Core, 4, *((SceneViewData*)(DrawableQueue*)sceneViewData),
                                             drawableQueue);
        }
        DrawableQueue* arg1 = (DrawableQueue*)sceneViewData;
        ForwardLightingPass* this_06 = this;
        if (!(GetOcclusionEnabled(*((SceneViewData*)(DrawableQueue*)sceneViewData)))) {
            arg7 = false;
        } else {
            arg1 = (DrawableQueue*)sceneViewData;
            this_06 = this;
            arg7 = IsViewChangeValidForOcclusion(*((SceneViewData*)(DrawableQueue*)sceneViewData));
        }
        auto this_01 = this_06->Instance();
        if (this_01->GetUIHeight() == 1) {
            this_02 = (RenderDevice*)this_01->Instance();
            fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>::function<
                ForwardLightingPass::Render(RT7Core&, render::DrawCallState const&, EffectManager&,
                                            SceneViewData const&, DrawableQueue&)::__0,
                void>((function<void(render::RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>*)&local_d8,
                      (__0*)arg1);
            this_02->RunOnRenderThread(local_d8);
        }
        RT7Core* rt7Core_00 = (RT7Core*)this;
        DrawCallState* pDVar15 = &local_d8;
        new (pDVar15) render::DrawCallState(drawCallState);
        auto pcVar5 = pDVar15->GetRenderPipelineState();
        long lVar6 = pDVar15->Instance();
        eastl::compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>::compressed_pair_imp(
            pcVar5, (PlayerDataComparator<oldscape::social::FriendChatUser>*)(lVar6 + 1524));
        pDVar15 = &local_d8;
        auto pRVar7 = pDVar15->GetRenderPipelineState();
        lVar6 = pDVar15->Instance();
        pRVar7->SetRasteriserState((lVar6 + 1200));
        pDVar15 = &local_d8;
        auto pLVar8 = pDVar15->GetRenderPipelineState();
        if (((DrawableQueue*)sceneViewData)->field_624 == '\0') {
            lVar6 = pDVar15->Instance();
            pvVar9 = (void*)(lVar6 + 720);
        } else {
            pvVar9 = rt7Core_00->m_postProcessManager + 360;
        }
        pLVar8->SetHeapSize(pvVar9);
        unsigned int local_e4 = (unsigned int)(uint8_t)arg7;
        rt7Core_00->RenderOccludedDrawableGroup(rt7Core, &local_d8, (EffectManager*)(SceneViewData*)effectManager,
                                                (SceneViewData*)(DrawableQueue*)sceneViewData, drawableQueue, 0,
                                                (bool)arg7, nullptr, 1.0);
        pDVar15 = &local_d8;
        new (pDVar15) render::DrawCallState(drawCallState);
        pcVar5 = (compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>*)
                     pDVar15->GetRenderPipelineState();
        lVar6 = pDVar15->Instance();
        eastl::compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>::compressed_pair_imp(
            pcVar5, (PlayerDataComparator<oldscape::social::FriendChatUser>*)(lVar6 + 1524));
        pDVar15 = &local_d8;
        pRVar7 = (RenderPipelineState*)pDVar15->GetRenderPipelineState();
        lVar6 = pDVar15->Instance();
        pRVar7->SetRasteriserState((lVar6 + 1200));
        pDVar15 = &local_d8;
        pLVar8 = (Layout*)pDVar15->GetRenderPipelineState();
        if (((DrawableQueue*)sceneViewData)->field_624 == '\0') {
            lVar6 = pDVar15->Instance();
            pvVar9 = (void*)(lVar6 + 720);
        } else {
            pvVar9 = rt7Core_00->m_postProcessManager + 360;
        }
        pLVar8->SetHeapSize(pvVar9);
        rt7Core_00->RenderOccludedDrawableGroup(rt7Core, &local_d8, (EffectManager*)(SceneViewData*)effectManager,
                                                (SceneViewData*)(DrawableQueue*)sceneViewData, drawableQueue, 1,
                                                (uint8_t)local_e4, nullptr, 1.0);
        pDVar15 = &local_d8;
        new (pDVar15) render::DrawCallState(drawCallState);
        pcVar5 = (compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>*)
                     pDVar15->GetRenderPipelineState();
        lVar6 = pDVar15->Instance();
        eastl::compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>::compressed_pair_imp(
            pcVar5, (PlayerDataComparator<oldscape::social::FriendChatUser>*)(lVar6 + 1676));
        pDVar15 = &local_d8;
        pRVar7 = (RenderPipelineState*)pDVar15->GetRenderPipelineState();
        lVar6 = pDVar15->Instance();
        pRVar7->SetRasteriserState((lVar6 + 1200));
        pDVar15 = &local_d8;
        pLVar8 = (Layout*)pDVar15->GetRenderPipelineState();
        if (rt7Core_00->m_postProcessManager[420] == false) {
            lVar6 = pDVar15->Instance();
            pvVar9 = (void*)(lVar6 + 960);
        } else {
            lVar6 = pDVar15->Instance();
            pvVar9 = (void*)(lVar6 + 720);
        }
        pLVar8->SetHeapSize(pvVar9);
        auto renderPassType = rt7Core_00->GetPos();
        drawableQueue.SortGroup<SortKeyLessThan>(3, renderPassType);
        unsigned int uVar4 = rt7Core_00->GetPos();
        DrawableQueue::RenderGroup(drawableQueue, rt7Core, local_d8, (DrawableGroupType)(DrawableQueue*)sceneViewData,
                                   3, *((EffectManager*)(unsigned long)uVar4));
        auto pOVar10 = drawCallState.GetOutputMergerState();
        auto pRVar11 = pOVar10->GetRenderTargets();
        RT7Core* pRVar1 = rt7Core;
        auto this_03 = rt7Core.GetVertexDataBuffer();
        renderToTextureHelper = (RenderToTextureHelper*)this_03->GetRenderToTexture();
        RenderFullscreenEffects((ForwardLightingPass*)this_03, pRVar1, local_100, pRVar11, renderToTextureHelper,
                                (EffectManager*)(SceneViewData*)effectManager,
                                (SceneViewData*)(DrawableQueue*)sceneViewData);
        if (((EffectManager*)(SceneViewData*)effectManager)->IsEnabled(108)) {
            pFVar12 = ((EffectManager*)(SceneViewData*)effectManager)->GetEffect<SunlightDirectLighting>(108);
            pvVar13 =
                (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)pFVar12->get_overflow_allocator();
            pRVar11 = (RenderTargets*)pvVar13->end();
            if (pRVar11 != nullptr) {
                pOVar10 = drawCallState.GetOutputMergerState();
                pRVar14 = pOVar10->GetRenderTargets();
                local_100->SetRenderTargets(pRVar14);
                this_04 = ((PagedLayer*)(DrawableQueue*)sceneViewData)->GetStaticChildren();
                local_d8 = ((Viewport*)(*this_04)[0])->GetScreenRect();
                local_128 = shared_ptr();
                rt7Core_00 = (RT7Core*)this;
                local_100->ResolveColourTargetData(pRVar11, 268452096, local_d8, local_128);
            }
        }
        lVar6 = rt7Core.GetForwardDepthTexture();
        pRVar1 = rt7Core;
        if (lVar6 != 0) {
            arg6 = (bool)rt7Core.GetForwardDepthTexture();
            SceneRenderPass::DownsampleGPUDepthBuffer(*rt7Core_00, *pRVar1, effectManager, sceneViewData, drawableQueue,
                                                      arg6);
        }
        pDVar15 = &local_d8;
        new (pDVar15) render::DrawCallState(drawCallState);
        pcVar5 = (compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>*)
                     pDVar15->GetRenderPipelineState();
        lVar6 = pDVar15->Instance();
        eastl::compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>::compressed_pair_imp(
            pcVar5, (PlayerDataComparator<oldscape::social::FriendChatUser>*)(lVar6 + 1524));
        pDVar15 = &local_d8;
        pRVar7 = (RenderPipelineState*)pDVar15->GetRenderPipelineState();
        lVar6 = pDVar15->Instance();
        pRVar7->SetRasteriserState((lVar6 + 1200));
        pDVar15 = &local_d8;
        pLVar8 = (Layout*)pDVar15->GetRenderPipelineState();
        lVar6 = pDVar15->Instance();
        pLVar8->SetHeapSize((lVar6 + 720));
        rt7Core_00->RenderOccludedDrawableGroup(rt7Core, &local_d8, (EffectManager*)(SceneViewData*)effectManager,
                                                (SceneViewData*)(DrawableQueue*)sceneViewData, drawableQueue, 7,
                                                (uint8_t)local_e4, nullptr, 1.0);
        RenderBlurredRefractionBuffers(rt7Core_00, (RenderContext*)rt7Core, (EffectManager*)local_100,
                                       (SceneViewData*)effectManager, (DrawableQueue*)sceneViewData,
                                       (uint8_t)drawableQueue);
        rt7Core_00->RenderOccludedDrawableGroup(rt7Core, &local_d8, (EffectManager*)(SceneViewData*)effectManager,
                                                (SceneViewData*)(DrawableQueue*)sceneViewData, drawableQueue, 8,
                                                (uint8_t)local_e4, nullptr, 1.0);
        pDVar15 = &local_d8;
        new (pDVar15) render::DrawCallState(drawCallState);
        pcVar5 = (compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>*)
                     pDVar15->GetRenderPipelineState();
        lVar6 = pDVar15->Instance();
        eastl::compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>::compressed_pair_imp(
            pcVar5, (PlayerDataComparator<oldscape::social::FriendChatUser>*)(lVar6 + 1904));
        pDVar15 = &local_d8;
        pRVar7 = (RenderPipelineState*)pDVar15->GetRenderPipelineState();
        lVar6 = pDVar15->Instance();
        pRVar7->SetRasteriserState((lVar6 + 1200));
        pDVar15 = &local_d8;
        pLVar8 = (Layout*)pDVar15->GetRenderPipelineState();
        lVar6 = pDVar15->Instance();
        pLVar8->SetHeapSize((lVar6 + 720));
        rt7Core_00->RenderOccludedDrawableGroup(rt7Core, &local_d8, (EffectManager*)(SceneViewData*)effectManager,
                                                (SceneViewData*)(DrawableQueue*)sceneViewData, drawableQueue, 4,
                                                (uint8_t)local_e4, nullptr, 1.0);
        pDVar15 = &local_d8;
        new (pDVar15) render::DrawCallState(drawCallState);
        pcVar5 = (compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>*)
                     pDVar15->GetRenderPipelineState();
        lVar6 = pDVar15->Instance();
        eastl::compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>::compressed_pair_imp(
            pcVar5, (PlayerDataComparator<oldscape::social::FriendChatUser>*)(lVar6 + 1676));
        pDVar15 = &local_d8;
        pRVar7 = (RenderPipelineState*)pDVar15->GetRenderPipelineState();
        lVar6 = pDVar15->Instance();
        pRVar7->SetRasteriserState((lVar6 + 1200));
        pDVar15 = &local_d8;
        pLVar8 = (Layout*)pDVar15->GetRenderPipelineState();
        if (rt7Core_00->m_postProcessManager[420] == '\0') {
            lVar6 = pDVar15->Instance();
            pvVar9 = (void*)(lVar6 + 960);
        } else {
            lVar6 = pDVar15->Instance();
            pvVar9 = (void*)(lVar6 + 720);
        }
        pLVar8->SetHeapSize(pvVar9);
        rt7Core_00->RenderOccludedDrawableGroup(rt7Core, &local_d8, (EffectManager*)(SceneViewData*)effectManager,
                                                (SceneViewData*)(DrawableQueue*)sceneViewData, drawableQueue, 2,
                                                (uint8_t)local_e4, nullptr, 1.0);
        pDVar15 = &local_d8;
        new (pDVar15) render::DrawCallState(drawCallState);
        pcVar5 = (compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>*)
                     pDVar15->GetRenderPipelineState();
        lVar6 = pDVar15->Instance();
        eastl::compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>::compressed_pair_imp(
            pcVar5, (PlayerDataComparator<oldscape::social::FriendChatUser>*)(lVar6 + 1904));
        pDVar15 = &local_d8;
        pRVar7 = (RenderPipelineState*)pDVar15->GetRenderPipelineState();
        lVar6 = pDVar15->Instance();
        pRVar7->SetRasteriserState((lVar6 + 1200));
        pDVar15 = &local_d8;
        pLVar8 = (Layout*)pDVar15->GetRenderPipelineState();
        lVar6 = pDVar15->Instance();
        pLVar8->SetHeapSize((lVar6 + 720));
        rt7Core_00->RenderOccludedDrawableGroup(rt7Core, &local_d8, (EffectManager*)(SceneViewData*)effectManager,
                                                (SceneViewData*)(DrawableQueue*)sceneViewData, drawableQueue, 5,
                                                (uint8_t)local_e4, nullptr, 1.0);
        if (((EffectManager*)(SceneViewData*)effectManager)->IsEnabled(108)) {
            if (!(drawableQueue.IsDrawableGroupEmpty(4, 6))) {
                pFVar12 = ((EffectManager*)(SceneViewData*)effectManager)->GetEffect<SunlightDirectLighting>(108);
                pvVar13 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)
                              pFVar12->get_overflow_allocator();
                pRVar11 = (RenderTargets*)pvVar13->end();
                pDVar15 = drawCallState;
                if (pRVar11 != nullptr) {
                    pOVar10 = drawCallState.GetOutputMergerState();
                    pRVar14 = pOVar10->GetRenderTargets();
                    this_00 = local_100;
                    local_100->SetRenderTargets(pRVar14);
                    local_d8 = shared_ptr();
                    local_128 = shared_ptr();
                    this_00->ResolveColourTargetData(pRVar11, 805323008, local_d8, local_128);
                    local_d8 = render::DrawCallState(*pDVar15);
                    pcVar5 =
                        (compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>*)&local_d8
                            ->GetRenderPipelineState();
                    lVar6 = &local_d8->Instance();
                    eastl::compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>::
                        compressed_pair_imp(pcVar5,
                                            (PlayerDataComparator<oldscape::social::FriendChatUser>*)(lVar6 + 1676));
                    pDVar15 = &local_d8;
                    pRVar7 = (RenderPipelineState*)pDVar15->GetRenderPipelineState();
                    lVar6 = pDVar15->Instance();
                    pRVar7->SetRasteriserState((lVar6 + 1200));
                    pDVar15 = &local_d8;
                    pLVar8 = (Layout*)pDVar15->GetRenderPipelineState();
                    lVar6 = pDVar15->Instance();
                    pLVar8->SetHeapSize((lVar6 + 720));
                    ((SceneRenderPass*)(RT7Core*)this)
                        ->RenderOccludedDrawableGroup(rt7Core, &local_d8, (EffectManager*)(SceneViewData*)effectManager,
                                                      (SceneViewData*)(DrawableQueue*)sceneViewData, drawableQueue, 6,
                                                      (uint8_t)local_e4, nullptr, 1.0);
                }
            }
        }
    }

    // 0x1007a7100
    void ForwardLightingPass::RenderFullscreenEffects(RT7Core& rt7Core, render::RenderContext& renderContext,
                                                      const render::RenderTargets* renderTargets,
                                                      const graphicutils::RenderToTextureHelper& renderToTextureHelper,
                                                      EffectManager& effectManager,
                                                      const SceneViewData& sceneViewData) const {
        SkyBoxManager* this_00;
        Texture* texture;
        Layout* this_01;
        long lVar2;
        vector<render::Viewport, eastl::fixed_vector_allocator<24ul, _2ul, _4ul, _0ul, true> _>* pvVar3;
        Viewport* pVVar4;
        VolumetricScatteringEffect* this_02;
        RenderTargets* renderTargets_00;
        vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>* this_03;
        uint64_t* puVar5;
        DrawCallState local_78;
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_48;

        if (renderTargets != nullptr) {
            if (effectManager.IsEnabled(85)) {
                this_00 = rt7Core.GetSkyBoxManager();
                texture = (Texture*)this_00->GetSkyBoxTexture(-1);
                if (texture != nullptr) {
                    local_78 = render::DrawCallState();
                    this_01 = (Layout*)local_78.GetRenderPipelineState();
                    lVar2 = local_78.Instance();
                    this_01->SetHeapSize((lVar2 + 1140));
                    pvVar3 = sceneViewData.GetStaticChildren();
                    pVVar4 = (Viewport*)(*pvVar3)[0];
                    renderToTextureHelper.RenderTextureToQuadDepth(renderContext, local_78, renderTargets, texture, 1.0,
                                                                   pVVar4);
                }
            }
            if (effectManager.IsEnabled(50)) {
                if (!(sceneViewData.IsForwardPassOnly())) {
                    this_02 = (VolumetricScatteringEffect*)effectManager.GetEffect<SunlightDirectLighting>(50);
                    if (this_02->IsReady()) {
                        if (!(this_02->CanSkip(effectManager))) {
                            this_02->Update(effectManager, sceneViewData);
                            renderContext.SetRenderTargets(renderTargets);
                            pvVar3 = sceneViewData.GetStaticChildren();
                            pVVar4 = (Viewport*)(*pvVar3)[0];
                            renderTargets_00 = (RenderTargets*)this_02->GetResolvedRT();
                            local_78 = pVVar4->GetScreenRect();
                            local_48 = shared_ptr();
                            renderContext.ResolveColourTargetData(renderTargets_00, 16640, local_78, local_48);
                            this_03 =
                                (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>*)
                                    renderTargets->GetColourTargetTextures();
                            puVar5 = (uint64_t*)(*this_03)[0];
                            this_02->Render(renderContext, renderTargets, *puVar5, *pVVar4, renderToTextureHelper);
                        }
                    }
                }
            }
        }
    }

    // 0x1007a74d0
    void ForwardLightingPass::RenderBlurredRefractionBuffers(RT7Core& rt7Core, render::RenderContext& renderContext,
                                                             EffectManager& effectManager,
                                                             const SceneViewData& sceneViewData,
                                                             DrawableQueue& drawableQueue, bool arg6) {
        RenderPassType renderPassType;
        NXTPixToolkit* nXTPixToolkit;
        long lVar2;
        FogEffect* pFVar3;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_01;
        RenderTargets* this_02;
        vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>* pvVar4;
        uint64_t* puVar5;
        unsigned int* puVar6;
        uint8_t* puVar7;
        OutputMergerState* pOVar8;
        compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>* pcVar9;
        RenderPipelineState* pRVar10;
        Layout* pLVar11;
        GaussianBlurFilter* this_03;
        unsigned int arg3;
        DrawCallState* pDVar12;
        uint64_t in_register_00000089;
        bool in_stack_00000008;
        Data local_27b8;
        uint64_t uStack_2790;
        uint8_t local_2780[40];
        DrawCallState local_2758;
        DrawCallState local_2728;
        FogEffect* local_26f0;
        DrawableQueue* local_26e0;
        EffectStateSaveRestore local_26d0;
        fixed_map<EffectType, bool, 121ul> local_1380;

        if (sceneViewData.IsEnabled(108)) {
            renderPassType = rt7Core.GetPos();
            nXTPixToolkit = (NXTPixToolkit*)((DrawableQueue*)(((uint64_t)in_register_00000089 << 8) | (uint8_t)arg6))
                                ->GetDrawableGroup(renderPassType, 8);
            lVar2 = ((vector<oldscape::highlight::EntityWithCoord<oldscape::dash3d::Decor>>*)nXTPixToolkit->GetScreen())
                        ->size();
            if (lVar2 != 0) {
                pFVar3 = sceneViewData.GetEffect<SunlightDirectLighting>(108);
                this_01 =
                    (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)pFVar3->get_overflow_allocator();
                this_02 = (RenderTargets*)this_01->end();
                if (this_02 != nullptr) {
                    local_26e0 = (DrawableQueue*)(((uint64_t)in_register_00000089 << 8) | (uint8_t)arg6);
                    pvVar4 = (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>*)
                                 this_02->GetColourTargetTextures();
                    puVar5 = (uint64_t*)(*pvVar4)[0];
                    puVar6 = (unsigned int*)(*puVar5)->second();
                    local_2758 = render::DrawCallState();
                    local_1380 = eastl::fixed_map<EffectType, bool, 121ul>();
                    local_26d0[0].field_0._0_1_ = 108;
                    puVar7 = &local_1380[local_26d0];
                    *puVar7 = 0;
                    local_26d0 = EffectStateSaveRestore(sceneViewData, local_1380);
                    new (local_2780) render::Viewport(0, 0, *puVar6, puVar6[1], 0.0, 1.0);
                    pOVar8 = local_2758.GetOutputMergerState();
                    pOVar8->SetViewports(local_2780, 1);
                    pOVar8 = local_2758.GetOutputMergerState();
                    pOVar8->SetRenderTargets(this_02);
                    pDVar12 = &local_2758;
                    pcVar9 = (compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>*)
                                 pDVar12->GetRenderPipelineState();
                    lVar2 = pDVar12->Instance();
                    eastl::compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>::
                        compressed_pair_imp(pcVar9,
                                            (PlayerDataComparator<oldscape::social::FriendChatUser>*)(lVar2 + 1524));
                    pDVar12 = &local_2758;
                    pRVar10 = (RenderPipelineState*)pDVar12->GetRenderPipelineState();
                    lVar2 = pDVar12->Instance();
                    pRVar10->SetRasteriserState((lVar2 + 1200));
                    pDVar12 = &local_2758;
                    pLVar11 = (Layout*)pDVar12->GetRenderPipelineState();
                    lVar2 = pDVar12->Instance();
                    pLVar11->SetHeapSize((lVar2 + 720));
                    pFVar3 = sceneViewData.GetEffect<SunlightDirectLighting>(106);
                    puVar5 = (uint64_t*)pFVar3->GetDefaultValue();
                    local_27b8._0_8_ = *puVar5;
                    local_27b8._8_8_ = puVar5[1];
                    local_27b8._16_8_ = puVar5[2];
                    local_27b8._24_8_ = puVar5[3];
                    local_27b8._32_8_ = puVar5[4];
                    uStack_2790 = puVar5[5];
                    local_2728 = math::Point((float)*puVar6, (float)puVar6[1]);
                    pFVar3->SetViewportLookupScale(*local_2780, local_2728);
                    local_26f0 = pFVar3;
                    local_2728 = ImVec4(0.0, 0.0, 1.0, 1.0);
                    WaterParameters::SetFeatureFlags(local_2728);
                    rt7Core.RenderOccludedDrawableGroup(renderContext, &local_2758, sceneViewData, drawableQueue,
                                                        local_26e0, 7, in_stack_00000008, nullptr, 1.0);
                    local_2728 = render::DrawCallState(local_2758);
                    pDVar12 = &local_2728;
                    pcVar9 = (compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>*)
                                 pDVar12->GetRenderPipelineState();
                    lVar2 = pDVar12->Instance();
                    eastl::compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>::
                        compressed_pair_imp(pcVar9,
                                            (PlayerDataComparator<oldscape::social::FriendChatUser>*)(lVar2 + 1676));
                    pDVar12 = &local_2728;
                    pRVar10 = (RenderPipelineState*)pDVar12->GetRenderPipelineState();
                    lVar2 = pDVar12->Instance();
                    pRVar10->SetRasteriserState((lVar2 + 1200));
                    pDVar12 = &local_2728;
                    pLVar11 = (Layout*)pDVar12->GetRenderPipelineState();
                    lVar2 = pDVar12->Instance();
                    pLVar11->SetHeapSize((lVar2 + 720));
                    rt7Core.RenderOccludedDrawableGroup(renderContext, &local_2728, sceneViewData, drawableQueue,
                                                        local_26e0, 2, in_stack_00000008, nullptr, 1.0);
                    new ((local_2780 + 24)) ImVec4(1.0, 1.0, 1.0, 1.0);
                    WaterParameters::SetFeatureFlags(*((local_2780 + 24)));
                    local_26f0->SetData(local_27b8);
                    if (sceneViewData.IsEnabled(109)) {
                        pvVar4 = (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>*)
                                     this_02->GetColourTargetTextures();
                        puVar5 = (uint64_t*)(*pvVar4)[0];
                        lVar2 = (*puVar5)->second();
                        if (1 < *(unsigned int*)(lVar2 + 8)) {
                            arg3 = 1;
                            do {
                                this_02->SetTargetMipLayerLevel(0, 0, arg3);
                                this_03 =
                                    (GaussianBlurFilter*)(*(PostProcessManager**)(rt7Core.m_postProcessManager + 352))
                                        ->GetGaussianBlurFilter();
                                pvVar4 =
                                    (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>*)
                                        this_02->GetColourTargetTextures();
                                puVar5 = (uint64_t*)(*pvVar4)[0];
                                this_03->BlurMultiPass13Tap(effectManager, *this_02, *(*puVar5),
                                                            (float)arg3 + (float)arg3, 1, arg3 - 1);
                                pvVar4 =
                                    (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>*)
                                        this_02->GetColourTargetTextures();
                                puVar5 = (uint64_t*)(*pvVar4)[0];
                                lVar2 = (*puVar5)->second();
                                arg3 = arg3 + 1;
                            } while (arg3 < *(unsigned int*)(lVar2 + 8));
                        }
                        this_02->SetTargetMipLayerLevel(0, 0, 0);
                    }
                }
            }
        }
    }

    // 0x1007a7a60
    void ForwardLightingPass::RenderDebug(EffectManager& effectManager, DrawableQueue& drawableQueue) {
        int iVar3;
        FogEffect* pFVar4;
        long* plVar5;
        shared_ptr<render::RenderTargets>* psVar6;
        RenderTargets* pRVar7;
        vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>* this_00;
        uint64_t* puVar8;
        uint64_t uVar9;
        ImVec4 local_60;
        uint8_t local_50[16];
        Point<float> local_40;
        uint8_t local_38[8];

        auto RVar2 = GetPos();
        drawableQueue.RenderDebug(0, RVar2);
        RVar2 = GetPos();
        drawableQueue.RenderDebug(1, RVar2);
        RVar2 = GetPos();
        drawableQueue.RenderDebug(3, RVar2);
        RVar2 = GetPos();
        drawableQueue.RenderDebug(7, RVar2);
        RVar2 = GetPos();
        drawableQueue.RenderDebug(8, RVar2);
        RVar2 = GetPos();
        drawableQueue.RenderDebug(4, RVar2);
        RVar2 = GetPos();
        drawableQueue.RenderDebug(2, RVar2);
        RVar2 = GetPos();
        drawableQueue.RenderDebug(5, RVar2);
        RVar2 = GetPos();
        drawableQueue.RenderDebug(6, RVar2);
        if (effectManager.IsEnabled(108)) {
            if (m_showOpaqueScene != '\0') {
                pFVar4 = effectManager.GetEffect<SunlightDirectLighting>(108);
                plVar5 = DebugPrimitiveCollectorBasic::GetCollector("");
                if (plVar5 != nullptr) {
                    psVar6 = (shared_ptr<render::RenderTargets>*)pFVar4->get_overflow_allocator();
                    pRVar7 = (RenderTargets*)(*psVar6).operator->();
                    this_00 = (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>*)
                                  pRVar7->GetColourTargetTextures();
                    puVar8 = (uint64_t*)(*this_00)[0];
                    uVar9 = *puVar8;
                    local_60 = ImVec4(0.0, 0.0, 0.5, 0.5);
                    local_40 = math::Point(0.0, 0.0);
                    new ((local_50 + 8)) math::Point(1.0, 1.0);
                    new (local_38) math::ColourStorage8888(255, 255, 255, 255);
                    iVar3 = local_38->GetX();
                    new (local_50) oldscape::sidebars::SideBarData(iVar3, 0);
                    (**(void (**)(...))(*plVar5 + 112))(plVar5, uVar9, &local_60, &local_40, local_50 + 8, 0, 0, 0,
                                                        (SideBarData*)local_50);
                }
            }
            if (m_showOpaqueSceneDepth != '\0') {
                pFVar4 = effectManager.GetEffect<SunlightDirectLighting>(108);
                plVar5 = DebugPrimitiveCollectorBasic::GetCollector("");
                if (plVar5 != nullptr) {
                    psVar6 = (shared_ptr<render::RenderTargets>*)pFVar4->get_overflow_allocator();
                    pRVar7 = (RenderTargets*)(*psVar6).operator->();
                    uVar9 = pRVar7->GetDepthStencilTargetTexture();
                    local_60 = ImVec4(0.0, 0.0, 0.5, 0.5);
                    local_40 = math::Point(0.0, 0.0);
                    new ((local_50 + 8)) math::Point(1.0, 1.0);
                    new (local_38) math::ColourStorage8888(255, 255, 255, 255);
                    iVar3 = local_38->GetX();
                    new (local_50) oldscape::sidebars::SideBarData(iVar3, 0);
                    (**(void (**)(...))(*plVar5 + 112))(plVar5, uVar9, &local_60, &local_40,
                                                        (Point<float>*)(local_50 + 8), 0, 1, 0, (SideBarData*)local_50);
                }
            }
        }
        if (GetOcclusionTestEnabled()) {
            field_16->RenderDebug();
        }
    }

    // 0x1007a7d70
    void ForwardLightingPass::RegisterTweakVarsOcclusion(tweak::Container& container) {
        container.AddCheckBox("Enable On Forward Pass", field_776);
        container.AddCheckBox("Show Forward Depth Buffer", *((field_16 + 8)));
    }

    // 0x1007bdf70
    void ForwardLightingPass::Render(RT7Core&, render::DrawCallState const&, EffectManager&, SceneViewData const&,
                                     DrawableQueue&)::$_0::operator()(render::RenderContext& renderContext) const {
        _glFlush();
        render::CheckGlErrorInternal("glFlush",
                                     "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                     "runetek7/renderer/renderpasses/ForwardLightingPass.cpp",
                                     105);
    }

} // namespace jag::graphics
