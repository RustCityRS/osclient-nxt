// libs/game/runetek5/clientoptions/options/ClientOptions_Diagnostics.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.runetek5

#include "ClientOptions_Diagnostics.h"

namespace jag::game::option {
    // 0x100269960: Diagnostics::GetDefault() has the same machine code as oldscape::rs2lib::social::ClanChannelDelta::AddUser::GetID() const

    // 0x100601c70
    void Diagnostics::UpdateDiagnosticsVisibility() {
        int iVar2;
        DebugOverlay* pDVar3;

        uint8_t* this_00 = field_200;
        if (this_00->operator_cast_to_bool() != '\0') {
            iVar2 = GetValue();
            pDVar3 = (DebugOverlay*)(*this_00).operator->();
            if (iVar2 == 1) {
                DebugOverlay::ShowGraphs();
                ((StaticPointLight*)(*this_00).operator->())->SetLightsLevelsAbove(false);
                pDVar3 = (DebugOverlay*)(*this_00).operator->();
                pDVar3->ShowSection(19);
                pDVar3 = (DebugOverlay*)(*this_00).operator->();
            }
            pDVar3->SetShow(iVar2 == 1);
        }
    }

} // namespace jag::game::option
