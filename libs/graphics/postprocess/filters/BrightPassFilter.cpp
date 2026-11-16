// libs/graphics/postprocess/filters/BrightPassFilter.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics.postprocess

#include "BrightPassFilter.h"

namespace jag::postprocess {
    // 0x1009aa540
    void BrightPassFilter::Init() {
        return 1;
    }

    // 0x1009aaf90
    void BrightPassFilter::Destroy() {
        field_32->Destroy();
        uint8_t* this_00 = field_16;
        Singleton<render::ShaderProgramManager>* this_02 = (Singleton<render::ShaderProgramManager>*)this_00;
        if (this_00->operator_cast_to_bool() != '\0') {
            ((ShaderProgramManager*)this_02->Instance())->Unregister(*this_00);
        }
        field_224 = -1;
        field_32->Destroy();
    }

    // 0x1009aff80
    void BrightPassFilter::Filter(render::RenderContext& arg1, render::RenderTargets& arg2,
                                  const render::Texture& renderContext, const render::Texture& renderTargets,
                                  ToneMapOperator texture1, const PostProcessParams& texture2, float arg7, float arg8,
                                  LuminanceShaderOutputFormat arg9) {
        char* str1;
        char* str2;
        VertexElementDesc* vertexElementDesc;
        compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>* this_01;
        VertexDeclaration* vertexDeclaration;
        ReturnValue local_b0;
        uint8_t local_a0[32];
        DrawCallState local_70;
        RenderTargets* local_38;

        local_a0._24_8_ = texture1;
        if (field_224 != param_8) {
            local_38 = renderTargets;
            str1 = (char*)Instance();
            local_70 = PostProcessVS::BuildVSFragment();
            str2 = (char*)local_70.c_str();
            *local_a0 = BrightPass::BuildFSFragment(param_8, param_10);
            vertexElementDesc = (VertexElementDesc*)local_a0->c_str();
            local_b0.RegisterFromSourceString(str1, str2, vertexElementDesc, 62757712, '\x02');
            *field_16 = local_b0;
            local_70.~basic_string();
            field_224 = param_8;
            renderTargets = local_38;
        }
        DrawCallState* pDVar10 = &local_70;
        new (pDVar10) render::DrawCallState();
        this_01 = (compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>*)
                      pDVar10->GetRenderPipelineState();
        long lVar2 = pDVar10->Instance();
        eastl::compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>::compressed_pair_imp(
            this_01, (PlayerDataComparator<oldscape::social::FriendChatUser>*)(lVar2 + 1524));
        pDVar10 = &local_70;
        auto pRVar3 = pDVar10->GetRenderPipelineState();
        lVar2 = pDVar10->Instance();
        pRVar3->SetRasteriserState((lVar2 + 1200));
        pDVar10 = &local_70;
        auto this_02 = pDVar10->GetRenderPipelineState();
        lVar2 = pDVar10->Instance();
        this_02->SetHeapSize((lVar2 + 1080));
        auto pvVar4 = renderTargets.GetColourTargetTextures();
        uint64_t* puVar5 = (uint64_t*)(*pvVar4)[0];
        int* piVar6 = (int*)(*puVar5)->second();
        int iVar1 = *piVar6;
        pvVar4 = (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>*)
                     renderTargets.GetColourTargetTextures();
        puVar5 = (uint64_t*)(*pvVar4)[0];
        lVar2 = (*puVar5)->second();
        new (local_a0) render::Viewport(0, 0, iVar1, *(int*)(lVar2 + 4), 0.0, 1.0);
        auto pOVar7 = local_70.GetOutputMergerState();
        pOVar7->SetViewports(local_a0, 1);
        pOVar7 = local_70.GetOutputMergerState();
        pOVar7->SetRenderTargets(renderTargets);
        pRVar3 = (RenderPipelineState*)local_70.GetRenderPipelineState();
        uint8_t* this_00 = field_16;
        pRVar3->SetShaderProgram((BlendMode*)this_00->end());
        compressed_pair_imp<eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true>>::Layout,
                            eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true>, 0>* this_03 =
            (compressed_pair_imp<
                eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true>>::Layout,
                eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true>, 0>*)(*this_00)
                .operator->();
        vertexDeclaration = (VertexDeclaration*)this_03->second();
        auto vertexBuffer = field_8->GetBoneIDMap();
        field_32->SetVertexStreamData(vertexDeclaration, vertexBuffer);
        local_70.SetInputAssemblerState(field_32);
        local_38 = (RenderTargets*)this;
        unsigned long long arg1 = FrameTime::GetCurrentTimeMS();
        ShaderProgram* pSVar8 = (ShaderProgram*)(*this_00).operator->();
        auto pHVar9 = postprocess::operator*(10);
        float arg2 = (float)((param_9 + 128))->GetValue(arg1);
        pSVar8->SetShaderConstFloat1(pHVar9, arg2);
        pSVar8 = (ShaderProgram*)(*this_00).operator->();
        pHVar9 = (HashedString*)postprocess::operator*(20);
        pSVar8->SetShaderConstFloat1(pHVar9, param_2);
        pSVar8 = (ShaderProgram*)(*this_00).operator->();
        pHVar9 = (HashedString*)postprocess::operator*(0);
        iVar1 = pSVar8->GetConstIndex(*pHVar9);
        pRVar3 = (RenderPipelineState*)local_70.GetRenderPipelineState();
        pRVar3->SetPSTextureSamplerPair(0, local_a0._24_8_, iVar1, nullptr, false);
        pSVar8 = (ShaderProgram*)(*this_00).operator->();
        pHVar9 = (HashedString*)postprocess::operator*(1);
        iVar1 = pSVar8->GetConstIndex(*pHVar9);
        pRVar3 = (RenderPipelineState*)local_70.GetRenderPipelineState();
        pRVar3->SetPSTextureSamplerPair(1, texture2, iVar1, nullptr, true);
        (*(RenderToTextureHelper**)&local_38->field_8)->RenderQuad(renderContext, local_70);
    }

} // namespace jag::postprocess
