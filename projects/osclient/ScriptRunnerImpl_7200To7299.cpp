// projects/osclient/ScriptRunnerImpl_7200To7299.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: osclient

#include "ScriptRunnerImpl.h"

namespace jag::oldscape {
    // 0x1000b6660, 3904 bytes, placed by class name and debug map
    // ScriptRunnerImpl::ExecuteCommand7200To7299(ScriptOp, ClientScript const&, bool)
    undefined8 ScriptRunnerImpl::ExecuteCommand7200To7299(undefined4 param_2) {
        undefined4 uVar1;
        char cVar2;
        byte bVar3;
        byte bVar4;
        undefined1 uVar5;
        byte bVar6;
        int iVar7;
        undefined4 uVar8;
        int iVar9;
        uint uVar10;
        Client* this_00;
        EntityOverlays* pEVar11;
        shared_ptr<rs2lib::IfType>* psVar12;
        vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>* pvVar13;
        ClientEntity* pCVar14;
        long lVar15;
        int* piVar16;
        undefined4* puVar17;
        Minimap* pMVar18;
        uint* puVar19;
        undefined8 uVar20;
        ulong uVar21;
        array<int, 1000ul>* this_01;
        char* pcVar22;
        undefined8 uVar23;
        undefined1* puVar24;
        undefined1 auVar25[12];
        undefined8 in_stack_ffffffffffffff58;
        undefined8 uVar26;
        undefined1 local_98[16];
        CoordGrid local_88[2];
        undefined4 local_64;
        CoordGrid local_60;
        array<int, 1000ul>* local_50;
        array<int, 1000ul>* local_48;
        EntityOverlays* local_40;
        undefined4 local_38;
        int local_34;

        uVar8 = (undefined4)((ulong)in_stack_ffffffffffffff58 >> 32);
        this_00 = (Client*)Client::Instance();
        pEVar11 = (EntityOverlays*)this_00->GetEntityOverlays();
        uVar23 = 2;
        switch (param_2) {
        case 7200:
            lVar15 = (long)field_104092;
            field_104092 = (int)(lVar15 - 5U);
            puVar24 = &field_100092;
            local_40 = pEVar11;
            piVar16 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)puVar24, lVar15 - 5U);
            local_34 = *piVar16;
            puVar17 = (undefined4*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)puVar24, lVar15 - 4);
            local_38 = *puVar17;
            puVar17 = (undefined4*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)puVar24, lVar15 - 3);
            local_48 = (array<int, 1000ul>*)CONCAT44(local_48._4_4_, *puVar17);
            puVar17 = (undefined4*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)puVar24, lVar15 - 2);
            uVar1 = *puVar17;
            pCVar14 = (ClientEntity*)this_00->GetClientNpc(m_activeNPC);
            iVar7 = local_34;
            if (pCVar14 != (ClientEntity*)0) {
                local_64 = uVar1;
                local_50 = (array<int, 1000ul>*)puVar24;
                iVar9 = pCVar14->GetScriptedOverlayIndex(local_34);
                pEVar11 = local_40;
                if (iVar9 != -1) {
                    local_40->DestroyOverlay(iVar9);
                }
                iVar9 = pEVar11->CreateOverlay();
                pCVar14->SetScriptedOverlay(iVar7, iVar9);
                psVar12 = (shared_ptr<rs2lib::IfType>*)pEVar11->GetLayer(iVar9);
                lVar15 = shared_ptr<rs2lib::IfType>::operator->(psVar12);
                *(int*)(lVar15 + 56) = (int)local_48;
                lVar15 = shared_ptr<rs2lib::IfType>::operator->(psVar12);
                *(undefined4*)(lVar15 + 60) = local_64;
                lVar15 = shared_ptr<rs2lib::IfType>::operator->(psVar12);
                *(undefined4*)(lVar15 + 112) = local_38;
                uVar21 = (ulong)field_104092;
                field_104092 = field_104092 + 1;
                this_01 = local_50;
                goto LAB_1000b7460;
            }
            uVar23 = logger::default_logger();
            logger::Logger::Log(uVar23, 0, 2,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                                "ScriptRunnerImpl_7200To7299.cpp",
                                52, "Could not create NPC overlay (Overlay ID: %d)", CONCAT44(uVar8, local_34));
            uVar21 = (ulong)field_104092;
            field_104092 = field_104092 + 1;
            goto LAB_1000b7350;
        case 7201:
            lVar15 = (long)field_104092;
            field_104092 = (int)(lVar15 - 5U);
            puVar24 = &field_100092;
            piVar16 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)puVar24, lVar15 - 5U);
            local_34 = *piVar16;
            puVar17 = (undefined4*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)puVar24, lVar15 - 4);
            uVar1 = *puVar17;
            puVar17 = (undefined4*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)puVar24, lVar15 - 3);
            local_40 = (EntityOverlays*)CONCAT44(local_40._4_4_, *puVar17);
            puVar17 = (undefined4*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)puVar24, lVar15 - 2);
            local_38 = *puVar17;
            puVar24 = field_140888;
            cVar2 = puVar24->IsSet();
            if (cVar2 != '\0') {
                local_50 = (array<int, 1000ul>*)CONCAT44(local_50._4_4_, uVar1);
                bVar6 = puVar24->GetShape();
                local_48 = (array<int, 1000ul>*)CONCAT44(local_48._4_4_, (uint)bVar6);
                bVar6 = puVar24->GetRot();
                bVar3 = puVar24->GetDirectionMask();
                new (&local_60) rs2lib::CoordGrid((int)local_48, (uint)bVar6, (uint)bVar3);
                uVar5 = puVar24->GetStopExponent();
                iVar9 = pEVar11->CreateStaticOverlay(local_34, &local_60, uVar5);
                if (iVar9 == -1) {
                    uVar23 = logger::default_logger();
                    local_88->ToString();
                    uVar20 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                    logger::Logger::Log(uVar23, 0, 2,
                                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/"
                                        "osclient/ScriptRunnerImpl_7200To7299.cpp",
                                        82, "Could not create Loc overlay (Invalid coord: %s)", uVar20);
                    local_88->~basic_string();
                } else {
                    psVar12 = (shared_ptr<rs2lib::IfType>*)pEVar11->GetLayer(iVar9);
                    lVar15 = shared_ptr<rs2lib::IfType>::operator->(psVar12);
                    *(int*)(lVar15 + 56) = (int)local_40;
                    lVar15 = shared_ptr<rs2lib::IfType>::operator->(psVar12);
                    *(undefined4*)(lVar15 + 60) = local_38;
                    lVar15 = shared_ptr<rs2lib::IfType>::operator->(psVar12);
                    *(undefined4*)(lVar15 + 112) = local_50._0_4_;
                }
                goto LAB_1000b73e1;
            }
            uVar23 = logger::default_logger();
            uVar26 = CONCAT44(uVar8, local_34);
            pcVar22 = "Could not create Loc overlay (Overlay ID: %d)";
            uVar20 = 88;
        LAB_1000b7335:
            logger::Logger::Log(uVar23, 0, 2,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                                "ScriptRunnerImpl_7200To7299.cpp",
                                uVar20, pcVar22, uVar26);
            uVar21 = (ulong)field_104092;
            field_104092 = field_104092 + 1;
            goto LAB_1000b7350;
        default:
            goto switchD_1000b66ac_caseD_1c22;
        case 7203:
            lVar15 = (long)field_104092;
            field_104092 = (int)(lVar15 - 5U);
            puVar24 = &field_100092;
            piVar16 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)puVar24, lVar15 - 5U);
            local_34 = *piVar16;
            puVar17 = (undefined4*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)puVar24, lVar15 - 4);
            local_40 = (EntityOverlays*)CONCAT44(local_40._4_4_, *puVar17);
            puVar17 = (undefined4*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)puVar24, lVar15 - 3);
            local_38 = *puVar17;
            puVar17 = (undefined4*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)puVar24, lVar15 - 2);
            uVar1 = *puVar17;
            lVar15 = Client::Instance();
            pvVar13 = (vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>*)
                std::array<shared_ptr<ClientPlayer>, 2048ul>::operator[](
                    (array<shared_ptr<ClientPlayer>, 2048ul>*)(lVar15 + 19216), (long)m_activePlayer);
            pCVar14 = (ClientEntity*)eastl::vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(pvVar13);
            iVar9 = local_34;
            if (pCVar14 == (ClientEntity*)0) {
                uVar23 = logger::default_logger();
                uVar26 = CONCAT44(uVar8, local_34);
                pcVar22 = "Could not create Player overlay (Overlay ID: %d)";
                uVar20 = 123;
                goto LAB_1000b7335;
            }
            local_50 = (array<int, 1000ul>*)CONCAT44(local_50._4_4_, uVar1);
            local_48 = (array<int, 1000ul>*)puVar24;
            iVar7 = pCVar14->GetScriptedOverlayIndex(local_34);
            if (iVar7 != -1) {
                pEVar11->DestroyOverlay(iVar7);
            }
            iVar7 = pEVar11->CreateOverlay();
            pCVar14->SetScriptedOverlay(iVar9, iVar7);
            psVar12 = (shared_ptr<rs2lib::IfType>*)pEVar11->GetLayer(iVar7);
            lVar15 = shared_ptr<rs2lib::IfType>::operator->(psVar12);
            *(undefined4*)(lVar15 + 56) = local_38;
            lVar15 = shared_ptr<rs2lib::IfType>::operator->(psVar12);
            *(undefined4*)(lVar15 + 60) = local_50._0_4_;
            lVar15 = shared_ptr<rs2lib::IfType>::operator->(psVar12);
            *(int*)(lVar15 + 112) = (int)local_40;
            iVar9 = field_104092;
            field_104092 = iVar9 + 1;
            piVar16 = (int*)std::array<int, 1000ul>::operator[](local_48, (long)iVar9);
            *piVar16 = iVar7;
            break;
        case 7204:
            uVar21 = (long)field_104092 - 6;
            field_104092 = (int)uVar21;
            this_01 = (array<int, 1000ul>*)&field_100092;
            piVar16 = (int*)std::array<int, 1000ul>::operator[](this_01, uVar21);
            new (&local_60) rs2lib::CoordGrid(*piVar16);
            lVar15 = (long)field_104092;
            piVar16 = (int*)std::array<int, 1000ul>::operator[](this_01, lVar15 + 1);
            local_34 = *piVar16;
            puVar17 = (undefined4*)std::array<int, 1000ul>::operator[](this_01, lVar15 + 2);
            local_40 = (EntityOverlays*)CONCAT44(local_40._4_4_, *puVar17);
            puVar17 = (undefined4*)std::array<int, 1000ul>::operator[](this_01, lVar15 + 3);
            local_38 = *puVar17;
            puVar17 = (undefined4*)std::array<int, 1000ul>::operator[](this_01, lVar15 + 4);
            uVar1 = *puVar17;
            cVar2 = field_140944->IsSet();
            if (cVar2 != '\0') {
                local_48 = (array<int, 1000ul>*)CONCAT44(local_48._4_4_, uVar1);
                local_98->BuildCoordFromWorldCoord(this_00);
                iVar9 = pEVar11->CreateStaticOverlay(local_34, local_98, 4);
                if (iVar9 == -1) {
                    uVar23 = logger::default_logger();
                    local_88->ToString();
                    uVar20 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                    logger::Logger::Log(uVar23, 0, 2,
                                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/"
                                        "osclient/ScriptRunnerImpl_7200To7299.cpp",
                                        153, "Could not create Coord overlay (Invalid coord: %s)", uVar20);
                    local_88->~basic_string();
                } else {
                    psVar12 = (shared_ptr<rs2lib::IfType>*)pEVar11->GetLayer(iVar9);
                    lVar15 = shared_ptr<rs2lib::IfType>::operator->(psVar12);
                    *(undefined4*)(lVar15 + 56) = local_38;
                    lVar15 = shared_ptr<rs2lib::IfType>::operator->(psVar12);
                    *(int*)(lVar15 + 60) = (int)local_48;
                    lVar15 = shared_ptr<rs2lib::IfType>::operator->(psVar12);
                    *(int*)(lVar15 + 112) = (int)local_40;
                }
                uVar21 = (ulong)field_104092;
                field_104092 = field_104092 + 1;
                goto LAB_1000b7460;
            }
            uVar23 = logger::default_logger();
            logger::Logger::Log(uVar23, 0, 2,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                                "ScriptRunnerImpl_7200To7299.cpp",
                                159, "Could not create Loc overlay (Overlay ID: %d)", CONCAT44(uVar8, local_34));
            uVar21 = (ulong)field_104092;
            field_104092 = field_104092 + 1;
        LAB_1000b7350:
            puVar17 = (undefined4*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&field_100092, uVar21);
            *puVar17 = 4294967295;
            break;
        case 7205:
            uVar21 = (long)field_104092 - 1;
            field_104092 = (int)uVar21;
            piVar16 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&field_100092, uVar21);
            iVar9 = *piVar16;
            pCVar14 = (ClientEntity*)this_00->GetClientNpc(m_activeNPC);
            if (pCVar14 == (ClientEntity*)0) {
                uVar10 = 4294967295;
            } else {
                uVar10 = pCVar14->GetScriptedOverlayIndex(iVar9);
            }
            goto LAB_1000b7236;
        case 7206:
            uVar21 = (long)field_104092 - 1;
            field_104092 = (int)uVar21;
            piVar16 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&field_100092, uVar21);
            local_34 = *piVar16;
            puVar24 = field_140888;
            cVar2 = puVar24->IsSet();
            iVar9 = -1;
            if (cVar2 != '\0') {
                bVar6 = puVar24->GetShape();
                local_40 = (EntityOverlays*)CONCAT44(local_40._4_4_, (uint)bVar6);
                bVar6 = puVar24->GetRot();
                bVar3 = puVar24->GetDirectionMask();
                rs2lib::CoordGrid::CoordGrid(local_88, (int)local_40, (uint)bVar6, (uint)bVar3);
                uVar5 = puVar24->GetStopExponent();
                iVar9 = pEVar11->GetStaticOverlayIndex(local_34, local_88, uVar5);
            }
        LAB_1000b73e1:
            uVar21 = (ulong)field_104092;
            field_104092 = field_104092 + 1;
            this_01 = (array<int, 1000ul>*)&field_100092;
        LAB_1000b7460:
            piVar16 = (int*)std::array<int, 1000ul>::operator[](this_01, uVar21);
            *piVar16 = iVar9;
            break;
        case 7208:
            uVar21 = (long)field_104092 - 1;
            field_104092 = (int)uVar21;
            piVar16 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&field_100092, uVar21);
            iVar9 = *piVar16;
            lVar15 = Client::Instance();
            pvVar13 = (vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>*)
                std::array<shared_ptr<ClientPlayer>, 2048ul>::operator[](
                    (array<shared_ptr<ClientPlayer>, 2048ul>*)(lVar15 + 19216), (long)m_activePlayer);
            pCVar14 = (ClientEntity*)eastl::vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(pvVar13);
            if (pCVar14 == (ClientEntity*)0) {
                uVar10 = 4294967295;
            } else {
                uVar10 = pCVar14->GetScriptedOverlayIndex(iVar9);
            }
            uVar21 = (ulong)field_104092;
            field_104092 = field_104092 + 1;
            goto LAB_1000b7379;
        case 7209:
            uVar21 = (long)field_104092 - 2;
            field_104092 = (int)uVar21;
            puVar24 = &field_100092;
            piVar16 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)puVar24, uVar21);
            rs2lib::CoordGrid::CoordGrid(local_88, *piVar16);
            puVar17 =
                (undefined4*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)puVar24, (long)field_104092 + 1);
            uVar8 = *puVar17;
            local_60.BuildCoordFromWorldCoord(this_00);
            uVar8 = pEVar11->GetStaticOverlayIndex(uVar8, &local_60, 4);
            iVar9 = field_104092;
            field_104092 = iVar9 + 1;
            puVar17 = (undefined4*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)puVar24, (long)iVar9);
            *puVar17 = uVar8;
            break;
        case 7210:
            uVar21 = (long)field_104092 - 1;
            field_104092 = (int)uVar21;
            piVar16 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&field_100092, uVar21);
            iVar9 = *piVar16;
            pCVar14 = (ClientEntity*)this_00->GetClientNpc(m_activeNPC);
            goto LAB_1000b6db0;
        case 7211:
            uVar21 = (long)field_104092 - 1;
            field_104092 = (int)uVar21;
            puVar17 = (undefined4*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&field_100092, uVar21);
            uVar8 = *puVar17;
            puVar24 = field_140888;
            cVar2 = puVar24->IsSet();
            if (cVar2 == '\0') {
                return 1;
            }
            bVar6 = puVar24->GetShape();
            local_34 = uVar8;
            bVar3 = puVar24->GetRot();
            bVar4 = puVar24->GetDirectionMask();
            rs2lib::CoordGrid::CoordGrid(local_88, (uint)bVar6, (uint)bVar3, (uint)bVar4);
            uVar5 = puVar24->GetStopExponent();
            pEVar11->DestroyStaticOverlay(local_34, local_88, uVar5);
            return 1;
        case 7213:
            uVar21 = (long)field_104092 - 1;
            field_104092 = (int)uVar21;
            piVar16 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&field_100092, uVar21);
            iVar9 = *piVar16;
            pvVar13 = (vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>*)
                std::array<shared_ptr<ClientPlayer>, 2048ul>::operator[](
                    (array<shared_ptr<ClientPlayer>, 2048ul>*)&this_00->field_19216, (long)m_activePlayer);
            pCVar14 = (ClientEntity*)eastl::vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(pvVar13);
        LAB_1000b6db0:
            if (pCVar14 == (ClientEntity*)0) {
                return 1;
            }
            iVar9 = pCVar14->GetScriptedOverlayIndex(iVar9);
            if (iVar9 == -1) {
                return 1;
            }
            pEVar11->DestroyOverlay(iVar9);
            ClientEntity::RemoveScriptedOverlay((int)pCVar14);
            return 1;
        case 7214:
            uVar21 = (long)field_104092 - 2;
            field_104092 = (int)uVar21;
            piVar16 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&field_100092, uVar21);
            rs2lib::CoordGrid::CoordGrid(local_88, *piVar16);
            puVar17 = (undefined4*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&field_100092,
                                                                       (long)field_104092 + 1);
            uVar8 = *puVar17;
            local_60.BuildCoordFromWorldCoord(this_00);
            pEVar11->DestroyStaticOverlay(uVar8, (Client*)&local_60, 4);
            break;
        case 7250:
            pMVar18 = (Minimap*)std::unique_ptr<minimap::Minimap, std::default_delete<minimap::Minimap>>::operator->(
                (unique_ptr<minimap::Minimap, std::default_delete<minimap::Minimap>>*)&this_00->field_8152);
            uVar21 = (long)field_104092 - 1;
            field_104092 = (int)uVar21;
            piVar16 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&field_100092, uVar21);
            pMVar18->SetZoomable(*piVar16 == 1);
            break;
        case 7251:
            pMVar18 = (Minimap*)std::unique_ptr<minimap::Minimap, std::default_delete<minimap::Minimap>>::operator->(
                (unique_ptr<minimap::Minimap, std::default_delete<minimap::Minimap>>*)&this_00->field_8152);
            bVar6 = pMVar18->GetZoomable();
            uVar10 = (uint)bVar6;
            goto LAB_1000b717e;
        case 7252:
            uVar21 = (long)field_104092 - 1;
            field_104092 = (int)uVar21;
            piVar16 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&field_100092, uVar21);
            this_00->SetMinimapZoom(*piVar16);
            break;
        case 7253:
            pMVar18 = (Minimap*)std::unique_ptr<minimap::Minimap, std::default_delete<minimap::Minimap>>::operator->(
                (unique_ptr<minimap::Minimap, std::default_delete<minimap::Minimap>>*)&this_00->field_8152);
            uVar10 = pMVar18->GetZoom();
            goto LAB_1000b717e;
        case 7254:
            pMVar18 = (Minimap*)std::unique_ptr<minimap::Minimap, std::default_delete<minimap::Minimap>>::operator->(
                (unique_ptr<minimap::Minimap, std::default_delete<minimap::Minimap>>*)&this_00->field_8152);
            uVar21 = (long)field_104092 - 1;
            field_104092 = (int)uVar21;
            piVar16 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&field_100092, uVar21);
            pMVar18->SetIconZoomLimit(*piVar16);
            break;
        case 7255:
            pMVar18 = (Minimap*)std::unique_ptr<minimap::Minimap, std::default_delete<minimap::Minimap>>::operator->(
                (unique_ptr<minimap::Minimap, std::default_delete<minimap::Minimap>>*)&this_00->field_8152);
            uVar10 = pMVar18->GetIconZoomLimit();
            goto LAB_1000b717e;
        case 7256:
            this_00->RedrawMinimap();
            break;
        case 7257:
            lVar15 = (long)field_104092;
            field_104092 = (int)(lVar15 - 4U);
            puVar24 = &field_100092;
            puVar17 = (undefined4*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)puVar24, lVar15 - 3);
            local_34 = *puVar17;
            puVar17 = (undefined4*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)puVar24, lVar15 - 2);
            uVar8 = *puVar17;
            pMVar18 = (Minimap*)std::unique_ptr<minimap::Minimap, std::default_delete<minimap::Minimap>>::operator->(
                (unique_ptr<minimap::Minimap, std::default_delete<minimap::Minimap>>*)&this_00->field_8152);
            puVar17 = (undefined4*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)puVar24, lVar15 - 4U);
            uVar1 = *puVar17;
            puVar17 = (undefined4*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)puVar24, lVar15 - 1);
            pMVar18->SetDotStyle(uVar1, local_34, uVar8, *puVar17);
            break;
        case 7258:
            puVar24 = &field_100092;
            uVar21 = (long)field_104092 - 1;
            field_104092 = (int)uVar21;
            puVar17 = (undefined4*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)puVar24, uVar21);
            uVar8 = *puVar17;
            pMVar18 = (Minimap*)std::unique_ptr<minimap::Minimap, std::default_delete<minimap::Minimap>>::operator->(
                (unique_ptr<minimap::Minimap, std::default_delete<minimap::Minimap>>*)&this_00->field_8152);
            auVar25 = pMVar18->GetDotStyle(uVar8);
            iVar9 = field_104092;
            field_104092 = iVar9 + 1;
            puVar17 = (undefined4*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)puVar24, (long)iVar9);
            *puVar17 = auVar25._0_4_;
            iVar9 = field_104092;
            field_104092 = iVar9 + 1;
            puVar17 = (undefined4*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)puVar24, (long)iVar9);
            *puVar17 = auVar25._4_4_;
            iVar9 = field_104092;
            field_104092 = iVar9 + 1;
            puVar17 = (undefined4*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)puVar24, (long)iVar9);
            *puVar17 = auVar25._8_4_;
            break;
        case 7259:
            iVar9 = field_104092;
            uVar21 = (long)iVar9 - 2;
            field_104092 = (int)uVar21;
            puVar17 = (undefined4*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&field_100092, uVar21);
            uVar8 = *puVar17;
            piVar16 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&field_100092, (long)iVar9 - 1);
            iVar9 = *piVar16;
            pMVar18 = (Minimap*)std::unique_ptr<minimap::Minimap, std::default_delete<minimap::Minimap>>::operator->(
                (unique_ptr<minimap::Minimap, std::default_delete<minimap::Minimap>>*)&this_00->field_8152);
            pMVar18->SetDotVisible(uVar8, iVar9 != 0);
            break;
        case 7260:
            uVar21 = (long)field_104092 - 1;
            field_104092 = (int)uVar21;
            puVar17 = (undefined4*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&field_100092, uVar21);
            uVar8 = *puVar17;
            pMVar18 = (Minimap*)std::unique_ptr<minimap::Minimap, std::default_delete<minimap::Minimap>>::operator->(
                (unique_ptr<minimap::Minimap, std::default_delete<minimap::Minimap>>*)&this_00->field_8152);
            bVar6 = pMVar18->GetDotVisible(uVar8);
            goto LAB_1000b7233;
        case 7261:
            uVar21 = (long)field_104092 - 1;
            field_104092 = (int)uVar21;
            piVar16 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&field_100092, uVar21);
            iVar9 = *piVar16;
            lVar15 = std::unique_ptr<minimap::Minimap, std::default_delete<minimap::Minimap>>::operator->(
                (unique_ptr<minimap::Minimap, std::default_delete<minimap::Minimap>>*)&this_00->field_8152);
            *(bool*)(lVar15 + 8) = iVar9 != 0;
            break;
        case 7262:
            lVar15 = std::unique_ptr<minimap::Minimap, std::default_delete<minimap::Minimap>>::operator->(
                (unique_ptr<minimap::Minimap, std::default_delete<minimap::Minimap>>*)&this_00->field_8152);
            uVar10 = (uint) * (byte*)(lVar15 + 8);
        LAB_1000b717e:
            uVar21 = (ulong)field_104092;
            field_104092 = field_104092 + 1;
        LAB_1000b7379:
            puVar19 = (uint*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&field_100092, uVar21);
            *puVar19 = uVar10;
            break;
        case 7263:
            iVar9 = field_104092;
            uVar21 = (long)iVar9 - 2;
            field_104092 = (int)uVar21;
            puVar17 = (undefined4*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&field_100092, uVar21);
            uVar8 = *puVar17;
            piVar16 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&field_100092, (long)iVar9 - 1);
            iVar9 = *piVar16;
            pMVar18 = (Minimap*)std::unique_ptr<minimap::Minimap, std::default_delete<minimap::Minimap>>::operator->(
                (unique_ptr<minimap::Minimap, std::default_delete<minimap::Minimap>>*)&this_00->field_8152);
            pMVar18->SetDrawDisplayname(uVar8, iVar9 != 0);
            break;
        case 7264:
            uVar21 = (long)field_104092 - 1;
            field_104092 = (int)uVar21;
            puVar17 = (undefined4*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&field_100092, uVar21);
            uVar8 = *puVar17;
            pMVar18 = (Minimap*)std::unique_ptr<minimap::Minimap, std::default_delete<minimap::Minimap>>::operator->(
                (unique_ptr<minimap::Minimap, std::default_delete<minimap::Minimap>>*)&this_00->field_8152);
            bVar6 = pMVar18->GetDrawDisplayname(uVar8);
        LAB_1000b7233:
            uVar10 = (uint)bVar6;
        LAB_1000b7236:
            uVar21 = (ulong)field_104092;
            field_104092 = field_104092 + 1;
            goto LAB_1000b7379;
        }
        uVar23 = 1;
    switchD_1000b66ac_caseD_1c22:
        return uVar23;
    }

} // namespace jag::oldscape
