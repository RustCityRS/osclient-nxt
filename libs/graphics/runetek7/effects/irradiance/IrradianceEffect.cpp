// libs/graphics/runetek7/effects/irradiance/IrradianceEffect.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

#include "IrradianceEffect.h"

namespace jag::graphics {
    // 0x10092e5a0
    void IrradianceEffect::SetShaderConstants(Shader& shader) const {
        shader.GetProgram()->SetShaderConstVector4((HashedString*)graphics::operator*(64), 7, this, 1);
    }

    // 0x10092e5e0
    void IrradianceEffect::SetIdentityShaderConstants(Shader& shader) {
        GetProgram()->SetShaderConstFloat4Array((HashedString*)graphics::operator*(64), 7,
                                                (float*)&SetIdentityShaderConstants(Shader&)::disabledSHCoefConsts, 1);
    }

} // namespace jag::graphics
