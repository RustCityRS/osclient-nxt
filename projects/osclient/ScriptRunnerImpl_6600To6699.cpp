// projects/osclient/ScriptRunnerImpl_6600To6699.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: osclient

#include "ScriptRunnerImpl.h"

namespace jag::oldscape {
    // 0x10016a010
    uint64_t ScriptRunnerImpl::ExecuteCommand6600To6699(ScriptOp scriptOp, const ClientScript& clientScript,
                                                        bool arg3) {
        uint8_t* this_00;
        unsigned int uVar1;
        bool bVar2;
        uint8_t bVar3;
        bool cVar4;
        int iVar5;
        int iVar6;
        int iVar7;
        uint32_t uVar8;
        unsigned int uVar9;
        long lVar10;
        fixed_hashtable_allocator<10ul, 1208ul, 8ul, 8ul, 0ul, true>* this_02;
        CoordGrid* pCVar11;
        Worldmap* pWVar12;
        long* plVar13;
        uint32_t* puVar14;
        eastl::string* pbVar15;
        int* piVar16;
        MapElementType* pMVar17;
        unsigned int* puVar18;
        ChangeLocationRequest* pCVar19;
        NXTPixScreen* pNVar20;
        WorldmapAreaMetadata* pWVar21;
        array<int, 2ul>* paVar22;
        unsigned long uVar23;
        CoordGrid local_78;
        WorldmapAreaMetadata* local_68;
        CoordGrid local_60;
        CoordGrid local_50;

        uint64_t uVar24 = 2;
        auto this_01 = Client::Instance();
        switch (scriptOp) {
        case 6600:
            iVar6 = this_01->field_51984;
            lVar10 = this_01->field_52016.operator->();
            iVar7 = *(int*)(lVar10 + 24);
            uVar9 = this_01->field_53220;
            lVar10 = this_01->field_52016.operator->();
            iVar5 = *(int*)(lVar10 + 28);
            uVar1 = this_01->field_53224;
            pWVar12 = this_01->GetWorldmap();
            pWVar12->UpdateMaparea(iVar6, (iVar7 >> 7) + uVar9, (iVar5 >> 7) + uVar1, true);
            return 1;
        case 6601:
            uVar23 = (long)field_104092 - 1;
            field_104092 = (int)uVar23;
            field_100092[uVar23];
            local_50 = eastl::string("");
            pWVar12 = this_01->GetWorldmap();
            local_60.GetMapareaById((int)pWVar12);
            bVar2 = local_60 != nullptr;
            if (bVar2) {
                this_02 = (fixed_hashtable_allocator<10ul, 1208ul, 8ul, 8ul, 0ul, true>*)local_60.operator->();
                local_50 = (eastl::string*)this_02->get_overflow_allocator();
            }
            iVar6 = field_136096;
            field_136096 = iVar6 + 1;
            pbVar15 = &field_104096[(long)iVar6];
            *pbVar15 = &local_50;
            break;
        case 6602:
            uVar23 = (long)field_104092 - 1;
            field_104092 = (int)uVar23;
            piVar16 = &field_100092[uVar23];
            iVar6 = *piVar16;
            pWVar12 = this_01->GetWorldmap();
            pWVar12->SwitchToMap(iVar6);
            break;
        case 6603:
            pWVar12 = this_01->GetWorldmap();
            uVar9 = pWVar12->GetZoomPercent();
            goto LAB_10016af9a;
        case 6604:
            uVar23 = (long)field_104092 - 1;
            field_104092 = (int)uVar23;
            piVar16 = &field_100092[uVar23];
            iVar6 = *piVar16;
            pWVar12 = this_01->GetWorldmap();
            pWVar12->SetZoomPercent(iVar6);
            break;
        case 6605:
            pWVar12 = this_01->GetWorldmap();
            bVar3 = pWVar12->IsLoaded();
            uVar9 = (unsigned int)bVar3;
            goto LAB_10016af9a;
        case 6606:
            uVar23 = (long)field_104092 - 1;
            field_104092 = (int)uVar23;
            piVar16 = &field_100092[uVar23];
            local_50 = rs2lib::CoordGrid(*piVar16);
            pWVar12 = this_01->GetWorldmap();
            iVar6 = local_50.GetZ();
            iVar7 = local_50.GetPos();
            pWVar12->JumpToTargetTile(iVar6, iVar7);
            break;
        case 6607:
            uVar23 = (long)field_104092 - 1;
            field_104092 = (int)uVar23;
            piVar16 = &field_100092[uVar23];
            local_50 = rs2lib::CoordGrid(*piVar16);
            pWVar12 = this_01->GetWorldmap();
            iVar6 = local_50.GetZ();
            iVar7 = local_50.GetPos();
            pWVar12->JumpToTargetTileInstant(iVar6, iVar7);
            break;
        case 6608:
            uVar23 = (long)field_104092 - 1;
            field_104092 = (int)uVar23;
            piVar16 = &field_100092[uVar23];
            local_50 = rs2lib::CoordGrid(*piVar16);
            pWVar12 = this_01->GetWorldmap();
            iVar6 = local_50.GetX();
            iVar7 = local_50.GetZ();
            iVar5 = local_50.GetPos();
            pWVar12->JumpToSourceTile(iVar6, iVar7, iVar5);
            break;
        case 6609:
            uVar23 = (long)field_104092 - 1;
            field_104092 = (int)uVar23;
            piVar16 = &field_100092[uVar23];
            local_50 = rs2lib::CoordGrid(*piVar16);
            pWVar12 = this_01->GetWorldmap();
            iVar6 = local_50.GetX();
            iVar7 = local_50.GetZ();
            iVar5 = local_50.GetPos();
            pWVar12->JumpToSourceTileInstant(iVar6, iVar7, iVar5);
            break;
        case 6610:
            pWVar12 = this_01->GetWorldmap();
            uVar8 = pWVar12->GetAbsoluteTileX();
            iVar6 = field_104092;
            field_104092 = iVar6 + 1;
            puVar14 = &field_100092[(long)iVar6];
            *puVar14 = uVar8;
            pWVar12 = this_01->GetWorldmap();
            uVar9 = pWVar12->GetAbsoluteTileZ();
            goto LAB_10016af6b;
        case 6611:
            uVar23 = (long)field_104092 - 1;
            field_104092 = (int)uVar23;
            field_100092[uVar23];
            pWVar12 = this_01->GetWorldmap();
            local_50.GetMapareaById((int)pWVar12);
            uVar9 = 0;
            bVar2 = local_50 == nullptr;
            if (!bVar2) {
                pWVar21 = (WorldmapAreaMetadata*)local_50.operator->();
                pCVar11 = (CoordGrid*)pWVar21->GetOrigin();
                uVar9 = pCVar11->ToBitPacked();
            }
            goto LAB_10016b0b7;
        case 6612:
            uVar23 = (long)field_104092 - 1;
            field_104092 = (int)uVar23;
            field_100092[uVar23];
            pWVar12 = this_01->GetWorldmap();
            local_50.GetMapareaById((int)pWVar12);
            bVar2 = local_50 == nullptr;
            if (bVar2) {
            LAB_10016a49a:
                uVar9 = 0;
                iVar6 = field_104092;
                field_104092 = iVar6 + 1;
                puVar14 = &field_100092[(long)iVar6];
                *puVar14 = 0;
            } else {
                pNVar20 = (NXTPixScreen*)local_50.operator->();
                iVar7 = pNVar20->GetUIHeight();
                pWVar21 = (WorldmapAreaMetadata*)local_50.operator->();
                iVar5 = pWVar21->GetMinMapX();
                iVar6 = field_104092;
                field_104092 = iVar6 + 1;
                piVar16 = &field_100092[(long)iVar6];
                *piVar16 = (iVar7 - iVar5) * 64 + 64;
                pWVar21 = (WorldmapAreaMetadata*)local_50.operator->();
                iVar6 = pWVar21->GetMaxMapZ();
                pCVar19 = (ChangeLocationRequest*)local_50.operator->();
                iVar7 = pCVar19->GetSeqDelay();
                uVar9 = (iVar6 - iVar7) * 64 + 64;
            }
            goto LAB_10016b0b7;
        case 6613:
            this_00 = &field_100092;
            uVar23 = (long)field_104092 - 1;
            field_104092 = (int)uVar23;
            (*this_00)[uVar23];
            pWVar12 = this_01->GetWorldmap();
            local_50.GetMapareaById((int)pWVar12);
            bVar2 = local_50 == nullptr;
            if (bVar2) {
                iVar6 = field_104092;
                field_104092 = iVar6 + 1;
                puVar14 = (uint32_t*)(*this_00)[(long)iVar6];
                *puVar14 = 0;
                iVar6 = field_104092;
                field_104092 = iVar6 + 1;
                puVar14 = (uint32_t*)(*this_00)[(long)iVar6];
                *puVar14 = 0;
                goto LAB_10016a49a;
            }
            pWVar21 = (WorldmapAreaMetadata*)local_50.operator->();
            iVar7 = pWVar21->GetMinMapX();
            iVar6 = field_104092;
            field_104092 = iVar6 + 1;
            piVar16 = (int*)(*this_00)[(long)iVar6];
            *piVar16 = iVar7 << 6;
            pCVar19 = (ChangeLocationRequest*)local_50.operator->();
            iVar7 = pCVar19->GetSeqDelay();
            iVar6 = field_104092;
            field_104092 = iVar6 + 1;
            piVar16 = (int*)(*this_00)[(long)iVar6];
            *piVar16 = iVar7 << 6;
            pNVar20 = (NXTPixScreen*)local_50.operator->();
            iVar7 = pNVar20->GetUIHeight();
            iVar6 = field_104092;
            field_104092 = iVar6 + 1;
            puVar18 = (unsigned int*)(*this_00)[(long)iVar6];
            *puVar18 = iVar7 << 6 | 63;
            pWVar21 = (WorldmapAreaMetadata*)local_50.operator->();
            iVar6 = pWVar21->GetMaxMapZ();
            uVar9 = iVar6 << 6 | 63;
        LAB_10016b0b7:
            iVar6 = field_104092;
            field_104092 = iVar6 + 1;
        LAB_10016b0cb:
            puVar18 = &field_100092[(long)iVar6];
            *puVar18 = uVar9;
        LAB_10016b0d2:
            break;
        case 6614:
            uVar23 = (long)field_104092 - 1;
            field_104092 = (int)uVar23;
            field_100092[uVar23];
            pWVar12 = this_01->GetWorldmap();
            local_50.GetMapareaById((int)pWVar12);
            bVar2 = local_50 == nullptr;
            uVar8 = 4294967295;
            if (!bVar2) {
                uVar8 = ((HeadbarType*)local_50.operator->())->GetStickTime();
            }
            goto LAB_10016ad31;
        case 6615:
            this_01->GetWorldmap();
            local_50.GetSourcePosition();
            cVar4 = local_50 == (*((CoordGrid*)&rs2lib::CoordGrid::CoordGridNull));
            if (!cVar4) {
                uVar8 = local_50.GetZ();
                iVar6 = field_104092;
                field_104092 = iVar6 + 1;
                puVar14 = &field_100092[(long)iVar6];
                *puVar14 = uVar8;
                uVar8 = local_50.GetPos();
            } else {
                iVar6 = field_104092;
                field_104092 = iVar6 + 1;
                puVar14 = &field_100092[(long)iVar6];
                *puVar14 = 4294967295;
                uVar8 = 4294967295;
            }
            iVar6 = field_104092;
            field_104092 = iVar6 + 1;
            puVar14 = &field_100092[(long)iVar6];
            *puVar14 = uVar8;
            break;
        case 6616:
            pWVar12 = this_01->GetWorldmap();
            uVar9 = pWVar12->GetCurrentMapareaId();
            goto LAB_10016af9a;
        case 6617:
            uVar23 = (long)field_104092 - 1;
            field_104092 = (int)uVar23;
            piVar16 = &field_100092[uVar23];
            local_60 = rs2lib::CoordGrid(*piVar16);
            pWVar12 = this_01->GetWorldmap();
            local_50 = pWVar12->GetCurrentMaparea();
            bVar2 = local_50 == nullptr;
            if (bVar2) {
            LAB_10016ae21:
                iVar6 = field_104092;
                field_104092 = iVar6 + 1;
                puVar14 = &field_100092[(long)iVar6];
                *puVar14 = 4294967295;
                iVar6 = field_104092;
                field_104092 = iVar6 + 1;
                puVar14 = &field_100092[(long)iVar6];
                *puVar14 = 4294967295;
            } else {
                local_68 = (WorldmapAreaMetadata*)&field_100092;
                pWVar21 = (WorldmapAreaMetadata*)local_50.operator->();
                iVar6 = local_60.GetX();
                iVar7 = local_60.GetZ();
                iVar5 = local_60.GetPos();
                local_78 = pWVar21->SourceToTargetTile(iVar6, iVar7, iVar5);
                bVar2 = &local_78 == pWVar21;
                pWVar21 = local_68;
                if (bVar2) {
                    iVar6 = field_104092;
                    field_104092 = iVar6 + 1;
                    puVar14 = (uint32_t*)(*local_68)[(long)iVar6];
                    *puVar14 = 4294967295;
                    uVar8 = 4294967295;
                } else {
                    paVar22 = (array<int, 2ul>*)*local_78;
                    puVar14 = (uint32_t*)(*paVar22)[0];
                    uVar8 = *puVar14;
                    iVar6 = field_104092;
                    field_104092 = iVar6 + 1;
                    puVar14 = (uint32_t*)(*pWVar21)[(long)iVar6];
                    *puVar14 = uVar8;
                    paVar22 = (array<int, 2ul>*)*local_78;
                    puVar14 = (uint32_t*)(*paVar22)[1];
                    uVar8 = *puVar14;
                }
                iVar6 = field_104092;
                field_104092 = iVar6 + 1;
                puVar14 = (uint32_t*)(*pWVar21)[(long)iVar6];
                *puVar14 = uVar8;
            }
            goto LAB_10016b0d2;
        case 6618:
            uVar23 = (long)field_104092 - 1;
            field_104092 = (int)uVar23;
            piVar16 = &field_100092[uVar23];
            local_60 = rs2lib::CoordGrid(*piVar16);
            pWVar12 = this_01->GetWorldmap();
            local_50 = pWVar12->GetCurrentMaparea();
            bVar2 = local_50 == nullptr;
            if (bVar2)
                goto LAB_10016ae21;
            iVar6 = local_50.operator->();
            iVar7 = local_60.GetZ();
            local_60.GetPos();
            local_78.TargetToSourceTile(iVar6, iVar7);
            cVar4 = local_78.IsSet();
            uVar8 = 4294967295;
            if (cVar4) {
                uVar8 = local_78.ToBitPacked();
            }
        LAB_10016ad31:
            pWVar21 = (WorldmapAreaMetadata*)&field_100092;
            iVar6 = field_104092;
            field_104092 = iVar6 + 1;
        LAB_10016ad45:
            puVar14 = (uint32_t*)(*pWVar21)[(long)iVar6];
            *puVar14 = uVar8;
            goto LAB_10016b0d2;
        case 6619:
            iVar6 = field_104092;
            uVar23 = (long)iVar6 - 2;
            field_104092 = (int)uVar23;
            piVar16 = &field_100092[uVar23];
            iVar7 = *piVar16;
            piVar16 = &field_100092[(long)iVar6 - 1];
            local_50 = rs2lib::CoordGrid(*piVar16);
            SetMapCoord(iVar7, &local_50, false);
            break;
        case 6620:
            iVar6 = field_104092;
            uVar23 = (long)iVar6 - 2;
            field_104092 = (int)uVar23;
            piVar16 = &field_100092[uVar23];
            iVar7 = *piVar16;
            piVar16 = &field_100092[(long)iVar6 - 1];
            local_50 = rs2lib::CoordGrid(*piVar16);
            SetMapCoord(iVar7, &local_50, true);
            return 1;
        case 6621:
            iVar6 = field_104092;
            uVar23 = (long)iVar6 - 2;
            field_104092 = (int)uVar23;
            field_100092[uVar23];
            piVar16 = &field_100092[(long)iVar6 - 1];
            local_60 = rs2lib::CoordGrid(*piVar16);
            pWVar12 = this_01->GetWorldmap();
            local_50.GetMapareaById((int)pWVar12);
            uVar9 = 0;
            bVar2 = local_50 == nullptr;
            if (!bVar2) {
                local_68 = (WorldmapAreaMetadata*)local_50.operator->();
                iVar6 = local_60.GetX();
                iVar7 = local_60.GetZ();
                iVar5 = local_60.GetPos();
                bVar3 = local_68->ContainsSourceTile(iVar6, iVar7, iVar5);
                uVar9 = (unsigned int)bVar3;
            }
            iVar6 = field_104092;
            field_104092 = iVar6 + 1;
            goto LAB_10016b0cb;
        case 6622:
            pWVar12 = this_01->GetWorldmap();
            uVar8 = pWVar12->GetSpriteModIconsID();
            iVar6 = field_104092;
            field_104092 = iVar6 + 1;
            puVar14 = &field_100092[(long)iVar6];
            *puVar14 = uVar8;
            pWVar12 = this_01->GetWorldmap();
            uVar9 = pWVar12->GetTileHeight();
            goto LAB_10016af6b;
        case 6623:
            local_68 = (WorldmapAreaMetadata*)&field_100092;
            uVar23 = (long)field_104092 - 1;
            field_104092 = (int)uVar23;
            piVar16 = (int*)(*local_68)[uVar23];
            local_60 = rs2lib::CoordGrid(*piVar16);
            pWVar12 = this_01->GetWorldmap();
            iVar6 = local_60.GetX();
            iVar7 = local_60.GetZ();
            local_60.GetPos();
            local_50.FindMapareaForSourceTile((int)pWVar12, iVar6, iVar7);
            bVar2 = local_50 == nullptr;
            uVar8 = 4294967295;
            if (!bVar2) {
                uVar8 = ((CoordMapSquare*)local_50.operator->())->GetX();
            }
            iVar6 = field_104092;
            field_104092 = iVar6 + 1;
            pWVar21 = local_68;
            goto LAB_10016ad45;
        case 6624:
            uVar23 = (long)field_104092 - 1;
            field_104092 = (int)uVar23;
            piVar16 = &field_100092[uVar23];
            iVar6 = *piVar16;
            pWVar12 = this_01->GetWorldmap();
            pWVar12->SetFlashCount(iVar6);
            break;
        case 6625:
            pWVar12 = this_01->GetWorldmap();
            pWVar12->SetFlashCountDefault();
            break;
        case 6626:
            uVar23 = (long)field_104092 - 1;
            field_104092 = (int)uVar23;
            piVar16 = &field_100092[uVar23];
            iVar6 = *piVar16;
            pWVar12 = this_01->GetWorldmap();
            pWVar12->SetFlashTics(iVar6);
            break;
        case 6627:
            pWVar12 = this_01->GetWorldmap();
            pWVar12->SetFlashTicsDefault();
            break;
        case 6628:
            uVar23 = (long)field_104092 - 1;
            field_104092 = (int)uVar23;
            piVar16 = &field_100092[uVar23];
            iVar6 = *piVar16;
            pWVar12 = this_01->GetWorldmap();
            pWVar12->SetPerpetualFlash(iVar6 == 1);
            break;
        case 6629:
            uVar23 = (long)field_104092 - 1;
            field_104092 = (int)uVar23;
            piVar16 = &field_100092[uVar23];
            iVar6 = *piVar16;
            pWVar12 = this_01->GetWorldmap();
            pWVar12->FlashElement(iVar6);
            break;
        case 6630:
            uVar23 = (long)field_104092 - 1;
            field_104092 = (int)uVar23;
            piVar16 = &field_100092[uVar23];
            iVar6 = *piVar16;
            pWVar12 = this_01->GetWorldmap();
            pWVar12->FlashElementCategory(iVar6);
            break;
        case 6631:
            pWVar12 = this_01->GetWorldmap();
            pWVar12->StopCurrentFlashes();
            break;
        case 6632:
            uVar23 = (long)field_104092 - 1;
            field_104092 = (int)uVar23;
            piVar16 = &field_100092[uVar23];
            iVar6 = *piVar16;
            pWVar12 = this_01->GetWorldmap();
            pWVar12->SetAllMapElementsVisibility(iVar6 == 1);
            break;
        case 6633:
            iVar6 = field_104092;
            uVar23 = (long)iVar6 - 2;
            field_104092 = (int)uVar23;
            piVar16 = &field_100092[uVar23];
            iVar7 = *piVar16;
            piVar16 = &field_100092[(long)iVar6 - 1];
            iVar6 = *piVar16;
            pWVar12 = this_01->GetWorldmap();
            pWVar12->SetMapElementVisibility(iVar7, iVar6 == 1);
            break;
        case 6634:
            iVar6 = field_104092;
            uVar23 = (long)iVar6 - 2;
            field_104092 = (int)uVar23;
            piVar16 = &field_100092[uVar23];
            iVar7 = *piVar16;
            piVar16 = &field_100092[(long)iVar6 - 1];
            iVar6 = *piVar16;
            pWVar12 = this_01->GetWorldmap();
            pWVar12->SetMapElementCategoryVisibility(iVar7, iVar6 == 1);
            break;
        case 6635:
            pWVar12 = this_01->GetWorldmap();
            bVar3 = pWVar12->GetAllMapElementsVisibility();
            uVar9 = (unsigned int)bVar3;
            goto LAB_10016af9a;
        case 6636:
            uVar23 = (long)field_104092 - 1;
            field_104092 = (int)uVar23;
            piVar16 = &field_100092[uVar23];
            iVar6 = *piVar16;
            pWVar12 = this_01->GetWorldmap();
            bVar3 = pWVar12->IsMapElementVisible(iVar6);
            uVar9 = (unsigned int)bVar3;
            goto LAB_10016aa43;
        case 6637:
            uVar23 = (long)field_104092 - 1;
            field_104092 = (int)uVar23;
            piVar16 = &field_100092[uVar23];
            iVar6 = *piVar16;
            pWVar12 = this_01->GetWorldmap();
            bVar3 = pWVar12->IsMapElementCategoryVisible(iVar6);
            uVar9 = (unsigned int)bVar3;
            goto LAB_10016aa43;
        case 6638:
            iVar6 = field_104092;
            uVar23 = (long)iVar6 - 2;
            field_104092 = (int)uVar23;
            puVar18 = &field_100092[uVar23];
            uVar9 = *puVar18;
            piVar16 = &field_100092[(long)iVar6 - 1];
            local_50 = rs2lib::CoordGrid(*piVar16);
            pWVar12 = this_01->GetWorldmap();
            local_60.FindNearestMapElement((int)pWVar12, (CoordGrid*)(unsigned long)uVar9);
            cVar4 = local_60.IsSet();
            uVar9 = 4294967295;
            if (cVar4) {
                uVar9 = local_60.ToBitPacked();
            }
        LAB_10016aa43:
            uVar23 = (unsigned long)field_104092;
            field_104092 = field_104092 + 1;
            goto LAB_10016afb2;
        case 6639:
            pWVar12 = this_01->GetWorldmap();
            plVar13 = (long*)pWVar12->IterateMapElementsStart();
            goto LAB_10016aa7e;
        case 6640:
            pWVar12 = this_01->GetWorldmap();
            plVar13 = (long*)pWVar12->IterateMapElementsNext();
        LAB_10016aa7e:
            if (plVar13 == nullptr) {
                iVar6 = field_104092;
                field_104092 = iVar6 + 1;
                puVar14 = &field_100092[(long)iVar6];
                *puVar14 = 4294967295;
                iVar6 = field_104092;
                field_104092 = iVar6 + 1;
                puVar14 = &field_100092[(long)iVar6];
                *puVar14 = 4294967295;
                break;
            }
            uVar8 = (**(void (**)(...))(*plVar13 + 8))(plVar13);
            iVar6 = field_104092;
            field_104092 = iVar6 + 1;
            puVar14 = &field_100092[(long)iVar6];
            *puVar14 = uVar8;
            uVar9 = ((plVar13 + 1))->ToBitPacked();
            uVar23 = (unsigned long)field_104092;
            field_104092 = field_104092 + 1;
            goto LAB_10016afb2;
        default:
            goto switchD_10016a051_caseD_19f1;
        case 6693:
            uVar23 = (long)field_104092 - 1;
            field_104092 = (int)uVar23;
            piVar16 = &field_100092[uVar23];
            pMVar17 = configdecoder::MapElementType::List(*piVar16);
            iVar6 = field_136096;
            field_136096 = iVar6 + 1;
            pbVar15 = &field_104096[(long)iVar6];
            *pbVar15 = &pMVar17->field_16;
            break;
        case 6694:
            uVar23 = (long)field_104092 - 1;
            field_104092 = (int)uVar23;
            piVar16 = &field_100092[uVar23];
            pMVar17 = configdecoder::MapElementType::List(*piVar16);
            uVar9 = pMVar17->field_56;
            goto LAB_10016af6b;
        case 6695:
            uVar23 = (long)field_104092 - 1;
            field_104092 = (int)uVar23;
            piVar16 = &field_100092[uVar23];
            pMVar17 = configdecoder::MapElementType::List(*piVar16);
            uVar9 = pMVar17->field_440;
            goto LAB_10016af6b;
        case 6696:
            uVar23 = (long)field_104092 - 1;
            field_104092 = (int)uVar23;
            piVar16 = &field_100092[uVar23];
            pMVar17 = configdecoder::MapElementType::List(*piVar16);
            uVar9 = pMVar17->field_4;
        LAB_10016af6b:
            iVar6 = field_104092;
            field_104092 = iVar6 + 1;
            puVar18 = &field_100092[(long)iVar6];
            *puVar18 = uVar9;
            break;
        case 6697:
            uVar9 = *(unsigned int*)field_140856;
            goto LAB_10016af9a;
        case 6698:
            pCVar11 = (CoordGrid*)(field_140856 + 4);
            goto LAB_10016af93;
        case 6699:
            pCVar11 = (CoordGrid*)(field_140856 + 16);
        LAB_10016af93:
            uVar9 = pCVar11->ToBitPacked();
        LAB_10016af9a:
            uVar23 = (unsigned long)field_104092;
            field_104092 = field_104092 + 1;
        LAB_10016afb2:
            puVar18 = &field_100092[uVar23];
            *puVar18 = uVar9;
        }
        uVar24 = 1;
    switchD_10016a051_caseD_19f1:
        return uVar24;
    }

    // 0x10016b4f0
    void ScriptRunnerImpl::SetMapCoord(int arg1, rs2lib::CoordGrid& coordGrid, bool arg3) {
        uint64_t in_register_00000011;
        shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata> local_50;

        auto this_00 = Client::Instance();
        auto pWVar3 = this_00->GetWorldmap();
        local_50.GetMapareaById((int)pWVar3);
        uint8_t* uint8_t = &this_00->field_52016;
        long lVar4 = (*uint8_t).operator->();
        uint32_t local_34 = (uint32_t)(((uint64_t)in_register_00000011 << 8) | (uint8_t)arg3);
        int arg1_00 = *(int*)(lVar4 + 1204);
        lVar4 = (*uint8_t).operator->();
        int iVar1 = *(int*)(lVar4 + 24);
        unsigned int uVar2 = this_00->field_53220;
        lVar4 = (*uint8_t).operator->();
        CoordGrid local_60(arg1_00, (iVar1 >> 7) + uVar2, (*(int*)(lVar4 + 28) >> 7) + this_00->field_53224);
        pWVar3 = this_00->GetWorldmap();
        pWVar3->SwitchToMap(local_50, local_60, *((CoordGrid*)(Js5*)coordGrid), local_34._0_1_);
    }

} // namespace jag::oldscape
