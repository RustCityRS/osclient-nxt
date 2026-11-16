// libs/game/runetek5/clientoptions/options/ClientOptions_CustomPlayerModelCount.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.game.runetek5

#include "ClientOptions_CustomPlayerModelCount.h"

namespace jag::game::option {
    // 0x1002699a0: the linker folded this into oldscape::rs2lib::social::ClanChannelDelta::DeleteUser::GetID() const, which has identical code
    CustomPlayerModelCount::GetDefault();

    // 0x1005fe370: the linker folded this into Reflections::~Reflections(), which has identical code
    CustomPlayerModelCount::~CustomPlayerModelCount();

    // 0x100601950, 96 bytes, base-object constructor, placed by class name and debug map
    // CustomPlayerModelCount::CustomPlayerModelCount(graphics::RT7Core&, Settings&, char const*)
    void CustomPlayerModelCount::CustomPlayerModelCount(RT7Core* param_1, Settings* param_2, char* param_3) {
        undefined1 local_30[8];

        new (local_30) oldscape::sidebars::SideBarData(0, 3);
        new (this) Option<graphics::GraphicsQuality>(param_1, param_2, param_3, local_30);
        field_0 = &PTR__Reflections_100f0a440;
    }

    // 0x100601a40, 16 bytes, complete-object constructor, placed by class name and debug map
    // CustomPlayerModelCount::CustomPlayerModelCount(graphics::RT7Core&, Settings&, char const*): jumps straight to the base-object constructor

    // 0x100601a50, 48 bytes, placed by class name and debug map
    // CustomPlayerModelCount::ApplySettingImpl(graphics::RT7Core&, graphics::EffectManager&, graphics::GraphicsQuality)
    void CustomPlayerModelCount::ApplySettingImpl() {
        int iVar1;

        iVar1 = GetValue();
        PlayerEntityListProperties::MAX_NUM_LOADED_PLAYER_MODELS = *(undefined4*)(&DAT_100d43140 + (long)iVar1 * 4);
        PlayerEntityListProperties::ALLOW_SELECTIVE_PLAYER_MODEL_LOADING = iVar1 != 3;
    }

    // 0x100601a80, 16 bytes, placed by class name and debug map
    // CustomPlayerModelCount::DetermineBestSetting(perf::PerfModuleReporter const&) const
    void CustomPlayerModelCount::DetermineBestSetting(PerfModuleReporter* param_1) {
        field_28->GetZ();
    }

} // namespace jag::game::option
