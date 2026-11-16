// libs/game/runetek5/clientoptions/options/ClientOptions_GroundBlending.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.runetek5

#include "ClientOptions_GroundBlending.h"

namespace jag::game::option {
    // 0x1005ffbc0
    GroundBlending::GroundBlending(graphics::RT7Core& rt7Core, Settings& settings, const char* str,
                                   Textures* textures) {
        Range<EnumOptionToggle>* in_RAX;

        Range<EnumOptionToggle>* local_38 = in_RAX;
        new (&local_38) oldscape::sidebars::SideBarData(0, 1);
        new (this) Option<EnumOptionToggle>(rt7Core, settings, str, local_38);
        new (&field_208) std::function<bool()>();
        field_256 = textures;
    }

    // 0x1005ffc50
    void GroundBlending::ApplySettingImpl(graphics::RT7Core& rt7Core, graphics::EffectManager& effectManager,
                                          EnumOptionToggle enumOptionToggle) {
        if (GetValue() == 0) {
            field_256->SetValue(0, rt7Core, effectManager, false);
        }
    }

} // namespace jag::game::option
