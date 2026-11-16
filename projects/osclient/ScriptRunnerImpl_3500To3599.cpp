// projects/osclient/ScriptRunnerImpl_3500To3599.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: osclient

#include "ScriptRunnerImpl.h"

namespace jag::oldscape {
    // 0x10015f1f0
    uint64_t ScriptRunnerImpl::ExecuteCommand3500To3599(ScriptOp scriptOp, const ClientScript& clientScript,
                                                        bool arg3) {
        uint8_t bVar2;
        int* piVar4;
        unsigned long uVar6;

        auto pCVar3 = Client::Instance();
        uint8_t* this_00 = &pCVar3->field_8496;
        if (scriptOp == 3502) {
            uVar6 = (long)field_104092 - 1;
            field_104092 = (int)uVar6;
            piVar4 = &field_100092[uVar6];
            bVar2 = this_00->KeyUp(*piVar4);
        } else if (scriptOp == 3501) {
            uVar6 = (long)field_104092 - 1;
            field_104092 = (int)uVar6;
            piVar4 = &field_100092[uVar6];
            bVar2 = this_00->KeyDown(*piVar4);
        } else {
            if (scriptOp != 3500) {
                return 2;
            }
            uVar6 = (long)field_104092 - 1;
            field_104092 = (int)uVar6;
            piVar4 = &field_100092[uVar6];
            bVar2 = this_00->KeyHeld(*piVar4);
        }
        int iVar1 = field_104092;
        field_104092 = iVar1 + 1;
        unsigned int* puVar5 = &field_100092[(long)iVar1];
        *puVar5 = (unsigned int)bVar2;
        return 1;
    }

} // namespace jag::oldscape
