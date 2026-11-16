// projects/osclient/ScriptRunnerImpl_1300To1399.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: osclient

#include "ScriptRunnerImpl.h"

namespace jag::oldscape {
    // 0x100193c20, 2192 bytes, placed by class name and debug map
    // ScriptRunnerImpl::ExecuteCommand1300To1399Or2300To2399(ScriptOp, ClientScript const&, bool, bool)
    undefined1 ScriptRunnerImpl::ExecuteCommand1300To1399Or2300To2399(undefined4 param_2, undefined8 param_3,
                                                                      bool param_4, int param_5) {
        undefined4 uVar1;
        uint uVar2;
        bool bVar3;
        int* piVar5;
        shared_ptr* psVar6;
        IfType* this_00;
        basic_string* pbVar7;
        undefined4* puVar8;
        undefined1* puVar9;
        uint* puVar10;
        char* pcVar11;
        int* piVar12;
        undefined1* puVar13;
        int iVar14;
        eastl::string* this_01;
        long lVar15;
        uint uVar16;
        ulong uVar17;
        undefined1 uVar18;
        int iVar19;
        undefined1* local_88;
        undefined8 local_80;
        shared_ptr* local_78;
        Array<unsigned char, eastl::allocator> local_70[32];
        undefined1** local_50;
        undefined8 local_48;
        undefined1 local_31;

        iVar14 = -1;
        if (param_5 != 0) {
            uVar17 = (long)field_104092 - 1;
            field_104092 = (int)uVar17;
            piVar5 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&field_100092, uVar17);
            iVar14 = *piVar5;
        }
        psVar6 = (shared_ptr*)SafeGetComponent(this, iVar14, SUB41(param_5, 0), param_4);
        bVar3 = operator==(psVar6, (_func_decltype_nullptr*)0);
        if (bVar3) {
            (&field_141000, 1)->Raise();
            return false;
        }
        this_00 = (IfType*)shared_ptr<rs2lib::IfType>::operator*((shared_ptr<rs2lib::IfType>*)psVar6);
        uVar18 = 2;
        switch (param_2) {
        case 1300:
            uVar17 = (long)field_104092 - 1;
            field_104092 = (int)uVar17;
            piVar5 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&field_100092, uVar17);
            iVar14 = *piVar5;
            if (iVar14 - 1U < 10) {
                uVar17 = (long)(int)field_136096 - 1;
                field_136096 = (uint)uVar17;
                pbVar7 = (basic_string*)std::array<eastl::string, 1000ul>::operator[](
                    (array<eastl::string, 1000ul>*)&field_104096, uVar17);
                this_00->SetOpName(iVar14 - 1U, pbVar7);
            } else {
                field_136096 = field_136096 - 1;
            }
            break;
        case 1301:
            iVar14 = field_104092;
            uVar17 = (long)iVar14 - 2;
            field_104092 = (int)uVar17;
            piVar5 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&field_100092, uVar17);
            iVar19 = *piVar5;
            piVar5 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&field_100092, (long)iVar14 - 1);
            psVar6 = (shared_ptr*)rs2lib::IfType::Get(iVar19, *piVar5);
            shared_ptr<rs2lib::IfType>::operator=((shared_ptr<rs2lib::IfType>*)&this_00->field_760, psVar6);
            break;
        case 1302:
            uVar17 = (long)field_104092 - 1;
            field_104092 = (int)uVar17;
            piVar5 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&field_100092, uVar17);
            *(bool*)&this_00->field_784 = *piVar5 == 1;
            break;
        case 1303:
            uVar17 = (long)field_104092 - 1;
            field_104092 = (int)uVar17;
            puVar8 = (undefined4*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&field_100092, uVar17);
            *(undefined4*)&this_00->field_776 = *puVar8;
            break;
        case 1304:
            uVar17 = (long)field_104092 - 1;
            field_104092 = (int)uVar17;
            puVar8 = (undefined4*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&field_100092, uVar17);
            *(undefined4*)((long)&this_00->field_776 + 4) = *puVar8;
            break;
        case 1305:
            uVar17 = (long)(int)field_136096 - 1;
            field_136096 = (uint)uVar17;
            pbVar7 = (basic_string*)std::array<eastl::string, 1000ul>::operator[](
                (array<eastl::string, 1000ul>*)&field_104096, uVar17);
            this_01 = (eastl::string*)&this_00->field_704;
            goto LAB_100193eb4;
        case 1306:
            uVar17 = (long)(int)field_136096 - 1;
            field_136096 = (uint)uVar17;
            pbVar7 = (basic_string*)std::array<eastl::string, 1000ul>::operator[](
                (array<eastl::string, 1000ul>*)&field_104096, uVar17);
            this_01 = (eastl::string*)&this_00->field_792;
        LAB_100193eb4:
            eastl::string::operator=(this_01, pbVar7);
            break;
        case 1307:
            (&this_00->field_736)->clear();
            break;
        case 1308:
            uVar17 = (long)field_104092 - 1;
            field_104092 = (int)uVar17;
            piVar5 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&field_100092, uVar17);
            this_00->field_2082 = *piVar5 == 1;
            break;
        case 1309:
            uVar17 = (long)field_104092 - 1;
            field_104092 = (int)uVar17;
            piVar5 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&field_100092, uVar17);
            *(bool*)((long)&this_00->field_784 + 1) = *piVar5 == 1;
            break;
        default:
            goto switchD_100193cd5_caseD_51e;
        case 1350:
            local_78 = psVar6;
            Array<unsigned char, eastl::allocator>::Array(local_70, 1);
            new (&local_50) Array<unsigned char, eastl::allocator>(1);
            if (SUB41(param_5, 0) == false) {
                lVar15 = (long)field_104092 + -10;
                field_104092 = (int)lVar15;
                puVar9 = &field_100092;
                uVar17 = 0;
                do {
                    piVar5 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)puVar9, lVar15 + uVar17);
                    if (*piVar5 < 0)
                        goto LAB_100194264;
                    bVar3 = uVar17 < 8;
                    uVar17 = uVar17 + 2;
                } while (bVar3);
                uVar17 = 10;
            LAB_100194264:
                iVar14 = (int)uVar17;
                if (iVar14 != 0) {
                    uVar17 = uVar17 >> 1 & 2147483647;
                    local_70->set_max_size(uVar17, 3);
                    local_50.set_max_size(uVar17, 3);
                    if (1 < iVar14) {
                        do {
                            iVar19 = iVar14 + -2;
                            puVar8 = (undefined4*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)puVar9,
                                                                                      (long)(field_104092 + iVar19));
                            uVar1 = *puVar8;
                            puVar13 = (undefined1*)Array<unsigned char, eastl::allocator>::operator[](
                                local_70, (ulong)(uint)(iVar19 / 2));
                            *puVar13 = (char)uVar1;
                            puVar8 = (undefined4*)std::array<int, 1000ul>::operator[](
                                (array<int, 1000ul>*)puVar9, (long)(field_104092 + iVar19 + 1));
                            uVar1 = *puVar8;
                            puVar13 = (undefined1*)Array<unsigned char, eastl::allocator>::operator[](
                                (Array<unsigned char, eastl::allocator>*)&local_50, (ulong)(uint)(iVar19 / 2));
                            *puVar13 = (char)uVar1;
                            bVar3 = 3 < iVar14;
                            iVar14 = iVar19;
                        } while (bVar3);
                    }
                }
            } else {
                iVar14 = field_104092 + -2;
                field_104092 = iVar14;
                puVar8 =
                    (undefined4*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&field_100092, (long)iVar14);
                uVar1 = *puVar8;
                puVar9 = (undefined1*)Array<unsigned char, eastl::allocator>::operator[](local_70, 0);
                *puVar9 = (char)uVar1;
                puVar8 = (undefined4*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&field_100092,
                                                                          (long)field_104092 + 1);
                uVar1 = *puVar8;
                puVar9 = (undefined1*)Array<unsigned char, eastl::allocator>::operator[](
                    (Array<unsigned char, eastl::allocator>*)&local_50, 0);
                *puVar9 = (char)uVar1;
            }
            uVar17 = (long)field_104092 - 1;
            field_104092 = (int)uVar17;
            piVar5 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&field_100092, uVar17);
            uVar16 = *piVar5 - 1;
            if (uVar16 < 10) {
                CcIfSetOpOptKey(local_78, uVar16, (Array*)local_70, (Array*)&local_50);
            } else {
                (&field_141000, 1)->Raise();
            }
            local_50.~Array();
            local_70->~Array();
            return uVar16 < 10;
        case 1351:
            uVar17 = (long)field_104092 - 2;
            field_104092 = (int)uVar17;
            puVar9 = (undefined1*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&field_100092, uVar17);
            local_88 = (undefined1*)CONCAT71(local_88._1_7_, *puVar9);
            local_50 = &local_88;
            local_48 = 1;
            Array<unsigned char, eastl::allocator>::Array(local_70, (initializer_list*)&local_50);
            puVar9 = (undefined1*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&field_100092,
                                                                      (long)field_104092 + 1);
            local_31 = *puVar9;
            local_88 = &local_31;
            local_80 = 1;
            new (&local_50) Array<unsigned char, eastl::allocator>((initializer_list*)&local_88);
            CcIfSetOpOptKey(psVar6, 10, (Array*)local_70, (Array*)&local_50);
            local_50.~Array();
            local_70->~Array();
            break;
        case 1352:
            iVar14 = field_104092;
            uVar17 = (long)iVar14 - 3;
            field_104092 = (int)uVar17;
            puVar9 = &field_100092;
            local_78 = psVar6;
            puVar10 = (uint*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)puVar9, uVar17);
            uVar2 = *puVar10;
            uVar16 = uVar2 - 1;
            if (9 < uVar16) {
                new (local_70) eastl::string();
                eastl::string::sprintf((char*)local_70, "setopkeyrate: Op ID out of range: %i", (ulong)uVar2);
                pcVar11 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                /* WARNING: Subroutine does not return */
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                                "ScriptRunnerImpl_1300To1399.cpp",
                                166, pcVar11);
            }
            piVar5 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)puVar9, (long)iVar14 - 1);
            piVar12 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)puVar9, (long)(iVar14 + -2));
            iVar19 = *piVar12;
            iVar14 = *piVar5;
            psVar6 = local_78;
            goto LAB_1001941f6;
        case 1353:
            iVar14 = field_104092;
            uVar17 = (long)iVar14 - 1;
            field_104092 = (int)uVar17;
            piVar5 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&field_100092, uVar17);
            iVar19 = *piVar5;
            uVar17 = (long)iVar14 - 2;
            field_104092 = (int)uVar17;
            piVar5 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&field_100092, uVar17);
            iVar14 = *piVar5;
            uVar16 = 10;
        LAB_1001941f6:
            CcIfSetOpOptKeyRate(psVar6, uVar16, iVar19, iVar14, (ErrorCapture*)&field_141000);
        LAB_100194212:
            return (&field_141000)->IsRaised() ^ 1;
        case 1354:
            uVar17 = (long)field_104092 - 1;
            field_104092 = (int)uVar17;
            puVar10 = (uint*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&field_100092, uVar17);
            uVar2 = *puVar10;
            uVar16 = uVar2 - 1;
            if (9 < uVar16) {
                new (local_70) eastl::string();
                eastl::string::sprintf((char*)local_70, "setopkeyrate: Op ID out of range: %i", (ulong)uVar2);
                pcVar11 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                /* WARNING: Subroutine does not return */
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                                "ScriptRunnerImpl_1300To1399.cpp",
                                199, pcVar11);
            }
            goto LAB_10019420a;
        case 1355:
            uVar16 = 10;
        LAB_10019420a:
            CcIfSetOpOptKeyIgnoreHeld(psVar6, uVar16, (ErrorCapture*)&field_141000);
            goto LAB_100194212;
        }
        uVar18 = 1;
    switchD_100193cd5_caseD_51e:
        return uVar18;
    }

} // namespace jag::oldscape
