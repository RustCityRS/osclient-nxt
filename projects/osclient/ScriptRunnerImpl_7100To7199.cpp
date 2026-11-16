// projects/osclient/ScriptRunnerImpl_7100To7199.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: osclient

#include "ScriptRunnerImpl.h"

namespace jag::oldscape {
    // 0x1000b5740
    uint64_t ScriptRunnerImpl::ExecuteCommand7100To7199(ScriptOp scriptOp, const ClientScript& clientScript,
                                                        bool arg3) {
        uint8_t* puVar1;
        bool cVar2;
        uint8_t bVar3;
        unsigned int uVar4;
        int iVar5;
        uint32_t uVar6;
        int* piVar7;
        list<console::Line>* plVar8;
        shared_ptr<ClientObj>* psVar9;
        long lVar10;
        uint32_t* puVar11;
        unsigned int* puVar12;
        unsigned long uVar13;
        int iVar14;
        ReturnValue local_60;
        array<int, 1000ul>* local_58;
        ReturnValue local_50;
        unsigned int local_48;
        ReturnValue local_40;
        unsigned int local_38;
        int local_34;

        uint64_t uVar15 = 2;
        auto this_00 = Client::Instance();
        switch (scriptOp) {
        case 7100:
            iVar5 = this_00->field_52344->GetHoveredIndex();
            DoMinimenuOpTypeAt(iVar5);
            break;
        case 7101:
            iVar5 = this_00->field_52344->GetHoveredIndex();
            DoMinimenuTextAt(iVar5);
            break;
        case 7102:
            iVar5 = this_00->field_52344->GetHoveredIndex();
            DoMinimenuFindNPCAt(iVar5);
            break;
        case 7103:
            iVar5 = this_00->field_52344->GetHoveredIndex();
            DoMinimenuFindLocAt(iVar5);
            break;
        case 7104:
            iVar5 = this_00->field_52344->GetHoveredIndex();
            DoMinimenuFindObjAt(iVar5);
            break;
        case 7105:
            iVar5 = this_00->field_52344->GetHoveredIndex();
            DoMinimenuFindPlayerAt(iVar5);
            break;
        case 7106:
            iVar5 = this_00->field_52344->GetHoveredIndex();
            DoMinimenuCoordAt(iVar5);
            break;
        case 7107:
            iVar5 = this_00->field_52344->GetHoveredIndex();
            DoMinimenuObjTypeAt(iVar5);
            break;
        case 7108:
            bVar3 = this_00->field_52344->IsOpen();
            uVar4 = (unsigned int)bVar3;
            goto LAB_1000b5b3d;
        case 7109:
            iVar5 = this_00->field_52344->GetHoveredIndex();
            DoMinimenuFindComponentAt(iVar5);
            break;
        case 7110:
            uVar4 = this_00->field_52344->GetNumOps();
        LAB_1000b5b3d:
            iVar5 = field_104092;
            field_104092 = iVar5 + 1;
            puVar12 = &field_100092[(long)iVar5];
            *puVar12 = uVar4;
            break;
        default:
            goto switchD_1000b5781_caseD_1bc7;
        case 7120:
            uVar13 = (long)field_104092 - 1;
            field_104092 = (int)uVar13;
            piVar7 = &field_100092[uVar13];
            new (&local_50) rs2lib::CoordGrid(*piVar7);
            local_40 = this_00->BuildCoordFromWorldCoord(local_50);
            local_48 = local_38;
            local_50 = local_40;
            cVar2 = ClientConstants::IsCoordInBuildArea(local_50);
            uVar6 = 0;
            if (cVar2) {
                uVar6 = ((hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                                    eastl::use_first<eastl::pair<long long const, unsigned int>>,
                                    eastl::equal_to<long long>, eastl::hash<long long>, eastl::mod_range_hashing,
                                    eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>*)
                             this_00->GetObjectsOnTile(local_50))
                            ->size();
            }
            iVar5 = field_104092;
            field_104092 = iVar5 + 1;
            puVar11 = &field_100092[(long)iVar5];
            *puVar11 = uVar6;
            break;
        case 7121:
            uVar13 = (long)field_104092 - 2;
            field_104092 = (int)uVar13;
            puVar1 = &field_100092;
            piVar7 = (int*)(*puVar1)[uVar13];
            new (&local_50) rs2lib::CoordGrid(*piVar7);
            local_58 = (array<int, 1000ul>*)puVar1;
            piVar7 = (int*)(*puVar1)[(long)field_104092 + 1];
            iVar5 = *piVar7;
            local_40 = this_00->BuildCoordFromWorldCoord(local_50);
            local_48 = local_38;
            local_50 = local_40;
            cVar2 = ClientConstants::IsCoordInBuildArea(local_50);
            if (cVar2) {
                local_34 = iVar5;
                plVar8 = (list<console::Line>*)this_00->GetObjectsOnTile(local_50);
                local_40 = plVar8->begin();
                local_60 = plVar8->end();
                bVar3 = local_40 != local_60;
                if (bVar3 != 0) {
                    iVar5 = 0;
                    do {
                        psVar9 = (shared_ptr<ClientObj>*)*local_40;
                        if (iVar5 == local_34) {
                            lVar10 = (*psVar9).operator->();
                            uVar6 = *(uint32_t*)(lVar10 + 24);
                            iVar14 = field_104092;
                            field_104092 = iVar14 + 1;
                            puVar11 = (uint32_t*)(*local_58)[(long)iVar14];
                            *puVar11 = uVar6;
                            iVar14 = iVar5;
                        } else {
                            iVar14 = iVar5 + 1;
                        }
                        if (iVar5 == local_34)
                            break;
                        ++local_40;
                        bVar3 = local_40 != local_60;
                        iVar5 = iVar14;
                    } while (bVar3 != 0);
                }
                if ((bVar3 & 1) != 0)
                    break;
            }
            iVar5 = field_104092;
            field_104092 = iVar5 + 1;
            puVar11 = (uint32_t*)(*local_58)[(long)iVar5];
            *puVar11 = 4294967295;
            break;
        case 7122:
            uVar13 = (long)field_104092 - 2;
            field_104092 = (int)uVar13;
            puVar1 = &field_100092;
            piVar7 = (int*)(*puVar1)[uVar13];
            new (&local_50) rs2lib::CoordGrid(*piVar7);
            local_58 = (array<int, 1000ul>*)puVar1;
            piVar7 = (int*)(*puVar1)[(long)field_104092 + 1];
            iVar5 = *piVar7;
            local_40 = this_00->BuildCoordFromWorldCoord(local_50);
            local_48 = local_38;
            local_50 = local_40;
            cVar2 = ClientConstants::IsCoordInBuildArea(local_50);
            if (cVar2) {
                local_34 = iVar5;
                plVar8 = (list<console::Line>*)this_00->GetObjectsOnTile(local_50);
                local_40 = plVar8->begin();
                local_60 = plVar8->end();
                bVar3 = local_40 != local_60;
                if (bVar3 != 0) {
                    iVar5 = 0;
                    do {
                        psVar9 = (shared_ptr<ClientObj>*)*local_40;
                        if (iVar5 == local_34) {
                            lVar10 = (*psVar9).operator->();
                            uVar6 = *(uint32_t*)(lVar10 + 28);
                            iVar14 = field_104092;
                            field_104092 = iVar14 + 1;
                            puVar11 = (uint32_t*)(*local_58)[(long)iVar14];
                            *puVar11 = uVar6;
                            iVar14 = iVar5;
                        } else {
                            iVar14 = iVar5 + 1;
                        }
                        if (iVar5 == local_34)
                            break;
                        ++local_40;
                        bVar3 = local_40 != local_60;
                        iVar5 = iVar14;
                    } while (bVar3 != 0);
                }
                if ((bVar3 & 1) != 0)
                    break;
            }
            iVar5 = field_104092;
            field_104092 = iVar5 + 1;
            puVar11 = (uint32_t*)(*local_58)[(long)iVar5];
            *puVar11 = 0;
        }
        uVar15 = 1;
    switchD_1000b5781_caseD_1bc7:
        return uVar15;
    }

} // namespace jag::oldscape
