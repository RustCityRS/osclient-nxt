// libs/graphics/runetek7/renderer/renderpasses/SSAOPass.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

#include "SSAOPass.h"

namespace jag::graphics {
    // 0x100f437a0, 64 bytes, __data
    SSAOPass::m_SSAOModeNiceNames__ = {
        0, 0, 14512292, 1, 1, 0, 14638297, 1, 2, 0, 14754932, 1, 3, 0, 14638305, 1,
    };

    // 0x100f437e0, 4 bytes, __data
    SSAOPass::m_SSAOMode = 1;

    // 0x1039bd150, 16 bytes, __common; set at startup by ___cxx_global_var_init.81
    StringEnum SSAOPass::m_SSAOModeNiceNames = StringEnum((StringEnumEntry*)&SSAOPass::m_SSAOModeNiceNames__, 4);

    // 0x1007ac4a0, 352 bytes, base-object constructor, placed by class name and debug map
    // SSAOPass::SSAOPass()
    void SSAOPass::SSAOPass() {
        undefined1* this_00;

        FullscreenQuadPass::FullscreenQuadPass();
        field_0 = &PTR__SSAOPass_100f14400;
        m_pSSAOContext = (SSAOContext*)0;
        new (field_632, (_func_decltype_nullptr*)12) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        new (field_648, (_func_decltype_nullptr*)12) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        new (&field_672, "Texture2D") render::Texture2D();
        new (&field_1184, "Texture2D") render::Texture2D();
        this_00 = &field_1696;
        new (this_00) EffectList();
        new (&field_1712) render::InputAssemblerState();
        new (&field_1904) render::InputAssemblerState();
        this_00->Add(89);
        this_00->Add(114);
        this_00->Add(106);
        (*(code*)field_0[8])(this);
    }

    // 0x1007ac600, 16 bytes, complete-object constructor, placed by class name and debug map
    // SSAOPass::SSAOPass(): jumps straight to the base-object constructor

    // 0x1007ac610, 112 bytes, base-object destructor, placed by class name and debug map
    // SSAOPass::~SSAOPass()
    void SSAOPass::~SSAOPass() {
        field_0 = &PTR__SSAOPass_100f14400;
        (&field_1904)->~InputAssemblerState();
        (&field_1712)->~InputAssemblerState();
        (&field_1184)->~Texture2D();
        (&field_672)->~Texture2D();
        field_648->~shared_ptr();
        field_632->~shared_ptr();
        ~FullscreenQuadPass();
    }

    // 0x1007ac680, 16 bytes, complete-object destructor, placed by class name and debug map
    // SSAOPass::~SSAOPass(): jumps straight to the base-object destructor

    // 0x1007ac690, 32 bytes, deleting destructor, placed by class name and debug map
    // SSAOPass::~SSAOPass()
    void SSAOPass::~SSAOPass() {
        ~SSAOPass(this);
        operator_delete(this);
    }

    // 0x1007ac6b0, 192 bytes, placed by class name and debug map
    // SSAOPass::BeginPass(render::DrawCallState&, render::RenderContext&, EffectManager&, SceneViewData const&, DrawableQueue const&)
    undefined8 SSAOPass::BeginPass(DrawCallState* param_1, RenderContext* param_2, EffectManager* param_3,
                                   SceneViewData* param_4, DrawableQueue* param_5) {
        char cVar1;
        bool bVar2;
        uint uVar3;
        Viewport* pVVar4;
        OutputMergerState* this_00;
        RenderTargets* pRVar5;

        cVar1 = (&param_4->field_432)->empty();
        if (cVar1 != '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("!viewData.m_renderTargetViewports.empty()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "renderer/renderpasses/SSAOPass.cpp",
                      43, (char*)0);
        }
        bVar2 = field_648->operator_cast_to_bool();
        if ((bVar2) && (bVar2 = field_632->operator_cast_to_bool(), bVar2)) {
            uVar3 = (&param_4->field_432)->back();
            pVVar4 = (Viewport*)param_1->GetOutputMergerState();
            render::OutputMergerState::SetViewports(pVVar4, uVar3);
            this_00 = (OutputMergerState*)param_1->GetOutputMergerState();
            pRVar5 = (RenderTargets*)field_648->end();
            this_00->SetRenderTargets(pRVar5);
            return 1;
        }
        return 0;
    }

    // 0x1007ac770, 3248 bytes, placed by class name and debug map
    // SSAOPass::Render(RT7Core&, render::DrawCallState const&, EffectManager&, SceneViewData const&, DrawableQueue&)
    void SSAOPass::Render(RT7Core* param_1, DrawCallState* param_2, EffectManager* param_3, SceneViewData* param_4,
                          DrawableQueue* param_5) {
        undefined1* puVar1;
        undefined1* this_00;
        float fVar2;
        RT7Core* pRVar3;
        NXTPixToolkit* pNVar4;
        bool bVar5;
        char cVar6;
        int iVar7;
        RenderTargets* pRVar8;
        compressed_pair_imp<eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                                    eastl::allocator>>::Layout,
                            eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>, 0>* this_01;
        long lVar9;
        Layout* pLVar10;
        undefined8* puVar11;
        vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>* pvVar12;
        uint* puVar13;
        Viewport* pVVar14;
        ShaderManager* pSVar15;
        shared_ptr<Shader>* psVar16;
        Shader* pSVar17;
        ShaderProgram* pSVar18;
        RenderPipelineState* pRVar19;
        VertexBuffer* pVVar20;
        HashedString* pHVar21;
        WorldmapAreaMetadata* this_02;
        Matrix44T* pMVar22;
        vector<render::Viewport, eastl::fixed_vector_allocator<24ul, 2ul, 4ul, 0ul, true, eastl::allocator>>* this_03;
        vector* pvVar23;
        float* pfVar24;
        Texture* pTVar25;
        RenderTargets* this_04;
        Texture* pTVar26;
        Matrix44T* pMVar27;
        MapArea* this_05;
        undefined8 uVar28;
        OutputMergerState* this_06;
        RenderTargetsManager* this_07;
        SceneViewData* extraout_RDX;
        RenderContext* extraout_RDX_00;
        SceneViewData* extraout_RDX_01;
        RenderContext* extraout_RDX_02;
        SceneViewData* extraout_RDX_03;
        SceneViewData* extraout_RDX_04;
        SceneViewData* pSVar29;
        RenderContext* extraout_RDX_05;
        undefined1* puVar30;
        type* ptVar31;
        RT7Core* pRVar32;
        RenderContext* pRVar33;
        DrawCallState* this_08;
        shared_ptr<render::RenderTargets>* this_09;
        undefined4 uVar34;
        undefined4 uVar35;
        undefined1 auVar36[16];
        EffectList EVar37;
        DrawCallState local_1a8;
        undefined8 local_178;
        undefined8 uStack_170;
        undefined1 local_168[72];
        GeometryBatch* local_120;
        float local_118[6];
        undefined1 local_100[76];
        float local_b4;
        VertexDeclaration* local_b0;
        DrawCallState* local_a8;
        vector* local_a0;
        undefined1 local_98[32];
        SunlightDirectLighting* local_78;
        RenderContext* local_70;
        RT7Core* local_68;
        float local_5c;
        RenderContext* local_58;
        RT7Core* local_50;
        SSAOPass* local_48;
        shared_ptr<render::RenderTargets>* local_40;
        NXTPixToolkit* local_38;

        local_40 = (shared_ptr<render::RenderTargets>*)field_648;
        local_38 = (NXTPixToolkit*)param_4;
        bVar5 = local_40->operator_cast_to_bool();
        if (bVar5) {
            puVar1 = field_632;
            bVar5 = puVar1->operator_cast_to_bool();
            if (bVar5) {
                local_a8 = param_2;
                local_50 = (RT7Core*)param_3;
                cVar6 = (&field_1184)->IsCreated();
                if (cVar6 != '\0') {
                    this_00 = &field_672;
                    cVar6 = this_00->IsCreated();
                    if (cVar6 != '\0') {
                        puVar30 = &field_1696;
                        local_48 = this;
                        pRVar8 = (RenderTargets*)shared_ptr<render::RenderTargets>::operator->(
                            (shared_ptr<render::RenderTargets>*)puVar1);
                        this_01 = (compressed_pair_imp<
                                   eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                                           eastl::allocator>>::Layout,
                                   eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>, 0>*)
                                      pRVar8->GetDepthStencilTargetTexture();
                        lVar9 = eastl::compressed_pair_imp<
                            eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                                    eastl::allocator>>::Layout,
                            eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>,
                            0>::second(this_01);
                        puVar30->Set(89, 1 < *(uint*)(lVar9 + 16));
                        local_98._24_8_ = puVar30;
                        puVar30->Set(114, 0);
                        ptVar31 = (type*)106;
                        pRVar32 = local_50;
                        local_78 = EffectManager::GetEffect<SunlightDirectLighting>();
                        pNVar4 = local_38;
                        auVar36._8_8_ = local_100._8_8_;
                        auVar36._0_8_ = local_100._0_8_;
                        if (m_SSAOMode == 3) {
                            pRVar8 = (RenderTargets*)local_48->m_pSSAOContext;
                            if (pRVar8 != (RenderTargets*)0) {
                                pTVar25 = (Texture*)shared_ptr<render::RenderTargets>::operator*(local_40);
                                this_04 = (RenderTargets*)shared_ptr<render::RenderTargets>::operator->(
                                    (shared_ptr<render::RenderTargets>*)puVar1);
                                pTVar26 = (Texture*)this_04->GetDepthStencilTargetTexture();
                                pMVar22 = (Matrix44T*)eastl::vector<
                                    render::Viewport,
                                    eastl::fixed_vector_allocator<24ul, 2ul, 4ul, 0ul, true, eastl::allocator>>::
                                operator[](
                                    (vector<render::Viewport,
                                            eastl::fixed_vector_allocator<24ul, 2ul, 4ul, 0ul, true,
                                                                          eastl::allocator>>*)&local_38->field_432,
                                    0);
                                pMVar27 = (Matrix44T*)local_38->GetScreen();
                                local_38->GetOrigin();
                                SSAOContext::Render(pRVar8, pTVar25, pTVar26, (Viewport*)0, pMVar22, pMVar27);
                            }
                        } else {
                            local_68 = param_1;
                            if (m_SSAOMode == 2) {
                                local_58 = (RenderContext*)pRVar32->GetRenderContext();
                                pLVar10 = (Layout*)local_68->GetSSAOContext();
                                local_a0 = eastl::string::Layout::SSOBeginPtr(pLVar10, ptVar31);
                                puVar11 = (undefined8*)pNVar4->GetRenderTargets();
                                pvVar12 = (vector<render::Texture*,
                                                  eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true,
                                                                                eastl::allocator>>*)(*puVar11)
                                              ->GetColourTargetTextures();
                                puVar11 = (undefined8*)
                                    eastl::vector<render::Texture*,
                                                  eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true,
                                                                                eastl::allocator>>::operator[](pvVar12,
                                                                                                               0);
                                puVar13 = (uint*)(*puVar11)->second();
                                local_168._64_8_ = &pNVar4->field_432;
                                pVVar14 = (Viewport*)eastl::vector<
                                    render::Viewport,
                                    eastl::fixed_vector_allocator<24ul, 2ul, 4ul, 0ul, true, eastl::allocator>>::
                                operator[](
                                    (vector<render::Viewport, eastl::fixed_vector_allocator<24ul, 2ul, 4ul, 0ul, true,
                                                                                            eastl::allocator>>*)
                                        local_168._64_8_,
                                    0);
                                new (&local_1a8) math::Point<float>((float)*puVar13, (float)puVar13[1]);
                                local_78->SetViewportLookupScale(pVVar14, (Vector2T*)&local_1a8);
                                pRVar33 = (RenderContext*)&local_1a8;
                                new (&local_1a8) render::DrawCallState(local_a8);
                                FullscreenQuadPass::QuadBeginRender((DrawCallState*)pRVar33, (RenderContext*)&local_1a8,
                                                                    extraout_RDX_01);
                                pRVar32 = local_50;
                                local_100._0_16_ = local_50->BuildShaderEffectList(local_98._24_8_);
                                pSVar15 = (ShaderManager*)local_68->GetShaderManager();
                                local_b0 = (VertexDeclaration*)&local_48->field_16;
                                EVar37 = (EffectList)255;
                                psVar16 = (shared_ptr<Shader>*)pSVar15->GetShader(20, pRVar32, local_100, local_b0, 0);
                                pRVar19 = (RenderPipelineState*)local_1a8.GetRenderPipelineState();
                                pSVar17 = (Shader*)shared_ptr<Shader>::operator->(psVar16);
                                pSVar18 = (ShaderProgram*)pSVar17->GetProgram();
                                pRVar19->SetShaderProgram(pSVar18);
                                puVar1 = &local_48->field_1712;
                                local_120 = (GeometryBatch*)&local_48->field_112;
                                pVVar20 = (VertexBuffer*)local_120->GetBoneIDMap();
                                puVar1->SetVertexStreamData(local_b0, pVVar20);
                                local_1a8.SetInputAssemblerState(puVar1);
                                pSVar17 = (Shader*)shared_ptr<Shader>::operator->(psVar16);
                                pSVar18 = (ShaderProgram*)pSVar17->GetProgram();
                                shared_ptr<Shader>::operator*(psVar16);
                                EffectManager::SetShaderConstants((DrawCallState*)local_50, (RenderContext*)&local_1a8,
                                                                  (Shader*)local_58, EVar37);
                                SetSharedState(local_48, &local_1a8, extraout_RDX_02, pSVar18,
                                               (SceneViewData*)local_38);
                                pRVar19 = (RenderPipelineState*)local_1a8.GetRenderPipelineState();
                                pHVar21 = (HashedString*)graphics::operator*((graphics*)108);
                                iVar7 = pSVar18->GetConstIndex(pHVar21);
                                pRVar19->SetPSTextureSamplerPair(2, (Texture*)&field_1184, iVar7, (SamplerState*)0,
                                                                 false);
                                pHVar21 = (HashedString*)graphics::operator*((graphics*)99);
                                fVar2 = *(float*)local_a0;
                                pSVar18->SetShaderConstFloat4(pHVar21, fVar2, -1.0 / (fVar2 * fVar2),
                                                              *(float*)(local_a0 + 4), *(float*)(local_a0 + 20));
                                local_48->QuadEndRender(&local_1a8, local_58);
                                this_08 = &local_1a8;
                                this_08->~DrawCallState();
                                if (local_a0[40] != (vector)0) {
                                    this_05 = (MapArea*)this_08->Instance();
                                    lVar9 = this_05->GetOrigin();
                                    if (*(int*)(lVar9 + 84) < 4) {
                                        /* WARNING: Subroutine does not return */
                                        LogAssert("RenderDevice::Instance().GetDeviceCaps().m_MaxTextureOffset >= 4",
                                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/"
                                                  "libs/graphics/runetek7/renderer/renderpasses/SSAOPass.cpp",
                                                  193, (char*)0);
                                    }
                                    uVar28 = local_68->GetRenderTargetsManager();
                                    pRVar8 = (RenderTargets*)shared_ptr<render::RenderTargets>::operator->(local_40);
                                    pvVar12 =
                                        (vector<render::Texture*, eastl::fixed_vector_allocator<
                                                                      8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>*)
                                            pRVar8->GetColourTargetTextures();
                                    puVar11 = (undefined8*)eastl::vector<
                                        render::Texture*,
                                        eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true,
                                                                      eastl::allocator>>::operator[](pvVar12, 0);
                                    puVar11 = (undefined8*)(*puVar11)->second();
                                    local_1a8.m_pInputAssemblerState = (InputAssemblerState*)*puVar11;
                                    local_1a8.m_pRenderPipelineState = (RenderPipelineState*)puVar11[1];
                                    local_1a8.m_pOutputMergerState = (OutputMergerState*)puVar11[2];
                                    local_1a8.field_24._0_8_ = puVar11[3];
                                    local_1a8.field_24._8_8_ = puVar11[4];
                                    local_1a8.field_24._16_8_ = puVar11[5];
                                    local_178 = puVar11[6];
                                    uStack_170 = puVar11[7];
                                    new (local_168) render::Texture::Desc();
                                    new (local_100) render::Texture::Desc();
                                    local_70 = (RenderContext*)CONCAT44(local_70._4_4_, 1);
                                    local_98->Register(uVar28, "SSAOBlur", 3553, (RenderContext*)&local_1a8, 1,
                                                       local_100, 0, 1);
                                    local_100._64_8_ = &local_48->field_1904;
                                    do {
                                        new (&local_1a8) render::DrawCallState(local_a8);
                                        this_09 = local_40;
                                        if ((int)local_70 == 0) {
                                            this_09 = (shared_ptr<render::RenderTargets>*)local_98;
                                        }
                                        pRVar8 = (RenderTargets*)shared_ptr<render::RenderTargets>::operator->(this_09);
                                        pvVar12 =
                                            (vector<render::Texture*, eastl::fixed_vector_allocator<
                                                                          8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>*)
                                                pRVar8->GetColourTargetTextures();
                                        puVar11 = (undefined8*)eastl::vector<
                                            render::Texture*,
                                            eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true,
                                                                          eastl::allocator>>::operator[](pvVar12, 0);
                                        puVar13 = (uint*)(*puVar11)->second();
                                        pVVar14 = (Viewport*)eastl::vector<
                                            render::Viewport, eastl::fixed_vector_allocator<24ul, 2ul, 4ul, 0ul, true,
                                                                                            eastl::allocator>>::
                                        operator[](
                                            (vector<render::Viewport,
                                                    eastl::fixed_vector_allocator<24ul, 2ul, 4ul, 0ul, true,
                                                                                  eastl::allocator>>*)local_168._64_8_,
                                            0);
                                        new (local_100) math::Point<float>((float)*puVar13, (float)puVar13[1]);
                                        local_78->SetViewportLookupScale(pVVar14, local_100);
                                        bVar5 = (int)local_70 == 0;
                                        local_70 = (RenderContext*)CONCAT44(local_70._4_4_, (int)local_70 + -1);
                                        if (bVar5) {
                                            local_98._24_8_->Set(114, 1);
                                            this_06 = (OutputMergerState*)local_1a8.GetOutputMergerState();
                                            pRVar8 = (RenderTargets*)local_40->end();
                                            this_06->SetRenderTargets(pRVar8);
                                            pSVar29 = extraout_RDX_03;
                                        } else {
                                            this_06 = (OutputMergerState*)local_1a8.GetOutputMergerState();
                                            pRVar8 = (RenderTargets*)local_98->end();
                                            this_06->SetRenderTargets(pRVar8);
                                            pSVar29 = extraout_RDX_04;
                                        }
                                        FullscreenQuadPass::QuadBeginRender((DrawCallState*)this_06,
                                                                            (RenderContext*)&local_1a8, pSVar29);
                                        pRVar32 = local_50;
                                        auVar36 = local_50->BuildShaderEffectList(local_98._24_8_);
                                        local_100._0_16_ = auVar36;
                                        pSVar15 = (ShaderManager*)local_68->GetShaderManager();
                                        EVar37 = (EffectList)255;
                                        psVar16 = (shared_ptr<Shader>*)pSVar15->GetShader(19, pRVar32, local_100,
                                                                                          local_b0, 0);
                                        pRVar19 = (RenderPipelineState*)local_1a8.GetRenderPipelineState();
                                        pSVar17 = (Shader*)shared_ptr<Shader>::operator->(psVar16);
                                        pSVar18 = (ShaderProgram*)pSVar17->GetProgram();
                                        pRVar19->SetShaderProgram(pSVar18);
                                        pVVar20 = (VertexBuffer*)local_120->GetBoneIDMap();
                                        local_100._64_8_->SetVertexStreamData(local_b0, pVVar20);
                                        local_1a8.SetInputAssemblerState(local_100._64_8_);
                                        pSVar17 = (Shader*)shared_ptr<Shader>::operator->(psVar16);
                                        pSVar18 = (ShaderProgram*)pSVar17->GetProgram();
                                        shared_ptr<Shader>::operator*(psVar16);
                                        EffectManager::SetShaderConstants((DrawCallState*)local_50,
                                                                          (RenderContext*)&local_1a8, (Shader*)local_58,
                                                                          EVar37);
                                        SetSharedState(local_48, &local_1a8, extraout_RDX_05, pSVar18,
                                                       (SceneViewData*)local_38);
                                        pRVar19 = (RenderPipelineState*)local_1a8.GetRenderPipelineState();
                                        pRVar8 = (RenderTargets*)shared_ptr<render::RenderTargets>::operator->(this_09);
                                        pvVar12 =
                                            (vector<render::Texture*, eastl::fixed_vector_allocator<
                                                                          8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>*)
                                                pRVar8->GetColourTargetTextures();
                                        puVar11 = (undefined8*)eastl::vector<
                                            render::Texture*,
                                            eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true,
                                                                          eastl::allocator>>::operator[](pvVar12, 0);
                                        pTVar25 = (Texture*)*puVar11;
                                        pHVar21 = (HashedString*)graphics::operator*((graphics*)110);
                                        iVar7 = pSVar18->GetConstIndex(pHVar21);
                                        pRVar19->SetPSTextureSamplerPair(2, pTVar25, iVar7, 0, false);
                                        local_38->GetNearFarPlaneDistances(local_118, &local_5c);
                                        pHVar21 = (HashedString*)graphics::operator*((graphics*)104);
                                        pSVar18->SetShaderConstFloat4(pHVar21, local_5c * local_118[0],
                                                                      local_118[0] - local_5c, local_5c,
                                                                      *(float*)(local_a0 + 44));
                                        local_48->QuadEndRender(&local_1a8, local_58);
                                        local_1a8.~DrawCallState();
                                    } while ((int)local_70 == 0);
                                    this_07 = (RenderTargetsManager*)local_68->GetRenderTargetsManager();
                                    this_07->Unregister(local_98);
                                    local_98->~shared_ptr();
                                }
                            } else {
                                local_100._0_16_ = auVar36;
                                local_98._0_8_ = (undefined**)CONCAT44(local_98._4_4_, local_98._0_4_);
                                if (m_SSAOMode == 1) {
                                    local_70 = (RenderContext*)pRVar32->GetRenderContext();
                                    pRVar32 = local_68;
                                    pLVar10 = (Layout*)local_68->GetSSAOContext();
                                    local_58 = (RenderContext*)eastl::string::Layout::SSOBeginPtr(pLVar10, ptVar31);
                                    puVar11 = (undefined8*)pNVar4->GetRenderTargets();
                                    pvVar12 = (vector<render::Texture*,
                                                      eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true,
                                                                                    eastl::allocator>>*)(*puVar11)
                                                  ->GetColourTargetTextures();
                                    puVar11 = (undefined8*)eastl::vector<
                                        render::Texture*,
                                        eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true,
                                                                      eastl::allocator>>::operator[](pvVar12, 0);
                                    puVar13 = (uint*)(*puVar11)->second();
                                    pVVar14 = (Viewport*)eastl::vector<
                                        render::Viewport,
                                        eastl::fixed_vector_allocator<24ul, 2ul, 4ul, 0ul, true, eastl::allocator>>::
                                    operator[](
                                        (vector<render::Viewport,
                                                eastl::fixed_vector_allocator<24ul, 2ul, 4ul, 0ul, true,
                                                                              eastl::allocator>>*)&pNVar4->field_432,
                                        0);
                                    new (&local_1a8) math::Point<float>((float)*puVar13, (float)puVar13[1]);
                                    local_78->SetViewportLookupScale(pVVar14, (Vector2T*)&local_1a8);
                                    pRVar33 = (RenderContext*)&local_1a8;
                                    new (&local_1a8) render::DrawCallState(local_a8);
                                    FullscreenQuadPass::QuadBeginRender((DrawCallState*)pRVar33,
                                                                        (RenderContext*)&local_1a8, extraout_RDX);
                                    pRVar3 = local_50;
                                    local_100._0_16_ = local_50->BuildShaderEffectList(local_98._24_8_);
                                    pSVar15 = (ShaderManager*)pRVar32->GetShaderManager();
                                    puVar1 = &local_48->field_16;
                                    EVar37 = (EffectList)255;
                                    psVar16 = (shared_ptr<Shader>*)pSVar15->GetShader(21, pRVar3, local_100, puVar1, 0);
                                    pSVar17 = (Shader*)shared_ptr<Shader>::operator->(psVar16);
                                    pSVar18 = (ShaderProgram*)pSVar17->GetProgram();
                                    pRVar19 = (RenderPipelineState*)local_1a8.GetRenderPipelineState();
                                    pRVar19->SetShaderProgram(pSVar18);
                                    puVar30 = &local_48->field_1712;
                                    pVVar20 = (VertexBuffer*)(&local_48->field_112)->GetBoneIDMap();
                                    puVar30->SetVertexStreamData(puVar1, pVVar20);
                                    local_1a8.SetInputAssemblerState(puVar30);
                                    shared_ptr<Shader>::operator*(psVar16);
                                    EffectManager::SetShaderConstants((DrawCallState*)local_50,
                                                                      (RenderContext*)&local_1a8, (Shader*)local_70,
                                                                      EVar37);
                                    SetSharedState(local_48, &local_1a8, extraout_RDX_00, pSVar18,
                                                   (SceneViewData*)local_38);
                                    local_38->GetNearFarPlaneDistances(&local_5c, &local_b4);
                                    local_40._0_4_ = local_b4 - local_5c;
                                    pHVar21 = (HashedString*)graphics::operator*((graphics*)100);
                                    pSVar18->SetShaderConstFloat1(pHVar21, local_40._0_4_);
                                    pHVar21 = (HashedString*)graphics::operator*((graphics*)101);
                                    pSVar18->SetShaderConstFloat1(pHVar21, 4.0);
                                    pHVar21 = (HashedString*)graphics::operator*((graphics*)102);
                                    pSVar18->SetShaderConstFloat1(pHVar21, 10.0);
                                    pHVar21 = (HashedString*)graphics::operator*((graphics*)109);
                                    puVar13 = (uint*)this_00->second();
                                    local_40._0_4_ = 1.0 / (float)*puVar13;
                                    lVar9 = this_00->second();
                                    pSVar18->SetShaderConstFloat2(pHVar21, local_40._0_4_,
                                                                  1.0 / (float)*(uint*)(lVar9 + 4));
                                    pRVar19 = (RenderPipelineState*)local_1a8.GetRenderPipelineState();
                                    pHVar21 = (HashedString*)graphics::operator*((graphics*)108);
                                    iVar7 = pSVar18->GetConstIndex(pHVar21);
                                    ptVar31 = (type*)2;
                                    pRVar19->SetPSTextureSamplerPair(2, this_00, iVar7, 0, false);
                                    local_50 = (RT7Core*)CONCAT44(local_50._4_4_,
                                                                  *(undefined4*)(local_58->m_immediateContext + 12));
                                    uVar34._0_1_ = 0;
                                    uVar34._1_3_ = 0;
                                    uVar35 = 0;
                                    new (local_118) ImVec4(1.0, 0.0, -1.0, 1.0);
                                    pNVar4 = local_38;
                                    this_02 = (WorldmapAreaMetadata*)local_38->SSOBeginPtr(ptVar31);
                                    pMVar22 = (Matrix44T*)this_02->GetOrigin();
                                    local_98._0_8_ = math::operator*((Vector4T*)local_118, pMVar22);
                                    local_98._8_4_ = uVar34;
                                    local_98._12_4_ = uVar35;
                                    this_03 =
                                        (vector<render::Viewport, eastl::fixed_vector_allocator<
                                                                      24ul, 2ul, 4ul, 0ul, true, eastl::allocator>>*)
                                            pNVar4->GetStaticChildren();
                                    ptVar31 = (type*)0;
                                    lVar9 = eastl::vector<
                                        render::Viewport,
                                        eastl::fixed_vector_allocator<24ul, 2ul, 4ul, 0ul, true,
                                                                      eastl::allocator>>::operator[](this_03, 0);
                                    local_40._0_4_ = (float)*(int*)(lVar9 + 8) * local_50._0_4_;
                                    pvVar23 = local_98->SSOBeginPtr(ptVar31);
                                    local_40._0_4_ = local_40._0_4_ * *(float*)pvVar23;
                                    pfVar24 = (float*)local_98->qw();
                                    uVar34 = ::abs(local_40._0_4_ / *pfVar24);
                                    local_40 = (shared_ptr<render::RenderTargets>*)CONCAT44(local_40._4_4_, uVar34);
                                    pHVar21 = (HashedString*)graphics::operator*((graphics*)99);
                                    pSVar18->SetShaderConstFloat4(
                                        pHVar21, local_50._0_4_, *(float*)(local_58->m_immediateContext + 20),
                                        *(float*)(local_58->m_immediateContext + 16),
                                        local_40._0_4_ * *(float*)(local_58->m_immediateContext + 8));
                                    local_48->QuadEndRender(&local_1a8, local_70);
                                    local_1a8.~DrawCallState();
                                }
                            }
                        }
                        pNVar4 = local_38;
                        puVar11 = (undefined8*)local_38->GetRenderTargets();
                        pvVar12 = (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true,
                                                                                          eastl::allocator>>*)(*puVar11)
                                      ->GetColourTargetTextures();
                        puVar11 = (undefined8*)eastl::vector<
                            render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true,
                                                                            eastl::allocator>>::operator[](pvVar12, 0);
                        puVar13 = (uint*)(*puVar11)->second();
                        pVVar14 = (Viewport*)
                            eastl::vector<render::Viewport,
                                          eastl::fixed_vector_allocator<24ul, 2ul, 4ul, 0ul, true, eastl::allocator>>::
                            operator[](
                                (vector<render::Viewport, eastl::fixed_vector_allocator<24ul, 2ul, 4ul, 0ul, true,
                                                                                        eastl::allocator>>*)&pNVar4
                                    ->field_432,
                                0);
                        new (&local_1a8) math::Point<float>((float)*puVar13, (float)puVar13[1]);
                        local_78->SetViewportLookupScale(pVVar14, (Vector2T*)&local_1a8);
                        return;
                    }
                }
                ClearSSAORT((RT7Core*)this);
                /* WARNING: Subroutine does not return */
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                "runetek7/renderer/renderpasses/SSAOPass.cpp",
                                85, (char*)0);
            }
            ClearSSAORT((RT7Core*)this);
        }
    }

    // 0x1007ad420, 224 bytes, placed by class name and debug map
    // SSAOPass::ClearSSAORT(RT7Core&)
    void SSAOPass::ClearSSAORT(RT7Core* param_1) {
        RenderContext* pRVar2;
        RenderContext* this;
        RenderTargets* pRVar3;
        long lVar4;
        RT7Core* this_00;
        RT7Core* pRVar5;
        RenderTargetsSaveRestore local_40;
        ImVec4 local_28[16];

        this_00 = (RT7Core*)(param_1->m_postProcessManager + 200);
        pRVar5 = this_00;
        if (!this_00->operator_cast_to_bool()) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_SSAORT",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "renderer/renderpasses/SSAOPass.cpp",
                      280, (char*)0);
        }
        pRVar2 = (RenderContext*)pRVar5->GetRenderContext();
        pRVar5 = (RT7Core*)&local_40;
        new (pRVar5) render::RenderTargetsSaveRestore(pRVar2);
        this = (RenderContext*)pRVar5->GetRenderContext();
        ImVec4::ImVec4(local_28, 1.0, 1.0, 1.0, 1.0);
        pRVar3 = (RenderTargets*)this_00->end();
        pRVar2 = this;
        SetRenderTargets(pRVar3);
        lVar4 = pRVar2->Instance();
        SetBlendState((BlendState*)(lVar4 + 1524));
        ClearRenderTargets(local_28, 1);
        local_40.~RenderTargetsSaveRestore();
    }

    // 0x1007ad500, 384 bytes, placed by class name and debug map
    // SSAOPass::SetSharedState(render::DrawCallState&, render::RenderContext&, render::ShaderProgram const&, SceneViewData const&)
    void SSAOPass::SetSharedState(DrawCallState* param_1, RenderContext* param_2, ShaderProgram* param_3,
                                  SceneViewData* param_4) {
        Texture* pTVar1;
        HashedString* pHVar2;
        Matrix44T* pMVar3;
        RenderPipelineState* pRVar4;
        RenderTargets* pRVar5;
        vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>* this_00;
        int iVar6;
        undefined8* puVar7;
        Matrix44T local_78;
        undefined8 uStack_40;

        pHVar2 = (HashedString*)graphics::operator*((graphics*)9);
        pMVar3 = (Matrix44T*)param_4->GetOrigin();
        param_3->SetShaderConstMatrix4(pHVar2, 1, pMVar3, 1);
        pHVar2 = (HashedString*)graphics::operator*((graphics*)4);
        param_3->SetShaderConstMatrix4(pHVar2, 1, (Matrix44T*)&field_560, 1);
        puVar7 = (undefined8*)param_4->GetOrigin();
        local_78._0_8_ = *puVar7;
        local_78._8_8_ = puVar7[1];
        local_78._16_8_ = puVar7[2];
        local_78._24_8_ = puVar7[3];
        local_78._32_8_ = puVar7[4];
        local_78._40_8_ = puVar7[5];
        local_78._48_8_ = puVar7[6];
        uStack_40 = puVar7[7];
        local_78.Invert(0);
        pHVar2 = (HashedString*)graphics::operator*((graphics*)11);
        param_3->SetShaderConstMatrix4(pHVar2, 1, &local_78, 1);
        pRVar4 = (RenderPipelineState*)param_1->GetRenderPipelineState();
        pRVar5 = (RenderTargets*)shared_ptr<render::RenderTargets>::operator->(
            (shared_ptr<render::RenderTargets>*)field_632);
        this_00 = (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>*)
                      pRVar5->GetColourTargetTextures();
        puVar7 = (undefined8*)eastl::vector<
            render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>::back(this_00);
        pTVar1 = (Texture*)*puVar7;
        pHVar2 = (HashedString*)graphics::operator*((graphics*)106);
        iVar6 = param_3->GetConstIndex(pHVar2);
        pRVar4->SetPSTextureSamplerPair(0, pTVar1, iVar6, 0, true);
        pRVar4 = (RenderPipelineState*)param_1->GetRenderPipelineState();
        pRVar5 = (RenderTargets*)shared_ptr<render::RenderTargets>::operator->(
            (shared_ptr<render::RenderTargets>*)field_632);
        pTVar1 = (Texture*)pRVar5->GetDepthStencilTargetTexture();
        pHVar2 = (HashedString*)graphics::operator*((graphics*)107);
        iVar6 = param_3->GetConstIndex(pHVar2);
        pRVar4->SetPSTextureSamplerPair(1, pTVar1, iVar6, 0, false);
    }

    // 0x1007ad6d0, 800 bytes, placed by class name and debug map
    // SSAOPass::CreateRenderingResources()
    void SSAOPass::CreateRenderingResources() {
        Random* this_00;
        undefined1* puVar1;
        byte bVar2;
        byte bVar3;
        Layout* pLVar4;
        vector* pvVar5;
        undefined4* puVar6;
        uchar* puVar7;
        long lVar8;
        type* ptVar9;
        type* ptVar10;
        Singleton<render::BuiltinStates>* pSVar11;
        array<math::Vector3T<float>, 16ul> local_200[192];
        array<math::Vector2T<float>, 16ul> local_140[128];
        ResourceDataT<unsigned char const> local_c0[24];
        ResourceDataT<unsigned char const> local_a8[24];
        undefined1 local_90[72];
        undefined4 local_48;
        undefined4 local_44;
        SSAOPass* local_40;
        float local_34;

        local_40 = this;
        CreateRenderingResources();
        this_00 = (Random*)(local_90 + 64);
        math::Random::Random(this_00, 123456789, 31415821);
        new (local_90) render::Texture::Desc();
        local_90._0_4_ = 4;
        local_90._4_4_ = 4;
        local_90._12_4_ = 2;
        local_90._36_4_ = 0;
        local_90._24_4_ = 0;
        local_90[32] = 0;
        std::array<math::Vector3T<float>, 16ul>::array(local_200);
        ptVar9 = (type*)0;
        do {
            local_34 = (float)this_00->FRand(1.0);
            local_48 = this_00->FRand(1.0);
            local_34 = local_34 * 0.7853982;
            local_44 = ::cos(local_34);
            ptVar10 = ptVar9;
            pLVar4 = (Layout*)std::array<math::Vector3T<float>, 16ul>::operator[](local_200, (ulong)ptVar9);
            pvVar5 = eastl::string::Layout::SSOBeginPtr(pLVar4, ptVar10);
            *(undefined4*)pvVar5 = local_44;
            local_34 = (float)::sin(local_34);
            puVar6 = (undefined4*)pLVar4->y();
            *puVar6 = local_34;
            puVar6 = (undefined4*)pLVar4->second();
            *puVar6 = local_48;
            ptVar9 = ptVar9 + 1;
        } while (ptVar9 != (type*)16);
        puVar7 = (uchar*)std::array<math::Vector3T<float>, 16ul>::operator[](local_200, 0);
        render::ResourceDataT<unsigned char const>::ResourceDataT(local_c0, puVar7, 0, 0, false);
        puVar1 = &local_40->field_1184;
        pSVar11 = (Singleton<render::BuiltinStates>*)puVar1;
        bVar2 = puVar1->Create(local_90, local_c0, 0);
        lVar8 = pSVar11->Instance();
        puVar1->SetSamplerState((SamplerState*)(lVar8 + 144), true);
        local_90._0_4_ = 4;
        local_90._4_4_ = 4;
        local_90._12_4_ = 5;
        local_90._36_4_ = 0;
        local_90._24_4_ = 0;
        local_90[32] = 0;
        std::array<math::Vector2T<float>, 16ul>::array(local_140);
        ptVar9 = (type*)0;
        do {
            local_34 = (float)((local_90 + 64))->FRand(1.0);
            ptVar10 = ptVar9;
            pLVar4 = (Layout*)std::array<math::Vector2T<float>, 16ul>::operator[](local_140, (ulong)ptVar9);
            pvVar5 = eastl::string::Layout::SSOBeginPtr(pLVar4, ptVar10);
            *(float*)pvVar5 = local_34;
            local_34 = (float)((local_90 + 64))->FRand(1.0);
            puVar6 = (undefined4*)pLVar4->y();
            *puVar6 = local_34;
            ptVar9 = ptVar9 + 1;
        } while (ptVar9 != (type*)16);
        puVar7 = (uchar*)std::array<math::Vector2T<float>, 16ul>::operator[](local_140, 0);
        render::ResourceDataT<unsigned char const>::ResourceDataT(local_a8, puVar7, 0, 0, false);
        puVar1 = &local_40->field_672;
        pSVar11 = (Singleton<render::BuiltinStates>*)puVar1;
        bVar3 = puVar1->Create(local_90, local_a8, 0);
        lVar8 = pSVar11->Instance();
        puVar1->SetSamplerState((SamplerState*)(lVar8 + 144), true);
        if ((bVar2 & bVar3) == 0) {
            (*(code*)local_40->field_0[9])();
            /* WARNING: Subroutine does not return */
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                            "renderer/renderpasses/SSAOPass.cpp",
                            363, "Failed to set up SSAO pass.");
        }
        local_a8->~ResourceDataT();
        local_c0->~ResourceDataT();
    }

    // 0x1007ada50, 80 bytes, placed by class name and debug map
    // SSAOPass::DestroyRenderingResources()
    void SSAOPass::DestroyRenderingResources() {
        DestroyRenderingResources();
        (&field_1184)->Destroy();
        (&field_672)->Destroy();
        (&field_1712)->Destroy();
        (&field_1904)->Destroy();
    }

    // 0x1007adaa0, 256 bytes, placed by class name and debug map
    // SSAOPass::RenderDebug(EffectManager&, DrawableQueue&)
    void SSAOPass::RenderDebug(EffectManager* param_1, DrawableQueue* param_2) {
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
                    (shared_ptr<render::RenderTargets>*)field_648);
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
                new (local_38) oldscape::sidebars::SideBarData(-65536, 0);
                (**(code**)(*plVar3 + 112))(plVar3, uVar1, local_58, local_48, local_40, 0, 0, 0,
                                            (SideBarData*)local_38);
            }
        }
    }

    // 0x1007ae2f0: the linker folded this into DepthDownsamplePass::SetDepthTexture(render::Texture const*), which has identical code
    SSAOPass::SetSSAOContext(SSAOContext*);

    // 0x1007c9050, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.81
    void ___cxx_global_var_init_81() {
        new (&SSAOPass::m_SSAOModeNiceNames) StringEnum((StringEnumEntry*)&SSAOPass::m_SSAOModeNiceNames__, 4);
        ___cxa_atexit(StringEnum::~StringEnum, &SSAOPass::m_SSAOModeNiceNames, 4294967296);
    }

} // namespace jag::graphics

// 0x1007ad680, 16 bytes, placed by neighbouring functions
// abs(float)
ulong abs(float param_1) {
    undefined4 in_XMM0_Db;

    return CONCAT44(in_XMM0_Db, param_1) & 9223372034707292159;
}

// 0x1007ada00, 16 bytes, placed by neighbouring functions
// cos(float)
void cos(float param_1) {
    _cosf();
}

// 0x1007ada20, 16 bytes, placed by neighbouring functions
// sin(float)
void sin(float param_1) {
    _sinf();
}
