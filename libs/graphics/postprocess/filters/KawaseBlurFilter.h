// libs/graphics/postprocess/filters/KawaseBlurFilter.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::postprocess {
    class KawaseBlurFilter {
    public:
        KawaseBlurFilter(render::RenderTargetsManager* renderTargetsManager,
                         const graphicutils::RenderToTextureHelper* renderToTextureHelper);
        ~KawaseBlurFilter();
        bool Init();
        void Destroy();
        void BlurMultiPass(render::RenderContext& renderContext, render::RenderTargets& renderTargets,
                           const render::Texture& texture, KawaseKernelSize kawaseKernelSize, int arg5) const;
        void BlurMultiPass(render::RenderContext& renderContext, const render::DrawCallState& drawCallState,
                           render::RenderTargets& renderTargets, const render::Texture& texture,
                           KawaseKernelSize kawaseKernelSize, const shared_ptr<render::ShaderProgram>& shaderProgram,
                           int arg7) const;

    private:
        RenderTargetsManager* field_0;
        RenderToTextureHelper* field_8;
        uint8_t _unknown_16[32];
        InputAssemblerState field_48;
    };

    // 0x1009b9980
    KawaseBlurFilter::KawaseBlurFilter(render::RenderTargetsManager* renderTargetsManager,
                                       const graphicutils::RenderToTextureHelper* renderToTextureHelper)
        : field_0(renderTargetsManager), field_8(renderToTextureHelper) {
        new (&field_16) shared_ptr();
        new (&field_32) shared_ptr();
        new (field_48) render::InputAssemblerState();
        if ((renderTargetsManager == nullptr) || (renderToTextureHelper == nullptr)) {
            LogAssert("pRenderTargetsManager != nullptr && pRenderToTexture != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/postprocess/"
                      "filters/KawaseBlurFilter.h",
                      23, nullptr);
        }
    }

    // 0x1009b9b60
    KawaseBlurFilter::~KawaseBlurFilter() {
        Destroy();
        field_48->~InputAssemblerState();
        field_32.~shared_ptr();
        field_16.~shared_ptr();
    }

} // namespace jag::postprocess
