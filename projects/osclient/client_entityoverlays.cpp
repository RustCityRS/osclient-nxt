// projects/osclient/client_entityoverlays.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: osclient

#include "client.h"

namespace jag::oldscape {
    // 0x1000faeb0, 5792 bytes, placed by class name and debug map
    // Client::GdmEntityOverlays(int, int, int, int, int)
    void Client::GdmEntityOverlays(int param_1, int param_2, int param_3, int param_4, int param_5) {
        undefined1* puVar1;
        ulong uVar2;
        char cVar3;
        bool bVar4;
        undefined1 uVar5;
        int iVar6;
        undefined4 uVar7;
        uint uVar8;
        undefined4 uVar9;
        undefined4 uVar10;
        int iVar11;
        int iVar12;
        shared_ptr<ClientPlayer>* psVar13;
        ClientEntity* pCVar14;
        ClientPlayer* pCVar15;
        shared_ptr<ClientNpc>* psVar16;
        ClientNpc* pCVar17;
        undefined8* puVar18;
        world* this_00;
        Layout* this_01;
        array<int, 50ul>* paVar19;
        ClientEntityID* pCVar20;
        ClientEntityID* pCVar21;
        uint* puVar22;
        int* piVar23;
        undefined4* puVar24;
        basic_string* pbVar25;
        PixfontGeneric* pPVar26;
        vector* pvVar27;
        undefined4 in_register_00000014;
        Client* pCVar28;
        ulong uVar29;
        undefined4 in_register_00000034;
        long lVar30;
        long lVar31;
        uint uVar32;
        ulong uVar33;
        Client* pCVar34;
        bool bVar35;
        undefined8 in_stack_ffffffffffffbfb8;
        undefined8 in_stack_ffffffffffffbfc0;
        undefined4 uVar36;
        undefined8 in_stack_ffffffffffffbfc8;
        undefined4 uVar37;
        undefined8 in_stack_ffffffffffffbfd0;
        undefined4 uVar38;
        HiddenEntityInfo local_4000;
        HiddenEntityInfo local_3fe8;
        int local_3fd0;
        int local_3fcc;
        uint* local_3fc8;
        undefined1 local_3fc0[16];
        array<int, 50ul>* local_3fb0;
        array<int, 50ul>* local_3fa8;
        array<int, 50ul>* local_3fa0;
        uint local_3f94;
        array<eastl::vector<int, eastl::allocator>, 50ul>* local_3f90;
        Array<int, eastl::allocator>* local_3f88;
        basic_string* local_3f80;
        PixfontGeneric* local_3f78;
        shared_ptr<jstring::PixfontGeneric>* local_3f70;
        Pix2D* local_3f68;
        undefined8 local_3f60;
        ulong local_3f58;
        array<shared_ptr<ClientNpc>, 65536ul>* local_3f50;
        ulong local_3f48;
        undefined8 local_3f40;
        int local_3f38;
        int local_3f34;
        Client* local_3f30;
        fixed_vector<HiddenEntityInfo, 501ul, true, eastl::allocator> local_3f28[8056];
        fixed_vector<HiddenEntityInfo, 501ul, true, eastl::allocator> local_1fb0[8056];
        long local_38;

        local_3f60 = CONCAT44(in_register_00000034, param_1);
        local_3f58 = CONCAT44(in_register_00000014, param_2);
        local_3f48 = CONCAT44(local_3f48._4_4_, param_5);
        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        local_3f38 = param_3;
        local_3f34 = param_4;
        eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
        field_1115872 = 0;
        eastl::fixed_vector<HiddenEntityInfo, 501ul, true, eastl::allocator>::fixed_vector(local_1fb0);
        eastl::fixed_vector<HiddenEntityInfo, 501ul, true, eastl::allocator>::fixed_vector(local_3f28);
        lVar30 = (long)ReceivePlayerPositions::m_lastNum;
        local_3f50 = (array<shared_ptr<ClientNpc>, 65536ul>*)&field_55272;
        local_3fc0._8_8_ = &field_19216;
        iVar6 = m_nPCCount + ReceivePlayerPositions::m_lastNum;
        local_3f30 = this;
        if (iVar6 != 0 && SCARRY4(m_nPCCount, ReceivePlayerPositions::m_lastNum) == iVar6 < 0) {
            local_3f88 = (Array<int, eastl::allocator>*)&field_1103856;
            local_3f40 = (PixfontGeneric*)-lVar30;
            lVar31 = 0;
            do {
                new (&local_4000) ClientEntityID();
                new (local_3fc0) ClientEntityID();
                if (lVar31 < lVar30) {
                    psVar13 = (shared_ptr<ClientPlayer>*)std::array<shared_ptr<ClientPlayer>, 2048ul>::operator[](
                        (array<shared_ptr<ClientPlayer>, 2048ul>*)local_3fc0._8_8_,
                        (long)(int)(&ReceivePlayerPositions::m_lastID)[lVar31]);
                    pCVar14 = (ClientEntity*)shared_ptr<ClientPlayer>::operator->(psVar13);
                    cVar3 = pCVar14->IsHiddenBelowOtherEntity();
                    if (cVar3 != '\0') {
                        pCVar15 = (ClientPlayer*)shared_ptr<ClientPlayer>::operator->(psVar13);
                        cVar3 = pCVar15->HasAnyOverlays(local_3f30->field_8488, *(int*)&local_3f30->field_54896);
                        if (cVar3 != '\0') {
                            new (&local_3fe8) game::LightProbeManager::MapSquareUpdateInfo(
                                1, (&ReceivePlayerPositions::m_lastID)[lVar31]);
                            local_4000.field_0 = local_3fe8.field_0;
                            local_4000.field_2 = local_3fe8.field_2;
                            local_4000.field_4 = local_3fe8.field_4;
                            psVar13 =
                                (shared_ptr<ClientPlayer>*)std::array<shared_ptr<ClientPlayer>, 2048ul>::operator[](
                                    (array<shared_ptr<ClientPlayer>, 2048ul>*)local_3fc0._8_8_,
                                    (long)(int)(&ReceivePlayerPositions::m_lastID)[lVar31]);
                            pCVar14 = (ClientEntity*)shared_ptr<ClientPlayer>::operator->(psVar13);
                        LAB_1000fb12e:
                            puVar18 = (undefined8*)pCVar14->GetHiddenBy();
                            local_3fc0._0_8_ = *puVar18;
                        }
                    }
                } else {
                    puVar1 = (undefined1*)((long)&local_3f40->field_0 + lVar31);
                    piVar23 = (int*)Array<int, eastl::allocator>::operator[](local_3f88, (ulong)puVar1);
                    psVar16 = (shared_ptr<ClientNpc>*)std::array<shared_ptr<ClientNpc>, 65536ul>::operator[](
                        local_3f50, (long)*piVar23);
                    pCVar14 = (ClientEntity*)shared_ptr<ClientNpc>::operator->(psVar16);
                    cVar3 = pCVar14->IsHiddenBelowOtherEntity();
                    if (cVar3 != '\0') {
                        pCVar17 = (ClientNpc*)shared_ptr<ClientNpc>::operator->(psVar16);
                        cVar3 = pCVar17->HasAnyOverlays(local_3f30->field_8488, *(int*)&local_3f30->field_54892);
                        if (cVar3 != '\0') {
                            puVar24 = (undefined4*)Array<int, eastl::allocator>::operator[](local_3f88, (ulong)puVar1);
                            new (&local_3fe8) game::LightProbeManager::MapSquareUpdateInfo(0, *puVar24);
                            local_4000.field_0 = local_3fe8.field_0;
                            local_4000.field_2 = local_3fe8.field_2;
                            local_4000.field_4 = local_3fe8.field_4;
                            piVar23 = (int*)Array<int, eastl::allocator>::operator[](local_3f88, (ulong)puVar1);
                            psVar16 = (shared_ptr<ClientNpc>*)std::array<shared_ptr<ClientNpc>, 65536ul>::operator[](
                                local_3f50, (long)*piVar23);
                            pCVar14 = (ClientEntity*)shared_ptr<ClientNpc>::operator->(psVar16);
                            goto LAB_1000fb12e;
                        }
                    }
                }
                cVar3 = local_3fc0->IsValid();
                if (cVar3 != '\0') {
                    cVar3 = local_3fc0->IsPlayer();
                    if (cVar3 == '\0') {
                        new (&local_3fe8) HiddenEntityInfo((ClientEntityID*)&local_4000, local_3fc0);
                        eastl::fixed_vector<HiddenEntityInfo, 501ul, true, eastl::allocator>::push_back(local_3f28,
                                                                                                        &local_3fe8);
                    } else {
                        new (&local_3fe8) HiddenEntityInfo((ClientEntityID*)&local_4000, local_3fc0);
                        eastl::fixed_vector<HiddenEntityInfo, 501ul, true, eastl::allocator>::push_back(local_1fb0,
                                                                                                        &local_3fe8);
                    }
                }
                lVar31 = lVar31 + 1;
            } while (lVar31 < (int)local_3f30->m_nPCCount + lVar30);
        }
        pCVar28 = local_3f30;
        this_00 = (world*)std::unique_ptr<dash3d::world, std::default_delete<dash3d::world>>::operator->(
            (unique_ptr<dash3d::world, std::default_delete<dash3d::world>>*)&local_3f30->field_19184);
        this_01 = (Layout*)this_00->GetLastEntityDrawOrder();
        paVar19 = (array<int, 50ul>*)
            eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                    eastl::allocator>>::Layout::HeapBeginPtr(this_01);
        local_3f88 = (Array<int, eastl::allocator>*)this_01->end();
        if (paVar19 == (array<int, 50ul>*)local_3f88) {
            local_3fb0 = (array<int, 50ul>*)CONCAT44(local_3fb0._4_4_, 4294967295);
            local_3fa8 = (array<int, 50ul>*)CONCAT44(local_3fa8._4_4_, 4294967295);
        } else {
            local_3fa8 = (array<int, 50ul>*)CONCAT44(local_3fa8._4_4_, 4294967295);
            local_3fb0 = (array<int, 50ul>*)CONCAT44(local_3fb0._4_4_, 4294967295);
            do {
                uVar7 = dash3d::MousePickingHelper::GetEntityTypeFromTypecode(*(longlong*)paVar19);
                uVar36 = (undefined4)((ulong)in_stack_ffffffffffffbfb8 >> 32);
                uVar37 = (undefined4)((ulong)in_stack_ffffffffffffbfc0 >> 32);
                uVar38 = (undefined4)((ulong)in_stack_ffffffffffffbfc8 >> 32);
                switch (uVar7) {
                case 0:
                    uVar32 = dash3d::MousePickingHelper::GetEntityIdFromTypecode(*(longlong*)paVar19);
                    local_3f40 = (PixfontGeneric*)std::array<shared_ptr<ClientPlayer>, 2048ul>::operator[](
                        (array<shared_ptr<ClientPlayer>, 2048ul>*)local_3fc0._8_8_, (long)(int)uVar32);
                    bVar4 = local_3f40->operator_cast_to_bool();
                    if (bVar4) {
                        pCVar14 =
                            (ClientEntity*)shared_ptr<ClientPlayer>::operator->((shared_ptr<ClientPlayer>*)local_3f40);
                        cVar3 = pCVar14->IsHiddenBelowOtherEntity();
                        if (cVar3 == '\0') {
                            pCVar20 = (ClientEntityID*)local_1fb0->HeapBeginPtr();
                            pCVar21 = (ClientEntityID*)local_1fb0->end();
                            for (; pCVar20 != pCVar21; pCVar20 = (ClientEntityID*)&pCVar20[1].m_slotID) {
                                uVar8 = (&pCVar20->field_8)->GetZ();
                                uVar7 = (undefined4)((ulong)in_stack_ffffffffffffbfb8 >> 32);
                                if (uVar32 == uVar8) {
                                    cVar3 = pCVar20->IsPlayer();
                                    iVar6 = pCVar20->GetZ();
                                    if (cVar3 == '\0') {
                                        in_stack_ffffffffffffbfb8 = CONCAT44(uVar7, (int)local_3f48);
                                        GdmEntityOverlayNPC(local_3f30, iVar6, (int)local_3f60, (int)local_3f58,
                                                            local_3f38, local_3f34, (int)local_3f48);
                                    } else {
                                        in_stack_ffffffffffffbfb8 = CONCAT44(uVar7, (int)local_3f48);
                                        GdmEntityOverlayPlayer(local_3f30, iVar6, (int)local_3f60, (int)local_3f58,
                                                               local_3f38, local_3f34, (int)local_3f48);
                                    }
                                }
                            }
                        }
                    }
                    pCVar15 =
                        (ClientPlayer*)shared_ptr<ClientPlayer>::operator->((shared_ptr<ClientPlayer>*)local_3f40);
                    pCVar28 = local_3f30;
                    cVar3 = pCVar15->HasAnyOverlays(local_3f30->field_8488, *(int*)&local_3f30->field_54896);
                    if (cVar3 != '\0') {
                        if (uVar32 == pCVar28->m_priorityPlayerId) {
                            local_3fb0 = (array<int, 50ul>*)CONCAT44(local_3fb0._4_4_, uVar32);
                        } else if (uVar32 == pCVar28->field_51988) {
                            local_3fa8 = (array<int, 50ul>*)CONCAT44(local_3fa8._4_4_, uVar32);
                        } else {
                            in_stack_ffffffffffffbfb8 =
                                CONCAT44((int)((ulong)in_stack_ffffffffffffbfb8 >> 32), (int)local_3f48);
                            GdmEntityOverlayPlayer(pCVar28, uVar32, (int)local_3f60, (int)local_3f58, local_3f38,
                                                   local_3f34, (int)local_3f48);
                        }
                    }
                    break;
                case 1:
                    iVar6 = dash3d::MousePickingHelper::GetEntityIdFromTypecode(*(longlong*)paVar19);
                    local_3f40 = (PixfontGeneric*)std::array<shared_ptr<ClientNpc>, 65536ul>::operator[](local_3f50,
                                                                                                         (long)iVar6);
                    bVar4 = local_3f40->operator_cast_to_bool();
                    if (bVar4) {
                        pCVar14 = (ClientEntity*)shared_ptr<ClientNpc>::operator->((shared_ptr<ClientNpc>*)local_3f40);
                        cVar3 = pCVar14->IsHiddenBelowOtherEntity();
                        if (cVar3 == '\0') {
                            pCVar20 = (ClientEntityID*)local_3f28->HeapBeginPtr();
                            pCVar21 = (ClientEntityID*)local_3f28->end();
                            for (; pCVar20 != pCVar21; pCVar20 = (ClientEntityID*)&pCVar20[1].m_slotID) {
                                iVar11 = (&pCVar20->field_8)->GetZ();
                                uVar7 = (undefined4)((ulong)in_stack_ffffffffffffbfb8 >> 32);
                                if (iVar6 == iVar11) {
                                    cVar3 = pCVar20->IsPlayer();
                                    iVar11 = pCVar20->GetZ();
                                    if (cVar3 == '\0') {
                                        in_stack_ffffffffffffbfb8 = CONCAT44(uVar7, (int)local_3f48);
                                        GdmEntityOverlayNPC(local_3f30, iVar11, (int)local_3f60, (int)local_3f58,
                                                            local_3f38, local_3f34, (int)local_3f48);
                                    } else {
                                        in_stack_ffffffffffffbfb8 = CONCAT44(uVar7, (int)local_3f48);
                                        GdmEntityOverlayPlayer(local_3f30, iVar11, (int)local_3f60, (int)local_3f58,
                                                               local_3f38, local_3f34, (int)local_3f48);
                                    }
                                }
                            }
                        }
                    }
                    pCVar17 = (ClientNpc*)shared_ptr<ClientNpc>::operator->((shared_ptr<ClientNpc>*)local_3f40);
                    cVar3 = pCVar17->HasAnyOverlays(local_3f30->field_8488, *(int*)&local_3f30->field_54892);
                    if (cVar3 != '\0') {
                        in_stack_ffffffffffffbfb8 =
                            CONCAT44((int)((ulong)in_stack_ffffffffffffbfb8 >> 32), (int)local_3f48);
                        GdmEntityOverlayNPC(local_3f30, iVar6, (int)local_3f60, (int)local_3f58, local_3f38, local_3f34,
                                            (int)local_3f48);
                    }
                    break;
                case 2:
                    iVar6 = dash3d::MousePickingHelper::GetEntityLevelFromTypecode(*(longlong*)paVar19);
                    uVar7 = (undefined4)((ulong)in_stack_ffffffffffffbfb8 >> 32);
                    uVar36 = (undefined4)((ulong)in_stack_ffffffffffffbfc0 >> 32);
                    uVar37 = (undefined4)((ulong)in_stack_ffffffffffffbfc8 >> 32);
                    uVar38 = (undefined4)((ulong)in_stack_ffffffffffffbfd0 >> 32);
                    if (iVar6 == local_3f30->m_playerLevel) {
                        uVar9 = dash3d::MousePickingHelper::GetEntityXFromTypecode(*(longlong*)paVar19);
                        uVar10 = dash3d::MousePickingHelper::GetEntityZFromTypecode(*(longlong*)paVar19);
                        uVar5 = dash3d::MousePickingHelper::GetLocLayerFromTypecode(*(longlong*)paVar19);
                        in_stack_ffffffffffffbfd0 = CONCAT44(uVar38, (int)local_3f48);
                        in_stack_ffffffffffffbfc8 = CONCAT44(uVar37, local_3f34);
                        in_stack_ffffffffffffbfc0 = CONCAT44(uVar36, local_3f38);
                        in_stack_ffffffffffffbfb8 = CONCAT44(uVar7, (int)local_3f58);
                        GdmEntityOverlayLoc(local_3f30, iVar6, uVar9, uVar10, uVar5, local_3f60,
                                            in_stack_ffffffffffffbfb8, in_stack_ffffffffffffbfc0,
                                            in_stack_ffffffffffffbfc8, in_stack_ffffffffffffbfd0);
                    }
                    break;
                case 4:
                    iVar6 = dash3d::MousePickingHelper::GetEntityXFromTypecode(*(longlong*)paVar19);
                    iVar11 = dash3d::MousePickingHelper::GetEntityZFromTypecode(*(longlong*)paVar19);
                    iVar12 = dash3d::MousePickingHelper::GetEntityLevelFromTypecode(*(longlong*)paVar19);
                    in_stack_ffffffffffffbfc8 = CONCAT44(uVar38, (int)local_3f48);
                    in_stack_ffffffffffffbfc0 = CONCAT44(uVar37, local_3f34);
                    in_stack_ffffffffffffbfb8 = CONCAT44(uVar36, local_3f38);
                    GdmEntityOverlayTile(local_3f30, iVar12, iVar6, iVar11, (int)local_3f60, (int)local_3f58,
                                         local_3f38, local_3f34, (int)local_3f48);
                }
                paVar19 = paVar19 + 8;
                pCVar28 = local_3f30;
            } while (paVar19 != (array<int, 50ul>*)local_3f88);
        }
        iVar6 = (int)local_3fb0;
        if ((int)local_3fa8 != -1) {
            GdmEntityOverlayPlayer(pCVar28, (int)local_3fa8, (int)local_3f60, (int)local_3f58, local_3f38, local_3f34,
                                   (int)local_3f48);
        }
        if (iVar6 != -1) {
            GdmEntityOverlayPlayer(pCVar28, iVar6, (int)local_3f60, (int)local_3f58, local_3f38, local_3f34,
                                   (int)local_3f48);
        }
        local_3f68 = (Pix2D*)(*(code*)*pCVar28->field_144->field_0)();
        if (0 < pCVar28->field_1115872) {
            local_3fb0 = (array<int, 50ul>*)&pCVar28->field_1115876;
            local_3f88 = (Array<int, eastl::allocator>*)&pCVar28->field_1116076;
            local_3fa8 = (array<int, 50ul>*)&pCVar28->field_1116476;
            local_3fc0._8_8_ = &pCVar28->field_1116276;
            local_3f70 = (shared_ptr<jstring::PixfontGeneric>*)pCVar28->field_1104240;
            local_3f90 = (array<eastl::vector<int, eastl::allocator>, 50ul>*)&pCVar28->field_1117280;
            local_3fa0 = (array<int, 50ul>*)&pCVar28->field_1117076;
            local_3f38 = local_3f38 + (int)local_3f60;
            local_3fd0 = (int)local_3f58 + 5;
            local_3f34 = local_3f34 + (int)local_3f58;
            local_3fcc = (int)local_3f60 + 50;
            uVar29 = 0;
            do {
                puVar22 = (uint*)std::array<int, 50ul>::operator[](local_3fb0, uVar29);
                uVar32 = *puVar22;
                local_3fc8 = (uint*)std::array<int, 50ul>::operator[]((array<int, 50ul>*)local_3f88, uVar29);
                uVar8 = *local_3fc8;
                piVar23 = (int*)std::array<int, 50ul>::operator[](local_3fa8, uVar29);
                iVar6 = *piVar23;
                puVar24 = (undefined4*)std::array<int, 50ul>::operator[]((array<int, 50ul>*)local_3fc0._8_8_, uVar29);
                local_3f50 = (array<shared_ptr<ClientNpc>, 65536ul>*)CONCAT44(local_3f50._4_4_, *puVar24);
                local_3f78 = (PixfontGeneric*)CONCAT44(local_3f78._4_4_, uVar32 - iVar6);
                local_3f80 = (basic_string*)CONCAT44(local_3f80._4_4_, iVar6 + uVar32);
                local_3f94 = uVar32;
                local_3f48 = uVar29;
                do {
                    if (uVar29 == 0) {
                        local_3f40 = (PixfontGeneric*)((ulong)local_3f40._4_4_ << 32);
                    } else {
                        uVar33 = 0;
                        local_3f40 = (PixfontGeneric*)((ulong)local_3f40._4_4_ << 32);
                        do {
                            piVar23 = (int*)std::array<int, 50ul>::operator[]((array<int, 50ul>*)local_3f88, uVar33);
                            iVar6 = *piVar23;
                            piVar23 =
                                (int*)std::array<int, 50ul>::operator[]((array<int, 50ul>*)local_3fc0._8_8_, uVar33);
                            uVar32 = iVar6 - *piVar23;
                            if (((int)uVar32 < (int)(uVar8 + 2)) && ((int)(uVar8 - (int)local_3f50) < iVar6 + 2)) {
                                piVar23 = (int*)std::array<int, 50ul>::operator[](local_3fb0, uVar33);
                                iVar6 = *piVar23;
                                piVar23 = (int*)std::array<int, 50ul>::operator[](local_3fa8, uVar33);
                                if ((int)local_3f78 < *piVar23 + iVar6) {
                                    bVar35 = iVar6 - *piVar23 < (int)local_3f80;
                                    bVar4 = (int)uVar32 < (int)uVar8;
                                    if (bVar35 && bVar4) {
                                        uVar8 = uVar32;
                                    }
                                    uVar32 = (uint)(float)local_3f40 & 255;
                                    if (bVar35 && bVar4) {
                                        uVar32 = 1;
                                    }
                                    local_3f40 = (PixfontGeneric*)CONCAT44(local_3f40._4_4_, uVar32);
                                }
                            }
                            uVar33 = uVar33 + 1;
                            uVar29 = local_3f48;
                        } while (local_3f48 != uVar33);
                    }
                    pCVar34 = local_3f30;
                } while (((ulong)local_3f40 & 1) != 0);
                local_3f30->field_1120480 = local_3f94;
                *local_3fc8 = uVar8;
                local_3f30->field_1120484 = uVar8;
                pbVar25 = (basic_string*)std::array<eastl::string, 50ul>::operator[](
                    (array<eastl::string, 50ul>*)&pCVar28->field_1118880, uVar29);
                if (pCVar34->field_2505096 != 0) {
                    pPVar26 = (PixfontGeneric*)shared_ptr<jstring::PixfontGeneric>::operator->(local_3f70);
                    pPVar26->CentreString(pbVar25, pCVar34->field_1120480 + (int)local_3f60,
                                          pCVar34->field_1120484 + (int)local_3f58, 16776960, 0, local_3f68);
                    goto LAB_1000fb7f2;
                }
                piVar23 = (int*)std::array<int, 50ul>::operator[]((array<int, 50ul>*)&pCVar28->field_1116676, uVar29);
                iVar6 = *piVar23;
                if ((long)iVar6 < 6) {
                    puVar24 = (undefined4*)std::array<int, 6ul>::operator[]((array<int, 6ul>*)&pCVar28->field_53280,
                                                                            (long)iVar6);
                    local_3f50 = (array<shared_ptr<ClientNpc>, 65536ul>*)CONCAT44(local_3f50._4_4_, *puVar24);
                    goto switchD_1000fba5c_default;
                }
                local_3f50 = (array<shared_ptr<ClientNpc>, 65536ul>*)CONCAT44(local_3f50._4_4_, 16776960);
                switch (iVar6) {
                case 6:
                    iVar6 = pCVar34->field_7294676 % 20;
                    bVar35 = SBORROW4(iVar6, 10);
                    bVar4 = iVar6 + -10 < 0;
                    iVar6 = 16776960;
                    iVar11 = 16711680;
                    goto LAB_1000fbaf2;
                case 7:
                    iVar6 = pCVar34->field_7294676 % 20;
                    bVar35 = SBORROW4(iVar6, 10);
                    bVar4 = iVar6 + -10 < 0;
                    iVar6 = 65535;
                    iVar11 = 255;
                    goto LAB_1000fbaf2;
                case 8:
                    iVar6 = pCVar34->field_7294676 % 20;
                    bVar35 = SBORROW4(iVar6, 10);
                    bVar4 = iVar6 + -10 < 0;
                    iVar6 = 8454016;
                    iVar11 = 45056;
                LAB_1000fbaf2:
                    if (bVar35 != bVar4) {
                        iVar6 = iVar11;
                    }
                LAB_1000fbaf5:
                    local_3f50 = (array<shared_ptr<ClientNpc>, 65536ul>*)CONCAT44(local_3f50._4_4_, iVar6);
                    break;
                case 9:
                    piVar23 = (int*)std::array<int, 50ul>::operator[](local_3fa0, local_3f48);
                    iVar6 = *piVar23;
                    if (100 < iVar6) {
                        local_3f50 = (array<shared_ptr<ClientNpc>, 65536ul>*)CONCAT44(local_3f50._4_4_,
                                                                                      (150 - iVar6) * 1280 + 16711680);
                        break;
                    }
                    if (iVar6 < 51) {
                        if (0 < iVar6) {
                            local_3f50 = (array<shared_ptr<ClientNpc>, 65536ul>*)CONCAT44(local_3f50._4_4_,
                                                                                          (50 - iVar6) * 5 + 65280);
                        }
                        break;
                    }
                    iVar6 = (100 - iVar6) * 327680;
                    iVar11 = 16776960;
                LAB_1000fc388:
                    iVar6 = iVar11 - iVar6;
                    goto LAB_1000fbaf5;
                case 10:
                    piVar23 = (int*)std::array<int, 50ul>::operator[](local_3fa0, local_3f48);
                    iVar6 = *piVar23;
                    if (iVar6 < 101) {
                        if (50 < iVar6) {
                            iVar6 = (100 - iVar6) * 327680;
                            iVar11 = 16711935;
                            goto LAB_1000fc388;
                        }
                        if (0 < iVar6) {
                            local_3f50 = (array<shared_ptr<ClientNpc>, 65536ul>*)CONCAT44(local_3f50._4_4_,
                                                                                          (50 - iVar6) * 327675 + 255);
                        }
                    } else {
                        local_3f50 = (array<shared_ptr<ClientNpc>, 65536ul>*)CONCAT44(local_3f50._4_4_,
                                                                                      (150 - iVar6) * 5 + 16711680);
                    }
                    break;
                case 11:
                    piVar23 = (int*)std::array<int, 50ul>::operator[](local_3fa0, local_3f48);
                    iVar6 = *piVar23;
                    if (iVar6 < 101) {
                        if (iVar6 < 51) {
                            if (0 < iVar6) {
                                iVar6 = (50 - iVar6) * 327680;
                                iVar11 = 16777215;
                                goto LAB_1000fc388;
                            }
                        } else {
                            local_3f50 = (array<shared_ptr<ClientNpc>, 65536ul>*)CONCAT44(
                                local_3f50._4_4_, (100 - iVar6) * 327685 + 65280);
                        }
                    } else {
                        local_3f50 = (array<shared_ptr<ClientNpc>, 65536ul>*)CONCAT44(
                            local_3f50._4_4_, (150 - iVar6) * -327685 + 16777215);
                    }
                    break;
                case 12:
                    pPVar26 = (PixfontGeneric*)std::array<eastl::vector<int, eastl::allocator>, 50ul>::operator[](
                        local_3f90, local_3f48);
                    lVar30 = pPVar26->size();
                    if (lVar30 == 0) {
                        uVar29 = eastl::basic_string<
                            char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
                        eastl::vector<int, eastl::allocator>::resize((ulong)pPVar26);
                        local_3f40 = (PixfontGeneric*)CONCAT44(local_3f40._4_4_, (float)uVar29);
                        if (uVar29 != 0) {
                            uVar33 = 0;
                            local_3f78 = pPVar26;
                            do {
                                uVar7 = jag::math::RunetekColour::HSLToRGB(
                                    (ushort)((int)(((float)uVar33 * 64.0) / (float)local_3f40) << 10) | 960);
                                puVar24 = (undefined4*)eastl::vector<int, eastl::allocator>::operator[](
                                    (vector<int, eastl::allocator>*)local_3f78, uVar33);
                                *puVar24 = uVar7;
                                uVar33 = uVar33 + 1;
                            } while (uVar29 != uVar33);
                        }
                        pCVar34 = local_3f30;
                    }
                }
            switchD_1000fba5c_default:
                new (&local_3fe8) Array<eastl::string, eastl::allocator>(5);
                local_3fc0._0_4_ = pCVar34->field_52744;
                new (&local_4000) Array<int, eastl::allocator>(1, local_3fc0);
                pPVar26 = (PixfontGeneric*)shared_ptr<jstring::PixfontGeneric>::operator->(local_3f70);
                pPVar26->SplitString(pbVar25, (Array*)&local_4000, (Array*)&local_3fe8);
                puVar24 = (undefined4*)shared_ptr<jstring::PixfontGeneric>::operator->(local_3f70);
                local_3f40 = (PixfontGeneric*)CONCAT44(local_3f40._4_4_, *puVar24);
                puVar24 = (undefined4*)std::array<int, 50ul>::operator[]((array<int, 50ul>*)&pCVar28->field_1116876,
                                                                         local_3f48);
                switch (*puVar24) {
                case 0:
                    iVar6 = local_3fe8.end();
                    if (0 < iVar6) {
                        local_3f40 = (PixfontGeneric*)CONCAT44(local_3f40._4_4_, (int)(float)local_3f40 + 1);
                        uVar33 = local_3f58 & 4294967295;
                        uVar29 = 0;
                        do {
                            local_3f78 = (PixfontGeneric*)shared_ptr<jstring::PixfontGeneric>::operator->(local_3f70);
                            local_3f80 = (basic_string*)Array<eastl::string, eastl::allocator>::operator[](
                                (Array<eastl::string, eastl::allocator>*)&local_3fe8, uVar29);
                            iVar6 = local_3f30->field_1120480 + (int)local_3f60;
                            uVar32 = local_3f30->field_1120484;
                            pvVar27 = (vector*)std::array<eastl::vector<int, eastl::allocator>, 50ul>::operator[](
                                local_3f90, local_3f48);
                            local_3f78->CentreStringColourPattern(local_3f80, iVar6, uVar32 + (int)uVar33,
                                                                  (int)local_3f50, 0, pvVar27, local_3f68);
                            uVar29 = uVar29 + 1;
                            iVar6 = local_3fe8.end();
                            uVar33 = (ulong)(uint)((int)uVar33 + (int)(float)local_3f40);
                        } while ((long)uVar29 < (long)iVar6);
                    }
                    break;
                case 1:
                    iVar6 = local_3fe8.end();
                    if (0 < iVar6) {
                        local_3f40 = (PixfontGeneric*)CONCAT44(local_3f40._4_4_, (int)(float)local_3f40 + 1);
                        uVar33 = local_3f58 & 4294967295;
                        uVar29 = 0;
                        do {
                            local_3f78 = (PixfontGeneric*)shared_ptr<jstring::PixfontGeneric>::operator->(local_3f70);
                            local_3f80 = (basic_string*)Array<eastl::string, eastl::allocator>::operator[](
                                (Array<eastl::string, eastl::allocator>*)&local_3fe8, uVar29);
                            iVar11 = local_3f30->field_1120480 + (int)local_3f60;
                            uVar32 = local_3f30->field_1120484;
                            iVar6 = local_3f30->field_7294676;
                            pvVar27 = (vector*)std::array<eastl::vector<int, eastl::allocator>, 50ul>::operator[](
                                local_3f90, local_3f48);
                            local_3f78->CentreStringWave(local_3f80, iVar11, uVar32 + (int)uVar33, (int)local_3f50, 0,
                                                         iVar6, pvVar27, local_3f68);
                            uVar29 = uVar29 + 1;
                            iVar6 = local_3fe8.end();
                            uVar33 = (ulong)(uint)((int)uVar33 + (int)(float)local_3f40);
                        } while ((long)uVar29 < (long)iVar6);
                    }
                    break;
                case 2:
                    iVar6 = local_3fe8.end();
                    if (0 < iVar6) {
                        local_3f40 = (PixfontGeneric*)CONCAT44(local_3f40._4_4_, (int)(float)local_3f40 + 1);
                        uVar33 = local_3f58 & 4294967295;
                        uVar29 = 0;
                        do {
                            local_3f78 = (PixfontGeneric*)shared_ptr<jstring::PixfontGeneric>::operator->(local_3f70);
                            local_3f80 = (basic_string*)Array<eastl::string, eastl::allocator>::operator[](
                                (Array<eastl::string, eastl::allocator>*)&local_3fe8, uVar29);
                            iVar11 = local_3f30->field_1120480 + (int)local_3f60;
                            uVar32 = local_3f30->field_1120484;
                            iVar6 = local_3f30->field_7294676;
                            pvVar27 = (vector*)std::array<eastl::vector<int, eastl::allocator>, 50ul>::operator[](
                                local_3f90, local_3f48);
                            local_3f78->CentreStringWave2(local_3f80, iVar11, uVar32 + (int)uVar33, (int)local_3f50, 0,
                                                          iVar6, pvVar27, local_3f68);
                            uVar29 = uVar29 + 1;
                            iVar6 = local_3fe8.end();
                            uVar33 = (ulong)(uint)((int)uVar33 + (int)(float)local_3f40);
                        } while ((long)uVar29 < (long)iVar6);
                    }
                    break;
                case 3:
                    iVar6 = local_3fe8.end();
                    if (0 < iVar6) {
                        local_3f40 = (PixfontGeneric*)CONCAT44(local_3f40._4_4_, (int)(float)local_3f40 + 1);
                        uVar29 = local_3f58 & 4294967295;
                        uVar33 = 0;
                        do {
                            local_3f78 = (PixfontGeneric*)shared_ptr<jstring::PixfontGeneric>::operator->(local_3f70);
                            local_3f80 = (basic_string*)Array<eastl::string, eastl::allocator>::operator[](
                                (Array<eastl::string, eastl::allocator>*)&local_3fe8, uVar33);
                            uVar2 = local_3f48;
                            local_3f94 = local_3f30->field_1120480 + (int)local_3f60;
                            uVar32 = local_3f30->field_1120484;
                            local_3fc8 = (uint*)CONCAT44(local_3fc8._4_4_, local_3f30->field_7294676);
                            piVar23 = (int*)std::array<int, 50ul>::operator[](local_3fa0, local_3f48);
                            iVar6 = *piVar23;
                            pvVar27 = (vector*)std::array<eastl::vector<int, eastl::allocator>, 50ul>::operator[](
                                local_3f90, uVar2);
                            local_3f78->CentreStringWave3(local_3f80, local_3f94, uVar32 + (int)uVar29, (int)local_3f50,
                                                          0, (int)local_3fc8, 150 - iVar6, pvVar27, local_3f68);
                            uVar33 = uVar33 + 1;
                            iVar6 = local_3fe8.end();
                            uVar29 = (ulong)(uint)((int)uVar29 + (int)(float)local_3f40);
                        } while ((long)uVar33 < (long)iVar6);
                    }
                    break;
                case 4:
                    piVar23 = (int*)std::array<int, 50ul>::operator[](local_3fa0, local_3f48);
                    iVar6 = *piVar23;
                    pPVar26 = (PixfontGeneric*)shared_ptr<jstring::PixfontGeneric>::operator->(local_3f70);
                    iVar11 = pPVar26->StringWid(pbVar25);
                    local_3f68->SetSubClipping(local_3f30->field_1120480 + (int)local_3f60 + -50, (int)local_3f58,
                                               local_3f30->field_1120480 + 50 + (int)local_3f60, local_3f34);
                    local_3f40 = (PixfontGeneric*)shared_ptr<jstring::PixfontGeneric>::operator->(local_3f70);
                    iVar6 = (int)((ulong)((long)((iVar11 + 100) * (150 - iVar6)) * -458129845) >> 32);
                    iVar6 = ((iVar6 >> 4) - (iVar6 >> 31)) + local_3fcc;
                    uVar32 = local_3f30->field_1120480;
                    iVar11 = local_3f30->field_1120484 + (int)local_3f58;
                    pvVar27 = (vector*)std::array<eastl::vector<int, eastl::allocator>, 50ul>::operator[](local_3f90,
                                                                                                          local_3f48);
                    local_3f40->DrawStringColourPattern(pbVar25, iVar6 + uVar32, iVar11, (int)local_3f50, 0, pvVar27,
                                                        local_3f68);
                    local_3f68->SetClipping((int)local_3f60, (int)local_3f58, local_3f38, local_3f34);
                    break;
                case 5:
                    piVar23 = (int*)std::array<int, 50ul>::operator[](local_3fa0, local_3f48);
                    iVar6 = *piVar23;
                    iVar11 = -(iVar6 + -25);
                    if (24 < iVar6) {
                        iVar11 = 0;
                    }
                    iVar12 = 125 - iVar6;
                    if (iVar6 < 126) {
                        iVar12 = iVar11;
                    }
                    uVar32 = local_3f30->field_1120484;
                    puVar22 = (uint*)shared_ptr<jstring::PixfontGeneric>::operator->(local_3f70);
                    local_3f68->SetSubClipping((int)local_3f60, ~*puVar22 + uVar32 + (int)local_3f58, local_3f38,
                                               local_3f30->field_1120484 + local_3fd0);
                    pPVar26 = (PixfontGeneric*)shared_ptr<jstring::PixfontGeneric>::operator->(local_3f70);
                    iVar6 = local_3f30->field_1120480 + (int)local_3f60;
                    iVar12 = iVar12 + (int)local_3f58;
                    uVar32 = local_3f30->field_1120484;
                    pvVar27 = (vector*)std::array<eastl::vector<int, eastl::allocator>, 50ul>::operator[](local_3f90,
                                                                                                          local_3f48);
                    pPVar26->CentreStringColourPattern(pbVar25, iVar6, iVar12 + uVar32, (int)local_3f50, 0, pvVar27,
                                                       local_3f68);
                    local_3f68->SetClipping((int)local_3f60, (int)local_3f58, local_3f38, local_3f34);
                }
                local_4000.~Array();
                local_3fe8.~Array();
                uVar29 = local_3f48;
                pCVar34 = local_3f30;
            LAB_1000fb7f2:
                uVar29 = uVar29 + 1;
            } while ((long)uVar29 < (long)pCVar34->field_1115872);
        }
        eastl::fixed_vector<HiddenEntityInfo, 501ul, true, eastl::allocator>::~fixed_vector(local_3f28);
        eastl::fixed_vector<HiddenEntityInfo, 501ul, true, eastl::allocator>::~fixed_vector(local_1fb0);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x1000fc550, 224 bytes, placed by class name and debug map
    // Client::GdmCoordArrow(int, int)
    void Client::GdmCoordArrow(int param_1, int param_2) {
        long* plVar1;
        undefined8 uVar2;

        if (field_54888 == 2) {
            GetOverlayPos(this, m_playerLevel, (field_54900 - field_53220) * 128 + field_54912,
                          (field_54904 - field_53224) * 128 + field_54916, field_54908 * 2);
            if (-1 < (int)field_1120480) {
                if (field_8488 % 20 < 10) {
                    plVar1 = (long*)(*(code*)*field_144->field_0)();
                    uVar2 = Array<graphics::Pix32, eastl::allocator>::operator[](
                        (Array<graphics::Pix32, eastl::allocator>*)&field_1115760, 0);
                    (**(code**)(*plVar1 + 176))(plVar1, uVar2, param_1 + field_1120480 + -12,
                                                param_2 + -28 + field_1120484);
                }
            }
        }
    }

    // 0x1000fc630, 16 bytes, placed by class name and debug map
    // Client::GdmOtherOverlays()
    void Client::GdmOtherOverlays() {
        GdmGetSpecialArea(this);
    }

    // 0x10010cff0, 464 bytes, placed by __FILE__ string
    // Client::GdmEntityOverlayPlayer(int, int, int, int, int, int)
    void Client::GdmEntityOverlayPlayer(int param_1, int param_2, int param_3, int param_4, int param_5, int param_6) {
        shared_ptr* psVar2;
        ClientEntity* pCVar3;
        OverlayPos local_80;
        vector<unsigned long, BucketAllocatorEASTL> local_60[24];
        shared_ptr local_48;

        psVar2 = (shared_ptr*)std::array<shared_ptr<ClientPlayer>, 2048ul>::operator[](
            (array<shared_ptr<ClientPlayer>, 2048ul>*)&field_19216, (long)param_1);
        new (&local_48) shared_ptr<dash3d::Decor>(psVar2);
        if (!shared_ptr::operator_cast_to_bool(&local_48)) {
            /* WARNING: Subroutine does not return */
            LogAssert("player",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                      "client_entityoverlays.cpp",
                      28, "Invalid player in GdmEntityOverlayPlayer");
        }
        shared_ptr<ClientPlayer>::operator*((shared_ptr<ClientPlayer>*)&local_48);
        GetAllOverlayPositions((Client*)&local_80, (ClientEntity*)this);
        shared_ptr<ClientPlayer>::operator->((shared_ptr<ClientPlayer>*)&local_48);
        local_60->GetScriptedOverlays();
        GdmEntityOverlayScripted(this, local_60, &local_80, 2, param_2, param_3, param_4, param_5, param_6);
        GdmEntityOverlayScripted(this, local_60, &local_80, 0, param_2, param_3, param_4, param_5, param_6);
        pCVar3 = (ClientEntity*)shared_ptr<ClientPlayer>::operator*((shared_ptr<ClientPlayer>*)&local_48);
        GdmEntityOverlayHardcodedOverhead(this, pCVar3, &local_80, true, param_1, param_2, param_3, param_4, param_5);
        GdmEntityOverlayScripted(this, local_60, &local_80, 1, param_2, param_3, param_4, param_5, param_6);
        pCVar3 = (ClientEntity*)shared_ptr<ClientPlayer>::operator*((shared_ptr<ClientPlayer>*)&local_48);
        GdmEntityOverlayHitsplats(this, pCVar3, &local_80, param_2, param_3, param_4, param_5);
        eastl::vector<unsigned long, BucketAllocatorEASTL>::~vector(local_60);
        local_48.~shared_ptr();
    }

    // 0x10010d1c0, 176 bytes, placed by class name and neighbouring functions
    // Client::GetAllOverlayPositions(ClientEntity&)
    Client* Client::GetAllOverlayPositions(ClientEntity* param_1) {
        ClientEntity* in_RDX;

        new (this) OverlayPos();
        GetOverlayPos((Client*)param_1, in_RDX, *(int*)&in_RDX->field_424);
        field_0 = *(uint*)&param_1[1167].field_160;
        field_4 = *(uint*)&param_1[1167].field_164;
        GetOverlayPos((Client*)param_1, in_RDX, *(int*)&in_RDX->field_424 / 2);
        *(undefined4*)field_8 = *(undefined4*)&param_1[1167].field_160;
        *(undefined4*)(field_8 + 4) = *(undefined4*)&param_1[1167].field_164;
        GetOverlayPos((Client*)param_1, in_RDX, -15);
        *(undefined4*)(field_8 + 8) = *(undefined4*)&param_1[1167].field_160;
        *(undefined4*)(field_8 + 12) = *(undefined4*)&param_1[1167].field_164;
        field_8[16] = 1;
        return this;
    }

    // 0x10010d330, 240 bytes, placed by class name and neighbouring functions
    // Client::GdmEntityOverlayScripted(eastl::vector<unsigned long, BucketAllocatorEASTL> const&, OverlayPos&, rs2lib::IfType::OverlayTypes, int, int, int, int, int)
    void Client::GdmEntityOverlayScripted(Layout* param_1, OverlayPos* param_2, int param_4, int param_5, int param_6,
                                          int param_7, int param_8, int param_9) {
        char cVar1;
        ulong* puVar2;
        ulong* puVar3;
        Array<shared_ptr<rs2lib::IfType>, eastl::allocator>* this_00;
        shared_ptr* this_01;
        long lVar4;

        puVar2 = (ulong*)
            eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                    eastl::allocator>>::Layout::HeapBeginPtr(param_1);
        puVar3 = (ulong*)param_1->end();
        if (puVar2 != puVar3) {
            do {
                cVar1 = (m_entityOverlays, (int)*puVar2)->OverlayExistsAtIndex();
                if (cVar1 != '\0') {
                    this_00 = (Array<shared_ptr<rs2lib::IfType>, eastl::allocator>*)(m_entityOverlays, (int)*puVar2)
                                  ->GetOverlay();
                    if (this_00 != (Array<shared_ptr<rs2lib::IfType>, eastl::allocator>*)0) {
                        this_01 =
                            (shared_ptr*)Array<shared_ptr<rs2lib::IfType>, eastl::allocator>::operator[](this_00, 0);
                        lVar4 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)this_01);
                        if (*(int*)(lVar4 + 112) == param_4) {
                            GdmEntityOverlayScriptedInner(this, (Array*)this_00, this_01, *puVar2, param_2, param_5,
                                                          param_6, param_7, param_8, param_9);
                        }
                    }
                }
                puVar2 = puVar2 + 1;
            } while (puVar2 != puVar3);
        }
    }

    // 0x10010d420, 3520 bytes, placed by class name and neighbouring functions
    // Client::GdmEntityOverlayHardcodedOverhead(ClientEntity&, OverlayPos&, bool, int, int, int, int, int)
    void Client::GdmEntityOverlayHardcodedOverhead(ClientEntity* param_1, OverlayPos* param_2, bool param_3,
                                                   int param_4, int param_5, int param_6, int param_7, int param_8) {
        undefined1* puVar1;
        undefined4 uVar2;
        int iVar3;
        Js5* pJVar4;
        OverlayPos* pOVar5;
        char cVar6;
        bool bVar7;
        int iVar8;
        undefined4* puVar9;
        vector<int, eastl::allocator>* this_00;
        eastl::string* this_01;
        shared_ptr<configdecoder::HeadbarType>* this_02;
        HeadbarQueue* this_03;
        shared_ptr* psVar10;
        PixfontGeneric* pPVar11;
        DisplayName* this_04;
        basic_string* pbVar12;
        long lVar13;
        undefined8 uVar14;
        vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>* this_05;
        vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>* this_06;
        int* piVar15;
        ulong uVar16;
        undefined7 in_register_00000009;
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base* extraout_RDX_00;
        int iVar17;
        uint uVar18;
        Client* pCVar19;
        ClientPlayer* pCVar20;
        ulong uVar21;
        Array<graphics::Pix32, eastl::allocator>* this_07;
        int iVar22;
        uint uVar23;
        uint uVar24;
        bool bVar25;
        list<console::Line, eastl::allocator> local_f0[8];
        undefined8 local_e8;
        undefined1* local_e0;
        int local_d0;
        int local_cc;
        undefined1 local_c8[48];
        undefined1 local_98[28];
        uint local_7c;
        undefined1 local_78[16];
        ulong local_68;
        OverlayPos* local_60;
        ClientPlayer* local_58;
        int* local_50;
        Client* local_48;
        Pix2D* local_40;
        uint local_38;
        int local_34;

        local_c8._44_4_ = param_4;
        local_48 = this;
        local_40 = (Pix2D*)(*(code*)*field_144->field_0)();
        local_d0 = param_7 + param_5;
        local_cc = param_8 + param_6;
        local_40->SetClipping(param_5, param_6, local_d0, local_cc);
        local_34 = *(int*)param_2;
        local_50 = (int*)&param_2->field_4;
        *(int*)&param_2->field_4 = *(int*)&param_2->field_4 + 2;
        local_60 = param_2;
        local_58 = (ClientPlayer*)param_1;
        cVar6 =
            eastl::basic_string<char,
                                eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::empty();
        pCVar19 = local_48;
        iVar8 = 2;
        local_7c = (uint)CONCAT71(in_register_00000009, param_3);
        if ((cVar6 == '\0') &&
            (((!param_3 ||
               ((*(char*)((long)&local_58->field_144 + 1) == '\0' &&
                 ((iVar17 = *(int*)&local_48->field_53304,
                   iVar17 == 4 || ((*(char*)&local_58->field_144 == '\0' &&
                                    (((iVar17 == 0 || (iVar17 == 3)) ||
                                      ((iVar17 == 1 && (cVar6 = local_58->IsOnlineFriend(), cVar6 != '\0')))))))))))) &&
              ((-1 < local_34 && (pCVar19->field_1115872 < 50)))))) {
            pPVar11 = (PixfontGeneric*)shared_ptr<jstring::PixfontGeneric>::operator->(
                (shared_ptr<jstring::PixfontGeneric>*)pCVar19->field_1104240);
            iVar8 = pPVar11->StringWid((basic_string*)&param_1->field_112);
            piVar15 = (int*)std::array<int, 50ul>::operator[]((array<int, 50ul>*)&pCVar19->field_1116476,
                                                              (long)pCVar19->field_1115872);
            *piVar15 = iVar8 / 2;
            puVar9 = (undefined4*)shared_ptr<jstring::PixfontGeneric>::operator->(
                (shared_ptr<jstring::PixfontGeneric>*)pCVar19->field_1104240);
            uVar2 = *puVar9;
            puVar9 = (undefined4*)std::array<int, 50ul>::operator[]((array<int, 50ul>*)&pCVar19->field_1116276,
                                                                    (long)pCVar19->field_1115872);
            *puVar9 = uVar2;
            piVar15 = (int*)std::array<int, 50ul>::operator[]((array<int, 50ul>*)&pCVar19->field_1115876,
                                                              (long)pCVar19->field_1115872);
            *piVar15 = local_34;
            iVar8 = *local_50;
            piVar15 = (int*)std::array<int, 50ul>::operator[]((array<int, 50ul>*)&pCVar19->field_1116076,
                                                              (long)pCVar19->field_1115872);
            pCVar20 = local_58;
            *piVar15 = iVar8;
            uVar2 = *(undefined4*)((long)&local_58->field_148 + 4);
            puVar9 = (undefined4*)std::array<int, 50ul>::operator[]((array<int, 50ul>*)&pCVar19->field_1116676,
                                                                    (long)pCVar19->field_1115872);
            *puVar9 = uVar2;
            uVar2 = pCVar20->field_156;
            puVar9 = (undefined4*)std::array<int, 50ul>::operator[]((array<int, 50ul>*)&pCVar19->field_1116876,
                                                                    (long)pCVar19->field_1115872);
            *puVar9 = uVar2;
            uVar2 = *(undefined4*)&pCVar20->field_148;
            puVar9 = (undefined4*)std::array<int, 50ul>::operator[]((array<int, 50ul>*)&pCVar19->field_1117076,
                                                                    (long)pCVar19->field_1115872);
            *puVar9 = uVar2;
            local_c8->CreateColourArray((fixed_vector*)&pCVar20->field_160);
            this_00 =
                (vector<int, eastl::allocator>*)std::array<eastl::vector<int, eastl::allocator>, 50ul>::operator[](
                    (array<eastl::vector<int, eastl::allocator>, 50ul>*)&pCVar19->field_1117280,
                    (long)pCVar19->field_1115872);
            eastl::vector<int, eastl::allocator>::operator=(this_00, (vector*)local_c8);
            local_c8->~vector();
            this_01 = (eastl::string*)std::array<eastl::string, 50ul>::operator[](
                (array<eastl::string, 50ul>*)&pCVar19->field_1118880, (long)pCVar19->field_1115872);
            eastl::string::operator=(this_01, (basic_string*)&param_1->field_112);
            pCVar19->field_1115872 = pCVar19->field_1115872 + 1;
            iVar8 = -10;
        }
        pCVar20 = local_58;
        GetOverlayPos(pCVar19, (ClientEntity*)local_58, *(int*)&local_58->field_424 + 15);
        *(uint*)local_60 = pCVar19->field_1120480;
        *(uint*)&local_60->field_4 = iVar8 + pCVar19->field_1120484;
        cVar6 = (&pCVar20->field_296)->empty();
        if (cVar6 == '\0') {
            local_68.begin();
            local_e0 = &pCVar20->field_296;
            eastl::list<console::Line, eastl::allocator>::end(local_f0);
            bVar7 = eastl::operator!=((eastl*)&local_68, (hashtable_iterator_base*)local_f0, extraout_RDX);
            bVar25 = false;
            pCVar19 = local_48;
            if (bVar7) {
                do {
                    local_98._16_8_ = eastl::ListIterator<console::Line, console::Line*, console::Line&>::operator*(
                        (ListIterator<console::Line, console::Line*, console::Line&>*)&local_68);
                    iVar8 = shared_ptr<configdecoder::HeadbarQueue>::operator->(
                        (shared_ptr<configdecoder::HeadbarQueue>*)local_98._16_8_);
                    local_c8->EventCurrent(iVar8);
                    bVar7 = operator!=((shared_ptr*)local_c8, (_func_decltype_nullptr*)0);
                    if (bVar7) {
                        this_02 = (shared_ptr<configdecoder::HeadbarType>*)
                                      shared_ptr<configdecoder::HeadbarQueue>::operator->(
                                          (shared_ptr<configdecoder::HeadbarQueue>*)local_98._16_8_);
                        shared_ptr<configdecoder::HeadbarType>::operator->(this_02);
                        local_78->GetEmptySprite();
                        shared_ptr<configdecoder::HeadbarType>::operator->(this_02);
                        local_98->GetFullSprite();
                        bVar7 = operator!=((shared_ptr*)local_78, (_func_decltype_nullptr*)0);
                        if ((!bVar7) ||
                            (bVar7 = operator!=((shared_ptr*)local_98, (_func_decltype_nullptr*)0), !bVar7)) {
                            lVar13 = shared_ptr<configdecoder::HeadbarType>::operator->(this_02);
                            local_38 = *(uint*)(lVar13 + 40);
                            local_c8._32_8_ = 0;
                        } else {
                            lVar13 = shared_ptr<configdecoder::HeadbarType>::operator->(this_02);
                            iVar8 = *(int*)(lVar13 + 44);
                            lVar13 = shared_ptr<graphics::Pix32>::operator->((shared_ptr<graphics::Pix32>*)local_98);
                            local_c8._32_8_ = 0;
                            if (iVar8 * 2 < *(int*)(lVar13 + 24)) {
                                lVar13 = shared_ptr<configdecoder::HeadbarType>::operator->(this_02);
                                local_c8._32_8_ = ZEXT48(*(uint*)(lVar13 + 44));
                            }
                            lVar13 = shared_ptr<graphics::Pix32>::operator->((shared_ptr<graphics::Pix32>*)local_98);
                            local_38 = *(int*)(lVar13 + 24) + local_c8._32_4_ * -2;
                        }
                        iVar8 = pCVar19->field_8488;
                        piVar15 = (int*)shared_ptr<Headbar>::operator->((shared_ptr<Headbar>*)local_c8);
                        iVar8 = iVar8 - *piVar15;
                        lVar13 = shared_ptr<Headbar>::operator->((shared_ptr<Headbar>*)local_c8);
                        iVar17 = *(int*)(lVar13 + 8);
                        lVar13 = shared_ptr<configdecoder::HeadbarType>::operator->(this_02);
                        uVar23 = (int)(iVar17 * local_38) / *(int*)(lVar13 + 40);
                        lVar13 = shared_ptr<Headbar>::operator->((shared_ptr<Headbar>*)local_c8);
                        if (iVar8 < *(int*)(lVar13 + 12)) {
                            lVar13 = shared_ptr<configdecoder::HeadbarType>::operator->(this_02);
                            if (*(int*)(lVar13 + 20) == 0) {
                                iVar8 = 0;
                            } else {
                                lVar13 = shared_ptr<configdecoder::HeadbarType>::operator->(this_02);
                                iVar17 = *(int*)(lVar13 + 20);
                                lVar13 = shared_ptr<configdecoder::HeadbarType>::operator->(this_02);
                                iVar8 = (iVar8 / iVar17) * *(int*)(lVar13 + 20);
                            }
                            lVar13 = shared_ptr<Headbar>::operator->((shared_ptr<Headbar>*)local_c8);
                            iVar17 = *(int*)(lVar13 + 4);
                            lVar13 = shared_ptr<configdecoder::HeadbarType>::operator->(this_02);
                            iVar17 = (int)(iVar17 * local_38) / *(int*)(lVar13 + 40);
                            lVar13 = shared_ptr<Headbar>::operator->((shared_ptr<Headbar>*)local_c8);
                            uVar23 = (int)((uVar23 - iVar17) * iVar8) / *(int*)(lVar13 + 12) + iVar17;
                        LAB_10010d98e:
                            uVar24 = 255;
                        } else {
                            lVar13 = shared_ptr<Headbar>::operator->((shared_ptr<Headbar>*)local_c8);
                            iVar17 = *(int*)(lVar13 + 12);
                            lVar13 = shared_ptr<configdecoder::HeadbarType>::operator->(this_02);
                            iVar22 = *(int*)(lVar13 + 24);
                            lVar13 = shared_ptr<configdecoder::HeadbarType>::operator->(this_02);
                            if (*(int*)(lVar13 + 16) < 0)
                                goto LAB_10010d98e;
                            lVar13 = shared_ptr<configdecoder::HeadbarType>::operator->(this_02);
                            iVar3 = *(int*)(lVar13 + 24);
                            lVar13 = shared_ptr<configdecoder::HeadbarType>::operator->(this_02);
                            uVar24 = (((iVar17 - iVar8) + iVar22) * 256) / (iVar3 - *(int*)(lVar13 + 16));
                        }
                        lVar13 = shared_ptr<Headbar>::operator->((shared_ptr<Headbar>*)local_c8);
                        uVar18 = uVar23;
                        if ((int)uVar23 < 1) {
                            uVar18 = 1;
                        }
                        if (*(int*)(lVar13 + 8) < 1) {
                            uVar18 = uVar23;
                        }
                        bVar7 = operator!=((shared_ptr*)local_78, (_func_decltype_nullptr*)0);
                        if (bVar7) {
                            bVar7 = operator!=((shared_ptr*)local_98, (_func_decltype_nullptr*)0);
                            uVar23 = local_38;
                            if (!bVar7)
                                goto LAB_10010dab0;
                            bVar7 = local_38 == uVar18;
                            iVar8 = local_c8._32_4_;
                            lVar13 = shared_ptr<graphics::Pix32>::operator->((shared_ptr<graphics::Pix32>*)local_78);
                            pCVar19 = local_48;
                            iVar22 = (iVar8 << bVar7) + uVar18;
                            local_c8._40_4_ = *(undefined4*)&local_60->field_4;
                            iVar17 = local_c8._40_4_ - *(int*)(lVar13 + 28);
                            *(int*)&local_60->field_4 = iVar17;
                            iVar17 = iVar17 + param_6;
                            iVar8 = *(int*)local_60 - (((int)uVar23 >> 1) + iVar8);
                            local_38 = uVar24;
                            if (uVar24 < 255) {
                                uVar14 = shared_ptr<graphics::Pix32>::operator*((shared_ptr<graphics::Pix32>*)local_78);
                                (**(code**)(local_40->field_0 + 232))(local_40, uVar14, iVar8, iVar17, local_38);
                                local_40->SetSubClipping(iVar8, iVar17, iVar22 + iVar8, local_c8._40_4_ + param_6);
                                uVar14 = shared_ptr<graphics::Pix32>::operator*((shared_ptr<graphics::Pix32>*)local_98);
                                (**(code**)(local_40->field_0 + 232))(local_40, uVar14, iVar8, iVar17, local_38);
                            } else {
                                uVar14 = shared_ptr<graphics::Pix32>::operator*((shared_ptr<graphics::Pix32>*)local_78);
                                (**(code**)(local_40->field_0 + 176))(local_40, uVar14, iVar8, iVar17);
                                local_40->SetSubClipping(iVar8, iVar17, iVar22 + iVar8, local_c8._40_4_ + param_6);
                                uVar14 = shared_ptr<graphics::Pix32>::operator*((shared_ptr<graphics::Pix32>*)local_98);
                                (**(code**)(local_40->field_0 + 176))(local_40, uVar14, iVar8, iVar17);
                            }
                            local_40->SetClipping(param_5, param_6, local_d0, local_cc);
                        } else {
                        LAB_10010dab0:
                            uVar23 = local_38;
                            pCVar19 = local_48;
                            iVar8 = *local_50 + -5;
                            *local_50 = iVar8;
                            if (-1 < local_34) {
                                iVar17 = *(int*)local_60 - ((int)local_38 >> 1);
                                (**(code**)(local_40->field_0 + 32))(local_40, iVar17, iVar8, uVar18, 5, 65280);
                                (**(code**)(local_40->field_0 + 32))(local_40, iVar17 + uVar18, iVar8, uVar23 - uVar18,
                                                                     5);
                            }
                        }
                        *local_50 = *local_50 + -2;
                        local_98->~shared_ptr();
                        local_78->~shared_ptr();
                        bVar25 = true;
                    }
                    this_03 = (HeadbarQueue*)shared_ptr<configdecoder::HeadbarQueue>::operator->(
                        (shared_ptr<configdecoder::HeadbarQueue>*)local_98._16_8_);
                    cVar6 = this_03->ListEmpty();
                    if (cVar6 == '\0') {
                        eastl::ListIterator<console::Line, console::Line*, console::Line&>::operator++(
                            (ListIterator<console::Line, console::Line*, console::Line&>*)&local_68);
                    } else {
                        new (&local_e8) eastl::ListIterator<shared_ptr<rs2lib::worldmap::MapElement>,
                                                            shared_ptr<rs2lib::worldmap::MapElement> const*,
                                                            shared_ptr<rs2lib::worldmap::MapElement> const&>(
                            (ListIterator*)&local_68);
                        eastl::list<shared_ptr<ClientObj>, eastl::allocator>::erase(local_78, local_e0, local_e8);
                        local_68 = CONCAT44(local_78._4_4_, local_78._0_4_);
                    }
                    local_c8->~shared_ptr();
                    bVar7 = eastl::operator!=((eastl*)&local_68, (hashtable_iterator_base*)local_f0, extraout_RDX_00);
                } while (bVar7);
            }
        } else {
            bVar25 = false;
        }
        pCVar20 = local_58;
        if (!bVar25) {
            *local_50 = *local_50 + -7;
        }
        if ((char)local_7c != '\0') {
            if (*(int*)((long)&local_58->field_40 + 4) == pCVar19->field_8488) {
                cVar6 = ShouldRenderPlayerName(pCVar19, local_58);
                if (cVar6 != '\0') {
                    GetOverlayPos(pCVar19, (ClientEntity*)pCVar20, *(int*)&pCVar20->field_424 + 15);
                    local_78._0_4_ = 1;
                    psVar10 = (shared_ptr*)eastl::hash_map<
                        Font, shared_ptr<jstring::PixfontGeneric>, FontHash, eastl::equal_to<Font>, eastl::allocator,
                        false>::operator[]((hash_map<Font, shared_ptr<jstring::PixfontGeneric>, FontHash,
                                                     eastl::equal_to<Font>, eastl::allocator, false>*)
                                               pCVar19->field_19128,
                                           (Font*)local_78);
                    new (local_c8) shared_ptr<dash3d::Decor>(psVar10);
                    *local_50 = *local_50 + -4;
                    pPVar11 = (PixfontGeneric*)shared_ptr<jstring::PixfontGeneric>::operator->(
                        (shared_ptr<jstring::PixfontGeneric>*)local_c8);
                    this_04 = (DisplayName*)shared_ptr<rs2lib::social::DisplayName>::operator->(
                        (shared_ptr<rs2lib::social::DisplayName>*)&local_58->field_992);
                    pbVar12 = (basic_string*)this_04->GetDisplayName();
                    pPVar11->CentreString(pbVar12, *(int*)local_60, *(int*)&local_60->field_4, 16777215, 0, local_40);
                    *local_50 = *local_50 + -18;
                    local_c8->~shared_ptr();
                    pCVar20 = local_58;
                }
            }
            if ((char)local_7c != '\0') {
                if (pCVar20->field_1200 != '\0') {
                    return;
                }
                iVar8 = pCVar20->field_1024;
                if ((((long)iVar8 != 18446744073709551615) || (pCVar20->field_1028 != -1)) && (-1 < local_34)) {
                    if (iVar8 != -1) {
                        puVar1 = &local_48->field_1115712;
                        lVar13 = Array<graphics::Pix32, eastl::allocator>::operator[](
                            (Array<graphics::Pix32, eastl::allocator>*)puVar1, (long)iVar8);
                        pCVar19 = local_48;
                        pOVar5 = local_60;
                        *(int*)&local_60->field_4 = *(int*)&local_60->field_4 - *(int*)(lVar13 + 28);
                        uVar14 = Array<graphics::Pix32, eastl::allocator>::operator[](
                            (Array<graphics::Pix32, eastl::allocator>*)puVar1, (long)local_58->field_1024);
                        (**(code**)(local_40->field_0 + 176))(local_40, uVar14, *(int*)pOVar5 + -12,
                                                              *(undefined4*)&pOVar5->field_4);
                        pCVar20 = local_58;
                    }
                    if ((long)pCVar20->field_1028 != 18446744073709551615) {
                        puVar1 = &local_48->field_1115736;
                        lVar13 = Array<graphics::Pix32, eastl::allocator>::operator[](
                            (Array<graphics::Pix32, eastl::allocator>*)puVar1, (long)pCVar20->field_1028);
                        pCVar19 = local_48;
                        pOVar5 = local_60;
                        *(int*)&local_60->field_4 = *(int*)&local_60->field_4 - *(int*)(lVar13 + 28);
                        uVar14 = Array<graphics::Pix32, eastl::allocator>::operator[](
                            (Array<graphics::Pix32, eastl::allocator>*)puVar1, (long)pCVar20->field_1028);
                        (**(code**)(local_40->field_0 + 176))(local_40, uVar14, *(int*)pOVar5 + -12,
                                                              *(undefined4*)&pOVar5->field_4);
                    }
                }
                if (*(int*)&pCVar19->field_54896 != local_c8._44_4_) {
                    return;
                }
                if (pCVar19->field_54888 != 10) {
                    return;
                }
                if (local_34 < 0) {
                    return;
                }
                this_07 = (Array<graphics::Pix32, eastl::allocator>*)&pCVar19->field_1115760;
                lVar13 = Array<graphics::Pix32, eastl::allocator>::operator[](this_07, 1);
                *local_50 = *local_50 - *(int*)(lVar13 + 28);
                uVar21 = 1;
                goto LAB_10010e0c3;
            }
        }
        this_05 = (vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>*)
                      pCVar20->GetHeadIconGraphics();
        this_06 = (vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>*)
                      pCVar20->GetHeadIconIndices();
        cVar6 = eastl::vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>::empty(
            this_06);
        if (((cVar6 == '\0') &&
             (cVar6 =
                  eastl::vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>::empty(
                      this_05),
              cVar6 == '\0')) &&
            (lVar13 = this_06->size(), lVar13 != 0)) {
            local_98._16_8_ = &local_48->field_7305840;
            uVar21 = 0;
            do {
                piVar15 = (int*)eastl::vector<
                    int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>::operator[](this_06,
                                                                                                                uVar21);
                if ((-1 < *piVar15) &&
                    (piVar15 =
                         (int*)eastl::vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true,
                                                                                eastl::allocator>>::operator[](this_05,
                                                                                                               uVar21),
                     -1 < *piVar15)) {
                    piVar15 =
                        (int*)eastl::vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true,
                                                                               eastl::allocator>>::operator[](this_05,
                                                                                                              uVar21);
                    iVar8 = *piVar15;
                    piVar15 =
                        (int*)eastl::vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true,
                                                                               eastl::allocator>>::operator[](this_06,
                                                                                                              uVar21);
                    local_68 = (long)*piVar15 | (long)iVar8 << 8;
                    psVar10 = (shared_ptr*)LRUHashCache<graphics::Pix32, 8ul, 9ul, false, unsigned long long>::Find(
                        (ulonglong*)local_98._16_8_);
                    new (local_78) shared_ptr<dash3d::Decor>(psVar10);
                    bVar7 = local_78->operator_cast_to_bool();
                    if (!bVar7) {
                        pJVar4 = (Js5*)local_48->m_pSprites;
                        piVar15 = (int*)
                            eastl::vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true,
                                                                             eastl::allocator>>::operator[](this_05,
                                                                                                            uVar21);
                        local_c8->Makepix32Array(pJVar4, *piVar15, 0);
                        piVar15 = (int*)
                            eastl::vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true,
                                                                             eastl::allocator>>::operator[](this_06,
                                                                                                            uVar21);
                        iVar8 = *piVar15;
                        uVar16 = local_c8->end();
                        if ((ulong)(long)iVar8 < uVar16) {
                            piVar15 = (int*)
                                eastl::vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true,
                                                                                 eastl::allocator>>::operator[](this_06,
                                                                                                                uVar21);
                            Array<graphics::Pix32, eastl::allocator>::operator[](
                                (Array<graphics::Pix32, eastl::allocator>*)local_c8, (long)*piVar15);
                            local_98->CopyUntrim();
                            shared_ptr<graphics::Pix32>::operator=((shared_ptr<graphics::Pix32>*)local_78,
                                                                   (shared_ptr*)local_98);
                            local_98->~shared_ptr();
                            local_98._16_8_->Put(local_78, 1, &local_68);
                        }
                        local_c8->~Array();
                    }
                    bVar7 = local_78->operator_cast_to_bool();
                    if ((bVar7) && (-1 < local_34)) {
                        lVar13 = shared_ptr<graphics::Pix32>::operator->((shared_ptr<graphics::Pix32>*)local_78);
                        *local_50 = *local_50 - *(int*)(lVar13 + 28);
                        uVar14 = shared_ptr<graphics::Pix32>::operator*((shared_ptr<graphics::Pix32>*)local_78);
                        iVar8 = *(int*)local_60;
                        lVar13 = shared_ptr<graphics::Pix32>::operator->((shared_ptr<graphics::Pix32>*)local_78);
                        (**(code**)(local_40->field_0 + 176))(local_40, uVar14, iVar8 - (*(int*)(lVar13 + 24) >> 1));
                        *local_50 = *local_50 + -2;
                    }
                    local_78->~shared_ptr();
                }
                uVar21 = uVar21 + 1;
                uVar16 = this_06->size();
            } while (uVar21 < uVar16);
        }
        if (local_48->field_54888 != 1) {
            return;
        }
        if (*(int*)&local_48->field_54892 != local_c8._44_4_) {
            return;
        }
        if (local_34 < 0) {
            return;
        }
        *local_50 = *local_50 + -23;
        if (9 < local_48->field_8488 % 20) {
            return;
        }
        this_07 = (Array<graphics::Pix32, eastl::allocator>*)&local_48->field_1115760;
        uVar21 = 0;
    LAB_10010e0c3:
        uVar14 = Array<graphics::Pix32, eastl::allocator>::operator[](this_07, uVar21);
        (**(code**)(local_40->field_0 + 176))(local_40, uVar14, *(int*)local_60 + -12,
                                              *(undefined4*)&local_60->field_4);
    }

    // 0x10010e1e0, 5952 bytes, placed by class name and neighbouring functions
    // Client::GdmEntityOverlayHitsplats(ClientEntity&, OverlayPos&, int, int, int, int)
    void Client::GdmEntityOverlayHitsplats(ClientEntity* param_1, OverlayPos* param_2, int param_3, int param_4,
                                           int param_5, int param_6) {
        char cVar1;
        bool bVar2;
        uint uVar3;
        int iVar4;
        int iVar5;
        int iVar6;
        int* piVar7;
        long lVar8;
        PixfontGeneric* pPVar9;
        undefined8 uVar10;
        uint uVar11;
        uint in_register_0000000c;
        int iVar12;
        ulong uVar13;
        uint uVar14;
        _func_decltype_nullptr* p_Var15;
        int iVar16;
        uint uVar17;
        int iVar18;
        undefined1 local_240[64];
        array<int, 4ul>* local_200;
        array<int, 4ul>* local_1f8;
        array<int, 4ul>* local_1f0;
        array<int, 4ul>* local_1e8;
        array<int, 4ul>* local_1e0;
        OverlayPos* local_1d8;
        undefined8 local_1d0;
        int local_1c4;
        ulong local_1c0;
        shared_ptr* local_1b8;
        shared_ptr local_1b0;
        shared_ptr local_1a0;
        shared_ptr local_190;
        shared_ptr local_180;
        shared_ptr local_170;
        shared_ptr local_160;
        shared_ptr local_150;
        shared_ptr local_140;
        shared_ptr local_130;
        shared_ptr local_120;
        int local_110;
        int local_10c;
        int local_108;
        int local_104;
        ulong local_100;
        ulong local_f0;
        ulong local_e8;
        int local_e0;
        int local_dc;
        int local_d8;
        int local_d4;
        int local_d0;
        int local_cc;
        int local_c8;
        int local_c4;
        shared_ptr local_c0;
        undefined1 local_b0[44];
        int local_84;
        int local_80;
        int local_7c;
        int local_78;
        int local_74;
        ulong local_70;
        shared_ptr local_68;
        ulong local_58;
        int local_50;
        int local_4c;
        int local_48;
        int local_44;
        ulong local_40;
        Pix2D* local_38;

        local_1d0._4_4_ = in_register_0000000c;
        local_1d0._0_4_ = param_3;
        local_1d8 = param_2;
        cVar1 = param_1->HasHitmark(field_8488);
        if (cVar1 != '\0') {
            local_38 = (Pix2D*)(*(code*)*((Client*)this)->field_144->field_0)();
            uVar17 = (uint)local_1d0;
            local_38->SetClipping(uVar17, param_4, param_5 + uVar17, param_6 + param_4);
            local_200 = (array<int, 4ul>*)param_1->field_244;
            local_1f8 = (array<int, 4ul>*)param_1->field_212;
            local_1f0 = (array<int, 4ul>*)param_1->field_260;
            local_1b8 = (shared_ptr*)((Client*)this)->field_1104208;
            local_1e8 = (array<int, 4ul>*)param_1->field_228;
            local_1e0 = (array<int, 4ul>*)param_1->field_276;
            local_1c4 = param_4 + -12;
            local_104 = uVar17 + 2;
            uVar13 = 0;
            do {
                local_b0._32_8_ = std::array<int, 4ul>::operator[](local_200, uVar13);
                iVar18 = *(int*)local_b0._32_8_;
                local_100 = uVar13;
                piVar7 = (int*)std::array<int, 4ul>::operator[](local_1f8, uVar13);
                iVar4 = *piVar7;
                new (&local_c0) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
                if (iVar4 < 0) {
                    iVar4 = 0;
                    if (-1 < iVar18)
                        goto LAB_10010e44c;
                } else if (((Client*)this)->field_8488 < iVar18) {
                    local_b0->List(*piVar7);
                    shared_ptr<configdecoder::HitmarkType>::operator=(
                        (shared_ptr<configdecoder::HitmarkType>*)&local_c0, (shared_ptr*)local_b0);
                    local_b0->~shared_ptr();
                    lVar8 = shared_ptr<configdecoder::HitmarkType>::operator->(
                        (shared_ptr<configdecoder::HitmarkType>*)&local_c0);
                    iVar4 = *(int*)(lVar8 + 12);
                    bVar2 = operator!=(&local_c0, (_func_decltype_nullptr*)0);
                    if (bVar2) {
                        lVar8 = shared_ptr<configdecoder::HitmarkType>::operator->(
                            (shared_ptr<configdecoder::HitmarkType>*)&local_c0);
                        cVar1 = ((lVar8 + 88))->empty();
                        if (cVar1 == '\0') {
                            shared_ptr<configdecoder::HitmarkType>::operator->(
                                (shared_ptr<configdecoder::HitmarkType>*)&local_c0);
                            local_b0->GetMultiHitmark();
                            shared_ptr<configdecoder::HitmarkType>::operator=(
                                (shared_ptr<configdecoder::HitmarkType>*)&local_c0, (shared_ptr*)local_b0);
                            local_b0->~shared_ptr();
                            bVar2 = operator==(&local_c0, (_func_decltype_nullptr*)0);
                            if (bVar2) {
                                *(int*)local_b0._32_8_ = -1;
                                goto LAB_10010e2f7;
                            }
                        }
                    }
                LAB_10010e44c:
                    piVar7 = (int*)std::array<int, 4ul>::operator[](local_1f0, local_100);
                    iVar5 = *piVar7;
                    new (&local_68) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
                    if (-1 < iVar5) {
                        local_b0->List(iVar5);
                        shared_ptr<configdecoder::HitmarkType>::operator=(
                            (shared_ptr<configdecoder::HitmarkType>*)&local_68, (shared_ptr*)local_b0);
                        local_b0->~shared_ptr();
                        bVar2 = operator!=(&local_68, (_func_decltype_nullptr*)0);
                        if (bVar2) {
                            lVar8 = shared_ptr<configdecoder::HitmarkType>::operator->(
                                (shared_ptr<configdecoder::HitmarkType>*)&local_68);
                            cVar1 = ((lVar8 + 88))->empty();
                            if (cVar1 == '\0') {
                                shared_ptr<configdecoder::HitmarkType>::operator->(
                                    (shared_ptr<configdecoder::HitmarkType>*)&local_68);
                                local_b0->GetMultiHitmark();
                                shared_ptr<configdecoder::HitmarkType>::operator=(
                                    (shared_ptr<configdecoder::HitmarkType>*)&local_68, (shared_ptr*)local_b0);
                                local_b0->~shared_ptr();
                            }
                        }
                    }
                    if (iVar18 - iVar4 <= ((Client*)this)->field_8488) {
                        bVar2 = operator==(&local_c0, (_func_decltype_nullptr*)0);
                        if (bVar2) {
                            *(int*)local_b0._32_8_ = -1;
                        } else {
                            uVar17 = *(uint*)&local_1d8->field_8;
                            if (-1 < (int)uVar17) {
                                uVar11 = *(uint*)&local_1d8->field_12 - 20;
                                if (local_100 != 1) {
                                    uVar11 = *(uint*)&local_1d8->field_12;
                                }
                                uVar3 = uVar17 - 15;
                                uVar14 = uVar11 - 10;
                                if (local_100 != 2) {
                                    uVar3 = uVar17;
                                    uVar14 = uVar11;
                                }
                                uVar17 = uVar14 - 10;
                                if (local_100 != 3) {
                                    uVar17 = uVar14;
                                }
                                local_40 = (ulong)uVar17;
                                uVar17 = uVar3 + 15;
                                if (local_100 != 3) {
                                    uVar17 = uVar3;
                                }
                                local_1c0 = (ulong)uVar17;
                                new (&local_1a0) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
                                new (&local_190) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
                                new (&local_150) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
                                new (&local_140) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
                                new (&local_180) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
                                new (&local_170) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
                                new (&local_130) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
                                new (&local_120) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
                                shared_ptr<configdecoder::HitmarkType>::operator->(
                                    (shared_ptr<configdecoder::HitmarkType>*)&local_c0);
                                local_b0->GetIconSprite();
                                shared_ptr<graphics::Pix32>::operator=((shared_ptr<graphics::Pix32>*)&local_1a0,
                                                                       (shared_ptr*)local_b0);
                                local_b0->~shared_ptr();
                                bVar2 = operator!=(&local_1a0, (_func_decltype_nullptr*)0);
                                local_dc = 0;
                                local_e8 = 0;
                                if (bVar2) {
                                    lVar8 = shared_ptr<graphics::Pix32>::operator->(
                                        (shared_ptr<graphics::Pix32>*)&local_1a0);
                                    local_e8 = (ulong) * (uint*)(lVar8 + 24);
                                    shared_ptr<graphics::Pix32>::operator->((shared_ptr<graphics::Pix32>*)&local_1a0);
                                    lVar8 = shared_ptr<graphics::Pix32>::operator->(
                                        (shared_ptr<graphics::Pix32>*)&local_1a0);
                                    local_dc = *(int*)(lVar8 + 32);
                                }
                                shared_ptr<configdecoder::HitmarkType>::operator->(
                                    (shared_ptr<configdecoder::HitmarkType>*)&local_c0);
                                local_b0->GetBackgroundSprite();
                                shared_ptr<graphics::Pix32>::operator=((shared_ptr<graphics::Pix32>*)&local_190,
                                                                       (shared_ptr*)local_b0);
                                local_b0->~shared_ptr();
                                bVar2 = operator!=(&local_190, (_func_decltype_nullptr*)0);
                                local_d0 = 0;
                                local_50 = 0;
                                if (bVar2) {
                                    lVar8 = shared_ptr<graphics::Pix32>::operator->(
                                        (shared_ptr<graphics::Pix32>*)&local_190);
                                    local_50 = *(int*)(lVar8 + 24);
                                    shared_ptr<graphics::Pix32>::operator->((shared_ptr<graphics::Pix32>*)&local_190);
                                    lVar8 = shared_ptr<graphics::Pix32>::operator->(
                                        (shared_ptr<graphics::Pix32>*)&local_190);
                                    local_d0 = *(int*)(lVar8 + 32);
                                }
                                shared_ptr<configdecoder::HitmarkType>::operator->(
                                    (shared_ptr<configdecoder::HitmarkType>*)&local_c0);
                                local_b0->GetBackgroundLeftSprite();
                                shared_ptr<graphics::Pix32>::operator=((shared_ptr<graphics::Pix32>*)&local_150,
                                                                       (shared_ptr*)local_b0);
                                local_b0->~shared_ptr();
                                bVar2 = operator!=(&local_150, (_func_decltype_nullptr*)0);
                                local_d8 = 0;
                                local_f0 = 0;
                                if (bVar2) {
                                    lVar8 = shared_ptr<graphics::Pix32>::operator->(
                                        (shared_ptr<graphics::Pix32>*)&local_150);
                                    local_f0 = (ulong) * (uint*)(lVar8 + 24);
                                    shared_ptr<graphics::Pix32>::operator->((shared_ptr<graphics::Pix32>*)&local_150);
                                    lVar8 = shared_ptr<graphics::Pix32>::operator->(
                                        (shared_ptr<graphics::Pix32>*)&local_150);
                                    local_d8 = *(int*)(lVar8 + 32);
                                }
                                shared_ptr<configdecoder::HitmarkType>::operator->(
                                    (shared_ptr<configdecoder::HitmarkType>*)&local_c0);
                                local_b0->GetBackgroundRightSprite();
                                shared_ptr<graphics::Pix32>::operator=((shared_ptr<graphics::Pix32>*)&local_140,
                                                                       (shared_ptr*)local_b0);
                                local_b0->~shared_ptr();
                                bVar2 = operator!=(&local_140, (_func_decltype_nullptr*)0);
                                local_d4 = 0;
                                iVar18 = 0;
                                if (bVar2) {
                                    lVar8 = shared_ptr<graphics::Pix32>::operator->(
                                        (shared_ptr<graphics::Pix32>*)&local_140);
                                    iVar18 = *(int*)(lVar8 + 24);
                                    shared_ptr<graphics::Pix32>::operator->((shared_ptr<graphics::Pix32>*)&local_140);
                                    lVar8 = shared_ptr<graphics::Pix32>::operator->(
                                        (shared_ptr<graphics::Pix32>*)&local_140);
                                    local_d4 = *(int*)(lVar8 + 32);
                                }
                                p_Var15 = (_func_decltype_nullptr*)0;
                                bVar2 = operator!=(&local_68, (_func_decltype_nullptr*)0);
                                local_7c = 0;
                                local_80 = 0;
                                local_78 = 0;
                                local_84 = 0;
                                local_44 = 0;
                                local_70 = 0;
                                local_4c = 0;
                                local_58 = 0;
                                if (bVar2) {
                                    shared_ptr<configdecoder::HitmarkType>::operator->(
                                        (shared_ptr<configdecoder::HitmarkType>*)&local_68);
                                    local_b0->GetIconSprite();
                                    shared_ptr<graphics::Pix32>::operator=((shared_ptr<graphics::Pix32>*)&local_180,
                                                                           (shared_ptr*)local_b0);
                                    local_b0->~shared_ptr();
                                    bVar2 = operator!=(&local_180, (_func_decltype_nullptr*)0);
                                    local_84 = 0;
                                    local_58 = 0;
                                    if (bVar2) {
                                        lVar8 = shared_ptr<graphics::Pix32>::operator->(
                                            (shared_ptr<graphics::Pix32>*)&local_180);
                                        local_58 = (ulong) * (uint*)(lVar8 + 24);
                                        shared_ptr<graphics::Pix32>::operator->(
                                            (shared_ptr<graphics::Pix32>*)&local_180);
                                        lVar8 = shared_ptr<graphics::Pix32>::operator->(
                                            (shared_ptr<graphics::Pix32>*)&local_180);
                                        local_84 = *(int*)(lVar8 + 32);
                                    }
                                    shared_ptr<configdecoder::HitmarkType>::operator->(
                                        (shared_ptr<configdecoder::HitmarkType>*)&local_68);
                                    local_b0->GetBackgroundSprite();
                                    shared_ptr<graphics::Pix32>::operator=((shared_ptr<graphics::Pix32>*)&local_170,
                                                                           (shared_ptr*)local_b0);
                                    local_b0->~shared_ptr();
                                    bVar2 = operator!=(&local_170, (_func_decltype_nullptr*)0);
                                    local_78 = 0;
                                    local_4c = 0;
                                    if (bVar2) {
                                        lVar8 = shared_ptr<graphics::Pix32>::operator->(
                                            (shared_ptr<graphics::Pix32>*)&local_170);
                                        local_4c = *(int*)(lVar8 + 24);
                                        shared_ptr<graphics::Pix32>::operator->(
                                            (shared_ptr<graphics::Pix32>*)&local_170);
                                        lVar8 = shared_ptr<graphics::Pix32>::operator->(
                                            (shared_ptr<graphics::Pix32>*)&local_170);
                                        local_78 = *(int*)(lVar8 + 32);
                                    }
                                    shared_ptr<configdecoder::HitmarkType>::operator->(
                                        (shared_ptr<configdecoder::HitmarkType>*)&local_68);
                                    local_b0->GetBackgroundLeftSprite();
                                    shared_ptr<graphics::Pix32>::operator=((shared_ptr<graphics::Pix32>*)&local_130,
                                                                           (shared_ptr*)local_b0);
                                    local_b0->~shared_ptr();
                                    bVar2 = operator!=(&local_130, (_func_decltype_nullptr*)0);
                                    local_80 = 0;
                                    local_70 = 0;
                                    if (bVar2) {
                                        lVar8 = shared_ptr<graphics::Pix32>::operator->(
                                            (shared_ptr<graphics::Pix32>*)&local_130);
                                        local_70 = (ulong) * (uint*)(lVar8 + 24);
                                        shared_ptr<graphics::Pix32>::operator->(
                                            (shared_ptr<graphics::Pix32>*)&local_130);
                                        lVar8 = shared_ptr<graphics::Pix32>::operator->(
                                            (shared_ptr<graphics::Pix32>*)&local_130);
                                        local_80 = *(int*)(lVar8 + 32);
                                    }
                                    shared_ptr<configdecoder::HitmarkType>::operator->(
                                        (shared_ptr<configdecoder::HitmarkType>*)&local_68);
                                    local_b0->GetBackgroundRightSprite();
                                    shared_ptr<graphics::Pix32>::operator=((shared_ptr<graphics::Pix32>*)&local_120,
                                                                           (shared_ptr*)local_b0);
                                    local_b0->~shared_ptr();
                                    p_Var15 = (_func_decltype_nullptr*)0;
                                    bVar2 = operator!=(&local_120, (_func_decltype_nullptr*)0);
                                    local_7c = 0;
                                    if (bVar2) {
                                        lVar8 = shared_ptr<graphics::Pix32>::operator->(
                                            (shared_ptr<graphics::Pix32>*)&local_120);
                                        local_44 = *(int*)(lVar8 + 24);
                                        shared_ptr<graphics::Pix32>::operator->(
                                            (shared_ptr<graphics::Pix32>*)&local_120);
                                        lVar8 = shared_ptr<graphics::Pix32>::operator->(
                                            (shared_ptr<graphics::Pix32>*)&local_120);
                                        local_7c = *(int*)(lVar8 + 32);
                                    } else {
                                        local_44 = 0;
                                    }
                                }
                                new (&local_1b0) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(p_Var15);
                                new (&local_160) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(p_Var15);
                                shared_ptr<configdecoder::HitmarkType>::operator->(
                                    (shared_ptr<configdecoder::HitmarkType>*)&local_c0);
                                local_b0->GetFont();
                                shared_ptr<jstring::PixfontGeneric>::operator=(
                                    (shared_ptr<jstring::PixfontGeneric>*)&local_1b0, (shared_ptr*)local_b0);
                                local_b0->~shared_ptr();
                                bVar2 = operator==(&local_1b0, (_func_decltype_nullptr*)0);
                                if (bVar2) {
                                    shared_ptr<jstring::PixfontGeneric>::operator=(
                                        (shared_ptr<jstring::PixfontGeneric>*)&local_1b0, local_1b8);
                                }
                                bVar2 = operator!=(&local_68, (_func_decltype_nullptr*)0);
                                if (bVar2) {
                                    shared_ptr<configdecoder::HitmarkType>::operator->(
                                        (shared_ptr<configdecoder::HitmarkType>*)&local_68);
                                    local_b0->GetFont();
                                    shared_ptr<jstring::PixfontGeneric>::operator=(
                                        (shared_ptr<jstring::PixfontGeneric>*)&local_160, (shared_ptr*)local_b0);
                                    local_b0->~shared_ptr();
                                    bVar2 = operator==(&local_160, (_func_decltype_nullptr*)0);
                                    if (bVar2) {
                                        shared_ptr<jstring::PixfontGeneric>::operator=(
                                            (shared_ptr<jstring::PixfontGeneric>*)&local_160, local_1b8);
                                    }
                                } else {
                                    shared_ptr<jstring::PixfontGeneric>::operator=(
                                        (shared_ptr<jstring::PixfontGeneric>*)&local_160, local_1b8);
                                }
                                new (local_b0) eastl::string();
                                new ((local_240 + 32)) eastl::string();
                                iVar4 = shared_ptr<configdecoder::HitmarkType>::operator->(
                                    (shared_ptr<configdecoder::HitmarkType>*)&local_c0);
                                std::array<int, 4ul>::operator[](local_1e8, local_100);
                                local_240->GetString(iVar4);
                                eastl::string::operator=((eastl::string*)local_b0, (basic_string*)local_240);
                                local_240->~basic_string();
                                pPVar9 = (PixfontGeneric*)shared_ptr<jstring::PixfontGeneric>::operator->(
                                    (shared_ptr<jstring::PixfontGeneric>*)&local_1b0);
                                iVar5 = pPVar9->StringWid(local_b0);
                                bVar2 = operator!=(&local_68, (_func_decltype_nullptr*)0);
                                iVar16 = 0;
                                iVar4 = 0;
                                if (bVar2) {
                                    iVar4 = shared_ptr<configdecoder::HitmarkType>::operator->(
                                        (shared_ptr<configdecoder::HitmarkType>*)&local_68);
                                    std::array<int, 4ul>::operator[](local_1e0, local_100);
                                    local_240->GetString(iVar4);
                                    eastl::string::operator=((eastl::string*)(local_240 + 32),
                                                             (basic_string*)local_240);
                                    local_240->~basic_string();
                                    pPVar9 = (PixfontGeneric*)shared_ptr<jstring::PixfontGeneric>::operator->(
                                        (shared_ptr<jstring::PixfontGeneric>*)&local_160);
                                    iVar4 = pPVar9->StringWid((basic_string*)(local_240 + 32));
                                }
                                if (0 < local_50) {
                                    bVar2 = operator!=(&local_150, (_func_decltype_nullptr*)0);
                                    if (!bVar2) {
                                        bVar2 = operator!=(&local_140, (_func_decltype_nullptr*)0);
                                        iVar16 = 1;
                                        if (!bVar2)
                                            goto LAB_10010eca2;
                                    }
                                    iVar16 = iVar5 / local_50 + 1;
                                }
                            LAB_10010eca2:
                                bVar2 = operator!=(&local_68, (_func_decltype_nullptr*)0);
                                local_48 = 0;
                                if (bVar2 && 0 < local_4c) {
                                    bVar2 = operator!=(&local_130, (_func_decltype_nullptr*)0);
                                    if (!bVar2) {
                                        bVar2 = operator!=(&local_120, (_func_decltype_nullptr*)0);
                                        local_48 = 1;
                                        if (!bVar2)
                                            goto LAB_10010ecf9;
                                    }
                                    local_48 = iVar4 / local_4c + 1;
                                }
                            LAB_10010ecf9:
                                iVar6 = (int)local_e8;
                                local_e8 = local_e8 & 4294967295;
                                if (iVar6 < 0) {
                                    local_e8 = 0;
                                }
                                iVar6 = (int)local_f0;
                                local_f0 = local_f0 & 4294967295;
                                if (iVar6 < 0) {
                                    local_f0 = 0;
                                }
                                iVar12 = (int)local_f0 + (int)local_e8 + 2;
                                iVar6 = iVar5;
                                local_e0 = iVar12;
                                if (0 < local_50) {
                                    iVar6 = iVar16 * local_50;
                                    local_e0 = (iVar6 - iVar5) / 2 + iVar12;
                                }
                                if (iVar18 < 0) {
                                    iVar18 = 0;
                                }
                                bVar2 = operator!=(&local_68, (_func_decltype_nullptr*)0);
                                local_10c = iVar6 + iVar12;
                                uVar17 = iVar18 + local_10c;
                                if (bVar2) {
                                    iVar18 = (int)local_58;
                                    if (iVar18 < 0) {
                                        iVar18 = 0;
                                    }
                                    iVar5 = (int)local_70;
                                    if (iVar5 < 0) {
                                        iVar5 = 0;
                                    }
                                    local_108 = iVar5 + iVar18 + uVar17 + 4;
                                    if (local_4c < 1) {
                                        local_74 = local_108;
                                    } else {
                                        local_74 = (local_48 * local_4c - iVar4) / 2 + local_108;
                                        iVar4 = local_48 * local_4c;
                                    }
                                    local_cc = uVar17 + 2;
                                    local_c8 = iVar18 + uVar17 + 4;
                                    local_c4 = iVar4 + local_108;
                                    iVar18 = local_44;
                                    if (local_44 < 0) {
                                        iVar18 = 0;
                                    }
                                    uVar17 = iVar18 + local_c4;
                                } else {
                                    local_cc = 0;
                                    local_c8 = 0;
                                    local_108 = 0;
                                    local_c4 = 0;
                                    local_74 = 0;
                                }
                                local_58 = (ulong)uVar17;
                                iVar6 = *(int*)local_b0._32_8_ - ((Client*)this)->field_8488;
                                lVar8 = shared_ptr<configdecoder::HitmarkType>::operator->(
                                    (shared_ptr<configdecoder::HitmarkType>*)&local_c0);
                                local_70 = CONCAT44(local_70._4_4_, *(undefined4*)(lVar8 + 32));
                                lVar8 = shared_ptr<configdecoder::HitmarkType>::operator->(
                                    (shared_ptr<configdecoder::HitmarkType>*)&local_c0);
                                iVar18 = *(int*)(lVar8 + 32);
                                lVar8 = shared_ptr<configdecoder::HitmarkType>::operator->(
                                    (shared_ptr<configdecoder::HitmarkType>*)&local_c0);
                                local_44 = (iVar18 * iVar6) / *(int*)(lVar8 + 12);
                                lVar8 = shared_ptr<configdecoder::HitmarkType>::operator->(
                                    (shared_ptr<configdecoder::HitmarkType>*)&local_c0);
                                iVar18 = *(int*)(lVar8 + 36);
                                lVar8 = shared_ptr<configdecoder::HitmarkType>::operator->(
                                    (shared_ptr<configdecoder::HitmarkType>*)&local_c0);
                                iVar4 = *(int*)(lVar8 + 36);
                                lVar8 = shared_ptr<configdecoder::HitmarkType>::operator->(
                                    (shared_ptr<configdecoder::HitmarkType>*)&local_c0);
                                iVar5 = *(int*)(lVar8 + 12);
                                lVar8 = shared_ptr<configdecoder::HitmarkType>::operator->(
                                    (shared_ptr<configdecoder::HitmarkType>*)&local_c0);
                                iVar18 = (iVar4 * iVar6) / iVar5 - iVar18;
                                uVar17 = (int)local_40 + local_1c4;
                                local_40 = (ulong)uVar17;
                                iVar4 = iVar18 + uVar17 + 15;
                                local_110 = *(int*)(lVar8 + 84) + iVar4;
                                shared_ptr<jstring::PixfontGeneric>::operator->(
                                    (shared_ptr<jstring::PixfontGeneric>*)&local_1b0);
                                shared_ptr<jstring::PixfontGeneric>::operator->(
                                    (shared_ptr<jstring::PixfontGeneric>*)&local_1b0);
                                bVar2 = operator!=(&local_68, (_func_decltype_nullptr*)0);
                                local_b0._32_8_ = local_b0._32_8_ & 18446744069414584320;
                                if (bVar2) {
                                    lVar8 = shared_ptr<configdecoder::HitmarkType>::operator->(
                                        (shared_ptr<configdecoder::HitmarkType>*)&local_68);
                                    local_b0._32_4_ = *(int*)(lVar8 + 84);
                                    shared_ptr<jstring::PixfontGeneric>::operator->(
                                        (shared_ptr<jstring::PixfontGeneric>*)&local_160);
                                    shared_ptr<jstring::PixfontGeneric>::operator->(
                                        (shared_ptr<jstring::PixfontGeneric>*)&local_160);
                                    local_b0._32_4_ = local_b0._32_4_ + iVar4;
                                }
                                lVar8 = shared_ptr<configdecoder::HitmarkType>::operator->(
                                    (shared_ptr<configdecoder::HitmarkType>*)&local_c0);
                                if (*(int*)(lVar8 + 40) < 0) {
                                    uVar17 = 255;
                                } else {
                                    lVar8 = shared_ptr<configdecoder::HitmarkType>::operator->(
                                        (shared_ptr<configdecoder::HitmarkType>*)&local_c0);
                                    iVar4 = *(int*)(lVar8 + 12);
                                    lVar8 = shared_ptr<configdecoder::HitmarkType>::operator->(
                                        (shared_ptr<configdecoder::HitmarkType>*)&local_c0);
                                    uVar17 = (iVar6 * 256) / (iVar4 - *(int*)(lVar8 + 40));
                                }
                                iVar4 = (int)local_e8 + 2;
                                iVar5 = (int)local_1c0 + (uint)local_1d0;
                                uVar11 = (int)local_58 >> 1;
                                local_58 = (ulong)uVar11;
                                iVar6 = (iVar5 - uVar11) + ((int)local_70 - local_44);
                                local_40 = (ulong)(uint)((int)local_40 + iVar18);
                                if (uVar17 < 255) {
                                    bVar2 = operator!=(&local_1a0, (_func_decltype_nullptr*)0);
                                    if (bVar2) {
                                        uVar10 = shared_ptr<graphics::Pix32>::operator*(
                                            (shared_ptr<graphics::Pix32>*)&local_1a0);
                                        (**(code**)(local_38->field_0 + 232))(local_38, uVar10, iVar6 - local_dc,
                                                                              local_40, uVar17);
                                    }
                                    bVar2 = operator!=(&local_150, (_func_decltype_nullptr*)0);
                                    if (bVar2) {
                                        uVar10 = shared_ptr<graphics::Pix32>::operator*(
                                            (shared_ptr<graphics::Pix32>*)&local_150);
                                        (**(code**)(local_38->field_0 + 232))(
                                            local_38, uVar10, (iVar4 + iVar6) - local_d8, local_40, uVar17);
                                    }
                                    bVar2 = operator!=(&local_190, (_func_decltype_nullptr*)0);
                                    if ((bVar2) && (0 < iVar16)) {
                                        iVar18 = ((((int)local_1c0 + local_104 + (int)local_70 + (int)local_e8 +
                                                    (int)local_f0) -
                                                   local_d0) -
                                                  (int)local_58) -
                                                 local_44;
                                        do {
                                            uVar10 = shared_ptr<graphics::Pix32>::operator*(
                                                (shared_ptr<graphics::Pix32>*)&local_190);
                                            (**(code**)(local_38->field_0 + 232))(local_38, uVar10, iVar18, local_40,
                                                                                  uVar17);
                                            iVar18 = iVar18 + local_50;
                                            iVar16 = iVar16 + -1;
                                        } while (iVar16 != 0);
                                    }
                                    bVar2 = operator!=(&local_140, (_func_decltype_nullptr*)0);
                                    if (bVar2) {
                                        uVar10 = shared_ptr<graphics::Pix32>::operator*(
                                            (shared_ptr<graphics::Pix32>*)&local_140);
                                        (**(code**)(local_38->field_0 + 232))(
                                            local_38, uVar10, (local_10c + iVar6) - local_d4, local_40, uVar17);
                                    }
                                    pPVar9 = (PixfontGeneric*)shared_ptr<jstring::PixfontGeneric>::operator->(
                                        (shared_ptr<jstring::PixfontGeneric>*)&local_1b0);
                                    lVar8 = shared_ptr<configdecoder::HitmarkType>::operator->(
                                        (shared_ptr<configdecoder::HitmarkType>*)&local_c0);
                                    pPVar9->DrawStringTrans(local_b0, local_e0 + iVar6, local_110, *(int*)(lVar8 + 8),
                                                            0, uVar17, local_38);
                                    bVar2 = operator!=(&local_68, (_func_decltype_nullptr*)0);
                                    if (bVar2) {
                                        bVar2 = operator!=(&local_180, (_func_decltype_nullptr*)0);
                                        if (bVar2) {
                                            uVar10 = shared_ptr<graphics::Pix32>::operator*(
                                                (shared_ptr<graphics::Pix32>*)&local_180);
                                            (**(code**)(local_38->field_0 + 232))(
                                                local_38, uVar10, (local_cc + iVar6) - local_84, local_40, uVar17);
                                        }
                                        bVar2 = operator!=(&local_130, (_func_decltype_nullptr*)0);
                                        if (bVar2) {
                                            uVar10 = shared_ptr<graphics::Pix32>::operator*(
                                                (shared_ptr<graphics::Pix32>*)&local_130);
                                            (**(code**)(local_38->field_0 + 232))(
                                                local_38, uVar10, (local_c8 + iVar6) - local_80, local_40, uVar17);
                                        }
                                        bVar2 = operator!=(&local_170, (_func_decltype_nullptr*)0);
                                        if ((bVar2) && (0 < local_48)) {
                                            iVar18 =
                                                (((iVar5 + local_108 + (int)local_70) - local_78) - (int)local_58) -
                                                local_44;
                                            do {
                                                uVar10 = shared_ptr<graphics::Pix32>::operator*(
                                                    (shared_ptr<graphics::Pix32>*)&local_170);
                                                (**(code**)(local_38->field_0 + 232))(local_38, uVar10, iVar18,
                                                                                      local_40, uVar17);
                                                iVar18 = iVar18 + local_4c;
                                                local_48 = local_48 + -1;
                                            } while (local_48 != 0);
                                        }
                                        bVar2 = operator!=(&local_120, (_func_decltype_nullptr*)0);
                                        if (bVar2) {
                                            uVar10 = shared_ptr<graphics::Pix32>::operator*(
                                                (shared_ptr<graphics::Pix32>*)&local_120);
                                            (**(code**)(local_38->field_0 + 232))(
                                                local_38, uVar10, (local_c4 + iVar6) - local_7c, local_40, uVar17);
                                        }
                                        pPVar9 = (PixfontGeneric*)shared_ptr<jstring::PixfontGeneric>::operator->(
                                            (shared_ptr<jstring::PixfontGeneric>*)&local_160);
                                        lVar8 = shared_ptr<configdecoder::HitmarkType>::operator->(
                                            (shared_ptr<configdecoder::HitmarkType>*)&local_68);
                                        pPVar9->DrawStringTrans((basic_string*)(local_240 + 32), iVar6 + local_74,
                                                                local_b0._32_4_, *(int*)(lVar8 + 8), 0, uVar17,
                                                                local_38);
                                    }
                                } else {
                                    bVar2 = operator!=(&local_1a0, (_func_decltype_nullptr*)0);
                                    if (bVar2) {
                                        uVar10 = shared_ptr<graphics::Pix32>::operator*(
                                            (shared_ptr<graphics::Pix32>*)&local_1a0);
                                        (**(code**)(local_38->field_0 + 176))(local_38, uVar10, iVar6 - local_dc,
                                                                              local_40);
                                    }
                                    bVar2 = operator!=(&local_150, (_func_decltype_nullptr*)0);
                                    if (bVar2) {
                                        uVar10 = shared_ptr<graphics::Pix32>::operator*(
                                            (shared_ptr<graphics::Pix32>*)&local_150);
                                        (**(code**)(local_38->field_0 + 176))(local_38, uVar10,
                                                                              (iVar4 + iVar6) - local_d8, local_40);
                                    }
                                    bVar2 = operator!=(&local_190, (_func_decltype_nullptr*)0);
                                    if ((bVar2) && (0 < iVar16)) {
                                        iVar18 = ((((int)local_1c0 + local_104 + (int)local_70 + (int)local_e8 +
                                                    (int)local_f0) -
                                                   local_d0) -
                                                  (int)local_58) -
                                                 local_44;
                                        do {
                                            uVar10 = shared_ptr<graphics::Pix32>::operator*(
                                                (shared_ptr<graphics::Pix32>*)&local_190);
                                            (**(code**)(local_38->field_0 + 176))(local_38, uVar10, iVar18, local_40);
                                            iVar18 = iVar18 + local_50;
                                            iVar16 = iVar16 + -1;
                                        } while (iVar16 != 0);
                                    }
                                    bVar2 = operator!=(&local_140, (_func_decltype_nullptr*)0);
                                    if (bVar2) {
                                        uVar10 = shared_ptr<graphics::Pix32>::operator*(
                                            (shared_ptr<graphics::Pix32>*)&local_140);
                                        (**(code**)(local_38->field_0 + 176))(local_38, uVar10,
                                                                              (local_10c + iVar6) - local_d4, local_40);
                                    }
                                    pPVar9 = (PixfontGeneric*)shared_ptr<jstring::PixfontGeneric>::operator->(
                                        (shared_ptr<jstring::PixfontGeneric>*)&local_1b0);
                                    lVar8 = shared_ptr<configdecoder::HitmarkType>::operator->(
                                        (shared_ptr<configdecoder::HitmarkType>*)&local_c0);
                                    pPVar9->DrawString(local_b0, local_e0 + iVar6, local_110,
                                                       *(uint*)(lVar8 + 8) | 4278190080, 0, local_38);
                                    bVar2 = operator!=(&local_68, (_func_decltype_nullptr*)0);
                                    if (bVar2) {
                                        bVar2 = operator!=(&local_180, (_func_decltype_nullptr*)0);
                                        if (bVar2) {
                                            uVar10 = shared_ptr<graphics::Pix32>::operator*(
                                                (shared_ptr<graphics::Pix32>*)&local_180);
                                            (**(code**)(local_38->field_0 + 176))(
                                                local_38, uVar10, (local_cc + iVar6) - local_84, local_40);
                                        }
                                        bVar2 = operator!=(&local_130, (_func_decltype_nullptr*)0);
                                        if (bVar2) {
                                            uVar10 = shared_ptr<graphics::Pix32>::operator*(
                                                (shared_ptr<graphics::Pix32>*)&local_130);
                                            (**(code**)(local_38->field_0 + 176))(
                                                local_38, uVar10, (local_c8 + iVar6) - local_80, local_40);
                                        }
                                        bVar2 = operator!=(&local_170, (_func_decltype_nullptr*)0);
                                        if ((bVar2) && (0 < local_48)) {
                                            iVar18 =
                                                (((iVar5 + local_108 + (int)local_70) - local_78) - (int)local_58) -
                                                local_44;
                                            do {
                                                uVar10 = shared_ptr<graphics::Pix32>::operator*(
                                                    (shared_ptr<graphics::Pix32>*)&local_170);
                                                (**(code**)(local_38->field_0 + 176))(local_38, uVar10, iVar18,
                                                                                      local_40);
                                                iVar18 = iVar18 + local_4c;
                                                local_48 = local_48 + -1;
                                            } while (local_48 != 0);
                                        }
                                        bVar2 = operator!=(&local_120, (_func_decltype_nullptr*)0);
                                        if (bVar2) {
                                            uVar10 = shared_ptr<graphics::Pix32>::operator*(
                                                (shared_ptr<graphics::Pix32>*)&local_120);
                                            (**(code**)(local_38->field_0 + 176))(
                                                local_38, uVar10, (local_c4 + iVar6) - local_7c, local_40);
                                        }
                                        pPVar9 = (PixfontGeneric*)shared_ptr<jstring::PixfontGeneric>::operator->(
                                            (shared_ptr<jstring::PixfontGeneric>*)&local_160);
                                        lVar8 = shared_ptr<configdecoder::HitmarkType>::operator->(
                                            (shared_ptr<configdecoder::HitmarkType>*)&local_68);
                                        pPVar9->DrawString((basic_string*)(local_240 + 32), iVar6 + local_74,
                                                           local_b0._32_4_, *(uint*)(lVar8 + 8) | 4278190080, 0,
                                                           local_38);
                                    }
                                }
                                ((local_240 + 32))->~basic_string();
                                local_b0->~basic_string();
                                local_160.~shared_ptr();
                                local_1b0.~shared_ptr();
                                local_120.~shared_ptr();
                                local_130.~shared_ptr();
                                local_170.~shared_ptr();
                                local_180.~shared_ptr();
                                local_140.~shared_ptr();
                                local_150.~shared_ptr();
                                local_190.~shared_ptr();
                                local_1a0.~shared_ptr();
                            }
                        }
                    }
                    local_68.~shared_ptr();
                }
            LAB_10010e2f7:
                local_c0.~shared_ptr();
                uVar13 = local_100 + 1;
            } while (uVar13 != 4);
        }
    }

    // 0x10010f930, 608 bytes, placed by __FILE__ string
    // Client::GdmEntityOverlayNPC(int, int, int, int, int, int)
    void Client::GdmEntityOverlayNPC(int param_1, int param_2, int param_3, int param_4, int param_5, int param_6) {
        bool bVar3;
        char cVar4;
        shared_ptr* this_00;
        long lVar5;
        ClientEntity* pCVar6;
        OverlayPos local_a0;
        shared_ptr<dash3d::Decor> local_80[16];
        shared_ptr local_70;
        vector<unsigned long, BucketAllocatorEASTL> local_60[28];

        this_00 = (shared_ptr*)std::array<shared_ptr<ClientNpc>, 65536ul>::operator[](
            (array<shared_ptr<ClientNpc>, 65536ul>*)&field_55272, (long)param_1);
        bVar3 = shared_ptr::operator_cast_to_bool(this_00);
        if (bVar3) {
            lVar5 = shared_ptr<ClientNpc>::operator->((shared_ptr<ClientNpc>*)this_00);
            shared_ptr<dash3d::Decor>::shared_ptr(local_80, (shared_ptr*)(lVar5 + 1024));
            lVar5 = shared_ptr<configdecoder::NpcType>::operator->((shared_ptr<configdecoder::NpcType>*)local_80);
            cVar4 = ((lVar5 + 488))->empty();
            bVar3 = true;
            if (cVar4 == '\0') {
                shared_ptr<configdecoder::NpcType>::operator->((shared_ptr<configdecoder::NpcType>*)local_80);
                local_70.GetMultiNpc();
                bVar3 = operator!=(&local_70, (_func_decltype_nullptr*)0);
                local_70.~shared_ptr();
            }
            if (bVar3 != false) {
                shared_ptr<ClientNpc>::operator*((shared_ptr<ClientNpc>*)this_00);
                GetAllOverlayPositions((Client*)&local_a0, (ClientEntity*)this);
                shared_ptr<ClientNpc>::operator->((shared_ptr<ClientNpc>*)this_00);
                local_60->GetScriptedOverlays();
                GdmEntityOverlayScripted(this, local_60, &local_a0, 2, param_2, param_3, param_4, param_5, param_6);
                GdmEntityOverlayScripted(this, local_60, &local_a0, 0, param_2, param_3, param_4, param_5, param_6);
                pCVar6 = (ClientEntity*)shared_ptr<ClientNpc>::operator*((shared_ptr<ClientNpc>*)this_00);
                GdmEntityOverlayHardcodedOverhead(this, pCVar6, &local_a0, false, param_1, param_2, param_3, param_4,
                                                  param_5);
                GdmEntityOverlayScripted(this, local_60, &local_a0, 1, param_2, param_3, param_4, param_5, param_6);
                pCVar6 = (ClientEntity*)shared_ptr<ClientNpc>::operator*((shared_ptr<ClientNpc>*)this_00);
                GdmEntityOverlayHitsplats(this, pCVar6, &local_a0, param_2, param_3, param_4, param_5);
                eastl::vector<unsigned long, BucketAllocatorEASTL>::~vector(local_60);
            }
            local_80->~shared_ptr();
            return;
        }
        /* WARNING: Subroutine does not return */
        LogAssert("npc",
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                  "client_entityoverlays.cpp",
                  45, "Invalid NPC in GdmEntityOverlayNPC");
    }

    // 0x10010fbd0, 192 bytes, placed by class name and neighbouring functions
    // Client::GdmEntityOverlayTile(int, int, int, int, int, int, int, int)
    void Client::GdmEntityOverlayTile(int param_1, int param_2, int param_3, int param_4, int param_5, int param_6,
                                      int param_7, int param_8) {
        char cVar1;
        rbtree<int, eastl::pair<int const, unsigned long>, eastl::less<int>,
               eastl::fixed_node_allocator<48ul, 1ul, 8ul, 0ul, true, eastl::allocator>,
               eastl::use_first<eastl::pair<int const, unsigned long>>, true, true>* this_00;
        undefined1 local_68[32];
        CoordGrid local_48;
        int local_38;
        int local_34;

        local_48._12_4_ = param_5;
        local_38 = param_4;
        local_34 = param_3;
        new (&local_48) rs2lib::CoordGrid(param_1, param_2, param_3);
        cVar1 = (m_entityOverlays, &local_48)->AnyOverlaysOnTile();
        if (cVar1 != '\0') {
            this_00 = (rbtree<int, eastl::pair<int const, unsigned long>, eastl::less<int>,
                              eastl::fixed_node_allocator<48ul, 1ul, 8ul, 0ul, true, eastl::allocator>,
                              eastl::use_first<eastl::pair<int const, unsigned long>>, true, true>*)(m_entityOverlays,
                                                                                                     &local_48, 4)
                          ->GetOverlaysForEntityUnchecked();
            cVar1 = eastl::rbtree<int, eastl::pair<int const, unsigned long>, eastl::less<int>,
                                  eastl::fixed_node_allocator<48ul, 1ul, 8ul, 0ul, true, eastl::allocator>,
                                  eastl::use_first<eastl::pair<int const, unsigned long>>, true, true>::empty(this_00);
            if (cVar1 == '\0') {
                GetAllOverlayPositionsTile((Client*)local_68, (int)this, param_1, param_2);
                GdmEntityOverlayScripted(this, (fixed_map*)this_00, (OverlayPos*)local_68, local_38, local_48._12_4_,
                                         param_6, param_7, param_8);
            }
        }
    }

    // 0x10010fc90, 256 bytes, placed by class name and neighbouring functions
    // Client::GetAllOverlayPositionsTile(int, int, int)
    Client* Client::GetAllOverlayPositionsTile(int param_1, int param_2, int param_3) {
        int iVar1;
        int iVar2;
        int iVar3;
        world* this_00;
        undefined4 in_register_00000034;
        Client* this_01;
        int in_R8D;

        this_01 = (Client*)CONCAT44(in_register_00000034, param_1);
        new (this) OverlayPos();
        iVar1 = FineCentreCoordFromGridCoord(param_3);
        iVar2 = FineCentreCoordFromGridCoord(in_R8D);
        this_00 = (world*)std::unique_ptr<dash3d::world, std::default_delete<dash3d::world>>::operator->(
            (unique_ptr<dash3d::world, std::default_delete<dash3d::world>>*)&this_01->field_19184);
        iVar3 = this_00->GetTableHeightOnTile(param_2, param_3, in_R8D);
        GetOverlayPos(this_01, param_2, iVar1, iVar2, iVar3 + 15);
        field_0 = this_01->field_1120480;
        field_4 = this_01->field_1120484;
        GetOverlayPos(this_01, param_2, iVar1, iVar2, iVar3 / 2);
        *(uint*)field_8 = this_01->field_1120480;
        *(uint*)(field_8 + 4) = this_01->field_1120484;
        GetOverlayPos(this_01, param_2, iVar1, iVar2, 0);
        *(uint*)(field_8 + 8) = this_01->field_1120480;
        *(uint*)(field_8 + 12) = this_01->field_1120484;
        field_8[16] = 1;
        return this;
    }

    // 0x10010fd90, 256 bytes, placed by class name and neighbouring functions
    // Client::GdmEntityOverlayScripted(eastl::fixed_map<int, unsigned long, 1ul, true, eastl::less<int>, eastl::allocator> const&, OverlayPos&, int, int, int, int, int)
    void Client::GdmEntityOverlayScripted(fixed_map* param_1, OverlayPos* param_2, int param_3, int param_4,
                                          int param_5, int param_6, int param_7) {
        undefined1* this_00;
        bool bVar1;
        long lVar3;
        Array<shared_ptr<rs2lib::IfType>, eastl::allocator>* this_01;
        shared_ptr* psVar4;
        hashtable_iterator_base* extraout_RDX;
        undefined1 auVar5[16];
        undefined8 local_50;
        undefined8 local_48;

        local_50 = eastl::rbtree<eastl::string, eastl::pair<eastl::stringconst, bool>, eastl::less<eastl::string>,
                                 eastl::allocator, eastl::use_first<eastl::pair<eastl::stringconst, bool>>, true,
                                 true>::begin();
        auVar5 =
            eastl::rbtree<eastl::string, eastl::pair<eastl::stringconst, bool>, eastl::less<eastl::string>,
                          eastl::allocator, eastl::use_first<eastl::pair<eastl::stringconst, bool>>, true, true>::end();
        local_48 = auVar5._0_8_;
        bVar1 = eastl::operator!=((eastl*)&local_50, (hashtable_iterator_base*)&local_48, auVar5._8_8_);
        if (bVar1) {
            this_00 = ((Client*)this)->m_entityOverlays;
            do {
                lVar3 = eastl::rbtree_iterator<
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
                operator*(
                    (rbtree_iterator<
                        eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                        eastl::pair<unsigned int const,
                                    eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                        eastl::pair<unsigned int const,
                                    eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>*)&local_50);
                if (this_00->OverlayExistsAtIndex(*(int*)(lVar3 + 8)) != '\0') {
                    this_01 =
                        (Array<shared_ptr<rs2lib::IfType>, eastl::allocator>*)this_00->GetOverlay(*(int*)(lVar3 + 8));
                    if (this_01 != (Array<shared_ptr<rs2lib::IfType>, eastl::allocator>*)0) {
                        psVar4 =
                            (shared_ptr*)Array<shared_ptr<rs2lib::IfType>, eastl::allocator>::operator[](this_01, 0);
                        GdmEntityOverlayScriptedInner((Client*)this, (Array*)this_01, psVar4, *(ulong*)(lVar3 + 8),
                                                      param_2, param_3, param_4, param_5, param_6, param_7);
                    }
                }
                eastl::rbtree_iterator<
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
                operator++(
                    (rbtree_iterator<
                        eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                        eastl::pair<unsigned int const,
                                    eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                        eastl::pair<unsigned int const,
                                    eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>*)&local_50);
                bVar1 = eastl::operator!=((eastl*)&local_50, (hashtable_iterator_base*)&local_48, extraout_RDX);
            } while (bVar1);
        }
    }

    // 0x10010fe90, 1328 bytes, placed by __FILE__ string
    // Client::GdmEntityOverlayLoc(int, int, int, LocLayer, int, int, int, int, int)
    void Client::GdmEntityOverlayLoc(int param_1, int param_2, int param_3, undefined4 param_5, int param_6,
                                     int param_7, int param_8, int param_9, int param_10) {
        int iVar1;
        int iVar2;
        Client* this_00;
        byte bVar3;
        char cVar4;
        bool bVar5;
        int iVar6;
        int iVar7;
        rbtree<int, eastl::pair<int const, unsigned long>, eastl::less<int>,
               eastl::fixed_node_allocator<48ul, 1ul, 8ul, 0ul, true, eastl::allocator>,
               eastl::use_first<eastl::pair<int const, unsigned long>>, true, true>* this_01;
        long lVar8;
        int iVar9;
        CoordGrid local_b8;
        Client* local_a8;
        fixed_map* local_a0;
        OverlayPos local_98;
        undefined1 local_70[28];
        int local_54;
        byte local_50;
        int local_4c;
        shared_ptr local_48;
        int local_34;

        local_54 = param_6;
        _local_50 = param_5;
        local_4c = param_3;
        new (&local_b8) rs2lib::CoordGrid(param_1, param_2, param_3);
        local_a8 = this;
        cVar4 = (m_entityOverlays, &local_b8)->AnyOverlaysOnTile();
        if (cVar4 == '\0') {
            return;
        }
        iVar6 = ClientBuild::GetLinkBelowLevel(param_1, param_2, local_4c);
        bVar3 = local_50;
        this_01 = (rbtree<int, eastl::pair<int const, unsigned long>, eastl::less<int>,
                          eastl::fixed_node_allocator<48ul, 1ul, 8ul, 0ul, true, eastl::allocator>,
                          eastl::use_first<eastl::pair<int const, unsigned long>>, true, true>*)(m_entityOverlays,
                                                                                                 &local_b8, local_50)
                      ->GetOverlaysForEntityUnchecked();
        cVar4 = eastl::rbtree<int, eastl::pair<int const, unsigned long>, eastl::less<int>,
                              eastl::fixed_node_allocator<48ul, 1ul, 8ul, 0ul, true, eastl::allocator>,
                              eastl::use_first<eastl::pair<int const, unsigned long>>, true, true>::empty(this_01);
        if (cVar4 != '\0') {
            return;
        }
        local_a0 = (fixed_map*)this_01;
        local_34 = iVar6;
        new (&local_98) OverlayPos();
        this_00 = local_a8;
        if (local_50 < 4) {
            iVar6 = (int)local_a8;
            /* WARNING: Could not find normalized switch variable to match jumptable */
            switch (bVar3) {
            case 0:
                iVar7 = std::unique_ptr<dash3d::world, std::default_delete<dash3d::world>>::operator->(
                    (unique_ptr<dash3d::world, std::default_delete<dash3d::world>>*)&local_a8->field_19184);
                dash3d::world::GetWall((int)&local_48, iVar7, local_34);
                bVar5 = shared_ptr::operator_cast_to_bool(&local_48);
                if (bVar5) {
                    lVar8 = shared_ptr<dash3d::Wall>::operator->((shared_ptr<dash3d::Wall>*)&local_48);
                    bVar5 = ((lVar8 + 24))->operator_cast_to_bool();
                    iVar7 = 0;
                    if (bVar5) {
                        lVar8 = shared_ptr<dash3d::Wall>::operator->((shared_ptr<dash3d::Wall>*)&local_48);
                        lVar8 =
                            shared_ptr<dash3d::ModelSource>::operator->((shared_ptr<dash3d::ModelSource>*)(lVar8 + 24));
                        iVar7 = *(int*)(lVar8 + 8);
                    }
                    lVar8 = shared_ptr<dash3d::Wall>::operator->((shared_ptr<dash3d::Wall>*)&local_48);
                    bVar5 = ((lVar8 + 40))->operator_cast_to_bool();
                    iVar9 = 0;
                    if (bVar5) {
                        lVar8 = shared_ptr<dash3d::Wall>::operator->((shared_ptr<dash3d::Wall>*)&local_48);
                        lVar8 =
                            shared_ptr<dash3d::ModelSource>::operator->((shared_ptr<dash3d::ModelSource>*)(lVar8 + 40));
                        iVar9 = *(int*)(lVar8 + 8);
                    }
                    lVar8 = shared_ptr<dash3d::Wall>::operator->((shared_ptr<dash3d::Wall>*)&local_48);
                    iVar1 = *(int*)(lVar8 + 4);
                    lVar8 = shared_ptr<dash3d::Wall>::operator->((shared_ptr<dash3d::Wall>*)&local_48);
                    iVar2 = *(int*)(lVar8 + 8);
                    eastl::max<int>(iVar7, iVar9);
                    GetAllOverlayPositionsLoc((Client*)local_70, iVar6, local_34, iVar1, iVar2);
                    local_98._17_8_ = local_70._17_8_;
                    local_98._0_8_ = local_70._0_8_;
                }
                local_48.~shared_ptr();
                break;
            case 1:
                iVar7 = std::unique_ptr<dash3d::world, std::default_delete<dash3d::world>>::operator->(
                    (unique_ptr<dash3d::world, std::default_delete<dash3d::world>>*)&local_a8->field_19184);
                dash3d::world::GetDecor((int)&local_48, iVar7, local_34);
                bVar5 = shared_ptr::operator_cast_to_bool(&local_48);
                if (bVar5) {
                    lVar8 = shared_ptr<dash3d::Decor>::operator->((shared_ptr<dash3d::Decor>*)&local_48);
                    bVar5 = ((lVar8 + 32))->operator_cast_to_bool();
                    iVar7 = 0;
                    if (bVar5) {
                        lVar8 = shared_ptr<dash3d::Decor>::operator->((shared_ptr<dash3d::Decor>*)&local_48);
                        lVar8 =
                            shared_ptr<dash3d::ModelSource>::operator->((shared_ptr<dash3d::ModelSource>*)(lVar8 + 32));
                        iVar7 = *(int*)(lVar8 + 8);
                    }
                    lVar8 = shared_ptr<dash3d::Decor>::operator->((shared_ptr<dash3d::Decor>*)&local_48);
                    bVar5 = ((lVar8 + 48))->operator_cast_to_bool();
                    iVar9 = 0;
                    if (bVar5) {
                        lVar8 = shared_ptr<dash3d::Decor>::operator->((shared_ptr<dash3d::Decor>*)&local_48);
                        lVar8 =
                            shared_ptr<dash3d::ModelSource>::operator->((shared_ptr<dash3d::ModelSource>*)(lVar8 + 48));
                        iVar9 = *(int*)(lVar8 + 8);
                    }
                    lVar8 = shared_ptr<dash3d::Decor>::operator->((shared_ptr<dash3d::Decor>*)&local_48);
                    iVar1 = *(int*)(lVar8 + 4);
                    lVar8 = shared_ptr<dash3d::Decor>::operator->((shared_ptr<dash3d::Decor>*)&local_48);
                    iVar2 = *(int*)(lVar8 + 8);
                    eastl::max<int>(iVar7, iVar9);
                    GetAllOverlayPositionsLoc((Client*)local_70, iVar6, local_34, iVar1, iVar2);
                    local_98._17_8_ = local_70._17_8_;
                    local_98._0_8_ = local_70._0_8_;
                }
                local_48.~shared_ptr();
                break;
            case 2:
                iVar7 = std::unique_ptr<dash3d::world, std::default_delete<dash3d::world>>::operator->(
                    (unique_ptr<dash3d::world, std::default_delete<dash3d::world>>*)&local_a8->field_19184);
                dash3d::world::GetScene((int)&local_48, iVar7, local_34);
                bVar5 = shared_ptr::operator_cast_to_bool(&local_48);
                if (bVar5) {
                    lVar8 = shared_ptr<dash3d::Sprite>::operator->((shared_ptr<dash3d::Sprite>*)&local_48);
                    iVar7 = local_34;
                    bVar5 = ((lVar8 + 32))->operator_cast_to_bool();
                    if (bVar5) {
                        lVar8 = shared_ptr<dash3d::Sprite>::operator->((shared_ptr<dash3d::Sprite>*)&local_48);
                        shared_ptr<dash3d::ModelSource>::operator->((shared_ptr<dash3d::ModelSource>*)(lVar8 + 32));
                    }
                    lVar8 = shared_ptr<dash3d::Sprite>::operator->((shared_ptr<dash3d::Sprite>*)&local_48);
                    iVar9 = *(int*)(lVar8 + 8);
                    lVar8 = shared_ptr<dash3d::Sprite>::operator->((shared_ptr<dash3d::Sprite>*)&local_48);
                    GetAllOverlayPositionsLoc((Client*)local_70, iVar6, iVar7, iVar9, *(int*)(lVar8 + 12));
                    local_98._17_8_ = local_70._17_8_;
                    local_98._0_8_ = local_70._0_8_;
                }
                local_48.~shared_ptr();
                goto LAB_100110227;
            case 3:
                iVar7 = std::unique_ptr<dash3d::world, std::default_delete<dash3d::world>>::operator->(
                    (unique_ptr<dash3d::world, std::default_delete<dash3d::world>>*)&local_a8->field_19184);
                dash3d::world::GetGroundDecor((int)&local_48, iVar7, local_34);
                bVar5 = shared_ptr::operator_cast_to_bool(&local_48);
                if (bVar5) {
                    lVar8 = shared_ptr<dash3d::GroundDecor>::operator->((shared_ptr<dash3d::GroundDecor>*)&local_48);
                    iVar7 = local_34;
                    bVar5 = ((lVar8 + 16))->operator_cast_to_bool();
                    if (bVar5) {
                        lVar8 =
                            shared_ptr<dash3d::GroundDecor>::operator->((shared_ptr<dash3d::GroundDecor>*)&local_48);
                        shared_ptr<dash3d::ModelSource>::operator->((shared_ptr<dash3d::ModelSource>*)(lVar8 + 16));
                    }
                    lVar8 = shared_ptr<dash3d::GroundDecor>::operator->((shared_ptr<dash3d::GroundDecor>*)&local_48);
                    iVar9 = *(int*)(lVar8 + 4);
                    lVar8 = shared_ptr<dash3d::GroundDecor>::operator->((shared_ptr<dash3d::GroundDecor>*)&local_48);
                    GetAllOverlayPositionsLoc((Client*)local_70, iVar6, iVar7, iVar9, *(int*)(lVar8 + 8));
                    local_98._17_8_ = local_70._17_8_;
                    local_98._0_8_ = local_70._0_8_;
                }
                local_48.~shared_ptr();
            }
        } else {
        LAB_100110227:
        }
        if (local_98.field_24 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("pos.m_valid",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                      "client_entityoverlays.cpp",
                      146, (char*)0);
        }
        GdmEntityOverlayScripted(this_00, local_a0, &local_98, local_54, param_7, param_8, param_9, param_10);
    }

} // namespace jag::oldscape
