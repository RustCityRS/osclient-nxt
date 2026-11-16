// projects/osclient/ScriptRunnerImpl_7200To7299.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: osclient

#include "ScriptRunnerImpl.h"

namespace jag::oldscape {
    // 0x1000b6660
    uint64_t ScriptRunnerImpl::ExecuteCommand7200To7299(ScriptOp scriptOp, const ClientScript& clientScript,
                                                        bool arg3) {
        uint32_t uVar1;
        MiniDotCategory MVar2;
        bool cVar3;
        uint8_t bVar4;
        uint8_t bVar5;
        uint8_t bVar6;
        int iVar7;
        int iVar9;
        unsigned int uVar10;
        shared_ptr<rs2lib::IfType>* psVar13;
        vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>* pvVar14;
        ClientEntity* pCVar15;
        uint32_t* puVar16;
        long lVar17;
        int* piVar18;
        MiniDotCategory* pMVar19;
        Minimap* pMVar20;
        unsigned int* puVar21;
        Logger* pLVar22;
        unsigned long uVar23;
        array<int, 1000ul>* this_00;
        char* str2;
        uint8_t* puVar25;
        uint8_t auVar26[12];
        uint64_t in_stack_ffffffffffffff58;
        CoordGrid local_98;
        CoordGrid local_88;
        uint32_t local_64;
        CoordGrid local_60;
        array<int, 1000ul>* local_50;
        array<int, 1000ul>* local_48;
        EntityOverlays* local_40;
        uint32_t local_38;
        unsigned int local_34;

        uint32_t uVar8 = (uint32_t)((unsigned long)in_stack_ffffffffffffff58 >> 32);
        auto pCVar11 = Client::Instance();
        auto pEVar12 = pCVar11->GetEntityOverlays();
        uint64_t uVar24 = 2;
        switch (scriptOp) {
        case 7200:
            lVar17 = (long)field_104092;
            field_104092 = (int)(lVar17 - 5U);
            puVar25 = &field_100092;
            local_40 = pEVar12;
            piVar18 = (int*)(*puVar25)[lVar17 - 5U];
            local_34 = *piVar18;
            puVar16 = (uint32_t*)(*puVar25)[lVar17 - 4];
            local_38 = *puVar16;
            puVar16 = (uint32_t*)(*puVar25)[lVar17 - 3];
            local_48 = (array<int, 1000ul>*)(((uint64_t)local_48._4_4_ << 32) | (uint32_t)(*puVar16));
            puVar16 = (uint32_t*)(*puVar25)[lVar17 - 2];
            uVar1 = *puVar16;
            pCVar15 = (ClientEntity*)pCVar11->GetClientNpc(m_activeNPC);
            uVar10 = local_34;
            if (pCVar15 != nullptr) {
                local_64 = uVar1;
                local_50 = (array<int, 1000ul>*)puVar25;
                iVar7 = pCVar15->GetScriptedOverlayIndex(local_34);
                pEVar12 = local_40;
                if (iVar7 != -1) {
                    local_40->DestroyOverlay(iVar7);
                }
                iVar7 = pEVar12->CreateOverlay();
                pCVar15->SetScriptedOverlay(uVar10, iVar7);
                psVar13 = (shared_ptr<rs2lib::IfType>*)pEVar12->GetLayer(iVar7);
                lVar17 = (*psVar13).operator->();
                *(int*)(lVar17 + 56) = (int)local_48;
                lVar17 = (*psVar13).operator->();
                *(uint32_t*)(lVar17 + 60) = local_64;
                lVar17 = (*psVar13).operator->();
                *(uint32_t*)(lVar17 + 112) = local_38;
                uVar23 = (unsigned long)field_104092;
                field_104092 = field_104092 + 1;
                this_00 = local_50;
                goto LAB_1000b7460;
            }
            pLVar22 = logger::default_logger();
            pLVar22->Log(false, 2,
                         "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                         "ScriptRunnerImpl_7200To7299.cpp",
                         52, "Could not create NPC overlay (Overlay ID: %d)",
                         (((uint64_t)uVar8 << 32) | (uint32_t)local_34));
            uVar23 = (unsigned long)field_104092;
            field_104092 = field_104092 + 1;
            goto LAB_1000b7350;
        case 7201:
            lVar17 = (long)field_104092;
            field_104092 = (int)(lVar17 - 5U);
            puVar25 = &field_100092;
            piVar18 = (int*)(*puVar25)[lVar17 - 5U];
            local_34 = *piVar18;
            puVar16 = (uint32_t*)(*puVar25)[lVar17 - 4];
            uVar1 = *puVar16;
            puVar16 = (uint32_t*)(*puVar25)[lVar17 - 3];
            local_40 = (EntityOverlays*)(((uint64_t)local_40._4_4_ << 32) | (uint32_t)(*puVar16));
            puVar16 = (uint32_t*)(*puVar25)[lVar17 - 2];
            local_38 = *puVar16;
            puVar25 = field_140888;
            cVar3 = puVar25->IsSet();
            if (cVar3) {
                local_50 = (array<int, 1000ul>*)(((uint64_t)local_50._4_4_ << 32) | (uint32_t)uVar1);
                bVar6 = puVar25->GetShape();
                local_48 = (array<int, 1000ul>*)(((uint64_t)local_48._4_4_ << 32) | (uint32_t)((unsigned int)bVar6));
                bVar6 = puVar25->GetRot();
                bVar4 = puVar25->GetDirectionMask();
                local_60 = rs2lib::CoordGrid((int)local_48, (unsigned int)bVar6, (unsigned int)bVar4);
                bVar6 = puVar25->GetStopExponent();
                iVar7 = pEVar12->CreateStaticOverlay(local_34, local_60, (unsigned int)bVar6);
                if (iVar7 == -1) {
                    pLVar22 = logger::default_logger();
                    local_88 = local_60.ToString();
                    uVar24 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                    pLVar22->Log(false, 2,
                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                                 "ScriptRunnerImpl_7200To7299.cpp",
                                 82, "Could not create Loc overlay (Invalid coord: %s)", uVar24);
                } else {
                    psVar13 = (shared_ptr<rs2lib::IfType>*)pEVar12->GetLayer(iVar7);
                    lVar17 = (*psVar13).operator->();
                    *(int*)(lVar17 + 56) = (int)local_40;
                    lVar17 = (*psVar13).operator->();
                    *(uint32_t*)(lVar17 + 60) = local_38;
                    lVar17 = (*psVar13).operator->();
                    *(uint32_t*)(lVar17 + 112) = local_50._0_4_;
                }
                goto LAB_1000b73e1;
            }
            pLVar22 = logger::default_logger();
            uVar24 = (((uint64_t)uVar8 << 32) | (uint32_t)local_34);
            str2 = "Could not create Loc overlay (Overlay ID: %d)";
            iVar7 = 88;
        LAB_1000b7335:
            pLVar22->Log(false, 2,
                         "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                         "ScriptRunnerImpl_7200To7299.cpp",
                         iVar7, str2, uVar24);
            uVar23 = (unsigned long)field_104092;
            field_104092 = field_104092 + 1;
            goto LAB_1000b7350;
        default:
            goto switchD_1000b66ac_caseD_1c22;
        case 7203:
            lVar17 = (long)field_104092;
            field_104092 = (int)(lVar17 - 5U);
            puVar25 = &field_100092;
            piVar18 = (int*)(*puVar25)[lVar17 - 5U];
            local_34 = *piVar18;
            puVar16 = (uint32_t*)(*puVar25)[lVar17 - 4];
            local_40 = (EntityOverlays*)(((uint64_t)local_40._4_4_ << 32) | (uint32_t)(*puVar16));
            puVar16 = (uint32_t*)(*puVar25)[lVar17 - 3];
            local_38 = *puVar16;
            puVar16 = (uint32_t*)(*puVar25)[lVar17 - 2];
            uVar1 = *puVar16;
            pCVar11 = Client::Instance();
            pvVar14 = &pCVar11->field_19216[(long)(int)m_activePlayer];
            pCVar15 = (ClientEntity*)pvVar14->end();
            uVar10 = local_34;
            if (pCVar15 == nullptr) {
                pLVar22 = logger::default_logger();
                uVar24 = (((uint64_t)uVar8 << 32) | (uint32_t)local_34);
                str2 = "Could not create Player overlay (Overlay ID: %d)";
                iVar7 = 123;
                goto LAB_1000b7335;
            }
            local_50 = (array<int, 1000ul>*)(((uint64_t)local_50._4_4_ << 32) | (uint32_t)uVar1);
            local_48 = (array<int, 1000ul>*)puVar25;
            iVar7 = pCVar15->GetScriptedOverlayIndex(local_34);
            if (iVar7 != -1) {
                pEVar12->DestroyOverlay(iVar7);
            }
            iVar9 = pEVar12->CreateOverlay();
            pCVar15->SetScriptedOverlay(uVar10, iVar9);
            psVar13 = (shared_ptr<rs2lib::IfType>*)pEVar12->GetLayer(iVar9);
            lVar17 = (*psVar13).operator->();
            *(uint32_t*)(lVar17 + 56) = local_38;
            lVar17 = (*psVar13).operator->();
            *(uint32_t*)(lVar17 + 60) = local_50._0_4_;
            lVar17 = (*psVar13).operator->();
            *(int*)(lVar17 + 112) = (int)local_40;
            iVar7 = field_104092;
            field_104092 = iVar7 + 1;
            piVar18 = (int*)(*local_48)[(long)iVar7];
            *piVar18 = iVar9;
            break;
        case 7204:
            uVar23 = (long)field_104092 - 6;
            field_104092 = (int)uVar23;
            this_00 = (array<int, 1000ul>*)&field_100092;
            piVar18 = (int*)(*this_00)[uVar23];
            local_60 = rs2lib::CoordGrid(*piVar18);
            lVar17 = (long)field_104092;
            piVar18 = (int*)(*this_00)[lVar17 + 1];
            local_34 = *piVar18;
            puVar16 = (uint32_t*)(*this_00)[lVar17 + 2];
            local_40 = (EntityOverlays*)(((uint64_t)local_40._4_4_ << 32) | (uint32_t)(*puVar16));
            puVar16 = (uint32_t*)(*this_00)[lVar17 + 3];
            local_38 = *puVar16;
            puVar16 = (uint32_t*)(*this_00)[lVar17 + 4];
            uVar1 = *puVar16;
            cVar3 = field_140944->IsSet();
            if (cVar3) {
                local_48 = (array<int, 1000ul>*)(((uint64_t)local_48._4_4_ << 32) | (uint32_t)uVar1);
                local_98 = pCVar11->BuildCoordFromWorldCoord(local_60);
                iVar7 = pEVar12->CreateStaticOverlay(local_34, local_98, 4);
                if (iVar7 == -1) {
                    pLVar22 = logger::default_logger();
                    local_88 = local_98.ToString();
                    uVar24 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                    pLVar22->Log(false, 2,
                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                                 "ScriptRunnerImpl_7200To7299.cpp",
                                 153, "Could not create Coord overlay (Invalid coord: %s)", uVar24);
                } else {
                    psVar13 = (shared_ptr<rs2lib::IfType>*)pEVar12->GetLayer(iVar7);
                    lVar17 = (*psVar13).operator->();
                    *(uint32_t*)(lVar17 + 56) = local_38;
                    lVar17 = (*psVar13).operator->();
                    *(int*)(lVar17 + 60) = (int)local_48;
                    lVar17 = (*psVar13).operator->();
                    *(int*)(lVar17 + 112) = (int)local_40;
                }
                uVar23 = (unsigned long)field_104092;
                field_104092 = field_104092 + 1;
                goto LAB_1000b7460;
            }
            pLVar22 = logger::default_logger();
            pLVar22->Log(false, 2,
                         "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                         "ScriptRunnerImpl_7200To7299.cpp",
                         159, "Could not create Loc overlay (Overlay ID: %d)",
                         (((uint64_t)uVar8 << 32) | (uint32_t)local_34));
            uVar23 = (unsigned long)field_104092;
            field_104092 = field_104092 + 1;
        LAB_1000b7350:
            puVar16 = &field_100092[uVar23];
            *puVar16 = 4294967295;
            break;
        case 7205:
            uVar23 = (long)field_104092 - 1;
            field_104092 = (int)uVar23;
            piVar18 = &field_100092[uVar23];
            iVar7 = *piVar18;
            pCVar15 = (ClientEntity*)pCVar11->GetClientNpc(m_activeNPC);
            if (pCVar15 == nullptr) {
                uVar10 = 4294967295;
            } else {
                uVar10 = pCVar15->GetScriptedOverlayIndex(iVar7);
            }
            goto LAB_1000b7236;
        case 7206:
            uVar23 = (long)field_104092 - 1;
            field_104092 = (int)uVar23;
            piVar18 = &field_100092[uVar23];
            local_34 = *piVar18;
            puVar25 = field_140888;
            cVar3 = puVar25->IsSet();
            iVar7 = -1;
            if (cVar3) {
                bVar6 = puVar25->GetShape();
                local_40 = (EntityOverlays*)(((uint64_t)local_40._4_4_ << 32) | (uint32_t)((unsigned int)bVar6));
                bVar6 = puVar25->GetRot();
                bVar4 = puVar25->GetDirectionMask();
                local_88 = rs2lib::CoordGrid((int)local_40, (unsigned int)bVar6, (unsigned int)bVar4);
                bVar6 = puVar25->GetStopExponent();
                iVar7 = pEVar12->GetStaticOverlayIndex(local_34, local_88, (unsigned int)bVar6);
            }
        LAB_1000b73e1:
            uVar23 = (unsigned long)field_104092;
            field_104092 = field_104092 + 1;
            this_00 = (array<int, 1000ul>*)&field_100092;
        LAB_1000b7460:
            piVar18 = (int*)(*this_00)[uVar23];
            *piVar18 = iVar7;
            break;
        case 7208:
            uVar23 = (long)field_104092 - 1;
            field_104092 = (int)uVar23;
            piVar18 = &field_100092[uVar23];
            iVar7 = *piVar18;
            pCVar11 = Client::Instance();
            pvVar14 = &pCVar11->field_19216[(long)(int)m_activePlayer];
            pCVar15 = (ClientEntity*)pvVar14->end();
            if (pCVar15 == nullptr) {
                uVar10 = 4294967295;
            } else {
                uVar10 = pCVar15->GetScriptedOverlayIndex(iVar7);
            }
            uVar23 = (unsigned long)field_104092;
            field_104092 = field_104092 + 1;
            goto LAB_1000b7379;
        case 7209:
            uVar23 = (long)field_104092 - 2;
            field_104092 = (int)uVar23;
            puVar25 = &field_100092;
            piVar18 = (int*)(*puVar25)[uVar23];
            local_88 = rs2lib::CoordGrid(*piVar18);
            piVar18 = (int*)(*puVar25)[(long)field_104092 + 1];
            iVar7 = *piVar18;
            local_60 = pCVar11->BuildCoordFromWorldCoord(local_88);
            uVar8 = pEVar12->GetStaticOverlayIndex(iVar7, local_60, 4);
            iVar7 = field_104092;
            field_104092 = iVar7 + 1;
            puVar16 = (uint32_t*)(*puVar25)[(long)iVar7];
            *puVar16 = uVar8;
            break;
        case 7210:
            uVar23 = (long)field_104092 - 1;
            field_104092 = (int)uVar23;
            piVar18 = &field_100092[uVar23];
            iVar7 = *piVar18;
            pCVar15 = (ClientEntity*)pCVar11->GetClientNpc(m_activeNPC);
            goto LAB_1000b6db0;
        case 7211:
            uVar23 = (long)field_104092 - 1;
            field_104092 = (int)uVar23;
            piVar18 = &field_100092[uVar23];
            iVar7 = *piVar18;
            puVar25 = field_140888;
            cVar3 = puVar25->IsSet();
            if (!cVar3) {
                return 1;
            }
            bVar6 = puVar25->GetShape();
            local_34 = iVar7;
            bVar4 = puVar25->GetRot();
            bVar5 = puVar25->GetDirectionMask();
            local_88 = rs2lib::CoordGrid((unsigned int)bVar6, (unsigned int)bVar4, (unsigned int)bVar5);
            bVar6 = puVar25->GetStopExponent();
            pEVar12->DestroyStaticOverlay(local_34, local_88, (unsigned int)bVar6);
            return 1;
        case 7213:
            uVar23 = (long)field_104092 - 1;
            field_104092 = (int)uVar23;
            piVar18 = &field_100092[uVar23];
            iVar7 = *piVar18;
            pvVar14 = &pCVar11->field_19216[(long)(int)m_activePlayer];
            pCVar15 = (ClientEntity*)pvVar14->end();
        LAB_1000b6db0:
            if (pCVar15 == nullptr) {
                return 1;
            }
            iVar9 = pCVar15->GetScriptedOverlayIndex(iVar7);
            if (iVar9 == -1) {
                return 1;
            }
            pEVar12->DestroyOverlay(iVar9);
            pCVar15->RemoveScriptedOverlay(iVar7);
            return 1;
        case 7214:
            uVar23 = (long)field_104092 - 2;
            field_104092 = (int)uVar23;
            piVar18 = &field_100092[uVar23];
            local_88 = rs2lib::CoordGrid(*piVar18);
            piVar18 = &field_100092[(long)field_104092 + 1];
            iVar7 = *piVar18;
            local_60 = pCVar11->BuildCoordFromWorldCoord(local_88);
            pEVar12->DestroyStaticOverlay(iVar7, local_60, 4);
            break;
        case 7250:
            pMVar20 = (Minimap*)pCVar11->field_8152.operator->();
            uVar23 = (long)field_104092 - 1;
            field_104092 = (int)uVar23;
            piVar18 = &field_100092[uVar23];
            pMVar20->SetZoomable(*piVar18 == 1);
            break;
        case 7251:
            pMVar20 = (Minimap*)pCVar11->field_8152.operator->();
            bVar6 = pMVar20->GetZoomable();
            uVar10 = (unsigned int)bVar6;
            goto LAB_1000b717e;
        case 7252:
            uVar23 = (long)field_104092 - 1;
            field_104092 = (int)uVar23;
            piVar18 = &field_100092[uVar23];
            pCVar11->SetMinimapZoom(*piVar18);
            break;
        case 7253:
            pMVar20 = (Minimap*)pCVar11->field_8152.operator->();
            uVar10 = pMVar20->GetZoom();
            goto LAB_1000b717e;
        case 7254:
            pMVar20 = (Minimap*)pCVar11->field_8152.operator->();
            uVar23 = (long)field_104092 - 1;
            field_104092 = (int)uVar23;
            piVar18 = &field_100092[uVar23];
            pMVar20->SetIconZoomLimit(*piVar18);
            break;
        case 7255:
            pMVar20 = (Minimap*)pCVar11->field_8152.operator->();
            uVar10 = pMVar20->GetIconZoomLimit();
            goto LAB_1000b717e;
        case 7256:
            pCVar11->RedrawMinimap();
            break;
        case 7257:
            lVar17 = (long)field_104092;
            field_104092 = (int)(lVar17 - 4U);
            puVar25 = &field_100092;
            puVar21 = (unsigned int*)(*puVar25)[lVar17 - 3];
            local_34 = *puVar21;
            puVar21 = (unsigned int*)(*puVar25)[lVar17 - 2];
            uVar10 = *puVar21;
            pMVar20 = (Minimap*)pCVar11->field_8152.operator->();
            pMVar19 = (MiniDotCategory*)(*puVar25)[lVar17 - 4U];
            MVar2 = *pMVar19;
            piVar18 = (int*)(*puVar25)[lVar17 - 1];
            pMVar20->SetDotStyle(MVar2, local_34, uVar10, *piVar18);
            break;
        case 7258:
            puVar25 = &field_100092;
            uVar23 = (long)field_104092 - 1;
            field_104092 = (int)uVar23;
            pMVar19 = (MiniDotCategory*)(*puVar25)[uVar23];
            MVar2 = *pMVar19;
            pMVar20 = (Minimap*)pCVar11->field_8152.operator->();
            auVar26 = pMVar20->GetDotStyle(MVar2);
            iVar7 = field_104092;
            field_104092 = iVar7 + 1;
            puVar16 = (uint32_t*)(*puVar25)[(long)iVar7];
            *puVar16 = auVar26._0_4_;
            iVar7 = field_104092;
            field_104092 = iVar7 + 1;
            puVar16 = (uint32_t*)(*puVar25)[(long)iVar7];
            *puVar16 = auVar26._4_4_;
            iVar7 = field_104092;
            field_104092 = iVar7 + 1;
            puVar16 = (uint32_t*)(*puVar25)[(long)iVar7];
            *puVar16 = auVar26._8_4_;
            break;
        case 7259:
            iVar7 = field_104092;
            uVar23 = (long)iVar7 - 2;
            field_104092 = (int)uVar23;
            pMVar19 = &field_100092[uVar23];
            MVar2 = *pMVar19;
            piVar18 = &field_100092[(long)iVar7 - 1];
            iVar7 = *piVar18;
            pMVar20 = (Minimap*)pCVar11->field_8152.operator->();
            pMVar20->SetDotVisible(MVar2, iVar7 != 0);
            break;
        case 7260:
            uVar23 = (long)field_104092 - 1;
            field_104092 = (int)uVar23;
            pMVar19 = &field_100092[uVar23];
            MVar2 = *pMVar19;
            pMVar20 = (Minimap*)pCVar11->field_8152.operator->();
            bVar6 = pMVar20->GetDotVisible(MVar2);
            goto LAB_1000b7233;
        case 7261:
            uVar23 = (long)field_104092 - 1;
            field_104092 = (int)uVar23;
            piVar18 = &field_100092[uVar23];
            iVar7 = *piVar18;
            lVar17 = pCVar11->field_8152.operator->();
            *(bool*)(lVar17 + 8) = iVar7 != 0;
            break;
        case 7262:
            lVar17 = pCVar11->field_8152.operator->();
            uVar10 = (unsigned int)*(uint8_t*)(lVar17 + 8);
        LAB_1000b717e:
            uVar23 = (unsigned long)field_104092;
            field_104092 = field_104092 + 1;
        LAB_1000b7379:
            puVar21 = &field_100092[uVar23];
            *puVar21 = uVar10;
            break;
        case 7263:
            iVar7 = field_104092;
            uVar23 = (long)iVar7 - 2;
            field_104092 = (int)uVar23;
            pMVar19 = &field_100092[uVar23];
            MVar2 = *pMVar19;
            piVar18 = &field_100092[(long)iVar7 - 1];
            iVar7 = *piVar18;
            pMVar20 = (Minimap*)pCVar11->field_8152.operator->();
            pMVar20->SetDrawDisplayname(MVar2, iVar7 != 0);
            break;
        case 7264:
            uVar23 = (long)field_104092 - 1;
            field_104092 = (int)uVar23;
            pMVar19 = &field_100092[uVar23];
            MVar2 = *pMVar19;
            pMVar20 = (Minimap*)pCVar11->field_8152.operator->();
            bVar6 = pMVar20->GetDrawDisplayname(MVar2);
        LAB_1000b7233:
            uVar10 = (unsigned int)bVar6;
        LAB_1000b7236:
            uVar23 = (unsigned long)field_104092;
            field_104092 = field_104092 + 1;
            goto LAB_1000b7379;
        }
        uVar24 = 1;
    switchD_1000b66ac_caseD_1c22:
        return uVar24;
    }

} // namespace jag::oldscape
