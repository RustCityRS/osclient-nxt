// projects/osclient/debug/RSevenDebugDisplay.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::oldscape {
    class RSevenDebugConfiguration {
    public:
        RSevenDebugConfiguration();
        ~RSevenDebugConfiguration();
        RSevenDebugConfiguration* operator=(RSevenDebugConfiguration&&);
        RSevenDebugConfiguration(RSevenDebugConfiguration const&);
        RSevenDebugConfiguration(RSevenDebugConfiguration&&);

        // data members, from how the methods use this: 360 bytes
        undefined1 field_0; // offset 0
        char _unknown_1[55];
        undefined4 field_56;  // offset 56
        undefined1 field_60;  // offset 60
        undefined3 field_61;  // offset 61
        undefined8 field_64;  // offset 64
        undefined8 field_72;  // offset 72
        undefined8 field_80;  // offset 80
        undefined8 field_88;  // offset 88
        undefined8 field_96;  // offset 96
        undefined8 field_104; // offset 104
        undefined8 field_112; // offset 112
        undefined8 field_120; // offset 120
        undefined8 field_128; // offset 128
        undefined4 field_136; // offset 136
        undefined8 field_140; // offset 140
        undefined8 field_148; // offset 148
        undefined4 field_156; // offset 156
        undefined8 field_160; // offset 160
        undefined8 field_168; // offset 168
        undefined4 field_176; // offset 176
        undefined1 field_180; // offset 180
        undefined3 field_181; // offset 181
        undefined4 field_184; // offset 184
        undefined1 field_188; // offset 188
        char _unknown_189[3];
        SunlightOptions field_192; // offset 192
        undefined8 field_256;      // offset 256
        undefined4 field_264;      // offset 264
        char _unknown_268[4];
        undefined8 field_272; // offset 272
        undefined8 field_280; // offset 280
        undefined8 field_288; // offset 288
        undefined8 field_296; // offset 296
        ColourHSL field_304;  // offset 304
        ColourHSL field_320;  // offset 320
        char _unknown_336[16];
        undefined8 field_352; // offset 352
    };

    class RSevenDebugDisplay : public DebugDisplay // base inferred from shared vtable slots
    {
    public:
        // virtual methods in vtable order
        virtual ~RSevenDebugDisplay();
        virtual void DrawDebug();
        virtual void DrawDisplay();
        RSevenDebugDisplay();
        void GetConfiguration(RSevenDebugConfiguration&);
        RSevenDebugDisplay* GetActiveEffectsList();
        ulong GetFogParams();
        ulong GetTonemappingParams();
        void SetConfiguration(RSevenDebugConfiguration const&);
        void SetActiveEffects(eastl::map<eastl::string, bool, eastl::less<eastl::string>, eastl::allocator> const&);
        void SetFogParams(DistanceFogParams const&);
        void SetTonemappingParams(TonemappingParams const&);
        void DrawRSevenToggle();
        void DrawFreezeToggle();
        void DrawFogControls();
        void DrawEffectToggles();
        void DrawTerrainBlendToggle();
        void DrawDebugPointLightToggle();
        void DrawAntiAliasingControls();
        void DrawLightScatteringControls();
        void DrawSunlightAmbientColorPicker();
        void DrawSunlightAmbientIntensityControls();
        void DrawSunlightColorPicker();
        void DrawSunlightDirectionControls();
        void DrawSunlightIntensityControls();
        void DrawShadowQualityPicker();
        void DrawShadowStrengthControls();
        void DrawSSAOControls();
        void DrawTonemappingControls();
        void DrawVolumetricScatteringControls();
        void DrawPresetControls();
        void DrawEffectToggle(eastl::string const&, RT7EffectToggle const&);
        void GetEffectToggles();
        void DrawPresetSelectionBox();
        void DrawPresetManipulationButtons();
        void DrawPresetSaveInterface();

        // data members, from how the methods use this: 448 bytes
        undefined** field_0; // offset 0, vtable pointer
        char _unknown_8[40];
        DebugDisplay<RSevenDebugDisplay> field_48; // offset 48
        char _unknown_49[15];
        float field_64;     // offset 64
        float field_68;     // offset 68
        float field_72;     // offset 72
        float field_76;     // offset 76
        float field_80;     // offset 80
        float field_84;     // offset 84
        float field_88;     // offset 88
        float field_92;     // offset 92
        ColourHSL field_96; // offset 96
        float field_112;    // offset 112
        char _unknown_116[8];
        float field_124; // offset 124
        float field_128; // offset 128
        char _unknown_132[292];
        ulong field_424; // offset 424
        char _unknown_432[16];
    };

    class RSevenDebugPresetProvider {
    public:
        RSevenDebugPresetProvider();

        // data members, from how the methods use this: 8 bytes
        undefined* field_0; // offset 0, vtable pointer
    };

    // 0x100064890, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // RSevenDebugConfiguration::RSevenDebugConfiguration(): jumps straight to the base-object constructor

    // 0x1000648a0, 16 bytes, complete-object destructor, inline, placed by debug map only (low confidence)
    // RSevenDebugConfiguration::~RSevenDebugConfiguration(): jumps straight to the base-object destructor

    // 0x100064bd0, 32 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // RSevenDebugPresetProvider::RSevenDebugPresetProvider()
    void RSevenDebugPresetProvider::RSevenDebugPresetProvider() {
        field_0 = PTR_vtable_100ee8920 + 16;
    }

    // 0x100065e30, 192 bytes, inline, placed by class header (inline)
    // RSevenDebugConfiguration::operator=(RSevenDebugConfiguration&&)
    /* RSevenDebugConfiguration::TEMPNAMEPLACEHOLDERVALUE(RSevenDebugConfiguration&&)
    */

    RSevenDebugConfiguration* RSevenDebugConfiguration::operator=(RSevenDebugConfiguration* param_1) {
        undefined8 uVar1;
        undefined8 uVar2;
        undefined8 uVar3;
        undefined8 uVar4;
        undefined1 uVar5;
        undefined3 uVar6;
        undefined4 uVar7;

        field_0 = param_1->field_0;
        eastl::map<eastl::string, bool, eastl::less<eastl::string>, eastl::allocator>::operator=(
            (map<eastl::string, bool, eastl::less<eastl::string>, eastl::allocator>*)&field_8, (map*)&param_1->field_8);
        uVar5 = param_1->field_60;
        uVar6 = param_1->field_61;
        uVar1 = param_1->field_64;
        field_56 = param_1->field_56;
        field_60 = uVar5;
        field_61 = uVar6;
        field_64 = uVar1;
        jag::graphics::SimpleScatteringParams::operator=((SimpleScatteringParams*)&field_72,
                                                         (SimpleScatteringParams*)&param_1->field_72);
        uVar1 = *(undefined8*)((long)&param_1->field_140 + 4);
        uVar2 = *(undefined8*)((long)&param_1->field_148 + 4);
        uVar3 = param_1->field_160;
        uVar4 = param_1->field_168;
        uVar7 = param_1->field_176;
        uVar5 = param_1->field_180;
        uVar6 = param_1->field_181;
        *(undefined8*)&field_136 = *(undefined8*)&param_1->field_136;
        *(undefined8*)((long)&field_140 + 4) = uVar1;
        *(undefined8*)((long)&field_148 + 4) = uVar2;
        field_160 = uVar3;
        field_168 = uVar4;
        field_176 = uVar7;
        field_180 = uVar5;
        field_181 = uVar6;
        uVar7 = param_1->field_184;
        uVar5 = param_1->field_188;
        field_181 = param_1->field_181;
        field_184 = uVar7;
        field_188 = uVar5;
        jag::graphics::SunlightOptions::operator=((SunlightOptions*)field_192, (SunlightOptions*)param_1->field_192);
        uVar1 = *(undefined8*)((long)&param_1->field_256 + 4);
        *(undefined8*)(field_192 + 60) = *(undefined8*)(param_1->field_192 + 60);
        *(undefined8*)((long)&field_256 + 4) = uVar1;
        jag::graphics::VolumetricScatteringParams::operator=((VolumetricScatteringParams*)&field_272,
                                                             (VolumetricScatteringParams*)&param_1->field_272);
        field_352 = param_1->field_352;
        return this;
    }

    // 0x100075110, 16 bytes, complete-object destructor, inline, placed by class name
    // RSevenDebugDisplay::~RSevenDebugDisplay(): jumps straight to the base-object destructor

    // 0x100075120, 32 bytes, deleting destructor, inline, placed by class name
    // RSevenDebugDisplay::~RSevenDebugDisplay()
    void RSevenDebugDisplay::~RSevenDebugDisplay() {
        ~RSevenDebugDisplay(this);
        operator_delete(this);
    }

    // 0x100079830, 64 bytes, base-object destructor, inline, placed by class name
    // RSevenDebugDisplay::~RSevenDebugDisplay()
    void RSevenDebugDisplay::~RSevenDebugDisplay() {
        field_0 = &PTR__RSevenDebugDisplay_100ef2790;
        (&field_432)->~shared_ptr();
        (&field_144)->~fixed_string();
        ~DebugDisplay();
    }

    // 0x100086110, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // RSevenDebugConfiguration::RSevenDebugConfiguration(RSevenDebugConfiguration const&): jumps straight to the base-object constructor

    // 0x100086120, 64 bytes, base-object constructor, inline, placed by class header (inline)
    // RSevenDebugConfiguration::RSevenDebugConfiguration(RSevenDebugConfiguration const&)
    void RSevenDebugConfiguration::RSevenDebugConfiguration(RSevenDebugConfiguration* param_1) {
        field_0 = param_1->field_0;
        new (&field_8, (map*)&param_1->field_8)
            eastl::map<eastl::string, bool, eastl::less<eastl::string>, eastl::allocator>();
        _memcpy(&field_56, &param_1->field_56, 304);
    }

    // 0x100086550, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // RSevenDebugConfiguration::RSevenDebugConfiguration(RSevenDebugConfiguration&&): jumps straight to the base-object constructor

    // 0x100086560, 64 bytes, base-object constructor, inline, placed by class header (inline)
    // RSevenDebugConfiguration::RSevenDebugConfiguration(RSevenDebugConfiguration&&)
    void RSevenDebugConfiguration::RSevenDebugConfiguration(RSevenDebugConfiguration* param_1) {
        field_0 = param_1->field_0;
        new (&field_8, (map*)&param_1->field_8)
            eastl::map<eastl::string, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>,
                       eastl::less<eastl::string>, eastl::allocator>();
        _memcpy(&field_56, &param_1->field_56, 304);
    }

} // namespace jag::oldscape
