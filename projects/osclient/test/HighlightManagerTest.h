// projects/osclient/test/HighlightManagerTest.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::oldscape::highlight {
    class HighlightManagerTest {
    public:
        void RunTests();
        void TestAddAndQueryNPCHighlight(HighlightManager&);
        void TestAddAndQueryLocHighlight(HighlightManager&);
        void TestAddAndQueryObjHighlight(HighlightManager&);
        void TestAddAndQueryPlayerHighlight(HighlightManager&);
        void TestAddAndQueryTileHighlight(HighlightManager&);
        void TestAddAndQueryNPCTypeHighlight(HighlightManager&);
        void TestAddAndQueryObjTypeHighlight(HighlightManager&);
        void TestAddAndQueryLocTypeHighlight(HighlightManager&);
        void TestAddAndQueryOpGroupHighlight(HighlightManager&);
    };

    // 0x1000aad90, 144 bytes, inline, placed by class name and debug map
    // HighlightManagerTest::RunTests()
    void HighlightManagerTest::RunTests() {
        HighlightManager* pHVar1;
        jag local_20[16];

        make_shared<HighlightManager>(local_20);
        pHVar1 = (HighlightManager*)shared_ptr<HighlightManager>::operator*((shared_ptr<HighlightManager>*)local_20);
        TestAddAndQueryNPCHighlight(pHVar1);
        TestAddAndQueryLocHighlight(pHVar1);
        TestAddAndQueryObjHighlight(pHVar1);
        TestAddAndQueryPlayerHighlight(pHVar1);
        TestAddAndQueryTileHighlight(pHVar1);
        TestAddAndQueryNPCTypeHighlight(pHVar1);
        TestAddAndQueryObjTypeHighlight(pHVar1);
        TestAddAndQueryLocTypeHighlight(pHVar1);
        TestAddAndQueryOpGroupHighlight(pHVar1);
        local_20->~shared_ptr();
    }

    // 0x1000aaef0, 752 bytes, inline, placed by class name and debug map
    // HighlightManagerTest::TestAddAndQueryNPCHighlight(HighlightManager&)
    void HighlightManagerTest::TestAddAndQueryNPCHighlight(HighlightManager* param_1) {
        undefined1* puVar1;
        char cVar2;
        int iVar3;
        undefined8 local_20;

        param_1->ConfigureChannel(0, 5, 0, 1, 128, 1);
        param_1->ConfigureChannel(0, 6, 0, 1, 128, 4);
        param_1->ConfigureChannel(0, 7, 0, 1, 128, 8);
        param_1->AddNPCHighlight(123, 456, 5);
        param_1->AddNPCHighlight(123, 456, 6);
        param_1->AddNPCHighlight(123, 456, 7);
        cVar2 = param_1->IsNPCHighlighted(123, 456, 5);
        if (cVar2 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("manager.IsNPCHighlighted(SLOT_ID, CREATION_CYCLE, 5)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/test/"
                      "HighlightManagerTest.h",
                      49, (char*)0);
        }
        cVar2 = param_1->IsNPCHighlighted(123, 456, 6);
        if (cVar2 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("manager.IsNPCHighlighted(SLOT_ID, CREATION_CYCLE, 6)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/test/"
                      "HighlightManagerTest.h",
                      50, (char*)0);
        }
        cVar2 = param_1->IsNPCHighlighted(123, 456, 7);
        if (cVar2 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("manager.IsNPCHighlighted(SLOT_ID, CREATION_CYCLE, 7)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/test/"
                      "HighlightManagerTest.h",
                      51, (char*)0);
        }
        local_20 = UniqueNPCKey(123, 456);
        puVar1 = &param_1->field_4112;
        iVar3 = HighlightManager::GetActiveChannel<long long>(param_1, &local_20, puVar1);
        if (iVar3 != 5) {
            /* WARNING: Subroutine does not return */
            LogAssert("manager.GetActiveChannel(UniqueNPCKey(SLOT_ID, CREATION_CYCLE), manager.m_highlightedNPCs, "
                      "HighlightCategory::NPC) == 5",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/test/"
                      "HighlightManagerTest.h",
                      53, (char*)0);
        }
        param_1->RemoveNPCHighlight(123, 456, 5);
        local_20 = UniqueNPCKey(123, 456);
        iVar3 = HighlightManager::GetActiveChannel<long long>(param_1, &local_20, puVar1);
        if (iVar3 != 6) {
            /* WARNING: Subroutine does not return */
            LogAssert("manager.GetActiveChannel(UniqueNPCKey(SLOT_ID, CREATION_CYCLE), manager.m_highlightedNPCs, "
                      "HighlightCategory::NPC) == 6",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/test/"
                      "HighlightManagerTest.h",
                      57, (char*)0);
        }
        param_1->ConfigureChannel(0, 6, 0, 0, 0, 0);
        local_20 = UniqueNPCKey(123, 456);
        iVar3 = HighlightManager::GetActiveChannel<long long>(param_1, &local_20, puVar1);
        if (iVar3 != 7) {
            /* WARNING: Subroutine does not return */
            LogAssert("manager.GetActiveChannel(UniqueNPCKey(SLOT_ID, CREATION_CYCLE), manager.m_highlightedNPCs, "
                      "HighlightCategory::NPC) == 7",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/test/"
                      "HighlightManagerTest.h",
                      61, (char*)0);
        }
        param_1->ConfigureChannel(0, 7, 0, 0, 0, 0);
        local_20 = UniqueNPCKey(123, 456);
        iVar3 = HighlightManager::GetActiveChannel<long long>(param_1, &local_20, puVar1);
        if (iVar3 != -1) {
            /* WARNING: Subroutine does not return */
            LogAssert("manager.GetActiveChannel(UniqueNPCKey(SLOT_ID, CREATION_CYCLE), manager.m_highlightedNPCs, "
                      "HighlightCategory::NPC) == -1",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/test/"
                      "HighlightManagerTest.h",
                      65, (char*)0);
        }
    }

    // 0x1000ab1e0, 880 bytes, inline, placed by class name and debug map
    // HighlightManagerTest::TestAddAndQueryLocHighlight(HighlightManager&)
    void HighlightManagerTest::TestAddAndQueryLocHighlight(HighlightManager* param_1) {
        char cVar1;
        int iVar2;
        int iVar3;
        undefined8 uVar4;
        EntityHighlight* pEVar5;
        CoordGrid local_38;
        undefined8 local_28;

        new (&local_38) rs2lib::CoordGrid(0, 50, 50);
        iVar2 = local_38.ToBitPacked();
        iVar3 = local_38.ToBitPacked();
        local_28 = UniqueStaticEntityKey(123, iVar3);
        param_1->ConfigureChannel(2, 5, 0, 1, 128, 1);
        param_1->ConfigureChannel(2, 6, 0, 1, 128, 4);
        param_1->ConfigureChannel(2, 7, 0, 1, 128, 8);
        param_1->AddLocHighlight(123, &local_38, 5, true, false);
        param_1->AddLocHighlight(123, &local_38, 6, true, false);
        param_1->AddLocHighlight(123, &local_38, 7, true, false);
        cVar1 = param_1->IsLocHighlighted(123, iVar2, 5, true);
        if (cVar1 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("manager.IsLocHighlighted(TYPE_ID, PACKED_COORD, 5, true)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/test/"
                      "HighlightManagerTest.h",
                      82, (char*)0);
        }
        cVar1 = param_1->IsLocHighlighted(123, iVar2, 6, true);
        if (cVar1 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("manager.IsLocHighlighted(TYPE_ID, PACKED_COORD, 6, true)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/test/"
                      "HighlightManagerTest.h",
                      83, (char*)0);
        }
        cVar1 = param_1->IsLocHighlighted(123, iVar2, 7, true);
        if (cVar1 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("manager.IsLocHighlighted(TYPE_ID, PACKED_COORD, 7, true)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/test/"
                      "HighlightManagerTest.h",
                      84, (char*)0);
        }
        uVar4 = param_1->GetLocHighlightMap(&local_38);
        pEVar5 = (EntityHighlight*)HighlightManager::GetHighlightProperties<long long>(param_1, &local_28, uVar4);
        if (pEVar5 != (EntityHighlight*)0) {
            cVar1 = pEVar5->HasModelOutline();
            if (cVar1 != '\0') {
                param_1->RemoveLocHighlight(123, &local_38, 5, true);
                uVar4 = param_1->GetLocHighlightMap(&local_38);
                pEVar5 =
                    (EntityHighlight*)HighlightManager::GetHighlightProperties<long long>(param_1, &local_28, uVar4);
                if (pEVar5 != (EntityHighlight*)0) {
                    cVar1 = pEVar5->HasModelFill();
                    if (cVar1 != '\0') {
                        param_1->ConfigureChannel(2, 6, 0, 0, 0, 0);
                        uVar4 = param_1->GetLocHighlightMap(&local_38);
                        pEVar5 = (EntityHighlight*)HighlightManager::GetHighlightProperties<long long>(
                            param_1, &local_28, uVar4);
                        if (pEVar5 != (EntityHighlight*)0) {
                            cVar1 = pEVar5->HasTileFill();
                            if (cVar1 != '\0') {
                                param_1->ConfigureChannel(2, 7, 0, 0, 0, 0);
                                uVar4 = param_1->GetObjHighlightMap(&local_38);
                                if (HighlightManager::GetHighlightProperties<long long>(param_1, &local_28, uVar4) !=
                                    (HighlightChannelProperties*)0) {
                                    /* WARNING: Subroutine does not return */
                                    LogAssert("manager.GetHighlightProperties(KEY, manager.GetObjHighlightMap(COORD), "
                                              "HighlightCategory::LOC) == nullptr",
                                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/"
                                              "projects/osclient/test/HighlightManagerTest.h",
                                              102, (char*)0);
                                }
                                return;
                            }
                        }
                        /* WARNING: Subroutine does not return */
                        LogAssert("highlight && highlight->m_properties.HasTileFill()",
                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                                  "test/HighlightManagerTest.h",
                                  98, (char*)0);
                    }
                }
                /* WARNING: Subroutine does not return */
                LogAssert("highlight && highlight->m_properties.HasModelFill()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/test/"
                          "HighlightManagerTest.h",
                          93, (char*)0);
            }
        }
        /* WARNING: Subroutine does not return */
        LogAssert("highlight && highlight->m_properties.HasModelOutline()",
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/test/"
                  "HighlightManagerTest.h",
                  88, (char*)0);
    }

    // 0x1000ab550, 880 bytes, inline, placed by class name and debug map
    // HighlightManagerTest::TestAddAndQueryObjHighlight(HighlightManager&)
    void HighlightManagerTest::TestAddAndQueryObjHighlight(HighlightManager* param_1) {
        char cVar1;
        int iVar2;
        int iVar3;
        undefined8 uVar4;
        EntityHighlight* pEVar5;
        CoordGrid local_38;
        undefined8 local_28;

        new (&local_38) rs2lib::CoordGrid(0, 50, 50);
        iVar2 = local_38.ToBitPacked();
        iVar3 = local_38.ToBitPacked();
        local_28 = UniqueStaticEntityKey(123, iVar3);
        param_1->ConfigureChannel(4, 5, 0, 1, 128, 1);
        param_1->ConfigureChannel(4, 6, 0, 1, 128, 4);
        param_1->ConfigureChannel(4, 7, 0, 1, 128, 8);
        param_1->AddObjHighlight(123, &local_38, 5, true, false);
        param_1->AddObjHighlight(123, &local_38, 6, true, false);
        param_1->AddObjHighlight(123, &local_38, 7, true, false);
        cVar1 = param_1->IsObjHighlighted(123, iVar2, 5, true);
        if (cVar1 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("manager.IsObjHighlighted(TYPE_ID, PACKED_COORD, 5, true)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/test/"
                      "HighlightManagerTest.h",
                      119, (char*)0);
        }
        cVar1 = param_1->IsObjHighlighted(123, iVar2, 6, true);
        if (cVar1 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("manager.IsObjHighlighted(TYPE_ID, PACKED_COORD, 6, true)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/test/"
                      "HighlightManagerTest.h",
                      120, (char*)0);
        }
        cVar1 = param_1->IsObjHighlighted(123, iVar2, 7, true);
        if (cVar1 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("manager.IsObjHighlighted(TYPE_ID, PACKED_COORD, 7, true)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/test/"
                      "HighlightManagerTest.h",
                      121, (char*)0);
        }
        uVar4 = param_1->GetObjHighlightMap(&local_38);
        pEVar5 = (EntityHighlight*)HighlightManager::GetHighlightProperties<long long>(param_1, &local_28, uVar4);
        if (pEVar5 != (EntityHighlight*)0) {
            cVar1 = pEVar5->HasModelOutline();
            if (cVar1 != '\0') {
                param_1->RemoveObjHighlight(123, &local_38, 5, true);
                uVar4 = param_1->GetObjHighlightMap(&local_38);
                pEVar5 =
                    (EntityHighlight*)HighlightManager::GetHighlightProperties<long long>(param_1, &local_28, uVar4);
                if (pEVar5 != (EntityHighlight*)0) {
                    cVar1 = pEVar5->HasModelFill();
                    if (cVar1 != '\0') {
                        param_1->ConfigureChannel(4, 6, 0, 0, 0, 0);
                        uVar4 = param_1->GetObjHighlightMap(&local_38);
                        pEVar5 = (EntityHighlight*)HighlightManager::GetHighlightProperties<long long>(
                            param_1, &local_28, uVar4);
                        if (pEVar5 != (EntityHighlight*)0) {
                            cVar1 = pEVar5->HasTileFill();
                            if (cVar1 != '\0') {
                                param_1->ConfigureChannel(4, 7, 0, 0, 0, 0);
                                uVar4 = param_1->GetObjHighlightMap(&local_38);
                                if (HighlightManager::GetHighlightProperties<long long>(param_1, &local_28, uVar4) !=
                                    (HighlightChannelProperties*)0) {
                                    /* WARNING: Subroutine does not return */
                                    LogAssert("manager.GetHighlightProperties(KEY, manager.GetObjHighlightMap(COORD), "
                                              "HighlightCategory::OBJ) == nullptr",
                                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/"
                                              "projects/osclient/test/HighlightManagerTest.h",
                                              139, (char*)0);
                                }
                                return;
                            }
                        }
                        /* WARNING: Subroutine does not return */
                        LogAssert("highlight && highlight->m_properties.HasTileFill()",
                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                                  "test/HighlightManagerTest.h",
                                  135, (char*)0);
                    }
                }
                /* WARNING: Subroutine does not return */
                LogAssert("highlight && highlight->m_properties.HasModelFill()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/test/"
                          "HighlightManagerTest.h",
                          130, (char*)0);
            }
        }
        /* WARNING: Subroutine does not return */
        LogAssert("highlight && highlight->m_properties.HasModelOutline()",
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/test/"
                  "HighlightManagerTest.h",
                  125, (char*)0);
    }

    // 0x1000ab8c0, 784 bytes, inline, placed by class name and debug map
    // HighlightManagerTest::TestAddAndQueryPlayerHighlight(HighlightManager&)
    void HighlightManagerTest::TestAddAndQueryPlayerHighlight(HighlightManager* param_1) {
        undefined1* puVar1;
        char cVar2;
        EntityHighlight* pEVar3;
        HighlightChannelProperties* pHVar4;
        allocator local_48[8];
        eastl::string local_40[32];

        eastl::allocator::allocator(local_48, "EASTL basic_string");
        eastl::string::basic_string(local_40, "Cow31337Killer", local_48);
        param_1->ConfigureChannel(6, 5, 0, 1, 128, 1);
        param_1->ConfigureChannel(6, 6, 0, 1, 128, 4);
        param_1->ConfigureChannel(6, 7, 0, 1, 128, 8);
        param_1->AddPlayerHighlight(local_40, 5, false);
        param_1->AddPlayerHighlight(local_40, 6, false);
        param_1->AddPlayerHighlight(local_40, 7, false);
        cVar2 = param_1->IsPlayerHighlighted(local_40, 5);
        if (cVar2 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("manager.IsPlayerHighlighted(PLAYER_NAME, 5)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/test/"
                      "HighlightManagerTest.h",
                      153, (char*)0);
        }
        cVar2 = param_1->IsPlayerHighlighted(local_40, 6);
        if (cVar2 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("manager.IsPlayerHighlighted(PLAYER_NAME, 6)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/test/"
                      "HighlightManagerTest.h",
                      154, (char*)0);
        }
        cVar2 = param_1->IsPlayerHighlighted(local_40, 7);
        if (cVar2 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("manager.IsPlayerHighlighted(PLAYER_NAME, 7)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/test/"
                      "HighlightManagerTest.h",
                      155, (char*)0);
        }
        puVar1 = &param_1->field_4168;
        pEVar3 = (EntityHighlight*)HighlightManager::GetHighlightProperties<eastl::string>(param_1, local_40, puVar1);
        if (pEVar3 != (EntityHighlight*)0) {
            cVar2 = pEVar3->HasModelOutline();
            if (cVar2 != '\0') {
                param_1->RemovePlayerHighlight(local_40, 5);
                pEVar3 = (EntityHighlight*)HighlightManager::GetHighlightProperties<eastl::string>(param_1, local_40,
                                                                                                   puVar1);
                if (pEVar3 != (EntityHighlight*)0) {
                    cVar2 = pEVar3->HasModelFill();
                    if (cVar2 != '\0') {
                        param_1->ConfigureChannel(6, 6, 0, 0, 0, 0);
                        pEVar3 = (EntityHighlight*)HighlightManager::GetHighlightProperties<eastl::string>(
                            param_1, local_40, puVar1);
                        if (pEVar3 != (EntityHighlight*)0) {
                            cVar2 = pEVar3->HasTileFill();
                            if (cVar2 != '\0') {
                                param_1->ConfigureChannel(6, 7, 0, 0, 0, 0);
                                pHVar4 =
                                    HighlightManager::GetHighlightProperties<eastl::string>(param_1, local_40, puVar1);
                                if (pHVar4 != (HighlightChannelProperties*)0) {
                                    /* WARNING: Subroutine does not return */
                                    LogAssert("manager.GetHighlightProperties(PLAYER_NAME, "
                                              "manager.m_highlightedPlayers, HighlightCategory::PLAYER) == nullptr",
                                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/"
                                              "projects/osclient/test/HighlightManagerTest.h",
                                              173, (char*)0);
                                }
                                eastl::string::~basic_string(local_40);
                                return;
                            }
                        }
                        /* WARNING: Subroutine does not return */
                        LogAssert("highlight && highlight->m_properties.HasTileFill()",
                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                                  "test/HighlightManagerTest.h",
                                  169, (char*)0);
                    }
                }
                /* WARNING: Subroutine does not return */
                LogAssert("highlight && highlight->m_properties.HasModelFill()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/test/"
                          "HighlightManagerTest.h",
                          164, (char*)0);
            }
        }
        /* WARNING: Subroutine does not return */
        LogAssert("highlight && highlight->m_properties.HasModelOutline()",
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/test/"
                  "HighlightManagerTest.h",
                  159, (char*)0);
    }

    // 0x1000abbd0, 816 bytes, inline, placed by class name and debug map
    // HighlightManagerTest::TestAddAndQueryTileHighlight(HighlightManager&)
    void HighlightManagerTest::TestAddAndQueryTileHighlight(HighlightManager* param_1) {
        char cVar1;
        undefined8 uVar2;
        EntityHighlight* pEVar3;
        HighlightChannelProperties* pHVar4;
        CoordGrid local_28;

        new (&local_28) rs2lib::CoordGrid(0, 50, 50);
        local_28._12_4_ = local_28.ToBitPacked();
        param_1->ConfigureChannel(7, 5, 0, 1, 128, 1);
        param_1->ConfigureChannel(7, 6, 0, 1, 128, 4);
        param_1->ConfigureChannel(7, 7, 0, 1, 128, 8);
        param_1->AddTileHighlight(&local_28, 5, true, false);
        param_1->AddTileHighlight(&local_28, 6, true, false);
        param_1->AddTileHighlight(&local_28, 7, true, false);
        cVar1 = param_1->IsTileHighlighted(local_28._12_4_, 5, true);
        if (cVar1 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("manager.IsTileHighlighted(PACKED_COORD, 5, true)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/test/"
                      "HighlightManagerTest.h",
                      188, (char*)0);
        }
        cVar1 = param_1->IsTileHighlighted(local_28._12_4_, 6, true);
        if (cVar1 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("manager.IsTileHighlighted(PACKED_COORD, 6, true)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/test/"
                      "HighlightManagerTest.h",
                      189, (char*)0);
        }
        cVar1 = param_1->IsTileHighlighted(local_28._12_4_, 7, true);
        if (cVar1 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("manager.IsTileHighlighted(PACKED_COORD, 7, true)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/test/"
                      "HighlightManagerTest.h",
                      190, (char*)0);
        }
        uVar2 = param_1->GetTileHighlightMap(&local_28);
        pEVar3 = (EntityHighlight*)HighlightManager::GetHighlightProperties<int>(param_1, &local_28.field_12, uVar2);
        if (pEVar3 != (EntityHighlight*)0) {
            cVar1 = pEVar3->HasModelOutline();
            if (cVar1 != '\0') {
                param_1->RemoveTileHighlight(&local_28, 5, true);
                uVar2 = param_1->GetTileHighlightMap(&local_28);
                pEVar3 =
                    (EntityHighlight*)HighlightManager::GetHighlightProperties<int>(param_1, &local_28.field_12, uVar2);
                if (pEVar3 != (EntityHighlight*)0) {
                    cVar1 = pEVar3->HasModelFill();
                    if (cVar1 != '\0') {
                        param_1->ConfigureChannel(7, 6, 0, 0, 0, 0);
                        uVar2 = param_1->GetTileHighlightMap(&local_28);
                        pEVar3 = (EntityHighlight*)HighlightManager::GetHighlightProperties<int>(
                            param_1, &local_28.field_12, uVar2);
                        if (pEVar3 != (EntityHighlight*)0) {
                            cVar1 = pEVar3->HasTileFill();
                            if (cVar1 != '\0') {
                                param_1->ConfigureChannel(7, 7, 0, 0, 0, 0);
                                uVar2 = param_1->GetTileHighlightMap(&local_28);
                                pHVar4 =
                                    HighlightManager::GetHighlightProperties<int>(param_1, &local_28.field_12, uVar2);
                                if (pHVar4 != (HighlightChannelProperties*)0) {
                                    /* WARNING: Subroutine does not return */
                                    LogAssert("manager.GetHighlightProperties(PACKED_COORD, "
                                              "manager.GetTileHighlightMap(COORD), HighlightCategory::TILE) == nullptr",
                                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/"
                                              "projects/osclient/test/HighlightManagerTest.h",
                                              208, (char*)0);
                                }
                                return;
                            }
                        }
                        /* WARNING: Subroutine does not return */
                        LogAssert("highlight && highlight->m_properties.HasTileFill()",
                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                                  "test/HighlightManagerTest.h",
                                  204, (char*)0);
                    }
                }
                /* WARNING: Subroutine does not return */
                LogAssert("highlight && highlight->m_properties.HasModelFill()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/test/"
                          "HighlightManagerTest.h",
                          199, (char*)0);
            }
        }
        /* WARNING: Subroutine does not return */
        LogAssert("highlight && highlight->m_properties.HasModelOutline()",
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/test/"
                  "HighlightManagerTest.h",
                  194, (char*)0);
    }

    // 0x1000abf00, 720 bytes, inline, placed by class name and debug map
    // HighlightManagerTest::TestAddAndQueryNPCTypeHighlight(HighlightManager&)
    void HighlightManagerTest::TestAddAndQueryNPCTypeHighlight(HighlightManager* param_1) {
        undefined1* puVar1;
        char cVar2;
        EntityHighlight* pEVar3;
        undefined4 local_1c;

        local_1c = 123;
        param_1->ConfigureChannel(1, 5, 0, 1, 128, 1);
        param_1->ConfigureChannel(1, 6, 0, 1, 128, 4);
        param_1->ConfigureChannel(1, 7, 0, 1, 128, 8);
        param_1->AddNPCTypeHighlight(123, 5, false);
        param_1->AddNPCTypeHighlight(123, 6, false);
        param_1->AddNPCTypeHighlight(123, 7, false);
        cVar2 = param_1->IsNPCTypeHighlighted(123, 5);
        if (cVar2 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("manager.IsNPCTypeHighlighted(TYPE_ID, 5)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/test/"
                      "HighlightManagerTest.h",
                      222, (char*)0);
        }
        cVar2 = param_1->IsNPCTypeHighlighted(123, 6);
        if (cVar2 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("manager.IsNPCTypeHighlighted(TYPE_ID, 6)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/test/"
                      "HighlightManagerTest.h",
                      223, (char*)0);
        }
        cVar2 = param_1->IsNPCTypeHighlighted(123, 7);
        if (cVar2 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("manager.IsNPCTypeHighlighted(TYPE_ID, 7)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/test/"
                      "HighlightManagerTest.h",
                      224, (char*)0);
        }
        puVar1 = &param_1->field_4224;
        pEVar3 = (EntityHighlight*)HighlightManager::GetGroupHighlightProperties<int>(param_1, &local_1c, puVar1);
        if (pEVar3 != (EntityHighlight*)0) {
            cVar2 = pEVar3->HasModelOutline();
            if (cVar2 != '\0') {
                param_1->RemoveNPCTypeHighlight(123, 5);
                pEVar3 =
                    (EntityHighlight*)HighlightManager::GetGroupHighlightProperties<int>(param_1, &local_1c, puVar1);
                if (pEVar3 != (EntityHighlight*)0) {
                    cVar2 = pEVar3->HasModelFill();
                    if (cVar2 != '\0') {
                        param_1->ConfigureChannel(1, 6, 0, 0, 0, 0);
                        pEVar3 = (EntityHighlight*)HighlightManager::GetGroupHighlightProperties<int>(
                            param_1, &local_1c, puVar1);
                        if (pEVar3 != (EntityHighlight*)0) {
                            cVar2 = pEVar3->HasTileFill();
                            if (cVar2 != '\0') {
                                param_1->ConfigureChannel(1, 7, 0, 0, 0, 0);
                                if (HighlightManager::GetGroupHighlightProperties<int>(param_1, &local_1c, puVar1) !=
                                    (HighlightChannelProperties*)0) {
                                    /* WARNING: Subroutine does not return */
                                    LogAssert("manager.GetGroupHighlightProperties(TYPE_ID, "
                                              "manager.m_highlightedNPCTypes, HighlightCategory::NPCTYPE) == nullptr",
                                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/"
                                              "projects/osclient/test/HighlightManagerTest.h",
                                              241, (char*)0);
                                }
                                return;
                            }
                        }
                        /* WARNING: Subroutine does not return */
                        LogAssert("highlight && highlight->m_properties.HasTileFill()",
                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                                  "test/HighlightManagerTest.h",
                                  237, (char*)0);
                    }
                }
                /* WARNING: Subroutine does not return */
                LogAssert("highlight && highlight->m_properties.HasModelFill()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/test/"
                          "HighlightManagerTest.h",
                          232, (char*)0);
            }
        }
        /* WARNING: Subroutine does not return */
        LogAssert("highlight && highlight->m_properties.HasModelOutline()",
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/test/"
                  "HighlightManagerTest.h",
                  227, (char*)0);
    }

    // 0x1000ac1d0, 720 bytes, inline, placed by class name and debug map
    // HighlightManagerTest::TestAddAndQueryObjTypeHighlight(HighlightManager&)
    void HighlightManagerTest::TestAddAndQueryObjTypeHighlight(HighlightManager* param_1) {
        undefined1* puVar1;
        char cVar2;
        EntityHighlight* pEVar3;
        undefined4 local_1c;

        local_1c = 123;
        param_1->ConfigureChannel(5, 5, 0, 1, 128, 1);
        param_1->ConfigureChannel(5, 6, 0, 1, 128, 4);
        param_1->ConfigureChannel(5, 7, 0, 1, 128, 8);
        param_1->AddObjTypeHighlight(123, 5, false);
        param_1->AddObjTypeHighlight(123, 6, false);
        param_1->AddObjTypeHighlight(123, 7, false);
        cVar2 = param_1->IsObjTypeHighlighted(123, 5);
        if (cVar2 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("manager.IsObjTypeHighlighted(TYPE_ID, 5)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/test/"
                      "HighlightManagerTest.h",
                      288, (char*)0);
        }
        cVar2 = param_1->IsObjTypeHighlighted(123, 6);
        if (cVar2 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("manager.IsObjTypeHighlighted(TYPE_ID, 6)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/test/"
                      "HighlightManagerTest.h",
                      289, (char*)0);
        }
        cVar2 = param_1->IsObjTypeHighlighted(123, 7);
        if (cVar2 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("manager.IsObjTypeHighlighted(TYPE_ID, 7)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/test/"
                      "HighlightManagerTest.h",
                      290, (char*)0);
        }
        puVar1 = &param_1->field_4336;
        pEVar3 = (EntityHighlight*)HighlightManager::GetGroupHighlightProperties<int>(param_1, &local_1c, puVar1);
        if (pEVar3 != (EntityHighlight*)0) {
            cVar2 = pEVar3->HasModelOutline();
            if (cVar2 != '\0') {
                param_1->RemoveObjTypeHighlight(123, 5);
                pEVar3 =
                    (EntityHighlight*)HighlightManager::GetGroupHighlightProperties<int>(param_1, &local_1c, puVar1);
                if (pEVar3 != (EntityHighlight*)0) {
                    cVar2 = pEVar3->HasModelFill();
                    if (cVar2 != '\0') {
                        param_1->ConfigureChannel(5, 6, 0, 0, 0, 0);
                        pEVar3 = (EntityHighlight*)HighlightManager::GetGroupHighlightProperties<int>(
                            param_1, &local_1c, puVar1);
                        if (pEVar3 != (EntityHighlight*)0) {
                            cVar2 = pEVar3->HasTileFill();
                            if (cVar2 != '\0') {
                                param_1->ConfigureChannel(5, 7, 0, 0, 0, 0);
                                if (HighlightManager::GetGroupHighlightProperties<int>(param_1, &local_1c, puVar1) !=
                                    (HighlightChannelProperties*)0) {
                                    /* WARNING: Subroutine does not return */
                                    LogAssert("manager.GetGroupHighlightProperties(TYPE_ID, "
                                              "manager.m_highlightedObjTypes, HighlightCategory::OBJTYPE) == nullptr",
                                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/"
                                              "projects/osclient/test/HighlightManagerTest.h",
                                              307, (char*)0);
                                }
                                return;
                            }
                        }
                        /* WARNING: Subroutine does not return */
                        LogAssert("highlight && highlight->m_properties.HasTileFill()",
                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                                  "test/HighlightManagerTest.h",
                                  303, (char*)0);
                    }
                }
                /* WARNING: Subroutine does not return */
                LogAssert("highlight && highlight->m_properties.HasModelFill()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/test/"
                          "HighlightManagerTest.h",
                          298, (char*)0);
            }
        }
        /* WARNING: Subroutine does not return */
        LogAssert("highlight && highlight->m_properties.HasModelOutline()",
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/test/"
                  "HighlightManagerTest.h",
                  293, (char*)0);
    }

    // 0x1000ac4a0, 720 bytes, inline, placed by class name and debug map
    // HighlightManagerTest::TestAddAndQueryLocTypeHighlight(HighlightManager&)
    void HighlightManagerTest::TestAddAndQueryLocTypeHighlight(HighlightManager* param_1) {
        undefined1* puVar1;
        char cVar2;
        EntityHighlight* pEVar3;
        undefined4 local_1c;

        local_1c = 123;
        param_1->ConfigureChannel(3, 5, 0, 1, 128, 1);
        param_1->ConfigureChannel(3, 6, 0, 1, 128, 4);
        param_1->ConfigureChannel(3, 7, 0, 1, 128, 8);
        param_1->AddLocTypeHighlight(123, 5, false);
        param_1->AddLocTypeHighlight(123, 6, false);
        param_1->AddLocTypeHighlight(123, 7, false);
        cVar2 = param_1->IsLocTypeHighlighted(123, 5);
        if (cVar2 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("manager.IsLocTypeHighlighted(TYPE_ID, 5)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/test/"
                      "HighlightManagerTest.h",
                      255, (char*)0);
        }
        cVar2 = param_1->IsLocTypeHighlighted(123, 6);
        if (cVar2 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("manager.IsLocTypeHighlighted(TYPE_ID, 6)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/test/"
                      "HighlightManagerTest.h",
                      256, (char*)0);
        }
        cVar2 = param_1->IsLocTypeHighlighted(123, 7);
        if (cVar2 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("manager.IsLocTypeHighlighted(TYPE_ID, 7)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/test/"
                      "HighlightManagerTest.h",
                      257, (char*)0);
        }
        puVar1 = &param_1->field_4280;
        pEVar3 = (EntityHighlight*)HighlightManager::GetGroupHighlightProperties<int>(param_1, &local_1c, puVar1);
        if (pEVar3 != (EntityHighlight*)0) {
            cVar2 = pEVar3->HasModelOutline();
            if (cVar2 != '\0') {
                param_1->RemoveLocTypeHighlight(123, 5);
                pEVar3 =
                    (EntityHighlight*)HighlightManager::GetGroupHighlightProperties<int>(param_1, &local_1c, puVar1);
                if (pEVar3 != (EntityHighlight*)0) {
                    cVar2 = pEVar3->HasModelFill();
                    if (cVar2 != '\0') {
                        param_1->ConfigureChannel(3, 6, 0, 0, 0, 0);
                        pEVar3 = (EntityHighlight*)HighlightManager::GetGroupHighlightProperties<int>(
                            param_1, &local_1c, puVar1);
                        if (pEVar3 != (EntityHighlight*)0) {
                            cVar2 = pEVar3->HasTileFill();
                            if (cVar2 != '\0') {
                                param_1->ConfigureChannel(3, 7, 0, 0, 0, 0);
                                if (HighlightManager::GetGroupHighlightProperties<int>(param_1, &local_1c, puVar1) !=
                                    (HighlightChannelProperties*)0) {
                                    /* WARNING: Subroutine does not return */
                                    LogAssert("manager.GetGroupHighlightProperties(TYPE_ID, "
                                              "manager.m_highlightedLocTypes, HighlightCategory::LOCTYPE) == nullptr",
                                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/"
                                              "projects/osclient/test/HighlightManagerTest.h",
                                              274, (char*)0);
                                }
                                return;
                            }
                        }
                        /* WARNING: Subroutine does not return */
                        LogAssert("highlight && highlight->m_properties.HasTileFill()",
                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                                  "test/HighlightManagerTest.h",
                                  270, (char*)0);
                    }
                }
                /* WARNING: Subroutine does not return */
                LogAssert("highlight && highlight->m_properties.HasModelFill()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/test/"
                          "HighlightManagerTest.h",
                          265, (char*)0);
            }
        }
        /* WARNING: Subroutine does not return */
        LogAssert("highlight && highlight->m_properties.HasModelOutline()",
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/test/"
                  "HighlightManagerTest.h",
                  260, (char*)0);
    }

    // 0x1000ac770, 1248 bytes, inline, placed by class name and debug map
    // HighlightManagerTest::TestAddAndQueryOpGroupHighlight(HighlightManager&)
    void HighlightManagerTest::TestAddAndQueryOpGroupHighlight(HighlightManager* param_1) {
        undefined1* puVar1;
        char cVar2;
        eastl::string* pbVar3;
        EntityHighlight* pEVar4;
        HighlightChannelProperties* pHVar5;
        undefined1 local_2f0[40];
        array<eastl::string, 10ul> local_2c8[320];
        undefined1 local_188[40];
        array<eastl::string, 10ul> local_160[320];

        new (local_188) OpGroup();
        local_188._0_4_ = 2;
        ((local_188 + 8))->assign("Goblin (level-3)");
        pbVar3 = (eastl::string*)std::array<eastl::string, 10ul>::operator[](local_160, 0);
        eastl::string::assign(pbVar3, "Attack");
        pbVar3 = (eastl::string*)std::array<eastl::string, 10ul>::operator[](local_160, 1);
        eastl::string::assign(pbVar3, "Talk-To");
        pbVar3 = (eastl::string*)std::array<eastl::string, 10ul>::operator[](local_160, 5);
        eastl::string::assign(pbVar3, "Examine");
        new (local_2f0) OpGroup();
        local_2f0._0_4_ = 3;
        ((local_2f0 + 8))->assign("Door");
        pbVar3 = (eastl::string*)std::array<eastl::string, 10ul>::operator[](local_2c8, 0);
        eastl::string::assign(pbVar3, "Open");
        pbVar3 = (eastl::string*)std::array<eastl::string, 10ul>::operator[](local_2c8, 5);
        eastl::string::assign(pbVar3, "Examine");
        param_1->ConfigureChannel(8, 5, 0, 1, 128, 1);
        param_1->ConfigureChannel(8, 6, 0, 1, 128, 4);
        param_1->ConfigureChannel(8, 7, 0, 1, 128, 8);
        param_1->AddOpGroupHighlight(local_188, 5, false);
        param_1->AddOpGroupHighlight(local_188, 6, false);
        param_1->AddOpGroupHighlight(local_188, 7, false);
        cVar2 = param_1->IsOpGroupHighlighted(local_188, 5);
        if (cVar2 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("manager.IsOpGroupHighlighted(groupA, 5)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/test/"
                      "HighlightManagerTest.h",
                      331, (char*)0);
        }
        cVar2 = param_1->IsOpGroupHighlighted(local_188, 6);
        if (cVar2 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("manager.IsOpGroupHighlighted(groupA, 6)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/test/"
                      "HighlightManagerTest.h",
                      332, (char*)0);
        }
        cVar2 = param_1->IsOpGroupHighlighted(local_188, 7);
        if (cVar2 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("manager.IsOpGroupHighlighted(groupA, 7)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/test/"
                      "HighlightManagerTest.h",
                      333, (char*)0);
        }
        cVar2 = param_1->IsOpGroupHighlighted(local_2f0, 5);
        if (cVar2 != '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("!manager.IsOpGroupHighlighted(groupB, 5)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/test/"
                      "HighlightManagerTest.h",
                      334, (char*)0);
        }
        puVar1 = &param_1->field_4392;
        pEVar4 = (EntityHighlight*)HighlightManager::GetGroupHighlightProperties<OpGroup>(param_1, local_188, puVar1);
        if (pEVar4 != (EntityHighlight*)0) {
            cVar2 = pEVar4->HasModelOutline();
            if (cVar2 != '\0') {
                param_1->RemoveOpGroupHighlight(local_188, 5);
                pEVar4 = (EntityHighlight*)HighlightManager::GetGroupHighlightProperties<OpGroup>(param_1, local_188,
                                                                                                  puVar1);
                if (pEVar4 != (EntityHighlight*)0) {
                    cVar2 = pEVar4->HasModelFill();
                    if (cVar2 != '\0') {
                        param_1->AddOpGroupHighlight(local_2f0, 6, false);
                        pEVar4 = (EntityHighlight*)HighlightManager::GetGroupHighlightProperties<OpGroup>(
                            param_1, local_2f0, puVar1);
                        if (pEVar4 != (EntityHighlight*)0) {
                            cVar2 = pEVar4->HasModelFill();
                            if (cVar2 != '\0') {
                                param_1->ConfigureChannel(8, 6, 0, 0, 0, 0);
                                pEVar4 = (EntityHighlight*)HighlightManager::GetGroupHighlightProperties<OpGroup>(
                                    param_1, local_188, puVar1);
                                if (pEVar4 != (EntityHighlight*)0) {
                                    cVar2 = pEVar4->HasTileFill();
                                    if (cVar2 != '\0') {
                                        pHVar5 = HighlightManager::GetGroupHighlightProperties<OpGroup>(
                                            param_1, local_2f0, puVar1);
                                        if (pHVar5 != (HighlightChannelProperties*)0) {
                                            /* WARNING: Subroutine does not return */
                                            LogAssert(
                                                "manager.GetGroupHighlightProperties(groupB, "
                                                "manager.m_highlightedOpGroups, HighlightCategory::OPGROUP) == nullptr",
                                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/"
                                                "projects/osclient/test/HighlightManagerTest.h",
                                                354, (char*)0);
                                        }
                                        param_1->ConfigureChannel(8, 7, 0, 0, 0, 0);
                                        pHVar5 = HighlightManager::GetGroupHighlightProperties<OpGroup>(
                                            param_1, local_188, puVar1);
                                        if (pHVar5 != (HighlightChannelProperties*)0) {
                                            /* WARNING: Subroutine does not return */
                                            LogAssert(
                                                "manager.GetGroupHighlightProperties(groupA, "
                                                "manager.m_highlightedOpGroups, HighlightCategory::OPGROUP) == nullptr",
                                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/"
                                                "projects/osclient/test/HighlightManagerTest.h",
                                                358, (char*)0);
                                        }
                                        local_2f0->~OpGroup();
                                        local_188->~OpGroup();
                                        return;
                                    }
                                }
                                /* WARNING: Subroutine does not return */
                                LogAssert("highlight && highlight->m_properties.HasTileFill()",
                                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/"
                                          "osclient/test/HighlightManagerTest.h",
                                          352, (char*)0);
                            }
                        }
                        /* WARNING: Subroutine does not return */
                        LogAssert("highlight && highlight->m_properties.HasModelFill()",
                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                                  "test/HighlightManagerTest.h",
                                  347, (char*)0);
                    }
                }
                /* WARNING: Subroutine does not return */
                LogAssert("highlight && highlight->m_properties.HasModelFill()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/test/"
                          "HighlightManagerTest.h",
                          342, (char*)0);
            }
        }
        /* WARNING: Subroutine does not return */
        LogAssert("highlight && highlight->m_properties.HasModelOutline()",
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/test/"
                  "HighlightManagerTest.h",
                  337, (char*)0);
    }

} // namespace jag::oldscape::highlight

namespace jag {
    // 0x1000aae20, 144 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<oldscape::highlight::HighlightManager>::type make_shared<oldscape::highlight::HighlightManager>()
    jag* make_shared<oldscape::highlight::HighlightManager>() {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_2c;
        HighlightManager* local_28[2];

        pvVar1 = (void*)aligned_alloc(4305456, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_28[0] = placement_new<oldscape::highlight::HighlightManager>((void*)((long)pvVar1 + 32));
            local_2c = 1;
            prVar2 = placement_new<ref_counter_shared<oldscape::highlight::HighlightManager>, int,
                                   oldscape::highlight::HighlightManager*&>(pvVar1, &local_2c, local_28);
            prVar2->~AutoSingleton(local_28[0]);
            prVar2->~AutoSingleton(local_28[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_28[0]);
        }
        return this;
    }

    // 0x1000acc50, 32 bytes, inline, placed by debug map only (low confidence)
    // oldscape::highlight::HighlightManager* placement_new<oldscape::highlight::HighlightManager>(void*)
    HighlightManager* placement_new<oldscape::highlight::HighlightManager>(void* param_1) {
        oldscape::highlight::HighlightManager::HighlightManager(param_1);
        return param_1;
    }

    // 0x1000acc70, 32 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::highlight::HighlightManager>* placement_new<ref_counter_shared<oldscape::highlight::HighlightManager>, int, oldscape::highlight::HighlightManager*&>(void*, int&&, oldscape::highlight::HighlightManager*&)
    ref_counter_shared* jag::placement_new<ref_counter_shared<oldscape::highlight::HighlightManager>, int,
                                           oldscape::highlight::HighlightManager*&>(void* param_1, int* param_2,
                                                                                    HighlightManager** param_3) {
        ref_counter_shared<oldscape::highlight::HighlightManager>::ref_counter_shared(param_1, (long)*param_2,
                                                                                      *param_3);
        return param_1;
    }

    // 0x1000acc90, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::highlight::HighlightManager>::ref_counter_shared(unsigned long, oldscape::highlight::HighlightManager*): jumps straight to the base-object constructor

    // 0x1000acca0, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::highlight::HighlightManager>::ref_counter_shared(unsigned long, oldscape::highlight::HighlightManager*)
    void ref_counter_shared<oldscape::highlight::HighlightManager>::ref_counter_shared(ulong param_1,
                                                                                       HighlightManager* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7980 + 16;
        *(ulong*)(this + 16) = param_1;
        *(HighlightManager**)(this + 24) = param_2;
    }

    // 0x1000acce0, 80 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::highlight::HighlightManager>::DeleteData()
    void ref_counter_shared<oldscape::highlight::HighlightManager>::DeleteData() {
        ulong uVar1;
        long lVar2;

        if (*(long*)(this + 24) != 0) {
            if (*(long*)(this + 16) != 0) {
                lVar2 = 0;
                uVar1 = 0;
                do {
                    ((*(long*)(this + 24) + lVar2))->~HighlightManager();
                    uVar1 = uVar1 + 1;
                    lVar2 = lVar2 + 4305424;
                } while (uVar1 < *(ulong*)(this + 16));
            }
            *(undefined8*)(this + 24) = 0;
        }
    }

} // namespace jag
