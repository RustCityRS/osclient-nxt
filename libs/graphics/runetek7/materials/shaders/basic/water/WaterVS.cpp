// libs/graphics/runetek7/materials/shaders/basic/water/WaterVS.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

namespace jag::graphics {
    class WaterVS {
    public:
        // virtual methods in vtable order
        virtual ~WaterVS();
        virtual GetSource(EffectManager const&, EffectList const&) const;
        WaterVS();

        // data members, from how the methods use this: 40 bytes
        undefined** field_0; // offset 0, vtable pointer
        undefined8 field_8;  // offset 8
        undefined8 field_16; // offset 16
        undefined8 field_24; // offset 24
        undefined8 field_32; // offset 32
    };

    // 0x100022b10: the linker folded this into oldscape::option::ScriptOption<int, oldscape::option::DeviceOptionScriptID>::~ScriptOption(), which has identical code
    WaterVS::~WaterVS();

    // 0x10002a770: the linker folded this into void eastl::destruct<oldscape::rs2lib::CoordMapSquare*>(oldscape::rs2lib::CoordMapSquare*, oldscape::rs2lib::CoordMapSquare*), which has identical code
    WaterVS::~WaterVS();

    // 0x10004a690: the linker folded this into oldscape::option::ScriptOption<bool, oldscape::option::DeviceOptionScriptID>::~ScriptOption(), which has identical code
    WaterVS::~WaterVS();

    // 0x10088cb20, 192 bytes, base-object constructor, placed by class name and debug map
    // WaterVS::WaterVS()
    void WaterVS::WaterVS() {
        EffectList local_90[16];
        EffectList local_80[16];
        undefined2* local_70;
        undefined8 local_68;
        undefined8* local_60;
        undefined8 local_58;
        undefined2 local_4a;
        undefined8 local_48;
        undefined7 uStack_40;
        undefined4 uStack_39;
        long local_28;

        local_28 = *(long*)PTR____stack_chk_guard_100ee9d98;
        local_4a = 25167;
        local_70 = &local_4a;
        local_68 = 2;
        EffectList::EffectList(local_90, (initializer_list*)&local_70);
        local_48 = 2186312932159135006;
        uStack_40 = 12997486438326303;
        uStack_39 = 845571171;
        local_60 = &local_48;
        local_58 = 19;
        EffectList::EffectList(local_80, (initializer_list*)&local_60);
        new (this) ShaderSource(local_90, local_80);
        field_0 = &PTR__ScriptOption_100f17020;
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_28) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x10088cbe0, 16 bytes, complete-object constructor, placed by class name and debug map
    // WaterVS::WaterVS(): jumps straight to the base-object constructor

    // 0x10088cbf0, 912 bytes, placed by class name and debug map
    // WaterVS::GetSource(EffectManager const&, EffectList const&) const
    WaterVS* WaterVS::GetSource(EffectManager* param_1, EffectList* param_2) {
        ostream* poVar1;
        char cVar2;
        byte bVar3;
        byte bVar4;
        ostream* poVar5;
        char* pcVar6;
        RT7VertexShaderSourceStream local_178[2];
        undefined4 local_54;
        basic_string local_50[31];
        char local_31;

        cVar2 = EffectList::Contains();
        if (cVar2 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("requestedEffects.Contains(EffectType::WATER_COMMON)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "materials/shaders/basic/water/WaterVS.cpp",
                      53, (char*)0);
        }
        RT7VertexShaderSourceStream::RT7VertexShaderSourceStream(local_178, param_1);
        bVar3 = EffectList::Contains();
        if (bVar3 == 0) {
            bVar4 = 0;
        } else {
            bVar4 = EffectList::Contains();
        }
        local_31 = EffectList::Contains();
        cVar2 = EffectList::Contains();
        if (cVar2 == '\0') {
            local_54 = 0;
        } else {
            local_54 = EffectList::Contains();
        }
        local_50->BuildDefines();
        poVar1 = (ostream*)(local_178[0].field_0 + 16);
        std::operator<<(poVar1, local_50);
        local_50->~basic_string();
        local_50->BuildUniforms();
        std::operator<<(poVar1, local_50);
        local_50->~basic_string();
        cVar2 = EffectList::Contains();
        if (cVar2 != '\0') {
            std::operator<<(poVar1, "uniform vec4 uEmissiveFlowSpeed_EmissiveFlowRotation_EmissiveUVScale;\nuniform "
                                    "vec2 uEmissiveMapScale_EmissiveUVMode;\n");
        }
        cVar2 = EffectList::Contains();
        if (cVar2 != '\0') {
            std::operator<<(poVar1,
                            "struct NormalMapTexCoordParams\n{\n   highp vec4 flowSpeed_spareyzw;\n   highp vec4 "
                            "uvScale_uvOffset;\n   highp mat2 uvRotation;\n   highp mat2 "
                            "flowRotation;\n};\nUNIFORM_BUFFER_BEGIN(WaterNormalMapTexCoordParams)\n   uniform "
                            "NormalMapTexCoordParams uWaterNormalMapTexCoordParams[3];\n   uniform "
                            "NormalMapTexCoordParams uWaterNormalMapMacroTexCoordParams[3];\nUNIFORM_BUFFER_END\n");
        }
        std::operator<<(poVar1, "uniform mat4 uModelMatrix;\n");
        local_50->BuildUniforms();
        std::operator<<(poVar1, local_50);
        local_50->~basic_string();
        if ((bVar3 | bVar4) == 1) {
            local_50->BuildUniforms();
            std::operator<<(poVar1, local_50);
            local_50->~basic_string();
        }
        if ((char)local_54 != '\0') {
            poVar5 = std::operator<<(poVar1, "UNIFORM_BUFFER_BEGIN(SunlightViewTransform)\n   uniform mat4 "
                                             "uSunlightViewMatrix;\nUNIFORM_BUFFER_END\n");
            local_50->BuildUniforms();
            std::operator<<(poVar5, local_50);
            local_50->~basic_string();
        }
        if (bVar4 != 0) {
            pcVar6 = (char*)shadersourceprovider::GetShaderString(70);
            std::operator<<(poVar1, pcVar6);
        }
        if (local_31 != '\0') {
            pcVar6 = (char*)shadersourceprovider::GetShaderString(58);
            std::operator<<(poVar1, pcVar6);
        }
        cVar2 = EffectList::Contains();
        if (cVar2 == '\0') {
            cVar2 = EffectList::Contains();
            if (cVar2 != '\0')
                goto LAB_10088ce46;
        } else {
        LAB_10088ce46:
            std::operator<<(poVar1, "uniform float uCausticsPlaneHeight;\n");
        }
        cVar2 = WaterCommonShaderEffect::UseGLES2CompatMode();
        if (cVar2 == '\0') {
            std::operator<<(
                poVar1,
                "out highp vec4 vPosition_WaterDepth;\nout vec4 vColour;\nout highp vec4 "
                "vFlowControlMask_ViewSpaceDepth;\nout highp vec4 vNoisyPatchFlow0_NoisyPatchFlow1;\nout highp vec4 "
                "vNoisyPatchFlow2_UVPack_NormalsFlow0Map0;\nout highp vec4 "
                "vUVPack_NormalsFlow0Map1_NormalsFlow0Map2;\nout highp vec4 "
                "vUVPack_NormalsFlow1Map0_NormalsFlow1Map1;\nout highp vec4 "
                "vUVPack_NormalsFlow1Map2_NormalsFlow2Map0;\nout highp vec4 vUVPack_NormalsFlow2Map1_NormalsFlow2Map2; "
                "\nout highp vec4 vUVPack_NormalMapMacroUV_EmissiveUV[3];\nout highp vec2 vUVPack_FoamUV;\n");
        } else {
            std::operator<<(poVar1,
                            "out highp vec4 vPosition_WaterDepth;\nout vec4 vColour;\nout highp vec4 "
                            "vFlowControlMask_ViewSpaceDepth;\nout highp vec4 vNoisyPatchFlow0_NoisyPatchFlow1;\nout "
                            "highp vec4 vNoisyPatchFlow2_UVPack_NormalsFlow0Map0;\nout highp vec4 "
                            "vUVPack_NormalsFlow1Map0_NormalsFlow2Map0;\n");
        }
        if (bVar4 == 0) {
            cVar2 = EffectList::Contains();
            if (cVar2 == '\0')
                goto LAB_10088cea9;
        }
        pcVar6 = (char*)shadersourceprovider::GetShaderString(71);
        std::operator<<(poVar1, pcVar6);
    LAB_10088cea9:
        if (bVar4 != 0) {
            pcVar6 = (char*)shadersourceprovider::GetShaderString(69);
            std::operator<<(poVar1, pcVar6);
        }
        if ((char)local_54 != '\0') {
            local_50->BuildFSFragment(5);
            std::operator<<(poVar1, local_50);
            local_50->~basic_string();
        }
        pcVar6 = (char*)shadersourceprovider::GetShaderString(112);
        std::operator<<(poVar1, pcVar6);
        ((WaterVS*)this)->str();
        local_178->~RT7VertexShaderSourceStream();
        return (WaterVS*)this;
    }

} // namespace jag::graphics
