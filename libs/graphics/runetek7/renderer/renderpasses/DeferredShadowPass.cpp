// libs/graphics/runetek7/renderer/renderpasses/DeferredShadowPass.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

#include "DeferredShadowPass.h"

namespace jag::graphics {
    // 0x1007a46f0, 464 bytes, base-object constructor, placed by class name and debug map
    // DeferredShadowPass::DeferredShadowPass()
    void DeferredShadowPass::DeferredShadowPass() {
        undefined1* this_00;

        FullscreenQuadPass::FullscreenQuadPass();
        field_0 = &PTR__DeferredShadowPass_100f140b0;
        this_00 = &field_624;
        new (this_00) EffectList();
        new (&field_640, (_func_decltype_nullptr*)15) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        new (field_656, (_func_decltype_nullptr*)15) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        new (field_672, "uCustomProjectionMatrix", 30, 0, 14) render::ShaderProgramVariable();
        new (field_704, "uSceneInvProjSunlightViewMatrix", 30, 0, 14) render::ShaderProgramVariable();
        new (field_736, "uInvViewSpaceSunDirection", 2, 0, 14) render::ShaderProgramVariable();
        this_00->Set(89, 1);
        this_00->Set(29, 1);
        this_00->Set(30, 1);
        this_00->Set(37, 1);
        this_00->Set(6, 0);
        this_00->Set(114, 0);
        this_00->Set(31, 1);
        this_00->Set(32, 1);
        this_00->Set(33, 1);
        this_00->Set(34, 1);
        this_00->Set(79, 1);
        this_00->Set(106, 1);
        (*(code*)field_0[8])(this);
    }

    // 0x1007a49d0, 16 bytes, complete-object constructor, placed by class name
    // DeferredShadowPass::DeferredShadowPass(): jumps straight to the base-object constructor

    // 0x1007a49e0, 64 bytes, base-object destructor, placed by class name
    // DeferredShadowPass::~DeferredShadowPass()
    void DeferredShadowPass::~DeferredShadowPass() {
        field_0 = &PTR__DeferredShadowPass_100f140b0;
        field_656->~shared_ptr();
        (&field_640)->~shared_ptr();
        ~FullscreenQuadPass();
    }

    // 0x1007a4a20, 16 bytes, complete-object destructor, placed by class name
    // DeferredShadowPass::~DeferredShadowPass(): jumps straight to the base-object destructor

    // 0x1007a4a30, 32 bytes, deleting destructor, placed by class name
    // DeferredShadowPass::~DeferredShadowPass()
    void DeferredShadowPass::~DeferredShadowPass() {
        ~DeferredShadowPass(this);
        operator_delete(this);
    }

    // 0x1007a4a50, 368 bytes, placed by class name
    // DeferredShadowPass::BeginPass(render::DrawCallState&, render::RenderContext&, EffectManager&, SceneViewData const&, DrawableQueue const&)
    ulong DeferredShadowPass::BeginPass(DrawCallState* param_1, RenderContext* param_2, EffectManager* param_3,
                                        SceneViewData* param_4, DrawableQueue* param_5) {
        char cVar1;
        bool bVar2;
        uint uVar3;
        undefined7 extraout_var;
        RenderTargets* pRVar4;
        vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>* this_00;
        undefined8* puVar5;
        int* piVar6;
        Viewport* pVVar7;
        OutputMergerState* this_01;
        undefined1* this_02;
        undefined1 local_a8[112];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        cVar1 = (&param_4->field_432)->empty();
        if (cVar1 != '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("!viewData.m_renderTargetViewports.empty()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "renderer/renderpasses/DeferredShadowPass.cpp",
                      54, (char*)0);
        }
        this_02 = field_656;
        bVar2 = this_02->operator_cast_to_bool();
        if (bVar2) {
            pRVar4 = (RenderTargets*)shared_ptr<render::RenderTargets>::operator->(
                (shared_ptr<render::RenderTargets>*)this_02);
            this_00 =
                (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>*)
                    pRVar4->GetColourTargetTextures();
            puVar5 = (undefined8*)eastl::vector<
                render::Texture*,
                eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>::operator[](this_00, 0);
            piVar6 = (int*)(*puVar5)->second();
            new ((local_a8 + 24)) eastl::fixed_vector<render::Viewport, 2ul, true, eastl::allocator>();
            new (local_a8) render::Viewport(0, 0, *piVar6, piVar6[1], 0.0, 1.0);
            ((local_a8 + 24))->push_back(local_a8);
            pVVar7 = (Viewport*)param_1->GetOutputMergerState();
            uVar3 = ((local_a8 + 24))->HeapBeginPtr();
            render::OutputMergerState::SetViewports(pVVar7, uVar3);
            this_01 = (OutputMergerState*)param_1->GetOutputMergerState();
            pRVar4 = (RenderTargets*)this_02->end();
            this_01->SetRenderTargets(pRVar4);
            ((local_a8 + 24))->~fixed_vector();
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return CONCAT71(extraout_var, bVar2) & 4294967295;
    }

    // 0x1007a4bc0, 624 bytes, placed by class name
    // DeferredShadowPass::Render(RT7Core&, render::DrawCallState const&, EffectManager&, SceneViewData const&, DrawableQueue&)
    void DeferredShadowPass::Render(RT7Core* param_1, DrawCallState* param_2, EffectManager* param_3,
                                    SceneViewData* param_4, DrawableQueue* param_5) {
        EffectManager* this_00;
        bool bVar1;
        RenderTargets* this_01;
        compressed_pair_imp<eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                                    eastl::allocator>>::Layout,
                            eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>, 0>* this_02;
        uint* puVar2;
        SunlightDirectLighting* this_03;
        undefined8* puVar3;
        Viewport* pVVar4;
        ShaderManager* pSVar5;
        shared_ptr<Shader>* this_04;
        Shader* this_05;
        ShaderProgram* pSVar6;
        RenderPipelineState* this_06;
        InputAssemblerState* this_07;
        VertexBuffer* pVVar7;
        RenderContext* pRVar8;
        SceneViewData* extraout_RDX;
        RT7Core* this_08;
        EffectList EVar9;
        Data local_d8;
        undefined8 uStack_b0;
        DrawCallState local_a0;
        DrawCallState* local_70;
        RT7Core* local_68;
        SunlightDirectLighting* local_60;
        undefined1 local_58[16];
        SceneViewData* local_48;
        RenderContext* local_40;
        EffectManager* local_38;

        local_70 = param_2;
        local_68 = param_1;
        local_48 = param_4;
        local_38 = param_3;
        bVar1 = field_656->operator_cast_to_bool();
        if (bVar1) {
            this_08 = (RT7Core*)&field_640;
            bVar1 = this_08->operator_cast_to_bool();
            if (bVar1) {
                local_40 = (RenderContext*)this_08->GetRenderContext();
                this_01 = (RenderTargets*)shared_ptr<render::RenderTargets>::operator->(
                    (shared_ptr<render::RenderTargets>*)&field_640);
                this_02 =
                    (compressed_pair_imp<
                        eastl::basic_string<
                            char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::Layout,
                        eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>, 0>*)
                        this_01->GetDepthStencilTargetTexture();
                puVar2 = (uint*)eastl::compressed_pair_imp<
                    eastl::basic_string<
                        char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::Layout,
                    eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>, 0>::second(this_02);
                this_00 = local_38;
                this_03 = EffectManager::GetEffect<SunlightDirectLighting>(local_38);
                puVar3 = (undefined8*)this_03->GetDefaultValue();
                local_d8._0_8_ = *puVar3;
                local_d8._8_8_ = puVar3[1];
                local_d8._16_8_ = puVar3[2];
                local_d8._24_8_ = puVar3[3];
                local_d8._32_8_ = puVar3[4];
                uStack_b0 = puVar3[5];
                pVVar4 = (Viewport*)eastl::vector<
                    render::Viewport, eastl::fixed_vector_allocator<24ul, 2ul, 4ul, 0ul, true, eastl::allocator>>::
                operator[](
                    (vector<render::Viewport,
                            eastl::fixed_vector_allocator<24ul, 2ul, 4ul, 0ul, true, eastl::allocator>>*)&local_48
                        ->field_432,
                    0);
                new (&local_a0) math::Point<float>((float)*puVar2, (float)puVar2[1]);
                local_60 = this_03;
                this_03->SetViewportLookupScale(pVVar4, (Vector2T*)&local_a0);
                pRVar8 = (RenderContext*)&local_a0;
                new (&local_a0) render::DrawCallState(local_70);
                FullscreenQuadPass::QuadBeginRender((DrawCallState*)pRVar8, (RenderContext*)&local_a0, extraout_RDX);
                pSVar5 = (ShaderManager*)local_68->GetShaderManager();
                local_58 = this_00->BuildShaderEffectList((EffectList*)&field_624);
                EVar9 = (EffectList)255;
                pRVar8 = (RenderContext*)local_58;
                this_04 = (shared_ptr<Shader>*)pSVar5->GetShader(25, this_00, pRVar8, &field_16, 0);
                this_05 = (Shader*)shared_ptr<Shader>::operator->(this_04);
                pSVar6 = (ShaderProgram*)this_05->GetProgram();
                this_06 = (RenderPipelineState*)local_a0.GetRenderPipelineState();
                this_06->SetShaderProgram(pSVar6);
                this_07 = (InputAssemblerState*)local_a0.GetInputAssemblerState();
                pVVar7 = (VertexBuffer*)(&field_112)->GetBoneIDMap();
                this_07->SetVertexStreamData((VertexDeclaration*)&field_16, pVVar7);
                SetShaderConstants(this, &local_a0, local_38, pRVar8, pSVar6, local_48);
                shared_ptr<Shader>::operator*(this_04);
                EffectManager::SetShaderConstants((DrawCallState*)local_38, (RenderContext*)&local_a0,
                                                  (Shader*)local_40, EVar9);
                QuadEndRender(&local_a0, local_40);
                local_60->SetData(&local_d8);
                local_a0.~DrawCallState();
                return;
            }
        }
        /* WARNING: Subroutine does not return */
        LogAssert("m_ShadowBufferRT && m_GBufferRT",
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/renderer/"
                  "renderpasses/DeferredShadowPass.cpp",
                  83, (char*)0);
    }

    // 0x1007a4ea0, 688 bytes, placed by class name
    // DeferredShadowPass::SetShaderConstants(render::DrawCallState&, EffectManager&, render::RenderContext&, render::ShaderProgram const&, SceneViewData const&)
    void DeferredShadowPass::SetShaderConstants(DrawCallState* param_1, EffectManager* param_2, RenderContext* param_3,
                                                ShaderProgram* param_4, SceneViewData* param_5) {
        DrawCallState* this_00;
        int iVar1;
        undefined8* puVar2;
        HashedString* pHVar3;
        SunlightShadows* this_01;
        Matrix44T* pMVar4;
        BillboardBatch* this_02;
        Vector4T<float>* this_03;
        RenderPipelineState* pRVar5;
        RenderTargets* pRVar6;
        vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>* this_04;
        Texture* pTVar7;
        undefined4 uVar8;
        undefined4 uVar9;
        Vector4T<float> local_138[16];
        Matrix44T local_128;
        undefined8 uStack_f0;
        Matrix44T local_e8;
        undefined4 uStack_b0;
        undefined4 uStack_ac;
        Matrix44T local_a8;
        undefined8 uStack_70;
        undefined8 local_68[2];
        undefined8 local_58[2];
        undefined8 local_48[2];
        DrawCallState* local_38;

        local_38 = param_1;
        param_4->SetShaderConstMatrix4((HashedString*)field_672, 1, (Matrix44T*)&field_560, 1);
        puVar2 = (undefined8*)param_5->GetScreen();
        local_128._0_8_ = *puVar2;
        local_128._8_8_ = puVar2[1];
        local_128._16_8_ = puVar2[2];
        local_128._24_8_ = puVar2[3];
        local_128._32_8_ = puVar2[4];
        local_128._40_8_ = puVar2[5];
        local_128._48_8_ = puVar2[6];
        uStack_f0 = puVar2[7];
        local_128.Invert(0);
        pHVar3 = (HashedString*)graphics::operator*((graphics*)10);
        param_4->SetShaderConstMatrix4(pHVar3, 1, &local_128, 1);
        puVar2 = (undefined8*)param_5->GetImmediateThreadPool();
        local_a8._0_8_ = *puVar2;
        local_a8._8_8_ = puVar2[1];
        local_a8._16_8_ = puVar2[2];
        local_a8._24_8_ = puVar2[3];
        local_a8._32_8_ = puVar2[4];
        local_a8._40_8_ = puVar2[5];
        local_a8._48_8_ = puVar2[6];
        uStack_70 = puVar2[7];
        local_a8.Invert(0);
        local_e8._48_4_ = local_a8._48_4_;
        local_e8._52_4_ = local_a8._52_4_;
        uStack_b0 = (undefined4)uStack_70;
        uStack_ac = uStack_70._4_4_;
        local_e8._32_4_ = local_a8._32_4_;
        local_e8._36_4_ = local_a8._36_4_;
        local_e8._40_4_ = local_a8._40_4_;
        local_e8._44_4_ = local_a8._44_4_;
        local_e8._16_4_ = local_a8._16_4_;
        local_e8._20_4_ = local_a8._20_4_;
        local_e8._24_4_ = local_a8._24_4_;
        local_e8._28_4_ = local_a8._28_4_;
        local_e8._0_4_ = local_a8._0_4_;
        local_e8._4_4_ = local_a8._4_4_;
        local_e8._8_4_ = local_a8._8_4_;
        local_e8._12_4_ = local_a8._12_4_;
        uVar8 = local_a8._16_4_;
        uVar9 = local_a8._20_4_;
        this_01 = (SunlightShadows*)EffectManager::GetEffect<SunlightDirectLighting>(param_2, 30);
        pMVar4 = (Matrix44T*)this_01->GetSunlightViewTransform();
        math::Matrix44T<float>::operator*=((Matrix44T<float>*)&local_e8, pMVar4);
        param_4->SetShaderConstMatrix4((HashedString*)field_704, 1, &local_e8, 1);
        this_02 = (BillboardBatch*)EffectManager::GetEffect<SunlightDirectLighting>(param_2, 29);
        this_03 = (Vector4T<float>*)this_02->GetBillboardLabelIDMap();
        local_48[0] = this_03->GetXYZ();
        local_48[1]._0_4_ = uVar8;
        math::Vector4T<float>::Vector4T(local_138, (Vector3T*)local_48, 0.0);
        pMVar4 = (Matrix44T*)param_5->GetScreen();
        local_68[0] = math::operator*((Vector4T*)local_138, pMVar4);
        local_68[1]._0_4_ = uVar8;
        local_68[1]._4_4_ = uVar9;
        local_58[0] = local_68->GetXYZ();
        local_58[1]._0_4_ = uVar8;
        local_58->Normalize();
        new (local_68) math::Vector4T<float>(local_58, 0.0);
        param_4->SetShaderConstVector3((HashedString*)field_736, (Vector3T*)local_68);
        this_00 = local_38;
        pRVar5 = (RenderPipelineState*)local_38->GetRenderPipelineState();
        pRVar6 = (RenderTargets*)shared_ptr<render::RenderTargets>::operator->(
            (shared_ptr<render::RenderTargets>*)&field_640);
        this_04 = (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>*)
                      pRVar6->GetColourTargetTextures();
        puVar2 = (undefined8*)
            eastl::vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true,
                                                                          eastl::allocator>>::operator[](this_04, 0);
        pTVar7 = (Texture*)*puVar2;
        pHVar3 = (HashedString*)graphics::operator*((graphics*)106);
        iVar1 = param_4->GetConstIndex(pHVar3);
        pRVar5->SetPSTextureSamplerPair(0, pTVar7, iVar1, 0, false);
        pRVar5 = (RenderPipelineState*)this_00->GetRenderPipelineState();
        pRVar6 = (RenderTargets*)shared_ptr<render::RenderTargets>::operator->(
            (shared_ptr<render::RenderTargets>*)&field_640);
        pTVar7 = (Texture*)pRVar6->GetDepthStencilTargetTexture();
        pHVar3 = (HashedString*)graphics::operator*((graphics*)107);
        iVar1 = param_4->GetConstIndex(pHVar3);
        pRVar5->SetPSTextureSamplerPair(1, pTVar7, iVar1, 0, false);
    }

    // 0x1007a5170, 1168 bytes, placed by class name
    // DeferredShadowPass::BlurPass(render::RenderContext&, render::DrawCallState const&, EffectManager&, SceneViewData const&, ShaderManager&)
    void DeferredShadowPass::BlurPass(RenderContext* param_1, DrawCallState* param_2, EffectManager* param_3,
                                      SceneViewData* param_4, ShaderManager* param_5) {
        bool bVar1;
        EffectManager* pEVar2;
        bool bVar3;
        uint uVar4;
        int iVar5;
        MapArea* this_00;
        long lVar6;
        RenderTargets* pRVar7;
        vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>* pvVar8;
        undefined8* puVar9;
        shared_ptr<Shader>* this_01;
        RenderPipelineState* pRVar10;
        Shader* pSVar11;
        ShaderProgram* pSVar12;
        InputAssemblerState* this_02;
        VertexBuffer* pVVar13;
        Viewport* pVVar14;
        HashedString* pHVar15;
        Matrix44T* pMVar16;
        Texture* pTVar17;
        SceneViewData* extraout_RDX;
        RenderContext* pRVar18;
        DrawCallState local_118;
        Matrix44T local_e8;
        undefined8 uStack_b0;
        EffectList local_a0[16];
        EffectManager* local_90;
        ShaderManager* local_88;
        GeometryBatch* local_80;
        vector<render::Viewport, eastl::fixed_vector_allocator<24ul, 2ul, 4ul, 0ul, true, eastl::allocator>>* local_78;
        Matrix44T* local_70;
        shared_ptr<render::RenderTargets>* local_68;
        VertexDeclaration* local_60;
        RenderContext* local_58;
        shared_ptr<render::RenderTargets>* local_50;
        float local_48;
        float local_44;
        DeferredShadowPass* local_40;
        SceneViewData* local_38;

        local_88 = param_5;
        local_58 = param_1;
        local_40 = this;
        local_38 = param_4;
        this_00 = (MapArea*)Instance();
        lVar6 = this_00->GetOrigin();
        if (*(int*)(lVar6 + 84) < 4) {
            /* WARNING: Subroutine does not return */
            LogAssert("RenderDevice::Instance().GetDeviceCaps().m_MaxTextureOffset >= 4",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "renderer/renderpasses/DeferredShadowPass.cpp",
                      128, (char*)0);
        }
        local_68 = (shared_ptr<render::RenderTargets>*)local_40->field_656;
        local_90 = param_3;
        pRVar7 = (RenderTargets*)shared_ptr<render::RenderTargets>::operator->(local_68);
        pvVar8 = (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>*)
                     pRVar7->GetColourTargetTextures();
        puVar9 = (undefined8*)
            eastl::vector<render::Texture*,
                          eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>::operator[](pvVar8,
                                                                                                                 0);
        lVar6 = (*puVar9)->second();
        if (*(int*)(lVar6 + 12) != 20) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_ShadowBufferRT->GetColourTargetTextures()[0]->GetDesc().m_Format == FORMAT_L8R8_UNORM",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "renderer/renderpasses/DeferredShadowPass.cpp",
                      129, "Format of shadow buffer must be FORMAT_L8R8_UNORM for geometry aware blur");
        }
        EffectList::EffectList(local_a0);
        local_a0->Set(114, 0);
        local_a0->Set(106, 1);
        new (&local_118) render::DrawCallState(param_2);
        local_60 = (VertexDeclaration*)&local_40->field_16;
        local_80 = (GeometryBatch*)&local_40->field_112;
        local_78 =
            (vector<render::Viewport,
                    eastl::fixed_vector_allocator<24ul, 2ul, 4ul, 0ul, true, eastl::allocator>>*)&local_38->field_432;
        local_70 = (Matrix44T*)&local_40->field_560;
        local_50 = (shared_ptr<render::RenderTargets>*)&local_40->field_640;
        bVar3 = true;
        do {
            bVar1 = bVar3;
            if (!bVar1) {
                local_a0->Set(114, 1);
            }
            pRVar18 = local_58;
            local_58->FlushTextureCache();
            FullscreenQuadPass::QuadBeginRender((DrawCallState*)pRVar18, (RenderContext*)&local_118, extraout_RDX);
            pEVar2 = local_90;
            local_e8._0_16_ = local_90->BuildShaderEffectList(local_a0);
            this_01 = (shared_ptr<Shader>*)local_88->GetShader(19, pEVar2, &local_e8, local_60, 0, 4294967295);
            pRVar10 = (RenderPipelineState*)local_118.GetRenderPipelineState();
            pSVar11 = (Shader*)shared_ptr<Shader>::operator->(this_01);
            pSVar12 = (ShaderProgram*)pSVar11->GetProgram();
            pRVar10->SetShaderProgram(pSVar12);
            this_02 = (InputAssemblerState*)local_118.GetInputAssemblerState();
            pVVar13 = (VertexBuffer*)local_80->GetBoneIDMap();
            this_02->SetVertexStreamData(local_60, pVVar13);
            uVar4 = eastl::vector<render::Viewport, eastl::fixed_vector_allocator<24ul, 2ul, 4ul, 0ul, true,
                                                                                  eastl::allocator>>::back(local_78);
            pVVar14 = (Viewport*)local_118.GetOutputMergerState();
            render::OutputMergerState::SetViewports(pVVar14, uVar4);
            pSVar11 = (Shader*)shared_ptr<Shader>::operator->(this_01);
            pSVar12 = (ShaderProgram*)pSVar11->GetProgram();
            pHVar15 = (HashedString*)graphics::operator*((graphics*)9);
            pMVar16 = (Matrix44T*)local_38->GetOrigin();
            pSVar12->SetShaderConstMatrix4(pHVar15, 1, pMVar16, 1);
            pHVar15 = (HashedString*)graphics::operator*((graphics*)4);
            pSVar12->SetShaderConstMatrix4(pHVar15, 1, local_70, 1);
            puVar9 = (undefined8*)local_38->GetOrigin();
            local_e8._0_8_ = *puVar9;
            local_e8._8_8_ = puVar9[1];
            local_e8._16_8_ = puVar9[2];
            local_e8._24_8_ = puVar9[3];
            local_e8._32_8_ = puVar9[4];
            local_e8._40_8_ = puVar9[5];
            local_e8._48_8_ = puVar9[6];
            uStack_b0 = puVar9[7];
            local_e8.Invert(0);
            pHVar15 = (HashedString*)graphics::operator*((graphics*)11);
            pSVar12->SetShaderConstMatrix4(pHVar15, 1, &local_e8, 1);
            pRVar10 = (RenderPipelineState*)local_118.GetRenderPipelineState();
            pRVar7 = (RenderTargets*)shared_ptr<render::RenderTargets>::operator->(local_50);
            pvVar8 =
                (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>*)
                    pRVar7->GetColourTargetTextures();
            puVar9 = (undefined8*)
                eastl::vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true,
                                                                              eastl::allocator>>::operator[](pvVar8, 0);
            pTVar17 = (Texture*)*puVar9;
            pHVar15 = (HashedString*)graphics::operator*((graphics*)106);
            iVar5 = pSVar12->GetConstIndex(pHVar15);
            pRVar10->SetPSTextureSamplerPair(0, pTVar17, iVar5, 0, false);
            pRVar10 = (RenderPipelineState*)local_118.GetRenderPipelineState();
            pRVar7 = (RenderTargets*)shared_ptr<render::RenderTargets>::operator->(local_50);
            pTVar17 = (Texture*)pRVar7->GetDepthStencilTargetTexture();
            pHVar15 = (HashedString*)graphics::operator*((graphics*)107);
            iVar5 = pSVar12->GetConstIndex(pHVar15);
            pRVar10->SetPSTextureSamplerPair(1, pTVar17, iVar5, 0, false);
            pRVar10 = (RenderPipelineState*)local_118.GetRenderPipelineState();
            pRVar7 = (RenderTargets*)shared_ptr<render::RenderTargets>::operator->(local_68);
            pvVar8 =
                (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>*)
                    pRVar7->GetColourTargetTextures();
            puVar9 = (undefined8*)
                eastl::vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true,
                                                                              eastl::allocator>>::operator[](pvVar8, 0);
            pTVar17 = (Texture*)*puVar9;
            pHVar15 = (HashedString*)graphics::operator*((graphics*)110);
            iVar5 = pSVar12->GetConstIndex(pHVar15);
            pRVar10->SetPSTextureSamplerPair(2, pTVar17, iVar5, 0, false);
            local_38->GetNearFarPlaneDistances(&local_48, &local_44);
            pHVar15 = (HashedString*)graphics::operator*((graphics*)104);
            pSVar12->SetShaderConstFloat4(pHVar15, local_44 * local_48, local_48 - local_44, local_44, 0.0);
            local_40->QuadEndRender(&local_118, local_58);
            bVar3 = false;
        } while (bVar1);
        local_118.~DrawCallState();
    }

    // 0x1007a5660, 256 bytes, placed by class name
    // DeferredShadowPass::RenderDebug(EffectManager&, DrawableQueue&)
    void DeferredShadowPass::RenderDebug(EffectManager* param_1, DrawableQueue* param_2) {
        undefined8 uVar1;
        char cVar2;
        long* plVar3;
        RenderTargets* this_00;
        vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>* this_01;
        undefined8* puVar4;
        ImVec4 local_58[16];
        Point<float> local_48[8];
        Point<float> local_40[8];
        undefined1 local_38[8];

        cVar2 = param_1->IsEnabled();
        if (cVar2 != '\0') {
            plVar3 = (long*)DebugPrimitiveCollectorBasic::GetCollector("");
            if (plVar3 != (long*)0) {
                this_00 = (RenderTargets*)shared_ptr<render::RenderTargets>::operator->(
                    (shared_ptr<render::RenderTargets>*)field_656);
                this_01 = (vector<render::Texture*,
                                  eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>*)
                              this_00->GetColourTargetTextures();
                puVar4 = (undefined8*)eastl::vector<
                    render::Texture*,
                    eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>::operator[](this_01, 0);
                uVar1 = *puVar4;
                ImVec4::ImVec4(local_58, 0.0, 0.0, 0.5, 0.5);
                math::Point<float>::Point(local_48, 0.0, 0.0);
                math::Point<float>::Point(local_40, 1.0, 1.0);
                new (local_38) oldscape::sidebars::SideBarData(-1, 0);
                (**(code**)(*plVar3 + 112))(plVar3, uVar1, local_58, local_48, local_40, 0, 0, 0,
                                            (SideBarData*)local_38);
            }
        }
    }

} // namespace jag::graphics
