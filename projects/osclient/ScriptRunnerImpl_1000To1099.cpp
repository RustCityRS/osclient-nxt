// projects/osclient/ScriptRunnerImpl_1000To1099.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: osclient

#include "ScriptRunnerImpl.h"

namespace jag::oldscape {
    // 0x1001922f0, 720 bytes, placed by class name and debug map
    // ScriptRunnerImpl::ExecuteCommand1000To1099Or2000To2099(ScriptOp, ClientScript const&, bool, bool)
    undefined8 ScriptRunnerImpl::ExecuteCommand1000To1099Or2000To2099(undefined4 param_2, undefined8 param_3,
                                                                      bool param_4, int param_5) {
        Client* this_00;
        int* piVar2;
        shared_ptr* this_01;
        long lVar3;
        undefined4* puVar4;
        Array* pAVar5;
        ulong uVar6;
        int iVar7;
        undefined8 uVar8;
        long lVar9;
        undefined1* puVar10;

        iVar7 = -1;
        this_00 = (Client*)Client::Instance();
        if (param_5 != 0) {
            uVar6 = (long)field_104092 - 1;
            field_104092 = (int)uVar6;
            piVar2 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&field_100092, uVar6);
            iVar7 = *piVar2;
        }
        this_01 = (shared_ptr*)SafeGetComponent(this, iVar7, SUB41(param_5, 0), param_4);
        if (operator==(this_01, (_func_decltype_nullptr*)0)) {
            (&field_141000, 1)->Raise();
            return 0;
        }
        lVar3 = shared_ptr<rs2lib::IfType>::operator*((shared_ptr<rs2lib::IfType>*)this_01);
        uVar8 = 2;
        switch (param_2) {
        case 1000:
            lVar9 = (long)field_104092;
            field_104092 = (int)(lVar9 - 4U);
            puVar10 = &field_100092;
            puVar4 = (undefined4*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)puVar10, lVar9 - 4U);
            *(undefined4*)(lVar3 + 48) = *puVar4;
            puVar4 = (undefined4*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)puVar10, lVar9 - 3);
            *(undefined4*)(lVar3 + 52) = *puVar4;
            puVar4 = (undefined4*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)puVar10, lVar9 - 2);
            *(undefined4*)(lVar3 + 32) = *puVar4;
            puVar4 = (undefined4*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)puVar10, lVar9 - 1);
            *(undefined4*)(lVar3 + 36) = *puVar4;
            break;
        case 1001:
            lVar9 = (long)field_104092;
            field_104092 = (int)(lVar9 - 4U);
            puVar10 = &field_100092;
            puVar4 = (undefined4*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)puVar10, lVar9 - 4U);
            *(undefined4*)(lVar3 + 56) = *puVar4;
            puVar4 = (undefined4*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)puVar10, lVar9 - 3);
            *(undefined4*)(lVar3 + 60) = *puVar4;
            puVar4 = (undefined4*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)puVar10, lVar9 - 2);
            *(undefined4*)(lVar3 + 40) = *puVar4;
            puVar4 = (undefined4*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)puVar10, lVar9 - 1);
            *(undefined4*)(lVar3 + 44) = *puVar4;
            break;
        default:
            goto switchD_1001923b1_caseD_3ea;
        case 1003:
            uVar6 = (long)field_104092 - 1;
            field_104092 = (int)uVar6;
            piVar2 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&field_100092, uVar6);
            if ((bool)*(char*)(lVar3 + 92) == (*piVar2 == 1)) {
                return 1;
            }
            *(bool*)(lVar3 + 92) = *piVar2 == 1;
            this_00->ComponentUpdated(this_01);
            return 1;
        case 1005:
            uVar6 = (long)field_104092 - 1;
            field_104092 = (int)uVar6;
            piVar2 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&field_100092, uVar6);
            *(bool*)(lVar3 + 2080) = *piVar2 == 1;
            goto LAB_100192588;
        case 1006:
            uVar6 = (long)field_104092 - 1;
            field_104092 = (int)uVar6;
            piVar2 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&field_100092, uVar6);
            *(bool*)(lVar3 + 2081) = *piVar2 == 1;
        LAB_100192588:
            uVar8 = 1;
            goto switchD_1001923b1_caseD_3ea;
        }
        this_00->ComponentUpdated(this_01);
        this_00->InterfaceCalculateSizeAndPosComponent(this_01);
        uVar8 = 1;
        if ((iVar7 != -1) && (*(int*)(lVar3 + 12) == 0)) {
            pAVar5 = (Array*)Array<Array<shared_ptr<rs2lib::IfType>, eastl::allocator>, eastl::allocator>::operator[](
                (Array<Array<shared_ptr<rs2lib::IfType>, eastl::allocator>, eastl::allocator>*)&rs2lib::IfType::m_list,
                (long)(iVar7 >> 16));
            this_00->InterfaceCalculateSizeAndPosSubcomponents(pAVar5, this_01, false);
        }
    switchD_1001923b1_caseD_3ea:
        return uVar8;
    }

} // namespace jag::oldscape
