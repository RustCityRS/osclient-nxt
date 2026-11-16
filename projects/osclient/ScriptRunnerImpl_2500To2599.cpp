// projects/osclient/ScriptRunnerImpl_2500To2599.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: osclient

#include "ScriptRunnerImpl.h"

namespace jag::oldscape {
    // 0x10015aa40
    uint64_t ScriptRunnerImpl::ExecuteCommand2500To2599(ScriptOp scriptOp, const ClientScript& clientScript,
                                                        bool arg3) {
        int iVar1;
        long lVar4;
        unsigned int* puVar5;
        unsigned int uVar6;

        unsigned long arg1 = (long)field_104092 - 1;
        field_104092 = (int)arg1;
        int* piVar3 = (int*)field_100092[arg1];
        auto objType = rs2lib::IfType::Get(*piVar3);
        uint64_t uVar7 = 0;
        if (*objType == nullptr) {
            field_141000->Raise(1);
        } else {
            lVar4 = **objType;
            switch (scriptOp) {
            case 2500:
                uVar6 = *(unsigned int*)(lVar4 + 64);
                break;
            case 2501:
                uVar6 = *(unsigned int*)(lVar4 + 68);
                break;
            case 2502:
                uVar6 = *(unsigned int*)(lVar4 + 72);
                break;
            case 2503:
                uVar6 = *(unsigned int*)(lVar4 + 76);
                break;
            case 2504:
                uVar6 = (unsigned int)*(uint8_t*)(lVar4 + 92);
                break;
            case 2505:
                uVar6 = *(unsigned int*)(lVar4 + 88);
                break;
            default:
                return 2;
            }
            iVar1 = field_104092;
            field_104092 = iVar1 + 1;
            puVar5 = &field_100092[(long)iVar1];
            *puVar5 = uVar6;
            uVar7 = 1;
        }
        return uVar7;
    }

} // namespace jag::oldscape
