// libs/math/primitives/LineSegment.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.graphics

namespace jag::math {
    class LineSegment {
    public:
        LineSegment();
        void ClosestPoint(const Vector3T<float>& vector3);

    private:
        float field_0;
        float field_4;
        float field_8;
        uint8_t _unknown_12[8];
    };

    // 0x10091e3c0
    void LineSegment::ClosestPoint(const Vector3T<float>& vector3) {
        uint64_t local_48[2];

        local_48[0] = field_12 - *this;
        uint64_t local_28 = vector3 - *this;
        float local_2c = Vector3Dot<float>((Vector3T<float>*)&local_28, (Vector3T<float>*)local_48);
        float fVar1 = (float)local_48->LengthSq();
        fVar1 = local_2c / fVar1;
        float local_34 = 0.0;
        float local_30 = 1.0;
        float local_38 = fVar1;
        float arg1 = Clamp<float>(&local_38, &local_34, &local_30);
        local_28 = *arg1 * *local_48;
        float local_20 = fVar1;
        *this + local_28;
    }

    // 0x100922c70
    LineSegment::LineSegment() : Vector3T() {}

} // namespace jag::math

namespace jag::graphics {
    // 0x100922c70: LightProbeVertex::LightProbeVertex() has the same machine code as math::LineSegment::LineSegment()

} // namespace jag::graphics
