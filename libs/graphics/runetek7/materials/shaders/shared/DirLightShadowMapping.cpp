// libs/graphics/runetek7/materials/shaders/shared/DirLightShadowMapping.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

namespace jag::graphics {
    class DirLightShadowMapping {
    public:
        DirLightShadowMapping();
        DirLightShadowMapping* BuildPreProcessor();
        DirLightShadowMapping* BuildUniforms();
        DirLightShadowMapping* BuildSharedFragment();
        DirLightShadowMapping* BuildFSFragment(ShadowMapFilter);

        // data members, from how the methods use this: 1 bytes
        char _unknown_0[1];
    };

    // 0x100853370, 16 bytes, base-object constructor, placed by class name and debug map
    // DirLightShadowMapping::DirLightShadowMapping()
    void DirLightShadowMapping::DirLightShadowMapping() {}

    // 0x100853380, 16 bytes, complete-object constructor, placed by class name and debug map
    // DirLightShadowMapping::DirLightShadowMapping(): jumps straight to the base-object constructor

    // 0x100853390, 80 bytes, placed by class name and debug map
    // DirLightShadowMapping::BuildPreProcessor()
    DirLightShadowMapping* DirLightShadowMapping::BuildPreProcessor() {
        MapArea* this_00;
        long lVar1;
        char* pcVar2;

        this_00 = (MapArea*)Instance();
        lVar1 = this_00->GetOrigin();
        pcVar2 = "\n#ifndef SHADOW_SAMPLER\n#define SHADOW_SAMPLER sampler2DShadow\n#endif\n";
        if (*(char*)(lVar1 + 182) == '\0') {
            pcVar2 = "\n#ifndef SHADOW_SAMPLER\n#define SHADOW_SAMPLER sampler2D\n#endif\n";
        }
        std::basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>>::basic_string<decltype(nullptr)>(
            (basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>>*)this, pcVar2);
        return this;
    }

    // 0x1008533e0, 352 bytes, placed by class name and debug map
    // DirLightShadowMapping::BuildUniforms()
    DirLightShadowMapping* DirLightShadowMapping::BuildUniforms() {
        ostream* poVar1;
        basic_stringstream<char, std::char_traits<char>, BucketAllocatorSTL<char>> local_148[16];
        ostream local_138[264];
        DirLightShadowMapping local_30[24];

        std::basic_stringstream<char, std::char_traits<char>, BucketAllocatorSTL<char>>::basic_stringstream(local_148);
        BuildPreProcessor(local_30);
        std::operator<<(local_138, (basic_string*)local_30);
        local_30->~basic_string();
        poVar1 = std::operator<<(local_138,
                                 "UNIFORM_BUFFER_BEGIN(SunlightShadows)\n   uniform highp vec4 "
                                 "uCascadeFrustumViewDepths;\n   uniform vec4 uMappingParams;\n   uniform highp vec4 "
                                 "uSunlightFadeAttenParams;\n   uniform highp vec4 uSunlightProjTexMatScale[");
        poVar1 = (ostream*)std::ostream::operator<<(poVar1, 4);
        poVar1 = std::operator<<(poVar1, "];\n   uniform highp vec4 uSunlightProjTexMatOffset[");
        poVar1 = (ostream*)std::ostream::operator<<(poVar1, 4);
        poVar1 = std::operator<<(poVar1, "];\n   uniform highp mat4 uSunlightViewProjTexMatrix[");
        poVar1 = (ostream*)std::ostream::operator<<(poVar1, 4);
        poVar1 = std::operator<<(poVar1, "];\n   uniform highp vec4 uCascadeWorldBoundingSpheres[");
        poVar1 = (ostream*)std::ostream::operator<<(poVar1, 4);
        poVar1 = std::operator<<(poVar1, "];\n   uniform highp vec4 uCascadeMinAtlasExtents[");
        poVar1 = (ostream*)std::ostream::operator<<(poVar1, 4);
        poVar1 = std::operator<<(poVar1, "];\n   uniform highp vec4 uCascadeMaxAtlasExtents[");
        poVar1 = (ostream*)std::ostream::operator<<(poVar1, 4);
        std::operator<<(poVar1,
                        "];\n   uniform vec4 uCascadeSplitSelectionFlags;\n   uniform vec3 uSunlightShadowsDummy;\n   "
                        "uniform highp float uLowShadowQualityDepth;\nUNIFORM_BUFFER_END\n");
        std::operator<<(
            local_138,
            "\nuniform SHADOW_SAMPLER uSunlightShadowMap;\nuniform sampler2D uSunlightShadowTranslucencyMap;\n");
        str();
        std::basic_stringstream<char, std::char_traits<char>, BucketAllocatorSTL<char>>::~basic_stringstream(local_148);
        return this;
    }

    // 0x1008535f0, 144 bytes, placed by class name and debug map
    // DirLightShadowMapping::BuildSharedFragment()
    DirLightShadowMapping* DirLightShadowMapping::BuildSharedFragment() {
        ostream* poVar1;
        basic_stringstream<char, std::char_traits<char>, BucketAllocatorSTL<char>> local_128[16];
        ostream local_118[264];

        std::basic_stringstream<char, std::char_traits<char>, BucketAllocatorSTL<char>>::basic_stringstream(local_128);
        poVar1 = std::operator<<(
            local_118,
            "\nint UnpackShadowCascadeIndex(const float cascadeIndex)\n{\n   return int((1.0 - cascadeIndex) * float(");
        poVar1 = (ostream*)std::ostream::operator<<(poVar1, 4);
        std::operator<<(poVar1, ") + 0.0625);\n}\n");
        str();
        std::basic_stringstream<char, std::char_traits<char>, BucketAllocatorSTL<char>>::~basic_stringstream(local_128);
        return this;
    }

    // 0x100853680, 336 bytes, placed by class name and debug map
    // DirLightShadowMapping::BuildFSFragment(ShadowMapFilter)
    DirLightShadowMapping* DirLightShadowMapping::BuildFSFragment(undefined4 param_2) {
        ostream* poVar1;
        char* pcVar2;
        basic_stringstream<char, std::char_traits<char>, BucketAllocatorSTL<char>> local_150[16];
        ostream local_140[264];
        render local_38;

        std::basic_stringstream<char, std::char_traits<char>, BucketAllocatorSTL<char>>::basic_stringstream(local_150);
        poVar1 = std::operator<<(local_140, "#define MAX_ATLAS_CASCADES ");
        poVar1 = (ostream*)std::ostream::operator<<(poVar1, 4);
        std::operator<<(poVar1, "\n");
        local_38.UndefineInOutGLSL();
        std::operator<<(local_140, (basic_string*)&local_38);
        local_38.~basic_string();
        local_38.BuildFragment(param_2);
        std::operator<<(local_140, (basic_string*)&local_38);
        local_38.~basic_string();
        BuildSharedFragment((DirLightShadowMapping*)&local_38);
        std::operator<<(local_140, (basic_string*)&local_38);
        local_38.~basic_string();
        pcVar2 = (char*)shadersourceprovider::GetShaderString(60);
        std::operator<<(local_140, pcVar2);
        local_38.DefineInOutGLSL();
        std::operator<<(local_140, (basic_string*)&local_38);
        local_38.~basic_string();
        str();
        std::basic_stringstream<char, std::char_traits<char>, BucketAllocatorSTL<char>>::~basic_stringstream(local_150);
        return this;
    }

} // namespace jag::graphics
