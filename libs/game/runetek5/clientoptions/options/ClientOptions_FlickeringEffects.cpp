// libs/game/runetek5/clientoptions/options/ClientOptions_FlickeringEffects.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.game.runetek5

#include "ClientOptions_FlickeringEffects.h"

namespace jag::game::option {
    // 0x100269960: the linker folded this into oldscape::rs2lib::social::ClanChannelDelta::AddUser::GetID() const, which has identical code
    FlickeringEffects::GetDefault();

    // 0x1005fe390: the linker folded this into Shadows::~Shadows(), which has identical code
    FlickeringEffects::~FlickeringEffects();

    // 0x100601f80, 48 bytes, placed by class name and debug map
    // FlickeringEffects::ApplySettingImpl(graphics::RT7Core&, graphics::EffectManager&, EnumOptionToggle)
    void FlickeringEffects::ApplySettingImpl(undefined8 param_2_00, EffectManager* param_2) {
        int iVar1;

        iVar1 = GetValue();
        param_2->EnableEffect(41, iVar1 == 0);
    }

    // 0x100609140: the linker folded this into CutsceneSubtitles::~CutsceneSubtitles(), which has identical code
    FlickeringEffects::~FlickeringEffects();

    // 0x10060f700: the linker folded this into Option<EnumOptionToggle>::~Option(), which has identical code
    FlickeringEffects::~FlickeringEffects();

} // namespace jag::game::option
