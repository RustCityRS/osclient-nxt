// projects/osclient/ScriptRunnerImpl_3500To3599.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: osclient

#include "ScriptRunnerImpl.h"

namespace jag::oldscape {
    // 0x10015f1f0, 288 bytes, placed by class name and debug map
    // ScriptRunnerImpl::ExecuteCommand3500To3599(ScriptOp, ClientScript const&, bool)
    undefined8 ScriptRunnerImpl::ExecuteCommand3500To3599(long param_1, int param_2) {
        int iVar1;
        byte bVar2;
        long lVar3;
        int* piVar4;
        uint* puVar5;
        ulong uVar6;
        ClientInputHandler* this;

        lVar3 = Client::Instance();
        this = (ClientInputHandler*)(lVar3 + 8496);
        if (param_2 == 3502) {
            uVar6 = (long)*(int*)(param_1 + 104092) - 1;
            *(int*)(param_1 + 104092) = (int)uVar6;
            piVar4 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), uVar6);
            bVar2 = KeyUp(*piVar4);
        } else if (param_2 == 3501) {
            uVar6 = (long)*(int*)(param_1 + 104092) - 1;
            *(int*)(param_1 + 104092) = (int)uVar6;
            piVar4 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), uVar6);
            bVar2 = KeyDown(*piVar4);
        } else {
            if (param_2 != 3500) {
                return 2;
            }
            uVar6 = (long)*(int*)(param_1 + 104092) - 1;
            *(int*)(param_1 + 104092) = (int)uVar6;
            piVar4 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), uVar6);
            bVar2 = KeyHeld(*piVar4);
        }
        iVar1 = *(int*)(param_1 + 104092);
        *(int*)(param_1 + 104092) = iVar1 + 1;
        puVar5 = (uint*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), (long)iVar1);
        *puVar5 = (uint)bVar2;
        return 1;
    }

} // namespace jag::oldscape
