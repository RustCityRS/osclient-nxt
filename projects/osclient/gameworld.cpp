// projects/osclient/gameworld.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: osclient

#include "gameworld.h"

namespace jag::oldscape {
    // 0x100f36fc4, 16 bytes, __data
    GameWorld::m_dirs = {1, 1, 1, 1};

    // 0x100f36fd4, 16 bytes, __data
    GameWorld::m_ordering = {0, 1, 2, 3};

    // 0x100f8a8c8, 24 bytes, __common; zero-initialised
    GameWorld::m_list;

    // 0x100f8a8e0, 4 bytes, __common; zero-initialised
    GameWorld::m_num;

    // 0x100f8a8e4, 4 bytes, __common; zero-initialised
    GameWorld::m_next;

    // 0x100f8a8e8, 8 bytes, __common; zero-initialised
    GameWorld::m_gameworldListDownloadRequest;

    // 0x1000daca0, 752 bytes, placed by class name and debug map
    // GameWorld::ListFetch()
    undefined8 GameWorld::ListFetch() {
        bool bVar1;
        byte bVar2;
        ushort uVar3;
        short sVar4;
        int iVar5;
        uint uVar6;
        HTTPRequest* pHVar7;
        basic_string* pbVar8;
        RT7Core* this_00;
        Array* pAVar9;
        unique_ptr<GameWorld, std::default_delete<GameWorld>>* puVar10;
        uint* puVar11;
        undefined8 uVar12;
        _func_decltype_nullptr* in_RSI;
        ulong uVar13;
        WindowSavedPosition local_70;
        Array<std::unique_ptr<GameWorld, std::default_delete<GameWorld>>, eastl::allocator> local_50[32];

        bVar1 = std::operator==((unique_ptr*)&m_gameworldListDownloadRequest, in_RSI);
        if (bVar1) {
            pHVar7 = operator_new(664);
            http::HTTPRequest::HTTPRequest(pHVar7, 0);
        } else {
            pHVar7 =
                (HTTPRequest*)std::unique_ptr<http::HTTPRequest, std::default_delete<http::HTTPRequest>>::operator->(
                    (unique_ptr<http::HTTPRequest,
                                std::default_delete<http::HTTPRequest>>*)&m_gameworldListDownloadRequest);
            iVar5 = pHVar7->GetState();
            if (iVar5 != 2) {
                if (iVar5 != 1) {
                    if (iVar5 == 0) {
                        pbVar8 =
                            (basic_string*)std::unique_ptr<http::HTTPRequest, std::default_delete<http::HTTPRequest>>::
                            operator->(
                                (unique_ptr<http::HTTPRequest,
                                            std::default_delete<http::HTTPRequest>>*)&m_gameworldListDownloadRequest);
                        Client::Instance();
                        pbVar8->Get();
                    }
                    return 0;
                }
                this_00 =
                    (RT7Core*)std::unique_ptr<http::HTTPRequest, std::default_delete<http::HTTPRequest>>::operator->(
                        (unique_ptr<http::HTTPRequest,
                                    std::default_delete<http::HTTPRequest>>*)&m_gameworldListDownloadRequest);
                pAVar9 = (Array*)this_00->GetMSAASampleCount();
                local_70.PacketT(pAVar9);
                local_70.g4();
                uVar3 = local_70.g2();
                m_num = (uint)uVar3;
                Array<std::unique_ptr<GameWorld, std::default_delete<GameWorld>>, eastl::allocator>::Array(
                    local_50, (ulong)uVar3);
                Array<std::unique_ptr<GameWorld, std::default_delete<GameWorld>>, eastl::allocator>::operator=(
                    (Array<std::unique_ptr<GameWorld, std::default_delete<GameWorld>>, eastl::allocator>*)&m_list,
                    (Array*)local_50);
                local_50->~Array();
                if (0 < (int)m_num) {
                    uVar13 = 0;
                    do {
                        std::make_unique<GameWorld>();
                        puVar10 = (unique_ptr<GameWorld, std::default_delete<GameWorld>>*)
                            Array<std::unique_ptr<GameWorld, std::default_delete<GameWorld>>, eastl::allocator>::
                            operator[]((Array<std::unique_ptr<GameWorld, std::default_delete<GameWorld>>,
                                              eastl::allocator>*)&m_list,
                                       uVar13);
                        std::unique_ptr<GameWorld, std::default_delete<GameWorld>>::operator=(puVar10,
                                                                                              (unique_ptr*)local_50);
                        local_50->~unique_ptr();
                        puVar10 = (unique_ptr<GameWorld, std::default_delete<GameWorld>>*)
                            Array<std::unique_ptr<GameWorld, std::default_delete<GameWorld>>, eastl::allocator>::
                            operator[]((Array<std::unique_ptr<GameWorld, std::default_delete<GameWorld>>,
                                              eastl::allocator>*)&m_list,
                                       uVar13);
                        puVar11 = (uint*)std::unique_ptr<GameWorld, std::default_delete<GameWorld>>::get(puVar10);
                        uVar3 = local_70.g2();
                        *puVar11 = (uint)uVar3;
                        uVar6 = local_70.g4();
                        puVar11[1] = uVar6;
                        bVar1 = SUB81(&local_70, 0);
                        local_50->gStringNoConversion(bVar1);
                        eastl::string::operator=((eastl::string*)(puVar11 + 4), (basic_string*)local_50);
                        local_50->~basic_string();
                        local_50->gStringNoConversion(bVar1);
                        eastl::string::operator=((eastl::string*)(puVar11 + 12), (basic_string*)local_50);
                        local_50->~basic_string();
                        bVar2 = local_70.g1();
                        puVar11[20] = (uint)bVar2;
                        sVar4 = local_70.g2s();
                        puVar11[2] = (int)sVar4;
                        puVar11[30] = (uint)uVar13;
                        uVar13 = uVar13 + 1;
                    } while ((long)uVar13 < (long)(int)m_num);
                }
                iVar5 = m_list.end();
                QuickSort((Array*)&m_list, 0, iVar5 + -1, (array*)&m_ordering, (array*)&m_dirs);
                m_gameworldListDownloadRequest.reset(0);
                local_70.~WindowSavedPosition();
                return 1;
            }
            uVar12 = logger::default_logger();
            logger::Logger::Log(
                uVar12, 0, 3,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/gameworld.cpp", 352,
                "GameWorld: worldSwitchPageState http request failed");
            pHVar7 = operator_new(664);
            http::HTTPRequest::HTTPRequest(pHVar7, 0);
        }
        m_gameworldListDownloadRequest.reset(pHVar7);
        return 0;
    }

    // 0x1000dafb0, 160 bytes, placed by class name and debug map
    // GameWorld::GetByID(int)
    undefined8 GameWorld::GetByID(int param_1) {
        undefined8 in_RAX;
        long lVar1;
        unique_ptr<GameWorld, std::default_delete<GameWorld>>* this;
        unique_ptr<GameWorld, std::default_delete<GameWorld>>* puVar2;
        int* piVar3;
        undefined8 local_38;

        lVar1 = m_list.end();
        if (lVar1 != 0) {
            this = (unique_ptr<GameWorld, std::default_delete<GameWorld>>*)m_list.data();
            puVar2 = (unique_ptr<GameWorld, std::default_delete<GameWorld>>*)m_list.end();
            for (; local_38 = in_RAX, this != puVar2; this = this + 8) {
                piVar3 = (int*)std::unique_ptr<GameWorld, std::default_delete<GameWorld>>::operator->(this);
                if (*piVar3 == param_1) {
                    local_38 = std::unique_ptr<GameWorld, std::default_delete<GameWorld>>::get(this);
                    break;
                }
            }
            if (this != puVar2) {
                return local_38;
            }
        }
        return 0;
    }

    // 0x1001134b0, 16 bytes, placed by class name
    // GameWorld::IsBeta() const
    byte GameWorld::IsBeta() {
        return field_6 & 1;
    }

    // 0x10011e590, 1184 bytes, placed by class name
    // GameWorld::QuickSort(Array<std::unique_ptr<GameWorld, std::default_delete<GameWorld> >, eastl::allocator>&, int, int, std::array<int, 4ul>&, std::array<int, 4ul>&)
    /* GameWorld::QuickSort(Array<std::unique_ptr<GameWorld,
   std::default_delete<GameWorld> >, eastl::allocator>&, int, int, std::array<int,
   4ul>&, std::array<int, 4ul>&) */

    void GameWorld::QuickSort(Array* param_1, int param_2, int param_3, array* param_4, array* param_5) {
        int iVar1;
        byte bVar2;
        unique_ptr<GameWorld, std::default_delete<GameWorld>>* puVar3;
        unique_ptr* puVar4;
        GameWorld* this;
        int* piVar5;
        long lVar6;
        GameWorld* pGVar7;
        uint* puVar8;
        uint uVar9;
        ulong uVar10;
        uint uVar11;
        bool bVar12;
        bool bVar13;
        ulong local_50;
        ulong local_40;

        if (param_3 <= param_2) {
            return;
        }
        uVar9 = param_3 + 1;
        local_50 = (ulong)uVar9;
        puVar3 = (unique_ptr<GameWorld, std::default_delete<GameWorld>>*)
            Array<std::unique_ptr<GameWorld, std::default_delete<GameWorld>>, eastl::allocator>::operator[](
                (Array<std::unique_ptr<GameWorld, std::default_delete<GameWorld>>, eastl::allocator>*)param_1,
                (long)((param_2 + param_3) / 2));
        puVar4 = (unique_ptr*)
            Array<std::unique_ptr<GameWorld, std::default_delete<GameWorld>>, eastl::allocator>::operator[](
                (Array<std::unique_ptr<GameWorld, std::default_delete<GameWorld>>, eastl::allocator>*)param_1,
                (long)param_2);
        std::unique_ptr<GameWorld, std::default_delete<GameWorld>>::swap(puVar3, puVar4);
        puVar3 = (unique_ptr<GameWorld, std::default_delete<GameWorld>>*)
            Array<std::unique_ptr<GameWorld, std::default_delete<GameWorld>>, eastl::allocator>::operator[](
                (Array<std::unique_ptr<GameWorld, std::default_delete<GameWorld>>, eastl::allocator>*)param_1,
                (long)param_2);
        this = (GameWorld*)std::unique_ptr<GameWorld, std::default_delete<GameWorld>>::operator*(puVar3);
        if ((int)uVar9 < param_2) {
        LAB_10011e9ea:
            QuickSort(param_1, param_2, uVar9, param_4, param_5);
            QuickSort(param_1, uVar9 + 1, param_3, param_4, param_5);
            return;
        }
        local_40 = (ulong)(param_2 - 1);
        do {
            local_50 = (ulong)(int)local_50;
            bVar12 = true;
            do {
                local_50 = local_50 - 1;
                uVar10 = 0;
                do {
                    piVar5 = (int*)std::array<int, 4ul>::operator[]((array<int, 4ul>*)param_4, uVar10);
                    iVar1 = *piVar5;
                    if (iVar1 == 1) {
                        puVar3 = (unique_ptr<GameWorld, std::default_delete<GameWorld>>*)
                            Array<std::unique_ptr<GameWorld, std::default_delete<GameWorld>>, eastl::allocator>::
                            operator[](
                                (Array<std::unique_ptr<GameWorld, std::default_delete<GameWorld>>, eastl::allocator>*)
                                    param_1,
                                local_50);
                        lVar6 = std::unique_ptr<GameWorld, std::default_delete<GameWorld>>::operator->(puVar3);
                        uVar9 = *(uint*)(lVar6 + 8);
                        uVar11 = field_8;
                        if (uVar9 == 4294967295) {
                            piVar5 = (int*)std::array<int, 4ul>::operator[]((array<int, 4ul>*)param_5, uVar10);
                            uVar9 = 2001;
                            if (*piVar5 != 1) {
                                uVar9 = 4294967295;
                            }
                        }
                        if (uVar11 == 4294967295) {
                            piVar5 = (int*)std::array<int, 4ul>::operator[]((array<int, 4ul>*)param_5, uVar10);
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
                            puVar3 = (unique_ptr<GameWorld, std::default_delete<GameWorld>>*)
                                Array<std::unique_ptr<GameWorld, std::default_delete<GameWorld>>, eastl::allocator>::
                                operator[]((Array<std::unique_ptr<GameWorld, std::default_delete<GameWorld>>,
                                                  eastl::allocator>*)param_1,
                                           local_50);
                            pGVar7 = (GameWorld*)std::unique_ptr<GameWorld, std::default_delete<GameWorld>>::operator->(
                                puVar3);
                            bVar2 = IsMembers(pGVar7);
                            uVar9 = (uint)bVar2;
                            bVar2 = IsMembers(this);
                            uVar11 = (uint)bVar2;
                            goto LAB_10011e75a;
                        }
                        if (iVar1 != 2) {
                            puVar3 = (unique_ptr<GameWorld, std::default_delete<GameWorld>>*)
                                Array<std::unique_ptr<GameWorld, std::default_delete<GameWorld>>, eastl::allocator>::
                                operator[]((Array<std::unique_ptr<GameWorld, std::default_delete<GameWorld>>,
                                                  eastl::allocator>*)param_1,
                                           local_50);
                            puVar8 =
                                (uint*)std::unique_ptr<GameWorld, std::default_delete<GameWorld>>::operator->(puVar3);
                            uVar9 = *puVar8;
                            uVar11 = *(uint*)this;
                            if (uVar9 != uVar11)
                                goto LAB_10011e7a0;
                            goto LAB_10011e75f;
                        }
                        puVar3 = (unique_ptr<GameWorld, std::default_delete<GameWorld>>*)
                            Array<std::unique_ptr<GameWorld, std::default_delete<GameWorld>>, eastl::allocator>::
                            operator[](
                                (Array<std::unique_ptr<GameWorld, std::default_delete<GameWorld>>, eastl::allocator>*)
                                    param_1,
                                local_50);
                        lVar6 = std::unique_ptr<GameWorld, std::default_delete<GameWorld>>::operator->(puVar3);
                        uVar9 = *(uint*)(lVar6 + 120);
                        uVar11 = field_120;
                        if (uVar9 == uVar11)
                            goto LAB_10011e75f;
                    LAB_10011e7a0:
                        piVar5 = (int*)std::array<int, 4ul>::operator[]((array<int, 4ul>*)param_5, uVar10);
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
            local_40 = (ulong)(int)local_40;
            bVar12 = true;
            do {
                local_40 = local_40 + 1;
                uVar10 = 0;
                do {
                    piVar5 = (int*)std::array<int, 4ul>::operator[]((array<int, 4ul>*)param_4, uVar10);
                    iVar1 = *piVar5;
                    if (iVar1 == 1) {
                        puVar3 = (unique_ptr<GameWorld, std::default_delete<GameWorld>>*)
                            Array<std::unique_ptr<GameWorld, std::default_delete<GameWorld>>, eastl::allocator>::
                            operator[](
                                (Array<std::unique_ptr<GameWorld, std::default_delete<GameWorld>>, eastl::allocator>*)
                                    param_1,
                                local_40);
                        lVar6 = std::unique_ptr<GameWorld, std::default_delete<GameWorld>>::operator->(puVar3);
                        uVar9 = *(uint*)(lVar6 + 8);
                        uVar11 = field_8;
                        if (uVar9 == 4294967295) {
                            piVar5 = (int*)std::array<int, 4ul>::operator[]((array<int, 4ul>*)param_5, uVar10);
                            uVar9 = 2001;
                            if (*piVar5 != 1) {
                                uVar9 = 4294967295;
                            }
                        }
                        if (uVar11 == 4294967295) {
                            piVar5 = (int*)std::array<int, 4ul>::operator[]((array<int, 4ul>*)param_5, uVar10);
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
                            puVar3 = (unique_ptr<GameWorld, std::default_delete<GameWorld>>*)
                                Array<std::unique_ptr<GameWorld, std::default_delete<GameWorld>>, eastl::allocator>::
                                operator[]((Array<std::unique_ptr<GameWorld, std::default_delete<GameWorld>>,
                                                  eastl::allocator>*)param_1,
                                           local_40);
                            pGVar7 = (GameWorld*)std::unique_ptr<GameWorld, std::default_delete<GameWorld>>::operator->(
                                puVar3);
                            bVar2 = IsMembers(pGVar7);
                            uVar9 = (uint)bVar2;
                            bVar2 = IsMembers(this);
                            uVar11 = (uint)bVar2;
                            goto LAB_10011e91a;
                        }
                        if (iVar1 != 2) {
                            puVar3 = (unique_ptr<GameWorld, std::default_delete<GameWorld>>*)
                                Array<std::unique_ptr<GameWorld, std::default_delete<GameWorld>>, eastl::allocator>::
                                operator[]((Array<std::unique_ptr<GameWorld, std::default_delete<GameWorld>>,
                                                  eastl::allocator>*)param_1,
                                           local_40);
                            puVar8 =
                                (uint*)std::unique_ptr<GameWorld, std::default_delete<GameWorld>>::operator->(puVar3);
                            uVar9 = *puVar8;
                            uVar11 = *(uint*)this;
                            if (uVar9 != uVar11)
                                goto LAB_10011e960;
                            goto LAB_10011e91f;
                        }
                        puVar3 = (unique_ptr<GameWorld, std::default_delete<GameWorld>>*)
                            Array<std::unique_ptr<GameWorld, std::default_delete<GameWorld>>, eastl::allocator>::
                            operator[](
                                (Array<std::unique_ptr<GameWorld, std::default_delete<GameWorld>>, eastl::allocator>*)
                                    param_1,
                                local_40);
                        lVar6 = std::unique_ptr<GameWorld, std::default_delete<GameWorld>>::operator->(puVar3);
                        uVar9 = *(uint*)(lVar6 + 120);
                        uVar11 = field_120;
                        if (uVar9 == uVar11)
                            goto LAB_10011e91f;
                    LAB_10011e960:
                        piVar5 = (int*)std::array<int, 4ul>::operator[]((array<int, 4ul>*)param_5, uVar10);
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
            uVar9 = (uint)local_50;
            if ((int)uVar9 <= (int)local_40)
                goto LAB_10011e9ea;
            puVar3 = (unique_ptr<GameWorld, std::default_delete<GameWorld>>*)
                Array<std::unique_ptr<GameWorld, std::default_delete<GameWorld>>, eastl::allocator>::operator[](
                    (Array<std::unique_ptr<GameWorld, std::default_delete<GameWorld>>, eastl::allocator>*)param_1,
                    (long)(int)local_40);
            puVar4 = (unique_ptr*)
                Array<std::unique_ptr<GameWorld, std::default_delete<GameWorld>>, eastl::allocator>::operator[](
                    (Array<std::unique_ptr<GameWorld, std::default_delete<GameWorld>>, eastl::allocator>*)param_1,
                    (long)(int)uVar9);
            std::unique_ptr<GameWorld, std::default_delete<GameWorld>>::swap(puVar3, puVar4);
        } while (true);
    }

    // 0x10011eae0, 16 bytes, placed by class name
    // GameWorld::IsMembers() const
    byte GameWorld::IsMembers() {
        return field_4 & 1;
    }

    // 0x10011eaf0, 96 bytes, placed by class name
    // GameWorld::ListSort(int, bool, int, bool)
    void GameWorld::ListSort(int param_1, bool param_2, int param_3, bool param_4) {
        int iVar1;
        char cVar2;

        cVar2 = m_list.empty();
        if (cVar2 == '\0') {
            iVar1 = m_list.end();
            ListSort(0, iVar1 + -1, param_1, param_2, param_3, param_4);
        }
    }

    // 0x10011eb50, 416 bytes, placed by class name
    // GameWorld::ListSort(int, int, int, bool, int, bool)
    void GameWorld::ListSort(int param_1, int param_2, int param_3, bool param_4, int param_5, bool param_6) {
        unique_ptr<GameWorld, std::default_delete<GameWorld>>* puVar2;
        unique_ptr* puVar3;
        GameWorld* pGVar4;
        GameWorld* pGVar5;
        ulong uVar6;
        int iVar7;
        ulong uVar8;

        if (param_1 < param_2) {
            puVar2 = (unique_ptr<GameWorld, std::default_delete<GameWorld>>*)
                Array<std::unique_ptr<GameWorld, std::default_delete<GameWorld>>, eastl::allocator>::operator[](
                    (Array<std::unique_ptr<GameWorld, std::default_delete<GameWorld>>, eastl::allocator>*)&m_list,
                    (ulong)param_2);
            puVar3 = (unique_ptr*)
                Array<std::unique_ptr<GameWorld, std::default_delete<GameWorld>>, eastl::allocator>::operator[](
                    (Array<std::unique_ptr<GameWorld, std::default_delete<GameWorld>>, eastl::allocator>*)&m_list,
                    (long)((param_2 + param_1) / 2));
            std::unique_ptr<GameWorld, std::default_delete<GameWorld>>::swap(puVar2, puVar3);
            puVar2 = (unique_ptr<GameWorld, std::default_delete<GameWorld>>*)
                Array<std::unique_ptr<GameWorld, std::default_delete<GameWorld>>, eastl::allocator>::operator[](
                    (Array<std::unique_ptr<GameWorld, std::default_delete<GameWorld>>, eastl::allocator>*)&m_list,
                    (ulong)param_2);
            pGVar4 = (GameWorld*)std::unique_ptr<GameWorld, std::default_delete<GameWorld>>::operator*(puVar2);
            uVar8 = (ulong)param_1;
            iVar7 = param_1;
            do {
                puVar2 = (unique_ptr<GameWorld, std::default_delete<GameWorld>>*)
                    Array<std::unique_ptr<GameWorld, std::default_delete<GameWorld>>, eastl::allocator>::operator[](
                        (Array<std::unique_ptr<GameWorld, std::default_delete<GameWorld>>, eastl::allocator>*)&m_list,
                        uVar8);
                pGVar5 = (GameWorld*)std::unique_ptr<GameWorld, std::default_delete<GameWorld>>::operator*(puVar2);
                if (CompareTo(pGVar5, pGVar4, param_3, param_4, param_5, param_6) < 1) {
                    puVar2 = (unique_ptr<GameWorld, std::default_delete<GameWorld>>*)
                        Array<std::unique_ptr<GameWorld, std::default_delete<GameWorld>>, eastl::allocator>::operator[](
                            (Array<std::unique_ptr<GameWorld, std::default_delete<GameWorld>>,
                                   eastl::allocator>*)&m_list,
                            uVar8);
                    uVar6 = (ulong)iVar7;
                    iVar7 = iVar7 + 1;
                    puVar3 = (unique_ptr*)
                        Array<std::unique_ptr<GameWorld, std::default_delete<GameWorld>>, eastl::allocator>::operator[](
                            (Array<std::unique_ptr<GameWorld, std::default_delete<GameWorld>>,
                                   eastl::allocator>*)&m_list,
                            uVar6);
                    std::unique_ptr<GameWorld, std::default_delete<GameWorld>>::swap(puVar2, puVar3);
                }
                uVar8 = uVar8 + 1;
            } while (param_2 != (int)uVar8);
            puVar2 = (unique_ptr<GameWorld, std::default_delete<GameWorld>>*)
                Array<std::unique_ptr<GameWorld, std::default_delete<GameWorld>>, eastl::allocator>::operator[](
                    (Array<std::unique_ptr<GameWorld, std::default_delete<GameWorld>>, eastl::allocator>*)&m_list,
                    (ulong)param_2);
            puVar3 = (unique_ptr*)
                Array<std::unique_ptr<GameWorld, std::default_delete<GameWorld>>, eastl::allocator>::operator[](
                    (Array<std::unique_ptr<GameWorld, std::default_delete<GameWorld>>, eastl::allocator>*)&m_list,
                    (long)iVar7);
            std::unique_ptr<GameWorld, std::default_delete<GameWorld>>::swap(puVar2, puVar3);
            ListSort(param_1, iVar7 + -1, param_3, param_4, param_5, param_6);
            ListSort(iVar7 + 1, param_2, param_3, param_4, param_5, param_6);
        }
    }

    // 0x10011ecf0, 32 bytes, placed by class name
    // GameWorld::ListStart()
    void GameWorld::ListStart() {
        m_next = 0;
        ListNext();
    }

    // 0x10011ed10, 64 bytes, placed by class name
    // GameWorld::ListNext()
    undefined8 GameWorld::ListNext() {
        unique_ptr<GameWorld, std::default_delete<GameWorld>>* this;
        ulong uVar2;

        uVar2 = (ulong)m_next;
        if (m_next < m_num) {
            m_next = m_next + 1;
            this = (unique_ptr<GameWorld, std::default_delete<GameWorld>>*)
                Array<std::unique_ptr<GameWorld, std::default_delete<GameWorld>>, eastl::allocator>::operator[](
                    (Array<std::unique_ptr<GameWorld, std::default_delete<GameWorld>>, eastl::allocator>*)&m_list,
                    uVar2);
            return std::unique_ptr<GameWorld, std::default_delete<GameWorld>>::get(this);
        }
        return 0;
    }

    // 0x10011ed80, 16 bytes, placed by class name
    // GameWorld::IsQuickChat() const
    byte GameWorld::IsQuickChat() {
        return (field_4 & 2) >> 1;
    }

    // 0x10011ed90, 16 bytes, placed by class name
    // GameWorld::IsPVP() const
    byte GameWorld::IsPVP() {
        return (field_4 & 4) >> 2;
    }

    // 0x10011eda0, 16 bytes, placed by class name
    // GameWorld::IsLootShare() const
    byte GameWorld::IsLootShare() {
        return (field_4 & 8) >> 3;
    }

    // 0x10011edb0, 16 bytes, placed by class name
    // GameWorld::IsDeadman() const
    byte GameWorld::IsDeadman() {
        return (field_7 & 32) >> 5;
    }

    // 0x10011edc0, 16 bytes, placed by class name
    // GameWorld::IsNoSave() const
    byte GameWorld::IsNoSave() {
        return (field_7 & 2) >> 1;
    }

    // 0x10011edd0, 16 bytes, placed by class name
    // GameWorld::IsSeasonal() const
    byte GameWorld::IsSeasonal() {
        return (field_7 & 64) >> 6;
    }

    // 0x10011ede0, 16 bytes, placed by class name
    // GameWorld::IsPvpArena() const
    byte GameWorld::IsPvpArena() {
        return (field_4 & 64) >> 6;
    }

    // 0x10011edf0, 16 bytes, placed by class name
    // GameWorld::IsSpeedrunWorld() const
    byte GameWorld::IsSpeedrunWorld() {
        return field_5 & 1;
    }

    // 0x10011ee00, 16 bytes, placed by class name
    // GameWorld::IsFreshStart() const
    byte GameWorld::IsFreshStart() {
        return (field_7 & 8) >> 3;
    }

    // 0x10011ee10, 32 bytes, placed by class name
    // GameWorld::HasWorldListDownloadStarted()
    void GameWorld::HasWorldListDownloadStarted() {
        _func_decltype_nullptr* in_RSI;

        std::operator!=((unique_ptr*)&m_gameworldListDownloadRequest, in_RSI);
    }

    // 0x10011ef60, 272 bytes, placed by class name
    // GameWorld::ListReorder(int, int)
    void GameWorld::ListReorder(int param_1, int param_2) {
        int* piVar1;
        ulong uVar2;
        int iVar3;
        int local_58[8];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        iVar3 = 1;
        uVar2 = 0;
        local_58[0] = param_2;
        local_58[4] = param_1;
        do {
            piVar1 = (int*)std::array<int, 4ul>::operator[]((array<int, 4ul>*)&m_ordering, uVar2);
            if (*piVar1 != param_1) {
                local_58[(long)iVar3 + 4] = *piVar1;
                piVar1 = (int*)std::array<int, 4ul>::operator[]((array<int, 4ul>*)&m_dirs, uVar2);
                local_58[iVar3] = *piVar1;
                iVar3 = iVar3 + 1;
            }
            uVar2 = uVar2 + 1;
        } while (uVar2 != 4);
        uVar2 = 0;
        do {
            iVar3 = local_58[uVar2 + 4];
            piVar1 = (int*)std::array<int, 4ul>::operator[]((array<int, 4ul>*)&m_ordering, uVar2);
            *piVar1 = iVar3;
            iVar3 = local_58[uVar2];
            piVar1 = (int*)std::array<int, 4ul>::operator[]((array<int, 4ul>*)&m_dirs, uVar2);
            *piVar1 = iVar3;
            uVar2 = uVar2 + 1;
        } while (uVar2 != 4);
        iVar3 = m_list.end();
        QuickSort((Array*)&m_list, 0, iVar3 + -1, (array*)&m_ordering, (array*)&m_dirs);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x10011f070, 96 bytes, placed by class name
    // GameWorld::CompareTo(GameWorld const&, GameWorld const&, int, bool, int, bool)
    int GameWorld::CompareTo(GameWorld* param_1, GameWorld* param_2, int param_3, bool param_4, int param_5,
                             bool param_6) {
        int iVar1;
        int iVar2;

        iVar1 = CompareTo(param_1, param_2, param_3, param_4);
        if (iVar1 == 0) {
            if (param_5 == -1) {
                return 0;
            }
            iVar1 = CompareTo(param_1, param_2, param_5, param_6);
            param_4 = param_6;
        }
        iVar2 = -iVar1;
        if (param_4 == false) {
            iVar2 = iVar1;
        }
        return iVar2;
    }

    // 0x10011f0d0, 368 bytes, placed by class name
    // GameWorld::CompareTo(GameWorld const&, GameWorld const&, int, bool)
    /* WARNING: Type propagation algorithm not settling */
    /* GameWorld::CompareTo(GameWorld const&, GameWorld
   const&, int, bool) */

    ulong GameWorld::CompareTo(GameWorld* param_1, GameWorld* param_2, int param_3, bool param_4) {
        int iVar1;
        int iVar2;
        bool bVar3;
        bool bVar4;
        char cVar5;
        byte bVar6;
        int iVar7;
        ulong uVar8;
        int iVar9;

        switch (param_3) {
        case 1:
            iVar1 = param_1->field_8;
            iVar7 = iVar1;
            if (iVar1 == -1) {
                iVar7 = 2001;
            }
            iVar2 = param_2->field_8;
            iVar9 = 2001;
            if (iVar2 != -1) {
                iVar9 = iVar2;
            }
            if (param_4) {
                iVar9 = iVar2;
                iVar7 = iVar1;
            }
            return (ulong)(uint)(iVar7 - iVar9);
        case 2:
            return (ulong)(uint)(param_1->field_80 - param_2->field_80);
        case 3:
            bVar3 = eastl::operator==((basic_string*)&param_1->field_48, (value_type*)&DAT_100e387fe);
            bVar4 = eastl::operator==((basic_string*)&param_2->field_48, (value_type*)&DAT_100e387fe);
            if (!bVar3) {
                if (bVar4) {
                    return (ulong)((uint)param_4 * 2 - 1);
                }
                uVar8 = (&param_1->field_48)->compare();
                return uVar8;
            }
            if (bVar4) {
                return 0;
            }
            return (ulong)((uint)!param_4 * 2 - 1);
        case 4:
            cVar5 = IsLootShare(param_1);
            bVar6 = IsLootShare(param_2);
            break;
        case 5:
            cVar5 = IsQuickChat(param_1);
            bVar6 = IsQuickChat(param_2);
            break;
        case 6:
            cVar5 = IsPVP(param_1);
            bVar6 = IsPVP(param_2);
            break;
        case 7:
            cVar5 = IsMembers(param_1);
            bVar6 = IsMembers(param_2);
            break;
        default:
            return (ulong)(uint)(*(int*)param_1 - *(int*)param_2);
        }
        if (cVar5 == '\0') {
            uVar8 = (ulong) - (uint)bVar6;
        } else {
            uVar8 = (ulong)(bVar6 ^ 1);
        }
        return uVar8;
    }

} // namespace jag::oldscape
