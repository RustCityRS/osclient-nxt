// libs/graphics/runetek7/effects/stippletransparency/StippleCutoutEffect.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::graphics {
    class StippleCutoutEffect {
    public:
        // virtual methods in vtable order
        virtual ~StippleCutoutEffect();
        virtual void SetShaderConstants(render::DrawCallState& drawCallState, render::RenderContext& renderContext,
                                        Shader& shader) const;
        auto BuildUniforms();
        StippleCutoutEffect(RT7Core& rt7Core);

    private:
        GraphicsQuality field_8;
        uint8_t _unknown_12[4];
        RT7Core* field_16;
        uint8_t _unknown_24[16];
    };

    // 0x10093dcf0
    StippleCutoutEffect::StippleCutoutEffect(RT7Core& rt7Core) : ShaderEffect(rt7Core) {}

} // namespace jag::graphics
