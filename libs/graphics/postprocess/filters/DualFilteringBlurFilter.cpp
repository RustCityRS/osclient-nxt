// libs/graphics/postprocess/filters/DualFilteringBlurFilter.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics.postprocess

#include "DualFilteringBlurFilter.h"

namespace jag::postprocess {
    // 0x1009aa890
    unsigned long DualFilteringBlurFilter::Init() {
        basic_ostream<char, std::char_traits<char> _>* basic_ostream;
        unsigned long uVar5;
        uint8_t local_180[280];
        ReturnValue local_38;

        new (local_180) render::PixelShaderSourceStream(1, 1, 1, 1, 1, 1, 24);
        basic_ostream = std::operator<<((basic_ostream<char, std::char_traits<char> _>*)(local_180 + 16),
                                        "#define DOWNSAMPLE_PASS;\n");
        auto pcVar1 = graphics::shadersourceprovider::GetShaderString(18);
        std::operator<<(basic_ostream, pcVar1);
        pcVar1 = (char*)basic_ostream->Instance();
        auto local_68 = PostProcessVS::BuildVSFragment();
        auto pcVar2 = local_68.c_str();
        auto local_50 = local_180->str();
        auto pVVar3 = local_50.c_str();
        local_38.RegisterFromSourceString(pcVar1, pcVar2, pVVar3, 62757712, '\x02');
        field_16 = local_38;
        pcVar1 = (char*)&local_68->Instance();
        local_68 = PostProcessVS::BuildVSFragment();
        pcVar2 = (char*)local_68.c_str();
        local_50 = graphics::shadersourceprovider::GetCompletedShader(18);
        pVVar3 = (VertexElementDesc*)local_50.c_str();
        local_38.RegisterFromSourceString(pcVar1, pcVar2, pVVar3, 62757712, '\x02');
        field_32 = local_38;
        long lVar4 = field_16.end();
        if (lVar4 == 0) {
            uVar5 = 0;
        } else {
            lVar4 = field_32.end();
            uVar5 = (((uint64_t)((int64_t)((unsigned long)pcVar2 >> 8)) << 8) | (uint8_t)(lVar4 != 0));
        }
        return uVar5 & 4294967295;
    }

    // 0x1009ab070
    void DualFilteringBlurFilter::Destroy() {
        auto pSVar1 = Instance();
        pSVar1->Unregister(field_16);
        pSVar1 = (ShaderProgramManager*)pSVar1->Instance();
        pSVar1->Unregister(field_32);
    }

    // 0x1009b0480
    void DualFilteringBlurFilter::BlurMultiPass(render::RenderContext& renderContext,
                                                render::RenderTargets& renderTargets, const render::Texture& texture,
                                                DualFilteringBlurKernelSize dualFilteringBlurKernelSize,
                                                int arg5) const {
        int iVar1;
        RenderTargetsManager* str;
        unsigned int uVar10;
        shared_ptr* this_01;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* pvVar21;
        RenderTargets* pRVar22;
        unsigned int* puVar23;
        long lVar24;
        int* piVar25;
        OutputMergerState* pOVar26;
        shared_ptr<render::RenderTargets>* this_02;
        Texture* pTVar27;
        bool bVar29;
        uint8_t local_e8[64];
        uint8_t local_a8[48];
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* local_50;
        float local_48;
        AutoSingleton<ShaderThreadPoolSingleton> local_40;

        Texture* local_60 = texture;
        DualFilteringBlurFilter* local_38 = this;
        if (arg5 != 0) {
            LogAssert("srcTextureArraySlice == 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/postprocess/"
                      "filters/DualFilteringBlurFilter.cpp",
                      53, "DualFilteringBlurFilter texture array support currently disabled");
        }
        if (dualFilteringBlurKernelSize == 5) {
            LogAssert("filterSize != DualFilteringBlurKernelSize::MAX_KERNEL",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/postprocess/"
                      "filters/DualFilteringBlurFilter.cpp",
                      54, "Invalid kernel selected");
        }
        unsigned long arg1 = 0;
        array<render::Texture::Desc, 2ul> local_1b8;
        auto pvVar11 = renderTargets.GetColourTargetTextures();
        unsigned long uVar28 = 0;
        uint64_t* puVar12 = (uint64_t*)(*pvVar11)[0];
        puVar12 = (uint64_t*)(*puVar12)->second();
        unsigned int* local_58 = &local_1b8[uVar28];
        uint64_t uVar2 = *puVar12;
        uint64_t uVar3 = puVar12[1];
        uint64_t uVar4 = puVar12[3];
        uint64_t uVar5 = puVar12[4];
        uint64_t uVar6 = puVar12[5];
        uint64_t uVar7 = puVar12[6];
        uint64_t uVar8 = puVar12[7];
        *(uint64_t*)(local_58 + 4) = puVar12[2];
        *(uint64_t*)(local_58 + 6) = uVar4;
        *(uint64_t*)local_58 = uVar2;
        *(uint64_t*)(local_58 + 2) = uVar3;
        *(uint64_t*)(local_58 + 8) = uVar5;
        *(uint64_t*)(local_58 + 10) = uVar6;
        *(uint64_t*)(local_58 + 12) = uVar7;
        *(uint64_t*)(local_58 + 14) = uVar8;
        local_58[6] = 0;
        local_58[2] = 1;
        *(uint8_t*)(local_58 + 8) = 0;
        array<shared_ptr<render::RenderTargets>, 5ul> local_138;
        unsigned long local_68 = (unsigned long)dualFilteringBlurKernelSize + 1;
        local_a8._24_8_ = (unsigned long)dualFilteringBlurKernelSize;
        do {
            *local_58 = *local_58 >> 1;
            local_58[1] = local_58[1] >> 1;
            str = local_38->field_0;
            uVar10 = local_60->GetMaxLineWidth();
            new (local_e8) render::Texture::Desc();
            local_a8->Register(str, 14782237, *((array<render::Texture::Desc, _2ul>*)(unsigned long)uVar10),
                               (int)&local_1b8, DAT_00000001, (unsigned int)(Desc*)local_e8, false);
            this_01 = &local_138[arg1];
            *this_01 = *local_a8;
            if (shared_ptr::operator_cast_to_bool(this_01) == '\0')
                goto LAB_1009b0bc3;
            arg1 = arg1 + 1;
        } while (local_68 != arg1);
        uint8_t* this_00 = &local_38->field_16;
        ShaderProgram* pSVar13 = (ShaderProgram*)(*this_00).operator->();
        auto pHVar14 = postprocess::operator*(2);
        int local_44 = pSVar13->GetConstIndex(*pHVar14);
        new (local_e8) render::DrawCallState();
        auto pRVar15 = local_e8->GetRenderPipelineState();
        auto pBVar16 = this_00->end();
        pRVar15->SetShaderProgram(pBVar16);
        auto pIVar17 = local_e8->GetInputAssemblerState();
        compressed_pair_imp<eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true>>::Layout,
                            eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true>, 0>* pcVar18 =
            (compressed_pair_imp<
                eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true>>::Layout,
                eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true>, 0>*)(*this_00)
                .operator->();
        auto pVVar19 = pcVar18->second();
        auto pVVar20 = local_38->field_8->GetBoneIDMap();
        pIVar17->SetVertexStreamData(pVVar19, pVVar20);
        uVar28 = 0;
        do {
            pTVar27 = local_60;
            if (uVar28 != 0) {
                pvVar21 = &local_138[uVar28 - 1];
                pRVar22 = (RenderTargets*)pvVar21->end();
                pvVar11 = (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>*)
                              pRVar22->GetColourTargetTextures();
                puVar12 = (uint64_t*)(*pvVar11)[0];
                pTVar27 = (Texture*)*puVar12;
            }
            pvVar21 = &local_138[uVar28];
            pRVar22 = (RenderTargets*)pvVar21->end();
            puVar23 = (unsigned int*)pTVar27->second();
            local_58 = (unsigned int*)(((uint64_t)local_58._4_4_ << 32) | (uint32_t)(1.0 / (float)*puVar23));
            lVar24 = pTVar27->second();
            local_48 = 1.0 / (float)*(unsigned int*)(lVar24 + 4);
            puVar23 = (unsigned int*)pTVar27->second();
            local_50 =
                (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)(((uint64_t)local_50._4_4_ << 32) |
                                                                                    (uint32_t)(0.5 / (float)*puVar23));
            lVar24 = pTVar27->second();
            new ((local_a8 + 32))
                ImVec4(local_58._0_4_, local_48, local_50._0_4_, 0.5 / (float)*(unsigned int*)(lVar24 + 4));
            pvVar11 = (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>*)
                          pRVar22->GetColourTargetTextures();
            puVar12 = (uint64_t*)(*pvVar11)[0];
            piVar25 = (int*)(*puVar12)->second();
            iVar1 = *piVar25;
            pvVar11 = (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>*)
                          pRVar22->GetColourTargetTextures();
            puVar12 = (uint64_t*)(*pvVar11)[0];
            lVar24 = (*puVar12)->second();
            new (local_a8) render::Viewport(0, 0, iVar1, *(int*)(lVar24 + 4), 0.0, 1.0);
            pOVar26 = local_e8->GetOutputMergerState();
            pOVar26->SetViewports(local_a8, 1);
            pOVar26 = local_e8->GetOutputMergerState();
            pOVar26->SetRenderTargets(pRVar22);
            pRVar15 = (RenderPipelineState*)local_e8->GetRenderPipelineState();
            pRVar15->SetPSTextureSamplerPair(0, pTVar27, local_44, nullptr, false);
            pSVar13 = (ShaderProgram*)(*this_00).operator->();
            pHVar14 = (HashedString*)postprocess::operator*(24);
            pSVar13->SetShaderConstVector4(pHVar14, (local_a8 + 32));
            local_38->field_8->RenderQuad(renderContext, *local_e8);
            uVar28 = uVar28 + 1;
        } while (local_68 != uVar28);
        pRVar15 = (RenderPipelineState*)local_e8->GetRenderPipelineState();
        pRVar15->Clear();
        local_50 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)&local_38->field_32;
        pSVar13 = (ShaderProgram*)(*local_50).operator->();
        pHVar14 = (HashedString*)postprocess::operator*(2);
        local_44 = pSVar13->GetConstIndex(*pHVar14);
        pRVar15 = (RenderPipelineState*)local_e8->GetRenderPipelineState();
        pBVar16 = (BlendMode*)local_50->end();
        pRVar15->SetShaderProgram(pBVar16);
        pIVar17 = (InputAssemblerState*)local_e8->GetInputAssemblerState();
        pcVar18 = (compressed_pair_imp<
                   eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true>>::Layout,
                   eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true>, 0>*)(*local_50)
                      .operator->();
        pVVar19 = (VertexDeclaration*)pcVar18->second();
        pVVar20 = (VertexBuffer*)local_38->field_8->GetBoneIDMap();
        pIVar17->SetVertexStreamData(pVVar19, pVVar20);
        uVar28 = local_a8._24_8_;
        do {
            pvVar21 = &local_138[uVar28];
            pRVar22 = (RenderTargets*)pvVar21->end();
            pvVar11 = (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>*)
                          pRVar22->GetColourTargetTextures();
            puVar12 = (uint64_t*)(*pvVar11)[0];
            pTVar27 = (Texture*)*puVar12;
            pRVar22 = renderTargets;
            if (uVar28 != 0) {
                pvVar21 = &local_138[uVar28 - 1];
                pRVar22 = (RenderTargets*)pvVar21->end();
            }
            puVar23 = (unsigned int*)pTVar27->second();
            local_60 = (Texture*)(((uint64_t)local_60._4_4_ << 32) | (uint32_t)(1.0 / (float)*puVar23));
            lVar24 = pTVar27->second();
            local_58 = (unsigned int*)(((uint64_t)local_58._4_4_ << 32) |
                                       (uint32_t)(1.0 / (float)*(unsigned int*)(lVar24 + 4)));
            puVar23 = (unsigned int*)pTVar27->second();
            local_48 = 0.5 / (float)*puVar23;
            lVar24 = pTVar27->second();
            new ((local_a8 + 32))
                ImVec4(local_60._0_4_, local_58._0_4_, local_48, 0.5 / (float)*(unsigned int*)(lVar24 + 4));
            pvVar11 = (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>*)
                          pRVar22->GetColourTargetTextures();
            puVar12 = (uint64_t*)(*pvVar11)[0];
            piVar25 = (int*)(*puVar12)->second();
            iVar1 = *piVar25;
            pvVar11 = (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>*)
                          pRVar22->GetColourTargetTextures();
            puVar12 = (uint64_t*)(*pvVar11)[0];
            lVar24 = (*puVar12)->second();
            new (local_a8) render::Viewport(0, 0, iVar1, *(int*)(lVar24 + 4), 0.0, 1.0);
            pOVar26 = local_e8->GetOutputMergerState();
            pOVar26->SetViewports(local_a8, 1);
            pOVar26 = local_e8->GetOutputMergerState();
            pOVar26->SetRenderTargets(pRVar22);
            pRVar15 = (RenderPipelineState*)local_e8->GetRenderPipelineState();
            pRVar15->SetPSTextureSamplerPair(0, pTVar27, local_44, nullptr, false);
            pSVar13 = (ShaderProgram*)(*local_50).operator->();
            pHVar14 = (HashedString*)postprocess::operator*(24);
            pSVar13->SetShaderConstVector4(pHVar14, (local_a8 + 32));
            local_38->field_8->RenderQuad(renderContext, *local_e8);
            bVar29 = uVar28 != 0;
            uVar28 = uVar28 - 1;
        } while (bVar29);
        uVar28 = 0;
        do {
            this_02 = &local_138[uVar28];
            pRVar22 = (RenderTargets*)(*this_02).operator->();
            pRVar22->Invalidate();
            local_38->field_0->Unregister(*this_02);
            uVar28 = uVar28 + 1;
        } while (local_68 != uVar28);
    LAB_1009b0bc3:
    }

} // namespace jag::postprocess
