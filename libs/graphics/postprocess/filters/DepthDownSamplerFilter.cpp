// libs/graphics/postprocess/filters/DepthDownSamplerFilter.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics.postprocess

#include "DepthDownSamplerFilter.h"

namespace jag::postprocess {
    // 0x1009aaaa0, 720 bytes, placed by class name and debug map
    // DepthDownSamplerFilter::Init(bool)
    ulong DepthDownSamplerFilter::Init(bool param_1) {
        bool bVar1;
        MapArea* this_00;
        long lVar2;
        char* pcVar3;
        char* pcVar4;
        VertexElementDesc* pVVar5;
        undefined7 extraout_var;
        undefined8 in_RCX;
        ulong uVar6;
        ostream* poVar7;
        undefined1 local_180[280];
        PostProcessVS local_68[24];
        basic_stringstream<char, std::char_traits<char>, BucketAllocatorSTL<char>> local_50[24];
        shared_ptr local_38;

        this_00 = (MapArea*)Instance();
        lVar2 = this_00->GetOrigin();
        if (*(char*)(lVar2 + 145) == '\0') {
            uVar6 = CONCAT71((int7)((ulong)in_RCX >> 8), 1);
        } else {
            new (local_180) render::PixelShaderSourceStream(1, 1, 1, 1, 1, 1, 24);
            if (param_1) {
                std::operator<<((ostream*)(local_180 + 16), "\n#define MSAA\n");
            }
            poVar7 = (ostream*)(local_180 + 16);
            std::operator<<(poVar7, "\n#define DEPTH_DOWNSAMPLE_OP min\n");
            pcVar3 = (char*)graphics::shadersourceprovider::GetShaderString(12);
            std::operator<<(poVar7, pcVar3);
            pcVar3 = (char*)poVar7->Instance();
            local_68->BuildVSFragment();
            pcVar4 = (char*)local_68->c_str();
            std::basic_stringstream<char, std::char_traits<char>, BucketAllocatorSTL<char>>::str(local_50);
            pVVar5 = (VertexElementDesc*)local_50->c_str();
            local_38.RegisterFromSourceString(pcVar3, pcVar4, pVVar5, 62757712, '\x02');
            shared_ptr<render::ShaderProgram>::operator=((shared_ptr<render::ShaderProgram>*)field_8, &local_38);
            local_38.~shared_ptr();
            local_50->~basic_string();
            local_68->~basic_string();
            local_180->~PixelShaderSourceStream();
            new (local_180) render::PixelShaderSourceStream(1, 1, 1, 1, 1, 1, 24);
            if (param_1) {
                std::operator<<((ostream*)(local_180 + 16), "\n#define MSAA\n");
            }
            poVar7 = (ostream*)(local_180 + 16);
            std::operator<<(poVar7, "\n#define DEPTH_DOWNSAMPLE_OP max\n");
            pcVar3 = (char*)graphics::shadersourceprovider::GetShaderString(12);
            std::operator<<(poVar7, pcVar3);
            pcVar3 = (char*)poVar7->Instance();
            local_68->BuildVSFragment();
            pcVar4 = (char*)local_68->c_str();
            std::basic_stringstream<char, std::char_traits<char>, BucketAllocatorSTL<char>>::str(local_50);
            pVVar5 = (VertexElementDesc*)local_50->c_str();
            local_38.RegisterFromSourceString(pcVar3, pcVar4, pVVar5, 62757712, '\x02');
            shared_ptr<render::ShaderProgram>::operator=((shared_ptr<render::ShaderProgram>*)field_24, &local_38);
            local_38.~shared_ptr();
            local_50->~basic_string();
            local_68->~basic_string();
            local_180->~PixelShaderSourceStream();
            bVar1 = field_8->operator_cast_to_bool();
            if (bVar1) {
                bVar1 = field_24->operator_cast_to_bool();
                uVar6 = CONCAT71(extraout_var, bVar1) & 4294967295;
            } else {
                uVar6 = 0;
            }
        }
        return uVar6 & 4294967295;
    }

    // 0x1009ab0b0, 64 bytes, placed by class name and debug map
    // DepthDownSamplerFilter::Destroy()
    void DepthDownSamplerFilter::Destroy() {
        ShaderProgramManager* pSVar1;

        pSVar1 = (ShaderProgramManager*)Instance();
        pSVar1->Unregister(field_8);
        pSVar1 = (ShaderProgramManager*)pSVar1->Instance();
        pSVar1->Unregister(field_24);
    }

    // 0x1009ac9c0, 912 bytes, placed by class name and debug map
    // DepthDownSamplerFilter::DownSample2x2(render::RenderContext&, WrapArray<shared_ptr<render::RenderTargets> > const&, render::Texture const&, unsigned int, bool)
    void DepthDownSamplerFilter::DownSample2x2(RenderContext* param_1, WrapArray* param_2, Texture* param_3,
                                               uint param_4, bool param_5) {
        int iVar1;
        ulong uVar2;
        uint* puVar3;
        Layout* this_00;
        long lVar4;
        RenderPipelineState* pRVar5;
        InputAssemblerState* this_01;
        VertexDeclaration* pVVar6;
        VertexBuffer* pVVar7;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_02;
        RenderTargets* this_03;
        shared_ptr<render::RenderTargets>* this_04;
        RenderTargets* this_05;
        Texture* this_06;
        compressed_pair_imp<eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                                    eastl::allocator>>::Layout,
                            eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>, 0>* this_07;
        uint* puVar8;
        Viewport* pVVar9;
        OutputMergerState* pOVar10;
        HashedString* pHVar11;
        DrawCallState* this_08;
        TextureSamplerStateTracker* this_09;
        undefined1 local_d8[48];
        ImVec4 local_a8[24];
        Texture* local_90;
        RenderContext* local_88;
        DrawCallState local_80;
        Layout* local_50;
        DepthDownSamplerFilter* local_48;
        ShaderProgram* local_40;
        uint local_34;

        local_90 = param_3;
        local_88 = param_1;
        local_50 = (Layout*)param_2;
        local_48 = this;
        local_34 = param_4;
        uVar2 = param_2->HeapBeginPtr();
        if (uVar2 < param_4) {
            /* WARNING: Subroutine does not return */
            LogAssert("numDownSamples <= dstRTs.max_size()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/postprocess/"
                      "filters/DepthDownSamplerFilter.cpp",
                      77, (char*)0);
        }
        local_80.m_pInputAssemblerState._0_4_ =
            eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                    eastl::allocator>>::Layout::HeapBeginPtr(local_50);
        puVar3 = std::min<unsigned int>(&local_34, (uint*)&local_80);
        local_34 = *puVar3;
        this_08 = &local_80;
        render::DrawCallState::DrawCallState(this_08);
        this_00 = (Layout*)this_08->GetRenderPipelineState();
        lVar4 = this_08->Instance();
        eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::Layout::
            SetHeapSize(this_00, lVar4 + 900);
        if (param_5) {
            local_40 = (ShaderProgram*)shared_ptr<render::ShaderProgram>::operator*(
                (shared_ptr<render::ShaderProgram>*)local_48->field_24);
        } else {
            local_40 = (ShaderProgram*)shared_ptr<render::ShaderProgram>::operator*(
                (shared_ptr<render::ShaderProgram>*)local_48->field_8);
        }
        pRVar5 = (RenderPipelineState*)local_80.GetRenderPipelineState();
        pRVar5->SetShaderProgram(local_40);
        this_01 = (InputAssemblerState*)local_80.GetInputAssemblerState();
        pVVar6 = (VertexDeclaration*)local_40->second();
        pVVar7 = (VertexBuffer*)local_48->field_0->GetBoneIDMap();
        this_01->SetVertexStreamData(pVVar6, pVVar7);
        if (local_34 != 0) {
            uVar2 = 0;
            do {
                this_02 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)
                    WrapArray<shared_ptr<render::RenderTargets>>::operator[](
                        (WrapArray<shared_ptr<render::RenderTargets>>*)local_50, uVar2);
                this_03 = (RenderTargets*)eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(
                    this_02);
                this_06 = local_90;
                if (uVar2 != 0) {
                    this_04 =
                        (shared_ptr<render::RenderTargets>*)WrapArray<shared_ptr<render::RenderTargets>>::operator[](
                            (WrapArray<shared_ptr<render::RenderTargets>>*)local_50, uVar2 - 1);
                    this_05 = (RenderTargets*)shared_ptr<render::RenderTargets>::operator->(this_04);
                    this_06 = (Texture*)this_05->GetDepthStencilTargetTexture();
                }
                puVar3 = (uint*)this_06->second();
                this_07 =
                    (compressed_pair_imp<
                        eastl::basic_string<
                            char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::Layout,
                        eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>, 0>*)
                        this_03->GetDepthStencilTargetTexture();
                puVar8 = (uint*)eastl::compressed_pair_imp<
                    eastl::basic_string<
                        char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::Layout,
                    eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>, 0>::second(this_07);
                if ((*puVar3 >> 1 != *puVar8) || (puVar3[1] >> 1 != puVar8[1])) {
                    /* WARNING: Subroutine does not return */
                    LogAssert("((srcRTDesc.m_Width / 2) == dstRTDesc.m_Width) && ((srcRTDesc.m_Height / 2) == "
                              "dstRTDesc.m_Height)",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                              "postprocess/filters/DepthDownSamplerFilter.cpp",
                              95, "Dest render target must be a 1/4 the size of the src render target");
                }
                this_09 = (TextureSamplerStateTracker*)(local_d8 + 24);
                render::TextureSamplerStateTracker::TextureSamplerStateTracker(this_09, this_06);
                lVar4 = this_09->Instance();
                (*(code*)this_06->field_0[3])(this_06, lVar4 + 208, 0);
                new (local_d8) render::Viewport(0, 0, *puVar8, puVar8[1], 0.0, 1.0);
                pVVar9 = (Viewport*)local_80.GetOutputMergerState();
                render::OutputMergerState::SetViewports(pVVar9, (uint)local_d8);
                pOVar10 = (OutputMergerState*)local_80.GetOutputMergerState();
                pOVar10->SetRenderTargets(this_03);
                pOVar10 = (OutputMergerState*)local_80.GetOutputMergerState();
                pOVar10->SetClearFlags(2);
                pOVar10 = (OutputMergerState*)local_80.GetOutputMergerState();
                pOVar10->SetDepthStencilClear(1.0, '\0');
                ImVec4::ImVec4(local_a8, 1.0 / (float)*puVar3, 1.0 / (float)puVar3[1], (float)*puVar3,
                               (float)puVar3[1]);
                pHVar11 = (HashedString*)postprocess::operator*((postprocess*)12);
                local_40->SetShaderConstVector4(pHVar11, local_a8);
                pRVar5 = (RenderPipelineState*)local_80.GetRenderPipelineState();
                pHVar11 = (HashedString*)postprocess::operator*((postprocess*)4);
                iVar1 = local_40->GetConstIndex(pHVar11);
                pRVar5->SetPSTextureSamplerPair(0, this_06, iVar1, 0, false);
                (local_48->field_0, local_88, &local_80)->RenderQuad();
                ((local_d8 + 24))->~TextureSamplerStateTracker();
                uVar2 = uVar2 + 1;
            } while (uVar2 < local_34);
        }
        local_80.~DrawCallState();
    }

} // namespace jag::postprocess
