// libs/graphics/postprocess/filters/BrightPassFilter.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::postprocess {
    class BrightPassFilter {
    public:
        BrightPassFilter(render::RenderTargetsManager* renderTargetsManager,
                         const graphicutils::RenderToTextureHelper* renderToTextureHelper);
        ~BrightPassFilter();
        void Init();
        void Destroy();
        void Filter(render::RenderContext& arg1, render::RenderTargets& arg2, const render::Texture& renderContext,
                    const render::Texture& renderTargets, ToneMapOperator texture1, const PostProcessParams& texture2,
                    float arg7, float arg8, LuminanceShaderOutputFormat arg9);

    private:
        RenderTargetsManager* field_0;
        RenderToTextureHelper* field_8;
        shared_ptr field_16;
        InputAssemblerState field_32;
        int field_224;
        uint8_t _unknown_228[4];
    };

    // 0x1009b9850
    BrightPassFilter::BrightPassFilter(render::RenderTargetsManager* renderTargetsManager,
                                       const graphicutils::RenderToTextureHelper* renderToTextureHelper)
        : field_0(renderTargetsManager), field_8(renderToTextureHelper) {
        new (field_16) shared_ptr();
        new (field_32) render::InputAssemblerState();
        field_224 = -1;
        if ((renderTargetsManager == nullptr) || (renderToTextureHelper == nullptr)) {
            LogAssert("pRenderTargetsManager != nullptr && pRenderToTexture != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/postprocess/"
                      "filters/BrightPassFilter.h",
                      23, nullptr);
        }
    }

    // 0x1009b9c10
    BrightPassFilter::~BrightPassFilter() {
        Destroy();
        field_32->~InputAssemblerState();
        field_16->~shared_ptr();
    }

} // namespace jag::postprocess
