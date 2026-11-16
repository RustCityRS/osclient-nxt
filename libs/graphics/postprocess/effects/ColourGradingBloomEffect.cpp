// libs/graphics/postprocess/effects/ColourGradingBloomEffect.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics.postprocess

#include "ColourGradingBloomEffect.h"

namespace jag::postprocess {
    // 0x100f450c0
    int32_t ColourGradingBloomEffectConfig::m_blurMethodNames__[12] = {0,        0, 14779048, 1, 1,        0,
                                                                       14779057, 1, 2,        0, 14779064, 1};

    // 0x103bc1690, set at startup by ___cxx_global_var_init.43
    StringEnum ColourGradingBloomEffectConfig::m_blurMethodNames =
        StringEnum((StringEnumEntry*)&ColourGradingBloomEffectConfig::m_blurMethodNames__, 3);

    // 0x100009d00: ColourGradingBloomEffect::GetConfig() has the same machine code as eastl::compressed_pair_imp<eastl::string::Layout, eastl::allocator, 0>::second()

    // 0x1009ae680
    void ColourGradingBloomEffectConfig::DoTransition(unsigned long long arg1) {
        field_16->DoTransition(arg1);
        float fVar1 = (float)field_176.GetValue(arg1);
        field_168 = fVar1;
        fVar1 = (float)field_216.GetValue(arg1);
        field_208 = fVar1;
        fVar1 = (float)field_272.GetValue(arg1);
        field_268 = fVar1;
    }

    // 0x1009ae6e0
    ColourGradingBloomEffect::ColourGradingBloomEffect(render::RenderTargetsManager& renderTargetsManager,
                                                       const AvgLuminanceFilter* avgLuminanceFilter, int arg3, int arg4)
        : PostProcessEffect(arg3, arg4) {
        uint32_t uVar1;
        hash<ColourGradingBloomEffectConfig> local_40;
        equal_to<ColourGradingBloomEffectConfig> local_38;

        field_20 = '\0';
        field_21 = '\0';
        field_22 = 0;
        new (field_24) ColourGradingBloomEffectConfig();
        *(uint32_t*)(field_24 + 320) = 0;
        field_352 = renderTargetsManager;
        new (field_360) shared_ptr();
        new (field_376) shared_ptr();
        new (&field_392) shared_ptr();
        new (&field_408)
            eastl::fixed_hash_map<ColourGradingBloomEffectConfig, shared_ptr<render::ShaderProgram>, 16ul, 17ul, true,
                                  eastl::hash<ColourGradingBloomEffectConfig>,
                                  eastl::equal_to<ColourGradingBloomEffectConfig>, false>(local_40, local_38);
        new (field_6512) render::InputAssemblerState();
        if (avgLuminanceFilter != nullptr) {
            uVar1 = avgLuminanceFilter->GetValue();
            *(uint32_t*)(field_24 + 320) = uVar1;
        }
    }

    // 0x1009ae860
    ColourGradingBloomEffect::~ColourGradingBloomEffect() {
        Destroy();
        field_6512->~InputAssemblerState();
        field_408.~fixed_hash_map();
        field_392.~shared_ptr();
        field_376->~shared_ptr();
        field_360->~shared_ptr();
        field_24->~ColourGradingBloomEffectConfig();
    }

    // 0x1009ae960
    uint64_t ColourGradingBloomEffect::Init() {
        VertexElementDesc* vertexElementDesc;
        ColourGradingBloomComposite local_78;
        ReturnValue local_60;

        Singleton<render::ShaderProgramManager>* this_01 = (Singleton<render::ShaderProgramManager>*)&field_408;
        hash_map<ColourGradingBloomEffectConfig, shared_ptr<render::ShaderProgram>,
                 eastl::hash<ColourGradingBloomEffectConfig>, eastl::equal_to<ColourGradingBloomEffectConfig>,
                 eastl::fixed_hashtable_allocator<18ul, 344ul, 16ul, 8ul, 0ul, true>>* local_40 =
            (hash_map<ColourGradingBloomEffectConfig, shared_ptr<render::ShaderProgram>,
                      eastl::hash<ColourGradingBloomEffectConfig>, eastl::equal_to<ColourGradingBloomEffectConfig>,
                      eastl::fixed_hashtable_allocator<18ul, 344ul, 16ul, 8ul, 0ul, true>>*)this_01;
        if (this_01->empty() == '\0') {
            LogAssert("m_colourGradingBloomShader.empty()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/postprocess/"
                      "effects/ColourGradingBloomEffect.cpp",
                      50, nullptr);
        }
        auto local_50 = this_01->Instance();
        auto local_90 = PostProcessVS::BuildVSFragment();
        auto local_48 = local_90.c_str();
        uint32_t uVar4 = *(uint32_t*)(field_24 + 316);
        unsigned int local_34 = (unsigned int)(uint8_t)field_24[312];
        uint8_t uVar1 = field_24[260];
        uint8_t uVar2 = field_24[12];
        uint8_t uVar3 = field_24[16];
        uint32_t uVar6 = ((field_24 + 16))->CountColourMappings();
        local_78.BuildFSFragment(uVar4, local_34, uVar1, uVar2, uVar3, uVar6, field_24[17],
                                 *(uint32_t*)(field_24 + 320));
        vertexElementDesc = (VertexElementDesc*)local_78.c_str();
        local_60.RegisterFromSourceString(local_50, local_48, vertexElementDesc, 62757712, '\x02');
        shared_ptr<render::ShaderProgram>* this_00 = (shared_ptr<render::ShaderProgram>*)(*local_40)[*field_24];
        *this_00 = local_60;
        CreateRenderingResources();
        return 1;
    }

    // 0x1009aed70
    uint8_t ColourGradingBloomEffect::CreateRenderingResources() {
        CreateIdentityLUT((bool)field_24[17]);
        return 1;
    }

    // 0x1009aed90
    void ColourGradingBloomEffect::Destroy() {
        long lVar2;

        DestroyRenderTargets();
        uint8_t* this_00 = &field_408;
        auto local_50 = this_00->begin();
        auto local_40 = this_00->end();
        bool cVar1 = local_50 != local_40;
        if (cVar1) {
            do {
                lVar2 = local_50.HeapBeginPtr();
                ((ShaderProgramManager*)&local_50->Instance())->Unregister(*((lVar2 + 320)));
                ++local_50;
                cVar1 = local_50 != local_40;
            } while (cVar1);
        }
        this_00->clear();
        field_6512->Destroy();
        DestroyRenderingResources();
    }

    // 0x1009aee60
    void ColourGradingBloomEffect::DestroyRenderTargets() {
        field_352->Unregister(*field_376);
        field_352->Unregister(*field_360);
    }

    // 0x1009aeef0
    void ColourGradingBloomEffect::DestroyRenderingResources() {

        field_6512->Destroy();
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_28;
        field_392 = local_28;
        ((field_24 + 16))->Reset();
    }

    // 0x1009aef60
    void ColourGradingBloomEffect::CreateIdentityLUT(bool arg1) {
        unsigned long uVar2;
        char* pcVar3;
        int iVar5;
        unsigned int uVar6;
        uint64_t in_register_00000031;
        int iVar8;
        int iVar9;
        char cVar10;
        uint8_t local_d8[88];
        unsigned long local_80;
        unsigned long local_78;
        unsigned long local_70;
        unsigned long local_68;
        int local_54;
        int local_50;
        int local_4c;
        ReturnValue local_48;

        uint32_t local_34 = (uint32_t)(((uint64_t)in_register_00000031 << 8) | (uint8_t)arg1);
        uint8_t* puVar4 = &field_392;
        unsigned long uVar7 = 0;
        if (*puVar4 != nullptr) {
            new (local_d8) shared_ptr();
            *puVar4 = *local_d8;
        }
        shared_ptr<render::Texture>* local_60 = (shared_ptr<render::Texture>*)puVar4;
        Array<unsigned char> local_f0(16384);
        do {
            local_4c = (int)uVar7;
            local_70 = (unsigned long)(unsigned int)(local_4c * 16);
            local_50 = local_4c * 17;
            local_4c = local_4c << 8;
            uVar2 = 0;
            local_68 = uVar7;
            do {
                iVar8 = (int)uVar2;
                local_54 = iVar8 * 17;
                iVar9 = iVar8 * 256 + (int)local_70;
                local_80 = (unsigned long)(unsigned int)(iVar8 * 16 + local_4c);
                cVar10 = '\0';
                iVar8 = 0;
                local_78 = uVar2;
                do {
                    iVar5 = iVar9;
                    if ((char)local_34 != '\0') {
                        iVar5 = (int)local_80;
                    }
                    uVar6 = (iVar5 + iVar8) * 4;
                    pcVar3 = &local_f0[(unsigned long)uVar6];
                    *pcVar3 = cVar10;
                    puVar4 = &local_f0[(long)(int)(uVar6 | 1)];
                    *puVar4 = (char)local_54;
                    puVar4 = &local_f0[(long)(int)(uVar6 | 2)];
                    *puVar4 = (char)local_50;
                    puVar4 = &local_f0[(long)(int)(uVar6 | 3)];
                    *puVar4 = 255;
                    iVar8 = iVar8 + 1;
                    cVar10 = cVar10 + '\x11';
                } while (iVar8 != 16);
                uVar6 = (int)local_78 + 1;
                uVar2 = (unsigned long)uVar6;
            } while (uVar6 != 16);
            uVar6 = (int)local_68 + 1;
            uVar7 = (unsigned long)uVar6;
        } while (uVar6 != 16);
        auto arg1_00 = local_f0.data();
        new ((local_d8 + 64)) render::ResourceDataT(arg1_00, 0, 0, false);
        new (local_d8) render::Texture::Desc();
        shared_ptr<render::Texture>* this_00 = local_60;
        local_d8._12_4_ = 7;
        if ((char)local_34 == '\0') {
            local_d8._0_4_ = 256;
            local_d8._4_4_ = 16;
            local_d8[32] = 0;
            make_shared<render::Texture2D, char const(&)[31]>(&local_48, "IdentityLUT2D");
            ((Texture2D*)local_48.operator->())->Create(*local_d8, (local_d8 + 64), 0);
            *this_00 = local_48;
        } else {
            local_d8._0_4_ = 16;
            local_d8._4_4_ = 16;
            local_d8._8_4_ = 16;
            local_d8[32] = 0;
            make_shared<render::Texture3D, char const(&)[32]>(&local_48, "IdentityLUT3D");
            ((Texture3D*)local_48.operator->())->Create(*local_d8, (local_d8 + 64));
            *this_00 = local_48;
        }
        ((local_d8 + 64))->~ResourceDataT();
    }

    // 0x1009af380
    void ColourGradingBloomEffect::Render(render::RenderContext& renderContext,
                                          const render::RenderTargets* renderTargets, const render::Texture* texture1,
                                          const render::Texture* texture2, const render::Viewport& viewport,
                                          graphics::ViewRenderTargets* viewRenderTargets,
                                          PostProcessManager& postProcessManager) {
        array<ColourCorrectionConfig::Remapping, 3ul>* this_00;
        Transitionable<float> TVar2;
        uint8_t* puVar3;
        bool cVar5;
        unsigned int uVar8;
        shared_ptr* psVar10;
        RenderTargets* pRVar11;
        vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>* pvVar12;
        long* plVar13;
        Array<shared_ptr<render::RenderTargets>>* this_03;
        shared_ptr<render::RenderTargets>* this_04;
        uint64_t* puVar14;
        Desc* desc;
        uint64_t uVar15;
        uint64_t uVar16;
        KawaseBlurFilter* this_05;
        RenderTargets* pRVar17;
        DualFilteringBlurFilter* this_06;
        GaussianBlurFilter* this_07;
        compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>* this_08;
        VertexDeclaration* vertexDeclaration;
        shared_ptr<render::Texture>* objType;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_12;
        Texture* pTVar21;
        ColourGradingBloomEffect* pCVar22;
        unsigned long uVar24;
        Texture* this_15;
        unsigned long uVar25;
        BrightPassFilter* pBVar27;
        HashedString hashedString;
        TextureSamplerStateTracker local_b8;
        DrawCallState local_98;
        float local_64;
        shared_ptr<render::RenderTargets>* local_50;

        ShaderProgram* local_40 = (ShaderProgram*)viewport;
        auto this_02 = postProcessManager.second();
        long lVar9 = postProcessManager.GetAvgLuminanceFilter();
        RenderTargets* local_60 = renderTargets;
        Texture* local_48 = texture1;
        ColourGradingBloomEffect* local_38 = this;
        if (lVar9 == 0) {
            pTVar21 = nullptr;
        } else {
            if ((field_24[260] == '\0') && (field_24[312] == '\0')) {
                pTVar21 = nullptr;
            } else {
                TVar2 = this_02[192];
                if (viewRenderTargets == nullptr) {
                    plVar13 = (long*)postProcessManager.GetAvgLuminanceFilter();
                    if (TVar2 == (Transitionable<float>)0) {
                        pTVar21 = (Texture*)(**(void (**)(...))(*plVar13 + 56))(plVar13);
                    } else {
                        pTVar21 = (Texture*)(**(void (**)(...))(*plVar13 + 64))();
                    }
                } else {
                    puVar14 = (uint64_t*)PTR_VIEWRT_LUMINANCE_ADAPTED_100ee5578;
                    if (TVar2 == (Transitionable<float>)0) {
                        puVar14 = (uint64_t*)PTR_VIEWRT_LUMINANCE_AVERAGE_100ee5580;
                    }
                    puVar3 = PTR_VIEWRT_LUMINANCE_ADAPTED_100ee5578;
                    if (TVar2 == (Transitionable<float>)0) {
                        puVar3 = PTR_VIEWRT_LUMINANCE_AVERAGE_100ee5580;
                    }
                    hashedString.field_8 = *(uint64_t*)(puVar3 + 8);
                    hashedString.field_0 = (char*)*puVar14;
                    psVar10 = (shared_ptr*)viewRenderTargets->Get(hashedString);
                    cVar5 = shared_ptr::operator_cast_to_bool(psVar10);
                    if (!cVar5) {
                        LogAssert("luminanceRT",
                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                  "postprocess/effects/ColourGradingBloomEffect.cpp",
                                  184, nullptr);
                    }
                    pRVar11 = (RenderTargets*)(*psVar10).operator->();
                    pvVar12 = (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>*)
                                  pRVar11->GetColourTargetTextures();
                    plVar13 = (long*)(*pvVar12)[0];
                    pTVar21 = (Texture*)*plVar13;
                    if (pTVar21 == nullptr) {
                        LogAssert("pAvgLuminanceTex",
                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                  "postprocess/effects/ColourGradingBloomEffect.cpp",
                                  187, nullptr);
                    }
                }
            }
            if ((pTVar21 != nullptr) && (local_38->field_24[260] != '\0')) {
                this_03 = (Array<shared_ptr<render::RenderTargets>>*)postProcessManager.GetDownSampledSourceRTs();
                pCVar22 = local_38;
                this_15 = local_48;
                if ((long)*(int*)(local_38->field_24 + 304) != 18446744073709551615) {
                    psVar10 = (shared_ptr*)(*this_03)[(long)*(int*)(local_38->field_24 + 304)];
                    cVar5 = shared_ptr::operator_cast_to_bool(psVar10);
                    pCVar22 = local_38;
                    if (!cVar5) {
                        return;
                    }
                    this_04 = (shared_ptr<render::RenderTargets>*)(*this_03)[(long)*(int*)(local_38->field_24 + 304)];
                    pRVar11 = (RenderTargets*)(*this_04).operator->();
                    pvVar12 = (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>*)
                                  pRVar11->GetColourTargetTextures();
                    puVar14 = (uint64_t*)(*pvVar12)[0];
                    this_15 = (Texture*)*puVar14;
                }
                DestroyRenderTargets(pCVar22);
                desc = (Desc*)this_15->second();
                cVar5 = CreateRenderTargets(pCVar22, desc);
                if (cVar5) {
                    uVar15 = postProcessManager.GetVertexDataBuffer();
                    pCVar22 = local_38;
                    local_50 = (shared_ptr<render::RenderTargets>*)local_38->field_360;
                    uVar16 = **local_50;
                    pBVar27._0_4_->Filter(*(*(uint32_t*)(pCVar22->field_24 + 168)), *uVar15, renderContext, *uVar16,
                                          this_15, *pTVar21, *(uint32_t*)(pCVar22->field_24 + 316), this_02,
                                          *(uint32_t*)(pCVar22->field_24 + 320));
                    if (*(int*)pCVar22->field_24 == 2) {
                        this_06 = (DualFilteringBlurFilter*)postProcessManager.GetDualFilteringBlurFilter();
                        pCVar22 = local_38;
                        pRVar11 = (RenderTargets*)**local_38->field_376;
                        pRVar17 = (RenderTargets*)(*local_50).operator->();
                        pvVar12 = (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>*)
                                      pRVar17->GetColourTargetTextures();
                        puVar14 = (uint64_t*)(*pvVar12)[0];
                        this_06->BlurMultiPass(renderContext, *pRVar11, *(*puVar14),
                                               *(DualFilteringBlurKernelSize*)(pCVar22->field_24 + 8), 0);
                    } else if (*(int*)pCVar22->field_24 == 1) {
                        this_05 = postProcessManager.GetKawaseBlurFilter();
                        pCVar22 = local_38;
                        pRVar11 = (RenderTargets*)**local_38->field_376;
                        pRVar17 = (RenderTargets*)(*local_50).operator->();
                        pvVar12 = (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>*)
                                      pRVar17->GetColourTargetTextures();
                        puVar14 = (uint64_t*)(*pvVar12)[0];
                        this_05->BlurMultiPass(renderContext, *pRVar11, *(*puVar14),
                                               *(KawaseKernelSize*)(pCVar22->field_24 + 4), 0);
                    } else {
                        this_07 = (GaussianBlurFilter*)postProcessManager.GetGaussianBlurFilter();
                        pCVar22 = local_38;
                        pRVar11 = (RenderTargets*)**local_38->field_376;
                        pRVar17 = (RenderTargets*)(*local_50).operator->();
                        pvVar12 = (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>*)
                                      pRVar17->GetColourTargetTextures();
                        puVar14 = (uint64_t*)(*pvVar12)[0];
                        this_07->BlurMultiPass13Tap(renderContext, *pRVar11, *(*puVar14),
                                                    *(float*)(pCVar22->field_24 + 248),
                                                    *(int*)(pCVar22->field_24 + 308), 0);
                    }
                }
            }
        }
        DrawCallState* pDVar23 = &local_98;
        new (pDVar23) render::DrawCallState();
        this_08 = (compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>*)
                      pDVar23->GetRenderPipelineState();
        lVar9 = pDVar23->Instance();
        eastl::compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>::compressed_pair_imp(
            this_08, (PlayerDataComparator<oldscape::social::FriendChatUser>*)(lVar9 + 1524));
        pDVar23 = &local_98;
        auto pRVar18 = pDVar23->GetRenderPipelineState();
        lVar9 = pDVar23->Instance();
        pRVar18->SetRasteriserState((lVar9 + 1200));
        pDVar23 = &local_98;
        auto this_09 = pDVar23->GetRenderPipelineState();
        lVar9 = pDVar23->Instance();
        this_09->SetHeapSize((lVar9 + 1080));
        auto pOVar19 = local_98.GetOutputMergerState();
        pOVar19->SetViewports(local_40, 1);
        pOVar19 = local_98.GetOutputMergerState();
        pOVar19->SetRenderTargets(local_60);
        shared_ptr<render::ShaderProgram>* this_10 = &local_38->field_408[*local_38->field_24];
        local_40 = (ShaderProgram*)**this_10;
        pRVar18 = (RenderPipelineState*)local_98.GetRenderPipelineState();
        ShaderProgram* this_01 = local_40;
        pRVar18->SetShaderProgram(local_40);
        uint8_t* puVar1 = local_38->field_6512;
        vertexDeclaration = (VertexDeclaration*)this_01->second();
        auto this_11 = postProcessManager.GetRenderToTexture();
        auto vertexBuffer = this_11->GetBoneIDMap();
        puVar1->SetVertexStreamData(vertexDeclaration, vertexBuffer);
        local_98.SetInputAssemblerState(puVar1);
        unsigned long long arg1 = FrameTime::GetCurrentTimeMS();
        auto pHVar20 = postprocess::operator*(5);
        float fVar26 = (float)this_02->GetValue(arg1);
        local_40->SetShaderConstFloat1(pHVar20, fVar26);
        pHVar20 = (HashedString*)postprocess::operator*(6);
        fVar26 = (float)(this_02 + 32)->GetValue(arg1);
        local_40->SetShaderConstFloat1(pHVar20, fVar26);
        pHVar20 = (HashedString*)postprocess::operator*(8);
        fVar26 = (float)(this_02 + 64)->GetValue(arg1);
        local_40->SetShaderConstFloat1(pHVar20, fVar26);
        pHVar20 = (HashedString*)postprocess::operator*(9);
        fVar26 = (float)(this_02 + 96)->GetValue(arg1);
        local_40->SetShaderConstFloat1(pHVar20, fVar26);
        pHVar20 = (HashedString*)postprocess::operator*(10);
        fVar26 = (float)(this_02 + 128)->GetValue(arg1);
        local_40->SetShaderConstFloat1(pHVar20, fVar26);
        pHVar20 = (HashedString*)postprocess::operator*(26);
        local_40->SetShaderConstFloat1(pHVar20, *(float*)(local_38->field_24 + 268));
        pHVar20 = (HashedString*)postprocess::operator*(0);
        int iVar7 = local_40->GetConstIndex(*pHVar20);
        pRVar18 = (RenderPipelineState*)local_98.GetRenderPipelineState();
        pRVar18->SetPSTextureSamplerPair(0, local_48, iVar7, nullptr, false);
        if ((pTVar21 != nullptr) && (local_38->field_24[312] != '\0')) {
            pHVar20 = (HashedString*)postprocess::operator*(1);
            iVar7 = local_40->GetConstIndex(*pHVar20);
            pRVar18 = (RenderPipelineState*)local_98.GetRenderPipelineState();
            pRVar18->SetPSTextureSamplerPair(1, pTVar21, iVar7, nullptr, false);
        }
        lVar9 = postProcessManager.GetAvgLuminanceFilter();
        pCVar22 = local_38;
        if ((lVar9 != 0) && (local_38->field_24[260] != '\0')) {
            puVar1 = local_38->field_376;
            cVar5 = puVar1->operator_cast_to_bool();
            if (cVar5) {
                pRVar11 = (RenderTargets*)(*puVar1).operator->();
                pvVar12 = (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>*)
                              pRVar11->GetColourTargetTextures();
                puVar14 = (uint64_t*)(*pvVar12)[0];
                pTVar21 = (Texture*)*puVar14;
                pHVar20 = (HashedString*)postprocess::operator*(27);
                iVar7 = local_40->GetConstIndex(*pHVar20);
                pRVar18 = (RenderPipelineState*)local_98.GetRenderPipelineState();
                pRVar18->SetPSTextureSamplerPair(2, pTVar21, iVar7, nullptr, false);
                local_b8 = render::TextureSamplerStateTracker(*pTVar21);
                lVar9 = local_b8.Instance();
                (*(void (*)(...))pTVar21->field_0[3])(pTVar21, lVar9 + 208, 0);
            }
        }
        ColourGradingBloomEffect* pCVar4 = local_38;
        if (pCVar22->field_24[16] != '\0') {
            uVar8 = ((local_38->field_24 + 16))->CountColourMappings();
            uVar24 = (unsigned long)uVar8;
            local_60 = (RenderTargets*)(((uint64_t)local_60._4_4_ << 32) | (uint32_t)uVar8);
            if (0 < (int)uVar8) {
                puVar1 = &local_38->field_392;
                uVar25 = 0;
                do {
                    objType = (shared_ptr<render::Texture>*)(*((pCVar4->field_24 + 48)))[uVar25];
                    if ((*objType == nullptr) || (local_38->field_22 != '\0')) {
                        *objType = *puVar1;
                    }
                    uVar25 = uVar25 + 1;
                } while (uVar24 != uVar25);
            }
            this_00 = (array<ColourCorrectionConfig::Remapping, 3ul>*)(local_38->field_24 + 20);
            if ((int)local_60 < 1) {
                fVar26 = 0.0;
            } else {
                fVar26 = 0.0;
                uVar25 = 0;
                do {
                    local_48 = (Texture*)(((uint64_t)local_48._4_4_ << 32) | (uint32_t)fVar26);
                    lVar9 = (*this_00)[uVar25];
                    fVar26 = local_48._0_4_ + *(float*)(lVar9 + 4);
                    uVar25 = uVar25 + 1;
                } while (uVar24 != uVar25);
            }
            local_48 = (Texture*)(((uint64_t)local_48._4_4_ << 32) | (uint32_t)fVar26);
            if (1.000001f < fVar26) {
                LogAssert("totalWeight <= 1.000001f",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/postprocess/"
                          "effects/ColourGradingBloomEffect.cpp",
                          317, "Total colour remap weightings should never be over 1!");
            }
            local_48 = (Texture*)(((uint64_t)local_48._4_4_ << 32) | (uint32_t)(1.0 - fVar26));
            lVar9 = (*this_00)[0];
            local_50 = (shared_ptr<render::RenderTargets>*)(((uint64_t)local_50._4_4_ << 32) |
                                                            (uint32_t)(*(uint32_t*)(lVar9 + 4)));
            lVar9 = (*this_00)[1];
            local_64 = *(float*)(lVar9 + 4);
            lVar9 = (*this_00)[2];
            new (&local_b8) ImVec4(local_48._0_4_, local_50._0_4_, local_64, *(float*)(lVar9 + 4));
            pHVar20 = (HashedString*)postprocess::operator*(32);
            local_40->SetShaderConstVector4(pHVar20, &local_b8);
            if (0 < (int)local_60) {
                uVar25 = 0;
                do {
                    pHVar20 = (HashedString*)(*((uVar25 + 33)))[(unsigned long)pHVar20];
                    iVar7 = local_40->GetConstIndex(*pHVar20);
                    pRVar18 = (RenderPipelineState*)local_98.GetRenderPipelineState();
                    this_12 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)(*(
                        (pCVar4->field_24 + 48)))[uVar25];
                    pTVar21 = (Texture*)this_12->end();
                    uVar8 = (int)uVar25 + 3;
                    pHVar20 = (HashedString*)(unsigned long)uVar8;
                    pRVar18->SetPSTextureSamplerPair(uVar8, pTVar21, iVar7, nullptr, false);
                    uVar25 = uVar25 + 1;
                } while (uVar24 != uVar25);
            }
        }
        ((RenderToTextureHelper*)postProcessManager.GetRenderToTexture())->RenderQuad(renderContext, local_98);
        lVar9 = postProcessManager.GetAvgLuminanceFilter();
        if ((lVar9 != 0) && (local_38->field_24[260] != '\0')) {
            puVar1 = local_38->field_360;
            cVar5 = puVar1->operator_cast_to_bool();
            if (cVar5) {
                pRVar11 = (RenderTargets*)(*puVar1).operator->();
                pRVar11->Invalidate();
                local_38->field_352->Unregister(*puVar1);
            }
        }
    }

    // 0x1009afdf0
    uint64_t ColourGradingBloomEffect::CreateRenderTargets(const render::Texture::Desc& desc) {
        uint8_t local_80[80];

        Desc* arg1 = desc;
        array<render::Texture::Desc, 2ul> local_100;
        uint64_t* puVar9 = &local_100[(unsigned long)arg1];
        uint64_t uVar10 = *(uint64_t*)&desc.field_8;
        uint64_t uVar2 = *(uint64_t*)&desc.field_16;
        uint64_t uVar3 = *(uint64_t*)&desc.field_24;
        uint64_t uVar4 = *(uint64_t*)&desc.field_32;
        uint64_t uVar5 = *(uint64_t*)&desc.field_40;
        uint64_t uVar6 = desc.field_48;
        uint64_t uVar7 = *(uint64_t*)&desc.field_56;
        *puVar9 = *(uint64_t*)desc;
        puVar9[1] = uVar10;
        puVar9[2] = uVar2;
        puVar9[3] = uVar3;
        puVar9[4] = uVar4;
        puVar9[5] = uVar5;
        puVar9[6] = uVar6;
        puVar9[7] = uVar7;
        *(int*)((long)puVar9 + 12) = desc.field_12;
        *(uint32_t*)(puVar9 + 3) = 0;
        *(uint8_t*)(puVar9 + 4) = 0;
        RenderTargetsManager* pRVar1 = field_352;
        new (local_80) render::Texture::Desc();
        unsigned int arg6 = (unsigned int)(Desc*)local_80;
        ((local_80 + 64))->Register(pRVar1, 14779423, *3553, (int)&local_100, DAT_00000001, arg6, false);
        uint8_t* this_00 = field_360;
        *this_00 = (*((local_80 + 64)));
        ((local_80 + 64))->~shared_ptr();
        pRVar1 = field_352;
        new (local_80) render::Texture::Desc();
        ((local_80 + 64))->Register(pRVar1, 14779441, *3553, (int)&local_100, DAT_00000001, arg6, false);
        uint8_t* this_01 = field_376;
        *this_01 = (*((local_80 + 64)));
        ((local_80 + 64))->~shared_ptr();
        bool cVar8 = this_00->operator_cast_to_bool();
        if (cVar8) {
            cVar8 = this_01->operator_cast_to_bool();
            if (cVar8)
                goto LAB_1009aff3c;
        }
        DestroyRenderTargets();
    LAB_1009aff3c:
        cVar8 = this_00->operator_cast_to_bool();
        if (!cVar8) {
            uVar10 = 0;
        } else {
            uVar10 = this_01->operator_cast_to_bool();
        }
        return uVar10;
    }

    // 0x1009b1330
    void ColourGradingBloomEffect::RenderDebug(const render::Viewport& viewport) {
        unsigned int uVar1;
        compressed_pair_imp<eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true>>::Layout,
                            eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true>, 0>* this_00;
        int iVar4;
        RenderTargets* this_02;
        vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>* this_03;
        uint64_t* puVar5;
        unsigned int* puVar6;
        long lVar7;
        long* plVar8;
        float* pfVar9;
        Texture* pTVar10;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_04;
        char* str;
        unsigned long arg1;
        float fVar11;
        Point<float> local_c0;
        Point<float> local_b8;
        uint8_t local_b0[16];
        Point<float> local_a0;
        float local_94;
        array<ColourCorrectionConfig::Remapping, 3ul>* local_80;
        float local_78;
        ImVec4 local_70;

        float local_74 = 20.0 / (float)viewport.field_12;
        if (field_20 != '\0') {
            if (field_376->operator_cast_to_bool() != '\0') {
                this_02 = (RenderTargets*)(*field_376).operator->();
                this_03 = (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>*)
                              this_02->GetColourTargetTextures();
                puVar5 = (uint64_t*)(*this_03)[0];
                this_00 = (compressed_pair_imp<
                           eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true>>::Layout,
                           eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true>, 0>*)*puVar5;
                if (this_00 == nullptr) {
                    LogAssert("pBrightPassTex",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                              "postprocess/effects/ColourGradingBloomEffect.cpp",
                              351, nullptr);
                }
                local_a0 = math::Point(0.0, local_74);
                puVar6 = (unsigned int*)this_00->second();
                uVar1 = *puVar6;
                iVar4 = viewport.field_8;
                lVar7 = this_00->second();
                local_78 = (float)*(unsigned int*)(lVar7 + 4) / (float)viewport.field_12;
                plVar8 = DebugPrimitiveCollectorBasic::GetCollector("");
                if (plVar8 != nullptr) {
                    local_80 =
                        (array<ColourCorrectionConfig::Remapping, 3ul>*)(((uint64_t)local_80._4_4_ << 32) |
                                                                         (uint32_t)((float)uVar1 / (float)iVar4));
                    pfVar9 = (float*)local_a0.SSOBeginPtr();
                    local_94 = *pfVar9;
                    pfVar9 = (float*)local_a0.y();
                    local_70 = ImVec4(local_94, *pfVar9, local_80._0_4_, local_78);
                    local_c0 = math::Point(0.0, 0.0);
                    local_b8 = math::Point(1.0, 1.0);
                    new ((local_b0 + 8)) math::ColourStorage8888(255, 255, 255, 255);
                    iVar4 = ((local_b0 + 8))->GetX();
                    new (local_b0) oldscape::sidebars::SideBarData(iVar4, 0);
                    (**(void (**)(...))(*plVar8 + 112))(plVar8, this_00, &local_70, &local_c0, &local_b8, 0, 0, 0,
                                                        (SideBarData*)local_b0);
                }
                local_74 = local_74 + local_78;
                this = this;
            }
        }
        if (field_21 != '\0') {
            pTVar10 = (Texture*)field_392.end();
            if (pTVar10 != nullptr) {
                local_70 = math::Point(0.0, local_74);
                fVar11 = (float)RenderDebugLUT(this, pTVar10, &local_70, "Identity Look-Up Table", viewport);
                local_74 = local_74 + fVar11;
            }
            local_80 = (array<ColourCorrectionConfig::Remapping, 3ul>*)(field_24 + 20);
            arg1 = 0;
            do {
                this_04 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)(*((field_24 + 48)))[arg1];
                pTVar10 = (Texture*)this_04->end();
                if (pTVar10 != nullptr) {
                    local_a0 = math::Point(0.0, local_74);
                    lVar7 = (*local_80)[arg1];
                    local_78 = *(float*)(lVar7 + 4) * 100.0;
                    local_70 = eastl::fixed_string<char, 16>();
                    local_70.sprintf("%.5f%%", (double)local_78);
                    str = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                    fVar11 = (float)RenderDebugLUT(this, pTVar10, &local_a0, str, viewport);
                    local_74 = local_74 + fVar11;
                }
                arg1 = arg1 + 1;
            } while (arg1 != 3);
        }
    }

    // 0x1009b16d0
    float ColourGradingBloomEffect::RenderDebugLUT(const render::Texture* texture, const math::Vector2T<float>& vector2,
                                                   const char* str, const render::Viewport& viewport) {
        int iVar1;
        long* plVar4;
        float* pfVar5;
        ImVec4 local_80;
        uint8_t local_58[16];
        uint8_t local_48[8];
        uint8_t local_40[12];

        auto puVar2 = texture->second();
        float local_34 = (float)*puVar2 / (float)viewport.field_8;
        long lVar3 = texture->second();
        local_40._8_4_ = (float)*(unsigned int*)(lVar3 + 4) / (float)viewport.field_12;
        if (field_24[17] == '\0') {
            plVar4 = DebugPrimitiveCollectorBasic::GetCollector("");
            if (plVar4 != nullptr) {
                pfVar5 = (float*)vector2.SSOBeginPtr();
                local_40._4_4_ = *pfVar5;
                pfVar5 = (float*)vector2.y();
                local_80 = ImVec4((float)local_40._4_4_, *pfVar5, local_34, (float)local_40._8_4_);
                new (local_48) math::Point(0.0, 0.0);
                new (local_58) math::Point(1.0, 1.0);
                new (local_40) math::ColourStorage8888(255, 255, 255, 255);
                iVar1 = local_40->GetX();
                new ((local_58 + 8)) oldscape::sidebars::SideBarData(iVar1, 0);
                (**(void (**)(...))(*plVar4 + 112))(plVar4, texture, &local_80, local_48, (Point<float>*)local_58, 0, 0,
                                                    0, (SideBarData*)(local_58 + 8));
            }
        } else {
            lVar3 = texture->second();
            local_34 = local_34 * (float)*(unsigned int*)(lVar3 + 8);
            plVar4 = DebugPrimitiveCollectorBasic::GetCollector("");
            if (plVar4 != nullptr) {
                pfVar5 = (float*)vector2.SSOBeginPtr();
                local_40._4_4_ = *pfVar5;
                pfVar5 = (float*)vector2.y();
                local_80 = ImVec4((float)local_40._4_4_, *pfVar5, local_34, (float)local_40._8_4_);
                new (local_58) math::ColourStorage8888(255, 255, 255, 255);
                iVar1 = local_58->GetX();
                new (local_48) oldscape::sidebars::SideBarData(iVar1, 0);
                (**(void (**)(...))(*plVar4 + 128))(plVar4, texture, &local_80, 0, 0, (SideBarData*)local_48);
            }
        }
        plVar4 = DebugPrimitiveCollectorBasic::GetCollector("");
        if (plVar4 != nullptr) {
            new (local_48) math::Point(local_34, (float)local_40._8_4_ * 0.5 + *(float*)(vector2 + 4));
            new (local_58) eastl::allocator("EASTL basic_string");
            local_80 = eastl::string(str, local_58);
            new (local_40) math::ColourStorage8888(255, 255, 255, 255);
            iVar1 = local_40->GetX();
            new ((local_58 + 8)) oldscape::sidebars::SideBarData(iVar1, 0);
            (**(void (**)(...))(*plVar4 + 144))(plVar4, local_48, &local_80, local_58 + 8);
        }
        return (float)local_40._8_4_;
    }

    // 0x1009b19c0
    uint8_t ColourGradingBloomEffect::GetRequirements() const {
        return field_24[312] << 4 | field_24[260];
    }

    // 0x1009b19e0
    void ColourGradingBloomEffect::SetConfig(const ColourGradingBloomEffectConfig& colourGradingBloomEffectConfig) {
        char* str2;
        VertexElementDesc* vertexElementDesc;
        shared_ptr<render::ShaderProgram>* this_02;
        ColourGradingBloomComposite local_78;
        ReturnValue local_60;
        uint8_t local_50[16];
        char* local_38;

        uint8_t* this_01 = &field_408;
        auto local_88 = this_01->find(colourGradingBloomEffectConfig);
        local_50 = this_01->end();
        if (local_88 == *local_50 == '\0')
            goto LAB_1009b1b72;
        uint8_t* this_00 = colourGradingBloomEffectConfig.field_16;
        ColourCorrectionConfig* this_03 = (ColourCorrectionConfig*)this_00;
        int iVar2 = this_00->CountColourMappings();
        if (((((bool)field_24[260] == colourGradingBloomEffectConfig.field_260) &&
              ((bool)field_24[312] == colourGradingBloomEffectConfig.field_312)) &&
             ((bool)field_24[12] == colourGradingBloomEffectConfig.field_12)) &&
            ((*(int*)(field_24 + 316) == colourGradingBloomEffectConfig.field_316 && (field_24[16] == *this_00)))) {
            this_03 = (ColourCorrectionConfig*)(field_24 + 16);
            if ((this_03->CountColourMappings() != iVar2) ||
                (field_24[17] != colourGradingBloomEffectConfig.field_16[1]))
                goto LAB_1009b1a9e;
        } else {
        LAB_1009b1a9e:
            local_38 = (char*)this_03->Instance();
            *local_50 = PostProcessVS::BuildVSFragment();
            str2 = (char*)local_50->c_str();
            local_78.BuildFSFragment(colourGradingBloomEffectConfig.field_316, colourGradingBloomEffectConfig.field_312,
                                     colourGradingBloomEffectConfig.field_260, colourGradingBloomEffectConfig.field_12,
                                     colourGradingBloomEffectConfig.field_16[0], iVar2,
                                     colourGradingBloomEffectConfig.field_16[1], *(uint32_t*)(field_24 + 320));
            vertexElementDesc = (VertexElementDesc*)local_78.c_str();
            local_60.RegisterFromSourceString(local_38, str2, vertexElementDesc, 62757712, '\x02');
            this_02 = (shared_ptr<render::ShaderProgram>*)(*this_01)[colourGradingBloomEffectConfig];
            *this_02 = local_60;
        }
        if (field_24[17] != colourGradingBloomEffectConfig.field_16[1]) {
            CreateIdentityLUT((bool)colourGradingBloomEffectConfig.field_16[1]);
        }
    LAB_1009b1b72:
        *field_24 = colourGradingBloomEffectConfig;
    }

} // namespace jag::postprocess
