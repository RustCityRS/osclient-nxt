// libs/graphics/runetek7/materials/shaders/shared/DirLightShadowMapping.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

namespace jag::graphics {
    class DirLightShadowMapping {
    public:
        DirLightShadowMapping();
        auto BuildPreProcessor();
        auto BuildUniforms();
        auto BuildSharedFragment();
        auto BuildFSFragment(ShadowMapFilter shadowMapFilter);

        uint8_t _unknown_0[1];
    };

    // 0x100853370
    DirLightShadowMapping::DirLightShadowMapping() {}

    // 0x100853390
    auto DirLightShadowMapping::BuildPreProcessor() {
        auto result;

        long lVar1 = ((MapArea*)result.Instance())->GetOrigin();
        char* str = "\n#ifndef SHADOW_SAMPLER\n#define SHADOW_SAMPLER sampler2DShadow\n#endif\n";
        if (*(char*)(lVar1 + 182) == '\0') {
            str = "\n#ifndef SHADOW_SAMPLER\n#define SHADOW_SAMPLER sampler2D\n#endif\n";
        }
        result.basic_string<decltype(nullptr)>(str);
        return result;
    }

    // 0x1008533e0
    auto DirLightShadowMapping::BuildUniforms() {
        basic_ostream<char, std::char_traits<char> _> local_138;
        ReturnValue local_30;

        basic_stringstream<char, std::char_traits<char>, BucketAllocatorSTL<char>> local_148;
        BuildPreProcessor(&local_30);
        std::operator<<(&local_138, (basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char> _>*)&local_30);
        basic_ostream<char, std::char_traits<char> _>* pbVar1 = std::operator<<(
            &local_138, "UNIFORM_BUFFER_BEGIN(SunlightShadows)\n   uniform highp vec4 uCascadeFrustumViewDepths;\n   "
                        "uniform vec4 uMappingParams;\n   uniform highp vec4 uSunlightFadeAttenParams;\n   uniform "
                        "highp vec4 uSunlightProjTexMatScale[");
        pbVar1 = (basic_ostream<char, std::char_traits<char> _>*)std::ostream::operator<<((ostream*)pbVar1, 4);
        pbVar1 = std::operator<<(pbVar1, "];\n   uniform highp vec4 uSunlightProjTexMatOffset[");
        pbVar1 = (basic_ostream<char, std::char_traits<char> _>*)std::ostream::operator<<((ostream*)pbVar1, 4);
        pbVar1 = std::operator<<(pbVar1, "];\n   uniform highp mat4 uSunlightViewProjTexMatrix[");
        pbVar1 = (basic_ostream<char, std::char_traits<char> _>*)std::ostream::operator<<((ostream*)pbVar1, 4);
        pbVar1 = std::operator<<(pbVar1, "];\n   uniform highp vec4 uCascadeWorldBoundingSpheres[");
        pbVar1 = (basic_ostream<char, std::char_traits<char> _>*)std::ostream::operator<<((ostream*)pbVar1, 4);
        pbVar1 = std::operator<<(pbVar1, "];\n   uniform highp vec4 uCascadeMinAtlasExtents[");
        pbVar1 = (basic_ostream<char, std::char_traits<char> _>*)std::ostream::operator<<((ostream*)pbVar1, 4);
        pbVar1 = std::operator<<(pbVar1, "];\n   uniform highp vec4 uCascadeMaxAtlasExtents[");
        pbVar1 = (basic_ostream<char, std::char_traits<char> _>*)std::ostream::operator<<((ostream*)pbVar1, 4);
        std::operator<<(pbVar1,
                        "];\n   uniform vec4 uCascadeSplitSelectionFlags;\n   uniform vec3 uSunlightShadowsDummy;\n   "
                        "uniform highp float uLowShadowQualityDepth;\nUNIFORM_BUFFER_END\n");
        std::operator<<(
            &local_138,
            "\nuniform SHADOW_SAMPLER uSunlightShadowMap;\nuniform sampler2D uSunlightShadowTranslucencyMap;\n");
        auto result = local_148.str();
        return result;
    }

    // 0x1008535f0
    auto DirLightShadowMapping::BuildSharedFragment() {
        basic_ostream<char, std::char_traits<char> _> local_118;

        basic_stringstream<char, std::char_traits<char>, BucketAllocatorSTL<char>> local_128;
        basic_ostream<char, std::char_traits<char> _>* pbVar1 = std::operator<<(
            &local_118,
            "\nint UnpackShadowCascadeIndex(const float cascadeIndex)\n{\n   return int((1.0 - cascadeIndex) * float(");
        pbVar1 = (basic_ostream<char, std::char_traits<char> _>*)std::ostream::operator<<((ostream*)pbVar1, 4);
        std::operator<<(pbVar1, ") + 0.0625);\n}\n");
        auto result = local_128.str();
        return result;
    }

    // 0x100853680
    auto DirLightShadowMapping::BuildFSFragment(ShadowMapFilter shadowMapFilter) {
        basic_ostream<char, std::char_traits<char> _> local_140;

        basic_stringstream<char, std::char_traits<char>, BucketAllocatorSTL<char>> local_150;
        basic_ostream<char, std::char_traits<char> _>* pbVar1 =
            std::operator<<(&local_140, "#define MAX_ATLAS_CASCADES ");
        pbVar1 = (basic_ostream<char, std::char_traits<char> _>*)std::ostream::operator<<((ostream*)pbVar1, 4);
        std::operator<<(pbVar1, "\n");
        auto local_38 = render::UndefineInOutGLSL();
        std::operator<<(&local_140, (basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char> _>*)&local_38);
        local_38.BuildFragment(shadowMapFilter);
        std::operator<<(&local_140, (basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char> _>*)&local_38);
        BuildSharedFragment(&local_38);
        std::operator<<(&local_140, (basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char> _>*)&local_38);
        auto str = shadersourceprovider::GetShaderString(60);
        std::operator<<(&local_140, str);
        local_38 = render::DefineInOutGLSL();
        std::operator<<(&local_140, (basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char> _>*)&local_38);
        auto result = local_150.str();
        return result;
    }

} // namespace jag::graphics
