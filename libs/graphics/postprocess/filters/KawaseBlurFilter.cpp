// libs/graphics/postprocess/filters/KawaseBlurFilter.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics.postprocess

#include "KawaseBlurFilter.h"

namespace jag::postprocess {
    // 0x1009aa7a0
    bool KawaseBlurFilter::Init() {
        VertexElementDesc* vertexElementDesc;
        ReturnValue local_38;

        auto str1 = Instance();
        auto local_68 = PostProcessVS::BuildVSFragment();
        auto str2 = local_68.c_str();
        auto local_50 = graphics::shadersourceprovider::GetCompletedShader(26);
        vertexElementDesc = (VertexElementDesc*)local_50.c_str();
        local_38.RegisterFromSourceString(str1, str2, vertexElementDesc, 62757712, '\x02');
        field_16 = local_38;
        return field_16.end() != 0;
    }

    // 0x1009ab030
    void KawaseBlurFilter::Destroy() {
        uint8_t* this_00 = field_48;
        Singleton<render::ShaderProgramManager>* this_02 = (Singleton<render::ShaderProgramManager>*)this_00;
        this_00->Destroy();
        ((ShaderProgramManager*)this_02->Instance())->Unregister(field_16);
        this_00->Destroy();
    }

    // 0x1009b0380
    void KawaseBlurFilter::BlurMultiPass(render::RenderContext& renderContext, render::RenderTargets& renderTargets,
                                         const render::Texture& texture, KawaseKernelSize kawaseKernelSize,
                                         int arg5) const {
        shared_ptr<oldscape::dash3d::GroundDecor>* groundDecor;

        if (arg5 != 0) {
            LogAssert("srcTextureArraySlice == 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/postprocess/"
                      "filters/KawaseBlurFilter.cpp",
                      70, "KawaseBlurFiler and texture array support currently disabled");
        }
        if (texture.GetMaxLineWidth() == 35866) {
            groundDecor = (shared_ptr<oldscape::dash3d::GroundDecor>*)&field_32;
        } else {
            groundDecor = (shared_ptr<oldscape::dash3d::GroundDecor>*)&field_16;
        }
        shared_ptr<oldscape::dash3d::Decor> local_48(groundDecor);
        DrawCallState local_78;
        BlurMultiPass(renderContext, local_78, renderTargets, texture, kawaseKernelSize, field_16, 0);
    }

    // 0x1009b3330
    void KawaseBlurFilter::BlurMultiPass(render::RenderContext& renderContext,
                                         const render::DrawCallState& drawCallState,
                                         render::RenderTargets& renderTargets, const render::Texture& texture,
                                         KawaseKernelSize kawaseKernelSize,
                                         const shared_ptr<render::ShaderProgram>& shaderProgram, int arg7) const {
        uint8_t* this_00;
        int arg3;
        compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>* this_01;
        long lVar13;
        RenderPipelineState* pRVar14;
        Layout* this_02;
        int* piVar15;
        unsigned int* puVar16;
        OutputMergerState* pOVar17;
        compressed_pair_imp<eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true>>::Layout,
                            eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true>, 0>* this_03;
        VertexDeclaration* vertexDeclaration;
        VertexBuffer* vertexBuffer;
        ShaderProgram* pSVar18;
        HashedString* pHVar19;
        RenderTargets* pRVar20;
        long lVar22;
        DrawCallState* pDVar23;
        float arg2;
        uint8_t auVar24[16];
        uint8_t local_e8[24];
        uint8_t local_d0[72];
        ColourHSL local_88;
        uint8_t local_78[28];
        long local_50;
        AutoSingleton<ShaderThreadPoolSingleton> local_38;

        local_d0._64_8_ = renderContext;
        unsigned int uVar21 = kawaseKernelSize - 1;
        if (uVar21 < 5) {
            local_78._16_8_ = (&PTR_g_kawaseKernel15x15_100f1ca28)[uVar21];
            local_50 = *(long*)(&DAT_100d4fd28 + (long)(int)uVar21 * 8);
        } else {
            local_50 = 2;
            local_78._16_8_ = &g_kawaseKernel7x7;
        }
        array<render::Texture::Desc, 2ul> local_168;
        auto pvVar10 = renderTargets.GetColourTargetTextures();
        uint64_t* puVar11 = (uint64_t*)(*pvVar10)[0];
        puVar11 = (uint64_t*)(*puVar11)->second();
        uint64_t* puVar12 = &local_168[0];
        uint64_t uVar1 = *puVar11;
        uint64_t uVar2 = puVar11[1];
        uint64_t uVar3 = puVar11[3];
        uint64_t uVar4 = puVar11[4];
        uint64_t uVar5 = puVar11[5];
        uint64_t uVar6 = puVar11[6];
        uint64_t uVar7 = puVar11[7];
        puVar12[2] = puVar11[2];
        puVar12[3] = uVar3;
        *puVar12 = uVar1;
        puVar12[1] = uVar2;
        puVar12[4] = uVar4;
        puVar12[5] = uVar5;
        puVar12[6] = uVar6;
        puVar12[7] = uVar7;
        *(uint32_t*)(puVar12 + 3) = 0;
        *(uint32_t*)(puVar12 + 1) = 1;
        *(uint8_t*)(puVar12 + 4) = 0;
        RenderTargetsManager* str = field_0;
        uVar21 = texture.GetMaxLineWidth();
        new (local_d0) render::Texture::Desc();
        local_78->Register(str, 14782872, *((array<render::Texture::Desc, _2ul>*)(unsigned long)uVar21),
                           (int)&local_168, DAT_00000001, (unsigned int)(Desc*)local_d0, false);
        if (local_78->operator_cast_to_bool() != '\0') {
            new (local_d0) render::DrawCallState(drawCallState);
            pDVar23 = (DrawCallState*)local_d0;
            this_01 = (compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>*)
                          pDVar23->GetRenderPipelineState();
            lVar22 = local_50;
            lVar13 = pDVar23->Instance();
            eastl::compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>::
                compressed_pair_imp(this_01, (PlayerDataComparator<oldscape::social::FriendChatUser>*)(lVar13 + 1524));
            pDVar23 = (DrawCallState*)local_d0;
            pRVar14 = (RenderPipelineState*)pDVar23->GetRenderPipelineState();
            lVar13 = pDVar23->Instance();
            pRVar14->SetRasteriserState((lVar13 + 1200));
            pDVar23 = (DrawCallState*)local_d0;
            this_02 = (Layout*)pDVar23->GetRenderPipelineState();
            lVar13 = pDVar23->Instance();
            this_02->SetHeapSize((lVar13 + 1080));
            pvVar10 = (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>*)
                          renderTargets.GetColourTargetTextures();
            puVar11 = (uint64_t*)(*pvVar10)[0];
            piVar15 = (int*)(*puVar11)->second();
            puVar16 = (unsigned int*)texture.second();
            new (local_e8) render::Viewport(0, 0, *piVar15, piVar15[1], 0.0, 1.0);
            pOVar17 = local_d0->GetOutputMergerState();
            pOVar17->SetViewports(local_e8, 1);
            pRVar14 = (RenderPipelineState*)local_d0->GetRenderPipelineState();
            pRVar14->SetShaderProgram((BlendMode*)shaderProgram.end());
            this_03 = (compressed_pair_imp<
                       eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true>>::Layout,
                       eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true>, 0>*)shaderProgram.operator->();
            this_00 = field_48;
            vertexDeclaration = (VertexDeclaration*)this_03->second();
            vertexBuffer = (VertexBuffer*)field_8->GetBoneIDMap();
            this_00->SetVertexStreamData(vertexDeclaration, vertexBuffer);
            local_d0->SetInputAssemblerState(this_00);
            pSVar18 = (ShaderProgram*)shaderProgram.operator->();
            pHVar19 = (HashedString*)postprocess::operator*(2);
            arg3 = pSVar18->GetConstIndex(*pHVar19);
            local_88 = math::ColourHSL(1.0 / (float)*puVar16, 1.0 / (float)puVar16[1], 0.0);
            lVar13 = 0;
            do {
                pRVar20 = (RenderTargets*)local_78->end();
                auVar24 = SelectPingPongSrcDstPair(texture, renderTargets, pRVar20, (int)lVar13, (int)lVar22);
                pOVar17 = local_d0->GetOutputMergerState();
                pOVar17->SetRenderTargets(auVar24._8_8_);
                pRVar14 = (RenderPipelineState*)local_d0->GetRenderPipelineState();
                pRVar14->SetPSTextureSamplerPair(0, auVar24._0_8_, arg3, nullptr, false);
                local_88.field_8 = *(float*)(local_78._16_8_ + lVar13 * 4);
                pSVar18 = (ShaderProgram*)shaderProgram.operator->();
                pHVar19 = (HashedString*)postprocess::operator*(23);
                pSVar18->SetShaderConstVector3(pHVar19, &local_88);
                pSVar18 = (ShaderProgram*)shaderProgram.operator->();
                pHVar19 = (HashedString*)postprocess::operator*(22);
                arg2 = (float)arg7;
                if (auVar24._0_8_ != texture) {
                    arg2 = 0.0;
                }
                pSVar18->SetShaderConstFloat1(pHVar19, arg2);
                field_8->RenderQuad(*local_d0._64_8_, *local_d0);
                pRVar14 = (RenderPipelineState*)local_d0->GetRenderPipelineState();
                pRVar14->ClearPSTextureSamplerPairs();
                lVar13 = lVar13 + 1;
                lVar22 = local_50;
            } while (local_50 != lVar13);
            pRVar20 = (RenderTargets*)(*local_78).operator->();
            pRVar20->Invalidate();
            field_0->Unregister(*local_78);
        }
    }

} // namespace jag::postprocess
