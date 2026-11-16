// projects/osclient/ScriptRunnerImpl_7100To7199.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: osclient

#include "ScriptRunnerImpl.h"

namespace jag::oldscape {
    // 0x1000b5740, 1344 bytes, placed by class name and debug map
    // ScriptRunnerImpl::ExecuteCommand7100To7199(ScriptOp, ClientScript const&, bool)
    undefined8 ScriptRunnerImpl::ExecuteCommand7100To7199(ScriptRunnerImpl* param_1, undefined4 param_2) {
        undefined1* puVar1;
        char cVar2;
        bool bVar3;
        byte bVar4;
        uint uVar5;
        int iVar6;
        undefined4 uVar7;
        Client* this;
        int* piVar8;
        shared_ptr<ClientObj>* psVar9;
        long lVar10;
        undefined4* puVar11;
        uint* puVar12;
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* this_00;
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base* extraout_RDX_00;
        hashtable_iterator_base* extraout_RDX_01;
        hashtable_iterator_base* extraout_RDX_02;
        ulong uVar13;
        int iVar14;
        undefined8 uVar15;
        list<console::Line, eastl::allocator> local_60[8];
        array<int, 1000ul>* local_58;
        CoordGrid local_50;
        list<console::Line, eastl::allocator> local_40[8];
        uint local_38;
        int local_34;

        uVar15 = 2;
        this = (Client*)Client::Instance();
        switch (param_2) {
        case 7100:
            iVar6 = field_52344->GetHoveredIndex();
            DoMinimenuOpTypeAt(param_1, iVar6);
            break;
        case 7101:
            iVar6 = field_52344->GetHoveredIndex();
            DoMinimenuTextAt(param_1, iVar6);
            break;
        case 7102:
            iVar6 = field_52344->GetHoveredIndex();
            DoMinimenuFindNPCAt(param_1, iVar6);
            break;
        case 7103:
            iVar6 = field_52344->GetHoveredIndex();
            DoMinimenuFindLocAt(param_1, iVar6);
            break;
        case 7104:
            iVar6 = field_52344->GetHoveredIndex();
            DoMinimenuFindObjAt(param_1, iVar6);
            break;
        case 7105:
            iVar6 = field_52344->GetHoveredIndex();
            DoMinimenuFindPlayerAt(param_1, iVar6);
            break;
        case 7106:
            iVar6 = field_52344->GetHoveredIndex();
            DoMinimenuCoordAt(param_1, iVar6);
            break;
        case 7107:
            iVar6 = field_52344->GetHoveredIndex();
            DoMinimenuObjTypeAt(param_1, iVar6);
            break;
        case 7108:
            bVar4 = field_52344->IsOpen();
            uVar5 = (uint)bVar4;
            goto LAB_1000b5b3d;
        case 7109:
            iVar6 = field_52344->GetHoveredIndex();
            DoMinimenuFindComponentAt(param_1, iVar6);
            break;
        case 7110:
            uVar5 = field_52344->GetNumOps();
        LAB_1000b5b3d:
            iVar6 = param_1->field_104092;
            param_1->field_104092 = iVar6 + 1;
            puVar12 =
                (uint*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&param_1->field_100092, (long)iVar6);
            *puVar12 = uVar5;
            break;
        default:
            goto switchD_1000b5781_caseD_1bc7;
        case 7120:
            uVar13 = (long)param_1->field_104092 - 1;
            param_1->field_104092 = (int)uVar13;
            piVar8 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&param_1->field_100092, uVar13);
            new (&local_50) rs2lib::CoordGrid(*piVar8);
            local_40->BuildCoordFromWorldCoord(this);
            local_50.field_8 = local_38;
            local_50._0_8_ = local_40;
            cVar2 = ClientConstants::IsCoordInBuildArea(&local_50);
            uVar7 = 0;
            if (cVar2 != '\0') {
                this_00 =
                    (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                               eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                               eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                               eastl::prime_rehash_policy, false, true, true>*)GetObjectsOnTile(&local_50);
                uVar7 = eastl::hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                                         eastl::use_first<eastl::pair<long long const, unsigned int>>,
                                         eastl::equal_to<long long>, eastl::hash<long long>, eastl::mod_range_hashing,
                                         eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
                                         true>::size(this_00);
            }
            iVar6 = param_1->field_104092;
            param_1->field_104092 = iVar6 + 1;
            puVar11 = (undefined4*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&param_1->field_100092,
                                                                       (long)iVar6);
            *puVar11 = uVar7;
            break;
        case 7121:
            uVar13 = (long)param_1->field_104092 - 2;
            param_1->field_104092 = (int)uVar13;
            puVar1 = &param_1->field_100092;
            piVar8 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)puVar1, uVar13);
            new (&local_50) rs2lib::CoordGrid(*piVar8);
            local_58 = (array<int, 1000ul>*)puVar1;
            piVar8 =
                (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)puVar1, (long)param_1->field_104092 + 1);
            iVar6 = *piVar8;
            local_40->BuildCoordFromWorldCoord(this);
            local_50.field_8 = local_38;
            local_50._0_8_ = local_40;
            cVar2 = ClientConstants::IsCoordInBuildArea(&local_50);
            if (cVar2 != '\0') {
                local_34 = iVar6;
                GetObjectsOnTile(&local_50);
                eastl::list<console::Line, eastl::allocator>::begin(local_40);
                eastl::list<console::Line, eastl::allocator>::end(local_60);
                bVar3 = eastl::operator!=((eastl*)local_40, (hashtable_iterator_base*)local_60, extraout_RDX);
                if (bVar3) {
                    iVar6 = 0;
                    do {
                        psVar9 = (shared_ptr<ClientObj>*)
                            eastl::ListIterator<console::Line, console::Line*, console::Line&>::operator*(
                                (ListIterator<console::Line, console::Line*, console::Line&>*)local_40);
                        if (iVar6 == local_34) {
                            lVar10 = shared_ptr<ClientObj>::operator->(psVar9);
                            uVar7 = *(undefined4*)(lVar10 + 24);
                            iVar14 = param_1->field_104092;
                            param_1->field_104092 = iVar14 + 1;
                            puVar11 = (undefined4*)std::array<int, 1000ul>::operator[](local_58, (long)iVar14);
                            *puVar11 = uVar7;
                            iVar14 = iVar6;
                        } else {
                            iVar14 = iVar6 + 1;
                        }
                        if (iVar6 == local_34)
                            break;
                        eastl::ListIterator<console::Line, console::Line*, console::Line&>::operator++(
                            (ListIterator<console::Line, console::Line*, console::Line&>*)local_40);
                        bVar3 =
                            eastl::operator!=((eastl*)local_40, (hashtable_iterator_base*)local_60, extraout_RDX_00);
                        iVar6 = iVar14;
                    } while (bVar3);
                }
                if (bVar3 != false)
                    break;
            }
            iVar6 = param_1->field_104092;
            param_1->field_104092 = iVar6 + 1;
            puVar11 = (undefined4*)std::array<int, 1000ul>::operator[](local_58, (long)iVar6);
            *puVar11 = 4294967295;
            break;
        case 7122:
            uVar13 = (long)param_1->field_104092 - 2;
            param_1->field_104092 = (int)uVar13;
            puVar1 = &param_1->field_100092;
            piVar8 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)puVar1, uVar13);
            new (&local_50) rs2lib::CoordGrid(*piVar8);
            local_58 = (array<int, 1000ul>*)puVar1;
            piVar8 =
                (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)puVar1, (long)param_1->field_104092 + 1);
            iVar6 = *piVar8;
            local_40->BuildCoordFromWorldCoord(this);
            local_50.field_8 = local_38;
            local_50._0_8_ = local_40;
            cVar2 = ClientConstants::IsCoordInBuildArea(&local_50);
            if (cVar2 != '\0') {
                local_34 = iVar6;
                GetObjectsOnTile(&local_50);
                eastl::list<console::Line, eastl::allocator>::begin(local_40);
                eastl::list<console::Line, eastl::allocator>::end(local_60);
                bVar3 = eastl::operator!=((eastl*)local_40, (hashtable_iterator_base*)local_60, extraout_RDX_01);
                if (bVar3) {
                    iVar6 = 0;
                    do {
                        psVar9 = (shared_ptr<ClientObj>*)
                            eastl::ListIterator<console::Line, console::Line*, console::Line&>::operator*(
                                (ListIterator<console::Line, console::Line*, console::Line&>*)local_40);
                        if (iVar6 == local_34) {
                            lVar10 = shared_ptr<ClientObj>::operator->(psVar9);
                            uVar7 = *(undefined4*)(lVar10 + 28);
                            iVar14 = param_1->field_104092;
                            param_1->field_104092 = iVar14 + 1;
                            puVar11 = (undefined4*)std::array<int, 1000ul>::operator[](local_58, (long)iVar14);
                            *puVar11 = uVar7;
                            iVar14 = iVar6;
                        } else {
                            iVar14 = iVar6 + 1;
                        }
                        if (iVar6 == local_34)
                            break;
                        eastl::ListIterator<console::Line, console::Line*, console::Line&>::operator++(
                            (ListIterator<console::Line, console::Line*, console::Line&>*)local_40);
                        bVar3 =
                            eastl::operator!=((eastl*)local_40, (hashtable_iterator_base*)local_60, extraout_RDX_02);
                        iVar6 = iVar14;
                    } while (bVar3);
                }
                if (bVar3 != false)
                    break;
            }
            iVar6 = param_1->field_104092;
            param_1->field_104092 = iVar6 + 1;
            puVar11 = (undefined4*)std::array<int, 1000ul>::operator[](local_58, (long)iVar6);
            *puVar11 = 0;
        }
        uVar15 = 1;
    switchD_1000b5781_caseD_1bc7:
        return uVar15;
    }

} // namespace jag::oldscape
