// libs/graphics/postprocess/filters/DualFilteringBlurFilter.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics.postprocess

#include "DualFilteringBlurFilter.h"

namespace jag::postprocess {
    // 0x1009aa890, 528 bytes, placed by class name and debug map
    // DualFilteringBlurFilter::Init()
    ulong DualFilteringBlurFilter::Init() {
        ostream* this_00;
        char* pcVar1;
        char* pcVar2;
        VertexElementDesc* pVVar3;
        long lVar4;
        ulong uVar5;
        basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>>* this_01;
        undefined1 local_180[280];
        PostProcessVS local_68[24];
        basic_stringstream<char, std::char_traits<char>, BucketAllocatorSTL<char>> local_50[24];
        shared_ptr local_38;

        new (local_180) render::PixelShaderSourceStream(1, 1, 1, 1, 1, 1, 24);
        this_00 = std::operator<<((ostream*)(local_180 + 16), "#define DOWNSAMPLE_PASS;\n");
        pcVar1 = (char*)graphics::shadersourceprovider::GetShaderString(18);
        std::operator<<(this_00, pcVar1);
        pcVar1 = (char*)this_00->Instance();
        local_68->BuildVSFragment();
        pcVar2 = (char*)local_68->c_str();
        std::basic_stringstream<char, std::char_traits<char>, BucketAllocatorSTL<char>>::str(local_50);
        pVVar3 = (VertexElementDesc*)local_50->c_str();
        local_38.RegisterFromSourceString(pcVar1, pcVar2, pVVar3, 62757712, '\x02');
        shared_ptr<render::ShaderProgram>::operator=((shared_ptr<render::ShaderProgram>*)field_16, &local_38);
        local_38.~shared_ptr();
        local_50->~basic_string();
        this_01 = (basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>>*)local_68;
        std::basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>>::~basic_string(this_01);
        pcVar1 = (char*)this_01->Instance();
        local_68->BuildVSFragment();
        pcVar2 = (char*)local_68->c_str();
        local_50->GetCompletedShader(18);
        pVVar3 = (VertexElementDesc*)local_50->c_str();
        local_38.RegisterFromSourceString(pcVar1, pcVar2, pVVar3, 62757712, '\x02');
        shared_ptr<render::ShaderProgram>::operator=((shared_ptr<render::ShaderProgram>*)field_32, &local_38);
        local_38.~shared_ptr();
        local_50->~basic_string();
        local_68->~basic_string();
        lVar4 = field_16->end();
        if (lVar4 == 0) {
            uVar5 = 0;
        } else {
            lVar4 = field_32->end();
            uVar5 = CONCAT71((int7)((ulong)pcVar2 >> 8), lVar4 != 0);
        }
        local_180->~PixelShaderSourceStream();
        return uVar5 & 4294967295;
    }

    // 0x1009ab070, 64 bytes, placed by class name
    // DualFilteringBlurFilter::Destroy()
    void DualFilteringBlurFilter::Destroy() {
        ShaderProgramManager* pSVar1;

        pSVar1 = (ShaderProgramManager*)Instance();
        pSVar1->Unregister(field_16);
        pSVar1 = (ShaderProgramManager*)pSVar1->Instance();
        pSVar1->Unregister(field_32);
    }

    // 0x1009b0480, 1984 bytes, placed by class name
    // DualFilteringBlurFilter::BlurMultiPass(render::RenderContext&, render::RenderTargets&, render::Texture const&, DualFilteringBlurKernelSize, int) const
    void DualFilteringBlurFilter::BlurMultiPass(RenderContext* param_1, RenderTargets* param_2, Texture* param_3,
                                                uint param_5, int param_6) {
        undefined1* this_00;
        int iVar1;
        RenderTargetsManager* pRVar2;
        undefined8 uVar3;
        undefined8 uVar4;
        undefined8 uVar5;
        undefined8 uVar6;
        undefined8 uVar7;
        undefined8 uVar8;
        undefined8 uVar9;
        bool bVar10;
        undefined4 uVar11;
        vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>* pvVar12;
        undefined8* puVar13;
        shared_ptr* psVar14;
        ShaderProgram* pSVar15;
        HashedString* pHVar16;
        RenderPipelineState* pRVar17;
        InputAssemblerState* pIVar18;
        compressed_pair_imp<eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                                    eastl::allocator>>::Layout,
                            eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>, 0>* pcVar19;
        VertexDeclaration* pVVar20;
        VertexBuffer* pVVar21;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* pvVar22;
        RenderTargets* pRVar23;
        uint* puVar24;
        long lVar25;
        int* piVar26;
        Viewport* pVVar27;
        OutputMergerState* pOVar28;
        ulong uVar29;
        Texture* pTVar30;
        array<render::Texture::Desc, 2ul> local_1b8[128];
        array<shared_ptr<render::RenderTargets>, 5ul> local_138[80];
        undefined1 local_e8[64];
        undefined1 local_a8[48];
        RenderContext* local_78;
        RenderTargets* local_70;
        ulong local_68;
        Texture* local_60;
        uint* local_58;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* local_50;
        float local_48;
        int local_44;
        AutoSingleton<ShaderThreadPoolSingleton> local_40[8];
        DualFilteringBlurFilter* local_38;

        local_78 = param_1;
        local_70 = param_2;
        local_60 = param_3;
        local_38 = this;
        if (param_6 != 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("srcTextureArraySlice == 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/postprocess/"
                      "filters/DualFilteringBlurFilter.cpp",
                      53, "DualFilteringBlurFilter texture array support currently disabled");
        }
        if (param_5 == 5) {
            /* WARNING: Subroutine does not return */
            LogAssert("filterSize != DualFilteringBlurKernelSize::MAX_KERNEL",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/postprocess/"
                      "filters/DualFilteringBlurFilter.cpp",
                      54, "Invalid kernel selected");
        }
        uVar29 = 0;
        local_40->~AutoSingleton();
        std::array<render::Texture::Desc, 2ul>::array(local_1b8);
        pvVar12 = (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>*)
                      local_70->GetColourTargetTextures();
        puVar13 = (undefined8*)
            eastl::vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true,
                                                                          eastl::allocator>>::operator[](pvVar12, 0);
        puVar13 = (undefined8*)(*puVar13)->second();
        local_58 = (uint*)std::array<render::Texture::Desc, 2ul>::operator[]((ulong)local_1b8);
        uVar3 = *puVar13;
        uVar4 = puVar13[1];
        uVar5 = puVar13[3];
        uVar6 = puVar13[4];
        uVar7 = puVar13[5];
        uVar8 = puVar13[6];
        uVar9 = puVar13[7];
        *(undefined8*)(local_58 + 4) = puVar13[2];
        *(undefined8*)(local_58 + 6) = uVar5;
        *(undefined8*)local_58 = uVar3;
        *(undefined8*)(local_58 + 2) = uVar4;
        *(undefined8*)(local_58 + 8) = uVar6;
        *(undefined8*)(local_58 + 10) = uVar7;
        *(undefined8*)(local_58 + 12) = uVar8;
        *(undefined8*)(local_58 + 14) = uVar9;
        local_58[6] = 0;
        local_58[2] = 1;
        *(undefined1*)(local_58 + 8) = 0;
        std::array<shared_ptr<render::RenderTargets>, 5ul>::array();
        local_68 = (ulong)param_5 + 1;
        local_a8._24_8_ = (ulong)param_5;
        do {
            *local_58 = *local_58 >> 1;
            local_58[1] = local_58[1] >> 1;
            pRVar2 = local_38->field_0;
            uVar11 = local_60->GetMaxLineWidth();
            new (local_e8) render::Texture::Desc();
            local_a8->Register(pRVar2, "DualFilteringBlurFilterRT", uVar11, local_1b8, 1, local_e8, 0, 1);
            psVar14 = (shared_ptr*)std::array<shared_ptr<render::RenderTargets>, 5ul>::operator[](local_138, uVar29);
            shared_ptr<render::RenderTargets>::operator=((shared_ptr<render::RenderTargets>*)psVar14,
                                                         (shared_ptr*)local_a8);
            local_a8->~shared_ptr();
            bVar10 = shared_ptr::operator_cast_to_bool(psVar14);
            if (!bVar10)
                goto LAB_1009b0bc3;
            uVar29 = uVar29 + 1;
        } while (local_68 != uVar29);
        this_00 = local_38->field_16;
        pSVar15 =
            (ShaderProgram*)shared_ptr<render::ShaderProgram>::operator->((shared_ptr<render::ShaderProgram>*)this_00);
        pHVar16 = (HashedString*)postprocess::operator*((postprocess*)2);
        local_44 = pSVar15->GetConstIndex(pHVar16);
        new (local_e8) render::DrawCallState();
        pRVar17 = (RenderPipelineState*)local_e8->GetRenderPipelineState();
        pSVar15 = (ShaderProgram*)this_00->end();
        pRVar17->SetShaderProgram(pSVar15);
        pIVar18 = (InputAssemblerState*)local_e8->GetInputAssemblerState();
        pcVar19 =
            (compressed_pair_imp<eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                                         eastl::allocator>>::Layout,
                                 eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>, 0>*)
                shared_ptr<render::ShaderProgram>::operator->((shared_ptr<render::ShaderProgram>*)this_00);
        pVVar20 = (VertexDeclaration*)eastl::compressed_pair_imp<
            eastl::basic_string<char,
                                eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::Layout,
            eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>, 0>::second(pcVar19);
        pVVar21 = (VertexBuffer*)local_38->field_8->GetBoneIDMap();
        pIVar18->SetVertexStreamData(pVVar20, pVVar21);
        uVar29 = 0;
        do {
            pTVar30 = local_60;
            if (uVar29 != 0) {
                pvVar22 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)
                    std::array<shared_ptr<render::RenderTargets>, 5ul>::operator[](local_138, uVar29 - 1);
                pRVar23 = (RenderTargets*)eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(
                    pvVar22);
                pvVar12 = (vector<render::Texture*,
                                  eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>*)
                              pRVar23->GetColourTargetTextures();
                puVar13 = (undefined8*)eastl::vector<
                    render::Texture*,
                    eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>::operator[](pvVar12, 0);
                pTVar30 = (Texture*)*puVar13;
            }
            pvVar22 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)
                std::array<shared_ptr<render::RenderTargets>, 5ul>::operator[](local_138, uVar29);
            pRVar23 =
                (RenderTargets*)eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(pvVar22);
            puVar24 = (uint*)pTVar30->second();
            local_58 = (uint*)CONCAT44(local_58._4_4_, 1.0 / (float)*puVar24);
            lVar25 = pTVar30->second();
            local_48 = 1.0 / (float)*(uint*)(lVar25 + 4);
            puVar24 = (uint*)pTVar30->second();
            local_50 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)CONCAT44(
                local_50._4_4_, 0.5 / (float)*puVar24);
            lVar25 = pTVar30->second();
            new ((local_a8 + 32)) ImVec4(local_58._0_4_, local_48, local_50._0_4_, 0.5 / (float)*(uint*)(lVar25 + 4));
            pvVar12 =
                (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>*)
                    pRVar23->GetColourTargetTextures();
            puVar13 = (undefined8*)eastl::vector<
                render::Texture*,
                eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>::operator[](pvVar12, 0);
            piVar26 = (int*)(*puVar13)->second();
            iVar1 = *piVar26;
            pvVar12 =
                (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>*)
                    pRVar23->GetColourTargetTextures();
            puVar13 = (undefined8*)eastl::vector<
                render::Texture*,
                eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>::operator[](pvVar12, 0);
            lVar25 = (*puVar13)->second();
            new (local_a8) render::Viewport(0, 0, iVar1, *(int*)(lVar25 + 4), 0.0, 1.0);
            pVVar27 = (Viewport*)local_e8->GetOutputMergerState();
            render::OutputMergerState::SetViewports(pVVar27, (uint)local_a8);
            pOVar28 = (OutputMergerState*)local_e8->GetOutputMergerState();
            pOVar28->SetRenderTargets(pRVar23);
            pRVar17 = (RenderPipelineState*)local_e8->GetRenderPipelineState();
            pRVar17->SetPSTextureSamplerPair(0, pTVar30, local_44, 0, false);
            pSVar15 = (ShaderProgram*)shared_ptr<render::ShaderProgram>::operator->(
                (shared_ptr<render::ShaderProgram>*)this_00);
            pHVar16 = (HashedString*)postprocess::operator*((postprocess*)24);
            pSVar15->SetShaderConstVector4(pHVar16, (Vector4T*)(local_a8 + 32));
            (local_38->field_8, local_78, (DrawCallState*)local_e8)->RenderQuad();
            uVar29 = uVar29 + 1;
        } while (local_68 != uVar29);
        pRVar17 = (RenderPipelineState*)local_e8->GetRenderPipelineState();
        pRVar17->Clear();
        local_50 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)local_38->field_32;
        pSVar15 =
            (ShaderProgram*)shared_ptr<render::ShaderProgram>::operator->((shared_ptr<render::ShaderProgram>*)local_50);
        pHVar16 = (HashedString*)postprocess::operator*((postprocess*)2);
        local_44 = pSVar15->GetConstIndex(pHVar16);
        pRVar17 = (RenderPipelineState*)local_e8->GetRenderPipelineState();
        pSVar15 =
            (ShaderProgram*)eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(local_50);
        pRVar17->SetShaderProgram(pSVar15);
        pIVar18 = (InputAssemblerState*)local_e8->GetInputAssemblerState();
        pcVar19 =
            (compressed_pair_imp<eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                                         eastl::allocator>>::Layout,
                                 eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>, 0>*)
                shared_ptr<render::ShaderProgram>::operator->((shared_ptr<render::ShaderProgram>*)local_50);
        pVVar20 = (VertexDeclaration*)eastl::compressed_pair_imp<
            eastl::basic_string<char,
                                eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::Layout,
            eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>, 0>::second(pcVar19);
        pVVar21 = (VertexBuffer*)local_38->field_8->GetBoneIDMap();
        pIVar18->SetVertexStreamData(pVVar20, pVVar21);
        uVar29 = local_a8._24_8_;
        do {
            pvVar22 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)
                std::array<shared_ptr<render::RenderTargets>, 5ul>::operator[](local_138, uVar29);
            pRVar23 =
                (RenderTargets*)eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(pvVar22);
            pvVar12 =
                (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>*)
                    pRVar23->GetColourTargetTextures();
            puVar13 = (undefined8*)eastl::vector<
                render::Texture*,
                eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>::operator[](pvVar12, 0);
            pTVar30 = (Texture*)*puVar13;
            pRVar23 = local_70;
            if (uVar29 != 0) {
                pvVar22 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)
                    std::array<shared_ptr<render::RenderTargets>, 5ul>::operator[](local_138, uVar29 - 1);
                pRVar23 = (RenderTargets*)eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(
                    pvVar22);
            }
            puVar24 = (uint*)pTVar30->second();
            local_60 = (Texture*)CONCAT44(local_60._4_4_, 1.0 / (float)*puVar24);
            lVar25 = pTVar30->second();
            local_58 = (uint*)CONCAT44(local_58._4_4_, 1.0 / (float)*(uint*)(lVar25 + 4));
            puVar24 = (uint*)pTVar30->second();
            local_48 = 0.5 / (float)*puVar24;
            lVar25 = pTVar30->second();
            new ((local_a8 + 32)) ImVec4(local_60._0_4_, local_58._0_4_, local_48, 0.5 / (float)*(uint*)(lVar25 + 4));
            pvVar12 =
                (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>*)
                    pRVar23->GetColourTargetTextures();
            puVar13 = (undefined8*)eastl::vector<
                render::Texture*,
                eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>::operator[](pvVar12, 0);
            piVar26 = (int*)(*puVar13)->second();
            iVar1 = *piVar26;
            pvVar12 =
                (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>*)
                    pRVar23->GetColourTargetTextures();
            puVar13 = (undefined8*)eastl::vector<
                render::Texture*,
                eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>::operator[](pvVar12, 0);
            lVar25 = (*puVar13)->second();
            new (local_a8) render::Viewport(0, 0, iVar1, *(int*)(lVar25 + 4), 0.0, 1.0);
            pVVar27 = (Viewport*)local_e8->GetOutputMergerState();
            render::OutputMergerState::SetViewports(pVVar27, (uint)local_a8);
            pOVar28 = (OutputMergerState*)local_e8->GetOutputMergerState();
            pOVar28->SetRenderTargets(pRVar23);
            pRVar17 = (RenderPipelineState*)local_e8->GetRenderPipelineState();
            pRVar17->SetPSTextureSamplerPair(0, pTVar30, local_44, 0, false);
            pSVar15 = (ShaderProgram*)shared_ptr<render::ShaderProgram>::operator->(
                (shared_ptr<render::ShaderProgram>*)local_50);
            pHVar16 = (HashedString*)postprocess::operator*((postprocess*)24);
            pSVar15->SetShaderConstVector4(pHVar16, (Vector4T*)(local_a8 + 32));
            (local_38->field_8, local_78, (DrawCallState*)local_e8)->RenderQuad();
            bVar10 = uVar29 != 0;
            uVar29 = uVar29 - 1;
        } while (bVar10);
        uVar29 = 0;
        do {
            psVar14 = (shared_ptr*)std::array<shared_ptr<render::RenderTargets>, 5ul>::operator[](local_138, uVar29);
            pRVar23 = (RenderTargets*)shared_ptr<render::RenderTargets>::operator->(
                (shared_ptr<render::RenderTargets>*)psVar14);
            pRVar23->Invalidate();
            (local_38->field_0, psVar14)->Unregister();
            uVar29 = uVar29 + 1;
        } while (local_68 != uVar29);
        local_e8->~DrawCallState();
    LAB_1009b0bc3:
        std::array<shared_ptr<render::RenderTargets>, 5ul>::~array(local_138);
    }

} // namespace jag::postprocess
