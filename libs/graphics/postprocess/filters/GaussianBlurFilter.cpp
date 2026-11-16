// libs/graphics/postprocess/filters/GaussianBlurFilter.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics.postprocess

#include "GaussianBlurFilter.h"

namespace jag::postprocess {
    // 0x1009aa550, 592 bytes, placed by class name and debug map
    // GaussianBlurFilter::Init()
    bool GaussianBlurFilter::Init() {
        char* pcVar1;
        char* pcVar2;
        VertexElementDesc* pVVar3;
        MapArea* this_00;
        long lVar4;
        ostream* this_01;
        basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>>* this_02;
        undefined1 local_180[280];
        shared_ptr local_68;
        shadersourceprovider local_58[24];
        shared_ptr local_40;

        pcVar1 = (char*)Instance();
        local_180->BuildVSFragment();
        pcVar2 = (char*)local_180->c_str();
        local_58->GetCompletedShader(22);
        pVVar3 = (VertexElementDesc*)local_58->c_str();
        local_40.RegisterFromSourceString(pcVar1, pcVar2, pVVar3, 62757712, '\x02');
        shared_ptr<render::ShaderProgram>::operator=((shared_ptr<render::ShaderProgram>*)field_16, &local_40);
        local_40.~shared_ptr();
        local_58->~basic_string();
        this_02 = (basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>>*)local_180;
        std::basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>>::~basic_string(this_02);
        this_00 = (MapArea*)this_02->Instance();
        lVar4 = this_00->GetOrigin();
        if (*(char*)(lVar4 + 146) != '\0') {
            new (local_180) render::PixelShaderSourceStream(1, 1, 1, 1, 1, 1, 24);
            this_01 = std::operator<<((ostream*)(local_180 + 16), "#define USE_TEXTURE_ARRAY;\n");
            pcVar1 = (char*)graphics::shadersourceprovider::GetShaderString(22);
            std::operator<<(this_01, pcVar1);
            pcVar1 = (char*)this_01->Instance();
            local_58->BuildVSFragment();
            pcVar2 = (char*)local_58->c_str();
            local_40.str();
            pVVar3 = (VertexElementDesc*)local_40.c_str();
            local_68.RegisterFromSourceString(pcVar1, pcVar2, pVVar3, 62757712, '\x02');
            shared_ptr<render::ShaderProgram>::operator=((shared_ptr<render::ShaderProgram>*)field_32, &local_68);
            local_68.~shared_ptr();
            local_40.~basic_string();
            local_58->~basic_string();
            local_180->~PixelShaderSourceStream();
        }
        lVar4 = field_16->end();
        return lVar4 != 0;
    }

    // 0x1009aaff0, 64 bytes, placed by class name
    // GaussianBlurFilter::Destroy()
    void GaussianBlurFilter::Destroy() {
        ShaderProgramManager* pSVar1;

        pSVar1 = (ShaderProgramManager*)Instance();
        pSVar1->Unregister(field_16);
        pSVar1 = (ShaderProgramManager*)pSVar1->Instance();
        pSVar1->Unregister(field_32);
    }

    // 0x1009b0c50, 1664 bytes, placed by class name
    // GaussianBlurFilter::BlurMultiPass13Tap(render::RenderContext&, render::RenderTargets&, render::Texture const&, float, int, int) const
    void GaussianBlurFilter::BlurMultiPass13Tap(RenderContext* param_1, RenderTargets* param_2, Texture* param_3,
                                                float param_4, int param_5, int param_6) {
        RenderTargetsManager* pRVar1;
        long* plVar2;
        undefined8 uVar3;
        undefined8 uVar4;
        undefined8 uVar5;
        undefined8 uVar6;
        undefined8 uVar7;
        undefined8 uVar8;
        float fVar9;
        bool bVar10;
        int iVar11;
        int iVar12;
        undefined4 uVar13;
        vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>* pvVar14;
        undefined8* puVar15;
        int* piVar16;
        long lVar17;
        undefined8* puVar18;
        RenderTargets* pRVar19;
        compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>* this_00;
        RenderPipelineState* pRVar20;
        Layout* this_01;
        Viewport* pVVar21;
        undefined8 uVar22;
        ShaderProgram* this_02;
        InputAssemblerState* this_03;
        VertexDeclaration* pVVar23;
        VertexBuffer* pVVar24;
        HashedString* pHVar25;
        OutputMergerState* pOVar26;
        Vector4T* pVVar27;
        Texture* pTVar28;
        DrawCallState* pDVar29;
        undefined1 auVar30[16];
        array<render::Texture::Desc, 2ul> local_218[128];
        Desc local_198[3];
        undefined1 local_c8[72];
        RenderContext* local_80;
        undefined1 local_78[24];
        int local_60;
        uint local_5c;
        Texture* local_58;
        GaussianBlurFilter* local_50;
        RenderTargets* local_48;
        float local_3c;
        AutoSingleton<ShaderThreadPoolSingleton> local_38[4];
        int local_34;

        local_80 = param_1;
        local_78._20_4_ = param_4;
        local_50 = this;
        local_34 = param_5;
        local_38->~AutoSingleton();
        local_48 = param_2;
        pvVar14 = (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>*)
                      param_2->GetColourTargetTextures();
        puVar15 = (undefined8*)
            eastl::vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true,
                                                                          eastl::allocator>>::operator[](pvVar14, 0);
        iVar11 = (*puVar15)->GetMaxLineWidth();
        local_58 = param_3;
        iVar12 = param_3->GetMaxLineWidth();
        if (iVar11 != iVar12) {
            /* WARNING: Subroutine does not return */
            LogAssert("dstRT.GetColourTargetTextures()[0]->GetType() == srcTexture.GetType()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/postprocess/"
                      "filters/GaussianBlurFilter.cpp",
                      63, (char*)0);
        }
        pvVar14 = (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>*)
                      local_48->GetColourTargetTextures();
        puVar15 = (undefined8*)
            eastl::vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true,
                                                                          eastl::allocator>>::operator[](pvVar14, 0);
        piVar16 = (int*)(*puVar15)->second();
        iVar11 = *piVar16;
        piVar16 = (int*)local_58->second();
        if (iVar11 != *piVar16) {
            /* WARNING: Subroutine does not return */
            LogAssert("dstRT.GetColourTargetTextures()[0]->GetDesc().m_Width == srcTexture.GetDesc().m_Width",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/postprocess/"
                      "filters/GaussianBlurFilter.cpp",
                      64, (char*)0);
        }
        local_3c = (float)param_6;
        pvVar14 = (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>*)
                      local_48->GetColourTargetTextures();
        puVar15 = (undefined8*)
            eastl::vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true,
                                                                          eastl::allocator>>::operator[](pvVar14, 0);
        lVar17 = (*puVar15)->second();
        iVar11 = *(int*)(lVar17 + 4);
        lVar17 = local_58->second();
        if (iVar11 != *(int*)(lVar17 + 4)) {
            /* WARNING: Subroutine does not return */
            LogAssert("dstRT.GetColourTargetTextures()[0]->GetDesc().m_Height == srcTexture.GetDesc().m_Height",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/postprocess/"
                      "filters/GaussianBlurFilter.cpp",
                      65, (char*)0);
        }
        local_198[0].field_0 = 1;
        piVar16 = std::max<int>(&local_34, &local_198[0].field_0);
        local_34 = *piVar16;
        std::array<render::Texture::Desc, 2ul>::array(local_218);
        pTVar28 = local_58;
        puVar15 = (undefined8*)local_58->second();
        puVar18 = (undefined8*)std::array<render::Texture::Desc, 2ul>::operator[]((ulong)local_218);
        uVar22 = *puVar15;
        uVar3 = puVar15[1];
        uVar4 = puVar15[3];
        uVar5 = puVar15[4];
        uVar6 = puVar15[5];
        uVar7 = puVar15[6];
        uVar8 = puVar15[7];
        puVar18[2] = puVar15[2];
        puVar18[3] = uVar4;
        *puVar18 = uVar22;
        puVar18[1] = uVar3;
        puVar18[4] = uVar5;
        puVar18[5] = uVar6;
        puVar18[6] = uVar7;
        puVar18[7] = uVar8;
        *(undefined4*)(puVar18 + 3) = 0;
        *(undefined4*)(puVar18 + 1) = 1;
        *(undefined1*)(puVar18 + 4) = 0;
        pRVar1 = local_50->field_0;
        uVar13 = pTVar28->GetMaxLineWidth();
        render::Texture::Desc::Desc(local_198);
        local_78->Register(pRVar1, "GaussianBlurRT", uVar13, local_218, 1, local_198, 0, 1);
        bVar10 = local_78->operator_cast_to_bool();
        if (bVar10) {
            pRVar19 = (RenderTargets*)shared_ptr<render::RenderTargets>::operator->(
                (shared_ptr<render::RenderTargets>*)local_78);
            pvVar14 =
                (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>*)
                    pRVar19->GetColourTargetTextures();
            puVar15 = (undefined8*)eastl::vector<
                render::Texture*,
                eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>::operator[](pvVar14, 0);
            plVar2 = (long*)*puVar15;
            lVar17 = pvVar14->Instance();
            (**(code**)(*plVar2 + 24))(plVar2, lVar17 + 272, 0);
            new ((local_c8 + 24)) render::DrawCallState();
            fVar9 = local_3c;
            pDVar29 = (DrawCallState*)(local_c8 + 24);
            this_00 = (compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>*)
                          pDVar29->GetRenderPipelineState();
            auVar30 = pDVar29->Instance();
            eastl::compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL,
                                       2>::compressed_pair_imp(this_00, (EntityHighlight**)(auVar30._0_8_ + 1524),
                                                               auVar30._8_8_);
            pDVar29 = (DrawCallState*)(local_c8 + 24);
            pRVar20 = (RenderPipelineState*)pDVar29->GetRenderPipelineState();
            lVar17 = pDVar29->Instance();
            pRVar20->SetRasteriserState((RasteriserState*)(lVar17 + 1200));
            pDVar29 = (DrawCallState*)(local_c8 + 24);
            this_01 = (Layout*)pDVar29->GetRenderPipelineState();
            lVar17 = pDVar29->Instance();
            eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::
                Layout::SetHeapSize(this_01, lVar17 + 1080);
            pvVar14 =
                (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>*)
                    local_48->GetColourTargetTextures();
            puVar15 = (undefined8*)eastl::vector<
                render::Texture*,
                eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>::operator[](pvVar14, 0);
            piVar16 = (int*)(*puVar15)->second();
            iVar11 = *piVar16;
            pvVar14 =
                (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>*)
                    local_48->GetColourTargetTextures();
            puVar15 = (undefined8*)eastl::vector<
                render::Texture*,
                eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>::operator[](pvVar14, 0);
            lVar17 = (*puVar15)->second();
            new (local_c8) render::Viewport(0, 0, iVar11, *(int*)(lVar17 + 4), 0.0, 1.0);
            pVVar21 = (Viewport*)((local_c8 + 24))->GetOutputMergerState();
            render::OutputMergerState::SetViewports(pVVar21, (uint)local_c8);
            if ((int)fVar9 < 0) {
                local_5c = 0;
            } else {
                uVar22 = local_58->GetMaxLineWidth();
                local_5c = (uint)CONCAT71((int7)((ulong)uVar22 >> 8), (int)uVar22 == 35866);
            }
            this_02 = (ShaderProgram*)((local_50->field_16 + (ulong)(local_5c & 255) * 16))->end();
            if (this_02 == (ShaderProgram*)0) {
                /* WARNING: Subroutine does not return */
                LogAssert("pBlurShaderProgram",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/postprocess/"
                          "filters/GaussianBlurFilter.cpp",
                          96, (char*)0);
            }
            pRVar20 = (RenderPipelineState*)((local_c8 + 24))->GetRenderPipelineState();
            pRVar20->SetShaderProgram(this_02);
            this_03 = (InputAssemblerState*)((local_c8 + 24))->GetInputAssemblerState();
            pVVar23 = (VertexDeclaration*)this_02->second();
            pVVar24 = (VertexBuffer*)local_50->field_8->GetBoneIDMap();
            this_03->SetVertexStreamData(pVVar23, pVVar24);
            pHVar25 = (HashedString*)postprocess::operator*((postprocess*)2);
            local_60 = this_02->GetConstIndex(pHVar25);
            new (local_198) std::array<math::Vector4T<float>, 13ul>();
            if (0 < local_34) {
                local_3c = (float)(int)fVar9;
                iVar11 = 0;
                pDVar29 = (DrawCallState*)(local_c8 + 24);
                do {
                    pOVar26 = (OutputMergerState*)pDVar29->GetOutputMergerState();
                    pRVar19 = (RenderTargets*)local_78->end();
                    pOVar26->SetRenderTargets(pRVar19);
                    pTVar28 = local_58;
                    if (iVar11 != 0) {
                        pvVar14 = (vector<render::Texture*,
                                          eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>*)
                                      local_48->GetColourTargetTextures();
                        puVar15 = (undefined8*)eastl::vector<
                            render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true,
                                                                            eastl::allocator>>::operator[](pvVar14, 0);
                        pTVar28 = (Texture*)*puVar15;
                    }
                    pDVar29->GetRenderPipelineState();
                    render::RenderPipelineState::ClearPSTextureSamplerPairs();
                    pRVar20 = (RenderPipelineState*)pDVar29->GetRenderPipelineState();
                    pRVar20->SetPSTextureSamplerPair(0, pTVar28, local_60, 0, false);
                    piVar16 = (int*)pTVar28->second();
                    CalcGaussianOffsetsWeights13Tap((array*)local_198, *piVar16, 0, (float)local_78._20_4_);
                    pHVar25 = (HashedString*)postprocess::operator*((postprocess*)21);
                    pVVar27 = (Vector4T*)local_198->data();
                    this_02->SetShaderConstVector4(pHVar25, 13, pVVar27, 1);
                    if ((char)local_5c != '\0') {
                        pHVar25 = (HashedString*)postprocess::operator*((postprocess*)22);
                        this_02->SetShaderConstFloat1(pHVar25, local_3c);
                    }
                    (local_50->field_8, local_80, pDVar29)->RenderQuad();
                    pOVar26 = (OutputMergerState*)pDVar29->GetOutputMergerState();
                    pOVar26->SetRenderTargets(local_48);
                    pRVar19 = (RenderTargets*)shared_ptr<render::RenderTargets>::operator->(
                        (shared_ptr<render::RenderTargets>*)local_78);
                    pvVar14 = (vector<render::Texture*,
                                      eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>*)
                                  pRVar19->GetColourTargetTextures();
                    puVar15 = (undefined8*)eastl::vector<
                        render::Texture*,
                        eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>::operator[](pvVar14,
                                                                                                               0);
                    pTVar28 = (Texture*)*puVar15;
                    pDVar29->GetRenderPipelineState();
                    render::RenderPipelineState::ClearPSTextureSamplerPairs();
                    pRVar20 = (RenderPipelineState*)pDVar29->GetRenderPipelineState();
                    pRVar20->SetPSTextureSamplerPair(0, pTVar28, local_60, 0, false);
                    lVar17 = pTVar28->second();
                    CalcGaussianOffsetsWeights13Tap((array*)local_198, 0, *(int*)(lVar17 + 4), (float)local_78._20_4_);
                    pHVar25 = (HashedString*)postprocess::operator*((postprocess*)21);
                    this_02->SetShaderConstVector4(pHVar25, 13, pVVar27, 1);
                    if ((char)local_5c != '\0') {
                        pHVar25 = (HashedString*)postprocess::operator*((postprocess*)22);
                        this_02->SetShaderConstFloat1(pHVar25, 0.0);
                    }
                    (local_50->field_8, local_80, pDVar29)->RenderQuad();
                    iVar11 = iVar11 + 1;
                } while (iVar11 < local_34);
            }
            pRVar19 = (RenderTargets*)shared_ptr<render::RenderTargets>::operator->(
                (shared_ptr<render::RenderTargets>*)local_78);
            pRVar19->Invalidate();
            (local_50->field_0, (shared_ptr*)local_78)->Unregister();
            ((local_c8 + 24))->~DrawCallState();
        }
        local_78->~shared_ptr();
    }

} // namespace jag::postprocess
