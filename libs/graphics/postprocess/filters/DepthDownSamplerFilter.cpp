// libs/graphics/postprocess/filters/DepthDownSamplerFilter.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics.postprocess

#include "DepthDownSamplerFilter.h"

namespace jag::postprocess {
    // 0x1009aaaa0
    unsigned long DepthDownSamplerFilter::Init(bool arg1) {
        unsigned int uVar2;
        char* pcVar4;
        char* pcVar5;
        VertexElementDesc* pVVar6;
        uint64_t in_RCX;
        unsigned long uVar7;
        basic_ostream<char, std::char_traits<char> _>* pbVar8;
        uint8_t local_180[280];
        ReturnValue local_68;
        ReturnValue local_50;
        ReturnValue local_38;

        long lVar3 = ((MapArea*)Instance())->GetOrigin();
        if (*(char*)(lVar3 + 145) == '\0') {
            uVar7 = (((uint64_t)((int64_t)((unsigned long)in_RCX >> 8)) << 8) | (uint8_t)1);
        } else {
            new (local_180) render::PixelShaderSourceStream(1, 1, 1, 1, 1, 1, 24);
            if (arg1) {
                std::operator<<((basic_ostream<char, std::char_traits<char> _>*)(local_180 + 16), "\n#define MSAA\n");
            }
            pbVar8 = (basic_ostream<char, std::char_traits<char> _>*)(local_180 + 16);
            std::operator<<(pbVar8, "\n#define DEPTH_DOWNSAMPLE_OP min\n");
            pcVar4 = graphics::shadersourceprovider::GetShaderString(12);
            std::operator<<(pbVar8, pcVar4);
            pcVar4 = (char*)pbVar8->Instance();
            local_68 = PostProcessVS::BuildVSFragment();
            pcVar5 = (char*)local_68.c_str();
            local_50 = local_180->str();
            pVVar6 = (VertexElementDesc*)local_50.c_str();
            local_38.RegisterFromSourceString(pcVar4, pcVar5, pVVar6, 62757712, '\x02');
            *field_8 = local_38;
            new (local_180) render::PixelShaderSourceStream(1, 1, 1, 1, 1, 1, 24);
            if (arg1) {
                std::operator<<((basic_ostream<char, std::char_traits<char> _>*)(local_180 + 16), "\n#define MSAA\n");
            }
            pbVar8 = (basic_ostream<char, std::char_traits<char> _>*)(local_180 + 16);
            std::operator<<(pbVar8, "\n#define DEPTH_DOWNSAMPLE_OP max\n");
            pcVar4 = graphics::shadersourceprovider::GetShaderString(12);
            std::operator<<(pbVar8, pcVar4);
            pcVar4 = (char*)pbVar8->Instance();
            local_68 = PostProcessVS::BuildVSFragment();
            pcVar5 = (char*)local_68.c_str();
            local_50 = local_180->str();
            pVVar6 = (VertexElementDesc*)local_50.c_str();
            local_38.RegisterFromSourceString(pcVar4, pcVar5, pVVar6, 62757712, '\x02');
            *field_24 = local_38;
            if (field_8->operator_cast_to_bool() == '\0') {
                uVar7 = 0;
            } else {
                uVar2 = field_24->operator_cast_to_bool();
                uVar7 = (unsigned long)uVar2;
            }
        }
        return uVar7 & 4294967295;
    }

    // 0x1009ab0b0
    void DepthDownSamplerFilter::Destroy() {
        auto pSVar1 = Instance();
        pSVar1->Unregister(*field_8);
        pSVar1 = (ShaderProgramManager*)pSVar1->Instance();
        pSVar1->Unregister(*field_24);
    }

    // 0x1009ac9c0
    void DepthDownSamplerFilter::DownSample2x2(render::RenderContext& renderContext,
                                               const WrapArray<shared_ptr<render::RenderTargets>>& wrapArray,
                                               const render::Texture& texture, unsigned int arg4, bool arg5) {
        int arg3;
        VertexDeclaration* vertexDeclaration;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_02;
        RenderTargets* this_03;
        shared_ptr<render::RenderTargets>* this_04;
        RenderTargets* this_05;
        Texture* texture_00;
        compressed_pair_imp<eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true>>::Layout,
                            eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true>, 0>* this_06;
        unsigned int* puVar5;
        OutputMergerState* pOVar6;
        HashedString* pHVar7;
        TextureSamplerStateTracker* this_08;
        uint8_t local_d8[48];
        ImVec4 local_a8;
        ShaderProgram* local_40;

        unsigned int local_34 = arg4;
        unsigned long uVar1 = wrapArray.HeapBeginPtr();
        if (uVar1 < arg4) {
            LogAssert("numDownSamples <= dstRTs.max_size()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/postprocess/"
                      "filters/DepthDownSamplerFilter.cpp",
                      77, nullptr);
        }
        local_80.m_pInputAssemblerState._0_4_ = wrapArray.HeapBeginPtr();
        auto puVar2 = std::min<unsigned int>(local_34, local_80);
        local_34 = *puVar2;
        DrawCallState local_80;
        auto this_00 = local_80.GetRenderPipelineState();
        long lVar3 = local_80.Instance();
        this_00->SetHeapSize((lVar3 + 900));
        if (arg5) {
            local_40 = (ShaderProgram*)**field_24;
        } else {
            local_40 = (ShaderProgram*)**field_8;
        }
        auto pRVar4 = local_80.GetRenderPipelineState();
        pRVar4->SetShaderProgram(local_40);
        auto this_01 = local_80.GetInputAssemblerState();
        vertexDeclaration = (VertexDeclaration*)local_40->second();
        auto vertexBuffer = field_0->GetBoneIDMap();
        this_01->SetVertexStreamData(vertexDeclaration, vertexBuffer);
        if (local_34 != 0) {
            uVar1 = 0;
            do {
                this_02 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)(*(
                    (WrapArray<shared_ptr<render::RenderTargets>>*)(Layout*)wrapArray))[uVar1];
                this_03 = (RenderTargets*)this_02->end();
                texture_00 = texture;
                if (uVar1 != 0) {
                    this_04 = (shared_ptr<render::RenderTargets>*)(*(
                        (WrapArray<shared_ptr<render::RenderTargets>>*)(Layout*)wrapArray))[uVar1 - 1];
                    this_05 = (RenderTargets*)(*this_04).operator->();
                    texture_00 = (Texture*)this_05->GetDepthStencilTargetTexture();
                }
                puVar2 = (unsigned int*)texture_00->second();
                this_06 = (compressed_pair_imp<
                           eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true>>::Layout,
                           eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true>, 0>*)
                              this_03->GetDepthStencilTargetTexture();
                puVar5 = (unsigned int*)this_06->second();
                if ((*puVar2 >> 1 != *puVar5) || (puVar2[1] >> 1 != puVar5[1])) {
                    LogAssert("((srcRTDesc.m_Width / 2) == dstRTDesc.m_Width) && ((srcRTDesc.m_Height / 2) == "
                              "dstRTDesc.m_Height)",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                              "postprocess/filters/DepthDownSamplerFilter.cpp",
                              95, "Dest render target must be a 1/4 the size of the src render target");
                }
                this_08 = (TextureSamplerStateTracker*)(local_d8 + 24);
                new (this_08) render::TextureSamplerStateTracker(*texture_00);
                lVar3 = this_08->Instance();
                (*(void (*)(...))texture_00->field_0[3])(texture_00, lVar3 + 208, 0);
                new (local_d8) render::Viewport(0, 0, *puVar5, puVar5[1], 0.0, 1.0);
                pOVar6 = local_80.GetOutputMergerState();
                pOVar6->SetViewports(local_d8, 1);
                pOVar6 = local_80.GetOutputMergerState();
                pOVar6->SetRenderTargets(this_03);
                pOVar6 = local_80.GetOutputMergerState();
                pOVar6->SetClearFlags(2);
                pOVar6 = local_80.GetOutputMergerState();
                pOVar6->SetDepthStencilClear(1.0, '\0');
                local_a8 = ImVec4(1.0 / (float)*puVar2, 1.0 / (float)puVar2[1], (float)*puVar2, (float)puVar2[1]);
                pHVar7 = (HashedString*)postprocess::operator*(12);
                local_40->SetShaderConstVector4(pHVar7, &local_a8);
                pRVar4 = (RenderPipelineState*)local_80.GetRenderPipelineState();
                pHVar7 = (HashedString*)postprocess::operator*(4);
                arg3 = local_40->GetConstIndex(*pHVar7);
                pRVar4->SetPSTextureSamplerPair(0, texture_00, arg3, nullptr, false);
                field_0->RenderQuad(renderContext, local_80);
                ((local_d8 + 24))->~TextureSamplerStateTracker();
                uVar1 = uVar1 + 1;
            } while (uVar1 < local_34);
        }
    }

} // namespace jag::postprocess
