// libs/graphics/runetek7/effects/irradiance/IrradianceEffect.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::graphics {
    class IrradianceEffect {
    public:
        void SetShaderConstants(Shader& shader) const;
        void SetIdentityShaderConstants(Shader& shader);
        IrradianceEffect();
        void SetCoefficients(const IrradianceSHCoefConsts& irradianceSHCoefConsts);

        uint8_t _unknown_0[97];
    };

    // 0x1009312d0
    void IrradianceEffect::SetCoefficients(const IrradianceSHCoefConsts& irradianceSHCoefConsts) {
        *this = irradianceSHCoefConsts;
    }

    // 0x100938270
    IrradianceEffect::IrradianceEffect() : IrradianceSHCoefConsts() {}

} // namespace jag::graphics
