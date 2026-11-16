// libs/graphics/runetek7/lighting/DirectionalLight.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

#include "DirectionalLight.h"

namespace jag::graphics {
    // 0x100009ca0: the linker folded this into eastl::compressed_pair_imp<eastl::string::Layout, eastl::allocator, 0>::first(), which has identical code
    DirectionalLight::GetDirection() const;

    // 0x1008a9390, 256 bytes, base-object constructor, placed by class name and debug map
    // DirectionalLight::DirectionalLight()
    void DirectionalLight::DirectionalLight() {
        ColourHSL local_40;

        new (this) math::Transitionable<math::Vector3T<float>>();
        new (&field_48) math::Transitionable<math::Vector3T<float>>();
        new (&field_96) math::Transitionable<math::Vector3T<float>>();
        new (&field_144) math::Transitionable<math::Vector3T<float>>();
        new (&local_40) math::ColourHSL(0.0, -0.7, 0.3);
        SetDirection((Vector3T*)this, (longlong)&local_40, 0);
        new (&local_40) math::ColourHSL(1.5, 1.5, 1.5);
        (&field_48, (Vector3T*)&local_40, 0, 0)->SetValue();
        new (&local_40) math::ColourHSL(0.2, 0.2, 0.2);
        (&field_96, (Vector3T*)&local_40, 0, 0)->SetValue();
        new (&local_40) math::ColourHSL(0.5, 0.5, 0.5);
        (&field_144, (Vector3T*)&local_40, 0, 0)->SetValue();
    }

    // 0x1008a94a0, 80 bytes, placed by class name and debug map
    // DirectionalLight::SetDirection(math::Vector3T<float> const&, long long, unsigned long long)
    void DirectionalLight::SetDirection(Vector3T* param_1, longlong param_2, ulonglong param_3) {
        ulonglong in_RCX;
        undefined8 local_38;
        undefined4 local_30;

        local_30 = *(undefined4*)(param_2 + 8);
        local_38 = *(undefined8*)param_2;
        local_38.Normalize();
        param_1->SetValue((Vector3T*)&local_38, param_3, in_RCX);
    }

    // 0x1008a94f0, 16 bytes, complete-object constructor, placed by class name and debug map
    // DirectionalLight::DirectionalLight(): jumps straight to the base-object constructor

} // namespace jag::graphics
