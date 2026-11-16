// libs/graphics/postprocess/filters/DualFilteringBlurFilter.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::postprocess {
    class DualFilteringBlurFilter {
    public:
        DualFilteringBlurFilter(render::RenderTargetsManager* renderTargetsManager,
                                const graphicutils::RenderToTextureHelper* renderToTextureHelper);
        ~DualFilteringBlurFilter();
        unsigned long Init();
        void Destroy();
        void BlurMultiPass(render::RenderContext& renderContext, render::RenderTargets& renderTargets,
                           const render::Texture& texture, DualFilteringBlurKernelSize dualFilteringBlurKernelSize,
                           int arg5) const;

    private:
        RenderTargetsManager* field_0;
        RenderToTextureHelper* field_8;
        uint8_t _unknown_16[24];
    };

    // 0x1009b9a30
    DualFilteringBlurFilter::DualFilteringBlurFilter(render::RenderTargetsManager* renderTargetsManager,
                                                     const graphicutils::RenderToTextureHelper* renderToTextureHelper)
        : field_0(renderTargetsManager), field_8(renderToTextureHelper) {
        new (&field_16) shared_ptr();
        new (&field_32) shared_ptr();
        if ((renderTargetsManager == nullptr) || (renderToTextureHelper == nullptr)) {
            LogAssert("pRenderTargetsManager != nullptr && pRenderToTexture != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/postprocess/"
                      "filters/DualFilteringBlurFilter.h",
                      28, nullptr);
        }
    }

    // 0x1009b9b10
    DualFilteringBlurFilter::~DualFilteringBlurFilter() {
        Destroy();
        field_32.~shared_ptr();
        field_16.~shared_ptr();
    }

} // namespace jag::postprocess
