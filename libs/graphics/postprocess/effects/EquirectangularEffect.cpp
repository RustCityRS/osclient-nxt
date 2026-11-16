// libs/graphics/postprocess/effects/EquirectangularEffect.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics.postprocess

#include "EquirectangularEffect.h"

namespace jag::postprocess {
    // 0x1009b39f0, 96 bytes, base-object constructor, placed by class name and debug map
    // EquirectangularEffect::EquirectangularEffect(int, int)
    void EquirectangularEffect::EquirectangularEffect(int param_1, int param_2) {
        undefined4 in_register_00000034;

        new (this) PostProcessEffect(param_1, param_2);
        field_0 = &PTR__EquirectangularEffect_100f1c450;
        new (field_24, (_func_decltype_nullptr*)CONCAT44(in_register_00000034)
                           shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_1));
        new (field_40, (_func_decltype_nullptr*)CONCAT44(in_register_00000034)
                           shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_1));
    }

    // 0x1009b3a50, 16 bytes, complete-object constructor, placed by class name and debug map
    // EquirectangularEffect::EquirectangularEffect(int, int): jumps straight to the base-object constructor

    // 0x1009b3a60, 96 bytes, base-object destructor, placed by class name and debug map
    // EquirectangularEffect::~EquirectangularEffect()
    void EquirectangularEffect::~EquirectangularEffect() {
        field_0 = &PTR__EquirectangularEffect_100f1c450;
        Destroy(this);
        field_40->~shared_ptr();
        field_24->~shared_ptr();
        ~AutoSingleton();
    }

    // 0x1009b3ac0, 16 bytes, complete-object destructor, placed by class name and debug map
    // EquirectangularEffect::~EquirectangularEffect(): jumps straight to the base-object destructor

    // 0x1009b3ad0, 32 bytes, deleting destructor, placed by class name and debug map
    // EquirectangularEffect::~EquirectangularEffect()
    void EquirectangularEffect::~EquirectangularEffect() {
        ~EquirectangularEffect(this);
        operator_delete(this);
    }

    // 0x1009b3af0, 224 bytes, placed by class name and debug map
    // EquirectangularEffect::Init()
    void EquirectangularEffect::Init() {
        char* pcVar1;
        char* pcVar2;
        VertexElementDesc* pVVar3;
        PostProcessVS local_68[24];
        shadersourceprovider local_50[24];
        shared_ptr local_38;

        pcVar1 = (char*)Instance();
        local_68->BuildVSFragment();
        pcVar2 = (char*)local_68->c_str();
        local_50->GetCompletedShader(19);
        pVVar3 = (VertexElementDesc*)local_50->c_str();
        local_38.RegisterFromSourceString(pcVar1, pcVar2, pVVar3, 62757712, '\x02');
        shared_ptr<render::ShaderProgram>::operator=((shared_ptr<render::ShaderProgram>*)field_24, &local_38);
        local_38.~shared_ptr();
        local_50->~basic_string();
        local_68->~basic_string();
        operator!=((shared_ptr*)field_24, (_func_decltype_nullptr*)0);
    }

    // 0x1009b3bd0, 48 bytes, placed by class name and debug map
    // EquirectangularEffect::Destroy()
    void EquirectangularEffect::Destroy() {
        ShaderProgramManager* this_00;

        this_00 = (ShaderProgramManager*)Instance();
        this_00->Unregister(field_24);
    }

    // 0x1009b3c00, 496 bytes, placed by class name and debug map
    // EquirectangularEffect::Render(render::RenderContext&, render::RenderTargets const*, render::Texture const*, render::Texture const*, render::Viewport const&, graphics::ViewRenderTargets*, PostProcessManager&)
    void EquirectangularEffect::Render(RenderContext* param_1, RenderTargets* param_2, Texture* param_3,
                                       Texture* param_4, Viewport* param_5, ViewRenderTargets* param_6,
                                       PostProcessManager* param_7) {
        Texture* pTVar1;
        bool bVar2;
        int iVar3;
        compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>* this_00;
        RenderPipelineState* pRVar4;
        long lVar5;
        Layout* this_01;
        Viewport* pVVar6;
        OutputMergerState* this_02;
        ShaderProgram* pSVar7;
        InputAssemblerState* this_03;
        compressed_pair_imp<eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                                    eastl::allocator>>::Layout,
                            eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>, 0>* this_04;
        VertexDeclaration* pVVar8;
        GeometryBatch* this_05;
        VertexBuffer* pVVar9;
        RenderTargets* this_06;
        vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>* this_07;
        undefined8* puVar10;
        HashedString* pHVar11;
        RenderToTextureHelper* this_08;
        DrawCallState* pDVar12;
        undefined1* this_09;
        undefined1 auVar13[16];
        DrawCallState local_70;
        RenderContext* local_40;
        AutoSingleton<ShaderThreadPoolSingleton> local_38[8];

        local_40 = param_1;
        bVar2 = field_40->operator_cast_to_bool();
        if (bVar2) {
            local_38->~AutoSingleton("Post_Processing");
            pDVar12 = &local_70;
            render::DrawCallState::DrawCallState(pDVar12);
            this_00 = (compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>*)
                          pDVar12->GetRenderPipelineState();
            auVar13 = pDVar12->Instance();
            eastl::compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL,
                                       2>::compressed_pair_imp(this_00, (EntityHighlight**)(auVar13._0_8_ + 1524),
                                                               auVar13._8_8_);
            pDVar12 = &local_70;
            pRVar4 = (RenderPipelineState*)pDVar12->GetRenderPipelineState();
            lVar5 = pDVar12->Instance();
            pRVar4->SetRasteriserState((RasteriserState*)(lVar5 + 1200));
            pDVar12 = &local_70;
            this_01 = (Layout*)pDVar12->GetRenderPipelineState();
            lVar5 = pDVar12->Instance();
            eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::
                Layout::SetHeapSize(this_01, lVar5 + 1080);
            pVVar6 = (Viewport*)local_70.GetOutputMergerState();
            render::OutputMergerState::SetViewports(pVVar6, (uint)param_5);
            this_02 = (OutputMergerState*)local_70.GetOutputMergerState();
            this_02->SetRenderTargets(param_2);
            pRVar4 = (RenderPipelineState*)local_70.GetRenderPipelineState();
            this_09 = field_24;
            pSVar7 = (ShaderProgram*)this_09->end();
            pRVar4->SetShaderProgram(pSVar7);
            this_03 = (InputAssemblerState*)local_70.GetInputAssemblerState();
            this_04 =
                (compressed_pair_imp<eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                                             eastl::allocator>>::Layout,
                                     eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>, 0>*)
                    shared_ptr<render::ShaderProgram>::operator->((shared_ptr<render::ShaderProgram>*)this_09);
            pVVar8 = (VertexDeclaration*)eastl::compressed_pair_imp<
                eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::Layout,
                eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>, 0>::second(this_04);
            this_05 = (GeometryBatch*)param_7->GetRenderToTexture();
            pVVar9 = (VertexBuffer*)this_05->GetBoneIDMap();
            this_03->SetVertexStreamData(pVVar8, pVVar9);
            pRVar4 = (RenderPipelineState*)local_70.GetRenderPipelineState();
            this_06 = (RenderTargets*)shared_ptr<render::RenderTargets>::operator->(
                (shared_ptr<render::RenderTargets>*)field_40);
            this_07 =
                (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>*)
                    this_06->GetColourTargetTextures();
            puVar10 = (undefined8*)eastl::vector<
                render::Texture*,
                eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>::operator[](this_07, 0);
            pTVar1 = (Texture*)*puVar10;
            pSVar7 = (ShaderProgram*)shared_ptr<render::ShaderProgram>::operator->(
                (shared_ptr<render::ShaderProgram>*)this_09);
            pHVar11 = (HashedString*)postprocess::operator*((postprocess*)40);
            iVar3 = pSVar7->GetConstIndex(pHVar11);
            pRVar4->SetPSTextureSamplerPair(0, pTVar1, iVar3, 0, false);
            this_08 = (RenderToTextureHelper*)param_7->GetRenderToTexture();
            this_08->RenderQuad(local_40, &local_70);
            local_70.~DrawCallState();
        }
    }

} // namespace jag::postprocess
