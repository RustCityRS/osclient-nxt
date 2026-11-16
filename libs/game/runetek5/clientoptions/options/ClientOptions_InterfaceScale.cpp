// libs/game/runetek5/clientoptions/options/ClientOptions_InterfaceScale.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.game.runetek5

#include "ClientOptions_InterfaceScale.h"

namespace jag::game::option {
    // 0x1005ffd30, 112 bytes, base-object constructor, placed by class name and debug map
    // InterfaceScale::InterfaceScale(graphics::RT7Core&, Settings&, char const*)
    void InterfaceScale::InterfaceScale(RT7Core* param_1, Settings* param_2, char* param_3) {
        undefined1 local_30[8];

        new (local_30) oldscape::sidebars::SideBarData(10, 400);
        new (this) Option<unsigned int>(param_1, param_2, param_3, local_30);
        field_0 = &PTR__GameRenderScale_100f0a248;
    }

    // 0x1005ffda0, 16 bytes, complete-object constructor, placed by class name and debug map
    // InterfaceScale::InterfaceScale(graphics::RT7Core&, Settings&, char const*): jumps straight to the base-object constructor

    // 0x1005ffdb0, 16 bytes, placed by class name and debug map
    // InterfaceScale::GetDefault()
    undefined8 InterfaceScale::GetDefault() {
        return 100;
    }

    // 0x1005ffdc0, 48 bytes, placed by class name and debug map
    // InterfaceScale::ApplySettingImpl(graphics::RT7Core&, graphics::EffectManager&, unsigned int)
    void InterfaceScale::ApplySettingImpl(RT7Core* param_1, EffectManager* param_2, uint param_3) {
        ScaleManager* this_00;
        uint uVar1;

        this_00 = (ScaleManager*)param_1->GetScaleManager();
        uVar1 = GetValue();
        this_00->RequestInterfaceScaleOverride(uVar1);
    }

    // 0x100600200: the linker folded this into GameRenderScale::~GameRenderScale(), which has identical code
    InterfaceScale::~InterfaceScale();

} // namespace jag::game::option
