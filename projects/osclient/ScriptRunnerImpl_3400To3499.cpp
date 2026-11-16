// projects/osclient/ScriptRunnerImpl_3400To3499.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: osclient

#include "ScriptRunnerImpl.h"

namespace jag::oldscape {
    // 0x10015ece0, 1168 bytes, placed by class name and debug map
    // ScriptRunnerImpl::ExecuteCommand3400To3499(ScriptOp, ClientScript const&, bool)
    undefined8 ScriptRunnerImpl::ExecuteCommand3400To3499(long param_1, int param_2) {
        array<int, 1000ul>* this;
        int iVar1;
        int iVar2;
        uint uVar3;
        bool bVar4;
        undefined4 uVar5;
        int* piVar6;
        long lVar7;
        EnumType* this_00;
        uint* puVar8;
        ushort* puVar9;
        basic_string* pbVar10;
        eastl::string* pbVar11;
        undefined4* puVar12;
        ulong uVar13;
        shared_ptr local_58;
        uint local_44;
        shared_ptr local_40;

        if (param_2 == 3411) {
            uVar13 = (long)*(int*)(param_1 + 104092) - 1;
            *(int*)(param_1 + 104092) = (int)uVar13;
            piVar6 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), uVar13);
            local_40.List(*piVar6);
            uVar5 = 0;
            bVar4 = operator!=(&local_40, (_func_decltype_nullptr*)0);
            if (bVar4) {
                this_00 = (EnumType*)shared_ptr<configdecoder::EnumType>::operator->(
                    (shared_ptr<configdecoder::EnumType>*)&local_40);
                uVar5 = this_00->GetNumOptions();
            }
            iVar1 = *(int*)(param_1 + 104092);
            *(int*)(param_1 + 104092) = iVar1 + 1;
            puVar12 =
                (undefined4*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), (long)iVar1);
            *puVar12 = uVar5;
        } else if (param_2 == 3408) {
            lVar7 = (long)*(int*)(param_1 + 104092);
            *(int*)(param_1 + 104092) = (int)(lVar7 - 4U);
            this = (array<int, 1000ul>*)(param_1 + 100092);
            puVar8 = (uint*)std::array<int, 1000ul>::operator[](this, lVar7 - 4U);
            uVar3 = *puVar8;
            puVar8 = (uint*)std::array<int, 1000ul>::operator[](this, lVar7 - 3);
            local_44 = *puVar8;
            piVar6 = (int*)std::array<int, 1000ul>::operator[](this, lVar7 - 2);
            iVar1 = *piVar6;
            piVar6 = (int*)std::array<int, 1000ul>::operator[](this, lVar7 - 1);
            iVar2 = *piVar6;
            local_40.List(iVar1);
            bVar4 = operator==(&local_40, (_func_decltype_nullptr*)0);
            if (((bVar4) || (puVar9 = (ushort*)shared_ptr<configdecoder::EnumType>::operator->(
                                 (shared_ptr<configdecoder::EnumType>*)&local_40),
                             uVar3 != *puVar9)) ||
                (lVar7 =
                     shared_ptr<configdecoder::EnumType>::operator->((shared_ptr<configdecoder::EnumType>*)&local_40),
                 local_44 != *(ushort*)(lVar7 + 2))) {
                uVar5 = 0;
                if (local_44 == 115) {
                    iVar1 = *(int*)(param_1 + 136096);
                    *(int*)(param_1 + 136096) = iVar1 + 1;
                    pbVar11 = (eastl::string*)std::array<eastl::string, 1000ul>::operator[](
                        (array<eastl::string, 1000ul>*)(param_1 + 104096), (long)iVar1);
                    eastl::string::operator=(pbVar11, (basic_string*)&constants::text::null);
                    goto LAB_10015f115;
                }
            } else {
                for (uVar13 = 0; lVar7 = shared_ptr<configdecoder::EnumType>::operator->(
                                     (shared_ptr<configdecoder::EnumType>*)&local_40),
                    (long)uVar13 < (long)*(int*)(lVar7 + 44);
                     uVar13 = uVar13 + 1) {
                    lVar7 = shared_ptr<configdecoder::EnumType>::operator->(
                        (shared_ptr<configdecoder::EnumType>*)&local_40);
                    piVar6 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)(lVar7 + 48),
                                                                            uVar13);
                    if (*piVar6 == iVar2) {
                        if (local_44 == 115) {
                            lVar7 = shared_ptr<configdecoder::EnumType>::operator->(
                                (shared_ptr<configdecoder::EnumType>*)&local_40);
                            pbVar10 = (basic_string*)Array<eastl::string, eastl::allocator>::operator[](
                                (Array<eastl::string, eastl::allocator>*)(lVar7 + 96), uVar13);
                            iVar1 = *(int*)(param_1 + 136096);
                            *(int*)(param_1 + 136096) = iVar1 + 1;
                            pbVar11 = (eastl::string*)std::array<eastl::string, 1000ul>::operator[](
                                (array<eastl::string, 1000ul>*)(param_1 + 104096), (long)iVar1);
                            eastl::string::operator=(pbVar11, pbVar10);
                        } else {
                            lVar7 = shared_ptr<configdecoder::EnumType>::operator->(
                                (shared_ptr<configdecoder::EnumType>*)&local_40);
                            puVar12 = (undefined4*)Array<int, eastl::allocator>::operator[](
                                (Array<int, eastl::allocator>*)(lVar7 + 72), uVar13);
                            uVar5 = *puVar12;
                            iVar1 = *(int*)(param_1 + 104092);
                            *(int*)(param_1 + 104092) = iVar1 + 1;
                            puVar12 = (undefined4*)std::array<int, 1000ul>::operator[](this, (long)iVar1);
                            *puVar12 = uVar5;
                        }
                        new (&local_58) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
                        shared_ptr<configdecoder::EnumType>::operator=((shared_ptr<configdecoder::EnumType>*)&local_40,
                                                                       &local_58);
                        local_58.~shared_ptr();
                        break;
                    }
                }
                bVar4 = operator!=(&local_40, (_func_decltype_nullptr*)0);
                if (!bVar4)
                    goto LAB_10015f115;
                if (local_44 == 115) {
                    lVar7 = shared_ptr<configdecoder::EnumType>::operator->(
                        (shared_ptr<configdecoder::EnumType>*)&local_40);
                    iVar1 = *(int*)(param_1 + 136096);
                    *(int*)(param_1 + 136096) = iVar1 + 1;
                    pbVar11 = (eastl::string*)std::array<eastl::string, 1000ul>::operator[](
                        (array<eastl::string, 1000ul>*)(param_1 + 104096), (long)iVar1);
                    eastl::string::operator=(pbVar11, (basic_string*)(lVar7 + 8));
                    goto LAB_10015f115;
                }
                lVar7 =
                    shared_ptr<configdecoder::EnumType>::operator->((shared_ptr<configdecoder::EnumType>*)&local_40);
                uVar5 = *(undefined4*)(lVar7 + 40);
            }
            iVar1 = *(int*)(param_1 + 104092);
            *(int*)(param_1 + 104092) = iVar1 + 1;
            puVar12 = (undefined4*)std::array<int, 1000ul>::operator[](this, (long)iVar1);
            *puVar12 = uVar5;
        } else {
            if (param_2 != 3400) {
                return 2;
            }
            iVar1 = *(int*)(param_1 + 104092);
            uVar13 = (long)iVar1 - 2;
            *(int*)(param_1 + 104092) = (int)uVar13;
            piVar6 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), uVar13);
            iVar2 = *piVar6;
            piVar6 =
                (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), (long)iVar1 - 1);
            iVar1 = *piVar6;
            local_40.List(iVar2);
            bVar4 = operator==(&local_40, (_func_decltype_nullptr*)0);
            if (!bVar4) {
                shared_ptr<configdecoder::EnumType>::operator->((shared_ptr<configdecoder::EnumType>*)&local_40);
            }
            for (uVar13 = 0; lVar7 = shared_ptr<configdecoder::EnumType>::operator->(
                                 (shared_ptr<configdecoder::EnumType>*)&local_40),
                (long)uVar13 < (long)*(int*)(lVar7 + 44);
                 uVar13 = uVar13 + 1) {
                lVar7 =
                    shared_ptr<configdecoder::EnumType>::operator->((shared_ptr<configdecoder::EnumType>*)&local_40);
                piVar6 =
                    (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)(lVar7 + 48), uVar13);
                if (*piVar6 == iVar1) {
                    lVar7 = shared_ptr<configdecoder::EnumType>::operator->(
                        (shared_ptr<configdecoder::EnumType>*)&local_40);
                    pbVar10 = (basic_string*)Array<eastl::string, eastl::allocator>::operator[](
                        (Array<eastl::string, eastl::allocator>*)(lVar7 + 96), uVar13);
                    iVar1 = *(int*)(param_1 + 136096);
                    *(int*)(param_1 + 136096) = iVar1 + 1;
                    pbVar11 = (eastl::string*)std::array<eastl::string, 1000ul>::operator[](
                        (array<eastl::string, 1000ul>*)(param_1 + 104096), (long)iVar1);
                    eastl::string::operator=(pbVar11, pbVar10);
                    new (&local_58) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
                    shared_ptr<configdecoder::EnumType>::operator=((shared_ptr<configdecoder::EnumType>*)&local_40,
                                                                   &local_58);
                    local_58.~shared_ptr();
                    break;
                }
            }
            bVar4 = operator!=(&local_40, (_func_decltype_nullptr*)0);
            if (bVar4) {
                lVar7 =
                    shared_ptr<configdecoder::EnumType>::operator->((shared_ptr<configdecoder::EnumType>*)&local_40);
                iVar1 = *(int*)(param_1 + 136096);
                *(int*)(param_1 + 136096) = iVar1 + 1;
                pbVar11 = (eastl::string*)std::array<eastl::string, 1000ul>::operator[](
                    (array<eastl::string, 1000ul>*)(param_1 + 104096), (long)iVar1);
                eastl::string::operator=(pbVar11, (basic_string*)(lVar7 + 8));
            }
        }
    LAB_10015f115:
        local_40.~shared_ptr();
        return 1;
    }

} // namespace jag::oldscape
