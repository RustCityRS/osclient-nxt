// projects/osclient/ScriptRunnerImpl_3600To3699.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: osclient

#include "ScriptRunnerImpl.h"

namespace jag::oldscape {
    // 0x10015f350
    uint64_t ScriptRunnerImpl::ExecuteCommand3600To3699(ScriptOp scriptOp, const ClientScript& clientScript,
                                                        bool arg3) {
        uint8_t bVar1;
        bool cVar2;
        bool bVar3;
        uint32_t uVar4;
        int iVar5;
        int iVar6;
        PlayerData<social::IgnoreData>* pPVar7;
        eastl::string* pbVar8;
        FriendSystem* pFVar9;
        unsigned int* puVar10;
        compressed_pair_imp<std::deque<ThreadPool::TaskInfo>*, eastl::allocator, 0>* pcVar11;
        DisplayName* pDVar12;
        DisplayName* displayName;
        eastl::string* pbVar13;
        Minimap* pMVar14;
        FriendChatUser* pFVar15;
        uint32_t* puVar16;
        long lVar17;
        int* piVar18;
        PlayerRegistry<social::FriendChatUser>* pPVar19;
        uint32_t in_register_00000034;
        unsigned long uVar20;
        uint8_t* puVar23;
        DisplayName local_98;
        ReturnValue local_58;
        bool local_31;

        void* pvVar21 = (void*)(((uint64_t)in_register_00000034 << 32) | (uint32_t)scriptOp);
        uint64_t uVar22 = 2;
        auto this_00 = Client::Instance();
        switch (scriptOp) {
        case 3600:
            lVar17 = this_00->field_52768.get();
            if (*(int*)(lVar17 + 376) == 1) {
            LAB_100160cb6:
                iVar5 = field_104092;
                field_104092 = iVar5 + 1;
                puVar16 = &field_100092[(long)iVar5];
                *puVar16 = 4294967295;
            } else {
                if (*(int*)(lVar17 + 376) != 0) {
                    iVar5 = ((lVar17 + 8))->GetLevel();
                    goto LAB_100160d06;
                }
                iVar5 = field_104092;
                field_104092 = iVar5 + 1;
                puVar16 = &field_100092[(long)iVar5];
                *puVar16 = 4294967294;
            }
            break;
        case 3601:
            uVar20 = (long)field_104092 - 1;
            field_104092 = (int)uVar20;
            piVar18 = &field_100092[uVar20];
            iVar5 = *piVar18;
            pFVar9 = (FriendSystem*)this_00->field_52768.get();
            cVar2 = pFVar9->IsReady();
            if ((cVar2) && (-1 < iVar5)) {
                iVar6 = pFVar9->field_8->GetLevel();
                if (iVar5 < iVar6) {
                    pPVar7 = (PlayerData<social::IgnoreData>*)pFVar9->field_8->GetPlayerBySlot(iVar5);
                    pbVar8 = (eastl::string*)pPVar7->GetFormattedCurrentDisplayName();
                    iVar5 = field_136096;
                    field_136096 = iVar5 + 1;
                    pbVar13 = &field_104096[(long)iVar5];
                    *pbVar13 = pbVar8;
                    pbVar8 = (eastl::string*)pPVar7->GetFormattedOldDisplayName();
                LAB_10015fb98:
                    iVar5 = field_136096;
                    field_136096 = iVar5 + 1;
                    goto LAB_10015fdde;
                }
            }
            goto LAB_10015fbb4;
        case 3602:
            uVar20 = (long)field_104092 - 1;
            field_104092 = (int)uVar20;
            piVar18 = &field_100092[uVar20];
            iVar5 = *piVar18;
            pFVar9 = (FriendSystem*)this_00->field_52768.get();
            cVar2 = pFVar9->IsReady();
            if ((!cVar2) || (iVar5 < 0))
                goto LAB_10015fd8b;
            iVar6 = pFVar9->field_8->GetLevel();
            if (iVar6 <= iVar5)
                goto LAB_10015fd8b;
            lVar17 = pFVar9->field_8->GetPlayerBySlot(iVar5);
            iVar5 = *(int*)(lVar17 + 136);
        LAB_10015f57f:
            iVar6 = field_104092;
            field_104092 = iVar6 + 1;
            goto LAB_100160d1e;
        case 3603:
            uVar20 = (long)field_104092 - 1;
            field_104092 = (int)uVar20;
            piVar18 = &field_100092[uVar20];
            iVar5 = *piVar18;
            pFVar9 = (FriendSystem*)this_00->field_52768.get();
            cVar2 = pFVar9->IsReady();
            if ((cVar2) && (-1 < iVar5)) {
                iVar6 = pFVar9->field_8->GetLevel();
                if (iVar5 < iVar6) {
                    lVar17 = pFVar9->field_8->GetPlayerBySlot(iVar5);
                    iVar5 = *(int*)(lVar17 + 176);
                    goto LAB_10015f57f;
                }
            }
            goto LAB_10015fd8b;
        case 3604:
            uVar20 = (long)field_136096 - 1;
            field_136096 = (int)uVar20;
            pbVar8 = &field_104096[uVar20];
            local_98 = eastl::string(*pbVar8);
            uVar20 = (long)field_104092 - 1;
            field_104092 = (int)uVar20;
            piVar18 = &field_100092[uVar20];
            iVar5 = *piVar18;
            pFVar9 = (FriendSystem*)this_00->field_52768.operator->();
            pFVar9->SetFriendRank(local_98, iVar5);
            goto LAB_10015fa9a;
        case 3605:
            uVar20 = (long)field_136096 - 1;
            field_136096 = (int)uVar20;
            pbVar8 = &field_104096[uVar20];
            local_98 = eastl::string(*pbVar8);
            pFVar9 = (FriendSystem*)this_00->field_52768.operator->();
            pFVar9->AddFriend(local_98);
            goto LAB_10015fa9a;
        case 3606:
            uVar20 = (long)field_136096 - 1;
            field_136096 = (int)uVar20;
            pbVar8 = &field_104096[uVar20];
            local_98 = eastl::string(*pbVar8);
            pFVar9 = (FriendSystem*)this_00->field_52768.operator->();
            pFVar9->DelFriend(local_98);
            goto LAB_10015fa9a;
        case 3607:
            uVar20 = (long)field_136096 - 1;
            field_136096 = (int)uVar20;
            pbVar8 = &field_104096[uVar20];
            local_98 = eastl::string(*pbVar8);
            pFVar9 = (FriendSystem*)this_00->field_52768.operator->();
            pFVar9->AddIgnore(local_98);
            goto LAB_10015fa9a;
        case 3608:
            uVar20 = (long)field_136096 - 1;
            field_136096 = (int)uVar20;
            pbVar8 = &field_104096[uVar20];
            local_98 = eastl::string(*pbVar8);
            pFVar9 = (FriendSystem*)this_00->field_52768.operator->();
            pFVar9->DelIgnore(local_98, true);
            return 1;
        case 3609:
            uVar20 = (long)field_136096 - 1;
            field_136096 = (int)uVar20;
            pbVar8 = &field_104096[uVar20];
            local_58 = eastl::string(*pbVar8);
            local_98.RemoveChatCrownTags(*this_00);
            local_58 = &local_98;
            pFVar9 = (FriendSystem*)this_00->field_52768.operator->();
            local_98 = rs2lib::social::DisplayName(local_58, this_00->field_54172);
            bVar1 = pFVar9->IsFriend(local_98, false);
            goto LAB_10015fca2;
        default:
            goto switchD_10015f391_caseD_e1a;
        case 3611:
            bVar3 = &this_00->field_52544 != pvVar21;
            if (!bVar3)
                goto LAB_10015fdf3;
            lVar17 = this_00->field_52544.operator->();
            pbVar8 = (eastl::string*)(lVar17 + 192);
        LAB_10015fdc6:
            iVar5 = field_136096;
            field_136096 = iVar5 + 1;
        LAB_10015fdde:
            pbVar13 = &field_104096[(long)iVar5];
            *pbVar13 = pbVar8;
            break;
        case 3612:
            bVar3 = &this_00->field_52544 != pvVar21;
            if (bVar3) {
                pMVar14 = (Minimap*)this_00->field_52544.operator->();
                iVar5 = pMVar14->GetLevel();
                goto LAB_100160d06;
            }
            uVar20 = (unsigned long)field_104092;
            field_104092 = field_104092 + 1;
            goto LAB_10015ff38;
        case 3613:
            pvVar21 = (void*)((long)field_104092 - 1);
            field_104092 = (int)pvVar21;
            piVar18 = &field_100092[(unsigned long)pvVar21];
            iVar5 = *piVar18;
            puVar23 = &this_00->field_52544;
            bVar3 = puVar23 != pvVar21;
            if (bVar3) {
                pMVar14 = (Minimap*)(*puVar23).operator->();
                iVar6 = pMVar14->GetLevel();
                if (iVar5 < iVar6) {
                    pPVar19 = (PlayerRegistry<social::FriendChatUser>*)(*puVar23).operator->();
                    pcVar11 = (compressed_pair_imp<std::deque<ThreadPool::TaskInfo>*, eastl::allocator, 0>*)
                                  pPVar19->GetPlayerBySlot(iVar5);
                    pDVar12 = (DisplayName*)pcVar11->second();
                    pbVar8 = pDVar12->GetDisplayName();
                    goto LAB_10015fdc6;
                }
            }
            goto LAB_10015fdf3;
        case 3614:
            pvVar21 = (void*)((long)field_104092 - 1);
            field_104092 = (int)pvVar21;
            piVar18 = &field_100092[(unsigned long)pvVar21];
            iVar5 = *piVar18;
            puVar23 = &this_00->field_52544;
            bVar3 = puVar23 != pvVar21;
            if (bVar3) {
                pMVar14 = (Minimap*)(*puVar23).operator->();
                iVar6 = pMVar14->GetLevel();
                if (iVar5 < iVar6) {
                    pPVar19 = (PlayerRegistry<social::FriendChatUser>*)(*puVar23).operator->();
                    uVar4 = ((NXTRenderCanvas*)pPVar19->GetPlayerBySlot(iVar5))->GetLastNumVerts();
                LAB_10015f9a8:
                    iVar5 = field_104092;
                    field_104092 = iVar5 + 1;
                    puVar16 = &field_100092[(long)iVar5];
                    *puVar16 = uVar4;
                    break;
                }
            }
            goto LAB_10015ff24;
        case 3615:
            pvVar21 = (void*)((long)field_104092 - 1);
            field_104092 = (int)pvVar21;
            piVar18 = &field_100092[(unsigned long)pvVar21];
            iVar5 = *piVar18;
            puVar23 = &this_00->field_52544;
            bVar3 = puVar23 != pvVar21;
            if (bVar3) {
                pMVar14 = (Minimap*)(*puVar23).operator->();
                iVar6 = pMVar14->GetLevel();
                if (iVar5 < iVar6) {
                    pPVar19 = (PlayerRegistry<social::FriendChatUser>*)(*puVar23).operator->();
                    lVar17 = pPVar19->GetPlayerBySlot(iVar5);
                    uVar4 = *(uint32_t*)(lVar17 + 176);
                    goto LAB_10015f9a8;
                }
            }
            goto LAB_10015ff24;
        case 3616:
            bVar3 = &this_00->field_52544 != pvVar21;
            iVar5 = 0;
            if (bVar3) {
                lVar17 = this_00->field_52544.operator->();
                iVar5 = (int)*(char*)(lVar17 + 288);
            }
            goto LAB_100160d06;
        case 3617:
            uVar20 = (long)field_136096 - 1;
            field_136096 = (int)uVar20;
            pbVar8 = &field_104096[uVar20];
            local_98 = eastl::string(*pbVar8);
            this_00->FriendsChatKickUser(local_98);
            goto LAB_10015fa9a;
        case 3618:
            bVar3 = &this_00->field_52544 != pvVar21;
            iVar5 = 0;
            if (bVar3) {
                lVar17 = this_00->field_52544.operator->();
                iVar5 = *(int*)(lVar17 + 292);
            }
            goto LAB_100160d06;
        case 3619:
            uVar20 = (long)field_136096 - 1;
            field_136096 = (int)uVar20;
            pbVar8 = &field_104096[uVar20];
            local_98 = eastl::string(*pbVar8);
            this_00->FriendsChatJoinChat(local_98);
        LAB_10015fa9a:
            break;
        case 3620:
            this_00->FriendsChatLeaveChat();
            break;
        case 3621:
            pFVar9 = (FriendSystem*)this_00->field_52768.operator->();
            cVar2 = pFVar9->IsReady();
            if (!cVar2)
                goto LAB_100160cb6;
            lVar17 = this_00->field_52768.operator->();
            iVar5 = ((lVar17 + 208))->GetLevel();
        LAB_100160d06:
            iVar6 = field_104092;
            field_104092 = iVar6 + 1;
        LAB_100160d1e:
            piVar18 = &field_100092[(long)iVar6];
            *piVar18 = iVar5;
            break;
        case 3622:
            uVar20 = (long)field_104092 - 1;
            field_104092 = (int)uVar20;
            piVar18 = &field_100092[uVar20];
            iVar5 = *piVar18;
            pFVar9 = (FriendSystem*)this_00->field_52768.get();
            cVar2 = pFVar9->IsReady();
            if ((cVar2) && (-1 < iVar5)) {
                iVar6 = pFVar9->field_208->GetLevel();
                if (iVar5 < iVar6) {
                    pPVar7 = (PlayerData<social::IgnoreData>*)pFVar9->field_208->GetPlayerBySlot(iVar5);
                    pbVar8 = (eastl::string*)pPVar7->GetFormattedCurrentDisplayName();
                    iVar5 = field_136096;
                    field_136096 = iVar5 + 1;
                    pbVar13 = &field_104096[(long)iVar5];
                    *pbVar13 = pbVar8;
                    pbVar8 = (eastl::string*)pPVar7->GetFormattedOldDisplayName();
                    goto LAB_10015fb98;
                }
            }
        LAB_10015fbb4:
            iVar5 = field_136096;
            field_136096 = iVar5 + 1;
            pbVar13 = &field_104096[(long)iVar5];
            eastl::string::assign(pbVar13, "");
            iVar5 = field_136096;
            field_136096 = iVar5 + 1;
            pbVar13 = &field_104096[(long)iVar5];
            eastl::string::assign(pbVar13, "");
            break;
        case 3623:
            uVar20 = (long)field_136096 - 1;
            field_136096 = (int)uVar20;
            pbVar8 = &field_104096[uVar20];
            local_58 = eastl::string(*pbVar8);
            local_98.RemoveChatCrownTags(*this_00);
            local_58 = &local_98;
            pFVar9 = (FriendSystem*)this_00->field_52768.operator->();
            local_98 = rs2lib::social::DisplayName(local_58, this_00->field_54172);
            bVar1 = pFVar9->IsIgnored(local_98);
        LAB_10015fca2:
            iVar5 = field_104092;
            field_104092 = iVar5 + 1;
            puVar10 = &field_100092[(long)iVar5];
            *puVar10 = (unsigned int)bVar1;
            break;
        case 3624:
            pvVar21 = (void*)((long)field_104092 - 1);
            field_104092 = (int)pvVar21;
            piVar18 = &field_100092[(unsigned long)pvVar21];
            iVar5 = *piVar18;
            puVar23 = &this_00->field_52544;
            bVar3 = puVar23 != pvVar21;
            if (bVar3) {
                pMVar14 = (Minimap*)(*puVar23).operator->();
                iVar6 = pMVar14->GetLevel();
                if (iVar5 < iVar6) {
                    pPVar19 = (PlayerRegistry<social::FriendChatUser>*)(*puVar23).operator->();
                    pcVar11 = (compressed_pair_imp<std::deque<ThreadPool::TaskInfo>*, eastl::allocator, 0>*)
                                  pPVar19->GetPlayerBySlot(iVar5);
                    pDVar12 = (DisplayName*)pcVar11->second();
                    lVar17 = this_00->field_52016.operator->();
                    displayName = (DisplayName*)*(*((lVar17 + 992)));
                    cVar2 = *pDVar12 == *displayName;
                    if (cVar2) {
                        iVar5 = field_104092;
                        field_104092 = iVar5 + 1;
                    LAB_10015ff14:
                        puVar16 = &field_100092[(long)iVar5];
                        *puVar16 = 1;
                        break;
                    }
                }
            }
        LAB_10015fd8b:
            uVar20 = (unsigned long)field_104092;
            field_104092 = field_104092 + 1;
            goto LAB_10015ff38;
        case 3625:
            bVar3 = &this_00->field_52544 != pvVar21;
            if (bVar3) {
                lVar17 = this_00->field_52544.operator->();
                pbVar8 = (eastl::string*)(lVar17 + 256);
                goto LAB_10015fdc6;
            }
        LAB_10015fdf3:
            iVar5 = field_136096;
            field_136096 = iVar5 + 1;
            pbVar13 = &field_104096[(long)iVar5];
            eastl::string::assign(pbVar13, "");
            break;
        case 3626:
            pvVar21 = (void*)((long)field_104092 - 1);
            field_104092 = (int)pvVar21;
            piVar18 = &field_100092[(unsigned long)pvVar21];
            iVar5 = *piVar18;
            puVar23 = &this_00->field_52544;
            bVar3 = puVar23 != pvVar21;
            if (bVar3) {
                pMVar14 = (Minimap*)(*puVar23).operator->();
                iVar6 = pMVar14->GetLevel();
                if (iVar5 < iVar6) {
                    pPVar19 = (PlayerRegistry<social::FriendChatUser>*)(*puVar23).operator->();
                    pFVar15 = (FriendChatUser*)pPVar19->GetPlayerBySlot(iVar5);
                    cVar2 = pFVar15->IsFriend();
                LAB_10015fefc:
                    if (cVar2) {
                        iVar5 = field_104092;
                        field_104092 = iVar5 + 1;
                        goto LAB_10015ff14;
                    }
                }
            }
            goto LAB_10015ff24;
        case 3627:
            pvVar21 = (void*)((long)field_104092 - 1);
            field_104092 = (int)pvVar21;
            piVar18 = &field_100092[(unsigned long)pvVar21];
            iVar5 = *piVar18;
            puVar23 = &this_00->field_52544;
            bVar3 = puVar23 != pvVar21;
            if (bVar3) {
                pMVar14 = (Minimap*)(*puVar23).operator->();
                iVar6 = pMVar14->GetLevel();
                if (iVar5 < iVar6) {
                    pPVar19 = (PlayerRegistry<social::FriendChatUser>*)(*puVar23).operator->();
                    pFVar15 = (FriendChatUser*)pPVar19->GetPlayerBySlot(iVar5);
                    cVar2 = pFVar15->IsIgnore();
                    goto LAB_10015fefc;
                }
            }
        LAB_10015ff24:
            uVar20 = (unsigned long)field_104092;
            field_104092 = field_104092 + 1;
        LAB_10015ff38:
            puVar16 = &field_100092[uVar20];
            *puVar16 = 0;
            break;
        case 3628:
            lVar17 = this_00->field_52768.operator->();
            ((lVar17 + 8))->ResetSortComparator();
            break;
        case 3629:
            uVar20 = (long)field_104092 - 1;
            field_104092 = (int)uVar20;
            piVar18 = &field_100092[uVar20];
            local_31 = *piVar18 == 1;
            lVar17 = this_00->field_52768.operator->();
            local_58 = std::make_unique<social::PlayerDataLegacyComparator<social::FriendData>, bool&>(local_31);
            std::unique_ptr<social::PlayerDataComparator<social::FriendData>>::unique_ptr<
                social::PlayerDataLegacyComparator<social::FriendData>,
                std::default_delete<social::PlayerDataLegacyComparator<social::FriendData>>, void, void>(
                (unique_ptr<social::PlayerDataComparator<social::FriendData>>*)&local_98, &local_58);
            ((lVar17 + 8))->AddSortComparator(local_98);
            break;
        case 3630:
            uVar20 = (long)field_104092 - 1;
            field_104092 = (int)uVar20;
            piVar18 = &field_100092[uVar20];
            local_31 = *piVar18 == 1;
            lVar17 = this_00->field_52768.operator->();
            local_58 = std::make_unique<social::PlayerDataNameComparator<social::FriendData>, bool&>(local_31);
            std::unique_ptr<social::PlayerDataComparator<social::FriendData>>::unique_ptr<
                social::PlayerDataNameComparator<social::FriendData>,
                std::default_delete<social::PlayerDataNameComparator<social::FriendData>>, void, void>(
                (unique_ptr<social::PlayerDataComparator<social::FriendData>>*)&local_98, &local_58);
            ((lVar17 + 8))->AddSortComparator(local_98);
            break;
        case 3631:
            uVar20 = (long)field_104092 - 1;
            field_104092 = (int)uVar20;
            piVar18 = &field_100092[uVar20];
            local_31 = *piVar18 == 1;
            lVar17 = this_00->field_52768.operator->();
            local_58 = std::make_unique<social::OnlinePlayerDataWorldComparator<social::FriendData>, bool&>(local_31);
            std::unique_ptr<social::PlayerDataComparator<social::FriendData>>::unique_ptr<
                social::OnlinePlayerDataWorldComparator<social::FriendData>,
                std::default_delete<social::OnlinePlayerDataWorldComparator<social::FriendData>>, void, void>(
                (unique_ptr<social::PlayerDataComparator<social::FriendData>>*)&local_98, &local_58);
            ((lVar17 + 8))->AddSortComparator(local_98);
            break;
        case 3632:
            uVar20 = (long)field_104092 - 1;
            field_104092 = (int)uVar20;
            piVar18 = &field_100092[uVar20];
            local_31 = *piVar18 == 1;
            lVar17 = this_00->field_52768.operator->();
            local_58 = std::make_unique<social::OnlinePlayerDataLastWorldChangeComparator<social::FriendData>, bool&>(
                local_31);
            std::unique_ptr<social::PlayerDataComparator<social::FriendData>>::unique_ptr<
                social::OnlinePlayerDataLastWorldChangeComparator<social::FriendData>,
                std::default_delete<social::OnlinePlayerDataLastWorldChangeComparator<social::FriendData>>, void, void>(
                (unique_ptr<social::PlayerDataComparator<social::FriendData>>*)&local_98, &local_58);
            ((lVar17 + 8))->AddSortComparator(local_98);
            break;
        case 3633:
            uVar20 = (long)field_104092 - 1;
            field_104092 = (int)uVar20;
            piVar18 = &field_100092[uVar20];
            local_31 = *piVar18 == 1;
            lVar17 = this_00->field_52768.operator->();
            local_58 = std::make_unique<social::OnlinePlayerDataOnlineComparator<social::FriendData>, bool&>(local_31);
            std::unique_ptr<social::PlayerDataComparator<social::FriendData>>::unique_ptr<
                social::OnlinePlayerDataOnlineComparator<social::FriendData>,
                std::default_delete<social::OnlinePlayerDataOnlineComparator<social::FriendData>>, void, void>(
                (unique_ptr<social::PlayerDataComparator<social::FriendData>>*)&local_98, &local_58);
            ((lVar17 + 8))->AddSortComparator(local_98);
            break;
        case 3634:
            uVar20 = (long)field_104092 - 1;
            field_104092 = (int)uVar20;
            piVar18 = &field_100092[uVar20];
            local_31 = *piVar18 == 1;
            lVar17 = this_00->field_52768.operator->();
            local_58 =
                std::make_unique<social::OnlinePlayerDataOnlineNameComparator<social::FriendData>, bool&>(local_31);
            std::unique_ptr<social::PlayerDataComparator<social::FriendData>>::unique_ptr<
                social::OnlinePlayerDataOnlineNameComparator<social::FriendData>,
                std::default_delete<social::OnlinePlayerDataOnlineNameComparator<social::FriendData>>, void, void>(
                (unique_ptr<social::PlayerDataComparator<social::FriendData>>*)&local_98, &local_58);
            ((lVar17 + 8))->AddSortComparator(local_98);
            break;
        case 3635:
            uVar20 = (long)field_104092 - 1;
            field_104092 = (int)uVar20;
            piVar18 = &field_100092[uVar20];
            local_31 = *piVar18 == 1;
            lVar17 = this_00->field_52768.operator->();
            local_58 =
                std::make_unique<social::OnlinePlayerDataOnlineLastWorldChangeComparator<social::FriendData>, bool&>(
                    local_31);
            std::unique_ptr<social::PlayerDataComparator<social::FriendData>>::unique_ptr<
                social::OnlinePlayerDataOnlineLastWorldChangeComparator<social::FriendData>,
                std::default_delete<social::OnlinePlayerDataOnlineLastWorldChangeComparator<social::FriendData>>, void,
                void>((unique_ptr<social::PlayerDataComparator<social::FriendData>>*)&local_98, &local_58);
            ((lVar17 + 8))->AddSortComparator(local_98);
            break;
        case 3636:
            uVar20 = (long)field_104092 - 1;
            field_104092 = (int)uVar20;
            piVar18 = &field_100092[uVar20];
            local_31 = *piVar18 == 1;
            lVar17 = this_00->field_52768.operator->();
            local_58 =
                std::make_unique<social::OnlinePlayerDataSameWorldComparator<social::FriendData>, bool&>(local_31);
            std::unique_ptr<social::PlayerDataComparator<social::FriendData>>::unique_ptr<
                social::OnlinePlayerDataSameWorldComparator<social::FriendData>,
                std::default_delete<social::OnlinePlayerDataSameWorldComparator<social::FriendData>>, void, void>(
                (unique_ptr<social::PlayerDataComparator<social::FriendData>>*)&local_98, &local_58);
            ((lVar17 + 8))->AddSortComparator(local_98);
            break;
        case 3637:
            uVar20 = (long)field_104092 - 1;
            field_104092 = (int)uVar20;
            piVar18 = &field_100092[uVar20];
            local_31 = *piVar18 == 1;
            lVar17 = this_00->field_52768.operator->();
            local_58 =
                std::make_unique<social::OnlinePlayerDataSameWorldNameComparator<social::FriendData>, bool&>(local_31);
            std::unique_ptr<social::PlayerDataComparator<social::FriendData>>::unique_ptr<
                social::OnlinePlayerDataSameWorldNameComparator<social::FriendData>,
                std::default_delete<social::OnlinePlayerDataSameWorldNameComparator<social::FriendData>>, void, void>(
                (unique_ptr<social::PlayerDataComparator<social::FriendData>>*)&local_98, &local_58);
            ((lVar17 + 8))->AddSortComparator(local_98);
            break;
        case 3638:
            uVar20 = (long)field_104092 - 1;
            field_104092 = (int)uVar20;
            piVar18 = &field_100092[uVar20];
            local_31 = *piVar18 == 1;
            lVar17 = this_00->field_52768.operator->();
            local_58 =
                std::make_unique<social::OnlinePlayerDataSameWorldLastWorldChangeComparator<social::FriendData>, bool&>(
                    local_31);
            std::unique_ptr<social::PlayerDataComparator<social::FriendData>>::unique_ptr<
                social::OnlinePlayerDataSameWorldLastWorldChangeComparator<social::FriendData>,
                std::default_delete<social::OnlinePlayerDataSameWorldLastWorldChangeComparator<social::FriendData>>,
                void, void>((unique_ptr<social::PlayerDataComparator<social::FriendData>>*)&local_98, &local_58);
            ((lVar17 + 8))->AddSortComparator(local_98);
            break;
        case 3639:
            lVar17 = this_00->field_52768.operator->();
            ((lVar17 + 8))->Sort();
            break;
        case 3640:
            lVar17 = this_00->field_52768.operator->();
            ((lVar17 + 208))->ResetSortComparator();
            break;
        case 3641:
            uVar20 = (long)field_104092 - 1;
            field_104092 = (int)uVar20;
            piVar18 = &field_100092[uVar20];
            local_31 = *piVar18 == 1;
            lVar17 = this_00->field_52768.operator->();
            local_58 = std::make_unique<social::PlayerDataLegacyComparator<social::IgnoreData>, bool&>(local_31);
            std::unique_ptr<social::PlayerDataComparator<social::IgnoreData>>::unique_ptr<
                social::PlayerDataLegacyComparator<social::IgnoreData>,
                std::default_delete<social::PlayerDataLegacyComparator<social::IgnoreData>>, void, void>(
                (unique_ptr<social::PlayerDataComparator<social::IgnoreData>>*)&local_98, &local_58);
            ((lVar17 + 208))->AddSortComparator(local_98);
            break;
        case 3642:
            uVar20 = (long)field_104092 - 1;
            field_104092 = (int)uVar20;
            piVar18 = &field_100092[uVar20];
            local_31 = *piVar18 == 1;
            lVar17 = this_00->field_52768.operator->();
            local_58 = std::make_unique<social::PlayerDataNameComparator<social::IgnoreData>, bool&>(local_31);
            std::unique_ptr<social::PlayerDataComparator<social::IgnoreData>>::unique_ptr<
                social::PlayerDataNameComparator<social::IgnoreData>,
                std::default_delete<social::PlayerDataNameComparator<social::IgnoreData>>, void, void>(
                (unique_ptr<social::PlayerDataComparator<social::IgnoreData>>*)&local_98, &local_58);
            ((lVar17 + 208))->AddSortComparator(local_98);
            break;
        case 3643:
            lVar17 = this_00->field_52768.operator->();
            ((lVar17 + 208))->Sort();
            break;
        case 3644:
            bVar3 = &this_00->field_52544 != pvVar21;
            if (!bVar3) {
                return 1;
            }
            pPVar19 = (PlayerRegistry<social::FriendChatUser>*)this_00->field_52544.operator->();
            pPVar19->ResetSortComparator();
            return 1;
        case 3645:
            pvVar21 = (void*)((long)field_104092 - 1);
            field_104092 = (int)pvVar21;
            piVar18 = &field_100092[(unsigned long)pvVar21];
            local_31 = *piVar18 == 1;
            bVar3 = &this_00->field_52544 != pvVar21;
            if (bVar3) {
                pPVar19 = (PlayerRegistry<social::FriendChatUser>*)this_00->field_52544.operator->();
                local_58 =
                    std::make_unique<social::PlayerDataLegacyComparator<social::FriendChatUser>, bool&>(local_31);
                std::unique_ptr<social::PlayerDataComparator<social::FriendChatUser>>::unique_ptr<
                    social::PlayerDataLegacyComparator<social::FriendChatUser>,
                    std::default_delete<social::PlayerDataLegacyComparator<social::FriendChatUser>>, void, void>(
                    (unique_ptr<social::PlayerDataComparator<social::FriendChatUser>>*)&local_98, &local_58);
                pPVar19->AddSortComparator(local_98);
            }
            break;
        case 3646:
            pvVar21 = (void*)((long)field_104092 - 1);
            field_104092 = (int)pvVar21;
            piVar18 = &field_100092[(unsigned long)pvVar21];
            local_31 = *piVar18 == 1;
            bVar3 = &this_00->field_52544 != pvVar21;
            if (bVar3) {
                pPVar19 = (PlayerRegistry<social::FriendChatUser>*)this_00->field_52544.operator->();
                local_58 = std::make_unique<social::PlayerDataNameComparator<social::FriendChatUser>, bool&>(local_31);
                std::unique_ptr<social::PlayerDataComparator<social::FriendChatUser>>::unique_ptr<
                    social::PlayerDataNameComparator<social::FriendChatUser>,
                    std::default_delete<social::PlayerDataNameComparator<social::FriendChatUser>>, void, void>(
                    (unique_ptr<social::PlayerDataComparator<social::FriendChatUser>>*)&local_98, &local_58);
                pPVar19->AddSortComparator(local_98);
            }
            break;
        case 3647:
            pvVar21 = (void*)((long)field_104092 - 1);
            field_104092 = (int)pvVar21;
            piVar18 = &field_100092[(unsigned long)pvVar21];
            local_31 = *piVar18 == 1;
            bVar3 = &this_00->field_52544 != pvVar21;
            if (bVar3) {
                pPVar19 = (PlayerRegistry<social::FriendChatUser>*)this_00->field_52544.operator->();
                local_58 =
                    std::make_unique<social::OnlinePlayerDataWorldComparator<social::FriendChatUser>, bool&>(local_31);
                std::unique_ptr<social::PlayerDataComparator<social::FriendChatUser>>::unique_ptr<
                    social::OnlinePlayerDataWorldComparator<social::FriendChatUser>,
                    std::default_delete<social::OnlinePlayerDataWorldComparator<social::FriendChatUser>>, void, void>(
                    (unique_ptr<social::PlayerDataComparator<social::FriendChatUser>>*)&local_98, &local_58);
                pPVar19->AddSortComparator(local_98);
            }
            break;
        case 3648:
            pvVar21 = (void*)((long)field_104092 - 1);
            field_104092 = (int)pvVar21;
            piVar18 = &field_100092[(unsigned long)pvVar21];
            local_31 = *piVar18 == 1;
            bVar3 = &this_00->field_52544 != pvVar21;
            if (bVar3) {
                pPVar19 = (PlayerRegistry<social::FriendChatUser>*)this_00->field_52544.operator->();
                local_58 =
                    std::make_unique<social::OnlinePlayerDataLastWorldChangeComparator<social::FriendChatUser>, bool&>(
                        local_31);
                std::unique_ptr<social::PlayerDataComparator<social::FriendChatUser>>::unique_ptr<
                    social::OnlinePlayerDataLastWorldChangeComparator<social::FriendChatUser>,
                    std::default_delete<social::OnlinePlayerDataLastWorldChangeComparator<social::FriendChatUser>>,
                    void, void>((unique_ptr<social::PlayerDataComparator<social::FriendChatUser>>*)&local_98,
                                &local_58);
                pPVar19->AddSortComparator(local_98);
            }
            break;
        case 3649:
            pvVar21 = (void*)((long)field_104092 - 1);
            field_104092 = (int)pvVar21;
            piVar18 = &field_100092[(unsigned long)pvVar21];
            local_31 = *piVar18 == 1;
            bVar3 = &this_00->field_52544 != pvVar21;
            if (bVar3) {
                pPVar19 = (PlayerRegistry<social::FriendChatUser>*)this_00->field_52544.operator->();
                local_58 =
                    std::make_unique<social::OnlinePlayerDataOnlineComparator<social::FriendChatUser>, bool&>(local_31);
                std::unique_ptr<social::PlayerDataComparator<social::FriendChatUser>>::unique_ptr<
                    social::OnlinePlayerDataOnlineComparator<social::FriendChatUser>,
                    std::default_delete<social::OnlinePlayerDataOnlineComparator<social::FriendChatUser>>, void, void>(
                    (unique_ptr<social::PlayerDataComparator<social::FriendChatUser>>*)&local_98, &local_58);
                pPVar19->AddSortComparator(local_98);
            }
            break;
        case 3650:
            pvVar21 = (void*)((long)field_104092 - 1);
            field_104092 = (int)pvVar21;
            piVar18 = &field_100092[(unsigned long)pvVar21];
            local_31 = *piVar18 == 1;
            bVar3 = &this_00->field_52544 != pvVar21;
            if (bVar3) {
                pPVar19 = (PlayerRegistry<social::FriendChatUser>*)this_00->field_52544.operator->();
                local_58 =
                    std::make_unique<social::OnlinePlayerDataOnlineNameComparator<social::FriendChatUser>, bool&>(
                        local_31);
                std::unique_ptr<social::PlayerDataComparator<social::FriendChatUser>>::unique_ptr<
                    social::OnlinePlayerDataOnlineNameComparator<social::FriendChatUser>,
                    std::default_delete<social::OnlinePlayerDataOnlineNameComparator<social::FriendChatUser>>, void,
                    void>((unique_ptr<social::PlayerDataComparator<social::FriendChatUser>>*)&local_98, &local_58);
                pPVar19->AddSortComparator(local_98);
            }
            break;
        case 3651:
            pvVar21 = (void*)((long)field_104092 - 1);
            field_104092 = (int)pvVar21;
            piVar18 = &field_100092[(unsigned long)pvVar21];
            local_31 = *piVar18 == 1;
            bVar3 = &this_00->field_52544 != pvVar21;
            if (bVar3) {
                pPVar19 = (PlayerRegistry<social::FriendChatUser>*)this_00->field_52544.operator->();
                local_58 =
                    std::make_unique<social::OnlinePlayerDataOnlineLastWorldChangeComparator<social::FriendChatUser>,
                                     bool&>(local_31);
                std::unique_ptr<social::PlayerDataComparator<social::FriendChatUser>>::unique_ptr<
                    social::OnlinePlayerDataOnlineLastWorldChangeComparator<social::FriendChatUser>,
                    std::default_delete<
                        social::OnlinePlayerDataOnlineLastWorldChangeComparator<social::FriendChatUser>>,
                    void, void>((unique_ptr<social::PlayerDataComparator<social::FriendChatUser>>*)&local_98,
                                &local_58);
                pPVar19->AddSortComparator(local_98);
            }
            break;
        case 3652:
            pvVar21 = (void*)((long)field_104092 - 1);
            field_104092 = (int)pvVar21;
            piVar18 = &field_100092[(unsigned long)pvVar21];
            local_31 = *piVar18 == 1;
            bVar3 = &this_00->field_52544 != pvVar21;
            if (bVar3) {
                pPVar19 = (PlayerRegistry<social::FriendChatUser>*)this_00->field_52544.operator->();
                local_58 = std::make_unique<social::OnlinePlayerDataSameWorldComparator<social::FriendChatUser>, bool&>(
                    local_31);
                std::unique_ptr<social::PlayerDataComparator<social::FriendChatUser>>::unique_ptr<
                    social::OnlinePlayerDataSameWorldComparator<social::FriendChatUser>,
                    std::default_delete<social::OnlinePlayerDataSameWorldComparator<social::FriendChatUser>>, void,
                    void>((unique_ptr<social::PlayerDataComparator<social::FriendChatUser>>*)&local_98, &local_58);
                pPVar19->AddSortComparator(local_98);
            }
            break;
        case 3653:
            pvVar21 = (void*)((long)field_104092 - 1);
            field_104092 = (int)pvVar21;
            piVar18 = &field_100092[(unsigned long)pvVar21];
            local_31 = *piVar18 == 1;
            bVar3 = &this_00->field_52544 != pvVar21;
            if (bVar3) {
                pPVar19 = (PlayerRegistry<social::FriendChatUser>*)this_00->field_52544.operator->();
                local_58 =
                    std::make_unique<social::OnlinePlayerDataSameWorldNameComparator<social::FriendChatUser>, bool&>(
                        local_31);
                std::unique_ptr<social::PlayerDataComparator<social::FriendChatUser>>::unique_ptr<
                    social::OnlinePlayerDataSameWorldNameComparator<social::FriendChatUser>,
                    std::default_delete<social::OnlinePlayerDataSameWorldNameComparator<social::FriendChatUser>>, void,
                    void>((unique_ptr<social::PlayerDataComparator<social::FriendChatUser>>*)&local_98, &local_58);
                pPVar19->AddSortComparator(local_98);
            }
            break;
        case 3654:
            pvVar21 = (void*)((long)field_104092 - 1);
            field_104092 = (int)pvVar21;
            piVar18 = &field_100092[(unsigned long)pvVar21];
            local_31 = *piVar18 == 1;
            bVar3 = &this_00->field_52544 != pvVar21;
            if (bVar3) {
                pPVar19 = (PlayerRegistry<social::FriendChatUser>*)this_00->field_52544.operator->();
                local_58 =
                    std::make_unique<social::OnlinePlayerDataSameWorldLastWorldChangeComparator<social::FriendChatUser>,
                                     bool&>(local_31);
                std::unique_ptr<social::PlayerDataComparator<social::FriendChatUser>>::unique_ptr<
                    social::OnlinePlayerDataSameWorldLastWorldChangeComparator<social::FriendChatUser>,
                    std::default_delete<
                        social::OnlinePlayerDataSameWorldLastWorldChangeComparator<social::FriendChatUser>>,
                    void, void>((unique_ptr<social::PlayerDataComparator<social::FriendChatUser>>*)&local_98,
                                &local_58);
                pPVar19->AddSortComparator(local_98);
            }
            break;
        case 3655:
            bVar3 = &this_00->field_52544 != pvVar21;
            if (!bVar3) {
                return 1;
            }
            pPVar19 = (PlayerRegistry<social::FriendChatUser>*)this_00->field_52544.operator->();
            pPVar19->Sort();
            return 1;
        case 3656:
            uVar20 = (long)field_104092 - 1;
            field_104092 = (int)uVar20;
            piVar18 = &field_100092[uVar20];
            local_31 = *piVar18 == 1;
            lVar17 = this_00->field_52768.operator->();
            local_58 = std::make_unique<social::OnlinePlayerDataRankComparator<social::FriendData>, bool&>(local_31);
            std::unique_ptr<social::PlayerDataComparator<social::FriendData>>::unique_ptr<
                social::OnlinePlayerDataRankComparator<social::FriendData>,
                std::default_delete<social::OnlinePlayerDataRankComparator<social::FriendData>>, void, void>(
                (unique_ptr<social::PlayerDataComparator<social::FriendData>>*)&local_98, &local_58);
            ((lVar17 + 8))->AddSortComparator(local_98);
            break;
        case 3657:
            pvVar21 = (void*)((long)field_104092 - 1);
            field_104092 = (int)pvVar21;
            piVar18 = &field_100092[(unsigned long)pvVar21];
            local_31 = *piVar18 == 1;
            bVar3 = &this_00->field_52544 != pvVar21;
            if (bVar3) {
                pPVar19 = (PlayerRegistry<social::FriendChatUser>*)this_00->field_52544.operator->();
                local_58 =
                    std::make_unique<social::OnlinePlayerDataRankComparator<social::FriendChatUser>, bool&>(local_31);
                std::unique_ptr<social::PlayerDataComparator<social::FriendChatUser>>::unique_ptr<
                    social::OnlinePlayerDataRankComparator<social::FriendChatUser>,
                    std::default_delete<social::OnlinePlayerDataRankComparator<social::FriendChatUser>>, void, void>(
                    (unique_ptr<social::PlayerDataComparator<social::FriendChatUser>>*)&local_98, &local_58);
                pPVar19->AddSortComparator(local_98);
            }
        }
        uVar22 = 1;
    switchD_10015f391_caseD_e1a:
        return uVar22;
    }

} // namespace jag::oldscape
