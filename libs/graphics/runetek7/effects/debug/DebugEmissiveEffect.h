// libs/graphics/runetek7/effects/debug/DebugEmissiveEffect.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::graphics {
    class DebugEmissiveEffect {
    public:
        // virtual methods in vtable order
        virtual ~DebugEmissiveEffect();
        virtual void SetShaderConstants(render::DrawCallState& drawCallState, render::RenderContext& renderContext,
                                        Shader& shader) const;
        DebugEmissiveEffect(RT7Core& rt7Core);
        static float m_maskMultiplier; // = 1.0f
        static uint8_t m_emissiveScale[16];

    private:
        GraphicsQuality field_8;
        uint8_t _unknown_12[4];
        RT7Core* field_16;
    };

    // 0x10093a650
    DebugEmissiveEffect::DebugEmissiveEffect(RT7Core& rt7Core) : ShaderEffect(rt7Core) {}

} // namespace jag::graphics
