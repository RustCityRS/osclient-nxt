// libs/game/runetek5/scene/ServerSyncing.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.runetek5

#include "ServerSyncing.h"

namespace jag::game {
    // 0x100469290
    ServerSyncing::ServerSyncing()
        : Singleton<ServerSyncing>(), eastl::fixed_list<ServerSyncingCycle, 32ul>(), m_currentCycle(0), field_56580(0) {
    }

    // 0x100469340
    void ServerSyncing::Reset(int arg1) {
        m_currentCycle = arg1;
        clear();
        field_56580 = 0;
    }

    // 0x1004693a0
    void ServerSyncing::NewCycle() {
        m_currentCycle = m_currentCycle + 1;
        CheckForStaleCycles();
    }

    // 0x1004693c0
    void ServerSyncing::CheckForStaleCycles() {
        int iVar3;
        unsigned int uVar4;
        ServerSyncingCycle* pSVar5;
        ReturnValue local_878;

        auto local_860 = begin();
        auto local_870 = end();
        bool cVar1 = local_860 != local_870;
        int iVar2 = -1;
        if (cVar1) {
            iVar2 = -1;
            do {
                pSVar5 = (ServerSyncingCycle*)*local_860;
                cVar1 = pSVar5->AllReady();
                if (cVar1) {
                    iVar2 = pSVar5->GetX();
                    break;
                }
                ++local_860;
                cVar1 = local_860 != local_870;
            } while (cVar1);
        }
        ServerSyncing* this_00 = this;
        if (0 < iVar2) {
            local_870 = begin();
            local_878 = this_00->end();
            cVar1 = local_870 != local_878;
            if (cVar1) {
                do {
                    pSVar5 = (ServerSyncingCycle*)*local_870;
                    iVar3 = pSVar5->GetX();
                    if (iVar3 == iVar2)
                        break;
                    cVar1 = pSVar5->field_8.empty();
                    if ((cVar1) && (uVar4 = pSVar5->GetX(), uVar4 != this_00->m_currentCycle)) {
                        uVar4 = pSVar5->GetX();
                        RemoveCycle(this_00, uVar4);
                        break;
                    }
                    cVar1 = pSVar5->AllReady();
                    if ((((!cVar1) && (this_00->field_56580 != 0)) &&
                         (uVar4 = m_currentCycle, iVar3 = pSVar5->GetX(), this_00 = this, iVar3 + 16U < uVar4)) &&
                        (uVar4 = pSVar5->GetX(), (unsigned int)this_00->field_56580 < uVar4)) {
                        local_860 = eastl::fixed_string<char, 2048>();
                        pSVar5->field_1688 = 0;
                        uVar4 = pSVar5->GetX();
                        RemoveCycle(this_00, uVar4);
                    }
                    ++local_870;
                    cVar1 = local_870 != local_878;
                } while (cVar1);
            }
        }
    }

    // 0x100469620
    unsigned int ServerSyncingCycle::AllReady() const {
        long lVar2;

        uint64_t local_28 = field_8.begin();
        uint64_t local_30 = field_8.end();
        unsigned int uVar1 = local_28 != local_30;
        if ((char)uVar1 != '\0') {
            lVar2 = *local_28;
            if (*(char*)(lVar2 + 8) != '\0') {
                do {
                    ++local_28;
                    uVar1 = local_28 != local_30;
                    if ((char)uVar1 == '\0')
                        break;
                    lVar2 = *local_28;
                } while (*(char*)(lVar2 + 8) != '\0');
            }
        }
        return uVar1 ^ 1;
    }

    // 0x1004696c0
    void ServerSyncing::RemoveCycle(unsigned int arg1) {
        ReturnValue local_48;
        ListIterator<ServerSyncingCycle, ServerSyncingCycle const*, ServerSyncingCycle const&>* local_38;

        auto local_40 = end();
        auto local_30 = begin();
        bool cVar1 = local_30 != local_40;
        if (cVar1) {
            do {
                if (((CoordMapSquare*)*local_30)->GetX() == arg1) {
                    new (&local_38) eastl::ListIterator(&local_30);
                    local_48 = erase(local_38);
                    return;
                }
                ++local_30;
                cVar1 = local_30 != local_40;
            } while (cVar1);
        }
    }

    // 0x100469770
    void ServerSyncing::Add(ServerSyncingUser& serverSyncingUser) {
        uint32_t uVar1;
        uint32_t uVar2;
        ServerSyncingCycle* this_00;
        Logger* pLVar3;
        uint64_t uVar4;
        LogStream local_c8;

        if (m_currentCycle != 0) {
            this_00 = (ServerSyncingCycle*)GetSyncFrame(m_currentCycle);
            if (this_00 == nullptr) {
                LogAssert("serverCycle",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/"
                          "ServerSyncing.cpp",
                          193, nullptr);
            }
            this_00->Add(serverSyncingUser);
            pLVar3 = logger::default_logger();
            local_c8 = logger::LogStream(LOGGER_SYNCING);
            uVar1 = ((GraphicsApp*)GraphicsApp::Instance())->GetLogicTick();
            uVar2 = GetCurrentCycle();
            uVar4 = serverSyncingUser.GetDescription();
            ((uint8_t)pLVar3)
                ->Log(nullptr, (LogLevel)&local_c8, 8, 14437561, 196, "ServerSyncing[%4u/%4u]: Added %s", uVar1, uVar2,
                      uVar4);
        }
    }

    // 0x1004698b0
    ServerSyncingCycle* ServerSyncing::GetSyncFrame(unsigned int arg1) {
        bool cVar1;
        unsigned int uVar2;
        ServerSyncingCycle* pSVar4;
        Logger* pLVar5;
        ServerSyncingCycle* pSVar6;
        CoordMapSquare* pCVar7;
        unsigned int* arg1_00;
        ReturnValue local_200;
        ReturnValue local_1f8;
        LogStream local_1e8;
        LogStream local_158;
        LogStream local_c8;

        unsigned int local_1ec = arg1;
        if (m_currentCycle == arg1) {
            cVar1 = empty();
            if (!cVar1) {
                pSVar4 = (ServerSyncingCycle*)back();
                uVar2 = pSVar4->GetX();
                if (uVar2 == local_1ec)
                    goto LAB_100469c0b;
            }
            arg1_00 = &m_currentCycle;
            pLVar5 = logger::default_logger();
            local_c8 = logger::LogStream(LOGGER_SYNCING);
            ((uint8_t)pLVar5)
                ->Log(nullptr, (LogLevel)&local_c8, 8, 14437561, 427, "Creating cycle %u [current]", *arg1_00);
        } else {
            local_1f8 = begin();
            local_200 = end();
            cVar1 = local_1f8 != local_200;
            pSVar4 = (ServerSyncingCycle*)&local_200;
            if (cVar1) {
                pSVar6 = (ServerSyncingCycle*)*local_1f8;
                uVar2 = pSVar6->GetX();
                pSVar4 = pSVar6;
                if (uVar2 != local_1ec) {
                    do {
                        ++local_1f8;
                        cVar1 = local_1f8 != local_200;
                        pSVar4 = pSVar6;
                        if (!cVar1)
                            break;
                        pSVar4 = (ServerSyncingCycle*)*local_1f8;
                        uVar2 = pSVar4->GetX();
                    } while (uVar2 != local_1ec);
                }
            }
            if (cVar1)
                goto LAB_100469c0b;
            cVar1 = empty();
            if (!cVar1) {
                pCVar7 = (CoordMapSquare*)back();
                uVar2 = pCVar7->GetX();
                if (local_1ec < uVar2) {
                    pLVar5 = logger::default_logger();
                    local_158 = logger::LogStream(LOGGER_SYNCING);
                    ((uint8_t)pLVar5)
                        ->Log(nullptr, (LogLevel)&local_158, 8, 14437561, 443, "Creating cycle %u [insert]", local_1ec);
                    emplace_back<unsigned int&>(local_1ec);
                    local_1f8 = end();
                    --local_1f8;
                    do {
                        new (&local_200) eastl::ListIterator(&local_1f8);
                        --local_200;
                        pCVar7 = (CoordMapSquare*)*local_1f8;
                        uVar2 = pCVar7->GetX();
                        pCVar7 = (CoordMapSquare*)*local_200;
                        if (pCVar7->GetX() <= uVar2)
                            break;
                        pSVar4 = (ServerSyncingCycle*)*local_200;
                        pSVar6 = (ServerSyncingCycle*)*local_1f8;
                        eastl::swap<ServerSyncingCycle>(*pSVar4, *pSVar6);
                        local_1f8 = local_200;
                        pSVar4 = (ServerSyncingCycle*)*local_1f8;
                        pSVar6 = (ServerSyncingCycle*)front();
                        cVar1 = *pSVar4 == *pSVar6;
                    } while (!cVar1);
                    pSVar4 = (ServerSyncingCycle*)*local_1f8;
                    goto LAB_100469c0b;
                }
            }
            pLVar5 = logger::default_logger();
            local_1e8 = logger::LogStream(LOGGER_SYNCING);
            ((uint8_t)pLVar5)
                ->Log(nullptr, (LogLevel)&local_1e8, 8, 14437561, 475, "Creating cycle %u [tail]", local_1ec);
            arg1_00 = &local_1ec;
        }
        pSVar4 = emplace_back<unsigned int&>(*arg1_00);
    LAB_100469c0b:
        return pSVar4;
    }

    // 0x100469c50
    void ServerSyncingCycle::Add(ServerSyncingUser& serverSyncingUser) {
        if ((serverSyncingUser.m_syncCycle != 0) || (serverSyncingUser.field_4 != -1)) {
            LogAssert("user.m_syncCycle == 0 && user.m_syncHandle == -1",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/"
                      "ServerSyncing.cpp",
                      482, nullptr);
        }
        if (this_thread::IsMainThread() == '\0') {
            LogAssert("this_thread::IsMainThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/"
                      "ServerSyncing.cpp",
                      483, nullptr);
        }
        serverSyncingUser.m_syncCycle = m_cycle;
        int iVar1 = field_4;
        field_4 = iVar1 + 1;
        serverSyncingUser.field_4 = iVar1;
        ServerSyncingPriority* pSVar3 = &field_8[serverSyncingUser.field_4];
        *pSVar3 = serverSyncingUser.field_0;
        *(uint8_t*)(pSVar3 + 1) = 0;
    }

    // 0x100469d10
    void ServerSyncing::Add(ServerSyncingUser& serverSyncingUser, unsigned int arg2) {
        unsigned int uVar1;
        uint32_t uVar2;
        uint32_t uVar3;
        Logger* pLVar4;
        GraphicsApp* pGVar5;
        uint64_t uVar6;
        ServerSyncingCycle* this_00;
        LogStream* this_01;
        LogStream local_158;
        LogStream local_c8;

        if (arg2 == 0) {
            LogAssert("sourceServerCycle",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/"
                      "ServerSyncing.cpp",
                      204, nullptr);
        }
        if (arg2 + 4 < m_currentCycle) {
            pLVar4 = logger::default_logger();
            local_158 = logger::LogStream(LOGGER_SYNCING);
            pGVar5 = (GraphicsApp*)GraphicsApp::Instance();
            uVar2 = pGVar5->GetLogicTick();
            uVar1 = m_currentCycle;
            uVar6 = serverSyncingUser.GetDescription();
            ((uint8_t)pLVar4)
                ->Log(nullptr, (LogLevel)&local_158, 8, 14437561, 228,
                      "ServerSyncing[%4u/%4u]: Ignoring %s because of age", uVar2, uVar1, uVar6);
            this_01 = &local_158;
        } else {
            this_00 = (ServerSyncingCycle*)GetSyncFrame(arg2);
            if (this_00 == nullptr) {
                LogAssert("serverCycle",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/"
                          "ServerSyncing.cpp",
                          219, nullptr);
            }
            this_00->Add(serverSyncingUser);
            pLVar4 = logger::default_logger();
            local_c8 = logger::LogStream(LOGGER_SYNCING);
            pGVar5 = (GraphicsApp*)GraphicsApp::Instance();
            uVar2 = pGVar5->GetLogicTick();
            uVar3 = GetCurrentCycle();
            uVar6 = serverSyncingUser.GetDescription();
            ((uint8_t)pLVar4)
                ->Log(nullptr, (LogLevel)&local_c8, 8, 14437561, 222, "ServerSyncing[%4u/%4u]: Added %s", uVar2, uVar3,
                      uVar6);
            this_01 = &local_c8;
        }
        this_01->~LogStream();
    }

    // 0x100469f10
    void ServerSyncing::Remove(ServerSyncingUser& serverSyncingUser) {
        uint32_t uVar2;
        uint32_t uVar3;
        uint32_t uVar4;
        unsigned int uVar5;
        ServerSyncingCycle* this_00;
        Logger* pLVar6;
        GraphicsApp* pGVar7;
        uint64_t uVar8;
        Logger* pLVar9;
        LogStream local_158;
        LogStream local_c8;

        if (serverSyncingUser.m_syncCycle != 0) {
            this_00 = (ServerSyncingCycle*)GetSyncFrame(serverSyncingUser.m_syncCycle);
            if (this_00 == nullptr) {
                serverSyncingUser.field_4 = -1;
                serverSyncingUser.m_syncCycle = 0;
            } else {
                pLVar6 = logger::default_logger();
                local_c8 = logger::LogStream(LOGGER_SYNCING);
                pGVar7 = (GraphicsApp*)GraphicsApp::Instance();
                uVar2 = pGVar7->GetLogicTick();
                uVar3 = GetCurrentCycle();
                uVar8 = serverSyncingUser.GetDescription();
                ((uint8_t)pLVar6)
                    ->Log(nullptr, (LogLevel)&local_c8, 8, 14437561, 243, "ServerSyncing[%4u/%4u]: Erased %s", uVar2,
                          uVar3, uVar8);
                uVar2 = (uint32_t)((unsigned long)uVar8 >> 32);
                this_00->Remove(serverSyncingUser);
                if (this_00->field_8.empty() != '\0') {
                    pLVar9 = logger::default_logger();
                    local_158 = logger::LogStream(LOGGER_SYNCING);
                    pGVar7 = (GraphicsApp*)GraphicsApp::Instance();
                    uVar3 = pGVar7->GetLogicTick();
                    uVar5 = m_currentCycle;
                    uVar4 = this_00->GetX();
                    ((uint8_t)pLVar9)
                        ->Log(nullptr, (LogLevel)&local_158, 8, 14437561, 252,
                              "ServerSyncing[%4u/%4u]: Erasing server cycle %u", uVar3, uVar5,
                              (((uint64_t)uVar2 << 32) | (uint32_t)uVar4), pLVar6, &local_158);
                    uVar5 = this_00->GetX();
                    RemoveCycle(uVar5);
                }
            }
        }
    }

    // 0x10046a100
    void ServerSyncingCycle::Remove(ServerSyncingUser& serverSyncingUser) {
        ReturnValue local_40;
        ReturnValue local_38;
        rbtree_iterator<eastl::pair<int const, ServerSyncingCycle::SyncUserEntry>,
                        eastl::pair<int const, ServerSyncingCycle::SyncUserEntry> const*,
                        eastl::pair<int const, ServerSyncingCycle::SyncUserEntry> const&>* local_30;

        if (!(this_thread::IsMainThread())) {
            LogAssert("this_thread::IsMainThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/"
                      "ServerSyncing.cpp",
                      495, nullptr);
        }
        if ((serverSyncingUser.m_syncCycle != 0) && (serverSyncingUser.field_4 != -1)) {
            local_40 = field_8.find(serverSyncingUser.field_4);
            local_38.end();
            if (local_40 != local_38) {
                new (&local_30) eastl::ListIterator(&local_40);
                local_38 = field_8.erase(local_30);
            }
            serverSyncingUser.field_4 = -1;
            serverSyncingUser.m_syncCycle = 0;
        }
    }

    // 0x10046a200
    bool ServerSyncing::CanBuild(const ServerSyncingUser& serverSyncingUser) {
        uint8_t bVar1;
        ServerSyncingCycle* this_00;

        if ((serverSyncingUser.m_syncCycle == 0) ||
            (this_00 = (ServerSyncingCycle*)GetSyncFrame(serverSyncingUser.m_syncCycle), this_00 == nullptr)) {
            bVar1 = 1;
        } else {
            bVar1 = this_00->CanBuild(serverSyncingUser);
        }
        return bVar1 & 1;
    }

    // 0x10046a240
    bool ServerSyncingCycle::CanBuild(const ServerSyncingUser& serverSyncingUser) {
        long lVar3;
        rbtree<unsigned int, eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>,
               eastl::less<unsigned int>, eastl::allocator,
               eastl::use_first<eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>>, true,
               true>
            local_38;

        if (this_thread::IsMainThread() == '\0') {
            LogAssert("this_thread::IsMainThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/"
                      "ServerSyncing.cpp",
                      510, nullptr);
        }
        auto local_30 = field_8.rbegin();
        local_38.end();
        unsigned int uVar2 = local_30 != local_38;
        if ((char)uVar2 != '\0') {
            lVar3 = *local_30;
            if (*(int*)(lVar3 + 4) <= (int)serverSyncingUser.field_0) {
                do {
                    ++local_30;
                    uVar2 = local_30 != local_38;
                    if ((char)uVar2 == '\0')
                        break;
                    lVar3 = *local_30;
                } while (*(int*)(lVar3 + 4) <= (int)serverSyncingUser.field_0);
            }
        }
        return uVar2 ^ 1;
    }

    // 0x10046a310
    void ServerSyncing::SetReady(const ServerSyncingUser& serverSyncingUser, bool arg2) {
        ServerSyncingCycle* this_00;

        if (serverSyncingUser.m_syncCycle != 0) {
            this_00 = (ServerSyncingCycle*)GetSyncFrame(serverSyncingUser.m_syncCycle);
            if (this_00 != nullptr) {
                this_00->SetReady(serverSyncingUser, arg2);
            }
        }
    }

    // 0x10046a350
    void ServerSyncingCycle::SetReady(const ServerSyncingUser& serverSyncingUser, bool arg2) {
        uint32_t uVar2;
        long lVar3;
        Logger* pLVar4;
        rbtree<unsigned int, eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>,
               eastl::less<unsigned int>, eastl::allocator,
               eastl::use_first<eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>>, true,
               true>
            local_d8;
        LogStream local_c8;

        if (!(this_thread::IsMainThread())) {
            LogAssert("this_thread::IsMainThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/"
                      "ServerSyncing.cpp",
                      536, nullptr);
        }
        if ((serverSyncingUser.m_syncCycle == 0) || (serverSyncingUser.field_4 == -1)) {
            LogAssert("user.m_syncCycle != 0 && user.m_syncHandle != -1",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/"
                      "ServerSyncing.cpp",
                      537, nullptr);
        }
        auto local_d0 = field_8.find(serverSyncingUser.field_4);
        local_d8.end();
        if (!(local_d0 != local_d8)) {
            pLVar4 = logger::default_logger();
            local_c8 = logger::LogStream(LOGGER_SYNCING);
            uVar2 = serverSyncingUser.GetPos();
            ((uint8_t)pLVar4)
                ->Log(nullptr, (LogLevel)&local_c8, 3, 14437561, 545, "Did not find ServerSyncingUser in cycle %d",
                      uVar2);
        } else {
            lVar3 = *local_d0;
            *(bool*)(lVar3 + 8) = arg2;
        }
    }

    // 0x10046a4c0
    unsigned long ServerSyncing::IsSynced(const ServerSyncingUser& serverSyncingUser) {
        ServerSyncingCycle* this_00;
        unsigned long uVar1;

        if (((serverSyncingUser.m_syncCycle == 0) ||
             (this_00 = (ServerSyncingCycle*)GetSyncFrame(serverSyncingUser.m_syncCycle), this_00 == nullptr)) ||
            (uVar1 = this_00->IsSynced(serverSyncingUser), this_00 == nullptr)) {
            uVar1 = 0;
        }
        return uVar1 & 18446744073709551361;
    }

    // 0x10046a500
    void ServerSyncingCycle::IsSynced(const ServerSyncingUser& serverSyncingUser) {
        rbtree<unsigned int, eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>,
               eastl::less<unsigned int>, eastl::allocator,
               eastl::use_first<eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>>, true,
               true>
            local_28;

        auto local_30 = field_8.find(serverSyncingUser.field_4);
        local_28.end();
        local_30 != local_28;
    }

    // 0x10046a550
    unsigned long ServerSyncing::IsReady(unsigned int arg1, const ServerSyncingUser& serverSyncingUser) {
        unsigned long result;
        bool cVar1;
        unsigned int uVar3;
        ServerSyncingCycle* this_02;
        uint64_t unaff_RBX;
        ReturnValue result;
        int iVar5;
        ReturnValue local_58;
        ReturnValue local_38;

        unsigned int uVar2 = ((GraphicsApp*)GraphicsApp::Instance())->GetFrameCount();
        if (uVar2 < arg1) {
            LogAssert("GraphicsApp::Instance()->GetFrameCount() >= frameCount",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/"
                      "ServerSyncing.cpp",
                      331, nullptr);
        }
        uVar2 = serverSyncingUser.m_syncCycle;
        unsigned long uVar4 = (((uint64_t)((int64_t)((unsigned long)unaff_RBX >> 8)) << 8) | (uint8_t)1);
        if (uVar2 != 0) {
            if (uVar2 == m_currentCycle) {
                uVar4 = 0;
            } else {
                cVar1 = empty();
                if (!cVar1) {
                    local_38 = begin();
                    &result = &local_58;
                    result = end();
                    cVar1 = local_38 != result;
                    if (cVar1) {
                        do {
                            this_02 = (ServerSyncingCycle*)*local_38;
                            uVar3 = this_02->GetX();
                            iVar5 = 1;
                            if (uVar2 < uVar3) {
                            LAB_10046a620:
                                &result = &local_38;
                                goto LAB_10046a6e3;
                            }
                            uVar3 = this_02->GetX();
                            cVar1 = this_02->IsReady(arg1, serverSyncingUser.field_0);
                            if (uVar3 == uVar2) {
                                if (!cVar1) {
                                    iVar5 = 2;
                                } else if (field_56580 == 0) {
                                    field_56580 = m_currentCycle;
                                }
                                goto LAB_10046a620;
                            }
                            &result = &local_38;
                            if (!cVar1) {
                                iVar5 = 2;
                                goto LAB_10046a6e3;
                            }
                            &result = &local_38;
                            ++result;
                            cVar1 = result != local_58;
                        } while (cVar1);
                    }
                    iVar5 = 2;
                LAB_10046a6e3:
                    uVar4 = (((uint64_t)((int64_t)((unsigned long)&result >> 8)) << 8) | (uint8_t)(iVar5 != 2));
                }
            }
        }
        return uVar4 & 4294967295;
    }

    // 0x10046a700
    bool ServerSyncingCycle::IsReady(unsigned int arg1, ServerSyncingPriority serverSyncingPriority) const {
        uint8_t* this_00;
        ServerSyncingPriority SVar1;
        uint32_t uVar4;
        long lVar5;
        Logger* pLVar6;
        LogStream* this_02;
        bool bVar7;
        uint64_t local_168;
        uint64_t local_160;
        LogStream local_158;
        LogStream local_c8;

        bool cVar2 = this_thread::IsMainThread();
        if (!cVar2) {
            LogAssert("this_thread::IsMainThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/"
                      "ServerSyncing.cpp",
                      556, nullptr);
        }
        if (((GraphicsApp*)GraphicsApp::Instance())->GetFrameCount() < arg1) {
            LogAssert("GraphicsApp::Instance()->GetFrameCount() >= frameCount",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/"
                      "ServerSyncing.cpp",
                      561, nullptr);
        }
        if ((int)serverSyncingPriority < (int)field_1688) {
            this_00 = &field_8;
            local_160 = this_00->begin();
            local_168 = this_00->end();
            while (true) {
                cVar2 = local_160 != local_168;
                if (!cVar2)
                    break;
                lVar5 = *local_160;
                if (((int)serverSyncingPriority <= *(int*)(lVar5 + 4)) && (*(char*)(lVar5 + 8) == '\0')) {
                    if (cVar2)
                        goto LAB_10046a946;
                    break;
                }
                ++local_160;
            }
            if (field_1688 == serverSyncingPriority) {
                LogAssert("m_completed != priority",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/"
                          "ServerSyncing.cpp",
                          584, nullptr);
            }
            field_1688 = serverSyncingPriority;
            lVar5 = this_00->capacity();
            SVar1 = field_1688;
            pLVar6 = logger::default_logger();
            if ((int)SVar1 < 1) {
                this_02 = &local_158;
                new (this_02) logger::LogStream(LOGGER_SYNCING);
                uVar4 = GetX();
                ((uint8_t)pLVar6)
                    ->Log(nullptr, (LogLevel)this_02, 8, 14437561, 594,
                          "ServerSyncing: Everything (%u users) in cycle %u is ready on frame %u", (int)lVar5, uVar4,
                          arg1);
            } else {
                this_02 = &local_c8;
                new (this_02) logger::LogStream(LOGGER_SYNCING);
                uVar4 = GetX();
                ((uint8_t)pLVar6)
                    ->Log(nullptr, (LogLevel)this_02, 8, 14437561, 590,
                          "ServerSyncing: Everything (%u users) in cycle %u is ready at priority %d on frame %u",
                          (int)lVar5, uVar4, field_1688, arg1);
            }
            this_02->~LogStream();
            if (lVar5 == 1) {
                field_1692 = arg1 - 1;
                bVar7 = true;
            } else {
                field_1692 = arg1;
            LAB_10046a946:
                bVar7 = false;
            }
        } else {
            bVar7 = field_1692 < arg1;
        }
        return bVar7;
    }

} // namespace jag::game
