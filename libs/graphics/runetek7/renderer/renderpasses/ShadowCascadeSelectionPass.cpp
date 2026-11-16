// libs/graphics/runetek7/renderer/renderpasses/ShadowCascadeSelectionPass.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

#include "ShadowCascadeSelectionPass.h"

namespace jag::graphics {
    // 0x1007ae410
    ShadowCascadeSelectionPass::ShadowCascadeSelectionPass() : RenderPass(14) {
        uint8_t local_98[12];

        DepthStencilState* local_38 = (DepthStencilState*)&field_12;
        new (local_38) render::DepthStencilState();
        new (&field_72) render::BlendState();
        new (&field_152) EffectList();
        new (&field_168) render::VertexDeclaration();
        uint8_t* local_50 = &field_168;
        new (&field_264) render::VertexBuffer();
        uint8_t* local_40 = &field_344;
        uint8_t* local_48 = &field_264;
        new (local_40) render::IndexBuffer();
        new (field_432) render::InputAssemblerState();
        new (field_624) shared_ptr();
        CreateRenderingResources();
        new (local_98) render::DepthStencilState::Desc();
        local_98[0] = '\x01';
        local_98[2] = '\0';
        int local_8c = 516;
        Desc* desc = (Desc*)local_98;
        local_38->Create(*desc);
        new (local_98) render::BlendState::Desc();
        uint8_t* puVar1 = (uint8_t*)(*((local_98 + 4)))[(unsigned long)desc];
        *puVar1 = 0;
        puVar1[28] = 1;
        *(uint64_t*)(puVar1 + 4) = 1;
        field_72.Create(*local_98);
    }

    // 0x1007ae5c0
    void ShadowCascadeSelectionPass::CreateRenderingResources() {
        ShadowCascadeSelectionPass* this_02;
        unsigned short* arg1;
        Vector3T<float>* vector31;
        long lVar3;
        long lVar5;
        Vector3T<float> local_60;

        unsigned short arg2 = 0;
        unsigned long arg1_00 = 0;
        do {
            arg1 = &local_260[arg1_00];
            graphicutils::CreateCubeSharedTriListIndices<unsigned short>(arg1, arg2, false);
            arg1_00 = arg1_00 + 36;
            arg2 = arg2 + 8;
        } while (arg1_00 != 144);
        auto pvVar2 = local_260.data();
        long lVar7 = 0;
        uint8_t* local_48 = &field_344;
        uint8_t local_32 = field_344.Create(288, 0, pvVar2, 5123);
        VertexDeclaration* local_40 = (VertexDeclaration*)&field_168;
        ShadowCascadeSelectionPass* local_50 = this;
        uint8_t local_31 = local_40->Create((VertexElementDesc*)&VertPosIndex::m_VertexElemDescs, 3, nullptr, 0);
        array<unsigned short, 144ul> local_260;
        long lVar6 = 0;
        do {
            vector31 = &local_260[lVar6 * 8];
            local_60 = math::Vector3T(0.984375f);
            graphicutils::CreateCubeVerticesShared(vector31, nullptr, 16, local_60, false);
            lVar5 = 0;
            do {
                lVar3 = local_260[lVar7 + lVar5];
                this_02 = local_50;
                *(short*)(lVar3 + 12) = (short)lVar6;
                lVar5 = lVar5 + 1;
            } while (lVar5 != 8);
            lVar6 = lVar6 + 1;
            lVar7 = lVar7 + 8;
        } while (lVar6 != 4);
        uint8_t bVar4 = local_32 & local_31;
        uint8_t* this_00 = &local_50->field_264;
        pvVar2 = (void*)local_260.data();
        bool cVar1 = this_00->Create(512, 0, pvVar2);
        uint8_t* this_01 = this_02->field_432;
        this_01->SetVertexStreamData(local_40, this_00);
        render::InputAssemblerState::SetIndexBuffer(this_01, (unsigned int)local_48);
        if ((bVar4 != 1) || (!cVar1)) {
            DestroyRenderingResources(this_02);
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                            "renderer/renderpasses/ShadowCascadeSelectionPass.cpp",
                            168, "Failed to set up shadow cascade selection rendering pass.");
        }
    }

    // 0x1007ae7a0
    uint32_t ShadowCascadeSelectionPass::BeginPass(render::DrawCallState& drawCallState,
                                                   render::RenderContext& renderContext, EffectManager& effectManager,
                                                   const SceneViewData& sceneViewData,
                                                   const DrawableQueue& drawableQueue) {
        ImVec4* this_00;
        int arg3;
        RenderTargets* pRVar3;
        vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>* pvVar4;
        uint64_t* puVar5;
        int* piVar6;
        long lVar7;
        OutputMergerState* pOVar8;
        ImVec4* this_02;
        uint8_t local_60[40];

        if (sceneViewData.field_432.empty() != '\0') {
            LogAssert("!viewData.m_renderTargetViewports.empty()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "renderer/renderpasses/ShadowCascadeSelectionPass.cpp",
                      57, nullptr);
        }
        uint8_t* this_03 = field_624;
        uint32_t uVar2 = this_03->operator_cast_to_bool();
        if ((char)uVar2 != '\0') {
            pRVar3 = (RenderTargets*)(*this_03).operator->();
            pvVar4 = (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>*)
                         pRVar3->GetColourTargetTextures();
            puVar5 = (uint64_t*)(*pvVar4)[0];
            piVar6 = (int*)(*puVar5)->second();
            arg3 = *piVar6;
            pRVar3 = (RenderTargets*)(*this_03).operator->();
            pvVar4 = (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>*)
                         pRVar3->GetColourTargetTextures();
            puVar5 = (uint64_t*)(*pvVar4)[0];
            lVar7 = (*puVar5)->second();
            new (local_60) render::Viewport(0, 0, arg3, *(int*)(lVar7 + 4), 0.0, 1.0);
            pOVar8 = drawCallState.GetOutputMergerState();
            pOVar8->SetViewports(local_60, 1);
            pOVar8 = drawCallState.GetOutputMergerState();
            pRVar3 = (RenderTargets*)this_03->end();
            pOVar8->SetRenderTargets(pRVar3);
            this_00 = (ImVec4*)(local_60 + 24);
            this_02 = this_00;
            new (this_00) ImVec4(0.0, 0.0, 0.0, 0.0);
            lVar7 = this_02->Instance();
            renderContext.SetBlendState((lVar7 + 1524));
            pRVar3 = (RenderTargets*)this_03->end();
            renderContext.ClearRenderTargets(pRVar3, this_00, 1);
        }
        return uVar2;
    }

    // 0x1007ae900
    void ShadowCascadeSelectionPass::Render(RT7Core& rt7Core, const render::DrawCallState& drawCallState,
                                            EffectManager& effectManager, const SceneViewData& sceneViewData,
                                            DrawableQueue& drawableQueue) {
        compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>* this_01;
        RT7Core* pRVar5;
        Matrix44T<float>* pMVar6;
        bool bVar7;

        auto pSVar1 = effectManager.GetEffect<SunlightDirectLighting>(30);
        auto local_48 = pSVar1->GetSunlightCsmManager();
        DrawCallState local_78(drawCallState);
        ((Layout*)local_78.GetRenderPipelineState())->SetHeapSize(&field_12);
        auto pRVar2 = local_78.GetRenderPipelineState();
        long lVar3 = local_78.Instance();
        pRVar2->SetRasteriserState((lVar3 + 1272));
        this_01 = (compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>*)
                      local_78.GetRenderPipelineState();
        eastl::compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>::compressed_pair_imp(
            this_01, (PlayerDataComparator<oldscape::social::FriendChatUser>*)&field_72);
        auto pSVar4 = rt7Core.GetShaderManager();
        VertexDeclaration local_1f8;
        auto this_02 = ShaderManager::GetShader((ShaderType)pSVar4, *24, effectManager, local_1f8, (char)this + 168, 0);
        Shader* this_03 = (Shader*)(*this_02).operator->();
        auto local_38 = this_03->GetProgram();
        pRVar2 = (RenderPipelineState*)local_78.GetRenderPipelineState();
        pRVar2->SetShaderProgram(local_38);
        local_78.SetInputAssemblerState(field_432);
        local_1f8 = std::array<math::Matrix44T<float>, 4ul>();
        unsigned int arg1_00 = 0;
        unsigned long arg1 = 3;
        do {
            pSVar1 = (SunlightShadows*)local_48->GetShadowMapCascade(arg1_00);
            local_f8 = ((OBB*)pSVar1->GetSunlightCsmManager())->GetTransform();
            pRVar5 = (RT7Core*)sceneViewData.SSOBeginPtr();
            pRVar5->GetImmediateThreadPool();
            local_b8* local_f8;
            pMVar6 = &local_1f8[arg1];
            *pMVar6 = local_b8;
            arg1_00 = arg1_00 + 1;
            bVar7 = arg1 != 0;
            arg1 = arg1 - 1;
        } while (bVar7);
        HashedString local_b8("uWorldViewProjMats");
        pMVar6 = &local_1f8[0];
        local_38->SetShaderConstMatrix4(&local_b8, 4, pMVar6, 1);
        local_b8[0].field_0 = (char*)4539628425438035968;
        local_b8[0].field_8 = 4575657222469582848;
        HashedString local_f8("uCascadeColours");
        auto arg3 = local_b8.data();
        pRVar5 = local_38;
        local_38->SetShaderConstFloat1Array(&local_f8, 4, arg3, 1);
        ((RenderContext*)pRVar5->GetRenderContext())->DrawIndexedPrimitives(&local_78, 4, 144, 0);
    }

    // 0x1007aed00
    void ShadowCascadeSelectionPass::DestroyRenderingResources() {
        field_432->Destroy();
        field_344.Destroy();
        field_168.Destroy();
        field_264.Destroy();
    }

} // namespace jag::graphics
