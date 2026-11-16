// projects/osclient/ScriptRunnerImpl_6600To6699.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: osclient

#include "ScriptRunnerImpl.h"

namespace jag::oldscape {
    // 0x10016a010, 5136 bytes, placed by class name and debug map
    // ScriptRunnerImpl::ExecuteCommand6600To6699(ScriptOp, ClientScript const&, bool)
    undefined8 ScriptRunnerImpl::ExecuteCommand6600To6699(long param_1, undefined4 param_2) {
        array<int, 1000ul>* this;
        uint uVar1;
        bool bVar2;
        byte bVar3;
        char cVar4;
        int iVar5;
        int iVar6;
        int iVar7;
        undefined4 uVar8;
        uint uVar9;
        Client* this_00;
        fixed_hashtable_allocator<10ul, 1208ul, 8ul, 8ul, 0ul, true, eastl::allocator>* this_01;
        basic_string* pbVar10;
        CoordGrid* pCVar11;
        GraphicsDefaults* this_02;
        CoordMapSquare* this_03;
        Worldmap* pWVar12;
        long* plVar13;
        eastl::string* pbVar14;
        int* piVar15;
        long lVar16;
        HeadbarType* this_04;
        undefined4* puVar17;
        uint* puVar18;
        WorldmapAreaMetadata* pWVar19;
        ChangeLocationRequest* pCVar20;
        NXTPixScreen* pNVar21;
        _func_decltype_nullptr* p_Var22;
        array<int, 2ul>* paVar23;
        ulong uVar24;
        undefined8 uVar25;
        CoordGrid local_78;
        WorldmapAreaMetadata* local_68;
        CoordGrid local_60;
        CoordGrid local_50[2];

        uVar25 = 2;
        this_00 = (Client*)Client::Instance();
        switch (param_2) {
        case 6600:
            iVar7 = this_00->m_playerLevel;
            lVar16 = shared_ptr<ClientPlayer>::operator->((shared_ptr<ClientPlayer>*)this_00->field_52016);
            iVar5 = *(int*)(lVar16 + 24);
            uVar9 = this_00->field_53220;
            lVar16 = shared_ptr<ClientPlayer>::operator->((shared_ptr<ClientPlayer>*)this_00->field_52016);
            iVar6 = *(int*)(lVar16 + 28);
            uVar1 = this_00->field_53224;
            pWVar12 = (Worldmap*)this_00->GetWorldmap();
            pWVar12->UpdateMaparea(iVar7, (iVar5 >> 7) + uVar9, (iVar6 >> 7) + uVar1, true);
            return 1;
        case 6601:
            uVar24 = (long)*(int*)(param_1 + 104092) - 1;
            *(int*)(param_1 + 104092) = (int)uVar24;
            std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), uVar24);
            new (&local_60) eastl::allocator("EASTL basic_string");
            new (local_50) eastl::string("", (allocator*)&local_60);
            iVar7 = this_00->GetWorldmap();
            local_60.GetMapareaById(iVar7);
            bVar2 = operator!=((shared_ptr*)&local_60, (_func_decltype_nullptr*)0);
            if (bVar2) {
                this_01 = (fixed_hashtable_allocator<10ul, 1208ul, 8ul, 8ul, 0ul, true, eastl::allocator>*)
                              shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>::operator->(
                                  (shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>*)&local_60);
                pbVar10 =
                    (basic_string*)eastl::fixed_hashtable_allocator<10ul, 1208ul, 8ul, 8ul, 0ul, true,
                                                                    eastl::allocator>::get_overflow_allocator(this_01);
                eastl::string::operator=((eastl::string*)local_50, pbVar10);
            }
            iVar7 = *(int*)(param_1 + 136096);
            *(int*)(param_1 + 136096) = iVar7 + 1;
            pbVar14 = (eastl::string*)std::array<eastl::string, 1000ul>::operator[](
                (array<eastl::string, 1000ul>*)(param_1 + 104096), (long)iVar7);
            eastl::string::operator=(pbVar14, (basic_string*)local_50);
            local_60.~shared_ptr();
            local_50->~basic_string();
            break;
        case 6602:
            uVar24 = (long)*(int*)(param_1 + 104092) - 1;
            *(int*)(param_1 + 104092) = (int)uVar24;
            std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), uVar24);
            iVar7 = this_00->GetWorldmap();
            iVar7->SwitchToMap();
            break;
        case 6603:
            pWVar12 = (Worldmap*)this_00->GetWorldmap();
            uVar9 = pWVar12->GetZoomPercent();
            goto LAB_10016af9a;
        case 6604:
            uVar24 = (long)*(int*)(param_1 + 104092) - 1;
            *(int*)(param_1 + 104092) = (int)uVar24;
            piVar15 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), uVar24);
            iVar7 = *piVar15;
            pWVar12 = (Worldmap*)this_00->GetWorldmap();
            pWVar12->SetZoomPercent(iVar7);
            break;
        case 6605:
            pWVar12 = (Worldmap*)this_00->GetWorldmap();
            bVar3 = pWVar12->IsLoaded();
            uVar9 = (uint)bVar3;
            goto LAB_10016af9a;
        case 6606:
            uVar24 = (long)*(int*)(param_1 + 104092) - 1;
            *(int*)(param_1 + 104092) = (int)uVar24;
            piVar15 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), uVar24);
            rs2lib::CoordGrid::CoordGrid(local_50, *piVar15);
            pWVar12 = (Worldmap*)this_00->GetWorldmap();
            iVar7 = local_50->GetZ();
            iVar5 = local_50->GetPos();
            pWVar12->JumpToTargetTile(iVar7, iVar5);
            break;
        case 6607:
            uVar24 = (long)*(int*)(param_1 + 104092) - 1;
            *(int*)(param_1 + 104092) = (int)uVar24;
            piVar15 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), uVar24);
            rs2lib::CoordGrid::CoordGrid(local_50, *piVar15);
            pWVar12 = (Worldmap*)this_00->GetWorldmap();
            iVar7 = local_50->GetZ();
            iVar5 = local_50->GetPos();
            pWVar12->JumpToTargetTileInstant(iVar7, iVar5);
            break;
        case 6608:
            uVar24 = (long)*(int*)(param_1 + 104092) - 1;
            *(int*)(param_1 + 104092) = (int)uVar24;
            piVar15 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), uVar24);
            rs2lib::CoordGrid::CoordGrid(local_50, *piVar15);
            iVar7 = this_00->GetWorldmap();
            iVar5 = local_50->GetX();
            iVar6 = local_50->GetZ();
            local_50->GetPos();
            worldmap::Worldmap::JumpToSourceTile(iVar7, iVar5, iVar6);
            break;
        case 6609:
            uVar24 = (long)*(int*)(param_1 + 104092) - 1;
            *(int*)(param_1 + 104092) = (int)uVar24;
            piVar15 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), uVar24);
            rs2lib::CoordGrid::CoordGrid(local_50, *piVar15);
            iVar7 = this_00->GetWorldmap();
            iVar5 = local_50->GetX();
            iVar6 = local_50->GetZ();
            local_50->GetPos();
            worldmap::Worldmap::JumpToSourceTileInstant(iVar7, iVar5, iVar6);
            break;
        case 6610:
            pWVar12 = (Worldmap*)this_00->GetWorldmap();
            uVar8 = pWVar12->GetAbsoluteTileX();
            iVar7 = *(int*)(param_1 + 104092);
            *(int*)(param_1 + 104092) = iVar7 + 1;
            puVar17 =
                (undefined4*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), (long)iVar7);
            *puVar17 = uVar8;
            pWVar12 = (Worldmap*)this_00->GetWorldmap();
            uVar8 = pWVar12->GetAbsoluteTileZ();
            goto LAB_10016af6b;
        case 6611:
            uVar24 = (long)*(int*)(param_1 + 104092) - 1;
            *(int*)(param_1 + 104092) = (int)uVar24;
            std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), uVar24);
            iVar7 = this_00->GetWorldmap();
            local_50->GetMapareaById(iVar7);
            uVar9 = 0;
            bVar2 = operator==((shared_ptr*)local_50, (_func_decltype_nullptr*)0);
            if (!bVar2) {
                pWVar19 = (WorldmapAreaMetadata*)shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>::operator->(
                    (shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>*)local_50);
                pCVar11 = (CoordGrid*)pWVar19->GetOrigin();
                uVar9 = pCVar11->ToBitPacked();
            }
            goto LAB_10016b0b7;
        case 6612:
            uVar24 = (long)*(int*)(param_1 + 104092) - 1;
            *(int*)(param_1 + 104092) = (int)uVar24;
            std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), uVar24);
            iVar7 = this_00->GetWorldmap();
            local_50->GetMapareaById(iVar7);
            bVar2 = operator==((shared_ptr*)local_50, (_func_decltype_nullptr*)0);
            if (bVar2) {
            LAB_10016a49a:
                uVar9 = 0;
                iVar7 = *(int*)(param_1 + 104092);
                *(int*)(param_1 + 104092) = iVar7 + 1;
                puVar17 = (undefined4*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092),
                                                                           (long)iVar7);
                *puVar17 = 0;
            } else {
                pNVar21 = (NXTPixScreen*)shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>::operator->(
                    (shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>*)local_50);
                iVar5 = pNVar21->GetUIHeight();
                pWVar19 = (WorldmapAreaMetadata*)shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>::operator->(
                    (shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>*)local_50);
                iVar6 = pWVar19->GetMinMapX();
                iVar7 = *(int*)(param_1 + 104092);
                *(int*)(param_1 + 104092) = iVar7 + 1;
                piVar15 =
                    (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), (long)iVar7);
                *piVar15 = (iVar5 - iVar6) * 64 + 64;
                pWVar19 = (WorldmapAreaMetadata*)shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>::operator->(
                    (shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>*)local_50);
                iVar7 = pWVar19->GetMaxMapZ();
                pCVar20 = (ChangeLocationRequest*)shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>::operator->(
                    (shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>*)local_50);
                iVar5 = pCVar20->GetSeqDelay();
                uVar9 = (iVar7 - iVar5) * 64 + 64;
            }
            goto LAB_10016b0b7;
        case 6613:
            this = (array<int, 1000ul>*)(param_1 + 100092);
            uVar24 = (long)*(int*)(param_1 + 104092) - 1;
            *(int*)(param_1 + 104092) = (int)uVar24;
            std::array<int, 1000ul>::operator[](this, uVar24);
            iVar7 = this_00->GetWorldmap();
            local_50->GetMapareaById(iVar7);
            bVar2 = operator==((shared_ptr*)local_50, (_func_decltype_nullptr*)0);
            if (bVar2) {
                iVar7 = *(int*)(param_1 + 104092);
                *(int*)(param_1 + 104092) = iVar7 + 1;
                puVar17 = (undefined4*)std::array<int, 1000ul>::operator[](this, (long)iVar7);
                *puVar17 = 0;
                iVar7 = *(int*)(param_1 + 104092);
                *(int*)(param_1 + 104092) = iVar7 + 1;
                puVar17 = (undefined4*)std::array<int, 1000ul>::operator[](this, (long)iVar7);
                *puVar17 = 0;
                goto LAB_10016a49a;
            }
            pWVar19 = (WorldmapAreaMetadata*)shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>::operator->(
                (shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>*)local_50);
            iVar5 = pWVar19->GetMinMapX();
            iVar7 = *(int*)(param_1 + 104092);
            *(int*)(param_1 + 104092) = iVar7 + 1;
            piVar15 = (int*)std::array<int, 1000ul>::operator[](this, (long)iVar7);
            *piVar15 = iVar5 << 6;
            pCVar20 = (ChangeLocationRequest*)shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>::operator->(
                (shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>*)local_50);
            iVar5 = pCVar20->GetSeqDelay();
            iVar7 = *(int*)(param_1 + 104092);
            *(int*)(param_1 + 104092) = iVar7 + 1;
            piVar15 = (int*)std::array<int, 1000ul>::operator[](this, (long)iVar7);
            *piVar15 = iVar5 << 6;
            pNVar21 = (NXTPixScreen*)shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>::operator->(
                (shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>*)local_50);
            iVar5 = pNVar21->GetUIHeight();
            iVar7 = *(int*)(param_1 + 104092);
            *(int*)(param_1 + 104092) = iVar7 + 1;
            puVar18 = (uint*)std::array<int, 1000ul>::operator[](this, (long)iVar7);
            *puVar18 = iVar5 << 6 | 63;
            pWVar19 = (WorldmapAreaMetadata*)shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>::operator->(
                (shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>*)local_50);
            iVar7 = pWVar19->GetMaxMapZ();
            uVar9 = iVar7 << 6 | 63;
        LAB_10016b0b7:
            iVar7 = *(int*)(param_1 + 104092);
            *(int*)(param_1 + 104092) = iVar7 + 1;
        LAB_10016b0cb:
            puVar18 = (uint*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), (long)iVar7);
            *puVar18 = uVar9;
        LAB_10016b0d2:
            local_50->~shared_ptr();
            break;
        case 6614:
            uVar24 = (long)*(int*)(param_1 + 104092) - 1;
            *(int*)(param_1 + 104092) = (int)uVar24;
            std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), uVar24);
            iVar7 = this_00->GetWorldmap();
            local_50->GetMapareaById(iVar7);
            bVar2 = operator==((shared_ptr*)local_50, (_func_decltype_nullptr*)0);
            uVar8 = 4294967295;
            if (!bVar2) {
                this_04 = (HeadbarType*)shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>::operator->(
                    (shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>*)local_50);
                uVar8 = this_04->GetStickTime();
            }
            goto LAB_10016ad31;
        case 6615:
            this_00->GetWorldmap();
            local_50->GetSourcePosition();
            cVar4 = game::CoordGrid::operator==((CoordGrid*)local_50, (CoordGrid*)&rs2lib::CoordGrid::CoordGridNull);
            if (cVar4 == '\0') {
                uVar8 = local_50->GetZ();
                iVar7 = *(int*)(param_1 + 104092);
                *(int*)(param_1 + 104092) = iVar7 + 1;
                puVar17 = (undefined4*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092),
                                                                           (long)iVar7);
                *puVar17 = uVar8;
                uVar8 = local_50->GetPos();
            } else {
                iVar7 = *(int*)(param_1 + 104092);
                *(int*)(param_1 + 104092) = iVar7 + 1;
                puVar17 = (undefined4*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092),
                                                                           (long)iVar7);
                *puVar17 = 4294967295;
                uVar8 = 4294967295;
            }
            iVar7 = *(int*)(param_1 + 104092);
            *(int*)(param_1 + 104092) = iVar7 + 1;
            puVar17 =
                (undefined4*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), (long)iVar7);
            *puVar17 = uVar8;
            break;
        case 6616:
            pWVar12 = (Worldmap*)this_00->GetWorldmap();
            uVar9 = pWVar12->GetCurrentMapareaId();
            goto LAB_10016af9a;
        case 6617:
            uVar24 = (long)*(int*)(param_1 + 104092) - 1;
            *(int*)(param_1 + 104092) = (int)uVar24;
            piVar15 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), uVar24);
            new (&local_60) rs2lib::CoordGrid(*piVar15);
            this_00->GetWorldmap();
            local_50->GetCurrentMaparea();
            bVar2 = operator==((shared_ptr*)local_50, (_func_decltype_nullptr*)0);
            if (bVar2) {
            LAB_10016ae21:
                iVar7 = *(int*)(param_1 + 104092);
                *(int*)(param_1 + 104092) = iVar7 + 1;
                puVar17 = (undefined4*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092),
                                                                           (long)iVar7);
                *puVar17 = 4294967295;
                iVar7 = *(int*)(param_1 + 104092);
                *(int*)(param_1 + 104092) = iVar7 + 1;
                puVar17 = (undefined4*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092),
                                                                           (long)iVar7);
                *puVar17 = 4294967295;
            } else {
                local_68 = (WorldmapAreaMetadata*)(param_1 + 100092);
                p_Var22 = (_func_decltype_nullptr*)shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>::operator->(
                    (shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>*)local_50);
                iVar7 = local_60.GetX();
                iVar5 = local_60.GetZ();
                local_60.GetPos();
                local_78.SourceToTargetTile((int)p_Var22, iVar7, iVar5);
                bVar2 = std::operator==((unique_ptr*)&local_78, p_Var22);
                pWVar19 = local_68;
                if (bVar2) {
                    iVar7 = *(int*)(param_1 + 104092);
                    *(int*)(param_1 + 104092) = iVar7 + 1;
                    puVar17 =
                        (undefined4*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)local_68, (long)iVar7);
                    *puVar17 = 4294967295;
                    uVar8 = 4294967295;
                } else {
                    paVar23 = (array<int, 2ul>*)
                        std::unique_ptr<std::array<int, 2ul>, std::default_delete<std::array<int, 2ul>>>::operator*(
                            (unique_ptr<std::array<int, 2ul>, std::default_delete<std::array<int, 2ul>>>*)&local_78);
                    puVar17 = (undefined4*)std::array<int, 2ul>::operator[](paVar23, 0);
                    uVar8 = *puVar17;
                    iVar7 = *(int*)(param_1 + 104092);
                    *(int*)(param_1 + 104092) = iVar7 + 1;
                    puVar17 =
                        (undefined4*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)pWVar19, (long)iVar7);
                    *puVar17 = uVar8;
                    paVar23 = (array<int, 2ul>*)
                        std::unique_ptr<std::array<int, 2ul>, std::default_delete<std::array<int, 2ul>>>::operator*(
                            (unique_ptr<std::array<int, 2ul>, std::default_delete<std::array<int, 2ul>>>*)&local_78);
                    puVar17 = (undefined4*)std::array<int, 2ul>::operator[](paVar23, 1);
                    uVar8 = *puVar17;
                }
                iVar7 = *(int*)(param_1 + 104092);
                *(int*)(param_1 + 104092) = iVar7 + 1;
                puVar17 = (undefined4*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)pWVar19, (long)iVar7);
                *puVar17 = uVar8;
                local_78.~unique_ptr();
            }
            goto LAB_10016b0d2;
        case 6618:
            uVar24 = (long)*(int*)(param_1 + 104092) - 1;
            *(int*)(param_1 + 104092) = (int)uVar24;
            piVar15 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), uVar24);
            new (&local_60) rs2lib::CoordGrid(*piVar15);
            this_00->GetWorldmap();
            local_50->GetCurrentMaparea();
            bVar2 = operator==((shared_ptr*)local_50, (_func_decltype_nullptr*)0);
            if (bVar2)
                goto LAB_10016ae21;
            iVar7 = shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>::operator->(
                (shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>*)local_50);
            iVar5 = local_60.GetZ();
            local_60.GetPos();
            local_78.TargetToSourceTile(iVar7, iVar5);
            cVar4 = local_78.IsSet();
            uVar8 = 4294967295;
            if (cVar4 != '\0') {
                uVar8 = local_78.ToBitPacked();
            }
        LAB_10016ad31:
            pWVar19 = (WorldmapAreaMetadata*)(param_1 + 100092);
            iVar7 = *(int*)(param_1 + 104092);
            *(int*)(param_1 + 104092) = iVar7 + 1;
        LAB_10016ad45:
            puVar17 = (undefined4*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)pWVar19, (long)iVar7);
            *puVar17 = uVar8;
            goto LAB_10016b0d2;
        case 6619:
            iVar7 = *(int*)(param_1 + 104092);
            uVar24 = (long)iVar7 - 2;
            *(int*)(param_1 + 104092) = (int)uVar24;
            piVar15 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), uVar24);
            iVar5 = *piVar15;
            piVar15 =
                (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), (long)iVar7 - 1);
            rs2lib::CoordGrid::CoordGrid(local_50, *piVar15);
            SetMapCoord(iVar5, local_50, false);
            break;
        case 6620:
            iVar7 = *(int*)(param_1 + 104092);
            uVar24 = (long)iVar7 - 2;
            *(int*)(param_1 + 104092) = (int)uVar24;
            piVar15 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), uVar24);
            iVar5 = *piVar15;
            piVar15 =
                (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), (long)iVar7 - 1);
            rs2lib::CoordGrid::CoordGrid(local_50, *piVar15);
            SetMapCoord(iVar5, local_50, true);
            return 1;
        case 6621:
            iVar7 = *(int*)(param_1 + 104092);
            uVar24 = (long)iVar7 - 2;
            *(int*)(param_1 + 104092) = (int)uVar24;
            std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), uVar24);
            piVar15 =
                (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), (long)iVar7 - 1);
            new (&local_60) rs2lib::CoordGrid(*piVar15);
            iVar7 = this_00->GetWorldmap();
            local_50->GetMapareaById(iVar7);
            uVar9 = 0;
            bVar2 = operator==((shared_ptr*)local_50, (_func_decltype_nullptr*)0);
            if (!bVar2) {
                local_68 = (WorldmapAreaMetadata*)shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>::operator->(
                    (shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>*)local_50);
                iVar7 = local_60.GetX();
                iVar5 = local_60.GetZ();
                iVar6 = local_60.GetPos();
                bVar3 = local_68->ContainsSourceTile(iVar7, iVar5, iVar6);
                uVar9 = (uint)bVar3;
            }
            iVar7 = *(int*)(param_1 + 104092);
            *(int*)(param_1 + 104092) = iVar7 + 1;
            goto LAB_10016b0cb;
        case 6622:
            this_02 = (GraphicsDefaults*)this_00->GetWorldmap();
            uVar8 = this_02->GetSpriteModIconsID();
            iVar7 = *(int*)(param_1 + 104092);
            *(int*)(param_1 + 104092) = iVar7 + 1;
            puVar17 =
                (undefined4*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), (long)iVar7);
            *puVar17 = uVar8;
            pWVar12 = (Worldmap*)this_00->GetWorldmap();
            uVar8 = pWVar12->GetTileHeight();
            goto LAB_10016af6b;
        case 6623:
            local_68 = (WorldmapAreaMetadata*)(param_1 + 100092);
            uVar24 = (long)*(int*)(param_1 + 104092) - 1;
            *(int*)(param_1 + 104092) = (int)uVar24;
            piVar15 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)local_68, uVar24);
            new (&local_60) rs2lib::CoordGrid(*piVar15);
            iVar7 = this_00->GetWorldmap();
            iVar5 = local_60.GetX();
            iVar6 = local_60.GetZ();
            local_60.GetPos();
            local_50->FindMapareaForSourceTile(iVar7, iVar5, iVar6);
            bVar2 = operator==((shared_ptr*)local_50, (_func_decltype_nullptr*)0);
            uVar8 = 4294967295;
            if (!bVar2) {
                this_03 = (CoordMapSquare*)shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>::operator->(
                    (shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>*)local_50);
                uVar8 = this_03->GetX();
            }
            iVar7 = *(int*)(param_1 + 104092);
            *(int*)(param_1 + 104092) = iVar7 + 1;
            pWVar19 = local_68;
            goto LAB_10016ad45;
        case 6624:
            uVar24 = (long)*(int*)(param_1 + 104092) - 1;
            *(int*)(param_1 + 104092) = (int)uVar24;
            piVar15 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), uVar24);
            iVar7 = *piVar15;
            pWVar12 = (Worldmap*)this_00->GetWorldmap();
            pWVar12->SetFlashCount(iVar7);
            break;
        case 6625:
            pWVar12 = (Worldmap*)this_00->GetWorldmap();
            pWVar12->SetFlashCountDefault();
            break;
        case 6626:
            uVar24 = (long)*(int*)(param_1 + 104092) - 1;
            *(int*)(param_1 + 104092) = (int)uVar24;
            piVar15 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), uVar24);
            iVar7 = *piVar15;
            pWVar12 = (Worldmap*)this_00->GetWorldmap();
            pWVar12->SetFlashTics(iVar7);
            break;
        case 6627:
            pWVar12 = (Worldmap*)this_00->GetWorldmap();
            pWVar12->SetFlashTicsDefault();
            break;
        case 6628:
            uVar24 = (long)*(int*)(param_1 + 104092) - 1;
            *(int*)(param_1 + 104092) = (int)uVar24;
            piVar15 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), uVar24);
            iVar7 = *piVar15;
            pWVar12 = (Worldmap*)this_00->GetWorldmap();
            pWVar12->SetPerpetualFlash(iVar7 == 1);
            break;
        case 6629:
            uVar24 = (long)*(int*)(param_1 + 104092) - 1;
            *(int*)(param_1 + 104092) = (int)uVar24;
            piVar15 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), uVar24);
            iVar7 = *piVar15;
            pWVar12 = (Worldmap*)this_00->GetWorldmap();
            pWVar12->FlashElement(iVar7);
            break;
        case 6630:
            uVar24 = (long)*(int*)(param_1 + 104092) - 1;
            *(int*)(param_1 + 104092) = (int)uVar24;
            piVar15 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), uVar24);
            iVar7 = *piVar15;
            pWVar12 = (Worldmap*)this_00->GetWorldmap();
            pWVar12->FlashElementCategory(iVar7);
            break;
        case 6631:
            pWVar12 = (Worldmap*)this_00->GetWorldmap();
            pWVar12->StopCurrentFlashes();
            break;
        case 6632:
            uVar24 = (long)*(int*)(param_1 + 104092) - 1;
            *(int*)(param_1 + 104092) = (int)uVar24;
            piVar15 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), uVar24);
            iVar7 = *piVar15;
            pWVar12 = (Worldmap*)this_00->GetWorldmap();
            pWVar12->SetAllMapElementsVisibility(iVar7 == 1);
            break;
        case 6633:
            iVar7 = *(int*)(param_1 + 104092);
            uVar24 = (long)iVar7 - 2;
            *(int*)(param_1 + 104092) = (int)uVar24;
            piVar15 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), uVar24);
            iVar5 = *piVar15;
            piVar15 =
                (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), (long)iVar7 - 1);
            iVar7 = *piVar15;
            pWVar12 = (Worldmap*)this_00->GetWorldmap();
            pWVar12->SetMapElementVisibility(iVar5, iVar7 == 1);
            break;
        case 6634:
            iVar7 = *(int*)(param_1 + 104092);
            uVar24 = (long)iVar7 - 2;
            *(int*)(param_1 + 104092) = (int)uVar24;
            piVar15 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), uVar24);
            iVar5 = *piVar15;
            piVar15 =
                (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), (long)iVar7 - 1);
            iVar7 = *piVar15;
            pWVar12 = (Worldmap*)this_00->GetWorldmap();
            pWVar12->SetMapElementCategoryVisibility(iVar5, iVar7 == 1);
            break;
        case 6635:
            pWVar12 = (Worldmap*)this_00->GetWorldmap();
            bVar3 = pWVar12->GetAllMapElementsVisibility();
            uVar9 = (uint)bVar3;
            goto LAB_10016af9a;
        case 6636:
            uVar24 = (long)*(int*)(param_1 + 104092) - 1;
            *(int*)(param_1 + 104092) = (int)uVar24;
            piVar15 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), uVar24);
            iVar7 = *piVar15;
            pWVar12 = (Worldmap*)this_00->GetWorldmap();
            bVar3 = pWVar12->IsMapElementVisible(iVar7);
            uVar9 = (uint)bVar3;
            goto LAB_10016aa43;
        case 6637:
            uVar24 = (long)*(int*)(param_1 + 104092) - 1;
            *(int*)(param_1 + 104092) = (int)uVar24;
            piVar15 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), uVar24);
            iVar7 = *piVar15;
            pWVar12 = (Worldmap*)this_00->GetWorldmap();
            bVar3 = pWVar12->IsMapElementCategoryVisible(iVar7);
            uVar9 = (uint)bVar3;
            goto LAB_10016aa43;
        case 6638:
            iVar7 = *(int*)(param_1 + 104092);
            uVar24 = (long)iVar7 - 2;
            *(int*)(param_1 + 104092) = (int)uVar24;
            puVar18 = (uint*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), uVar24);
            uVar9 = *puVar18;
            piVar15 =
                (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), (long)iVar7 - 1);
            rs2lib::CoordGrid::CoordGrid(local_50, *piVar15);
            iVar7 = this_00->GetWorldmap();
            local_60.FindNearestMapElement(iVar7, (CoordGrid*)(ulong)uVar9);
            cVar4 = local_60.IsSet();
            uVar9 = 4294967295;
            if (cVar4 != '\0') {
                uVar9 = local_60.ToBitPacked();
            }
        LAB_10016aa43:
            uVar24 = (ulong) * (int*)(param_1 + 104092);
            *(int*)(param_1 + 104092) = *(int*)(param_1 + 104092) + 1;
            goto LAB_10016afb2;
        case 6639:
            pWVar12 = (Worldmap*)this_00->GetWorldmap();
            plVar13 = (long*)pWVar12->IterateMapElementsStart();
            goto LAB_10016aa7e;
        case 6640:
            pWVar12 = (Worldmap*)this_00->GetWorldmap();
            plVar13 = (long*)pWVar12->IterateMapElementsNext();
        LAB_10016aa7e:
            if (plVar13 == (long*)0) {
                iVar7 = *(int*)(param_1 + 104092);
                *(int*)(param_1 + 104092) = iVar7 + 1;
                puVar17 = (undefined4*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092),
                                                                           (long)iVar7);
                *puVar17 = 4294967295;
                iVar7 = *(int*)(param_1 + 104092);
                *(int*)(param_1 + 104092) = iVar7 + 1;
                puVar17 = (undefined4*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092),
                                                                           (long)iVar7);
                *puVar17 = 4294967295;
                break;
            }
            uVar8 = (**(code**)(*plVar13 + 8))(plVar13);
            iVar7 = *(int*)(param_1 + 104092);
            *(int*)(param_1 + 104092) = iVar7 + 1;
            puVar17 =
                (undefined4*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), (long)iVar7);
            *puVar17 = uVar8;
            uVar9 = ((plVar13 + 1))->ToBitPacked();
            uVar24 = (ulong) * (int*)(param_1 + 104092);
            *(int*)(param_1 + 104092) = *(int*)(param_1 + 104092) + 1;
            goto LAB_10016afb2;
        default:
            goto switchD_10016a051_caseD_19f1;
        case 6693:
            uVar24 = (long)*(int*)(param_1 + 104092) - 1;
            *(int*)(param_1 + 104092) = (int)uVar24;
            piVar15 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), uVar24);
            lVar16 = configdecoder::MapElementType::List(*piVar15);
            iVar7 = *(int*)(param_1 + 136096);
            *(int*)(param_1 + 136096) = iVar7 + 1;
            pbVar14 = (eastl::string*)std::array<eastl::string, 1000ul>::operator[](
                (array<eastl::string, 1000ul>*)(param_1 + 104096), (long)iVar7);
            eastl::string::operator=(pbVar14, (basic_string*)(lVar16 + 16));
            break;
        case 6694:
            uVar24 = (long)*(int*)(param_1 + 104092) - 1;
            *(int*)(param_1 + 104092) = (int)uVar24;
            piVar15 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), uVar24);
            lVar16 = configdecoder::MapElementType::List(*piVar15);
            uVar8 = *(undefined4*)(lVar16 + 56);
            goto LAB_10016af6b;
        case 6695:
            uVar24 = (long)*(int*)(param_1 + 104092) - 1;
            *(int*)(param_1 + 104092) = (int)uVar24;
            piVar15 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), uVar24);
            lVar16 = configdecoder::MapElementType::List(*piVar15);
            uVar8 = *(undefined4*)(lVar16 + 440);
            goto LAB_10016af6b;
        case 6696:
            uVar24 = (long)*(int*)(param_1 + 104092) - 1;
            *(int*)(param_1 + 104092) = (int)uVar24;
            piVar15 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), uVar24);
            lVar16 = configdecoder::MapElementType::List(*piVar15);
            uVar8 = *(undefined4*)(lVar16 + 4);
        LAB_10016af6b:
            iVar7 = *(int*)(param_1 + 104092);
            *(int*)(param_1 + 104092) = iVar7 + 1;
            puVar17 =
                (undefined4*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), (long)iVar7);
            *puVar17 = uVar8;
            break;
        case 6697:
            uVar9 = *(uint*)(param_1 + 140856);
            goto LAB_10016af9a;
        case 6698:
            pCVar11 = (CoordGrid*)(param_1 + 140860);
            goto LAB_10016af93;
        case 6699:
            pCVar11 = (CoordGrid*)(param_1 + 140872);
        LAB_10016af93:
            uVar9 = pCVar11->ToBitPacked();
        LAB_10016af9a:
            uVar24 = (ulong) * (int*)(param_1 + 104092);
            *(int*)(param_1 + 104092) = *(int*)(param_1 + 104092) + 1;
        LAB_10016afb2:
            puVar18 = (uint*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), uVar24);
            *puVar18 = uVar9;
        }
        uVar25 = 1;
    switchD_10016a051_caseD_19f1:
        return uVar25;
    }

    // 0x10016b4f0, 240 bytes, placed by class name and debug map
    // ScriptRunnerImpl::SetMapCoord(int, rs2lib::CoordGrid&, bool)
    void ScriptRunnerImpl::SetMapCoord(int param_1, CoordGrid* param_2, bool param_3) {
        undefined1* this;
        int iVar1;
        uint uVar2;
        int iVar3;
        Client* this_00;
        long lVar4;
        Worldmap* this_01;
        undefined7 in_register_00000011;
        CoordGrid local_60;
        shared_ptr local_50;
        undefined4 local_34;

        this_00 = (Client*)Client::Instance();
        iVar3 = this_00->GetWorldmap();
        local_50.GetMapareaById(iVar3);
        this = this_00->field_52016;
        lVar4 = shared_ptr<ClientPlayer>::operator->((shared_ptr<ClientPlayer>*)this);
        local_34 = (undefined4)CONCAT71(in_register_00000011, param_3);
        iVar3 = *(int*)(lVar4 + 1204);
        lVar4 = shared_ptr<ClientPlayer>::operator->((shared_ptr<ClientPlayer>*)this);
        iVar1 = *(int*)(lVar4 + 24);
        uVar2 = this_00->field_53220;
        lVar4 = shared_ptr<ClientPlayer>::operator->((shared_ptr<ClientPlayer>*)this);
        new (&local_60)
            rs2lib::CoordGrid(iVar3, (iVar1 >> 7) + uVar2, (*(int*)(lVar4 + 28) >> 7) + this_00->field_53224);
        this_01 = (Worldmap*)this_00->GetWorldmap();
        this_01->SwitchToMap(&local_50, &local_60, (CoordGrid*)(Js5*)param_2, local_34._0_1_);
        local_50.~shared_ptr();
    }

} // namespace jag::oldscape
