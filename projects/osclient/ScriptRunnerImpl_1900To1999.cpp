// projects/osclient/ScriptRunnerImpl_1900To1999.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: osclient

#include "ScriptRunnerImpl.h"

namespace jag::oldscape {
    // 0x10015a700
    uint64_t ScriptRunnerImpl::ExecuteCommand1900To1999Or2900To2999(ScriptOp scriptOp, const ClientScript& clientScript,
                                                                    bool arg3, bool arg4) {
        int iVar1;
        int arg1;
        int* piVar4;
        shared_ptr<configdecoder::ObjType>* objType;
        shared_ptr<rs2lib::IfType>* ifType;
        long lVar5;
        char* str;
        int iVar6;
        unsigned long uVar7;
        uint8_t local_c0[120];
        int local_48;
        int local_40;
        uint32_t local_3c;
        uint32_t local_38;
        uint32_t local_34;

        if ((int)scriptOp < 2927) {
            if (scriptOp == 1927) {
            LAB_10015a753:
                if (field_140996 < 10) {
                    iVar6 = -1;
                    if (arg4) {
                        uVar7 = (long)field_104092 - 1;
                        field_104092 = (int)uVar7;
                        piVar4 = &field_100092[uVar7];
                        iVar6 = *piVar4;
                    }
                    objType = (shared_ptr<configdecoder::ObjType>*)SafeGetComponent(iVar6, arg4, arg3);
                    if (*objType == nullptr) {
                        field_141000->Raise(1);
                        return 0;
                    }
                    lVar5 = **objType;
                    if (!(((lVar5 + 1648))->empty())) {
                        new (local_c0) HookReq();
                        (*((local_c0 + 32))) = *objType;
                        *local_c0 = (*((lVar5 + 1648)));
                        local_48 = field_140996 + 1;
                        Client::Instance()->GetHookQueue()->push_back(*local_c0);
                        return 1;
                    }
                    return 0;
                }
                str = "Too many nested clientscript calls via if/cc_callonresize";
                goto LAB_10015a7ac;
            }
            if (scriptOp != 1928) {
                return 2;
            }
        } else if (scriptOp != 2928) {
            if (scriptOp != 2927) {
                return 2;
            }
            goto LAB_10015a753;
        }
        uint8_t* this_00 = &field_100092;
        uVar7 = (long)field_104092 - 1;
        field_104092 = (int)uVar7;
        piVar4 = (int*)(*this_00)[uVar7];
        iVar6 = *piVar4;
        if (iVar6 - 1U < 10) {
            new (local_c0) shared_ptr();
            if (arg4) {
                iVar1 = field_104092;
                uVar7 = (long)iVar1 - 2;
                field_104092 = (int)uVar7;
                piVar4 = (int*)(*this_00)[uVar7];
                arg1 = *piVar4;
                piVar4 = (int*)(*this_00)[(long)iVar1 - 1];
                ifType = (shared_ptr<rs2lib::IfType>*)rs2lib::IfType::Get(arg1, *piVar4);
                *local_c0 = *ifType;
            } else {
                *local_c0 = (*((shared_ptr<rs2lib::IfType>*)(field_140856 + (unsigned long)arg3 * 16 - 352)));
            }
            if (!(local_c0->operator_cast_to_bool())) {
                LogAssert("cc",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                          "ScriptRunnerImpl_1900To1999.cpp",
                          71, "if/cc_triggerop: Component not valid");
            }
            local_40 = iVar6;
            lVar5 = (*local_c0).operator->();
            local_3c = *(uint32_t*)(lVar5 + 4);
            lVar5 = (*local_c0).operator->();
            local_38 = *(uint32_t*)(lVar5 + 8);
            lVar5 = (*local_c0).operator->();
            local_34 = *(uint32_t*)(lVar5 + 1984);
            field_140584.push(local_40);
            return 1;
        }
        str = "cc_triggerop opID must be between 1 and 10";
    LAB_10015a7ac:
        field_141000->Raise(1, str);
        return 0;
    }

} // namespace jag::oldscape
