// libs/game/runetek5/clientoptions/options/ClientOptions_InterfaceScale.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.runetek5

#include "ClientOptions_InterfaceScale.h"

namespace jag::game::option {
    // 0x1005ffd30
    InterfaceScale::InterfaceScale(graphics::RT7Core& rt7Core, Settings& settings, const char* str) {
        Range<unsigned int>* local_30;

        new (&local_30) oldscape::sidebars::SideBarData(10, 400);
        new (this) Option<unsigned int>(rt7Core, settings, str, local_30);
    }

    // 0x1005ffdb0
    uint64_t InterfaceScale::GetDefault() {
        return 100;
    }

    // 0x1005ffdc0
    void InterfaceScale::ApplySettingImpl(graphics::RT7Core& rt7Core, graphics::EffectManager& effectManager,
                                          unsigned int arg3) {
        rt7Core.GetScaleManager()->RequestInterfaceScaleOverride(GetValue());
    }

    // 0x100600200: InterfaceScale::~InterfaceScale() has the same machine code as GameRenderScale::~GameRenderScale()

} // namespace jag::game::option
