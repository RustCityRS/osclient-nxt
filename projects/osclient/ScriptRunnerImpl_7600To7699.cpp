// projects/osclient/ScriptRunnerImpl_7600To7699.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: osclient

#include "ScriptRunnerImpl.h"

namespace jag::oldscape {
    // 0x1000b9b90, 2928 bytes, placed by class name and debug map
    // ScriptRunnerImpl::ExecuteCommand7600To7699(ScriptOp, ClientScript const&, bool)
    undefined8 ScriptRunnerImpl::ExecuteCommand7600To7699(long param_1, undefined4 param_2) {
        int iVar1;
        undefined4 uVar2;
        bool bVar3;
        char cVar4;
        undefined4 uVar5;
        int iVar6;
        int iVar7;
        Client* this;
        basic_string* pbVar8;
        int* piVar9;
        undefined8 uVar10;
        undefined8 uVar11;
        eastl::string* pbVar12;
        undefined4* puVar13;
        LootTrackerSaveHandler* pLVar14;
        long lVar15;
        undefined8 uVar16;
        ulong uVar17;
        array<int, 1000ul>* paVar18;
        SourceItem local_c0;
        vector<int, eastl::allocator> local_90[32];
        int local_70;
        int local_6c;
        SourceItem local_68;
        basic_string* local_38;

        this = (Client*)Client::Instance();
        switch (param_2) {
        case 7600:
            uVar17 = (long)*(int*)(param_1 + 136096) - 1;
            *(int*)(param_1 + 136096) = (int)uVar17;
            local_38 = (basic_string*)std::array<eastl::string, 1000ul>::operator[](
                (array<eastl::string, 1000ul>*)(param_1 + 104096), uVar17);
            lVar15 = (long)*(int*)(param_1 + 104092);
            *(int*)(param_1 + 104092) = (int)(lVar15 - 3U);
            paVar18 = (array<int, 1000ul>*)(param_1 + 100092);
            piVar9 = (int*)std::array<int, 1000ul>::operator[](paVar18, lVar15 - 3U);
            iVar7 = *piVar9;
            piVar9 = (int*)std::array<int, 1000ul>::operator[](paVar18, lVar15 - 2);
            iVar6 = *piVar9;
            piVar9 = (int*)std::array<int, 1000ul>::operator[](paVar18, lVar15 - 1);
            iVar1 = *piVar9;
            pLVar14 = (LootTrackerSaveHandler*)GetLootTrackerSaveHandler();
            pLVar14->AddSource(local_38, iVar7, iVar6, iVar1);
            break;
        case 7601:
            pLVar14 = (LootTrackerSaveHandler*)GetLootTrackerSaveHandler();
            uVar5 = pLVar14->GetNumberOfTrackedSources();
            goto LAB_1000ba1ba;
        case 7602:
            uVar17 = (long)*(int*)(param_1 + 104092) - 1;
            *(int*)(param_1 + 104092) = (int)uVar17;
            std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), uVar17);
            iVar7 = GetLootTrackerSaveHandler();
            local_68.GetSourceNameById(iVar7);
            uVar11 = logger::default_logger();
            uVar10 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            logger::Logger::Log(uVar11, 0, 8,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                                "ScriptRunnerImpl_7600To7699.cpp",
                                37, uVar10);
            iVar7 = *(int*)(param_1 + 136096);
            *(int*)(param_1 + 136096) = iVar7 + 1;
            pbVar12 = (eastl::string*)std::array<eastl::string, 1000ul>::operator[](
                (array<eastl::string, 1000ul>*)(param_1 + 104096), (long)iVar7);
            eastl::string::operator=(pbVar12, (basic_string*)&local_68);
            goto LAB_1000ba475;
        case 7603:
            uVar17 = (long)*(int*)(param_1 + 136096) - 1;
            *(int*)(param_1 + 136096) = (int)uVar17;
            std::array<eastl::string, 1000ul>::operator[]((array<eastl::string, 1000ul>*)(param_1 + 104096), uVar17);
            pbVar8 = (basic_string*)GetLootTrackerSaveHandler();
            uVar5 = loottracker::LootTrackerSaveHandler::GetSourceIdByName(pbVar8);
            goto LAB_1000ba1ba;
        case 7604:
            uVar17 = (long)*(int*)(param_1 + 136096) - 1;
            *(int*)(param_1 + 136096) = (int)uVar17;
            std::array<eastl::string, 1000ul>::operator[]((array<eastl::string, 1000ul>*)(param_1 + 104096), uVar17);
            pbVar8 = (basic_string*)GetLootTrackerSaveHandler();
            uVar5 = loottracker::LootTrackerSaveHandler::GetSourceCount(pbVar8);
            goto LAB_1000ba1ba;
        case 7605:
            lVar15 = (long)*(int*)(param_1 + 104092);
            *(int*)(param_1 + 104092) = (int)(lVar15 - 3U);
            paVar18 = (array<int, 1000ul>*)(param_1 + 100092);
            piVar9 = (int*)std::array<int, 1000ul>::operator[](paVar18, lVar15 - 3U);
            local_70 = *piVar9;
            piVar9 = (int*)std::array<int, 1000ul>::operator[](paVar18, lVar15 - 2);
            iVar6 = local_70;
            iVar7 = *piVar9;
            local_38 = (basic_string*)paVar18;
            piVar9 = (int*)std::array<int, 1000ul>::operator[](paVar18, lVar15 - 1);
            uVar5 = 4294967295;
            if (((-1 < iVar6) && (-1 < iVar7)) &&
                (local_6c = iVar7, cVar4 = loottracker::ParseIntAsLootOrder(*piVar9, (LootOrder*)&local_68),
                 cVar4 != '\0')) {
                pLVar14 = (LootTrackerSaveHandler*)GetLootTrackerSaveHandler();
                uVar5 = pLVar14->GetCountOfSortedResultIds(iVar6, local_6c, local_68._0_4_);
            }
            iVar7 = *(int*)(param_1 + 104092);
            *(int*)(param_1 + 104092) = iVar7 + 1;
            puVar13 = (undefined4*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)local_38, (long)iVar7);
            *puVar13 = uVar5;
            break;
        case 7606:
            paVar18 = (array<int, 1000ul>*)(param_1 + 100092);
            uVar17 = (long)*(int*)(param_1 + 104092) - 1;
            *(int*)(param_1 + 104092) = (int)uVar17;
            piVar9 = (int*)std::array<int, 1000ul>::operator[](paVar18, uVar17);
            iVar7 = *piVar9;
            if ((long)iVar7 < 0) {
                bVar3 = true;
            } else {
                GetLootTrackerSaveHandler();
                local_68.GetOrderedResultIds();
                iVar6 = local_68.size();
                bVar3 = iVar6 <= iVar7;
            }
            if (-1 < iVar7) {
                local_68.~vector();
            }
            if (bVar3) {
                uVar11 = logger::default_logger();
                logger::Logger::Log(uVar11, 0, 2,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/"
                                    "osclient/ScriptRunnerImpl_7600To7699.cpp",
                                    82, "Index was out of bounds of the ID array!");
                iVar7 = *(int*)(param_1 + 104092);
                *(int*)(param_1 + 104092) = iVar7 + 1;
                puVar13 = (undefined4*)std::array<int, 1000ul>::operator[](paVar18, (long)iVar7);
                *puVar13 = 4294967295;
            } else {
                GetLootTrackerSaveHandler();
                local_90->GetOrderedResultIds();
                puVar13 = (undefined4*)eastl::vector<int, eastl::allocator>::operator[](local_90, (long)iVar7);
                uVar5 = *puVar13;
                iVar7 = *(int*)(param_1 + 104092);
                *(int*)(param_1 + 104092) = iVar7 + 1;
                puVar13 = (undefined4*)std::array<int, 1000ul>::operator[](paVar18, (long)iVar7);
                *puVar13 = uVar5;
                eastl::vector<int, eastl::allocator>::~vector(local_90);
            }
            break;
        case 7607:
            GetLootTrackerSaveHandler();
            loottracker::LootTrackerSaveHandler::ClearOrderedResultIds();
            break;
        case 7608:
            uVar17 = (long)*(int*)(param_1 + 136096) - 1;
            *(int*)(param_1 + 136096) = (int)uVar17;
            iVar7 = std::array<eastl::string, 1000ul>::operator[]((array<eastl::string, 1000ul>*)(param_1 + 104096),
                                                                  uVar17);
            uVar17 = (long)*(int*)(param_1 + 104092) - 1;
            *(int*)(param_1 + 104092) = (int)uVar17;
            std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), uVar17);
            pbVar8 = (basic_string*)GetLootTrackerSaveHandler();
            uVar5 = loottracker::LootTrackerSaveHandler::GetNextSourceId(pbVar8, iVar7);
            uVar17 = (ulong) * (int*)(param_1 + 104092);
            *(int*)(param_1 + 104092) = *(int*)(param_1 + 104092) + 1;
            goto LAB_1000ba1d4;
        case 7609:
            uVar17 = (long)*(int*)(param_1 + 136096) - 1;
            *(int*)(param_1 + 136096) = (int)uVar17;
            std::array<eastl::string, 1000ul>::operator[]((array<eastl::string, 1000ul>*)(param_1 + 104096), uVar17);
            pbVar8 = (basic_string*)GetLootTrackerSaveHandler();
            uVar5 = loottracker::LootTrackerSaveHandler::GetLootItemsBySourceName(pbVar8);
            goto LAB_1000ba1ba;
        case 7610:
            uVar17 = (long)*(int*)(param_1 + 104092) - 1;
            *(int*)(param_1 + 104092) = (int)uVar17;
            std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), uVar17);
            iVar7 = GetLootTrackerSaveHandler();
            uVar5 = loottracker::LootTrackerSaveHandler::GetLootItemsBySourceId(iVar7);
            uVar17 = (ulong) * (int*)(param_1 + 104092);
            *(int*)(param_1 + 104092) = *(int*)(param_1 + 104092) + 1;
            goto LAB_1000ba1d4;
        case 7611:
            uVar17 = (long)*(int*)(param_1 + 136096) - 1;
            *(int*)(param_1 + 136096) = (int)uVar17;
            iVar7 = std::array<eastl::string, 1000ul>::operator[]((array<eastl::string, 1000ul>*)(param_1 + 104096),
                                                                  uVar17);
            paVar18 = (array<int, 1000ul>*)(param_1 + 100092);
            uVar17 = (long)*(int*)(param_1 + 104092) - 1;
            *(int*)(param_1 + 104092) = (int)uVar17;
            std::array<int, 1000ul>::operator[](paVar18, uVar17);
            pbVar8 = (basic_string*)GetLootTrackerSaveHandler();
            local_68.GetSourceLootItemByName(pbVar8, iVar7);
            iVar7 = *(int*)(param_1 + 104092);
            *(int*)(param_1 + 104092) = iVar7 + 1;
            puVar13 = (undefined4*)std::array<int, 1000ul>::operator[](paVar18, (long)iVar7);
            *puVar13 = local_68.field_32._4_4_;
            iVar7 = *(int*)(param_1 + 104092);
            *(int*)(param_1 + 104092) = iVar7 + 1;
            puVar13 = (undefined4*)std::array<int, 1000ul>::operator[](paVar18, (long)iVar7);
            *puVar13 = local_68.field_40;
            goto LAB_1000b9fa1;
        case 7612:
            iVar7 = *(int*)(param_1 + 104092);
            uVar17 = (long)iVar7 - 2;
            *(int*)(param_1 + 104092) = (int)uVar17;
            paVar18 = (array<int, 1000ul>*)(param_1 + 100092);
            piVar9 = (int*)std::array<int, 1000ul>::operator[](paVar18, uVar17);
            iVar6 = *piVar9;
            std::array<int, 1000ul>::operator[](paVar18, (long)iVar7 - 1);
            iVar7 = GetLootTrackerSaveHandler();
            local_68.GetSourceLootItemById(iVar7, iVar6);
            iVar7 = *(int*)(param_1 + 104092);
            *(int*)(param_1 + 104092) = iVar7 + 1;
            puVar13 = (undefined4*)std::array<int, 1000ul>::operator[](paVar18, (long)iVar7);
            *puVar13 = local_68.field_32._4_4_;
            iVar7 = *(int*)(param_1 + 104092);
            *(int*)(param_1 + 104092) = iVar7 + 1;
            puVar13 = (undefined4*)std::array<int, 1000ul>::operator[](paVar18, (long)iVar7);
            *puVar13 = local_68.field_40;
        LAB_1000b9fa1:
            local_68.~hash_node();
            break;
        case 7613:
            pLVar14 = (LootTrackerSaveHandler*)GetLootTrackerSaveHandler();
            pLVar14->Clear();
            break;
        case 7614:
            uVar17 = (long)*(int*)(param_1 + 136096) - 1;
            *(int*)(param_1 + 136096) = (int)uVar17;
            uVar11 = std::array<eastl::string, 1000ul>::operator[]((array<eastl::string, 1000ul>*)(param_1 + 104096),
                                                                   uVar17);
            uVar10 = GetLootTrackerSaveHandler();
            loottracker::LootTrackerSaveHandler::PerformStringBindedOperation(uVar10, 2, uVar11);
            uVar10 = GetLootTrackerSaveHandler();
            uVar16 = 0;
            goto LAB_1000ba405;
        case 7615:
            uVar17 = (long)*(int*)(param_1 + 104092) - 1;
            *(int*)(param_1 + 104092) = (int)uVar17;
            puVar13 = (undefined4*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), uVar17);
            uVar5 = *puVar13;
            uVar11 = GetLootTrackerSaveHandler();
            loottracker::LootTrackerSaveHandler::PerformIntBindingOperation(uVar11, 3, uVar5);
            uVar11 = GetLootTrackerSaveHandler();
            loottracker::LootTrackerSaveHandler::PerformIntBindingOperation(uVar11, 1, uVar5);
            return 1;
        case 7616:
            uVar17 = (long)*(int*)(param_1 + 136096) - 1;
            *(int*)(param_1 + 136096) = (int)uVar17;
            uVar11 = std::array<eastl::string, 1000ul>::operator[]((array<eastl::string, 1000ul>*)(param_1 + 104096),
                                                                   uVar17);
            uVar10 = GetLootTrackerSaveHandler();
            uVar16 = 6;
            goto LAB_1000ba405;
        case 7617:
            uVar17 = (long)*(int*)(param_1 + 136096) - 1;
            *(int*)(param_1 + 136096) = (int)uVar17;
            uVar11 = std::array<eastl::string, 1000ul>::operator[]((array<eastl::string, 1000ul>*)(param_1 + 104096),
                                                                   uVar17);
            uVar10 = GetLootTrackerSaveHandler();
            uVar16 = 7;
            goto LAB_1000ba405;
        case 7618:
            uVar17 = (long)*(int*)(param_1 + 104092) - 1;
            *(int*)(param_1 + 104092) = (int)uVar17;
            puVar13 = (undefined4*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), uVar17);
            uVar5 = *puVar13;
            pLVar14 = (LootTrackerSaveHandler*)GetLootTrackerSaveHandler();
            pLVar14->RemoveIgnoreItemByIndex(uVar5, 1);
            return 1;
        case 7619:
            pLVar14 = (LootTrackerSaveHandler*)GetLootTrackerSaveHandler();
            uVar5 = pLVar14->GetNumberOfIgnoredItems(1);
            iVar7 = *(int*)(param_1 + 104092);
            *(int*)(param_1 + 104092) = iVar7 + 1;
            puVar13 =
                (undefined4*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), (long)iVar7);
            *puVar13 = uVar5;
            return 1;
        case 7620:
            uVar17 = (long)*(int*)(param_1 + 104092) - 1;
            *(int*)(param_1 + 104092) = (int)uVar17;
            puVar13 = (undefined4*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), uVar17);
            uVar5 = *puVar13;
            uVar11 = GetLootTrackerSaveHandler();
            loottracker::LootTrackerSaveHandler::GetIgnoredItem(&local_68, uVar11, uVar5, 1);
            iVar7 = *(int*)(param_1 + 136096);
            *(int*)(param_1 + 136096) = iVar7 + 1;
            pbVar12 = (eastl::string*)std::array<eastl::string, 1000ul>::operator[](
                (array<eastl::string, 1000ul>*)(param_1 + 104096), (long)iVar7);
            eastl::string::operator=(pbVar12, (basic_string*)&local_68);
            local_68.~basic_string();
            return 1;
        case 7621:
            pLVar14 = (LootTrackerSaveHandler*)GetLootTrackerSaveHandler();
            pLVar14->ClearIgnoredItems(1);
            return 1;
        case 7622:
            uVar17 = (long)*(int*)(param_1 + 136096) - 1;
            *(int*)(param_1 + 136096) = (int)uVar17;
            uVar11 = std::array<eastl::string, 1000ul>::operator[]((array<eastl::string, 1000ul>*)(param_1 + 104096),
                                                                   uVar17);
            uVar10 = GetLootTrackerSaveHandler();
            uVar16 = 4;
            goto LAB_1000ba405;
        case 7623:
            uVar17 = (long)*(int*)(param_1 + 136096) - 1;
            *(int*)(param_1 + 136096) = (int)uVar17;
            uVar11 = std::array<eastl::string, 1000ul>::operator[]((array<eastl::string, 1000ul>*)(param_1 + 104096),
                                                                   uVar17);
            uVar10 = GetLootTrackerSaveHandler();
            uVar16 = 5;
        LAB_1000ba405:
            loottracker::LootTrackerSaveHandler::PerformStringBindedOperation(uVar10, uVar16, uVar11);
            break;
        case 7624:
            uVar17 = (long)*(int*)(param_1 + 104092) - 1;
            *(int*)(param_1 + 104092) = (int)uVar17;
            puVar13 = (undefined4*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), uVar17);
            uVar5 = *puVar13;
            pLVar14 = (LootTrackerSaveHandler*)GetLootTrackerSaveHandler();
            pLVar14->RemoveIgnoreItemByIndex(uVar5, 0);
            break;
        case 7625:
            pLVar14 = (LootTrackerSaveHandler*)GetLootTrackerSaveHandler();
            uVar5 = pLVar14->GetNumberOfIgnoredItems(0);
        LAB_1000ba1ba:
            uVar17 = (ulong) * (int*)(param_1 + 104092);
            *(int*)(param_1 + 104092) = *(int*)(param_1 + 104092) + 1;
        LAB_1000ba1d4:
            puVar13 = (undefined4*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), uVar17);
            *puVar13 = uVar5;
            break;
        case 7626:
            uVar17 = (long)*(int*)(param_1 + 104092) - 1;
            *(int*)(param_1 + 104092) = (int)uVar17;
            puVar13 = (undefined4*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), uVar17);
            uVar5 = *puVar13;
            uVar11 = GetLootTrackerSaveHandler();
            loottracker::LootTrackerSaveHandler::GetIgnoredItem(&local_68, uVar11, uVar5, 0);
            iVar7 = *(int*)(param_1 + 136096);
            *(int*)(param_1 + 136096) = iVar7 + 1;
            pbVar12 = (eastl::string*)std::array<eastl::string, 1000ul>::operator[](
                (array<eastl::string, 1000ul>*)(param_1 + 104096), (long)iVar7);
            eastl::string::operator=(pbVar12, (basic_string*)&local_68);
        LAB_1000ba475:
            local_68.~basic_string();
            break;
        case 7627:
            pLVar14 = (LootTrackerSaveHandler*)GetLootTrackerSaveHandler();
            pLVar14->ClearIgnoredItems(0);
            break;
        case 7628:
            uVar17 = (long)*(int*)(param_1 + 136096) - 1;
            *(int*)(param_1 + 136096) = (int)uVar17;
            local_38 = (basic_string*)std::array<eastl::string, 1000ul>::operator[](
                (array<eastl::string, 1000ul>*)(param_1 + 104096), uVar17);
            lVar15 = (long)*(int*)(param_1 + 104092);
            *(int*)(param_1 + 104092) = (int)(lVar15 - 3U);
            paVar18 = (array<int, 1000ul>*)(param_1 + 100092);
            puVar13 = (undefined4*)std::array<int, 1000ul>::operator[](paVar18, lVar15 - 3U);
            uVar5 = *puVar13;
            puVar13 = (undefined4*)std::array<int, 1000ul>::operator[](paVar18, lVar15 - 2);
            uVar2 = *puVar13;
            std::array<int, 1000ul>::operator[](paVar18, lVar15 - 1);
            iVar7 = GetLootTrackerSaveHandler();
            iVar7 = loottracker::LootTrackerSaveHandler::GetSourceIdByIdentifier(iVar7);
            new (&local_68) loottracker::SourceItem();
            eastl::string::operator=((eastl::string*)&local_68, local_38);
            local_68.field_32._0_4_ = iVar7;
            local_68.field_32._4_4_ = uVar5;
            local_68.field_40 = uVar2;
            pLVar14 = (LootTrackerSaveHandler*)GetLootTrackerSaveHandler();
            new (&local_c0) loottracker::SourceItem(&local_68);
            pLVar14->UpsertLoot(&local_c0);
            local_c0.~hash_node();
            local_68.~hash_node();
            break;
        default:
            return 2;
        }
        return 1;
    }

} // namespace jag::oldscape
