// libs/game/runetek5/clientoptions/options/ClientOptions_Diagnostics.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.game.runetek5

#include "ClientOptions_Diagnostics.h"

namespace jag::game::option {
    // 0x100269960: the linker folded this into oldscape::rs2lib::social::ClanChannelDelta::AddUser::GetID() const, which has identical code
    Diagnostics::GetDefault();

    // 0x100601c70, 144 bytes, placed by class name and debug map
    // Diagnostics::UpdateDiagnosticsVisibility()
    void Diagnostics::UpdateDiagnosticsVisibility() {
        undefined1* this_00;
        StaticPointLight* this_01;
        int iVar2;
        DebugOverlay* pDVar3;

        this_00 = field_200;
        if (this_00->operator_cast_to_bool()) {
            iVar2 = GetValue();
            pDVar3 = (DebugOverlay*)shared_ptr<DebugOverlay>::operator->((shared_ptr<DebugOverlay>*)this_00);
            if (iVar2 == 1) {
                pDVar3->ShowGraphs();
                this_01 = (StaticPointLight*)shared_ptr<DebugOverlay>::operator->((shared_ptr<DebugOverlay>*)this_00);
                this_01->SetLightsLevelsAbove(false);
                pDVar3 = (DebugOverlay*)shared_ptr<DebugOverlay>::operator->((shared_ptr<DebugOverlay>*)this_00);
                pDVar3->ShowSection(19);
                pDVar3 = (DebugOverlay*)shared_ptr<DebugOverlay>::operator->((shared_ptr<DebugOverlay>*)this_00);
            }
            pDVar3->SetShow(iVar2 == 1);
        }
    }

} // namespace jag::game::option
