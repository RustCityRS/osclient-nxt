// libs/graphics/runetek7/materials/shaders/basic/model/geometry/ModelGeometryFS.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

namespace jag::graphics {
    class ModelGeometryFS {
    public:
        // virtual methods in vtable order
        virtual ~ModelGeometryFS();
        virtual GetSource(EffectManager const&, EffectList const&) const;
        ModelGeometryFS();

        // data members, from how the methods use this: 48 bytes
        undefined** field_0; // offset 0, vtable pointer
        undefined8 field_8;  // offset 8
        undefined8 field_16; // offset 16
        undefined8 field_24; // offset 24
        undefined8 field_32; // offset 32
        char _unknown_40[8];
    };

    // 0x100022b10: the linker folded this into oldscape::option::ScriptOption<int, oldscape::option::DeviceOptionScriptID>::~ScriptOption(), which has identical code
    ModelGeometryFS::~ModelGeometryFS();

    // 0x10002a770: the linker folded this into void eastl::destruct<oldscape::rs2lib::CoordMapSquare*>(oldscape::rs2lib::CoordMapSquare*, oldscape::rs2lib::CoordMapSquare*), which has identical code
    ModelGeometryFS::~ModelGeometryFS();

    // 0x10004a690: the linker folded this into oldscape::option::ScriptOption<bool, oldscape::option::DeviceOptionScriptID>::~ScriptOption(), which has identical code
    ModelGeometryFS::~ModelGeometryFS();

    // 0x100895050, 272 bytes, base-object constructor, placed by class name and debug map
    // ModelGeometryFS::ModelGeometryFS()
    void ModelGeometryFS::ModelGeometryFS() {
        EffectList local_c0[16];
        EffectList local_b0[16];
        undefined2* local_a0;
        undefined8 local_98;
        undefined8* local_90;
        undefined8 local_88;
        undefined2 local_7a;
        undefined8 local_78;
        undefined8 uStack_70;
        undefined8 local_68;
        undefined8 uStack_60;
        undefined8 local_58;
        undefined8 uStack_50;
        undefined8 local_48;
        undefined8 uStack_40;
        undefined8 local_38;
        long local_28;

        local_28 = *(long*)PTR____stack_chk_guard_100ee9d98;
        local_7a = 7503;
        local_a0 = &local_7a;
        local_98 = 2;
        EffectList::EffectList(local_c0, (initializer_list*)&local_a0);
        local_48 = 1373899221505804552;
        uStack_40 = 3399190960198079062;
        local_58 = 216736832471446359;
        uStack_50 = 506107457325171972;
        local_68 = 3973613183446360095;
        uStack_60 = 4122599530425299000;
        local_78 = 4763429725955102229;
        uStack_70 = 2180935465736026961;
        local_38 = 6712412339406454380;
        local_90 = &local_78;
        local_88 = 72;
        EffectList::EffectList(local_b0, (initializer_list*)&local_90);
        new (this) ShaderSource(local_c0, local_b0);
        field_0 = &PTR__ScriptOption_100f175f8;
        new (&field_40) TextureAtlasLookup();
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_28) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100895160, 16 bytes, complete-object constructor, placed by class name and debug map
    // ModelGeometryFS::ModelGeometryFS(): jumps straight to the base-object constructor

    // 0x100895170, 2128 bytes, placed by class name and debug map
    // ModelGeometryFS::GetSource(EffectManager const&, EffectList const&) const
    ModelGeometryFS* ModelGeometryFS::GetSource(EffectManager* param_1, EffectList* param_2) {
        ostream* poVar1;
        byte bVar2;
        byte bVar3;
        char cVar4;
        ostream* poVar6;
        char* pcVar7;
        MapArea* this_00;
        long lVar8;
        ostream* in_RCX;
        undefined1 local_180[280];
        EffectManager* local_68;
        char local_56;
        char local_55;
        char local_54;
        char local_53;
        byte local_52;
        char local_51;
        DebugMaterialHighlightEffect local_50;
        char local_36;
        char local_35;
        char local_34;
        char local_33;
        byte local_32;
        byte local_31;

        local_68 = param_1;
        new (local_180) RT7PixelShaderSourceStream();
        bVar2 = EffectList::Contains();
        local_36 = EffectList::Contains();
        local_35 = EffectList::Contains();
        local_31 = EffectList::Contains();
        local_34 = EffectList::Contains();
        local_32 = EffectList::Contains();
        bVar3 = EffectList::Contains();
        local_56 = EffectList::Contains();
        local_51 = EffectList::Contains();
        cVar4 = EffectList::Contains();
        local_33 = EffectList::Contains();
        local_55 = EffectList::Contains();
        local_54 = cVar4;
        local_52 = bVar3;
        local_53 = EffectList::Contains();
        cVar4 = EffectList::Contains();
        poVar1 = (ostream*)(local_180 + 16);
        std::operator<<(poVar1, "uniform highp float uTextureAnimationTime;\n");
        local_50.BuildUniforms();
        std::operator<<(poVar1, (basic_string*)&local_50);
        local_50.~basic_string();
        local_50.BuildUniforms();
        std::operator<<(poVar1, (basic_string*)&local_50);
        local_50.~basic_string();
        if ((bVar2 | local_31) == 1) {
            local_50.BuildUniforms();
            poVar6 = std::operator<<(poVar1, (basic_string*)&local_50);
            pcVar7 = (char*)shadersourceprovider::GetShaderString(70);
            poVar6 = std::operator<<(poVar6, pcVar7);
            pcVar7 = (char*)shadersourceprovider::GetShaderString(115);
            std::operator<<(poVar6, pcVar7);
            local_50.~basic_string();
        }
        if (local_32 != 0) {
            local_50.BuildUniforms();
            std::operator<<(poVar1, (basic_string*)&local_50);
            local_50.~basic_string();
        }
        if (local_36 != '\0') {
            if (local_33 == '\0') {
                poVar6 = std::operator<<(poVar1, "UNIFORM_BUFFER_BEGIN(SunlightViewTransform)\n   uniform highp mat4 "
                                                 "uSunlightViewMatrix;\nUNIFORM_BUFFER_END\n");
                local_50.BuildUniforms();
                std::operator<<(poVar6, (basic_string*)&local_50);
                local_50.~basic_string();
            } else {
                std::operator<<(poVar1, "uniform sampler2D uShadowBuffer;\n");
            }
        }
        if (local_35 != '\0') {
            local_50.BuildUniforms();
            std::operator<<(poVar1, (basic_string*)&local_50);
            local_50.~basic_string();
        }
        std::operator<<(poVar1, "uniform float uAlphaTestThreshold;\n");
        if (EffectList::Contains() != '\0') {
            std::operator<<(poVar1, "uniform vec4 uAtlasMeta;\nuniform sampler2D uTextureAtlas;\nuniform sampler2D "
                                    "uTextureAtlasSettings;\n");
        }
        if (cVar4 != '\0') {
            std::operator<<(poVar1, "uniform sampler2D uViewportMap;\n");
            std::operator<<(poVar1, "uniform vec2 uViewportMapTextureSize;\n");
        }
        std::operator<<(poVar1,
                        "uniform samplerCube uGlobalEnvironmentMap;\nuniform vec4 uGlobalEnvironmentMappingParams;\n");
        if (local_34 != '\0') {
            local_50.BuildUniforms();
            std::operator<<(poVar1, (basic_string*)&local_50);
            local_50.~basic_string();
        }
        if (local_56 != '\0') {
            local_50.BuildUniforms();
            std::operator<<(poVar1, (basic_string*)&local_50);
            local_50.~basic_string();
        }
        if (local_55 != '\0') {
            pcVar7 = (char*)shadersourceprovider::GetShaderString(83);
            poVar6 = std::operator<<(poVar1, pcVar7);
            pcVar7 = (char*)shadersourceprovider::GetShaderString(82);
            std::operator<<(poVar6, pcVar7);
        }
        cVar4 = EffectList::Contains();
        if (cVar4 != '\0') {
            std::operator<<(poVar1, "uniform vec4 uDebugInstanceColour;\n");
        }
        if (local_54 != '\0') {
            pcVar7 = (char*)shadersourceprovider::GetShaderString(58);
            std::operator<<(poVar1, pcVar7);
        }
        cVar4 = EffectList::Contains();
        if (cVar4 != '\0') {
            std::operator<<(poVar1, "uniform vec4 uDebugTexelDensity;\n");
        }
        cVar4 = EffectList::Contains();
        if (cVar4 != '\0') {
            std::operator<<(poVar1, "uniform float uDebugEmissiveScale;\n");
            std::operator<<(poVar1, "uniform float uDebugEmissiveMaskMultiplier;\n");
        }
        cVar4 = EffectList::Contains();
        if (cVar4 != '\0') {
            local_50.BuildUniforms();
            std::operator<<(poVar1, (basic_string*)&local_50);
            local_50.~basic_string();
        }
        cVar4 = EffectList::Contains();
        if (cVar4 != '\0') {
            std::operator<<(poVar1, "uniform vec4 uTint;\n");
        }
        cVar4 = EffectList::Contains();
        if (cVar4 != '\0') {
            std::operator<<(poVar1,
                            "uniform sampler2D uCausticsMap;\nuniform highp float uCausticsPlaneHeight;\nuniform highp "
                            "mat4 uCausticsViewProjMatrix;\nuniform vec2 uCausticsOverWaterFade;\n");
        }
        if (local_53 == '\0') {
            cVar4 = EffectList::Contains();
            if (cVar4 != '\0') {
                std::operator<<(poVar1, "#define STIPPLE_TRANSPARENCY_CLIP_NEAR\n");
                std::operator<<(poVar1, "#define STIPPLE_TRANSPARENCY_CLIP_FAR\n");
            }
            cVar4 = EffectList::Contains();
            if (cVar4 != '\0') {
                local_50.BuildUniforms();
                std::operator<<(poVar1, (basic_string*)&local_50);
                local_50.~basic_string();
            }
        }
        std::operator<<(poVar1, "in highp vec3 vWorldPosition;\n");
        std::operator<<(poVar1, "in highp vec3 vNormal;\n");
        cVar4 = EffectList::Contains();
        if (cVar4 != '\0') {
            std::operator<<(poVar1, "in vec4 vTangent;\n");
        }
        if ((local_52 & local_32) == 1) {
            std::operator<<(poVar1, "in vec3 vTilePosition;\n");
        }
        cVar4 = EffectList::Contains();
        if (cVar4 != '\0') {
            std::operator<<(poVar1, "in mediump vec4 vVertexAlbedo;\n");
        }
        cVar4 = EffectList::Contains();
        if (cVar4 != '\0') {
            std::operator<<(poVar1, "in vec2 vTextureUV;\n");
        }
        std::operator<<(poVar1, "flat in vec3 vMaterialSettingsSlotXY_BatchFlags;\n");
        if ((local_31 != 0) || (cVar4 = EffectList::Contains(), cVar4 != '\0')) {
            pcVar7 = (char*)shadersourceprovider::GetShaderString(68);
            in_RCX = poVar1;
            std::operator<<(poVar1, pcVar7);
        }
        this_00 = (MapArea*)in_RCX->Instance();
        lVar8 = this_00->GetOrigin();
        local_50.BuildFragment(*(bool*)(lVar8 + 147));
        std::operator<<(poVar1, (basic_string*)&local_50);
        local_50.~basic_string();
        cVar4 = EffectList::Contains();
        if (cVar4 != '\0') {
            local_50.BuildFSFragment(&local_68->field_40);
            std::operator<<(poVar1, (basic_string*)&local_50);
            local_50.~basic_string();
        }
        if (local_36 == '\x01' && local_33 == '\0') {
            local_50.BuildFSFragment(5);
            std::operator<<(poVar1, (basic_string*)&local_50);
            local_50.~basic_string();
        }
        if (local_35 != '\0') {
            local_50.BuildFSFragment();
            std::operator<<(poVar1, (basic_string*)&local_50);
            local_50.~basic_string();
        }
        if (local_31 == 0) {
        LAB_1008957e7:
            cVar4 = EffectList::Contains();
            if (cVar4 == '\0')
                goto LAB_10089580d;
        } else {
            pcVar7 = (char*)shadersourceprovider::GetShaderString(69);
            std::operator<<(poVar1, pcVar7);
            if (local_31 == 0)
                goto LAB_1008957e7;
        }
        pcVar7 = (char*)shadersourceprovider::GetShaderString(67);
        std::operator<<(poVar1, pcVar7);
    LAB_10089580d:
        if (local_34 != '\0') {
            local_50.BuildFSFragment();
            std::operator<<(poVar1, (basic_string*)&local_50);
            local_50.~basic_string();
        }
        if (local_32 != 0) {
            local_50.BuildFSFragment();
            std::operator<<(poVar1, (basic_string*)&local_50);
            local_50.~basic_string();
        }
        if (local_51 != '\0') {
            local_50.BuildFSFragment();
            std::operator<<(poVar1, (basic_string*)&local_50);
            local_50.~basic_string();
        }
        cVar4 = EffectList::Contains();
        if (cVar4 == '\0') {
            cVar4 = EffectList::Contains();
            if (cVar4 != '\0') {
                pcVar7 = (char*)shadersourceprovider::GetShaderString(92);
                std::operator<<(poVar1, pcVar7);
            }
            pcVar7 = (char*)shadersourceprovider::GetShaderString(33);
            std::operator<<(poVar1, pcVar7);
        } else {
            cVar4 = EffectList::Contains();
            if (cVar4 != '\0') {
                pcVar7 = (char*)shadersourceprovider::GetShaderString(93);
                std::operator<<(poVar1, pcVar7);
            }
            pcVar7 = (char*)shadersourceprovider::GetShaderString(40);
            std::operator<<(poVar1, pcVar7);
        }
        ((ModelGeometryFS*)this)->str();
        local_180->~RT7PixelShaderSourceStream();
        return (ModelGeometryFS*)this;
    }

} // namespace jag::graphics
