// libs/graphics/postprocess/effects/EquirectangularEffect.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics.postprocess

#include "EquirectangularEffect.h"

namespace jag::postprocess {
    // 0x1009b39f0
    EquirectangularEffect::EquirectangularEffect(int arg1, int arg2) : PostProcessEffect(arg1, arg2) {
        new (&field_24) shared_ptr();
        new (field_40) shared_ptr();
    }

    // 0x1009b3a60
    EquirectangularEffect::~EquirectangularEffect() {
        Destroy();
        field_40->~shared_ptr();
        field_24.~shared_ptr();
    }

    // 0x1009b3af0
    void EquirectangularEffect::Init() {
        VertexElementDesc* vertexElementDesc;
        ReturnValue local_38;

        auto str1 = Instance();
        auto local_68 = PostProcessVS::BuildVSFragment();
        auto str2 = local_68.c_str();
        auto local_50 = graphics::shadersourceprovider::GetCompletedShader(19);
        vertexElementDesc = (VertexElementDesc*)local_50.c_str();
        local_38.RegisterFromSourceString(str1, str2, vertexElementDesc, 62757712, '\x02');
        field_24 = local_38;
        field_24 != nullptr;
    }

    // 0x1009b3bd0
    void EquirectangularEffect::Destroy() {
        ((ShaderProgramManager*)Instance())->Unregister(field_24);
    }

    // 0x1009b3c00
    void EquirectangularEffect::Render(render::RenderContext& renderContext, const render::RenderTargets* renderTargets,
                                       const render::Texture* texture1, const render::Texture* texture2,
                                       const render::Viewport& viewport, graphics::ViewRenderTargets* viewRenderTargets,
                                       PostProcessManager& postProcessManager) {
        Texture* texture;
        int arg3;
        compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>* this_00;
        long lVar2;
        RenderPipelineState* pRVar3;
        Layout* this_01;
        OutputMergerState* pOVar4;
        InputAssemblerState* this_02;
        compressed_pair_imp<eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true>>::Layout,
                            eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true>, 0>* this_03;
        VertexDeclaration* vertexDeclaration;
        GeometryBatch* this_04;
        VertexBuffer* vertexBuffer;
        RenderTargets* this_05;
        vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>* this_06;
        uint64_t* puVar5;
        ShaderProgram* this_07;
        HashedString* hashedString;
        DrawCallState* pDVar6;
        uint8_t* this_09;
        DrawCallState local_70;
        AutoSingleton<ShaderThreadPoolSingleton> local_38;

        if (field_40->operator_cast_to_bool() != '\0') {
            pDVar6 = &local_70;
            new (pDVar6) render::DrawCallState();
            this_00 = (compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>*)
                          pDVar6->GetRenderPipelineState();
            lVar2 = pDVar6->Instance();
            eastl::compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>::
                compressed_pair_imp(this_00, (PlayerDataComparator<oldscape::social::FriendChatUser>*)(lVar2 + 1524));
            pDVar6 = &local_70;
            pRVar3 = (RenderPipelineState*)pDVar6->GetRenderPipelineState();
            lVar2 = pDVar6->Instance();
            pRVar3->SetRasteriserState((lVar2 + 1200));
            pDVar6 = &local_70;
            this_01 = (Layout*)pDVar6->GetRenderPipelineState();
            lVar2 = pDVar6->Instance();
            this_01->SetHeapSize((lVar2 + 1080));
            pOVar4 = local_70.GetOutputMergerState();
            pOVar4->SetViewports(viewport, 1);
            pOVar4 = local_70.GetOutputMergerState();
            pOVar4->SetRenderTargets(renderTargets);
            pRVar3 = (RenderPipelineState*)local_70.GetRenderPipelineState();
            this_09 = &field_24;
            pRVar3->SetShaderProgram((BlendMode*)this_09->end());
            this_02 = (InputAssemblerState*)local_70.GetInputAssemblerState();
            this_03 = (compressed_pair_imp<
                       eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true>>::Layout,
                       eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true>, 0>*)(*this_09)
                          .operator->();
            vertexDeclaration = (VertexDeclaration*)this_03->second();
            this_04 = (GeometryBatch*)postProcessManager.GetRenderToTexture();
            vertexBuffer = (VertexBuffer*)this_04->GetBoneIDMap();
            this_02->SetVertexStreamData(vertexDeclaration, vertexBuffer);
            pRVar3 = (RenderPipelineState*)local_70.GetRenderPipelineState();
            this_05 = (RenderTargets*)(*field_40).operator->();
            this_06 = (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>*)
                          this_05->GetColourTargetTextures();
            puVar5 = (uint64_t*)(*this_06)[0];
            texture = (Texture*)*puVar5;
            this_07 = (ShaderProgram*)(*this_09).operator->();
            hashedString = (HashedString*)postprocess::operator*(40);
            arg3 = this_07->GetConstIndex(*hashedString);
            pRVar3->SetPSTextureSamplerPair(0, texture, arg3, nullptr, false);
            ((RenderToTextureHelper*)postProcessManager.GetRenderToTexture())->RenderQuad(renderContext, local_70);
        }
    }

} // namespace jag::postprocess
