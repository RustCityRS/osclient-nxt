// libs/graphics/runetek7/effects/vertextransforms/VertexTransforms2D.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: osclient

#include "VertexTransforms2D.h"

namespace jag::graphics {
    // 0x100022b10: VertexTransforms2D::~VertexTransforms2D() has the same machine code as oldscape::option::ScriptOption<int, oldscape::option::DeviceOptionScriptID>::~ScriptOption()

    // 0x10091ef80
    void VertexTransforms2D::SetShaderConstants(render::DrawCallState& drawCallState,
                                                render::RenderContext& renderContext, Shader& shader) const {
        shader.GetProgram()->SetShaderConstMatrix4((HashedString*)graphics::operator*(4), 1, &field_32, 1);
    }

    // 0x10091efd0
    void VertexTransforms2D::SetTransforms(const math::Matrix44T<float>& matrix44) {
        field_32 = math::Matrix44T<float>::Set(matrix44);
    }

} // namespace jag::graphics
