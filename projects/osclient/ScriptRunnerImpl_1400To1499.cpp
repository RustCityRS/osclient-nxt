// projects/osclient/ScriptRunnerImpl_1400To1499.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: osclient

#include "ScriptRunnerImpl.h"

namespace jag::oldscape {
    // 0x1001944b0
    uint64_t ScriptRunnerImpl::ExecuteCommand1400To1499Or2400To2499(ScriptOp scriptOp, const ClientScript& clientScript,
                                                                    bool arg3, bool arg4) {
        uint32_t uVar1;
        int* piVar4;
        InputField* pIVar6;
        char* pcVar9;
        uint32_t* puVar10;
        unsigned long uVar11;
        HookArg* pHVar12;
        unsigned long uVar14;
        unsigned long uVar15;
        uint32_t in_register_00000081;
        vector<int>* this_01;
        HookArg local_d8;
        ScriptRunnerImpl* local_40;
        Array<HookArg>* local_38;

        int iVar13 = -1;
        if ((((uint32_t)in_register_00000081 << 8) | (uint8_t)arg4) != 0) {
            uVar14 = (long)field_104092 - 1;
            field_104092 = (int)uVar14;
            piVar4 = &field_100092[uVar14];
            iVar13 = *piVar4;
        }
        auto objType = SafeGetComponent(iVar13, arg4, arg3);
        if (*objType == nullptr) {
            field_141000->Raise(1);
            return 0;
        }
        IfType* pIVar5 = (IfType*)**objType;
        uint64_t uVar16 = 2;
        IfType* local_48 = pIVar5;
        switch (scriptOp) {
        case 1400:
            local_38 = (Array<HookArg>*)&pIVar5->field_856;
            break;
        case 1401:
            local_38 = (Array<HookArg>*)&pIVar5->field_928;
            break;
        case 1402:
            local_38 = (Array<HookArg>*)&pIVar5->field_904;
            break;
        case 1403:
            local_38 = (Array<HookArg>*)&pIVar5->field_952;
            break;
        case 1404:
            local_38 = (Array<HookArg>*)&pIVar5->field_1000;
            break;
        case 1405:
            local_38 = (Array<HookArg>*)&pIVar5->field_1024;
            break;
        case 1406:
            local_38 = (Array<HookArg>*)&pIVar5->field_1096;
            break;
        case 1407:
            local_38 = (Array<HookArg>*)&pIVar5->field_1120;
            this_01 = (vector<int>*)&pIVar5->field_1144;
            goto LAB_100194843;
        case 1408:
            local_38 = (Array<HookArg>*)&pIVar5->field_1288;
            break;
        case 1409:
            local_38 = (Array<HookArg>*)&pIVar5->field_1312;
            break;
        case 1410:
            local_38 = (Array<HookArg>*)&pIVar5->field_1048;
            break;
        case 1411:
            local_38 = (Array<HookArg>*)&pIVar5->field_880;
            break;
        case 1412:
            local_38 = (Array<HookArg>*)&pIVar5->field_976;
            break;
        default:
            goto switchD_10019456a_caseD_585;
        case 1414:
            local_38 = (Array<HookArg>*)&pIVar5->field_1176;
            this_01 = (vector<int>*)&pIVar5->field_1200;
            goto LAB_100194843;
        case 1415:
            local_38 = (Array<HookArg>*)&pIVar5->field_1232;
            this_01 = (vector<int>*)&pIVar5->field_1256;
            goto LAB_100194843;
        case 1416:
            local_38 = (Array<HookArg>*)&pIVar5->field_1072;
            break;
        case 1417:
            local_38 = (Array<HookArg>*)&pIVar5->field_1360;
            break;
        case 1418:
            local_38 = (Array<HookArg>*)&pIVar5->field_1384;
            break;
        case 1419:
            local_38 = (Array<HookArg>*)&pIVar5->field_1408;
            break;
        case 1420:
            local_38 = (Array<HookArg>*)&pIVar5->field_1480;
            break;
        case 1421:
            local_38 = (Array<HookArg>*)&pIVar5->field_1504;
            break;
        case 1422:
            local_38 = (Array<HookArg>*)&pIVar5->field_1576;
            break;
        case 1423:
            local_38 = (Array<HookArg>*)&pIVar5->field_1600;
            break;
        case 1424:
            local_38 = (Array<HookArg>*)&pIVar5->field_1624;
            break;
        case 1425:
            local_38 = (Array<HookArg>*)&pIVar5->field_1744;
            break;
        case 1426:
            local_38 = (Array<HookArg>*)&pIVar5->field_1768;
            break;
        case 1427:
            local_38 = (Array<HookArg>*)&pIVar5->field_1648;
            break;
        case 1428:
            local_38 = (Array<HookArg>*)&pIVar5->field_1528;
            break;
        case 1429:
            local_38 = (Array<HookArg>*)&pIVar5->field_1552;
            break;
        case 1430:
            local_38 = (Array<HookArg>*)&pIVar5->field_1432;
            break;
        case 1431:
            local_38 = (Array<HookArg>*)&pIVar5->field_1456;
            break;
        case 1432:
            local_38 = (Array<HookArg>*)&pIVar5->field_1672;
            break;
        case 1433:
            local_38 = (Array<HookArg>*)&pIVar5->field_1696;
            break;
        case 1434:
            local_38 = (Array<HookArg>*)&pIVar5->field_1720;
            break;
        case 1435:
            local_38 = (Array<HookArg>*)&pIVar5->field_1336;
            break;
        case 1436:
            pIVar6 = pIVar5->GetInputFieldWrapper();
            if (pIVar6 == nullptr) {
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                                "ScriptRunnerImpl_1400To1499.cpp",
                                141, "Tried to set InputField-only hook on a component without an InputFieldWrapper");
            }
            pIVar6 = pIVar5->GetInputFieldWrapper();
            local_38 = (Array<HookArg>*)&pIVar6[5].field_32;
            goto LAB_10019483c;
        case 1437:
            pIVar6 = pIVar5->GetInputFieldWrapper();
            if (pIVar6 == nullptr) {
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                                "ScriptRunnerImpl_1400To1499.cpp",
                                149, "Tried to set InputField-only hook on a component without an InputFieldWrapper");
            }
            pIVar6 = pIVar5->GetInputFieldWrapper();
            local_38 = (Array<HookArg>*)&pIVar6[5].field_56;
            goto LAB_10019483c;
        case 1438:
            pIVar6 = pIVar5->GetInputFieldWrapper();
            if (pIVar6 == nullptr) {
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                                "ScriptRunnerImpl_1400To1499.cpp",
                                157, "Tried to set InputField-only hook on a component without an InputFieldWrapper");
            }
            pIVar6 = pIVar5->GetInputFieldWrapper();
            local_38 = (Array<HookArg>*)pIVar6[5].m_placeholderContents;
            goto LAB_10019483c;
        case 1439:
            pIVar6 = pIVar5->GetInputFieldWrapper();
            if (pIVar6 == nullptr) {
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                                "ScriptRunnerImpl_1400To1499.cpp",
                                165, "Tried to set InputField-only hook on a component without an InputFieldWrapper");
            }
            pIVar6 = pIVar5->GetInputFieldWrapper();
            local_38 = (Array<HookArg>*)&pIVar6[5].field_8;
        LAB_10019483c:
        }
        this_01 = nullptr;
    LAB_100194843:
        array<eastl::string, 1000ul>* local_70 = (array<eastl::string, 1000ul>*)&field_104096;
        uVar14 = (long)field_136096 - 1;
        field_136096 = (int)uVar14;
        eastl::string* pbVar7 = (eastl::string*)(*local_70)[uVar14];
        eastl::string local_90(*pbVar7);
        long lVar8 = local_90.size();
        if (lVar8 == 0) {
        LAB_10019495e:
            if (this_01 != nullptr) {
                this_01->clear();
            }
        } else {
            lVar8 = local_90.size();
            pcVar9 = &local_90[lVar8 - 1];
            if (*pcVar9 != 'Y')
                goto LAB_10019495e;
            local_40 = (ScriptRunnerImpl*)&field_100092;
            uVar14 = (long)field_104092 - 1;
            field_104092 = (int)uVar14;
            piVar4 = (int*)(*local_40)[uVar14];
            iVar13 = *piVar4;
            if (this_01 == nullptr) {
                LogAssert("pTransmit != nullptr",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                          "ScriptRunnerImpl_1400To1499.cpp",
                          184, nullptr);
            }
            if ((0 < iVar13) && (this_01 != nullptr)) {
                this_01->resize((long)iVar13);
                lVar8 = (long)iVar13 + 1;
                do {
                    uVar14 = (long)field_104092 - 1;
                    field_104092 = (int)uVar14;
                    puVar10 = (uint32_t*)(*local_40)[uVar14];
                    uVar1 = *puVar10;
                    puVar10 = (uint32_t*)(*this_01)[lVar8 - 2];
                    *puVar10 = uVar1;
                    lVar8 = lVar8 - 1;
                } while (1 < lVar8);
            }
            local_90.pop_back();
        }
        local_40 = this;
        vector<int, BucketAllocatorEASTL> local_68;
        lVar8 = local_90.size();
        if (lVar8 != 0) {
            do {
                pcVar9 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                local_d8.m_argType = stringtools::GetUTF8NextChar(pcVar9, 0);
                local_68.push_back(local_d8);
                uVar14 = 0;
                uVar11 = local_90.size();
            } while (uVar14 < uVar11);
        }
        lVar8 = local_68.size();
        local_38->set_max_size(lVar8 + 1, 3);
        uVar14 = local_68.size();
        ScriptRunnerImpl* pSVar2 = local_40;
        uint8_t* this_00 = &local_40->field_100092;
        if (uVar14 != 0) {
            do {
                uVar11 = uVar14 - 1;
                piVar4 = &local_68[uVar11];
                if (*piVar4 == 115) {
                    uVar15 = (long)pSVar2->field_136096 - 1;
                    pSVar2->field_136096 = (int)uVar15;
                    pbVar7 = (eastl::string*)(*local_70)[uVar15];
                    local_d8 = HookArg(pbVar7);
                    pHVar12 = (HookArg*)(*local_38)[uVar14];
                    *pHVar12 = local_d8;
                } else {
                    uVar15 = (long)pSVar2->field_104092 - 1;
                    pSVar2->field_104092 = (int)uVar15;
                    piVar4 = (int*)(*this_00)[uVar15];
                    local_d8 = HookArg(*piVar4);
                    pHVar12 = (HookArg*)(*local_38)[uVar14];
                    *pHVar12 = local_d8;
                }
                uVar14 = uVar11;
            } while (uVar11 != 0);
        }
        uVar14 = (long)pSVar2->field_104092 - 1;
        pSVar2->field_104092 = (int)uVar14;
        piVar4 = (int*)(*this_00)[uVar14];
        if (*piVar4 == -1) {
            local_38->clear();
            pIVar5 = local_48;
        } else {
            local_d8 = HookArg(*piVar4);
            pIVar5 = local_48;
            pHVar12 = (HookArg*)(*local_38)[0];
            *pHVar12 = local_d8;
        }
        pIVar5->field_824 = 1;
        uVar16 = 1;
    switchD_10019456a_caseD_585:
        return uVar16;
    }

} // namespace jag::oldscape
