// libs/graphics/postprocess/filters/DualFilteringBlurFilter.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::postprocess {
    class DualFilteringBlurFilter {
    public:
        DualFilteringBlurFilter(render::RenderTargetsManager*, graphicutils::RenderToTextureHelper const*);
        ~DualFilteringBlurFilter();
        ulong Init();
        void Destroy();
        void BlurMultiPass(render::RenderContext&, render::RenderTargets&, render::Texture const&,
                           DualFilteringBlurKernelSize, int) const;

        // data members, from how the methods use this: 48 bytes
        RenderTargetsManager* field_0;  // offset 0
        RenderToTextureHelper* field_8; // offset 8
        shared_ptr field_16;            // offset 16
        shared_ptr field_32;            // offset 32
    };

    // 0x1009a9ed0, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // DualFilteringBlurFilter::DualFilteringBlurFilter(render::RenderTargetsManager*, graphicutils::RenderToTextureHelper const*): jumps straight to the base-object constructor

    // 0x1009a9f40, 16 bytes, complete-object destructor, inline, placed by class name and debug map
    // DualFilteringBlurFilter::~DualFilteringBlurFilter(): jumps straight to the base-object destructor

    // 0x1009b9a30, 144 bytes, base-object constructor, inline, placed by class name
    // DualFilteringBlurFilter::DualFilteringBlurFilter(render::RenderTargetsManager*, graphicutils::RenderToTextureHelper const*)
    void DualFilteringBlurFilter::DualFilteringBlurFilter(RenderTargetsManager* param_1,
                                                          RenderToTextureHelper* param_2) {
        field_0 = param_1;
        field_8 = param_2;
        new (field_16, (_func_decltype_nullptr*)param_1) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        new (field_32, (_func_decltype_nullptr*)param_1) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        if ((param_1 == (RenderTargetsManager*)0) || (param_2 == (RenderToTextureHelper*)0)) {
            /* WARNING: Subroutine does not return */
            LogAssert("pRenderTargetsManager != nullptr && pRenderToTexture != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/postprocess/"
                      "filters/DualFilteringBlurFilter.h",
                      28, (char*)0);
        }
    }

    // 0x1009b9b10, 80 bytes, base-object destructor, inline, placed by class name
    // DualFilteringBlurFilter::~DualFilteringBlurFilter()
    void DualFilteringBlurFilter::~DualFilteringBlurFilter() {
        Destroy(this);
        field_32->~shared_ptr();
        field_16->~shared_ptr();
    }

} // namespace jag::postprocess
