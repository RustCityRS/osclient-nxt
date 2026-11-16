// projects/osclient/ScriptRunnerImpl_2700To2799.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: osclient

#include "ScriptRunnerImpl.h"

namespace jag::oldscape {
    // 0x10015b2b0
    uint64_t ScriptRunnerImpl::ExecuteCommand2700To2799(ScriptOp scriptOp, const ClientScript& clientScript,
                                                        bool arg3) {
        int iVar1;
        uint8_t bVar3;
        unsigned int uVar4;
        int* piVar5;
        Client* pCVar6;
        unsigned int* puVar7;
        CRMViewHandler* this_00;
        long lVar8;
        uint32_t* puVar9;
        unsigned long uVar10;
        ReturnValue local_58;
        ReturnValue local_48;
        int local_34;

        if (scriptOp == 2706) {
            pCVar6 = Client::Instance();
            uVar4 = pCVar6->field_53216;
            iVar1 = field_104092;
            field_104092 = iVar1 + 1;
            goto LAB_10015b388;
        }
        if (scriptOp == 2702) {
            uVar10 = (long)field_104092 - 1;
            field_104092 = (int)uVar10;
            piVar5 = &field_100092[uVar10];
            local_34 = *piVar5;
            pCVar6 = Client::Instance();
            local_58 = pCVar6->field_53160->find(local_34);
            pCVar6 = Client::Instance();
            local_48 = pCVar6->field_53160->end();
            uVar4 = local_58 != local_48;
            iVar1 = field_104092;
            field_104092 = iVar1 + 1;
            puVar7 = &field_100092[(long)iVar1];
            *puVar7 = uVar4 & 255;
            goto LAB_10015b38f;
        }
        uVar10 = (long)field_104092 - 1;
        field_104092 = (int)uVar10;
        piVar5 = &field_100092[uVar10];
        auto objType = rs2lib::IfType::Get(*piVar5);
        if (*objType == nullptr) {
            field_141000->Raise(1);
            return 0;
        }
        IfType* ifType = (IfType*)**objType;
        uint64_t uVar11 = 2;
        switch (scriptOp) {
        case 2700:
            uVar4 = *(unsigned int*)&ifType->field_1984;
            goto LAB_10015b48b;
        case 2701:
            if (*(int*)&ifType->field_1984 != -1) {
                uVar4 = *(unsigned int*)((long)&ifType->field_1984 + 4);
                goto LAB_10015b48b;
            }
            iVar1 = field_104092;
            field_104092 = iVar1 + 1;
            puVar9 = &field_100092[(long)iVar1];
            *puVar9 = 0;
            break;
        default:
            goto switchD_10015b420_caseD_a8e;
        case 2707:
            this_00 = ifType->GetCRMViewHandler();
            if ((this_00 == nullptr) || (lVar8 = (*objType).operator->(), *(int*)(lVar8 + 12) != 11)) {
                LogAssert("crmView && ccr->m_type == IfType::CRMVIEW",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                          "ScriptRunnerImpl_2700To2799.cpp",
                          69,
                          "Calling if_getcrm_hasresponse on a component not of type CRMVIEW, or one that failed to "
                          "initialise.");
            }
            bVar3 = this_00->HasSuccessfulResponse();
            uVar4 = (unsigned int)bVar3;
        LAB_10015b48b:
            iVar1 = field_104092;
            field_104092 = iVar1 + 1;
        LAB_10015b388:
            puVar7 = &field_100092[(long)iVar1];
            *puVar7 = uVar4;
            break;
        case 2708:
            DoGetCrmInt(*ifType);
            break;
        case 2709:
            DoGetCrmString(*ifType);
        }
    LAB_10015b38f:
        uVar11 = 1;
    switchD_10015b420_caseD_a8e:
        return uVar11;
    }

} // namespace jag::oldscape
