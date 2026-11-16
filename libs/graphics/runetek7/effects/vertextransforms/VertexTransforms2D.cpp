// libs/graphics/runetek7/effects/vertextransforms/VertexTransforms2D.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: osclient

#include "VertexTransforms2D.h"

namespace jag::graphics {
    // 0x100022b10: the linker folded this into oldscape::option::ScriptOption<int, oldscape::option::DeviceOptionScriptID>::~ScriptOption(), which has identical code
    VertexTransforms2D::~VertexTransforms2D();

    // 0x100153080: the linker folded this into oldscape::ClientObj::~ClientObj(), which has identical code
    VertexTransforms2D::~VertexTransforms2D();

    // 0x100153090: the linker folded this into oldscape::ClientObj::~ClientObj(), which has identical code
    VertexTransforms2D::~VertexTransforms2D();

    // 0x10091ef80, 80 bytes, placed by class name and debug map
    // VertexTransforms2D::SetShaderConstants(render::DrawCallState&, render::RenderContext&, Shader&) const
    void VertexTransforms2D::SetShaderConstants(DrawCallState* param_1, RenderContext* param_2, Shader* param_3) {
        ShaderProgram* this_00;
        HashedString* pHVar1;

        this_00 = (ShaderProgram*)param_3->GetProgram();
        pHVar1 = (HashedString*)graphics::operator*((graphics*)4);
        this_00->SetShaderConstMatrix4(pHVar1, 1, (Matrix44T*)&field_32, 1);
    }

    // 0x10091efd0, 16 bytes, placed by class name and debug map
    // VertexTransforms2D::SetTransforms(math::Matrix44T<float> const&)
    void VertexTransforms2D::SetTransforms(Matrix44T* param_1) {
        (&field_32, param_1)->Set();
    }

} // namespace jag::graphics
