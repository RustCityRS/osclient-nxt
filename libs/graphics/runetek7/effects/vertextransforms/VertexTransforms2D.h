// libs/graphics/runetek7/effects/vertextransforms/VertexTransforms2D.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::graphics {
    class VertexTransforms2D {
    public:
        // virtual methods in vtable order
        virtual ~VertexTransforms2D();
        virtual void SetShaderConstants(render::DrawCallState&, render::RenderContext&, Shader&) const;
        void SetTransforms(math::Matrix44T<float> const&);
        VertexTransforms2D(RT7Core&);

        // data members, from how the methods use this: 40 bytes
        undefined** field_0; // offset 0, vtable pointer
        uint field_8;        // offset 8
        char _unknown_12[4];
        RT7Core* field_16; // offset 16
        char _unknown_24[16];
    };

    // 0x10093c520, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // VertexTransforms2D::VertexTransforms2D(RT7Core&): jumps straight to the base-object constructor

    // 0x10093c540, 80 bytes, base-object constructor, inline, placed by class name and debug map
    // VertexTransforms2D::VertexTransforms2D(RT7Core&)
    void VertexTransforms2D::VertexTransforms2D(RT7Core* param_1) {
        new (this) ShaderEffect(param_1);
        field_0 = &PTR__RefCounterAndData_100f19550;
        new (&field_32) math::Matrix44T<float>();
        (&field_32)->SetToIdentity();
    }

} // namespace jag::graphics
