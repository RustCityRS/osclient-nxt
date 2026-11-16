// libs/graphics/runetek7/effects/debug/DebugMaterialHighlightEffect.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.graphics

namespace jag::graphics {
    class DebugMaterialHighlightEffect {
    public:
        // virtual methods in vtable order
        virtual ~DebugMaterialHighlightEffect();
        virtual void SetShaderConstants(render::DrawCallState& drawCallState, render::RenderContext& renderContext,
                                        Shader& shader) const;
        DebugMaterialHighlightEffect* BuildUniforms();
        DebugMaterialHighlightEffect(RT7Core& rt7Core);
        static int32_t m_materialHighlightID; // = -1

    private:
        GraphicsQuality field_8;
        uint8_t _unknown_12[4];
        RT7Core* field_16;
    };

    class FogShaderConsts {
    public:
        FogShaderConsts();
    };

    // 0x10093a9d0
    DebugMaterialHighlightEffect::DebugMaterialHighlightEffect(RT7Core& rt7Core) : ShaderEffect(rt7Core) {}

    // 0x10093c0b0
    FogShaderConsts::FogShaderConsts() : math::Vector4T() {}

} // namespace jag::graphics

namespace jag::tweak {
    // 0x10093c0b0: Gradient::Gradient() has the same machine code as graphics::FogShaderConsts::FogShaderConsts()

} // namespace jag::tweak
