// libs/graphics/runetek7/renderer/renderpasses/ReflectionPass.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

#include "ReflectionPass.h"

namespace jag::graphics {
    // 0x1039bd14f
    bool ReflectionPass::m_showReflectionMap;

    // 0x1007ab950
    ReflectionPass::ReflectionPass(render::RenderTargetsManager* renderTargetsManager, ThreadPool* threadPool)
        : SceneRenderPass(2, renderTargetsManager, threadPool) {

        Desc local_58;
        local_58.field_12 = 519;
        field_796.Create(local_58);
        SetOcclusionTestEnabled(true);
        field_16->SetMinimumDepthVariation(0.0);
    }

    // 0x1007aba00
    ReflectionPass::~ReflectionPass() {}

    // 0x1007aba60
    void ReflectionPass::PreparePass(RT7Core& rt7Core, EffectManager& effectManager, const SceneViewData& sceneViewData,
                                     DrawableQueue& drawableQueue) {
        PreparePass(rt7Core, effectManager, sceneViewData, drawableQueue);
    }

    // 0x1007aba70
    uint64_t ReflectionPass::BeginPass(render::DrawCallState& drawCallState, render::RenderContext& renderContext,
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

    // 0x1007abb00
    void ReflectionPass::Render(RT7Core& rt7Core, const render::DrawCallState& drawCallState,
                                EffectManager& effectManager, const SceneViewData& sceneViewData,
                                DrawableQueue& drawableQueue) {
        auto this_00 = effectManager.GetEffect<SunlightDirectLighting>(107);
        auto this_01 = this_00->GetDefaultValue();
        DrawCallState local_a8(drawCallState);
        DrawCallState local_78(local_a8);
        DrawCallState* pDVar6 = &local_78;
        auto pcVar2 = pDVar6->GetRenderPipelineState();
        long lVar3 = pDVar6->Instance();
        eastl::compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>::compressed_pair_imp(
            pcVar2, (PlayerDataComparator<oldscape::social::FriendChatUser>*)(lVar3 + 1524));
        pDVar6 = &local_78;
        auto pRVar4 = pDVar6->GetRenderPipelineState();
        lVar3 = pDVar6->Instance();
        pRVar4->SetRasteriserState((lVar3 + 1272));
        auto pLVar5 = local_78.GetRenderPipelineState();
        pLVar5->SetHeapSize(&field_796);
        drawableQueue.RenderGroup(rt7Core, local_78, *((SceneViewData*)(DrawableQueue*)sceneViewData), 3, 6,
                                  *((EffectManager*)(SceneViewData*)effectManager), 2);
        bool bVar1 = (bool)this_01->GetReflectionMapAtlasDT();
        SceneRenderPass::DownsampleGPUDepthBuffer(*this, rt7Core, effectManager, sceneViewData, drawableQueue, bVar1);
        bVar1 = (bool)GetGPUOcclusionEnabled(*((SceneViewData*)(DrawableQueue*)sceneViewData));
        local_78 = render::DrawCallState(local_a8);
        pDVar6 = &local_78;
        pcVar2 = (compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>*)
                     pDVar6->GetRenderPipelineState();
        lVar3 = pDVar6->Instance();
        eastl::compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>::compressed_pair_imp(
            pcVar2, (PlayerDataComparator<oldscape::social::FriendChatUser>*)(lVar3 + 2284));
        pDVar6 = &local_78;
        pLVar5 = (Layout*)pDVar6->GetRenderPipelineState();
        lVar3 = pDVar6->Instance();
        pLVar5->SetHeapSize((lVar3 + 720));
        pDVar6 = &local_78;
        pRVar4 = (RenderPipelineState*)pDVar6->GetRenderPipelineState();
        lVar3 = pDVar6->Instance();
        pRVar4->SetRasteriserState((lVar3 + 1200));
        RenderOccludedDrawableGroup(rt7Core, &local_78, (EffectManager*)(SceneViewData*)effectManager,
                                    (SceneViewData*)(DrawableQueue*)sceneViewData, drawableQueue, 0, bVar1, nullptr,
                                    1.0);
        local_78 = render::DrawCallState(local_a8);
        pDVar6 = &local_78;
        pcVar2 = (compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>*)
                     pDVar6->GetRenderPipelineState();
        lVar3 = pDVar6->Instance();
        eastl::compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>::compressed_pair_imp(
            pcVar2, (PlayerDataComparator<oldscape::social::FriendChatUser>*)(lVar3 + 1524));
        pDVar6 = &local_78;
        pLVar5 = (Layout*)pDVar6->GetRenderPipelineState();
        lVar3 = pDVar6->Instance();
        pLVar5->SetHeapSize((lVar3 + 720));
        pDVar6 = &local_78;
        pRVar4 = (RenderPipelineState*)pDVar6->GetRenderPipelineState();
        lVar3 = pDVar6->Instance();
        pRVar4->SetRasteriserState((lVar3 + 1200));
        RenderOccludedDrawableGroup(rt7Core, &local_78, (EffectManager*)(SceneViewData*)effectManager,
                                    (SceneViewData*)(DrawableQueue*)sceneViewData, drawableQueue, 1, bVar1, nullptr,
                                    1.0);
        local_78 = render::DrawCallState(local_a8);
        pDVar6 = &local_78;
        pcVar2 = (compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>*)
                     pDVar6->GetRenderPipelineState();
        lVar3 = pDVar6->Instance();
        eastl::compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>::compressed_pair_imp(
            pcVar2, (PlayerDataComparator<oldscape::social::FriendChatUser>*)(lVar3 + 1676));
        pDVar6 = &local_78;
        pLVar5 = (Layout*)pDVar6->GetRenderPipelineState();
        lVar3 = pDVar6->Instance();
        pLVar5->SetHeapSize((lVar3 + 720));
        pDVar6 = &local_78;
        pRVar4 = (RenderPipelineState*)pDVar6->GetRenderPipelineState();
        lVar3 = pDVar6->Instance();
        pRVar4->SetRasteriserState((lVar3 + 1200));
        RenderOccludedDrawableGroup(rt7Core, &local_78, (EffectManager*)(SceneViewData*)effectManager,
                                    (SceneViewData*)(DrawableQueue*)sceneViewData, drawableQueue, 3, bVar1, nullptr,
                                    1.0);
        local_78 = render::DrawCallState(local_a8);
        pDVar6 = &local_78;
        pcVar2 = (compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>*)
                     pDVar6->GetRenderPipelineState();
        lVar3 = pDVar6->Instance();
        eastl::compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>::compressed_pair_imp(
            pcVar2, (PlayerDataComparator<oldscape::social::FriendChatUser>*)(lVar3 + 1904));
        pDVar6 = &local_78;
        pRVar4 = (RenderPipelineState*)pDVar6->GetRenderPipelineState();
        lVar3 = pDVar6->Instance();
        pRVar4->SetRasteriserState((lVar3 + 1200));
        pDVar6 = &local_78;
        pLVar5 = (Layout*)pDVar6->GetRenderPipelineState();
        lVar3 = pDVar6->Instance();
        pLVar5->SetHeapSize((lVar3 + 720));
        RenderOccludedDrawableGroup(rt7Core, &local_78, (EffectManager*)(SceneViewData*)effectManager,
                                    (SceneViewData*)(DrawableQueue*)sceneViewData, drawableQueue, 4, bVar1, nullptr,
                                    1.0);
        local_78 = render::DrawCallState(local_a8);
        pDVar6 = &local_78;
        pcVar2 = (compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>*)
                     pDVar6->GetRenderPipelineState();
        lVar3 = pDVar6->Instance();
        eastl::compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>::compressed_pair_imp(
            pcVar2, (PlayerDataComparator<oldscape::social::FriendChatUser>*)(lVar3 + 1676));
        pDVar6 = &local_78;
        pLVar5 = (Layout*)pDVar6->GetRenderPipelineState();
        lVar3 = pDVar6->Instance();
        pLVar5->SetHeapSize((lVar3 + 720));
        pDVar6 = &local_78;
        pRVar4 = (RenderPipelineState*)pDVar6->GetRenderPipelineState();
        lVar3 = pDVar6->Instance();
        pRVar4->SetRasteriserState((lVar3 + 1200));
        RenderOccludedDrawableGroup(rt7Core, &local_78, (EffectManager*)(SceneViewData*)effectManager,
                                    (SceneViewData*)(DrawableQueue*)sceneViewData, drawableQueue, 2, bVar1, nullptr,
                                    1.0);
        local_78 = render::DrawCallState(local_a8);
        pDVar6 = &local_78;
        pcVar2 = (compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>*)
                     pDVar6->GetRenderPipelineState();
        lVar3 = pDVar6->Instance();
        eastl::compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>::compressed_pair_imp(
            pcVar2, (PlayerDataComparator<oldscape::social::FriendChatUser>*)(lVar3 + 1904));
        pDVar6 = &local_78;
        pRVar4 = (RenderPipelineState*)pDVar6->GetRenderPipelineState();
        lVar3 = pDVar6->Instance();
        pRVar4->SetRasteriserState((lVar3 + 1200));
        pDVar6 = &local_78;
        pLVar5 = (Layout*)pDVar6->GetRenderPipelineState();
        lVar3 = pDVar6->Instance();
        pLVar5->SetHeapSize((lVar3 + 720));
        RenderOccludedDrawableGroup(rt7Core, &local_78, (EffectManager*)(SceneViewData*)effectManager,
                                    (SceneViewData*)(DrawableQueue*)sceneViewData, drawableQueue, 5, bVar1, nullptr,
                                    1.0);
    }

    // 0x1007ac150
    void ReflectionPass::RenderDebug(EffectManager& effectManager, DrawableQueue& drawableQueue) {
        RenderPassType renderPassType;
        int arg1;
        FogEffect* this_00;
        long* plVar1;
        uint64_t uVar2;
        ImVec4 local_60;
        Point<float> local_50;
        uint8_t local_48[16];
        uint8_t local_38[8];

        DrawableGroupType drawableGroupType = 0;
        do {
            renderPassType = GetPos();
            drawableQueue.RenderDebug(drawableGroupType, renderPassType);
            drawableGroupType = drawableGroupType + 1;
        } while (drawableGroupType != 13);
        if (m_showReflectionMap != '\0') {
            this_00 = effectManager.GetEffect<SunlightDirectLighting>(107);
            plVar1 = DebugPrimitiveCollectorBasic::GetCollector("");
            if (plVar1 != nullptr) {
                uVar2 = ((ReflectionManager*)this_00->GetDefaultValue())->GetReflectionMapAtlas();
                local_60 = ImVec4(0.0, 0.0, 0.5, 0.5);
                new ((local_48 + 8)) math::Point(0.0, 0.0);
                local_50 = math::Point(1.0, 1.0);
                new (local_38) math::ColourStorage8888(255, 255, 255, 255);
                arg1 = local_38->GetX();
                new (local_48) oldscape::sidebars::SideBarData(arg1, 0);
                (**(void (**)(...))(*plVar1 + 112))(plVar1, uVar2, &local_60, local_48 + 8, &local_50, 0, 0, 0,
                                                    (SideBarData*)local_48);
            }
        }
        field_16->RenderDebug();
    }

    // 0x1007ac290
    void ReflectionPass::RegisterTweakVarsOcclusion(tweak::Container& container) {
        container.AddCheckBox("Enable On Reflection Pass", field_776);
        container.AddCheckBox("Enable Reflection Pass CPU Reprojection Mask", field_778);
        container.AddCheckBox("Show Reflection Depth Buffer", *((field_16 + 8)));
    }

    // 0x1007ac2f0
    void ReflectionPass::OnOcclusionEnabled() {
        eastl::string local_38;

        GetOcclusionRTName(&local_38);
        char* str = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        InitOcclusion(this, str, true, 32, 96);
    }

} // namespace jag::graphics
