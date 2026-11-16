// libs/graphics/postprocess/effects/DepthOfFieldEffect.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics.postprocess

#include "DepthOfFieldEffect.h"

namespace jag::postprocess {
    // 0x1009b1c50
    DepthOfFieldEffect::DepthOfFieldEffect(int arg1, int arg2) : PostProcessEffect(arg1, arg2) {
        field_20 = '\0';
        field_21 = '\0';
        new (field_24) DepthOfFieldEffectConfig();
        new (&field_96) shared_ptr();
        new (&field_112) shared_ptr();
        new (field_128) shared_ptr();
        new (&field_144) shared_ptr();
        new (&field_160) shared_ptr();
        new (field_176) shared_ptr();
        new (field_192) shared_ptr();
        new (&field_208) shared_ptr();
        new (&field_224) shared_ptr();
        new (field_240) render::InputAssemblerState();
    }

    // 0x1009b1de0
    DepthOfFieldEffect::~DepthOfFieldEffect() {
        Destroy();
        field_240->~InputAssemblerState();
        field_224.~shared_ptr();
        field_208.~shared_ptr();
        field_192->~shared_ptr();
        field_176->~shared_ptr();
        field_160.~shared_ptr();
        field_144.~shared_ptr();
        field_128->~shared_ptr();
        field_112.~shared_ptr();
        field_96.~shared_ptr();
    }

    // 0x1009b1f30
    uint64_t DepthOfFieldEffect::Init() {
        uint8_t local_178[280];
        ReturnValue local_60;

        Destroy();
        auto pcVar1 = Instance();
        *local_178 = PostProcessVS::BuildVSFragment();
        auto pcVar2 = local_178->c_str();
        auto local_50 = graphics::shadersourceprovider::GetCompletedShader(13);
        auto pVVar3 = local_50.c_str();
        local_38.RegisterFromSourceString(pcVar1, pcVar2, pVVar3, 62757712, '\x02');
        *field_128 = local_38;
        basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>>* pbVar4 =
            (basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>>*)local_178;
        pbVar4->~basic_string();
        pcVar1 = (char*)pbVar4->Instance();
        *local_178 = PostProcessVS::BuildVSFragment();
        pcVar2 = (char*)local_178->c_str();
        local_50 = graphics::shadersourceprovider::GetCompletedShader(15);
        pVVar3 = (VertexElementDesc*)local_50.c_str();
        local_38.RegisterFromSourceString(pcVar1, pcVar2, pVVar3, 62757712, '\x02');
        field_96 = local_38;
        pbVar4 = (basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>>*)local_178;
        pbVar4->~basic_string();
        pcVar1 = (char*)pbVar4->Instance();
        *local_178 = PostProcessVS::BuildVSFragment();
        pcVar2 = (char*)local_178->c_str();
        local_50 = graphics::shadersourceprovider::GetCompletedShader(14);
        pVVar3 = (VertexElementDesc*)local_50.c_str();
        local_38.RegisterFromSourceString(pcVar1, pcVar2, pVVar3, 62757712, '\x02');
        field_112 = local_38;
        new (local_178) render::PixelShaderSourceStream(1, 1, 1, 1, 1, 1, 24);
        basic_ostream<char, std::char_traits<char> _>* pbVar5 =
            (basic_ostream<char, std::char_traits<char> _>*)(local_178 + 16);
        std::operator<<(pbVar5, "\n#define SCENE_BLUR_NEAR\n");
        pcVar1 = graphics::shadersourceprovider::GetShaderString(16);
        std::operator<<(pbVar5, pcVar1);
        pcVar1 = (char*)pbVar5->Instance();
        local_50 = PostProcessVS::BuildVSFragment();
        pcVar2 = (char*)local_50.c_str();
        auto local_38 = local_178->str();
        pVVar3 = (VertexElementDesc*)local_38.c_str();
        local_60.RegisterFromSourceString(pcVar1, pcVar2, pVVar3, 62757712, '\x02');
        field_144 = local_60;
        new (local_178) render::PixelShaderSourceStream(1, 1, 1, 1, 1, 1, 24);
        pbVar5 = (basic_ostream<char, std::char_traits<char> _>*)(local_178 + 16);
        std::operator<<(pbVar5, "\n#define SCENE_BLUR_FAR\n");
        pcVar1 = graphics::shadersourceprovider::GetShaderString(16);
        std::operator<<(pbVar5, pcVar1);
        pcVar1 = (char*)pbVar5->Instance();
        local_50 = PostProcessVS::BuildVSFragment();
        pcVar2 = (char*)local_50.c_str();
        local_38 = local_178->str();
        pVVar3 = (VertexElementDesc*)local_38.c_str();
        local_60.RegisterFromSourceString(pcVar1, pcVar2, pVVar3, 62757712, '\x02');
        field_160 = local_60;
        return 1;
    }

    // 0x1009b23a0
    void DepthOfFieldEffect::Destroy() {
        auto pSVar1 = Instance();
        pSVar1->Unregister(*field_128);
        pSVar1 = (ShaderProgramManager*)pSVar1->Instance();
        pSVar1->Unregister(field_96);
        pSVar1 = (ShaderProgramManager*)pSVar1->Instance();
        pSVar1->Unregister(field_112);
        pSVar1 = (ShaderProgramManager*)pSVar1->Instance();
        pSVar1->Unregister(field_144);
        pSVar1 = (ShaderProgramManager*)pSVar1->Instance();
        pSVar1->Unregister(field_160);
    }

    // 0x1009b2420
    void DepthOfFieldEffect::CreateRenderTargets(render::RenderTargetsManager& renderTargetsManager,
                                                 const render::Texture* texture1, const render::Texture* texture2,
                                                 const render::Texture* texture3) {
        long* plVar1;
        uint64_t uVar2;
        uint64_t uVar3;
        uint64_t uVar4;
        uint64_t uVar5;
        uint64_t uVar6;
        uint64_t uVar7;
        uint64_t uVar8;
        uint64_t* puVar10;
        unsigned int* puVar11;
        RenderTargets* pRVar12;
        vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>* pvVar13;
        long lVar14;
        uint8_t local_110[192];
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_40;

        RenderTargetsManager* pRVar15 = renderTargetsManager;
        if (field_24[54] != '\0') {
            new ((local_110 + 64)) std::array<render::Texture::Desc, 2ul>();
            puVar10 = (uint64_t*)texture1->second();
            puVar11 = (unsigned int*)(*((local_110 + 64)))[(unsigned long)pRVar15];
            uVar2 = *puVar10;
            uVar3 = puVar10[1];
            uVar4 = puVar10[2];
            uVar5 = puVar10[3];
            uVar6 = puVar10[4];
            uVar7 = puVar10[5];
            uVar8 = puVar10[7];
            *(uint64_t*)(puVar11 + 12) = puVar10[6];
            *(uint64_t*)(puVar11 + 14) = uVar8;
            *(uint64_t*)(puVar11 + 8) = uVar6;
            *(uint64_t*)(puVar11 + 10) = uVar7;
            *(uint64_t*)(puVar11 + 4) = uVar4;
            *(uint64_t*)(puVar11 + 6) = uVar5;
            *(uint64_t*)puVar11 = uVar2;
            *(uint64_t*)(puVar11 + 2) = uVar3;
            if (field_24[53] != '\0') {
                *puVar11 = *puVar11 >> 1;
                puVar11[1] = puVar11[1] >> 1;
            }
            puVar11[6] = 0;
            *(uint8_t*)(puVar11 + 8) = 0;
            new (local_110) render::Texture::Desc();
            local_40.Register(renderTargetsManager, 14779514, *3553, (int)local_110 + 64, DAT_00000001,
                              (unsigned int)(Desc*)local_110, false);
            *field_192 = local_40;
            pRVar12 = (RenderTargets*)(*field_192).operator->();
            pvVar13 = (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>*)
                          pRVar12->GetColourTargetTextures();
            puVar10 = (uint64_t*)(*pvVar13)[0];
            plVar1 = (long*)*puVar10;
            lVar14 = pvVar13->Instance();
            pRVar15 = (RenderTargetsManager*)(lVar14 + 208);
            (**(void (**)(...))(*plVar1 + 24))(plVar1, pRVar15, 0);
        }
        if (field_24[55] != '\0') {
            new ((local_110 + 64)) std::array<render::Texture::Desc, 2ul>();
            puVar10 = (uint64_t*)texture2->second();
            puVar11 = (unsigned int*)(*((local_110 + 64)))[(unsigned long)pRVar15];
            uVar2 = *puVar10;
            uVar3 = puVar10[1];
            uVar4 = puVar10[2];
            uVar5 = puVar10[3];
            uVar6 = puVar10[4];
            uVar7 = puVar10[5];
            uVar8 = puVar10[7];
            *(uint64_t*)(puVar11 + 12) = puVar10[6];
            *(uint64_t*)(puVar11 + 14) = uVar8;
            *(uint64_t*)(puVar11 + 8) = uVar6;
            *(uint64_t*)(puVar11 + 10) = uVar7;
            *(uint64_t*)(puVar11 + 4) = uVar4;
            *(uint64_t*)(puVar11 + 6) = uVar5;
            *(uint64_t*)puVar11 = uVar2;
            *(uint64_t*)(puVar11 + 2) = uVar3;
            if (field_24[53] != '\0') {
                *puVar11 = *puVar11 >> 1;
                puVar11[1] = puVar11[1] >> 1;
            }
            puVar11[6] = 0;
            *(uint8_t*)(puVar11 + 8) = 0;
            new (local_110) render::Texture::Desc();
            local_40.Register(renderTargetsManager, 14779528, *3553, (int)local_110 + 64, DAT_00000001,
                              (unsigned int)(Desc*)local_110, false);
            *field_176 = local_40;
            pRVar12 = (RenderTargets*)(*field_176).operator->();
            pvVar13 = (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>*)
                          pRVar12->GetColourTargetTextures();
            puVar10 = (uint64_t*)(*pvVar13)[0];
            plVar1 = (long*)*puVar10;
            lVar14 = pvVar13->Instance();
            (**(void (**)(...))(*plVar1 + 24))(plVar1, lVar14 + 208, 0);
        }
        new ((local_110 + 64)) std::array<render::Texture::Desc, 2ul>();
        puVar11 = (unsigned int*)texture3->second();
        unsigned int uVar16 = *puVar11;
        unsigned long arg1 = (unsigned long)*(unsigned int*)(field_24 + 48);
        unsigned int uVar9 = math::IntegerExponentPow<int>(2, *(unsigned int*)(field_24 + 48));
        puVar11 = (unsigned int*)(*((local_110 + 64)))[arg1];
        *puVar11 = uVar16 / uVar9;
        lVar14 = texture3->second();
        uVar16 = *(unsigned int*)(lVar14 + 4);
        uVar9 = math::IntegerExponentPow<int>(2, *(unsigned int*)(field_24 + 48));
        puVar11[1] = uVar16 / uVar9;
        puVar11[6] = 0;
        *(uint8_t*)(puVar11 + 8) = 0;
        puVar11[3] = 18;
        new (local_110) render::Texture::Desc();
        pRVar15 = renderTargetsManager;
        uVar16 = (unsigned int)(Desc*)local_110;
        local_40.Register(renderTargetsManager, 14779541, *3553, (int)local_110 + 64, DAT_00000001, uVar16, false);
        field_208 = local_40;
        pRVar12 = (RenderTargets*)field_208.operator->();
        pvVar13 = (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>*)
                      pRVar12->GetColourTargetTextures();
        puVar10 = (uint64_t*)(*pvVar13)[0];
        plVar1 = (long*)*puVar10;
        lVar14 = pvVar13->Instance();
        (**(void (**)(...))(*plVar1 + 24))(plVar1, lVar14 + 208, 0);
        new (local_110) render::Texture::Desc();
        local_40.Register(pRVar15, 14779553, *3553, (int)local_110 + 64, DAT_00000001, uVar16, false);
        field_224 = local_40;
        pRVar12 = (RenderTargets*)field_224.operator->();
        pvVar13 = (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>*)
                      pRVar12->GetColourTargetTextures();
        puVar10 = (uint64_t*)(*pvVar13)[0];
        plVar1 = (long*)*puVar10;
        lVar14 = pvVar13->Instance();
        (**(void (**)(...))(*plVar1 + 24))(plVar1, lVar14 + 208, 0);
    }

    // 0x1009b2820
    void DepthOfFieldEffect::DestroyRenderTargets(render::RenderTargetsManager& renderTargetsManager) {
        renderTargetsManager.Unregister(field_224);
        renderTargetsManager.Unregister(field_208);
        renderTargetsManager.Unregister(*field_176);
        renderTargetsManager.Unregister(*field_192);
    }

    // 0x1009b2880
    void DepthOfFieldEffect::SetSharedState(const render::ShaderProgram& shaderProgram,
                                            const ViewTransforms& viewTransforms) {
        viewTransforms.GetNearFarPlaneDistances(0.0, 0.0);
        auto pHVar3 = postprocess::operator*(41);
        int iVar2 = shaderProgram.GetConstIndex(*pHVar3);
        shaderProgram.SetShaderConstFloat1(iVar2, *(float*)(field_24 + 16));
        pHVar3 = (HashedString*)postprocess::operator*(11);
        shaderProgram.SetShaderConstFloat4(pHVar3, 0.0 * 0.0, 0.0 - 0.0, 0.0, 0.0);
        pHVar3 = (HashedString*)postprocess::operator*(42);
        iVar2 = shaderProgram.GetConstIndex(*pHVar3);
        float fVar10 = -1.0;
        float fVar9 = -1.0;
        if (field_24[54] != '\0') {
            fVar9 = *(float*)field_24;
        }
        float arg3 = -1.0;
        if (field_24[54] != '\0') {
            arg3 = *(float*)(field_24 + 4);
        }
        float arg4 = -1.0;
        if (field_24[55] != '\0') {
            arg4 = *(float*)(field_24 + 8);
            fVar10 = *(float*)(field_24 + 12);
        }
        shaderProgram.SetShaderConstFloat4(iVar2, fVar9, arg3, arg4, fVar10);
        pHVar3 = (HashedString*)postprocess::operator*(43);
        iVar2 = shaderProgram.GetConstIndex(*pHVar3);
        fVar10 = 1e+06;
        fVar9 = 1e+06;
        if (field_24[52] != '\0') {
            fVar9 = *(float*)(field_24 + 20);
            fVar10 = *(float*)(field_24 + 24);
        }
        shaderProgram.SetShaderConstFloat4(iVar2, fVar9, fVar10, *(float*)(field_24 + 28), *(float*)(field_24 + 32));
        pHVar3 = (HashedString*)postprocess::operator*(44);
        iVar2 = shaderProgram.GetConstIndex(*pHVar3);
        auto pRVar4 = field_208.operator->();
        auto pvVar5 = pRVar4->GetColourTargetTextures();
        uint64_t* puVar6 = (uint64_t*)(*pvVar5)[0];
        unsigned int* puVar7 = (unsigned int*)(*puVar6)->second();
        unsigned int uVar1 = *puVar7;
        pRVar4 = (RenderTargets*)field_208.operator->();
        pvVar5 = (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>*)
                     pRVar4->GetColourTargetTextures();
        puVar6 = (uint64_t*)(*pvVar5)[0];
        long lVar8 = (*puVar6)->second();
        shaderProgram.SetShaderConstFloat2(iVar2, 1.0 / (float)uVar1, 1.0 / (float)*(unsigned int*)(lVar8 + 4));
    }

    // 0x1009b2a60
    uint8_t DepthOfFieldEffect::GetRequirements() const {
        unsigned int uVar2 = (uint8_t)field_24[53] ^ 1;
        uint8_t bVar1 = 3;
        if (*(unsigned int*)(field_24 + 36) <= uVar2) {
            bVar1 = uVar2 < *(unsigned int*)(field_24 + 40) | 2;
        }
        return (*(int*)(field_24 + 44) != 0) << 2 | bVar1;
    }

    // 0x1009b2a90
    void DepthOfFieldEffect::Render(render::RenderContext& renderContext, const render::RenderTargets* renderTargets,
                                    const render::Texture* texture1, const render::Texture* texture2,
                                    const render::Viewport& viewport, graphics::ViewRenderTargets* viewRenderTargets,
                                    PostProcessManager& postProcessManager) {
        uint8_t* puVar1;
        uint8_t* this_00;
        Array<shared_ptr<render::RenderTargets>>* pAVar3;
        shared_ptr<render::RenderTargets>* psVar4;
        RenderTargets* pRVar5;
        vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>* pvVar6;
        uint64_t* puVar7;
        RenderTargetsManager* pRVar8;
        Layout* pLVar9;
        long lVar10;
        int* piVar11;
        OutputMergerState* pOVar12;
        RenderPipelineState* pRVar13;
        BlendMode* pBVar14;
        compressed_pair_imp<eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true>>::Layout,
                            eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true>, 0>* pcVar15;
        VertexDeclaration* pVVar16;
        GeometryBatch* pGVar17;
        VertexBuffer* pVVar18;
        ShaderProgram* pSVar19;
        ViewTransforms* pVVar20;
        HashedString* pHVar21;
        RenderToTextureHelper* pRVar22;
        KawaseBlurFilter* pKVar23;
        RenderTargets* this_01;
        InputAssemblerState* this_02;
        int iVar24;
        Texture* pTVar25;
        DrawCallState* pDVar26;
        int iVar27;
        uint8_t local_c8[32];
        Texture* local_a0;
        Texture* local_98;
        Texture* local_78;
        shared_ptr<render::RenderTargets>* local_70;
        DrawCallState local_60;

        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* local_80 =
            (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)field_128;
        local_c8._24_8_ = viewport;
        if (local_80->operator_cast_to_bool() != '\0') {
            iVar24 = *(int*)(field_24 + 36);
            iVar27 = *(int*)(field_24 + 40);
            if (field_24[53] != '\0') {
                iVar24 = iVar24 - 1 + (unsigned int)(iVar24 == 0);
                iVar27 = iVar27 - 1 + (unsigned int)(iVar27 == 0);
            }
            local_78 = texture1;
            if (iVar24 != 0) {
                pAVar3 = (Array<shared_ptr<render::RenderTargets>>*)postProcessManager.GetDownSampledSourceRTs();
                psVar4 = (shared_ptr<render::RenderTargets>*)(*pAVar3)[(unsigned long)(iVar24 - 1)];
                pRVar5 = (RenderTargets*)(*psVar4).operator->();
                pvVar6 = (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>*)
                             pRVar5->GetColourTargetTextures();
                puVar7 = (uint64_t*)(*pvVar6)[0];
                local_78 = (Texture*)*puVar7;
            }
            pTVar25 = texture1;
            if (iVar27 != 0) {
                pAVar3 = (Array<shared_ptr<render::RenderTargets>>*)postProcessManager.GetDownSampledSourceRTs();
                psVar4 = (shared_ptr<render::RenderTargets>*)(*pAVar3)[(unsigned long)(iVar27 - 1)];
                pRVar5 = (RenderTargets*)(*psVar4).operator->();
                pvVar6 = (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>*)
                             pRVar5->GetColourTargetTextures();
                puVar7 = (uint64_t*)(*pvVar6)[0];
                pTVar25 = (Texture*)*puVar7;
            }
            local_98 = texture2;
            if (*(int*)(field_24 + 44) != 0) {
                pAVar3 = (Array<shared_ptr<render::RenderTargets>>*)postProcessManager.GetPointLightBounds();
                psVar4 = (shared_ptr<render::RenderTargets>*)(*pAVar3)[(unsigned long)(*(int*)(field_24 + 44) - 1)];
                pRVar5 = (RenderTargets*)(*psVar4).operator->();
                local_98 = (Texture*)pRVar5->GetDepthStencilTargetTexture();
            }
            pRVar8 = (RenderTargetsManager*)postProcessManager.GetRenderTargetsManager();
            local_a0 = pTVar25;
            CreateRenderTargets(*pRVar8, local_78, pTVar25, texture2);
            pDVar26 = &local_60;
            new (pDVar26) render::DrawCallState();
            pLVar9 = (Layout*)pDVar26->GetRenderPipelineState();
            lVar10 = pDVar26->Instance();
            pLVar9->SetHeapSize((lVar10 + 1080));
            this_00 = &field_208;
            pRVar5 = (RenderTargets*)(*this_00).operator->();
            pvVar6 = (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>*)
                         pRVar5->GetColourTargetTextures();
            puVar7 = (uint64_t*)(*pvVar6)[0];
            piVar11 = (int*)(*puVar7)->second();
            iVar24 = *piVar11;
            pRVar5 = (RenderTargets*)(*this_00).operator->();
            pvVar6 = (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>*)
                         pRVar5->GetColourTargetTextures();
            puVar7 = (uint64_t*)(*pvVar6)[0];
            lVar10 = (*puVar7)->second();
            new (local_c8) render::Viewport(0, 0, iVar24, *(int*)(lVar10 + 4), 0.0, 1.0);
            pOVar12 = local_60.GetOutputMergerState();
            pOVar12->SetViewports(local_c8, 1);
            pOVar12 = local_60.GetOutputMergerState();
            pRVar5 = (RenderTargets*)this_00->end();
            pOVar12->SetRenderTargets(pRVar5);
            pRVar13 = (RenderPipelineState*)local_60.GetRenderPipelineState();
            puVar1 = &field_96;
            pBVar14 = (BlendMode*)puVar1->end();
            pRVar13->SetShaderProgram(pBVar14);
            pcVar15 = (compressed_pair_imp<
                       eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true>>::Layout,
                       eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true>, 0>*)(*puVar1)
                          .operator->();
            pVVar16 = (VertexDeclaration*)pcVar15->second();
            pGVar17 = (GeometryBatch*)postProcessManager.GetRenderToTexture();
            pVVar18 = (VertexBuffer*)pGVar17->GetBoneIDMap();
            field_240->SetVertexStreamData(pVVar16, pVVar18);
            local_60.SetInputAssemblerState(field_240);
            pSVar19 = (ShaderProgram*)**puVar1;
            pTVar25 = local_98;
            pVVar20 = postProcessManager.GetViewTransforms();
            SetSharedState(*pSVar19, *pVVar20);
            pRVar13 = (RenderPipelineState*)local_60.GetRenderPipelineState();
            pHVar21 = (HashedString*)postprocess::operator*(3);
            iVar24 = pSVar19->GetConstIndex(*pHVar21);
            pRVar13->SetPSTextureSamplerPair(0, pTVar25, iVar24, nullptr, false);
            pRVar22 = (RenderToTextureHelper*)postProcessManager.GetRenderToTexture();
            pRVar22->RenderQuad(renderContext, local_60);
            pKVar23 = postProcessManager.GetKawaseBlurFilter();
            local_60 = render::DrawCallState();
            local_70 = (shared_ptr<render::RenderTargets>*)&field_224;
            pRVar5 = (RenderTargets*)**local_70;
            this_01 = (RenderTargets*)(*this_00).operator->();
            pvVar6 = (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>*)
                         this_01->GetColourTargetTextures();
            puVar7 = (uint64_t*)(*pvVar6)[0];
            pKVar23->BlurMultiPass(renderContext, local_60, *pRVar5, *(*puVar7), *(KawaseKernelSize*)(field_24 + 64),
                                   field_112, 0);
            if (field_24[55] != '\0') {
                local_60 = render::DrawCallState();
                puVar1 = &field_160;
                pSVar19 = (ShaderProgram*)**puVar1;
                pVVar20 = postProcessManager.GetViewTransforms();
                SetSharedState(*pSVar19, *pVVar20);
                pRVar13 = (RenderPipelineState*)local_60.GetRenderPipelineState();
                pSVar19 = (ShaderProgram*)(*puVar1).operator->();
                pHVar21 = (HashedString*)postprocess::operator*(3);
                iVar24 = pSVar19->GetConstIndex(*pHVar21);
                pRVar13->SetPSTextureSamplerPair(1, pTVar25, iVar24, nullptr, false);
                pRVar13 = (RenderPipelineState*)local_60.GetRenderPipelineState();
                pRVar5 = (RenderTargets*)(*local_70).operator->();
                pvVar6 = (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>*)
                             pRVar5->GetColourTargetTextures();
                puVar7 = (uint64_t*)(*pvVar6)[0];
                pTVar25 = (Texture*)*puVar7;
                pSVar19 = (ShaderProgram*)(*puVar1).operator->();
                pHVar21 = (HashedString*)postprocess::operator*(47);
                iVar24 = pSVar19->GetConstIndex(*pHVar21);
                pRVar13->SetPSTextureSamplerPair(2, pTVar25, iVar24, nullptr, false);
                pKVar23 = postProcessManager.GetKawaseBlurFilter();
                pRVar5 = (RenderTargets*)**field_176;
                pKVar23->BlurMultiPass(renderContext, local_60, *pRVar5, *local_a0, *(KawaseKernelSize*)(field_24 + 56),
                                       *puVar1, 0);
            }
            if (field_24[54] != '\0') {
                local_60 = render::DrawCallState();
                puVar1 = &field_144;
                pSVar19 = (ShaderProgram*)**puVar1;
                pVVar20 = postProcessManager.GetViewTransforms();
                SetSharedState(*pSVar19, *pVVar20);
                pRVar13 = (RenderPipelineState*)local_60.GetRenderPipelineState();
                pRVar5 = (RenderTargets*)(*local_70).operator->();
                pvVar6 = (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>*)
                             pRVar5->GetColourTargetTextures();
                puVar7 = (uint64_t*)(*pvVar6)[0];
                pTVar25 = (Texture*)*puVar7;
                pSVar19 = (ShaderProgram*)(*puVar1).operator->();
                pHVar21 = (HashedString*)postprocess::operator*(47);
                iVar24 = pSVar19->GetConstIndex(*pHVar21);
                pRVar13->SetPSTextureSamplerPair(2, pTVar25, iVar24, nullptr, false);
                pKVar23 = postProcessManager.GetKawaseBlurFilter();
                pRVar5 = (RenderTargets*)**field_192;
                pKVar23->BlurMultiPass(renderContext, local_60, *pRVar5, *local_78, *(KawaseKernelSize*)(field_24 + 60),
                                       *puVar1, 0);
            }
            local_60 = render::DrawCallState();
            pOVar12 = local_60.GetOutputMergerState();
            pOVar12->SetViewports(local_c8._24_8_, 1);
            pOVar12 = local_60.GetOutputMergerState();
            pOVar12->SetRenderTargets(renderTargets);
            pRVar13 = (RenderPipelineState*)local_60.GetRenderPipelineState();
            pBVar14 = (BlendMode*)local_80->end();
            pRVar13->SetShaderProgram(pBVar14);
            this_02 = (InputAssemblerState*)local_60.GetInputAssemblerState();
            pcVar15 = (compressed_pair_imp<
                       eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true>>::Layout,
                       eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true>, 0>*)(*local_80)
                          .operator->();
            pVVar16 = (VertexDeclaration*)pcVar15->second();
            pGVar17 = (GeometryBatch*)postProcessManager.GetRenderToTexture();
            pVVar18 = (VertexBuffer*)pGVar17->GetBoneIDMap();
            this_02->SetVertexStreamData(pVVar16, pVVar18);
            pSVar19 = (ShaderProgram*)**local_80;
            pVVar20 = postProcessManager.GetViewTransforms();
            SetSharedState(*pSVar19, *pVVar20);
            pRVar13 = (RenderPipelineState*)local_60.GetRenderPipelineState();
            pHVar21 = (HashedString*)postprocess::operator*(2);
            iVar24 = pSVar19->GetConstIndex(*pHVar21);
            pRVar13->SetPSTextureSamplerPair(0, texture1, iVar24, nullptr, false);
            if (field_24[55] != '\0') {
                pRVar13 = (RenderPipelineState*)local_60.GetRenderPipelineState();
                pRVar5 = (RenderTargets*)(*field_176).operator->();
                pvVar6 = (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>*)
                             pRVar5->GetColourTargetTextures();
                puVar7 = (uint64_t*)(*pvVar6)[0];
                pTVar25 = (Texture*)*puVar7;
                pHVar21 = (HashedString*)postprocess::operator*(46);
                iVar24 = pSVar19->GetConstIndex(*pHVar21);
                pRVar13->SetPSTextureSamplerPair(1, pTVar25, iVar24, nullptr, false);
            }
            if (field_24[54] != '\0') {
                pRVar13 = (RenderPipelineState*)local_60.GetRenderPipelineState();
                pRVar5 = (RenderTargets*)(*field_192).operator->();
                pvVar6 = (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>*)
                             pRVar5->GetColourTargetTextures();
                puVar7 = (uint64_t*)(*pvVar6)[0];
                pTVar25 = (Texture*)*puVar7;
                pHVar21 = (HashedString*)postprocess::operator*(45);
                iVar24 = pSVar19->GetConstIndex(*pHVar21);
                pRVar13->SetPSTextureSamplerPair(2, pTVar25, iVar24, nullptr, false);
            }
            pRVar13 = (RenderPipelineState*)local_60.GetRenderPipelineState();
            pRVar5 = (RenderTargets*)(*local_70).operator->();
            pvVar6 = (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>*)
                         pRVar5->GetColourTargetTextures();
            puVar7 = (uint64_t*)(*pvVar6)[0];
            pTVar25 = (Texture*)*puVar7;
            pHVar21 = (HashedString*)postprocess::operator*(47);
            iVar24 = pSVar19->GetConstIndex(*pHVar21);
            pRVar13->SetPSTextureSamplerPair(3, pTVar25, iVar24, nullptr, false);
            pRVar13 = (RenderPipelineState*)local_60.GetRenderPipelineState();
            pHVar21 = (HashedString*)postprocess::operator*(3);
            iVar24 = pSVar19->GetConstIndex(*pHVar21);
            pRVar13->SetPSTextureSamplerPair(4, texture2, iVar24, nullptr, false);
            pDVar26 = &local_60;
            pLVar9 = (Layout*)pDVar26->GetRenderPipelineState();
            lVar10 = pDVar26->Instance();
            pLVar9->SetHeapSize((lVar10 + 1080));
            pRVar22 = (RenderToTextureHelper*)postProcessManager.GetRenderToTexture();
            pRVar22->RenderQuad(renderContext, local_60);
            if ((field_20 == '\0') && (field_21 == '\0')) {
                pRVar8 = (RenderTargetsManager*)postProcessManager.GetRenderTargetsManager();
                DestroyRenderTargets(*pRVar8);
            }
        }
    }

    // 0x1009b37b0
    void DepthOfFieldEffect::RenderDebug(const render::Viewport& viewport) {
        uint64_t uVar1;
        int iVar3;
        long* plVar4;
        RenderTargets* pRVar5;
        vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>* pvVar6;
        uint64_t* puVar7;
        shared_ptr* psVar8;
        shared_ptr<render::RenderTargets>* psVar9;
        ImVec4 local_60;
        Point<float> local_50;
        uint8_t local_48[16];
        uint8_t local_38[8];

        if ((field_20 != '\0') || (field_21 != '\0')) {
            psVar8 = (shared_ptr*)field_176;
            if (field_21 == '\0') {
                psVar8 = (shared_ptr*)&field_208;
            }
            if (shared_ptr::operator_cast_to_bool(psVar8)) {
                plVar4 = DebugPrimitiveCollectorBasic::GetCollector("");
                if (plVar4 != nullptr) {
                    psVar9 = (shared_ptr<render::RenderTargets>*)field_176;
                    if (field_21 == '\0') {
                        psVar9 = (shared_ptr<render::RenderTargets>*)&field_208;
                    }
                    pRVar5 = (RenderTargets*)(*psVar9).operator->();
                    pvVar6 = (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>*)
                                 pRVar5->GetColourTargetTextures();
                    puVar7 = (uint64_t*)(*pvVar6)[0];
                    uVar1 = *puVar7;
                    local_60 = ImVec4(0.0, 0.0, 0.5, 0.5);
                    new ((local_48 + 8)) math::Point(0.0, 0.0);
                    local_50 = math::Point(1.0, 1.0);
                    new (local_38) math::ColourStorage8888(255, 255, 255, 255);
                    iVar3 = local_38->GetX();
                    new (local_48) oldscape::sidebars::SideBarData(iVar3, 0);
                    (**(void (**)(...))(*plVar4 + 112))(plVar4, uVar1, &local_60, local_48 + 8, &local_50, 0, 0, 0,
                                                        (SideBarData*)local_48);
                }
            }
            psVar8 = (shared_ptr*)field_192;
            if (field_21 == '\0') {
                psVar8 = (shared_ptr*)&field_224;
            }
            if (shared_ptr::operator_cast_to_bool(psVar8)) {
                plVar4 = DebugPrimitiveCollectorBasic::GetCollector("");
                if (plVar4 != nullptr) {
                    psVar9 = (shared_ptr<render::RenderTargets>*)field_192;
                    if (field_21 == '\0') {
                        psVar9 = (shared_ptr<render::RenderTargets>*)&field_224;
                    }
                    pRVar5 = (RenderTargets*)(*psVar9).operator->();
                    pvVar6 = (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>*)
                                 pRVar5->GetColourTargetTextures();
                    puVar7 = (uint64_t*)(*pvVar6)[0];
                    uVar1 = *puVar7;
                    local_60 = ImVec4(0.0, 0.5, 0.5, 0.5);
                    new ((local_48 + 8)) math::Point(0.0, 0.0);
                    local_50 = math::Point(1.0, 1.0);
                    new (local_38) math::ColourStorage8888(255, 255, 255, 255);
                    iVar3 = local_38->GetX();
                    new (local_48) oldscape::sidebars::SideBarData(iVar3, 0);
                    (**(void (**)(...))(*plVar4 + 112))(plVar4, uVar1, &local_60, local_48 + 8, &local_50, 0, 0, 0,
                                                        (SideBarData*)local_48);
                }
            }
        }
    }

} // namespace jag::postprocess
