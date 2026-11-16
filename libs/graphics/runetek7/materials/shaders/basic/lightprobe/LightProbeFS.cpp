// libs/graphics/runetek7/materials/shaders/basic/lightprobe/LightProbeFS.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

namespace jag::graphics {
    class LightProbeFS {
    public:
        // virtual methods in vtable order
        virtual ~LightProbeFS();
        virtual GetSource(EffectManager const&, EffectList const&) const;
        LightProbeFS();

        // data members, from how the methods use this: 40 bytes
        undefined** field_0; // offset 0, vtable pointer
        undefined8 field_8;  // offset 8
        undefined8 field_16; // offset 16
        undefined8 field_24; // offset 24
        undefined8 field_32; // offset 32
    };

    // 0x100022b10: the linker folded this into oldscape::option::ScriptOption<int, oldscape::option::DeviceOptionScriptID>::~ScriptOption(), which has identical code
    LightProbeFS::~LightProbeFS();

    // 0x10002a770: the linker folded this into void eastl::destruct<oldscape::rs2lib::CoordMapSquare*>(oldscape::rs2lib::CoordMapSquare*, oldscape::rs2lib::CoordMapSquare*), which has identical code
    LightProbeFS::~LightProbeFS();

    // 0x10004a690: the linker folded this into oldscape::option::ScriptOption<bool, oldscape::option::DeviceOptionScriptID>::~ScriptOption(), which has identical code
    LightProbeFS::~LightProbeFS();

    // 0x1008945b0, 112 bytes, base-object constructor, placed by class name and debug map
    // LightProbeFS::LightProbeFS()
    void LightProbeFS::LightProbeFS() {
        EffectList local_58[16];
        EffectList local_48[16];
        undefined1* local_38;
        undefined8 local_30;
        undefined1 local_21;

        EffectList::EffectList(local_58);
        local_21 = 38;
        local_38 = &local_21;
        local_30 = 1;
        EffectList::EffectList(local_48, (initializer_list*)&local_38);
        new (this) ShaderSource(local_58, local_48);
        field_0 = &PTR__ScriptOption_100f17558;
    }

    // 0x100894620, 16 bytes, complete-object constructor, placed by class name and debug map
    // LightProbeFS::LightProbeFS(): jumps straight to the base-object constructor

    // 0x100894630, 384 bytes, placed by class name and debug map
    // LightProbeFS::GetSource(EffectManager const&, EffectList const&) const
    LightProbeFS* LightProbeFS::GetSource(EffectManager* param_1, EffectList* param_2) {
        ostream* poVar1;
        char cVar2;
        undefined1 local_150[280];
        Irradiance local_38[24];

        new (local_150) RT7PixelShaderSourceStream();
        cVar2 = EffectList::Contains();
        poVar1 = (ostream*)(local_150 + 16);
        std::operator<<(poVar1, "uniform samplerCube uGlobalEnvironmentMap;\n");
        if (cVar2 != '\0') {
            local_38->BuildUniforms();
            std::operator<<(poVar1, (basic_string*)local_38);
            local_38->~basic_string();
        }
        std::operator<<(poVar1, "in vec3 vInvViewDirection;\nin vec3 vNormal;\n");
        if (cVar2 != '\0') {
            local_38->BuildFSFragment();
            std::operator<<(poVar1, (basic_string*)local_38);
            local_38->~basic_string();
        }
        std::operator<<(poVar1, "\nvoid main()\n{\n");
        std::operator<<(
            poVar1, "    vec3 envMapDirection = reflect(vInvViewDirection, vNormal);\n    envMapDirection.x = "
                    "-envMapDirection.x;\n    envMapDirection.y = -envMapDirection.y;\n    vec4 fragColour = vec4(0.0, "
                    "0.0, 0.0, 1.0);\n    fragColour.rgb = textureCube(uGlobalEnvironmentMap, envMapDirection).rgb;\n");
        if (cVar2 == '\0') {
            std::operator<<(poVar1, "    gl_FragColor = fragColour;\n");
        } else {
            std::operator<<(poVar1, " vec3 diffuseIrradiance = EvaluateSHLighting2ndOrder(vNormal, "
                                    "uIrradianceSHCoefs);\n gl_FragColor = vec4(diffuseIrradiance, 1.0);\n");
        }
        std::operator<<(poVar1, "}\n");
        str();
        local_150->~RT7PixelShaderSourceStream();
        return this;
    }

} // namespace jag::graphics
