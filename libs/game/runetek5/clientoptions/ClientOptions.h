// libs/game/runetek5/clientoptions/ClientOptions.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::game {
    class ClientOptions {
    public:
        ClientOptions(SystemSettings* systemSettings, graphics::RT7Core& rt7Core,
                      graphics::EffectManager& effectManager, bool arg4);
        void ClampPreset(ClientOptionsConfig& clientOptionsConfig);
        ~ClientOptions();
        void SaveSettings();
        void MainLogic(graphics::RT7Core& rt7Core, graphics::EffectManager& effectManager, bool arg3);
        char LoadSettings(graphics::RT7Core& rt7Core, graphics::EffectManager& effectManager);
        auto GetGraphicsOptions(const char* str) const;
        bool SetGraphicsOptions(eastl::string& str, PacketT<Array<unsigned char>>& arg2, graphics::RT7Core& rt7Core,
                                graphics::EffectManager& effectManager);
        auto SerialiseForServer();
        void ApplyAutoSetupPreset(option::EnumAutoSetup enumAutoSetup, graphics::RT7Core& rt7Core,
                                  graphics::EffectManager& effectManager);
        void AutoSetupPowerSave(graphics::RT7Core& rt7Core, graphics::EffectManager& effectManager);
        void ApplySettings(const ClientOptionsConfig& clientOptionsConfig, graphics::RT7Core& rt7Core,
                           graphics::EffectManager& effectManager);
        void ApplyAutoSetup(const perf::PerfModuleReporter& perfModuleReporter, graphics::RT7Core& rt7Core,
                            graphics::EffectManager& effectManager);
        bool IsOptionAvailable(ClientOptionId clientOptionId, option::OptionClient optionClient) const;
        unsigned long IsOptionModifiable(ClientOptionId clientOptionId, const graphics::RT7Core* rt7Core) const;
        bool CanSetOptionValue(ClientOptionId clientOptionId, int arg2) const;
        int GetOptionValue(ClientOptionId clientOptionId) const;
        char* GetOptionValueLabel(ClientOptionId clientOptionId, int arg2) const;
        unsigned int ValueLabelsAvailableForOption(ClientOptionId clientOptionId) const;
        bool IsToggleOption(ClientOptionId clientOptionId) const;
        uint64_t GetOptionValueRange(ClientOptionId clientOptionId) const;
        void SetOptionValue(ClientOptionId clientOptionId, int arg2, graphics::RT7Core& rt7Core,
                            graphics::EffectManager& effectManager);
        uint64_t GetOption(ClientOptionId clientOptionId) const;
        uint64_t GetOptionName(ClientOptionId clientOptionId) const;
        static int32_t NO_SETTINGS_VERSION_SAVE_VERSION;  // = 1
        static int32_t CURRENT_SETTINGS_SAVE_VERSION[44]; // initialised in its definition
        static const char* VERSION_FIELD;                 // = "Version"
        static int32_t m_lowSettings[19];                 // initialised in its definition
        static int32_t m_medSettings[19];                 // initialised in its definition
        static int32_t m_highSettings[19];                // initialised in its definition
        static int32_t m_ultraSettings[19];               // initialised in its definition
        static const void* m_settingPresets[6];           // initialised in its definition
        static uint8_t m_minSettings[80];

    private:
        long field_0;
        Settings* field_8;
        char* field_16;
        EnumAutoSetup field_24;
        uint8_t _unknown_28[8];
        int field_36;
        uint8_t _unknown_40[168];
        AnisotropicFiltering field_208;
        uint8_t _unknown_401[15];
        AntialiasingMode field_416;
        AntialiasingQuality field_624;
        Bloom field_832;
        uint8_t _unknown_1025[15];
        Brightness field_1040;
        uint8_t _unknown_1233[15];
        DOF field_1248;
        DrawDistance field_1456;
        uint8_t _unknown_1649[15];
        HapticFeedback field_1664;
        uint8_t _unknown_1857[15];
        GroundBlending field_1872;
        uint8_t _unknown_2136[8];
        HapticFeedback field_2144;
        uint8_t _unknown_2337[15];
        LightingQuality field_2352;
        uint8_t _unknown_2545[15];
        Shadows field_2560;
        ShadowQuality field_2768;
        uint8_t _unknown_2961[15];
        AmbientOcclusion field_2976;
        uint8_t _unknown_3169[15];
        Textures field_3184;
        Reflections field_3392;
        uint8_t _unknown_3585[15];
        VSync field_3600;
        uint8_t _unknown_3793[15];
        VolumetricLighting field_3808;
        uint8_t _unknown_4001[223];
        MaxForegroundFps field_4224;
        uint8_t _unknown_4417[15];
        MaxBackgroundFps field_4432;
        uint8_t _unknown_4625[15];
        GameRenderScale field_4640;
        uint8_t _unknown_4833[15];
        GameRenderScale field_4848;
        uint8_t _unknown_5041[15];
        SmoothClipPlaneFade field_5056;
        uint8_t _unknown_5249[15];
        CanopyCutout field_5264;
        uint8_t _unknown_5457[15];
        ParticleQuality field_5472;
        uint8_t _unknown_5665[15];
        HapticFeedback field_5680;
        uint8_t _unknown_5873[15];
        RemoveRoof field_5888;
        uint8_t _unknown_6081[15];
        RemoveRoof field_6096;
        uint8_t _unknown_6289[15];
        Language field_6304;
        uint8_t _unknown_6497[15];
        EntityHighlights field_6512;
        uint8_t _unknown_6705[15];
        HapticFeedback field_6720;
        uint8_t _unknown_6913[15];
        HapticFeedback field_6928;
        uint8_t _unknown_7121[15];
        CustomPlayerModelCount field_7136;
        uint8_t _unknown_7329[15];
        HapticFeedback field_7344;
        uint8_t _unknown_7537[15];
        Volume field_7552;
        Volume field_7760;
        Volume field_7968;
        Volume field_8176;
        Volume field_8384;
        Volume field_8592;
        Diagnostics field_8800;
        uint8_t _unknown_9016[8];
        RenderDeviceCapsOverride field_9024;
        uint8_t _unknown_9201[15];
        uint8_t* field_9216;
        uint8_t* field_9224;
        uint8_t* field_9232;
        uint8_t* field_9240;
        uint8_t* field_9248;
        uint8_t* field_9256;
        uint8_t* field_9264;
        uint8_t* field_9272;
        uint8_t* field_9280;
        uint8_t* field_9288;
        uint8_t* field_9296;
        uint8_t* field_9304;
        uint8_t* field_9312;
        uint8_t* field_9320;
        uint8_t* field_9328;
        uint8_t* field_9336;
        uint8_t* field_9344;
        uint8_t* field_9352;
        uint8_t* field_9360;
        uint8_t* field_9368;
        uint8_t* field_9376;
        uint8_t* field_9384;
        uint8_t* field_9392;
        uint8_t* field_9400;
        uint8_t* field_9408;
        uint8_t* field_9416;
        uint8_t* field_9424;
        uint8_t* field_9432;
        uint8_t* field_9440;
        uint8_t* field_9448;
        uint8_t* field_9456;
        uint8_t* field_9464;
        uint8_t* field_9472;
        uint8_t* field_9480;
        uint8_t* field_9488;
        uint8_t* field_9496;
        uint8_t* field_9504;
        uint8_t* field_9512;
        uint8_t* field_9520;
        uint8_t* field_9528;
        uint8_t* field_9536;
        uint8_t _unknown_9544[8];
        Settings field_9552;
        uint8_t _unknown_9704[40];
        unsigned long long field_9744;
        int field_9752;
        char field_9756;
        uint8_t field_9757;
        uint8_t _unknown_9758[2];
    };

    // 0x100709d90
    uint64_t ClientOptions::GetOptionName(ClientOptionId clientOptionId) const {
        auto plVar1 = GetOption(clientOptionId);
        if (plVar1 == nullptr) {
            return 0;
        }
        return (**(void (**)(...))(*plVar1 + 96))(plVar1);
    }

} // namespace jag::game
