// libs/math/primitives/LineSegment.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.graphics

namespace jag::math {
    class LineSegment {
    public:
        LineSegment();
        void ClosestPoint(Vector3T<float> const&);

        // data members, from how the methods use this: 20 bytes
        float field_0; // offset 0
        float field_4; // offset 4
        float field_8; // offset 8
        char _unknown_12[8];
    };

    // 0x10091e3b0, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // LineSegment::LineSegment(): jumps straight to the base-object constructor

    // 0x10091e3c0, 176 bytes, inline, placed by class name and debug map
    // LineSegment::ClosestPoint(Vector3T<float> const&)
    void LineSegment::ClosestPoint(Vector3T* param_1) {
        float fVar1;
        float fVar2;
        undefined8 local_48[2];
        float local_38;
        float local_34;
        float local_30;
        float local_2c;
        undefined8 local_28;
        float local_20;

        local_48[0] = math::operator-((Vector3T*)&field_12, (Vector3T*)this);
        local_28 = math::operator-(param_1, (Vector3T*)this);
        local_2c = Vector3Dot<float>((Vector3T*)&local_28, (Vector3T*)local_48);
        fVar1 = (float)local_48->LengthSq();
        fVar1 = local_2c / fVar1;
        local_34 = 0.0;
        local_30 = 1.0;
        local_38 = fVar1;
        fVar2 = Clamp<float>(&local_38, &local_34, &local_30);
        local_28 = math::operator*((Vector3T*)local_48, fVar2);
        local_20 = fVar1;
        math::operator+((Vector3T*)this, (Vector3T*)&local_28);
    }

    // 0x100922c70, 48 bytes, base-object constructor, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // LineSegment::LineSegment()
    /* graphics::LightProbeVertex::LightProbeVertex() */

    void graphics::LightProbeVertex::LightProbeVertex() {
        new (this) Vector3T<int>();
        new (&field_12) Vector3T<int>();
    }

} // namespace jag::math

namespace jag::graphics {
    // 0x100922c70: the linker folded this into math::LineSegment::LineSegment(), which has identical code
    LightProbeVertex::LightProbeVertex();

} // namespace jag::graphics
