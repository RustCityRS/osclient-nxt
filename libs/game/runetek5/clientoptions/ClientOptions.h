// libs/game/runetek5/clientoptions/ClientOptions.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::game {
    class ClientOptions {
    public:
        ClientOptions(SystemSettings*, graphics::RT7Core&, graphics::EffectManager&, bool);
        void ClampPreset(ClientOptionsConfig&);
        ~ClientOptions();
        void SaveSettings();
        void MainLogic(graphics::RT7Core&, graphics::EffectManager&, bool);
        char LoadSettings(graphics::RT7Core&, graphics::EffectManager&);
        GetGraphicsOptions(char const*) const;
        bool SetGraphicsOptions(eastl::string&, PacketT<Array<unsigned char, eastl::allocator>>&, graphics::RT7Core&,
                                graphics::EffectManager&);
        SerialiseForServer();
        void ApplyAutoSetupPreset(option::EnumAutoSetup, graphics::RT7Core&, graphics::EffectManager&);
        void AutoSetupPowerSave(graphics::RT7Core&, graphics::EffectManager&);
        void ApplySettings(ClientOptionsConfig const&, graphics::RT7Core&, graphics::EffectManager&);
        void ApplyAutoSetup(perf::PerfModuleReporter const&, graphics::RT7Core&, graphics::EffectManager&);
        IsOptionAvailable(ClientOptionId, option::OptionClient) const;
        ulong IsOptionModifiable(ClientOptionId, graphics::RT7Core const*) const;
        CanSetOptionValue(ClientOptionId, int) const;
        int GetOptionValue(ClientOptionId) const;
        char* GetOptionValueLabel(ClientOptionId, int) const;
        uint ValueLabelsAvailableForOption(ClientOptionId) const;
        IsToggleOption(ClientOptionId) const;
        GetOptionValueRange(ClientOptionId) const;
        void SetOptionValue(ClientOptionId, int, graphics::RT7Core&, graphics::EffectManager&);
        GetOption(ClientOptionId) const;
        GetOptionName(ClientOptionId) const;
        static /* 4 bytes */ NO_SETTINGS_VERSION_SAVE_VERSION; // = 1
        static /* 176 bytes */ CURRENT_SETTINGS_SAVE_VERSION;  // initialised in its definition
        static /* 8 bytes */ VERSION_FIELD;                    // = "Version"
        static /* 76 bytes */ m_lowSettings;                   // initialised in its definition
        static /* 76 bytes */ m_medSettings;                   // initialised in its definition
        static /* 76 bytes */ m_highSettings;                  // initialised in its definition
        static /* 76 bytes */ m_ultraSettings;                 // initialised in its definition
        static /* 48 bytes */ m_settingPresets;                // initialised in its definition
        static /* 80 bytes */ m_minSettings;

        // data members, from how the methods use this: 9760 bytes
        long field_0;                   // offset 0
        Settings* field_8;              // offset 8
        BucketAllocatorEASTL* field_16; // offset 16
        int field_24;                   // offset 24
        char _unknown_28[8];
        int field_36; // offset 36
        char _unknown_40[168];
        AnisotropicFiltering field_208; // offset 208
        char _unknown_401[15];
        AntialiasingMode field_416;    // offset 416
        AntialiasingQuality field_624; // offset 624
        Bloom field_832;               // offset 832
        char _unknown_1025[15];
        Brightness field_1040; // offset 1040
        char _unknown_1233[15];
        DOF field_1248;          // offset 1248
        DrawDistance field_1456; // offset 1456
        char _unknown_1649[15];
        HapticFeedback field_1664; // offset 1664
        char _unknown_1857[15];
        GroundBlending field_1872; // offset 1872
        char _unknown_2136[8];
        HapticFeedback field_2144; // offset 2144
        char _unknown_2337[15];
        LightingQuality field_2352; // offset 2352
        char _unknown_2545[15];
        Shadows field_2560;       // offset 2560
        ShadowQuality field_2768; // offset 2768
        char _unknown_2961[15];
        AmbientOcclusion field_2976; // offset 2976
        char _unknown_3169[15];
        Textures field_3184;    // offset 3184
        Reflections field_3392; // offset 3392
        char _unknown_3585[15];
        VSync field_3600; // offset 3600
        char _unknown_3793[15];
        VolumetricLighting field_3808; // offset 3808
        char _unknown_4001[223];
        MaxForegroundFps field_4224; // offset 4224
        char _unknown_4417[15];
        MaxBackgroundFps field_4432; // offset 4432
        char _unknown_4625[15];
        GameRenderScale field_4640; // offset 4640
        char _unknown_4833[15];
        GameRenderScale field_4848; // offset 4848
        char _unknown_5041[15];
        SmoothClipPlaneFade field_5056; // offset 5056
        char _unknown_5249[15];
        CanopyCutout field_5264; // offset 5264
        char _unknown_5457[15];
        ParticleQuality field_5472; // offset 5472
        char _unknown_5665[15];
        HapticFeedback field_5680; // offset 5680
        char _unknown_5873[15];
        RemoveRoof field_5888; // offset 5888
        char _unknown_6081[15];
        RemoveRoof field_6096; // offset 6096
        char _unknown_6289[15];
        Language field_6304; // offset 6304
        char _unknown_6497[15];
        EntityHighlights field_6512; // offset 6512
        char _unknown_6705[15];
        HapticFeedback field_6720; // offset 6720
        char _unknown_6913[15];
        HapticFeedback field_6928; // offset 6928
        char _unknown_7121[15];
        CustomPlayerModelCount field_7136; // offset 7136
        char _unknown_7329[15];
        HapticFeedback field_7344; // offset 7344
        char _unknown_7537[15];
        Volume field_7552;      // offset 7552
        Volume field_7760;      // offset 7760
        Volume field_7968;      // offset 7968
        Volume field_8176;      // offset 8176
        Volume field_8384;      // offset 8384
        Volume field_8592;      // offset 8592
        Diagnostics field_8800; // offset 8800
        char _unknown_9016[8];
        RenderDeviceCapsOverride field_9024; // offset 9024
        char _unknown_9201[15];
        undefined1* field_9216; // offset 9216
        undefined1* field_9224; // offset 9224
        undefined1* field_9232; // offset 9232
        undefined1* field_9240; // offset 9240
        undefined1* field_9248; // offset 9248
        undefined1* field_9256; // offset 9256
        undefined1* field_9264; // offset 9264
        undefined1* field_9272; // offset 9272
        undefined1* field_9280; // offset 9280
        undefined1* field_9288; // offset 9288
        undefined1* field_9296; // offset 9296
        undefined1* field_9304; // offset 9304
        undefined1* field_9312; // offset 9312
        undefined1* field_9320; // offset 9320
        undefined1* field_9328; // offset 9328
        undefined1* field_9336; // offset 9336
        undefined1* field_9344; // offset 9344
        undefined1* field_9352; // offset 9352
        undefined1* field_9360; // offset 9360
        undefined1* field_9368; // offset 9368
        undefined1* field_9376; // offset 9376
        undefined1* field_9384; // offset 9384
        undefined1* field_9392; // offset 9392
        undefined1* field_9400; // offset 9400
        undefined1* field_9408; // offset 9408
        undefined1* field_9416; // offset 9416
        undefined1* field_9424; // offset 9424
        undefined1* field_9432; // offset 9432
        undefined1* field_9440; // offset 9440
        undefined1* field_9448; // offset 9448
        undefined1* field_9456; // offset 9456
        undefined1* field_9464; // offset 9464
        undefined1* field_9472; // offset 9472
        undefined1* field_9480; // offset 9480
        undefined1* field_9488; // offset 9488
        undefined1* field_9496; // offset 9496
        undefined1* field_9504; // offset 9504
        undefined1* field_9512; // offset 9512
        undefined1* field_9520; // offset 9520
        undefined1* field_9528; // offset 9528
        undefined1* field_9536; // offset 9536
        char _unknown_9544[8];
        Settings field_9552; // offset 9552
        char _unknown_9704[40];
        ulonglong field_9744;  // offset 9744
        int field_9752;        // offset 9752
        bool field_9756;       // offset 9756
        undefined1 field_9757; // offset 9757
        char _unknown_9758[2];
    };

    // 0x100709d90, 32 bytes, inline, placed by class name
    // ClientOptions::GetOptionName(ClientOptionId) const
    undefined8 ClientOptions::GetOptionName() {
        long* plVar1;

        plVar1 = (long*)GetOption();
        if (plVar1 == (long*)0) {
            return 0;
        }
        return (**(code**)(*plVar1 + 96))(plVar1);
    }

} // namespace jag::game
