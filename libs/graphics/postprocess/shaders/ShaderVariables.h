// libs/graphics/postprocess/shaders/ShaderVariables.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::postprocess {
    // 0x100935950
    void operator*(ShaderVariable shaderVariable) {
        unsigned long in_RSI;

        (*((array<render::ShaderProgramVariable, 48ul>*)(unsigned long)shaderVariable))[in_RSI];
    }

} // namespace jag::postprocess

namespace jag::graphics {
    // 0x100935970
    void PackMieGParams(float arg1) {
        uint8_t auVar1[16];

        ImVec4 local_18(1.0 - arg1 * arg1, arg1 * arg1 + 1.0, arg1 + arg1, 0.7853982f);
        auVar1[0] = local_18[0];
        auVar1[1] = local_18[1];
        auVar1[2] = local_18[2];
        auVar1[3] = local_18[3];
        auVar1[4] = local_18[4];
        auVar1[5] = local_18[5];
        auVar1[6] = local_18[6];
        auVar1[7] = local_18[7];
        auVar1[8] = local_18[8];
        auVar1[9] = local_18[9];
        auVar1[10] = local_18[10];
        auVar1[11] = local_18[11];
        auVar1[12] = local_18[12];
        auVar1[13] = local_18[13];
        auVar1[14] = local_18[14];
        auVar1[15] = local_18[15];
        return auVar1;
    }

} // namespace jag::graphics

namespace jag::math {
    // 0x100936280
    Matrix44T<float>* Matrix44T<float>::operator*=(float arg1) {
        *this *= arg1;
        (*((this + 16))) *= arg1;
        (*((this + 32))) *= arg1;
        (*((this + 48))) *= arg1;
        return this;
    }

} // namespace jag::math
