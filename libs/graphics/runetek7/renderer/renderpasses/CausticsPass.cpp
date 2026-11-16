// libs/graphics/runetek7/renderer/renderpasses/CausticsPass.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

#include "CausticsPass.h"

namespace jag::graphics {
    // 0x100f43788, 4 bytes, __data
    float CausticsPass::m_cameraHeight = 10000.0f;

    // 0x100f4378c, 4 bytes, __data
    float CausticsPass::m_cameraOffset = 7500.0f;

    // 0x1039bd148, 1 bytes, __common; zero-initialised
    CausticsPass::m_showCausticsMap;

    // 0x1007a4250, 144 bytes, placed by class name and debug map
    // CausticsPass::BeginPass(render::DrawCallState&, render::RenderContext&, EffectManager&, SceneViewData const&, DrawableQueue const&)
    undefined8 CausticsPass::BeginPass(DrawCallState* param_1, RenderContext* param_2, EffectManager* param_3,
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

    // 0x1007a4430, 240 bytes, placed by class name
    // CausticsPass::Render(RT7Core&, render::DrawCallState const&, EffectManager&, SceneViewData const&, DrawableQueue&)
    void CausticsPass::Render(RT7Core* param_1, DrawCallState* param_2, EffectManager* param_3, SceneViewData* param_4,
                              DrawableQueue* param_5) {
        undefined4 uVar1;
        compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>* this_00;
        RenderPipelineState* this_01;
        long lVar2;
        Layout* this_02;
        DrawCallState* pDVar3;
        undefined1 auVar4[16];
        DrawCallState local_70;
        SceneViewData* local_40;
        DrawableQueue* local_38;

        pDVar3 = &local_70;
        local_40 = param_4;
        local_38 = param_5;
        render::DrawCallState::DrawCallState(pDVar3, param_2);
        this_00 = (compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>*)
                      pDVar3->GetRenderPipelineState();
        auVar4 = pDVar3->Instance();
        eastl::compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>::compressed_pair_imp(
            this_00, (EntityHighlight**)(auVar4._0_8_ + 1524), auVar4._8_8_);
        pDVar3 = &local_70;
        this_01 = (RenderPipelineState*)pDVar3->GetRenderPipelineState();
        lVar2 = pDVar3->Instance();
        this_01->SetRasteriserState((RasteriserState*)(lVar2 + 1200));
        pDVar3 = &local_70;
        this_02 = (Layout*)pDVar3->GetRenderPipelineState();
        lVar2 = pDVar3->Instance();
        eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::Layout::
            SetHeapSize(this_02, lVar2 + 1080);
        uVar1 = GetPos();
        local_38->RenderGroup(param_1, &local_70, local_40, 3, uVar1, param_3);
        local_70.~DrawCallState();
    }

    // 0x1007a4520, 464 bytes, placed by class name
    // CausticsPass::RenderDebug(EffectManager&, DrawableQueue&)
    void CausticsPass::RenderDebug(EffectManager* param_1, DrawableQueue* param_2) {
        int iVar1;
        SunlightDirectLighting* this_00;
        CausticsManager* this_01;
        long* plVar2;
        undefined8 uVar3;
        ImVec4 local_60[16];
        Point<float> local_50[8];
        undefined1 local_48[16];
        undefined1 local_38[8];

        if (m_showCausticsMap != '\0') {
            this_00 = EffectManager::GetEffect<SunlightDirectLighting>(param_1, 44);
            this_01 = (CausticsManager*)this_00->GetDevCredentialsOutputDirectory();
            plVar2 = (long*)DebugPrimitiveCollectorBasic::GetCollector("");
            if (plVar2 != (long*)0) {
                uVar3 = this_01->GetCausticsIntegerMapAtlas();
                ImVec4::ImVec4(local_60, 0.0, 0.0, 0.5, 0.5);
                new ((local_48 + 8)) math::Point<float>(0.0, 0.0);
                math::Point<float>::Point(local_50, 1.0, 1.0);
                new (local_38) math::ColourStorage8888<math::ARGB8StorageLayout>(255, 255, 255, 255);
                iVar1 = local_38->GetX();
                new (local_48) oldscape::sidebars::SideBarData(iVar1, 0);
                (**(code**)(*plVar2 + 112))(plVar2, uVar3, local_60, local_48 + 8, local_50, 0, 0, 0,
                                            (SideBarData*)local_48);
            }
            plVar2 = (long*)DebugPrimitiveCollectorBasic::GetCollector("");
            if (plVar2 != (long*)0) {
                uVar3 = this_01->GetCausticsFloatMapAtlas();
                ImVec4::ImVec4(local_60, 0.0, 0.5, 0.5, 0.5);
                new ((local_48 + 8)) math::Point<float>(0.0, 0.0);
                math::Point<float>::Point(local_50, 1.0, 1.0);
                new (local_38) math::ColourStorage8888<math::ARGB8StorageLayout>(255, 255, 255, 255);
                iVar1 = local_38->GetX();
                new (local_48) oldscape::sidebars::SideBarData(iVar1, 0);
                (**(code**)(*plVar2 + 112))(plVar2, uVar3, local_60, (Point<float>*)(local_48 + 8), local_50, 0, 0, 0,
                                            (SideBarData*)local_48);
            }
        }
    }

} // namespace jag::graphics
