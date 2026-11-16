// libs/graphics/runetek7/materials/shaders/basic/water/WaterFS.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

namespace jag::graphics {
    class WaterFS {
    public:
        // virtual methods in vtable order
        virtual ~WaterFS();
        virtual GetSource(EffectManager const&, EffectList const&) const;
        WaterFS();

        // data members, from how the methods use this: 48 bytes
        undefined** field_0; // offset 0, vtable pointer
        undefined8 field_8;  // offset 8
        undefined8 field_16; // offset 16
        undefined8 field_24; // offset 24
        undefined8 field_32; // offset 32
        char _unknown_40[8];
    };

    // 0x100022b10: the linker folded this into oldscape::option::ScriptOption<int, oldscape::option::DeviceOptionScriptID>::~ScriptOption(), which has identical code
    WaterFS::~WaterFS();

    // 0x10002a770: the linker folded this into void eastl::destruct<oldscape::rs2lib::CoordMapSquare*>(oldscape::rs2lib::CoordMapSquare*, oldscape::rs2lib::CoordMapSquare*), which has identical code
    WaterFS::~WaterFS();

    // 0x10004a690: the linker folded this into oldscape::option::ScriptOption<bool, oldscape::option::DeviceOptionScriptID>::~ScriptOption(), which has identical code
    WaterFS::~WaterFS();

    // 0x10088c4f0, 208 bytes, base-object constructor, placed by class name and debug map
    // WaterFS::WaterFS()
    void WaterFS::WaterFS() {
        EffectList local_90[16];
        EffectList local_80[16];
        undefined1* local_70;
        undefined8 local_68;
        undefined8* local_60;
        undefined8 local_58;
        undefined1 local_49;
        undefined8 local_48;
        undefined5 uStack_40;
        undefined3 local_3b;
        undefined5 uStack_38;
        undefined8 uStack_33;
        long local_28;

        local_28 = *(long*)PTR____stack_chk_guard_100ee9d98;
        local_49 = 79;
        local_70 = &local_49;
        local_68 = 1;
        EffectList::EffectList(local_90, (initializer_list*)&local_70);
        uStack_38 = 439787742000;
        uStack_33 = 4984971505694169401;
        local_48 = 7740030898606833665;
        uStack_40 = 137961026412;
        local_3b = 2433569;
        local_60 = &local_48;
        local_58 = 29;
        EffectList::EffectList(local_80, (initializer_list*)&local_60);
        new (this) ShaderSource(local_90, local_80);
        field_0 = &PTR__ScriptOption_100f16ff8;
        new (&field_40) TextureAtlasLookup();
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_28) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x10088c5c0, 16 bytes, complete-object constructor, placed by class name and debug map
    // WaterFS::WaterFS(): jumps straight to the base-object constructor

    // 0x10088c5d0, 1360 bytes, placed by class name and debug map
    // WaterFS::GetSource(EffectManager const&, EffectList const&) const
    WaterFS* WaterFS::GetSource(EffectManager* param_1, EffectList* param_2) {
        ostream* poVar1;
        bool bVar2;
        char cVar3;
        char cVar4;
        char cVar5;
        MapArea* this_00;
        long lVar6;
        char* pcVar7;
        ostream* poVar8;
        Singleton<render::RenderDevice>* in_RCX;
        undefined1 local_170[280];
        undefined4 local_4c;
        DebugReturn local_48[24];

        cVar3 = EffectList::Contains();
        if (cVar3 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("requestedEffects.Contains(EffectType::WATER_COMMON)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "materials/shaders/basic/water/WaterFS.cpp",
                      66, (char*)0);
        }
        new (local_170) RT7PixelShaderSourceStream(param_1);
        cVar3 = EffectList::Contains();
        cVar4 = EffectList::Contains();
        if (cVar3 == '\0') {
            local_4c = 0;
        } else {
            local_4c = EffectList::Contains();
        }
        cVar3 = EffectList::Contains();
        this_00 = (MapArea*)in_RCX->Instance();
        lVar6 = this_00->GetOrigin();
        bVar2 = *(bool*)(lVar6 + 147);
        local_48->BuildUniforms();
        poVar1 = (ostream*)(local_170 + 16);
        std::operator<<(poVar1, (basic_string*)local_48);
        local_48->~basic_string();
        local_48->BuildUniforms();
        std::operator<<(poVar1, (basic_string*)local_48);
        local_48->~basic_string();
        local_48->BuildUniforms();
        std::operator<<(poVar1, (basic_string*)local_48);
        local_48->~basic_string();
        local_48->BuildDefines();
        std::operator<<(poVar1, (basic_string*)local_48);
        local_48->~basic_string();
        local_48->BuildUniforms();
        std::operator<<(poVar1, (basic_string*)local_48);
        local_48->~basic_string();
        cVar5 = EffectList::Contains();
        if (cVar5 != '\0') {
            std::operator<<(poVar1, "uniform sampler2D uReflectionMap;\n");
        }
        cVar5 = EffectList::Contains();
        if (cVar5 != '\0') {
            pcVar7 = (char*)shadersourceprovider::GetShaderString(83);
            std::operator<<(poVar1, pcVar7);
        }
        if (cVar3 != '\0') {
            pcVar7 = (char*)shadersourceprovider::GetShaderString(58);
            std::operator<<(poVar1, pcVar7);
        }
        cVar3 = EffectList::Contains();
        if (cVar3 != '\0') {
            std::operator<<(poVar1, "uniform samplerCube uGlobalEnvironmentMap;\n");
        }
        cVar3 = EffectList::Contains();
        if (cVar3 != '\0') {
            std::operator<<(poVar1, "uniform sampler2D uWaterNormalMapTexture0;\nuniform sampler2D "
                                    "uWaterNormalMapTexture1;\nuniform sampler2D uWaterNormalMapTexture2;\n");
        }
        cVar3 = EffectList::Contains();
        if (cVar3 != '\0') {
            std::operator<<(
                poVar1, "uniform sampler2D uWaterEmissiveMapTexture;\nuniform vec4 "
                        "uWaterEmissiveColourEmissiveSource;\nuniform vec4 "
                        "uEmissiveScale_MapRefractionDepth_EmissiveMapMode_EmissiveMapExists;\nuniform vec4 "
                        "uEmissiveFlowSpeed_EmissiveFlowRotation_EmissiveUVScale;\nuniform float uEmissiveBlend;\n");
        }
        cVar3 = EffectList::Contains();
        if (cVar3 != '\0') {
            std::operator<<(poVar1, "uniform sampler2D uWaterTextureFoam;\n");
        }
        cVar3 = EffectList::Contains();
        if (cVar3 != '\0') {
            std::operator<<(poVar1,
                            "layout(binding = 0, r32ui) restrict uniform highp uimage2D uCausticsIntegerMap;\n");
        }
        cVar3 = EffectList::Contains();
        if (cVar3 != '\0') {
            std::operator<<(poVar1, "uniform highp usampler2D uCausticsMap;\n");
        }
        cVar3 = EffectList::Contains();
        if (cVar3 != '\0') {
            std::operator<<(poVar1, "UNIFORM_BUFFER_BEGIN(WaterNormalMapSamplingParams)\n   uniform highp vec4 "
                                    "uSampleWeight_uvDistortion_sparezw[3];\n   uniform highp vec4 "
                                    "uMacroSampleWeight_uvDistortion_sparezw[3];\n   uniform highp vec4 "
                                    "uWaterStillWaterNormalStrength_spareyzw;\nUNIFORM_BUFFER_END\n");
        }
        cVar3 = EffectList::Contains();
        if (cVar3 == '\0') {
            cVar3 = EffectList::Contains();
            if (cVar3 != '\0')
                goto LAB_10088c8bd;
        } else {
        LAB_10088c8bd:
            std::operator<<(poVar1, "uniform highp vec2 uCausticsMapSize;\nuniform highp vec2 "
                                    "uCausticsComputeResolution;\nuniform highp float uCausticsScale;\nuniform highp "
                                    "float uCausticsRefractionScale;\nuniform highp vec4 uCausticsFade;\n");
        }
        cVar3 = EffectList::Contains();
        if (cVar3 != '\0') {
            std::operator<<(poVar1, "uniform vec3 uWaterExtinctionRGBDepthMetres;\nuniform vec3 "
                                    "uWaterExtinctionOpaqueWaterColour;\nuniform float "
                                    "uWaterExtinctionVisibilityMetres;\nuniform mat4 uSceneInvViewProjMatrix;\n");
        }
        std::operator<<(poVar1, "uniform vec4 uWaterNormalBRDFParams;\n");
        std::operator<<(poVar1, "uniform vec3 uWaterSpecularColour;\n");
        if (cVar4 != '\0') {
            local_48->BuildUniforms();
            std::operator<<(poVar1, (basic_string*)local_48);
            local_48->~basic_string();
        }
        cVar3 = EffectList::Contains();
        if (cVar3 != '\0') {
            std::operator<<(poVar1, "uniform highp vec2 uWaterFoamScaleFoamDepth;\n");
        }
        cVar3 = EffectList::Contains();
        if (cVar3 == '\0') {
            cVar3 = EffectList::Contains();
            if (cVar3 != '\0')
                goto LAB_10088c980;
            cVar3 = EffectList::Contains();
            if (cVar3 != '\0')
                goto LAB_10088c980;
        } else {
        LAB_10088c980:
            std::operator<<(
                poVar1, "uniform float uWaterReflectionMapContribution;\nuniform float uWaterReflectionStrength;\n");
        }
        cVar3 = EffectList::Contains();
        if (cVar3 != '\0') {
            std::operator<<(
                poVar1, "uniform vec3 uDepthFogRGB;\nuniform float uDepthFogStartY;\nuniform float uDepthFogEndY;\n");
        }
        if ((char)local_4c == '\0') {
            cVar3 = EffectList::Contains();
            if (cVar3 != '\0')
                goto LAB_10088c9c6;
        } else {
        LAB_10088c9c6:
            pcVar7 = (char*)shadersourceprovider::GetShaderString(68);
            std::operator<<(poVar1, pcVar7);
        }
        cVar3 = WaterCommonShaderEffect::UseGLES2CompatMode();
        if (cVar3 == '\0') {
            std::operator<<(poVar1,
                            "in highp vec4 vPosition_WaterDepth;\nin vec4 vColour;\nin highp vec4 "
                            "vFlowControlMask_ViewSpaceDepth;\nin highp vec4 vNoisyPatchFlow0_NoisyPatchFlow1;\nin "
                            "highp vec4 vNoisyPatchFlow2_UVPack_NormalsFlow0Map0;\nin highp vec4 "
                            "vUVPack_NormalsFlow0Map1_NormalsFlow0Map2;\nin highp vec4 "
                            "vUVPack_NormalsFlow1Map0_NormalsFlow1Map1;\nin highp vec4 "
                            "vUVPack_NormalsFlow1Map2_NormalsFlow2Map0;\nin highp vec4 "
                            "vUVPack_NormalsFlow2Map1_NormalsFlow2Map2;\nin highp vec4 "
                            "vUVPack_NormalMapMacroUV_EmissiveUV[3];\nin highp vec2 vUVPack_FoamUV;\n");
        } else {
            std::operator<<(poVar1,
                            "in highp vec4 vPosition_WaterDepth;\nin vec4 vColour;\nin highp vec4 "
                            "vFlowControlMask_ViewSpaceDepth;\nin highp vec4 vNoisyPatchFlow0_NoisyPatchFlow1;\nin "
                            "highp vec4 vNoisyPatchFlow2_UVPack_NormalsFlow0Map0;\nin highp vec4 "
                            "vUVPack_NormalsFlow1Map0_NormalsFlow2Map0;\n");
        }
        local_48->BuildFragment(bVar2);
        std::operator<<(poVar1, (basic_string*)local_48);
        local_48->~basic_string();
        if (cVar4 != '\0') {
            poVar8 = std::operator<<(poVar1, "UNIFORM_BUFFER_BEGIN(SunlightViewTransform)\n   uniform highp mat4 "
                                             "uSunlightViewMatrix;\nUNIFORM_BUFFER_END\n");
            local_48->BuildFSFragment(5);
            std::operator<<(poVar8, (basic_string*)local_48);
            local_48->~basic_string();
        }
        if ((char)local_4c == '\0') {
            cVar3 = EffectList::Contains();
            if (cVar3 == '\0')
                goto LAB_10088ca8b;
        }
        pcVar7 = (char*)shadersourceprovider::GetShaderString(67);
        std::operator<<(poVar1, pcVar7);
    LAB_10088ca8b:
        pcVar7 = (char*)shadersourceprovider::GetShaderString(111);
        std::operator<<(poVar1, pcVar7);
        ((WaterFS*)this)->str();
        local_170->~RT7PixelShaderSourceStream();
        return (WaterFS*)this;
    }

} // namespace jag::graphics
