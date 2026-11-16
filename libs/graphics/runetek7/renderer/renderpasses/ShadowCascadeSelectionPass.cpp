// libs/graphics/runetek7/renderer/renderpasses/ShadowCascadeSelectionPass.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

#include "ShadowCascadeSelectionPass.h"

namespace jag::graphics {
    // 0x1007ae410, 432 bytes, base-object constructor, placed by class name and debug map
    // ShadowCascadeSelectionPass::ShadowCascadeSelectionPass()
    void ShadowCascadeSelectionPass::ShadowCascadeSelectionPass() {
        undefined1* puVar1;
        Desc local_98;
        undefined1* local_50;
        undefined1* local_48;
        undefined1* local_40;
        DepthStencilState* local_38;

        RenderPass::RenderPass();
        field_0 = &PTR__ShadowCascadeSelectionPass_100f144d0;
        local_38 = (DepthStencilState*)&field_12;
        render::DepthStencilState::DepthStencilState(local_38);
        new (&field_72) render::BlendState();
        new (&field_152) EffectList();
        new (&field_168) render::VertexDeclaration();
        local_50 = &field_168;
        new (&field_264) render::VertexBuffer();
        local_40 = &field_344;
        local_48 = &field_264;
        new (local_40) render::IndexBuffer();
        new (field_432) render::InputAssemblerState();
        new (field_624, (_func_decltype_nullptr*)14) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        CreateRenderingResources(this);
        new (&local_98) render::DepthStencilState::Desc();
        local_98.field_0 = '\x01';
        local_98.field_2 = '\0';
        local_98.field_12 = 516;
        local_38->Create(&local_98);
        new (&local_98) render::BlendState::Desc();
        puVar1 = (undefined1*)std::array<render::RenderTargetBlendDesc, 2ul>::operator[]((ulong)&local_98.field_4);
        *puVar1 = 0;
        puVar1[28] = 1;
        *(undefined8*)(puVar1 + 4) = 1;
        (&field_72, (Desc*)&local_98)->Create();
    }

    // 0x1007ae5c0, 464 bytes, placed by class name and debug map
    // ShadowCascadeSelectionPass::CreateRenderingResources()
    void ShadowCascadeSelectionPass::CreateRenderingResources() {
        undefined1* this_00;
        undefined1* this_01;
        ShadowCascadeSelectionPass* this_02;
        char cVar1;
        ushort* puVar2;
        Vector3T* pVVar3;
        long lVar4;
        void* pvVar5;
        byte bVar6;
        ushort uVar7;
        long lVar8;
        ulong uVar9;
        long lVar10;
        long lVar11;
        array<unsigned short, 144ul> local_260[512];
        Vector3T<float> local_60[16];
        ShadowCascadeSelectionPass* local_50;
        undefined1* local_48;
        VertexDeclaration* local_40;
        byte local_32;
        byte local_31;

        uVar7 = 0;
        uVar9 = 0;
        do {
            puVar2 = (ushort*)std::array<unsigned short, 144ul>::operator[](local_260, uVar9);
            graphicutils::CreateCubeSharedTriListIndices<unsigned short>(puVar2, uVar7, false);
            uVar9 = uVar9 + 36;
            uVar7 = uVar7 + 8;
        } while (uVar9 != 144);
        std::array<unsigned short, 144ul>::data(local_260);
        lVar11 = 0;
        local_48 = &field_344;
        local_32 = (&field_344, 288, 0)->Create();
        local_40 = (VertexDeclaration*)&field_168;
        local_50 = this;
        local_31 = render::VertexDeclaration::Create((VertexElementDesc*)local_40, 4355510624, (void*)3, 0);
        new (local_260) std::array<ShadowCascadeSelectionPass::VertPosIndex, 32ul>();
        lVar10 = 0;
        do {
            pVVar3 = (Vector3T*)std::array<ShadowCascadeSelectionPass::VertPosIndex, 32ul>::operator[](
                (array<ShadowCascadeSelectionPass::VertPosIndex, 32ul>*)local_260, lVar10 * 8);
            math::Vector3T<float>::Vector3T(local_60, 0.984375);
            graphicutils::CreateCubeVerticesShared(pVVar3, (Vector3T*)0, 16, (Vector3T*)local_60, false);
            lVar8 = 0;
            do {
                lVar4 = std::array<ShadowCascadeSelectionPass::VertPosIndex, 32ul>::operator[](
                    (array<ShadowCascadeSelectionPass::VertPosIndex, 32ul>*)local_260, lVar11 + lVar8);
                this_02 = local_50;
                *(short*)(lVar4 + 12) = (short)lVar10;
                lVar8 = lVar8 + 1;
            } while (lVar8 != 8);
            lVar10 = lVar10 + 1;
            lVar11 = lVar11 + 8;
        } while (lVar10 != 4);
        bVar6 = local_32 & local_31;
        this_00 = &local_50->field_264;
        pvVar5 = (void*)local_260->data();
        cVar1 = this_00->Create(512, 0, pvVar5);
        this_01 = this_02->field_432;
        this_01->SetVertexStreamData(local_40, this_00);
        render::InputAssemblerState::SetIndexBuffer((IndexBuffer*)this_01, (uint)local_48);
        if ((bVar6 != 1) || (cVar1 == '\0')) {
            DestroyRenderingResources(this_02);
            /* WARNING: Subroutine does not return */
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                            "renderer/renderpasses/ShadowCascadeSelectionPass.cpp",
                            168, "Failed to set up shadow cascade selection rendering pass.");
        }
    }

    // 0x1007ae790, 16 bytes, complete-object constructor, placed by class name and debug map
    // ShadowCascadeSelectionPass::ShadowCascadeSelectionPass(): jumps straight to the base-object constructor

    // 0x1007ae7a0, 352 bytes, placed by class name and debug map
    // ShadowCascadeSelectionPass::BeginPass(render::DrawCallState&, render::RenderContext&, EffectManager&, SceneViewData const&, DrawableQueue const&)
    ulong ShadowCascadeSelectionPass::BeginPass(DrawCallState* param_1, RenderContext* param_2, EffectManager* param_3,
                                                SceneViewData* param_4, DrawableQueue* param_5) {
        ImVec4* this_00;
        int iVar1;
        RenderContext* this_01;
        char cVar2;
        bool bVar3;
        undefined7 extraout_var;
        RenderTargets* pRVar4;
        vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>* pvVar5;
        undefined8* puVar6;
        int* piVar7;
        long lVar8;
        Viewport* pVVar9;
        OutputMergerState* this_02;
        ImVec4* this_03;
        undefined1* this_04;
        undefined1 local_60[40];
        RenderContext* local_38;

        cVar2 = (&param_4->field_432)->empty();
        if (cVar2 != '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("!viewData.m_renderTargetViewports.empty()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "renderer/renderpasses/ShadowCascadeSelectionPass.cpp",
                      57, (char*)0);
        }
        this_04 = field_624;
        bVar3 = this_04->operator_cast_to_bool();
        if (bVar3) {
            pRVar4 = (RenderTargets*)shared_ptr<render::RenderTargets>::operator->(
                (shared_ptr<render::RenderTargets>*)this_04);
            pvVar5 =
                (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>*)
                    pRVar4->GetColourTargetTextures();
            puVar6 = (undefined8*)
                eastl::vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true,
                                                                              eastl::allocator>>::operator[](pvVar5, 0);
            piVar7 = (int*)(*puVar6)->second();
            iVar1 = *piVar7;
            pRVar4 = (RenderTargets*)shared_ptr<render::RenderTargets>::operator->(
                (shared_ptr<render::RenderTargets>*)this_04);
            pvVar5 =
                (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>*)
                    pRVar4->GetColourTargetTextures();
            puVar6 = (undefined8*)
                eastl::vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true,
                                                                              eastl::allocator>>::operator[](pvVar5, 0);
            lVar8 = (*puVar6)->second();
            local_38 = param_2;
            new (local_60) render::Viewport(0, 0, iVar1, *(int*)(lVar8 + 4), 0.0, 1.0);
            pVVar9 = (Viewport*)param_1->GetOutputMergerState();
            render::OutputMergerState::SetViewports(pVVar9, (uint)(Viewport*)local_60);
            this_02 = (OutputMergerState*)param_1->GetOutputMergerState();
            pRVar4 = (RenderTargets*)this_04->end();
            this_02->SetRenderTargets(pRVar4);
            this_00 = (ImVec4*)(local_60 + 24);
            this_03 = this_00;
            ImVec4::ImVec4(this_00, 0.0, 0.0, 0.0, 0.0);
            lVar8 = this_03->Instance();
            this_01 = local_38;
            local_38->SetBlendState((BlendState*)(lVar8 + 1524));
            pRVar4 = (RenderTargets*)this_04->end();
            this_01->ClearRenderTargets(pRVar4, this_00, 1);
        }
        return CONCAT71(extraout_var, bVar3) & 4294967295;
    }

    // 0x1007ae900, 656 bytes, placed by class name and debug map
    // ShadowCascadeSelectionPass::Render(RT7Core&, render::DrawCallState const&, EffectManager&, SceneViewData const&, DrawableQueue&)
    void ShadowCascadeSelectionPass::Render(RT7Core* param_1, DrawCallState* param_2, EffectManager* param_3,
                                            SceneViewData* param_4, DrawableQueue* param_5) {
        SunlightShadows* pSVar1;
        Layout* this_00;
        RenderPipelineState* pRVar2;
        long lVar3;
        ShaderManager* pSVar4;
        shared_ptr<Shader>* this_01;
        Shader* this_02;
        type* ptVar5;
        RT7Core* pRVar6;
        Matrix44T* pMVar7;
        Matrix44T<float>* this_03;
        float* pfVar8;
        RenderContext* pRVar9;
        ulong uVar10;
        DrawCallState* this_04;
        uint uVar11;
        bool bVar12;
        undefined1 auVar13[16];
        EffectList local_1f8[256];
        undefined1 local_f8[64];
        undefined1 local_b8[112];
        DirLightCsmManager* local_48;
        RT7Core* local_38;

        pSVar1 = (SunlightShadows*)EffectManager::GetEffect<SunlightDirectLighting>(param_3, 30);
        local_48 = (DirLightCsmManager*)pSVar1->GetSunlightCsmManager();
        new ((local_b8 + 64)) render::DrawCallState(param_2);
        this_00 = (Layout*)((local_b8 + 64))->GetRenderPipelineState();
        eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::Layout::
            SetHeapSize(this_00, (ulong)&field_12);
        this_04 = (DrawCallState*)(local_b8 + 64);
        pRVar2 = (RenderPipelineState*)this_04->GetRenderPipelineState();
        lVar3 = this_04->Instance();
        pRVar2->SetRasteriserState((RasteriserState*)(lVar3 + 1272));
        auVar13 = ((local_b8 + 64))->GetRenderPipelineState();
        eastl::compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>::compressed_pair_imp(
            auVar13._0_8_, &field_72, auVar13._8_8_);
        pSVar4 = (ShaderManager*)param_1->GetShaderManager();
        EffectList::EffectList(local_1f8);
        this_01 = (shared_ptr<Shader>*)pSVar4->GetShader(24, param_3, local_1f8, &field_168, 0, 4294967295);
        this_02 = (Shader*)shared_ptr<Shader>::operator->(this_01);
        local_38 = (RT7Core*)this_02->GetProgram();
        pRVar2 = (RenderPipelineState*)((local_b8 + 64))->GetRenderPipelineState();
        pRVar2->SetShaderProgram(local_38);
        ((local_b8 + 64))->SetInputAssemblerState(field_432);
        new (local_1f8) std::array<math::Matrix44T<float>, 4ul>();
        uVar11 = 0;
        uVar10 = 3;
        do {
            pSVar1 = (SunlightShadows*)local_48->GetShadowMapCascade(uVar11);
            ptVar5 = (type*)pSVar1->GetSunlightCsmManager();
            local_f8->GetTransform();
            pRVar6 = (RT7Core*)param_4->SSOBeginPtr(ptVar5);
            pMVar7 = (Matrix44T*)pRVar6->GetImmediateThreadPool();
            math::operator*((math*)local_b8, (Matrix44T*)local_f8, pMVar7);
            this_03 = (Matrix44T<float>*)std::array<math::Matrix44T<float>, 4ul>::operator[](
                (array<math::Matrix44T<float>, 4ul>*)local_1f8, uVar10);
            math::Matrix44T<float>::operator=(this_03, (Matrix44T*)local_b8);
            uVar11 = uVar11 + 1;
            bVar12 = uVar10 != 0;
            uVar10 = uVar10 - 1;
        } while (bVar12);
        new (local_b8) HashedString("uWorldViewProjMats");
        pMVar7 = (Matrix44T*)std::array<math::Matrix44T<float>, 4ul>::operator[](
            (array<math::Matrix44T<float>, 4ul>*)local_1f8, 0);
        local_38->SetShaderConstMatrix4(local_b8, 4, pMVar7, 1);
        local_b8._0_8_ = (char*)4539628425438035968;
        local_b8._8_4_ = 0.75;
        local_b8._12_4_ = 1.0;
        new (local_f8) HashedString("uCascadeColours");
        pfVar8 = (float*)local_b8->data();
        pRVar6 = local_38;
        local_38->SetShaderConstFloat1Array(local_f8, 4, pfVar8, 1);
        pRVar9 = (RenderContext*)pRVar6->GetRenderContext();
        pRVar9->DrawIndexedPrimitives(local_b8 + 64, 4, 144, 0);
        ((local_b8 + 64))->~DrawCallState();
    }

    // 0x1007aed00, 80 bytes, placed by class name
    // ShadowCascadeSelectionPass::DestroyRenderingResources()
    void ShadowCascadeSelectionPass::DestroyRenderingResources() {
        field_432->Destroy();
        (&field_344)->Destroy();
        (&field_168)->Destroy();
        (&field_264)->Destroy();
    }

} // namespace jag::graphics
