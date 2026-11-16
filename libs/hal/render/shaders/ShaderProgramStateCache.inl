// libs/hal/render/shaders/ShaderProgramStateCache.inl
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::render {
    // 0x100bf1410, 80 bytes, inline, placed by class name and debug map
    // ShaderProgramStateCache::SetShaderConstMatrix4(unsigned int, unsigned int, math::Matrix44T<float> const*)
    void ShaderProgramStateCache::SetShaderConstMatrix4(uint param_1, uint param_2, Matrix44T* param_3) {
        Vector4T<float>* this_00;
        float* pfVar1;

        this_00 = (Vector4T<float>*)math::Matrix44T<float>::operator[]((Matrix44T<float>*)param_3, 0);
        pfVar1 = (float*)math::Vector4T<float>::operator[](this_00, 0);
        SetConstData(this, param_1, param_2 << 4, pfVar1, false);
    }

} // namespace jag::render
