// projects/osclient/ScriptRunnerImpl_1000To1099.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: osclient

#include "ScriptRunnerImpl.h"

namespace jag::oldscape {
    // 0x1001922f0
    uint64_t ScriptRunnerImpl::ExecuteCommand1000To1099Or2000To2099(ScriptOp scriptOp, const ClientScript& clientScript,
                                                                    bool arg3, bool arg4) {
        int* piVar2;
        uint32_t* puVar4;
        Array<shared_ptr<rs2lib::IfType>>* ifTypes;
        unsigned long uVar5;
        uint32_t in_register_00000081;
        long lVar7;
        uint8_t* puVar8;

        int arg1 = -1;
        auto this_00 = Client::Instance();
        if ((((uint32_t)in_register_00000081 << 8) | (uint8_t)arg4) != 0) {
            uVar5 = (long)field_104092 - 1;
            field_104092 = (int)uVar5;
            piVar2 = &field_100092[uVar5];
            arg1 = *piVar2;
        }
        auto objType = SafeGetComponent(arg1, arg4, arg3);
        if (*objType == nullptr) {
            field_141000->Raise(1);
            return 0;
        }
        long lVar3 = **objType;
        uint64_t uVar6 = 2;
        switch (scriptOp) {
        case 1000:
            lVar7 = (long)field_104092;
            field_104092 = (int)(lVar7 - 4U);
            puVar8 = &field_100092;
            puVar4 = (uint32_t*)(*puVar8)[lVar7 - 4U];
            *(uint32_t*)(lVar3 + 48) = *puVar4;
            puVar4 = (uint32_t*)(*puVar8)[lVar7 - 3];
            *(uint32_t*)(lVar3 + 52) = *puVar4;
            puVar4 = (uint32_t*)(*puVar8)[lVar7 - 2];
            *(uint32_t*)(lVar3 + 32) = *puVar4;
            puVar4 = (uint32_t*)(*puVar8)[lVar7 - 1];
            *(uint32_t*)(lVar3 + 36) = *puVar4;
            break;
        case 1001:
            lVar7 = (long)field_104092;
            field_104092 = (int)(lVar7 - 4U);
            puVar8 = &field_100092;
            puVar4 = (uint32_t*)(*puVar8)[lVar7 - 4U];
            *(uint32_t*)(lVar3 + 56) = *puVar4;
            puVar4 = (uint32_t*)(*puVar8)[lVar7 - 3];
            *(uint32_t*)(lVar3 + 60) = *puVar4;
            puVar4 = (uint32_t*)(*puVar8)[lVar7 - 2];
            *(uint32_t*)(lVar3 + 40) = *puVar4;
            puVar4 = (uint32_t*)(*puVar8)[lVar7 - 1];
            *(uint32_t*)(lVar3 + 44) = *puVar4;
            break;
        default:
            goto switchD_1001923b1_caseD_3ea;
        case 1003:
            uVar5 = (long)field_104092 - 1;
            field_104092 = (int)uVar5;
            piVar2 = &field_100092[uVar5];
            if (*(char*)(lVar3 + 92) == (*piVar2 == 1)) {
                return 1;
            }
            *(bool*)(lVar3 + 92) = *piVar2 == 1;
            this_00->ComponentUpdated(*objType);
            return 1;
        case 1005:
            uVar5 = (long)field_104092 - 1;
            field_104092 = (int)uVar5;
            piVar2 = &field_100092[uVar5];
            *(bool*)(lVar3 + 2080) = *piVar2 == 1;
            goto LAB_100192588;
        case 1006:
            uVar5 = (long)field_104092 - 1;
            field_104092 = (int)uVar5;
            piVar2 = &field_100092[uVar5];
            *(bool*)(lVar3 + 2081) = *piVar2 == 1;
        LAB_100192588:
            uVar6 = 1;
            goto switchD_1001923b1_caseD_3ea;
        }
        this_00->ComponentUpdated(*objType);
        this_00->InterfaceCalculateSizeAndPosComponent(*objType);
        uVar6 = 1;
        if ((arg1 != -1) && (*(int*)(lVar3 + 12) == 0)) {
            ifTypes = (Array<shared_ptr<rs2lib::IfType>>*)(*(
                (Array<Array<shared_ptr<rs2lib::IfType>>>*)&rs2lib::IfType::m_list))[(long)(arg1 >> 16)];
            this_00->InterfaceCalculateSizeAndPosSubcomponents(*ifTypes, *objType, false);
        }
    switchD_1001923b1_caseD_3ea:
        return uVar6;
    }

} // namespace jag::oldscape
