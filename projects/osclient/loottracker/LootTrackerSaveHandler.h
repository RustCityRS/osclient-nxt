// projects/osclient/loottracker/LootTrackerSaveHandler.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::oldscape::loottracker {
    class LootTrackerSaveHandler {
    public:
        ~LootTrackerSaveHandler();
        void Close();
        void Init();
        uint SQLOpen();
        CheckDatabaseVersion();
        void ExecSqlStatement(eastl::string const&);
        ProcessResultCode(int);
        void PerformSqlStatement(sqlite3_stmt*, eastl::string const&);
        void PerformSqlStatement(sqlite3_stmt*, int);
        void ClearAndResetStatement(sqlite3_stmt*);
        void SQLClose();
        void LocalUnixTimestamp();
        ulong DropAllTables();
        void PerformIntBindingOperation(SqlStatementTypes, int);
        void PerformStringBindedOperation(SqlStatementTypes, eastl::string const&);
        void AddSource(eastl::string const&, int, int, int);
        GetNumberOfTrackedSources();
        GetSourceCount(eastl::string const&);
        GetNextSourceId(eastl::string const&, int);
        GetSourceIdByName(eastl::string const&);
        LootTrackerSaveHandler* GetSourceNameById(int);
        GetSourceIdByIdentifier(int);
        GetCountOfSortedResultIds(int, int, LootOrder);
        void ClearOrderedResultIds();
        void Clear();
        void UpsertLoot(SourceItem);
        GetLootItemsBySourceName(eastl::string const&);
        GetLootItemsBySourceId(int);
        LootTrackerSaveHandler* GetSourceLootItemByName(eastl::string const&, int);
        LootTrackerSaveHandler* GetSourceLootItem(eastl::string const&, int, int);
        GetSourceLootItemById(int, int);
        void RemoveIgnoreItemByIndex(int, IgnoreEntryType);
        GetNumberOfIgnoredItems(IgnoreEntryType);
        eastl::string* GetIgnoredItem(int, IgnoreEntryType);
        void ClearIgnoredItems(IgnoreEntryType);
        GetOrderedResultIds();
        LootTrackerSaveHandler();

        // data members, from how the methods use this: 1312 bytes
        long field_0;        // offset 0
        undefined4* field_8; // offset 8
        char _unknown_16[16];
        int field_32;        // offset 32
        undefined4 field_36; // offset 36
        undefined4 field_40; // offset 40
        char _unknown_44[292];
        long field_336; // offset 336
        char _unknown_344[80];
        undefined4 field_424; // offset 424
        char _unknown_428[4];
        undefined8 field_432; // offset 432
        undefined8 field_440; // offset 440
        undefined4 field_448; // offset 448
        char _unknown_452[4];
        undefined8 field_456; // offset 456
        undefined8 field_464; // offset 464
        undefined4 field_472; // offset 472
        char _unknown_476[4];
        undefined8 field_480; // offset 480
        undefined8 field_488; // offset 488
        undefined4 field_496; // offset 496
        char _unknown_500[4];
        undefined8 field_504; // offset 504
        undefined8 field_512; // offset 512
        undefined4 field_520; // offset 520
        char _unknown_524[4];
        undefined8 field_528; // offset 528
        undefined8 field_536; // offset 536
        undefined4 field_544; // offset 544
        char _unknown_548[4];
        undefined8 field_552; // offset 552
        undefined8 field_560; // offset 560
        undefined4 field_568; // offset 568
        char _unknown_572[4];
        undefined8 field_576; // offset 576
        undefined8 field_584; // offset 584
        undefined4 field_592; // offset 592
        char _unknown_596[4];
        undefined8 field_600; // offset 600
        undefined8 field_608; // offset 608
        undefined4 field_616; // offset 616
        char _unknown_620[4];
        undefined8 field_624; // offset 624
        undefined8 field_632; // offset 632
        undefined4 field_640; // offset 640
        char _unknown_644[4];
        undefined8 field_648; // offset 648
        undefined8 field_656; // offset 656
        undefined4 field_664; // offset 664
        char _unknown_668[4];
        undefined8 field_672; // offset 672
        undefined8 field_680; // offset 680
        undefined4 field_688; // offset 688
        char _unknown_692[4];
        undefined8 field_696; // offset 696
        undefined8 field_704; // offset 704
        undefined4 field_712; // offset 712
        char _unknown_716[4];
        undefined8 field_720; // offset 720
        undefined8 field_728; // offset 728
        undefined4 field_736; // offset 736
        char _unknown_740[4];
        undefined8 field_744; // offset 744
        undefined8 field_752; // offset 752
        undefined4 field_760; // offset 760
        char _unknown_764[4];
        undefined8 field_768; // offset 768
        undefined8 field_776; // offset 776
        undefined4 field_784; // offset 784
        char _unknown_788[4];
        undefined8 field_792; // offset 792
        undefined8 field_800; // offset 800
        undefined4 field_808; // offset 808
        char _unknown_812[4];
        undefined8 field_816; // offset 816
        undefined8 field_824; // offset 824
        undefined4 field_832; // offset 832
        char _unknown_836[4];
        undefined8 field_840; // offset 840
        undefined8 field_848; // offset 848
        undefined4 field_856; // offset 856
        char _unknown_860[4];
        undefined8 field_864; // offset 864
        undefined8 field_872; // offset 872
        undefined4 field_880; // offset 880
        char _unknown_884[4];
        undefined8 field_888; // offset 888
        undefined8 field_896; // offset 896
        undefined4 field_904; // offset 904
        char _unknown_908[4];
        undefined8 field_912; // offset 912
        undefined8 field_920; // offset 920
        undefined4 field_928; // offset 928
        char _unknown_932[4];
        undefined8 field_936; // offset 936
        undefined8 field_944; // offset 944
        undefined4 field_952; // offset 952
        char _unknown_956[4];
        undefined8 field_960; // offset 960
        undefined8 field_968; // offset 968
        undefined4 field_976; // offset 976
        char _unknown_980[4];
        undefined8 field_984;  // offset 984
        undefined8 field_992;  // offset 992
        undefined4 field_1000; // offset 1000
        char _unknown_1004[4];
        undefined8 field_1008; // offset 1008
        undefined8 field_1016; // offset 1016
        undefined4 field_1024; // offset 1024
        char _unknown_1028[4];
        undefined8 field_1032; // offset 1032
        undefined8 field_1040; // offset 1040
        undefined4 field_1048; // offset 1048
        char _unknown_1052[4];
        undefined8 field_1056; // offset 1056
        undefined8 field_1064; // offset 1064
        undefined4 field_1072; // offset 1072
        char _unknown_1076[4];
        undefined8 field_1080; // offset 1080
        undefined8 field_1088; // offset 1088
        undefined4 field_1096; // offset 1096
        char _unknown_1100[4];
        undefined8 field_1104; // offset 1104
        undefined8 field_1112; // offset 1112
        undefined4 field_1120; // offset 1120
        char _unknown_1124[4];
        undefined8 field_1128; // offset 1128
        undefined8 field_1136; // offset 1136
        undefined4 field_1144; // offset 1144
        char _unknown_1148[4];
        undefined8 field_1152; // offset 1152
        undefined8 field_1160; // offset 1160
        undefined4 field_1168; // offset 1168
        char _unknown_1172[4];
        undefined8 field_1176; // offset 1176
        undefined8 field_1184; // offset 1184
        undefined4 field_1192; // offset 1192
        char _unknown_1196[4];
        undefined8 field_1200; // offset 1200
        undefined8 field_1208; // offset 1208
        undefined4 field_1216; // offset 1216
        char _unknown_1220[4];
        undefined8 field_1224; // offset 1224
        undefined8 field_1232; // offset 1232
        undefined4 field_1240; // offset 1240
        char _unknown_1244[4];
        undefined8 field_1248; // offset 1248
        undefined8 field_1256; // offset 1256
        undefined4 field_1264; // offset 1264
        char _unknown_1268[4];
        undefined8 field_1272; // offset 1272
        undefined8 field_1280; // offset 1280
        undefined4 field_1288; // offset 1288
        char _unknown_1292[4];
        undefined8 field_1296; // offset 1296
        undefined8 field_1304; // offset 1304
    };

    // 0x10001d9c0, 176 bytes, inline, placed by class name and debug map
    // LootTrackerSaveHandler::ProcessResultCode(int)
    undefined8 LootTrackerSaveHandler::ProcessResultCode(int param_1) {
        undefined8 uVar1;
        undefined8 uVar2;
        char* pcVar3;

        if (field_336 == 0) {
            uVar1 = logger::default_logger();
            pcVar3 = "SQLError[%d]";
            uVar2 = 230;
        } else {
            if (param_1 - 100U < 2) {
                return 0;
            }
            if (param_1 == 0) {
                return 0;
            }
            uVar1 = logger::default_logger();
            _jag_sqlite3_errmsg(field_336);
            pcVar3 = "SQLError[%d]: %s";
            uVar2 = 224;
        }
        logger::Logger::Log(uVar1, 0, 2,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                            "highlighting/../loottracker/LootTrackerSaveHandler.h",
                            uVar2, pcVar3, param_1);
        return 1;
    }

    // 0x10001dbb0, 16 bytes, inline, placed by debug map only (low confidence)
    // GetCreateVersionStatement()
    char* GetCreateVersionStatement() {
        return "CREATE TABLE IF NOT EXISTS version(ID INTEGER PRIMARY KEY, versionNumber INTEGER); INSERT INTO "
               "version(ID, versionNumber) VALUES(1, 0) ON CONFLICT(ID) DO NOTHING";
    }

    // 0x10001e0a0, 16 bytes, inline, placed by debug map only (low confidence)
    // GetSourceTempClearStatement()
    char* GetSourceTempClearStatement() {
        return "DELETE FROM sourceTemp";
    }

    // 0x10001e450, 16 bytes, inline, placed by debug map only (low confidence)
    // GetLootResetStatement()
    char* GetLootResetStatement() {
        return "DELETE FROM loot";
    }

    // 0x10001e460, 16 bytes, inline, placed by debug map only (low confidence)
    // GetSourceResetStatement()
    char* GetSourceResetStatement() {
        return "DELETE FROM source";
    }

    // 0x10001e8e0, 16 bytes, inline, placed by debug map only (low confidence)
    // GetLootTempClearTableStatement()
    char* GetLootTempClearTableStatement() {
        return "DELETE FROM lootTemp";
    }

    // 0x1000ba710, 32 bytes, inline, placed by class name and debug map
    // LootTrackerSaveHandler::GetOrderedResultIds()
    LootTrackerSaveHandler* LootTrackerSaveHandler::GetOrderedResultIds() {
        vector* in_RSI;

        new (this) eastl::vector<int, eastl::allocator>(in_RSI);
        return this;
    }

    // 0x1000c45f0, 16 bytes, complete-object constructor, inline, placed by class name
    // LootTrackerSaveHandler::LootTrackerSaveHandler(): jumps straight to the base-object constructor

    // 0x1001293b0, 1312 bytes, base-object constructor, inline, placed by class name
    // LootTrackerSaveHandler::LootTrackerSaveHandler()
    void LootTrackerSaveHandler::LootTrackerSaveHandler() {
        undefined8 uVar1;

        new (this) eastl::vector<int, eastl::allocator>();
        new (&field_32) Filename();
        new (&field_336) FileSystem_SQLite::Database();
        field_424 = 0;
        uVar1 = GetSourceInsertStatement();
        field_432 = uVar1;
        field_440 = 0;
        field_448 = 1;
        uVar1 = GetSourceCountDistinctStatement();
        field_456 = uVar1;
        field_464 = 0;
        field_472 = 2;
        uVar1 = GetSourceCountStatement();
        field_480 = uVar1;
        field_488 = 0;
        field_496 = 3;
        uVar1 = GetSourceIdViaNameStatement();
        field_504 = uVar1;
        field_512 = 0;
        field_520 = 4;
        uVar1 = GetSourceNameViaIdStatement();
        field_528 = uVar1;
        field_536 = 0;
        field_544 = 5;
        uVar1 = GetSourceIdViaIdentifierStatement();
        field_552 = uVar1;
        field_560 = 0;
        field_568 = 6;
        uVar1 = ListSourceByNameStatement();
        field_576 = uVar1;
        field_584 = 0;
        field_592 = 7;
        uVar1 = ListSourceByNameModifiedStatement();
        field_600 = uVar1;
        field_608 = 0;
        field_616 = 8;
        uVar1 = ListSourceByIDStatement();
        field_624 = uVar1;
        field_632 = 0;
        field_640 = 9;
        uVar1 = ListSourceByIDModifiedStatement();
        field_648 = uVar1;
        field_656 = 0;
        field_664 = 10;
        uVar1 = GetSourceTempInsertStatement();
        field_672 = uVar1;
        field_680 = 0;
        field_688 = 11;
        uVar1 = GetSourceTempSelectByStatement();
        field_696 = uVar1;
        field_704 = 0;
        field_712 = 12;
        uVar1 = GetLootDeleteBySourceNameStatement();
        field_720 = uVar1;
        field_728 = 0;
        field_736 = 13;
        uVar1 = GetLootDeleteBySourceIDStatement();
        field_744 = uVar1;
        field_752 = 0;
        field_760 = 14;
        uVar1 = GetDeleteSourceByNameStatement();
        field_768 = uVar1;
        field_776 = 0;
        field_784 = 15;
        uVar1 = GetDeleteSourceByIdStatement();
        field_792 = uVar1;
        field_800 = 0;
        field_808 = 16;
        uVar1 = GetLootUpsertStatement();
        field_816 = uVar1;
        field_824 = 0;
        field_832 = 17;
        uVar1 = GetLootObjectBySourceNameStatement();
        field_840 = uVar1;
        field_848 = 0;
        field_856 = 18;
        uVar1 = GetLootObjectBySourceIdStatement();
        field_864 = uVar1;
        field_872 = 0;
        field_880 = 19;
        uVar1 = GetLootTempInsertByNameStatement();
        field_888 = uVar1;
        field_896 = 0;
        field_904 = 20;
        uVar1 = GetLootTempInsertByIdStatement();
        field_912 = uVar1;
        field_920 = 0;
        field_928 = 21;
        uVar1 = GetLootTempSelectByIndexStatement();
        field_936 = uVar1;
        field_944 = 0;
        field_952 = 22;
        uVar1 = GetIgnoreSourceInsertStatement();
        field_960 = uVar1;
        field_968 = 0;
        field_976 = 23;
        uVar1 = GetIgnoreSourceDeleteByPatternStatement();
        field_984 = uVar1;
        field_992 = 0;
        field_1000 = 24;
        uVar1 = GetIgnoreSourceDeleteByIndexStatement();
        field_1008 = uVar1;
        field_1016 = 0;
        field_1024 = 25;
        uVar1 = GetIgnoreSourceCountStatement();
        field_1032 = uVar1;
        field_1040 = 0;
        field_1048 = 26;
        uVar1 = GetIgnoredSourceByIndexStatement();
        field_1056 = uVar1;
        field_1064 = 0;
        field_1072 = 27;
        uVar1 = GetIgnoreSourceDeleteStatement();
        field_1080 = uVar1;
        field_1088 = 0;
        field_1096 = 28;
        uVar1 = GetIgnoreItemInsertStatement();
        field_1104 = uVar1;
        field_1112 = 0;
        field_1120 = 29;
        uVar1 = GetIgnoreItemDeleteByPatternStatement();
        field_1128 = uVar1;
        field_1136 = 0;
        field_1144 = 30;
        uVar1 = GetIgnoreItemDeleteByIndexStatement();
        field_1152 = uVar1;
        field_1160 = 0;
        field_1168 = 31;
        uVar1 = GetIgnoreItemCountStatement();
        field_1176 = uVar1;
        field_1184 = 0;
        field_1192 = 32;
        uVar1 = GetIgnoredItemByIndexStatement();
        field_1200 = uVar1;
        field_1208 = 0;
        field_1216 = 33;
        uVar1 = GetIgnoreItemDeleteStatement();
        field_1224 = uVar1;
        field_1232 = 0;
        field_1240 = 34;
        uVar1 = GetCheckVersionStatement();
        field_1248 = uVar1;
        field_1256 = 0;
        field_1264 = 35;
        uVar1 = GetUpdateVersionStatement();
        field_1272 = uVar1;
        field_1280 = 0;
        field_1288 = 36;
        uVar1 = GetTableNamesStatement();
        field_1296 = uVar1;
        field_1304 = 0;
    }

} // namespace jag::oldscape::loottracker
