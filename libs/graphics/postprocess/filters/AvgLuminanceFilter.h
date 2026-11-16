// libs/graphics/postprocess/filters/AvgLuminanceFilter.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::postprocess {
    class AvgLuminanceFilter {
    public:
        // virtual methods in vtable order
        virtual ~AvgLuminanceFilter();
        GetShaderOutputFormat() const;
        EnsureRenderTargetsAvailable(graphics::ViewRenderTargets*);
        AvgLuminanceFilter(render::RenderTargetsManager*, graphicutils::RenderToTextureHelper const*);
        static HashedString /* 16 bytes */ VIEWRT_LUMINANCE_ADAPTED; // = HashedString("LUMINANCE_ADAPTED")
        static HashedString /* 16 bytes */ VIEWRT_LUMINANCE_AVERAGE; // = HashedString("VIEWRT_LUMINANCE_AVERAGE")
        static HashedString                                          /* 16 bytes */
            VIEWRT_LUMINANCE_ADAPTED_PREVIOUS;                       // = HashedString("LUMINANCE_ADAPTED_PREVIOUS")

        // data members, from how the methods use this: 32 bytes
        undefined* field_0;              // offset 0, vtable pointer
        RenderTargetsManager* field_8;   // offset 8
        RenderToTextureHelper* field_16; // offset 16
        undefined1 m_shaderOutputFormat; // offset 24
        char _unknown_25[3];
        undefined1 field_28; // offset 28
        char _unknown_29[3];
    };

    // 0x1009b54f0, 80 bytes, base-object constructor, inline, placed by class name and debug map
    // AvgLuminanceFilter::AvgLuminanceFilter(render::RenderTargetsManager*, graphicutils::RenderToTextureHelper const*)
    void AvgLuminanceFilter::AvgLuminanceFilter(RenderTargetsManager* param_1, RenderToTextureHelper* param_2) {
        field_0 = PTR_vtable_100ee6fe8 + 16;
        field_8 = param_1;
        field_16 = param_2;
        field_28 = 0;
        if ((param_1 == (RenderTargetsManager*)0) || (param_2 == (RenderToTextureHelper*)0)) {
            /* WARNING: Subroutine does not return */
            LogAssert("pRenderTargetsManager != nullptr && pRenderToTexture != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/postprocess/"
                      "filters/AvgLuminanceFilter.h",
                      28, (char*)0);
        }
    }

} // namespace jag::postprocess
