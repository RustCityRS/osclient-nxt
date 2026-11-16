// libs/graphics/runetek7/renderer/renderpasses/CausticsPass.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

#include "CausticsPass.h"

namespace jag::graphics {
    // 0x100f43788
    float CausticsPass::m_cameraHeight = 10000.0f;

    // 0x100f4378c
    float CausticsPass::m_cameraOffset = 7500.0f;

    // 0x1039bd148
    bool CausticsPass::m_showCausticsMap;

    // 0x1007a4250
    uint64_t CausticsPass::BeginPass(render::DrawCallState& drawCallState, render::RenderContext& renderContext,
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

    // 0x1007a4430
    void CausticsPass::Render(RT7Core& rt7Core, const render::DrawCallState& drawCallState,
                              EffectManager& effectManager, const SceneViewData& sceneViewData,
                              DrawableQueue& drawableQueue) {
        compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>* this_00;
        DrawCallState local_70;

        DrawCallState* pDVar3 = &local_70;
        new (pDVar3) render::DrawCallState(drawCallState);
        this_00 = (compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>*)
                      pDVar3->GetRenderPipelineState();
        long lVar2 = pDVar3->Instance();
        eastl::compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>::compressed_pair_imp(
            this_00, (PlayerDataComparator<oldscape::social::FriendChatUser>*)(lVar2 + 1524));
        pDVar3 = &local_70;
        auto this_01 = pDVar3->GetRenderPipelineState();
        lVar2 = pDVar3->Instance();
        this_01->SetRasteriserState((lVar2 + 1200));
        pDVar3 = &local_70;
        auto this_02 = pDVar3->GetRenderPipelineState();
        lVar2 = pDVar3->Instance();
        this_02->SetHeapSize((lVar2 + 1080));
        unsigned int uVar1 = GetPos();
        DrawableQueue::RenderGroup(drawableQueue, rt7Core, local_70, (DrawableGroupType)sceneViewData, 3,
                                   *((EffectManager*)(unsigned long)uVar1));
    }

    // 0x1007a4520
    void CausticsPass::RenderDebug(EffectManager& effectManager, DrawableQueue& drawableQueue) {
        int iVar1;
        LoginManager* this_00;
        CausticsManager* this_01;
        long* plVar2;
        uint64_t uVar3;
        ImVec4 local_60;
        Point<float> local_50;
        uint8_t local_48[16];
        uint8_t local_38[8];

        if (m_showCausticsMap != '\0') {
            this_00 = (LoginManager*)effectManager.GetEffect<SunlightDirectLighting>(44);
            this_01 = (CausticsManager*)this_00->GetDevCredentialsOutputDirectory();
            plVar2 = DebugPrimitiveCollectorBasic::GetCollector("");
            if (plVar2 != nullptr) {
                uVar3 = this_01->GetCausticsIntegerMapAtlas();
                local_60 = ImVec4(0.0, 0.0, 0.5, 0.5);
                new ((local_48 + 8)) math::Point(0.0, 0.0);
                local_50 = math::Point(1.0, 1.0);
                new (local_38) math::ColourStorage8888(255, 255, 255, 255);
                iVar1 = local_38->GetX();
                new (local_48) oldscape::sidebars::SideBarData(iVar1, 0);
                (**(void (**)(...))(*plVar2 + 112))(plVar2, uVar3, &local_60, local_48 + 8, &local_50, 0, 0, 0,
                                                    (SideBarData*)local_48);
            }
            plVar2 = DebugPrimitiveCollectorBasic::GetCollector("");
            if (plVar2 != nullptr) {
                uVar3 = this_01->GetCausticsFloatMapAtlas();
                local_60 = ImVec4(0.0, 0.5, 0.5, 0.5);
                new ((local_48 + 8)) math::Point(0.0, 0.0);
                local_50 = math::Point(1.0, 1.0);
                new (local_38) math::ColourStorage8888(255, 255, 255, 255);
                iVar1 = local_38->GetX();
                new (local_48) oldscape::sidebars::SideBarData(iVar1, 0);
                (**(void (**)(...))(*plVar2 + 112))(plVar2, uVar3, &local_60, (Point<float>*)(local_48 + 8), &local_50,
                                                    0, 0, 0, (SideBarData*)local_48);
            }
        }
    }

} // namespace jag::graphics
