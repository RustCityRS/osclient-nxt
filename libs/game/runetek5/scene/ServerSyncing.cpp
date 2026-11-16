// libs/game/runetek5/scene/ServerSyncing.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.game.runetek5

#include "ServerSyncing.h"

namespace jag::game {
    // 0x100469290, 64 bytes, base-object constructor, placed by class name
    // ServerSyncing::ServerSyncing()
    void ServerSyncing::ServerSyncing() {
        new (this) Singleton<ServerSyncing>();
        new (this) eastl::fixed_list<ServerSyncingCycle, 32ul, true, eastl::allocator>();
        m_currentCycle = 0;
        field_56580 = 0;
    }

    // 0x100469330, 16 bytes, complete-object constructor, placed by class name
    // ServerSyncing::ServerSyncing(): jumps straight to the base-object constructor

    // 0x100469340, 48 bytes, placed by class name
    // ServerSyncing::Reset(int)
    void ServerSyncing::Reset(int param_1) {
        m_currentCycle = param_1;
        clear();
        field_56580 = 0;
    }

    // 0x1004693a0, 32 bytes, placed by class name
    // ServerSyncing::NewCycle()
    void ServerSyncing::NewCycle() {
        m_currentCycle = m_currentCycle + 1;
        CheckForStaleCycles(this);
    }

    // 0x1004693c0, 608 bytes, placed by class name
    // ServerSyncing::CheckForStaleCycles()
    void ServerSyncing::CheckForStaleCycles() {
        bool bVar1;
        char cVar2;
        int iVar3;
        int iVar4;
        uint uVar5;
        ServerSyncingCycle* pSVar6;
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base* extraout_RDX_00;
        hashtable_iterator_base* extraout_RDX_01;
        hashtable_iterator_base* extraout_RDX_02;
        ServerSyncing* this_00;
        list<jag::console::Line, eastl::allocator> local_878[8];
        list<jag::console::Line, eastl::allocator> local_870[8];
        list<jag::console::Line, eastl::allocator> local_860[2088];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        eastl::list<jag::console::Line, eastl::allocator>::begin(local_860);
        eastl::list<jag::console::Line, eastl::allocator>::end(local_870);
        bVar1 = eastl::operator!=((eastl*)local_860, (hashtable_iterator_base*)local_870, extraout_RDX);
        iVar3 = -1;
        if (bVar1) {
            iVar3 = -1;
            do {
                pSVar6 = (ServerSyncingCycle*)
                    eastl::ListIterator<jag::console::Line, jag::console::Line*, jag::console::Line&>::operator*(
                        (ListIterator<jag::console::Line, jag::console::Line*, jag::console::Line&>*)local_860);
                cVar2 = pSVar6->AllReady();
                if (cVar2 != '\0') {
                    iVar3 = pSVar6->GetX();
                    break;
                }
                eastl::ListIterator<jag::console::Line, jag::console::Line*, jag::console::Line&>::operator++(
                    (ListIterator<jag::console::Line, jag::console::Line*, jag::console::Line&>*)local_860);
                bVar1 = eastl::operator!=((eastl*)local_860, (hashtable_iterator_base*)local_870, extraout_RDX_00);
            } while (bVar1);
        }
        this_00 = (ServerSyncing*)this;
        if (0 < iVar3) {
            eastl::list<jag::console::Line, eastl::allocator>::begin(local_870);
            eastl::list<jag::console::Line, eastl::allocator>::end(local_878);
            bVar1 = eastl::operator!=((eastl*)local_870, (hashtable_iterator_base*)local_878, extraout_RDX_01);
            if (bVar1) {
                do {
                    pSVar6 = (ServerSyncingCycle*)
                        eastl::ListIterator<jag::console::Line, jag::console::Line*, jag::console::Line&>::operator*(
                            (ListIterator<jag::console::Line, jag::console::Line*, jag::console::Line&>*)local_870);
                    iVar4 = pSVar6->GetX();
                    if (iVar4 == iVar3)
                        break;
                    cVar2 = (&pSVar6->field_8)->empty();
                    if ((cVar2 != '\0') && (uVar5 = pSVar6->GetX(), uVar5 != this_00->m_currentCycle)) {
                        uVar5 = pSVar6->GetX();
                        RemoveCycle(this_00, uVar5);
                        break;
                    }
                    cVar2 = pSVar6->AllReady();
                    if ((((cVar2 == '\0') && (this_00->field_56580 != 0)) &&
                         (uVar5 = ((ServerSyncing*)this)->m_currentCycle, iVar4 = pSVar6->GetX(),
                          this_00 = (ServerSyncing*)this, iVar4 + 16U < uVar5)) &&
                        (uVar5 = pSVar6->GetX(), (uint)this_00->field_56580 < uVar5)) {
                        new (local_860) eastl::fixed_string<char, 2048, true, eastl::allocator>();
                        pSVar6->field_1688 = 0;
                        uVar5 = pSVar6->GetX();
                        RemoveCycle(this_00, uVar5);
                        /* WARNING: Subroutine does not return */
                        local_860->~fixed_string();
                    }
                    eastl::ListIterator<jag::console::Line, jag::console::Line*, jag::console::Line&>::operator++(
                        (ListIterator<jag::console::Line, jag::console::Line*, jag::console::Line&>*)local_870);
                    bVar1 = eastl::operator!=((eastl*)local_870, (hashtable_iterator_base*)local_878, extraout_RDX_02);
                } while (bVar1);
            }
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100469620, 160 bytes, placed by neighbouring functions
    // ServerSyncingCycle::AllReady() const
    ulong ServerSyncingCycle::AllReady() {
        bool bVar1;
        undefined7 extraout_var;
        long lVar2;
        undefined7 extraout_var_00;
        hashtable_iterator_base* extraout_RDX;
        ulong uVar3;
        undefined1 auVar4[16];
        undefined8 local_30;
        undefined8 local_28;

        local_28 = eastl::rbtree<eastl::string, eastl::pair<eastl::stringconst, bool>, eastl::less<eastl::string>,
                                 eastl::allocator, eastl::use_first<eastl::pair<eastl::stringconst, bool>>, true,
                                 true>::begin();
        auVar4 =
            eastl::rbtree<eastl::string, eastl::pair<eastl::stringconst, bool>, eastl::less<eastl::string>,
                          eastl::allocator, eastl::use_first<eastl::pair<eastl::stringconst, bool>>, true, true>::end();
        local_30 = auVar4._0_8_;
        bVar1 = eastl::operator!=((eastl*)&local_28, (hashtable_iterator_base*)&local_30, auVar4._8_8_);
        uVar3 = CONCAT71(extraout_var, bVar1) & 4294967295;
        if (bVar1) {
            lVar2 = eastl::rbtree_iterator<
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
            operator*((rbtree_iterator<
                       eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                       eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                       eastl::pair<unsigned int const,
                                   eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>*)&local_28);
            if (*(char*)(lVar2 + 8) != '\0') {
                do {
                    eastl::rbtree_iterator<
                        eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                        eastl::pair<unsigned int const,
                                    eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                        eastl::pair<unsigned int const,
                                    eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
                    operator++(
                        (rbtree_iterator<eastl::pair<unsigned int const,
                                                     eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                                         eastl::pair<unsigned int const,
                                                     eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                                         eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe,
                                                                                       eastl::allocator>>&>*)&local_28);
                    bVar1 = eastl::operator!=((eastl*)&local_28, (hashtable_iterator_base*)&local_30, extraout_RDX);
                    uVar3 = CONCAT71(extraout_var_00, bVar1) & 4294967295;
                    if (!bVar1)
                        break;
                    lVar2 = eastl::rbtree_iterator<
                        eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                        eastl::pair<unsigned int const,
                                    eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                        eastl::pair<unsigned int const,
                                    eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
                    operator*(
                        (rbtree_iterator<eastl::pair<unsigned int const,
                                                     eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                                         eastl::pair<unsigned int const,
                                                     eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                                         eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe,
                                                                                       eastl::allocator>>&>*)&local_28);
                } while (*(char*)(lVar2 + 8) != '\0');
            }
        }
        return uVar3 ^ 1;
    }

    // 0x1004696c0, 176 bytes, placed by class name
    // ServerSyncing::RemoveCycle(unsigned int)
    void ServerSyncing::RemoveCycle(uint param_1) {
        CoordMapSquare* this_00;
        bool bVar1;
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base* extraout_RDX_00;
        undefined1 local_48[8];
        list<jag::console::Line, eastl::allocator> local_40[8];
        undefined8 local_38;
        list<jag::console::Line, eastl::allocator> local_30[8];

        eastl::list<jag::console::Line, eastl::allocator>::end(local_40);
        eastl::list<jag::console::Line, eastl::allocator>::begin(local_30);
        bVar1 = eastl::operator!=((eastl*)local_30, (hashtable_iterator_base*)local_40, extraout_RDX);
        if (bVar1) {
            do {
                this_00 = (CoordMapSquare*)
                    eastl::ListIterator<jag::console::Line, jag::console::Line*, jag::console::Line&>::operator*(
                        (ListIterator<jag::console::Line, jag::console::Line*, jag::console::Line&>*)local_30);
                if (this_00->GetX() == param_1) {
                    new (&local_38)
                        eastl::ListIterator<shared_ptr<oldscape::rs2lib::worldmap::MapElement>,
                                            shared_ptr<oldscape::rs2lib::worldmap::MapElement> const*,
                                            shared_ptr<oldscape::rs2lib::worldmap::MapElement> const&>(local_30);
                    eastl::list<ServerSyncingCycle, eastl::fixed_node_allocator<1712ul, 32ul, 8ul, 0ul, true,
                                                                                eastl::allocator>>::erase(local_48,
                                                                                                          this,
                                                                                                          local_38);
                    return;
                }
                eastl::ListIterator<jag::console::Line, jag::console::Line*, jag::console::Line&>::operator++(
                    (ListIterator<jag::console::Line, jag::console::Line*, jag::console::Line&>*)local_30);
                bVar1 = eastl::operator!=((eastl*)local_30, (hashtable_iterator_base*)local_40, extraout_RDX_00);
            } while (bVar1);
        }
    }

    // 0x100469770, 320 bytes, placed by class name
    // ServerSyncing::Add(ServerSyncingUser&)
    void ServerSyncing::Add(ServerSyncingUser* param_1) {
        undefined4 uVar1;
        undefined4 uVar2;
        ServerSyncingCycle* this_00;
        undefined8 uVar3;
        GraphicsApp* pGVar4;
        undefined8 uVar5;
        LogStream local_c8;
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        if (m_currentCycle != 0) {
            this_00 = (ServerSyncingCycle*)GetSyncFrame(this, m_currentCycle);
            if (this_00 == (ServerSyncingCycle*)0) {
                /* WARNING: Subroutine does not return */
                LogAssert("serverCycle",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/"
                          "ServerSyncing.cpp",
                          193, (char*)0);
            }
            this_00->Add(param_1);
            uVar3 = logger::default_logger();
            pGVar4 = (GraphicsApp*)&local_c8;
            new (pGVar4) logger::LogStream((LogStream*)&LOGGER_SYNCING);
            pGVar4 = (GraphicsApp*)pGVar4->Instance();
            uVar1 = pGVar4->GetLogicTick();
            uVar2 = GetCurrentCycle(this);
            uVar5 = param_1->GetDescription();
            logger::Logger::Log(uVar3, 0, &local_c8, 8,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                "scene/ServerSyncing.cpp",
                                196, "ServerSyncing[%4u/%4u]: Added %s", uVar1, uVar2, uVar5);
            local_c8.~LogStream();
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x1004698b0, 928 bytes, placed by class name
    // ServerSyncing::GetSyncFrame(unsigned int)
    ServerSyncingCycle* ServerSyncing::GetSyncFrame(uint param_1) {
        char cVar1;
        bool bVar2;
        uint uVar3;
        ServerSyncingCycle* pSVar5;
        undefined8 uVar6;
        ServerSyncingCycle* pSVar7;
        CoordMapSquare* pCVar8;
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base* extraout_RDX_00;
        uint* puVar9;
        hashtable_iterator_base local_200[8];
        list<jag::console::Line, eastl::allocator> local_1f8[12];
        uint local_1ec;
        LogStream local_1e8;
        LogStream local_158;
        LogStream local_c8;
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        local_1ec = param_1;
        if (m_currentCycle == param_1) {
            cVar1 = empty();
            if (cVar1 == '\0') {
                pSVar5 = (ServerSyncingCycle*)
                    eastl::list<ServerSyncingCycle,
                                eastl::fixed_node_allocator<1712ul, 32ul, 8ul, 0ul, true, eastl::allocator>>::back();
                uVar3 = pSVar5->GetX();
                if (uVar3 == local_1ec)
                    goto LAB_100469c0b;
            }
            puVar9 = &m_currentCycle;
            uVar6 = logger::default_logger();
            new (&local_c8) logger::LogStream((LogStream*)&LOGGER_SYNCING);
            logger::Logger::Log(uVar6, 0, &local_c8, 8,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                "scene/ServerSyncing.cpp",
                                427, "Creating cycle %u [current]", *puVar9);
            local_c8.~LogStream();
        } else {
            eastl::list<jag::console::Line, eastl::allocator>::begin(local_1f8);
            local_200->end();
            bVar2 = eastl::operator!=((eastl*)local_1f8, local_200, extraout_RDX);
            pSVar5 = (ServerSyncingCycle*)local_200;
            if (bVar2) {
                pSVar7 = (ServerSyncingCycle*)
                    eastl::ListIterator<jag::console::Line, jag::console::Line*, jag::console::Line&>::operator*(
                        (ListIterator<jag::console::Line, jag::console::Line*, jag::console::Line&>*)local_1f8);
                uVar3 = pSVar7->GetX();
                pSVar5 = pSVar7;
                if (uVar3 != local_1ec) {
                    do {
                        eastl::ListIterator<jag::console::Line, jag::console::Line*, jag::console::Line&>::operator++(
                            (ListIterator<jag::console::Line, jag::console::Line*, jag::console::Line&>*)local_1f8);
                        bVar2 = eastl::operator!=((eastl*)local_1f8, local_200, extraout_RDX_00);
                        pSVar5 = pSVar7;
                        if (!bVar2)
                            break;
                        pSVar5 = (ServerSyncingCycle*)eastl::
                            ListIterator<jag::console::Line, jag::console::Line*, jag::console::Line&>::operator*(
                                (ListIterator<jag::console::Line, jag::console::Line*, jag::console::Line&>*)local_1f8);
                        uVar3 = pSVar5->GetX();
                    } while (uVar3 != local_1ec);
                }
            }
            if (bVar2 != false)
                goto LAB_100469c0b;
            cVar1 = empty();
            if (cVar1 == '\0') {
                pCVar8 = (CoordMapSquare*)
                    eastl::list<ServerSyncingCycle,
                                eastl::fixed_node_allocator<1712ul, 32ul, 8ul, 0ul, true, eastl::allocator>>::back();
                uVar3 = pCVar8->GetX();
                if (local_1ec < uVar3) {
                    uVar6 = logger::default_logger();
                    new (&local_158) logger::LogStream((LogStream*)&LOGGER_SYNCING);
                    logger::Logger::Log(uVar6, 0, &local_158, 8,
                                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/"
                                        "runetek5/scene/ServerSyncing.cpp",
                                        443, "Creating cycle %u [insert]", local_1ec);
                    local_158.~LogStream();
                    eastl::list<ServerSyncingCycle,
                                eastl::fixed_node_allocator<1712ul, 32ul, 8ul, 0ul, true, eastl::allocator>>::
                        emplace_back<unsigned int&>(
                            (list<ServerSyncingCycle,
                                  eastl::fixed_node_allocator<1712ul, 32ul, 8ul, 0ul, true, eastl::allocator>>*)this,
                            &local_1ec);
                    eastl::list<jag::console::Line, eastl::allocator>::end(local_1f8);
                    eastl::ListIterator<jag::console::Line, jag::console::Line*, jag::console::Line&>::operator--(
                        (ListIterator<jag::console::Line, jag::console::Line*, jag::console::Line&>*)local_1f8);
                    do {
                        new (local_200)
                            eastl::ListIterator<shared_ptr<oldscape::rs2lib::worldmap::MapElement>,
                                                shared_ptr<oldscape::rs2lib::worldmap::MapElement> const*,
                                                shared_ptr<oldscape::rs2lib::worldmap::MapElement> const&>(local_1f8);
                        eastl::ListIterator<jag::console::Line, jag::console::Line*, jag::console::Line&>::operator--(
                            (ListIterator<jag::console::Line, jag::console::Line*, jag::console::Line&>*)local_200);
                        pCVar8 = (CoordMapSquare*)eastl::
                            ListIterator<jag::console::Line, jag::console::Line*, jag::console::Line&>::operator*(
                                (ListIterator<jag::console::Line, jag::console::Line*, jag::console::Line&>*)local_1f8);
                        uVar3 = pCVar8->GetX();
                        pCVar8 = (CoordMapSquare*)eastl::
                            ListIterator<jag::console::Line, jag::console::Line*, jag::console::Line&>::operator*(
                                (ListIterator<jag::console::Line, jag::console::Line*, jag::console::Line&>*)local_200);
                        if (pCVar8->GetX() <= uVar3)
                            break;
                        pSVar5 = (ServerSyncingCycle*)eastl::
                            ListIterator<jag::console::Line, jag::console::Line*, jag::console::Line&>::operator*(
                                (ListIterator<jag::console::Line, jag::console::Line*, jag::console::Line&>*)local_200);
                        pSVar7 = (ServerSyncingCycle*)eastl::
                            ListIterator<jag::console::Line, jag::console::Line*, jag::console::Line&>::operator*(
                                (ListIterator<jag::console::Line, jag::console::Line*, jag::console::Line&>*)local_1f8);
                        eastl::swap<ServerSyncingCycle>(pSVar5, pSVar7);
                        local_1f8[0] = (list<jag::console::Line, eastl::allocator>)local_200[0];
                        local_1f8[1] = (list<jag::console::Line, eastl::allocator>)local_200[1];
                        local_1f8[2] = (list<jag::console::Line, eastl::allocator>)local_200[2];
                        local_1f8[3] = (list<jag::console::Line, eastl::allocator>)local_200[3];
                        local_1f8[4] = (list<jag::console::Line, eastl::allocator>)local_200[4];
                        local_1f8[5] = (list<jag::console::Line, eastl::allocator>)local_200[5];
                        local_1f8[6] = (list<jag::console::Line, eastl::allocator>)local_200[6];
                        local_1f8[7] = (list<jag::console::Line, eastl::allocator>)local_200[7];
                        pSVar5 = (ServerSyncingCycle*)eastl::
                            ListIterator<jag::console::Line, jag::console::Line*, jag::console::Line&>::operator*(
                                (ListIterator<jag::console::Line, jag::console::Line*, jag::console::Line&>*)local_1f8);
                        pSVar7 = (ServerSyncingCycle*)
                            eastl::list<ServerSyncingCycle, eastl::fixed_node_allocator<1712ul, 32ul, 8ul, 0ul, true,
                                                                                        eastl::allocator>>::front();
                        cVar1 = ServerSyncingCycle::operator==(pSVar5, pSVar7);
                    } while (cVar1 == '\0');
                    pSVar5 = (ServerSyncingCycle*)
                        eastl::ListIterator<jag::console::Line, jag::console::Line*, jag::console::Line&>::operator*(
                            (ListIterator<jag::console::Line, jag::console::Line*, jag::console::Line&>*)local_1f8);
                    goto LAB_100469c0b;
                }
            }
            uVar6 = logger::default_logger();
            new (&local_1e8) logger::LogStream((LogStream*)&LOGGER_SYNCING);
            logger::Logger::Log(uVar6, 0, &local_1e8, 8,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                "scene/ServerSyncing.cpp",
                                475, "Creating cycle %u [tail]", local_1ec);
            local_1e8.~LogStream();
            puVar9 = &local_1ec;
        }
        pSVar5 = eastl::list<ServerSyncingCycle,
                             eastl::fixed_node_allocator<1712ul, 32ul, 8ul, 0ul, true, eastl::allocator>>::
            emplace_back<unsigned int&>(
                (list<ServerSyncingCycle,
                      eastl::fixed_node_allocator<1712ul, 32ul, 8ul, 0ul, true, eastl::allocator>>*)this,
                puVar9);
    LAB_100469c0b:
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return pSVar5;
    }

    // 0x100469c50, 160 bytes, placed by __FILE__ string
    // ServerSyncingCycle::Add(ServerSyncingUser&)
    void ServerSyncingCycle::Add(ServerSyncingUser* param_1) {
        uint uVar1;
        undefined4* puVar3;

        if ((param_1->m_syncCycle != 0) || (param_1->field_4 != 4294967295)) {
            /* WARNING: Subroutine does not return */
            LogAssert("user.m_syncCycle == 0 && user.m_syncHandle == -1",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/"
                      "ServerSyncing.cpp",
                      482, (char*)0);
        }
        if (this_thread::IsMainThread() == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("this_thread::IsMainThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/"
                      "ServerSyncing.cpp",
                      483, (char*)0);
        }
        param_1->m_syncCycle = m_cycle;
        uVar1 = field_4;
        field_4 = uVar1 + 1;
        param_1->field_4 = uVar1;
        puVar3 = (undefined4*)eastl::map<int, ServerSyncingCycle::SyncUserEntry, eastl::less<int>,
                                         eastl::fixed_node_allocator<48ul, 32ul, 4ul, 0ul, true, eastl::allocator>>::
        operator[]((map<int, ServerSyncingCycle::SyncUserEntry, eastl::less<int>,
                        eastl::fixed_node_allocator<48ul, 32ul, 4ul, 0ul, true, eastl::allocator>>*)&field_8,
                   (int*)&param_1->field_4);
        *puVar3 = param_1->field_0;
        *(undefined1*)(puVar3 + 1) = 0;
    }

    // 0x100469d10, 512 bytes, placed by class name
    // ServerSyncing::Add(ServerSyncingUser&, unsigned int)
    void ServerSyncing::Add(ServerSyncingUser* param_1, uint param_2) {
        uint uVar1;
        undefined4 uVar2;
        undefined4 uVar3;
        undefined8 uVar4;
        GraphicsApp* pGVar5;
        undefined8 uVar6;
        ServerSyncingCycle* this_00;
        LogStream* this_01;
        LogStream local_158;
        LogStream local_c8;
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        if (param_2 == 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("sourceServerCycle",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/"
                      "ServerSyncing.cpp",
                      204, (char*)0);
        }
        if (param_2 + 4 < m_currentCycle) {
            uVar4 = logger::default_logger();
            pGVar5 = (GraphicsApp*)&local_158;
            new (pGVar5) logger::LogStream((LogStream*)&LOGGER_SYNCING);
            pGVar5 = (GraphicsApp*)pGVar5->Instance();
            uVar2 = pGVar5->GetLogicTick();
            uVar1 = m_currentCycle;
            uVar6 = param_1->GetDescription();
            logger::Logger::Log(uVar4, 0, &local_158, 8,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                "scene/ServerSyncing.cpp",
                                228, "ServerSyncing[%4u/%4u]: Ignoring %s because of age", uVar2, uVar1, uVar6);
            this_01 = &local_158;
        } else {
            this_00 = (ServerSyncingCycle*)GetSyncFrame(this, param_2);
            if (this_00 == (ServerSyncingCycle*)0) {
                /* WARNING: Subroutine does not return */
                LogAssert("serverCycle",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/"
                          "ServerSyncing.cpp",
                          219, (char*)0);
            }
            this_00->Add(param_1);
            uVar4 = logger::default_logger();
            pGVar5 = (GraphicsApp*)&local_c8;
            new (pGVar5) logger::LogStream((LogStream*)&LOGGER_SYNCING);
            pGVar5 = (GraphicsApp*)pGVar5->Instance();
            uVar2 = pGVar5->GetLogicTick();
            uVar3 = GetCurrentCycle(this);
            uVar6 = param_1->GetDescription();
            logger::Logger::Log(uVar4, 0, &local_c8, 8,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                "scene/ServerSyncing.cpp",
                                222, "ServerSyncing[%4u/%4u]: Added %s", uVar2, uVar3, uVar6);
            this_01 = &local_c8;
        }
        this_01->~LogStream();
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100469f10, 496 bytes, placed by class name
    // ServerSyncing::Remove(ServerSyncingUser&)
    void ServerSyncing::Remove(ServerSyncingUser* param_1) {
        char cVar1;
        undefined4 uVar2;
        undefined4 uVar3;
        undefined4 uVar4;
        uint uVar5;
        ServerSyncingCycle* this_00;
        undefined8 uVar6;
        GraphicsApp* pGVar7;
        undefined8 uVar8;
        GraphicsApp* pGVar9;
        LogStream local_158;
        LogStream local_c8;
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        if (param_1->m_syncCycle != 0) {
            this_00 = (ServerSyncingCycle*)GetSyncFrame(this, param_1->m_syncCycle);
            if (this_00 == (ServerSyncingCycle*)0) {
                param_1->field_4 = 4294967295;
                param_1->m_syncCycle = 0;
            } else {
                uVar6 = logger::default_logger();
                pGVar7 = (GraphicsApp*)&local_c8;
                new (pGVar7) logger::LogStream((LogStream*)&LOGGER_SYNCING);
                pGVar7 = (GraphicsApp*)pGVar7->Instance();
                uVar2 = pGVar7->GetLogicTick();
                uVar3 = GetCurrentCycle(this);
                uVar8 = param_1->GetDescription();
                logger::Logger::Log(uVar6, 0, &local_c8, 8,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/"
                                    "runetek5/scene/ServerSyncing.cpp",
                                    243, "ServerSyncing[%4u/%4u]: Erased %s", uVar2, uVar3, uVar8);
                uVar2 = (undefined4)((ulong)uVar8 >> 32);
                local_c8.~LogStream();
                this_00->Remove(param_1);
                cVar1 = (&this_00->field_8)->empty();
                if (cVar1 != '\0') {
                    uVar8 = logger::default_logger();
                    pGVar7 = (GraphicsApp*)&local_158;
                    pGVar9 = pGVar7;
                    new (pGVar7) logger::LogStream((LogStream*)&LOGGER_SYNCING);
                    pGVar7 = (GraphicsApp*)pGVar7->Instance();
                    uVar3 = pGVar7->GetLogicTick();
                    uVar5 = m_currentCycle;
                    uVar4 = this_00->GetX();
                    logger::Logger::Log(uVar8, 0, &local_158, 8,
                                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/"
                                        "runetek5/scene/ServerSyncing.cpp",
                                        252, "ServerSyncing[%4u/%4u]: Erasing server cycle %u", uVar3, uVar5,
                                        CONCAT44(uVar2, uVar4), uVar6, pGVar9);
                    local_158.~LogStream();
                    uVar5 = this_00->GetX();
                    RemoveCycle(this, uVar5);
                }
            }
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x10046a100, 176 bytes, placed by __FILE__ string
    // ServerSyncingCycle::Remove(ServerSyncingUser&)
    void ServerSyncingCycle::Remove(ServerSyncingUser* param_1) {
        hashtable_iterator_base* extraout_RDX;
        eastl local_40[8];
        hashtable_iterator_base local_38[8];
        undefined8 local_30;

        if (this_thread::IsMainThread() == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("this_thread::IsMainThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/"
                      "ServerSyncing.cpp",
                      495, (char*)0);
        }
        if ((param_1->m_syncCycle != 0) && (param_1->field_4 != 4294967295)) {
            eastl::rbtree<int, eastl::pair<int const, ServerSyncingCycle::SyncUserEntry>, eastl::less<int>,
                          eastl::fixed_node_allocator<48ul, 32ul, 4ul, 0ul, true, eastl::allocator>,
                          eastl::use_first<eastl::pair<int const, ServerSyncingCycle::SyncUserEntry>>, true,
                          true>::find((int*)local_40);
            eastl::rbtree<
                unsigned int,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                eastl::less<unsigned int>, eastl::allocator,
                eastl::use_first<
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>>,
                true, true>::end();
            if (eastl::operator!=(local_40, local_38, extraout_RDX)) {
                new (&local_30)
                    eastl::ListIterator<shared_ptr<oldscape::rs2lib::worldmap::MapElement>,
                                        shared_ptr<oldscape::rs2lib::worldmap::MapElement> const*,
                                        shared_ptr<oldscape::rs2lib::worldmap::MapElement> const&>(local_40);
                eastl::rbtree<int, eastl::pair<int const, unsigned long>, eastl::less<int>,
                              eastl::fixed_node_allocator<48ul, 1ul, 8ul, 0ul, true, eastl::allocator>,
                              eastl::use_first<eastl::pair<int const, unsigned long>>, true, true>::erase(local_38,
                                                                                                          &field_8,
                                                                                                          local_30);
            }
            param_1->field_4 = 4294967295;
            param_1->m_syncCycle = 0;
        }
    }

    // 0x10046a200, 64 bytes, placed by class name
    // ServerSyncing::CanBuild(ServerSyncingUser const&)
    byte ServerSyncing::CanBuild(ServerSyncingUser* param_1) {
        byte bVar1;
        ServerSyncingCycle* this_00;

        if ((param_1->m_syncCycle == 0) || (this_00 = (ServerSyncingCycle*)GetSyncFrame(this, param_1->m_syncCycle),
                                            this_00 == (ServerSyncingCycle*)0)) {
            bVar1 = 1;
        } else {
            bVar1 = this_00->CanBuild(param_1);
        }
        return bVar1 & 1;
    }

    // 0x10046a240, 208 bytes, placed by __FILE__ string
    // ServerSyncingCycle::CanBuild(ServerSyncingUser const&)
    ulong ServerSyncingCycle::CanBuild(ServerSyncingUser* param_1) {
        bool bVar2;
        undefined7 extraout_var;
        long lVar3;
        undefined7 extraout_var_00;
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base* extraout_RDX_00;
        ulong uVar4;
        hashtable_iterator_base local_38[8];
        eastl local_30[8];

        if (this_thread::IsMainThread() == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("this_thread::IsMainThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/"
                      "ServerSyncing.cpp",
                      510, (char*)0);
        }
        eastl::vector<unsigned long,
                      eastl::fixed_vector_allocator<8ul, 64ul, 8ul, 0ul, true, eastl::allocator>>::rbegin();
        eastl::rbtree<unsigned int,
                      eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                      eastl::less<unsigned int>, eastl::allocator,
                      eastl::use_first<eastl::pair<unsigned int const,
                                                   eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>>,
                      true, true>::end();
        bVar2 = eastl::operator!=(local_30, local_38, extraout_RDX);
        uVar4 = CONCAT71(extraout_var, bVar2) & 4294967295;
        if (bVar2) {
            lVar3 = eastl::rbtree_iterator<
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
            operator*(
                (rbtree_iterator<
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>*)
                    local_30);
            if (*(int*)(lVar3 + 4) <= (int)param_1->field_0) {
                do {
                    eastl::rbtree_iterator<
                        eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                        eastl::pair<unsigned int const,
                                    eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                        eastl::pair<unsigned int const,
                                    eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
                    operator++(
                        (rbtree_iterator<eastl::pair<unsigned int const,
                                                     eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                                         eastl::pair<unsigned int const,
                                                     eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                                         eastl::pair<unsigned int const,
                                                     eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>*)
                            local_30);
                    bVar2 = eastl::operator!=(local_30, local_38, extraout_RDX_00);
                    uVar4 = CONCAT71(extraout_var_00, bVar2) & 4294967295;
                    if (!bVar2)
                        break;
                    lVar3 = eastl::rbtree_iterator<
                        eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                        eastl::pair<unsigned int const,
                                    eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                        eastl::pair<unsigned int const,
                                    eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
                    operator*(
                        (rbtree_iterator<eastl::pair<unsigned int const,
                                                     eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                                         eastl::pair<unsigned int const,
                                                     eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                                         eastl::pair<unsigned int const,
                                                     eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>*)
                            local_30);
                } while (*(int*)(lVar3 + 4) <= (int)param_1->field_0);
            }
        }
        return uVar4 ^ 1;
    }

    // 0x10046a310, 64 bytes, placed by class name
    // ServerSyncing::SetReady(ServerSyncingUser const&, bool)
    void ServerSyncing::SetReady(ServerSyncingUser* param_1, bool param_2) {
        ServerSyncingCycle* this_00;

        if (param_1->m_syncCycle != 0) {
            this_00 = (ServerSyncingCycle*)GetSyncFrame(this, param_1->m_syncCycle);
            if (this_00 != (ServerSyncingCycle*)0) {
                this_00->SetReady(param_1, param_2);
            }
        }
    }

    // 0x10046a350, 368 bytes, placed by __FILE__ string
    // ServerSyncingCycle::SetReady(ServerSyncingUser const&, bool)
    void ServerSyncingCycle::SetReady(ServerSyncingUser* param_1, bool param_2) {
        undefined4 uVar3;
        long lVar4;
        undefined8 uVar5;
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base local_d8[8];
        eastl local_d0[8];
        LogStream local_c8;
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        if (this_thread::IsMainThread() == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("this_thread::IsMainThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/"
                      "ServerSyncing.cpp",
                      536, (char*)0);
        }
        if ((param_1->m_syncCycle == 0) || (param_1->field_4 == 4294967295)) {
            /* WARNING: Subroutine does not return */
            LogAssert("user.m_syncCycle != 0 && user.m_syncHandle != -1",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/"
                      "ServerSyncing.cpp",
                      537, (char*)0);
        }
        eastl::rbtree<int, eastl::pair<int const, ServerSyncingCycle::SyncUserEntry>, eastl::less<int>,
                      eastl::fixed_node_allocator<48ul, 32ul, 4ul, 0ul, true, eastl::allocator>,
                      eastl::use_first<eastl::pair<int const, ServerSyncingCycle::SyncUserEntry>>, true,
                      true>::find((int*)local_d0);
        eastl::rbtree<unsigned int,
                      eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                      eastl::less<unsigned int>, eastl::allocator,
                      eastl::use_first<eastl::pair<unsigned int const,
                                                   eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>>,
                      true, true>::end();
        if (eastl::operator!=(local_d0, local_d8, extraout_RDX)) {
            lVar4 = eastl::rbtree_iterator<
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
            operator*(
                (rbtree_iterator<
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>*)
                    local_d0);
            *(bool*)(lVar4 + 8) = param_2;
        } else {
            uVar5 = logger::default_logger();
            new (&local_c8) logger::LogStream((LogStream*)&LOGGER_SYNCING);
            uVar3 = param_1->GetPos();
            logger::Logger::Log(uVar5, 0, &local_c8, 3,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                "scene/ServerSyncing.cpp",
                                545, "Did not find ServerSyncingUser in cycle %d", uVar3);
            local_c8.~LogStream();
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x10046a4c0, 64 bytes, placed by class name
    // ServerSyncing::IsSynced(ServerSyncingUser const&)
    ulong ServerSyncing::IsSynced(ServerSyncingUser* param_1) {
        ServerSyncingUser* pSVar1;
        ulong uVar2;

        if (((param_1->m_syncCycle == 0) || (pSVar1 = (ServerSyncingUser*)GetSyncFrame(this, param_1->m_syncCycle),
                                             pSVar1 == (ServerSyncingUser*)0)) ||
            (uVar2 = ServerSyncingCycle::IsSynced(pSVar1), pSVar1 == (ServerSyncingUser*)0)) {
            uVar2 = 0;
        }
        return uVar2 & 18446744073709551361;
    }

    // 0x10046a500, 80 bytes, placed by neighbouring functions
    // ServerSyncingCycle::IsSynced(ServerSyncingUser const&)
    void ServerSyncingCycle::IsSynced(ServerSyncingUser* param_1) {
        hashtable_iterator_base* extraout_RDX;
        eastl local_30[8];
        hashtable_iterator_base local_28[8];

        eastl::rbtree<int, eastl::pair<int const, ServerSyncingCycle::SyncUserEntry>, eastl::less<int>,
                      eastl::fixed_node_allocator<48ul, 32ul, 4ul, 0ul, true, eastl::allocator>,
                      eastl::use_first<eastl::pair<int const, ServerSyncingCycle::SyncUserEntry>>, true,
                      true>::find((int*)local_30);
        eastl::rbtree<unsigned int,
                      eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                      eastl::less<unsigned int>, eastl::allocator,
                      eastl::use_first<eastl::pair<unsigned int const,
                                                   eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>>,
                      true, true>::end();
        eastl::operator!=(local_30, local_28, extraout_RDX);
    }

    // 0x10046a550, 432 bytes, placed by class name
    // ServerSyncing::IsReady(unsigned int, ServerSyncingUser const&)
    ulong ServerSyncing::IsReady(uint param_1, ServerSyncingUser* param_2) {
        char cVar1;
        bool bVar2;
        uint uVar3;
        uint uVar4;
        GraphicsApp* this_00;
        ServerSyncingCycle* this_01;
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base* extraout_RDX_00;
        undefined8 unaff_RBX;
        ulong uVar5;
        list<jag::console::Line, eastl::allocator>* this_02;
        int iVar6;
        list<jag::console::Line, eastl::allocator> local_58[8];
        list<jag::console::Line, eastl::allocator> local_38[8];

        this_00 = (GraphicsApp*)Instance();
        uVar3 = this_00->GetFrameCount();
        if (uVar3 < param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("GraphicsApp::Instance()->GetFrameCount() >= frameCount",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/"
                      "ServerSyncing.cpp",
                      331, (char*)0);
        }
        uVar3 = param_2->m_syncCycle;
        uVar5 = CONCAT71((int7)((ulong)unaff_RBX >> 8), 1);
        if (uVar3 != 0) {
            if (uVar3 == ((ServerSyncing*)this)->m_currentCycle) {
                uVar5 = 0;
            } else {
                cVar1 = ((ServerSyncing*)this)->empty();
                if (cVar1 == '\0') {
                    eastl::list<jag::console::Line, eastl::allocator>::begin(local_38);
                    this_02 = local_58;
                    eastl::list<jag::console::Line, eastl::allocator>::end(this_02);
                    bVar2 = eastl::operator!=((eastl*)local_38, (hashtable_iterator_base*)this_02, extraout_RDX);
                    if (bVar2) {
                        do {
                            this_01 = (ServerSyncingCycle*)eastl::
                                ListIterator<jag::console::Line, jag::console::Line*, jag::console::Line&>::operator*(
                                    (ListIterator<jag::console::Line, jag::console::Line*, jag::console::Line&>*)
                                        local_38);
                            uVar4 = this_01->GetX();
                            iVar6 = 1;
                            if (uVar3 < uVar4) {
                            LAB_10046a620:
                                this_02 = local_38;
                                goto LAB_10046a6e3;
                            }
                            uVar4 = this_01->GetX();
                            cVar1 = this_01->IsReady(param_1, param_2->field_0);
                            if (uVar4 == uVar3) {
                                if (cVar1 == '\0') {
                                    iVar6 = 2;
                                } else if (((ServerSyncing*)this)->field_56580 == 0) {
                                    ((ServerSyncing*)this)->field_56580 = ((ServerSyncing*)this)->m_currentCycle;
                                }
                                goto LAB_10046a620;
                            }
                            this_02 = local_38;
                            if (cVar1 == '\0') {
                                iVar6 = 2;
                                goto LAB_10046a6e3;
                            }
                            this_02 = local_38;
                            eastl::ListIterator<jag::console::Line, jag::console::Line*, jag::console::Line&>::
                            operator++(
                                (ListIterator<jag::console::Line, jag::console::Line*, jag::console::Line&>*)this_02);
                            bVar2 =
                                eastl::operator!=((eastl*)this_02, (hashtable_iterator_base*)local_58, extraout_RDX_00);
                        } while (bVar2);
                    }
                    iVar6 = 2;
                LAB_10046a6e3:
                    uVar5 = CONCAT71((int7)((ulong)this_02 >> 8), iVar6 != 2);
                }
            }
        }
        return uVar5 & 4294967295;
    }

    // 0x10046a700, 672 bytes, placed by __FILE__ string
    // ServerSyncingCycle::IsReady(unsigned int, ServerSyncingPriority) const
    bool ServerSyncingCycle::IsReady(uint param_1, int param_3) {
        int iVar1;
        bool bVar3;
        undefined4 uVar5;
        GraphicsApp* pGVar6;
        long lVar7;
        undefined8 uVar8;
        undefined8 extraout_RDX;
        LogStream* this_00;
        undefined1 auVar9[16];
        undefined8 local_168;
        undefined8 local_160;
        LogStream local_158;
        LogStream local_c8;
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        pGVar6 = (GraphicsApp*)this;
        if (this_thread::IsMainThread() == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("this_thread::IsMainThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/"
                      "ServerSyncing.cpp",
                      556, (char*)0);
        }
        pGVar6 = (GraphicsApp*)pGVar6->Instance();
        if (pGVar6->GetFrameCount() < param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("GraphicsApp::Instance()->GetFrameCount() >= frameCount",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/"
                      "ServerSyncing.cpp",
                      561, (char*)0);
        }
        if (param_3 < field_1688) {
            local_160 = eastl::rbtree<eastl::string, eastl::pair<eastl::stringconst, bool>, eastl::less<eastl::string>,
                                      eastl::allocator, eastl::use_first<eastl::pair<eastl::stringconst, bool>>, true,
                                      true>::begin();
            auVar9 = eastl::rbtree<eastl::string, eastl::pair<eastl::stringconst, bool>, eastl::less<eastl::string>,
                                   eastl::allocator, eastl::use_first<eastl::pair<eastl::stringconst, bool>>, true,
                                   true>::end();
            while (true) {
                local_168 = auVar9._0_8_;
                bVar3 = eastl::operator!=((eastl*)&local_160, (hashtable_iterator_base*)&local_168, auVar9._8_8_);
                if (!bVar3)
                    break;
                lVar7 = eastl::rbtree_iterator<
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
                operator*(
                    (rbtree_iterator<
                        eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                        eastl::pair<unsigned int const,
                                    eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                        eastl::pair<unsigned int const,
                                    eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>*)&local_160);
                if ((param_3 <= *(int*)(lVar7 + 4)) && (*(char*)(lVar7 + 8) == '\0')) {
                    if (bVar3)
                        goto LAB_10046a946;
                    break;
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
                                    eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>*)&local_160);
                auVar9._8_8_ = extraout_RDX;
                auVar9._0_8_ = local_168;
            }
            if (field_1688 == param_3) {
                /* WARNING: Subroutine does not return */
                LogAssert("m_completed != priority",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/"
                          "ServerSyncing.cpp",
                          584, (char*)0);
            }
            field_1688 = param_3;
            lVar7 = (&field_8)->capacity();
            iVar1 = field_1688;
            uVar8 = logger::default_logger();
            if (iVar1 < 1) {
                this_00 = &local_158;
                logger::LogStream::LogStream(this_00, (LogStream*)&LOGGER_SYNCING);
                uVar5 = GetX();
                logger::Logger::Log(uVar8, 0, this_00, 8,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/"
                                    "runetek5/scene/ServerSyncing.cpp",
                                    594, "ServerSyncing: Everything (%u users) in cycle %u is ready on frame %u",
                                    (int)lVar7, uVar5, param_1);
            } else {
                this_00 = &local_c8;
                logger::LogStream::LogStream(this_00, (LogStream*)&LOGGER_SYNCING);
                uVar5 = GetX();
                logger::Logger::Log(
                    uVar8, 0, this_00, 8,
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/"
                    "ServerSyncing.cpp",
                    590, "ServerSyncing: Everything (%u users) in cycle %u is ready at priority %d on frame %u",
                    (int)lVar7, uVar5, field_1688, param_1);
            }
            this_00->~LogStream();
            if (lVar7 == 1) {
                field_1692 = param_1 - 1;
                bVar3 = true;
            } else {
                field_1692 = param_1;
            LAB_10046a946:
                bVar3 = false;
            }
        } else {
            bVar3 = field_1692 < param_1;
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return bVar3;
    }

} // namespace jag::game
