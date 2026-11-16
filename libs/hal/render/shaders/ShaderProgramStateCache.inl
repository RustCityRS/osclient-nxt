// libs/hal/render/shaders/ShaderProgramStateCache.inl
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::render {
    // 0x100bf1410
    void ShaderProgramStateCache::SetShaderConstMatrix4(unsigned int arg1, unsigned int arg2,
                                                        const math::Matrix44T<float>* matrix44) {
        Vector4T<float>* this_00 = (Vector4T<float>*)(*matrix44)[0];
        float* arg3 = (float*)(*this_00)[0];
        SetConstData(arg1, arg2 << 4, arg3, false);
    }

} // namespace jag::render
