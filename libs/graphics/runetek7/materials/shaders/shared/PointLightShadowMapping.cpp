// libs/graphics/runetek7/materials/shaders/shared/PointLightShadowMapping.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

#include "PointLightShadowMapping.h"

namespace jag::graphics {
    // 0x100f43e14
    int32_t PointLightShadowMapping::m_diskFilter[3] = {5, 0, 0};

    // 0x100854800
    PointLightShadowMapping::PointLightShadowMapping() {}

    // 0x100854820
    auto PointLightShadowMapping::BuildPreProcessor() {
        auto result;

        long lVar1 = ((MapArea*)result.Instance())->GetOrigin();
        if (*(char*)(lVar1 + 182) == '\0') {
            LogAssert("RenderDevice::Instance().GetDeviceCaps().m_HardwarePCF",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "materials/shaders/shared/PointLightShadowMapping.cpp",
                      23, nullptr);
        }
        result.basic_string<decltype(nullptr)>(
            "\n#ifndef SHADOW_SAMPLER\n#define SHADOW_SAMPLER sampler2DShadow\n#endif\n");
        return result;
    }

    // 0x100854880
    auto PointLightShadowMapping::BuildUniforms() {
        basic_ostream<char, std::char_traits<char> _> local_138;
        ReturnValue local_30;

        basic_stringstream<char, std::char_traits<char>, BucketAllocatorSTL<char>> local_148;
        BuildPreProcessor(&local_30);
        std::operator<<(&local_138, (basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char> _>*)&local_30);
        std::operator<<(&local_138,
                        "\nstruct CubeMapFaceUVExtents\n{\n    highp vec4 FaceUVExtentsPosX;\n    highp vec4 "
                        "FaceUVExtentsNegX;\n    highp vec4 FaceUVExtentsPosY;\n    highp vec4 FaceUVExtentsNegY;\n    "
                        "highp vec4 FaceUVExtentsPosZ;\n    highp vec4 FaceUVExtentsNegZ;\n};\n");
        std::operator<<(&local_138, "\nstruct PointLightSMConsts\n{\n    highp vec4 EnabledFadeViewParams;\n    highp "
                                    "vec4 FilterBiasParams;\n    highp vec2 AtlasFaceUVScale;\n    highp vec2 "
                                    "AtlasFaceUVTexelSize;\n    CubeMapFaceUVExtents AtlasFaceUVExtents;\n};\n");
        basic_ostream<char, std::char_traits<char> _>* pbVar1 = std::operator<<(
            &local_138,
            "\nUNIFORM_BUFFER_BEGIN(PointLightShadows)\n   uniform PointLightSMConsts uPointLightSMConsts[");
        pbVar1 = (basic_ostream<char, std::char_traits<char> _>*)std::ostream::operator<<((ostream*)pbVar1, 4);
        std::operator<<(pbVar1, "];\nUNIFORM_BUFFER_END\n");
        std::operator<<(&local_138, "\nuniform SHADOW_SAMPLER uPointLightShadowMap;\n\n");
        auto result = local_148.str();
        return result;
    }

    // 0x100854970
    auto PointLightShadowMapping::BuildSharedFragment() {
        basic_stringstream<char, std::char_traits<char>, BucketAllocatorSTL<char>> local_130;
        auto result = local_130.str();
        return result;
    }

    // 0x1008549d0
    auto PointLightShadowMapping::BuildFSFragment() {
        basic_ostream<char, std::char_traits<char> _> local_138;

        basic_stringstream<char, std::char_traits<char>, BucketAllocatorSTL<char>> local_148;
        basic_ostream<char, std::char_traits<char> _>* pbVar1 =
            std::operator<<(&local_138, "#define MAX_SHADOW_CASTING_POINT_LIGHTS ");
        pbVar1 = (basic_ostream<char, std::char_traits<char> _>*)std::ostream::operator<<((ostream*)pbVar1, 4);
        std::operator<<(pbVar1, "\n");
        auto local_30 = render::UndefineInOutGLSL();
        std::operator<<(&local_138, (basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char> _>*)&local_30);
        local_30.BuildFragment(m_diskFilter);
        std::operator<<(&local_138, (basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char> _>*)&local_30);
        BuildSharedFragment(&local_30);
        std::operator<<(&local_138, (basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char> _>*)&local_30);
        auto str = shadersourceprovider::GetShaderString(81);
        std::operator<<(&local_138, str);
        local_30 = render::DefineInOutGLSL();
        std::operator<<(&local_138, (basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char> _>*)&local_30);
        auto result = local_148.str();
        return result;
    }

} // namespace jag::graphics
