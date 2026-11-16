// libs/graphics/postprocess/effects/OutlineAndShadowEffect.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics.postprocess

#include "OutlineAndShadowEffect.h"

namespace jag::postprocess {
    // 0x1009b45f0
    OutlineAndShadowEffect::OutlineAndShadowEffect(int arg1, int arg2) : PostProcessEffect(arg1, arg2) {
        new ((field_20 + 12)) shared_ptr();
    }

    // 0x1009b4650
    OutlineAndShadowEffect::~OutlineAndShadowEffect() {
        Destroy();
        ((field_20 + 12))->~shared_ptr();
    }

    // 0x1009b46d0
    void OutlineAndShadowEffect::Init() {
        VertexElementDesc* vertexElementDesc;
        ReturnValue local_38;

        auto str1 = Instance();
        auto local_68 = PostProcessVS::BuildVSFragment();
        auto str2 = local_68.c_str();
        auto local_50 = graphics::shadersourceprovider::GetCompletedShader(41);
        vertexElementDesc = (VertexElementDesc*)local_50.c_str();
        local_38.RegisterFromSourceString(str1, str2, vertexElementDesc, 62757712, '\x02');
        (*((field_20 + 12))) = local_38;
        (*((field_20 + 12))) != nullptr;
    }

    // 0x1009b47b0
    void OutlineAndShadowEffect::Destroy() {
        ((ShaderProgramManager*)Instance())->Unregister(*((field_20 + 12)));
    }

    // 0x1009b47e0
    void OutlineAndShadowEffect::Render(render::RenderContext& renderContext,
                                        const render::RenderTargets* renderTargets, const render::Texture* texture1,
                                        const render::Texture* texture2, const render::Viewport& viewport,
                                        graphics::ViewRenderTargets* viewRenderTargets,
                                        PostProcessManager& postProcessManager) {
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_00;
        compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>* this_01;
        RenderPipelineState* pRVar14;
        Layout* this_02;
        OutputMergerState* pOVar15;
        InputAssemblerState* this_03;
        compressed_pair_imp<eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true>>::Layout,
                            eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true>, 0>* this_04;
        VertexDeclaration* vertexDeclaration;
        GeometryBatch* this_05;
        VertexBuffer* vertexBuffer;
        ShaderProgram* pSVar16;
        HashedString* pHVar17;
        RenderTargets* renderTargets2;
        DrawCallState* pDVar18;
        unsigned int arg1_00;
        int iVar20;
        float arg2;
        uint8_t auVar22[16];
        ImVec4 local_e8;
        Vector4T<float> local_d8;
        float fStack_d0;
        uint32_t uStack_cc;
        uint8_t local_c8[72];
        uint8_t local_78[32];
        int local_4c;
        int local_3c;
        AutoSingleton<ShaderThreadPoolSingleton> local_38;

        local_78._24_8_ = renderTargets;
        auto pvVar9 = renderTargets->GetColourTargetTextures();
        uint64_t* puVar10 = (uint64_t*)(*pvVar9)[0];
        int* piVar11 = (int*)(*puVar10)->second();
        int iVar19 = *piVar11;
        piVar11 = (int*)texture1->second();
        if (iVar19 != *piVar11) {
            LogAssert("dstRT->GetColourTargetTextures()[0]->GetDesc().m_Width == srcTexture->GetDesc().m_Width",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/postprocess/"
                      "effects/OutlineAndShadowEffect.cpp",
                      56, nullptr);
        }
        pvVar9 = (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>*)
                     local_78._24_8_->GetColourTargetTextures();
        puVar10 = (uint64_t*)(*pvVar9)[0];
        long lVar12 = (*puVar10)->second();
        iVar19 = *(int*)(lVar12 + 4);
        lVar12 = texture1->second();
        if (iVar19 != *(int*)(lVar12 + 4)) {
            LogAssert("dstRT->GetColourTargetTextures()[0]->GetDesc().m_Height == srcTexture->GetDesc().m_Height",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/postprocess/"
                      "effects/OutlineAndShadowEffect.cpp",
                      57, nullptr);
        }
        array<render::Texture::Desc, 2ul> local_168;
        puVar10 = (uint64_t*)texture1->second();
        uint64_t* puVar13 = &local_168[0];
        uint64_t uVar1 = *puVar10;
        uint64_t uVar2 = puVar10[1];
        uint64_t uVar3 = puVar10[3];
        uint64_t uVar4 = puVar10[4];
        uint64_t uVar5 = puVar10[5];
        uint64_t uVar6 = puVar10[6];
        uint64_t uVar7 = puVar10[7];
        puVar13[2] = puVar10[2];
        puVar13[3] = uVar3;
        puVar13[4] = uVar4;
        puVar13[5] = uVar5;
        *puVar13 = uVar1;
        puVar13[1] = uVar2;
        puVar13[6] = uVar6;
        puVar13[7] = uVar7;
        *(uint32_t*)(puVar13 + 3) = 0;
        *(uint8_t*)(puVar13 + 4) = 0;
        auto str = postProcessManager.GetRenderTargetsManager();
        new (local_c8) render::Texture::Desc();
        local_78->Register(str, 14779869, *3553, (int)&local_168, DAT_00000001, (unsigned int)(Desc*)local_c8, false);
        if (*local_78 != nullptr) {
            new (local_c8) render::DrawCallState();
            pDVar18 = (DrawCallState*)local_c8;
            this_01 = (compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>*)
                          pDVar18->GetRenderPipelineState();
            lVar12 = pDVar18->Instance();
            eastl::compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>::
                compressed_pair_imp(this_01, (PlayerDataComparator<oldscape::social::FriendChatUser>*)(lVar12 + 1524));
            pDVar18 = (DrawCallState*)local_c8;
            pRVar14 = (RenderPipelineState*)pDVar18->GetRenderPipelineState();
            lVar12 = pDVar18->Instance();
            pRVar14->SetRasteriserState((lVar12 + 1200));
            pDVar18 = (DrawCallState*)local_c8;
            this_02 = (Layout*)pDVar18->GetRenderPipelineState();
            lVar12 = pDVar18->Instance();
            this_02->SetHeapSize((lVar12 + 1080));
            pOVar15 = local_c8->GetOutputMergerState();
            pOVar15->SetViewports(viewport, 1);
            pRVar14 = (RenderPipelineState*)local_c8->GetRenderPipelineState();
            this_00 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)(field_20 + 12);
            pRVar14->SetShaderProgram((BlendMode*)this_00->end());
            this_03 = (InputAssemblerState*)local_c8->GetInputAssemblerState();
            this_04 = (compressed_pair_imp<
                       eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true>>::Layout,
                       eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true>, 0>*)(*this_00)
                          .operator->();
            vertexDeclaration = (VertexDeclaration*)this_04->second();
            this_05 = (GeometryBatch*)postProcessManager.GetRenderToTexture();
            vertexBuffer = (VertexBuffer*)this_05->GetBoneIDMap();
            this_03->SetVertexStreamData(vertexDeclaration, vertexBuffer);
            pSVar16 = (ShaderProgram*)(*this_00).operator->();
            pHVar17 = (HashedString*)postprocess::operator*(2);
            local_4c = pSVar16->GetConstIndex(*pHVar17);
            local_3c = ((*(int*)field_20 - (unsigned int)(*(int*)(field_20 + 8) == 0)) + 2) * *(int*)(field_20 + 4);
            local_c8._64_8_ = this;
            if (0 < local_3c) {
                local_78._16_8_ = (uint64_t)((unsigned int)-local_3c);
                iVar19 = 0;
                do {
                    renderTargets2 = (RenderTargets*)local_78->end();
                    auVar22 = SelectPingPongSrcDstPair(texture1, (RenderTargets*)local_78._24_8_, renderTargets2,
                                                       iVar19, local_3c);
                    pOVar15 = local_c8->GetOutputMergerState();
                    pOVar15->SetRenderTargets(auVar22._8_8_);
                    pRVar14 = (RenderPipelineState*)local_c8->GetRenderPipelineState();
                    pRVar14->SetPSTextureSamplerPair(0, auVar22._0_8_, local_4c, nullptr, false);
                    iVar20 = *(int*)(local_c8._64_8_ + 20) * *(int*)((uint8_t*)(local_c8._64_8_ + 20) + 4);
                    if (iVar19 < iVar20) {
                        arg1_00 = 4294967295;
                        if (iVar19 < *(int*)((uint8_t*)(local_c8._64_8_ + 20) + 4)) {
                            arg1_00 = 4278190082;
                        }
                    } else {
                        arg1_00 = *(unsigned int*)((uint8_t*)(local_c8._64_8_ + 20) + 8);
                    }
                    arg2 = 1.0 / (float)viewport.field_12;
                    local_e8 = ImVec4(1.0 / (float)viewport.field_8, arg2, 0.0, 0.0);
                    pSVar16 = (ShaderProgram*)(*this_00).operator->();
                    pHVar17 = (HashedString*)postprocess::operator*(36);
                    pSVar16->SetShaderConstVector4(pHVar17, 1, &local_e8, 1);
                    math::Colour4FromA8R8G8B8(arg1_00);
                    fStack_d0 = arg2;
                    uStack_cc = 0;
                    pSVar16 = (ShaderProgram*)(*this_00).operator->();
                    pHVar17 = (HashedString*)postprocess::operator*(37);
                    pSVar16->SetShaderConstVector4(pHVar17, 1, &local_d8, 1);
                    pSVar16 = (ShaderProgram*)(*this_00).operator->();
                    pHVar17 = (HashedString*)postprocess::operator*(38);
                    pSVar16->SetShaderConstInt1(pHVar17, (unsigned int)(iVar20 <= iVar19));
                    pSVar16 = (ShaderProgram*)(*this_00).operator->();
                    iVar20 = local_78._16_4_;
                    pHVar17 = (HashedString*)postprocess::operator*(39);
                    pSVar16->SetShaderConstInt1(pHVar17, (unsigned int)(iVar20 + iVar19 == -1));
                    ((RenderToTextureHelper*)postProcessManager.GetRenderToTexture())
                        ->RenderQuad(renderContext, *local_c8);
                    pRVar14 = (RenderPipelineState*)local_c8->GetRenderPipelineState();
                    pRVar14->ClearPSTextureSamplerPairs();
                    iVar19 = iVar19 + 1;
                } while (local_78._16_4_ + iVar19 != 0);
            }
            ((RenderTargetsManager*)postProcessManager.GetRenderTargetsManager())->Unregister(*local_78);
            return;
        }
        LogAssert("intermediateRT != nullptr",
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/postprocess/effects/"
                  "OutlineAndShadowEffect.cpp",
                  65, nullptr);
    }

} // namespace jag::postprocess
