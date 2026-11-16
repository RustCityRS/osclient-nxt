// libs/graphics/runetek7/postprocess/PostProcessUtils.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

namespace jag::graphics {
    // 0x1007e09a0
    void PostProcessRenderTarget(const render::RenderTargets* renderTargets1, render::RenderTargets* renderTargets2,
                                 RT7Core* rt7Core, const render::Viewport& viewport,
                                 const ViewTransforms& viewTransforms, float arg6) {
        Texture* texture1;
        PostProcessManager* this_00;
        RenderContext* renderContext;
        vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>* this_01;
        uint64_t* puVar2;
        Texture* texture2;

        auto postProcessController = rt7Core->GetPostProcessController();
        auto pcVar1 = postProcessController->GetCurrentConfig();
        if (*pcVar1 != '\0') {
            this_00 = (PostProcessManager*)rt7Core->GetVertexDataBuffer();
            renderContext = (RenderContext*)rt7Core->GetRenderContext();
            this_01 = (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>*)
                          renderTargets2->GetColourTargetTextures();
            puVar2 = (uint64_t*)(*this_01)[0];
            texture1 = (Texture*)*puVar2;
            texture2 = (Texture*)renderTargets2->GetDepthStencilTargetTexture();
            this_00->RenderEffects(*renderContext, renderTargets1, texture1, texture2, viewport, viewTransforms, arg6,
                                   2, false, nullptr);
        }
    }

    // 0x1007e0a50
    void CopyRenderTarget(const render::RenderTargets* renderTargets1, render::RenderTargets* renderTargets2,
                          RT7Core* rt7Core, const render::Viewport& viewport, const ViewTransforms& viewTransforms,
                          float arg6) {
        if (renderTargets2 == nullptr) {
            LogAssert("pSrcRT != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "postprocess/PostProcessUtils.cpp",
                      41, nullptr);
        }
        auto rT7Core = rt7Core->GetPostProcessController();
        auto this_00 = rt7Core->GetVertexDataBuffer();
        auto config = rT7Core->GetCurrentConfig();
        Config local_2c0(config);
        local_2c0._520_1_ = 0;
        local_2c0._468_1_ = 0;
        local_2c0._220_1_ = 0;
        local_2c0._224_1_ = 0;
        local_2c0.field_528 = 0;
        local_2c0.field_552 = 0;
        rT7Core->PushConfig(local_2c0);
        auto renderContext = rT7Core->GetRenderContext();
        auto this_01 = renderTargets2->GetColourTargetTextures();
        uint64_t* puVar1 = (uint64_t*)(*this_01)[0];
        Texture* texture1 = (Texture*)*puVar1;
        auto texture2 = renderTargets2->GetDepthStencilTargetTexture();
        this_00->RenderEffects(*renderContext, renderTargets1, texture1, texture2, viewport, viewTransforms, arg6, 2,
                               false, nullptr);
        rT7Core->PopConfig();
    }

    // 0x1007e0bc0
    void CopyRenderTarget(const render::RenderTargets* renderTargets1, render::RenderTargets* renderTargets2,
                          RT7Core* rt7Core) {
        compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>* this;
        DrawCallState local_58;

        DrawCallState* pDVar3 = &local_58;
        new (pDVar3) render::DrawCallState();
        this = (compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>*)
                   pDVar3->GetRenderPipelineState();
        long lVar1 = pDVar3->Instance();
        eastl::compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>::compressed_pair_imp(
            this, (PlayerDataComparator<oldscape::social::FriendChatUser>*)(lVar1 + 1524));
        pDVar3 = &local_58;
        auto this_00 = pDVar3->GetRenderPipelineState();
        lVar1 = pDVar3->Instance();
        this_00->SetHeapSize((lVar1 + 1080));
        pDVar3 = &local_58;
        auto this_01 = pDVar3->GetRenderPipelineState();
        lVar1 = pDVar3->Instance();
        this_01->SetRasteriserState((lVar1 + 1200));
        auto this_02 = rt7Core->GetVertexDataBuffer();
        auto this_03 = this_02->GetRenderToTexture();
        auto renderContext = this_02->GetRenderContext();
        auto this_04 = renderTargets2->GetColourTargetTextures();
        uint64_t* puVar2 = (uint64_t*)(*this_04)[0];
        this_03->RenderTextureToQuad(*renderContext, local_58, renderTargets1, *puVar2, nullptr, nullptr, -1);
    }

} // namespace jag::graphics
