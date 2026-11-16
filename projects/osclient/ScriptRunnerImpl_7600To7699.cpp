// projects/osclient/ScriptRunnerImpl_7600To7699.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: osclient

#include "ScriptRunnerImpl.h"

namespace jag::oldscape {
    // 0x1000b9b90
    uint64_t ScriptRunnerImpl::ExecuteCommand7600To7699(ScriptOp scriptOp, const ClientScript& clientScript,
                                                        bool arg3) {
        int arg4;
        uint32_t uVar1;
        bool bVar2;
        bool cVar3;
        uint32_t uVar4;
        int iVar5;
        int iVar6;
        char* str2;
        eastl::string* pbVar7;
        eastl::string* pbVar8;
        uint32_t* puVar9;
        int* piVar10;
        LootTrackerSaveHandler* pLVar11;
        Logger* pLVar12;
        long lVar13;
        SqlStatementTypes sqlStatementTypes;
        unsigned long uVar14;
        uint8_t* puVar15;
        SourceItem local_c0;
        vector<int> local_90;
        int local_70;
        int local_6c;
        SourceItem local_68;
        eastl::string* local_38;

        auto this_00 = Client::Instance();
        switch (scriptOp) {
        case 7600:
            uVar14 = (long)field_136096 - 1;
            field_136096 = (int)uVar14;
            local_38 = &field_104096[uVar14];
            lVar13 = (long)field_104092;
            field_104092 = (int)(lVar13 - 3U);
            puVar15 = &field_100092;
            piVar10 = (int*)(*puVar15)[lVar13 - 3U];
            iVar6 = *piVar10;
            piVar10 = (int*)(*puVar15)[lVar13 - 2];
            iVar5 = *piVar10;
            piVar10 = (int*)(*puVar15)[lVar13 - 1];
            arg4 = *piVar10;
            pLVar11 = this_00->GetLootTrackerSaveHandler();
            pLVar11->AddSource(*local_38, iVar6, iVar5, arg4);
            break;
        case 7601:
            pLVar11 = this_00->GetLootTrackerSaveHandler();
            uVar4 = pLVar11->GetNumberOfTrackedSources();
            goto LAB_1000ba1ba;
        case 7602:
            uVar14 = (long)field_104092 - 1;
            field_104092 = (int)uVar14;
            piVar10 = &field_100092[uVar14];
            iVar6 = *piVar10;
            pLVar11 = this_00->GetLootTrackerSaveHandler();
            local_68 = pLVar11->GetSourceNameById(iVar6);
            pLVar12 = logger::default_logger();
            str2 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            pLVar12->Log(false, 8,
                         "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                         "ScriptRunnerImpl_7600To7699.cpp",
                         37, str2);
            iVar6 = field_136096;
            field_136096 = iVar6 + 1;
            pbVar8 = &field_104096[(long)iVar6];
            *pbVar8 = &local_68;
            goto LAB_1000ba475;
        case 7603:
            uVar14 = (long)field_136096 - 1;
            field_136096 = (int)uVar14;
            pbVar7 = &field_104096[uVar14];
            pLVar11 = this_00->GetLootTrackerSaveHandler();
            uVar4 = pLVar11->GetSourceIdByName(*pbVar7);
            goto LAB_1000ba1ba;
        case 7604:
            uVar14 = (long)field_136096 - 1;
            field_136096 = (int)uVar14;
            pbVar7 = &field_104096[uVar14];
            pLVar11 = this_00->GetLootTrackerSaveHandler();
            uVar4 = pLVar11->GetSourceCount(*pbVar7);
            goto LAB_1000ba1ba;
        case 7605:
            lVar13 = (long)field_104092;
            field_104092 = (int)(lVar13 - 3U);
            puVar15 = &field_100092;
            piVar10 = (int*)(*puVar15)[lVar13 - 3U];
            local_70 = *piVar10;
            piVar10 = (int*)(*puVar15)[lVar13 - 2];
            iVar5 = local_70;
            iVar6 = *piVar10;
            local_38 = (eastl::string*)puVar15;
            piVar10 = (int*)(*puVar15)[lVar13 - 1];
            uVar4 = 4294967295;
            if (((-1 < iVar5) && (-1 < iVar6)) &&
                (local_6c = iVar6, cVar3 = loottracker::ParseIntAsLootOrder(*piVar10, local_68), cVar3)) {
                pLVar11 = this_00->GetLootTrackerSaveHandler();
                uVar4 = pLVar11->GetCountOfSortedResultIds(iVar5, local_6c, local_68._0_4_);
            }
            iVar6 = field_104092;
            field_104092 = iVar6 + 1;
            puVar9 = (uint32_t*)(*local_38)[(long)iVar6];
            *puVar9 = uVar4;
            break;
        case 7606:
            puVar15 = &field_100092;
            uVar14 = (long)field_104092 - 1;
            field_104092 = (int)uVar14;
            piVar10 = (int*)(*puVar15)[uVar14];
            iVar6 = *piVar10;
            if ((long)iVar6 < 0) {
                bVar2 = true;
            } else {
                this_00->GetLootTrackerSaveHandler();
                local_68.GetOrderedResultIds();
                iVar5 = local_68.size();
                bVar2 = iVar5 <= iVar6;
            }
            if (-1 < iVar6) {
            }
            if (bVar2) {
                pLVar12 = logger::default_logger();
                pLVar12->Log(false, 2,
                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                             "ScriptRunnerImpl_7600To7699.cpp",
                             82, "Index was out of bounds of the ID array!");
                iVar6 = field_104092;
                field_104092 = iVar6 + 1;
                puVar9 = (uint32_t*)(*puVar15)[(long)iVar6];
                *puVar9 = 4294967295;
            } else {
                this_00->GetLootTrackerSaveHandler();
                local_90.GetOrderedResultIds();
                puVar9 = &local_90[(long)iVar6];
                uVar4 = *puVar9;
                iVar6 = field_104092;
                field_104092 = iVar6 + 1;
                puVar9 = (uint32_t*)(*puVar15)[(long)iVar6];
                *puVar9 = uVar4;
            }
            break;
        case 7607:
            pLVar11 = this_00->GetLootTrackerSaveHandler();
            pLVar11->ClearOrderedResultIds();
            break;
        case 7608:
            uVar14 = (long)field_136096 - 1;
            field_136096 = (int)uVar14;
            pbVar7 = &field_104096[uVar14];
            uVar14 = (long)field_104092 - 1;
            field_104092 = (int)uVar14;
            piVar10 = &field_100092[uVar14];
            iVar6 = *piVar10;
            pLVar11 = this_00->GetLootTrackerSaveHandler();
            uVar4 = pLVar11->GetNextSourceId(*pbVar7, iVar6);
            uVar14 = (unsigned long)field_104092;
            field_104092 = field_104092 + 1;
            goto LAB_1000ba1d4;
        case 7609:
            uVar14 = (long)field_136096 - 1;
            field_136096 = (int)uVar14;
            pbVar7 = &field_104096[uVar14];
            pLVar11 = this_00->GetLootTrackerSaveHandler();
            uVar4 = pLVar11->GetLootItemsBySourceName(*pbVar7);
            goto LAB_1000ba1ba;
        case 7610:
            uVar14 = (long)field_104092 - 1;
            field_104092 = (int)uVar14;
            piVar10 = &field_100092[uVar14];
            iVar6 = *piVar10;
            pLVar11 = this_00->GetLootTrackerSaveHandler();
            uVar4 = pLVar11->GetLootItemsBySourceId(iVar6);
            uVar14 = (unsigned long)field_104092;
            field_104092 = field_104092 + 1;
            goto LAB_1000ba1d4;
        case 7611:
            uVar14 = (long)field_136096 - 1;
            field_136096 = (int)uVar14;
            iVar6 = field_104096[uVar14];
            puVar15 = &field_100092;
            uVar14 = (long)field_104092 - 1;
            field_104092 = (int)uVar14;
            (*puVar15)[uVar14];
            pLVar11 = this_00->GetLootTrackerSaveHandler();
            local_68.GetSourceLootItemByName(pLVar11, iVar6);
            iVar6 = field_104092;
            field_104092 = iVar6 + 1;
            puVar9 = (uint32_t*)(*puVar15)[(long)iVar6];
            *puVar9 = local_68.field_32._4_4_;
            iVar6 = field_104092;
            field_104092 = iVar6 + 1;
            puVar9 = (uint32_t*)(*puVar15)[(long)iVar6];
            *puVar9 = local_68.field_40;
            goto LAB_1000b9fa1;
        case 7612:
            iVar6 = field_104092;
            uVar14 = (long)iVar6 - 2;
            field_104092 = (int)uVar14;
            puVar15 = &field_100092;
            piVar10 = (int*)(*puVar15)[uVar14];
            iVar5 = *piVar10;
            (*puVar15)[(long)iVar6 - 1];
            pLVar11 = this_00->GetLootTrackerSaveHandler();
            local_68.GetSourceLootItemById((int)pLVar11, iVar5);
            iVar6 = field_104092;
            field_104092 = iVar6 + 1;
            puVar9 = (uint32_t*)(*puVar15)[(long)iVar6];
            *puVar9 = local_68.field_32._4_4_;
            iVar6 = field_104092;
            field_104092 = iVar6 + 1;
            puVar9 = (uint32_t*)(*puVar15)[(long)iVar6];
            *puVar9 = local_68.field_40;
        LAB_1000b9fa1:
            break;
        case 7613:
            pLVar11 = this_00->GetLootTrackerSaveHandler();
            pLVar11->Clear();
            break;
        case 7614:
            uVar14 = (long)field_136096 - 1;
            field_136096 = (int)uVar14;
            pbVar7 = &field_104096[uVar14];
            pLVar11 = this_00->GetLootTrackerSaveHandler();
            pLVar11->PerformStringBindedOperation(2, *pbVar7);
            pLVar11 = this_00->GetLootTrackerSaveHandler();
            sqlStatementTypes = 0;
            goto LAB_1000ba405;
        case 7615:
            uVar14 = (long)field_104092 - 1;
            field_104092 = (int)uVar14;
            piVar10 = &field_100092[uVar14];
            iVar6 = *piVar10;
            pLVar11 = this_00->GetLootTrackerSaveHandler();
            pLVar11->PerformIntBindingOperation(3, iVar6);
            pLVar11 = this_00->GetLootTrackerSaveHandler();
            pLVar11->PerformIntBindingOperation(1, iVar6);
            return 1;
        case 7616:
            uVar14 = (long)field_136096 - 1;
            field_136096 = (int)uVar14;
            pbVar7 = &field_104096[uVar14];
            pLVar11 = this_00->GetLootTrackerSaveHandler();
            sqlStatementTypes = 6;
            goto LAB_1000ba405;
        case 7617:
            uVar14 = (long)field_136096 - 1;
            field_136096 = (int)uVar14;
            pbVar7 = &field_104096[uVar14];
            pLVar11 = this_00->GetLootTrackerSaveHandler();
            sqlStatementTypes = 7;
            goto LAB_1000ba405;
        case 7618:
            uVar14 = (long)field_104092 - 1;
            field_104092 = (int)uVar14;
            piVar10 = &field_100092[uVar14];
            iVar6 = *piVar10;
            pLVar11 = this_00->GetLootTrackerSaveHandler();
            pLVar11->RemoveIgnoreItemByIndex(iVar6, 1);
            return 1;
        case 7619:
            pLVar11 = this_00->GetLootTrackerSaveHandler();
            uVar4 = pLVar11->GetNumberOfIgnoredItems(1);
            iVar6 = field_104092;
            field_104092 = iVar6 + 1;
            puVar9 = &field_100092[(long)iVar6];
            *puVar9 = uVar4;
            return 1;
        case 7620:
            uVar14 = (long)field_104092 - 1;
            field_104092 = (int)uVar14;
            piVar10 = &field_100092[uVar14];
            iVar6 = *piVar10;
            pLVar11 = this_00->GetLootTrackerSaveHandler();
            local_68 = pLVar11->GetIgnoredItem(iVar6, 1);
            iVar6 = field_136096;
            field_136096 = iVar6 + 1;
            pbVar8 = &field_104096[(long)iVar6];
            *pbVar8 = &local_68;
            return 1;
        case 7621:
            pLVar11 = this_00->GetLootTrackerSaveHandler();
            pLVar11->ClearIgnoredItems(1);
            return 1;
        case 7622:
            uVar14 = (long)field_136096 - 1;
            field_136096 = (int)uVar14;
            pbVar7 = &field_104096[uVar14];
            pLVar11 = this_00->GetLootTrackerSaveHandler();
            sqlStatementTypes = 4;
            goto LAB_1000ba405;
        case 7623:
            uVar14 = (long)field_136096 - 1;
            field_136096 = (int)uVar14;
            pbVar7 = &field_104096[uVar14];
            pLVar11 = this_00->GetLootTrackerSaveHandler();
            sqlStatementTypes = 5;
        LAB_1000ba405:
            pLVar11->PerformStringBindedOperation(sqlStatementTypes, *pbVar7);
            break;
        case 7624:
            uVar14 = (long)field_104092 - 1;
            field_104092 = (int)uVar14;
            piVar10 = &field_100092[uVar14];
            iVar6 = *piVar10;
            pLVar11 = this_00->GetLootTrackerSaveHandler();
            pLVar11->RemoveIgnoreItemByIndex(iVar6, 0);
            break;
        case 7625:
            pLVar11 = this_00->GetLootTrackerSaveHandler();
            uVar4 = pLVar11->GetNumberOfIgnoredItems(0);
        LAB_1000ba1ba:
            uVar14 = (unsigned long)field_104092;
            field_104092 = field_104092 + 1;
        LAB_1000ba1d4:
            puVar9 = &field_100092[uVar14];
            *puVar9 = uVar4;
            break;
        case 7626:
            uVar14 = (long)field_104092 - 1;
            field_104092 = (int)uVar14;
            piVar10 = &field_100092[uVar14];
            iVar6 = *piVar10;
            pLVar11 = this_00->GetLootTrackerSaveHandler();
            local_68 = pLVar11->GetIgnoredItem(iVar6, 0);
            iVar6 = field_136096;
            field_136096 = iVar6 + 1;
            pbVar8 = &field_104096[(long)iVar6];
            *pbVar8 = &local_68;
        LAB_1000ba475:
            break;
        case 7627:
            pLVar11 = this_00->GetLootTrackerSaveHandler();
            pLVar11->ClearIgnoredItems(0);
            break;
        case 7628:
            uVar14 = (long)field_136096 - 1;
            field_136096 = (int)uVar14;
            local_38 = &field_104096[uVar14];
            lVar13 = (long)field_104092;
            field_104092 = (int)(lVar13 - 3U);
            puVar15 = &field_100092;
            puVar9 = (uint32_t*)(*puVar15)[lVar13 - 3U];
            uVar4 = *puVar9;
            puVar9 = (uint32_t*)(*puVar15)[lVar13 - 2];
            uVar1 = *puVar9;
            piVar10 = (int*)(*puVar15)[lVar13 - 1];
            iVar6 = *piVar10;
            pLVar11 = this_00->GetLootTrackerSaveHandler();
            iVar6 = pLVar11->GetSourceIdByIdentifier(iVar6);
            local_68 = loottracker::SourceItem();
            local_68 = local_38;
            local_68.field_32._0_4_ = iVar6;
            local_68.field_32._4_4_ = uVar4;
            local_68.field_40 = uVar1;
            pLVar11 = this_00->GetLootTrackerSaveHandler();
            local_c0 = loottracker::SourceItem(local_68);
            pLVar11->UpsertLoot(&local_c0);
            break;
        default:
            return 2;
        }
        return 1;
    }

} // namespace jag::oldscape
