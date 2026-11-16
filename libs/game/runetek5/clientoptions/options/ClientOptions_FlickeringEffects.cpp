// libs/game/runetek5/clientoptions/options/ClientOptions_FlickeringEffects.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.runetek5

#include "ClientOptions_FlickeringEffects.h"

namespace jag::game::option {
    // 0x100269960: FlickeringEffects::GetDefault() has the same machine code as oldscape::rs2lib::social::ClanChannelDelta::AddUser::GetID() const

    // 0x100601f80
    void FlickeringEffects::ApplySettingImpl(graphics::RT7Core& rt7Core, graphics::EffectManager& effectManager,
                                             EnumOptionToggle enumOptionToggle) {
        int iVar1 = GetValue();
        effectManager.EnableEffect(41, iVar1 == 0);
    }

    // 0x10060f700: FlickeringEffects::~FlickeringEffects() has the same machine code as Option<EnumOptionToggle>::~Option()

} // namespace jag::game::option
