// projects/osclient/loottracker/LootTrackerSaveHandler.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::oldscape::loottracker {
    class LootTrackerSaveHandler {
    public:
        ~LootTrackerSaveHandler();
        void Close();
        void Init();
        unsigned int SQLOpen();
        uint64_t CheckDatabaseVersion();
        void ExecSqlStatement(const eastl::string& str);
        uint64_t ProcessResultCode(int arg1);
        void PerformSqlStatement(sqlite3_stmt* sqlite3_stmt, const eastl::string& str);
        void PerformSqlStatement(sqlite3_stmt* sqlite3_stmt, int arg2);
        void ClearAndResetStatement(sqlite3_stmt* sqlite3_stmt);
        void SQLClose();
        void LocalUnixTimestamp();
        unsigned long DropAllTables();
        void PerformIntBindingOperation(SqlStatementTypes sqlStatementTypes, int arg2);
        void PerformStringBindedOperation(SqlStatementTypes sqlStatementTypes, const eastl::string& str);
        void AddSource(const eastl::string& str, int arg2, int arg3, int arg4);
        uint32_t GetNumberOfTrackedSources();
        uint32_t GetSourceCount(const eastl::string& str);
        uint32_t GetNextSourceId(const eastl::string& str, int arg2);
        uint32_t GetSourceIdByName(const eastl::string& str);
        auto GetSourceNameById(int arg1);
        uint32_t GetSourceIdByIdentifier(int arg1);
        uint32_t GetCountOfSortedResultIds(int arg1, int arg2, LootOrder arg3);
        void ClearOrderedResultIds();
        void Clear();
        void UpsertLoot(SourceItem sourceItem);
        uint32_t GetLootItemsBySourceName(const eastl::string& str);
        uint32_t GetLootItemsBySourceId(int arg1);
        LootTrackerSaveHandler* GetSourceLootItemByName(const eastl::string& str, int arg2);
        LootTrackerSaveHandler* GetSourceLootItem(const eastl::string& str, int arg2, int arg3);
        LootTrackerSaveHandler* GetSourceLootItemById(int arg1, int arg2);
        void RemoveIgnoreItemByIndex(int arg1, IgnoreEntryType ignoreEntryType);
        uint32_t GetNumberOfIgnoredItems(IgnoreEntryType ignoreEntryType);
        auto GetIgnoredItem(int arg1, IgnoreEntryType ignoreEntryType);
        void ClearIgnoredItems(IgnoreEntryType ignoreEntryType);
        LootTrackerSaveHandler* GetOrderedResultIds();
        LootTrackerSaveHandler();

    private:
        eastl* field_0;
        uint32_t* field_8;
        uint8_t _unknown_16[16];
        int field_32;
        uint32_t field_36;
        uint32_t field_40;
        uint8_t _unknown_44[292];
        Database field_336;
        uint8_t _unknown_416[8];
        uint32_t field_424;
        uint8_t _unknown_428[4];
        uint64_t field_432;
        uint64_t field_440;
        uint32_t field_448;
        uint8_t _unknown_452[4];
        uint64_t field_456;
        uint64_t field_464;
        uint32_t field_472;
        uint8_t _unknown_476[4];
        uint64_t field_480;
        uint64_t field_488;
        uint32_t field_496;
        uint8_t _unknown_500[4];
        uint64_t field_504;
        uint64_t field_512;
        uint32_t field_520;
        uint8_t _unknown_524[4];
        uint64_t field_528;
        uint64_t field_536;
        uint32_t field_544;
        uint8_t _unknown_548[4];
        uint64_t field_552;
        uint64_t field_560;
        uint32_t field_568;
        uint8_t _unknown_572[4];
        uint64_t field_576;
        uint64_t field_584;
        uint32_t field_592;
        uint8_t _unknown_596[4];
        uint64_t field_600;
        uint64_t field_608;
        uint32_t field_616;
        uint8_t _unknown_620[4];
        uint64_t field_624;
        uint64_t field_632;
        uint32_t field_640;
        uint8_t _unknown_644[4];
        uint64_t field_648;
        uint64_t field_656;
        uint32_t field_664;
        uint8_t _unknown_668[4];
        uint64_t field_672;
        uint64_t field_680;
        uint32_t field_688;
        uint8_t _unknown_692[4];
        uint64_t field_696;
        uint64_t field_704;
        uint32_t field_712;
        uint8_t _unknown_716[4];
        uint64_t field_720;
        uint64_t field_728;
        uint32_t field_736;
        uint8_t _unknown_740[4];
        uint64_t field_744;
        uint64_t field_752;
        uint32_t field_760;
        uint8_t _unknown_764[4];
        uint64_t field_768;
        uint64_t field_776;
        uint32_t field_784;
        uint8_t _unknown_788[4];
        uint64_t field_792;
        uint64_t field_800;
        uint32_t field_808;
        uint8_t _unknown_812[4];
        uint64_t field_816;
        uint64_t field_824;
        uint32_t field_832;
        uint8_t _unknown_836[4];
        uint64_t field_840;
        uint64_t field_848;
        uint32_t field_856;
        uint8_t _unknown_860[4];
        uint64_t field_864;
        uint64_t field_872;
        uint32_t field_880;
        uint8_t _unknown_884[4];
        uint64_t field_888;
        uint64_t field_896;
        uint32_t field_904;
        uint8_t _unknown_908[4];
        uint64_t field_912;
        uint64_t field_920;
        uint32_t field_928;
        uint8_t _unknown_932[4];
        uint64_t field_936;
        uint64_t field_944;
        uint32_t field_952;
        uint8_t _unknown_956[4];
        uint64_t field_960;
        uint64_t field_968;
        uint32_t field_976;
        uint8_t _unknown_980[4];
        uint64_t field_984;
        uint64_t field_992;
        uint32_t field_1000;
        uint8_t _unknown_1004[4];
        uint64_t field_1008;
        uint64_t field_1016;
        uint32_t field_1024;
        uint8_t _unknown_1028[4];
        uint64_t field_1032;
        uint64_t field_1040;
        uint32_t field_1048;
        uint8_t _unknown_1052[4];
        uint64_t field_1056;
        uint64_t field_1064;
        uint32_t field_1072;
        uint8_t _unknown_1076[4];
        uint64_t field_1080;
        uint64_t field_1088;
        uint32_t field_1096;
        uint8_t _unknown_1100[4];
        uint64_t field_1104;
        uint64_t field_1112;
        uint32_t field_1120;
        uint8_t _unknown_1124[4];
        uint64_t field_1128;
        uint64_t field_1136;
        uint32_t field_1144;
        uint8_t _unknown_1148[4];
        uint64_t field_1152;
        uint64_t field_1160;
        uint32_t field_1168;
        uint8_t _unknown_1172[4];
        uint64_t field_1176;
        uint64_t field_1184;
        uint32_t field_1192;
        uint8_t _unknown_1196[4];
        uint64_t field_1200;
        uint64_t field_1208;
        uint32_t field_1216;
        uint8_t _unknown_1220[4];
        uint64_t field_1224;
        uint64_t field_1232;
        uint32_t field_1240;
        uint8_t _unknown_1244[4];
        uint64_t field_1248;
        uint64_t field_1256;
        uint32_t field_1264;
        uint8_t _unknown_1268[4];
        uint64_t field_1272;
        uint64_t field_1280;
        uint32_t field_1288;
        uint8_t _unknown_1292[4];
        uint64_t field_1296;
        uint64_t field_1304;
    };

    // 0x10001d9c0
    uint64_t LootTrackerSaveHandler::ProcessResultCode(int arg1) {
        Logger* this_00;
        int arg4;
        char* str2;

        if (*(long*)field_336 == 0) {
            this_00 = logger::default_logger();
            str2 = "SQLError[%d]";
            arg4 = 230;
        } else {
            if (arg1 - 100U < 2) {
                return 0;
            }
            if (arg1 == 0) {
                return 0;
            }
            this_00 = logger::default_logger();
            _jag_sqlite3_errmsg(*(uint64_t*)field_336);
            str2 = "SQLError[%d]: %s";
            arg4 = 224;
        }
        this_00->Log(false, 2,
                     "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/highlighting/"
                     "../loottracker/LootTrackerSaveHandler.h",
                     arg4, str2, (unsigned long)(unsigned int)arg1);
        return 1;
    }

    // 0x10001dbb0
    char* GetCreateVersionStatement() {
        return "CREATE TABLE IF NOT EXISTS version(ID INTEGER PRIMARY KEY, versionNumber INTEGER); INSERT INTO "
               "version(ID, versionNumber) VALUES(1, 0) ON CONFLICT(ID) DO NOTHING";
    }

    // 0x10001e0a0
    char* GetSourceTempClearStatement() {
        return "DELETE FROM sourceTemp";
    }

    // 0x10001e450
    char* GetLootResetStatement() {
        return "DELETE FROM loot";
    }

    // 0x10001e460
    char* GetSourceResetStatement() {
        return "DELETE FROM source";
    }

    // 0x10001e8e0
    char* GetLootTempClearTableStatement() {
        return "DELETE FROM lootTemp";
    }

    // 0x1000ba710
    LootTrackerSaveHandler* LootTrackerSaveHandler::GetOrderedResultIds() {
        vector<int>* in_RSI;

        new (this) eastl::vector<int>(*in_RSI);
        return this;
    }

    // 0x1001293b0
    LootTrackerSaveHandler::LootTrackerSaveHandler() : eastl::vector<int>(), field_424(0) {
        uint64_t uVar1 = GetSourceInsertStatement();
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
