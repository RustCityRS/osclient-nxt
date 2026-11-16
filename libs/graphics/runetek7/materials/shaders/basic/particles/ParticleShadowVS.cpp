// libs/graphics/runetek7/materials/shaders/basic/particles/ParticleShadowVS.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

namespace jag::graphics {
    class ParticleShadowVS {
    public:
        // virtual methods in vtable order
        virtual ~ParticleShadowVS();
        virtual GetSource(EffectManager const&, EffectList const&) const;
        ParticleShadowVS();

        // data members, from how the methods use this: 40 bytes
        undefined** field_0; // offset 0, vtable pointer
        undefined8 field_8;  // offset 8
        undefined8 field_16; // offset 16
        undefined8 field_24; // offset 24
        undefined8 field_32; // offset 32
    };

    // 0x100022b10: the linker folded this into oldscape::option::ScriptOption<int, oldscape::option::DeviceOptionScriptID>::~ScriptOption(), which has identical code
    ParticleShadowVS::~ParticleShadowVS();

    // 0x10002a770: the linker folded this into void eastl::destruct<oldscape::rs2lib::CoordMapSquare*>(oldscape::rs2lib::CoordMapSquare*, oldscape::rs2lib::CoordMapSquare*), which has identical code
    ParticleShadowVS::~ParticleShadowVS();

    // 0x10004a690: the linker folded this into oldscape::option::ScriptOption<bool, oldscape::option::DeviceOptionScriptID>::~ScriptOption(), which has identical code
    ParticleShadowVS::~ParticleShadowVS();

    // 0x100889f00, 128 bytes, base-object constructor, placed by class name and debug map
    // ParticleShadowVS::ParticleShadowVS()
    void ParticleShadowVS::ParticleShadowVS() {
        EffectList local_70[16];
        EffectList local_60[16];
        initializer_list<EffectType> local_50[16];
        undefined1* local_40;
        undefined8 local_38;
        undefined1 local_29;

        local_29 = 79;
        local_40 = &local_29;
        local_38 = 1;
        EffectList::EffectList(local_70, (initializer_list*)&local_40);
        std::initializer_list<EffectType>::initializer_list(local_50);
        EffectList::EffectList(local_60, local_50);
        new (this) ShaderSource(local_70, local_60);
        field_0 = &PTR__ScriptOption_100f16d50;
    }

    // 0x100889f90, 16 bytes, complete-object constructor, placed by class name and debug map
    // ParticleShadowVS::ParticleShadowVS(): jumps straight to the base-object constructor

    // 0x100889fa0, 272 bytes, placed by class name and debug map
    // ParticleShadowVS::GetSource(EffectManager const&, EffectList const&) const
    ParticleShadowVS* ParticleShadowVS::GetSource(EffectManager* param_1, EffectList* param_2) {
        ostream* poVar1;
        char* pcVar2;
        RT7VertexShaderSourceStream local_148[2];
        ViewTransformsFragment local_30[24];

        RT7VertexShaderSourceStream::RT7VertexShaderSourceStream(local_148);
        poVar1 = (ostream*)(local_148[0].field_0 + 16);
        std::operator<<(poVar1,
                        "attribute vec4 aParticleOrigin_CreationTime;\nattribute vec2 aParticleOffset;\nattribute vec4 "
                        "aVertexColour;\nattribute vec4 aMaterialSettingsSlotXY_Rotation;\nattribute vec4 "
                        "aParticleUVAnimationData;\nattribute vec3 aParticleVelocity;\n");
        local_30->BuildUniforms();
        std::operator<<(poVar1, (basic_string*)local_30);
        local_30->~basic_string();
        std::operator<<(poVar1, "uniform highp float uTextureAnimationTime;\n");
        std::operator<<(poVar1, "out vec4 vVertexAlbedo;\nout vec4 vTextureUV;\nout float "
                                "vUVInterpolationAmount;\nflat out vec2 vMaterialSettingsSlotXY;\n");
        pcVar2 = (char*)shadersourceprovider::GetShaderString(51);
        std::operator<<(poVar1, pcVar2);
        str();
        local_148->~RT7VertexShaderSourceStream();
        return this;
    }

} // namespace jag::graphics
