// libs/graphics/runetek7/materials/shaders/basic/water/WaterVS.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

namespace jag::graphics {
    class WaterVS {
    public:
        // virtual methods in vtable order
        virtual ~WaterVS();
        virtual WaterVS* GetSource(const EffectManager& effectManager, const EffectList& effectList) const;
        WaterVS();

    private:
        uint64_t field_8;
        uint64_t field_16;
        uint64_t field_24;
        uint64_t field_32;
    };

    // 0x100022b10: WaterVS::~WaterVS() has the same machine code as oldscape::option::ScriptOption<int, oldscape::option::DeviceOptionScriptID>::~ScriptOption()

    // 0x10002a770: WaterVS::~WaterVS() has the same machine code as void eastl::destruct<oldscape::rs2lib::CoordMapSquare*>(oldscape::rs2lib::CoordMapSquare*, oldscape::rs2lib::CoordMapSquare*)

    // 0x10088cb20
    WaterVS::WaterVS() {
        uint16_t local_4a = 25167;
        uint64_t local_68 = 2;
        EffectList local_90(&local_4a);
        uint64_t local_48 = 2186312932159135006;
        uint64_t uStack_40 = 12997486438326303;
        uint32_t uStack_39 = 845571171;
        uint64_t local_58 = 19;
        EffectList local_80(&local_48);
        new (this) ShaderSource(local_90, local_80);
    }

    // 0x10088cbf0
    WaterVS* WaterVS::GetSource(const EffectManager& effectManager, const EffectList& effectList) const {
        basic_ostream<char, std::char_traits<char> _>* basic_ostream;
        uint8_t bVar3;
        basic_ostream<char, std::char_traits<char> _>* basic_ostream_00;
        char* pcVar4;
        EffectList* in_RCX;
        uint8_t local_178[280];
        uint32_t local_54;

        bool cVar1 = in_RCX->Contains(98);
        if (!cVar1) {
            LogAssert("requestedEffects.Contains(EffectType::WATER_COMMON)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "materials/shaders/basic/water/WaterVS.cpp",
                      53, nullptr);
        }
        new (local_178) RT7VertexShaderSourceStream(effectManager, *in_RCX, 2, 2, 1, 1, 1, 1, 24);
        uint8_t bVar2 = in_RCX->Contains(29);
        if (bVar2 == 0) {
            bVar3 = 0;
        } else {
            bVar3 = in_RCX->Contains(48);
        }
        char local_31 = in_RCX->Contains(87);
        cVar1 = in_RCX->Contains(30);
        if (!cVar1) {
            local_54 = 0;
        } else {
            local_54 = in_RCX->Contains(50);
        }
        auto local_50 = WaterCommonShaderEffect::BuildDefines();
        basic_ostream = (basic_ostream<char, std::char_traits<char> _>*)(local_178 + 16);
        std::operator<<(basic_ostream,
                        (basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char> _>*)&local_50);
        local_50 = WaterCommonShaderEffect::BuildUniforms();
        std::operator<<(basic_ostream,
                        (basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char> _>*)&local_50);
        cVar1 = in_RCX->Contains(102);
        if (cVar1) {
            std::operator<<(basic_ostream,
                            "uniform vec4 uEmissiveFlowSpeed_EmissiveFlowRotation_EmissiveUVScale;\nuniform vec2 "
                            "uEmissiveMapScale_EmissiveUVMode;\n");
        }
        cVar1 = in_RCX->Contains(99);
        if (cVar1) {
            std::operator<<(basic_ostream,
                            "struct NormalMapTexCoordParams\n{\n   highp vec4 flowSpeed_spareyzw;\n   highp vec4 "
                            "uvScale_uvOffset;\n   highp mat2 uvRotation;\n   highp mat2 "
                            "flowRotation;\n};\nUNIFORM_BUFFER_BEGIN(WaterNormalMapTexCoordParams)\n   uniform "
                            "NormalMapTexCoordParams uWaterNormalMapTexCoordParams[3];\n   uniform "
                            "NormalMapTexCoordParams uWaterNormalMapMacroTexCoordParams[3];\nUNIFORM_BUFFER_END\n");
        }
        std::operator<<(basic_ostream, "uniform mat4 uModelMatrix;\n");
        local_50.BuildUniforms();
        std::operator<<(basic_ostream,
                        (basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char> _>*)&local_50);
        if ((bVar2 | bVar3) == 1) {
            local_50 = DirLights::BuildUniforms();
            std::operator<<(basic_ostream,
                            (basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char> _>*)&local_50);
        }
        if ((char)local_54 != '\0') {
            basic_ostream_00 = std::operator<<(basic_ostream, "UNIFORM_BUFFER_BEGIN(SunlightViewTransform)\n   uniform "
                                                              "mat4 uSunlightViewMatrix;\nUNIFORM_BUFFER_END\n");
            local_50 = DirLightShadowMapping::BuildUniforms();
            std::operator<<(basic_ostream_00,
                            (basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char> _>*)&local_50);
        }
        if (bVar3 != 0) {
            pcVar4 = shadersourceprovider::GetShaderString(70);
            std::operator<<(basic_ostream, pcVar4);
        }
        if (local_31 != '\0') {
            pcVar4 = shadersourceprovider::GetShaderString(58);
            std::operator<<(basic_ostream, pcVar4);
        }
        cVar1 = in_RCX->Contains(45);
        if (!cVar1) {
            cVar1 = in_RCX->Contains(46);
            if (cVar1)
                goto LAB_10088ce46;
        } else {
        LAB_10088ce46:
            std::operator<<(basic_ostream, "uniform float uCausticsPlaneHeight;\n");
        }
        cVar1 = WaterCommonShaderEffect::UseGLES2CompatMode();
        if (!cVar1) {
            std::operator<<(
                basic_ostream,
                "out highp vec4 vPosition_WaterDepth;\nout vec4 vColour;\nout highp vec4 "
                "vFlowControlMask_ViewSpaceDepth;\nout highp vec4 vNoisyPatchFlow0_NoisyPatchFlow1;\nout highp vec4 "
                "vNoisyPatchFlow2_UVPack_NormalsFlow0Map0;\nout highp vec4 "
                "vUVPack_NormalsFlow0Map1_NormalsFlow0Map2;\nout highp vec4 "
                "vUVPack_NormalsFlow1Map0_NormalsFlow1Map1;\nout highp vec4 "
                "vUVPack_NormalsFlow1Map2_NormalsFlow2Map0;\nout highp vec4 vUVPack_NormalsFlow2Map1_NormalsFlow2Map2; "
                "\nout highp vec4 vUVPack_NormalMapMacroUV_EmissiveUV[3];\nout highp vec2 vUVPack_FoamUV;\n");
        } else {
            std::operator<<(basic_ostream,
                            "out highp vec4 vPosition_WaterDepth;\nout vec4 vColour;\nout highp vec4 "
                            "vFlowControlMask_ViewSpaceDepth;\nout highp vec4 vNoisyPatchFlow0_NoisyPatchFlow1;\nout "
                            "highp vec4 vNoisyPatchFlow2_UVPack_NormalsFlow0Map0;\nout highp vec4 "
                            "vUVPack_NormalsFlow1Map0_NormalsFlow2Map0;\n");
        }
        if (bVar3 == 0) {
            cVar1 = in_RCX->Contains(57);
            if (!cVar1)
                goto LAB_10088cea9;
        }
        pcVar4 = shadersourceprovider::GetShaderString(71);
        std::operator<<(basic_ostream, pcVar4);
    LAB_10088cea9:
        if (bVar3 != 0) {
            pcVar4 = shadersourceprovider::GetShaderString(69);
            std::operator<<(basic_ostream, pcVar4);
        }
        if ((char)local_54 != '\0') {
            local_50 = DirLightShadowMapping::BuildFSFragment(5);
            std::operator<<(basic_ostream,
                            (basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char> _>*)&local_50);
        }
        pcVar4 = shadersourceprovider::GetShaderString(112);
        std::operator<<(basic_ostream, pcVar4);
        *this = local_178->str();
        return this;
    }

} // namespace jag::graphics
