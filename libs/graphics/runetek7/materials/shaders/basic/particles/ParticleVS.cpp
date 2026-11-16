// libs/graphics/runetek7/materials/shaders/basic/particles/ParticleVS.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

namespace jag::graphics {
    class ParticleVS {
    public:
        // virtual methods in vtable order
        virtual ~ParticleVS();
        virtual GetSource(EffectManager const&, EffectList const&) const;
        ParticleVS();

        // data members, from how the methods use this: 40 bytes
        undefined** field_0; // offset 0, vtable pointer
        undefined8 field_8;  // offset 8
        undefined8 field_16; // offset 16
        undefined8 field_24; // offset 24
        undefined8 field_32; // offset 32
    };

    // 0x100022b10: the linker folded this into oldscape::option::ScriptOption<int, oldscape::option::DeviceOptionScriptID>::~ScriptOption(), which has identical code
    ParticleVS::~ParticleVS();

    // 0x10002a770: the linker folded this into void eastl::destruct<oldscape::rs2lib::CoordMapSquare*>(oldscape::rs2lib::CoordMapSquare*, oldscape::rs2lib::CoordMapSquare*), which has identical code
    ParticleVS::~ParticleVS();

    // 0x10004a690: the linker folded this into oldscape::option::ScriptOption<bool, oldscape::option::DeviceOptionScriptID>::~ScriptOption(), which has identical code
    ParticleVS::~ParticleVS();

    // 0x10088a0b0, 192 bytes, base-object constructor, placed by class name and debug map
    // ParticleVS::ParticleVS()
    void ParticleVS::ParticleVS() {
        EffectList local_78[16];
        EffectList local_68[16];
        undefined1* local_58;
        undefined8 local_50;
        undefined8* local_48;
        undefined8 local_40;
        undefined1 local_37;
        undefined8 local_36;
        undefined4 local_2e;
        undefined2 local_2a;
        long local_28;

        local_28 = *(long*)PTR____stack_chk_guard_100ee9d98;
        local_37 = 79;
        local_58 = &local_37;
        local_50 = 1;
        EffectList::EffectList(local_78, (initializer_list*)&local_58);
        local_36 = 7660457383239823389;
        local_2e = 555753246;
        local_2a = 7202;
        local_48 = &local_36;
        local_40 = 14;
        EffectList::EffectList(local_68, (initializer_list*)&local_48);
        new (this) ShaderSource(local_78, local_68);
        field_0 = &PTR__ScriptOption_100f16d78;
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_28) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x10088a170, 16 bytes, complete-object constructor, placed by class name and debug map
    // ParticleVS::ParticleVS(): jumps straight to the base-object constructor

    // 0x10088a180, 768 bytes, placed by class name and debug map
    // ParticleVS::GetSource(EffectManager const&, EffectList const&) const
    ParticleVS* ParticleVS::GetSource(EffectManager* param_1, EffectList* param_2) {
        ostream* poVar1;
        byte bVar2;
        char cVar3;
        byte bVar4;
        char cVar5;
        char* pcVar6;
        RT7VertexShaderSourceStream local_178[2];
        ostream* local_60;
        ViewTransformsFragment local_50[30];
        char local_32;
        byte local_31;

        RT7VertexShaderSourceStream::RT7VertexShaderSourceStream(local_178);
        bVar2 = EffectList::Contains();
        cVar3 = EffectList::Contains();
        local_32 = EffectList::Contains();
        bVar4 = EffectList::Contains();
        local_31 = EffectList::Contains();
        poVar1 = (ostream*)(local_178[0].field_0 + 16);
        std::operator<<(poVar1,
                        "attribute vec4 aParticleOrigin_CreationTime;\nattribute vec2 aParticleOffset;\nattribute vec4 "
                        "aVertexColour;\nattribute vec4 aMaterialSettingsSlotXY_Rotation;\nattribute vec4 "
                        "aParticleUVAnimationData;\nattribute vec3 aParticleVelocity;\n");
        local_50->BuildUniforms();
        std::operator<<(poVar1, (basic_string*)local_50);
        local_50->~basic_string();
        std::operator<<(poVar1, "uniform highp float uTextureAnimationTime;\nuniform highp mat4 uInvViewMatrix;\n");
        if (bVar2 != 0) {
            pcVar6 = (char*)shadersourceprovider::GetShaderString(70);
            std::operator<<(poVar1, pcVar6);
        }
        if (local_31 != 0) {
            pcVar6 = (char*)shadersourceprovider::GetShaderString(62);
            std::operator<<(poVar1, pcVar6);
        }
        if (cVar3 != '\0') {
            if (local_32 == '\0') {
                local_60 = std::operator<<(poVar1, "UNIFORM_BUFFER_BEGIN(SunlightViewTransform)\n   uniform mat4 "
                                                   "uSunlightViewMatrix;\nUNIFORM_BUFFER_END\n");
                local_50->BuildUniforms();
                std::operator<<(local_60, (basic_string*)local_50);
                local_50->~basic_string();
            } else {
                std::operator<<(poVar1, "uniform sampler2D uShadowBuffer;\n");
            }
        }
        if ((bVar4 | bVar2) == 1) {
            local_50->BuildUniforms();
            std::operator<<(poVar1, (basic_string*)local_50);
            local_50->~basic_string();
        }
        std::operator<<(
            poVar1,
            "out highp vec4 vWorldPosition;\nflat out vec4 vVertexAlbedo;\nflat out vec2 vMaterialSettingsSlotXY;\nout "
            "vec4 vTextureUV;\nout float vUVInterpolationAmount;\nflat out float vAlphaOutput;\n");
        cVar5 = EffectList::Contains();
        if (cVar5 != '\0') {
            std::operator<<(poVar1, "flat out float vSoftFadeEnabled;\n");
        }
        cVar5 = EffectList::Contains();
        if (cVar5 == '\0') {
            cVar5 = EffectList::Contains();
            if (cVar5 == '\0')
                goto LAB_10088a375;
        }
        std::operator<<(poVar1, "out float vViewSpaceDepth;\n");
    LAB_10088a375:
        if ((bVar2 | local_31) == 1) {
            pcVar6 = (char*)shadersourceprovider::GetShaderString(71);
            std::operator<<(poVar1, pcVar6);
        }
        if (bVar2 != 0) {
            pcVar6 = (char*)shadersourceprovider::GetShaderString(69);
            std::operator<<(poVar1, pcVar6);
        }
        if (local_31 != 0) {
            pcVar6 = (char*)shadersourceprovider::GetShaderString(61);
            std::operator<<(poVar1, pcVar6);
        }
        if (cVar3 == '\x01' && local_32 == '\0') {
            local_50->BuildFSFragment(5);
            std::operator<<(poVar1, (basic_string*)local_50);
            local_50->~basic_string();
        }
        pcVar6 = (char*)shadersourceprovider::GetShaderString(44);
        std::operator<<(poVar1, pcVar6);
        ((ParticleVS*)this)->str();
        local_178->~RT7VertexShaderSourceStream();
        return (ParticleVS*)this;
    }

} // namespace jag::graphics
