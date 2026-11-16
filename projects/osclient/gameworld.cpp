// projects/osclient/gameworld.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: osclient

#include "gameworld.h"

namespace jag::oldscape {
    // 0x100f36fc4
    int32_t GameWorld::m_dirs[4] = {1, 1, 1, 1};

    // 0x100f36fd4
    int32_t GameWorld::m_ordering[4] = {0, 1, 2, 3};

    // 0x100f8a8c8
    Array<std::unique_ptr<GameWorld>> GameWorld::m_list;

    // 0x100f8a8e0
    int32_t GameWorld::m_num;

    // 0x100f8a8e4
    int32_t GameWorld::m_next;

    // 0x100f8a8e8
    unique_ptr<http::HTTPRequest> GameWorld::m_gameworldListDownloadRequest;

    // 0x1000daca0
    uint64_t GameWorld::ListFetch() {
        uint8_t bVar2;
        unsigned short uVar3;
        short sVar4;
        int iVar5;
        HTTPRequest* pHVar7;
        Client* pCVar8;
        RT7Core* this_00;
        unique_ptr<GameWorld>* puVar9;
        unsigned int* puVar10;
        void* in_RSI;
        unsigned long arg1_00;
        WindowSavedPosition local_70;
        ReturnValue local_50;

        bool bVar1 = &m_gameworldListDownloadRequest == in_RSI;
        if (bVar1) {
            pHVar7 = (HTTPRequest*)operator new(664);
            new (pHVar7) http::HTTPRequest(0);
        } else {
            pHVar7 = (HTTPRequest*)m_gameworldListDownloadRequest.operator->();
            iVar5 = pHVar7->GetState();
            if (iVar5 != 2) {
                if (iVar5 != 1) {
                    if (iVar5 == 0) {
                        pHVar7 = (HTTPRequest*)m_gameworldListDownloadRequest.operator->();
                        pCVar8 = Client::Instance();
                        pHVar7->Get(&pCVar8->field_54280);
                    }
                    return 0;
                }
                this_00 = (RT7Core*)m_gameworldListDownloadRequest.operator->();
                local_70.PacketT((Array<unsigned char>*)this_00->GetMSAASampleCount());
                local_70.g4();
                uVar3 = local_70.g2();
                m_num = (unsigned int)uVar3;
                local_50 = Array<std::unique_ptr<GameWorld>>((unsigned long)uVar3);
                m_list = local_50;
                if (0 < (int)m_num) {
                    arg1_00 = 0;
                    do {
                        local_50 = std::make_unique<GameWorld>();
                        puVar9 = &m_list[arg1_00];
                        *puVar9 = local_50;
                        puVar9 = &m_list[arg1_00];
                        puVar10 = (unsigned int*)puVar9->get();
                        uVar3 = local_70.g2();
                        *puVar10 = (unsigned int)uVar3;
                        puVar10[1] = local_70.g4();
                        bVar1 = (uint8_t)(&local_70);
                        local_50.gStringNoConversion(bVar1);
                        (*((puVar10 + 4))) = &local_50;
                        local_50.gStringNoConversion(bVar1);
                        (*((puVar10 + 12))) = &local_50;
                        bVar2 = local_70.g1();
                        puVar10[20] = (unsigned int)bVar2;
                        sVar4 = local_70.g2s();
                        puVar10[2] = (int)sVar4;
                        puVar10[30] = (unsigned int)arg1_00;
                        arg1_00 = arg1_00 + 1;
                    } while ((long)arg1_00 < (long)(int)m_num);
                }
                iVar5 = m_list.end();
                QuickSort((Array<std::unique_ptr<GameWorld, std::default_delete<GameWorld> _>>*)&m_list, 0, iVar5 - 1,
                          (array<int, _4ul>*)&m_ordering, (array<int, _4ul>*)&m_dirs);
                m_gameworldListDownloadRequest.reset(nullptr);
                return 1;
            }
            (logger::default_logger())
                ->Log(
                    false, 3,
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/gameworld.cpp",
                    352, "GameWorld: worldSwitchPageState http request failed");
            pHVar7 = (HTTPRequest*)operator new(664);
            new (pHVar7) http::HTTPRequest(0);
        }
        m_gameworldListDownloadRequest.reset(pHVar7);
        return 0;
    }

    // 0x1000dafb0
    GameWorld* GameWorld::GetByID(int arg1) {
        GameWorld* in_RAX;
        unique_ptr<GameWorld>* unique_ptr;
        unique_ptr<GameWorld>* puVar2;
        int* piVar3;
        GameWorld* local_38;

        if (m_list.end() != 0) {
            unique_ptr = (unique_ptr<GameWorld>*)m_list.data();
            puVar2 = (unique_ptr<GameWorld>*)m_list.end();
            for (; local_38 = in_RAX, unique_ptr != puVar2; unique_ptr = unique_ptr + 8) {
                piVar3 = (int*)(*unique_ptr).operator->();
                if (*piVar3 == arg1) {
                    local_38 = (GameWorld*)unique_ptr->get();
                    break;
                }
            }
            if (unique_ptr != puVar2) {
                return local_38;
            }
        }
        return nullptr;
    }

    // 0x1001134b0
    bool GameWorld::IsBeta() const {
        return field_6 & 1;
    }

    // 0x10011e590
    void GameWorld::QuickSort(Array<std::unique_ptr<GameWorld>>& gameWorlds, int arg2, int arg3,
                              std::array<int, 4ul>& arg4, std::array<int, 4ul>& arg5) {
        int iVar1;
        uint8_t bVar2;
        int* piVar5;
        long lVar6;
        GameWorld* pGVar7;
        unsigned int* puVar8;
        unsigned long uVar10;
        unsigned int uVar11;
        bool bVar12;
        bool bVar13;

        if (arg3 <= arg2) {
            return;
        }
        unsigned int uVar9 = arg3 + 1;
        unsigned long local_50 = (unsigned long)uVar9;
        unique_ptr<GameWorld>* puVar3 = &gameWorlds[(long)((arg2 + arg3) / 2)];
        unique_ptr<GameWorld, std::default_delete<GameWorld> _>* puVar4 = &gameWorlds[(long)arg2];
        puVar3->swap(*puVar4);
        puVar3 = &gameWorlds[(long)arg2];
        GameWorld* gameWorld = (GameWorld*)**puVar3;
        if ((int)uVar9 < arg2) {
        LAB_10011e9ea:
            QuickSort(gameWorlds, arg2, uVar9, arg4, arg5);
            QuickSort(gameWorlds, uVar9 + 1, arg3, arg4, arg5);
            return;
        }
        unsigned long local_40 = (unsigned long)(arg2 - 1);
        do {
            local_50 = (unsigned long)(int)local_50;
            bVar12 = true;
            do {
                local_50 = local_50 - 1;
                uVar10 = 0;
                do {
                    piVar5 = &arg4[uVar10];
                    iVar1 = *piVar5;
                    if (iVar1 == 1) {
                        puVar3 = &gameWorlds[local_50];
                        lVar6 = (*puVar3).operator->();
                        uVar9 = *(unsigned int*)(lVar6 + 8);
                        uVar11 = gameWorld->field_8;
                        if (uVar9 == 4294967295) {
                            piVar5 = &arg5[uVar10];
                            uVar9 = 2001;
                            if (*piVar5 != 1) {
                                uVar9 = 4294967295;
                            }
                        }
                        if (uVar11 == 4294967295) {
                            piVar5 = &arg5[uVar10];
                            uVar11 = 2001;
                            if (*piVar5 != 1) {
                                uVar11 = 4294967295;
                                if (uVar9 == 4294967295)
                                    goto LAB_10011e75f;
                                goto LAB_10011e7a0;
                            }
                        }
                    LAB_10011e75a:
                        if (uVar9 != uVar11)
                            goto LAB_10011e7a0;
                    LAB_10011e75f:
                        if (uVar10 == 3) {
                            bVar12 = false;
                        }
                        bVar13 = true;
                    } else {
                        if (iVar1 == 3) {
                            puVar3 = &gameWorlds[local_50];
                            pGVar7 = (GameWorld*)(*puVar3).operator->();
                            bVar2 = IsMembers(pGVar7);
                            uVar9 = (unsigned int)bVar2;
                            bVar2 = IsMembers(gameWorld);
                            uVar11 = (unsigned int)bVar2;
                            goto LAB_10011e75a;
                        }
                        if (iVar1 != 2) {
                            puVar3 = &gameWorlds[local_50];
                            puVar8 = (unsigned int*)(*puVar3).operator->();
                            uVar9 = *puVar8;
                            uVar11 = *(unsigned int*)gameWorld;
                            if (uVar9 != uVar11)
                                goto LAB_10011e7a0;
                            goto LAB_10011e75f;
                        }
                        puVar3 = &gameWorlds[local_50];
                        lVar6 = (*puVar3).operator->();
                        uVar9 = *(unsigned int*)(lVar6 + 120);
                        uVar11 = gameWorld->field_120;
                        if (uVar9 == uVar11)
                            goto LAB_10011e75f;
                    LAB_10011e7a0:
                        piVar5 = &arg5[uVar10];
                        bVar13 = false;
                        if ((*piVar5 != 1) || ((int)uVar9 <= (int)uVar11)) {
                            if ((int)uVar11 <= (int)uVar9) {
                                bVar12 = false;
                            }
                            if (*piVar5 != 0) {
                                bVar12 = false;
                            }
                        }
                    }
                } while ((bVar13) && (bVar13 = uVar10 < 3, uVar10 = uVar10 + 1, bVar13));
            } while (bVar12);
            local_40 = (unsigned long)(int)local_40;
            bVar12 = true;
            do {
                local_40 = local_40 + 1;
                uVar10 = 0;
                do {
                    piVar5 = &arg4[uVar10];
                    iVar1 = *piVar5;
                    if (iVar1 == 1) {
                        puVar3 = &gameWorlds[local_40];
                        lVar6 = (*puVar3).operator->();
                        uVar9 = *(unsigned int*)(lVar6 + 8);
                        uVar11 = gameWorld->field_8;
                        if (uVar9 == 4294967295) {
                            piVar5 = &arg5[uVar10];
                            uVar9 = 2001;
                            if (*piVar5 != 1) {
                                uVar9 = 4294967295;
                            }
                        }
                        if (uVar11 == 4294967295) {
                            piVar5 = &arg5[uVar10];
                            uVar11 = 2001;
                            if (*piVar5 != 1) {
                                uVar11 = 4294967295;
                                if (uVar9 == 4294967295)
                                    goto LAB_10011e91f;
                                goto LAB_10011e960;
                            }
                        }
                    LAB_10011e91a:
                        if (uVar9 != uVar11)
                            goto LAB_10011e960;
                    LAB_10011e91f:
                        if (uVar10 == 3) {
                            bVar12 = false;
                        }
                        bVar13 = true;
                    } else {
                        if (iVar1 == 3) {
                            puVar3 = &gameWorlds[local_40];
                            pGVar7 = (GameWorld*)(*puVar3).operator->();
                            bVar2 = IsMembers(pGVar7);
                            uVar9 = (unsigned int)bVar2;
                            bVar2 = IsMembers(gameWorld);
                            uVar11 = (unsigned int)bVar2;
                            goto LAB_10011e91a;
                        }
                        if (iVar1 != 2) {
                            puVar3 = &gameWorlds[local_40];
                            puVar8 = (unsigned int*)(*puVar3).operator->();
                            uVar9 = *puVar8;
                            uVar11 = *(unsigned int*)gameWorld;
                            if (uVar9 != uVar11)
                                goto LAB_10011e960;
                            goto LAB_10011e91f;
                        }
                        puVar3 = &gameWorlds[local_40];
                        lVar6 = (*puVar3).operator->();
                        uVar9 = *(unsigned int*)(lVar6 + 120);
                        uVar11 = gameWorld->field_120;
                        if (uVar9 == uVar11)
                            goto LAB_10011e91f;
                    LAB_10011e960:
                        piVar5 = &arg5[uVar10];
                        bVar13 = false;
                        if ((*piVar5 != 1) || ((int)uVar11 <= (int)uVar9)) {
                            if ((int)uVar9 <= (int)uVar11) {
                                bVar12 = false;
                            }
                            if (*piVar5 != 0) {
                                bVar12 = false;
                            }
                        }
                    }
                } while ((bVar13) && (bVar13 = uVar10 < 3, uVar10 = uVar10 + 1, bVar13));
            } while (bVar12);
            uVar9 = (unsigned int)local_50;
            if ((int)uVar9 <= (int)local_40)
                goto LAB_10011e9ea;
            puVar3 = &gameWorlds[(long)(int)local_40];
            puVar4 = &gameWorlds[(long)(int)uVar9];
            puVar3->swap(*puVar4);
        } while (true);
    }

    // 0x10011eae0
    bool GameWorld::IsMembers() const {
        return field_4 & 1;
    }

    // 0x10011eaf0
    void GameWorld::ListSort(int arg1, bool arg2, int arg3, bool arg4) {
        int iVar1;

        if (m_list.empty() == '\0') {
            iVar1 = m_list.end();
            ListSort(0, iVar1 - 1, arg1, arg2, arg3, arg4);
        }
    }

    // 0x10011eb50
    void GameWorld::ListSort(int arg1, int arg2, int arg3, bool arg4, int arg5, bool arg6) {
        unique_ptr<GameWorld>* puVar2;
        unique_ptr<GameWorld, std::default_delete<GameWorld> _>* puVar3;
        GameWorld* gameWorld2;
        GameWorld* gameWorld1;
        unsigned long arg1_00;
        int iVar4;
        unsigned long arg1_01;

        if (arg1 < arg2) {
            puVar2 = &m_list[(unsigned long)arg2];
            puVar3 = &m_list[(long)((arg2 + arg1) / 2)];
            puVar2->swap(*puVar3);
            puVar2 = &m_list[(unsigned long)arg2];
            gameWorld2 = (GameWorld*)**puVar2;
            arg1_01 = (unsigned long)arg1;
            iVar4 = arg1;
            do {
                puVar2 = &m_list[arg1_01];
                gameWorld1 = (GameWorld*)**puVar2;
                if (CompareTo(gameWorld1, gameWorld2, arg3, arg4, arg5, arg6) < 1) {
                    puVar2 = &m_list[arg1_01];
                    arg1_00 = (unsigned long)iVar4;
                    iVar4 = iVar4 + 1;
                    puVar3 = &m_list[arg1_00];
                    puVar2->swap(*puVar3);
                }
                arg1_01 = arg1_01 + 1;
            } while (arg2 != (int)arg1_01);
            puVar2 = &m_list[(unsigned long)arg2];
            puVar3 = &m_list[(long)iVar4];
            puVar2->swap(*puVar3);
            ListSort(arg1, iVar4 - 1, arg3, arg4, arg5, arg6);
            ListSort(iVar4 + 1, arg2, arg3, arg4, arg5, arg6);
        }
    }

    // 0x10011ecf0
    void GameWorld::ListStart() {
        m_next = 0;
        ListNext();
    }

    // 0x10011ed10
    void GameWorld::ListNext() {
        unique_ptr<GameWorld>* unique_ptr;

        unsigned long arg1 = (unsigned long)m_next;
        if (m_next < m_num) {
            m_next = m_next + 1;
            unique_ptr = &m_list[arg1];
            return unique_ptr->get();
        }
        return 0;
    }

    // 0x10011ed80
    bool GameWorld::IsQuickChat() const {
        return (field_4 & 2) >> 1;
    }

    // 0x10011ed90
    bool GameWorld::IsPVP() const {
        return (field_4 & 4) >> 2;
    }

    // 0x10011eda0
    bool GameWorld::IsLootShare() const {
        return (field_4 & 8) >> 3;
    }

    // 0x10011edb0
    bool GameWorld::IsDeadman() const {
        return (field_7 & 32) >> 5;
    }

    // 0x10011edc0
    bool GameWorld::IsNoSave() const {
        return (field_7 & 2) >> 1;
    }

    // 0x10011edd0
    bool GameWorld::IsSeasonal() const {
        return (field_7 & 64) >> 6;
    }

    // 0x10011ede0
    bool GameWorld::IsPvpArena() const {
        return (field_4 & 64) >> 6;
    }

    // 0x10011edf0
    bool GameWorld::IsSpeedrunWorld() const {
        return field_5 & 1;
    }

    // 0x10011ee00
    bool GameWorld::IsFreshStart() const {
        return (field_7 & 8) >> 3;
    }

    // 0x10011ee10
    void GameWorld::HasWorldListDownloadStarted() {
        void* in_RSI;

        &m_gameworldListDownloadRequest != in_RSI;
    }

    // 0x10011ef60
    void GameWorld::ListReorder(int arg1, int arg2) {
        int* piVar1;
        int local_58[8];

        int iVar3 = 1;
        unsigned long uVar2 = 0;
        local_58[0] = arg2;
        local_58[4] = arg1;
        do {
            piVar1 = &m_ordering[uVar2];
            if (*piVar1 != arg1) {
                local_58[iVar3 + 4] = *piVar1;
                piVar1 = &m_dirs[uVar2];
                local_58[iVar3] = *piVar1;
                iVar3 = iVar3 + 1;
            }
            uVar2 = uVar2 + 1;
        } while (uVar2 != 4);
        uVar2 = 0;
        do {
            iVar3 = local_58[uVar2 + 4];
            piVar1 = &m_ordering[uVar2];
            *piVar1 = iVar3;
            iVar3 = local_58[uVar2];
            piVar1 = &m_dirs[uVar2];
            *piVar1 = iVar3;
            uVar2 = uVar2 + 1;
        } while (uVar2 != 4);
        iVar3 = m_list.end();
        QuickSort((Array<std::unique_ptr<GameWorld, std::default_delete<GameWorld> _>>*)&m_list, 0, iVar3 - 1,
                  (array<int, _4ul>*)&m_ordering, (array<int, _4ul>*)&m_dirs);
    }

    // 0x10011f070
    int GameWorld::CompareTo(const GameWorld& gameWorld1, const GameWorld& gameWorld2, int arg3, bool arg4, int arg5,
                             bool arg6) {
        int iVar1 = CompareTo(gameWorld1, gameWorld2, arg3, arg4);
        if (iVar1 == 0) {
            if (arg5 == -1) {
                return 0;
            }
            iVar1 = CompareTo(gameWorld1, gameWorld2, arg5, arg6);
            arg4 = arg6;
        }
        int iVar2 = -iVar1;
        if (arg4 == false) {
            iVar2 = iVar1;
        }
        return iVar2;
    }

    // 0x10011f0d0
    unsigned long GameWorld::CompareTo(const GameWorld& gameWorld1, const GameWorld& gameWorld2, int arg3, bool arg4) {
        int iVar1;
        int iVar2;
        bool bVar3;
        bool bVar4;
        bool cVar5;
        uint8_t bVar6;
        int iVar7;
        unsigned long uVar8;
        int iVar9;

        switch (arg3) {
        case 1:
            iVar1 = gameWorld1.field_8;
            iVar7 = iVar1;
            if (iVar1 == -1) {
                iVar7 = 2001;
            }
            iVar2 = gameWorld2.field_8;
            iVar9 = 2001;
            if (iVar2 != -1) {
                iVar9 = iVar2;
            }
            if (arg4) {
                iVar9 = iVar2;
                iVar7 = iVar1;
            }
            return (unsigned long)(unsigned int)(iVar7 - iVar9);
        case 2:
            return (unsigned long)(unsigned int)(gameWorld1.field_80 - gameWorld2.field_80);
        case 3:
            bVar3 = gameWorld1.field_48 == DAT_100e387fe;
            bVar4 = gameWorld2.field_48 == DAT_100e387fe;
            if (!bVar3) {
                if (bVar4) {
                    return (unsigned long)((unsigned int)arg4 * 2 - 1);
                }
                uVar8 = gameWorld1.field_48.compare(&gameWorld2.field_48);
                return uVar8;
            }
            if (bVar4) {
                return 0;
            }
            return (unsigned long)((unsigned int)!arg4 * 2 - 1);
        case 4:
            cVar5 = IsLootShare(gameWorld1);
            bVar6 = IsLootShare(gameWorld2);
            break;
        case 5:
            cVar5 = IsQuickChat(gameWorld1);
            bVar6 = IsQuickChat(gameWorld2);
            break;
        case 6:
            cVar5 = IsPVP(gameWorld1);
            bVar6 = IsPVP(gameWorld2);
            break;
        case 7:
            cVar5 = IsMembers(gameWorld1);
            bVar6 = IsMembers(gameWorld2);
            break;
        default:
            return (unsigned long)(unsigned int)(*(int*)gameWorld1 - *(int*)gameWorld2);
        }
        if (!cVar5) {
            uVar8 = (unsigned long)-(unsigned int)bVar6;
        } else {
            uVar8 = (unsigned long)(bVar6 ^ 1);
        }
        return uVar8;
    }

} // namespace jag::oldscape
