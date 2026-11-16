// libs/graphics/postprocess/effects/FXAAEffect.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.graphics.postprocess

namespace jag::postprocess {
    class FXAAEffect {
    public:
        // virtual methods in vtable order
        virtual ~FXAAEffect();
        virtual void Render(render::RenderContext& renderContext, const render::RenderTargets* renderTargets,
                            const render::Texture* texture1, const render::Texture* texture2,
                            const render::Viewport& viewport, graphics::ViewRenderTargets* viewRenderTargets,
                            PostProcessManager& postProcessManager);
        virtual bool IsReady();
        virtual uint8_t Init();
        virtual void Destroy();
        FXAAEffect(int arg1, int arg2);
        void SetQuality(FXAA::Quality quality);

    private:
        uint8_t field_8;
        uint8_t _unknown_9[3];
        int field_12;
        int field_16;
        Quality field_20;
        shared_ptr field_24;
        InputAssemblerState field_40;
    };

    // 0x1009b3df0
    FXAAEffect::FXAAEffect(int arg1, int arg2) : PostProcessEffect(arg1, arg2), field_20(4294967295) {
        new (field_24) shared_ptr();
        new (field_40) render::InputAssemblerState();
    }

    // 0x1009b3e70
    FXAAEffect::~FXAAEffect() {
        Destroy();
        field_40->~InputAssemblerState();
        field_24->~shared_ptr();
    }

    // 0x1009b3f00
    uint8_t FXAAEffect::Init() {
        SetQuality(1);
        return 1;
    }

    // 0x1009b3f20
    void FXAAEffect::SetQuality(FXAA::Quality quality) {
        char* str1;
        char* str2;
        VertexElementDesc* vertexElementDesc;
        Singleton<render::ShaderProgramManager>* this_01;
        ReturnValue local_70;
        ReturnValue local_58;
        ReturnValue local_40;

        if (field_20 != quality) {
            ((ShaderProgramManager*)Instance())->Unregister(*field_24);
            this_01 = (Singleton<render::ShaderProgramManager>*)field_40;
            this_01->Destroy();
            str1 = (char*)this_01->Instance();
            local_70 = PostProcessVS::BuildVSFragment();
            str2 = (char*)local_70.c_str();
            local_58 = FXAA::BuildFSFragment(quality);
            vertexElementDesc = (VertexElementDesc*)local_58.c_str();
            local_40.RegisterFromSourceString(str1, str2, vertexElementDesc, 62757712, '\x02');
            *field_24 = local_40;
        }
        field_20 = quality;
    }

    // 0x1009b4030
    void FXAAEffect::Destroy() {
        ((ShaderProgramManager*)Instance())->Unregister(*field_24);
        field_40->Destroy();
    }

    // 0x1009b4060
    void FXAAEffect::Render(render::RenderContext& renderContext, const render::RenderTargets* renderTargets,
                            const render::Texture* texture1, const render::Texture* texture2,
                            const render::Viewport& viewport, graphics::ViewRenderTargets* viewRenderTargets,
                            PostProcessManager& postProcessManager) {
        int arg3;
        compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>* this_01;
        long lVar2;
        RenderPipelineState* pRVar3;
        Layout* this_02;
        OutputMergerState* pOVar4;
        compressed_pair_imp<eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true>>::Layout,
                            eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true>, 0>* this_03;
        VertexDeclaration* vertexDeclaration;
        GeometryBatch* this_04;
        VertexBuffer* vertexBuffer;
        ShaderProgram* pSVar5;
        HashedString* pHVar6;
        DrawCallState* pDVar7;
        ImVec4 local_88;
        DrawCallState local_78;

        uint8_t* this_00 = field_24;
        if (this_00->operator_cast_to_bool() != '\0') {
            pDVar7 = &local_78;
            new (pDVar7) render::DrawCallState();
            this_01 = (compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>*)
                          pDVar7->GetRenderPipelineState();
            lVar2 = pDVar7->Instance();
            eastl::compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>::
                compressed_pair_imp(this_01, (PlayerDataComparator<oldscape::social::FriendChatUser>*)(lVar2 + 1524));
            pDVar7 = &local_78;
            pRVar3 = (RenderPipelineState*)pDVar7->GetRenderPipelineState();
            lVar2 = pDVar7->Instance();
            pRVar3->SetRasteriserState((lVar2 + 1200));
            pDVar7 = &local_78;
            this_02 = (Layout*)pDVar7->GetRenderPipelineState();
            lVar2 = pDVar7->Instance();
            this_02->SetHeapSize((lVar2 + 1080));
            pOVar4 = local_78.GetOutputMergerState();
            pOVar4->SetViewports(viewport, 1);
            pOVar4 = local_78.GetOutputMergerState();
            pOVar4->SetRenderTargets(renderTargets);
            pRVar3 = (RenderPipelineState*)local_78.GetRenderPipelineState();
            pRVar3->SetShaderProgram((BlendMode*)this_00->end());
            this_03 = (compressed_pair_imp<
                       eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true>>::Layout,
                       eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true>, 0>*)(*this_00)
                          .operator->();
            vertexDeclaration = (VertexDeclaration*)this_03->second();
            this_04 = (GeometryBatch*)postProcessManager.GetRenderToTexture();
            vertexBuffer = (VertexBuffer*)this_04->GetBoneIDMap();
            field_40->SetVertexStreamData(vertexDeclaration, vertexBuffer);
            local_78.SetInputAssemblerState(field_40);
            local_88 = ImVec4(1.0 / (float)viewport.field_8, 1.0 / (float)viewport.field_12, 0.0, 0.0);
            pSVar5 = (ShaderProgram*)(*this_00).operator->();
            pHVar6 = (HashedString*)postprocess::operator*(28);
            pSVar5->SetShaderConstVector4(pHVar6, 1, &local_88, 1);
            pSVar5 = (ShaderProgram*)(*this_00).operator->();
            pHVar6 = (HashedString*)postprocess::operator*(29);
            pSVar5->SetShaderConstFloat1(pHVar6, 0.75);
            pSVar5 = (ShaderProgram*)(*this_00).operator->();
            pHVar6 = (HashedString*)postprocess::operator*(30);
            pSVar5->SetShaderConstFloat1(pHVar6, 0.166);
            pSVar5 = (ShaderProgram*)(*this_00).operator->();
            pHVar6 = (HashedString*)postprocess::operator*(31);
            pSVar5->SetShaderConstFloat1(pHVar6, 0.0833);
            pSVar5 = (ShaderProgram*)(*this_00).operator->();
            pHVar6 = (HashedString*)postprocess::operator*(2);
            arg3 = pSVar5->GetConstIndex(*pHVar6);
            pRVar3 = (RenderPipelineState*)local_78.GetRenderPipelineState();
            pRVar3->SetPSTextureSamplerPair(0, texture1, arg3, nullptr, false);
            ((RenderToTextureHelper*)postProcessManager.GetRenderToTexture())->RenderQuad(renderContext, local_78);
        }
    }

    // 0x1009b97c0
    bool FXAAEffect::IsReady() {
        uint64_t uVar2;

        if (field_24->operator_cast_to_bool() == '\0') {
            uVar2 = 0;
        } else {
            uVar2 = IsValid();
        }
        return uVar2;
    }

} // namespace jag::postprocess
