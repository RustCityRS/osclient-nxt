// libs/graphics/runetek7/renderer/renderpasses/DepthDownsamplePass.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

#include "DepthDownsamplePass.h"

namespace jag::graphics {
    // 0x1007a5760, 272 bytes, base-object constructor, placed by class name
    // DepthDownsamplePass::DepthDownsamplePass()
    void DepthDownsamplePass::DepthDownsamplePass() {
        undefined1* puVar1;
        Desc local_70[6];

        new (this) FullscreenQuadPass(11);
        *(undefined***)field_0 = &PTR__DepthDownsamplePass_100f14110;
        field_624 = 0;
        puVar1 = &field_632;
        new (puVar1) EffectList();
        new (&field_648) render::BlendState();
        m_combineWithPrevious = false;
        new (field_728) render::InputAssemblerState();
        puVar1->Set(89, 0);
        puVar1->Set(106, 1);
        render::BlendState::Desc::Desc(local_70);
        puVar1 = (undefined1*)std::array<render::RenderTargetBlendDesc, 2ul>::operator[]((ulong)&local_70[0].field_4);
        *puVar1 = 1;
        *(undefined8*)(puVar1 + 4) = 4294967297;
        *(undefined4*)(puVar1 + 12) = 32775;
        *(undefined4*)(puVar1 + 24) = 32775;
        (&field_648, local_70)->Create();
    }

    // 0x1007a5880, 16 bytes, complete-object constructor, placed by class name
    // DepthDownsamplePass::DepthDownsamplePass(): jumps straight to the base-object constructor

    // 0x1007a5890, 64 bytes, base-object destructor, placed by class name
    // DepthDownsamplePass::~DepthDownsamplePass()
    void DepthDownsamplePass::~DepthDownsamplePass() {
        *(undefined***)field_0 = &PTR__DepthDownsamplePass_100f14110;
        field_728->~InputAssemblerState();
        (&field_648)->~BlendState();
        ~FullscreenQuadPass();
    }

    // 0x1007a58d0, 16 bytes, complete-object destructor, placed by class name
    // DepthDownsamplePass::~DepthDownsamplePass(): jumps straight to the base-object destructor

    // 0x1007a58e0, 32 bytes, deleting destructor, placed by class name
    // DepthDownsamplePass::~DepthDownsamplePass()
    void DepthDownsamplePass::~DepthDownsamplePass() {
        ~DepthDownsamplePass(this);
        operator_delete(this);
    }

    // 0x1007a5900, 1248 bytes, placed by class name
    // DepthDownsamplePass::Render(RT7Core&, render::DrawCallState const&, EffectManager&, SceneViewData const&, DrawableQueue&)
    void DepthDownsamplePass::Render(RT7Core* param_1, DrawCallState* param_2, EffectManager* param_3,
                                     SceneViewData* param_4, DrawableQueue* param_5) {
        uint uVar1;
        Texture* pTVar2;
        undefined8 uVar3;
        RenderContext* pRVar4;
        EffectManager* pEVar5;
        char cVar6;
        int iVar7;
        OutputMergerState* pOVar8;
        long lVar9;
        Layout* this_00;
        vector* this_01;
        RenderTargets* pRVar10;
        vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>* pvVar11;
        undefined8* puVar12;
        uint* puVar13;
        uint* puVar14;
        Vector4T* pVVar15;
        Viewport* pVVar16;
        ShaderManager* pSVar17;
        shared_ptr<Shader>* this_02;
        RenderPipelineState* pRVar18;
        Shader* pSVar19;
        ShaderProgram* pSVar20;
        VertexBuffer* pVVar21;
        HashedString* pHVar22;
        long* plVar23;
        RT7Core* this_03;
        byte bVar24;
        undefined1 auVar25[16];
        EffectList EVar26;
        ImVec4 local_100[16];
        undefined1 local_f0[8];
        Data local_e8;
        undefined8 uStack_c0;
        Point<float> local_b8[8];
        Point<float> local_b0[8];
        SceneViewData* local_a8;
        RT7Core* local_a0;
        RenderContext* local_98;
        uint* local_90;
        DrawCallState local_88;
        SunlightDirectLighting* local_58;
        Point<float> local_50[16];
        EffectManager* local_40;
        byte local_31;

        if (field_624 == 0) {
            return;
        }
        new (&local_88) render::DrawCallState(param_2);
        pOVar8 = (OutputMergerState*)local_88.GetOutputMergerState();
        lVar9 = pOVar8->GetRenderTargets();
        if (lVar9 != 0) {
            this_00 = (Layout*)local_88.GetOutputMergerState();
            this_01 = eastl::string::Layout::SSOBeginPtr(this_00, (type*)param_2);
            cVar6 = this_01->empty();
            if (cVar6 == '\0') {
                local_a8 = param_4;
                local_a0 = param_1;
                local_40 = param_3;
                pOVar8 = (OutputMergerState*)local_88.GetOutputMergerState();
                pRVar10 = (RenderTargets*)pOVar8->GetRenderTargets();
                pvVar11 = (vector<render::Texture*,
                                  eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>*)
                              pRVar10->GetColourTargetTextures();
                puVar12 = (undefined8*)eastl::vector<
                    render::Texture*,
                    eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>::operator[](pvVar11, 0);
                puVar13 = (uint*)(*puVar12)->second();
                this_03 = (RT7Core*)field_624;
                puVar14 = (uint*)this_03->second();
                uVar1 = puVar13[3];
                local_31 = uVar1 == 21;
                auVar25 = this_03->GetRenderContext();
                local_98 = auVar25._0_8_;
                FullscreenQuadPass::QuadBeginRender((DrawCallState*)this_03, (RenderContext*)&local_88, auVar25._8_8_);
                if (m_combineWithPrevious == false) {
                    new ((local_f0 + 8)) math::Vector4T<float>(0.0);
                    pOVar8 = (OutputMergerState*)local_88.GetOutputMergerState();
                    pOVar8->SetClearFlags(1);
                    pVVar15 = (Vector4T*)local_88.GetOutputMergerState();
                    render::OutputMergerState::SetClearColours(pVVar15, (int)local_f0 + 8);
                } else {
                    auVar25 = local_88.GetRenderPipelineState();
                    eastl::compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL,
                                               2>::compressed_pair_imp(auVar25._0_8_, (EntityHighlight**)&field_648,
                                                                       auVar25._8_8_);
                }
                lVar9 = field_624->second();
                (&field_632, 89, 1 < *(uint*)(lVar9 + 16))->Set();
                local_90 = puVar13;
                local_58 = EffectManager::GetEffect<SunlightDirectLighting>(local_40);
                puVar12 = (undefined8*)local_58->GetDefaultValue();
                local_e8._0_8_ = *puVar12;
                local_e8._8_8_ = puVar12[1];
                local_e8._16_8_ = puVar12[2];
                local_e8._24_8_ = puVar12[3];
                local_e8._32_8_ = puVar12[4];
                uStack_c0 = puVar12[5];
                pVVar16 = (Viewport*)eastl::vector<
                    render::Viewport, eastl::fixed_vector_allocator<24ul, 2ul, 4ul, 0ul, true, eastl::allocator>>::
                operator[](
                    (vector<render::Viewport,
                            eastl::fixed_vector_allocator<24ul, 2ul, 4ul, 0ul, true, eastl::allocator>>*)&local_a8
                        ->field_432,
                    0);
                math::Point<float>::Point(local_50, (float)*puVar14, (float)puVar14[1]);
                local_58->SetViewportLookupScale(pVVar16, local_50);
                pEVar5 = local_40;
                local_50 = (Point<float>[16])local_40->BuildShaderEffectList((EffectList*)&field_632);
                bVar24 = uVar1 == 11 | local_31;
                pSVar17 = (ShaderManager*)local_a0->GetShaderManager();
                EVar26 = (EffectList)255;
                this_02 = (shared_ptr<Shader>*)pSVar17->GetShader(bVar24 ^ 27, pEVar5, local_50,
                                                                  (VertexDeclaration*)(field_0 + 16), 0);
                pRVar4 = local_98;
                pRVar18 = (RenderPipelineState*)local_88.GetRenderPipelineState();
                pSVar19 = (Shader*)shared_ptr<Shader>::operator->(this_02);
                pSVar20 = (ShaderProgram*)pSVar19->GetProgram();
                pRVar18->SetShaderProgram(pSVar20);
                pVVar21 = (VertexBuffer*)((field_0 + 112))->GetBoneIDMap();
                (field_728, (VertexDeclaration*)(field_0 + 16), pVVar21)->SetVertexStreamData();
                local_88.SetInputAssemblerState(field_728);
                shared_ptr<Shader>::operator*(this_02);
                EffectManager::SetShaderConstants((DrawCallState*)local_40, (RenderContext*)&local_88, (Shader*)pRVar4,
                                                  EVar26);
                pSVar19 = (Shader*)shared_ptr<Shader>::operator->(this_02);
                pSVar20 = (ShaderProgram*)pSVar19->GetProgram();
                pHVar22 = (HashedString*)graphics::operator*((graphics*)83);
                pSVar20->SetShaderConstFloat2(pHVar22, 1.0 / (float)*local_90, 1.0 / (float)local_90[1]);
                pRVar18 = (RenderPipelineState*)local_88.GetRenderPipelineState();
                pTVar2 = (Texture*)field_624;
                pHVar22 = (HashedString*)graphics::operator*((graphics*)107);
                iVar7 = pSVar20->GetConstIndex(pHVar22);
                lVar9 = pSVar20->Instance();
                pRVar18->SetPSTextureSamplerPair(0, pTVar2, iVar7, (SamplerState*)(lVar9 + 80), false);
                QuadEndRender(&local_88, pRVar4);
                if (OcclusionManager::m_ShowDownsampledGPUDepthBuffer != '\0') {
                    plVar23 = (long*)DebugPrimitiveCollectorBasic::GetCollector("");
                    if (plVar23 != (long*)0) {
                        pOVar8 = (OutputMergerState*)local_88.GetOutputMergerState();
                        pRVar10 = (RenderTargets*)pOVar8->GetRenderTargets();
                        pvVar11 = (vector<render::Texture*,
                                          eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>*)
                                      pRVar10->GetColourTargetTextures();
                        puVar12 = (undefined8*)eastl::vector<
                            render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true,
                                                                            eastl::allocator>>::operator[](pvVar11, 0);
                        uVar3 = *puVar12;
                        ImVec4::ImVec4(local_100, 0.6, 0.6, 0.4, 0.4);
                        math::Point<float>::Point(local_b8, 0.0, 0.0);
                        math::Point<float>::Point(local_b0, 1.0, 1.0);
                        new (local_f0) oldscape::sidebars::SideBarData(-1, 0);
                        (**(code**)(*plVar23 + 112))(plVar23, uVar3, local_100, local_b8, local_b0, 0, 0, 0,
                                                     (SideBarData*)local_f0);
                    }
                }
                local_58->SetData((Data*)(local_f0 + 8));
                local_88.~DrawCallState();
                return;
            }
        }
        /* WARNING: Subroutine does not return */
        LogAssert("drawCallState.GetOutputMergerState().GetRenderTargets() && "
                  "!drawCallState.GetOutputMergerState().GetViewports().empty()",
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/renderer/"
                  "renderpasses/DepthDownsamplePass.cpp",
                  50, (char*)0);
    }

    // 0x1007a5de0, 16 bytes, placed by class name
    // DepthDownsamplePass::CreateRenderingResources()
    void DepthDownsamplePass::CreateRenderingResources() {
        CreateRenderingResources();
    }

    // 0x1007a5e90, 48 bytes, placed by class name
    // DepthDownsamplePass::DestroyRenderingResources()
    void DepthDownsamplePass::DestroyRenderingResources() {
        DestroyRenderingResources();
        field_624 = 0;
        field_728->Destroy();
    }

} // namespace jag::graphics
