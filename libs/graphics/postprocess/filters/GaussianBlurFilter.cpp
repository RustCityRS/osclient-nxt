// libs/graphics/postprocess/filters/GaussianBlurFilter.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics.postprocess

#include "GaussianBlurFilter.h"

namespace jag::postprocess {
    // 0x1009aa550
    bool GaussianBlurFilter::Init() {
        basic_ostream<char, std::char_traits<char> _>* basic_ostream;
        uint8_t local_180[280];
        ReturnValue local_68;
        ReturnValue local_40;

        auto pcVar1 = Instance();
        *local_180 = PostProcessVS::BuildVSFragment();
        auto pcVar2 = local_180->c_str();
        auto local_58 = graphics::shadersourceprovider::GetCompletedShader(22);
        auto pVVar3 = local_58.c_str();
        local_40.RegisterFromSourceString(pcVar1, pcVar2, pVVar3, 62757712, '\x02');
        field_16 = local_40;
        basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>>* this_01 =
            (basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>>*)local_180;
        this_01->~basic_string();
        long lVar4 = ((MapArea*)this_01->Instance())->GetOrigin();
        if (*(char*)(lVar4 + 146) != '\0') {
            new (local_180) render::PixelShaderSourceStream(1, 1, 1, 1, 1, 1, 24);
            basic_ostream = std::operator<<((basic_ostream<char, std::char_traits<char> _>*)(local_180 + 16),
                                            "#define USE_TEXTURE_ARRAY;\n");
            pcVar1 = graphics::shadersourceprovider::GetShaderString(22);
            std::operator<<(basic_ostream, pcVar1);
            pcVar1 = (char*)basic_ostream->Instance();
            local_58 = PostProcessVS::BuildVSFragment();
            pcVar2 = (char*)local_58.c_str();
            local_40 = local_180->str();
            pVVar3 = (VertexElementDesc*)local_40.c_str();
            local_68.RegisterFromSourceString(pcVar1, pcVar2, pVVar3, 62757712, '\x02');
            field_32 = local_68;
        }
        lVar4 = field_16.end();
        return lVar4 != 0;
    }

    // 0x1009aaff0
    void GaussianBlurFilter::Destroy() {
        auto pSVar1 = Instance();
        pSVar1->Unregister(field_16);
        pSVar1 = (ShaderProgramManager*)pSVar1->Instance();
        pSVar1->Unregister(field_32);
    }

    // 0x1009b0c50
    void GaussianBlurFilter::BlurMultiPass13Tap(render::RenderContext& renderContext,
                                                render::RenderTargets& renderTargets, const render::Texture& texture,
                                                float arg4, int arg5, int arg6) const {
        long* plVar1;
        float fVar8;
        RenderTargets* pRVar18;
        compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>* this_00;
        RenderPipelineState* pRVar19;
        Layout* this_01;
        OutputMergerState* pOVar20;
        ShaderProgram* this_02;
        InputAssemblerState* this_03;
        VertexDeclaration* vertexDeclaration;
        VertexBuffer* vertexBuffer;
        HashedString* pHVar22;
        Vector4T<float>* vector4;
        DrawCallState* pDVar24;
        uint8_t local_c8[72];
        uint8_t local_78[24];
        int local_60;
        unsigned int local_5c;
        AutoSingleton<ShaderThreadPoolSingleton> local_38;

        local_78._20_4_ = arg4;
        GaussianBlurFilter* local_50 = this;
        int local_34 = arg5;
        auto pvVar13 = renderTargets.GetColourTargetTextures();
        uint64_t* puVar14 = (uint64_t*)(*pvVar13)[0];
        int iVar10 = (*puVar14)->GetMaxLineWidth();
        int iVar11 = texture.GetMaxLineWidth();
        if (iVar10 != iVar11) {
            LogAssert("dstRT.GetColourTargetTextures()[0]->GetType() == srcTexture.GetType()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/postprocess/"
                      "filters/GaussianBlurFilter.cpp",
                      63, nullptr);
        }
        pvVar13 = (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>*)
                      renderTargets.GetColourTargetTextures();
        puVar14 = (uint64_t*)(*pvVar13)[0];
        int* piVar15 = (int*)(*puVar14)->second();
        iVar10 = *piVar15;
        piVar15 = (int*)texture.second();
        if (iVar10 != *piVar15) {
            LogAssert("dstRT.GetColourTargetTextures()[0]->GetDesc().m_Width == srcTexture.GetDesc().m_Width",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/postprocess/"
                      "filters/GaussianBlurFilter.cpp",
                      64, nullptr);
        }
        float local_3c = (float)arg6;
        pvVar13 = (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>*)
                      renderTargets.GetColourTargetTextures();
        puVar14 = (uint64_t*)(*pvVar13)[0];
        long lVar16 = (*puVar14)->second();
        iVar10 = *(int*)(lVar16 + 4);
        lVar16 = texture.second();
        if (iVar10 != *(int*)(lVar16 + 4)) {
            LogAssert("dstRT.GetColourTargetTextures()[0]->GetDesc().m_Height == srcTexture.GetDesc().m_Height",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/postprocess/"
                      "filters/GaussianBlurFilter.cpp",
                      65, nullptr);
        }
        local_198[0].field_0 = 1;
        piVar15 = std::max<int>(local_34, local_198[0].field_0);
        local_34 = *piVar15;
        array<render::Texture::Desc, 2ul> local_218;
        Texture* pTVar23 = texture;
        puVar14 = (uint64_t*)texture.second();
        uint64_t* puVar17 = &local_218[(unsigned long)&local_198];
        uint64_t uVar21 = *puVar14;
        uint64_t uVar2 = puVar14[1];
        uint64_t uVar3 = puVar14[3];
        uint64_t uVar4 = puVar14[4];
        uint64_t uVar5 = puVar14[5];
        uint64_t uVar6 = puVar14[6];
        uint64_t uVar7 = puVar14[7];
        puVar17[2] = puVar14[2];
        puVar17[3] = uVar3;
        *puVar17 = uVar21;
        puVar17[1] = uVar2;
        puVar17[4] = uVar4;
        puVar17[5] = uVar5;
        puVar17[6] = uVar6;
        puVar17[7] = uVar7;
        *(uint32_t*)(puVar17 + 3) = 0;
        *(uint32_t*)(puVar17 + 1) = 1;
        *(uint8_t*)(puVar17 + 4) = 0;
        RenderTargetsManager* str = local_50->field_0;
        unsigned int uVar12 = pTVar23->GetMaxLineWidth();
        Desc local_198;
        local_78->Register(str, 14782657, *((array<render::Texture::Desc, _2ul>*)(unsigned long)uVar12),
                           (int)&local_218, DAT_00000001, (unsigned int)&local_198, false);
        if (local_78->operator_cast_to_bool() != '\0') {
            pRVar18 = (RenderTargets*)(*local_78).operator->();
            pvVar13 = (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>*)
                          pRVar18->GetColourTargetTextures();
            puVar14 = (uint64_t*)(*pvVar13)[0];
            plVar1 = (long*)*puVar14;
            lVar16 = pvVar13->Instance();
            (**(void (**)(...))(*plVar1 + 24))(plVar1, lVar16 + 272, 0);
            new ((local_c8 + 24)) render::DrawCallState();
            fVar8 = local_3c;
            pDVar24 = (DrawCallState*)(local_c8 + 24);
            this_00 = (compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>*)
                          pDVar24->GetRenderPipelineState();
            lVar16 = pDVar24->Instance();
            eastl::compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>::
                compressed_pair_imp(this_00, (PlayerDataComparator<oldscape::social::FriendChatUser>*)(lVar16 + 1524));
            pDVar24 = (DrawCallState*)(local_c8 + 24);
            pRVar19 = (RenderPipelineState*)pDVar24->GetRenderPipelineState();
            lVar16 = pDVar24->Instance();
            pRVar19->SetRasteriserState((lVar16 + 1200));
            pDVar24 = (DrawCallState*)(local_c8 + 24);
            this_01 = (Layout*)pDVar24->GetRenderPipelineState();
            lVar16 = pDVar24->Instance();
            this_01->SetHeapSize((lVar16 + 1080));
            pvVar13 = (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>*)
                          renderTargets.GetColourTargetTextures();
            puVar14 = (uint64_t*)(*pvVar13)[0];
            piVar15 = (int*)(*puVar14)->second();
            iVar10 = *piVar15;
            pvVar13 = (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>*)
                          renderTargets.GetColourTargetTextures();
            puVar14 = (uint64_t*)(*pvVar13)[0];
            lVar16 = (*puVar14)->second();
            new (local_c8) render::Viewport(0, 0, iVar10, *(int*)(lVar16 + 4), 0.0, 1.0);
            pOVar20 = ((local_c8 + 24))->GetOutputMergerState();
            pOVar20->SetViewports(local_c8, 1);
            if ((int)fVar8 < 0) {
                local_5c = 0;
            } else {
                uVar21 = texture.GetMaxLineWidth();
                local_5c = (unsigned int)(((uint64_t)((int64_t)((unsigned long)uVar21 >> 8)) << 8) |
                                          (uint8_t)((int)uVar21 == 35866));
            }
            this_02 = (ShaderProgram*)((vector<oldscape::dash3d::EntityHighlight*,
                                               BucketAllocatorEASTL>*)(&local_50->field_16 +
                                                                       (unsigned long)(local_5c & 255) * 16))
                          ->end();
            if (this_02 == nullptr) {
                LogAssert("pBlurShaderProgram",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/postprocess/"
                          "filters/GaussianBlurFilter.cpp",
                          96, nullptr);
            }
            pRVar19 = (RenderPipelineState*)((local_c8 + 24))->GetRenderPipelineState();
            pRVar19->SetShaderProgram(this_02);
            this_03 = (InputAssemblerState*)((local_c8 + 24))->GetInputAssemblerState();
            vertexDeclaration = (VertexDeclaration*)this_02->second();
            vertexBuffer = (VertexBuffer*)local_50->field_8->GetBoneIDMap();
            this_03->SetVertexStreamData(vertexDeclaration, vertexBuffer);
            pHVar22 = (HashedString*)postprocess::operator*(2);
            local_60 = this_02->GetConstIndex(*pHVar22);
            local_198 = std::array<math::Vector4T<float>, 13ul>();
            if (0 < local_34) {
                local_3c = (float)(int)fVar8;
                iVar10 = 0;
                pDVar24 = (DrawCallState*)(local_c8 + 24);
                do {
                    pOVar20 = pDVar24->GetOutputMergerState();
                    pRVar18 = (RenderTargets*)local_78->end();
                    pOVar20->SetRenderTargets(pRVar18);
                    pTVar23 = texture;
                    if (iVar10 != 0) {
                        pvVar13 = (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>*)
                                      renderTargets.GetColourTargetTextures();
                        puVar14 = (uint64_t*)(*pvVar13)[0];
                        pTVar23 = (Texture*)*puVar14;
                    }
                    pRVar19 = (RenderPipelineState*)pDVar24->GetRenderPipelineState();
                    pRVar19->ClearPSTextureSamplerPairs();
                    pRVar19 = (RenderPipelineState*)pDVar24->GetRenderPipelineState();
                    pRVar19->SetPSTextureSamplerPair(0, pTVar23, local_60, nullptr, false);
                    piVar15 = (int*)pTVar23->second();
                    CalcGaussianOffsetsWeights13Tap(&local_198, *piVar15, 0, (float)local_78._20_4_);
                    pHVar22 = (HashedString*)postprocess::operator*(21);
                    vector4 = (Vector4T<float>*)local_198.data();
                    this_02->SetShaderConstVector4(pHVar22, 13, vector4, 1);
                    if ((char)local_5c != '\0') {
                        pHVar22 = (HashedString*)postprocess::operator*(22);
                        this_02->SetShaderConstFloat1(pHVar22, local_3c);
                    }
                    local_50->field_8->RenderQuad(renderContext, *pDVar24);
                    pOVar20 = pDVar24->GetOutputMergerState();
                    pOVar20->SetRenderTargets(renderTargets);
                    pRVar18 = (RenderTargets*)(*local_78).operator->();
                    pvVar13 = (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>*)
                                  pRVar18->GetColourTargetTextures();
                    puVar14 = (uint64_t*)(*pvVar13)[0];
                    pTVar23 = (Texture*)*puVar14;
                    pRVar19 = (RenderPipelineState*)pDVar24->GetRenderPipelineState();
                    pRVar19->ClearPSTextureSamplerPairs();
                    pRVar19 = (RenderPipelineState*)pDVar24->GetRenderPipelineState();
                    pRVar19->SetPSTextureSamplerPair(0, pTVar23, local_60, nullptr, false);
                    lVar16 = pTVar23->second();
                    CalcGaussianOffsetsWeights13Tap(&local_198, 0, *(int*)(lVar16 + 4), (float)local_78._20_4_);
                    pHVar22 = (HashedString*)postprocess::operator*(21);
                    this_02->SetShaderConstVector4(pHVar22, 13, vector4, 1);
                    if ((char)local_5c != '\0') {
                        pHVar22 = (HashedString*)postprocess::operator*(22);
                        this_02->SetShaderConstFloat1(pHVar22, 0.0);
                    }
                    local_50->field_8->RenderQuad(renderContext, *pDVar24);
                    iVar10 = iVar10 + 1;
                } while (iVar10 < local_34);
            }
            pRVar18 = (RenderTargets*)(*local_78).operator->();
            pRVar18->Invalidate();
            local_50->field_0->Unregister(*local_78);
            ((local_c8 + 24))->~DrawCallState();
        }
    }

} // namespace jag::postprocess
