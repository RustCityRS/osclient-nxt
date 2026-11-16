// libs/graphics/postprocess/filters/KawaseBlurFilter.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics.postprocess

#include "KawaseBlurFilter.h"

namespace jag::postprocess {
    // 0x1009aa7a0, 240 bytes, placed by class name and debug map
    // KawaseBlurFilter::Init()
    bool KawaseBlurFilter::Init() {
        char* pcVar1;
        char* pcVar2;
        VertexElementDesc* pVVar3;
        long lVar4;
        PostProcessVS local_68[24];
        shadersourceprovider local_50[24];
        shared_ptr local_38;

        pcVar1 = (char*)Instance();
        local_68->BuildVSFragment();
        pcVar2 = (char*)local_68->c_str();
        local_50->GetCompletedShader(26);
        pVVar3 = (VertexElementDesc*)local_50->c_str();
        local_38.RegisterFromSourceString(pcVar1, pcVar2, pVVar3, 62757712, '\x02');
        shared_ptr<render::ShaderProgram>::operator=((shared_ptr<render::ShaderProgram>*)field_16, &local_38);
        local_38.~shared_ptr();
        local_50->~basic_string();
        local_68->~basic_string();
        lVar4 = field_16->end();
        return lVar4 != 0;
    }

    // 0x1009ab030, 64 bytes, placed by class name
    // KawaseBlurFilter::Destroy()
    void KawaseBlurFilter::Destroy() {
        undefined1* this_00;
        ShaderProgramManager* this_01;
        Singleton<render::ShaderProgramManager>* this_02;

        this_00 = field_48;
        this_02 = (Singleton<render::ShaderProgramManager>*)this_00;
        this_00->Destroy();
        this_01 = (ShaderProgramManager*)this_02->Instance();
        this_01->Unregister(field_16);
        this_00->Destroy();
    }

    // 0x1009b0380, 240 bytes, placed by class name
    // KawaseBlurFilter::BlurMultiPass(render::RenderContext&, render::RenderTargets&, render::Texture const&, KawaseKernelSize, int) const
    void KawaseBlurFilter::BlurMultiPass(undefined8 param_1, undefined8 param_2, TextRun* param_3, undefined4 param_5,
                                         int param_6) {
        shared_ptr* psVar2;
        DrawCallState local_78;
        shared_ptr<oldscape::dash3d::Decor> local_48[20];

        if (param_6 != 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("srcTextureArraySlice == 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/postprocess/"
                      "filters/KawaseBlurFilter.cpp",
                      70, "KawaseBlurFiler and texture array support currently disabled");
        }
        if (param_3->GetMaxLineWidth() == 35866) {
            psVar2 = (shared_ptr*)field_32;
        } else {
            psVar2 = (shared_ptr*)field_16;
        }
        shared_ptr<oldscape::dash3d::Decor>::shared_ptr(local_48, psVar2);
        new (&local_78) render::DrawCallState();
        BlurMultiPass(this, param_1, &local_78, param_2, param_3, param_5, field_16, 0);
        local_78.~DrawCallState();
        local_48->~shared_ptr();
    }

    // 0x1009b3330, 1152 bytes, placed by class name
    // KawaseBlurFilter::BlurMultiPass(render::RenderContext&, render::DrawCallState const&, render::RenderTargets&, render::Texture const&, KawaseKernelSize, shared_ptr<render::ShaderProgram> const&, int) const
    void KawaseBlurFilter::BlurMultiPass(RenderContext* param_1, DrawCallState* param_2, RenderTargets* param_3,
                                         Texture* param_4, int param_6,
                                         vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* param_7,
                                         int param_8) {
        undefined1* this_00;
        RenderTargetsManager* pRVar1;
        undefined8 uVar2;
        undefined8 uVar3;
        undefined8 uVar4;
        undefined8 uVar5;
        undefined8 uVar6;
        undefined8 uVar7;
        undefined8 uVar8;
        KawaseBlurFilter* pKVar9;
        bool bVar10;
        undefined4 uVar11;
        int iVar12;
        vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>* pvVar13;
        undefined8* puVar14;
        undefined8* puVar15;
        compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>* this_01;
        RenderPipelineState* pRVar16;
        long lVar17;
        Layout* this_02;
        int* piVar18;
        uint* puVar19;
        Viewport* pVVar20;
        ShaderProgram* pSVar21;
        compressed_pair_imp<eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                                    eastl::allocator>>::Layout,
                            eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>, 0>* this_03;
        VertexDeclaration* pVVar22;
        VertexBuffer* pVVar23;
        HashedString* pHVar24;
        RenderTargets* pRVar25;
        OutputMergerState* this_04;
        uint uVar26;
        long lVar27;
        DrawCallState* pDVar28;
        float fVar29;
        undefined1 auVar30[16];
        array<render::Texture::Desc, 2ul> local_168[128];
        undefined1 local_e8[24];
        undefined1 local_d0[72];
        ColourHSL local_88;
        undefined1 local_78[28];
        float local_5c;
        RenderTargets* local_58;
        long local_50;
        Texture* local_48;
        KawaseBlurFilter* local_40;
        AutoSingleton<ShaderThreadPoolSingleton> local_38[8];

        local_d0._64_8_ = param_1;
        local_58 = param_3;
        local_48 = param_4;
        local_40 = this;
        local_38->~AutoSingleton();
        uVar26 = param_6 - 1;
        if (uVar26 < 5) {
            local_78._16_8_ = (&PTR_g_kawaseKernel15x15_100f1ca28)[(int)uVar26];
            local_50 = *(long*)(&DAT_100d4fd28 + (long)(int)uVar26 * 8);
        } else {
            local_50 = 2;
            local_78._16_8_ = &g_kawaseKernel7x7;
        }
        std::array<render::Texture::Desc, 2ul>::array(local_168);
        pvVar13 = (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>*)
                      local_58->GetColourTargetTextures();
        puVar14 = (undefined8*)
            eastl::vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true,
                                                                          eastl::allocator>>::operator[](pvVar13, 0);
        puVar14 = (undefined8*)(*puVar14)->second();
        puVar15 = (undefined8*)std::array<render::Texture::Desc, 2ul>::operator[]((ulong)local_168);
        uVar2 = *puVar14;
        uVar3 = puVar14[1];
        uVar4 = puVar14[3];
        uVar5 = puVar14[4];
        uVar6 = puVar14[5];
        uVar7 = puVar14[6];
        uVar8 = puVar14[7];
        puVar15[2] = puVar14[2];
        puVar15[3] = uVar4;
        *puVar15 = uVar2;
        puVar15[1] = uVar3;
        puVar15[4] = uVar5;
        puVar15[5] = uVar6;
        puVar15[6] = uVar7;
        puVar15[7] = uVar8;
        *(undefined4*)(puVar15 + 3) = 0;
        *(undefined4*)(puVar15 + 1) = 1;
        *(undefined1*)(puVar15 + 4) = 0;
        pRVar1 = local_40->field_0;
        uVar11 = local_48->GetMaxLineWidth();
        new (local_d0) render::Texture::Desc();
        local_78->Register(pRVar1, "KawaseBlurRT", uVar11, local_168, 1, local_d0, 0, 1);
        bVar10 = local_78->operator_cast_to_bool();
        if (bVar10) {
            new (local_d0) render::DrawCallState(param_2);
            pDVar28 = (DrawCallState*)local_d0;
            this_01 = (compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>*)
                          pDVar28->GetRenderPipelineState();
            lVar27 = local_50;
            auVar30 = pDVar28->Instance();
            eastl::compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL,
                                       2>::compressed_pair_imp(this_01, (EntityHighlight**)(auVar30._0_8_ + 1524),
                                                               auVar30._8_8_);
            pDVar28 = (DrawCallState*)local_d0;
            pRVar16 = (RenderPipelineState*)pDVar28->GetRenderPipelineState();
            lVar17 = pDVar28->Instance();
            pRVar16->SetRasteriserState((RasteriserState*)(lVar17 + 1200));
            pDVar28 = (DrawCallState*)local_d0;
            this_02 = (Layout*)pDVar28->GetRenderPipelineState();
            lVar17 = pDVar28->Instance();
            eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::
                Layout::SetHeapSize(this_02, lVar17 + 1080);
            pvVar13 =
                (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>*)
                    local_58->GetColourTargetTextures();
            puVar14 = (undefined8*)eastl::vector<
                render::Texture*,
                eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>::operator[](pvVar13, 0);
            piVar18 = (int*)(*puVar14)->second();
            puVar19 = (uint*)local_48->second();
            new (local_e8) render::Viewport(0, 0, *piVar18, piVar18[1], 0.0, 1.0);
            pVVar20 = (Viewport*)local_d0->GetOutputMergerState();
            render::OutputMergerState::SetViewports(pVVar20, (uint)local_e8);
            pRVar16 = (RenderPipelineState*)local_d0->GetRenderPipelineState();
            pSVar21 =
                (ShaderProgram*)eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(param_7);
            pRVar16->SetShaderProgram(pSVar21);
            this_03 =
                (compressed_pair_imp<eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                                             eastl::allocator>>::Layout,
                                     eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>, 0>*)
                    shared_ptr<render::ShaderProgram>::operator->((shared_ptr<render::ShaderProgram>*)param_7);
            pKVar9 = local_40;
            this_00 = local_40->field_48;
            pVVar22 = (VertexDeclaration*)eastl::compressed_pair_imp<
                eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::Layout,
                eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>, 0>::second(this_03);
            pVVar23 = (VertexBuffer*)pKVar9->field_8->GetBoneIDMap();
            this_00->SetVertexStreamData(pVVar22, pVVar23);
            local_d0->SetInputAssemblerState(this_00);
            pSVar21 = (ShaderProgram*)shared_ptr<render::ShaderProgram>::operator->(
                (shared_ptr<render::ShaderProgram>*)param_7);
            pHVar24 = (HashedString*)postprocess::operator*((postprocess*)2);
            iVar12 = pSVar21->GetConstIndex(pHVar24);
            new (&local_88) math::ColourHSL(1.0 / (float)*puVar19, 1.0 / (float)puVar19[1], 0.0);
            local_5c = (float)param_8;
            lVar17 = 0;
            do {
                pRVar25 = (RenderTargets*)local_78->end();
                auVar30 = SelectPingPongSrcDstPair(local_48, local_58, pRVar25, (int)lVar17, (int)lVar27);
                this_04 = (OutputMergerState*)local_d0->GetOutputMergerState();
                this_04->SetRenderTargets(auVar30._8_8_);
                pRVar16 = (RenderPipelineState*)local_d0->GetRenderPipelineState();
                pRVar16->SetPSTextureSamplerPair(0, auVar30._0_8_, iVar12, 0, false);
                local_88.field_8 = *(float*)(local_78._16_8_ + lVar17 * 4);
                pSVar21 = (ShaderProgram*)shared_ptr<render::ShaderProgram>::operator->(
                    (shared_ptr<render::ShaderProgram>*)param_7);
                pHVar24 = (HashedString*)postprocess::operator*((postprocess*)23);
                pSVar21->SetShaderConstVector3(pHVar24, (Vector3T*)&local_88);
                pSVar21 = (ShaderProgram*)shared_ptr<render::ShaderProgram>::operator->(
                    (shared_ptr<render::ShaderProgram>*)param_7);
                pHVar24 = (HashedString*)postprocess::operator*((postprocess*)22);
                fVar29 = local_5c;
                if (auVar30._0_8_ != local_48) {
                    fVar29 = 0.0;
                }
                pSVar21->SetShaderConstFloat1(pHVar24, fVar29);
                (local_40->field_8, (RenderContext*)local_d0._64_8_, (DrawCallState*)local_d0)->RenderQuad();
                local_d0->GetRenderPipelineState();
                render::RenderPipelineState::ClearPSTextureSamplerPairs();
                lVar17 = lVar17 + 1;
                lVar27 = local_50;
            } while (local_50 != lVar17);
            pRVar25 = (RenderTargets*)shared_ptr<render::RenderTargets>::operator->(
                (shared_ptr<render::RenderTargets>*)local_78);
            pRVar25->Invalidate();
            (local_40->field_0, (shared_ptr*)local_78)->Unregister();
            local_d0->~DrawCallState();
        }
        local_78->~shared_ptr();
    }

} // namespace jag::postprocess
