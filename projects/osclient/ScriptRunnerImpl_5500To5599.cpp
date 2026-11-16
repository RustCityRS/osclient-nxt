// projects/osclient/ScriptRunnerImpl_5500To5599.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: osclient

#include "ScriptRunnerImpl.h"

namespace jag::oldscape {
    // 0x100168480, 400 bytes, placed by class name and debug map
    // ScriptRunnerImpl::ExecuteCommand5500To5599(ScriptOp, ClientScript const&, bool)
    undefined8 ScriptRunnerImpl::ExecuteCommand5500To5599(long param_1, undefined4 param_2) {
        Client* this;
        int* piVar1;
        int* piVar2;
        uint* puVar3;
        int iVar4;
        uint uVar5;
        ulong uVar6;
        undefined8 uVar7;

        uVar7 = 2;
        this = (Client*)Client::Instance();
        switch (param_2) {
        case 5504:
            iVar4 = *(int*)(param_1 + 104092);
            uVar6 = (long)iVar4 - 2;
            *(int*)(param_1 + 104092) = (int)uVar6;
            if (field_52997 == '\0') {
                piVar2 =
                    (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), (long)iVar4 - 1);
                piVar1 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), uVar6);
                ForcePlayerCameraPosition(*piVar1, *piVar2);
                return 1;
            }
            return 1;
        case 5505:
            uVar5 = field_53108;
            break;
        case 5506:
            uVar5 = field_53112;
            break;
        default:
            goto switchD_1001684be_caseD_1583;
        case 5530:
            uVar6 = (long)*(int*)(param_1 + 104092) - 1;
            *(int*)(param_1 + 104092) = (int)uVar6;
            piVar2 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), uVar6);
            iVar4 = 0;
            if (-1 < *piVar2) {
                iVar4 = *piVar2;
            }
            field_52404 = iVar4;
            goto LAB_10016857d;
        case 5531:
            uVar5 = field_52404;
        }
        iVar4 = *(int*)(param_1 + 104092);
        *(int*)(param_1 + 104092) = iVar4 + 1;
        puVar3 = (uint*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), (long)iVar4);
        *puVar3 = uVar5;
    LAB_10016857d:
        uVar7 = 1;
    switchD_1001684be_caseD_1583:
        return uVar7;
    }

} // namespace jag::oldscape
