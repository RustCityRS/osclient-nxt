// libs/graphics/runetek7/materials/shaders/RT7ShaderSourceStream.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.graphics

namespace jag::graphics {
    class RT7ShaderSourceStream {
    public:
        // virtual methods in vtable order
        virtual ~RT7ShaderSourceStream();
        virtual void AppendMandatoryShaderFragments();
        RT7ShaderSourceStream(const ShaderSource& shaderSource, render::ShaderType shaderType,
                              const EffectList& effectList, render::ShaderVariablePrecision shaderVariablePrecision1,
                              render::ShaderVariablePrecision shaderVariablePrecision2,
                              render::ShaderVariablePrecision shaderVariablePrecision3,
                              render::ShaderVariablePrecision shaderVariablePrecision4,
                              render::ShaderVariablePrecision shaderVariablePrecision5,
                              render::ShaderVariablePrecision shaderVariablePrecision6, unsigned int arg10);
        void AppendRelevantEffectsAsStringDefines(const ShaderSource& shaderSource, const EffectList& effectList);
        RT7ShaderSourceStream(render::ShaderType shaderType, const EffectList& effectList,
                              render::ShaderVariablePrecision shaderVariablePrecision1,
                              render::ShaderVariablePrecision shaderVariablePrecision2,
                              render::ShaderVariablePrecision shaderVariablePrecision3,
                              render::ShaderVariablePrecision shaderVariablePrecision4,
                              render::ShaderVariablePrecision shaderVariablePrecision5,
                              render::ShaderVariablePrecision shaderVariablePrecision6, unsigned int arg9);

    private:
        uint8_t _unknown_8[8];
        uint8_t** field_16;
        uint8_t _unknown_24[104];
        uint8_t** field_128;
    };

    // 0x100852fa0
    RT7PixelShaderSourceStream::RT7PixelShaderSourceStream(const ShaderSource& shaderSource,
                                                           const EffectList& effectList,
                                                           render::ShaderVariablePrecision shaderVariablePrecision1,
                                                           render::ShaderVariablePrecision shaderVariablePrecision2,
                                                           render::ShaderVariablePrecision shaderVariablePrecision3,
                                                           render::ShaderVariablePrecision shaderVariablePrecision4,
                                                           render::ShaderVariablePrecision shaderVariablePrecision5,
                                                           render::ShaderVariablePrecision shaderVariablePrecision6,
                                                           unsigned int arg9)
        : RT7ShaderSourceStream(*((PTR_VTT_100ee6fa8 + 8)), (ShaderType)shaderSource, *35632,
                                (ShaderVariablePrecision)effectList, shaderVariablePrecision1, shaderVariablePrecision2,
                                shaderVariablePrecision3, shaderVariablePrecision4, shaderVariablePrecision5,
                                shaderVariablePrecision6) {
        uint8_t* puVar1 = PTR_vtable_100ee8890;
        field_128 = puVar1 + 112;
        field_16 = puVar1 + 72;
    }

    // 0x100938e20
    RT7ShaderSourceStream::~RT7ShaderSourceStream() {}

} // namespace jag::graphics

namespace jag::render {
    // 0x100938e20: PixelShaderSourceStream::~PixelShaderSourceStream() has the same machine code as graphics::RT7ShaderSourceStream::~RT7ShaderSourceStream()

    // 0x100938e20: VertexShaderSourceStream::~VertexShaderSourceStream() has the same machine code as graphics::RT7ShaderSourceStream::~RT7ShaderSourceStream()

    // 0x100938e20: ComputeShaderSourceStream::~ComputeShaderSourceStream() has the same machine code as graphics::RT7ShaderSourceStream::~RT7ShaderSourceStream()

} // namespace jag::render
