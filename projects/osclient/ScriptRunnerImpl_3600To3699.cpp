// projects/osclient/ScriptRunnerImpl_3600To3699.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: osclient

#include "ScriptRunnerImpl.h"

namespace jag::oldscape {
    // 0x10015f350, 7744 bytes, placed by class name and debug map
    // ScriptRunnerImpl::ExecuteCommand3600To3699(ScriptOp, ClientScript const&, bool)
    undefined8 ScriptRunnerImpl::ExecuteCommand3600To3699(long param_1, _func_decltype_nullptr* param_2) {
        byte bVar1;
        char cVar2;
        bool bVar3;
        undefined4 uVar4;
        int iVar5;
        int iVar6;
        Client* this;
        NXTRenderCanvas* this_00;
        PlayerData<social::IgnoreData>* pPVar7;
        basic_string* pbVar8;
        FriendSystem* pFVar9;
        uint* puVar10;
        compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*, eastl::allocator,
                            0>* pcVar11;
        DisplayName* pDVar12;
        DisplayName* pDVar13;
        eastl::string* pbVar14;
        Minimap* pMVar15;
        FriendChatUser* pFVar16;
        undefined4* puVar17;
        long lVar18;
        int* piVar19;
        PlayerRegistry<social::FriendChatUser>* pPVar20;
        ulong uVar21;
        _func_decltype_nullptr* p_Var22;
        undefined8 uVar23;
        undefined1* puVar24;
        DisplayName local_98;
        eastl::string local_58[39];
        undefined1 local_31;

        uVar23 = 2;
        p_Var22 = param_2;
        this = (Client*)Client::Instance();
        switch ((int)param_2) {
        case 3600:
            lVar18 = (&field_52768)->get();
            if (*(int*)(lVar18 + 376) == 1) {
            LAB_100160cb6:
                iVar5 = *(int*)(param_1 + 104092);
                *(int*)(param_1 + 104092) = iVar5 + 1;
                puVar17 = (undefined4*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092),
                                                                           (long)iVar5);
                *puVar17 = 4294967295;
            } else {
                if (*(int*)(lVar18 + 376) != 0) {
                    iVar5 = ((lVar18 + 8))->GetLevel();
                    goto LAB_100160d06;
                }
                iVar5 = *(int*)(param_1 + 104092);
                *(int*)(param_1 + 104092) = iVar5 + 1;
                puVar17 = (undefined4*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092),
                                                                           (long)iVar5);
                *puVar17 = 4294967294;
            }
            break;
        case 3601:
            uVar21 = (long)*(int*)(param_1 + 104092) - 1;
            *(int*)(param_1 + 104092) = (int)uVar21;
            piVar19 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), uVar21);
            iVar5 = *piVar19;
            pFVar9 = (FriendSystem*)(&field_52768)->get();
            cVar2 = pFVar9->IsReady();
            if ((cVar2 != '\0') && (-1 < iVar5)) {
                iVar6 = pFVar9->field_8->GetLevel();
                if (iVar5 < iVar6) {
                    pPVar7 = (PlayerData<social::IgnoreData>*)(pFVar9->field_8, iVar5)->GetPlayerBySlot();
                    pbVar8 = (basic_string*)pPVar7->GetFormattedCurrentDisplayName();
                    iVar5 = *(int*)(param_1 + 136096);
                    *(int*)(param_1 + 136096) = iVar5 + 1;
                    pbVar14 = (eastl::string*)std::array<eastl::string, 1000ul>::operator[](
                        (array<eastl::string, 1000ul>*)(param_1 + 104096), (long)iVar5);
                    eastl::string::operator=(pbVar14, pbVar8);
                    pbVar8 = (basic_string*)pPVar7->GetFormattedOldDisplayName();
                LAB_10015fb98:
                    iVar5 = *(int*)(param_1 + 136096);
                    *(int*)(param_1 + 136096) = iVar5 + 1;
                    goto LAB_10015fdde;
                }
            }
            goto LAB_10015fbb4;
        case 3602:
            uVar21 = (long)*(int*)(param_1 + 104092) - 1;
            *(int*)(param_1 + 104092) = (int)uVar21;
            piVar19 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), uVar21);
            iVar5 = *piVar19;
            pFVar9 = (FriendSystem*)(&field_52768)->get();
            cVar2 = pFVar9->IsReady();
            if ((cVar2 == '\0') || (iVar5 < 0))
                goto LAB_10015fd8b;
            iVar6 = pFVar9->field_8->GetLevel();
            if (iVar6 <= iVar5)
                goto LAB_10015fd8b;
            lVar18 = (pFVar9->field_8, iVar5)->GetPlayerBySlot();
            iVar5 = *(int*)(lVar18 + 136);
        LAB_10015f57f:
            iVar6 = *(int*)(param_1 + 104092);
            *(int*)(param_1 + 104092) = iVar6 + 1;
            goto LAB_100160d1e;
        case 3603:
            uVar21 = (long)*(int*)(param_1 + 104092) - 1;
            *(int*)(param_1 + 104092) = (int)uVar21;
            piVar19 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), uVar21);
            iVar5 = *piVar19;
            pFVar9 = (FriendSystem*)(&field_52768)->get();
            cVar2 = pFVar9->IsReady();
            if ((cVar2 != '\0') && (-1 < iVar5)) {
                iVar6 = pFVar9->field_8->GetLevel();
                if (iVar5 < iVar6) {
                    lVar18 = (pFVar9->field_8, iVar5)->GetPlayerBySlot();
                    iVar5 = *(int*)(lVar18 + 176);
                    goto LAB_10015f57f;
                }
            }
            goto LAB_10015fd8b;
        case 3604:
            uVar21 = (long)*(int*)(param_1 + 136096) - 1;
            *(int*)(param_1 + 136096) = (int)uVar21;
            pbVar8 = (basic_string*)std::array<eastl::string, 1000ul>::operator[](
                (array<eastl::string, 1000ul>*)(param_1 + 104096), uVar21);
            new (&local_98) eastl::string(pbVar8);
            uVar21 = (long)*(int*)(param_1 + 104092) - 1;
            *(int*)(param_1 + 104092) = (int)uVar21;
            piVar19 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), uVar21);
            iVar5 = *piVar19;
            pFVar9 = (FriendSystem*)std::unique_ptr<FriendSystem, std::default_delete<FriendSystem>>::operator->(
                (unique_ptr<FriendSystem, std::default_delete<FriendSystem>>*)&field_52768);
            pFVar9->SetFriendRank((basic_string*)&local_98, iVar5);
            goto LAB_10015fa9a;
        case 3605:
            uVar21 = (long)*(int*)(param_1 + 136096) - 1;
            *(int*)(param_1 + 136096) = (int)uVar21;
            pbVar8 = (basic_string*)std::array<eastl::string, 1000ul>::operator[](
                (array<eastl::string, 1000ul>*)(param_1 + 104096), uVar21);
            new (&local_98) eastl::string(pbVar8);
            pFVar9 = (FriendSystem*)std::unique_ptr<FriendSystem, std::default_delete<FriendSystem>>::operator->(
                (unique_ptr<FriendSystem, std::default_delete<FriendSystem>>*)&field_52768);
            pFVar9->AddFriend((basic_string*)&local_98);
            goto LAB_10015fa9a;
        case 3606:
            uVar21 = (long)*(int*)(param_1 + 136096) - 1;
            *(int*)(param_1 + 136096) = (int)uVar21;
            pbVar8 = (basic_string*)std::array<eastl::string, 1000ul>::operator[](
                (array<eastl::string, 1000ul>*)(param_1 + 104096), uVar21);
            new (&local_98) eastl::string(pbVar8);
            pFVar9 = (FriendSystem*)std::unique_ptr<FriendSystem, std::default_delete<FriendSystem>>::operator->(
                (unique_ptr<FriendSystem, std::default_delete<FriendSystem>>*)&field_52768);
            pFVar9->DelFriend((basic_string*)&local_98);
            goto LAB_10015fa9a;
        case 3607:
            uVar21 = (long)*(int*)(param_1 + 136096) - 1;
            *(int*)(param_1 + 136096) = (int)uVar21;
            pbVar8 = (basic_string*)std::array<eastl::string, 1000ul>::operator[](
                (array<eastl::string, 1000ul>*)(param_1 + 104096), uVar21);
            new (&local_98) eastl::string(pbVar8);
            pFVar9 = (FriendSystem*)std::unique_ptr<FriendSystem, std::default_delete<FriendSystem>>::operator->(
                (unique_ptr<FriendSystem, std::default_delete<FriendSystem>>*)&field_52768);
            pFVar9->AddIgnore((basic_string*)&local_98);
            goto LAB_10015fa9a;
        case 3608:
            uVar21 = (long)*(int*)(param_1 + 136096) - 1;
            *(int*)(param_1 + 136096) = (int)uVar21;
            pbVar8 = (basic_string*)std::array<eastl::string, 1000ul>::operator[](
                (array<eastl::string, 1000ul>*)(param_1 + 104096), uVar21);
            new (&local_98) eastl::string(pbVar8);
            pFVar9 = (FriendSystem*)std::unique_ptr<FriendSystem, std::default_delete<FriendSystem>>::operator->(
                (unique_ptr<FriendSystem, std::default_delete<FriendSystem>>*)&field_52768);
            pFVar9->DelIgnore((basic_string*)&local_98, true);
            local_98.~basic_string();
            return 1;
        case 3609:
            uVar21 = (long)*(int*)(param_1 + 136096) - 1;
            *(int*)(param_1 + 136096) = (int)uVar21;
            pbVar8 = (basic_string*)std::array<eastl::string, 1000ul>::operator[](
                (array<eastl::string, 1000ul>*)(param_1 + 104096), uVar21);
            eastl::string::basic_string(local_58, pbVar8);
            local_98.RemoveChatCrownTags(this);
            eastl::string::operator=(local_58, (basic_string*)&local_98);
            local_98.~basic_string();
            pFVar9 = (FriendSystem*)std::unique_ptr<FriendSystem, std::default_delete<FriendSystem>>::operator->(
                (unique_ptr<FriendSystem, std::default_delete<FriendSystem>>*)&field_52768);
            new (&local_98) rs2lib::social::DisplayName(local_58, *(undefined4*)&field_54172);
            bVar1 = pFVar9->IsFriend(&local_98, false);
            goto LAB_10015fca2;
        default:
            goto switchD_10015f391_caseD_e1a;
        case 3611:
            bVar3 = std::operator!=((unique_ptr*)&field_52544, p_Var22);
            if (!bVar3)
                goto LAB_10015fdf3;
            lVar18 =
                std::unique_ptr<social::FriendChatChannel, std::default_delete<social::FriendChatChannel>>::operator->(
                    (unique_ptr<social::FriendChatChannel,
                                std::default_delete<social::FriendChatChannel>>*)&field_52544);
            pbVar8 = (basic_string*)(lVar18 + 192);
        LAB_10015fdc6:
            iVar5 = *(int*)(param_1 + 136096);
            *(int*)(param_1 + 136096) = iVar5 + 1;
        LAB_10015fdde:
            pbVar14 = (eastl::string*)std::array<eastl::string, 1000ul>::operator[](
                (array<eastl::string, 1000ul>*)(param_1 + 104096), (long)iVar5);
            eastl::string::operator=(pbVar14, pbVar8);
            break;
        case 3612:
            bVar3 = std::operator!=((unique_ptr*)&field_52544, p_Var22);
            if (bVar3) {
                pMVar15 =
                    (Minimap*)
                        std::unique_ptr<social::FriendChatChannel, std::default_delete<social::FriendChatChannel>>::
                        operator->((unique_ptr<social::FriendChatChannel,
                                               std::default_delete<social::FriendChatChannel>>*)&field_52544);
                iVar5 = pMVar15->GetLevel();
                goto LAB_100160d06;
            }
            uVar21 = (ulong) * (int*)(param_1 + 104092);
            *(int*)(param_1 + 104092) = *(int*)(param_1 + 104092) + 1;
            goto LAB_10015ff38;
        case 3613:
            p_Var22 = (_func_decltype_nullptr*)((long)*(int*)(param_1 + 104092) - 1);
            *(int*)(param_1 + 104092) = (int)p_Var22;
            piVar19 =
                (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), (ulong)p_Var22);
            iVar5 = *piVar19;
            puVar24 = &field_52544;
            bVar3 = std::operator!=((unique_ptr*)puVar24, p_Var22);
            if (bVar3) {
                pMVar15 =
                    (Minimap*)
                        std::unique_ptr<social::FriendChatChannel, std::default_delete<social::FriendChatChannel>>::
                        operator->(
                            (unique_ptr<social::FriendChatChannel, std::default_delete<social::FriendChatChannel>>*)
                                puVar24);
                iVar6 = pMVar15->GetLevel();
                if (iVar5 < iVar6) {
                    pPVar20 =
                        (PlayerRegistry<social::FriendChatUser>*)
                            std::unique_ptr<social::FriendChatChannel, std::default_delete<social::FriendChatChannel>>::
                            operator->(
                                (unique_ptr<social::FriendChatChannel, std::default_delete<social::FriendChatChannel>>*)
                                    puVar24);
                    pcVar11 =
                        (compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                             eastl::allocator, 0>*)pPVar20->GetPlayerBySlot(iVar5);
                    pDVar12 = (DisplayName*)eastl::compressed_pair_imp<
                        std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*, eastl::allocator,
                        0>::second(pcVar11);
                    pbVar8 = (basic_string*)pDVar12->GetDisplayName();
                    goto LAB_10015fdc6;
                }
            }
            goto LAB_10015fdf3;
        case 3614:
            p_Var22 = (_func_decltype_nullptr*)((long)*(int*)(param_1 + 104092) - 1);
            *(int*)(param_1 + 104092) = (int)p_Var22;
            piVar19 =
                (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), (ulong)p_Var22);
            iVar5 = *piVar19;
            puVar24 = &field_52544;
            bVar3 = std::operator!=((unique_ptr*)puVar24, p_Var22);
            if (bVar3) {
                pMVar15 =
                    (Minimap*)
                        std::unique_ptr<social::FriendChatChannel, std::default_delete<social::FriendChatChannel>>::
                        operator->(
                            (unique_ptr<social::FriendChatChannel, std::default_delete<social::FriendChatChannel>>*)
                                puVar24);
                iVar6 = pMVar15->GetLevel();
                if (iVar5 < iVar6) {
                    pPVar20 =
                        (PlayerRegistry<social::FriendChatUser>*)
                            std::unique_ptr<social::FriendChatChannel, std::default_delete<social::FriendChatChannel>>::
                            operator->(
                                (unique_ptr<social::FriendChatChannel, std::default_delete<social::FriendChatChannel>>*)
                                    puVar24);
                    this_00 = (NXTRenderCanvas*)pPVar20->GetPlayerBySlot(iVar5);
                    uVar4 = this_00->GetLastNumVerts();
                LAB_10015f9a8:
                    iVar5 = *(int*)(param_1 + 104092);
                    *(int*)(param_1 + 104092) = iVar5 + 1;
                    puVar17 = (undefined4*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092),
                                                                               (long)iVar5);
                    *puVar17 = uVar4;
                    break;
                }
            }
            goto LAB_10015ff24;
        case 3615:
            p_Var22 = (_func_decltype_nullptr*)((long)*(int*)(param_1 + 104092) - 1);
            *(int*)(param_1 + 104092) = (int)p_Var22;
            piVar19 =
                (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), (ulong)p_Var22);
            iVar5 = *piVar19;
            puVar24 = &field_52544;
            bVar3 = std::operator!=((unique_ptr*)puVar24, p_Var22);
            if (bVar3) {
                pMVar15 =
                    (Minimap*)
                        std::unique_ptr<social::FriendChatChannel, std::default_delete<social::FriendChatChannel>>::
                        operator->(
                            (unique_ptr<social::FriendChatChannel, std::default_delete<social::FriendChatChannel>>*)
                                puVar24);
                iVar6 = pMVar15->GetLevel();
                if (iVar5 < iVar6) {
                    pPVar20 =
                        (PlayerRegistry<social::FriendChatUser>*)
                            std::unique_ptr<social::FriendChatChannel, std::default_delete<social::FriendChatChannel>>::
                            operator->(
                                (unique_ptr<social::FriendChatChannel, std::default_delete<social::FriendChatChannel>>*)
                                    puVar24);
                    lVar18 = pPVar20->GetPlayerBySlot(iVar5);
                    uVar4 = *(undefined4*)(lVar18 + 176);
                    goto LAB_10015f9a8;
                }
            }
            goto LAB_10015ff24;
        case 3616:
            bVar3 = std::operator!=((unique_ptr*)&field_52544, p_Var22);
            iVar5 = 0;
            if (bVar3) {
                lVar18 = std::unique_ptr<social::FriendChatChannel, std::default_delete<social::FriendChatChannel>>::
                         operator->((unique_ptr<social::FriendChatChannel,
                                                std::default_delete<social::FriendChatChannel>>*)&field_52544);
                iVar5 = (int)*(char*)(lVar18 + 288);
            }
            goto LAB_100160d06;
        case 3617:
            uVar21 = (long)*(int*)(param_1 + 136096) - 1;
            *(int*)(param_1 + 136096) = (int)uVar21;
            pbVar8 = (basic_string*)std::array<eastl::string, 1000ul>::operator[](
                (array<eastl::string, 1000ul>*)(param_1 + 104096), uVar21);
            new (&local_98) eastl::string(pbVar8);
            FriendsChatKickUser((basic_string*)&local_98);
            goto LAB_10015fa9a;
        case 3618:
            bVar3 = std::operator!=((unique_ptr*)&field_52544, p_Var22);
            iVar5 = 0;
            if (bVar3) {
                lVar18 = std::unique_ptr<social::FriendChatChannel, std::default_delete<social::FriendChatChannel>>::
                         operator->((unique_ptr<social::FriendChatChannel,
                                                std::default_delete<social::FriendChatChannel>>*)&field_52544);
                iVar5 = *(int*)(lVar18 + 292);
            }
            goto LAB_100160d06;
        case 3619:
            uVar21 = (long)*(int*)(param_1 + 136096) - 1;
            *(int*)(param_1 + 136096) = (int)uVar21;
            pbVar8 = (basic_string*)std::array<eastl::string, 1000ul>::operator[](
                (array<eastl::string, 1000ul>*)(param_1 + 104096), uVar21);
            new (&local_98) eastl::string(pbVar8);
            FriendsChatJoinChat((basic_string*)&local_98);
        LAB_10015fa9a:
            local_98.~basic_string();
            break;
        case 3620:
            FriendsChatLeaveChat();
            break;
        case 3621:
            pFVar9 = (FriendSystem*)std::unique_ptr<FriendSystem, std::default_delete<FriendSystem>>::operator->(
                (unique_ptr<FriendSystem, std::default_delete<FriendSystem>>*)&field_52768);
            cVar2 = pFVar9->IsReady();
            if (cVar2 == '\0')
                goto LAB_100160cb6;
            lVar18 = std::unique_ptr<FriendSystem, std::default_delete<FriendSystem>>::operator->(
                (unique_ptr<FriendSystem, std::default_delete<FriendSystem>>*)&field_52768);
            iVar5 = ((lVar18 + 208))->GetLevel();
        LAB_100160d06:
            iVar6 = *(int*)(param_1 + 104092);
            *(int*)(param_1 + 104092) = iVar6 + 1;
        LAB_100160d1e:
            piVar19 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), (long)iVar6);
            *piVar19 = iVar5;
            break;
        case 3622:
            uVar21 = (long)*(int*)(param_1 + 104092) - 1;
            *(int*)(param_1 + 104092) = (int)uVar21;
            piVar19 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), uVar21);
            iVar5 = *piVar19;
            pFVar9 = (FriendSystem*)(&field_52768)->get();
            cVar2 = pFVar9->IsReady();
            if ((cVar2 != '\0') && (-1 < iVar5)) {
                iVar6 = pFVar9->field_208->GetLevel();
                if (iVar5 < iVar6) {
                    pPVar7 = (PlayerData<social::IgnoreData>*)(pFVar9->field_208, iVar5)->GetPlayerBySlot();
                    pbVar8 = (basic_string*)pPVar7->GetFormattedCurrentDisplayName();
                    iVar5 = *(int*)(param_1 + 136096);
                    *(int*)(param_1 + 136096) = iVar5 + 1;
                    pbVar14 = (eastl::string*)std::array<eastl::string, 1000ul>::operator[](
                        (array<eastl::string, 1000ul>*)(param_1 + 104096), (long)iVar5);
                    eastl::string::operator=(pbVar14, pbVar8);
                    pbVar8 = (basic_string*)pPVar7->GetFormattedOldDisplayName();
                    goto LAB_10015fb98;
                }
            }
        LAB_10015fbb4:
            iVar5 = *(int*)(param_1 + 136096);
            *(int*)(param_1 + 136096) = iVar5 + 1;
            pbVar14 = (eastl::string*)std::array<eastl::string, 1000ul>::operator[](
                (array<eastl::string, 1000ul>*)(param_1 + 104096), (long)iVar5);
            eastl::string::assign(pbVar14, "");
            iVar5 = *(int*)(param_1 + 136096);
            *(int*)(param_1 + 136096) = iVar5 + 1;
            pbVar14 = (eastl::string*)std::array<eastl::string, 1000ul>::operator[](
                (array<eastl::string, 1000ul>*)(param_1 + 104096), (long)iVar5);
            eastl::string::assign(pbVar14, "");
            break;
        case 3623:
            uVar21 = (long)*(int*)(param_1 + 136096) - 1;
            *(int*)(param_1 + 136096) = (int)uVar21;
            pbVar8 = (basic_string*)std::array<eastl::string, 1000ul>::operator[](
                (array<eastl::string, 1000ul>*)(param_1 + 104096), uVar21);
            eastl::string::basic_string(local_58, pbVar8);
            local_98.RemoveChatCrownTags(this);
            eastl::string::operator=(local_58, (basic_string*)&local_98);
            local_98.~basic_string();
            pFVar9 = (FriendSystem*)std::unique_ptr<FriendSystem, std::default_delete<FriendSystem>>::operator->(
                (unique_ptr<FriendSystem, std::default_delete<FriendSystem>>*)&field_52768);
            new (&local_98) rs2lib::social::DisplayName(local_58, *(undefined4*)&field_54172);
            bVar1 = pFVar9->IsIgnored(&local_98);
        LAB_10015fca2:
            iVar5 = *(int*)(param_1 + 104092);
            *(int*)(param_1 + 104092) = iVar5 + 1;
            puVar10 = (uint*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), (long)iVar5);
            *puVar10 = (uint)bVar1;
            local_98.~pair();
            eastl::string::~basic_string(local_58);
            break;
        case 3624:
            p_Var22 = (_func_decltype_nullptr*)((long)*(int*)(param_1 + 104092) - 1);
            *(int*)(param_1 + 104092) = (int)p_Var22;
            piVar19 =
                (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), (ulong)p_Var22);
            iVar5 = *piVar19;
            puVar24 = &field_52544;
            bVar3 = std::operator!=((unique_ptr*)puVar24, p_Var22);
            if (bVar3) {
                pMVar15 =
                    (Minimap*)
                        std::unique_ptr<social::FriendChatChannel, std::default_delete<social::FriendChatChannel>>::
                        operator->(
                            (unique_ptr<social::FriendChatChannel, std::default_delete<social::FriendChatChannel>>*)
                                puVar24);
                iVar6 = pMVar15->GetLevel();
                if (iVar5 < iVar6) {
                    pPVar20 =
                        (PlayerRegistry<social::FriendChatUser>*)
                            std::unique_ptr<social::FriendChatChannel, std::default_delete<social::FriendChatChannel>>::
                            operator->(
                                (unique_ptr<social::FriendChatChannel, std::default_delete<social::FriendChatChannel>>*)
                                    puVar24);
                    pcVar11 =
                        (compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                             eastl::allocator, 0>*)pPVar20->GetPlayerBySlot(iVar5);
                    pDVar12 = (DisplayName*)eastl::compressed_pair_imp<
                        std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*, eastl::allocator,
                        0>::second(pcVar11);
                    lVar18 = shared_ptr<ClientPlayer>::operator->((shared_ptr<ClientPlayer>*)field_52016);
                    pDVar13 = (DisplayName*)shared_ptr<rs2lib::social::DisplayName>::operator*(
                        (shared_ptr<rs2lib::social::DisplayName>*)(lVar18 + 992));
                    cVar2 = rs2lib::social::DisplayName::operator==(pDVar12, pDVar13);
                    if (cVar2 != '\0') {
                        iVar5 = *(int*)(param_1 + 104092);
                        *(int*)(param_1 + 104092) = iVar5 + 1;
                    LAB_10015ff14:
                        puVar17 = (undefined4*)std::array<int, 1000ul>::operator[](
                            (array<int, 1000ul>*)(param_1 + 100092), (long)iVar5);
                        *puVar17 = 1;
                        break;
                    }
                }
            }
        LAB_10015fd8b:
            uVar21 = (ulong) * (int*)(param_1 + 104092);
            *(int*)(param_1 + 104092) = *(int*)(param_1 + 104092) + 1;
            goto LAB_10015ff38;
        case 3625:
            bVar3 = std::operator!=((unique_ptr*)&field_52544, p_Var22);
            if (bVar3) {
                lVar18 = std::unique_ptr<social::FriendChatChannel, std::default_delete<social::FriendChatChannel>>::
                         operator->((unique_ptr<social::FriendChatChannel,
                                                std::default_delete<social::FriendChatChannel>>*)&field_52544);
                pbVar8 = (basic_string*)(lVar18 + 256);
                goto LAB_10015fdc6;
            }
        LAB_10015fdf3:
            iVar5 = *(int*)(param_1 + 136096);
            *(int*)(param_1 + 136096) = iVar5 + 1;
            pbVar14 = (eastl::string*)std::array<eastl::string, 1000ul>::operator[](
                (array<eastl::string, 1000ul>*)(param_1 + 104096), (long)iVar5);
            eastl::string::assign(pbVar14, "");
            break;
        case 3626:
            p_Var22 = (_func_decltype_nullptr*)((long)*(int*)(param_1 + 104092) - 1);
            *(int*)(param_1 + 104092) = (int)p_Var22;
            piVar19 =
                (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), (ulong)p_Var22);
            iVar5 = *piVar19;
            puVar24 = &field_52544;
            bVar3 = std::operator!=((unique_ptr*)puVar24, p_Var22);
            if (bVar3) {
                pMVar15 =
                    (Minimap*)
                        std::unique_ptr<social::FriendChatChannel, std::default_delete<social::FriendChatChannel>>::
                        operator->(
                            (unique_ptr<social::FriendChatChannel, std::default_delete<social::FriendChatChannel>>*)
                                puVar24);
                iVar6 = pMVar15->GetLevel();
                if (iVar5 < iVar6) {
                    pPVar20 =
                        (PlayerRegistry<social::FriendChatUser>*)
                            std::unique_ptr<social::FriendChatChannel, std::default_delete<social::FriendChatChannel>>::
                            operator->(
                                (unique_ptr<social::FriendChatChannel, std::default_delete<social::FriendChatChannel>>*)
                                    puVar24);
                    pFVar16 = (FriendChatUser*)pPVar20->GetPlayerBySlot(iVar5);
                    cVar2 = pFVar16->IsFriend();
                LAB_10015fefc:
                    if (cVar2 != '\0') {
                        iVar5 = *(int*)(param_1 + 104092);
                        *(int*)(param_1 + 104092) = iVar5 + 1;
                        goto LAB_10015ff14;
                    }
                }
            }
            goto LAB_10015ff24;
        case 3627:
            p_Var22 = (_func_decltype_nullptr*)((long)*(int*)(param_1 + 104092) - 1);
            *(int*)(param_1 + 104092) = (int)p_Var22;
            piVar19 =
                (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), (ulong)p_Var22);
            iVar5 = *piVar19;
            puVar24 = &field_52544;
            bVar3 = std::operator!=((unique_ptr*)puVar24, p_Var22);
            if (bVar3) {
                pMVar15 =
                    (Minimap*)
                        std::unique_ptr<social::FriendChatChannel, std::default_delete<social::FriendChatChannel>>::
                        operator->(
                            (unique_ptr<social::FriendChatChannel, std::default_delete<social::FriendChatChannel>>*)
                                puVar24);
                iVar6 = pMVar15->GetLevel();
                if (iVar5 < iVar6) {
                    pPVar20 =
                        (PlayerRegistry<social::FriendChatUser>*)
                            std::unique_ptr<social::FriendChatChannel, std::default_delete<social::FriendChatChannel>>::
                            operator->(
                                (unique_ptr<social::FriendChatChannel, std::default_delete<social::FriendChatChannel>>*)
                                    puVar24);
                    pFVar16 = (FriendChatUser*)pPVar20->GetPlayerBySlot(iVar5);
                    cVar2 = pFVar16->IsIgnore();
                    goto LAB_10015fefc;
                }
            }
        LAB_10015ff24:
            uVar21 = (ulong) * (int*)(param_1 + 104092);
            *(int*)(param_1 + 104092) = *(int*)(param_1 + 104092) + 1;
        LAB_10015ff38:
            puVar17 = (undefined4*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), uVar21);
            *puVar17 = 0;
            break;
        case 3628:
            lVar18 = std::unique_ptr<FriendSystem, std::default_delete<FriendSystem>>::operator->(
                (unique_ptr<FriendSystem, std::default_delete<FriendSystem>>*)&field_52768);
            ((lVar18 + 8))->ResetSortComparator();
            break;
        case 3629:
            uVar21 = (long)*(int*)(param_1 + 104092) - 1;
            *(int*)(param_1 + 104092) = (int)uVar21;
            piVar19 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), uVar21);
            local_31 = *piVar19 == 1;
            lVar18 = std::unique_ptr<FriendSystem, std::default_delete<FriendSystem>>::operator->(
                (unique_ptr<FriendSystem, std::default_delete<FriendSystem>>*)&field_52768);
            std::make_unique<social::PlayerDataLegacyComparator<social::FriendData>, bool&>((bool*)local_58);
            std::unique_ptr<social::PlayerDataComparator<social::FriendData>,
                            std::default_delete<social::PlayerDataComparator<social::FriendData>>>::
                unique_ptr<social::PlayerDataLegacyComparator<social::FriendData>,
                           std::default_delete<social::PlayerDataLegacyComparator<social::FriendData>>, void, void>(
                    (unique_ptr<social::PlayerDataComparator<social::FriendData>,
                                std::default_delete<social::PlayerDataComparator<social::FriendData>>>*)&local_98,
                    (unique_ptr*)local_58);
            ((lVar18 + 8))->AddSortComparator((unique_ptr*)&local_98);
            local_98.~unique_ptr();
            local_58->~unique_ptr();
            break;
        case 3630:
            uVar21 = (long)*(int*)(param_1 + 104092) - 1;
            *(int*)(param_1 + 104092) = (int)uVar21;
            piVar19 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), uVar21);
            local_31 = *piVar19 == 1;
            lVar18 = std::unique_ptr<FriendSystem, std::default_delete<FriendSystem>>::operator->(
                (unique_ptr<FriendSystem, std::default_delete<FriendSystem>>*)&field_52768);
            std::make_unique<social::PlayerDataNameComparator<social::FriendData>, bool&>((bool*)local_58);
            std::unique_ptr<social::PlayerDataComparator<social::FriendData>,
                            std::default_delete<social::PlayerDataComparator<social::FriendData>>>::
                unique_ptr<social::PlayerDataNameComparator<social::FriendData>,
                           std::default_delete<social::PlayerDataNameComparator<social::FriendData>>, void, void>(
                    (unique_ptr<social::PlayerDataComparator<social::FriendData>,
                                std::default_delete<social::PlayerDataComparator<social::FriendData>>>*)&local_98,
                    (unique_ptr*)local_58);
            ((lVar18 + 8))->AddSortComparator((unique_ptr*)&local_98);
            local_98.~unique_ptr();
            local_58->~unique_ptr();
            break;
        case 3631:
            uVar21 = (long)*(int*)(param_1 + 104092) - 1;
            *(int*)(param_1 + 104092) = (int)uVar21;
            piVar19 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), uVar21);
            local_31 = *piVar19 == 1;
            lVar18 = std::unique_ptr<FriendSystem, std::default_delete<FriendSystem>>::operator->(
                (unique_ptr<FriendSystem, std::default_delete<FriendSystem>>*)&field_52768);
            std::make_unique<social::OnlinePlayerDataWorldComparator<social::FriendData>, bool&>((bool*)local_58);
            std::unique_ptr<social::PlayerDataComparator<social::FriendData>,
                            std::default_delete<social::PlayerDataComparator<social::FriendData>>>::
                unique_ptr<social::OnlinePlayerDataWorldComparator<social::FriendData>,
                           std::default_delete<social::OnlinePlayerDataWorldComparator<social::FriendData>>, void,
                           void>(
                    (unique_ptr<social::PlayerDataComparator<social::FriendData>,
                                std::default_delete<social::PlayerDataComparator<social::FriendData>>>*)&local_98,
                    (unique_ptr*)local_58);
            ((lVar18 + 8))->AddSortComparator((unique_ptr*)&local_98);
            local_98.~unique_ptr();
            local_58->~unique_ptr();
            break;
        case 3632:
            uVar21 = (long)*(int*)(param_1 + 104092) - 1;
            *(int*)(param_1 + 104092) = (int)uVar21;
            piVar19 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), uVar21);
            local_31 = *piVar19 == 1;
            lVar18 = std::unique_ptr<FriendSystem, std::default_delete<FriendSystem>>::operator->(
                (unique_ptr<FriendSystem, std::default_delete<FriendSystem>>*)&field_52768);
            std::make_unique<social::OnlinePlayerDataLastWorldChangeComparator<social::FriendData>, bool&>(
                (bool*)local_58);
            std::unique_ptr<social::PlayerDataComparator<social::FriendData>,
                            std::default_delete<social::PlayerDataComparator<social::FriendData>>>::
                unique_ptr<social::OnlinePlayerDataLastWorldChangeComparator<social::FriendData>,
                           std::default_delete<social::OnlinePlayerDataLastWorldChangeComparator<social::FriendData>>,
                           void, void>(
                    (unique_ptr<social::PlayerDataComparator<social::FriendData>,
                                std::default_delete<social::PlayerDataComparator<social::FriendData>>>*)&local_98,
                    (unique_ptr*)local_58);
            ((lVar18 + 8))->AddSortComparator((unique_ptr*)&local_98);
            local_98.~unique_ptr();
            local_58->~unique_ptr();
            break;
        case 3633:
            uVar21 = (long)*(int*)(param_1 + 104092) - 1;
            *(int*)(param_1 + 104092) = (int)uVar21;
            piVar19 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), uVar21);
            local_31 = *piVar19 == 1;
            lVar18 = std::unique_ptr<FriendSystem, std::default_delete<FriendSystem>>::operator->(
                (unique_ptr<FriendSystem, std::default_delete<FriendSystem>>*)&field_52768);
            std::make_unique<social::OnlinePlayerDataOnlineComparator<social::FriendData>, bool&>((bool*)local_58);
            std::unique_ptr<social::PlayerDataComparator<social::FriendData>,
                            std::default_delete<social::PlayerDataComparator<social::FriendData>>>::
                unique_ptr<social::OnlinePlayerDataOnlineComparator<social::FriendData>,
                           std::default_delete<social::OnlinePlayerDataOnlineComparator<social::FriendData>>, void,
                           void>(
                    (unique_ptr<social::PlayerDataComparator<social::FriendData>,
                                std::default_delete<social::PlayerDataComparator<social::FriendData>>>*)&local_98,
                    (unique_ptr*)local_58);
            ((lVar18 + 8))->AddSortComparator((unique_ptr*)&local_98);
            local_98.~unique_ptr();
            local_58->~unique_ptr();
            break;
        case 3634:
            uVar21 = (long)*(int*)(param_1 + 104092) - 1;
            *(int*)(param_1 + 104092) = (int)uVar21;
            piVar19 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), uVar21);
            local_31 = *piVar19 == 1;
            lVar18 = std::unique_ptr<FriendSystem, std::default_delete<FriendSystem>>::operator->(
                (unique_ptr<FriendSystem, std::default_delete<FriendSystem>>*)&field_52768);
            std::make_unique<social::OnlinePlayerDataOnlineNameComparator<social::FriendData>, bool&>((bool*)local_58);
            std::unique_ptr<social::PlayerDataComparator<social::FriendData>,
                            std::default_delete<social::PlayerDataComparator<social::FriendData>>>::
                unique_ptr<social::OnlinePlayerDataOnlineNameComparator<social::FriendData>,
                           std::default_delete<social::OnlinePlayerDataOnlineNameComparator<social::FriendData>>, void,
                           void>(
                    (unique_ptr<social::PlayerDataComparator<social::FriendData>,
                                std::default_delete<social::PlayerDataComparator<social::FriendData>>>*)&local_98,
                    (unique_ptr*)local_58);
            ((lVar18 + 8))->AddSortComparator((unique_ptr*)&local_98);
            local_98.~unique_ptr();
            local_58->~unique_ptr();
            break;
        case 3635:
            uVar21 = (long)*(int*)(param_1 + 104092) - 1;
            *(int*)(param_1 + 104092) = (int)uVar21;
            piVar19 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), uVar21);
            local_31 = *piVar19 == 1;
            lVar18 = std::unique_ptr<FriendSystem, std::default_delete<FriendSystem>>::operator->(
                (unique_ptr<FriendSystem, std::default_delete<FriendSystem>>*)&field_52768);
            std::make_unique<social::OnlinePlayerDataOnlineLastWorldChangeComparator<social::FriendData>, bool&>(
                (bool*)local_58);
            std::unique_ptr<social::PlayerDataComparator<social::FriendData>,
                            std::default_delete<social::PlayerDataComparator<social::FriendData>>>::
                unique_ptr<
                    social::OnlinePlayerDataOnlineLastWorldChangeComparator<social::FriendData>,
                    std::default_delete<social::OnlinePlayerDataOnlineLastWorldChangeComparator<social::FriendData>>,
                    void, void>(
                    (unique_ptr<social::PlayerDataComparator<social::FriendData>,
                                std::default_delete<social::PlayerDataComparator<social::FriendData>>>*)&local_98,
                    (unique_ptr*)local_58);
            ((lVar18 + 8))->AddSortComparator((unique_ptr*)&local_98);
            local_98.~unique_ptr();
            local_58->~unique_ptr();
            break;
        case 3636:
            uVar21 = (long)*(int*)(param_1 + 104092) - 1;
            *(int*)(param_1 + 104092) = (int)uVar21;
            piVar19 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), uVar21);
            local_31 = *piVar19 == 1;
            lVar18 = std::unique_ptr<FriendSystem, std::default_delete<FriendSystem>>::operator->(
                (unique_ptr<FriendSystem, std::default_delete<FriendSystem>>*)&field_52768);
            std::make_unique<social::OnlinePlayerDataSameWorldComparator<social::FriendData>, bool&>((bool*)local_58);
            std::unique_ptr<social::PlayerDataComparator<social::FriendData>,
                            std::default_delete<social::PlayerDataComparator<social::FriendData>>>::
                unique_ptr<social::OnlinePlayerDataSameWorldComparator<social::FriendData>,
                           std::default_delete<social::OnlinePlayerDataSameWorldComparator<social::FriendData>>, void,
                           void>(
                    (unique_ptr<social::PlayerDataComparator<social::FriendData>,
                                std::default_delete<social::PlayerDataComparator<social::FriendData>>>*)&local_98,
                    (unique_ptr*)local_58);
            ((lVar18 + 8))->AddSortComparator((unique_ptr*)&local_98);
            local_98.~unique_ptr();
            local_58->~unique_ptr();
            break;
        case 3637:
            uVar21 = (long)*(int*)(param_1 + 104092) - 1;
            *(int*)(param_1 + 104092) = (int)uVar21;
            piVar19 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), uVar21);
            local_31 = *piVar19 == 1;
            lVar18 = std::unique_ptr<FriendSystem, std::default_delete<FriendSystem>>::operator->(
                (unique_ptr<FriendSystem, std::default_delete<FriendSystem>>*)&field_52768);
            std::make_unique<social::OnlinePlayerDataSameWorldNameComparator<social::FriendData>, bool&>(
                (bool*)local_58);
            std::unique_ptr<social::PlayerDataComparator<social::FriendData>,
                            std::default_delete<social::PlayerDataComparator<social::FriendData>>>::
                unique_ptr<social::OnlinePlayerDataSameWorldNameComparator<social::FriendData>,
                           std::default_delete<social::OnlinePlayerDataSameWorldNameComparator<social::FriendData>>,
                           void, void>(
                    (unique_ptr<social::PlayerDataComparator<social::FriendData>,
                                std::default_delete<social::PlayerDataComparator<social::FriendData>>>*)&local_98,
                    (unique_ptr*)local_58);
            ((lVar18 + 8))->AddSortComparator((unique_ptr*)&local_98);
            local_98.~unique_ptr();
            local_58->~unique_ptr();
            break;
        case 3638:
            uVar21 = (long)*(int*)(param_1 + 104092) - 1;
            *(int*)(param_1 + 104092) = (int)uVar21;
            piVar19 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), uVar21);
            local_31 = *piVar19 == 1;
            lVar18 = std::unique_ptr<FriendSystem, std::default_delete<FriendSystem>>::operator->(
                (unique_ptr<FriendSystem, std::default_delete<FriendSystem>>*)&field_52768);
            std::make_unique<social::OnlinePlayerDataSameWorldLastWorldChangeComparator<social::FriendData>, bool&>(
                (bool*)local_58);
            std::unique_ptr<social::PlayerDataComparator<social::FriendData>,
                            std::default_delete<social::PlayerDataComparator<social::FriendData>>>::
                unique_ptr<
                    social::OnlinePlayerDataSameWorldLastWorldChangeComparator<social::FriendData>,
                    std::default_delete<social::OnlinePlayerDataSameWorldLastWorldChangeComparator<social::FriendData>>,
                    void, void>(
                    (unique_ptr<social::PlayerDataComparator<social::FriendData>,
                                std::default_delete<social::PlayerDataComparator<social::FriendData>>>*)&local_98,
                    (unique_ptr*)local_58);
            ((lVar18 + 8))->AddSortComparator((unique_ptr*)&local_98);
            local_98.~unique_ptr();
            local_58->~unique_ptr();
            break;
        case 3639:
            lVar18 = std::unique_ptr<FriendSystem, std::default_delete<FriendSystem>>::operator->(
                (unique_ptr<FriendSystem, std::default_delete<FriendSystem>>*)&field_52768);
            ((lVar18 + 8))->Sort();
            break;
        case 3640:
            lVar18 = std::unique_ptr<FriendSystem, std::default_delete<FriendSystem>>::operator->(
                (unique_ptr<FriendSystem, std::default_delete<FriendSystem>>*)&field_52768);
            ((lVar18 + 208))->ResetSortComparator();
            break;
        case 3641:
            uVar21 = (long)*(int*)(param_1 + 104092) - 1;
            *(int*)(param_1 + 104092) = (int)uVar21;
            piVar19 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), uVar21);
            local_31 = *piVar19 == 1;
            lVar18 = std::unique_ptr<FriendSystem, std::default_delete<FriendSystem>>::operator->(
                (unique_ptr<FriendSystem, std::default_delete<FriendSystem>>*)&field_52768);
            std::make_unique<social::PlayerDataLegacyComparator<social::IgnoreData>, bool&>((bool*)local_58);
            std::unique_ptr<social::PlayerDataComparator<social::IgnoreData>,
                            std::default_delete<social::PlayerDataComparator<social::IgnoreData>>>::
                unique_ptr<social::PlayerDataLegacyComparator<social::IgnoreData>,
                           std::default_delete<social::PlayerDataLegacyComparator<social::IgnoreData>>, void, void>(
                    (unique_ptr<social::PlayerDataComparator<social::IgnoreData>,
                                std::default_delete<social::PlayerDataComparator<social::IgnoreData>>>*)&local_98,
                    (unique_ptr*)local_58);
            ((lVar18 + 208))->AddSortComparator((unique_ptr*)&local_98);
            local_98.~unique_ptr();
            local_58->~unique_ptr();
            break;
        case 3642:
            uVar21 = (long)*(int*)(param_1 + 104092) - 1;
            *(int*)(param_1 + 104092) = (int)uVar21;
            piVar19 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), uVar21);
            local_31 = *piVar19 == 1;
            lVar18 = std::unique_ptr<FriendSystem, std::default_delete<FriendSystem>>::operator->(
                (unique_ptr<FriendSystem, std::default_delete<FriendSystem>>*)&field_52768);
            std::make_unique<social::PlayerDataNameComparator<social::IgnoreData>, bool&>((bool*)local_58);
            std::unique_ptr<social::PlayerDataComparator<social::IgnoreData>,
                            std::default_delete<social::PlayerDataComparator<social::IgnoreData>>>::
                unique_ptr<social::PlayerDataNameComparator<social::IgnoreData>,
                           std::default_delete<social::PlayerDataNameComparator<social::IgnoreData>>, void, void>(
                    (unique_ptr<social::PlayerDataComparator<social::IgnoreData>,
                                std::default_delete<social::PlayerDataComparator<social::IgnoreData>>>*)&local_98,
                    (unique_ptr*)local_58);
            ((lVar18 + 208))->AddSortComparator((unique_ptr*)&local_98);
            local_98.~unique_ptr();
            local_58->~unique_ptr();
            break;
        case 3643:
            lVar18 = std::unique_ptr<FriendSystem, std::default_delete<FriendSystem>>::operator->(
                (unique_ptr<FriendSystem, std::default_delete<FriendSystem>>*)&field_52768);
            ((lVar18 + 208))->Sort();
            break;
        case 3644:
            bVar3 = std::operator!=((unique_ptr*)&field_52544, p_Var22);
            if (!bVar3) {
                return 1;
            }
            pPVar20 =
                (PlayerRegistry<social::FriendChatUser>*)std::
                    unique_ptr<social::FriendChatChannel, std::default_delete<social::FriendChatChannel>>::operator->(
                        (unique_ptr<social::FriendChatChannel,
                                    std::default_delete<social::FriendChatChannel>>*)&field_52544);
            pPVar20->ResetSortComparator();
            return 1;
        case 3645:
            p_Var22 = (_func_decltype_nullptr*)((long)*(int*)(param_1 + 104092) - 1);
            *(int*)(param_1 + 104092) = (int)p_Var22;
            piVar19 =
                (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), (ulong)p_Var22);
            local_31 = *piVar19 == 1;
            bVar3 = std::operator!=((unique_ptr*)&field_52544, p_Var22);
            if (bVar3) {
                pPVar20 =
                    (PlayerRegistry<social::FriendChatUser>*)
                        std::unique_ptr<social::FriendChatChannel, std::default_delete<social::FriendChatChannel>>::
                        operator->((unique_ptr<social::FriendChatChannel,
                                               std::default_delete<social::FriendChatChannel>>*)&field_52544);
                std::make_unique<social::PlayerDataLegacyComparator<social::FriendChatUser>, bool&>((bool*)local_58);
                std::unique_ptr<social::PlayerDataComparator<social::FriendChatUser>,
                                std::default_delete<social::PlayerDataComparator<social::FriendChatUser>>>::
                    unique_ptr<social::PlayerDataLegacyComparator<social::FriendChatUser>,
                               std::default_delete<social::PlayerDataLegacyComparator<social::FriendChatUser>>, void,
                               void>(
                        (unique_ptr<
                            social::PlayerDataComparator<social::FriendChatUser>,
                            std::default_delete<social::PlayerDataComparator<social::FriendChatUser>>>*)&local_98,
                        (unique_ptr*)local_58);
                pPVar20->AddSortComparator((unique_ptr*)&local_98);
                local_98.~unique_ptr();
                local_58->~unique_ptr();
            }
            break;
        case 3646:
            p_Var22 = (_func_decltype_nullptr*)((long)*(int*)(param_1 + 104092) - 1);
            *(int*)(param_1 + 104092) = (int)p_Var22;
            piVar19 =
                (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), (ulong)p_Var22);
            local_31 = *piVar19 == 1;
            bVar3 = std::operator!=((unique_ptr*)&field_52544, p_Var22);
            if (bVar3) {
                pPVar20 =
                    (PlayerRegistry<social::FriendChatUser>*)
                        std::unique_ptr<social::FriendChatChannel, std::default_delete<social::FriendChatChannel>>::
                        operator->((unique_ptr<social::FriendChatChannel,
                                               std::default_delete<social::FriendChatChannel>>*)&field_52544);
                std::make_unique<social::PlayerDataNameComparator<social::FriendChatUser>, bool&>((bool*)local_58);
                std::unique_ptr<social::PlayerDataComparator<social::FriendChatUser>,
                                std::default_delete<social::PlayerDataComparator<social::FriendChatUser>>>::
                    unique_ptr<social::PlayerDataNameComparator<social::FriendChatUser>,
                               std::default_delete<social::PlayerDataNameComparator<social::FriendChatUser>>, void,
                               void>(
                        (unique_ptr<
                            social::PlayerDataComparator<social::FriendChatUser>,
                            std::default_delete<social::PlayerDataComparator<social::FriendChatUser>>>*)&local_98,
                        (unique_ptr*)local_58);
                pPVar20->AddSortComparator((unique_ptr*)&local_98);
                local_98.~unique_ptr();
                local_58->~unique_ptr();
            }
            break;
        case 3647:
            p_Var22 = (_func_decltype_nullptr*)((long)*(int*)(param_1 + 104092) - 1);
            *(int*)(param_1 + 104092) = (int)p_Var22;
            piVar19 =
                (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), (ulong)p_Var22);
            local_31 = *piVar19 == 1;
            bVar3 = std::operator!=((unique_ptr*)&field_52544, p_Var22);
            if (bVar3) {
                pPVar20 =
                    (PlayerRegistry<social::FriendChatUser>*)
                        std::unique_ptr<social::FriendChatChannel, std::default_delete<social::FriendChatChannel>>::
                        operator->((unique_ptr<social::FriendChatChannel,
                                               std::default_delete<social::FriendChatChannel>>*)&field_52544);
                std::make_unique<social::OnlinePlayerDataWorldComparator<social::FriendChatUser>, bool&>(
                    (bool*)local_58);
                std::unique_ptr<social::PlayerDataComparator<social::FriendChatUser>,
                                std::default_delete<social::PlayerDataComparator<social::FriendChatUser>>>::
                    unique_ptr<social::OnlinePlayerDataWorldComparator<social::FriendChatUser>,
                               std::default_delete<social::OnlinePlayerDataWorldComparator<social::FriendChatUser>>,
                               void, void>(
                        (unique_ptr<
                            social::PlayerDataComparator<social::FriendChatUser>,
                            std::default_delete<social::PlayerDataComparator<social::FriendChatUser>>>*)&local_98,
                        (unique_ptr*)local_58);
                pPVar20->AddSortComparator((unique_ptr*)&local_98);
                local_98.~unique_ptr();
                local_58->~unique_ptr();
            }
            break;
        case 3648:
            p_Var22 = (_func_decltype_nullptr*)((long)*(int*)(param_1 + 104092) - 1);
            *(int*)(param_1 + 104092) = (int)p_Var22;
            piVar19 =
                (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), (ulong)p_Var22);
            local_31 = *piVar19 == 1;
            bVar3 = std::operator!=((unique_ptr*)&field_52544, p_Var22);
            if (bVar3) {
                pPVar20 =
                    (PlayerRegistry<social::FriendChatUser>*)
                        std::unique_ptr<social::FriendChatChannel, std::default_delete<social::FriendChatChannel>>::
                        operator->((unique_ptr<social::FriendChatChannel,
                                               std::default_delete<social::FriendChatChannel>>*)&field_52544);
                std::make_unique<social::OnlinePlayerDataLastWorldChangeComparator<social::FriendChatUser>, bool&>(
                    (bool*)local_58);
                std::unique_ptr<social::PlayerDataComparator<social::FriendChatUser>,
                                std::default_delete<social::PlayerDataComparator<social::FriendChatUser>>>::
                    unique_ptr<
                        social::OnlinePlayerDataLastWorldChangeComparator<social::FriendChatUser>,
                        std::default_delete<social::OnlinePlayerDataLastWorldChangeComparator<social::FriendChatUser>>,
                        void, void>(
                        (unique_ptr<
                            social::PlayerDataComparator<social::FriendChatUser>,
                            std::default_delete<social::PlayerDataComparator<social::FriendChatUser>>>*)&local_98,
                        (unique_ptr*)local_58);
                pPVar20->AddSortComparator((unique_ptr*)&local_98);
                local_98.~unique_ptr();
                local_58->~unique_ptr();
            }
            break;
        case 3649:
            p_Var22 = (_func_decltype_nullptr*)((long)*(int*)(param_1 + 104092) - 1);
            *(int*)(param_1 + 104092) = (int)p_Var22;
            piVar19 =
                (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), (ulong)p_Var22);
            local_31 = *piVar19 == 1;
            bVar3 = std::operator!=((unique_ptr*)&field_52544, p_Var22);
            if (bVar3) {
                pPVar20 =
                    (PlayerRegistry<social::FriendChatUser>*)
                        std::unique_ptr<social::FriendChatChannel, std::default_delete<social::FriendChatChannel>>::
                        operator->((unique_ptr<social::FriendChatChannel,
                                               std::default_delete<social::FriendChatChannel>>*)&field_52544);
                std::make_unique<social::OnlinePlayerDataOnlineComparator<social::FriendChatUser>, bool&>(
                    (bool*)local_58);
                std::unique_ptr<social::PlayerDataComparator<social::FriendChatUser>,
                                std::default_delete<social::PlayerDataComparator<social::FriendChatUser>>>::
                    unique_ptr<social::OnlinePlayerDataOnlineComparator<social::FriendChatUser>,
                               std::default_delete<social::OnlinePlayerDataOnlineComparator<social::FriendChatUser>>,
                               void, void>(
                        (unique_ptr<
                            social::PlayerDataComparator<social::FriendChatUser>,
                            std::default_delete<social::PlayerDataComparator<social::FriendChatUser>>>*)&local_98,
                        (unique_ptr*)local_58);
                pPVar20->AddSortComparator((unique_ptr*)&local_98);
                local_98.~unique_ptr();
                local_58->~unique_ptr();
            }
            break;
        case 3650:
            p_Var22 = (_func_decltype_nullptr*)((long)*(int*)(param_1 + 104092) - 1);
            *(int*)(param_1 + 104092) = (int)p_Var22;
            piVar19 =
                (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), (ulong)p_Var22);
            local_31 = *piVar19 == 1;
            bVar3 = std::operator!=((unique_ptr*)&field_52544, p_Var22);
            if (bVar3) {
                pPVar20 =
                    (PlayerRegistry<social::FriendChatUser>*)
                        std::unique_ptr<social::FriendChatChannel, std::default_delete<social::FriendChatChannel>>::
                        operator->((unique_ptr<social::FriendChatChannel,
                                               std::default_delete<social::FriendChatChannel>>*)&field_52544);
                std::make_unique<social::OnlinePlayerDataOnlineNameComparator<social::FriendChatUser>, bool&>(
                    (bool*)local_58);
                std::unique_ptr<social::PlayerDataComparator<social::FriendChatUser>,
                                std::default_delete<social::PlayerDataComparator<social::FriendChatUser>>>::
                    unique_ptr<
                        social::OnlinePlayerDataOnlineNameComparator<social::FriendChatUser>,
                        std::default_delete<social::OnlinePlayerDataOnlineNameComparator<social::FriendChatUser>>, void,
                        void>((unique_ptr<
                                  social::PlayerDataComparator<social::FriendChatUser>,
                                  std::default_delete<social::PlayerDataComparator<social::FriendChatUser>>>*)&local_98,
                              (unique_ptr*)local_58);
                pPVar20->AddSortComparator((unique_ptr*)&local_98);
                local_98.~unique_ptr();
                local_58->~unique_ptr();
            }
            break;
        case 3651:
            p_Var22 = (_func_decltype_nullptr*)((long)*(int*)(param_1 + 104092) - 1);
            *(int*)(param_1 + 104092) = (int)p_Var22;
            piVar19 =
                (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), (ulong)p_Var22);
            local_31 = *piVar19 == 1;
            bVar3 = std::operator!=((unique_ptr*)&field_52544, p_Var22);
            if (bVar3) {
                pPVar20 =
                    (PlayerRegistry<social::FriendChatUser>*)
                        std::unique_ptr<social::FriendChatChannel, std::default_delete<social::FriendChatChannel>>::
                        operator->((unique_ptr<social::FriendChatChannel,
                                               std::default_delete<social::FriendChatChannel>>*)&field_52544);
                std::make_unique<social::OnlinePlayerDataOnlineLastWorldChangeComparator<social::FriendChatUser>,
                                 bool&>((bool*)local_58);
                std::unique_ptr<social::PlayerDataComparator<social::FriendChatUser>,
                                std::default_delete<social::PlayerDataComparator<social::FriendChatUser>>>::
                    unique_ptr<social::OnlinePlayerDataOnlineLastWorldChangeComparator<social::FriendChatUser>,
                               std::default_delete<
                                   social::OnlinePlayerDataOnlineLastWorldChangeComparator<social::FriendChatUser>>,
                               void, void>(
                        (unique_ptr<
                            social::PlayerDataComparator<social::FriendChatUser>,
                            std::default_delete<social::PlayerDataComparator<social::FriendChatUser>>>*)&local_98,
                        (unique_ptr*)local_58);
                pPVar20->AddSortComparator((unique_ptr*)&local_98);
                local_98.~unique_ptr();
                local_58->~unique_ptr();
            }
            break;
        case 3652:
            p_Var22 = (_func_decltype_nullptr*)((long)*(int*)(param_1 + 104092) - 1);
            *(int*)(param_1 + 104092) = (int)p_Var22;
            piVar19 =
                (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), (ulong)p_Var22);
            local_31 = *piVar19 == 1;
            bVar3 = std::operator!=((unique_ptr*)&field_52544, p_Var22);
            if (bVar3) {
                pPVar20 =
                    (PlayerRegistry<social::FriendChatUser>*)
                        std::unique_ptr<social::FriendChatChannel, std::default_delete<social::FriendChatChannel>>::
                        operator->((unique_ptr<social::FriendChatChannel,
                                               std::default_delete<social::FriendChatChannel>>*)&field_52544);
                std::make_unique<social::OnlinePlayerDataSameWorldComparator<social::FriendChatUser>, bool&>(
                    (bool*)local_58);
                std::unique_ptr<social::PlayerDataComparator<social::FriendChatUser>,
                                std::default_delete<social::PlayerDataComparator<social::FriendChatUser>>>::
                    unique_ptr<social::OnlinePlayerDataSameWorldComparator<social::FriendChatUser>,
                               std::default_delete<social::OnlinePlayerDataSameWorldComparator<social::FriendChatUser>>,
                               void, void>(
                        (unique_ptr<
                            social::PlayerDataComparator<social::FriendChatUser>,
                            std::default_delete<social::PlayerDataComparator<social::FriendChatUser>>>*)&local_98,
                        (unique_ptr*)local_58);
                pPVar20->AddSortComparator((unique_ptr*)&local_98);
                local_98.~unique_ptr();
                local_58->~unique_ptr();
            }
            break;
        case 3653:
            p_Var22 = (_func_decltype_nullptr*)((long)*(int*)(param_1 + 104092) - 1);
            *(int*)(param_1 + 104092) = (int)p_Var22;
            piVar19 =
                (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), (ulong)p_Var22);
            local_31 = *piVar19 == 1;
            bVar3 = std::operator!=((unique_ptr*)&field_52544, p_Var22);
            if (bVar3) {
                pPVar20 =
                    (PlayerRegistry<social::FriendChatUser>*)
                        std::unique_ptr<social::FriendChatChannel, std::default_delete<social::FriendChatChannel>>::
                        operator->((unique_ptr<social::FriendChatChannel,
                                               std::default_delete<social::FriendChatChannel>>*)&field_52544);
                std::make_unique<social::OnlinePlayerDataSameWorldNameComparator<social::FriendChatUser>, bool&>(
                    (bool*)local_58);
                std::unique_ptr<social::PlayerDataComparator<social::FriendChatUser>,
                                std::default_delete<social::PlayerDataComparator<social::FriendChatUser>>>::
                    unique_ptr<
                        social::OnlinePlayerDataSameWorldNameComparator<social::FriendChatUser>,
                        std::default_delete<social::OnlinePlayerDataSameWorldNameComparator<social::FriendChatUser>>,
                        void, void>(
                        (unique_ptr<
                            social::PlayerDataComparator<social::FriendChatUser>,
                            std::default_delete<social::PlayerDataComparator<social::FriendChatUser>>>*)&local_98,
                        (unique_ptr*)local_58);
                pPVar20->AddSortComparator((unique_ptr*)&local_98);
                local_98.~unique_ptr();
                local_58->~unique_ptr();
            }
            break;
        case 3654:
            p_Var22 = (_func_decltype_nullptr*)((long)*(int*)(param_1 + 104092) - 1);
            *(int*)(param_1 + 104092) = (int)p_Var22;
            piVar19 =
                (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), (ulong)p_Var22);
            local_31 = *piVar19 == 1;
            bVar3 = std::operator!=((unique_ptr*)&field_52544, p_Var22);
            if (bVar3) {
                pPVar20 =
                    (PlayerRegistry<social::FriendChatUser>*)
                        std::unique_ptr<social::FriendChatChannel, std::default_delete<social::FriendChatChannel>>::
                        operator->((unique_ptr<social::FriendChatChannel,
                                               std::default_delete<social::FriendChatChannel>>*)&field_52544);
                std::make_unique<social::OnlinePlayerDataSameWorldLastWorldChangeComparator<social::FriendChatUser>,
                                 bool&>((bool*)local_58);
                std::unique_ptr<social::PlayerDataComparator<social::FriendChatUser>,
                                std::default_delete<social::PlayerDataComparator<social::FriendChatUser>>>::
                    unique_ptr<social::OnlinePlayerDataSameWorldLastWorldChangeComparator<social::FriendChatUser>,
                               std::default_delete<
                                   social::OnlinePlayerDataSameWorldLastWorldChangeComparator<social::FriendChatUser>>,
                               void, void>(
                        (unique_ptr<
                            social::PlayerDataComparator<social::FriendChatUser>,
                            std::default_delete<social::PlayerDataComparator<social::FriendChatUser>>>*)&local_98,
                        (unique_ptr*)local_58);
                pPVar20->AddSortComparator((unique_ptr*)&local_98);
                local_98.~unique_ptr();
                local_58->~unique_ptr();
            }
            break;
        case 3655:
            bVar3 = std::operator!=((unique_ptr*)&field_52544, p_Var22);
            if (!bVar3) {
                return 1;
            }
            pPVar20 =
                (PlayerRegistry<social::FriendChatUser>*)std::
                    unique_ptr<social::FriendChatChannel, std::default_delete<social::FriendChatChannel>>::operator->(
                        (unique_ptr<social::FriendChatChannel,
                                    std::default_delete<social::FriendChatChannel>>*)&field_52544);
            pPVar20->Sort();
            return 1;
        case 3656:
            uVar21 = (long)*(int*)(param_1 + 104092) - 1;
            *(int*)(param_1 + 104092) = (int)uVar21;
            piVar19 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), uVar21);
            local_31 = *piVar19 == 1;
            lVar18 = std::unique_ptr<FriendSystem, std::default_delete<FriendSystem>>::operator->(
                (unique_ptr<FriendSystem, std::default_delete<FriendSystem>>*)&field_52768);
            std::make_unique<social::OnlinePlayerDataRankComparator<social::FriendData>, bool&>((bool*)local_58);
            std::unique_ptr<social::PlayerDataComparator<social::FriendData>,
                            std::default_delete<social::PlayerDataComparator<social::FriendData>>>::
                unique_ptr<social::OnlinePlayerDataRankComparator<social::FriendData>,
                           std::default_delete<social::OnlinePlayerDataRankComparator<social::FriendData>>, void, void>(
                    (unique_ptr<social::PlayerDataComparator<social::FriendData>,
                                std::default_delete<social::PlayerDataComparator<social::FriendData>>>*)&local_98,
                    (unique_ptr*)local_58);
            ((lVar18 + 8))->AddSortComparator((unique_ptr*)&local_98);
            local_98.~unique_ptr();
            local_58->~unique_ptr();
            break;
        case 3657:
            p_Var22 = (_func_decltype_nullptr*)((long)*(int*)(param_1 + 104092) - 1);
            *(int*)(param_1 + 104092) = (int)p_Var22;
            piVar19 =
                (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), (ulong)p_Var22);
            local_31 = *piVar19 == 1;
            bVar3 = std::operator!=((unique_ptr*)&field_52544, p_Var22);
            if (bVar3) {
                pPVar20 =
                    (PlayerRegistry<social::FriendChatUser>*)
                        std::unique_ptr<social::FriendChatChannel, std::default_delete<social::FriendChatChannel>>::
                        operator->((unique_ptr<social::FriendChatChannel,
                                               std::default_delete<social::FriendChatChannel>>*)&field_52544);
                std::make_unique<social::OnlinePlayerDataRankComparator<social::FriendChatUser>, bool&>(
                    (bool*)local_58);
                std::unique_ptr<social::PlayerDataComparator<social::FriendChatUser>,
                                std::default_delete<social::PlayerDataComparator<social::FriendChatUser>>>::
                    unique_ptr<social::OnlinePlayerDataRankComparator<social::FriendChatUser>,
                               std::default_delete<social::OnlinePlayerDataRankComparator<social::FriendChatUser>>,
                               void, void>(
                        (unique_ptr<
                            social::PlayerDataComparator<social::FriendChatUser>,
                            std::default_delete<social::PlayerDataComparator<social::FriendChatUser>>>*)&local_98,
                        (unique_ptr*)local_58);
                pPVar20->AddSortComparator((unique_ptr*)&local_98);
                local_98.~unique_ptr();
                local_58->~unique_ptr();
            }
        }
        uVar23 = 1;
    switchD_10015f391_caseD_e1a:
        return uVar23;
    }

} // namespace jag::oldscape
