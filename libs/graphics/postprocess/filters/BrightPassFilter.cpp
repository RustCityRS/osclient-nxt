// libs/graphics/postprocess/filters/BrightPassFilter.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics.postprocess

#include "BrightPassFilter.h"

namespace jag::postprocess {
    // 0x1009aa540, 16 bytes, placed by class name and debug map
    // BrightPassFilter::Init()
    undefined1 BrightPassFilter::Init() {
        return 1;
    }

    // 0x1009aaf90, 96 bytes, placed by class name
    // BrightPassFilter::Destroy()
    void BrightPassFilter::Destroy() {
        undefined1* this_00;
        ShaderProgramManager* this_01;
        Singleton<render::ShaderProgramManager>* this_02;

        field_32->Destroy();
        this_00 = field_16;
        this_02 = (Singleton<render::ShaderProgramManager>*)this_00;
        if (this_00->operator_cast_to_bool()) {
            this_01 = (ShaderProgramManager*)this_02->Instance();
            this_01->Unregister(this_00);
        }
        field_224 = 4294967295;
        field_32->Destroy();
    }

    // 0x1009aff80, 944 bytes, placed by class name
    // BrightPassFilter::Filter(render::RenderContext&, render::RenderTargets&, render::Texture const&, render::Texture const&, ToneMapOperator, PostProcessParams const&, float, float, LuminanceShaderOutputFormat)
    void BrightPassFilter::Filter(undefined8 param_1_00, float param_2_00, BrightPassFilter* this,
                                  RenderContext* param_1, RenderTargets* param_2, Texture* param_3, Texture* param_4,
                                  int param_8, long param_9, undefined4 param_10) {
        undefined1* this_00;
        int iVar1;
        char* pcVar2;
        char* pcVar3;
        VertexElementDesc* pVVar4;
        compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>* this_01;
        RenderPipelineState* pRVar5;
        long lVar6;
        Layout* this_02;
        vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>* pvVar7;
        undefined8* puVar8;
        int* piVar9;
        Viewport* pVVar10;
        OutputMergerState* this_03;
        ShaderProgram* pSVar11;
        compressed_pair_imp<eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                                    eastl::allocator>>::Layout,
                            eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>, 0>* this_04;
        VertexDeclaration* pVVar12;
        VertexBuffer* pVVar13;
        ulonglong uVar14;
        HashedString* pHVar15;
        DrawCallState* pDVar16;
        float fVar17;
        undefined1 auVar18[16];
        undefined1 local_b0[16];
        undefined1 local_a0[32];
        Texture* local_80;
        RenderContext* local_78;
        DrawCallState local_70;
        float local_3c;
        RenderTargets* local_38;

        local_a0._24_8_ = param_3;
        local_80 = param_4;
        local_78 = param_1;
        local_3c = param_2_00;
        if (field_224 != param_8) {
            local_38 = param_2;
            pcVar2 = (char*)Instance();
            local_70.BuildVSFragment();
            pcVar3 = (char*)local_70.c_str();
            local_a0->BuildFSFragment(param_8, param_10);
            pVVar4 = (VertexElementDesc*)local_a0->c_str();
            local_b0->RegisterFromSourceString(pcVar2, pcVar3, pVVar4, 62757712, '\x02');
            shared_ptr<render::ShaderProgram>::operator=((shared_ptr<render::ShaderProgram>*)field_16,
                                                         (shared_ptr*)local_b0);
            local_b0->~shared_ptr();
            local_a0->~basic_string();
            local_70.~basic_string();
            field_224 = param_8;
            param_2 = local_38;
        }
        pDVar16 = &local_70;
        render::DrawCallState::DrawCallState(pDVar16);
        this_01 = (compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>*)
                      pDVar16->GetRenderPipelineState();
        auVar18 = pDVar16->Instance();
        eastl::compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>::compressed_pair_imp(
            this_01, (EntityHighlight**)(auVar18._0_8_ + 1524), auVar18._8_8_);
        pDVar16 = &local_70;
        pRVar5 = (RenderPipelineState*)pDVar16->GetRenderPipelineState();
        lVar6 = pDVar16->Instance();
        pRVar5->SetRasteriserState((RasteriserState*)(lVar6 + 1200));
        pDVar16 = &local_70;
        this_02 = (Layout*)pDVar16->GetRenderPipelineState();
        lVar6 = pDVar16->Instance();
        eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::Layout::
            SetHeapSize(this_02, lVar6 + 1080);
        pvVar7 = (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>*)
                     param_2->GetColourTargetTextures();
        puVar8 = (undefined8*)
            eastl::vector<render::Texture*,
                          eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>::operator[](pvVar7,
                                                                                                                 0);
        piVar9 = (int*)(*puVar8)->second();
        iVar1 = *piVar9;
        pvVar7 = (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>*)
                     param_2->GetColourTargetTextures();
        puVar8 = (undefined8*)
            eastl::vector<render::Texture*,
                          eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>::operator[](pvVar7,
                                                                                                                 0);
        lVar6 = (*puVar8)->second();
        new (local_a0) render::Viewport(0, 0, iVar1, *(int*)(lVar6 + 4), 0.0, 1.0);
        pVVar10 = (Viewport*)local_70.GetOutputMergerState();
        render::OutputMergerState::SetViewports(pVVar10, (uint)local_a0);
        this_03 = (OutputMergerState*)local_70.GetOutputMergerState();
        this_03->SetRenderTargets(param_2);
        pRVar5 = (RenderPipelineState*)local_70.GetRenderPipelineState();
        this_00 = field_16;
        pSVar11 = (ShaderProgram*)this_00->end();
        pRVar5->SetShaderProgram(pSVar11);
        this_04 =
            (compressed_pair_imp<eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                                         eastl::allocator>>::Layout,
                                 eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>, 0>*)
                shared_ptr<render::ShaderProgram>::operator->((shared_ptr<render::ShaderProgram>*)this_00);
        pVVar12 = (VertexDeclaration*)eastl::compressed_pair_imp<
            eastl::basic_string<char,
                                eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::Layout,
            eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>, 0>::second(this_04);
        pVVar13 = (VertexBuffer*)field_8->GetBoneIDMap();
        (field_32, pVVar12, pVVar13)->SetVertexStreamData();
        local_70.SetInputAssemblerState(field_32);
        local_38 = (RenderTargets*)this;
        uVar14 = FrameTime::GetCurrentTimeMS();
        pSVar11 =
            (ShaderProgram*)shared_ptr<render::ShaderProgram>::operator->((shared_ptr<render::ShaderProgram>*)this_00);
        pHVar15 = (HashedString*)postprocess::operator*((postprocess*)10);
        fVar17 = (float)((param_9 + 128))->GetValue(uVar14);
        pSVar11->SetShaderConstFloat1(pHVar15, fVar17);
        pSVar11 =
            (ShaderProgram*)shared_ptr<render::ShaderProgram>::operator->((shared_ptr<render::ShaderProgram>*)this_00);
        pHVar15 = (HashedString*)postprocess::operator*((postprocess*)20);
        pSVar11->SetShaderConstFloat1(pHVar15, local_3c);
        pSVar11 =
            (ShaderProgram*)shared_ptr<render::ShaderProgram>::operator->((shared_ptr<render::ShaderProgram>*)this_00);
        pHVar15 = (HashedString*)postprocess::operator*((postprocess*)0);
        iVar1 = pSVar11->GetConstIndex(pHVar15);
        pRVar5 = (RenderPipelineState*)local_70.GetRenderPipelineState();
        pRVar5->SetPSTextureSamplerPair(0, local_a0._24_8_, iVar1, 0, false);
        pSVar11 =
            (ShaderProgram*)shared_ptr<render::ShaderProgram>::operator->((shared_ptr<render::ShaderProgram>*)this_00);
        pHVar15 = (HashedString*)postprocess::operator*((postprocess*)&DAT_00000001);
        iVar1 = pSVar11->GetConstIndex(pHVar15);
        pRVar5 = (RenderPipelineState*)local_70.GetRenderPipelineState();
        pRVar5->SetPSTextureSamplerPair(1, local_80, iVar1, 0, true);
        (*(RenderToTextureHelper**)&local_38->field_8, local_78, &local_70)->RenderQuad();
        local_70.~DrawCallState();
    }

} // namespace jag::postprocess
