// libs/graphics/shaderlib/utils/TextureCubeUtils.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics.shaderlib

#include "libs/hal/render/textures/TextureCube.h"

namespace jag {
    // 0x100bb34a0
    auto TextureCubeUtils::BuildFragment(bool arg1) {
        basic_ostream<char, std::char_traits<char> _> local_128;

        basic_stringstream<char, std::char_traits<char>, BucketAllocatorSTL<char>> local_138;
        auto str = graphics::shadersourceprovider::GetShaderString(7);
        std::operator<<(&local_128, str);
        std::operator<<(&local_128, "\nvec4 textureCubeSRGB(samplerCube sampler, vec3 reflDir)\n{\n   vec4 texel = "
                                    "textureCube(sampler, reflDir);\n");
        if (arg1) {
            std::operator<<(&local_128, " return texel;\n");
        } else {
            std::operator<<(&local_128, " return vec4(SRGBToLinear(texel.rgb), texel.a);\n");
        }
        std::operator<<(&local_128, "}\n");
        std::operator<<(&local_128, "\nvec4 textureCubeSRGB(samplerCube sampler, vec3 reflDir, float lod)\n{\n   vec4 "
                                    "texel = textureCube(sampler, reflDir, lod);\n");
        if (arg1) {
            std::operator<<(&local_128, " return texel;\n");
        } else {
            std::operator<<(&local_128, " return vec4(SRGBToLinear(texel.rgb), texel.a);\n");
        }
        std::operator<<(&local_128, "}\n");
        std::operator<<(&local_128, "\nvec4 textureCubeLodSRGB(samplerCube sampler, vec3 reflDir, float lod)\n{\n   "
                                    "vec4 texel = textureCubeLodCompat(sampler, reflDir, lod);\n");
        if (arg1) {
            std::operator<<(&local_128, " return texel;\n");
        } else {
            std::operator<<(&local_128, " return vec4(SRGBToLinear(texel.rgb), texel.a);\n");
        }
        std::operator<<(&local_128, "}\n");
        auto result = local_138.str();
        return result;
    }

} // namespace jag
