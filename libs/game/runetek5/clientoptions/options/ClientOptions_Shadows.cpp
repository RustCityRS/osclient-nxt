// libs/game/runetek5/clientoptions/options/ClientOptions_Shadows.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.runetek5

#include "ClientOptions_Shadows.h"

namespace jag::game::option {
    // 0x1005fe020
    Shadows::Shadows(graphics::RT7Core& rt7Core, Settings& settings, const char* str, ShadowQuality* shadowQuality) {
        Range<EnumOptionToggle>* in_RAX;

        Range<EnumOptionToggle>* local_38 = in_RAX;
        new (&local_38) oldscape::sidebars::SideBarData(0, 1);
        new (this) Option<EnumOptionToggle>(rt7Core, settings, str, local_38);
        field_200 = shadowQuality;
        if (rt7Core.GetEffectManager()->GetEffect<graphics::SunlightDirectLighting>(30)->IsValidValue() == '\0') {
            field_28->SetZ(0);
        }
    }

    // 0x1005fe0e0
    void Shadows::ApplySettingImpl(graphics::RT7Core& rt7Core, graphics::EffectManager& effectManager,
                                   EnumOptionToggle enumOptionToggle) {
        ShadowQuality* this_00;
        GraphicsQuality graphicsQuality;

        effectManager.DisableEffect(36);
        if (GetValue() == 0) {
            effectManager.DisableEffect(30);
            effectManager.DisableEffect(35);
        } else {
            effectManager.EnableEffect(30, true);
            effectManager.EnableEffect(35, true);
            this_00 = field_200;
            graphicsQuality = this_00->GetValue();
            this_00->ApplySetting(rt7Core, effectManager, graphicsQuality);
        }
    }

    // 0x1005fe170
    bool Shadows::DetermineBestSetting(const perf::PerfModuleReporter& perfModuleReporter) const {
        uint32_t local_18 = 259;
        int iVar1 = perfModuleReporter.GetSummedResults((1120986464512).data(), 3);
        (logger::default_logger())
            ->Log(false, 7,
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/clientoptions/"
                  "options/ClientOptions_Shadows.cpp",
                  52, "Shadows::DetermineBestSetting Result: %d", iVar1);
        return 210 < iVar1;
    }

    // 0x10060f700: Shadows::~Shadows() has the same machine code as Option<EnumOptionToggle>::~Option()

} // namespace jag::game::option
