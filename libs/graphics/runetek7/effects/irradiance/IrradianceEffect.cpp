// libs/graphics/runetek7/effects/irradiance/IrradianceEffect.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

#include "IrradianceEffect.h"

namespace jag::graphics {
    // 0x10092e5a0, 64 bytes, placed by class name and debug map
    // IrradianceEffect::SetShaderConstants(Shader&) const
    void IrradianceEffect::SetShaderConstants(Shader* param_1) {
        ShaderProgram* this_00;
        HashedString* pHVar1;

        this_00 = (ShaderProgram*)param_1->GetProgram();
        pHVar1 = (HashedString*)graphics::operator*((graphics*)64);
        this_00->SetShaderConstVector4(pHVar1, 7, this, 1);
    }

    // 0x10092e5e0, 64 bytes, placed by class name and debug map
    // IrradianceEffect::SetIdentityShaderConstants(Shader&)
    void IrradianceEffect::SetIdentityShaderConstants(Shader* param_1) {
        ShaderProgram* this;
        HashedString* pHVar1;

        this = (ShaderProgram*)param_1->GetProgram();
        pHVar1 = (HashedString*)graphics::operator*((graphics*)64);
        SetShaderConstFloat4Array(pHVar1, 7, (float*)&SetIdentityShaderConstants(Shader&)::disabledSHCoefConsts, 1);
    }

} // namespace jag::graphics
