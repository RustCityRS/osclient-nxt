// libs/game/runetek5/clientoptions/ClientOptions.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.runetek5

#include "ClientOptions.h"

namespace jag::game {
    // 0x100d431ac
    int32_t ClientOptions::NO_SETTINGS_VERSION_SAVE_VERSION = 1;

    // 0x100d431b0
    int32_t ClientOptions::CURRENT_SETTINGS_SAVE_VERSION[44] = {
        8,           0,          0,          1078525952,  1414677840, 1073291771,  -1094119461, 1053364187,
        -1080636444, 1066847204, 1,          2,           0,          2139095040,  693479576,   1075800698,
        1842104505,  1084514096, 1202590843, 1066695393,  0,          1081671680,  1610612736,  1071194619,
        -2147483648, 1072879996, 905647195,  -1073524657, -851859334, -1076198791, -1480842745, -1076198791,
        -1259857073, 1062948481, 0,          -1071120384, -755914244, 1063281229,  0,           0,
        1119092736,  1119092736, 1119092736, 1119092736,
    };

    // 0x100f3dd08
    const char* ClientOptions::VERSION_FIELD = "Version";

    // 0x100f3dd10
    int32_t ClientOptions::m_lowSettings[19] = {
        0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 0, 0, 1, 0, 0, 1, 1, 0,
    };

    // 0x100f3dd5c
    int32_t ClientOptions::m_medSettings[19] = {
        1, 0, 1, 0, 1, 1, 1, 1, 1, 1, 0, 1, 0, 1, 1, 1, 1, 2, 1,
    };

    // 0x100f3dda8
    int32_t ClientOptions::m_highSettings[19] = {
        2, 1, 2, 1, 2, 2, 1, 2, 1, 2, 0, 2, 0, 1, 1, 1, 1, 3, 2,
    };

    // 0x100f3ddf4
    int32_t ClientOptions::m_ultraSettings[19] = {
        2, 2, 3, 1, 3, 3, 1, 3, 1, 3, 2, 3, 3, 1, 1, 1, 1, 3, 3,
    };

    // 0x100f3de40
    const void* ClientOptions::m_settingPresets[6] = {
        &m_minSettings, &m_lowSettings, &m_medSettings, &m_highSettings, &m_ultraSettings, nullptr,
    };

    // 0x1039bc0f0
    uint8_t ClientOptions::m_minSettings[80];

    // 0x100607df0
    ClientOptions::ClientOptions(SystemSettings* systemSettings, graphics::RT7Core& rt7Core,
                                 graphics::EffectManager& effectManager, bool arg4) {
        function<void(Settings*)> local_68[48];
        long local_38;

        uint8_t* settings = field_9552;
        new (this) option::AutoSetup(*systemSettings, *settings, "AutoSetup");
        new (field_208) option::AnisotropicFiltering(*systemSettings, *settings, "AnisotropicFiltering");
        uint8_t* this_00 = field_416;
        uint8_t* antialiasingQuality = field_624;
        new (this_00) option::AntialiasingMode(*systemSettings, *settings, "AntialiasingMode", antialiasingQuality);
        new (antialiasingQuality)
            option::AntialiasingQuality(*systemSettings, *settings, "AntialiasingQuality", this_00);
        new (field_832) option::Bloom(*systemSettings, *settings, "Bloom");
        new (field_1040) option::Brightness(*systemSettings, *settings, "Brightness");
        uint8_t* drawDistance = field_1456;
        new (field_1248) option::DOF(*systemSettings, *settings, "DOF", drawDistance);
        new (drawDistance) option::DrawDistance(*systemSettings, *settings, "DrawDistance");
        new (field_1664) option::FlickeringEffects(*systemSettings, *settings, "FlickeringEffects");
        uint8_t* this_01 = field_1872;
        uint8_t* textures = field_3184;
        new (this_01) option::GroundBlending(*systemSettings, *settings, "GroundBlending", textures);
        new (field_2144) option::GroundDecor(*systemSettings, *settings, "GroundDecor");
        new (field_2352) option::LightingQuality(*systemSettings, *settings, "LightingQuality");
        uint8_t* shadowQuality = field_2768;
        new (field_2560) option::Shadows(*systemSettings, *settings, "Shadows", shadowQuality);
        new (shadowQuality) option::ShadowQuality(*systemSettings, *settings, "ShadowQuality");
        new (field_2976) option::AmbientOcclusion(*systemSettings, *settings, "AmbientOcclusion");
        new (textures) option::Textures(*systemSettings, *settings, "Texturing", this_01);
        new (field_3392) option::Reflections(*systemSettings, *settings, "Reflections");
        new (field_3600) option::VSync(*systemSettings, *settings, "VSync");
        new (field_3808) option::VolumetricLighting(*systemSettings, *settings, "VolumetricLighting");
        new (&field_4016) option::WindowMode(*systemSettings, *settings, "WindowMode");
        new (field_4224) option::MaxForegroundFps(*systemSettings, *settings, "MaxForegroundFps");
        new (field_4432) option::MaxBackgroundFps(*systemSettings, *settings, "MaxBackgroundFps");
        new (field_4640) option::GameRenderScale(*systemSettings, *settings, "GameRenderScale");
        new (field_4848) option::InterfaceScale(*systemSettings, *settings, "InterfaceScale");
        new (field_5056) option::SmoothClipPlaneFade(*systemSettings, *settings, "SmoothClipFade");
        new (field_5264) option::CanopyCutout(*systemSettings, *settings, "CanopyCutout");
        new (field_5472) option::ParticleQuality(*systemSettings, *settings, "ParticleQuality");
        new (field_5680) option::CustomCursors(*systemSettings, *settings, "CustomCursors");
        new (field_5888) option::RemoveRoof(*systemSettings, *settings, "RemoveRoof");
        new (field_6096) option::RemoveRoof(*systemSettings, *settings, "RemoveRoof");
        new (field_6304) option::Language(*systemSettings, *settings, "Language");
        new (field_6512) option::EntityHighlights(*systemSettings, *settings, "EntityHighlights");
        new (field_6720) option::RichPresence(*systemSettings, *settings, "RichPresence");
        new (field_6928) option::HapticFeedback(*systemSettings, *settings, "HapticFeedback");
        new (field_7136) option::CustomPlayerModelCount(*systemSettings, *settings, "CustomPlayerModelCount");
        new (field_7344) option::CutsceneSubtitles(*systemSettings, *settings, "CutsceneSubtitles");
        new (field_7552) option::Volume(*systemSettings, *settings, "VolumeMainEffects", 1);
        new (field_7760) option::Volume(*systemSettings, *settings, "VolumeBackgroundEffects", 2);
        new (field_7968) option::Volume(*systemSettings, *settings, "VolumeSpeech", 5);
        new (field_8176) option::Volume(*systemSettings, *settings, "VolumeMainMusic", 4);
        new (field_8384) option::Volume(*systemSettings, *settings, "VolumeLoginMusic", 3);
        new (field_8592) option::Volume(*systemSettings, *settings, "VolumeMaster", 0);
        new (field_8800) option::Diagnostics(*systemSettings, *settings, "Diagnostics");
        new (field_9024) option::RenderDeviceCapsOverride(*systemSettings, *settings, "DeviceCapOverrides");
        field_9216 = field_2976;
        field_9224 = field_208;
        field_9232 = this_00;
        field_9240 = antialiasingQuality;
        field_9248 = field_832;
        field_9256 = field_1040;
        field_9264 = field_5680;
        field_9272 = field_1248;
        field_9280 = drawDistance;
        field_9288 = this_01;
        field_9296 = field_2144;
        field_9304 = field_4848;
        field_9312 = field_2352;
        field_9320 = field_4224;
        field_9328 = field_4432;
        field_9336 = field_3392;
        field_9344 = field_5888;
        field_9352 = field_6096;
        field_9360 = field_4640;
        field_9368 = field_2560;
        field_9376 = shadowQuality;
        field_9384 = textures;
        field_9392 = field_7552;
        field_9400 = field_8176;
        field_9408 = field_7760;
        field_9416 = field_7968;
        field_9424 = field_8384;
        field_9432 = field_3808;
        field_9440 = field_3600;
        field_9448 = field_6512;
        field_9456 = field_5056;
        field_9464 = field_5264;
        field_9472 = field_8800;
        field_9480 = field_6720;
        field_9488 = field_6304;
        field_9496 = field_6928;
        field_9504 = field_5472;
        field_9512 = field_7136;
        field_9520 = field_8592;
        field_9528 = field_9024;
        field_9536 = field_7344;
        std::function<void(Settings*)>::function<ClientOptions::ClientOptions(SystemSettings*, graphics::RT7Core&,
                                                                              graphics::EffectManager&, bool)::__0,
                                                 void>(local_68, (__0*)this);
        field_9744 = 0;
        field_9752 = 0;
        field_9756 = (char)effectManager;
        field_9757 = 1;
        uint8_t* puVar1 = PTR_m_settingPresets_100ee65e8;
        long lVar2 = 0;
        do {
            ClampPreset(*(*(ClientOptionsConfig**)(puVar1 + lVar2)));
            lVar2 = lVar2 + 8;
        } while (lVar2 != 40);
    }

    // 0x100608b00
    void ClientOptions::ClampPreset(ClientOptionsConfig& clientOptionsConfig) {
        uint8_t local_40[16];

        local_40._0_8_ = field_416->GetSupportedValueRange();
        EnumAntialiasingMode local_30 = local_40->GetX();
        local_40._8_8_ = field_416->GetSupportedValueRange();
        EnumAntialiasingMode local_2c = ((local_40 + 8))->GetZ();
        clientOptionsConfig.field_0 =
            math::Clamp<option::EnumAntialiasingMode>(clientOptionsConfig.field_0, local_30, local_2c);
        local_40._0_8_ = field_624->GetSupportedValueRange();
        local_30 = local_40->GetX();
        local_40._8_8_ = field_624->GetSupportedValueRange();
        local_2c = ((local_40 + 8))->GetZ();
        auto GVar2 = math::Clamp<graphics::GraphicsQuality>(clientOptionsConfig.field_4, local_30, local_2c);
        clientOptionsConfig.field_4 = GVar2;
        local_40._0_8_ = field_832->GetSupportedValueRange();
        local_30 = local_40->GetX();
        local_40._8_8_ = field_832->GetSupportedValueRange();
        local_2c = ((local_40 + 8))->GetZ();
        clientOptionsConfig.field_8 = math::Clamp<option::EnumBloom>(clientOptionsConfig.field_8, local_30, local_2c);
        local_40._0_8_ = field_1248->GetSupportedValueRange();
        local_30 = local_40->GetX();
        local_40._8_8_ = field_1248->GetSupportedValueRange();
        local_2c = ((local_40 + 8))->GetZ();
        auto EVar4 = math::Clamp<option::EnumOptionToggle>(clientOptionsConfig.field_12, local_30, local_2c);
        clientOptionsConfig.field_12 = EVar4;
        local_40._0_8_ = field_1456->GetSupportedValueRange();
        local_30 = local_40->GetX();
        local_40._8_8_ = field_1456->GetSupportedValueRange();
        local_2c = ((local_40 + 8))->GetZ();
        GVar2 = math::Clamp<graphics::GraphicsQuality>(clientOptionsConfig.field_16, local_30, local_2c);
        clientOptionsConfig.field_16 = GVar2;
        local_40._0_8_ = field_2352->GetSupportedValueRange();
        local_30 = local_40->GetX();
        local_40._8_8_ = field_2352->GetSupportedValueRange();
        local_2c = ((local_40 + 8))->GetZ();
        GVar2 = math::Clamp<graphics::GraphicsQuality>(clientOptionsConfig.field_20, local_30, local_2c);
        clientOptionsConfig.field_20 = GVar2;
        local_40._0_8_ = field_2560->GetSupportedValueRange();
        local_30 = local_40->GetX();
        local_40._8_8_ = field_2560->GetSupportedValueRange();
        local_2c = ((local_40 + 8))->GetZ();
        EVar4 = math::Clamp<option::EnumOptionToggle>(clientOptionsConfig.field_24, local_30, local_2c);
        clientOptionsConfig.field_24 = EVar4;
        local_40._0_8_ = field_2768->GetSupportedValueRange();
        local_30 = local_40->GetX();
        local_40._8_8_ = field_2768->GetSupportedValueRange();
        local_2c = ((local_40 + 8))->GetZ();
        GVar2 = math::Clamp<graphics::GraphicsQuality>(clientOptionsConfig.field_28, local_30, local_2c);
        clientOptionsConfig.field_28 = GVar2;
        local_40._0_8_ = field_3184->GetSupportedValueRange();
        local_30 = local_40->GetX();
        local_40._8_8_ = field_3184->GetSupportedValueRange();
        local_2c = ((local_40 + 8))->GetZ();
        clientOptionsConfig.field_32 =
            math::Clamp<option::EnumTextureMode>(clientOptionsConfig.field_32, local_30, local_2c);
        local_40._0_8_ = field_3392->GetSupportedValueRange();
        local_30 = local_40->GetX();
        local_40._8_8_ = field_3392->GetSupportedValueRange();
        local_2c = ((local_40 + 8))->GetZ();
        GVar2 = math::Clamp<graphics::GraphicsQuality>(clientOptionsConfig.field_36, local_30, local_2c);
        clientOptionsConfig.field_36 = GVar2;
        local_40._0_8_ = field_2976->GetSupportedValueRange();
        local_30 = local_40->GetX();
        local_40._8_8_ = field_2976->GetSupportedValueRange();
        local_2c = ((local_40 + 8))->GetZ();
        clientOptionsConfig.field_40 =
            math::Clamp<graphics::SSAOPass::Mode>(clientOptionsConfig.field_40, local_30, local_2c);
        local_40._0_8_ = field_208->GetSupportedValueRange();
        local_30 = local_40->GetX();
        local_40._8_8_ = field_208->GetSupportedValueRange();
        local_2c = ((local_40 + 8))->GetZ();
        clientOptionsConfig.field_44 =
            math::Clamp<option::EnumAnisotropicFiltering>(clientOptionsConfig.field_44, local_30, local_2c);
        local_40._0_8_ = field_3808->GetSupportedValueRange();
        local_30 = local_40->GetX();
        local_40._8_8_ = field_3808->GetSupportedValueRange();
        local_2c = ((local_40 + 8))->GetZ();
        clientOptionsConfig.field_48 =
            math::Clamp<option::EnumVolumetricLighting>(clientOptionsConfig.field_48, local_30, local_2c);
        local_40._0_8_ = field_2144->GetSupportedValueRange();
        local_30 = local_40->GetX();
        local_40._8_8_ = field_2144->GetSupportedValueRange();
        local_2c = ((local_40 + 8))->GetZ();
        EVar4 = math::Clamp<option::EnumOptionToggle>(clientOptionsConfig.field_52, local_30, local_2c);
        clientOptionsConfig.field_52 = EVar4;
        local_40._0_8_ = field_5056->GetSupportedValueRange();
        local_30 = local_40->GetX();
        local_40._8_8_ = field_5056->GetSupportedValueRange();
        local_2c = ((local_40 + 8))->GetZ();
        EVar4 = math::Clamp<option::EnumOptionToggle>(clientOptionsConfig.field_56, local_30, local_2c);
        clientOptionsConfig.field_56 = EVar4;
        local_40._0_8_ = field_5264->GetSupportedValueRange();
        local_30 = local_40->GetX();
        local_40._8_8_ = field_5264->GetSupportedValueRange();
        local_2c = ((local_40 + 8))->GetZ();
        EVar4 = math::Clamp<option::EnumOptionToggle>(clientOptionsConfig.field_60, local_30, local_2c);
        clientOptionsConfig.field_60 = EVar4;
        local_40._0_8_ = field_6512->GetSupportedValueRange();
        local_30 = local_40->GetX();
        local_40._8_8_ = field_6512->GetSupportedValueRange();
        local_2c = ((local_40 + 8))->GetZ();
        EVar4 = math::Clamp<option::EnumOptionToggle>(clientOptionsConfig.field_64, local_30, local_2c);
        clientOptionsConfig.field_64 = EVar4;
        local_40._0_8_ = field_5472->GetSupportedValueRange();
        local_30 = local_40->GetX();
        local_40._8_8_ = field_5472->GetSupportedValueRange();
        local_2c = ((local_40 + 8))->GetZ();
        clientOptionsConfig.field_68 =
            math::Clamp<option::EnumParticleQualityLevel>(clientOptionsConfig.field_68, local_30, local_2c);
        local_40._0_8_ = field_7136->GetSupportedValueRange();
        local_30 = local_40->GetX();
        local_40._8_8_ = field_7136->GetSupportedValueRange();
        local_2c = ((local_40 + 8))->GetZ();
        GVar2 = math::Clamp<graphics::GraphicsQuality>(clientOptionsConfig.field_72, local_30, local_2c);
        clientOptionsConfig.field_72 = GVar2;
    }

    // 0x100609230
    ClientOptions::~ClientOptions() {
        if (field_9757 != '\0') {
            SaveSettings();
        }
        field_9552->~Settings();
        field_9024->~RenderDeviceCapsOverride();
        field_8800->~Diagnostics();
        field_8592->~MaxBackgroundFps();
        field_8384->~MaxBackgroundFps();
        field_8176->~MaxBackgroundFps();
        field_7968->~MaxBackgroundFps();
        field_7760->~MaxBackgroundFps();
        field_7552->~MaxBackgroundFps();
        field_7344->~HapticFeedback();
        field_7136->~Reflections();
        field_6928->~HapticFeedback();
        field_6720->~HapticFeedback();
        field_6512->~HapticFeedback();
        field_6304->~Language();
        field_6096->~RemoveRoof();
        field_5888->~RemoveRoof();
        field_5680->~HapticFeedback();
        field_5472->~ParticleQuality();
        field_5264->~HapticFeedback();
        field_5056->~HapticFeedback();
        field_4848->~GameRenderScale();
        field_4640->~GameRenderScale();
        field_4432->~MaxBackgroundFps();
        field_4224->~MaxBackgroundFps();
        field_4016.~WindowMode();
        field_3808->~VolumetricLighting();
        field_3600->~VSync();
        field_3392->~Reflections();
        field_3184->~Textures();
        field_2976->~AmbientOcclusion();
        field_2768->~Reflections();
        field_2560->~HapticFeedback();
        field_2352->~Reflections();
        field_2144->~HapticFeedback();
        field_1872->~GroundBlending();
        field_1664->~HapticFeedback();
        field_1456->~Reflections();
        field_1248->~HapticFeedback();
        field_1040->~Brightness();
        field_832->~Bloom();
        field_624->~Reflections();
        field_416->~AntialiasingMode();
        field_208->~AnisotropicFiltering();
    }

    // 0x100609690
    void ClientOptions::SaveSettings() {
        int iVar1 = field_9752;
        auto this_00 = logger::default_logger();
        if (iVar1 == 2) {
            this_00->Log(false, 8,
                         "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                         "clientoptions/ClientOptions.cpp",
                         256, "Saving ClientOptions");
            field_9552->SetValue<int>(VERSION_FIELD, 8);
            field_208->SaveSetting();
            field_416->SaveSetting();
            field_624->SaveSetting();
            SaveSetting();
            field_832->SaveSetting();
            field_1040->SaveSetting();
            field_1248->SaveSetting();
            field_1456->SaveSetting();
            field_1664->SaveSetting();
            field_1872->SaveSetting();
            field_2144->SaveSetting();
            field_2352->SaveSetting();
            field_2560->SaveSetting();
            field_2768->SaveSetting();
            field_3184->SaveSetting();
            field_4016.SaveSetting();
            field_4224->SaveSetting();
            field_4432->SaveSetting();
            field_4640->SaveSetting();
            field_4848->SaveSetting();
            field_2976->SaveSetting();
            field_3392->SaveSetting();
            field_3808->SaveSetting();
            field_3600->SaveSetting();
            field_5056->SaveSetting();
            field_5264->SaveSetting();
            field_5472->SaveSetting();
            field_5680->SaveSetting();
            field_5888->SaveSetting();
            field_6512->SaveSetting();
            field_6720->SaveSetting();
            field_6304->SaveSetting();
            field_6928->SaveSetting();
            field_7136->SaveSetting();
            field_7344->SaveSetting();
            field_7552->SaveSetting();
            field_7760->SaveSetting();
            field_7968->SaveSetting();
            field_8176->SaveSetting();
            field_8384->SaveSetting();
            field_8592->SaveSetting();
            field_8800->SaveSetting();
            field_9024->SaveSetting();
        } else {
            this_00->Log(false, 3,
                         "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                         "clientoptions/ClientOptions.cpp",
                         312, "Not saving ClientOptions as previous settings (or defaults) were not loaded");
        }
    }

    // 0x100609930
    void ClientOptions::MainLogic(graphics::RT7Core& rt7Core, graphics::EffectManager& effectManager, bool arg3) {
        LoadSettings(rt7Core, effectManager);
    }

    // 0x100609940
    char ClientOptions::LoadSettings(graphics::RT7Core& rt7Core, graphics::EffectManager& effectManager) {
        uint8_t arg3;
        bool arg3_00;
        int iVar1;

        if (field_9752 == 1) {
            iVar1 = ((RenderDevice*)Instance())->GetReadyState();
            if (iVar1 == 0) {
                arg3 = true;
                if (field_9756 == '\0') {
                    arg3 = input::InputState::IsKeyDown(1);
                }
                if (arg3 != false) {
                    (logger::default_logger())
                        ->Log(false, 8,
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                              "clientoptions/ClientOptions.cpp",
                              325, "=== SAFE MODE === Using default graphics options ===");
                }
                iVar1 = field_9552->GetValueWithDefault<int>(VERSION_FIELD, NO_SETTINGS_VERSION_SAVE_VERSION);
                field_208->LoadSetting(rt7Core, effectManager, (bool)arg3);
                field_416->LoadSetting(rt7Core, effectManager, (bool)arg3);
                field_624->LoadSetting(rt7Core, effectManager, (bool)arg3);
                LoadSetting(rt7Core, effectManager, (bool)arg3);
                field_832->LoadSetting(rt7Core, effectManager, (bool)arg3);
                arg3_00 = (bool)(iVar1 < 2 | arg3);
                field_1040->LoadSetting(rt7Core, effectManager, arg3_00);
                field_1248->LoadSetting(rt7Core, effectManager, (bool)arg3);
                field_1456->LoadSetting(rt7Core, effectManager, (bool)arg3);
                field_1664->LoadSetting(rt7Core, effectManager, (bool)arg3);
                field_1872->LoadSetting(rt7Core, effectManager, (bool)(iVar1 < 6 | arg3));
                field_2144->LoadSetting(rt7Core, effectManager, (bool)(iVar1 < 5 | arg3));
                field_2352->LoadSetting(rt7Core, effectManager, (bool)arg3);
                field_2560->LoadSetting(rt7Core, effectManager, (bool)arg3);
                field_2768->LoadSetting(rt7Core, effectManager, (bool)arg3);
                field_3184->LoadSetting(rt7Core, effectManager, (bool)arg3);
                field_4016.LoadSetting(rt7Core, effectManager, (bool)arg3);
                field_4224->LoadSetting(rt7Core, effectManager, (bool)arg3);
                field_4432->LoadSetting(rt7Core, effectManager, (bool)arg3);
                field_4640->LoadSetting(rt7Core, effectManager, (bool)arg3);
                field_4848->LoadSetting(rt7Core, effectManager, (bool)arg3);
                field_2976->LoadSetting(rt7Core, effectManager, (bool)arg3);
                field_5056->LoadSetting(rt7Core, effectManager, (bool)arg3);
                field_5264->LoadSetting(rt7Core, effectManager, (bool)arg3);
                field_5472->LoadSetting(rt7Core, effectManager, (bool)arg3);
                field_3392->LoadSetting(rt7Core, effectManager, arg3_00);
                field_3808->LoadSetting(rt7Core, effectManager, (bool)arg3);
                field_3600->LoadSetting(rt7Core, effectManager, (bool)arg3);
                field_5680->LoadSetting(rt7Core, effectManager, false);
                field_5888->LoadSetting(rt7Core, effectManager, false);
                field_6096->SetValueInternal(field_5888->GetValue());
                field_6512->LoadSetting(rt7Core, effectManager, false);
                field_6720->LoadSetting(rt7Core, effectManager, false);
                field_6304->LoadSetting(rt7Core, effectManager, false);
                field_6928->LoadSetting(rt7Core, effectManager, false);
                field_7136->LoadSetting(rt7Core, effectManager, (bool)arg3);
                field_7344->LoadSetting(rt7Core, effectManager, (bool)arg3);
                field_7552->LoadSetting(rt7Core, effectManager, false);
                field_7760->LoadSetting(rt7Core, effectManager, false);
                field_7968->LoadSetting(rt7Core, effectManager, false);
                field_8176->LoadSetting(rt7Core, effectManager, false);
                field_8384->LoadSetting(rt7Core, effectManager, false);
                field_8592->LoadSetting(rt7Core, effectManager, false);
                field_8800->LoadSetting(rt7Core, effectManager, (bool)arg3);
                field_9024->LoadSetting(rt7Core, effectManager, (bool)arg3);
                field_9752 = 2;
                return (iVar1 == 1) + '\x01';
            }
        }
        return (field_9752 == 2) * '\x03';
    }

    // 0x10060bad0
    auto ClientOptions::GetGraphicsOptions(const char* str) const {
        int iVar1;

        if (str == nullptr) {
            iVar1 = 0;
        } else {
            iVar1 = PacketT<Array<unsigned char>>::predictLengthPStringNoConversion(str, false);
        }
        auto result((long)(iVar1 + 34));
        result.p1<oldscape::shared::LoginProt::ID>(1);
        if (str == nullptr) {
            result.p1<oldscape::shared::LoginProt::ID>(0);
        } else {
            result.p1<oldscape::shared::LoginProt::ID>(1);
            result.pStringNoConversion(str, false);
        }
        result.p1<oldscape::shared::LoginProt::ID>(0);
        auto PVar2 = field_416->GetValue();
        result.p1<oldscape::shared::LoginProt::ID>(PVar2);
        PVar2 = field_624->GetValue();
        result.p1<oldscape::shared::LoginProt::ID>(PVar2);
        PVar2 = field_832->GetValue();
        result.p1<oldscape::shared::LoginProt::ID>(PVar2);
        PVar2 = field_1040->GetValue();
        result.p1<oldscape::shared::LoginProt::ID>(PVar2);
        PVar2 = field_1456->GetValue();
        result.p1<oldscape::shared::LoginProt::ID>(PVar2);
        PVar2 = field_1664->GetValue();
        result.p1<oldscape::shared::LoginProt::ID>(PVar2);
        PVar2 = field_1872->GetValue();
        result.p1<oldscape::shared::LoginProt::ID>(PVar2);
        PVar2 = field_2144->GetValue();
        result.p1<oldscape::shared::LoginProt::ID>(PVar2);
        PVar2 = field_2352->GetValue();
        result.p1<oldscape::shared::LoginProt::ID>(PVar2);
        PVar2 = field_2560->GetValue();
        result.p1<oldscape::shared::LoginProt::ID>(PVar2);
        PVar2 = field_2768->GetValue();
        result.p1<oldscape::shared::LoginProt::ID>(PVar2);
        result.p1<oldscape::shared::LoginProt::ID>(0);
        PVar2 = field_5888->GetValue();
        result.p1<oldscape::shared::LoginProt::ID>(PVar2);
        PVar2 = field_3184->GetValue();
        result.p1<oldscape::shared::LoginProt::ID>(PVar2);
        result.p1<oldscape::shared::LoginProt::ID>(0);
        PVar2 = field_4016.GetValue();
        result.p1<oldscape::shared::LoginProt::ID>(PVar2);
        PVar2 = field_2976->GetValue();
        result.p1<oldscape::shared::LoginProt::ID>(PVar2);
        PVar2 = field_3392->GetValue();
        result.p1<oldscape::shared::LoginProt::ID>(PVar2);
        PVar2 = field_3600->GetValue();
        result.p1<oldscape::shared::LoginProt::ID>(PVar2);
        PVar2 = field_208->GetValue();
        result.p1<oldscape::shared::LoginProt::ID>(PVar2);
        PVar2 = field_3808->GetValue();
        result.p1<oldscape::shared::LoginProt::ID>(PVar2);
        PVar2 = field_5680->GetValue();
        result.p1<oldscape::shared::LoginProt::ID>(PVar2);
        result.p1<oldscape::shared::LoginProt::ID>(0);
        unsigned int uVar3 = field_4224->GetValue();
        result.p2<int>(uVar3);
        uVar3 = field_4432->GetValue();
        result.p2<int>(uVar3);
        uVar3 = field_4640->GetValue();
        result.p2<int>(uVar3);
        uVar3 = field_4848->GetValue();
        result.p2<int>(uVar3);
        return result;
    }

    // 0x10060bde0
    bool ClientOptions::SetGraphicsOptions(eastl::string& str, PacketT<Array<unsigned char>>& arg2,
                                           graphics::RT7Core& rt7Core, graphics::EffectManager& effectManager) {
        char cVar2;
        uint8_t bVar3;
        uint8_t uVar4;
        uint8_t extraout_AH;
        uint8_t extraout_AH_00;
        uint8_t extraout_AH_01;
        uint8_t extraout_AH_02;

        bool cVar1 = arg2.g1();
        if (cVar1) {
            cVar2 = arg2.g1();
            if (cVar2 == '\x01') {
                arg2.gStringNoConversion(str, false);
            }
            arg2.Skip(1);
            bVar3 = arg2.g1();
            field_416->SetValue((unsigned int)bVar3, rt7Core, effectManager, false);
            bVar3 = arg2.g1();
            field_624->SetValue((unsigned int)bVar3, rt7Core, effectManager, false);
            bVar3 = arg2.g1();
            field_832->SetValue((unsigned int)bVar3, rt7Core, effectManager, false);
            bVar3 = arg2.g1();
            field_1040->SetValue((unsigned int)bVar3, rt7Core, effectManager, false);
            bVar3 = arg2.g1();
            field_1456->SetValue((unsigned int)bVar3, rt7Core, effectManager, false);
            bVar3 = arg2.g1();
            field_1664->SetValue((unsigned int)bVar3, rt7Core, effectManager, false);
            bVar3 = arg2.g1();
            field_1872->SetValue((unsigned int)bVar3, rt7Core, effectManager, false);
            bVar3 = arg2.g1();
            field_2144->SetValue((unsigned int)bVar3, rt7Core, effectManager, false);
            bVar3 = arg2.g1();
            field_2352->SetValue((unsigned int)bVar3, rt7Core, effectManager, false);
            bVar3 = arg2.g1();
            field_2560->SetValue((unsigned int)bVar3, rt7Core, effectManager, false);
            bVar3 = arg2.g1();
            field_2768->SetValue((unsigned int)bVar3, rt7Core, effectManager, false);
            arg2.Skip(1);
            bVar3 = arg2.g1();
            field_5888->SetValue((unsigned int)bVar3, rt7Core, effectManager, false);
            bVar3 = arg2.g1();
            field_3184->SetValue((unsigned int)bVar3, rt7Core, effectManager, false);
            arg2.Skip(1);
            bVar3 = arg2.g1();
            field_4016.SetValue((unsigned int)bVar3, rt7Core, effectManager, false);
            uVar4 = arg2.g1();
            field_2976->SetValue(uVar4, rt7Core, effectManager);
            bVar3 = arg2.g1();
            field_3392->SetValue((unsigned int)bVar3, rt7Core, effectManager, false);
            cVar2 = arg2.g1s();
            field_3600->SetValue((int)cVar2, rt7Core, effectManager, false);
            bVar3 = arg2.g1();
            field_208->SetValue((unsigned int)bVar3, rt7Core, effectManager, false);
            bVar3 = arg2.g1();
            field_3808->SetValue((unsigned int)bVar3, rt7Core, effectManager, false);
            bVar3 = arg2.g1();
            field_5680->SetValue((unsigned int)bVar3, rt7Core, effectManager, false);
            arg2.Skip(1);
            uVar4 = arg2.g2();
            field_4224->SetValue((unsigned int)(((uint16_t)extraout_AH << 8) | (uint8_t)uVar4), rt7Core, effectManager,
                                 false);
            uVar4 = arg2.g2();
            field_4432->SetValue((unsigned int)(((uint16_t)extraout_AH_00 << 8) | (uint8_t)uVar4), rt7Core,
                                 effectManager, false);
            uVar4 = arg2.g2();
            field_4640->SetValue((unsigned int)(((uint16_t)extraout_AH_01 << 8) | (uint8_t)uVar4), rt7Core,
                                 effectManager, false);
            uVar4 = arg2.g2();
            field_4848->SetValue((unsigned int)(((uint16_t)extraout_AH_02 << 8) | (uint8_t)uVar4), rt7Core,
                                 effectManager, false);
        }
        return cVar1;
    }

    // 0x10060cb20
    auto ClientOptions::SerialiseForServer() {
        auto result(58);
        result.p1<oldscape::shared::LoginProt::ID>(38);
        result.p1<oldscape::shared::LoginProt::ID>(1);
        result.p1<oldscape::shared::LoginProt::ID>(0);
        auto PVar1 = field_624->GetValue();
        result.p1<oldscape::shared::LoginProt::ID>(PVar1);
        PVar1 = field_832->GetValue();
        result.p1<oldscape::shared::LoginProt::ID>(PVar1);
        PVar1 = field_1040->GetValue();
        result.p1<oldscape::shared::LoginProt::ID>(PVar1);
        result.p1<oldscape::shared::LoginProt::ID>(5);
        PVar1 = field_1456->GetValue();
        result.p1<oldscape::shared::LoginProt::ID>(PVar1);
        PVar1 = field_1664->GetValue();
        result.p1<oldscape::shared::LoginProt::ID>(PVar1);
        result.p1<oldscape::shared::LoginProt::ID>(1);
        PVar1 = field_1872->GetValue();
        result.p1<oldscape::shared::LoginProt::ID>(PVar1);
        PVar1 = field_2144->GetValue();
        result.p1<oldscape::shared::LoginProt::ID>(PVar1);
        result.p1<oldscape::shared::LoginProt::ID>(2);
        result.p1<oldscape::shared::LoginProt::ID>(1);
        result.p1<oldscape::shared::LoginProt::ID>(2);
        PVar1 = field_2768->GetValue();
        result.p1<oldscape::shared::LoginProt::ID>(PVar1);
        result.p1<oldscape::shared::LoginProt::ID>(3);
        result.p1<oldscape::shared::LoginProt::ID>(0);
        result.p1<oldscape::shared::LoginProt::ID>(2);
        PVar1 = field_5888->GetValue();
        result.p1<oldscape::shared::LoginProt::ID>(PVar1);
        result.p1<oldscape::shared::LoginProt::ID>(1);
        result.p1<oldscape::shared::LoginProt::ID>(1);
        result.p1<oldscape::shared::LoginProt::ID>(0);
        PVar1 = field_3184->GetValue();
        result.p1<oldscape::shared::LoginProt::ID>(PVar1);
        result.p1<oldscape::shared::LoginProt::ID>(1);
        result.p1<oldscape::shared::LoginProt::ID>(0);
        result.p1<oldscape::shared::LoginProt::ID>(1);
        PVar1 = field_4016.GetValue();
        result.p1<oldscape::shared::LoginProt::ID>(PVar1);
        PVar1 = field_2560->GetValue();
        result.p1<oldscape::shared::LoginProt::ID>(PVar1);
        PVar1 = field_2352->GetValue();
        result.p1<oldscape::shared::LoginProt::ID>(PVar1);
        PVar1 = field_416->GetValue();
        result.p1<oldscape::shared::LoginProt::ID>(PVar1);
        PVar1 = field_2976->GetValue();
        result.p1<oldscape::shared::LoginProt::ID>(PVar1);
        PVar1 = field_3392->GetValue();
        result.p1<oldscape::shared::LoginProt::ID>(PVar1);
        PVar1 = field_3600->GetValue();
        result.p1<oldscape::shared::LoginProt::ID>(PVar1);
        PVar1 = field_208->GetValue();
        result.p1<oldscape::shared::LoginProt::ID>(PVar1);
        PVar1 = field_3808->GetValue();
        result.p1<oldscape::shared::LoginProt::ID>(PVar1);
        unsigned int uVar2 = field_4224->GetValue();
        result.p2<int>(uVar2);
        uVar2 = field_4432->GetValue();
        result.p2<int>(uVar2);
        uVar2 = field_4640->GetValue();
        result.p2<int>(uVar2);
        uVar2 = field_4848->GetValue();
        result.p2<int>(uVar2);
        PVar1 = field_5680->GetValue();
        result.p1<oldscape::shared::LoginProt::ID>(PVar1);
        PVar1 = GetValue();
        result.p1<oldscape::shared::LoginProt::ID>(PVar1);
        result.p1<oldscape::shared::LoginProt::ID>(4);
        result.p1<oldscape::shared::LoginProt::ID>(0);
        result.p1<oldscape::shared::LoginProt::ID>(0);
        result.p1<oldscape::shared::LoginProt::ID>(0);
        result.p1<oldscape::shared::LoginProt::ID>(0);
        result.p1<oldscape::shared::LoginProt::ID>(1);
        PVar1 = field_7552->GetValue();
        result.p1<oldscape::shared::LoginProt::ID>(PVar1);
        PVar1 = field_7760->GetValue();
        result.p1<oldscape::shared::LoginProt::ID>(PVar1);
        PVar1 = field_7968->GetValue();
        result.p1<oldscape::shared::LoginProt::ID>(PVar1);
        PVar1 = field_8176->GetValue();
        result.p1<oldscape::shared::LoginProt::ID>(PVar1);
        PVar1 = field_8384->GetValue();
        result.p1<oldscape::shared::LoginProt::ID>(PVar1);
        result.p1<oldscape::shared::LoginProt::ID>(1);
        return result;
    }

    // 0x10060cf10
    void ClientOptions::ApplyAutoSetupPreset(option::EnumAutoSetup enumAutoSetup, graphics::RT7Core& rt7Core,
                                             graphics::EffectManager& effectManager) {
        uint64_t* puVar1;

        if (enumAutoSetup - 1 < 6) {
            SetValue(enumAutoSetup, rt7Core, effectManager, false);
            if (enumAutoSetup == 6) {
                AutoSetupPowerSave(rt7Core, effectManager);
            } else {
                puVar1 =
                    (uint64_t*)(*((array<ClientOptionsConfig*, 5ul>*)(unsigned long)(enumAutoSetup -
                                                                                     1)))[(unsigned long)enumAutoSetup];
                ApplySettings(*(*puVar1), rt7Core, effectManager);
            }
        }
    }

    // 0x10060d070
    void ClientOptions::AutoSetupPowerSave(graphics::RT7Core& rt7Core, graphics::EffectManager& effectManager) {
        field_416->SetValueIfLower(m_lowSettings, rt7Core, effectManager);
        field_624->SetValueIfLower(DAT_100f3dd14, rt7Core, effectManager);
        field_832->SetValueIfLower(reinterpret_cast<const uint64_t*>(&m_lowSettings)[1], rt7Core, effectManager);
        field_1248->SetValueIfLower(DAT_100f3dd1c, rt7Core, effectManager);
        field_1456->SetValueIfLower(reinterpret_cast<const uint64_t*>(&m_lowSettings)[2], rt7Core, effectManager);
        field_2352->SetValueIfLower(DAT_100f3dd24, rt7Core, effectManager);
        field_2560->SetValueIfLower(reinterpret_cast<const uint64_t*>(&m_lowSettings)[3], rt7Core, effectManager);
        field_2768->SetValueIfLower(DAT_100f3dd2c, rt7Core, effectManager);
        field_3184->SetValueIfLower(reinterpret_cast<const uint64_t*>(&m_lowSettings)[4], rt7Core, effectManager);
        field_3392->SetValueIfLower(DAT_100f3dd34, rt7Core, effectManager);
        field_2976->SetValueIfLower(reinterpret_cast<const uint64_t*>(&m_lowSettings)[5], rt7Core, effectManager);
        field_208->SetValueIfLower(DAT_100f3dd3c, rt7Core, effectManager);
        field_3808->SetValueIfLower(reinterpret_cast<const uint64_t*>(&m_lowSettings)[6], rt7Core, effectManager);
        field_2144->SetValueIfLower(DAT_100f3dd44, rt7Core, effectManager);
        field_5056->SetValueIfLower(reinterpret_cast<const uint64_t*>(&m_lowSettings)[7], rt7Core, effectManager);
        field_5264->SetValueIfLower(DAT_100f3dd4c, rt7Core, effectManager);
        field_6512->SetValueIfLower(reinterpret_cast<const uint64_t*>(&m_lowSettings)[8], rt7Core, effectManager);
        field_5472->SetValueIfLower(DAT_100f3dd54, rt7Core, effectManager);
        field_7136->SetValueIfLower(reinterpret_cast<const uint64_t*>(&m_lowSettings)[9], rt7Core, effectManager);
        field_1872->SetValueIfLower(1, rt7Core, effectManager);
        SetValue(6, rt7Core, effectManager, false);
        int iVar1 = field_4224->GetDefault();
        field_4224->SetValue(iVar1, rt7Core, effectManager, false);
        iVar1 = field_4432->GetDefault();
        field_4432->SetValue(iVar1, rt7Core, effectManager, false);
        field_3600->SetValue(field_3600->PointerRelease(), rt7Core, effectManager, false);
    }

    // 0x10060d310
    void ClientOptions::ApplySettings(const ClientOptionsConfig& clientOptionsConfig, graphics::RT7Core& rt7Core,
                                      graphics::EffectManager& effectManager) {
        field_1872->SetValue(1, rt7Core, effectManager, false);
        field_416->SetValue(clientOptionsConfig.field_0, rt7Core, effectManager, false);
        field_624->SetValue(clientOptionsConfig.field_4, rt7Core, effectManager, false);
        field_832->SetValue(clientOptionsConfig.field_8, rt7Core, effectManager, false);
        field_1456->SetValue(clientOptionsConfig.field_16, rt7Core, effectManager, false);
        field_2352->SetValue(clientOptionsConfig.field_20, rt7Core, effectManager, false);
        field_2560->SetValue(clientOptionsConfig.field_24, rt7Core, effectManager, false);
        field_2768->SetValue(clientOptionsConfig.field_28, rt7Core, effectManager, false);
        field_3184->SetValue(clientOptionsConfig.field_32, rt7Core, effectManager, false);
        field_3392->SetValue(clientOptionsConfig.field_36, rt7Core, effectManager, false);
        field_2976->SetValue(clientOptionsConfig.field_40, rt7Core, effectManager);
        field_208->SetValue(clientOptionsConfig.field_44, rt7Core, effectManager, false);
        field_3808->SetValue(clientOptionsConfig.field_48, rt7Core, effectManager, false);
        field_2144->SetValue(clientOptionsConfig.field_52, rt7Core, effectManager, false);
        field_5056->SetValue(clientOptionsConfig.field_56, rt7Core, effectManager, false);
        field_5264->SetValue(clientOptionsConfig.field_60, rt7Core, effectManager, false);
        field_6512->SetValue(clientOptionsConfig.field_64, rt7Core, effectManager, false);
        field_5472->SetValue(clientOptionsConfig.field_68, rt7Core, effectManager, false);
        field_7136->SetValue(clientOptionsConfig.field_72, rt7Core, effectManager, false);
        field_1248->SetValue(clientOptionsConfig.field_12, rt7Core, effectManager, false);
    }

    // 0x10060d540
    void ClientOptions::ApplyAutoSetup(const perf::PerfModuleReporter& perfModuleReporter, graphics::RT7Core& rt7Core,
                                       graphics::EffectManager& effectManager) {
        ClientOptionsConfig local_80;

        auto pLVar3 = logger::default_logger();
        pLVar3->Log(false, 7,
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/clientoptions/"
                    "ClientOptions.cpp",
                    619, "\nClientOptions::AutoSetup");
        pLVar3 = logger::default_logger();
        pLVar3->Log(false, 7,
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/clientoptions/"
                    "ClientOptions.cpp",
                    620, "----------------------------------------");
        perfModuleReporter.PrintResults();
        uint8_t* this_00 = field_416;
        local_80.field_0 = this_00->DetermineBestSetting(perfModuleReporter);
        uint8_t* this_01 = field_624;
        local_80.field_4 = this_01->DetermineBestSetting(perfModuleReporter);
        uint8_t* this_02 = field_832;
        local_80.field_8 = this_02->DetermineBestSetting(perfModuleReporter);
        uint8_t* this_03 = field_1456;
        local_80.field_16 = this_03->DetermineBestSetting(perfModuleReporter);
        local_80.field_12 = field_1248->DetermineBestSetting(perfModuleReporter);
        uint8_t* this_04 = field_2352;
        local_80.field_20 = this_04->DetermineBestSetting(perfModuleReporter);
        uint8_t* this_05 = field_2560;
        local_80.field_24 = this_05->DetermineBestSetting(perfModuleReporter);
        uint8_t* this_06 = field_2768;
        local_80.field_28 = this_06->DetermineBestSetting(perfModuleReporter);
        uint8_t* this_07 = field_3184;
        local_80.field_32 = this_07->DetermineBestSetting(perfModuleReporter);
        uint8_t* this_08 = field_3392;
        local_80.field_36 = this_08->DetermineBestSetting(perfModuleReporter);
        uint8_t* this_09 = field_2976;
        local_80.field_40 = this_09->DetermineBestSetting(perfModuleReporter);
        uint8_t* this_10 = field_208;
        local_80.field_44 = this_10->DetermineBestSetting(perfModuleReporter);
        uint8_t* this_11 = field_3808;
        local_80.field_48 = this_11->DetermineBestSetting(perfModuleReporter);
        uint8_t* this_12 = field_5056;
        local_80.field_56 = this_12->DetermineBestSetting(perfModuleReporter);
        uint8_t* this_13 = field_5264;
        local_80.field_60 = this_13->DetermineBestSetting(perfModuleReporter);
        uint8_t* this_14 = field_6512;
        local_80.field_64 = this_14->DetermineBestSetting(perfModuleReporter);
        uint8_t* this_15 = field_5472;
        local_80.field_68 = this_15->DetermineBestSetting(perfModuleReporter);
        uint8_t* this_16 = field_7136;
        local_80.field_72 = this_16->DetermineBestSetting(perfModuleReporter);
        local_80.field_52 = 1;
        uint8_t* this_17 = field_4224;
        int iVar1 = this_17->GetDefault();
        this_17->SetValue(iVar1, rt7Core, effectManager, false);
        uint8_t* this_18 = field_4432;
        iVar1 = this_18->GetDefault();
        this_18->SetValue(iVar1, rt7Core, effectManager, false);
        field_3600->SetValue(field_3600->PointerRelease(), rt7Core, effectManager, false);
        SetValue(0, rt7Core, effectManager, false);
        ApplySettings(local_80, rt7Core, effectManager);
        auto EVar2 = this_00->GetValue();
        this_00->SetMaxLowestValue(EVar2);
        EVar2 = this_01->GetValue();
        this_01->SetMaxLowestValue(EVar2);
        EVar2 = this_02->GetValue();
        this_02->SetMaxLowestValue(EVar2);
        EVar2 = this_03->GetValue();
        this_03->SetMaxLowestValue(EVar2);
        EVar2 = this_04->GetValue();
        this_04->SetMaxLowestValue(EVar2);
        EVar2 = this_05->GetValue();
        this_05->SetMaxLowestValue(EVar2);
        EVar2 = this_06->GetValue();
        this_06->SetMaxLowestValue(EVar2);
        EVar2 = this_07->GetValue();
        this_07->SetMaxLowestValue(EVar2);
        EVar2 = this_08->GetValue();
        this_08->SetMaxLowestValue(EVar2);
        EVar2 = this_09->GetValue();
        this_09->SetMaxLowestValue(EVar2);
        EVar2 = this_10->GetValue();
        this_10->SetMaxLowestValue(EVar2);
        EVar2 = this_11->GetValue();
        this_11->SetMaxLowestValue(EVar2);
        EVar2 = field_1872->GetValue();
        field_1872->SetMaxLowestValue(EVar2);
        EVar2 = this_17->GetValue();
        this_17->SetMaxLowestValue(EVar2);
        EVar2 = this_18->GetValue();
        this_18->SetMaxLowestValue(EVar2);
        EVar2 = this_12->GetValue();
        this_12->SetMaxLowestValue(EVar2);
        EVar2 = this_13->GetValue();
        this_13->SetMaxLowestValue(EVar2);
        EVar2 = this_14->GetValue();
        this_14->SetMaxLowestValue(EVar2);
        EVar2 = this_15->GetValue();
        this_15->SetMaxLowestValue(EVar2);
        EVar2 = this_16->GetValue();
        this_16->SetMaxLowestValue(EVar2);
        pLVar3 = logger::default_logger();
        pLVar3->Log(false, 7,
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/clientoptions/"
                    "ClientOptions.cpp",
                    697, "----------------------------------------");
    }

    // 0x10060da50
    bool ClientOptions::IsOptionAvailable(ClientOptionId clientOptionId, option::OptionClient optionClient) const {
        uint32_t uVar1;
        uint64_t* puVar2;
        Logger* this_00;

        if (clientOptionId < 41) {
            puVar2 = &field_9216[(long)(int)clientOptionId];
            uVar1 = (**(void (**)(...))(*(long*)*puVar2 + 48))((long*)*puVar2, optionClient);
        } else {
            this_00 = logger::default_logger();
            uVar1 = 0;
            this_00->Log(false, 2,
                         "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                         "clientoptions/ClientOptions.cpp",
                         709, "Unknown client option id %d", clientOptionId);
        }
        return uVar1;
    }

    // 0x10060dad0
    unsigned long ClientOptions::IsOptionModifiable(ClientOptionId clientOptionId,
                                                    const graphics::RT7Core* rt7Core) const {
        unsigned int uVar2;
        int iVar3;
        Logger* this_00;
        uint64_t* puVar4;
        uint64_t unaff_R12;
        uint64_t uVar6;
        unsigned long uVar5;

        if (40 < clientOptionId) {
            this_00 = logger::default_logger();
            uVar5 = 0;
            this_00->Log(false, 2,
                         "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                         "clientoptions/ClientOptions.cpp",
                         736, "Unknown client option id %d", clientOptionId);
            goto switchD_10060db05_caseD_1e;
        }
        if (clientOptionId - 3 < 29) {
            uVar6 = (uint64_t)((unsigned long)unaff_R12 >> 8);
            uVar5 = (((uint64_t)uVar6 << 8) | (uint8_t)1);
            switch (clientOptionId) {
            case 3:
                iVar3 = field_416->GetValue();
                break;
            default:
                goto switchD_10060db05_caseD_4;
            case 27:
                if (field_3808->IsModifiable(rt7Core) == '\0') {
                    uVar5 = 0;
                    goto switchD_10060db05_caseD_1e;
                }
            case 20:
                iVar3 = field_2560->GetValue();
                break;
            case 30:
            case 31:
                goto switchD_10060db05_caseD_1e;
            }
            uVar5 = (((uint64_t)uVar6 << 8) | (uint8_t)(iVar3 != 0));
        } else {
        switchD_10060db05_caseD_4:
            puVar4 = &field_9216[(long)(int)clientOptionId];
            uVar2 = (**(void (**)(...))(*(long*)*puVar4 + 32))((long*)*puVar4, rt7Core);
            uVar5 = (unsigned long)uVar2;
        }
    switchD_10060db05_caseD_1e:
        return uVar5 & 4294967295;
    }

    // 0x10060dc20
    bool ClientOptions::CanSetOptionValue(ClientOptionId clientOptionId, int arg2) const {
        uint32_t uVar1;
        uint64_t* puVar2;
        Logger* this_00;

        if (clientOptionId < 41) {
            puVar2 = &field_9216[(long)(int)clientOptionId];
            if (clientOptionId == 28) {
                arg2 = arg2 - 1;
            }
            uVar1 = (**(void (**)(...))(*(long*)*puVar2 + 64))((long*)*puVar2, arg2);
        } else {
            this_00 = logger::default_logger();
            uVar1 = 0;
            this_00->Log(false, 2,
                         "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                         "clientoptions/ClientOptions.cpp",
                         760, "Unknown client option id %d", clientOptionId);
        }
        return uVar1;
    }

    // 0x10060dca0
    int ClientOptions::GetOptionValue(ClientOptionId clientOptionId) const {
        int iVar1;
        uint64_t* puVar2;
        Logger* this_00;

        if (clientOptionId < 41) {
            puVar2 = &field_9216[(long)(int)clientOptionId];
            iVar1 = (**(void (**)(...))(*(long*)*puVar2 + 72))();
            iVar1 = (unsigned int)(clientOptionId == 28) + iVar1;
        } else {
            this_00 = logger::default_logger();
            iVar1 = 0;
            this_00->Log(false, 2,
                         "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                         "clientoptions/ClientOptions.cpp",
                         784, "Unknown client option id %d", clientOptionId);
        }
        return iVar1;
    }

    // 0x10060dd20
    char* ClientOptions::GetOptionValueLabel(ClientOptionId clientOptionId, int arg2) const {
        long* plVar1;
        bool cVar2;
        int iVar3;
        int iVar4;
        uint64_t* puVar5;
        Logger* this_00;
        char* pcVar6;
        Layout local_28;

        if (clientOptionId < 41) {
            puVar5 = &field_9216[(long)(int)clientOptionId];
            plVar1 = (long*)*puVar5;
            (**(void (**)(...))(*plVar1 + 56))(&local_28, plVar1);
            iVar3 = (**(void (**)(...))(*plVar1 + 88))(plVar1);
            iVar3 = arg2 - iVar3;
            if ((-1 < iVar3) && (iVar4 = local_28.HeapBeginPtr(), iVar3 < iVar4)) {
                puVar5 = &local_28[(long)iVar3];
                return (char*)*puVar5;
            }
            cVar2 = local_28.empty();
            pcVar6 = nullptr;
            if (!cVar2) {
                pcVar6 = "Unknown";
            }
        } else {
            this_00 = logger::default_logger();
            pcVar6 = nullptr;
            this_00->Log(false, 2,
                         "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                         "clientoptions/ClientOptions.cpp",
                         814, "Unknown client option id %d", clientOptionId);
        }
        return pcVar6;
    }

    // 0x10060de60
    unsigned int ClientOptions::ValueLabelsAvailableForOption(ClientOptionId clientOptionId) const {
        unsigned int uVar1;
        uint64_t* puVar2;
        Logger* this_00;
        SharedArray<std::unique_ptr<oldscape::rs2lib::worldmap::LocationData>> local_20;

        if (clientOptionId < 41) {
            puVar2 = &field_9216[(long)(int)clientOptionId];
            (**(void (**)(...))(*(long*)*puVar2 + 56))(&local_20);
            uVar1 = local_20.empty();
            uVar1 = uVar1 ^ 1;
        } else {
            this_00 = logger::default_logger();
            uVar1 = 0;
            this_00->Log(false, 2,
                         "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                         "clientoptions/ClientOptions.cpp",
                         827, "Unknown client option id %d", clientOptionId);
        }
        return uVar1;
    }

    // 0x10060dee0
    bool ClientOptions::IsToggleOption(ClientOptionId clientOptionId) const {
        uint32_t uVar1;
        uint64_t in_RAX;
        uint64_t* puVar2;
        Logger* this_00;

        uint32_t uVar3 = (uint32_t)((unsigned long)in_RAX >> 32);
        if (clientOptionId < 41) {
            puVar2 = &field_9216[(long)(int)clientOptionId];
            uVar1 = (**(void (**)(...))(*(long*)*puVar2 + 40))();
        } else {
            this_00 = logger::default_logger();
            uVar1 = 0;
            this_00->Log(false, 2,
                         "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                         "clientoptions/ClientOptions.cpp",
                         840, "Unknown client option id %d", (((uint64_t)uVar3 << 32) | (uint32_t)clientOptionId));
        }
        return uVar1;
    }

    // 0x10060df50
    uint64_t ClientOptions::GetOptionValueRange(ClientOptionId clientOptionId) const {
        uint64_t* puVar1;
        uint64_t local_20;
        int local_18[2];

        if (clientOptionId < 41) {
            puVar1 = &field_9216[(long)(int)clientOptionId];
            local_20 = (**(void (**)(...))(*(long*)*puVar1 + 88))();
        } else {
            (logger::default_logger())
                ->Log(false, 2,
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                      "clientoptions/ClientOptions.cpp",
                      853, "Unknown client option id %d", clientOptionId);
            local_18[0] = 0;
            local_18[1] = 0;
            local_20.pair<int, int, false>(*local_18, *(local_18 + 1));
        }
        return local_20;
    }

    // 0x10060dff0
    void ClientOptions::SetOptionValue(ClientOptionId clientOptionId, int arg2, graphics::RT7Core& rt7Core,
                                       graphics::EffectManager& effectManager) {
        uint64_t in_RAX;
        uint64_t* puVar2;

        uint32_t uVar3 = (uint32_t)((unsigned long)in_RAX >> 32);
        field_9744 = SystemTimer::GetTimeMS<std::chrono::steady_clock>();
        if (clientOptionId < 41) {
            if (clientOptionId == 28) {
                field_3600->SetValue(arg2 - 1, rt7Core, effectManager, false);
            } else if (clientOptionId == 17) {
                if (arg2 == -1) {
                    arg2 = field_5888->GetValue();
                }
                field_6096->SetValue(arg2, rt7Core, effectManager, false);
            } else if (clientOptionId == 16) {
                field_5888->SetValue(arg2, rt7Core, effectManager, false);
                field_6096->SetValueInternal(arg2);
            } else {
                puVar2 = &field_9216[(long)(int)clientOptionId];
                (**(void (**)(...))(*(long*)*puVar2 + 80))((long*)*puVar2, arg2, rt7Core, effectManager);
            }
        } else {
            (logger::default_logger())
                ->Log(false, 2,
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                      "clientoptions/ClientOptions.cpp",
                      894, "Unknown client option id %d", (((uint64_t)uVar3 << 32) | (uint32_t)clientOptionId));
        }
    }

    // 0x10060e130
    uint64_t ClientOptions::GetOption(ClientOptionId clientOptionId) const {
        if (40 < clientOptionId) {
            LogAssert("(optionId >= ClientOptionId::_START) && (optionId < ClientOptionId::_COUNT)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                      "clientoptions/ClientOptions.cpp",
                      900, nullptr);
        }
        uint64_t* puVar1 = &field_9216[(long)(int)clientOptionId];
        return *puVar1;
    }

    // 0x100612db0
    void ClientOptions::ClientOptions(SystemSettings*, graphics::RT7Core&, graphics::EffectManager&,
                                      bool)::$_0::operator()(Settings* settings) const {
        *(uint32_t*)(*(long*)this + 9752) = 1;
    }

} // namespace jag::game
