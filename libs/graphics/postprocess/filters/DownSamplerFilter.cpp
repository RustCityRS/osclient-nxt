// libs/graphics/postprocess/filters/DownSamplerFilter.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics.postprocess

namespace jag::postprocess {
    class DownSamplerFilter {
    public:
        DownSamplerFilter(graphicutils::RenderToTextureHelper&);
        ~DownSamplerFilter();
        void DownSample2x2(render::RenderContext&, Array<shared_ptr<render::RenderTargets>, eastl::allocator> const&,
                           render::Texture const&, unsigned int);

        // data members, from how the methods use this: 8 bytes
        RenderToTextureHelper* field_0; // offset 0
    };

    // 0x1009a9e90, 16 bytes, complete-object constructor, placed by class name and debug map
    // DownSamplerFilter::DownSamplerFilter(graphicutils::RenderToTextureHelper&): jumps straight to the base-object constructor

    // 0x1009a9f80, 16 bytes, complete-object destructor, placed by class name
    // DownSamplerFilter::~DownSamplerFilter(): jumps straight to the base-object destructor

    // 0x1009ac780, 576 bytes, placed by class name
    // DownSamplerFilter::DownSample2x2(render::RenderContext&, Array<shared_ptr<render::RenderTargets>, eastl::allocator> const&, render::Texture const&, unsigned int)
    void DownSamplerFilter::DownSample2x2(RenderContext* param_1, Array* param_2, Texture* param_3, uint param_4) {
        RenderToTextureHelper* this_00;
        ulong uVar1;
        uint* puVar2;
        compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>* this_01;
        RenderPipelineState* this_02;
        long lVar3;
        Layout* this_03;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_04;
        RenderTargets* this_05;
        shared_ptr<render::RenderTargets>* this_06;
        RenderTargets* this_07;
        vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>* pvVar4;
        undefined8* puVar5;
        uint* puVar6;
        DrawCallState* pDVar7;
        Texture* this_08;
        Texture* this_09;
        undefined1 auVar8[16];
        DrawCallState local_88;
        Texture* local_58;
        DownSamplerFilter* local_50;
        RenderContext* local_48;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* local_40;
        uint local_34;

        local_58 = param_3;
        local_50 = this;
        local_48 = param_1;
        local_40 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)param_2;
        local_34 = param_4;
        uVar1 = param_2->end();
        if (uVar1 < param_4) {
            /* WARNING: Subroutine does not return */
            LogAssert("numDownSamples <= dstRTs.max_size()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/postprocess/"
                      "filters/DownSamplerFilter.cpp",
                      28, (char*)0);
        }
        local_88.m_pInputAssemblerState._0_4_ =
            eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(local_40);
        puVar2 = std::min<unsigned int>(&local_34, (uint*)&local_88);
        local_34 = *puVar2;
        pDVar7 = &local_88;
        render::DrawCallState::DrawCallState(pDVar7);
        this_01 = (compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>*)
                      pDVar7->GetRenderPipelineState();
        auVar8 = pDVar7->Instance();
        eastl::compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>::compressed_pair_imp(
            this_01, (EntityHighlight**)(auVar8._0_8_ + 1524), auVar8._8_8_);
        pDVar7 = &local_88;
        this_02 = (RenderPipelineState*)pDVar7->GetRenderPipelineState();
        lVar3 = pDVar7->Instance();
        this_02->SetRasteriserState((RasteriserState*)(lVar3 + 1200));
        pDVar7 = &local_88;
        this_03 = (Layout*)pDVar7->GetRenderPipelineState();
        lVar3 = pDVar7->Instance();
        eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::Layout::
            SetHeapSize(this_03, lVar3 + 1080);
        if (local_34 != 0) {
            uVar1 = 0;
            do {
                this_04 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)
                    Array<shared_ptr<render::RenderTargets>, eastl::allocator>::operator[](
                        (Array<shared_ptr<render::RenderTargets>, eastl::allocator>*)local_40, uVar1);
                this_05 = (RenderTargets*)eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(
                    this_04);
                if (this_05 != (RenderTargets*)0) {
                    this_09 = local_58;
                    if (uVar1 != 0) {
                        this_06 = (shared_ptr<render::RenderTargets>*)
                            Array<shared_ptr<render::RenderTargets>, eastl::allocator>::operator[](
                                (Array<shared_ptr<render::RenderTargets>, eastl::allocator>*)local_40, uVar1 - 1);
                        this_07 = (RenderTargets*)shared_ptr<render::RenderTargets>::operator->(this_06);
                        pvVar4 = (vector<render::Texture*,
                                         eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>*)
                                     this_07->GetColourTargetTextures();
                        puVar5 = (undefined8*)eastl::vector<
                            render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true,
                                                                            eastl::allocator>>::operator[](pvVar4, 0);
                        this_09 = (Texture*)*puVar5;
                    }
                    pvVar4 = (vector<render::Texture*,
                                     eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>*)
                                 this_05->GetColourTargetTextures();
                    puVar5 = (undefined8*)eastl::vector<
                        render::Texture*,
                        eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>::operator[](pvVar4,
                                                                                                               0);
                    puVar2 = (uint*)(*puVar5)->second();
                    this_08 = this_09;
                    puVar6 = (uint*)this_09->second();
                    if ((*puVar6 >> 1 != *puVar2) || (puVar6[1] >> 1 != puVar2[1])) {
                        /* WARNING: Subroutine does not return */
                        LogAssert("((srcRTDesc.m_Width / 2) == dstRTDesc.m_Width) && ((srcRTDesc.m_Height / 2) == "
                                  "dstRTDesc.m_Height)",
                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                  "postprocess/filters/DownSamplerFilter.cpp",
                                  45, "Dest render target must be a 1/4 the size of the src render target");
                    }
                    this_00 = local_50->field_0;
                    lVar3 = this_08->Instance();
                    this_00->RenderTextureToQuad(local_48, &local_88, this_05, this_09, (SamplerState*)(lVar3 + 208), 0,
                                                 -1);
                }
                uVar1 = uVar1 + 1;
            } while (uVar1 < local_34);
        }
        local_88.~DrawCallState();
    }

    // 0x1009b8e90, 16 bytes, base-object constructor, placed by class name
    // DownSamplerFilter::DownSamplerFilter(graphicutils::RenderToTextureHelper&)
    void DownSamplerFilter::DownSamplerFilter(RenderToTextureHelper* param_1) {
        field_0 = param_1;
    }

    // 0x1009b8ea0, 16 bytes, base-object destructor, placed by class name
    // DownSamplerFilter::~DownSamplerFilter()
    void DownSamplerFilter::~DownSamplerFilter() {}

} // namespace jag::postprocess
