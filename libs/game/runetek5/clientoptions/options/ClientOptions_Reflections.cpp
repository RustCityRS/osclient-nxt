// libs/game/runetek5/clientoptions/options/ClientOptions_Reflections.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.runetek5

#include "ClientOptions_Reflections.h"

namespace jag::game::option {
    // 0x100269960: Reflections::GetDefault() has the same machine code as oldscape::rs2lib::social::ClanChannelDelta::AddUser::GetID() const

    // 0x1005fd930
    Reflections::Reflections(graphics::RT7Core& rt7Core, Settings& settings, const char* str) {
        Range<graphics::GraphicsQuality>* local_30;

        new (&local_30) oldscape::sidebars::SideBarData(0, 3);
        new (this) Option<graphics::GraphicsQuality>(rt7Core, settings, str, local_30);
        FogEffect* this_01 = rt7Core.GetEffectManager()->GetEffect<graphics::SunlightDirectLighting>(44);
        bool cVar1 = this_01->IsValidValue();
        if (!cVar1) {
            this_01 = (FogEffect*)field_28;
            this_01->SetZ(2);
        }
        auto this_02 = this_01->Instance();
        long lVar2 = this_02->GetOrigin();
        if ((*(char*)(lVar2 + 145) == '\0') || (cVar1 = this_02->GetGPUCullingSupported(), !cVar1)) {
            field_28->SetZ(0);
            return;
        }
    }

    // 0x1005fda10
    void Reflections::ApplySettingImpl(graphics::RT7Core& rt7Core, graphics::EffectManager& effectManager,
                                       graphics::GraphicsQuality graphicsQuality) {
        GraphicsQuality graphicsQuality_00;
        EffectType effectType;

        FogEffect* pFVar2 = rt7Core.GetEffectManager()->GetEffect<graphics::SunlightDirectLighting>(108);
        bool arg2 = (bool)pFVar2->IsValidValue();
        switch (GetValue()) {
        case 0:
            effectManager.DisableEffect(107);
            effectManager.DisableEffect(108);
            effectManager.DisableEffect(44);
            effectManager.DisableEffect(100);
            effectManager.DisableEffect(101);
            effectManager.SetEffectQuality(107, 4294967295);
            effectManager.SetEffectQuality(44, 4294967295);
            effectManager.EnableEffect(99, true);
            effectManager.SetEffectQuality(99, 0);
            effectManager.EnableEffect(102, true);
            effectType = 102;
            graphicsQuality_00 = 0;
            break;
        case 1:
            effectManager.EnableEffect(108, arg2);
            effectManager.DisableEffect(44);
            effectManager.EnableEffect(100, true);
            effectManager.EnableEffect(101, true);
            effectManager.SetEffectQuality(44, 4294967295);
            effectManager.EnableEffect(99, true);
            effectManager.SetEffectQuality(99, 1);
            effectManager.EnableEffect(102, true);
            effectManager.SetEffectQuality(102, 1);
            effectManager.EnableEffect(107, true);
            effectType = 107;
            graphicsQuality_00 = 1;
            break;
        case 2:
            effectManager.EnableEffect(107, true);
            effectManager.EnableEffect(108, arg2);
            effectManager.EnableEffect(100, true);
            effectManager.EnableEffect(101, true);
            effectManager.EnableEffect(99, true);
            effectManager.SetEffectQuality(99, 2);
            effectManager.EnableEffect(102, true);
            effectManager.SetEffectQuality(102, 2);
            effectManager.SetEffectQuality(44, 4294967295);
            effectManager.EnableEffect(44, true);
            effectManager.SetEffectQuality(107, 2);
            effectType = 44;
            graphicsQuality_00 = 2;
            break;
        case 3:
            effectManager.EnableEffect(107, true);
            effectManager.EnableEffect(108, arg2);
            effectManager.EnableEffect(100, true);
            effectManager.EnableEffect(101, true);
            effectManager.EnableEffect(99, true);
            effectManager.SetEffectQuality(99, 3);
            effectManager.EnableEffect(102, true);
            effectManager.SetEffectQuality(102, 3);
            effectManager.EnableEffect(44, true);
            effectManager.SetEffectQuality(107, 3);
            effectType = 44;
            graphicsQuality_00 = 3;
            break;
        default:
            goto switchD_1005fda62_default;
        }
        effectManager.SetEffectQuality(effectType, graphicsQuality_00);
    switchD_1005fda62_default:
    }

    // 0x1005fdd90
    uint8_t Reflections::DetermineBestSetting(const perf::PerfModuleReporter& perfModuleReporter) const {
        int iVar2 = perfModuleReporter.GetSummedResults((1120986464512).data(), 2);
        (logger::default_logger())
            ->Log(false, 7,
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/clientoptions/"
                  "options/ClientOptions_Reflections.cpp",
                  155, "Reflections::DetermineBestSetting Result: %d", iVar2);
        uint8_t uVar1 = 3;
        if ((iVar2 < 651) && (uVar1 = 2, iVar2 < 401)) {
            uVar1 = 110 < iVar2;
        }
        return uVar1;
    }

    // 0x100610f30: Reflections::~Reflections() has the same machine code as CustomPlayerModelCount::~CustomPlayerModelCount()

} // namespace jag::game::option
