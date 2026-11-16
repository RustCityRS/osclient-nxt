// libs/graphics/runetek7/materials/shaders/basic/lightprobe/LightProbeFS.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

namespace jag::graphics {
    class LightProbeFS {
    public:
        // virtual methods in vtable order
        virtual ~LightProbeFS();
        virtual auto GetSource(const EffectManager& effectManager, const EffectList& effectList) const;
        LightProbeFS();

    private:
        uint64_t field_8;
        uint64_t field_16;
        uint64_t field_24;
        uint64_t field_32;
    };

    // 0x100022b10: LightProbeFS::~LightProbeFS() has the same machine code as oldscape::option::ScriptOption<int, oldscape::option::DeviceOptionScriptID>::~ScriptOption()

    // 0x10002a770: LightProbeFS::~LightProbeFS() has the same machine code as void eastl::destruct<oldscape::rs2lib::CoordMapSquare*>(oldscape::rs2lib::CoordMapSquare*, oldscape::rs2lib::CoordMapSquare*)

    // 0x1008945b0
    LightProbeFS::LightProbeFS() {
        EffectList local_58;
        uint8_t local_21 = 38;
        uint64_t local_30 = 1;
        EffectList local_48(&local_21);
        new (this) ShaderSource(local_58, local_48);
    }

    // 0x100894630
    auto LightProbeFS::GetSource(const EffectManager& effectManager, const EffectList& effectList) const {
        basic_ostream<char, std::char_traits<char> _>* basic_ostream;
        uint8_t local_150[280];
        ReturnValue local_38;

        new (local_150) RT7PixelShaderSourceStream(*this, effectList, 1, 1, 1, 1, 1, 1, 24);
        bool cVar1 = effectList.Contains(38);
        basic_ostream = (basic_ostream<char, std::char_traits<char> _>*)(local_150 + 16);
        std::operator<<(basic_ostream, "uniform samplerCube uGlobalEnvironmentMap;\n");
        if (cVar1) {
            local_38 = Irradiance::BuildUniforms();
            std::operator<<(basic_ostream,
                            (basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char> _>*)&local_38);
        }
        std::operator<<(basic_ostream, "in vec3 vInvViewDirection;\nin vec3 vNormal;\n");
        if (cVar1) {
            local_38.BuildFSFragment();
            std::operator<<(basic_ostream,
                            (basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char> _>*)&local_38);
        }
        std::operator<<(basic_ostream, "\nvoid main()\n{\n");
        std::operator<<(
            basic_ostream,
            "    vec3 envMapDirection = reflect(vInvViewDirection, vNormal);\n    envMapDirection.x = "
            "-envMapDirection.x;\n    envMapDirection.y = -envMapDirection.y;\n    vec4 fragColour = vec4(0.0, 0.0, "
            "0.0, 1.0);\n    fragColour.rgb = textureCube(uGlobalEnvironmentMap, envMapDirection).rgb;\n");
        if (!cVar1) {
            std::operator<<(basic_ostream, "    gl_FragColor = fragColour;\n");
        } else {
            std::operator<<(basic_ostream, " vec3 diffuseIrradiance = EvaluateSHLighting2ndOrder(vNormal, "
                                           "uIrradianceSHCoefs);\n gl_FragColor = vec4(diffuseIrradiance, 1.0);\n");
        }
        std::operator<<(basic_ostream, "}\n");
        auto result = local_150->str();
        return result;
    }

} // namespace jag::graphics
