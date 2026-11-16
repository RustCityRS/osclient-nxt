// libs/graphics/runetek7/materials/shaders/basic/water/WaterFS.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

namespace jag::graphics {
    class WaterFS {
    public:
        // virtual methods in vtable order
        virtual ~WaterFS();
        virtual WaterFS* GetSource(const EffectManager& effectManager, const EffectList& effectList) const;
        WaterFS();

    private:
        uint64_t field_8;
        uint64_t field_16;
        uint64_t field_24;
        uint64_t field_32;
        uint8_t _unknown_40[8];
    };

    // 0x100022b10: WaterFS::~WaterFS() has the same machine code as oldscape::option::ScriptOption<int, oldscape::option::DeviceOptionScriptID>::~ScriptOption()

    // 0x10002a770: WaterFS::~WaterFS() has the same machine code as void eastl::destruct<oldscape::rs2lib::CoordMapSquare*>(oldscape::rs2lib::CoordMapSquare*, oldscape::rs2lib::CoordMapSquare*)

    // 0x10088c4f0
    WaterFS::WaterFS() {
        uint8_t local_49 = 79;
        uint64_t local_68 = 1;
        EffectList local_90(&local_49);
        uint64_t uStack_38 = 439787742000;
        uint64_t uStack_33 = 4984971505694169401;
        uint64_t local_48 = 7740030898606833665;
        uint64_t uStack_40 = 137961026412;
        uint32_t local_3b = 2433569;
        uint64_t local_58 = 29;
        EffectList local_80(&local_48);
        new (this) ShaderSource(local_90, local_80);
        new (&field_40) TextureAtlasLookup();
    }

    // 0x10088c5d0
    WaterFS* WaterFS::GetSource(const EffectManager& effectManager, const EffectList& effectList) const {
        basic_ostream<char, std::char_traits<char> _>* basic_ostream;
        char* pcVar5;
        basic_ostream<char, std::char_traits<char> _>* basic_ostream_00;
        EffectList* in_RCX;
        uint8_t local_170[280];
        uint32_t local_4c;

        bool cVar1 = in_RCX->Contains(98);
        if (!cVar1) {
            LogAssert("requestedEffects.Contains(EffectType::WATER_COMMON)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "materials/shaders/basic/water/WaterFS.cpp",
                      66, nullptr);
        }
        new (local_170) RT7PixelShaderSourceStream(effectManager, *in_RCX, 2, 1, 1, 1, 1, 1, 24);
        cVar1 = in_RCX->Contains(29);
        bool cVar2 = in_RCX->Contains(30);
        if (!cVar1) {
            local_4c = 0;
        } else {
            local_4c = in_RCX->Contains(48);
        }
        EffectList* this_01 = in_RCX;
        cVar1 = in_RCX->Contains(87);
        long lVar4 = ((MapArea*)this_01->Instance())->GetOrigin();
        bool arg1 = *(bool*)(lVar4 + 147);
        auto local_48 = DebugReturn::BuildUniforms();
        basic_ostream = (basic_ostream<char, std::char_traits<char> _>*)(local_170 + 16);
        std::operator<<(basic_ostream,
                        (basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char> _>*)&local_48);
        local_48.BuildUniforms();
        std::operator<<(basic_ostream,
                        (basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char> _>*)&local_48);
        local_48 = DirLights::BuildUniforms();
        std::operator<<(basic_ostream,
                        (basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char> _>*)&local_48);
        local_48 = WaterCommonShaderEffect::BuildDefines();
        std::operator<<(basic_ostream,
                        (basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char> _>*)&local_48);
        local_48 = WaterCommonShaderEffect::BuildUniforms();
        std::operator<<(basic_ostream,
                        (basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char> _>*)&local_48);
        if (in_RCX->Contains(107)) {
            std::operator<<(basic_ostream, "uniform sampler2D uReflectionMap;\n");
        }
        if (in_RCX->Contains(108)) {
            pcVar5 = shadersourceprovider::GetShaderString(83);
            std::operator<<(basic_ostream, pcVar5);
        }
        if (cVar1) {
            pcVar5 = shadersourceprovider::GetShaderString(58);
            std::operator<<(basic_ostream, pcVar5);
        }
        cVar1 = in_RCX->Contains(51);
        if (cVar1) {
            std::operator<<(basic_ostream, "uniform samplerCube uGlobalEnvironmentMap;\n");
        }
        cVar1 = in_RCX->Contains(99);
        if (cVar1) {
            std::operator<<(basic_ostream, "uniform sampler2D uWaterNormalMapTexture0;\nuniform sampler2D "
                                           "uWaterNormalMapTexture1;\nuniform sampler2D uWaterNormalMapTexture2;\n");
        }
        cVar1 = in_RCX->Contains(102);
        if (cVar1) {
            std::operator<<(
                basic_ostream,
                "uniform sampler2D uWaterEmissiveMapTexture;\nuniform vec4 "
                "uWaterEmissiveColourEmissiveSource;\nuniform vec4 "
                "uEmissiveScale_MapRefractionDepth_EmissiveMapMode_EmissiveMapExists;\nuniform vec4 "
                "uEmissiveFlowSpeed_EmissiveFlowRotation_EmissiveUVScale;\nuniform float uEmissiveBlend;\n");
        }
        cVar1 = in_RCX->Contains(100);
        if (cVar1) {
            std::operator<<(basic_ostream, "uniform sampler2D uWaterTextureFoam;\n");
        }
        cVar1 = in_RCX->Contains(45);
        if (cVar1) {
            std::operator<<(basic_ostream,
                            "layout(binding = 0, r32ui) restrict uniform highp uimage2D uCausticsIntegerMap;\n");
        }
        cVar1 = in_RCX->Contains(46);
        if (cVar1) {
            std::operator<<(basic_ostream, "uniform highp usampler2D uCausticsMap;\n");
        }
        cVar1 = in_RCX->Contains(99);
        if (cVar1) {
            std::operator<<(basic_ostream, "UNIFORM_BUFFER_BEGIN(WaterNormalMapSamplingParams)\n   uniform highp vec4 "
                                           "uSampleWeight_uvDistortion_sparezw[3];\n   uniform highp vec4 "
                                           "uMacroSampleWeight_uvDistortion_sparezw[3];\n   uniform highp vec4 "
                                           "uWaterStillWaterNormalStrength_spareyzw;\nUNIFORM_BUFFER_END\n");
        }
        cVar1 = in_RCX->Contains(45);
        if (!cVar1) {
            cVar1 = in_RCX->Contains(46);
            if (cVar1)
                goto LAB_10088c8bd;
        } else {
        LAB_10088c8bd:
            std::operator<<(basic_ostream,
                            "uniform highp vec2 uCausticsMapSize;\nuniform highp vec2 "
                            "uCausticsComputeResolution;\nuniform highp float uCausticsScale;\nuniform highp float "
                            "uCausticsRefractionScale;\nuniform highp vec4 uCausticsFade;\n");
        }
        cVar1 = in_RCX->Contains(101);
        if (cVar1) {
            std::operator<<(basic_ostream,
                            "uniform vec3 uWaterExtinctionRGBDepthMetres;\nuniform vec3 "
                            "uWaterExtinctionOpaqueWaterColour;\nuniform float "
                            "uWaterExtinctionVisibilityMetres;\nuniform mat4 uSceneInvViewProjMatrix;\n");
        }
        std::operator<<(basic_ostream, "uniform vec4 uWaterNormalBRDFParams;\n");
        std::operator<<(basic_ostream, "uniform vec3 uWaterSpecularColour;\n");
        if (cVar2) {
            local_48 = DirLightShadowMapping::BuildUniforms();
            std::operator<<(basic_ostream,
                            (basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char> _>*)&local_48);
        }
        cVar1 = in_RCX->Contains(100);
        if (cVar1) {
            std::operator<<(basic_ostream, "uniform highp vec2 uWaterFoamScaleFoamDepth;\n");
        }
        cVar1 = in_RCX->Contains(107);
        if (!cVar1) {
            cVar1 = in_RCX->Contains(108);
            if (cVar1)
                goto LAB_10088c980;
            cVar1 = in_RCX->Contains(51);
            if (cVar1)
                goto LAB_10088c980;
        } else {
        LAB_10088c980:
            std::operator<<(
                basic_ostream,
                "uniform float uWaterReflectionMapContribution;\nuniform float uWaterReflectionStrength;\n");
        }
        cVar1 = in_RCX->Contains(58);
        if (cVar1) {
            std::operator<<(
                basic_ostream,
                "uniform vec3 uDepthFogRGB;\nuniform float uDepthFogStartY;\nuniform float uDepthFogEndY;\n");
        }
        if ((char)local_4c == '\0') {
            cVar1 = in_RCX->Contains(57);
            if (cVar1)
                goto LAB_10088c9c6;
        } else {
        LAB_10088c9c6:
            pcVar5 = shadersourceprovider::GetShaderString(68);
            std::operator<<(basic_ostream, pcVar5);
        }
        cVar1 = WaterCommonShaderEffect::UseGLES2CompatMode();
        if (!cVar1) {
            std::operator<<(basic_ostream,
                            "in highp vec4 vPosition_WaterDepth;\nin vec4 vColour;\nin highp vec4 "
                            "vFlowControlMask_ViewSpaceDepth;\nin highp vec4 vNoisyPatchFlow0_NoisyPatchFlow1;\nin "
                            "highp vec4 vNoisyPatchFlow2_UVPack_NormalsFlow0Map0;\nin highp vec4 "
                            "vUVPack_NormalsFlow0Map1_NormalsFlow0Map2;\nin highp vec4 "
                            "vUVPack_NormalsFlow1Map0_NormalsFlow1Map1;\nin highp vec4 "
                            "vUVPack_NormalsFlow1Map2_NormalsFlow2Map0;\nin highp vec4 "
                            "vUVPack_NormalsFlow2Map1_NormalsFlow2Map2;\nin highp vec4 "
                            "vUVPack_NormalMapMacroUV_EmissiveUV[3];\nin highp vec2 vUVPack_FoamUV;\n");
        } else {
            std::operator<<(basic_ostream,
                            "in highp vec4 vPosition_WaterDepth;\nin vec4 vColour;\nin highp vec4 "
                            "vFlowControlMask_ViewSpaceDepth;\nin highp vec4 vNoisyPatchFlow0_NoisyPatchFlow1;\nin "
                            "highp vec4 vNoisyPatchFlow2_UVPack_NormalsFlow0Map0;\nin highp vec4 "
                            "vUVPack_NormalsFlow1Map0_NormalsFlow2Map0;\n");
        }
        local_48 = TextureCubeUtils::BuildFragment(arg1);
        std::operator<<(basic_ostream,
                        (basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char> _>*)&local_48);
        if (cVar2) {
            basic_ostream_00 = std::operator<<(basic_ostream, "UNIFORM_BUFFER_BEGIN(SunlightViewTransform)\n   uniform "
                                                              "highp mat4 uSunlightViewMatrix;\nUNIFORM_BUFFER_END\n");
            local_48 = DirLightShadowMapping::BuildFSFragment(5);
            std::operator<<(basic_ostream_00,
                            (basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char> _>*)&local_48);
        }
        if ((char)local_4c == '\0') {
            cVar1 = in_RCX->Contains(57);
            if (!cVar1)
                goto LAB_10088ca8b;
        }
        pcVar5 = shadersourceprovider::GetShaderString(67);
        std::operator<<(basic_ostream, pcVar5);
    LAB_10088ca8b:
        pcVar5 = shadersourceprovider::GetShaderString(111);
        std::operator<<(basic_ostream, pcVar5);
        *this = local_170->str();
        return this;
    }

} // namespace jag::graphics
