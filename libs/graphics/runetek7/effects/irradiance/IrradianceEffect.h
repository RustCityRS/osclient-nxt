// libs/graphics/runetek7/effects/irradiance/IrradianceEffect.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::graphics {
    class IrradianceEffect {
    public:
        void SetShaderConstants(Shader&) const;
        void SetIdentityShaderConstants(Shader&);
        IrradianceEffect();
        void SetCoefficients(IrradianceSHCoefConsts const&);

        // data members, from how the methods use this: 97 bytes
        char _unknown_0[97];
    };

    // 0x10092f2b0, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // IrradianceEffect::IrradianceEffect(): jumps straight to the base-object constructor

    // 0x1009312d0, 16 bytes, inline, placed by class name
    // IrradianceEffect::SetCoefficients(IrradianceSHCoefConsts const&)
    void IrradianceEffect::SetCoefficients(IrradianceSHCoefConsts* param_1) {
        IrradianceSHCoefConsts::operator=((IrradianceSHCoefConsts*)this, param_1);
    }

    // 0x100938270, 16 bytes, base-object constructor, inline, placed by class name
    // IrradianceEffect::IrradianceEffect()
    void IrradianceEffect::IrradianceEffect() {
        new (this) IrradianceSHCoefConsts();
    }

} // namespace jag::graphics
