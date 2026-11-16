// libs/game/runetek5/clientoptions/options/ClientOptions_CustomPlayerModelCount.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.runetek5

#include "ClientOptions_CustomPlayerModelCount.h"

namespace jag::game::option {
    // 0x1002699a0: CustomPlayerModelCount::GetDefault() has the same machine code as oldscape::rs2lib::social::ClanChannelDelta::DeleteUser::GetID() const

    // 0x1005fe370: CustomPlayerModelCount::~CustomPlayerModelCount() has the same machine code as Reflections::~Reflections()

    // 0x100601950
    CustomPlayerModelCount::CustomPlayerModelCount(graphics::RT7Core& rt7Core, Settings& settings, const char* str) {
        Range<graphics::GraphicsQuality>* local_30;

        new (&local_30) oldscape::sidebars::SideBarData(0, 3);
        new (this) Option<graphics::GraphicsQuality>(rt7Core, settings, str, local_30);
    }

    // 0x100601a50
    void CustomPlayerModelCount::ApplySettingImpl(graphics::RT7Core& rt7Core, graphics::EffectManager& effectManager,
                                                  graphics::GraphicsQuality graphicsQuality) {
        int iVar1 = GetValue();
        PlayerEntityListProperties::MAX_NUM_LOADED_PLAYER_MODELS = *(uint32_t*)(&DAT_100d43140 + (long)iVar1 * 4);
        PlayerEntityListProperties::ALLOW_SELECTIVE_PLAYER_MODEL_LOADING = iVar1 != 3;
    }

    // 0x100601a80
    void CustomPlayerModelCount::DetermineBestSetting(const perf::PerfModuleReporter& perfModuleReporter) const {
        field_28.GetZ();
    }

} // namespace jag::game::option
