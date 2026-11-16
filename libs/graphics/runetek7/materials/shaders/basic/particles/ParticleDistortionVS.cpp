// libs/graphics/runetek7/materials/shaders/basic/particles/ParticleDistortionVS.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

namespace jag::graphics {
    class ParticleDistortionVS {
    public:
        // virtual methods in vtable order
        virtual ~ParticleDistortionVS();
        virtual GetSource(EffectManager const&, EffectList const&) const;
        ParticleDistortionVS();

        // data members, from how the methods use this: 40 bytes
        undefined** field_0; // offset 0, vtable pointer
        undefined8 field_8;  // offset 8
        undefined8 field_16; // offset 16
        undefined8 field_24; // offset 24
        undefined8 field_32; // offset 32
    };

    // 0x100022b10: the linker folded this into oldscape::option::ScriptOption<int, oldscape::option::DeviceOptionScriptID>::~ScriptOption(), which has identical code
    ParticleDistortionVS::~ParticleDistortionVS();

    // 0x10002a770: the linker folded this into void eastl::destruct<oldscape::rs2lib::CoordMapSquare*>(oldscape::rs2lib::CoordMapSquare*, oldscape::rs2lib::CoordMapSquare*), which has identical code
    ParticleDistortionVS::~ParticleDistortionVS();

    // 0x10004a690: the linker folded this into oldscape::option::ScriptOption<bool, oldscape::option::DeviceOptionScriptID>::~ScriptOption(), which has identical code
    ParticleDistortionVS::~ParticleDistortionVS();

    // 0x100897dc0, 128 bytes, base-object constructor, placed by class name and debug map
    // ParticleDistortionVS::ParticleDistortionVS()
    void ParticleDistortionVS::ParticleDistortionVS() {
        EffectList local_68[16];
        EffectList local_58[16];
        undefined1* local_48;
        undefined8 local_40;
        undefined2* local_38;
        undefined8 local_30;
        undefined2 local_23;
        undefined1 local_21;

        local_21 = 79;
        local_48 = &local_21;
        local_40 = 1;
        EffectList::EffectList(local_68, (initializer_list*)&local_48);
        local_23 = 26375;
        local_38 = &local_23;
        local_30 = 2;
        EffectList::EffectList(local_58, (initializer_list*)&local_38);
        new (this) ShaderSource(local_68, local_58);
        field_0 = &PTR__ScriptOption_100f177b0;
    }

    // 0x100897e40, 16 bytes, complete-object constructor, placed by class name and debug map
    // ParticleDistortionVS::ParticleDistortionVS(): jumps straight to the base-object constructor

    // 0x100897e50, 304 bytes, placed by class name and debug map
    // ParticleDistortionVS::GetSource(EffectManager const&, EffectList const&) const
    ParticleDistortionVS* ParticleDistortionVS::GetSource(EffectManager* param_1, EffectList* param_2) {
        ostream* poVar1;
        char* pcVar3;
        RT7VertexShaderSourceStream local_150[2];
        ViewTransformsFragment local_38[24];

        RT7VertexShaderSourceStream::RT7VertexShaderSourceStream(local_150);
        poVar1 = (ostream*)(local_150[0].field_0 + 16);
        std::operator<<(poVar1,
                        "attribute vec4 aParticleOrigin_CreationTime;\nattribute vec2 aParticleOffset;\nattribute vec4 "
                        "aVertexColour;\nattribute vec4 aMaterialSettingsSlotXY_Rotation;\nattribute vec4 "
                        "aParticleUVAnimationData;\nattribute vec3 aParticleVelocity;\n");
        local_38->BuildUniforms();
        std::operator<<(poVar1, (basic_string*)local_38);
        local_38->~basic_string();
        std::operator<<(poVar1, "uniform highp float uTextureAnimationTime;\nuniform highp mat4 uInvViewMatrix;\n");
        std::operator<<(poVar1, "out highp vec4 vWorldPosition;\nflat out vec4 vVertexAlbedo;\nflat out vec2 "
                                "vMaterialSettingsSlotXY;\nout vec4 vTextureUV;\nout float vUVInterpolationAmount;\n");
        if (EffectList::Contains() != '\0') {
            std::operator<<(poVar1, "out float vViewSpaceDepth;\n");
        }
        pcVar3 = (char*)shadersourceprovider::GetShaderString(47);
        std::operator<<(poVar1, pcVar3);
        str();
        local_150->~RT7VertexShaderSourceStream();
        return this;
    }

} // namespace jag::graphics
