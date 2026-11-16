// projects/osclient/test/HighlightManagerTest.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::oldscape::highlight {
    class HighlightManagerTest {
    public:
        void RunTests();
        void TestAddAndQueryNPCHighlight(HighlightManager& highlightManager);
        void TestAddAndQueryLocHighlight(HighlightManager& highlightManager);
        void TestAddAndQueryObjHighlight(HighlightManager& highlightManager);
        void TestAddAndQueryPlayerHighlight(HighlightManager& highlightManager);
        void TestAddAndQueryTileHighlight(HighlightManager& highlightManager);
        void TestAddAndQueryNPCTypeHighlight(HighlightManager& highlightManager);
        void TestAddAndQueryObjTypeHighlight(HighlightManager& highlightManager);
        void TestAddAndQueryLocTypeHighlight(HighlightManager& highlightManager);
        void TestAddAndQueryOpGroupHighlight(HighlightManager& highlightManager);

        uint8_t _unknown_0[1];
    };

    // 0x1000aad90
    void HighlightManagerTest::RunTests() {
        HighlightManager* highlightManager;
        ReturnValue local_20;

        make_shared<HighlightManager>(&local_20);
        highlightManager = (HighlightManager*)*local_20;
        TestAddAndQueryNPCHighlight(highlightManager);
        TestAddAndQueryLocHighlight(highlightManager);
        TestAddAndQueryObjHighlight(highlightManager);
        TestAddAndQueryPlayerHighlight(highlightManager);
        TestAddAndQueryTileHighlight(highlightManager);
        TestAddAndQueryNPCTypeHighlight(highlightManager);
        TestAddAndQueryObjTypeHighlight(highlightManager);
        TestAddAndQueryLocTypeHighlight(highlightManager);
        TestAddAndQueryOpGroupHighlight(highlightManager);
    }

    // 0x1000aaef0
    void HighlightManagerTest::TestAddAndQueryNPCHighlight(HighlightManager& highlightManager) {
        HighlightCategory highlightCategory = (HighlightCategory)highlightManager;
        HighlightManager::ConfigureChannel(highlightCategory, 0, 5, 0, '\x01', 128);
        HighlightManager::ConfigureChannel(highlightCategory, 0, 6, 0, '\x01', 128);
        HighlightManager::ConfigureChannel(highlightCategory, 0, 7, 0, '\x01', 128);
        highlightManager.AddNPCHighlight(123, 456, 5);
        highlightManager.AddNPCHighlight(123, 456, 6);
        highlightManager.AddNPCHighlight(123, 456, 7);
        if (!(highlightManager.IsNPCHighlighted(123, 456, 5))) {
            LogAssert("manager.IsNPCHighlighted(SLOT_ID, CREATION_CYCLE, 5)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/test/"
                      "HighlightManagerTest.h",
                      49, nullptr);
        }
        if (!(highlightManager.IsNPCHighlighted(123, 456, 6))) {
            LogAssert("manager.IsNPCHighlighted(SLOT_ID, CREATION_CYCLE, 6)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/test/"
                      "HighlightManagerTest.h",
                      50, nullptr);
        }
        if (!(highlightManager.IsNPCHighlighted(123, 456, 7))) {
            LogAssert("manager.IsNPCHighlighted(SLOT_ID, CREATION_CYCLE, 7)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/test/"
                      "HighlightManagerTest.h",
                      51, nullptr);
        }
        long long local_20 = UniqueNPCKey(123, 456);
        uint8_t* arg2 = &highlightManager.field_4112;
        int iVar2 = highlightManager.GetActiveChannel<long long>(local_20, *arg2, 0);
        if (iVar2 != 5) {
            LogAssert("manager.GetActiveChannel(UniqueNPCKey(SLOT_ID, CREATION_CYCLE), manager.m_highlightedNPCs, "
                      "HighlightCategory::NPC) == 5",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/test/"
                      "HighlightManagerTest.h",
                      53, nullptr);
        }
        highlightManager.RemoveNPCHighlight(123, 456, 5);
        local_20 = UniqueNPCKey(123, 456);
        iVar2 = highlightManager.GetActiveChannel<long long>(local_20, *arg2, 0);
        if (iVar2 != 6) {
            LogAssert("manager.GetActiveChannel(UniqueNPCKey(SLOT_ID, CREATION_CYCLE), manager.m_highlightedNPCs, "
                      "HighlightCategory::NPC) == 6",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/test/"
                      "HighlightManagerTest.h",
                      57, nullptr);
        }
        HighlightManager::ConfigureChannel(highlightCategory, 0, 6, 0, '\0', 0);
        local_20 = UniqueNPCKey(123, 456);
        iVar2 = highlightManager.GetActiveChannel<long long>(local_20, *arg2, 0);
        if (iVar2 != 7) {
            LogAssert("manager.GetActiveChannel(UniqueNPCKey(SLOT_ID, CREATION_CYCLE), manager.m_highlightedNPCs, "
                      "HighlightCategory::NPC) == 7",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/test/"
                      "HighlightManagerTest.h",
                      61, nullptr);
        }
        HighlightManager::ConfigureChannel(highlightCategory, 0, 7, 0, '\0', 0);
        local_20 = UniqueNPCKey(123, 456);
        iVar2 = highlightManager.GetActiveChannel<long long>(local_20, *arg2, 0);
        if (iVar2 != -1) {
            LogAssert("manager.GetActiveChannel(UniqueNPCKey(SLOT_ID, CREATION_CYCLE), manager.m_highlightedNPCs, "
                      "HighlightCategory::NPC) == -1",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/test/"
                      "HighlightManagerTest.h",
                      65, nullptr);
        }
    }

    // 0x1000ab1e0
    void HighlightManagerTest::TestAddAndQueryLocHighlight(HighlightManager& highlightManager) {
        CoordGrid local_38(0, 50, 50);
        int arg2 = local_38.ToBitPacked();
        int arg2_00 = local_38.ToBitPacked();
        long long local_28 = UniqueStaticEntityKey(123, arg2_00);
        HighlightManager::ConfigureChannel((HighlightCategory)highlightManager, 2, 5, 0, '\x01', 128);
        HighlightManager::ConfigureChannel((HighlightCategory)highlightManager, 2, 6, 0, '\x01', 128);
        HighlightManager::ConfigureChannel((HighlightCategory)highlightManager, 2, 7, 0, '\x01', 128);
        highlightManager.AddLocHighlight(123, local_38, 5, true, false);
        highlightManager.AddLocHighlight(123, local_38, 6, true, false);
        highlightManager.AddLocHighlight(123, local_38, 7, true, false);
        if (!(highlightManager.IsLocHighlighted(123, arg2, 5, true))) {
            LogAssert("manager.IsLocHighlighted(TYPE_ID, PACKED_COORD, 5, true)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/test/"
                      "HighlightManagerTest.h",
                      82, nullptr);
        }
        if (!(highlightManager.IsLocHighlighted(123, arg2, 6, true))) {
            LogAssert("manager.IsLocHighlighted(TYPE_ID, PACKED_COORD, 6, true)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/test/"
                      "HighlightManagerTest.h",
                      83, nullptr);
        }
        if (!(highlightManager.IsLocHighlighted(123, arg2, 7, true))) {
            LogAssert("manager.IsLocHighlighted(TYPE_ID, PACKED_COORD, 7, true)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/test/"
                      "HighlightManagerTest.h",
                      84, nullptr);
        }
        auto phVar2 = highlightManager.GetLocHighlightMap(local_38);
        auto pEVar3 = highlightManager.GetHighlightProperties<long long>(local_28, *phVar2, 2);
        if (pEVar3 != nullptr) {
            if (pEVar3->HasModelOutline()) {
                highlightManager.RemoveLocHighlight(123, local_38, 5, true);
                phVar2 = highlightManager.GetLocHighlightMap(local_38);
                pEVar3 = (EntityHighlight*)highlightManager.GetHighlightProperties<long long>(local_28, *phVar2, 2);
                if (pEVar3 != nullptr) {
                    if (pEVar3->HasModelFill()) {
                        HighlightManager::ConfigureChannel((HighlightCategory)highlightManager, 2, 6, 0, '\0', 0);
                        phVar2 = highlightManager.GetLocHighlightMap(local_38);
                        pEVar3 =
                            (EntityHighlight*)highlightManager.GetHighlightProperties<long long>(local_28, *phVar2, 2);
                        if (pEVar3 != nullptr) {
                            if (pEVar3->HasTileFill()) {
                                HighlightManager::ConfigureChannel((HighlightCategory)highlightManager, 2, 7, 0, '\0',
                                                                   0);
                                phVar2 = highlightManager.GetObjHighlightMap(local_38);
                                if (highlightManager.GetHighlightProperties<long long>(local_28, *phVar2, 2) !=
                                    nullptr) {
                                    LogAssert("manager.GetHighlightProperties(KEY, manager.GetObjHighlightMap(COORD), "
                                              "HighlightCategory::LOC) == nullptr",
                                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/"
                                              "projects/osclient/test/HighlightManagerTest.h",
                                              102, nullptr);
                                }
                                return;
                            }
                        }
                        LogAssert("highlight && highlight->m_properties.HasTileFill()",
                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                                  "test/HighlightManagerTest.h",
                                  98, nullptr);
                    }
                }
                LogAssert("highlight && highlight->m_properties.HasModelFill()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/test/"
                          "HighlightManagerTest.h",
                          93, nullptr);
            }
        }
        LogAssert("highlight && highlight->m_properties.HasModelOutline()",
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/test/"
                  "HighlightManagerTest.h",
                  88, nullptr);
    }

    // 0x1000ab550
    void HighlightManagerTest::TestAddAndQueryObjHighlight(HighlightManager& highlightManager) {
        CoordGrid local_38(0, 50, 50);
        int arg2 = local_38.ToBitPacked();
        int arg2_00 = local_38.ToBitPacked();
        long long local_28 = UniqueStaticEntityKey(123, arg2_00);
        HighlightManager::ConfigureChannel((HighlightCategory)highlightManager, 4, 5, 0, '\x01', 128);
        HighlightManager::ConfigureChannel((HighlightCategory)highlightManager, 4, 6, 0, '\x01', 128);
        HighlightManager::ConfigureChannel((HighlightCategory)highlightManager, 4, 7, 0, '\x01', 128);
        highlightManager.AddObjHighlight(123, local_38, 5, true, false);
        highlightManager.AddObjHighlight(123, local_38, 6, true, false);
        highlightManager.AddObjHighlight(123, local_38, 7, true, false);
        if (!(highlightManager.IsObjHighlighted(123, arg2, 5, true))) {
            LogAssert("manager.IsObjHighlighted(TYPE_ID, PACKED_COORD, 5, true)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/test/"
                      "HighlightManagerTest.h",
                      119, nullptr);
        }
        if (!(highlightManager.IsObjHighlighted(123, arg2, 6, true))) {
            LogAssert("manager.IsObjHighlighted(TYPE_ID, PACKED_COORD, 6, true)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/test/"
                      "HighlightManagerTest.h",
                      120, nullptr);
        }
        if (!(highlightManager.IsObjHighlighted(123, arg2, 7, true))) {
            LogAssert("manager.IsObjHighlighted(TYPE_ID, PACKED_COORD, 7, true)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/test/"
                      "HighlightManagerTest.h",
                      121, nullptr);
        }
        auto phVar2 = highlightManager.GetObjHighlightMap(local_38);
        auto pEVar3 = highlightManager.GetHighlightProperties<long long>(local_28, *phVar2, 4);
        if (pEVar3 != nullptr) {
            if (pEVar3->HasModelOutline()) {
                highlightManager.RemoveObjHighlight(123, local_38, 5, true);
                phVar2 = highlightManager.GetObjHighlightMap(local_38);
                pEVar3 = (EntityHighlight*)highlightManager.GetHighlightProperties<long long>(local_28, *phVar2, 4);
                if (pEVar3 != nullptr) {
                    if (pEVar3->HasModelFill()) {
                        HighlightManager::ConfigureChannel((HighlightCategory)highlightManager, 4, 6, 0, '\0', 0);
                        phVar2 = highlightManager.GetObjHighlightMap(local_38);
                        pEVar3 =
                            (EntityHighlight*)highlightManager.GetHighlightProperties<long long>(local_28, *phVar2, 4);
                        if (pEVar3 != nullptr) {
                            if (pEVar3->HasTileFill()) {
                                HighlightManager::ConfigureChannel((HighlightCategory)highlightManager, 4, 7, 0, '\0',
                                                                   0);
                                phVar2 = highlightManager.GetObjHighlightMap(local_38);
                                if (highlightManager.GetHighlightProperties<long long>(local_28, *phVar2, 4) !=
                                    nullptr) {
                                    LogAssert("manager.GetHighlightProperties(KEY, manager.GetObjHighlightMap(COORD), "
                                              "HighlightCategory::OBJ) == nullptr",
                                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/"
                                              "projects/osclient/test/HighlightManagerTest.h",
                                              139, nullptr);
                                }
                                return;
                            }
                        }
                        LogAssert("highlight && highlight->m_properties.HasTileFill()",
                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                                  "test/HighlightManagerTest.h",
                                  135, nullptr);
                    }
                }
                LogAssert("highlight && highlight->m_properties.HasModelFill()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/test/"
                          "HighlightManagerTest.h",
                          130, nullptr);
            }
        }
        LogAssert("highlight && highlight->m_properties.HasModelOutline()",
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/test/"
                  "HighlightManagerTest.h",
                  125, nullptr);
    }

    // 0x1000ab8c0
    void HighlightManagerTest::TestAddAndQueryPlayerHighlight(HighlightManager& highlightManager) {
        eastl::string local_40("Cow31337Killer");
        HighlightCategory highlightCategory = (HighlightCategory)highlightManager;
        HighlightManager::ConfigureChannel(highlightCategory, 6, 5, 0, '\x01', 128);
        HighlightManager::ConfigureChannel(highlightCategory, 6, 6, 0, '\x01', 128);
        HighlightManager::ConfigureChannel(highlightCategory, 6, 7, 0, '\x01', 128);
        highlightManager.AddPlayerHighlight(local_40, 5, false);
        highlightManager.AddPlayerHighlight(local_40, 6, false);
        highlightManager.AddPlayerHighlight(local_40, 7, false);
        if (!(highlightManager.IsPlayerHighlighted(local_40, 5))) {
            LogAssert("manager.IsPlayerHighlighted(PLAYER_NAME, 5)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/test/"
                      "HighlightManagerTest.h",
                      153, nullptr);
        }
        if (!(highlightManager.IsPlayerHighlighted(local_40, 6))) {
            LogAssert("manager.IsPlayerHighlighted(PLAYER_NAME, 6)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/test/"
                      "HighlightManagerTest.h",
                      154, nullptr);
        }
        if (!(highlightManager.IsPlayerHighlighted(local_40, 7))) {
            LogAssert("manager.IsPlayerHighlighted(PLAYER_NAME, 7)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/test/"
                      "HighlightManagerTest.h",
                      155, nullptr);
        }
        uint8_t* arg2 = &highlightManager.field_4168;
        auto pEVar2 = highlightManager.GetHighlightProperties<eastl::string>(local_40, *arg2, 6);
        if (pEVar2 != nullptr) {
            if (pEVar2->HasModelOutline()) {
                highlightManager.RemovePlayerHighlight(local_40, 5);
                pEVar2 = (EntityHighlight*)highlightManager.GetHighlightProperties<eastl::string>(local_40, *arg2, 6);
                if (pEVar2 != nullptr) {
                    if (pEVar2->HasModelFill()) {
                        HighlightManager::ConfigureChannel(highlightCategory, 6, 6, 0, '\0', 0);
                        pEVar2 = (EntityHighlight*)highlightManager.GetHighlightProperties<eastl::string>(local_40,
                                                                                                          *arg2, 6);
                        if (pEVar2 != nullptr) {
                            if (pEVar2->HasTileFill()) {
                                HighlightManager::ConfigureChannel(highlightCategory, 6, 7, 0, '\0', 0);
                                if (highlightManager.GetHighlightProperties<eastl::string>(local_40, *arg2, 6) !=
                                    nullptr) {
                                    LogAssert("manager.GetHighlightProperties(PLAYER_NAME, "
                                              "manager.m_highlightedPlayers, HighlightCategory::PLAYER) == nullptr",
                                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/"
                                              "projects/osclient/test/HighlightManagerTest.h",
                                              173, nullptr);
                                }
                                return;
                            }
                        }
                        LogAssert("highlight && highlight->m_properties.HasTileFill()",
                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                                  "test/HighlightManagerTest.h",
                                  169, nullptr);
                    }
                }
                LogAssert("highlight && highlight->m_properties.HasModelFill()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/test/"
                          "HighlightManagerTest.h",
                          164, nullptr);
            }
        }
        LogAssert("highlight && highlight->m_properties.HasModelOutline()",
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/test/"
                  "HighlightManagerTest.h",
                  159, nullptr);
    }

    // 0x1000abbd0
    void HighlightManagerTest::TestAddAndQueryTileHighlight(HighlightManager& highlightManager) {
        CoordGrid local_28(0, 50, 50);
        local_28._12_4_ = local_28.ToBitPacked();
        HighlightManager::ConfigureChannel((HighlightCategory)highlightManager, 7, 5, 0, '\x01', 128);
        HighlightManager::ConfigureChannel((HighlightCategory)highlightManager, 7, 6, 0, '\x01', 128);
        HighlightManager::ConfigureChannel((HighlightCategory)highlightManager, 7, 7, 0, '\x01', 128);
        highlightManager.AddTileHighlight(local_28, 5, true, false);
        highlightManager.AddTileHighlight(local_28, 6, true, false);
        highlightManager.AddTileHighlight(local_28, 7, true, false);
        if (!(highlightManager.IsTileHighlighted(local_28._12_4_, 5, true))) {
            LogAssert("manager.IsTileHighlighted(PACKED_COORD, 5, true)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/test/"
                      "HighlightManagerTest.h",
                      188, nullptr);
        }
        if (!(highlightManager.IsTileHighlighted(local_28._12_4_, 6, true))) {
            LogAssert("manager.IsTileHighlighted(PACKED_COORD, 6, true)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/test/"
                      "HighlightManagerTest.h",
                      189, nullptr);
        }
        if (!(highlightManager.IsTileHighlighted(local_28._12_4_, 7, true))) {
            LogAssert("manager.IsTileHighlighted(PACKED_COORD, 7, true)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/test/"
                      "HighlightManagerTest.h",
                      190, nullptr);
        }
        auto phVar2 = highlightManager.GetTileHighlightMap(local_28);
        auto pEVar3 = highlightManager.GetHighlightProperties<int>(local_28.field_12, *phVar2, 7);
        if (pEVar3 != nullptr) {
            if (pEVar3->HasModelOutline()) {
                highlightManager.RemoveTileHighlight(local_28, 5, true);
                phVar2 = highlightManager.GetTileHighlightMap(local_28);
                pEVar3 = (EntityHighlight*)highlightManager.GetHighlightProperties<int>(local_28.field_12, *phVar2, 7);
                if (pEVar3 != nullptr) {
                    if (pEVar3->HasModelFill()) {
                        HighlightManager::ConfigureChannel((HighlightCategory)highlightManager, 7, 6, 0, '\0', 0);
                        phVar2 = highlightManager.GetTileHighlightMap(local_28);
                        pEVar3 = (EntityHighlight*)highlightManager.GetHighlightProperties<int>(local_28.field_12,
                                                                                                *phVar2, 7);
                        if (pEVar3 != nullptr) {
                            if (pEVar3->HasTileFill()) {
                                HighlightManager::ConfigureChannel((HighlightCategory)highlightManager, 7, 7, 0, '\0',
                                                                   0);
                                phVar2 = highlightManager.GetTileHighlightMap(local_28);
                                if (highlightManager.GetHighlightProperties<int>(local_28.field_12, *phVar2, 7) !=
                                    nullptr) {
                                    LogAssert("manager.GetHighlightProperties(PACKED_COORD, "
                                              "manager.GetTileHighlightMap(COORD), HighlightCategory::TILE) == nullptr",
                                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/"
                                              "projects/osclient/test/HighlightManagerTest.h",
                                              208, nullptr);
                                }
                                return;
                            }
                        }
                        LogAssert("highlight && highlight->m_properties.HasTileFill()",
                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                                  "test/HighlightManagerTest.h",
                                  204, nullptr);
                    }
                }
                LogAssert("highlight && highlight->m_properties.HasModelFill()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/test/"
                          "HighlightManagerTest.h",
                          199, nullptr);
            }
        }
        LogAssert("highlight && highlight->m_properties.HasModelOutline()",
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/test/"
                  "HighlightManagerTest.h",
                  194, nullptr);
    }

    // 0x1000abf00
    void HighlightManagerTest::TestAddAndQueryNPCTypeHighlight(HighlightManager& highlightManager) {
        HighlightCategory highlightCategory = (HighlightCategory)highlightManager;
        HighlightManager::ConfigureChannel(highlightCategory, 1, 5, 0, '\x01', 128);
        HighlightManager::ConfigureChannel(highlightCategory, 1, 6, 0, '\x01', 128);
        HighlightManager::ConfigureChannel(highlightCategory, 1, 7, 0, '\x01', 128);
        highlightManager.AddNPCTypeHighlight(123, 5, false);
        highlightManager.AddNPCTypeHighlight(123, 6, false);
        highlightManager.AddNPCTypeHighlight(123, 7, false);
        if (!(highlightManager.IsNPCTypeHighlighted(123, 5))) {
            LogAssert("manager.IsNPCTypeHighlighted(TYPE_ID, 5)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/test/"
                      "HighlightManagerTest.h",
                      222, nullptr);
        }
        if (!(highlightManager.IsNPCTypeHighlighted(123, 6))) {
            LogAssert("manager.IsNPCTypeHighlighted(TYPE_ID, 6)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/test/"
                      "HighlightManagerTest.h",
                      223, nullptr);
        }
        if (!(highlightManager.IsNPCTypeHighlighted(123, 7))) {
            LogAssert("manager.IsNPCTypeHighlighted(TYPE_ID, 7)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/test/"
                      "HighlightManagerTest.h",
                      224, nullptr);
        }
        uint8_t* arg2 = &highlightManager.field_4224;
        auto pEVar2 = highlightManager.GetGroupHighlightProperties<int>(123, *arg2, 1);
        if (pEVar2 != nullptr) {
            if (pEVar2->HasModelOutline()) {
                highlightManager.RemoveNPCTypeHighlight(123, 5);
                pEVar2 = (EntityHighlight*)highlightManager.GetGroupHighlightProperties<int>(123, *arg2, 1);
                if (pEVar2 != nullptr) {
                    if (pEVar2->HasModelFill()) {
                        HighlightManager::ConfigureChannel(highlightCategory, 1, 6, 0, '\0', 0);
                        pEVar2 = (EntityHighlight*)highlightManager.GetGroupHighlightProperties<int>(123, *arg2, 1);
                        if (pEVar2 != nullptr) {
                            if (pEVar2->HasTileFill()) {
                                HighlightManager::ConfigureChannel(highlightCategory, 1, 7, 0, '\0', 0);
                                if (highlightManager.GetGroupHighlightProperties<int>(123, *arg2, 1) != nullptr) {
                                    LogAssert("manager.GetGroupHighlightProperties(TYPE_ID, "
                                              "manager.m_highlightedNPCTypes, HighlightCategory::NPCTYPE) == nullptr",
                                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/"
                                              "projects/osclient/test/HighlightManagerTest.h",
                                              241, nullptr);
                                }
                                return;
                            }
                        }
                        LogAssert("highlight && highlight->m_properties.HasTileFill()",
                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                                  "test/HighlightManagerTest.h",
                                  237, nullptr);
                    }
                }
                LogAssert("highlight && highlight->m_properties.HasModelFill()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/test/"
                          "HighlightManagerTest.h",
                          232, nullptr);
            }
        }
        LogAssert("highlight && highlight->m_properties.HasModelOutline()",
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/test/"
                  "HighlightManagerTest.h",
                  227, nullptr);
    }

    // 0x1000ac1d0
    void HighlightManagerTest::TestAddAndQueryObjTypeHighlight(HighlightManager& highlightManager) {
        HighlightCategory highlightCategory = (HighlightCategory)highlightManager;
        HighlightManager::ConfigureChannel(highlightCategory, 5, 5, 0, '\x01', 128);
        HighlightManager::ConfigureChannel(highlightCategory, 5, 6, 0, '\x01', 128);
        HighlightManager::ConfigureChannel(highlightCategory, 5, 7, 0, '\x01', 128);
        highlightManager.AddObjTypeHighlight(123, 5, false);
        highlightManager.AddObjTypeHighlight(123, 6, false);
        highlightManager.AddObjTypeHighlight(123, 7, false);
        if (!(highlightManager.IsObjTypeHighlighted(123, 5))) {
            LogAssert("manager.IsObjTypeHighlighted(TYPE_ID, 5)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/test/"
                      "HighlightManagerTest.h",
                      288, nullptr);
        }
        if (!(highlightManager.IsObjTypeHighlighted(123, 6))) {
            LogAssert("manager.IsObjTypeHighlighted(TYPE_ID, 6)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/test/"
                      "HighlightManagerTest.h",
                      289, nullptr);
        }
        if (!(highlightManager.IsObjTypeHighlighted(123, 7))) {
            LogAssert("manager.IsObjTypeHighlighted(TYPE_ID, 7)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/test/"
                      "HighlightManagerTest.h",
                      290, nullptr);
        }
        uint8_t* arg2 = &highlightManager.field_4336;
        auto pEVar2 = highlightManager.GetGroupHighlightProperties<int>(123, *arg2, 5);
        if (pEVar2 != nullptr) {
            if (pEVar2->HasModelOutline()) {
                highlightManager.RemoveObjTypeHighlight(123, 5);
                pEVar2 = (EntityHighlight*)highlightManager.GetGroupHighlightProperties<int>(123, *arg2, 5);
                if (pEVar2 != nullptr) {
                    if (pEVar2->HasModelFill()) {
                        HighlightManager::ConfigureChannel(highlightCategory, 5, 6, 0, '\0', 0);
                        pEVar2 = (EntityHighlight*)highlightManager.GetGroupHighlightProperties<int>(123, *arg2, 5);
                        if (pEVar2 != nullptr) {
                            if (pEVar2->HasTileFill()) {
                                HighlightManager::ConfigureChannel(highlightCategory, 5, 7, 0, '\0', 0);
                                if (highlightManager.GetGroupHighlightProperties<int>(123, *arg2, 5) != nullptr) {
                                    LogAssert("manager.GetGroupHighlightProperties(TYPE_ID, "
                                              "manager.m_highlightedObjTypes, HighlightCategory::OBJTYPE) == nullptr",
                                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/"
                                              "projects/osclient/test/HighlightManagerTest.h",
                                              307, nullptr);
                                }
                                return;
                            }
                        }
                        LogAssert("highlight && highlight->m_properties.HasTileFill()",
                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                                  "test/HighlightManagerTest.h",
                                  303, nullptr);
                    }
                }
                LogAssert("highlight && highlight->m_properties.HasModelFill()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/test/"
                          "HighlightManagerTest.h",
                          298, nullptr);
            }
        }
        LogAssert("highlight && highlight->m_properties.HasModelOutline()",
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/test/"
                  "HighlightManagerTest.h",
                  293, nullptr);
    }

    // 0x1000ac4a0
    void HighlightManagerTest::TestAddAndQueryLocTypeHighlight(HighlightManager& highlightManager) {
        HighlightCategory highlightCategory = (HighlightCategory)highlightManager;
        HighlightManager::ConfigureChannel(highlightCategory, 3, 5, 0, '\x01', 128);
        HighlightManager::ConfigureChannel(highlightCategory, 3, 6, 0, '\x01', 128);
        HighlightManager::ConfigureChannel(highlightCategory, 3, 7, 0, '\x01', 128);
        highlightManager.AddLocTypeHighlight(123, 5, false);
        highlightManager.AddLocTypeHighlight(123, 6, false);
        highlightManager.AddLocTypeHighlight(123, 7, false);
        if (!(highlightManager.IsLocTypeHighlighted(123, 5))) {
            LogAssert("manager.IsLocTypeHighlighted(TYPE_ID, 5)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/test/"
                      "HighlightManagerTest.h",
                      255, nullptr);
        }
        if (!(highlightManager.IsLocTypeHighlighted(123, 6))) {
            LogAssert("manager.IsLocTypeHighlighted(TYPE_ID, 6)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/test/"
                      "HighlightManagerTest.h",
                      256, nullptr);
        }
        if (!(highlightManager.IsLocTypeHighlighted(123, 7))) {
            LogAssert("manager.IsLocTypeHighlighted(TYPE_ID, 7)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/test/"
                      "HighlightManagerTest.h",
                      257, nullptr);
        }
        uint8_t* arg2 = &highlightManager.field_4280;
        auto pEVar2 = highlightManager.GetGroupHighlightProperties<int>(123, *arg2, 3);
        if (pEVar2 != nullptr) {
            if (pEVar2->HasModelOutline()) {
                highlightManager.RemoveLocTypeHighlight(123, 5);
                pEVar2 = (EntityHighlight*)highlightManager.GetGroupHighlightProperties<int>(123, *arg2, 3);
                if (pEVar2 != nullptr) {
                    if (pEVar2->HasModelFill()) {
                        HighlightManager::ConfigureChannel(highlightCategory, 3, 6, 0, '\0', 0);
                        pEVar2 = (EntityHighlight*)highlightManager.GetGroupHighlightProperties<int>(123, *arg2, 3);
                        if (pEVar2 != nullptr) {
                            if (pEVar2->HasTileFill()) {
                                HighlightManager::ConfigureChannel(highlightCategory, 3, 7, 0, '\0', 0);
                                if (highlightManager.GetGroupHighlightProperties<int>(123, *arg2, 3) != nullptr) {
                                    LogAssert("manager.GetGroupHighlightProperties(TYPE_ID, "
                                              "manager.m_highlightedLocTypes, HighlightCategory::LOCTYPE) == nullptr",
                                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/"
                                              "projects/osclient/test/HighlightManagerTest.h",
                                              274, nullptr);
                                }
                                return;
                            }
                        }
                        LogAssert("highlight && highlight->m_properties.HasTileFill()",
                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                                  "test/HighlightManagerTest.h",
                                  270, nullptr);
                    }
                }
                LogAssert("highlight && highlight->m_properties.HasModelFill()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/test/"
                          "HighlightManagerTest.h",
                          265, nullptr);
            }
        }
        LogAssert("highlight && highlight->m_properties.HasModelOutline()",
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/test/"
                  "HighlightManagerTest.h",
                  260, nullptr);
    }

    // 0x1000ac770
    void HighlightManagerTest::TestAddAndQueryOpGroupHighlight(HighlightManager& highlightManager) {
        HighlightChannelProperties* pHVar4;
        uint8_t local_2f0[40];
        array<eastl::string, 10ul> local_2c8;
        uint8_t local_188[40];
        array<eastl::string, 10ul> local_160;

        new (local_188) OpGroup();
        local_188._0_4_ = 2;
        ((local_188 + 8))->assign("Goblin (level-3)");
        eastl::string* pbVar2 = &local_160[0];
        eastl::string::assign(pbVar2, "Attack");
        pbVar2 = &local_160[1];
        eastl::string::assign(pbVar2, "Talk-To");
        pbVar2 = &local_160[5];
        eastl::string::assign(pbVar2, "Examine");
        new (local_2f0) OpGroup();
        local_2f0._0_4_ = 3;
        ((local_2f0 + 8))->assign("Door");
        pbVar2 = &local_2c8[0];
        eastl::string::assign(pbVar2, "Open");
        pbVar2 = &local_2c8[5];
        eastl::string::assign(pbVar2, "Examine");
        HighlightCategory highlightCategory = (HighlightCategory)highlightManager;
        HighlightManager::ConfigureChannel(highlightCategory, 8, 5, 0, '\x01', 128);
        HighlightManager::ConfigureChannel(highlightCategory, 8, 6, 0, '\x01', 128);
        HighlightManager::ConfigureChannel(highlightCategory, 8, 7, 0, '\x01', 128);
        highlightManager.AddOpGroupHighlight(*local_188, 5, false);
        highlightManager.AddOpGroupHighlight(*local_188, 6, false);
        highlightManager.AddOpGroupHighlight(*local_188, 7, false);
        if (!(highlightManager.IsOpGroupHighlighted(*local_188, 5))) {
            LogAssert("manager.IsOpGroupHighlighted(groupA, 5)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/test/"
                      "HighlightManagerTest.h",
                      331, nullptr);
        }
        if (!(highlightManager.IsOpGroupHighlighted(*local_188, 6))) {
            LogAssert("manager.IsOpGroupHighlighted(groupA, 6)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/test/"
                      "HighlightManagerTest.h",
                      332, nullptr);
        }
        if (!(highlightManager.IsOpGroupHighlighted(*local_188, 7))) {
            LogAssert("manager.IsOpGroupHighlighted(groupA, 7)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/test/"
                      "HighlightManagerTest.h",
                      333, nullptr);
        }
        if (highlightManager.IsOpGroupHighlighted(*local_2f0, 5)) {
            LogAssert("!manager.IsOpGroupHighlighted(groupB, 5)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/test/"
                      "HighlightManagerTest.h",
                      334, nullptr);
        }
        uint8_t* arg2 = &highlightManager.field_4392;
        auto pEVar3 = highlightManager.GetGroupHighlightProperties<OpGroup>(*local_188, *arg2, 8);
        if (pEVar3 != nullptr) {
            if (pEVar3->HasModelOutline()) {
                highlightManager.RemoveOpGroupHighlight(*local_188, 5);
                pEVar3 = (EntityHighlight*)highlightManager.GetGroupHighlightProperties<OpGroup>(*local_188, *arg2, 8);
                if (pEVar3 != nullptr) {
                    if (pEVar3->HasModelFill()) {
                        highlightManager.AddOpGroupHighlight(*local_2f0, 6, false);
                        pEVar3 = (EntityHighlight*)highlightManager.GetGroupHighlightProperties<OpGroup>(*local_2f0,
                                                                                                         *arg2, 8);
                        if (pEVar3 != nullptr) {
                            if (pEVar3->HasModelFill()) {
                                HighlightManager::ConfigureChannel(highlightCategory, 8, 6, 0, '\0', 0);
                                pEVar3 = (EntityHighlight*)highlightManager.GetGroupHighlightProperties<OpGroup>(
                                    *local_188, *arg2, 8);
                                if (pEVar3 != nullptr) {
                                    if (pEVar3->HasTileFill()) {
                                        pHVar4 =
                                            highlightManager.GetGroupHighlightProperties<OpGroup>(*local_2f0, *arg2, 8);
                                        if (pHVar4 != nullptr) {
                                            LogAssert(
                                                "manager.GetGroupHighlightProperties(groupB, "
                                                "manager.m_highlightedOpGroups, HighlightCategory::OPGROUP) == nullptr",
                                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/"
                                                "projects/osclient/test/HighlightManagerTest.h",
                                                354, nullptr);
                                        }
                                        HighlightManager::ConfigureChannel(highlightCategory, 8, 7, 0, '\0', 0);
                                        pHVar4 =
                                            highlightManager.GetGroupHighlightProperties<OpGroup>(*local_188, *arg2, 8);
                                        if (pHVar4 != nullptr) {
                                            LogAssert(
                                                "manager.GetGroupHighlightProperties(groupA, "
                                                "manager.m_highlightedOpGroups, HighlightCategory::OPGROUP) == nullptr",
                                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/"
                                                "projects/osclient/test/HighlightManagerTest.h",
                                                358, nullptr);
                                        }
                                        return;
                                    }
                                }
                                LogAssert("highlight && highlight->m_properties.HasTileFill()",
                                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/"
                                          "osclient/test/HighlightManagerTest.h",
                                          352, nullptr);
                            }
                        }
                        LogAssert("highlight && highlight->m_properties.HasModelFill()",
                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                                  "test/HighlightManagerTest.h",
                                  347, nullptr);
                    }
                }
                LogAssert("highlight && highlight->m_properties.HasModelFill()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/test/"
                          "HighlightManagerTest.h",
                          342, nullptr);
            }
        }
        LogAssert("highlight && highlight->m_properties.HasModelOutline()",
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/test/"
                  "HighlightManagerTest.h",
                  337, nullptr);
    }

} // namespace jag::oldscape::highlight

namespace jag {
    // 0x1000aae20
    shared_ptr_if_not_array<oldscape::highlight::HighlightManager>::type
    make_shared<oldscape::highlight::HighlightManager>() {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_2c;
        HighlightManager* local_28[2];

        auto arg1 = aligned_alloc(4305456, 8);
        if (arg1 == nullptr) {
            shared_ptr_if_not_array<oldscape::highlight::HighlightManager>::type result;
        } else {
            local_28[0] = placement_new<oldscape::highlight::HighlightManager>((void*)((long)arg1 + 32));
            local_2c = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared<oldscape::highlight::HighlightManager>, int,
                              oldscape::highlight::HighlightManager*&>(arg1, &local_2c, local_28);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_28[0]);
        }
        return result;
    }

    // 0x1000acc50
    oldscape::highlight::HighlightManager* placement_new<oldscape::highlight::HighlightManager>(void* arg1) {
        new (arg1) oldscape::highlight::HighlightManager();
        return arg1;
    }

    // 0x1000acc70
    ref_counter_shared<oldscape::highlight::HighlightManager>*
    placement_new<ref_counter_shared<oldscape::highlight::HighlightManager>, int,
                  oldscape::highlight::HighlightManager*&>(void* arg1, int&& arg2,
                                                           oldscape::highlight::HighlightManager*& arg3) {
        new (arg1) ref_counter_shared<oldscape::highlight::HighlightManager>((long)*arg2, arg3);
        return arg1;
    }

    // 0x1000acca0
    ref_counter_shared<oldscape::highlight::HighlightManager>::ref_counter_shared(
        unsigned long arg1, oldscape::highlight::HighlightManager* highlightManager)
        : ref_counter_base() {}

    // 0x1000acce0
    void ref_counter_shared<oldscape::highlight::HighlightManager>::DeleteData() {
        ref_counter_shared<oldscape::highlight::HighlightManager> _vtbl* prVar1;
        long lVar2;

        if (this[3]._vptr != nullptr) {
            if (this[2]._vptr != nullptr) {
                lVar2 = 0;
                prVar1 = nullptr;
                do {
                    ((HighlightManager*)((long)&(this[3]._vptr)->_dtor + lVar2))->~HighlightManager();
                    prVar1 =
                        (ref_counter_shared<oldscape::highlight::HighlightManager> _vtbl*)((long)&prVar1->_dtor + 1);
                    lVar2 = lVar2 + 4305424;
                } while (prVar1 < this[2]._vptr);
            }
            this[3]._vptr = nullptr;
        }
    }

} // namespace jag
