// libs/graphics/postprocess/effects/FXAAEffect.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.graphics.postprocess

namespace jag::postprocess {
    class FXAAEffect {
    public:
        // virtual methods in vtable order
        virtual ~FXAAEffect();
        virtual void Render(render::RenderContext&, render::RenderTargets const*, render::Texture const*,
                            render::Texture const*, render::Viewport const&, graphics::ViewRenderTargets*,
                            PostProcessManager&);
        virtual IsReady();
        virtual Init();
        virtual void Destroy();
        FXAAEffect(int, int);
        void SetQuality(FXAA::Quality);

        // data members, from how the methods use this: 232 bytes
        undefined** field_0; // offset 0, vtable pointer
        undefined1 field_8;  // offset 8
        char _unknown_9[3];
        int field_12;                 // offset 12
        int field_16;                 // offset 16
        int field_20;                 // offset 20
        shared_ptr field_24;          // offset 24
        InputAssemblerState field_40; // offset 40
    };

    // 0x1009b3df0, 112 bytes, base-object constructor, placed by class name
    // FXAAEffect::FXAAEffect(int, int)
    void FXAAEffect::FXAAEffect(int param_1, int param_2) {
        undefined4 in_register_00000034;

        new (this) PostProcessEffect(param_1, param_2);
        field_0 = &PTR__FXAAEffect_100f1c4a0;
        field_20 = -1;
        new (field_24, (_func_decltype_nullptr*)CONCAT44(in_register_00000034)
                           shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_1));
        new (field_40) render::InputAssemblerState();
    }

    // 0x1009b3e60, 16 bytes, complete-object constructor, placed by class name
    // FXAAEffect::FXAAEffect(int, int): jumps straight to the base-object constructor

    // 0x1009b3e70, 96 bytes, base-object destructor, placed by class name
    // FXAAEffect::~FXAAEffect()
    void FXAAEffect::~FXAAEffect() {
        field_0 = &PTR__FXAAEffect_100f1c4a0;
        Destroy(this);
        field_40->~InputAssemblerState();
        field_24->~shared_ptr();
        ~AutoSingleton();
    }

    // 0x1009b3ed0, 16 bytes, complete-object destructor, placed by class name
    // FXAAEffect::~FXAAEffect(): jumps straight to the base-object destructor

    // 0x1009b3ee0, 32 bytes, deleting destructor, placed by class name
    // FXAAEffect::~FXAAEffect()
    void FXAAEffect::~FXAAEffect() {
        ~FXAAEffect(this);
        operator_delete(this);
    }

    // 0x1009b3f00, 32 bytes, placed by class name
    // FXAAEffect::Init()
    undefined1 FXAAEffect::Init() {
        SetQuality(this, 1);
        return 1;
    }

    // 0x1009b3f20, 272 bytes, placed by class name
    // FXAAEffect::SetQuality(FXAA::Quality)
    void FXAAEffect::SetQuality(int param_2) {
        ShaderProgramManager* this_00;
        char* pcVar1;
        char* pcVar2;
        VertexElementDesc* pVVar3;
        Singleton<render::ShaderProgramManager>* this_01;
        PostProcessVS local_70[24];
        FXAA local_58[24];
        shared_ptr local_40;

        if (field_20 != param_2) {
            this_00 = (ShaderProgramManager*)Instance();
            this_00->Unregister(field_24);
            this_01 = (Singleton<render::ShaderProgramManager>*)field_40;
            this_01->Destroy();
            pcVar1 = (char*)this_01->Instance();
            local_70->BuildVSFragment();
            pcVar2 = (char*)local_70->c_str();
            local_58->BuildFSFragment(param_2);
            pVVar3 = (VertexElementDesc*)local_58->c_str();
            local_40.RegisterFromSourceString(pcVar1, pcVar2, pVVar3, 62757712, '\x02');
            shared_ptr<render::ShaderProgram>::operator=((shared_ptr<render::ShaderProgram>*)field_24, &local_40);
            local_40.~shared_ptr();
            local_58->~basic_string();
            local_70->~basic_string();
        }
        field_20 = param_2;
    }

    // 0x1009b4030, 48 bytes, placed by class name
    // FXAAEffect::Destroy()
    void FXAAEffect::Destroy() {
        ShaderProgramManager* this_00;

        this_00 = (ShaderProgramManager*)Instance();
        this_00->Unregister(field_24);
        field_40->Destroy();
    }

    // 0x1009b4060, 688 bytes, placed by class name
    // FXAAEffect::Render(render::RenderContext&, render::RenderTargets const*, render::Texture const*, render::Texture const*, render::Viewport const&, graphics::ViewRenderTargets*, PostProcessManager&)
    void FXAAEffect::Render(RenderContext* param_1, RenderTargets* param_2, Texture* param_3, Texture* param_4,
                            Viewport* param_5, ViewRenderTargets* param_6, PostProcessManager* param_7) {
        undefined1* this_00;
        RenderContext* pRVar1;
        Texture* pTVar2;
        bool bVar3;
        int iVar4;
        compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>* this_01;
        RenderPipelineState* pRVar5;
        long lVar6;
        Layout* this_02;
        Viewport* pVVar7;
        OutputMergerState* this_03;
        ShaderProgram* pSVar8;
        compressed_pair_imp<eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                                    eastl::allocator>>::Layout,
                            eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>, 0>* this_04;
        VertexDeclaration* pVVar9;
        GeometryBatch* this_05;
        VertexBuffer* pVVar10;
        HashedString* pHVar11;
        RenderToTextureHelper* this_06;
        DrawCallState* pDVar12;
        undefined1 auVar13[16];
        ImVec4 local_88[16];
        DrawCallState local_78;
        RenderTargets* local_48;
        RenderContext* local_40;
        Texture* local_38;

        this_00 = field_24;
        local_48 = param_2;
        bVar3 = this_00->operator_cast_to_bool();
        if (bVar3) {
            pDVar12 = &local_78;
            local_40 = param_1;
            local_38 = param_3;
            render::DrawCallState::DrawCallState(pDVar12);
            this_01 = (compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>*)
                          pDVar12->GetRenderPipelineState();
            auVar13 = pDVar12->Instance();
            eastl::compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL,
                                       2>::compressed_pair_imp(this_01, (EntityHighlight**)(auVar13._0_8_ + 1524),
                                                               auVar13._8_8_);
            pDVar12 = &local_78;
            pRVar5 = (RenderPipelineState*)pDVar12->GetRenderPipelineState();
            lVar6 = pDVar12->Instance();
            pRVar5->SetRasteriserState((RasteriserState*)(lVar6 + 1200));
            pDVar12 = &local_78;
            this_02 = (Layout*)pDVar12->GetRenderPipelineState();
            lVar6 = pDVar12->Instance();
            eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::
                Layout::SetHeapSize(this_02, lVar6 + 1080);
            pVVar7 = (Viewport*)local_78.GetOutputMergerState();
            render::OutputMergerState::SetViewports(pVVar7, (uint)param_5);
            this_03 = (OutputMergerState*)local_78.GetOutputMergerState();
            this_03->SetRenderTargets(local_48);
            pRVar5 = (RenderPipelineState*)local_78.GetRenderPipelineState();
            pSVar8 = (ShaderProgram*)this_00->end();
            pRVar5->SetShaderProgram(pSVar8);
            this_04 =
                (compressed_pair_imp<eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                                             eastl::allocator>>::Layout,
                                     eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>, 0>*)
                    shared_ptr<render::ShaderProgram>::operator->((shared_ptr<render::ShaderProgram>*)this_00);
            pVVar9 = (VertexDeclaration*)eastl::compressed_pair_imp<
                eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::Layout,
                eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>, 0>::second(this_04);
            this_05 = (GeometryBatch*)param_7->GetRenderToTexture();
            pVVar10 = (VertexBuffer*)this_05->GetBoneIDMap();
            (field_40, pVVar9, pVVar10)->SetVertexStreamData();
            local_78.SetInputAssemblerState(field_40);
            ImVec4::ImVec4(local_88, 1.0 / (float)param_5->field_8, 1.0 / (float)param_5->field_12, 0.0, 0.0);
            pSVar8 = (ShaderProgram*)shared_ptr<render::ShaderProgram>::operator->(
                (shared_ptr<render::ShaderProgram>*)this_00);
            pHVar11 = (HashedString*)postprocess::operator*((postprocess*)28);
            pSVar8->SetShaderConstVector4(pHVar11, 1, local_88, 1);
            pSVar8 = (ShaderProgram*)shared_ptr<render::ShaderProgram>::operator->(
                (shared_ptr<render::ShaderProgram>*)this_00);
            pHVar11 = (HashedString*)postprocess::operator*((postprocess*)29);
            pSVar8->SetShaderConstFloat1(pHVar11, 0.75);
            pSVar8 = (ShaderProgram*)shared_ptr<render::ShaderProgram>::operator->(
                (shared_ptr<render::ShaderProgram>*)this_00);
            pHVar11 = (HashedString*)postprocess::operator*((postprocess*)30);
            pSVar8->SetShaderConstFloat1(pHVar11, 0.166);
            pSVar8 = (ShaderProgram*)shared_ptr<render::ShaderProgram>::operator->(
                (shared_ptr<render::ShaderProgram>*)this_00);
            pHVar11 = (HashedString*)postprocess::operator*((postprocess*)31);
            pSVar8->SetShaderConstFloat1(pHVar11, 0.0833);
            pSVar8 = (ShaderProgram*)shared_ptr<render::ShaderProgram>::operator->(
                (shared_ptr<render::ShaderProgram>*)this_00);
            pTVar2 = local_38;
            pRVar1 = local_40;
            pHVar11 = (HashedString*)postprocess::operator*((postprocess*)2);
            iVar4 = pSVar8->GetConstIndex(pHVar11);
            pRVar5 = (RenderPipelineState*)local_78.GetRenderPipelineState();
            pRVar5->SetPSTextureSamplerPair(0, pTVar2, iVar4, 0, false);
            this_06 = (RenderToTextureHelper*)param_7->GetRenderToTexture();
            this_06->RenderQuad(pRVar1, &local_78);
            local_78.~DrawCallState();
        }
    }

    // 0x1009b97c0, 48 bytes, inline, placed by class name
    // FXAAEffect::IsReady()
    undefined8 FXAAEffect::IsReady() {
        undefined8 uVar2;

        if (field_24->operator_cast_to_bool()) {
            uVar2 = IsValid();
        } else {
            uVar2 = 0;
        }
        return uVar2;
    }

} // namespace jag::postprocess
