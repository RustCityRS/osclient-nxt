// libs/math/primitives/Sphere.inl
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::math {
    // 0x1009375c0, 112 bytes, inline, placed by class name and debug map
    // Sphere::TestIntersection(Sphere const&) const
    char Sphere::TestIntersection(Sphere* param_1) {
        vector* pvVar1;
        float fVar2;
        undefined8 local_28;
        float local_1c;

        pvVar1 = param_1->SSOBeginPtr(param_1);
        local_28 = math::operator-((Vector3T*)pvVar1, (Vector3T*)this);
        local_1c = Vector3Dot<float>((Vector3T*)&local_28, (Vector3T*)&local_28);
        fVar2 = (float)param_1->GetOutlineRadiusAdjustment();
        fVar2 = fVar2 + m_radius;
        return (local_1c <= fVar2 * fVar2) * '\x02';
    }

} // namespace jag::math
