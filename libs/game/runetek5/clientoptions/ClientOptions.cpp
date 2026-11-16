// libs/game/runetek5/clientoptions/ClientOptions.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.game.runetek5

#include "ClientOptions.h"

namespace jag::game {
    // 0x100d431ac, 4 bytes, __const
    ClientOptions::NO_SETTINGS_VERSION_SAVE_VERSION = 1;

    // 0x100d431b0, 176 bytes, __const
    ClientOptions::CURRENT_SETTINGS_SAVE_VERSION = {
        8,           0,          0,          1078525952,  1414677840, 1073291771,  -1094119461, 1053364187,
        -1080636444, 1066847204, 1,          2,           0,          2139095040,  693479576,   1075800698,
        1842104505,  1084514096, 1202590843, 1066695393,  0,          1081671680,  1610612736,  1071194619,
        -2147483648, 1072879996, 905647195,  -1073524657, -851859334, -1076198791, -1480842745, -1076198791,
        -1259857073, 1062948481, 0,          -1071120384, -755914244, 1063281229,  0,           0,
        1119092736,  1119092736, 1119092736, 1119092736,
    };

    // 0x100f3dd08, 8 bytes, __data
    ClientOptions::VERSION_FIELD = "Version";

    // 0x100f3dd10, 76 bytes, __data
    ClientOptions::m_lowSettings = {
        0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 0, 0, 1, 0, 0, 1, 1, 0,
    };

    // 0x100f3dd5c, 76 bytes, __data
    ClientOptions::m_medSettings = {
        1, 0, 1, 0, 1, 1, 1, 1, 1, 1, 0, 1, 0, 1, 1, 1, 1, 2, 1,
    };

    // 0x100f3dda8, 76 bytes, __data
    ClientOptions::m_highSettings = {
        2, 1, 2, 1, 2, 2, 1, 2, 1, 2, 0, 2, 0, 1, 1, 1, 1, 3, 2,
    };

    // 0x100f3ddf4, 76 bytes, __data
    ClientOptions::m_ultraSettings = {
        2, 2, 3, 1, 3, 3, 1, 3, 1, 3, 2, 3, 3, 1, 1, 1, 1, 3, 3,
    };

    // 0x100f3de40, 48 bytes, __data
    ClientOptions::m_settingPresets = {
        &m_minSettings, &m_lowSettings, &m_medSettings, &m_highSettings, &m_ultraSettings, nullptr,
    };

    // 0x1039bc0f0, 80 bytes, __common; zero-initialised
    ClientOptions::m_minSettings;

    // 0x100607df0, 3136 bytes, base-object constructor, placed by class name
    // ClientOptions::ClientOptions(SystemSettings*, graphics::RT7Core&, graphics::EffectManager&, bool)
    void ClientOptions::ClientOptions(SystemSettings* param_1, RT7Core* param_2, EffectManager* param_3, bool param_4) {
        undefined1* puVar1;
        undefined1* this_00;
        undefined1* this_01;
        undefined1* this_02;
        undefined1* this_03;
        undefined1* this_04;
        undefined1* this_05;
        undefined* puVar2;
        long lVar3;
        function<void(Settings*)> local_68[48];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        puVar1 = field_9552;
        new (this) option::AutoSetup(param_2, puVar1, "AutoSetup");
        new (field_208, param_2, (Settings*)puVar1, "AnisotropicFiltering") option::AnisotropicFiltering();
        this_00 = field_416;
        this_01 = field_624;
        new (this_00) option::AntialiasingMode(param_2, puVar1, "AntialiasingMode", this_01);
        new (this_01) option::AntialiasingQuality(param_2, puVar1, "AntialiasingQuality", this_00);
        new (field_832, param_2, (Settings*)puVar1, "Bloom") option::Bloom();
        new (field_1040, param_2, (Settings*)puVar1, "Brightness") option::Brightness();
        this_02 = field_1456;
        new (field_1248, param_2, (Settings*)puVar1, "DOF", (DrawDistance*)this_02) option::DOF();
        new (this_02) option::DrawDistance(param_2, puVar1, "DrawDistance");
        new (field_1664, param_2, (Settings*)puVar1, "FlickeringEffects") option::FlickeringEffects();
        this_03 = field_1872;
        this_04 = field_3184;
        new (this_03) option::GroundBlending(param_2, puVar1, "GroundBlending", this_04);
        new (field_2144, param_2, (Settings*)puVar1, "GroundDecor") option::GroundDecor();
        new (field_2352, param_2, (Settings*)puVar1, "LightingQuality") option::LightingQuality();
        this_05 = field_2768;
        new (field_2560, param_2, (Settings*)puVar1, "Shadows", (ShadowQuality*)this_05) option::Shadows();
        new (this_05) option::ShadowQuality(param_2, puVar1, "ShadowQuality");
        new (field_2976, param_2, (Settings*)puVar1, "AmbientOcclusion") option::AmbientOcclusion();
        new (this_04) option::Textures(param_2, puVar1, "Texturing", this_03);
        new (field_3392, param_2, (Settings*)puVar1, "Reflections") option::Reflections();
        new (field_3600, param_2, (Settings*)puVar1, "VSync") option::VSync();
        new (field_3808, param_2, (Settings*)puVar1, "VolumetricLighting") option::VolumetricLighting();
        new (&field_4016, param_2, (Settings*)puVar1, "WindowMode") option::WindowMode();
        new (field_4224, param_2, (Settings*)puVar1, "MaxForegroundFps") option::MaxForegroundFps();
        new (field_4432, param_2, (Settings*)puVar1, "MaxBackgroundFps") option::MaxBackgroundFps();
        new (field_4640, param_2, (Settings*)puVar1, "GameRenderScale") option::GameRenderScale();
        new (field_4848, param_2, (Settings*)puVar1, "InterfaceScale") option::InterfaceScale();
        new (field_5056, param_2, (Settings*)puVar1, "SmoothClipFade") option::SmoothClipPlaneFade();
        new (field_5264, param_2, (Settings*)puVar1, "CanopyCutout") option::CanopyCutout();
        new (field_5472, param_2, (Settings*)puVar1, "ParticleQuality") option::ParticleQuality();
        new (field_5680, param_2, (Settings*)puVar1, "CustomCursors") option::CustomCursors();
        new (field_5888, param_2, (Settings*)puVar1, "RemoveRoof") option::RemoveRoof();
        new (field_6096, param_2, (Settings*)puVar1, "RemoveRoof") option::RemoveRoof();
        new (field_6304, param_2, (Settings*)puVar1, "Language") option::Language();
        new (field_6512, param_2, (Settings*)puVar1, "EntityHighlights") option::EntityHighlights();
        new (field_6720, param_2, (Settings*)puVar1, "RichPresence") option::RichPresence();
        new (field_6928, param_2, (Settings*)puVar1, "HapticFeedback") option::HapticFeedback();
        new (field_7136, param_2, (Settings*)puVar1, "CustomPlayerModelCount") option::CustomPlayerModelCount();
        new (field_7344, param_2, (Settings*)puVar1, "CutsceneSubtitles") option::CutsceneSubtitles();
        new (field_7552, param_2, puVar1, "VolumeMainEffects", 1) option::Volume();
        new (field_7760, param_2, puVar1, "VolumeBackgroundEffects", 2) option::Volume();
        new (field_7968, param_2, puVar1, "VolumeSpeech", 5) option::Volume();
        new (field_8176, param_2, puVar1, "VolumeMainMusic", 4) option::Volume();
        new (field_8384, param_2, puVar1, "VolumeLoginMusic", 3) option::Volume();
        new (field_8592, param_2, puVar1, "VolumeMaster", 0) option::Volume();
        new (field_8800, param_2, (Settings*)puVar1, "Diagnostics") option::Diagnostics();
        new (field_9024, param_2, (Settings*)puVar1, "DeviceCapOverrides") option::RenderDeviceCapsOverride();
        field_9216 = field_2976;
        field_9224 = field_208;
        field_9232 = this_00;
        field_9240 = this_01;
        field_9248 = field_832;
        field_9256 = field_1040;
        field_9264 = field_5680;
        field_9272 = field_1248;
        field_9280 = this_02;
        field_9288 = this_03;
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
        field_9376 = this_05;
        field_9384 = this_04;
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
                                                 void>(local_68, this);
        new (puVar1) Settings(param_1, 1, "Config", local_68);
        std::function<void(Settings*)>::~function(local_68);
        field_9744 = 0;
        field_9752 = 0;
        field_9756 = param_4;
        field_9757 = 1;
        puVar2 = PTR_m_settingPresets_100ee65e8;
        lVar3 = 0;
        do {
            ClampPreset(this, *(ClientOptionsConfig**)(puVar2 + lVar3));
            lVar3 = lVar3 + 8;
        } while (lVar3 != 40);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100608b00, 1568 bytes, placed by class name
    // ClientOptions::ClampPreset(ClientOptionsConfig&)
    /* WARNING: Type propagation algorithm not settling */
    /* ClientOptions::ClampPreset(ClientOptionsConfig&) */

    void ClientOptions::ClampPreset(ClientOptionsConfig* param_1) {
        int iVar1;
        undefined4 uVar2;
        undefined1 local_40[16];
        EnumAntialiasingMode local_30[4];
        undefined4 local_2c;

        local_40._0_8_ = field_416->GetSupportedValueRange();
        local_30 = (EnumAntialiasingMode[4])local_40->GetX();
        local_40._8_8_ = field_416->GetSupportedValueRange();
        local_2c = ((local_40 + 8))->GetZ();
        iVar1 = math::Clamp<option::EnumAntialiasingMode>((EnumAntialiasingMode*)param_1, local_30,
                                                          (EnumAntialiasingMode*)&local_2c);
        param_1->field_0 = iVar1;
        local_40._0_8_ = field_624->GetSupportedValueRange();
        local_30 = (EnumAntialiasingMode[4])local_40->GetX();
        local_40._8_8_ = field_624->GetSupportedValueRange();
        local_2c = ((local_40 + 8))->GetZ();
        iVar1 = math::Clamp<graphics::GraphicsQuality>((GraphicsQuality*)&param_1->field_4, local_30,
                                                       (GraphicsQuality*)&local_2c);
        param_1->field_4 = iVar1;
        local_40._0_8_ = field_832->GetSupportedValueRange();
        local_30 = (EnumAntialiasingMode[4])local_40->GetX();
        local_40._8_8_ = field_832->GetSupportedValueRange();
        local_2c = ((local_40 + 8))->GetZ();
        iVar1 = math::Clamp<option::EnumBloom>((EnumBloom*)&param_1->field_8, local_30, (EnumBloom*)&local_2c);
        param_1->field_8 = iVar1;
        local_40._0_8_ = field_1248->GetSupportedValueRange();
        local_30 = (EnumAntialiasingMode[4])local_40->GetX();
        local_40._8_8_ = field_1248->GetSupportedValueRange();
        local_2c = ((local_40 + 8))->GetZ();
        iVar1 = math::Clamp<option::EnumOptionToggle>((EnumOptionToggle*)&param_1->field_12, local_30,
                                                      (EnumOptionToggle*)&local_2c);
        param_1->field_12 = iVar1;
        local_40._0_8_ = field_1456->GetSupportedValueRange();
        local_30 = (EnumAntialiasingMode[4])local_40->GetX();
        local_40._8_8_ = field_1456->GetSupportedValueRange();
        local_2c = ((local_40 + 8))->GetZ();
        iVar1 = math::Clamp<graphics::GraphicsQuality>((GraphicsQuality*)&param_1->field_16, local_30,
                                                       (GraphicsQuality*)&local_2c);
        param_1->field_16 = iVar1;
        local_40._0_8_ = field_2352->GetSupportedValueRange();
        local_30 = (EnumAntialiasingMode[4])local_40->GetX();
        local_40._8_8_ = field_2352->GetSupportedValueRange();
        local_2c = ((local_40 + 8))->GetZ();
        iVar1 = math::Clamp<graphics::GraphicsQuality>((GraphicsQuality*)&param_1->field_20, local_30,
                                                       (GraphicsQuality*)&local_2c);
        param_1->field_20 = iVar1;
        local_40._0_8_ = field_2560->GetSupportedValueRange();
        local_30 = (EnumAntialiasingMode[4])local_40->GetX();
        local_40._8_8_ = field_2560->GetSupportedValueRange();
        local_2c = ((local_40 + 8))->GetZ();
        iVar1 = math::Clamp<option::EnumOptionToggle>((EnumOptionToggle*)&param_1->field_24, local_30,
                                                      (EnumOptionToggle*)&local_2c);
        param_1->field_24 = iVar1;
        local_40._0_8_ = field_2768->GetSupportedValueRange();
        local_30 = (EnumAntialiasingMode[4])local_40->GetX();
        local_40._8_8_ = field_2768->GetSupportedValueRange();
        local_2c = ((local_40 + 8))->GetZ();
        iVar1 = math::Clamp<graphics::GraphicsQuality>((GraphicsQuality*)&param_1->field_28, local_30,
                                                       (GraphicsQuality*)&local_2c);
        param_1->field_28 = iVar1;
        local_40._0_8_ = field_3184->GetSupportedValueRange();
        local_30 = (EnumAntialiasingMode[4])local_40->GetX();
        local_40._8_8_ = field_3184->GetSupportedValueRange();
        local_2c = ((local_40 + 8))->GetZ();
        iVar1 = math::Clamp<option::EnumTextureMode>((EnumTextureMode*)&param_1->field_32, local_30,
                                                     (EnumTextureMode*)&local_2c);
        param_1->field_32 = iVar1;
        local_40._0_8_ = field_3392->GetSupportedValueRange();
        local_30 = (EnumAntialiasingMode[4])local_40->GetX();
        local_40._8_8_ = field_3392->GetSupportedValueRange();
        local_2c = ((local_40 + 8))->GetZ();
        iVar1 = math::Clamp<graphics::GraphicsQuality>((GraphicsQuality*)&param_1->field_36, local_30,
                                                       (GraphicsQuality*)&local_2c);
        param_1->field_36 = iVar1;
        local_40._0_8_ = field_2976->GetSupportedValueRange();
        local_30 = (EnumAntialiasingMode[4])local_40->GetX();
        local_40._8_8_ = field_2976->GetSupportedValueRange();
        local_2c = ((local_40 + 8))->GetZ();
        iVar1 = math::Clamp<graphics::SSAOPass::Mode>((Mode*)&param_1->field_40, local_30, (Mode*)&local_2c);
        param_1->field_40 = iVar1;
        local_40._0_8_ = field_208->GetSupportedValueRange();
        local_30 = (EnumAntialiasingMode[4])local_40->GetX();
        local_40._8_8_ = field_208->GetSupportedValueRange();
        local_2c = ((local_40 + 8))->GetZ();
        iVar1 = math::Clamp<option::EnumAnisotropicFiltering>((EnumAnisotropicFiltering*)&param_1->field_44, local_30,
                                                              (EnumAnisotropicFiltering*)&local_2c);
        param_1->field_44 = iVar1;
        local_40._0_8_ = field_3808->GetSupportedValueRange();
        local_30 = (EnumAntialiasingMode[4])local_40->GetX();
        local_40._8_8_ = field_3808->GetSupportedValueRange();
        local_2c = ((local_40 + 8))->GetZ();
        iVar1 = math::Clamp<option::EnumVolumetricLighting>((EnumVolumetricLighting*)&param_1->field_48, local_30,
                                                            (EnumVolumetricLighting*)&local_2c);
        param_1->field_48 = iVar1;
        local_40._0_8_ = field_2144->GetSupportedValueRange();
        local_30 = (EnumAntialiasingMode[4])local_40->GetX();
        local_40._8_8_ = field_2144->GetSupportedValueRange();
        local_2c = ((local_40 + 8))->GetZ();
        iVar1 = math::Clamp<option::EnumOptionToggle>((EnumOptionToggle*)&param_1->field_52, local_30,
                                                      (EnumOptionToggle*)&local_2c);
        param_1->field_52 = iVar1;
        local_40._0_8_ = field_5056->GetSupportedValueRange();
        local_30 = (EnumAntialiasingMode[4])local_40->GetX();
        local_40._8_8_ = field_5056->GetSupportedValueRange();
        local_2c = ((local_40 + 8))->GetZ();
        iVar1 = math::Clamp<option::EnumOptionToggle>((EnumOptionToggle*)&param_1->field_56, local_30,
                                                      (EnumOptionToggle*)&local_2c);
        param_1->field_56 = iVar1;
        local_40._0_8_ = field_5264->GetSupportedValueRange();
        local_30 = (EnumAntialiasingMode[4])local_40->GetX();
        local_40._8_8_ = field_5264->GetSupportedValueRange();
        local_2c = ((local_40 + 8))->GetZ();
        iVar1 = math::Clamp<option::EnumOptionToggle>((EnumOptionToggle*)&param_1->field_60, local_30,
                                                      (EnumOptionToggle*)&local_2c);
        param_1->field_60 = iVar1;
        local_40._0_8_ = field_6512->GetSupportedValueRange();
        local_30 = (EnumAntialiasingMode[4])local_40->GetX();
        local_40._8_8_ = field_6512->GetSupportedValueRange();
        local_2c = ((local_40 + 8))->GetZ();
        iVar1 = math::Clamp<option::EnumOptionToggle>((EnumOptionToggle*)&param_1->field_64, local_30,
                                                      (EnumOptionToggle*)&local_2c);
        param_1->field_64 = iVar1;
        local_40._0_8_ = field_5472->GetSupportedValueRange();
        local_30 = (EnumAntialiasingMode[4])local_40->GetX();
        local_40._8_8_ = field_5472->GetSupportedValueRange();
        local_2c = ((local_40 + 8))->GetZ();
        iVar1 = math::Clamp<option::EnumParticleQualityLevel>((EnumParticleQualityLevel*)&param_1->field_68, local_30,
                                                              (EnumParticleQualityLevel*)&local_2c);
        param_1->field_68 = iVar1;
        local_40._0_8_ = field_7136->GetSupportedValueRange();
        local_30 = (EnumAntialiasingMode[4])local_40->GetX();
        local_40._8_8_ = field_7136->GetSupportedValueRange();
        local_2c = ((local_40 + 8))->GetZ();
        uVar2 = math::Clamp<graphics::GraphicsQuality>((GraphicsQuality*)&param_1->field_72, local_30,
                                                       (GraphicsQuality*)&local_2c);
        param_1->field_72 = uVar2;
    }

    // 0x100609220, 16 bytes, complete-object constructor, placed by class name
    // ClientOptions::ClientOptions(SystemSettings*, graphics::RT7Core&, graphics::EffectManager&, bool): jumps straight to the base-object constructor

    // 0x100609230, 1120 bytes, base-object destructor, placed by class name
    // ClientOptions::~ClientOptions()
    void ClientOptions::~ClientOptions() {
        if (field_9757 != '\0') {
            SaveSettings(this);
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
        (&field_4016)->~WindowMode();
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
        ~AutoSetup();
    }

    // 0x100609690, 656 bytes, placed by class name
    // ClientOptions::SaveSettings()
    void ClientOptions::SaveSettings() {
        int iVar1;
        undefined8 uVar2;

        iVar1 = field_9752;
        uVar2 = logger::default_logger();
        if (iVar1 == 2) {
            logger::Logger::Log(uVar2, 0, 8,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                "clientoptions/ClientOptions.cpp",
                                256, "Saving ClientOptions");
            Settings::SetValue<int>((Settings*)field_9552, VERSION_FIELD, 8);
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
            (&field_4016)->SaveSetting();
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
            logger::Logger::Log(uVar2, 0, 3,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                "clientoptions/ClientOptions.cpp",
                                312, "Not saving ClientOptions as previous settings (or defaults) were not loaded");
        }
    }

    // 0x100609920, 16 bytes, complete-object destructor, placed by class name
    // ClientOptions::~ClientOptions(): jumps straight to the base-object destructor

    // 0x100609930, 16 bytes, placed by class name
    // ClientOptions::MainLogic(graphics::RT7Core&, graphics::EffectManager&, bool)
    void ClientOptions::MainLogic(RT7Core* param_1, EffectManager* param_2, bool param_3) {
        undefined7 in_register_00000011;

        LoadSettings((ClientOptions*)param_1, (RT7Core*)param_2,
                     (EffectManager*)CONCAT71(in_register_00000011, param_3));
    }

    // 0x100609940, 1184 bytes, placed by class name
    // ClientOptions::LoadSettings(graphics::RT7Core&, graphics::EffectManager&)
    char ClientOptions::LoadSettings(RT7Core* param_1, EffectManager* param_2) {
        undefined1 uVar1;
        bool bVar2;
        int iVar3;
        undefined4 uVar4;
        RenderDevice* this_00;
        undefined8 uVar5;

        if (field_9752 == 1) {
            this_00 = (RenderDevice*)Instance();
            iVar3 = this_00->GetReadyState();
            if (iVar3 == 0) {
                uVar1 = true;
                if (field_9756 == false) {
                    uVar1 = input::InputState::IsKeyDown(1);
                }
                if ((bool)uVar1 != false) {
                    uVar5 = logger::default_logger();
                    logger::Logger::Log(uVar5, 0, 8,
                                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/"
                                        "runetek5/clientoptions/ClientOptions.cpp",
                                        325, "=== SAFE MODE === Using default graphics options ===");
                }
                iVar3 = Settings::GetValueWithDefault<int>((Settings*)field_9552, VERSION_FIELD,
                                                           &NO_SETTINGS_VERSION_SAVE_VERSION);
                (field_208, param_1, param_2, (bool)uVar1)->LoadSetting();
                (field_416, param_1, param_2, (bool)uVar1)->LoadSetting();
                (field_624, param_1, param_2, (bool)uVar1)->LoadSetting();
                LoadSetting(param_1, param_2, (bool)uVar1);
                (field_832, param_1, param_2, (bool)uVar1)->LoadSetting();
                bVar2 = (bool)(iVar3 < 2 | uVar1);
                (field_1040, param_1, param_2, bVar2)->LoadSetting();
                (field_1248, param_1, param_2, (bool)uVar1)->LoadSetting();
                (field_1456, param_1, param_2, (bool)uVar1)->LoadSetting();
                (field_1664, param_1, param_2, (bool)uVar1)->LoadSetting();
                (field_1872, param_1, param_2, (bool)(iVar3 < 6 | uVar1))->LoadSetting();
                (field_2144, param_1, param_2, (bool)(iVar3 < 5 | uVar1))->LoadSetting();
                (field_2352, param_1, param_2, (bool)uVar1)->LoadSetting();
                (field_2560, param_1, param_2, (bool)uVar1)->LoadSetting();
                (field_2768, param_1, param_2, (bool)uVar1)->LoadSetting();
                (field_3184, param_1, param_2, (bool)uVar1)->LoadSetting();
                (&field_4016, param_1, param_2, (bool)uVar1)->LoadSetting();
                (field_4224, param_1, param_2, (bool)uVar1)->LoadSetting();
                (field_4432, param_1, param_2, (bool)uVar1)->LoadSetting();
                (field_4640, param_1, param_2, (bool)uVar1)->LoadSetting();
                (field_4848, param_1, param_2, (bool)uVar1)->LoadSetting();
                (field_2976, param_1, param_2, (bool)uVar1)->LoadSetting();
                (field_5056, param_1, param_2, (bool)uVar1)->LoadSetting();
                (field_5264, param_1, param_2, (bool)uVar1)->LoadSetting();
                (field_5472, param_1, param_2, (bool)uVar1)->LoadSetting();
                (field_3392, param_1, param_2, bVar2)->LoadSetting();
                (field_3808, param_1, param_2, (bool)uVar1)->LoadSetting();
                (field_3600, param_1, param_2, (bool)uVar1)->LoadSetting();
                (field_5680, param_1, param_2, false)->LoadSetting();
                (field_5888, param_1, param_2, false)->LoadSetting();
                uVar4 = field_5888->GetValue();
                (field_6096, uVar4)->SetValueInternal();
                (field_6512, param_1, param_2, false)->LoadSetting();
                (field_6720, param_1, param_2, false)->LoadSetting();
                (field_6304, param_1, param_2, false)->LoadSetting();
                (field_6928, param_1, param_2, false)->LoadSetting();
                (field_7136, param_1, param_2, (bool)uVar1)->LoadSetting();
                (field_7344, param_1, param_2, (bool)uVar1)->LoadSetting();
                (field_7552, param_1, param_2, false)->LoadSetting();
                (field_7760, param_1, param_2, false)->LoadSetting();
                (field_7968, param_1, param_2, false)->LoadSetting();
                (field_8176, param_1, param_2, false)->LoadSetting();
                (field_8384, param_1, param_2, false)->LoadSetting();
                (field_8592, param_1, param_2, false)->LoadSetting();
                (field_8800, param_1, param_2, (bool)uVar1)->LoadSetting();
                (field_9024, param_1, param_2, (bool)uVar1)->LoadSetting();
                field_9752 = 2;
                return (iVar3 == 1) + '\x01';
            }
        }
        return (field_9752 == 2) * '\x03';
    }

    // 0x10060bad0, 720 bytes, placed by class name
    // ClientOptions::GetGraphicsOptions(char const*) const
    ClientOptions* ClientOptions::GetGraphicsOptions(char* param_1) {
        int iVar1;
        undefined4 uVar2;
        char* in_RDX;

        if (in_RDX == (char*)0) {
            iVar1 = 0;
        } else {
            iVar1 = PacketT<Array<unsigned char, eastl::allocator>>::predictLengthPStringNoConversion(in_RDX, false);
        }
        new (this) PacketT<Array<unsigned char, BucketAllocatorEASTL>>((long)(iVar1 + 34));
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p1<oldscape::shared::LoginProt::ID>(
            (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)this, 1);
        if (in_RDX == (char*)0) {
            PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p1<oldscape::shared::LoginProt::ID>(
                (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)this, 0);
        } else {
            PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p1<oldscape::shared::LoginProt::ID>(
                (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)this, 1);
            pStringNoConversion(in_RDX, false);
        }
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p1<oldscape::shared::LoginProt::ID>(
            (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)this, 0);
        uVar2 = ((param_1 + 416))->GetValue();
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p1<oldscape::shared::LoginProt::ID>(
            (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)this, uVar2);
        uVar2 = ((param_1 + 624))->GetValue();
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p1<oldscape::shared::LoginProt::ID>(
            (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)this, uVar2);
        uVar2 = ((param_1 + 832))->GetValue();
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p1<oldscape::shared::LoginProt::ID>(
            (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)this, uVar2);
        uVar2 = ((param_1 + 1040))->GetValue();
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p1<oldscape::shared::LoginProt::ID>(
            (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)this, uVar2);
        uVar2 = ((param_1 + 1456))->GetValue();
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p1<oldscape::shared::LoginProt::ID>(
            (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)this, uVar2);
        uVar2 = ((param_1 + 1664))->GetValue();
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p1<oldscape::shared::LoginProt::ID>(
            (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)this, uVar2);
        uVar2 = ((param_1 + 1872))->GetValue();
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p1<oldscape::shared::LoginProt::ID>(
            (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)this, uVar2);
        uVar2 = ((param_1 + 2144))->GetValue();
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p1<oldscape::shared::LoginProt::ID>(
            (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)this, uVar2);
        uVar2 = ((param_1 + 2352))->GetValue();
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p1<oldscape::shared::LoginProt::ID>(
            (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)this, uVar2);
        uVar2 = ((param_1 + 2560))->GetValue();
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p1<oldscape::shared::LoginProt::ID>(
            (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)this, uVar2);
        uVar2 = ((param_1 + 2768))->GetValue();
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p1<oldscape::shared::LoginProt::ID>(
            (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)this, uVar2);
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p1<oldscape::shared::LoginProt::ID>(
            (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)this, 0);
        uVar2 = ((param_1 + 5888))->GetValue();
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p1<oldscape::shared::LoginProt::ID>(
            (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)this, uVar2);
        uVar2 = ((param_1 + 3184))->GetValue();
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p1<oldscape::shared::LoginProt::ID>(
            (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)this, uVar2);
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p1<oldscape::shared::LoginProt::ID>(
            (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)this, 0);
        uVar2 = ((param_1 + 4016))->GetValue();
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p1<oldscape::shared::LoginProt::ID>(
            (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)this, uVar2);
        uVar2 = ((param_1 + 2976))->GetValue();
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p1<oldscape::shared::LoginProt::ID>(
            (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)this, uVar2);
        uVar2 = ((param_1 + 3392))->GetValue();
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p1<oldscape::shared::LoginProt::ID>(
            (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)this, uVar2);
        uVar2 = ((param_1 + 3600))->GetValue();
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p1<oldscape::shared::LoginProt::ID>(
            (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)this, uVar2);
        uVar2 = ((param_1 + 208))->GetValue();
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p1<oldscape::shared::LoginProt::ID>(
            (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)this, uVar2);
        uVar2 = ((param_1 + 3808))->GetValue();
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p1<oldscape::shared::LoginProt::ID>(
            (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)this, uVar2);
        uVar2 = ((param_1 + 5680))->GetValue();
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p1<oldscape::shared::LoginProt::ID>(
            (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)this, uVar2);
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p1<oldscape::shared::LoginProt::ID>(
            (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)this, 0);
        iVar1 = ((param_1 + 4224))->GetValue();
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p2<int>(
            (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)this, iVar1);
        iVar1 = ((param_1 + 4432))->GetValue();
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p2<int>(
            (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)this, iVar1);
        iVar1 = ((param_1 + 4640))->GetValue();
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p2<int>(
            (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)this, iVar1);
        iVar1 = ((param_1 + 4848))->GetValue();
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p2<int>(
            (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)this, iVar1);
        return this;
    }

    // 0x10060bde0, 992 bytes, placed by class name
    // ClientOptions::SetGraphicsOptions(eastl::string&, PacketT<Array<unsigned char, eastl::allocator> >&, graphics::RT7Core&, graphics::EffectManager&)
    bool ClientOptions::SetGraphicsOptions(basic_string* param_1, PacketT* param_2, RT7Core* param_3,
                                           EffectManager* param_4) {
        char cVar1;
        char cVar2;
        undefined1 uVar3;
        undefined1 extraout_AH;
        undefined1 extraout_AH_00;
        undefined1 extraout_AH_01;
        undefined1 extraout_AH_02;

        cVar1 = param_2->g1();
        if (cVar1 != '\0') {
            cVar2 = param_2->g1();
            if (cVar2 == '\x01') {
                param_2->gStringNoConversion(param_1, false);
            }
            param_2->Skip(1);
            uVar3 = param_2->g1();
            (field_416, uVar3, param_3, param_4)->SetValue();
            uVar3 = param_2->g1();
            (field_624, uVar3, param_3, param_4)->SetValue();
            uVar3 = param_2->g1();
            (field_832, uVar3, param_3, param_4)->SetValue();
            uVar3 = param_2->g1();
            (field_1040, uVar3, param_3, param_4)->SetValue();
            uVar3 = param_2->g1();
            (field_1456, uVar3, param_3, param_4)->SetValue();
            uVar3 = param_2->g1();
            (field_1664, uVar3, param_3, param_4)->SetValue();
            uVar3 = param_2->g1();
            (field_1872, uVar3, param_3, param_4)->SetValue();
            uVar3 = param_2->g1();
            (field_2144, uVar3, param_3, param_4)->SetValue();
            uVar3 = param_2->g1();
            (field_2352, uVar3, param_3, param_4)->SetValue();
            uVar3 = param_2->g1();
            (field_2560, uVar3, param_3, param_4)->SetValue();
            uVar3 = param_2->g1();
            (field_2768, uVar3, param_3, param_4)->SetValue();
            param_2->Skip(1);
            uVar3 = param_2->g1();
            (field_5888, uVar3, param_3, param_4)->SetValue();
            uVar3 = param_2->g1();
            (field_3184, uVar3, param_3, param_4)->SetValue();
            param_2->Skip(1);
            uVar3 = param_2->g1();
            (&field_4016, uVar3, param_3, param_4)->SetValue();
            uVar3 = param_2->g1();
            (field_2976, uVar3, param_3, param_4)->SetValue();
            uVar3 = param_2->g1();
            (field_3392, uVar3, param_3, param_4)->SetValue();
            cVar2 = param_2->g1s();
            (field_3600, (int)cVar2, param_3, param_4)->SetValue();
            uVar3 = param_2->g1();
            (field_208, uVar3, param_3, param_4)->SetValue();
            uVar3 = param_2->g1();
            (field_3808, uVar3, param_3, param_4)->SetValue();
            uVar3 = param_2->g1();
            (field_5680, uVar3, param_3, param_4)->SetValue();
            param_2->Skip(1);
            uVar3 = param_2->g2();
            (field_4224, (uint)CONCAT11(extraout_AH)->SetValue(uVar3), param_3, param_4, false);
            uVar3 = param_2->g2();
            (field_4432, (uint)CONCAT11(extraout_AH_00)->SetValue(uVar3), param_3, param_4, false);
            uVar3 = param_2->g2();
            (field_4640, (uint)CONCAT11(extraout_AH_01)->SetValue(uVar3), param_3, param_4, false);
            uVar3 = param_2->g2();
            (field_4848, (uint)CONCAT11(extraout_AH_02)->SetValue(uVar3), param_3, param_4, false);
        }
        return cVar1 != '\0';
    }

    // 0x10060cb20, 1008 bytes, placed by class name
    // ClientOptions::SerialiseForServer()
    ClientOptions* ClientOptions::SerialiseForServer() {
        undefined4 uVar1;
        int iVar2;
        Option<option::EnumBrightness>* in_RSI;

        new (this) PacketT<Array<unsigned char, BucketAllocatorEASTL>>(58);
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p1<oldscape::shared::LoginProt::ID>(
            (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)this, 38);
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p1<oldscape::shared::LoginProt::ID>(
            (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)this, 1);
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p1<oldscape::shared::LoginProt::ID>(
            (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)this, 0);
        uVar1 = (in_RSI + 624)->GetValue();
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p1<oldscape::shared::LoginProt::ID>(
            (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)this, uVar1);
        uVar1 = (in_RSI + 832)->GetValue();
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p1<oldscape::shared::LoginProt::ID>(
            (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)this, uVar1);
        uVar1 = (in_RSI + 1040)->GetValue();
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p1<oldscape::shared::LoginProt::ID>(
            (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)this, uVar1);
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p1<oldscape::shared::LoginProt::ID>(
            (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)this, 5);
        uVar1 = (in_RSI + 1456)->GetValue();
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p1<oldscape::shared::LoginProt::ID>(
            (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)this, uVar1);
        uVar1 = (in_RSI + 1664)->GetValue();
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p1<oldscape::shared::LoginProt::ID>(
            (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)this, uVar1);
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p1<oldscape::shared::LoginProt::ID>(
            (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)this, 1);
        uVar1 = (in_RSI + 1872)->GetValue();
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p1<oldscape::shared::LoginProt::ID>(
            (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)this, uVar1);
        uVar1 = (in_RSI + 2144)->GetValue();
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p1<oldscape::shared::LoginProt::ID>(
            (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)this, uVar1);
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p1<oldscape::shared::LoginProt::ID>(
            (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)this, 2);
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p1<oldscape::shared::LoginProt::ID>(
            (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)this, 1);
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p1<oldscape::shared::LoginProt::ID>(
            (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)this, 2);
        uVar1 = (in_RSI + 2768)->GetValue();
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p1<oldscape::shared::LoginProt::ID>(
            (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)this, uVar1);
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p1<oldscape::shared::LoginProt::ID>(
            (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)this, 3);
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p1<oldscape::shared::LoginProt::ID>(
            (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)this, 0);
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p1<oldscape::shared::LoginProt::ID>(
            (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)this, 2);
        uVar1 = (in_RSI + 5888)->GetValue();
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p1<oldscape::shared::LoginProt::ID>(
            (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)this, uVar1);
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p1<oldscape::shared::LoginProt::ID>(
            (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)this, 1);
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p1<oldscape::shared::LoginProt::ID>(
            (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)this, 1);
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p1<oldscape::shared::LoginProt::ID>(
            (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)this, 0);
        uVar1 = (in_RSI + 3184)->GetValue();
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p1<oldscape::shared::LoginProt::ID>(
            (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)this, uVar1);
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p1<oldscape::shared::LoginProt::ID>(
            (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)this, 1);
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p1<oldscape::shared::LoginProt::ID>(
            (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)this, 0);
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p1<oldscape::shared::LoginProt::ID>(
            (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)this, 1);
        uVar1 = (in_RSI + 4016)->GetValue();
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p1<oldscape::shared::LoginProt::ID>(
            (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)this, uVar1);
        uVar1 = (in_RSI + 2560)->GetValue();
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p1<oldscape::shared::LoginProt::ID>(
            (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)this, uVar1);
        uVar1 = (in_RSI + 2352)->GetValue();
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p1<oldscape::shared::LoginProt::ID>(
            (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)this, uVar1);
        uVar1 = (in_RSI + 416)->GetValue();
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p1<oldscape::shared::LoginProt::ID>(
            (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)this, uVar1);
        uVar1 = (in_RSI + 2976)->GetValue();
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p1<oldscape::shared::LoginProt::ID>(
            (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)this, uVar1);
        uVar1 = (in_RSI + 3392)->GetValue();
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p1<oldscape::shared::LoginProt::ID>(
            (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)this, uVar1);
        uVar1 = (in_RSI + 3600)->GetValue();
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p1<oldscape::shared::LoginProt::ID>(
            (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)this, uVar1);
        uVar1 = (in_RSI + 208)->GetValue();
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p1<oldscape::shared::LoginProt::ID>(
            (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)this, uVar1);
        uVar1 = (in_RSI + 3808)->GetValue();
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p1<oldscape::shared::LoginProt::ID>(
            (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)this, uVar1);
        iVar2 = (in_RSI + 4224)->GetValue();
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p2<int>(
            (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)this, iVar2);
        iVar2 = (in_RSI + 4432)->GetValue();
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p2<int>(
            (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)this, iVar2);
        iVar2 = (in_RSI + 4640)->GetValue();
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p2<int>(
            (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)this, iVar2);
        iVar2 = (in_RSI + 4848)->GetValue();
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p2<int>(
            (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)this, iVar2);
        uVar1 = (in_RSI + 5680)->GetValue();
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p1<oldscape::shared::LoginProt::ID>(
            (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)this, uVar1);
        uVar1 = in_RSI->GetValue();
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p1<oldscape::shared::LoginProt::ID>(
            (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)this, uVar1);
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p1<oldscape::shared::LoginProt::ID>(
            (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)this, 4);
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p1<oldscape::shared::LoginProt::ID>(
            (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)this, 0);
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p1<oldscape::shared::LoginProt::ID>(
            (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)this, 0);
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p1<oldscape::shared::LoginProt::ID>(
            (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)this, 0);
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p1<oldscape::shared::LoginProt::ID>(
            (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)this, 0);
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p1<oldscape::shared::LoginProt::ID>(
            (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)this, 1);
        uVar1 = (in_RSI + 7552)->GetValue();
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p1<oldscape::shared::LoginProt::ID>(
            (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)this, uVar1);
        uVar1 = (in_RSI + 7760)->GetValue();
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p1<oldscape::shared::LoginProt::ID>(
            (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)this, uVar1);
        uVar1 = (in_RSI + 7968)->GetValue();
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p1<oldscape::shared::LoginProt::ID>(
            (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)this, uVar1);
        uVar1 = (in_RSI + 8176)->GetValue();
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p1<oldscape::shared::LoginProt::ID>(
            (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)this, uVar1);
        uVar1 = (in_RSI + 8384)->GetValue();
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p1<oldscape::shared::LoginProt::ID>(
            (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)this, uVar1);
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p1<oldscape::shared::LoginProt::ID>(
            (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)this, 1);
        return this;
    }

    // 0x10060cf10, 112 bytes, placed by class name
    // ClientOptions::ApplyAutoSetupPreset(option::EnumAutoSetup, graphics::RT7Core&, graphics::EffectManager&)
    void ClientOptions::ApplyAutoSetupPreset(int param_2, RT7Core* param_3, EffectManager* param_4) {
        undefined8* puVar1;

        if (param_2 - 1U < 6) {
            SetValue(param_2, param_3, param_4, 0);
            if (param_2 == 6) {
                AutoSetupPowerSave(this, param_3, param_4);
            } else {
                puVar1 = (undefined8*)std::array<ClientOptionsConfig*, 5ul>::operator[]((ulong)(param_2 - 1U));
                ApplySettings(this, (ClientOptionsConfig*)*puVar1, param_3, param_4);
            }
        }
    }

    // 0x10060d070, 640 bytes, placed by class name
    // ClientOptions::AutoSetupPowerSave(graphics::RT7Core&, graphics::EffectManager&)
    void ClientOptions::AutoSetupPowerSave(RT7Core* param_1, EffectManager* param_2) {
        bool bVar1;
        int iVar2;
        uint uVar3;
        _func_void_TestResults_ptr_basic_string_ptr* p_Var4;

        (field_416, m_lowSettings, param_1, param_2)->SetValueIfLower();
        (field_624, DAT_100f3dd14, param_1, param_2)->SetValueIfLower();
        (field_832, DAT_100f3dd18, param_1, param_2)->SetValueIfLower();
        (field_1248, DAT_100f3dd1c, param_1, param_2)->SetValueIfLower();
        (field_1456, DAT_100f3dd20, param_1, param_2)->SetValueIfLower();
        (field_2352, DAT_100f3dd24, param_1, param_2)->SetValueIfLower();
        (field_2560, DAT_100f3dd28, param_1, param_2)->SetValueIfLower();
        (field_2768, DAT_100f3dd2c, param_1, param_2)->SetValueIfLower();
        (field_3184, DAT_100f3dd30, param_1, param_2)->SetValueIfLower();
        (field_3392, DAT_100f3dd34, param_1, param_2)->SetValueIfLower();
        (field_2976, DAT_100f3dd38, param_1, param_2)->SetValueIfLower();
        (field_208, DAT_100f3dd3c, param_1, param_2)->SetValueIfLower();
        (field_3808, DAT_100f3dd40, param_1, param_2)->SetValueIfLower();
        (field_2144, DAT_100f3dd44, param_1, param_2)->SetValueIfLower();
        (field_5056, DAT_100f3dd48, param_1, param_2)->SetValueIfLower();
        (field_5264, DAT_100f3dd4c, param_1, param_2)->SetValueIfLower();
        (field_6512, DAT_100f3dd50, param_1, param_2)->SetValueIfLower();
        (field_5472, DAT_100f3dd54, param_1, param_2)->SetValueIfLower();
        (field_7136, DAT_100f3dd58, param_1, param_2)->SetValueIfLower();
        (field_1872, 1, param_1, param_2)->SetValueIfLower();
        SetValue(6, param_1, param_2);
        iVar2 = field_4224->GetDefault();
        (field_4224, iVar2, param_1, param_2, false)->SetValue();
        uVar3 = field_4432->GetDefault();
        p_Var4 = (_func_void_TestResults_ptr_basic_string_ptr*)(ulong)uVar3;
        (field_4432, uVar3, param_1, param_2, false)->SetValue();
        bVar1 = (field_3600, p_Var4)->PointerRelease();
        (field_3600, bVar1, param_1, param_2, 0)->SetValue();
    }

    // 0x10060d310, 560 bytes, placed by class name
    // ClientOptions::ApplySettings(ClientOptionsConfig const&, graphics::RT7Core&, graphics::EffectManager&)
    void ClientOptions::ApplySettings(ClientOptionsConfig* param_1, RT7Core* param_2, EffectManager* param_3) {
        (field_1872, 1, param_2, param_3, 0)->SetValue();
        (field_416, param_1->field_0, param_2, param_3, 0)->SetValue();
        (field_624, param_1->field_4, param_2, param_3, 0)->SetValue();
        (field_832, param_1->field_8, param_2, param_3, 0)->SetValue();
        (field_1456, param_1->field_16, param_2, param_3, 0)->SetValue();
        (field_2352, param_1->field_20, param_2, param_3, 0)->SetValue();
        (field_2560, param_1->field_24, param_2, param_3, 0)->SetValue();
        (field_2768, param_1->field_28, param_2, param_3, 0)->SetValue();
        (field_3184, param_1->field_32, param_2, param_3, 0)->SetValue();
        (field_3392, param_1->field_36, param_2, param_3, 0)->SetValue();
        (field_2976, param_1->field_40, param_2, param_3, 0)->SetValue();
        (field_208, param_1->field_44, param_2, param_3, 0)->SetValue();
        (field_3808, param_1->field_48, param_2, param_3, 0)->SetValue();
        (field_2144, param_1->field_52, param_2, param_3, 0)->SetValue();
        (field_5056, param_1->field_56, param_2, param_3, 0)->SetValue();
        (field_5264, param_1->field_60, param_2, param_3, 0)->SetValue();
        (field_6512, param_1->field_64, param_2, param_3, 0)->SetValue();
        (field_5472, param_1->field_68, param_2, param_3, 0)->SetValue();
        (field_7136, param_1->field_72, param_2, param_3, 0)->SetValue();
        (field_1248, param_1->field_12, param_2, param_3, 0)->SetValue();
    }

    // 0x10060d540, 1280 bytes, placed by class name
    // ClientOptions::ApplyAutoSetup(perf::PerfModuleReporter const&, graphics::RT7Core&, graphics::EffectManager&)
    void ClientOptions::ApplyAutoSetup(PerfModuleReporter* param_1, RT7Core* param_2, EffectManager* param_3) {
        undefined1* this_00;
        undefined1* this_01;
        undefined1* this_02;
        undefined1* this_03;
        undefined1* this_04;
        undefined1* this_05;
        undefined1* this_06;
        undefined1* this_07;
        undefined1* this_08;
        undefined1* this_09;
        undefined1* this_10;
        undefined1* this_11;
        undefined1* this_12;
        undefined1* this_13;
        undefined1* this_14;
        undefined1* this_15;
        undefined1* this_16;
        undefined1* this_17;
        undefined1* this_18;
        bool bVar1;
        int iVar2;
        uint uVar3;
        undefined4 uVar4;
        undefined8 uVar5;
        undefined7 extraout_var;
        _func_void_TestResults_ptr_basic_string_ptr* p_Var6;
        ClientOptionsConfig local_80;

        uVar5 = logger::default_logger();
        logger::Logger::Log(uVar5, 0, 7,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                            "clientoptions/ClientOptions.cpp",
                            619, "\nClientOptions::AutoSetup");
        uVar5 = logger::default_logger();
        logger::Logger::Log(uVar5, 0, 7,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                            "clientoptions/ClientOptions.cpp",
                            620, "----------------------------------------");
        param_1->PrintResults();
        this_00 = field_416;
        local_80.field_0 = this_00->DetermineBestSetting(param_1);
        this_01 = field_624;
        local_80.field_4 = this_01->DetermineBestSetting(param_1);
        this_02 = field_832;
        local_80.field_8 = this_02->DetermineBestSetting(param_1);
        this_03 = field_1456;
        local_80.field_16 = this_03->DetermineBestSetting(param_1);
        local_80.field_12 = (field_1248, param_1)->DetermineBestSetting();
        this_04 = field_2352;
        local_80.field_20 = this_04->DetermineBestSetting(param_1);
        this_05 = field_2560;
        local_80.field_24 = this_05->DetermineBestSetting(param_1);
        this_06 = field_2768;
        local_80.field_28 = this_06->DetermineBestSetting(param_1);
        this_07 = field_3184;
        local_80.field_32 = this_07->DetermineBestSetting(param_1);
        this_08 = field_3392;
        local_80.field_36 = this_08->DetermineBestSetting(param_1);
        this_09 = field_2976;
        local_80.field_40 = this_09->DetermineBestSetting(param_1);
        this_10 = field_208;
        local_80.field_44 = this_10->DetermineBestSetting(param_1);
        this_11 = field_3808;
        local_80.field_48 = this_11->DetermineBestSetting(param_1);
        this_12 = field_5056;
        local_80.field_56 = this_12->DetermineBestSetting(param_1);
        this_13 = field_5264;
        local_80.field_60 = this_13->DetermineBestSetting(param_1);
        this_14 = field_6512;
        local_80.field_64 = this_14->DetermineBestSetting(param_1);
        this_15 = field_5472;
        local_80.field_68 = this_15->DetermineBestSetting(param_1);
        this_16 = field_7136;
        local_80.field_72 = this_16->DetermineBestSetting(param_1);
        local_80.field_52 = 1;
        this_17 = field_4224;
        iVar2 = this_17->GetDefault();
        this_17->SetValue(iVar2, param_2, param_3, false);
        this_18 = field_4432;
        uVar3 = this_18->GetDefault();
        p_Var6 = (_func_void_TestResults_ptr_basic_string_ptr*)(ulong)uVar3;
        this_18->SetValue(uVar3, param_2, param_3, false);
        bVar1 = (field_3600, p_Var6)->PointerRelease();
        (field_3600, CONCAT71(extraout_var)->SetValue(bVar1) & 4294967295, param_2, param_3, 0);
        SetValue(0, param_2, param_3, 0);
        ApplySettings(this, &local_80, param_2, param_3);
        uVar4 = this_00->GetValue();
        this_00->SetMaxLowestValue(uVar4);
        uVar4 = this_01->GetValue();
        this_01->SetMaxLowestValue(uVar4);
        uVar4 = this_02->GetValue();
        this_02->SetMaxLowestValue(uVar4);
        uVar4 = this_03->GetValue();
        this_03->SetMaxLowestValue(uVar4);
        uVar4 = this_04->GetValue();
        this_04->SetMaxLowestValue(uVar4);
        uVar4 = this_05->GetValue();
        this_05->SetMaxLowestValue(uVar4);
        uVar4 = this_06->GetValue();
        this_06->SetMaxLowestValue(uVar4);
        uVar4 = this_07->GetValue();
        this_07->SetMaxLowestValue(uVar4);
        uVar4 = this_08->GetValue();
        this_08->SetMaxLowestValue(uVar4);
        uVar4 = this_09->GetValue();
        this_09->SetMaxLowestValue(uVar4);
        uVar4 = this_10->GetValue();
        this_10->SetMaxLowestValue(uVar4);
        uVar4 = this_11->GetValue();
        this_11->SetMaxLowestValue(uVar4);
        uVar4 = field_1872->GetValue();
        (field_1872, uVar4)->SetMaxLowestValue();
        uVar4 = this_17->GetValue();
        this_17->SetMaxLowestValue(uVar4);
        uVar4 = this_18->GetValue();
        this_18->SetMaxLowestValue(uVar4);
        uVar4 = this_12->GetValue();
        this_12->SetMaxLowestValue(uVar4);
        uVar4 = this_13->GetValue();
        this_13->SetMaxLowestValue(uVar4);
        uVar4 = this_14->GetValue();
        this_14->SetMaxLowestValue(uVar4);
        uVar4 = this_15->GetValue();
        this_15->SetMaxLowestValue(uVar4);
        uVar4 = this_16->GetValue();
        this_16->SetMaxLowestValue(uVar4);
        uVar5 = logger::default_logger();
        logger::Logger::Log(uVar5, 0, 7,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                            "clientoptions/ClientOptions.cpp",
                            697, "----------------------------------------");
    }

    // 0x10060da50, 112 bytes, placed by class name
    // ClientOptions::IsOptionAvailable(ClientOptionId, option::OptionClient) const
    undefined4 ClientOptions::IsOptionAvailable(uint param_2, undefined4 param_3) {
        undefined4 uVar1;
        undefined8* puVar2;
        undefined8 uVar3;

        if (param_2 < 41) {
            puVar2 = (undefined8*)std::array<option::IOption*, 41ul>::operator[](
                (array<option::IOption*, 41ul>*)&field_9216, (long)(int)param_2);
            uVar1 = (**(code**)(*(long*)*puVar2 + 48))((long*)*puVar2, param_3);
        } else {
            uVar3 = logger::default_logger();
            uVar1 = 0;
            logger::Logger::Log(uVar3, 0, 2,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                "clientoptions/ClientOptions.cpp",
                                709, "Unknown client option id %d", param_2);
        }
        return uVar1;
    }

    // 0x10060dad0, 336 bytes, placed by class name
    // ClientOptions::IsOptionModifiable(ClientOptionId, graphics::RT7Core const*) const
    ulong ClientOptions::IsOptionModifiable(uint param_2, RT7Core* param_3) {
        uint uVar2;
        int iVar3;
        undefined8 uVar4;
        undefined8* puVar5;
        undefined8 unaff_R12;
        undefined7 uVar7;
        ulong uVar6;

        if (40 < param_2) {
            uVar4 = logger::default_logger();
            uVar6 = 0;
            logger::Logger::Log(uVar4, 0, 2,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                "clientoptions/ClientOptions.cpp",
                                736, "Unknown client option id %d", param_2);
            goto switchD_10060db05_caseD_1e;
        }
        if (param_2 - 3 < 29) {
            uVar7 = (undefined7)((ulong)unaff_R12 >> 8);
            uVar6 = CONCAT71(uVar7, 1);
            switch (param_2) {
            case 3:
                iVar3 = field_416->GetValue();
                break;
            default:
                goto switchD_10060db05_caseD_4;
            case 27:
                if ((field_3808, param_3)->IsModifiable() == '\0') {
                    uVar6 = 0;
                    goto switchD_10060db05_caseD_1e;
                }
            case 20:
                iVar3 = field_2560->GetValue();
                break;
            case 30:
            case 31:
                goto switchD_10060db05_caseD_1e;
            }
            uVar6 = CONCAT71(uVar7, iVar3 != 0);
        } else {
        switchD_10060db05_caseD_4:
            puVar5 = (undefined8*)std::array<option::IOption*, 41ul>::operator[](
                (array<option::IOption*, 41ul>*)&field_9216, (long)(int)param_2);
            uVar2 = (**(code**)(*(long*)*puVar5 + 32))((long*)*puVar5, param_3);
            uVar6 = (ulong)uVar2;
        }
    switchD_10060db05_caseD_1e:
        return uVar6 & 4294967295;
    }

    // 0x10060dc20, 128 bytes, placed by class name
    // ClientOptions::CanSetOptionValue(ClientOptionId, int) const
    undefined4 ClientOptions::CanSetOptionValue(uint param_2, int param_3) {
        undefined4 uVar1;
        undefined8* puVar2;
        undefined8 uVar3;

        if (param_2 < 41) {
            puVar2 = (undefined8*)std::array<option::IOption*, 41ul>::operator[](
                (array<option::IOption*, 41ul>*)&field_9216, (long)(int)param_2);
            if (param_2 == 28) {
                param_3 = param_3 + -1;
            }
            uVar1 = (**(code**)(*(long*)*puVar2 + 64))((long*)*puVar2, param_3);
        } else {
            uVar3 = logger::default_logger();
            uVar1 = 0;
            logger::Logger::Log(uVar3, 0, 2,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                "clientoptions/ClientOptions.cpp",
                                760, "Unknown client option id %d", param_2);
        }
        return uVar1;
    }

    // 0x10060dca0, 128 bytes, placed by class name
    // ClientOptions::GetOptionValue(ClientOptionId) const
    int ClientOptions::GetOptionValue(uint param_2) {
        int iVar1;
        undefined8* puVar2;
        undefined8 uVar3;

        if (param_2 < 41) {
            puVar2 = (undefined8*)std::array<option::IOption*, 41ul>::operator[](
                (array<option::IOption*, 41ul>*)&field_9216, (long)(int)param_2);
            iVar1 = (**(code**)(*(long*)*puVar2 + 72))();
            iVar1 = (uint)(param_2 == 28) + iVar1;
        } else {
            uVar3 = logger::default_logger();
            iVar1 = 0;
            logger::Logger::Log(uVar3, 0, 2,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                "clientoptions/ClientOptions.cpp",
                                784, "Unknown client option id %d", param_2);
        }
        return iVar1;
    }

    // 0x10060dd20, 192 bytes, placed by class name
    // ClientOptions::GetOptionValueLabel(ClientOptionId, int) const
    char* ClientOptions::GetOptionValueLabel(uint param_2, int param_3) {
        long* plVar1;
        char cVar2;
        int iVar3;
        undefined8* puVar4;
        undefined8 uVar5;
        char* pcVar6;
        Layout local_28[16];

        if (param_2 < 41) {
            puVar4 = (undefined8*)std::array<option::IOption*, 41ul>::operator[](
                (array<option::IOption*, 41ul>*)&field_9216, (long)(int)param_2);
            plVar1 = (long*)*puVar4;
            (**(code**)(*plVar1 + 56))(local_28, plVar1);
            iVar3 = (**(code**)(*plVar1 + 88))(plVar1);
            param_3 = param_3 - iVar3;
            if ((-1 < param_3) &&
                (iVar3 =
                     eastl::basic_string<char,
                                         eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::
                         Layout::HeapBeginPtr(local_28),
                 param_3 < iVar3)) {
                puVar4 = (undefined8*)WrapArray<char const* const>::operator[]((WrapArray<char const* const>*)local_28,
                                                                               (long)param_3);
                return (char*)*puVar4;
            }
            cVar2 = local_28->empty();
            pcVar6 = (char*)0;
            if (cVar2 == '\0') {
                pcVar6 = "Unknown";
            }
        } else {
            uVar5 = logger::default_logger();
            pcVar6 = (char*)0;
            logger::Logger::Log(uVar5, 0, 2,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                "clientoptions/ClientOptions.cpp",
                                814, "Unknown client option id %d", param_2);
        }
        return pcVar6;
    }

    // 0x10060de60, 128 bytes, placed by class name
    // ClientOptions::ValueLabelsAvailableForOption(ClientOptionId) const
    uint ClientOptions::ValueLabelsAvailableForOption(uint param_2) {
        uint uVar1;
        undefined8* puVar2;
        undefined8 uVar3;
        SharedArray<std::unique_ptr<oldscape::rs2lib::worldmap::LocationData,
                                    std::default_delete<oldscape::rs2lib::worldmap::LocationData>>>
            local_20[16];

        if (param_2 < 41) {
            puVar2 = (undefined8*)std::array<option::IOption*, 41ul>::operator[](
                (array<option::IOption*, 41ul>*)&field_9216, (long)(int)param_2);
            (**(code**)(*(long*)*puVar2 + 56))(local_20);
            uVar1 = local_20->empty();
            uVar1 = uVar1 ^ 1;
        } else {
            uVar3 = logger::default_logger();
            uVar1 = 0;
            logger::Logger::Log(uVar3, 0, 2,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                "clientoptions/ClientOptions.cpp",
                                827, "Unknown client option id %d", param_2);
        }
        return uVar1;
    }

    // 0x10060dee0, 112 bytes, placed by class name
    // ClientOptions::IsToggleOption(ClientOptionId) const
    undefined4 ClientOptions::IsToggleOption(uint param_2) {
        undefined4 uVar1;
        undefined8 in_RAX;
        undefined4 uVar4;
        undefined8* puVar2;
        undefined8 uVar3;

        uVar4 = (undefined4)((ulong)in_RAX >> 32);
        if (param_2 < 41) {
            puVar2 = (undefined8*)std::array<option::IOption*, 41ul>::operator[](
                (array<option::IOption*, 41ul>*)&field_9216, (long)(int)param_2);
            uVar1 = (**(code**)(*(long*)*puVar2 + 40))();
        } else {
            uVar3 = logger::default_logger();
            uVar1 = 0;
            logger::Logger::Log(uVar3, 0, 2,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                "clientoptions/ClientOptions.cpp",
                                840, "Unknown client option id %d", CONCAT44(uVar4, param_2));
        }
        return uVar1;
    }

    // 0x10060df50, 144 bytes, placed by class name
    // ClientOptions::GetOptionValueRange(ClientOptionId) const
    undefined8 ClientOptions::GetOptionValueRange(uint param_2) {
        undefined8* puVar1;
        undefined8 uVar2;
        undefined8 local_20;
        int local_18[2];

        if (param_2 < 41) {
            puVar1 = (undefined8*)std::array<option::IOption*, 41ul>::operator[](
                (array<option::IOption*, 41ul>*)&field_9216, (long)(int)param_2);
            local_20 = (**(code**)(*(long*)*puVar1 + 88))();
        } else {
            uVar2 = logger::default_logger();
            logger::Logger::Log(uVar2, 0, 2,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                "clientoptions/ClientOptions.cpp",
                                853, "Unknown client option id %d", param_2);
            local_18[0] = 0;
            local_18[1] = 0;
            std::pair<int, int>::pair<int, int, false>((pair<int, int>*)&local_20, local_18, local_18 + 1);
        }
        return local_20;
    }

    // 0x10060dff0, 304 bytes, placed by class name
    // ClientOptions::SetOptionValue(ClientOptionId, int, graphics::RT7Core&, graphics::EffectManager&)
    void ClientOptions::SetOptionValue(uint param_2, int param_3, undefined8 param_4, undefined8 param_5) {
        undefined8 in_RAX;
        undefined8 uVar2;
        undefined8* puVar3;
        undefined4 uVar4;

        uVar4 = (undefined4)((ulong)in_RAX >> 32);
        field_9744 = SystemTimer::GetTimeMS<std::chrono::steady_clock>((SystemTimer*)this);
        if (param_2 < 41) {
            if (param_2 == 28) {
                (field_3600, param_3 + -1, param_4, param_5, 0)->SetValue();
            } else if (param_2 == 17) {
                if (param_3 == -1) {
                    param_3 = field_5888->GetValue();
                }
                (field_6096, param_3, param_4, param_5, 0)->SetValue();
            } else if (param_2 == 16) {
                (field_5888, param_3, param_4, param_5, 0)->SetValue();
                (field_6096, param_3)->SetValueInternal();
            } else {
                puVar3 = (undefined8*)std::array<option::IOption*, 41ul>::operator[](
                    (array<option::IOption*, 41ul>*)&field_9216, (long)(int)param_2);
                (**(code**)(*(long*)*puVar3 + 80))((long*)*puVar3, param_3, param_4, param_5);
            }
        } else {
            uVar2 = logger::default_logger();
            logger::Logger::Log(uVar2, 0, 2,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                "clientoptions/ClientOptions.cpp",
                                894, "Unknown client option id %d", CONCAT44(uVar4, param_2));
        }
    }

    // 0x10060e130, 80 bytes, placed by class name
    // ClientOptions::GetOption(ClientOptionId) const
    undefined8 ClientOptions::GetOption(uint param_2) {
        undefined8* puVar1;

        if (40 < param_2) {
            /* WARNING: Subroutine does not return */
            LogAssert("(optionId >= ClientOptionId::_START) && (optionId < ClientOptionId::_COUNT)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                      "clientoptions/ClientOptions.cpp",
                      900, (char*)0);
        }
        puVar1 = (undefined8*)std::array<option::IOption*, 41ul>::operator[](
            (array<option::IOption*, 41ul>*)&field_9216, (long)(int)param_2);
        return *puVar1;
    }

    // 0x100612db0, 32 bytes, placed by class name
    // ClientOptions::ClientOptions(SystemSettings*, graphics::RT7Core&, graphics::EffectManager&, bool)::$_0::operator()(Settings*) const
    /* ClientOptions::ClientOptions(SystemSettings*, graphics::RT7Core&,
   graphics::EffectManager&, bool)::$_0::TEMPNAMEPLACEHOLDERVALUE(Settings*) const */

    void ClientOptions::ClientOptions(SystemSettings*, graphics::RT7Core&, graphics::EffectManager&,
                                      bool)::$_0 ::operator()(Settings* param_1) {
        *(undefined4*)(*(long*)this + 9752) = 1;
    }

} // namespace jag::game
