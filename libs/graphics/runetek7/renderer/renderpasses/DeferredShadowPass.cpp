// libs/graphics/runetek7/renderer/renderpasses/DeferredShadowPass.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

#include "DeferredShadowPass.h"

namespace jag::graphics {
    // 0x1007a46f0
    DeferredShadowPass::DeferredShadowPass() : FullscreenQuadPass(15) {
        uint8_t* this_00 = &field_624;
        new (this_00) EffectList();
        new (&field_640) shared_ptr();
        new (field_656) shared_ptr();
        new (field_672) render::ShaderProgramVariable("uCustomProjectionMatrix", 30, false, 14);
        new (field_704) render::ShaderProgramVariable("uSceneInvProjSunlightViewMatrix", 30, false, 14);
        new (field_736) render::ShaderProgramVariable("uInvViewSpaceSunDirection", 2, false, 14);
        this_00->Set(89, true);
        this_00->Set(29, true);
        this_00->Set(30, true);
        this_00->Set(37, true);
        this_00->Set(6, false);
        this_00->Set(114, false);
        this_00->Set(31, true);
        this_00->Set(32, true);
        this_00->Set(33, true);
        this_00->Set(34, true);
        this_00->Set(79, true);
        this_00->Set(106, true);
        CreateRenderingResources();
    }

    // 0x1007a49e0
    DeferredShadowPass::~DeferredShadowPass() {
        field_656->~shared_ptr();
        field_640.~shared_ptr();
    }

    // 0x1007a4a50
    uint32_t DeferredShadowPass::BeginPass(render::DrawCallState& drawCallState, render::RenderContext& renderContext,
                                           EffectManager& effectManager, const SceneViewData& sceneViewData,
                                           const DrawableQueue& drawableQueue) {
        RenderTargets* pRVar3;
        vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>* this_00;
        uint64_t* puVar4;
        int* piVar5;
        OutputMergerState* pOVar6;
        uint8_t local_a8[112];

        if (sceneViewData.field_432.empty() != '\0') {
            LogAssert("!viewData.m_renderTargetViewports.empty()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "renderer/renderpasses/DeferredShadowPass.cpp",
                      54, nullptr);
        }
        uint8_t* this_01 = field_656;
        uint32_t uVar2 = this_01->operator_cast_to_bool();
        if ((char)uVar2 != '\0') {
            pRVar3 = (RenderTargets*)(*this_01).operator->();
            this_00 = (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>*)
                          pRVar3->GetColourTargetTextures();
            puVar4 = (uint64_t*)(*this_00)[0];
            piVar5 = (int*)(*puVar4)->second();
            new ((local_a8 + 24)) eastl::fixed_vector<render::Viewport, 2ul>();
            new (local_a8) render::Viewport(0, 0, *piVar5, piVar5[1], 0.0, 1.0);
            ((local_a8 + 24))->push_back(*local_a8);
            pOVar6 = drawCallState.GetOutputMergerState();
            pOVar6->SetViewports((Viewport*)((local_a8 + 24))->HeapBeginPtr(), 1);
            pOVar6 = drawCallState.GetOutputMergerState();
            pRVar3 = (RenderTargets*)this_01->end();
            pOVar6->SetRenderTargets(pRVar3);
            ((local_a8 + 24))->~fixed_vector();
        }
        return uVar2;
    }

    // 0x1007a4bc0
    void DeferredShadowPass::Render(RT7Core& rt7Core, const render::DrawCallState& drawCallState,
                                    EffectManager& effectManager, const SceneViewData& sceneViewData,
                                    DrawableQueue& drawableQueue) {
        RenderTargets* this_01;
        compressed_pair_imp<eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true>>::Layout,
                            eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true>, 0>* this_02;
        unsigned int* puVar2;
        FogEffect* this_03;
        uint64_t* puVar3;
        Viewport* viewport;
        ShaderManager* pSVar4;
        shared_ptr<Shader>* this_04;
        Shader* pSVar5;
        ShaderProgram* shaderProgram;
        InputAssemblerState* this_06;
        VertexBuffer* vertexBuffer;
        RenderContext* renderContext;
        RenderContext* renderContext_00;
        RT7Core* this_07;
        Data local_d8;
        uint64_t uStack_b0;
        DrawCallState local_a0;
        FogEffect* local_60;
        uint8_t local_58[16];
        RenderContext* local_40;

        if (field_656->operator_cast_to_bool()) {
            this_07 = (RT7Core*)&field_640;
            if (this_07->operator_cast_to_bool()) {
                local_40 = (RenderContext*)this_07->GetRenderContext();
                this_01 = (RenderTargets*)field_640.operator->();
                this_02 = (compressed_pair_imp<
                           eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true>>::Layout,
                           eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true>, 0>*)
                              this_01->GetDepthStencilTargetTexture();
                puVar2 = (unsigned int*)this_02->second();
                this_03 = effectManager.GetEffect<SunlightDirectLighting>(106);
                puVar3 = (uint64_t*)this_03->GetDefaultValue();
                local_d8._0_8_ = *puVar3;
                local_d8._8_8_ = puVar3[1];
                local_d8._16_8_ = puVar3[2];
                local_d8._24_8_ = puVar3[3];
                local_d8._32_8_ = puVar3[4];
                uStack_b0 = puVar3[5];
                viewport = &sceneViewData->field_432[0];
                local_a0 = math::Point((float)*puVar2, (float)puVar2[1]);
                local_60 = this_03;
                this_03->SetViewportLookupScale(*viewport, local_a0);
                local_a0 = render::DrawCallState(drawCallState);
                local_a0.QuadBeginRender(local_a0, *renderContext_00, effectManager);
                pSVar4 = rt7Core.GetShaderManager();
                local_58 = effectManager.BuildShaderEffectList(field_624);
                renderContext = (RenderContext*)local_58;
                this_04 = (shared_ptr<Shader>*)ShaderManager::GetShader((ShaderType)pSVar4, *25, effectManager,
                                                                        *renderContext, (unsigned char)&field_16, 0);
                pSVar5 = (Shader*)(*this_04).operator->();
                shaderProgram = pSVar5->GetProgram();
                ((RenderPipelineState*)local_a0.GetRenderPipelineState())->SetShaderProgram(shaderProgram);
                this_06 = (InputAssemblerState*)local_a0.GetInputAssemblerState();
                vertexBuffer = (VertexBuffer*)field_112.GetBoneIDMap();
                this_06->SetVertexStreamData(&field_16, vertexBuffer);
                SetShaderConstants(local_a0, effectManager, *renderContext, *shaderProgram, *sceneViewData);
                pSVar5 = (Shader*)**this_04;
                effectManager.SetShaderConstants(local_a0, *local_40, *pSVar5, (EffectList)255);
                QuadEndRender(local_a0, *local_40);
                local_60->SetData(local_d8);
                return;
            }
        }
        LogAssert("m_ShadowBufferRT && m_GBufferRT",
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/renderer/"
                  "renderpasses/DeferredShadowPass.cpp",
                  83, nullptr);
    }

    // 0x1007a4ea0
    void DeferredShadowPass::SetShaderConstants(render::DrawCallState& drawCallState, EffectManager& effectManager,
                                                render::RenderContext& renderContext,
                                                const render::ShaderProgram& shaderProgram,
                                                const SceneViewData& sceneViewData) {
        shaderProgram.SetShaderConstMatrix4(field_672, 1, &field_560, 1);
        auto pRVar2 = sceneViewData.GetScreen();
        ReturnValue local_128 = *pRVar2;
        ReturnValue RStack_120 = pRVar2[1];
        ReturnValue local_118 = pRVar2[2];
        ReturnValue RStack_110 = pRVar2[3];
        ReturnValue local_108 = pRVar2[4];
        ReturnValue RStack_100 = pRVar2[5];
        ReturnValue local_f8 = pRVar2[6];
        ReturnValue RStack_f0 = pRVar2[7];
        local_128 = math::Matrix44T<float>::Invert(nullptr);
        auto pHVar3 = graphics::operator*(10);
        shaderProgram.SetShaderConstMatrix4(pHVar3, 1, &local_128, 1);
        pRVar2 = (ReturnValue*)sceneViewData.GetImmediateThreadPool();
        ReturnValue local_a8 = *pRVar2;
        ReturnValue RStack_a0 = pRVar2[1];
        ReturnValue local_98 = pRVar2[2];
        ReturnValue RStack_90 = pRVar2[3];
        ReturnValue local_88 = pRVar2[4];
        ReturnValue RStack_80 = pRVar2[5];
        ReturnValue local_78 = pRVar2[6];
        ReturnValue RStack_70 = pRVar2[7];
        local_a8 = math::Matrix44T<float>::Invert(nullptr);
        ReturnValue local_b8 = local_78;
        ReturnValue RStack_b0 = RStack_70;
        ReturnValue local_c8 = local_88;
        ReturnValue RStack_c0 = RStack_80;
        uint32_t local_d8 = local_98._0_4_;
        uint32_t uStack_d4 = local_98._4_4_;
        uint32_t uStack_d0 = RStack_90._0_4_;
        uint32_t uStack_cc = RStack_90._4_4_;
        ReturnValue local_e8 = local_a8;
        ReturnValue RStack_e0 = RStack_a0;
        uint32_t uVar9 = local_98._0_4_;
        uint32_t uVar10 = local_98._4_4_;
        auto this_01 = effectManager.GetEffect<SunlightDirectLighting>(30);
        auto pMVar4 = this_01->GetSunlightViewTransform();
        local_e8 *= pMVar4;
        shaderProgram.SetShaderConstMatrix4(field_704, 1, &local_e8, 1);
        auto this_02 = effectManager.GetEffect<SunlightDirectLighting>(29);
        uint64_t local_48 = ((Vector4T<float>*)this_02->GetBillboardLabelIDMap())->GetXYZ();
        uint32_t local_40 = uVar9;
        Vector4T<float> local_138(local_48, 0.0);
        pMVar4 = (Matrix44T<float>*)sceneViewData.GetScreen();
        uint64_t local_68 = local_138 * *pMVar4;
        uint32_t uStack_60 = uVar9;
        uint32_t uStack_5c = uVar10;
        ReturnValue local_58 = (ReturnValue)local_68.GetXYZ();
        uint32_t local_50 = uVar9;
        local_58 = math::Vector3T<float>::Normalize();
        new (&local_68) math::Vector4T(local_58, 0.0);
        shaderProgram.SetShaderConstVector3(field_736, &local_68);
        auto pRVar5 = drawCallState.GetRenderPipelineState();
        auto pRVar6 = field_640.operator->();
        auto this_04 = pRVar6->GetColourTargetTextures();
        uint64_t* puVar7 = (uint64_t*)(*this_04)[0];
        Texture* pTVar8 = (Texture*)*puVar7;
        pHVar3 = (HashedString*)graphics::operator*(106);
        int iVar1 = shaderProgram.GetConstIndex(*pHVar3);
        pRVar5->SetPSTextureSamplerPair(0, pTVar8, iVar1, nullptr, false);
        pRVar5 = (RenderPipelineState*)drawCallState.GetRenderPipelineState();
        pRVar6 = (RenderTargets*)field_640.operator->();
        pTVar8 = (Texture*)pRVar6->GetDepthStencilTargetTexture();
        pHVar3 = (HashedString*)graphics::operator*(107);
        iVar1 = shaderProgram.GetConstIndex(*pHVar3);
        pRVar5->SetPSTextureSamplerPair(1, pTVar8, iVar1, nullptr, false);
    }

    // 0x1007a5170
    void DeferredShadowPass::BlurPass(render::RenderContext& renderContext, const render::DrawCallState& drawCallState,
                                      EffectManager& effectManager, const SceneViewData& sceneViewData,
                                      ShaderManager& shaderManager) {
        bool bVar1;
        int iVar3;
        unsigned int arg3;
        shared_ptr<Shader>* this_01;
        RenderPipelineState* pRVar8;
        Shader* pSVar9;
        ShaderProgram* pSVar10;
        InputAssemblerState* this_02;
        VertexBuffer* vertexBuffer;
        Viewport* viewport;
        HashedString* pHVar11;
        Matrix44T<float>* matrix44;
        ReturnValue* pRVar12;
        Texture* pTVar13;
        RenderContext* renderContext_00;
        uint8_t local_e8[16];
        ReturnValue local_d8;
        ReturnValue RStack_d0;
        ReturnValue local_c8;
        ReturnValue RStack_c0;
        ReturnValue local_b8;
        ReturnValue RStack_b0;
        float local_48;
        float local_44;

        DeferredShadowPass* local_40 = this;
        SceneViewData* local_38 = sceneViewData;
        long lVar4 = ((MapArea*)Instance())->GetOrigin();
        if (*(int*)(lVar4 + 84) < 4) {
            LogAssert("RenderDevice::Instance().GetDeviceCaps().m_MaxTextureOffset >= 4",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "renderer/renderpasses/DeferredShadowPass.cpp",
                      128, nullptr);
        }
        shared_ptr<render::RenderTargets>* local_68 = (shared_ptr<render::RenderTargets>*)local_40->field_656;
        RenderTargets* pRVar5 = (RenderTargets*)(*local_68).operator->();
        auto pvVar6 = pRVar5->GetColourTargetTextures();
        uint64_t* puVar7 = (uint64_t*)(*pvVar6)[0];
        lVar4 = (*puVar7)->second();
        if (*(int*)(lVar4 + 12) != 20) {
            LogAssert("m_ShadowBufferRT->GetColourTargetTextures()[0]->GetDesc().m_Format == FORMAT_L8R8_UNORM",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "renderer/renderpasses/DeferredShadowPass.cpp",
                      129, "Format of shadow buffer must be FORMAT_L8R8_UNORM for geometry aware blur");
        }
        EffectList local_a0;
        local_a0.Set(114, false);
        local_a0.Set(106, true);
        DrawCallState local_118(drawCallState);
        VertexDeclaration* local_60 = (VertexDeclaration*)&local_40->field_16;
        GeometryBatch* local_80 = (GeometryBatch*)&local_40->field_112;
        vector<render::Viewport, eastl::fixed_vector_allocator<24ul, 2ul, 4ul, 0ul, true>>* local_78 =
            (vector<render::Viewport, eastl::fixed_vector_allocator<24ul, 2ul, 4ul, 0ul, true>>*)&local_38->field_432;
        Matrix44T<float>* local_70 = (Matrix44T<float>*)&local_40->field_560;
        shared_ptr<render::RenderTargets>* local_50 = (shared_ptr<render::RenderTargets>*)&local_40->field_640;
        DeferredShadowPass* sceneViewData_00 = local_40;
        bool bVar2 = true;
        do {
            bVar1 = bVar2;
            if (!bVar1) {
                local_a0.Set(114, true);
            }
            renderContext.FlushTextureCache();
            renderContext.QuadBeginRender(local_118, *renderContext_00, *sceneViewData_00);
            local_e8 = effectManager.BuildShaderEffectList(local_a0);
            this_01 = (shared_ptr<Shader>*)ShaderManager::GetShader((ShaderType)shaderManager, *19, effectManager,
                                                                    *local_e8, (unsigned char)local_60, 0);
            pRVar8 = (RenderPipelineState*)local_118.GetRenderPipelineState();
            pSVar9 = (Shader*)(*this_01).operator->();
            pSVar10 = pSVar9->GetProgram();
            pRVar8->SetShaderProgram(pSVar10);
            this_02 = (InputAssemblerState*)local_118.GetInputAssemblerState();
            vertexBuffer = (VertexBuffer*)local_80->GetBoneIDMap();
            this_02->SetVertexStreamData(local_60, vertexBuffer);
            viewport = (Viewport*)local_78->back();
            local_118.GetOutputMergerState()->SetViewports(viewport, 1);
            pSVar9 = (Shader*)(*this_01).operator->();
            pSVar10 = pSVar9->GetProgram();
            pHVar11 = (HashedString*)graphics::operator*(9);
            matrix44 = (Matrix44T<float>*)local_38->GetOrigin();
            pSVar10->SetShaderConstMatrix4(pHVar11, 1, matrix44, 1);
            pHVar11 = (HashedString*)graphics::operator*(4);
            pSVar10->SetShaderConstMatrix4(pHVar11, 1, local_70, 1);
            pRVar12 = (ReturnValue*)local_38->GetOrigin();
            local_e8._0_8_ = *pRVar12;
            local_e8._8_8_ = pRVar12[1];
            local_d8 = pRVar12[2];
            RStack_d0 = pRVar12[3];
            local_c8 = pRVar12[4];
            RStack_c0 = pRVar12[5];
            local_b8 = pRVar12[6];
            RStack_b0 = pRVar12[7];
            *local_e8 = math::Matrix44T<float>::Invert(nullptr);
            pHVar11 = (HashedString*)graphics::operator*(11);
            pSVar10->SetShaderConstMatrix4(pHVar11, 1, local_e8, 1);
            pRVar8 = (RenderPipelineState*)local_118.GetRenderPipelineState();
            pRVar5 = (RenderTargets*)(*local_50).operator->();
            pvVar6 = (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>*)
                         pRVar5->GetColourTargetTextures();
            puVar7 = (uint64_t*)(*pvVar6)[0];
            pTVar13 = (Texture*)*puVar7;
            pHVar11 = (HashedString*)graphics::operator*(106);
            iVar3 = pSVar10->GetConstIndex(*pHVar11);
            pRVar8->SetPSTextureSamplerPair(0, pTVar13, iVar3, nullptr, false);
            pRVar8 = (RenderPipelineState*)local_118.GetRenderPipelineState();
            pRVar5 = (RenderTargets*)(*local_50).operator->();
            pTVar13 = (Texture*)pRVar5->GetDepthStencilTargetTexture();
            pHVar11 = (HashedString*)graphics::operator*(107);
            iVar3 = pSVar10->GetConstIndex(*pHVar11);
            pRVar8->SetPSTextureSamplerPair(1, pTVar13, iVar3, nullptr, false);
            pRVar8 = (RenderPipelineState*)local_118.GetRenderPipelineState();
            pRVar5 = (RenderTargets*)(*local_68).operator->();
            pvVar6 = (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>*)
                         pRVar5->GetColourTargetTextures();
            puVar7 = (uint64_t*)(*pvVar6)[0];
            pTVar13 = (Texture*)*puVar7;
            pHVar11 = (HashedString*)graphics::operator*(110);
            arg3 = pSVar10->GetConstIndex(*pHVar11);
            sceneViewData_00 = (DeferredShadowPass*)(unsigned long)arg3;
            pRVar8->SetPSTextureSamplerPair(2, pTVar13, arg3, nullptr, false);
            local_38->GetNearFarPlaneDistances(local_48, local_44);
            pHVar11 = (HashedString*)graphics::operator*(104);
            pSVar10->SetShaderConstFloat4(pHVar11, local_44 * local_48, local_48 - local_44, local_44, 0.0);
            local_40->QuadEndRender(local_118, renderContext);
            bVar2 = false;
        } while (bVar1);
    }

    // 0x1007a5660
    void DeferredShadowPass::RenderDebug(EffectManager& effectManager, DrawableQueue& drawableQueue) {
        uint64_t uVar1;
        long* plVar3;
        RenderTargets* this_00;
        vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>* this_01;
        uint64_t* puVar4;
        ImVec4 local_58;
        Point<float> local_48;
        Point<float> local_40;
        uint8_t local_38[8];

        if (effectManager.IsEnabled(118) != '\0') {
            plVar3 = DebugPrimitiveCollectorBasic::GetCollector("");
            if (plVar3 != nullptr) {
                this_00 = (RenderTargets*)(*field_656).operator->();
                this_01 = (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>*)
                              this_00->GetColourTargetTextures();
                puVar4 = (uint64_t*)(*this_01)[0];
                uVar1 = *puVar4;
                local_58 = ImVec4(0.0, 0.0, 0.5, 0.5);
                local_48 = math::Point(0.0, 0.0);
                local_40 = math::Point(1.0, 1.0);
                new (local_38) oldscape::sidebars::SideBarData(-1, 0);
                (**(void (**)(...))(*plVar3 + 112))(plVar3, uVar1, &local_58, &local_48, &local_40, 0, 0, 0,
                                                    (SideBarData*)local_38);
            }
        }
    }

} // namespace jag::graphics
