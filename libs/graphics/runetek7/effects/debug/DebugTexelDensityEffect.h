// libs/graphics/runetek7/effects/debug/DebugTexelDensityEffect.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::graphics {
    class DebugTexelDensityEffect {
    public:
        // virtual methods in vtable order
        virtual ~DebugTexelDensityEffect();
        virtual void SetShaderConstants(render::DrawCallState& drawCallState, render::RenderContext& renderContext,
                                        Shader& shader) const;
        DebugTexelDensityEffect(RT7Core& rt7Core);
        static float m_resolutionPerTile; // = 256.0f
        static float m_targetMultiplier;  // = 4.0f
        static float m_densityRadius;     // = 0.25f

    private:
        GraphicsQuality field_8;
        uint8_t _unknown_12[4];
        RT7Core* field_16;
    };

    // 0x10093a810
    DebugTexelDensityEffect::DebugTexelDensityEffect(RT7Core& rt7Core) : ShaderEffect(rt7Core) {}

} // namespace jag::graphics
