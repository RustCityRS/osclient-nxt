// libs/graphics/postprocess/shaders/ShaderVariables.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::math {
    // 0x100936150, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ColourStorage8888<ARGB8StorageLayout>::ColourStorage8888(unsigned int, unsigned int, unsigned int, unsigned int): jumps straight to the base-object constructor

    // 0x100936280, 80 bytes, inline, placed by debug map only (low confidence)
    // Matrix44T<float>::operator*=(float)
    /* Matrix44T<float>::TEMPNAMEPLACEHOLDERVALUE(float) */

    Matrix44T<float>* Matrix44T<float>::operator*=(float param_1) {
        Vector4T<float>::operator*=((Vector4T<float>*)this, param_1);
        Vector4T<float>::operator*=((Vector4T<float>*)(this + 16), param_1);
        Vector4T<float>::operator*=((Vector4T<float>*)(this + 32), param_1);
        Vector4T<float>::operator*=((Vector4T<float>*)(this + 48), param_1);
        return this;
    }

} // namespace jag::math

namespace jag::postprocess {
    // 0x100935950, 16 bytes, inline, placed by debug map only (low confidence)
    // operator*(ShaderVariable)
    /* TEMPNAMEPLACEHOLDERVALUE(ShaderVariable) */

    void operator*(uint param_1) {
        std::array<render::ShaderProgramVariable, 48ul>::operator[]((ulong)param_1);
    }

} // namespace jag::postprocess

namespace jag::graphics {
    // 0x100935970, 80 bytes, inline, placed by debug map only (low confidence)
    // PackMieGParams(float)
    undefined1[16] PackMieGParams(float param_1) {
        undefined1 auVar1[16];
        ImVec4 local_18[16];

        ImVec4::ImVec4(local_18, 1.0 - param_1 * param_1, param_1 * param_1 + 1.0, param_1 + param_1, 0.7853982);
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
