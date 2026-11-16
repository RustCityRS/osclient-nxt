// libs/graphics/postprocess/filters/GaussianBlurFilter.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::postprocess {
    class GaussianBlurFilter {
    public:
        GaussianBlurFilter(render::RenderTargetsManager*, graphicutils::RenderToTextureHelper const*);
        ~GaussianBlurFilter();
        bool Init();
        void Destroy();
        void BlurMultiPass13Tap(render::RenderContext&, render::RenderTargets&, render::Texture const&, float, int,
                                int) const;

        // data members, from how the methods use this: 48 bytes
        RenderTargetsManager* field_0;  // offset 0
        RenderToTextureHelper* field_8; // offset 8
        shared_ptr field_16;            // offset 16
        shared_ptr field_32;            // offset 32
    };

    // 0x1009a9eb0, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // GaussianBlurFilter::GaussianBlurFilter(render::RenderTargetsManager*, graphicutils::RenderToTextureHelper const*): jumps straight to the base-object constructor

    // 0x1009a9f60, 16 bytes, complete-object destructor, inline, placed by class name
    // GaussianBlurFilter::~GaussianBlurFilter(): jumps straight to the base-object destructor

    // 0x1009b98f0, 144 bytes, base-object constructor, inline, placed by class name
    // GaussianBlurFilter::GaussianBlurFilter(render::RenderTargetsManager*, graphicutils::RenderToTextureHelper const*)
    void GaussianBlurFilter::GaussianBlurFilter(RenderTargetsManager* param_1, RenderToTextureHelper* param_2) {
        field_0 = param_1;
        field_8 = param_2;
        new (field_16, (_func_decltype_nullptr*)param_1) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        new (field_32, (_func_decltype_nullptr*)param_1) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        if ((param_1 == (RenderTargetsManager*)0) || (param_2 == (RenderToTextureHelper*)0)) {
            /* WARNING: Subroutine does not return */
            LogAssert("pRenderTargetsManager != nullptr && pRenderToTexture != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/postprocess/"
                      "filters/GaussianBlurFilter.h",
                      22, (char*)0);
        }
    }

    // 0x1009b9bc0, 80 bytes, base-object destructor, inline, placed by class name
    // GaussianBlurFilter::~GaussianBlurFilter()
    void GaussianBlurFilter::~GaussianBlurFilter() {
        Destroy(this);
        field_32->~shared_ptr();
        field_16->~shared_ptr();
    }

} // namespace jag::postprocess
