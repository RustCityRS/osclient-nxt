// libs/graphics/runetek7/materials/shaders/shared/PointLightShadowMapping.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

#include "PointLightShadowMapping.h"

namespace jag::graphics {
    // 0x100f43e14, 12 bytes, __data
    PointLightShadowMapping::m_diskFilter = {5, 0, 0};

    // 0x100854800, 16 bytes, base-object constructor, placed by class name and debug map
    // PointLightShadowMapping::PointLightShadowMapping()
    void PointLightShadowMapping::PointLightShadowMapping() {}

    // 0x100854810, 16 bytes, complete-object constructor, placed by class name and debug map
    // PointLightShadowMapping::PointLightShadowMapping(): jumps straight to the base-object constructor

    // 0x100854820, 96 bytes, placed by class name and debug map
    // PointLightShadowMapping::BuildPreProcessor()
    PointLightShadowMapping* PointLightShadowMapping::BuildPreProcessor() {
        MapArea* this_00;
        long lVar1;

        this_00 = (MapArea*)Instance();
        lVar1 = this_00->GetOrigin();
        if (*(char*)(lVar1 + 182) == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("RenderDevice::Instance().GetDeviceCaps().m_HardwarePCF",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "materials/shaders/shared/PointLightShadowMapping.cpp",
                      23, (char*)0);
        }
        std::basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>>::basic_string<decltype(nullptr)>(
            (basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>>*)this,
            "\n#ifndef SHADOW_SAMPLER\n#define SHADOW_SAMPLER sampler2DShadow\n#endif\n");
        return this;
    }

    // 0x100854880, 240 bytes, placed by class name and debug map
    // PointLightShadowMapping::BuildUniforms()
    PointLightShadowMapping* PointLightShadowMapping::BuildUniforms() {
        ostream* poVar1;
        basic_stringstream<char, std::char_traits<char>, BucketAllocatorSTL<char>> local_148[16];
        ostream local_138[264];
        PointLightShadowMapping local_30[24];

        std::basic_stringstream<char, std::char_traits<char>, BucketAllocatorSTL<char>>::basic_stringstream(local_148);
        BuildPreProcessor(local_30);
        std::operator<<(local_138, (basic_string*)local_30);
        local_30->~basic_string();
        std::operator<<(local_138,
                        "\nstruct CubeMapFaceUVExtents\n{\n    highp vec4 FaceUVExtentsPosX;\n    highp vec4 "
                        "FaceUVExtentsNegX;\n    highp vec4 FaceUVExtentsPosY;\n    highp vec4 FaceUVExtentsNegY;\n    "
                        "highp vec4 FaceUVExtentsPosZ;\n    highp vec4 FaceUVExtentsNegZ;\n};\n");
        std::operator<<(local_138, "\nstruct PointLightSMConsts\n{\n    highp vec4 EnabledFadeViewParams;\n    highp "
                                   "vec4 FilterBiasParams;\n    highp vec2 AtlasFaceUVScale;\n    highp vec2 "
                                   "AtlasFaceUVTexelSize;\n    CubeMapFaceUVExtents AtlasFaceUVExtents;\n};\n");
        poVar1 = std::operator<<(
            local_138, "\nUNIFORM_BUFFER_BEGIN(PointLightShadows)\n   uniform PointLightSMConsts uPointLightSMConsts[");
        poVar1 = (ostream*)std::ostream::operator<<(poVar1, 4);
        std::operator<<(poVar1, "];\nUNIFORM_BUFFER_END\n");
        std::operator<<(local_138, "\nuniform SHADOW_SAMPLER uPointLightShadowMap;\n\n");
        str();
        std::basic_stringstream<char, std::char_traits<char>, BucketAllocatorSTL<char>>::~basic_stringstream(local_148);
        return this;
    }

    // 0x100854970, 96 bytes, placed by class name and debug map
    // PointLightShadowMapping::BuildSharedFragment()
    PointLightShadowMapping* PointLightShadowMapping::BuildSharedFragment() {
        basic_stringstream<char, std::char_traits<char>, BucketAllocatorSTL<char>> local_130[280];

        std::basic_stringstream<char, std::char_traits<char>, BucketAllocatorSTL<char>>::basic_stringstream(local_130);
        str();
        std::basic_stringstream<char, std::char_traits<char>, BucketAllocatorSTL<char>>::~basic_stringstream(local_130);
        return this;
    }

    // 0x1008549d0, 320 bytes, placed by class name and debug map
    // PointLightShadowMapping::BuildFSFragment()
    PointLightShadowMapping* PointLightShadowMapping::BuildFSFragment() {
        ostream* poVar1;
        char* pcVar2;
        basic_stringstream<char, std::char_traits<char>, BucketAllocatorSTL<char>> local_148[16];
        ostream local_138[264];
        render local_30;

        std::basic_stringstream<char, std::char_traits<char>, BucketAllocatorSTL<char>>::basic_stringstream(local_148);
        poVar1 = std::operator<<(local_138, "#define MAX_SHADOW_CASTING_POINT_LIGHTS ");
        poVar1 = (ostream*)std::ostream::operator<<(poVar1, 4);
        std::operator<<(poVar1, "\n");
        local_30.UndefineInOutGLSL();
        std::operator<<(local_138, (basic_string*)&local_30);
        local_30.~basic_string();
        local_30.BuildFragment(m_diskFilter);
        std::operator<<(local_138, (basic_string*)&local_30);
        local_30.~basic_string();
        BuildSharedFragment((PointLightShadowMapping*)&local_30);
        std::operator<<(local_138, (basic_string*)&local_30);
        local_30.~basic_string();
        pcVar2 = (char*)shadersourceprovider::GetShaderString(81);
        std::operator<<(local_138, pcVar2);
        local_30.DefineInOutGLSL();
        std::operator<<(local_138, (basic_string*)&local_30);
        local_30.~basic_string();
        str();
        std::basic_stringstream<char, std::char_traits<char>, BucketAllocatorSTL<char>>::~basic_stringstream(local_148);
        return this;
    }

} // namespace jag::graphics
