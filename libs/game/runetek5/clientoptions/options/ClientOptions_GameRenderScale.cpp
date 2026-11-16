// libs/game/runetek5/clientoptions/options/ClientOptions_GameRenderScale.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.runetek5

#include "ClientOptions_GameRenderScale.h"

namespace jag::game::option {
    // 0x100306e40: GameRenderScale::GetDefault() has the same machine code as eastl::fixed_vector<shared_ptr<oldscape::dash3d::Sprite>, 100ul>::max_size() const

    // 0x1005ffa80
    GameRenderScale::GameRenderScale(graphics::RT7Core& rt7Core, Settings& settings, const char* str) {
        Range<unsigned int>* local_30;

        new (&local_30) oldscape::sidebars::SideBarData(30, 200);
        new (this) Option<unsigned int>(rt7Core, settings, str, local_30);
    }

    // 0x1005ffb80
    void GameRenderScale::ApplySettingImpl(graphics::RT7Core& rt7Core, graphics::EffectManager& effectManager,
                                           unsigned int arg3) {
        auto this_00 = rt7Core.GetScaleManager();
        unsigned int uVar1 = GetValue();
        this_00->SetGameScale((float)uVar1 * 0.01);
    }

    // 0x100611170: GameRenderScale::~GameRenderScale() has the same machine code as InterfaceScale::~InterfaceScale()

} // namespace jag::game::option
