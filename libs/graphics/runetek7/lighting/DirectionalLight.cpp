// libs/graphics/runetek7/lighting/DirectionalLight.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

#include "DirectionalLight.h"

namespace jag::graphics {
    // 0x100009ca0: DirectionalLight::GetDirection() const has the same machine code as eastl::compressed_pair_imp<eastl::string::Layout, eastl::allocator, 0>::first()

    // 0x1008a9390
    DirectionalLight::DirectionalLight() : math::Transitionable<math::Vector3T<float>>() {

        ColourHSL local_40(0.0, -0.7, 0.3);
        SetDirection(local_40, 0, 0);
        local_40 = math::ColourHSL(1.5, 1.5, 1.5);
        field_48.SetValue(local_40, 0, 0);
        local_40 = math::ColourHSL(0.2, 0.2, 0.2);
        field_96.SetValue(local_40, 0, 0);
        local_40 = math::ColourHSL(0.5, 0.5, 0.5);
        field_144.SetValue(local_40, 0, 0);
    }

    // 0x1008a94a0
    void DirectionalLight::SetDirection(const math::Vector3T<float>& vector3, long long arg2, unsigned long long arg3) {
        uint32_t local_30 = *(uint32_t*)(vector3 + 8);
        ReturnValue local_38 = *(ReturnValue*)vector3;
        local_38 = math::Vector3T<float>::Normalize();
        SetValue(local_38, arg2, arg3);
    }

} // namespace jag::graphics
