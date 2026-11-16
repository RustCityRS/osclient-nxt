// projects/osclient/debug/RSevenDebugDisplay.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::oldscape {
    class RSevenDebugConfiguration {
    public:
        RSevenDebugConfiguration();
        ~RSevenDebugConfiguration();
        RSevenDebugConfiguration* operator=(RSevenDebugConfiguration&& rSevenDebugConfiguration);
        RSevenDebugConfiguration(const RSevenDebugConfiguration& rSevenDebugConfiguration);
        RSevenDebugConfiguration(RSevenDebugConfiguration&& rSevenDebugConfiguration);

    private:
        uint8_t field_0;
        uint8_t _unknown_1[55];
        uint32_t field_56;
        uint8_t field_60;
        uint8_t field_61[3];
        uint64_t field_64;
        uint64_t field_72;
        uint64_t field_80;
        uint64_t field_88;
        uint64_t field_96;
        uint64_t field_104;
        uint64_t field_112;
        uint64_t field_120;
        uint64_t field_128;
        uint32_t field_136;
        uint64_t field_140;
        uint64_t field_148;
        uint32_t field_156;
        uint64_t field_160;
        uint64_t field_168;
        uint32_t field_176;
        uint8_t field_180;
        uint8_t field_181[3];
        uint32_t field_184;
        uint8_t field_188;
        uint8_t _unknown_189[3];
        SunlightOptions field_192;
        uint64_t field_256;
        uint32_t field_264;
        uint8_t _unknown_268[4];
        uint64_t field_272;
        uint64_t field_280;
        uint64_t field_288;
        uint64_t field_296;
        ColourHSL field_304;
        ColourHSL field_320;
        uint8_t _unknown_336[16];
        uint64_t field_352;
    };

    class RSevenDebugDisplay : public DebugDisplay // base inferred from shared vtable slots
    {
    public:
        // virtual methods in vtable order
        virtual ~RSevenDebugDisplay();
        virtual void DrawDebug();
        virtual void DrawDisplay();
        RSevenDebugDisplay();
        void GetConfiguration(RSevenDebugConfiguration& rSevenDebugConfiguration);
        RSevenDebugDisplay* GetActiveEffectsList();
        unsigned long GetFogParams();
        unsigned long GetTonemappingParams();
        void SetConfiguration(const RSevenDebugConfiguration& rSevenDebugConfiguration);
        void SetActiveEffects(const eastl::map<eastl::string, bool>& arg1);
        void SetFogParams(const DistanceFogParams& distanceFogParams);
        void SetTonemappingParams(const TonemappingParams& tonemappingParams);
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
        void DrawEffectToggle(const eastl::string& str, const RT7EffectToggle& rt7EffectToggle);
        void GetEffectToggles();
        void DrawPresetSelectionBox();
        void DrawPresetManipulationButtons();
        void DrawPresetSaveInterface();

    private:
        uint8_t _unknown_8[40];
        DebugDisplay<RSevenDebugDisplay> field_48;
        uint8_t _unknown_49[15];
        float field_64;
        float field_68;
        float field_72;
        float field_76;
        float field_80;
        float field_84;
        float field_88;
        float field_92;
        ColourHSL field_96;
        float field_112;
        uint8_t _unknown_116[8];
        float field_124;
        float field_128;
        uint8_t _unknown_132[292];
        unsigned long field_424;
        uint8_t _unknown_432[16];
    };

    class RSevenDebugPresetProvider {
    public:
        RSevenDebugPresetProvider();
    };

    // 0x100064bd0
    RSevenDebugPresetProvider::RSevenDebugPresetProvider() {
        field_0 = PTR_vtable_100ee8920 + 16;
    }

    // 0x100065e30
    RSevenDebugConfiguration* RSevenDebugConfiguration::operator=(RSevenDebugConfiguration&& rSevenDebugConfiguration) {
        field_0 = rSevenDebugConfiguration.field_0;
        field_8 = rSevenDebugConfiguration.field_8;
        uint8_t uVar5 = rSevenDebugConfiguration.field_60;
        uint32_t uVar6 = rSevenDebugConfiguration.field_61;
        uint64_t uVar1 = rSevenDebugConfiguration.field_64;
        field_56 = rSevenDebugConfiguration.field_56;
        field_60 = uVar5;
        field_61 = uVar6;
        field_64 = uVar1;
        field_72 = rSevenDebugConfiguration.field_72;
        uVar1 = *(uint64_t*)((long)&rSevenDebugConfiguration.field_140 + 4);
        uint64_t uVar2 = *(uint64_t*)((long)&rSevenDebugConfiguration.field_148 + 4);
        uint64_t uVar3 = rSevenDebugConfiguration.field_160;
        uint64_t uVar4 = rSevenDebugConfiguration.field_168;
        uint32_t uVar7 = rSevenDebugConfiguration.field_176;
        uVar5 = rSevenDebugConfiguration.field_180;
        uVar6 = rSevenDebugConfiguration.field_181;
        *(uint64_t*)&field_136 = *(uint64_t*)&rSevenDebugConfiguration.field_136;
        *(uint64_t*)((long)&field_140 + 4) = uVar1;
        *(uint64_t*)((long)&field_148 + 4) = uVar2;
        field_160 = uVar3;
        field_168 = uVar4;
        field_176 = uVar7;
        field_180 = uVar5;
        field_181 = uVar6;
        uVar7 = rSevenDebugConfiguration.field_184;
        uVar5 = rSevenDebugConfiguration.field_188;
        field_181 = rSevenDebugConfiguration.field_181;
        field_184 = uVar7;
        field_188 = uVar5;
        *field_192 = rSevenDebugConfiguration.field_192;
        uVar1 = *(uint64_t*)((long)&rSevenDebugConfiguration.field_256 + 4);
        *(uint64_t*)(field_192 + 60) = *(uint64_t*)(rSevenDebugConfiguration.field_192 + 60);
        *(uint64_t*)((long)&field_256 + 4) = uVar1;
        field_272 = rSevenDebugConfiguration.field_272;
        field_352 = rSevenDebugConfiguration.field_352;
        return this;
    }

    // 0x100079830
    RSevenDebugDisplay::~RSevenDebugDisplay() {
        field_432.~shared_ptr();
        field_144.~fixed_string();
    }

    // 0x100086120
    RSevenDebugConfiguration::RSevenDebugConfiguration(const RSevenDebugConfiguration& rSevenDebugConfiguration)
        : field_0(rSevenDebugConfiguration.field_0), field_8(rSevenDebugConfiguration.field_8) {
        _memcpy(&field_56, &rSevenDebugConfiguration.field_56, 304);
    }

    // 0x100086560
    RSevenDebugConfiguration::RSevenDebugConfiguration(RSevenDebugConfiguration&& rSevenDebugConfiguration)
        : field_0(rSevenDebugConfiguration.field_0), field_8(rSevenDebugConfiguration.field_8) {
        _memcpy(&field_56, &rSevenDebugConfiguration.field_56, 304);
    }

} // namespace jag::oldscape
