// libs/graphics/postprocess/effects/OutlineAndShadowEffect.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics.postprocess

#include "OutlineAndShadowEffect.h"

namespace jag::postprocess {
    // 0x1009b45f0, 80 bytes, base-object constructor, placed by class name and debug map
    // OutlineAndShadowEffect::OutlineAndShadowEffect(int, int)
    void OutlineAndShadowEffect::OutlineAndShadowEffect(int param_1, int param_2) {
        undefined4 in_register_00000034;

        new (this) PostProcessEffect(param_1, param_2);
        field_0 = &PTR__OutlineAndShadowEffect_100f1c4f0;
        new (&field_20) OutlineAndShadowEffectConfig();
        new (field_32, (_func_decltype_nullptr*)CONCAT44(in_register_00000034)
                           shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_1));
    }

    // 0x1009b4640, 16 bytes, complete-object constructor, placed by class name and debug map
    // OutlineAndShadowEffect::OutlineAndShadowEffect(int, int): jumps straight to the base-object constructor

    // 0x1009b4650, 80 bytes, base-object destructor, placed by class name and debug map
    // OutlineAndShadowEffect::~OutlineAndShadowEffect()
    void OutlineAndShadowEffect::~OutlineAndShadowEffect() {
        field_0 = &PTR__OutlineAndShadowEffect_100f1c4f0;
        Destroy(this);
        field_32->~shared_ptr();
        ~AutoSingleton();
    }

    // 0x1009b46a0, 16 bytes, complete-object destructor, placed by class name and debug map
    // OutlineAndShadowEffect::~OutlineAndShadowEffect(): jumps straight to the base-object destructor

    // 0x1009b46b0, 32 bytes, deleting destructor, placed by class name and debug map
    // OutlineAndShadowEffect::~OutlineAndShadowEffect()
    void OutlineAndShadowEffect::~OutlineAndShadowEffect() {
        ~OutlineAndShadowEffect(this);
        operator_delete(this);
    }

    // 0x1009b46d0, 224 bytes, placed by class name and debug map
    // OutlineAndShadowEffect::Init()
    void OutlineAndShadowEffect::Init() {
        char* pcVar1;
        char* pcVar2;
        VertexElementDesc* pVVar3;
        PostProcessVS local_68[24];
        shadersourceprovider local_50[24];
        shared_ptr local_38;

        pcVar1 = (char*)Instance();
        local_68->BuildVSFragment();
        pcVar2 = (char*)local_68->c_str();
        local_50->GetCompletedShader(41);
        pVVar3 = (VertexElementDesc*)local_50->c_str();
        local_38.RegisterFromSourceString(pcVar1, pcVar2, pVVar3, 62757712, '\x02');
        shared_ptr<render::ShaderProgram>::operator=((shared_ptr<render::ShaderProgram>*)field_32, &local_38);
        local_38.~shared_ptr();
        local_50->~basic_string();
        local_68->~basic_string();
        operator!=((shared_ptr*)field_32, (_func_decltype_nullptr*)0);
    }

    // 0x1009b47b0, 48 bytes, placed by class name and debug map
    // OutlineAndShadowEffect::Destroy()
    void OutlineAndShadowEffect::Destroy() {
        ShaderProgramManager* this_00;

        this_00 = (ShaderProgramManager*)Instance();
        this_00->Unregister(field_32);
    }

    // 0x1009b47e0, 1344 bytes, placed by class name and debug map
    // OutlineAndShadowEffect::Render(render::RenderContext&, render::RenderTargets const*, render::Texture const*, render::Texture const*, render::Viewport const&, graphics::ViewRenderTargets*, PostProcessManager&)
    void OutlineAndShadowEffect::Render(RenderContext* param_1, RenderTargets* param_2, Texture* param_3,
                                        Texture* param_4, Viewport* param_5, ViewRenderTargets* param_6,
                                        PostProcessManager* param_7) {
        undefined1* this_00;
        undefined8 uVar1;
        undefined8 uVar2;
        undefined8 uVar3;
        undefined8 uVar4;
        undefined8 uVar5;
        undefined8 uVar6;
        bool bVar7;
        vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>* pvVar8;
        undefined8* puVar9;
        int* piVar10;
        long lVar11;
        undefined8* puVar12;
        undefined8 uVar13;
        compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>* this_01;
        RenderPipelineState* pRVar14;
        Layout* this_02;
        Viewport* pVVar15;
        ShaderProgram* pSVar16;
        InputAssemblerState* this_03;
        compressed_pair_imp<eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                                    eastl::allocator>>::Layout,
                            eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>, 0>* this_04;
        VertexDeclaration* pVVar17;
        GeometryBatch* this_05;
        VertexBuffer* pVVar18;
        HashedString* pHVar19;
        RenderTargets* pRVar20;
        OutputMergerState* this_06;
        RenderToTextureHelper* this_07;
        RenderTargetsManager* this_08;
        DrawCallState* pDVar21;
        int iVar22;
        uint uVar23;
        int iVar24;
        float fVar25;
        undefined4 uVar26;
        undefined1 auVar27[16];
        array<render::Texture::Desc, 2ul> local_168[128];
        ImVec4 local_e8[16];
        undefined8 local_d8;
        float fStack_d0;
        undefined4 uStack_cc;
        undefined1 local_c8[72];
        RenderContext* local_80;
        undefined1 local_78[32];
        Viewport* local_58;
        int local_4c;
        Texture* local_48;
        int local_3c;
        AutoSingleton<ShaderThreadPoolSingleton> local_38[8];

        local_80 = param_1;
        local_58 = param_5;
        local_38->~AutoSingleton();
        local_78._24_8_ = param_2;
        pvVar8 = (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>*)
                     param_2->GetColourTargetTextures();
        puVar9 = (undefined8*)
            eastl::vector<render::Texture*,
                          eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>::operator[](pvVar8,
                                                                                                                 0);
        piVar10 = (int*)(*puVar9)->second();
        iVar22 = *piVar10;
        local_48 = param_3;
        piVar10 = (int*)param_3->second();
        if (iVar22 != *piVar10) {
            /* WARNING: Subroutine does not return */
            LogAssert("dstRT->GetColourTargetTextures()[0]->GetDesc().m_Width == srcTexture->GetDesc().m_Width",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/postprocess/"
                      "effects/OutlineAndShadowEffect.cpp",
                      56, (char*)0);
        }
        pvVar8 = (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>*)
                     local_78._24_8_->GetColourTargetTextures();
        puVar9 = (undefined8*)
            eastl::vector<render::Texture*,
                          eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>::operator[](pvVar8,
                                                                                                                 0);
        lVar11 = (*puVar9)->second();
        iVar22 = *(int*)(lVar11 + 4);
        lVar11 = local_48->second();
        if (iVar22 != *(int*)(lVar11 + 4)) {
            /* WARNING: Subroutine does not return */
            LogAssert("dstRT->GetColourTargetTextures()[0]->GetDesc().m_Height == srcTexture->GetDesc().m_Height",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/postprocess/"
                      "effects/OutlineAndShadowEffect.cpp",
                      57, (char*)0);
        }
        std::array<render::Texture::Desc, 2ul>::array(local_168);
        puVar9 = (undefined8*)local_48->second();
        puVar12 = (undefined8*)std::array<render::Texture::Desc, 2ul>::operator[]((ulong)local_168);
        uVar13 = *puVar9;
        uVar1 = puVar9[1];
        uVar2 = puVar9[3];
        uVar3 = puVar9[4];
        uVar4 = puVar9[5];
        uVar5 = puVar9[6];
        uVar6 = puVar9[7];
        puVar12[2] = puVar9[2];
        puVar12[3] = uVar2;
        puVar12[4] = uVar3;
        puVar12[5] = uVar4;
        *puVar12 = uVar13;
        puVar12[1] = uVar1;
        puVar12[6] = uVar5;
        puVar12[7] = uVar6;
        *(undefined4*)(puVar12 + 3) = 0;
        *(undefined1*)(puVar12 + 4) = 0;
        uVar13 = param_7->GetRenderTargetsManager();
        new (local_c8) render::Texture::Desc();
        local_78->Register(uVar13, "OutlineAndShadowRT", 3553, local_168, 1, local_c8, 0, 1);
        bVar7 = operator!=((shared_ptr*)local_78, (_func_decltype_nullptr*)0);
        if (bVar7) {
            new (local_c8) render::DrawCallState();
            pDVar21 = (DrawCallState*)local_c8;
            this_01 = (compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>*)
                          pDVar21->GetRenderPipelineState();
            auVar27 = pDVar21->Instance();
            eastl::compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL,
                                       2>::compressed_pair_imp(this_01, (EntityHighlight**)(auVar27._0_8_ + 1524),
                                                               auVar27._8_8_);
            pDVar21 = (DrawCallState*)local_c8;
            pRVar14 = (RenderPipelineState*)pDVar21->GetRenderPipelineState();
            lVar11 = pDVar21->Instance();
            pRVar14->SetRasteriserState((RasteriserState*)(lVar11 + 1200));
            pDVar21 = (DrawCallState*)local_c8;
            this_02 = (Layout*)pDVar21->GetRenderPipelineState();
            lVar11 = pDVar21->Instance();
            eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::
                Layout::SetHeapSize(this_02, lVar11 + 1080);
            pVVar15 = (Viewport*)local_c8->GetOutputMergerState();
            render::OutputMergerState::SetViewports(pVVar15, (uint)local_58);
            pRVar14 = (RenderPipelineState*)local_c8->GetRenderPipelineState();
            this_00 = field_32;
            pSVar16 = (ShaderProgram*)this_00->end();
            pRVar14->SetShaderProgram(pSVar16);
            this_03 = (InputAssemblerState*)local_c8->GetInputAssemblerState();
            this_04 =
                (compressed_pair_imp<eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                                             eastl::allocator>>::Layout,
                                     eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>, 0>*)
                    shared_ptr<render::ShaderProgram>::operator->((shared_ptr<render::ShaderProgram>*)this_00);
            pVVar17 = (VertexDeclaration*)eastl::compressed_pair_imp<
                eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::Layout,
                eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>, 0>::second(this_04);
            this_05 = (GeometryBatch*)param_7->GetRenderToTexture();
            pVVar18 = (VertexBuffer*)this_05->GetBoneIDMap();
            this_03->SetVertexStreamData(pVVar17, pVVar18);
            pSVar16 = (ShaderProgram*)shared_ptr<render::ShaderProgram>::operator->(
                (shared_ptr<render::ShaderProgram>*)this_00);
            pHVar19 = (HashedString*)postprocess::operator*((postprocess*)2);
            local_4c = pSVar16->GetConstIndex(pHVar19);
            local_3c = ((field_20 - (uint)(field_28 == 0)) + 2) * field_24;
            local_c8._64_8_ = this;
            if (0 < local_3c) {
                local_78._16_8_ = ZEXT48((uint)-local_3c);
                iVar22 = 0;
                do {
                    pRVar20 = (RenderTargets*)local_78->end();
                    auVar27 =
                        SelectPingPongSrcDstPair(local_48, (RenderTargets*)local_78._24_8_, pRVar20, iVar22, local_3c);
                    this_06 = (OutputMergerState*)local_c8->GetOutputMergerState();
                    this_06->SetRenderTargets(auVar27._8_8_);
                    pRVar14 = (RenderPipelineState*)local_c8->GetRenderPipelineState();
                    pRVar14->SetPSTextureSamplerPair(0, auVar27._0_8_, local_4c, 0, false);
                    iVar24 = *(int*)(local_c8._64_8_ + 20) * *(int*)(local_c8._64_8_ + 24);
                    if (iVar22 < iVar24) {
                        uVar23 = 4294967295;
                        if (iVar22 < *(int*)(local_c8._64_8_ + 24)) {
                            uVar23 = 4278190082;
                        }
                    } else {
                        uVar23 = *(int*)(local_c8._64_8_ + 28);
                    }
                    uVar26 = 0;
                    fVar25 = 1.0 / (float)local_58->field_12;
                    ImVec4::ImVec4(local_e8, 1.0 / (float)local_58->field_8, fVar25, 0.0, 0.0);
                    pSVar16 = (ShaderProgram*)shared_ptr<render::ShaderProgram>::operator->(
                        (shared_ptr<render::ShaderProgram>*)this_00);
                    pHVar19 = (HashedString*)postprocess::operator*((postprocess*)36);
                    pSVar16->SetShaderConstVector4(pHVar19, 1, local_e8, 1);
                    uVar13 = math::Colour4FromA8R8G8B8(uVar23);
                    fStack_d0 = fVar25;
                    uStack_cc = uVar26;
                    local_d8 = uVar13;
                    pSVar16 = (ShaderProgram*)shared_ptr<render::ShaderProgram>::operator->(
                        (shared_ptr<render::ShaderProgram>*)this_00);
                    pHVar19 = (HashedString*)postprocess::operator*((postprocess*)37);
                    pSVar16->SetShaderConstVector4(pHVar19, 1, (Vector4T*)&local_d8, 1);
                    pSVar16 = (ShaderProgram*)shared_ptr<render::ShaderProgram>::operator->(
                        (shared_ptr<render::ShaderProgram>*)this_00);
                    pHVar19 = (HashedString*)postprocess::operator*((postprocess*)38);
                    pSVar16->SetShaderConstInt1(pHVar19, (uint)(iVar24 <= iVar22));
                    pSVar16 = (ShaderProgram*)shared_ptr<render::ShaderProgram>::operator->(
                        (shared_ptr<render::ShaderProgram>*)this_00);
                    iVar24 = local_78._16_4_;
                    pHVar19 = (HashedString*)postprocess::operator*((postprocess*)39);
                    pSVar16->SetShaderConstInt1(pHVar19, (uint)(iVar24 + iVar22 == -1));
                    this_07 = (RenderToTextureHelper*)param_7->GetRenderToTexture();
                    this_07->RenderQuad(local_80, local_c8);
                    local_c8->GetRenderPipelineState();
                    render::RenderPipelineState::ClearPSTextureSamplerPairs();
                    iVar22 = iVar22 + 1;
                } while (local_78._16_4_ + iVar22 != 0);
            }
            this_08 = (RenderTargetsManager*)param_7->GetRenderTargetsManager();
            this_08->Unregister(local_78);
            local_c8->~DrawCallState();
            local_78->~shared_ptr();
            return;
        }
        /* WARNING: Subroutine does not return */
        LogAssert("intermediateRT != nullptr",
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/postprocess/effects/"
                  "OutlineAndShadowEffect.cpp",
                  65, (char*)0);
    }

} // namespace jag::postprocess
