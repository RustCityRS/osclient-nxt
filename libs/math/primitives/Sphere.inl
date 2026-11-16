// libs/math/primitives/Sphere.inl
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::math {
    // 0x1009375c0
    char Sphere::TestIntersection(const Sphere& sphere) const {
        uint64_t local_28 = (*((Vector3T<float>*)sphere.SSOBeginPtr())) - *this;
        float local_1c = Vector3Dot<float>((Vector3T<float>*)&local_28, (Vector3T<float>*)&local_28);
        float fVar1 = (float)sphere.GetOutlineRadiusAdjustment();
        fVar1 = fVar1 + m_radius;
        return (local_1c <= fVar1 * fVar1) * '\x02';
    }

} // namespace jag::math
