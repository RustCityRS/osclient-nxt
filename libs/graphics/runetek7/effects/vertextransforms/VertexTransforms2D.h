// libs/graphics/runetek7/effects/vertextransforms/VertexTransforms2D.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::graphics {
    class VertexTransforms2D {
    public:
        // virtual methods in vtable order
        virtual ~VertexTransforms2D();
        virtual void SetShaderConstants(render::DrawCallState& drawCallState, render::RenderContext& renderContext,
                                        Shader& shader) const;
        void SetTransforms(const math::Matrix44T<float>& matrix44);
        VertexTransforms2D(RT7Core& rt7Core);

    private:
        GraphicsQuality field_8;
        uint8_t _unknown_12[4];
        RT7Core* field_16;
        uint8_t _unknown_24[16];
    };

    // 0x10093c540
    VertexTransforms2D::VertexTransforms2D(RT7Core& rt7Core) : ShaderEffect(rt7Core) {
        field_32.SetToIdentity();
    }

} // namespace jag::graphics
