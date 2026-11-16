// projects/osclient/ScriptRunnerImpl_1500To1599.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: osclient

#include "ScriptRunnerImpl.h"

namespace jag::oldscape {
    // 0x100194d00, 224 bytes, placed by class name and debug map
    // ScriptRunnerImpl::ExecuteCommand1500To1599(ScriptOp, ClientScript const&, bool)
    undefined8 ScriptRunnerImpl::ExecuteCommand1500To1599(undefined4 param_2, undefined8 param_3, ulong param_4) {
        int iVar1;
        bool bVar2;
        long lVar3;
        uint* puVar4;
        uint uVar5;
        undefined8 uVar6;

        uVar6 = 0;
        bVar2 = operator==((shared_ptr*)(field_140504 + (param_4 & 4294967295) * 16), (_func_decltype_nullptr*)0);
        if (bVar2) {
            (&field_141000, 1)->Raise();
        } else {
            lVar3 = shared_ptr<rs2lib::IfType>::operator*(
                (shared_ptr<rs2lib::IfType>*)(field_140504 + (param_4 & 4294967295) * 16));
            switch (param_2) {
            case 1500:
                uVar5 = *(uint*)(lVar3 + 64);
                break;
            case 1501:
                uVar5 = *(uint*)(lVar3 + 68);
                break;
            case 1502:
                uVar5 = *(uint*)(lVar3 + 72);
                break;
            case 1503:
                uVar5 = *(uint*)(lVar3 + 76);
                break;
            case 1504:
                uVar5 = (uint) * (byte*)(lVar3 + 92);
                break;
            case 1505:
                uVar5 = *(uint*)(lVar3 + 88);
                break;
            default:
                return 2;
            }
            iVar1 = field_104092;
            field_104092 = iVar1 + 1;
            puVar4 = (uint*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&field_100092, (long)iVar1);
            *puVar4 = uVar5;
            uVar6 = 1;
        }
        return uVar6;
    }

} // namespace jag::oldscape
