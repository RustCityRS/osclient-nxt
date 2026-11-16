// projects/osclient/ScriptRunnerImpl_1500To1599.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: osclient

#include "ScriptRunnerImpl.h"

namespace jag::oldscape {
    // 0x100194d00
    uint64_t ScriptRunnerImpl::ExecuteCommand1500To1599(ScriptOp scriptOp, const ClientScript& clientScript,
                                                        bool arg3) {
        int iVar1;
        long lVar3;
        unsigned int* puVar4;
        uint64_t in_register_00000009;
        unsigned int uVar5;

        uint64_t uVar6 = 0;
        if ((*((shared_ptr<configdecoder::ObjType>*)(field_140856 +
                                                     ((((uint64_t)in_register_00000009 << 8) | (uint8_t)arg3) &
                                                      4294967295) *
                                                         16 -
                                                     352))) == nullptr) {
            field_141000->Raise(1);
        } else {
            lVar3 = *(
                *((shared_ptr<rs2lib::IfType>*)(field_140856 +
                                                ((((uint64_t)in_register_00000009 << 8) | (uint8_t)arg3) & 4294967295) *
                                                    16 -
                                                352)));
            switch (scriptOp) {
            case 1500:
                uVar5 = *(unsigned int*)(lVar3 + 64);
                break;
            case 1501:
                uVar5 = *(unsigned int*)(lVar3 + 68);
                break;
            case 1502:
                uVar5 = *(unsigned int*)(lVar3 + 72);
                break;
            case 1503:
                uVar5 = *(unsigned int*)(lVar3 + 76);
                break;
            case 1504:
                uVar5 = (unsigned int)*(uint8_t*)(lVar3 + 92);
                break;
            case 1505:
                uVar5 = *(unsigned int*)(lVar3 + 88);
                break;
            default:
                return 2;
            }
            iVar1 = field_104092;
            field_104092 = iVar1 + 1;
            puVar4 = &field_100092[(long)iVar1];
            *puVar4 = uVar5;
            uVar6 = 1;
        }
        return uVar6;
    }

} // namespace jag::oldscape
