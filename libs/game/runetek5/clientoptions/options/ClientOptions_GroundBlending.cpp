// libs/game/runetek5/clientoptions/options/ClientOptions_GroundBlending.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.game.runetek5

#include "ClientOptions_GroundBlending.h"

namespace jag::game::option {
    // 0x1005ffbc0, 112 bytes, base-object constructor, placed by class name and debug map
    // GroundBlending::GroundBlending(graphics::RT7Core&, Settings&, char const*, Textures*)
    void GroundBlending::GroundBlending(RT7Core* param_1, Settings* param_2, char* param_3, Textures* param_4) {
        undefined8 in_RAX;
        undefined1 local_38[8];

        local_38 = (undefined1[8])in_RAX;
        new (local_38) oldscape::sidebars::SideBarData(0, 1);
        new (this) Option<EnumOptionToggle>(param_1, param_2, param_3, local_38);
        field_0 = &PTR__GroundBlending_100f0a0f8;
        std::function<bool()>::function((function<bool()>*)&field_208);
        field_256 = param_4;
    }

    // 0x1005ffc40, 16 bytes, complete-object constructor, placed by class name and debug map
    // GroundBlending::GroundBlending(graphics::RT7Core&, Settings&, char const*, Textures*): jumps straight to the base-object constructor

    // 0x1005ffc50, 64 bytes, placed by class name and debug map
    // GroundBlending::ApplySettingImpl(graphics::RT7Core&, graphics::EffectManager&, EnumOptionToggle)
    void GroundBlending::ApplySettingImpl(undefined8 param_1, undefined8 param_2) {
        int iVar1;

        iVar1 = GetValue();
        if (iVar1 == 0) {
            (field_256, 0, param_1, param_2, 0)->SetValue();
        }
    }

} // namespace jag::game::option
