// projects/osclient/ScriptRunnerImpl_1400To1499.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: osclient

#include "ScriptRunnerImpl.h"

namespace jag::oldscape {
    // 0x1001944b0, 2128 bytes, placed by class name and debug map
    // ScriptRunnerImpl::ExecuteCommand1400To1499Or2400To2499(ScriptOp, ClientScript const&, bool, bool)
    undefined8 ScriptRunnerImpl::ExecuteCommand1400To1499Or2400To2499(undefined4 param_2, undefined8 param_3,
                                                                      bool param_4, int param_5) {
        undefined1* this_00;
        undefined4 uVar1;
        ScriptRunnerImpl* pSVar2;
        int* piVar4;
        shared_ptr* this_01;
        IfType* pIVar5;
        long lVar6;
        basic_string* pbVar7;
        char* pcVar8;
        undefined4* puVar9;
        ulong uVar10;
        HookArg* pHVar11;
        int iVar12;
        ulong uVar13;
        ulong uVar14;
        vector<int, eastl::allocator>* this_02;
        undefined8 uVar15;
        HookArg local_d8;
        eastl::string local_90[32];
        array<eastl::string, 1000ul>* local_70;
        vector<int, BucketAllocatorEASTL> local_68[24];
        ulong local_50;
        IfType* local_48;
        ScriptRunnerImpl* local_40;
        Array<HookArg, eastl::allocator>* local_38;

        iVar12 = -1;
        if (param_5 != 0) {
            uVar13 = (long)field_104092 - 1;
            field_104092 = (int)uVar13;
            piVar4 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&field_100092, uVar13);
            iVar12 = *piVar4;
        }
        this_01 = (shared_ptr*)SafeGetComponent(this, iVar12, SUB41(param_5, 0), param_4);
        if (operator==(this_01, (_func_decltype_nullptr*)0)) {
            (&field_141000, 1)->Raise();
            return 0;
        }
        pIVar5 = (IfType*)shared_ptr<rs2lib::IfType>::operator*((shared_ptr<rs2lib::IfType>*)this_01);
        uVar15 = 2;
        local_48 = pIVar5;
        switch (param_2) {
        case 1400:
            local_38 = (Array<HookArg, eastl::allocator>*)&pIVar5->field_856;
            break;
        case 1401:
            local_38 = (Array<HookArg, eastl::allocator>*)&pIVar5->field_928;
            break;
        case 1402:
            local_38 = (Array<HookArg, eastl::allocator>*)&pIVar5->field_904;
            break;
        case 1403:
            local_38 = (Array<HookArg, eastl::allocator>*)&pIVar5->field_952;
            break;
        case 1404:
            local_38 = (Array<HookArg, eastl::allocator>*)&pIVar5->field_1000;
            break;
        case 1405:
            local_38 = (Array<HookArg, eastl::allocator>*)&pIVar5->field_1024;
            break;
        case 1406:
            local_38 = (Array<HookArg, eastl::allocator>*)&pIVar5->field_1096;
            break;
        case 1407:
            local_38 = (Array<HookArg, eastl::allocator>*)&pIVar5->field_1120;
            this_02 = (vector<int, eastl::allocator>*)&pIVar5->field_1144;
            goto LAB_100194843;
        case 1408:
            local_38 = (Array<HookArg, eastl::allocator>*)&pIVar5->field_1288;
            break;
        case 1409:
            local_38 = (Array<HookArg, eastl::allocator>*)&pIVar5->field_1312;
            break;
        case 1410:
            local_38 = (Array<HookArg, eastl::allocator>*)&pIVar5->field_1048;
            break;
        case 1411:
            local_38 = (Array<HookArg, eastl::allocator>*)&pIVar5->field_880;
            break;
        case 1412:
            local_38 = (Array<HookArg, eastl::allocator>*)&pIVar5->field_976;
            break;
        default:
            goto switchD_10019456a_caseD_585;
        case 1414:
            local_38 = (Array<HookArg, eastl::allocator>*)&pIVar5->field_1176;
            this_02 = (vector<int, eastl::allocator>*)&pIVar5->field_1200;
            goto LAB_100194843;
        case 1415:
            local_38 = (Array<HookArg, eastl::allocator>*)&pIVar5->field_1232;
            this_02 = (vector<int, eastl::allocator>*)&pIVar5->field_1256;
            goto LAB_100194843;
        case 1416:
            local_38 = (Array<HookArg, eastl::allocator>*)&pIVar5->field_1072;
            break;
        case 1417:
            local_38 = (Array<HookArg, eastl::allocator>*)&pIVar5->field_1360;
            break;
        case 1418:
            local_38 = (Array<HookArg, eastl::allocator>*)&pIVar5->field_1384;
            break;
        case 1419:
            local_38 = (Array<HookArg, eastl::allocator>*)&pIVar5->field_1408;
            break;
        case 1420:
            local_38 = (Array<HookArg, eastl::allocator>*)&pIVar5->field_1480;
            break;
        case 1421:
            local_38 = (Array<HookArg, eastl::allocator>*)&pIVar5->field_1504;
            break;
        case 1422:
            local_38 = (Array<HookArg, eastl::allocator>*)&pIVar5->field_1576;
            break;
        case 1423:
            local_38 = (Array<HookArg, eastl::allocator>*)&pIVar5->field_1600;
            break;
        case 1424:
            local_38 = (Array<HookArg, eastl::allocator>*)&pIVar5->field_1624;
            break;
        case 1425:
            local_38 = (Array<HookArg, eastl::allocator>*)&pIVar5->field_1744;
            break;
        case 1426:
            local_38 = (Array<HookArg, eastl::allocator>*)&pIVar5->field_1768;
            break;
        case 1427:
            local_38 = (Array<HookArg, eastl::allocator>*)&pIVar5->field_1648;
            break;
        case 1428:
            local_38 = (Array<HookArg, eastl::allocator>*)&pIVar5->field_1528;
            break;
        case 1429:
            local_38 = (Array<HookArg, eastl::allocator>*)&pIVar5->field_1552;
            break;
        case 1430:
            local_38 = (Array<HookArg, eastl::allocator>*)&pIVar5->field_1432;
            break;
        case 1431:
            local_38 = (Array<HookArg, eastl::allocator>*)&pIVar5->field_1456;
            break;
        case 1432:
            local_38 = (Array<HookArg, eastl::allocator>*)&pIVar5->field_1672;
            break;
        case 1433:
            local_38 = (Array<HookArg, eastl::allocator>*)&pIVar5->field_1696;
            break;
        case 1434:
            local_38 = (Array<HookArg, eastl::allocator>*)&pIVar5->field_1720;
            break;
        case 1435:
            local_38 = (Array<HookArg, eastl::allocator>*)&pIVar5->field_1336;
            break;
        case 1436:
            lVar6 = pIVar5->GetInputFieldWrapper();
            if (lVar6 == 0) {
                /* WARNING: Subroutine does not return */
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                                "ScriptRunnerImpl_1400To1499.cpp",
                                141, "Tried to set InputField-only hook on a component without an InputFieldWrapper");
            }
            lVar6 = pIVar5->GetInputFieldWrapper();
            local_38 = (Array<HookArg, eastl::allocator>*)(lVar6 + 1592);
            goto LAB_10019483c;
        case 1437:
            lVar6 = pIVar5->GetInputFieldWrapper();
            if (lVar6 == 0) {
                /* WARNING: Subroutine does not return */
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                                "ScriptRunnerImpl_1400To1499.cpp",
                                149, "Tried to set InputField-only hook on a component without an InputFieldWrapper");
            }
            lVar6 = pIVar5->GetInputFieldWrapper();
            local_38 = (Array<HookArg, eastl::allocator>*)(lVar6 + 1616);
            goto LAB_10019483c;
        case 1438:
            lVar6 = pIVar5->GetInputFieldWrapper();
            if (lVar6 == 0) {
                /* WARNING: Subroutine does not return */
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                                "ScriptRunnerImpl_1400To1499.cpp",
                                157, "Tried to set InputField-only hook on a component without an InputFieldWrapper");
            }
            lVar6 = pIVar5->GetInputFieldWrapper();
            local_38 = (Array<HookArg, eastl::allocator>*)(lVar6 + 1640);
            goto LAB_10019483c;
        case 1439:
            lVar6 = pIVar5->GetInputFieldWrapper();
            if (lVar6 == 0) {
                /* WARNING: Subroutine does not return */
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                                "ScriptRunnerImpl_1400To1499.cpp",
                                165, "Tried to set InputField-only hook on a component without an InputFieldWrapper");
            }
            lVar6 = pIVar5->GetInputFieldWrapper();
            local_38 = (Array<HookArg, eastl::allocator>*)(lVar6 + 1568);
        LAB_10019483c:
        }
        this_02 = (vector<int, eastl::allocator>*)0;
    LAB_100194843:
        local_70 = (array<eastl::string, 1000ul>*)&field_104096;
        uVar13 = (long)(int)field_136096 - 1;
        field_136096 = (uint)uVar13;
        pbVar7 = (basic_string*)std::array<eastl::string, 1000ul>::operator[](local_70, uVar13);
        eastl::string::basic_string(local_90, pbVar7);
        lVar6 = eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
        if (lVar6 == 0) {
        LAB_10019495e:
            if (this_02 != (vector<int, eastl::allocator>*)0) {
                eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
            }
        } else {
            lVar6 =
                eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
            pcVar8 = (char*)eastl::string::operator[](local_90, lVar6 - 1);
            if (*pcVar8 != 'Y')
                goto LAB_10019495e;
            local_40 = (ScriptRunnerImpl*)&field_100092;
            uVar13 = (long)field_104092 - 1;
            field_104092 = (int)uVar13;
            piVar4 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)local_40, uVar13);
            iVar12 = *piVar4;
            if (this_02 == (vector<int, eastl::allocator>*)0) {
                /* WARNING: Subroutine does not return */
                LogAssert("pTransmit != nullptr",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                          "ScriptRunnerImpl_1400To1499.cpp",
                          184, (char*)0);
            }
            if ((0 < iVar12) && (this_02 != (vector<int, eastl::allocator>*)0)) {
                eastl::vector<int, eastl::allocator>::resize((ulong)this_02);
                lVar6 = (long)iVar12 + 1;
                do {
                    uVar13 = (long)field_104092 - 1;
                    field_104092 = (int)uVar13;
                    puVar9 = (undefined4*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)local_40, uVar13);
                    uVar1 = *puVar9;
                    puVar9 = (undefined4*)eastl::vector<int, eastl::allocator>::operator[](this_02, lVar6 - 2);
                    *puVar9 = uVar1;
                    lVar6 = lVar6 + -1;
                } while (1 < lVar6);
            }
            eastl::string::pop_back();
        }
        local_40 = this;
        eastl::vector<int, BucketAllocatorEASTL>::vector();
        local_50 = 0;
        lVar6 = eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
        if (lVar6 != 0) {
            do {
                pcVar8 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                local_d8.field_0 = stringtools::GetUTF8NextChar(pcVar8, &local_50);
                eastl::vector<int, BucketAllocatorEASTL>::push_back(local_68, (int*)&local_d8);
                uVar13 = local_50;
                uVar10 = eastl::basic_string<
                    char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
            } while (uVar13 < uVar10);
        }
        lVar6 = local_68->size();
        local_38->set_max_size(lVar6 + 1, 3);
        uVar13 = local_68->size();
        pSVar2 = local_40;
        this_00 = &local_40->field_100092;
        if (uVar13 != 0) {
            do {
                uVar10 = uVar13 - 1;
                piVar4 = (int*)eastl::vector<int, BucketAllocatorEASTL>::operator[](local_68, uVar10);
                if (*piVar4 == 115) {
                    uVar14 = (long)(int)pSVar2->field_136096 - 1;
                    pSVar2->field_136096 = (uint)uVar14;
                    pbVar7 = (basic_string*)std::array<eastl::string, 1000ul>::operator[](local_70, uVar14);
                    new (&local_d8) HookArg(pbVar7);
                    pHVar11 = (HookArg*)Array<HookArg, eastl::allocator>::operator[](local_38, uVar13);
                    HookArg::operator=(pHVar11, &local_d8);
                } else {
                    uVar14 = (long)pSVar2->field_104092 - 1;
                    pSVar2->field_104092 = (int)uVar14;
                    piVar4 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)this_00, uVar14);
                    new (&local_d8) HookArg(*piVar4);
                    pHVar11 = (HookArg*)Array<HookArg, eastl::allocator>::operator[](local_38, uVar13);
                    HookArg::operator=(pHVar11, &local_d8);
                }
                local_d8.~LanguageMessage();
                uVar13 = uVar10;
            } while (uVar10 != 0);
        }
        uVar13 = (long)pSVar2->field_104092 - 1;
        pSVar2->field_104092 = (int)uVar13;
        piVar4 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)this_00, uVar13);
        if (*piVar4 == -1) {
            local_38->clear();
            pIVar5 = local_48;
        } else {
            new (&local_d8) HookArg(*piVar4);
            pIVar5 = local_48;
            pHVar11 = (HookArg*)Array<HookArg, eastl::allocator>::operator[](local_38, 0);
            HookArg::operator=(pHVar11, &local_d8);
            local_d8.~LanguageMessage();
        }
        pIVar5->field_824 = 1;
        local_68->~vector_set();
        eastl::string::~basic_string(local_90);
        uVar15 = 1;
    switchD_10019456a_caseD_585:
        return uVar15;
    }

} // namespace jag::oldscape
