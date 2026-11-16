// libs/graphics/runetek7/materials/shaders/basic/particles/ParticleDistortionFS.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

namespace jag::graphics {
    class ParticleDistortionFS {
    public:
        // virtual methods in vtable order
        virtual ~ParticleDistortionFS();
        virtual GetSource(EffectManager const&, EffectList const&) const;
        ParticleDistortionFS();

        // data members, from how the methods use this: 48 bytes
        undefined** field_0; // offset 0, vtable pointer
        undefined8 field_8;  // offset 8
        undefined8 field_16; // offset 16
        undefined8 field_24; // offset 24
        undefined8 field_32; // offset 32
        char _unknown_40[8];
    };

    // 0x100022b10: the linker folded this into oldscape::option::ScriptOption<int, oldscape::option::DeviceOptionScriptID>::~ScriptOption(), which has identical code
    ParticleDistortionFS::~ParticleDistortionFS();

    // 0x10002a770: the linker folded this into void eastl::destruct<oldscape::rs2lib::CoordMapSquare*>(oldscape::rs2lib::CoordMapSquare*, oldscape::rs2lib::CoordMapSquare*), which has identical code
    ParticleDistortionFS::~ParticleDistortionFS();

    // 0x10004a690: the linker folded this into oldscape::option::ScriptOption<bool, oldscape::option::DeviceOptionScriptID>::~ScriptOption(), which has identical code
    ParticleDistortionFS::~ParticleDistortionFS();

    // 0x100897a50, 192 bytes, base-object constructor, placed by class name and debug map
    // ParticleDistortionFS::ParticleDistortionFS()
    void ParticleDistortionFS::ParticleDistortionFS() {
        EffectList local_68[16];
        EffectList local_58[16];
        undefined8* local_48;
        undefined8 local_40;
        undefined8 local_36;
        undefined4 local_2e;
        undefined2 local_2a;
        long local_28;

        local_28 = *(long*)PTR____stack_chk_guard_100ee9d98;
        EffectList::EffectList(local_68);
        local_36 = 7523077635848163131;
        local_2e = 1160932359;
        local_2a = 15684;
        local_48 = &local_36;
        local_40 = 14;
        EffectList::EffectList(local_58, (initializer_list*)&local_48);
        new (this) ShaderSource(local_68, local_58);
        field_0 = &PTR__ScriptOption_100f17788;
        new (&field_40) TextureAtlasLookup();
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_28) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100897b10, 16 bytes, complete-object constructor, placed by class name and debug map
    // ParticleDistortionFS::ParticleDistortionFS(): jumps straight to the base-object constructor

    // 0x100897b20, 672 bytes, placed by class name and debug map
    // ParticleDistortionFS::GetSource(EffectManager const&, EffectList const&) const
    ParticleDistortionFS* ParticleDistortionFS::GetSource(EffectManager* param_1, EffectList* param_2) {
        ostream* poVar1;
        char cVar2;
        char cVar3;
        char* pcVar4;
        ostream* poVar5;
        undefined1 local_178[280];
        EffectManager* local_60;
        ViewTransformsFragment local_50[29];
        char local_33;
        char local_32;
        char local_31;

        new (local_178) RT7PixelShaderSourceStream();
        local_32 = EffectList::Contains();
        local_31 = EffectList::Contains();
        local_33 = EffectList::Contains();
        local_60 = param_1;
        cVar2 = EffectList::Contains();
        cVar3 = EffectList::Contains();
        poVar1 = (ostream*)(local_178 + 16);
        std::operator<<(poVar1, "in highp vec4 vWorldPosition;\nflat in vec4 vVertexAlbedo;\nflat in vec2 "
                                "vMaterialSettingsSlotXY;\nin vec4 vTextureUV;\nin float vUVInterpolationAmount;\n");
        if (cVar2 != '\0') {
            std::operator<<(poVar1, "in float vViewSpaceDepth;\n");
        }
        local_50->BuildUniforms();
        std::operator<<(poVar1, (basic_string*)local_50);
        local_50->~basic_string();
        std::operator<<(poVar1, "uniform vec4 uAtlasMeta;\nuniform sampler2D uTextureAtlas;\nuniform sampler2D "
                                "uTextureAtlasSettings;\nuniform highp mat4 uInvViewMatrix;\n");
        if (cVar3 != '\0') {
            std::operator<<(poVar1, "uniform highp float uTextureAnimationTime;\n");
            std::operator<<(poVar1, "uniform sampler2D uViewportMap;\n");
            std::operator<<(poVar1, "uniform vec2 uViewportMapTextureSize;\n");
        }
        if (local_33 != '\0') {
            pcVar4 = (char*)shadersourceprovider::GetShaderString(58);
            std::operator<<(poVar1, pcVar4);
        }
        if (cVar2 != '\0') {
            std::operator<<(poVar1, "uniform float uParticleInvSoftScale;\n");
        }
        pcVar4 = (char*)shadersourceprovider::GetShaderString(83);
        poVar5 = std::operator<<(poVar1, pcVar4);
        pcVar4 = (char*)shadersourceprovider::GetShaderString(82);
        std::operator<<(poVar5, pcVar4);
        local_50->BuildFSFragment(&local_60->field_40);
        std::operator<<(poVar1, (basic_string*)local_50);
        local_50->~basic_string();
        if (local_31 != '\0') {
            local_50->BuildFSFragment();
            std::operator<<(poVar1, (basic_string*)local_50);
            local_50->~basic_string();
        }
        if (local_32 == '\0') {
            pcVar4 = (char*)shadersourceprovider::GetShaderString(92);
            std::operator<<(poVar1, pcVar4);
        } else {
            pcVar4 = (char*)shadersourceprovider::GetShaderString(93);
            std::operator<<(poVar1, pcVar4);
        }
        pcVar4 = (char*)shadersourceprovider::GetShaderString(46);
        std::operator<<(poVar1, pcVar4);
        ((ParticleDistortionFS*)this)->str();
        local_178->~RT7PixelShaderSourceStream();
        return (ParticleDistortionFS*)this;
    }

} // namespace jag::graphics
