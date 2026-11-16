// libs/graphics/runetek7/materials/shaders/basic/particles/ParticleFS.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

namespace jag::graphics {
    class ParticleFS {
    public:
        // virtual methods in vtable order
        virtual ~ParticleFS();
        virtual GetSource(EffectManager const&, EffectList const&) const;
        ParticleFS();

        // data members, from how the methods use this: 48 bytes
        undefined** field_0; // offset 0, vtable pointer
        undefined8 field_8;  // offset 8
        undefined8 field_16; // offset 16
        undefined8 field_24; // offset 24
        undefined8 field_32; // offset 32
        char _unknown_40[8];
    };

    // 0x100022b10: the linker folded this into oldscape::option::ScriptOption<int, oldscape::option::DeviceOptionScriptID>::~ScriptOption(), which has identical code
    ParticleFS::~ParticleFS();

    // 0x10002a770: the linker folded this into void eastl::destruct<oldscape::rs2lib::CoordMapSquare*>(oldscape::rs2lib::CoordMapSquare*, oldscape::rs2lib::CoordMapSquare*), which has identical code
    ParticleFS::~ParticleFS();

    // 0x10004a690: the linker folded this into oldscape::option::ScriptOption<bool, oldscape::option::DeviceOptionScriptID>::~ScriptOption(), which has identical code
    ParticleFS::~ParticleFS();

    // 0x100897f80, 192 bytes, base-object constructor, placed by class name and debug map
    // ParticleFS::ParticleFS()
    void ParticleFS::ParticleFS() {
        EffectList local_78[16];
        EffectList local_68[16];
        undefined8* local_58;
        undefined8 local_50;
        undefined8 local_48;
        undefined7 uStack_40;
        undefined1 uStack_39;
        undefined7 uStack_38;
        long local_28;

        local_28 = *(long*)PTR____stack_chk_guard_100ee9d98;
        EffectList::EffectList(local_78);
        local_48 = 2314601844307545915;
        uStack_40 = 24558937338290721;
        uStack_39 = 103;
        uStack_38 = 19207665824302953;
        local_58 = &local_48;
        local_50 = 23;
        EffectList::EffectList(local_68, (initializer_list*)&local_58);
        new (this) ShaderSource(local_78, local_68);
        field_0 = &PTR__ScriptOption_100f177d8;
        new (&field_40) TextureAtlasLookup();
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_28) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100898040, 16 bytes, complete-object constructor, placed by class name and debug map
    // ParticleFS::ParticleFS(): jumps straight to the base-object constructor

    // 0x100898050, 1072 bytes, placed by class name and debug map
    // ParticleFS::GetSource(EffectManager const&, EffectList const&) const
    ParticleFS* ParticleFS::GetSource(EffectManager* param_1, EffectList* param_2) {
        ostream* poVar1;
        char cVar2;
        byte bVar3;
        char cVar4;
        byte bVar5;
        char* pcVar7;
        undefined1 local_180[280];
        EffectManager* local_68;
        ostream* local_60;
        ViewTransformsFragment local_50[26];
        char local_36;
        char local_35;
        char local_34;
        char local_33;
        char local_32;
        byte local_31;

        local_68 = param_1;
        new (local_180) RT7PixelShaderSourceStream();
        local_34 = EffectList::Contains();
        cVar2 = EffectList::Contains();
        local_31 = 1;
        if (cVar2 == '\0') {
            local_31 = EffectList::Contains();
        }
        cVar2 = EffectList::Contains();
        local_36 = EffectList::Contains();
        bVar3 = EffectList::Contains();
        cVar4 = EffectList::Contains();
        local_32 = EffectList::Contains();
        local_33 = cVar2;
        bVar5 = EffectList::Contains();
        local_35 = EffectList::Contains();
        poVar1 = (ostream*)(local_180 + 16);
        std::operator<<(
            poVar1,
            "in highp vec4 vWorldPosition;\nflat in vec4 vVertexAlbedo;\nflat in vec2 vMaterialSettingsSlotXY;\nin "
            "vec4 vTextureUV;\nin float vUVInterpolationAmount;\nflat in float vAlphaOutput;\n");
        if (((bVar3 != 0) && (std::operator<<(poVar1, "flat in float vSoftFadeEnabled;\n"), bVar3 != 0)) ||
            (cVar2 = EffectList::Contains(), cVar2 != '\0')) {
            std::operator<<(poVar1, "in float vViewSpaceDepth;\n");
        }
        if ((local_31 != 0) || (cVar2 = EffectList::Contains(), cVar2 != '\0')) {
            pcVar7 = (char*)shadersourceprovider::GetShaderString(68);
            std::operator<<(poVar1, pcVar7);
        }
        local_50->BuildUniforms();
        std::operator<<(poVar1, (basic_string*)local_50);
        local_50->~basic_string();
        std::operator<<(poVar1, "uniform vec4 uAtlasMeta;\nuniform sampler2D uTextureAtlas;\nuniform sampler2D "
                                "uTextureAtlasSettings;\nuniform highp mat4 uInvViewMatrix;\n");
        if (cVar4 != '\0') {
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
        if (local_35 != '\0') {
            std::operator<<(poVar1, "uniform highp float uTextureAnimationTime;\n");
            std::operator<<(poVar1, "uniform sampler2D uViewportMap;\n");
            std::operator<<(poVar1, "uniform vec2 uViewportMapTextureSize;\n");
        }
        if (local_36 != '\0') {
            pcVar7 = (char*)shadersourceprovider::GetShaderString(58);
            std::operator<<(poVar1, pcVar7);
        }
        if ((EffectList::Contains() & bVar3) == 1) {
            pcVar7 = (char*)shadersourceprovider::GetShaderString(83);
            std::operator<<(poVar1, pcVar7);
        }
        if (bVar3 != 0) {
            std::operator<<(poVar1, "uniform float uParticleInvSoftScale;\n");
        }
        if ((bVar5 | local_31) == 1) {
            local_50->BuildUniforms();
            std::operator<<(poVar1, (basic_string*)local_50);
            local_50->~basic_string();
        }
        local_50->BuildFSFragment(&local_68->field_40);
        std::operator<<(poVar1, (basic_string*)local_50);
        local_50->~basic_string();
        if ((local_31 != 0) || (cVar2 = EffectList::Contains(), cVar2 != '\0')) {
            pcVar7 = (char*)shadersourceprovider::GetShaderString(67);
            std::operator<<(poVar1, pcVar7);
        }
        if (local_33 != '\0') {
            local_50->BuildFSFragment();
            std::operator<<(poVar1, (basic_string*)local_50);
            local_50->~basic_string();
        }
        if (cVar4 == '\x01' && local_32 == '\0') {
            local_50->BuildFSFragment(5);
            std::operator<<(poVar1, (basic_string*)local_50);
            local_50->~basic_string();
        }
        if (local_34 == '\0') {
            pcVar7 = (char*)shadersourceprovider::GetShaderString(92);
            std::operator<<(poVar1, pcVar7);
        } else {
            pcVar7 = (char*)shadersourceprovider::GetShaderString(93);
            std::operator<<(poVar1, pcVar7);
        }
        pcVar7 = (char*)shadersourceprovider::GetShaderString(43);
        std::operator<<(poVar1, pcVar7);
        ((ParticleFS*)this)->str();
        local_180->~RT7PixelShaderSourceStream();
        return (ParticleFS*)this;
    }

} // namespace jag::graphics
