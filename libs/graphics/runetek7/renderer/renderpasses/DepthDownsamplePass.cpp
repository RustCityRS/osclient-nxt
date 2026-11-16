// libs/graphics/runetek7/renderer/renderpasses/DepthDownsamplePass.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

#include "DepthDownsamplePass.h"

namespace jag::graphics {
    // 0x1007a5760
    DepthDownsamplePass::DepthDownsamplePass() : FullscreenQuadPass(11), m_depthTexture(0) {
        uint8_t local_70[72];

        uint8_t* puVar1 = &field_632;
        new (puVar1) EffectList();
        new (&field_648) render::BlendState();
        m_combineWithPrevious = false;
        new (field_728) render::InputAssemblerState();
        puVar1->Set(89, false);
        puVar1->Set(106, true);
        new (local_70) render::BlendState::Desc();
        puVar1 = (uint8_t*)(*((local_70 + 4)))[106];
        *puVar1 = 1;
        *(uint64_t*)(puVar1 + 4) = 4294967297;
        *(uint32_t*)(puVar1 + 12) = 32775;
        *(uint32_t*)(puVar1 + 24) = 32775;
        field_648.Create(*local_70);
    }

    // 0x1007a5890
    DepthDownsamplePass::~DepthDownsamplePass() {
        field_728->~InputAssemblerState();
        field_648.~BlendState();
    }

    // 0x1007a5900
    void DepthDownsamplePass::Render(RT7Core& rt7Core, const render::DrawCallState& drawCallState,
                                     EffectManager& effectManager, const SceneViewData& sceneViewData,
                                     DrawableQueue& drawableQueue) {
        unsigned int uVar1;
        Texture* texture;
        uint64_t uVar2;
        RenderContext* renderContext;
        int arg3;
        vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>* pvVar6;
        uint64_t* puVar7;
        unsigned int* puVar8;
        unsigned int* puVar9;
        compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>* this_01;
        long lVar10;
        Viewport* viewport;
        ShaderManager* pSVar11;
        shared_ptr<Shader>* this_02;
        RenderPipelineState* pRVar12;
        Shader* pSVar13;
        ShaderProgram* pSVar14;
        VertexBuffer* vertexBuffer;
        HashedString* pHVar15;
        long* plVar16;
        RT7Core* this_03;
        uint8_t bVar17;
        uint8_t auVar18[16];
        ImVec4 local_100;
        uint8_t local_f0[8];
        Data local_e8;
        uint64_t uStack_c0;
        Point<float> local_b8;
        Point<float> local_b0;
        RenderContext* local_98;
        unsigned int* local_90;
        FogEffect* local_58;
        Point<float> local_50;
        uint8_t local_31;

        if (m_depthTexture == 0) {
            return;
        }
        DrawCallState local_88(drawCallState);
        auto pOVar4 = local_88.GetOutputMergerState();
        auto pRVar5 = pOVar4->GetRenderTargets();
        if (pRVar5 != nullptr) {
            pOVar4 = local_88.GetOutputMergerState();
            if (((vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true>>*)pOVar4->SSOBeginPtr())
                    ->empty() == '\0') {
                pOVar4 = local_88.GetOutputMergerState();
                pRVar5 = pOVar4->GetRenderTargets();
                pvVar6 = (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>*)
                             pRVar5->GetColourTargetTextures();
                puVar7 = (uint64_t*)(*pvVar6)[0];
                puVar8 = (unsigned int*)(*puVar7)->second();
                this_03 = (RT7Core*)m_depthTexture;
                puVar9 = (unsigned int*)this_03->second();
                uVar1 = puVar8[3];
                local_31 = uVar1 == 21;
                auVar18 = this_03->GetRenderContext();
                local_98 = auVar18._0_8_;
                this_03->QuadBeginRender(local_88, *auVar18._8_8_, effectManager);
                if (m_combineWithPrevious == false) {
                    new ((local_f0 + 8)) math::Vector4T(0.0);
                    pOVar4 = local_88.GetOutputMergerState();
                    pOVar4->SetClearFlags(1);
                    pOVar4 = local_88.GetOutputMergerState();
                    pOVar4->SetClearColours((local_f0 + 8), 1);
                } else {
                    this_01 = (compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>*)
                                  local_88.GetRenderPipelineState();
                    eastl::compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>::
                        compressed_pair_imp(this_01,
                                            (PlayerDataComparator<oldscape::social::FriendChatUser>*)&field_648);
                }
                lVar10 = m_depthTexture->second();
                field_632.Set(89, 1 < *(unsigned int*)(lVar10 + 16));
                local_90 = puVar8;
                local_58 = effectManager.GetEffect<SunlightDirectLighting>(106);
                puVar7 = (uint64_t*)local_58->GetDefaultValue();
                local_e8._0_8_ = *puVar7;
                local_e8._8_8_ = puVar7[1];
                local_e8._16_8_ = puVar7[2];
                local_e8._24_8_ = puVar7[3];
                local_e8._32_8_ = puVar7[4];
                uStack_c0 = puVar7[5];
                viewport = &sceneViewData->field_432[0];
                local_50 = math::Point((float)*puVar9, (float)puVar9[1]);
                local_58->SetViewportLookupScale(*viewport, local_50);
                &local_50 = (Point<float>[16])effectManager.BuildShaderEffectList(field_632);
                bVar17 = uVar1 == 11 | local_31;
                pSVar11 = rt7Core.GetShaderManager();
                this_02 = (shared_ptr<Shader>*)ShaderManager::GetShader(
                    (ShaderType)pSVar11, *((EffectManager*)(unsigned long)(bVar17 ^ 27)), effectManager, local_50,
                    (unsigned char)&field_16, 0);
                renderContext = local_98;
                pRVar12 = (RenderPipelineState*)local_88.GetRenderPipelineState();
                pSVar13 = (Shader*)(*this_02).operator->();
                pSVar14 = pSVar13->GetProgram();
                pRVar12->SetShaderProgram(pSVar14);
                vertexBuffer = (VertexBuffer*)field_112.GetBoneIDMap();
                field_728->SetVertexStreamData(&field_16, vertexBuffer);
                local_88.SetInputAssemblerState(field_728);
                pSVar13 = (Shader*)**this_02;
                effectManager.SetShaderConstants(local_88, *renderContext, *pSVar13, (EffectList)255);
                pSVar13 = (Shader*)(*this_02).operator->();
                pSVar14 = pSVar13->GetProgram();
                pHVar15 = (HashedString*)graphics::operator*(83);
                pSVar14->SetShaderConstFloat2(pHVar15, 1.0 / (float)*local_90, 1.0 / (float)local_90[1]);
                pRVar12 = (RenderPipelineState*)local_88.GetRenderPipelineState();
                texture = (Texture*)m_depthTexture;
                pHVar15 = (HashedString*)graphics::operator*(107);
                arg3 = pSVar14->GetConstIndex(*pHVar15);
                lVar10 = pSVar14->Instance();
                pRVar12->SetPSTextureSamplerPair(0, texture, arg3, (lVar10 + 80), false);
                QuadEndRender(local_88, *renderContext);
                if (OcclusionManager::m_ShowDownsampledGPUDepthBuffer != '\0') {
                    plVar16 = DebugPrimitiveCollectorBasic::GetCollector("");
                    if (plVar16 != nullptr) {
                        pOVar4 = local_88.GetOutputMergerState();
                        pRVar5 = pOVar4->GetRenderTargets();
                        pvVar6 = (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>*)
                                     pRVar5->GetColourTargetTextures();
                        puVar7 = (uint64_t*)(*pvVar6)[0];
                        uVar2 = *puVar7;
                        local_100 = ImVec4(0.6, 0.6, 0.4, 0.4);
                        local_b8 = math::Point(0.0, 0.0);
                        local_b0 = math::Point(1.0, 1.0);
                        new (local_f0) oldscape::sidebars::SideBarData(-1, 0);
                        (**(void (**)(...))(*plVar16 + 112))(plVar16, uVar2, &local_100, &local_b8, &local_b0, 0, 0, 0,
                                                             (SideBarData*)local_f0);
                    }
                }
                local_58->SetData(*((local_f0 + 8)));
                return;
            }
        }
        LogAssert("drawCallState.GetOutputMergerState().GetRenderTargets() && "
                  "!drawCallState.GetOutputMergerState().GetViewports().empty()",
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/renderer/"
                  "renderpasses/DepthDownsamplePass.cpp",
                  50, nullptr);
    }

    // 0x1007a5de0
    void DepthDownsamplePass::CreateRenderingResources() {
        CreateRenderingResources();
    }

    // 0x1007a5e90
    void DepthDownsamplePass::DestroyRenderingResources() {
        DestroyRenderingResources();
        m_depthTexture = 0;
        field_728->Destroy();
    }

} // namespace jag::graphics
