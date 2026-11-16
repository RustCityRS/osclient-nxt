// libs/graphics/runetek7/materials/shaders/basic/particles/ParticleOverdrawVS.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

namespace jag::graphics {
    class ParticleOverdrawVS {
    public:
        // virtual methods in vtable order
        virtual ~ParticleOverdrawVS();
        virtual GetSource(EffectManager const&, EffectList const&) const;
        ParticleOverdrawVS();

        // data members, from how the methods use this: 40 bytes
        undefined** field_0; // offset 0, vtable pointer
        undefined8 field_8;  // offset 8
        undefined8 field_16; // offset 16
        undefined8 field_24; // offset 24
        undefined8 field_32; // offset 32
    };

    // 0x100022b10: the linker folded this into oldscape::option::ScriptOption<int, oldscape::option::DeviceOptionScriptID>::~ScriptOption(), which has identical code
    ParticleOverdrawVS::~ParticleOverdrawVS();

    // 0x10002a770: the linker folded this into void eastl::destruct<oldscape::rs2lib::CoordMapSquare*>(oldscape::rs2lib::CoordMapSquare*, oldscape::rs2lib::CoordMapSquare*), which has identical code
    ParticleOverdrawVS::~ParticleOverdrawVS();

    // 0x10004a690: the linker folded this into oldscape::option::ScriptOption<bool, oldscape::option::DeviceOptionScriptID>::~ScriptOption(), which has identical code
    ParticleOverdrawVS::~ParticleOverdrawVS();

    // 0x100889b30, 128 bytes, base-object constructor, placed by class name and debug map
    // ParticleOverdrawVS::ParticleOverdrawVS()
    void ParticleOverdrawVS::ParticleOverdrawVS() {
        EffectList local_68[16];
        EffectList local_58[16];
        undefined1* local_48;
        undefined8 local_40;
        undefined1* local_38;
        undefined8 local_30;
        undefined1 local_22;
        undefined1 local_21;

        local_22 = 79;
        local_48 = &local_22;
        local_40 = 1;
        EffectList::EffectList(local_68, (initializer_list*)&local_48);
        local_21 = 79;
        local_38 = &local_21;
        local_30 = 1;
        EffectList::EffectList(local_58, (initializer_list*)&local_38);
        new (this) ShaderSource(local_68, local_58);
        field_0 = &PTR__ScriptOption_100f16d00;
    }

    // 0x100889bb0, 16 bytes, complete-object constructor, placed by class name and debug map
    // ParticleOverdrawVS::ParticleOverdrawVS(): jumps straight to the base-object constructor

    // 0x100889bc0, 256 bytes, placed by class name and debug map
    // ParticleOverdrawVS::GetSource(EffectManager const&, EffectList const&) const
    ParticleOverdrawVS* ParticleOverdrawVS::GetSource(EffectManager* param_1, EffectList* param_2) {
        ostream* poVar1;
        char* pcVar2;
        RT7VertexShaderSourceStream local_148[2];
        ViewTransformsFragment local_30[24];

        RT7VertexShaderSourceStream::RT7VertexShaderSourceStream(local_148);
        poVar1 = (ostream*)(local_148[0].field_0 + 16);
        std::operator<<(poVar1,
                        "\n                attribute vec4 aParticleOrigin_CreationTime;\n                attribute "
                        "vec2 aParticleOffset;\n                attribute vec4 aMaterialSettingsSlotXY_Rotation;\n     "
                        "           attribute vec4 aParticleUVAnimationData;\n                attribute vec3 "
                        "aParticleVelocity;\n                ");
        local_30->BuildUniforms();
        std::operator<<(poVar1, (basic_string*)local_30);
        local_30->~basic_string();
        std::operator<<(poVar1, "out highp vec4 vWorldPosition;\n");
        pcVar2 = (char*)shadersourceprovider::GetShaderString(50);
        std::operator<<(poVar1, pcVar2);
        str();
        local_148->~RT7VertexShaderSourceStream();
        return this;
    }

} // namespace jag::graphics
