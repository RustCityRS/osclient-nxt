// projects/osclient/ScriptRunnerImpl_2500To2599.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: osclient

#include "ScriptRunnerImpl.h"

namespace jag::oldscape {
    // 0x10015aa40, 256 bytes, placed by class name and debug map
    // ScriptRunnerImpl::ExecuteCommand2500To2599(ScriptOp, ClientScript const&, bool)
    undefined8 ScriptRunnerImpl::ExecuteCommand2500To2599(long param_1, undefined4 param_2) {
        int iVar1;
        int* piVar3;
        shared_ptr* this;
        long lVar4;
        uint* puVar5;
        uint uVar6;
        ulong uVar7;
        undefined8 uVar8;

        uVar7 = (long)*(int*)(param_1 + 104092) - 1;
        *(int*)(param_1 + 104092) = (int)uVar7;
        piVar3 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), uVar7);
        this = (shared_ptr*)rs2lib::IfType::Get(*piVar3);
        uVar8 = 0;
        if (operator==(this, (_func_decltype_nullptr*)0)) {
            ((param_1 + 141000))->Raise(1);
        } else {
            lVar4 = shared_ptr<rs2lib::IfType>::operator*((shared_ptr<rs2lib::IfType>*)this);
            switch (param_2) {
            case 2500:
                uVar6 = *(uint*)(lVar4 + 64);
                break;
            case 2501:
                uVar6 = *(uint*)(lVar4 + 68);
                break;
            case 2502:
                uVar6 = *(uint*)(lVar4 + 72);
                break;
            case 2503:
                uVar6 = *(uint*)(lVar4 + 76);
                break;
            case 2504:
                uVar6 = (uint) * (byte*)(lVar4 + 92);
                break;
            case 2505:
                uVar6 = *(uint*)(lVar4 + 88);
                break;
            default:
                return 2;
            }
            iVar1 = *(int*)(param_1 + 104092);
            *(int*)(param_1 + 104092) = iVar1 + 1;
            puVar5 = (uint*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), (long)iVar1);
            *puVar5 = uVar6;
            uVar8 = 1;
        }
        return uVar8;
    }

} // namespace jag::oldscape
