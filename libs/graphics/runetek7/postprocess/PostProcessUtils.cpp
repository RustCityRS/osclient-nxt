// libs/graphics/runetek7/postprocess/PostProcessUtils.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

namespace jag::graphics {
    // 0x1007e09a0, 176 bytes, placed by debug map only (low confidence)
    // PostProcessRenderTarget(render::RenderTargets const*, render::RenderTargets*, RT7Core*, render::Viewport const&, ViewTransforms const&, float)
    void PostProcessRenderTarget(RenderTargets* param_1, RenderTargets* param_2, RT7Core* param_3, Viewport* param_4,
                                 ViewTransforms* param_5, float param_6) {
        Texture* pTVar1;
        PostProcessController* this;
        char* pcVar2;
        PostProcessManager* this_00;
        RenderContext* pRVar3;
        vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>* this_01;
        undefined8* puVar4;
        Texture* pTVar5;

        this = (PostProcessController*)param_3->GetPostProcessController();
        pcVar2 = (char*)GetCurrentConfig();
        if (*pcVar2 != '\0') {
            this_00 = (PostProcessManager*)param_3->GetVertexDataBuffer();
            pRVar3 = (RenderContext*)param_3->GetRenderContext();
            this_01 =
                (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>*)
                    param_2->GetColourTargetTextures();
            puVar4 = (undefined8*)eastl::vector<
                render::Texture*,
                eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>::operator[](this_01, 0);
            pTVar1 = (Texture*)*puVar4;
            pTVar5 = (Texture*)param_2->GetDepthStencilTargetTexture();
            this_00->RenderEffects(pRVar3, param_1, pTVar1, pTVar5, param_4, param_5, param_6, 2, false, 0);
        }
    }

    // 0x1007e0a50, 352 bytes, placed by debug map only (low confidence)
    // CopyRenderTarget(render::RenderTargets const*, render::RenderTargets*, RT7Core*, render::Viewport const&, ViewTransforms const&, float)
    void CopyRenderTarget(RenderTargets* param_1, RenderTargets* param_2, RT7Core* param_3, Viewport* param_4,
                          ViewTransforms* param_5, float param_6) {
        Texture* pTVar1;
        RT7Core* this;
        PostProcessManager* this_00;
        Config* pCVar2;
        RenderContext* pRVar3;
        vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>* this_01;
        undefined8* puVar4;
        Texture* pTVar5;
        RT7Core* this_02;
        Config local_2c0;
        Viewport* local_50;
        RenderTargets* local_48;
        ViewTransforms* local_40;
        float local_34;

        local_50 = param_4;
        local_48 = param_1;
        local_40 = param_5;
        local_34 = param_6;
        if (param_2 == (RenderTargets*)0) {
            /* WARNING: Subroutine does not return */
            LogAssert("pSrcRT != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "postprocess/PostProcessUtils.cpp",
                      41, (char*)0);
        }
        this = (RT7Core*)param_3->GetPostProcessController();
        this_00 = (PostProcessManager*)param_3->GetVertexDataBuffer();
        pCVar2 = (Config*)GetCurrentConfig();
        new (&local_2c0) PostProcessController::Config(pCVar2);
        local_2c0._520_1_ = 0;
        local_2c0._468_1_ = 0;
        local_2c0._220_1_ = 0;
        local_2c0._224_1_ = 0;
        local_2c0.field_528 = 0;
        local_2c0.field_552 = 0;
        this_02 = this;
        PostProcessController::PushConfig((Config*)this);
        pRVar3 = (RenderContext*)this_02->GetRenderContext();
        this_01 = (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>*)
                      param_2->GetColourTargetTextures();
        puVar4 = (undefined8*)
            eastl::vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true,
                                                                          eastl::allocator>>::operator[](this_01, 0);
        pTVar1 = (Texture*)*puVar4;
        pTVar5 = (Texture*)param_2->GetDepthStencilTargetTexture();
        this_00->RenderEffects(pRVar3, local_48, pTVar1, pTVar5, local_50, local_40, local_34, 2, false, 0);
        PopConfig();
        local_2c0.~Config();
    }

    // 0x1007e0bc0, 272 bytes, placed by debug map only (low confidence)
    // CopyRenderTarget(render::RenderTargets const*, render::RenderTargets*, RT7Core*)
    void CopyRenderTarget(RenderTargets* param_1, RenderTargets* param_2, RT7Core* param_3) {
        compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>* this;
        Layout* this_00;
        long lVar1;
        RenderPipelineState* this_01;
        RT7Core* this_02;
        RenderToTextureHelper* this_03;
        RenderContext* pRVar2;
        vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>* this_04;
        undefined8* puVar3;
        DrawCallState* pDVar4;
        undefined1 auVar5[16];
        DrawCallState local_58;

        pDVar4 = &local_58;
        render::DrawCallState::DrawCallState(pDVar4);
        this = (compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>*)
                   pDVar4->GetRenderPipelineState();
        auVar5 = pDVar4->Instance();
        eastl::compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>::compressed_pair_imp(
            this, (EntityHighlight**)(auVar5._0_8_ + 1524), auVar5._8_8_);
        pDVar4 = &local_58;
        this_00 = (Layout*)pDVar4->GetRenderPipelineState();
        lVar1 = pDVar4->Instance();
        eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::Layout::
            SetHeapSize(this_00, lVar1 + 1080);
        pDVar4 = &local_58;
        this_01 = (RenderPipelineState*)pDVar4->GetRenderPipelineState();
        lVar1 = pDVar4->Instance();
        this_01->SetRasteriserState((RasteriserState*)(lVar1 + 1200));
        this_02 = (RT7Core*)param_3->GetVertexDataBuffer();
        this_03 = (RenderToTextureHelper*)this_02->GetRenderToTexture();
        pRVar2 = (RenderContext*)this_02->GetRenderContext();
        this_04 = (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>*)
                      param_2->GetColourTargetTextures();
        puVar3 = (undefined8*)
            eastl::vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true,
                                                                          eastl::allocator>>::operator[](this_04, 0);
        this_03->RenderTextureToQuad(pRVar2, &local_58, param_1, (Texture*)*puVar3, 0, 0, -1);
        local_58.~DrawCallState();
    }

} // namespace jag::graphics
