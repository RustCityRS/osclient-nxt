// libs/graphics/runetek7/renderer/renderpasses/SSAOPass.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

#include "SSAOPass.h"

namespace jag::graphics {
    // 0x100f437a0
    int32_t SSAOPass::m_SSAOModeNiceNames__[16] = {
        0, 0, 14512292, 1, 1, 0, 14638297, 1, 2, 0, 14754932, 1, 3, 0, 14638305, 1,
    };

    // 0x100f437e0
    int32_t SSAOPass::m_SSAOMode = 1;

    // 0x1039bd150, set at startup by ___cxx_global_var_init.81
    StringEnum SSAOPass::m_SSAOModeNiceNames = StringEnum((StringEnumEntry*)&SSAOPass::m_SSAOModeNiceNames__, 4);

    // 0x1007ac4a0
    SSAOPass::SSAOPass()
        : FullscreenQuadPass(12), m_pSSAOContext(nullptr), field_672("Texture2D"), field_1184("Texture2D") {
        uint8_t* this_00 = &field_1696;
        new (this_00) EffectList();
        new (field_1712) render::InputAssemblerState();
        new (field_1904) render::InputAssemblerState();
        this_00->Add(89);
        this_00->Add(114);
        this_00->Add(106);
        CreateRenderingResources();
    }

    // 0x1007ac610
    SSAOPass::~SSAOPass() {
        field_1904->~InputAssemblerState();
        field_1712->~InputAssemblerState();
        field_1184.~Texture2D();
        field_672.~Texture2D();
        field_648->~shared_ptr();
        field_632->~shared_ptr();
    }

    // 0x1007ac6b0
    uint64_t SSAOPass::BeginPass(render::DrawCallState& drawCallState, render::RenderContext& renderContext,
                                 EffectManager& effectManager, const SceneViewData& sceneViewData,
                                 const DrawableQueue& drawableQueue) {
        RenderTargets* renderTargets;

        bool cVar1 = sceneViewData.field_432.empty();
        if (cVar1) {
            LogAssert("!viewData.m_renderTargetViewports.empty()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "renderer/renderpasses/SSAOPass.cpp",
                      43, nullptr);
        }
        cVar1 = field_648->operator_cast_to_bool();
        if ((!cVar1) || (cVar1 = field_632->operator_cast_to_bool(), !cVar1)) {
            return 0;
        }
        auto viewport = sceneViewData.field_432.back();
        auto pOVar2 = drawCallState.GetOutputMergerState();
        pOVar2->SetViewports(viewport, 1);
        pOVar2 = drawCallState.GetOutputMergerState();
        renderTargets = (RenderTargets*)field_648->end();
        pOVar2->SetRenderTargets(renderTargets);
        return 1;
    }

    // 0x1007ac770
    void SSAOPass::Render(RT7Core& rt7Core, const render::DrawCallState& drawCallState, EffectManager& effectManager,
                          const SceneViewData& sceneViewData, DrawableQueue& drawableQueue) {
        uint8_t* puVar1;
        uint8_t* this_00;
        float arg2;
        Texture* pTVar2;
        RT7Core* effectList;
        NXTPixToolkit* pNVar3;
        int iVar5;
        RenderTargets* pRVar6;
        long lVar7;
        Layout* pLVar8;
        uint64_t* puVar9;
        vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>* pvVar10;
        unsigned int* puVar11;
        Viewport* pVVar12;
        ShaderManager* pSVar13;
        shared_ptr<Shader>* psVar14;
        Shader* pSVar15;
        ShaderProgram* pSVar16;
        RenderPipelineState* pRVar17;
        VertexBuffer* pVVar18;
        HashedString* pHVar19;
        WorldmapAreaMetadata* this_02;
        Matrix44T<float>* pMVar20;
        vector<render::Viewport, eastl::fixed_vector_allocator<24ul, _2ul, _4ul, _0ul, true> _>* this_03;
        float* pfVar21;
        RenderTargets* this_04;
        Texture* texture1;
        Matrix44T<float>* matrix442;
        char* str;
        FullscreenQuadPass* pFVar22;
        RenderContext* renderContext;
        RenderContext* renderContext_00;
        RenderContext* renderContext_01;
        RenderContext* renderContext_02;
        RenderContext* extraout_RDX;
        RenderContext* extraout_RDX_00;
        RenderContext* renderContext_03;
        RenderContext* renderContext_04;
        uint8_t* puVar24;
        RT7Core* pRVar25;
        shared_ptr<render::RenderTargets>* this_08;
        bool bVar26;
        uint32_t uVar27;
        uint8_t auVar29[16];
        EffectList EVar30;
        DrawCallState local_1a8;
        uint64_t local_178;
        uint64_t uStack_170;
        uint8_t local_168[72];
        GeometryBatch* local_120;
        float local_118[6];
        uint8_t local_100[76];
        float local_b4;
        VertexDeclaration* local_b0;
        SceneViewData* local_a0;
        uint8_t local_98[32];
        FogEffect* local_78;
        RenderContext* local_70;
        float local_5c;
        RenderContext* local_58;
        RT7Core* local_50;
        SSAOPass* local_48;

        shared_ptr<render::RenderTargets>* local_40 = (shared_ptr<render::RenderTargets>*)field_648;
        SceneViewData* pSVar23 = (SceneViewData*)effectManager;
        if (local_40->operator_cast_to_bool()) {
            puVar1 = field_632;
            if (puVar1->operator_cast_to_bool()) {
                local_50 = (RT7Core*)effectManager;
                if (field_1184.IsCreated()) {
                    this_00 = &field_672;
                    if (this_00->IsCreated()) {
                        puVar24 = &field_1696;
                        local_48 = this;
                        pRVar6 = (RenderTargets*)(*puVar1).operator->();
                        lVar7 = ((compressed_pair_imp<eastl::basic_string<char, eastl::fixed_vector_allocator<
                                                                                    1ul, 64ul, 1ul, 0ul, true>>::Layout,
                                                      eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true>, 0>*)
                                     pRVar6->GetDepthStencilTargetTexture())
                                    ->second();
                        puVar24->Set(89, 1 < *(unsigned int*)(lVar7 + 16));
                        local_98._24_8_ = puVar24;
                        puVar24->Set(114, false);
                        pRVar25 = local_50;
                        local_78 = local_50->GetEffect<SunlightDirectLighting>(106);
                        pNVar3 = (NXTPixToolkit*)sceneViewData;
                        auVar29._8_8_ = local_100._8_8_;
                        auVar29._0_8_ = local_100._0_8_;
                        if (m_SSAOMode == 3) {
                            pTVar2 = local_48->m_pSSAOContext;
                            if (pTVar2 != nullptr) {
                                pRVar6 = (RenderTargets*)**local_40;
                                this_04 = (RenderTargets*)(*puVar1).operator->();
                                texture1 = (Texture*)this_04->GetDepthStencilTargetTexture();
                                pVVar12 = (Viewport*)((NXTPixToolkit*)sceneViewData)->field_432[0];
                                pMVar20 = (Matrix44T<float>*)((NXTPixToolkit*)sceneViewData)->GetScreen();
                                matrix442 = (Matrix44T<float>*)((NXTPixToolkit*)sceneViewData)->GetOrigin();
                                pTVar2->Render(*pRVar6, texture1, nullptr, *pVVar12, *pMVar20, *matrix442);
                            }
                        } else {
                            if (m_SSAOMode == 2) {
                                local_58 = (RenderContext*)pRVar25->GetRenderContext();
                                pLVar8 = (Layout*)rt7Core.GetSSAOContext();
                                local_a0 = (SceneViewData*)pLVar8->SSOBeginPtr();
                                puVar9 = (uint64_t*)pNVar3->GetRenderTargets();
                                pvVar10 = (vector<render::Texture*,
                                                  eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>*)(*puVar9)
                                              ->GetColourTargetTextures();
                                puVar9 = (uint64_t*)(*pvVar10)[0];
                                puVar11 = (unsigned int*)(*puVar9)->second();
                                local_168._64_8_ = &pNVar3->field_432;
                                pVVar12 = (Viewport*)(*local_168._64_8_)[0];
                                local_1a8 = math::Point((float)*puVar11, (float)puVar11[1]);
                                local_78->SetViewportLookupScale(*pVVar12, local_1a8);
                                pFVar22 = (FullscreenQuadPass*)&local_1a8;
                                local_1a8 = render::DrawCallState(drawCallState);
                                pFVar22->QuadBeginRender(local_1a8, *renderContext_01, *pSVar23);
                                pRVar25 = local_50;
                                local_100._0_16_ = local_50->BuildShaderEffectList(*local_98._24_8_);
                                pSVar13 = rt7Core.GetShaderManager();
                                local_b0 = (VertexDeclaration*)&local_48->field_16;
                                EVar30 = (EffectList)255;
                                psVar14 = (shared_ptr<Shader>*)ShaderManager::GetShader(
                                    (ShaderType)pSVar13, *20, *pRVar25, *local_100, (unsigned char)local_b0, 0);
                                pRVar17 = (RenderPipelineState*)local_1a8.GetRenderPipelineState();
                                pSVar15 = (Shader*)(*psVar14).operator->();
                                pSVar16 = pSVar15->GetProgram();
                                pRVar17->SetShaderProgram(pSVar16);
                                puVar1 = local_48->field_1712;
                                local_120 = (GeometryBatch*)&local_48->field_112;
                                pVVar18 = (VertexBuffer*)local_120->GetBoneIDMap();
                                puVar1->SetVertexStreamData(local_b0, pVVar18);
                                local_1a8.SetInputAssemblerState(puVar1);
                                pSVar15 = (Shader*)(*psVar14).operator->();
                                pSVar16 = pSVar15->GetProgram();
                                pSVar15 = (Shader*)**psVar14;
                                local_50->SetShaderConstants(local_1a8, *local_58, *pSVar15, EVar30);
                                SetSharedState(local_48, &local_1a8, renderContext_02, pSVar16,
                                               (SceneViewData*)(NXTPixToolkit*)sceneViewData);
                                pRVar17 = (RenderPipelineState*)local_1a8.GetRenderPipelineState();
                                pHVar19 = (HashedString*)graphics::operator*(108);
                                iVar5 = pSVar16->GetConstIndex(*pHVar19);
                                pRVar17->SetPSTextureSamplerPair(2, &field_1184, iVar5, nullptr, false);
                                pHVar19 = (HashedString*)graphics::operator*(99);
                                arg2 = *(float*)local_a0;
                                pSVar16->SetShaderConstFloat4(pHVar19, arg2, -1.0 / (arg2 * arg2),
                                                              *(float*)&local_a0->field_4,
                                                              *(float*)&local_a0->field_20);
                                local_48->QuadEndRender(local_1a8, *local_58);
                                if (local_a0->field_40 != '\0') {
                                    lVar7 = ((MapArea*)local_1a8.Instance())->GetOrigin();
                                    if (*(int*)(lVar7 + 84) < 4) {
                                        LogAssert("RenderDevice::Instance().GetDeviceCaps().m_MaxTextureOffset >= 4",
                                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/"
                                                  "libs/graphics/runetek7/renderer/renderpasses/SSAOPass.cpp",
                                                  193, nullptr);
                                    }
                                    str = (char*)rt7Core.GetRenderTargetsManager();
                                    pRVar6 = (RenderTargets*)(*local_40).operator->();
                                    pvVar10 = (vector<render::Texture*,
                                                      eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>*)
                                                  pRVar6->GetColourTargetTextures();
                                    puVar9 = (uint64_t*)(*pvVar10)[0];
                                    puVar9 = (uint64_t*)(*puVar9)->second();
                                    local_1a8.m_pInputAssemblerState = (InputAssemblerState*)*puVar9;
                                    local_1a8.m_pRenderPipelineState = &puVar9[1];
                                    local_1a8.m_pOutputMergerState = &puVar9[2];
                                    local_1a8.field_24._0_8_ = puVar9[3];
                                    local_1a8.field_24._8_8_ = puVar9[4];
                                    local_1a8.field_24._16_8_ = puVar9[5];
                                    local_178 = puVar9[6];
                                    uStack_170 = puVar9[7];
                                    new (local_168) render::Texture::Desc();
                                    new (local_100) render::Texture::Desc();
                                    local_70 = (RenderContext*)(((uint64_t)local_70._4_4_ << 32) | (uint32_t)1);
                                    pSVar23 = (SceneViewData*)3553;
                                    local_98->Register(str, 14638434, *3553, (int)&local_1a8, DAT_00000001,
                                                       (unsigned int)(Desc*)local_100, false);
                                    local_100._64_8_ = local_48->field_1904;
                                    do {
                                        local_1a8 = render::DrawCallState(drawCallState);
                                        this_08 = local_40;
                                        if ((int)local_70 == 0) {
                                            this_08 = (shared_ptr<render::RenderTargets>*)local_98;
                                        }
                                        pRVar6 = (RenderTargets*)(*this_08).operator->();
                                        pvVar10 = (vector<render::Texture*,
                                                          eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>*)
                                                      pRVar6->GetColourTargetTextures();
                                        puVar9 = (uint64_t*)(*pvVar10)[0];
                                        puVar11 = (unsigned int*)(*puVar9)->second();
                                        pVVar12 = (Viewport*)(*local_168._64_8_)[0];
                                        new (local_100) math::Point((float)*puVar11, (float)puVar11[1]);
                                        local_78->SetViewportLookupScale(*pVVar12, *local_100);
                                        bVar26 = (int)local_70 == 0;
                                        local_70 = (RenderContext*)(((uint64_t)local_70._4_4_ << 32) |
                                                                    (uint32_t)((int)local_70 - 1));
                                        if (bVar26) {
                                            local_98._24_8_->Set(114, true);
                                            pFVar22 = (FullscreenQuadPass*)local_1a8.GetOutputMergerState();
                                            pRVar6 = (RenderTargets*)local_40->end();
                                            pFVar22->SetRenderTargets(pRVar6);
                                            renderContext_03 = extraout_RDX;
                                        } else {
                                            pFVar22 = (FullscreenQuadPass*)local_1a8.GetOutputMergerState();
                                            pRVar6 = (RenderTargets*)local_98->end();
                                            pFVar22->SetRenderTargets(pRVar6);
                                            renderContext_03 = extraout_RDX_00;
                                        }
                                        pFVar22->QuadBeginRender(local_1a8, *renderContext_03, *pSVar23);
                                        pRVar25 = local_50;
                                        auVar29 = local_50->BuildShaderEffectList(*local_98._24_8_);
                                        local_100._0_16_ = auVar29;
                                        pSVar13 = rt7Core.GetShaderManager();
                                        EVar30 = (EffectList)255;
                                        psVar14 = (shared_ptr<Shader>*)ShaderManager::GetShader(
                                            (ShaderType)pSVar13, *19, *pRVar25, *local_100, (unsigned char)local_b0, 0);
                                        pRVar17 = (RenderPipelineState*)local_1a8.GetRenderPipelineState();
                                        pSVar15 = (Shader*)(*psVar14).operator->();
                                        pSVar16 = pSVar15->GetProgram();
                                        pRVar17->SetShaderProgram(pSVar16);
                                        pVVar18 = (VertexBuffer*)local_120->GetBoneIDMap();
                                        local_100._64_8_->SetVertexStreamData(local_b0, pVVar18);
                                        local_1a8.SetInputAssemblerState(local_100._64_8_);
                                        pSVar15 = (Shader*)(*psVar14).operator->();
                                        pSVar16 = pSVar15->GetProgram();
                                        pSVar15 = (Shader*)**psVar14;
                                        local_50->SetShaderConstants(local_1a8, *local_58, *pSVar15, EVar30);
                                        SetSharedState(local_48, &local_1a8, renderContext_04, pSVar16,
                                                       (SceneViewData*)(NXTPixToolkit*)sceneViewData);
                                        pRVar17 = (RenderPipelineState*)local_1a8.GetRenderPipelineState();
                                        pRVar6 = (RenderTargets*)(*this_08).operator->();
                                        pvVar10 = (vector<render::Texture*,
                                                          eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>*)
                                                      pRVar6->GetColourTargetTextures();
                                        puVar9 = (uint64_t*)(*pvVar10)[0];
                                        pTVar2 = (Texture*)*puVar9;
                                        pHVar19 = (HashedString*)graphics::operator*(110);
                                        iVar5 = pSVar16->GetConstIndex(*pHVar19);
                                        pRVar17->SetPSTextureSamplerPair(2, pTVar2, iVar5, nullptr, false);
                                        ((NXTPixToolkit*)sceneViewData)->GetNearFarPlaneDistances(*local_118, local_5c);
                                        pHVar19 = (HashedString*)graphics::operator*(104);
                                        pSVar23 = local_a0;
                                        pSVar16->SetShaderConstFloat4(pHVar19, local_5c * local_118[0],
                                                                      local_118[0] - local_5c, local_5c,
                                                                      *(float*)&local_a0->field_44);
                                        local_48->QuadEndRender(local_1a8, *local_58);
                                    } while ((int)local_70 == 0);
                                    ((RenderTargetsManager*)rt7Core.GetRenderTargetsManager())->Unregister(*local_98);
                                }
                            } else {
                                local_100._0_16_ = auVar29;
                                local_98._0_8_ = (RenderTargetsManager_vtbl*)(((uint64_t)local_98._4_4_ << 32) |
                                                                              (uint32_t)local_98._0_4_);
                                if (m_SSAOMode == 1) {
                                    local_70 = (RenderContext*)pRVar25->GetRenderContext();
                                    pRVar25 = rt7Core;
                                    pLVar8 = (Layout*)rt7Core.GetSSAOContext();
                                    local_58 = (RenderContext*)pLVar8->SSOBeginPtr();
                                    puVar9 = (uint64_t*)pNVar3->GetRenderTargets();
                                    pvVar10 =
                                        (vector<render::Texture*,
                                                eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>*)(*puVar9)
                                            ->GetColourTargetTextures();
                                    puVar9 = (uint64_t*)(*pvVar10)[0];
                                    puVar11 = (unsigned int*)(*puVar9)->second();
                                    pVVar12 = &pNVar3->field_432[0];
                                    local_1a8 = math::Point((float)*puVar11, (float)puVar11[1]);
                                    local_78->SetViewportLookupScale(*pVVar12, local_1a8);
                                    pFVar22 = (FullscreenQuadPass*)&local_1a8;
                                    local_1a8 = render::DrawCallState(drawCallState);
                                    pFVar22->QuadBeginRender(local_1a8, *renderContext, *pSVar23);
                                    effectList = local_50;
                                    local_100._0_16_ = local_50->BuildShaderEffectList(*local_98._24_8_);
                                    pSVar13 = pRVar25->GetShaderManager();
                                    puVar1 = &local_48->field_16;
                                    EVar30 = (EffectList)255;
                                    psVar14 = (shared_ptr<Shader>*)ShaderManager::GetShader(
                                        (ShaderType)pSVar13, *21, *effectList, *local_100, (unsigned char)puVar1, 0);
                                    pSVar15 = (Shader*)(*psVar14).operator->();
                                    pSVar16 = pSVar15->GetProgram();
                                    pRVar17 = (RenderPipelineState*)local_1a8.GetRenderPipelineState();
                                    pRVar17->SetShaderProgram(pSVar16);
                                    puVar24 = local_48->field_1712;
                                    pVVar18 = (VertexBuffer*)local_48->field_112.GetBoneIDMap();
                                    puVar24->SetVertexStreamData(puVar1, pVVar18);
                                    local_1a8.SetInputAssemblerState(puVar24);
                                    pSVar15 = (Shader*)**psVar14;
                                    local_50->SetShaderConstants(local_1a8, *local_70, *pSVar15, EVar30);
                                    SetSharedState(local_48, &local_1a8, renderContext_00, pSVar16,
                                                   (SceneViewData*)(NXTPixToolkit*)sceneViewData);
                                    ((NXTPixToolkit*)sceneViewData)->GetNearFarPlaneDistances(local_5c, local_b4);
                                    local_40._0_4_ = local_b4 - local_5c;
                                    pHVar19 = (HashedString*)graphics::operator*(100);
                                    pSVar16->SetShaderConstFloat1(pHVar19, local_40._0_4_);
                                    pHVar19 = (HashedString*)graphics::operator*(101);
                                    pSVar16->SetShaderConstFloat1(pHVar19, 4.0);
                                    pHVar19 = (HashedString*)graphics::operator*(102);
                                    pSVar16->SetShaderConstFloat1(pHVar19, 10.0);
                                    pHVar19 = (HashedString*)graphics::operator*(109);
                                    puVar11 = (unsigned int*)this_00->second();
                                    local_40._0_4_ = 1.0 / (float)*puVar11;
                                    lVar7 = this_00->second();
                                    pSVar16->SetShaderConstFloat2(pHVar19, local_40._0_4_,
                                                                  1.0 / (float)*(unsigned int*)(lVar7 + 4));
                                    pRVar17 = (RenderPipelineState*)local_1a8.GetRenderPipelineState();
                                    pHVar19 = (HashedString*)graphics::operator*(108);
                                    iVar5 = pSVar16->GetConstIndex(*pHVar19);
                                    pRVar17->SetPSTextureSamplerPair(2, this_00, iVar5, nullptr, false);
                                    local_50 = (RT7Core*)(((uint64_t)local_50._4_4_ << 32) |
                                                          (uint32_t)(*(uint32_t*)(local_58->m_immediateContext + 12)));
                                    uVar27._0_1_ = 0;
                                    uVar27._1_3_ = 0;
                                    new (local_118) ImVec4(1.0, 0.0, -1.0, 1.0);
                                    pNVar3 = (NXTPixToolkit*)sceneViewData;
                                    this_02 = (WorldmapAreaMetadata*)((NXTPixToolkit*)sceneViewData)->SSOBeginPtr();
                                    pMVar20 = (Matrix44T<float>*)this_02->GetOrigin();
                                    local_98._0_8_ = *local_118 * *pMVar20;
                                    local_98._8_4_ = uVar27;
                                    local_98._12_4_ = 0;
                                    this_03 = pNVar3->GetStaticChildren();
                                    lVar7 = (*this_03)[0];
                                    local_40._0_4_ = (float)*(int*)(lVar7 + 8) * local_50._0_4_;
                                    pfVar21 = (float*)local_98->SSOBeginPtr();
                                    local_40._0_4_ = local_40._0_4_ * *pfVar21;
                                    pfVar21 = (float*)local_98->qw();
                                    uVar27 = ::abs(local_40._0_4_ / *pfVar21);
                                    local_40 = (shared_ptr<render::RenderTargets>*)(((uint64_t)local_40._4_4_ << 32) |
                                                                                    (uint32_t)uVar27);
                                    pHVar19 = (HashedString*)graphics::operator*(99);
                                    pSVar16->SetShaderConstFloat4(
                                        pHVar19, local_50._0_4_, *(float*)(local_58->m_immediateContext + 20),
                                        *(float*)(local_58->m_immediateContext + 16),
                                        local_40._0_4_ * *(float*)(local_58->m_immediateContext + 8));
                                    local_48->QuadEndRender(local_1a8, *local_70);
                                }
                            }
                        }
                        pNVar3 = (NXTPixToolkit*)sceneViewData;
                        puVar9 = (uint64_t*)((NXTPixToolkit*)sceneViewData)->GetRenderTargets();
                        pvVar10 = (vector<render::Texture*,
                                          eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>*)(*puVar9)
                                      ->GetColourTargetTextures();
                        puVar9 = (uint64_t*)(*pvVar10)[0];
                        puVar11 = (unsigned int*)(*puVar9)->second();
                        pVVar12 = &pNVar3->field_432[0];
                        local_1a8 = math::Point((float)*puVar11, (float)puVar11[1]);
                        local_78->SetViewportLookupScale(*pVVar12, local_1a8);
                        return;
                    }
                }
                ClearSSAORT((RT7Core*)this);
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                "runetek7/renderer/renderpasses/SSAOPass.cpp",
                                85, nullptr);
            }
            ClearSSAORT((RT7Core*)this);
        }
    }

    // 0x1007ad420
    void SSAOPass::ClearSSAORT(RT7Core& rt7Core) {
        RenderTargets* renderTargets;
        RenderTargetsSaveRestore local_40;

        RT7Core* this_00 = (RT7Core*)(rt7Core.m_postProcessManager + 200);
        RT7Core* pRVar4 = this_00;
        if (this_00->operator_cast_to_bool() == '\0') {
            LogAssert("m_SSAORT",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "renderer/renderpasses/SSAOPass.cpp",
                      280, nullptr);
        }
        auto pRVar2 = pRVar4->GetRenderContext();
        pRVar4 = (RT7Core*)&local_40;
        new (pRVar4) render::RenderTargetsSaveRestore(*pRVar2);
        auto renderContext = pRVar4->GetRenderContext();
        ImVec4 local_28(1.0, 1.0, 1.0, 1.0);
        renderTargets = (RenderTargets*)this_00->end();
        pRVar2 = renderContext;
        renderContext->SetRenderTargets(renderTargets);
        long lVar3 = pRVar2->Instance();
        renderContext->SetBlendState((lVar3 + 1524));
        renderContext->ClearRenderTargets(&local_28, 1);
    }

    // 0x1007ad500
    void SSAOPass::SetSharedState(render::DrawCallState& drawCallState, render::RenderContext& renderContext,
                                  const render::ShaderProgram& shaderProgram, const SceneViewData& sceneViewData) {
        auto pHVar2 = graphics::operator*(9);
        auto matrix44 = sceneViewData.GetOrigin();
        shaderProgram.SetShaderConstMatrix4(pHVar2, 1, matrix44, 1);
        pHVar2 = (HashedString*)graphics::operator*(4);
        shaderProgram.SetShaderConstMatrix4(pHVar2, 1, &field_560, 1);
        auto pRVar3 = sceneViewData.GetOrigin();
        ReturnValue local_78 = *pRVar3;
        ReturnValue RStack_70 = pRVar3[1];
        ReturnValue local_68 = pRVar3[2];
        ReturnValue RStack_60 = pRVar3[3];
        ReturnValue local_58 = pRVar3[4];
        ReturnValue RStack_50 = pRVar3[5];
        ReturnValue local_48 = pRVar3[6];
        ReturnValue RStack_40 = pRVar3[7];
        local_78 = math::Matrix44T<float>::Invert(nullptr);
        pHVar2 = (HashedString*)graphics::operator*(11);
        shaderProgram.SetShaderConstMatrix4(pHVar2, 1, &local_78, 1);
        auto pRVar4 = drawCallState.GetRenderPipelineState();
        RenderTargets* pRVar5 = (RenderTargets*)(*field_632).operator->();
        auto this_00 = pRVar5->GetColourTargetTextures();
        auto puVar6 = this_00->back();
        Texture* pTVar7 = (Texture*)*puVar6;
        pHVar2 = (HashedString*)graphics::operator*(106);
        int iVar1 = shaderProgram.GetConstIndex(*pHVar2);
        pRVar4->SetPSTextureSamplerPair(0, pTVar7, iVar1, nullptr, true);
        pRVar4 = (RenderPipelineState*)drawCallState.GetRenderPipelineState();
        pRVar5 = (RenderTargets*)(*field_632).operator->();
        pTVar7 = (Texture*)pRVar5->GetDepthStencilTargetTexture();
        pHVar2 = (HashedString*)graphics::operator*(107);
        iVar1 = shaderProgram.GetConstIndex(*pHVar2);
        pRVar4->SetPSTextureSamplerPair(1, pTVar7, iVar1, nullptr, false);
    }

    // 0x1007ad6d0
    void SSAOPass::CreateRenderingResources() {
        Layout* pLVar4;
        uint32_t* puVar5;
        uint8_t local_90[72];
        uint32_t local_48;
        uint32_t local_44;
        float local_34;

        SSAOPass* local_40 = this;
        CreateRenderingResources();
        Random* this_00 = (Random*)(local_90 + 64);
        new (this_00) math::Random(123456789, 31415821);
        new (local_90) render::Texture::Desc();
        local_90._0_4_ = 4;
        local_90._4_4_ = 4;
        local_90._12_4_ = 2;
        local_90._36_4_ = 0;
        local_90._24_4_ = 0;
        local_90[32] = 0;
        array<math::Vector3T<float>, 16ul> local_200;
        unsigned long uVar8 = 0;
        do {
            local_34 = (float)this_00->FRand(1.0);
            local_48 = this_00->FRand(1.0);
            local_34 = local_34 * 0.7853982f;
            local_44 = ::cos(local_34);
            pLVar4 = &local_200[uVar8];
            puVar5 = (uint32_t*)pLVar4->SSOBeginPtr();
            *puVar5 = local_44;
            local_34 = (float)::sin(local_34);
            puVar5 = (uint32_t*)pLVar4->y();
            *puVar5 = local_34;
            puVar5 = (uint32_t*)pLVar4->second();
            *puVar5 = local_48;
            uVar8 = uVar8 + 1;
        } while (uVar8 != 16);
        unsigned char* puVar6 = &local_200[0];
        ResourceDataT<unsigned char const> local_c0(puVar6, 0, 0, false);
        uint8_t* puVar1 = &local_40->field_1184;
        Singleton<render::BuiltinStates>* pSVar9 = (Singleton<render::BuiltinStates>*)puVar1;
        uint8_t bVar2 = puVar1->Create(*local_90, &local_c0, 0);
        long lVar7 = pSVar9->Instance();
        puVar1->SetSamplerState(*((lVar7 + 144)), true);
        local_90._0_4_ = 4;
        local_90._4_4_ = 4;
        local_90._12_4_ = 5;
        local_90._36_4_ = 0;
        local_90._24_4_ = 0;
        local_90[32] = 0;
        array<math::Vector2T<float>, 16ul> local_140;
        uVar8 = 0;
        do {
            local_34 = (float)((local_90 + 64))->FRand(1.0);
            pLVar4 = &local_140[uVar8];
            puVar5 = (uint32_t*)pLVar4->SSOBeginPtr();
            *puVar5 = local_34;
            local_34 = (float)((local_90 + 64))->FRand(1.0);
            puVar5 = (uint32_t*)pLVar4->y();
            *puVar5 = local_34;
            uVar8 = uVar8 + 1;
        } while (uVar8 != 16);
        puVar6 = &local_140[0];
        ResourceDataT<unsigned char const> local_a8(puVar6, 0, 0, false);
        puVar1 = &local_40->field_672;
        pSVar9 = (Singleton<render::BuiltinStates>*)puVar1;
        uint8_t bVar3 = puVar1->Create(*local_90, &local_a8, 0);
        lVar7 = pSVar9->Instance();
        puVar1->SetSamplerState(*((lVar7 + 144)), true);
        if ((bVar2 & bVar3) == 0) {
            local_40->DestroyRenderingResources();
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                            "renderer/renderpasses/SSAOPass.cpp",
                            363, "Failed to set up SSAO pass.");
        }
    }

    // 0x1007ada50
    void SSAOPass::DestroyRenderingResources() {
        DestroyRenderingResources();
        field_1184.Destroy();
        field_672.Destroy();
        field_1712->Destroy();
        field_1904->Destroy();
    }

    // 0x1007adaa0
    void SSAOPass::RenderDebug(EffectManager& effectManager, DrawableQueue& drawableQueue) {
        uint64_t uVar1;
        long* plVar3;
        RenderTargets* this_00;
        vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>* this_01;
        uint64_t* puVar4;
        ImVec4 local_58;
        Point<float> local_48;
        Point<float> local_40;
        uint8_t local_38[8];

        if (effectManager.IsEnabled(113) != '\0') {
            plVar3 = DebugPrimitiveCollectorBasic::GetCollector("");
            if (plVar3 != nullptr) {
                this_00 = (RenderTargets*)(*field_648).operator->();
                this_01 = (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>*)
                              this_00->GetColourTargetTextures();
                puVar4 = (uint64_t*)(*this_01)[0];
                uVar1 = *puVar4;
                local_58 = ImVec4(0.0, 0.0, 0.5, 0.5);
                local_48 = math::Point(0.0, 0.0);
                local_40 = math::Point(1.0, 1.0);
                new (local_38) oldscape::sidebars::SideBarData(-65536, 0);
                (**(void (**)(...))(*plVar3 + 112))(plVar3, uVar1, &local_58, &local_48, &local_40, 0, 0, 0,
                                                    (SideBarData*)local_38);
            }
        }
    }

    // 0x1007ae2f0: SSAOPass::SetSSAOContext(SSAOContext*) has the same machine code as DepthDownsamplePass::SetDepthTexture(render::Texture const*)

} // namespace jag::graphics

// 0x1007ad680
unsigned long abs(float arg1) {
    uint32_t in_XMM0_Db;

    return (((uint64_t)in_XMM0_Db << 32) | (uint32_t)arg1) & 9223372034707292159;
}

// 0x1007ada00
void cos(float arg1) {
    _cosf();
}

// 0x1007ada20
void sin(float arg1) {
    _sinf();
}
