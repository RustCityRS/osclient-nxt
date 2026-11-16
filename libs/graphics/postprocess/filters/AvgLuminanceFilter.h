// libs/graphics/postprocess/filters/AvgLuminanceFilter.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::postprocess {
    class AvgLuminanceFilter {
    public:
        // virtual methods in vtable order
        virtual ~AvgLuminanceFilter();
        uint32_t GetShaderOutputFormat() const;
        uint64_t EnsureRenderTargetsAvailable(graphics::ViewRenderTargets* viewRenderTargets);
        AvgLuminanceFilter(render::RenderTargetsManager* renderTargetsManager,
                           const graphicutils::RenderToTextureHelper* renderToTextureHelper);
        static HashedString VIEWRT_LUMINANCE_ADAPTED;          // = HashedString("LUMINANCE_ADAPTED")
        static HashedString VIEWRT_LUMINANCE_AVERAGE;          // = HashedString("VIEWRT_LUMINANCE_AVERAGE")
        static HashedString VIEWRT_LUMINANCE_ADAPTED_PREVIOUS; // = HashedString("LUMINANCE_ADAPTED_PREVIOUS")

    private:
        RenderTargetsManager* field_8;
        RenderToTextureHelper* field_16;
        uint8_t m_shaderOutputFormat[1];
        uint8_t _unknown_25[3];
        uint8_t field_28;
        uint8_t _unknown_29[3];
    };

    // 0x1009b54f0
    AvgLuminanceFilter::AvgLuminanceFilter(render::RenderTargetsManager* renderTargetsManager,
                                           const graphicutils::RenderToTextureHelper* renderToTextureHelper)
        : field_8(renderTargetsManager), field_16(renderToTextureHelper), field_28(0) {
        if ((renderTargetsManager == nullptr) || (renderToTextureHelper == nullptr)) {
            LogAssert("pRenderTargetsManager != nullptr && pRenderToTexture != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/postprocess/"
                      "filters/AvgLuminanceFilter.h",
                      28, nullptr);
        }
    }

} // namespace jag::postprocess
