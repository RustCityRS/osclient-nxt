// libs/game/runetek5/clientoptions/options/ClientOptions_Shadows.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.game.runetek5

#include "ClientOptions_Shadows.h"

namespace jag::game::option {
    // 0x1005fe020, 176 bytes, base-object constructor, placed by class name and debug map
    // Shadows::Shadows(graphics::RT7Core&, Settings&, char const*, ShadowQuality*)
    void Shadows::Shadows(RT7Core* param_1, Settings* param_2, char* param_3, ShadowQuality* param_4) {
        undefined8 in_RAX;
        EffectManager* pEVar2;
        SunlightDirectLighting* pSVar3;
        undefined1 local_38[8];

        local_38 = (undefined1[8])in_RAX;
        new (local_38) oldscape::sidebars::SideBarData(0, 1);
        new (this) Option<EnumOptionToggle>(param_1, param_2, param_3, local_38);
        field_0 = &PTR__HapticFeedback_100f09f00;
        field_200 = param_4;
        pEVar2 = (EffectManager*)param_1->GetEffectManager();
        pSVar3 = graphics::EffectManager::GetEffect<graphics::SunlightDirectLighting>(pEVar2);
        if ((*(code*)pSVar3->field_0[5])(pSVar3) == '\0') {
            (field_28, 0)->SetZ();
        }
    }

    // 0x1005fe0d0, 16 bytes, complete-object constructor, placed by class name and debug map
    // Shadows::Shadows(graphics::RT7Core&, Settings&, char const*, ShadowQuality*): jumps straight to the base-object constructor

    // 0x1005fe0e0, 144 bytes, placed by class name and debug map
    // Shadows::ApplySettingImpl(graphics::RT7Core&, graphics::EffectManager&, EnumOptionToggle)
    void Shadows::ApplySettingImpl(undefined8 param_1, EffectManager* param_2) {
        ShadowQuality* this_00;
        int iVar1;
        undefined4 uVar2;

        param_2->DisableEffect(36);
        iVar1 = GetValue();
        if (iVar1 == 0) {
            param_2->DisableEffect(30);
            param_2->DisableEffect(35);
        } else {
            param_2->EnableEffect(30, 1);
            param_2->EnableEffect(35, 1);
            this_00 = field_200;
            uVar2 = this_00->GetValue();
            this_00->ApplySetting(param_1, param_2, uVar2);
        }
    }

    // 0x1005fe170, 128 bytes, placed by class name and debug map
    // Shadows::DetermineBestSetting(perf::PerfModuleReporter const&) const
    bool Shadows::DetermineBestSetting(PerfModuleReporter* param_1) {
        int iVar1;
        int* piVar2;
        undefined8 uVar3;
        undefined8 local_20;
        undefined4 local_18;

        local_18 = 259;
        local_20 = 1120986464512;
        piVar2 = (int*)local_20.data();
        iVar1 = param_1->GetSummedResults(piVar2, 3);
        uVar3 = logger::default_logger();
        logger::Logger::Log(uVar3, 0, 7,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                            "clientoptions/options/ClientOptions_Shadows.cpp",
                            52, "Shadows::DetermineBestSetting Result: %d", iVar1);
        return 210 < iVar1;
    }

    // 0x100609140: the linker folded this into CutsceneSubtitles::~CutsceneSubtitles(), which has identical code
    Shadows::~Shadows();

    // 0x10060f700: the linker folded this into Option<EnumOptionToggle>::~Option(), which has identical code
    Shadows::~Shadows();

} // namespace jag::game::option
