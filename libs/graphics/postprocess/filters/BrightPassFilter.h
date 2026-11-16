// libs/graphics/postprocess/filters/BrightPassFilter.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::postprocess {
    class BrightPassFilter {
    public:
        BrightPassFilter(render::RenderTargetsManager*, graphicutils::RenderToTextureHelper const*);
        ~BrightPassFilter();
        Init();
        void Destroy();
        void Filter(render::RenderContext&, render::RenderTargets&, render::Texture const&, render::Texture const&,
                    ToneMapOperator, PostProcessParams const&, float, float, LuminanceShaderOutputFormat);

        // data members, from how the methods use this: 232 bytes
        RenderTargetsManager* field_0;  // offset 0
        RenderToTextureHelper* field_8; // offset 8
        shared_ptr field_16;            // offset 16
        InputAssemblerState field_32;   // offset 32
        undefined4 field_224;           // offset 224
        char _unknown_228[4];
    };

    // 0x1009a9ea0, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // BrightPassFilter::BrightPassFilter(render::RenderTargetsManager*, graphicutils::RenderToTextureHelper const*): jumps straight to the base-object constructor

    // 0x1009a9f70, 16 bytes, complete-object destructor, inline, placed by class name
    // BrightPassFilter::~BrightPassFilter(): jumps straight to the base-object destructor

    // 0x1009b9850, 160 bytes, base-object constructor, inline, placed by class name
    // BrightPassFilter::BrightPassFilter(render::RenderTargetsManager*, graphicutils::RenderToTextureHelper const*)
    void BrightPassFilter::BrightPassFilter(RenderTargetsManager* param_1, RenderToTextureHelper* param_2) {
        field_0 = param_1;
        field_8 = param_2;
        new (field_16, (_func_decltype_nullptr*)param_1) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        new (field_32) render::InputAssemblerState();
        field_224 = 4294967295;
        if ((param_1 == (RenderTargetsManager*)0) || (param_2 == (RenderToTextureHelper*)0)) {
            /* WARNING: Subroutine does not return */
            LogAssert("pRenderTargetsManager != nullptr && pRenderToTexture != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/postprocess/"
                      "filters/BrightPassFilter.h",
                      23, (char*)0);
        }
    }

    // 0x1009b9c10, 80 bytes, base-object destructor, inline, placed by class name
    // BrightPassFilter::~BrightPassFilter()
    void BrightPassFilter::~BrightPassFilter() {
        Destroy(this);
        field_32->~InputAssemblerState();
        field_16->~shared_ptr();
    }

} // namespace jag::postprocess
