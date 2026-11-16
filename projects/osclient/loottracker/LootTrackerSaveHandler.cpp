// projects/osclient/loottracker/LootTrackerSaveHandler.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: osclient

#include "LootTrackerSaveHandler.h"

namespace jag::oldscape::loottracker {
    // 0x10001d350
    bool ParseIntAsLootOrder(int arg1, LootOrder& lootOrder) {
        if ((unsigned int)arg1 < 4) {
            *(int*)lootOrder = arg1;
        }
        return (unsigned int)arg1 < 4;
    }

    // 0x10001d370
    LootTrackerSaveHandler::~LootTrackerSaveHandler() {
        Close();
        field_336->~Database();
    }

    // 0x10001d3d0
    void LootTrackerSaveHandler::Close() {
        long lVar1;
        unsigned long arg1;

        if (*(long*)field_336 != 0) {
            arg1 = 0;
            do {
                lVar1 = field_424[arg1];
                _jag_sqlite3_finalize(*(uint64_t*)(lVar1 + 16));
                arg1 = arg1 + 1;
            } while (arg1 != 37);
            SQLClose();
            SQLInit::Destroy();
            *(uint64_t*)field_336 = 0;
        }
    }

    // 0x10001d460
    void LootTrackerSaveHandler::Init() {
        int iVar2;
        char* pcVar3;
        unsigned int* puVar4;
        Logger* this_00;
        unsigned long arg1;
        long lVar5;
        eastl::string local_90;
        uint8_t* local_68[6];

        bool cVar1 = SQLInit::Initialise();
        if (cVar1) {
            cVar1 = SQLOpen();
            if (!cVar1) {
                this_00 = logger::default_logger();
                field_32.GetName();
                pcVar3 = "Unable to open %s database.";
                iVar2 = 50;
            } else {
                cVar1 = CheckDatabaseVersion();
                if (cVar1) {
                    local_68[0] = PTR_GetSourceCreateTableStatement_100ee6ac8;
                    local_68[1] = PTR_GetLootCreateTableStatement_100ee6ab8;
                    local_68[2] = PTR_GetIgnoreItemCreateTableStatement_100ee6ad0;
                    local_68[3] = PTR_GetIgnoreSourceCreateTableStatement_100ee6ad8;
                    local_68[4] = PTR_GetLootTempTableStatement_100ee6ab0;
                    local_68[5] = PTR_GetSourceTempTableStatement_100ee6ac0;
                    lVar5 = 0;
                    do {
                        pcVar3 = (char*)(*(void (*)(...))local_68[lVar5])();
                        local_90 = eastl::string(pcVar3);
                        iVar2 = ExecSqlStatement(local_90);
                        cVar1 = ProcessResultCode(iVar2);
                        if (cVar1)
                            goto LAB_10001d63a;
                        lVar5 = lVar5 + 1;
                    } while (lVar5 != 6);
                    arg1 = 0;
                    do {
                        puVar4 = &field_424[arg1];
                        if (arg1 != *puVar4) {
                            LogAssert("m_sqlStatements[index].m_index == (StatementIndex)index",
                                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/"
                                      "osclient/loottracker/LootTrackerSaveHandler.cpp",
                                      80, nullptr);
                        }
                        iVar2 = _jag_sqlite3_prepare_v2(*(uint64_t*)field_336, *(uint64_t*)(puVar4 + 2), 4294967295,
                                                        puVar4 + 4, 0);
                        ProcessResultCode(iVar2);
                        arg1 = arg1 + 1;
                    } while (arg1 != 37);
                    goto LAB_10001d63a;
                }
                this_00 = logger::default_logger();
                pcVar3 = "Version check failed!";
                iVar2 = 56;
            }
            this_00->Log(false, 2,
                         "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                         "loottracker/LootTrackerSaveHandler.cpp",
                         iVar2, pcVar3);
        }
    LAB_10001d63a:
    }

    // 0x10001d680
    unsigned int LootTrackerSaveHandler::SQLOpen() {
        auto local_280 = GameShell3Cache::GetAccountDirectory();
        Filename local_150 = local_280 / "LootTracker.db";
        field_32 = local_150;
        unsigned int uVar1 = ProcessResultCode(_jag_sqlite3_open((&field_32)->operator_cast_to_char_(), field_336));
        if ((char)uVar1 != '\0') {
            SQLClose();
        }
        return uVar1 ^ 1;
    }

    // 0x10001d770
    uint64_t LootTrackerSaveHandler::CheckDatabaseVersion() {
        uint32_t* this_00;
        uint64_t uVar1;
        sqlite3_stmt* sqlite3_stmt;
        long lVar4;
        uint64_t uVar5;

        auto str = GetCreateVersionStatement();
        eastl::string local_58(str);
        int iVar3 = ExecSqlStatement(local_58);
        if (!(ProcessResultCode(iVar3))) {
            uVar1 = *(uint64_t*)field_336;
            this_00 = &field_424;
            lVar4 = (*this_00)[34];
            uVar5 = 0;
            iVar3 = _jag_sqlite3_prepare_v2(uVar1, *(uint64_t*)(lVar4 + 8), 4294967295, (uint64_t*)(lVar4 + 16), 0);
            if (!(ProcessResultCode(iVar3))) {
                sqlite3_stmt = *(sqlite3_stmt**)(lVar4 + 16);
                PerformSqlStatement((sqlite3_stmt*)this, (int)sqlite3_stmt);
                iVar3 = _jag_sqlite3_column_int(sqlite3_stmt, 0);
                ClearAndResetStatement(sqlite3_stmt);
                uVar5 = 1;
                if (iVar3 != 1) {
                    uVar1 = *(uint64_t*)field_336;
                    lVar4 = (*this_00)[35];
                    uVar5 = 0;
                    iVar3 = _jag_sqlite3_prepare_v2(uVar1, *(uint64_t*)(lVar4 + 8), 4294967295, lVar4 + 16, 0);
                    if (!(ProcessResultCode(iVar3))) {
                        uVar1 = *(uint64_t*)field_336;
                        lVar4 = (*this_00)[36];
                        uVar5 = 0;
                        iVar3 = _jag_sqlite3_prepare_v2(uVar1, *(uint64_t*)(lVar4 + 8), 4294967295, lVar4 + 16, 0);
                        if (!(ProcessResultCode(iVar3))) {
                            DropAllTables();
                            PerformIntBindingOperation(8, 1);
                            uVar5 = 1;
                        }
                    }
                }
            }
        } else {
            uVar5 = 0;
        }
        return uVar5;
    }

    // 0x10001d990
    void LootTrackerSaveHandler::ExecSqlStatement(const eastl::string& str) {
        uint8_t local_18[8];

        uint64_t uVar1 = *(uint64_t*)field_336;
        uint64_t uVar2 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        _jag_sqlite3_exec(uVar1, uVar2, 0, 0, local_18);
    }

    // 0x10001da80
    void LootTrackerSaveHandler::PerformSqlStatement(sqlite3_stmt* sqlite3_stmt, const eastl::string& str) {
        uint64_t uVar1 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        uint32_t uVar2 = str.size();
        _jag_sqlite3_bind_text(sqlite3_stmt, 1, uVar1, uVar2, 18446744073709551615);
        ProcessResultCode(_jag_sqlite3_step(sqlite3_stmt));
    }

    // 0x10001dae0
    void LootTrackerSaveHandler::PerformSqlStatement(sqlite3_stmt* sqlite3_stmt, int arg2) {
        uint32_t in_register_00000034;

        _jag_sqlite3_bind_int((((uint64_t)in_register_00000034 << 32) | (uint32_t)arg2), 1);
        int arg1 = _jag_sqlite3_step((((uint64_t)in_register_00000034 << 32) | (uint32_t)arg2));
        ProcessResultCode((LootTrackerSaveHandler*)sqlite3_stmt, arg1);
    }

    // 0x10001db20
    void LootTrackerSaveHandler::ClearAndResetStatement(sqlite3_stmt* sqlite3_stmt) {
        ProcessResultCode(_jag_sqlite3_clear_bindings(sqlite3_stmt));
        _jag_sqlite3_reset(sqlite3_stmt);
    }

    // 0x10001db50
    void LootTrackerSaveHandler::SQLClose() {
        _jag_sqlite3_close(*(uint64_t*)field_336);
    }

    // 0x10001db70
    void LootTrackerSaveHandler::LocalUnixTimestamp() {
        SystemTimer::GetTimeSecs<std::chrono::system_clock>();
    }

    // 0x10001dbc0
    unsigned long LootTrackerSaveHandler::DropAllTables() {
        sqlite3_stmt* sqlite3_stmt;
        char* str;
        eastl::string* str_00;
        eastl::string* pbVar4;
        bool bVar5;
        uint64_t uVar6;
        eastl::string local_80;

        long lVar3 = field_424[36];
        sqlite3_stmt = *(sqlite3_stmt**)(lVar3 + 16);
        int iVar2 = _jag_sqlite3_step(sqlite3_stmt);
        vector<eastl::string> local_58;
        while (iVar2 == 100) {
            str = (char*)_jag_sqlite3_column_text(sqlite3_stmt, 0);
            if (str != nullptr) {
                local_80 = eastl::string(str);
                local_58.push_back(local_80);
            }
            iVar2 = _jag_sqlite3_step(sqlite3_stmt);
        }
        bool cVar1 = ProcessResultCode(iVar2);
        if (!cVar1) {
            ClearAndResetStatement(sqlite3_stmt);
            str_00 = (eastl::string*)local_58.HeapBeginPtr();
            pbVar4 = (eastl::string*)local_58.end();
            uVar6 = (uint64_t)((unsigned long)&local_58 >> 8);
            for (; bVar5 = str_00 == pbVar4, !bVar5; str_00 = str_00 + 32) {
                iVar2 = ExecSqlStatement(*str_00);
                cVar1 = ProcessResultCode(iVar2);
                if (cVar1)
                    break;
            }
        } else {
            bVar5 = false;
            uVar6 = 0;
        }
        return bVar5 & 4294967041;
    }

    // 0x10001dd20
    void LootTrackerSaveHandler::PerformIntBindingOperation(SqlStatementTypes sqlStatementTypes, int arg2) {
        sqlite3_stmt* sqlite3_stmt;
        unsigned long arg1;

        if (sqlStatementTypes == 1) {
            arg1 = 15;
        } else if (sqlStatementTypes == 8) {
            arg1 = 35;
        } else {
            if (sqlStatementTypes != 3) {
                sqlite3_stmt = nullptr;
                goto LAB_10001dd66;
            }
            arg1 = 13;
        }
        long lVar1 = field_424[arg1];
        sqlite3_stmt = *(sqlite3_stmt**)(lVar1 + 16);
    LAB_10001dd66:
        PerformSqlStatement((sqlite3_stmt*)this, (int)sqlite3_stmt);
        ClearAndResetStatement(sqlite3_stmt);
    }

    // 0x10001dd90
    void LootTrackerSaveHandler::PerformStringBindedOperation(SqlStatementTypes sqlStatementTypes,
                                                              const eastl::string& str) {
        long lVar1;
        sqlite3_stmt* sqlite3_stmt;

        if ((sqlStatementTypes < 8) && ((245U >> (sqlStatementTypes & 31) & 1) != 0)) {
            lVar1 = field_424[*(unsigned long*)(&DAT_100d3d2c8 + (long)(int)sqlStatementTypes * 8)];
            sqlite3_stmt = *(sqlite3_stmt**)(lVar1 + 16);
        } else {
            sqlite3_stmt = nullptr;
        }
        PerformSqlStatement(sqlite3_stmt, str);
        ClearAndResetStatement(sqlite3_stmt);
    }

    // 0x10001de00
    void LootTrackerSaveHandler::AddSource(const eastl::string& str, int arg2, int arg3, int arg4) {
        sqlite3_stmt* sqlite3_stmt;

        long lVar1 = field_424[0];
        sqlite3_stmt = *(sqlite3_stmt**)(lVar1 + 16);
        uint64_t uVar2 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        uint32_t uVar3 = str.size();
        _jag_sqlite3_bind_text(sqlite3_stmt, 1, uVar2, uVar3, 18446744073709551615);
        _jag_sqlite3_bind_int(sqlite3_stmt, 2, arg2);
        _jag_sqlite3_bind_int(sqlite3_stmt, 3, arg3);
        uVar2 = LocalUnixTimestamp();
        _jag_sqlite3_bind_int64(sqlite3_stmt, 4, uVar2);
        _jag_sqlite3_bind_int(sqlite3_stmt, 5, arg4);
        ProcessResultCode(_jag_sqlite3_step(sqlite3_stmt));
        ClearAndResetStatement(sqlite3_stmt);
    }

    // 0x10001ded0
    uint32_t LootTrackerSaveHandler::GetNumberOfTrackedSources() {
        sqlite3_stmt* sqlite3_stmt;
        uint32_t uVar1;

        long lVar2 = field_424[1];
        sqlite3_stmt = *(sqlite3_stmt**)(lVar2 + 16);
        int arg1 = _jag_sqlite3_step(sqlite3_stmt);
        if ((arg1 == 100) || (arg1 == 0)) {
            uVar1 = _jag_sqlite3_column_int(sqlite3_stmt, 0);
        } else {
            ProcessResultCode(arg1);
            uVar1 = 4294967295;
        }
        ClearAndResetStatement(sqlite3_stmt);
        return uVar1;
    }

    // 0x10001df40
    uint32_t LootTrackerSaveHandler::GetSourceCount(const eastl::string& str) {
        sqlite3_stmt* sqlite3_stmt;

        long lVar2 = field_424[2];
        sqlite3_stmt = *(sqlite3_stmt**)(lVar2 + 16);
        PerformSqlStatement(sqlite3_stmt, str);
        uint32_t uVar1 = _jag_sqlite3_column_int(sqlite3_stmt, 0);
        ClearAndResetStatement(sqlite3_stmt);
        return uVar1;
    }

    // 0x10001dfa0
    uint32_t LootTrackerSaveHandler::GetNextSourceId(const eastl::string& str, int arg2) {
        long lVar3 = field_424[10];
        sqlite3_stmt* psVar1 = *(sqlite3_stmt**)(lVar3 + 16);
        PerformSqlStatement(psVar1, str);
        ClearAndResetStatement(psVar1);
        lVar3 = field_424[11];
        psVar1 = *(sqlite3_stmt**)(lVar3 + 16);
        PerformSqlStatement((sqlite3_stmt*)this, (int)psVar1);
        uint32_t uVar2 = _jag_sqlite3_column_int(psVar1, 1);
        ClearAndResetStatement(psVar1);
        auto str_00 = GetSourceTempClearStatement();
        eastl::string local_58(str_00);
        int arg1 = ExecSqlStatement(local_58);
        ProcessResultCode(arg1);
        return uVar2;
    }

    // 0x10001e0b0
    uint32_t LootTrackerSaveHandler::GetSourceIdByName(const eastl::string& str) {
        sqlite3_stmt* sqlite3_stmt;

        long lVar2 = field_424[3];
        sqlite3_stmt = *(sqlite3_stmt**)(lVar2 + 16);
        PerformSqlStatement(sqlite3_stmt, str);
        uint32_t uVar1 = _jag_sqlite3_column_int(sqlite3_stmt, 0);
        ClearAndResetStatement(sqlite3_stmt);
        return uVar1;
    }

    // 0x10001e110
    auto LootTrackerSaveHandler::GetSourceNameById(int arg1) {
        sqlite3_stmt* sqlite3_stmt;

        auto result("");
        long lVar1 = field_424[4];
        sqlite3_stmt = *(sqlite3_stmt**)(lVar1 + 16);
        PerformSqlStatement((sqlite3_stmt*)this, (int)sqlite3_stmt);
        auto str = _jag_sqlite3_column_text(sqlite3_stmt, 0);
        if (str != nullptr) {
            result.assign(str);
        }
        ClearAndResetStatement(sqlite3_stmt);
        return result;
    }

    // 0x10001e1c0
    uint32_t LootTrackerSaveHandler::GetSourceIdByIdentifier(int arg1) {
        sqlite3_stmt* sqlite3_stmt;

        long lVar2 = field_424[5];
        sqlite3_stmt = *(sqlite3_stmt**)(lVar2 + 16);
        PerformSqlStatement((sqlite3_stmt*)this, (int)sqlite3_stmt);
        uint32_t uVar1 = _jag_sqlite3_column_int(sqlite3_stmt, 0);
        ClearAndResetStatement(sqlite3_stmt);
        return uVar1;
    }

    // 0x10001e220
    uint32_t LootTrackerSaveHandler::GetCountOfSortedResultIds(int arg1, int arg2, LootOrder arg3) {
        sqlite3_stmt* sqlite3_stmt;
        uint32_t uVar2;
        uint64_t in_RAX;

        if (arg1 < 0) {
            LogAssert("start >= 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/loottracker/"
                      "LootTrackerSaveHandler.cpp",
                      388, nullptr);
        }
        if (arg2 < 0) {
            LogAssert("count >= 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/loottracker/"
                      "LootTrackerSaveHandler.cpp",
                      389, nullptr);
        }
        uint64_t uStack_38 = in_RAX;
        if (empty() == '\0') {
            clear();
        }
        if (3 < param_4) {
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                            "loottracker/LootTrackerSaveHandler.cpp",
                            414, nullptr);
        }
        long lVar3 = field_424[(unsigned long)param_4 + 6];
        sqlite3_stmt = *(sqlite3_stmt**)(lVar3 + 16);
        _jag_sqlite3_bind_int(sqlite3_stmt, 1, arg1);
        _jag_sqlite3_bind_int(sqlite3_stmt, 2, arg2);
        int arg1_00 = _jag_sqlite3_step(sqlite3_stmt);
        if (arg1_00 == 100) {
            do {
                uVar2 = _jag_sqlite3_column_int(sqlite3_stmt, 0);
                uStack_38 = (((uint64_t)uVar2 << 32) | (uint32_t)((uint32_t)uStack_38));
                push_back(*((int*)((long)&uStack_38 + 4)));
                arg1_00 = _jag_sqlite3_step(sqlite3_stmt);
            } while (arg1_00 == 100);
        }
        ProcessResultCode(arg1_00);
        ClearAndResetStatement(sqlite3_stmt);
        uVar2 = size();
        return uVar2;
    }

    // 0x10001e380
    void LootTrackerSaveHandler::ClearOrderedResultIds() {
        clear();
    }

    // 0x10001e390
    void LootTrackerSaveHandler::Clear() {
        Logger* this_00;
        char* local_20;

        uint64_t uVar1 = *(uint64_t*)field_336;
        uint64_t uVar4 = GetLootResetStatement();
        int iVar3 = _jag_sqlite3_exec(uVar1, uVar4, 0, 0, &local_20);
        if (!(ProcessResultCode(iVar3))) {
            uVar1 = *(uint64_t*)field_336;
            uVar4 = GetSourceResetStatement();
            iVar3 = _jag_sqlite3_exec(uVar1, uVar4, 0, 0, &local_20);
            if (!(ProcessResultCode(iVar3))) {
                return;
            }
            this_00 = logger::default_logger();
            iVar3 = 455;
        } else {
            this_00 = logger::default_logger();
            iVar3 = 448;
        }
        this_00->Log(false, 2,
                     "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/loottracker/"
                     "LootTrackerSaveHandler.cpp",
                     iVar3, local_20);
    }

    // 0x10001e470
    void LootTrackerSaveHandler::UpsertLoot(SourceItem sourceItem) {
        sqlite3_stmt* sqlite3_stmt;

        long lVar1 = field_424[16];
        sqlite3_stmt = *(sqlite3_stmt**)(lVar1 + 16);
        _jag_sqlite3_bind_int(sqlite3_stmt, 1, *(uint32_t*)((long)&sourceItem->field_32 + 4));
        _jag_sqlite3_bind_int(sqlite3_stmt, 2, sourceItem->field_40);
        uint64_t uVar2 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        uint32_t uVar3 = sourceItem->size();
        _jag_sqlite3_bind_text(sqlite3_stmt, 3, uVar2, uVar3, 18446744073709551615);
        _jag_sqlite3_bind_int(sqlite3_stmt, 4, *(uint32_t*)&sourceItem->field_32);
        uVar2 = LocalUnixTimestamp();
        _jag_sqlite3_bind_int64(sqlite3_stmt, 5, uVar2);
        ProcessResultCode(_jag_sqlite3_step(sqlite3_stmt));
        ClearAndResetStatement(sqlite3_stmt);
    }

    // 0x10001e530
    uint32_t LootTrackerSaveHandler::GetLootItemsBySourceName(const eastl::string& str) {
        sqlite3_stmt* sqlite3_stmt;
        uint32_t uVar1;

        long lVar2 = str.size();
        if (lVar2 == 0) {
            uVar1 = 4294967295;
        } else {
            lVar2 = field_424[17];
            sqlite3_stmt = *(sqlite3_stmt**)(lVar2 + 16);
            PerformSqlStatement(sqlite3_stmt, str);
            uVar1 = _jag_sqlite3_column_int(sqlite3_stmt, 0);
            ClearAndResetStatement(sqlite3_stmt);
        }
        return uVar1;
    }

    // 0x10001e5a0
    uint32_t LootTrackerSaveHandler::GetLootItemsBySourceId(int arg1) {
        sqlite3_stmt* sqlite3_stmt;

        long lVar2 = field_424[18];
        sqlite3_stmt = *(sqlite3_stmt**)(lVar2 + 16);
        PerformSqlStatement((sqlite3_stmt*)this, (int)sqlite3_stmt);
        uint32_t uVar1 = _jag_sqlite3_column_int(sqlite3_stmt, 0);
        ClearAndResetStatement(sqlite3_stmt);
        return uVar1;
    }

    // 0x10001e600
    LootTrackerSaveHandler* LootTrackerSaveHandler::GetSourceLootItemByName(const eastl::string& str, int arg2) {
        sqlite3_stmt* sqlite3_stmt;
        uint32_t in_register_00000014;

        basic_string<char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true>>* this_00 =
            (basic_string<char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true>>*)(((uint64_t)
                                                                                                 in_register_00000014
                                                                                             << 32) |
                                                                                            (uint32_t)arg2);
        long lVar1 = this_00->size();
        if (lVar1 == 0) {
            new (this) SourceItem();
            *this = this_00;
            field_32 = 0;
            field_36 = 4294967295;
            field_40 = 4294967295;
        } else {
            lVar1 = (*((str + 424)))[19];
            sqlite3_stmt = *(sqlite3_stmt**)(lVar1 + 16);
            PerformSqlStatement((LootTrackerSaveHandler*)str, sqlite3_stmt, (eastl::string*)this_00);
            ClearAndResetStatement((LootTrackerSaveHandler*)str, sqlite3_stmt);
            GetSourceLootItem(this, str, arg2, 0);
        }
        return this;
    }

    // 0x10001e6c0
    LootTrackerSaveHandler* LootTrackerSaveHandler::GetSourceLootItem(const eastl::string& str, int arg2, int arg3) {
        sqlite3_stmt* sqlite3_stmt;
        uint32_t in_register_00000014;

        long lVar2 = (*((str + 424)))[21];
        sqlite3_stmt = *(sqlite3_stmt**)(lVar2 + 16);
        PerformSqlStatement((sqlite3_stmt*)str, (int)sqlite3_stmt);
        new (this) SourceItem();
        *this = ((eastl::string*)(((uint64_t)in_register_00000014 << 32) | (uint32_t)arg2));
        field_32 = arg3;
        uint32_t uVar1 = _jag_sqlite3_column_int(sqlite3_stmt, 1);
        field_36 = uVar1;
        uVar1 = _jag_sqlite3_column_int(sqlite3_stmt, 2);
        field_40 = uVar1;
        ClearAndResetStatement((LootTrackerSaveHandler*)str, sqlite3_stmt);
        auto str_00 = GetLootTempClearTableStatement();
        eastl::string local_60(str_00);
        int arg1 = ExecSqlStatement((LootTrackerSaveHandler*)str, &local_60);
        ProcessResultCode((LootTrackerSaveHandler*)str, arg1);
        return this;
    }

    // 0x10001e7d0
    LootTrackerSaveHandler* LootTrackerSaveHandler::GetSourceLootItemById(int arg1, int arg2) {
        sqlite3_stmt* sqlite3_stmt;
        long lVar1;
        uint32_t in_register_00000034;
        eastl::string local_60;

        LootTrackerSaveHandler* this_00 =
            (LootTrackerSaveHandler*)(((uint64_t)in_register_00000034 << 32) | (uint32_t)arg1);
        if (arg2 < 0) {
            new (this) SourceItem();
            assign("");
            field_32 = 0;
            field_36 = 4294967295;
            field_40 = 4294967295;
        } else {
            lVar1 = this_00->field_424[20];
            sqlite3_stmt = *(sqlite3_stmt**)(lVar1 + 16);
            PerformSqlStatement((sqlite3_stmt*)this_00, (int)sqlite3_stmt);
            ClearAndResetStatement(this_00, sqlite3_stmt);
            local_60 = eastl::string("");
            GetSourceLootItem(this, (eastl::string*)this_00, (int)&local_60, arg2);
        }
        return this;
    }

    // 0x10001e8f0
    void LootTrackerSaveHandler::RemoveIgnoreItemByIndex(int arg1, IgnoreEntryType ignoreEntryType) {
        sqlite3_stmt* sqlite3_stmt;
        unsigned long arg1_00;

        if (ignoreEntryType == 0) {
            arg1_00 = 24;
        } else {
            if (ignoreEntryType != 1) {
                sqlite3_stmt = nullptr;
                goto LAB_10001e929;
            }
            arg1_00 = 30;
        }
        long lVar1 = field_424[arg1_00];
        sqlite3_stmt = *(sqlite3_stmt**)(lVar1 + 16);
    LAB_10001e929:
        PerformSqlStatement((sqlite3_stmt*)this, (int)sqlite3_stmt);
        ClearAndResetStatement(sqlite3_stmt);
    }

    // 0x10001e950
    uint32_t LootTrackerSaveHandler::GetNumberOfIgnoredItems(IgnoreEntryType ignoreEntryType) {
        unsigned long arg1_00;
        sqlite3_stmt* sqlite3_stmt;

        if (ignoreEntryType == 0) {
            arg1_00 = 25;
        } else {
            if (ignoreEntryType != 1) {
                sqlite3_stmt = nullptr;
                goto LAB_10001e987;
            }
            arg1_00 = 31;
        }
        long lVar3 = field_424[arg1_00];
        sqlite3_stmt = *(sqlite3_stmt**)(lVar3 + 16);
    LAB_10001e987:
        bool cVar1 = ProcessResultCode(_jag_sqlite3_step(sqlite3_stmt));
        uint32_t uVar2 = 4294967295;
        if (!cVar1) {
            uVar2 = _jag_sqlite3_column_int(sqlite3_stmt, 0);
        }
        ClearAndResetStatement(sqlite3_stmt);
        return uVar2;
    }

    // 0x10001e9d0
    auto LootTrackerSaveHandler::GetIgnoredItem(int arg1, IgnoreEntryType ignoreEntryType) {
        sqlite3_stmt* sqlite3_stmt;
        unsigned long arg1_00;

        auto result("");
        if (ignoreEntryType == 0) {
            arg1_00 = 26;
        } else {
            if (ignoreEntryType != 1) {
                sqlite3_stmt = nullptr;
                goto LAB_10001ea38;
            }
            arg1_00 = 32;
        }
        long lVar1 = field_424[arg1_00];
        sqlite3_stmt = *(sqlite3_stmt**)(lVar1 + 16);
    LAB_10001ea38:
        PerformSqlStatement((sqlite3_stmt*)this, (int)sqlite3_stmt);
        auto str = _jag_sqlite3_column_text(sqlite3_stmt, 0);
        if (str != nullptr) {
            result.assign(str);
        }
        ClearAndResetStatement(sqlite3_stmt);
        return result;
    }

    // 0x10001eaa0
    void LootTrackerSaveHandler::ClearIgnoredItems(IgnoreEntryType ignoreEntryType) {
        sqlite3_stmt* sqlite3_stmt;
        unsigned long arg1;

        if (ignoreEntryType == 0) {
            arg1 = 27;
        } else {
            if (ignoreEntryType != 1) {
                sqlite3_stmt = nullptr;
                goto LAB_10001ead3;
            }
            arg1 = 33;
        }
        long lVar1 = field_424[arg1];
        sqlite3_stmt = *(sqlite3_stmt**)(lVar1 + 16);
    LAB_10001ead3:
        _jag_sqlite3_step(sqlite3_stmt);
        ClearAndResetStatement(sqlite3_stmt);
    }

} // namespace jag::oldscape::loottracker
