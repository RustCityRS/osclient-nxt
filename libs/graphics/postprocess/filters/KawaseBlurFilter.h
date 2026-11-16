// libs/graphics/postprocess/filters/KawaseBlurFilter.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::postprocess {
    class KawaseBlurFilter {
    public:
        KawaseBlurFilter(render::RenderTargetsManager*, graphicutils::RenderToTextureHelper const*);
        ~KawaseBlurFilter();
        bool Init();
        void Destroy();
        void BlurMultiPass(render::RenderContext&, render::RenderTargets&, render::Texture const&, KawaseKernelSize,
                           int) const;
        void BlurMultiPass(render::RenderContext&, render::DrawCallState const&, render::RenderTargets&,
                           render::Texture const&, KawaseKernelSize, shared_ptr<render::ShaderProgram> const&,
                           int) const;

        // data members, from how the methods use this: 240 bytes
        RenderTargetsManager* field_0;  // offset 0
        RenderToTextureHelper* field_8; // offset 8
        shared_ptr field_16;            // offset 16
        shared_ptr field_32;            // offset 32
        InputAssemblerState field_48;   // offset 48
    };

    // 0x1009a9ec0, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // KawaseBlurFilter::KawaseBlurFilter(render::RenderTargetsManager*, graphicutils::RenderToTextureHelper const*): jumps straight to the base-object constructor

    // 0x1009a9f50, 16 bytes, complete-object destructor, inline, placed by class name
    // KawaseBlurFilter::~KawaseBlurFilter(): jumps straight to the base-object destructor

    // 0x1009b9980, 176 bytes, base-object constructor, inline, placed by class name
    // KawaseBlurFilter::KawaseBlurFilter(render::RenderTargetsManager*, graphicutils::RenderToTextureHelper const*)
    void KawaseBlurFilter::KawaseBlurFilter(RenderTargetsManager* param_1, RenderToTextureHelper* param_2) {
        field_0 = param_1;
        field_8 = param_2;
        new (field_16, (_func_decltype_nullptr*)param_1) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        new (field_32, (_func_decltype_nullptr*)param_1) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        new (field_48) render::InputAssemblerState();
        if ((param_1 == (RenderTargetsManager*)0) || (param_2 == (RenderToTextureHelper*)0)) {
            /* WARNING: Subroutine does not return */
            LogAssert("pRenderTargetsManager != nullptr && pRenderToTexture != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/postprocess/"
                      "filters/KawaseBlurFilter.h",
                      23, (char*)0);
        }
    }

    // 0x1009b9b60, 96 bytes, base-object destructor, inline, placed by class name
    // KawaseBlurFilter::~KawaseBlurFilter()
    void KawaseBlurFilter::~KawaseBlurFilter() {
        Destroy(this);
        field_48->~InputAssemblerState();
        field_32->~shared_ptr();
        field_16->~shared_ptr();
    }

} // namespace jag::postprocess
