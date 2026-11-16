// libs/graphics/postprocess/filters/DepthDownSamplerFilter.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::postprocess {
    class DepthDownSamplerFilter {
    public:
        DepthDownSamplerFilter(graphicutils::RenderToTextureHelper* renderToTextureHelper);
        ~DepthDownSamplerFilter();
        unsigned long IsReady() const;
        unsigned long Init(bool arg1);
        void Destroy();
        void DownSample2x2(render::RenderContext& renderContext,
                           const WrapArray<shared_ptr<render::RenderTargets>>& wrapArray,
                           const render::Texture& texture, unsigned int arg4, bool arg5);

    private:
        RenderToTextureHelper* field_0;
        shared_ptr field_8;
        shared_ptr field_24;
    };

    // 0x100934af0
    unsigned long DepthDownSamplerFilter::IsReady() const {
        bool bVar1;
        uint64_t extraout_var;
        unsigned long uVar2;

        if (field_0 == nullptr) {
            uVar2 = 0;
        } else {
            uVar2 = 0;
            bVar1 = *field_8 != nullptr;
            if (bVar1) {
                bVar1 = *field_24 != nullptr;
                uVar2 = (((uint64_t)extraout_var << 8) | (uint8_t)bVar1) & 4294967295;
            }
        }
        return uVar2;
    }

    // 0x100938bd0
    DepthDownSamplerFilter::DepthDownSamplerFilter(graphicutils::RenderToTextureHelper* renderToTextureHelper)
        : field_0(renderToTextureHelper) {
        new (field_24) shared_ptr();
        if (renderToTextureHelper == nullptr) {
            LogAssert("renderToTexture",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/postprocess/"
                      "shaders/../filters/DepthDownSamplerFilter.h",
                      21, nullptr);
        }
    }

    // 0x100938c50
    DepthDownSamplerFilter::~DepthDownSamplerFilter() {
        Destroy();
        field_24->~shared_ptr();
        field_8->~shared_ptr();
    }

} // namespace jag::postprocess

namespace jag::graphics {
    class RT7PixelShaderSourceStream {
    public:
        // virtual methods in vtable order
        virtual ~RT7PixelShaderSourceStream();
        RT7PixelShaderSourceStream(const ShaderSource& shaderSource, const EffectList& effectList,
                                   render::ShaderVariablePrecision shaderVariablePrecision1,
                                   render::ShaderVariablePrecision shaderVariablePrecision2,
                                   render::ShaderVariablePrecision shaderVariablePrecision3,
                                   render::ShaderVariablePrecision shaderVariablePrecision4,
                                   render::ShaderVariablePrecision shaderVariablePrecision5,
                                   render::ShaderVariablePrecision shaderVariablePrecision6, unsigned int arg9);
        RT7PixelShaderSourceStream(const EffectList& effectList,
                                   render::ShaderVariablePrecision shaderVariablePrecision1,
                                   render::ShaderVariablePrecision shaderVariablePrecision2,
                                   render::ShaderVariablePrecision shaderVariablePrecision3,
                                   render::ShaderVariablePrecision shaderVariablePrecision4,
                                   render::ShaderVariablePrecision shaderVariablePrecision5,
                                   render::ShaderVariablePrecision shaderVariablePrecision6, unsigned int arg8);

    private:
        uint8_t _unknown_8[8];
        uint8_t* field_16;
        uint8_t _unknown_24[104];
        uint8_t* field_128;
    };

    // 0x100934790
    RT7PixelShaderSourceStream::RT7PixelShaderSourceStream(const EffectList& effectList,
                                                           render::ShaderVariablePrecision shaderVariablePrecision1,
                                                           render::ShaderVariablePrecision shaderVariablePrecision2,
                                                           render::ShaderVariablePrecision shaderVariablePrecision3,
                                                           render::ShaderVariablePrecision shaderVariablePrecision4,
                                                           render::ShaderVariablePrecision shaderVariablePrecision5,
                                                           render::ShaderVariablePrecision shaderVariablePrecision6,
                                                           unsigned int arg8)
        : RT7ShaderSourceStream((int)PTR_VTT_100ee6fa8 + 8, *35632, (ShaderVariablePrecision)effectList,
                                shaderVariablePrecision1, shaderVariablePrecision2, shaderVariablePrecision3,
                                shaderVariablePrecision4, shaderVariablePrecision5, shaderVariablePrecision6) {
        uint8_t* puVar1 = PTR_vtable_100ee8890;
        field_128 = puVar1 + 112;
        field_16 = puVar1 + 72;
    }

    // 0x100934880
    RT7PixelShaderSourceStream::~RT7PixelShaderSourceStream() {
        ~RT7PixelShaderSourceStream(this, (void**)PTR_VTT_100ee6fa8);
        (&field_128)->~ios();
    }

} // namespace jag::graphics

namespace jag::math {
    // 0x100933670
    Matrix44T<float>& Matrix44Inverse<float>(Matrix44T<float>& matrix441, float* arg2,
                                             const Matrix44T<float>& matrix442) {
        matrix441 = matrix442;
        matrix441 = Matrix44T<float>::Invert(arg2);
        return matrix441;
    }

} // namespace jag::math
