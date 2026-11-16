// libs/graphics/shaderlib/utils/TextureCubeUtils.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics.shaderlib

#include "libs/hal/render/textures/TextureCube.h"

namespace jag {
    // 0x100bb34a0, 336 bytes, placed by class name and debug map
    // TextureCubeUtils::BuildFragment(bool)
    TextureCubeUtils* TextureCubeUtils::BuildFragment(bool param_1) {
        char* pcVar1;
        basic_stringstream<char, std::char_traits<char>, BucketAllocatorSTL<char>> local_138[16];
        ostream local_128[264];

        std::basic_stringstream<char, std::char_traits<char>, BucketAllocatorSTL<char>>::basic_stringstream(local_138);
        pcVar1 = (char*)graphics::shadersourceprovider::GetShaderString(7);
        std::operator<<(local_128, pcVar1);
        std::operator<<(local_128, "\nvec4 textureCubeSRGB(samplerCube sampler, vec3 reflDir)\n{\n   vec4 texel = "
                                   "textureCube(sampler, reflDir);\n");
        if (param_1) {
            std::operator<<(local_128, " return texel;\n");
        } else {
            std::operator<<(local_128, " return vec4(SRGBToLinear(texel.rgb), texel.a);\n");
        }
        std::operator<<(local_128, "}\n");
        std::operator<<(local_128, "\nvec4 textureCubeSRGB(samplerCube sampler, vec3 reflDir, float lod)\n{\n   vec4 "
                                   "texel = textureCube(sampler, reflDir, lod);\n");
        if (param_1) {
            std::operator<<(local_128, " return texel;\n");
        } else {
            std::operator<<(local_128, " return vec4(SRGBToLinear(texel.rgb), texel.a);\n");
        }
        std::operator<<(local_128, "}\n");
        std::operator<<(local_128, "\nvec4 textureCubeLodSRGB(samplerCube sampler, vec3 reflDir, float lod)\n{\n   "
                                   "vec4 texel = textureCubeLodCompat(sampler, reflDir, lod);\n");
        if (param_1) {
            std::operator<<(local_128, " return texel;\n");
        } else {
            std::operator<<(local_128, " return vec4(SRGBToLinear(texel.rgb), texel.a);\n");
        }
        std::operator<<(local_128, "}\n");
        str();
        std::basic_stringstream<char, std::char_traits<char>, BucketAllocatorSTL<char>>::~basic_stringstream(local_138);
        return this;
    }

} // namespace jag
