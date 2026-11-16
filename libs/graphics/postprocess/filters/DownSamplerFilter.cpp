// libs/graphics/postprocess/filters/DownSamplerFilter.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics.postprocess

namespace jag::postprocess {
    class DownSamplerFilter {
    public:
        DownSamplerFilter(graphicutils::RenderToTextureHelper& renderToTextureHelper);
        ~DownSamplerFilter();
        void DownSample2x2(render::RenderContext& renderContext,
                           const Array<shared_ptr<render::RenderTargets>>& renderTargetss,
                           const render::Texture& texture, unsigned int arg4);

    private:
        RenderToTextureHelper* field_0;
    };

    // 0x1009ac780
    void DownSamplerFilter::DownSample2x2(render::RenderContext& renderContext,
                                          const Array<shared_ptr<render::RenderTargets>>& renderTargetss,
                                          const render::Texture& texture, unsigned int arg4) {
        RenderToTextureHelper* this_00;
        compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>* this_01;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_04;
        RenderTargets* this_05;
        shared_ptr<render::RenderTargets>* this_06;
        RenderTargets* this_07;
        vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>* pvVar4;
        uint64_t* puVar5;
        unsigned int* puVar6;
        Texture* this_08;
        Texture* texture_00;
        DrawCallState local_88;

        unsigned int local_34 = arg4;
        unsigned long uVar1 = renderTargetss.end();
        if (uVar1 < arg4) {
            LogAssert("numDownSamples <= dstRTs.max_size()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/postprocess/"
                      "filters/DownSamplerFilter.cpp",
                      28, nullptr);
        }
        local_88.m_pInputAssemblerState._0_4_ = renderTargetss.end();
        auto puVar2 = std::min<unsigned int>(local_34, local_88);
        local_34 = *puVar2;
        DrawCallState* pDVar7 = &local_88;
        new (pDVar7) render::DrawCallState();
        this_01 = (compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>*)
                      pDVar7->GetRenderPipelineState();
        long lVar3 = pDVar7->Instance();
        eastl::compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>::compressed_pair_imp(
            this_01, (PlayerDataComparator<oldscape::social::FriendChatUser>*)(lVar3 + 1524));
        pDVar7 = &local_88;
        auto this_02 = pDVar7->GetRenderPipelineState();
        lVar3 = pDVar7->Instance();
        this_02->SetRasteriserState((lVar3 + 1200));
        pDVar7 = &local_88;
        auto this_03 = pDVar7->GetRenderPipelineState();
        lVar3 = pDVar7->Instance();
        this_03->SetHeapSize((lVar3 + 1080));
        if (local_34 != 0) {
            uVar1 = 0;
            do {
                this_04 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)(*(
                    (Array<shared_ptr<render::RenderTargets>>*)(vector<oldscape::dash3d::EntityHighlight*,
                                                                       BucketAllocatorEASTL>*)renderTargetss))[uVar1];
                this_05 = (RenderTargets*)this_04->end();
                if (this_05 != nullptr) {
                    texture_00 = texture;
                    if (uVar1 != 0) {
                        this_06 = (shared_ptr<render::RenderTargets>*)(*(
                            (Array<shared_ptr<render::RenderTargets>>*)(vector<oldscape::dash3d::EntityHighlight*,
                                                                               BucketAllocatorEASTL>*)
                                renderTargetss))[uVar1 - 1];
                        this_07 = (RenderTargets*)(*this_06).operator->();
                        pvVar4 = (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>*)
                                     this_07->GetColourTargetTextures();
                        puVar5 = (uint64_t*)(*pvVar4)[0];
                        texture_00 = (Texture*)*puVar5;
                    }
                    pvVar4 = (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>*)
                                 this_05->GetColourTargetTextures();
                    puVar5 = (uint64_t*)(*pvVar4)[0];
                    puVar2 = (unsigned int*)(*puVar5)->second();
                    this_08 = texture_00;
                    puVar6 = (unsigned int*)texture_00->second();
                    if ((*puVar6 >> 1 != *puVar2) || (puVar6[1] >> 1 != puVar2[1])) {
                        LogAssert("((srcRTDesc.m_Width / 2) == dstRTDesc.m_Width) && ((srcRTDesc.m_Height / 2) == "
                                  "dstRTDesc.m_Height)",
                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                  "postprocess/filters/DownSamplerFilter.cpp",
                                  45, "Dest render target must be a 1/4 the size of the src render target");
                    }
                    this_00 = field_0;
                    lVar3 = this_08->Instance();
                    this_00->RenderTextureToQuad(renderContext, local_88, this_05, texture_00, (lVar3 + 208), nullptr,
                                                 -1);
                }
                uVar1 = uVar1 + 1;
            } while (uVar1 < local_34);
        }
    }

    // 0x1009b8e90
    DownSamplerFilter::DownSamplerFilter(graphicutils::RenderToTextureHelper& renderToTextureHelper)
        : field_0(renderToTextureHelper) {}

    // 0x1009b8ea0
    DownSamplerFilter::~DownSamplerFilter() {}

} // namespace jag::postprocess
