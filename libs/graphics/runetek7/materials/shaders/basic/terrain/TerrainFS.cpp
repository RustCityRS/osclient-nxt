// libs/graphics/runetek7/materials/shaders/basic/terrain/TerrainFS.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

namespace jag::graphics {
    class TerrainFS {
    public:
        // virtual methods in vtable order
        virtual ~TerrainFS();
        virtual GetSource(EffectManager const&, EffectList const&) const;
        TerrainFS();

        // data members, from how the methods use this: 48 bytes
        undefined** field_0; // offset 0, vtable pointer
        undefined8 field_8;  // offset 8
        undefined8 field_16; // offset 16
        undefined8 field_24; // offset 24
        undefined8 field_32; // offset 32
        char _unknown_40[8];
    };

    // 0x100022b10: the linker folded this into oldscape::option::ScriptOption<int, oldscape::option::DeviceOptionScriptID>::~ScriptOption(), which has identical code
    TerrainFS::~TerrainFS();

    // 0x10002a770: the linker folded this into void eastl::destruct<oldscape::rs2lib::CoordMapSquare*>(oldscape::rs2lib::CoordMapSquare*, oldscape::rs2lib::CoordMapSquare*), which has identical code
    TerrainFS::~TerrainFS();

    // 0x10004a690: the linker folded this into oldscape::option::ScriptOption<bool, oldscape::option::DeviceOptionScriptID>::~ScriptOption(), which has identical code
    TerrainFS::~TerrainFS();

    // 0x10088a480, 256 bytes, base-object constructor, placed by class name and debug map
    // TerrainFS::TerrainFS()
    void TerrainFS::TerrainFS() {
        EffectList local_b0[16];
        EffectList local_a0[16];
        undefined2* local_90;
        undefined8 local_88;
        undefined8* local_80;
        undefined8 local_78;
        undefined2 local_6a;
        undefined8 local_68;
        undefined8 uStack_60;
        undefined8 local_58;
        undefined8 uStack_50;
        undefined8 local_48;
        undefined8 uStack_40;
        undefined4 local_38;
        long local_28;

        local_28 = *(long*)PTR____stack_chk_guard_100ee9d98;
        local_6a = 7505;
        local_90 = &local_6a;
        local_88 = 2;
        EffectList::EffectList(local_b0, (initializer_list*)&local_90);
        local_48 = 578437725934650371;
        uStack_40 = 1230063429716741898;
        local_58 = 7940462028951593505;
        uStack_50 = 144397042473055850;
        local_68 = 4267189342014215701;
        uStack_60 = 2314602011926151231;
        local_38 = 661931326;
        local_80 = &local_68;
        local_78 = 52;
        EffectList::EffectList(local_a0, (initializer_list*)&local_80);
        new (this) ShaderSource(local_b0, local_a0);
        field_0 = &PTR__ScriptOption_100f16da0;
        new (&field_40) TextureAtlasLookup();
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_28) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x10088a580, 16 bytes, complete-object constructor, placed by class name and debug map
    // TerrainFS::TerrainFS(): jumps straight to the base-object constructor

    // 0x10088a590, 1776 bytes, placed by class name and debug map
    // TerrainFS::GetSource(EffectManager const&, EffectList const&) const
    TerrainFS* TerrainFS::GetSource(EffectManager* param_1, EffectList* param_2) {
        ostream* poVar1;
        byte bVar2;
        char cVar3;
        char cVar4;
        ostream* poVar5;
        char* pcVar6;
        undefined1 local_188[280];
        EffectManager* local_70;
        undefined4 local_5c;
        char local_55;
        char local_54;
        char local_53;
        char local_52;
        char local_51;
        DebugMaterialHighlightEffect local_50;
        byte local_37;
        char local_36;
        char local_35;
        byte local_34;
        char local_33;
        byte local_32;
        char local_31;

        local_70 = param_1;
        new (local_188) RT7PixelShaderSourceStream();
        local_52 = EffectList::Contains();
        local_31 = EffectList::Contains();
        bVar2 = EffectList::Contains();
        cVar3 = EffectList::Contains();
        local_36 = EffectList::Contains();
        if (bVar2 == 0) {
            local_5c = 0;
        } else {
            local_5c = EffectList::Contains();
        }
        local_35 = EffectList::Contains();
        cVar4 = EffectList::Contains();
        local_33 = EffectList::Contains();
        local_51 = EffectList::Contains();
        local_55 = EffectList::Contains();
        local_32 = EffectList::Contains();
        local_53 = cVar4;
        local_37 = bVar2;
        local_34 = EffectList::Contains();
        local_54 = EffectList::Contains();
        local_50.BuildUniforms();
        poVar1 = (ostream*)(local_188 + 16);
        std::operator<<(poVar1, (basic_string*)&local_50);
        local_50.~basic_string();
        local_50.BuildUniforms();
        std::operator<<(poVar1, (basic_string*)&local_50);
        local_50.~basic_string();
        cVar4 = EffectList::Contains();
        if (cVar4 != '\0') {
            std::operator<<(poVar1, "#define STIPPLE_TRANSPARENCY_CLIP_FAR\n");
        }
        if ((byte)((byte)local_5c | local_37 | local_32) == 1) {
            local_50.BuildUniforms();
            poVar5 = std::operator<<(poVar1, (basic_string*)&local_50);
            pcVar6 = (char*)shadersourceprovider::GetShaderString(70);
            poVar5 = std::operator<<(poVar5, pcVar6);
            pcVar6 = (char*)shadersourceprovider::GetShaderString(115);
            std::operator<<(poVar5, pcVar6);
            local_50.~basic_string();
        }
        if (local_32 != 0) {
            local_50.BuildUniforms();
            std::operator<<(poVar1, (basic_string*)&local_50);
            local_50.~basic_string();
        }
        if (cVar3 != '\0') {
            if (local_33 == '\0') {
                poVar5 = std::operator<<(poVar1, "UNIFORM_BUFFER_BEGIN(SunlightViewTransform)\n   uniform highp mat4 "
                                                 "uSunlightViewMatrix;\nUNIFORM_BUFFER_END\n");
                local_50.BuildUniforms();
                std::operator<<(poVar5, (basic_string*)&local_50);
                local_50.~basic_string();
            } else {
                std::operator<<(poVar1, "uniform sampler2D uShadowBuffer;\n");
            }
        }
        if (local_36 != '\0') {
            local_50.BuildUniforms();
            std::operator<<(poVar1, (basic_string*)&local_50);
            local_50.~basic_string();
        }
        if (local_35 != '\0') {
            local_50.BuildUniforms();
            std::operator<<(poVar1, (basic_string*)&local_50);
            local_50.~basic_string();
        }
        if (local_31 != '\0') {
            std::operator<<(poVar1, "uniform highp float uGridSize;\nuniform mediump vec4 uAtlasMeta;\nuniform "
                                    "sampler2D uTextureAtlas;\nuniform sampler2D uTextureAtlasSettings;\n");
        }
        if (local_54 != '\0') {
            std::operator<<(poVar1, "uniform highp float uTextureAnimationTime;\n");
            std::operator<<(poVar1, "uniform sampler2D uViewportMap;\n");
            std::operator<<(poVar1, "uniform vec2 uViewportMapTextureSize;\n");
        }
        if (local_53 != '\0') {
            local_50.BuildUniforms();
            std::operator<<(poVar1, (basic_string*)&local_50);
            local_50.~basic_string();
        }
        if (local_55 != '\0') {
            pcVar6 = (char*)shadersourceprovider::GetShaderString(58);
            std::operator<<(poVar1, pcVar6);
        }
        cVar4 = EffectList::Contains();
        if (cVar4 != '\0') {
            std::operator<<(poVar1, "uniform vec4 uDebugTexelDensity;\n");
        }
        cVar4 = EffectList::Contains();
        if (cVar4 != '\0') {
            std::operator<<(poVar1, "uniform vec4 uDebugTerrainSpecular;\n");
        }
        cVar4 = EffectList::Contains();
        if (cVar4 != '\0') {
            local_50.BuildUniforms();
            std::operator<<(poVar1, (basic_string*)&local_50);
            local_50.~basic_string();
        }
        cVar4 = EffectList::Contains();
        if (cVar4 != '\0') {
            std::operator<<(poVar1,
                            "uniform sampler2D uCausticsMap;\nuniform highp float uCausticsPlaneHeight;\nuniform highp "
                            "mat4 uCausticsViewProjMatrix;\nuniform vec2 uCausticsOverWaterFade;\n");
        }
        std::operator<<(poVar1, "in highp vec4 vWorldPos_ViewSpaceDepth;\n");
        std::operator<<(poVar1, "in vec4 vVertexAlbedo;\n");
        local_37 = local_37 | local_34;
        if ((local_37 != 0) || (cVar4 = EffectList::Contains(), cVar4 != '\0')) {
            std::operator<<(poVar1, "in vec3 vWorldNormal;\n");
        }
        if (local_32 == 1 && local_34 == 0) {
            std::operator<<(poVar1, "in vec3 vAmbientColour;\n");
        }
        if (local_31 != '\0') {
            std::operator<<(poVar1, "flat in highp vec4 vMaterialSettingsSlots1D;\nflat in highp vec4 "
                                    "vTextureScale;\nin vec4 vTextureWeight;\n");
        }
        std::operator<<(poVar1, "flat in vec4 vMaterialProperties;\n");
        if (((char)local_5c != '\0') || (cVar4 = EffectList::Contains(), cVar4 != '\0')) {
            pcVar6 = (char*)shadersourceprovider::GetShaderString(68);
            std::operator<<(poVar1, pcVar6);
        }
        if (local_31 != '\0') {
            local_50.BuildFSFragment(&local_70->field_40);
            std::operator<<(poVar1, (basic_string*)&local_50);
            local_50.~basic_string();
        }
        if (cVar3 == '\x01' && local_33 == '\0') {
            local_50.BuildFSFragment(5);
            std::operator<<(poVar1, (basic_string*)&local_50);
            local_50.~basic_string();
        }
        if (local_36 != '\0') {
            local_50.BuildFSFragment();
            std::operator<<(poVar1, (basic_string*)&local_50);
            local_50.~basic_string();
        }
        if ((char)local_5c == '\0') {
        LAB_10088aa95:
            cVar3 = EffectList::Contains();
            if (cVar3 == '\0')
                goto LAB_10088aabb;
        } else {
            pcVar6 = (char*)shadersourceprovider::GetShaderString(69);
            std::operator<<(poVar1, pcVar6);
            if ((char)local_5c == '\0')
                goto LAB_10088aa95;
        }
        pcVar6 = (char*)shadersourceprovider::GetShaderString(67);
        std::operator<<(poVar1, pcVar6);
    LAB_10088aabb:
        if (local_35 != '\0') {
            local_50.BuildFSFragment();
            std::operator<<(poVar1, (basic_string*)&local_50);
            local_50.~basic_string();
        }
        if (local_51 != '\0') {
            local_50.BuildFSFragment();
            std::operator<<(poVar1, (basic_string*)&local_50);
            local_50.~basic_string();
        }
        if (local_32 != 0) {
            local_50.BuildFSFragment();
            std::operator<<(poVar1, (basic_string*)&local_50);
            local_50.~basic_string();
        }
        if (local_52 == '\0') {
            if (local_31 != '\0') {
                pcVar6 = (char*)shadersourceprovider::GetShaderString(92);
                std::operator<<(poVar1, pcVar6);
            }
            pcVar6 = (char*)shadersourceprovider::GetShaderString(99);
            std::operator<<(poVar1, pcVar6);
        } else {
            if (local_31 != '\0') {
                pcVar6 = (char*)shadersourceprovider::GetShaderString(93);
                std::operator<<(poVar1, pcVar6);
            }
            pcVar6 = (char*)shadersourceprovider::GetShaderString(104);
            std::operator<<(poVar1, pcVar6);
        }
        ((TerrainFS*)this)->str();
        local_188->~RT7PixelShaderSourceStream();
        return (TerrainFS*)this;
    }

} // namespace jag::graphics
