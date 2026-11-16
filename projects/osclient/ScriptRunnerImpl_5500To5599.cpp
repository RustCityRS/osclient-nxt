// projects/osclient/ScriptRunnerImpl_5500To5599.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: osclient

#include "ScriptRunnerImpl.h"

namespace jag::oldscape {
    // 0x100168480
    uint64_t ScriptRunnerImpl::ExecuteCommand5500To5599(ScriptOp scriptOp, const ClientScript& clientScript,
                                                        bool arg3) {
        int* piVar1;
        int* piVar2;
        int iVar4;
        unsigned int uVar5;
        unsigned long uVar6;

        uint64_t uVar7 = 2;
        auto this_00 = Client::Instance();
        switch (scriptOp) {
        case 5504:
            iVar4 = field_104092;
            uVar6 = (long)iVar4 - 2;
            field_104092 = (int)uVar6;
            if (this_00->field_52997 == '\0') {
                piVar2 = &field_100092[(long)iVar4 - 1];
                piVar1 = &field_100092[uVar6];
                this_00->ForcePlayerCameraPosition(*piVar1, *piVar2);
                return 1;
            }
            return 1;
        case 5505:
            uVar5 = this_00->field_53108;
            break;
        case 5506:
            uVar5 = this_00->field_53112;
            break;
        default:
            goto switchD_1001684be_caseD_1583;
        case 5530:
            uVar6 = (long)field_104092 - 1;
            field_104092 = (int)uVar6;
            piVar2 = &field_100092[uVar6];
            iVar4 = 0;
            if (-1 < *piVar2) {
                iVar4 = *piVar2;
            }
            this_00->field_52404 = iVar4;
            goto LAB_10016857d;
        case 5531:
            uVar5 = this_00->field_52404;
        }
        iVar4 = field_104092;
        field_104092 = iVar4 + 1;
        unsigned int* puVar3 = &field_100092[(long)iVar4];
        *puVar3 = uVar5;
    LAB_10016857d:
        uVar7 = 1;
    switchD_1001684be_caseD_1583:
        return uVar7;
    }

} // namespace jag::oldscape
