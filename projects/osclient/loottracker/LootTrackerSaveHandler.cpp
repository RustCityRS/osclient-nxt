// projects/osclient/loottracker/LootTrackerSaveHandler.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: osclient

#include "LootTrackerSaveHandler.h"

namespace jag::oldscape::loottracker {
    // 0x10001d350, 32 bytes, placed by debug map only (low confidence)
    // ParseIntAsLootOrder(int, LootOrder&)
    bool ParseIntAsLootOrder(int param_1, LootOrder* param_2) {
        if ((uint)param_1 < 4) {
            *(int*)param_2 = param_1;
        }
        return (uint)param_1 < 4;
    }

    // 0x10001d370, 96 bytes, base-object destructor, placed by class name and debug map
    // LootTrackerSaveHandler::~LootTrackerSaveHandler()
    void LootTrackerSaveHandler::~LootTrackerSaveHandler() {
        Close(this);
        (&field_336)->~Database();
        (&field_32)->~pair();
        ~vector();
    }

    // 0x10001d3d0, 112 bytes, placed by class name and debug map
    // LootTrackerSaveHandler::Close()
    void LootTrackerSaveHandler::Close() {
        long lVar1;
        ulong uVar2;

        if (field_336 != 0) {
            uVar2 = 0;
            do {
                lVar1 = std::array<SqlStatement, 37ul>::operator[]((array<SqlStatement, 37ul>*)&field_424, uVar2);
                _jag_sqlite3_finalize(*(undefined8*)(lVar1 + 16));
                uVar2 = uVar2 + 1;
            } while (uVar2 != 37);
            SQLClose(this);
            SQLInit::Destroy();
            field_336 = 0;
        }
    }

    // 0x10001d450, 16 bytes, complete-object destructor, placed by class name
    // LootTrackerSaveHandler::~LootTrackerSaveHandler(): jumps straight to the base-object destructor

    // 0x10001d460, 544 bytes, placed by class name
    // LootTrackerSaveHandler::Init()
    void LootTrackerSaveHandler::Init() {
        char cVar1;
        int iVar2;
        char* pcVar3;
        uint* puVar4;
        undefined8 uVar5;
        ulong uVar6;
        undefined8 uVar7;
        long lVar8;
        eastl::string local_90[32];
        allocator local_70[8];
        undefined* local_68[6];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        cVar1 = SQLInit::Initialise();
        if (cVar1 != '\0') {
            cVar1 = SQLOpen(this);
            if (cVar1 == '\0') {
                uVar5 = logger::default_logger();
                (&field_32)->GetName();
                pcVar3 = "Unable to open %s database.";
                uVar7 = 50;
            } else {
                cVar1 = CheckDatabaseVersion(this);
                if (cVar1 != '\0') {
                    local_68[0] = PTR_GetSourceCreateTableStatement_100ee6ac8;
                    local_68[1] = PTR_GetLootCreateTableStatement_100ee6ab8;
                    local_68[2] = PTR_GetIgnoreItemCreateTableStatement_100ee6ad0;
                    local_68[3] = PTR_GetIgnoreSourceCreateTableStatement_100ee6ad8;
                    local_68[4] = PTR_GetLootTempTableStatement_100ee6ab0;
                    local_68[5] = PTR_GetSourceTempTableStatement_100ee6ac0;
                    lVar8 = 0;
                    do {
                        pcVar3 = (char*)(*(code*)local_68[lVar8])();
                        eastl::allocator::allocator(local_70, "EASTL basic_string");
                        eastl::string::basic_string(local_90, pcVar3, local_70);
                        iVar2 = ExecSqlStatement((basic_string*)this);
                        eastl::string::~basic_string(local_90);
                        cVar1 = ProcessResultCode(this, iVar2);
                        if (cVar1 != '\0')
                            goto LAB_10001d63a;
                        lVar8 = lVar8 + 1;
                    } while (lVar8 != 6);
                    uVar6 = 0;
                    do {
                        puVar4 = (uint*)std::array<SqlStatement, 37ul>::operator[](
                            (array<SqlStatement, 37ul>*)&field_424, uVar6);
                        if (uVar6 != *puVar4) {
                            /* WARNING: Subroutine does not return */
                            LogAssert("m_sqlStatements[index].m_index == (StatementIndex)index",
                                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/"
                                      "osclient/loottracker/LootTrackerSaveHandler.cpp",
                                      80, (char*)0);
                        }
                        iVar2 =
                            _jag_sqlite3_prepare_v2(field_336, *(undefined8*)(puVar4 + 2), 4294967295, puVar4 + 4, 0);
                        ProcessResultCode(this, iVar2);
                        uVar6 = uVar6 + 1;
                    } while (uVar6 != 37);
                    goto LAB_10001d63a;
                }
                uVar5 = logger::default_logger();
                pcVar3 = "Version check failed!";
                uVar7 = 56;
            }
            logger::Logger::Log(uVar5, 0, 2,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                                "loottracker/LootTrackerSaveHandler.cpp",
                                uVar7, pcVar3);
        }
    LAB_10001d63a:
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x10001d680, 240 bytes, placed by class name
    // LootTrackerSaveHandler::SQLOpen()
    uint LootTrackerSaveHandler::SQLOpen() {
        int iVar1;
        uint uVar2;
        char* pcVar3;
        GameShell3Cache local_280[12];
        Filename local_150[19];
        long local_20;

        local_20 = *(long*)PTR____stack_chk_guard_100ee9d98;
        local_280->GetAccountDirectory();
        Filename::operator/(local_150, (char*)local_280);
        Filename::operator=((Filename*)&field_32, local_150);
        local_150->~pair();
        local_280->~pair();
        pcVar3 = (&field_32)->operator_cast_to_char_();
        iVar1 = _jag_sqlite3_open(pcVar3, &field_336);
        uVar2 = ProcessResultCode(this, iVar1);
        if ((char)uVar2 != '\0') {
            SQLClose(this);
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_20) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return uVar2 ^ 1;
    }

    // 0x10001d770, 448 bytes, placed by class name
    // LootTrackerSaveHandler::CheckDatabaseVersion()
    undefined8 LootTrackerSaveHandler::CheckDatabaseVersion() {
        undefined4* this_00;
        long lVar1;
        sqlite3_stmt* psVar2;
        char cVar3;
        int iVar4;
        char* pcVar5;
        long lVar6;
        undefined8 uVar7;
        eastl::string local_58[32];
        allocator local_38[8];

        pcVar5 = (char*)GetCreateVersionStatement();
        eastl::allocator::allocator(local_38, "EASTL basic_string");
        eastl::string::basic_string(local_58, pcVar5, local_38);
        iVar4 = ExecSqlStatement((basic_string*)this);
        eastl::string::~basic_string(local_58);
        cVar3 = ProcessResultCode(this, iVar4);
        if (cVar3 == '\0') {
            lVar1 = field_336;
            this_00 = &field_424;
            lVar6 = std::array<SqlStatement, 37ul>::operator[]((array<SqlStatement, 37ul>*)this_00, 34);
            uVar7 = 0;
            iVar4 = _jag_sqlite3_prepare_v2(lVar1, *(undefined8*)(lVar6 + 8), 4294967295, (undefined8*)(lVar6 + 16), 0);
            cVar3 = ProcessResultCode(this, iVar4);
            if (cVar3 == '\0') {
                psVar2 = *(sqlite3_stmt**)(lVar6 + 16);
                PerformSqlStatement((sqlite3_stmt*)this, (int)psVar2);
                iVar4 = _jag_sqlite3_column_int(psVar2, 0);
                ClearAndResetStatement(this, psVar2);
                uVar7 = 1;
                if (iVar4 != 1) {
                    lVar1 = field_336;
                    lVar6 = std::array<SqlStatement, 37ul>::operator[]((array<SqlStatement, 37ul>*)this_00, 35);
                    uVar7 = 0;
                    iVar4 = _jag_sqlite3_prepare_v2(lVar1, *(undefined8*)(lVar6 + 8), 4294967295, lVar6 + 16, 0);
                    cVar3 = ProcessResultCode(this, iVar4);
                    if (cVar3 == '\0') {
                        lVar1 = field_336;
                        lVar6 = std::array<SqlStatement, 37ul>::operator[]((array<SqlStatement, 37ul>*)this_00, 36);
                        uVar7 = 0;
                        iVar4 = _jag_sqlite3_prepare_v2(lVar1, *(undefined8*)(lVar6 + 8), 4294967295, lVar6 + 16, 0);
                        cVar3 = ProcessResultCode(this, iVar4);
                        if (cVar3 == '\0') {
                            DropAllTables(this);
                            PerformIntBindingOperation(this, 8, 1);
                            uVar7 = 1;
                        }
                    }
                }
            }
        } else {
            uVar7 = 0;
        }
        return uVar7;
    }

    // 0x10001d990, 48 bytes, placed by class name
    // LootTrackerSaveHandler::ExecSqlStatement(eastl::string const&)
    void LootTrackerSaveHandler::ExecSqlStatement(basic_string* param_1) {
        undefined8 uVar1;
        undefined8 uVar2;
        undefined1 local_18[8];

        uVar1 = *(undefined8*)(param_1 + 336);
        uVar2 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        _jag_sqlite3_exec(uVar1, uVar2, 0, 0, local_18);
    }

    // 0x10001da80, 96 bytes, placed by class name
    // LootTrackerSaveHandler::PerformSqlStatement(sqlite3_stmt*, eastl::string const&)
    void LootTrackerSaveHandler::PerformSqlStatement(sqlite3_stmt* param_1, basic_string* param_2) {
        undefined8 uVar1;
        undefined4 uVar2;
        int iVar3;

        uVar1 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        uVar2 = eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
        _jag_sqlite3_bind_text(param_2, 1, uVar1, uVar2, 18446744073709551615);
        iVar3 = _jag_sqlite3_step(param_2);
        ProcessResultCode((LootTrackerSaveHandler*)param_1, iVar3);
    }

    // 0x10001dae0, 64 bytes, placed by class name
    // LootTrackerSaveHandler::PerformSqlStatement(sqlite3_stmt*, int)
    void LootTrackerSaveHandler::PerformSqlStatement(sqlite3_stmt* param_1, int param_2) {
        int iVar1;
        undefined4 in_register_00000034;

        _jag_sqlite3_bind_int(CONCAT44(in_register_00000034, param_2), 1);
        iVar1 = _jag_sqlite3_step(CONCAT44(in_register_00000034, param_2));
        ProcessResultCode((LootTrackerSaveHandler*)param_1, iVar1);
    }

    // 0x10001db20, 48 bytes, placed by class name
    // LootTrackerSaveHandler::ClearAndResetStatement(sqlite3_stmt*)
    void LootTrackerSaveHandler::ClearAndResetStatement(sqlite3_stmt* param_1) {
        int iVar1;

        iVar1 = _jag_sqlite3_clear_bindings(param_1);
        ProcessResultCode(this, iVar1);
        _jag_sqlite3_reset(param_1);
    }

    // 0x10001db50, 32 bytes, placed by class name
    // LootTrackerSaveHandler::SQLClose()
    void LootTrackerSaveHandler::SQLClose() {
        _jag_sqlite3_close(field_336);
    }

    // 0x10001db70, 16 bytes, placed by class name
    // LootTrackerSaveHandler::LocalUnixTimestamp()
    void LootTrackerSaveHandler::LocalUnixTimestamp() {
        SystemTimer::GetTimeSecs<std::chrono::system_clock>((SystemTimer*)this);
    }

    // 0x10001dbc0, 352 bytes, placed by class name
    // LootTrackerSaveHandler::DropAllTables()
    ulong LootTrackerSaveHandler::DropAllTables() {
        sqlite3_stmt* psVar1;
        char cVar2;
        int iVar3;
        long lVar4;
        char* pcVar5;
        long lVar6;
        bool bVar7;
        undefined7 uVar8;
        eastl::string local_80[32];
        allocator local_60[8];
        vector<eastl::string, eastl::allocator> local_58[32];

        lVar4 = std::array<SqlStatement, 37ul>::operator[]((array<SqlStatement, 37ul>*)&field_424, 36);
        psVar1 = *(sqlite3_stmt**)(lVar4 + 16);
        iVar3 = _jag_sqlite3_step(psVar1);
        eastl::vector<eastl::string, eastl::allocator>::vector(local_58);
        while (iVar3 == 100) {
            pcVar5 = (char*)_jag_sqlite3_column_text(psVar1, 0);
            if (pcVar5 != (char*)0) {
                eastl::allocator::allocator(local_60, "EASTL basic_string");
                eastl::string::basic_string(local_80, pcVar5, local_60);
                eastl::vector<eastl::string, eastl::allocator>::push_back(local_58, (basic_string*)local_80);
                eastl::string::~basic_string(local_80);
            }
            iVar3 = _jag_sqlite3_step(psVar1);
        }
        cVar2 = ProcessResultCode((LootTrackerSaveHandler*)this, iVar3);
        if (cVar2 == '\0') {
            ClearAndResetStatement((LootTrackerSaveHandler*)this, psVar1);
            lVar4 = local_58->HeapBeginPtr();
            lVar6 = local_58->end();
            uVar8 = (undefined7)((ulong)local_58 >> 8);
            for (; bVar7 = lVar4 == lVar6, !bVar7; lVar4 = lVar4 + 32) {
                iVar3 = ExecSqlStatement((basic_string*)(LootTrackerSaveHandler*)this);
                cVar2 = ProcessResultCode((LootTrackerSaveHandler*)this, iVar3);
                if (cVar2 != '\0')
                    break;
            }
        } else {
            bVar7 = false;
            uVar8 = 0;
        }
        eastl::vector<eastl::string, eastl::allocator>::~vector(local_58);
        return CONCAT71(uVar8, bVar7) & 4294967041;
    }

    // 0x10001dd20, 112 bytes, placed by class name
    // LootTrackerSaveHandler::PerformIntBindingOperation(SqlStatementTypes, int)
    void LootTrackerSaveHandler::PerformIntBindingOperation(LootTrackerSaveHandler* param_1, int param_2) {
        long lVar1;
        sqlite3_stmt* psVar2;
        ulong uVar3;

        if (param_2 == 1) {
            uVar3 = 15;
        } else if (param_2 == 8) {
            uVar3 = 35;
        } else {
            if (param_2 != 3) {
                psVar2 = (sqlite3_stmt*)0;
                goto LAB_10001dd66;
            }
            uVar3 = 13;
        }
        lVar1 = std::array<SqlStatement, 37ul>::operator[]((array<SqlStatement, 37ul>*)&param_1->field_424, uVar3);
        psVar2 = *(sqlite3_stmt**)(lVar1 + 16);
    LAB_10001dd66:
        PerformSqlStatement((sqlite3_stmt*)param_1, (int)psVar2);
        ClearAndResetStatement(param_1, psVar2);
    }

    // 0x10001dd90, 112 bytes, placed by class name
    // LootTrackerSaveHandler::PerformStringBindedOperation(SqlStatementTypes, eastl::string const&)
    void LootTrackerSaveHandler::PerformStringBindedOperation(LootTrackerSaveHandler* param_1, uint param_2) {
        long lVar1;
        basic_string* pbVar2;

        if ((param_2 < 8) && ((245U >> (param_2 & 31) & 1) != 0)) {
            lVar1 = std::array<SqlStatement, 37ul>::operator[]((array<SqlStatement, 37ul>*)&param_1->field_424,
                                                               *(ulong*)(&DAT_100d3d2c8 + (long)(int)param_2 * 8));
            pbVar2 = *(basic_string**)(lVar1 + 16);
        } else {
            pbVar2 = (basic_string*)0;
        }
        PerformSqlStatement((sqlite3_stmt*)param_1, pbVar2);
        ClearAndResetStatement(param_1, (sqlite3_stmt*)pbVar2);
    }

    // 0x10001de00, 208 bytes, placed by class name
    // LootTrackerSaveHandler::AddSource(eastl::string const&, int, int, int)
    void LootTrackerSaveHandler::AddSource(basic_string* param_1, int param_2, int param_3, int param_4) {
        LootTrackerSaveHandler* pLVar1;
        long lVar2;
        undefined8 uVar3;
        undefined4 uVar4;
        int iVar5;
        LootTrackerSaveHandler* this_00;

        lVar2 = std::array<SqlStatement, 37ul>::operator[]((array<SqlStatement, 37ul>*)&field_424, 0);
        pLVar1 = *(LootTrackerSaveHandler**)(lVar2 + 16);
        uVar3 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        uVar4 = eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
        _jag_sqlite3_bind_text(pLVar1, 1, uVar3, uVar4, 18446744073709551615);
        _jag_sqlite3_bind_int(pLVar1, 2, param_2);
        this_00 = pLVar1;
        _jag_sqlite3_bind_int(pLVar1, 3, param_3);
        uVar3 = LocalUnixTimestamp(this_00);
        _jag_sqlite3_bind_int64(pLVar1, 4, uVar3);
        _jag_sqlite3_bind_int(pLVar1, 5, param_4);
        iVar5 = _jag_sqlite3_step(pLVar1);
        ProcessResultCode(this, iVar5);
        ClearAndResetStatement(this, (sqlite3_stmt*)pLVar1);
    }

    // 0x10001ded0, 112 bytes, placed by class name
    // LootTrackerSaveHandler::GetNumberOfTrackedSources()
    undefined4 LootTrackerSaveHandler::GetNumberOfTrackedSources() {
        sqlite3_stmt* psVar1;
        int iVar2;
        undefined4 uVar3;
        long lVar4;

        lVar4 = std::array<SqlStatement, 37ul>::operator[]((array<SqlStatement, 37ul>*)&field_424, 1);
        psVar1 = *(sqlite3_stmt**)(lVar4 + 16);
        iVar2 = _jag_sqlite3_step(psVar1);
        if ((iVar2 == 100) || (iVar2 == 0)) {
            uVar3 = _jag_sqlite3_column_int(psVar1, 0);
        } else {
            ProcessResultCode(this, iVar2);
            uVar3 = 4294967295;
        }
        ClearAndResetStatement(this, psVar1);
        return uVar3;
    }

    // 0x10001df40, 96 bytes, placed by class name
    // LootTrackerSaveHandler::GetSourceCount(eastl::string const&)
    undefined4 LootTrackerSaveHandler::GetSourceCount(basic_string* param_1) {
        basic_string* pbVar1;
        undefined4 uVar2;
        long lVar3;

        lVar3 = std::array<SqlStatement, 37ul>::operator[]((array<SqlStatement, 37ul>*)(param_1 + 424), 2);
        pbVar1 = *(basic_string**)(lVar3 + 16);
        PerformSqlStatement((sqlite3_stmt*)param_1, pbVar1);
        uVar2 = _jag_sqlite3_column_int(pbVar1, 0);
        ClearAndResetStatement((LootTrackerSaveHandler*)param_1, (sqlite3_stmt*)pbVar1);
        return uVar2;
    }

    // 0x10001dfa0, 256 bytes, placed by class name
    // LootTrackerSaveHandler::GetNextSourceId(eastl::string const&, int)
    undefined4 LootTrackerSaveHandler::GetNextSourceId(basic_string* param_1, int param_2) {
        basic_string* pbVar1;
        sqlite3_stmt* psVar2;
        undefined4 uVar3;
        int iVar4;
        long lVar5;
        char* pcVar6;
        eastl::string local_58[32];
        allocator local_38[8];

        lVar5 = std::array<SqlStatement, 37ul>::operator[]((array<SqlStatement, 37ul>*)(param_1 + 424), 10);
        pbVar1 = *(basic_string**)(lVar5 + 16);
        PerformSqlStatement((sqlite3_stmt*)param_1, pbVar1);
        ClearAndResetStatement((LootTrackerSaveHandler*)param_1, (sqlite3_stmt*)pbVar1);
        lVar5 = std::array<SqlStatement, 37ul>::operator[]((array<SqlStatement, 37ul>*)(param_1 + 424), 11);
        psVar2 = *(sqlite3_stmt**)(lVar5 + 16);
        PerformSqlStatement((sqlite3_stmt*)param_1, (int)psVar2);
        uVar3 = _jag_sqlite3_column_int(psVar2, 1);
        ClearAndResetStatement((LootTrackerSaveHandler*)param_1, psVar2);
        pcVar6 = (char*)GetSourceTempClearStatement();
        eastl::allocator::allocator(local_38, "EASTL basic_string");
        eastl::string::basic_string(local_58, pcVar6, local_38);
        iVar4 = ExecSqlStatement(param_1);
        eastl::string::~basic_string(local_58);
        ProcessResultCode((LootTrackerSaveHandler*)param_1, iVar4);
        return uVar3;
    }

    // 0x10001e0b0, 96 bytes, placed by class name
    // LootTrackerSaveHandler::GetSourceIdByName(eastl::string const&)
    undefined4 LootTrackerSaveHandler::GetSourceIdByName(basic_string* param_1) {
        basic_string* pbVar1;
        undefined4 uVar2;
        long lVar3;

        lVar3 = std::array<SqlStatement, 37ul>::operator[]((array<SqlStatement, 37ul>*)(param_1 + 424), 3);
        pbVar1 = *(basic_string**)(lVar3 + 16);
        PerformSqlStatement((sqlite3_stmt*)param_1, pbVar1);
        uVar2 = _jag_sqlite3_column_int(pbVar1, 0);
        ClearAndResetStatement((LootTrackerSaveHandler*)param_1, (sqlite3_stmt*)pbVar1);
        return uVar2;
    }

    // 0x10001e110, 176 bytes, placed by class name
    // LootTrackerSaveHandler::GetSourceNameById(int)
    LootTrackerSaveHandler* LootTrackerSaveHandler::GetSourceNameById(int param_1) {
        sqlite3_stmt* psVar1;
        long lVar2;
        char* pcVar3;
        undefined4 in_register_00000034;
        LootTrackerSaveHandler* this_00;
        allocator local_30[8];

        this_00 = (LootTrackerSaveHandler*)CONCAT44(in_register_00000034, param_1);
        eastl::allocator::allocator(local_30, "EASTL basic_string");
        new (this) eastl::string("", local_30);
        lVar2 = std::array<SqlStatement, 37ul>::operator[]((array<SqlStatement, 37ul>*)&this_00->field_424, 4);
        psVar1 = *(sqlite3_stmt**)(lVar2 + 16);
        PerformSqlStatement((sqlite3_stmt*)this_00, (int)psVar1);
        pcVar3 = (char*)_jag_sqlite3_column_text(psVar1, 0);
        if (pcVar3 != (char*)0) {
            assign(pcVar3);
        }
        ClearAndResetStatement(this_00, psVar1);
        return this;
    }

    // 0x10001e1c0, 96 bytes, placed by class name
    // LootTrackerSaveHandler::GetSourceIdByIdentifier(int)
    undefined4 LootTrackerSaveHandler::GetSourceIdByIdentifier(int param_1) {
        sqlite3_stmt* psVar1;
        undefined4 uVar2;
        long lVar3;
        undefined4 in_register_0000003c;
        LootTrackerSaveHandler* this;

        this = (LootTrackerSaveHandler*)CONCAT44(in_register_0000003c, param_1);
        lVar3 = std::array<SqlStatement, 37ul>::operator[]((array<SqlStatement, 37ul>*)&field_424, 5);
        psVar1 = *(sqlite3_stmt**)(lVar3 + 16);
        PerformSqlStatement((sqlite3_stmt*)this, (int)psVar1);
        uVar2 = _jag_sqlite3_column_int(psVar1, 0);
        ClearAndResetStatement(this, psVar1);
        return uVar2;
    }

    // 0x10001e220, 352 bytes, placed by class name
    // LootTrackerSaveHandler::GetCountOfSortedResultIds(int, int, LootOrder)
    undefined4 LootTrackerSaveHandler::GetCountOfSortedResultIds(int param_1, int param_2, uint param_4) {
        sqlite3_stmt* psVar1;
        char cVar2;
        int iVar3;
        undefined4 uVar4;
        undefined8 in_RAX;
        long lVar5;
        undefined8 uStack_38;

        if (param_1 < 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("start >= 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/loottracker/"
                      "LootTrackerSaveHandler.cpp",
                      388, (char*)0);
        }
        if (param_2 < 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("count >= 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/loottracker/"
                      "LootTrackerSaveHandler.cpp",
                      389, (char*)0);
        }
        uStack_38 = in_RAX;
        cVar2 = empty();
        if (cVar2 == '\0') {
            eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
        }
        if (3 < param_4) {
            /* WARNING: Subroutine does not return */
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                            "loottracker/LootTrackerSaveHandler.cpp",
                            414, (char*)0);
        }
        lVar5 = std::array<SqlStatement, 37ul>::operator[]((array<SqlStatement, 37ul>*)&field_424, (ulong)param_4 + 6);
        psVar1 = *(sqlite3_stmt**)(lVar5 + 16);
        _jag_sqlite3_bind_int(psVar1, 1, param_1);
        _jag_sqlite3_bind_int(psVar1, 2, param_2);
        iVar3 = _jag_sqlite3_step(psVar1);
        if (iVar3 == 100) {
            do {
                uVar4 = _jag_sqlite3_column_int(psVar1, 0);
                uStack_38 = CONCAT44(uVar4, (undefined4)uStack_38);
                push_back((int*)((long)&uStack_38 + 4));
                iVar3 = _jag_sqlite3_step(psVar1);
            } while (iVar3 == 100);
        }
        ProcessResultCode(this, iVar3);
        ClearAndResetStatement(this, psVar1);
        uVar4 = size();
        return uVar4;
    }

    // 0x10001e380, 16 bytes, placed by class name
    // LootTrackerSaveHandler::ClearOrderedResultIds()
    void LootTrackerSaveHandler::ClearOrderedResultIds() {
        eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
    }

    // 0x10001e390, 192 bytes, placed by class name
    // LootTrackerSaveHandler::Clear()
    void LootTrackerSaveHandler::Clear() {
        long lVar1;
        char cVar2;
        int iVar3;
        undefined8 uVar4;
        undefined8 uVar5;
        undefined8 local_20;

        lVar1 = field_336;
        uVar4 = GetLootResetStatement();
        iVar3 = _jag_sqlite3_exec(lVar1, uVar4, 0, 0, &local_20);
        cVar2 = ProcessResultCode(this, iVar3);
        if (cVar2 == '\0') {
            lVar1 = field_336;
            uVar4 = GetSourceResetStatement();
            iVar3 = _jag_sqlite3_exec(lVar1, uVar4, 0, 0, &local_20);
            cVar2 = ProcessResultCode(this, iVar3);
            if (cVar2 == '\0') {
                return;
            }
            uVar4 = logger::default_logger();
            uVar5 = 455;
        } else {
            uVar4 = logger::default_logger();
            uVar5 = 448;
        }
        logger::Logger::Log(uVar4, 0, 2,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                            "loottracker/LootTrackerSaveHandler.cpp",
                            uVar5, local_20);
    }

    // 0x10001e470, 192 bytes, placed by class name
    // LootTrackerSaveHandler::UpsertLoot(SourceItem)
    void LootTrackerSaveHandler::UpsertLoot(long param_2) {
        LootTrackerSaveHandler* pLVar1;
        long lVar2;
        undefined8 uVar3;
        undefined4 uVar4;
        int iVar5;
        LootTrackerSaveHandler* this_00;

        lVar2 = std::array<SqlStatement, 37ul>::operator[]((array<SqlStatement, 37ul>*)&field_424, 16);
        pLVar1 = *(LootTrackerSaveHandler**)(lVar2 + 16);
        _jag_sqlite3_bind_int(pLVar1, 1, *(undefined4*)(param_2 + 36));
        _jag_sqlite3_bind_int(pLVar1, 2, *(undefined4*)(param_2 + 40));
        uVar3 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        uVar4 = eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
        _jag_sqlite3_bind_text(pLVar1, 3, uVar3, uVar4, 18446744073709551615);
        this_00 = pLVar1;
        _jag_sqlite3_bind_int(pLVar1, 4, *(undefined4*)(param_2 + 32));
        uVar3 = LocalUnixTimestamp(this_00);
        _jag_sqlite3_bind_int64(pLVar1, 5, uVar3);
        iVar5 = _jag_sqlite3_step(pLVar1);
        ProcessResultCode(this, iVar5);
        ClearAndResetStatement(this, (sqlite3_stmt*)pLVar1);
    }

    // 0x10001e530, 112 bytes, placed by class name
    // LootTrackerSaveHandler::GetLootItemsBySourceName(eastl::string const&)
    undefined4 LootTrackerSaveHandler::GetLootItemsBySourceName(basic_string* param_1) {
        basic_string* pbVar1;
        undefined4 uVar2;
        long lVar3;

        lVar3 = eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
        if (lVar3 == 0) {
            uVar2 = 4294967295;
        } else {
            lVar3 = std::array<SqlStatement, 37ul>::operator[]((array<SqlStatement, 37ul>*)(param_1 + 424), 17);
            pbVar1 = *(basic_string**)(lVar3 + 16);
            PerformSqlStatement((sqlite3_stmt*)param_1, pbVar1);
            uVar2 = _jag_sqlite3_column_int(pbVar1, 0);
            ClearAndResetStatement((LootTrackerSaveHandler*)param_1, (sqlite3_stmt*)pbVar1);
        }
        return uVar2;
    }

    // 0x10001e5a0, 96 bytes, placed by class name
    // LootTrackerSaveHandler::GetLootItemsBySourceId(int)
    undefined4 LootTrackerSaveHandler::GetLootItemsBySourceId(int param_1) {
        sqlite3_stmt* psVar1;
        undefined4 uVar2;
        long lVar3;
        undefined4 in_register_0000003c;
        LootTrackerSaveHandler* this;

        this = (LootTrackerSaveHandler*)CONCAT44(in_register_0000003c, param_1);
        lVar3 = std::array<SqlStatement, 37ul>::operator[]((array<SqlStatement, 37ul>*)&field_424, 18);
        psVar1 = *(sqlite3_stmt**)(lVar3 + 16);
        PerformSqlStatement((sqlite3_stmt*)this, (int)psVar1);
        uVar2 = _jag_sqlite3_column_int(psVar1, 0);
        ClearAndResetStatement(this, psVar1);
        return uVar2;
    }

    // 0x10001e600, 192 bytes, placed by class name
    // LootTrackerSaveHandler::GetSourceLootItemByName(eastl::string const&, int)
    LootTrackerSaveHandler* LootTrackerSaveHandler::GetSourceLootItemByName(basic_string* param_1, int param_2) {
        basic_string* pbVar1;
        long lVar2;
        undefined4 in_register_00000014;

        lVar2 = eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
        if (lVar2 == 0) {
            new (this) SourceItem();
            eastl::string::operator=((eastl::string*)this, (basic_string*)CONCAT44(in_register_00000014, param_2));
            field_32 = 0;
            field_36 = 4294967295;
            field_40 = 4294967295;
        } else {
            lVar2 = std::array<SqlStatement, 37ul>::operator[]((array<SqlStatement, 37ul>*)(param_1 + 424), 19);
            pbVar1 = *(basic_string**)(lVar2 + 16);
            PerformSqlStatement((sqlite3_stmt*)param_1, pbVar1);
            ClearAndResetStatement((LootTrackerSaveHandler*)param_1, (sqlite3_stmt*)pbVar1);
            GetSourceLootItem(this, param_1, param_2, 0);
        }
        return this;
    }

    // 0x10001e6c0, 272 bytes, placed by class name
    // LootTrackerSaveHandler::GetSourceLootItem(eastl::string const&, int, int)
    LootTrackerSaveHandler* LootTrackerSaveHandler::GetSourceLootItem(basic_string* param_1, int param_2, int param_3) {
        sqlite3_stmt* psVar1;
        undefined4 uVar2;
        int iVar3;
        long lVar4;
        char* pcVar5;
        undefined4 in_register_00000014;
        eastl::string local_60[32];
        allocator local_40[12];

        lVar4 = std::array<SqlStatement, 37ul>::operator[]((array<SqlStatement, 37ul>*)(param_1 + 424), 21);
        psVar1 = *(sqlite3_stmt**)(lVar4 + 16);
        PerformSqlStatement((sqlite3_stmt*)param_1, (int)psVar1);
        new (this) SourceItem();
        eastl::string::operator=((eastl::string*)this, (basic_string*)CONCAT44(in_register_00000014, param_2));
        field_32 = param_3;
        uVar2 = _jag_sqlite3_column_int(psVar1, 1);
        field_36 = uVar2;
        uVar2 = _jag_sqlite3_column_int(psVar1, 2);
        field_40 = uVar2;
        ClearAndResetStatement((LootTrackerSaveHandler*)param_1, psVar1);
        pcVar5 = (char*)GetLootTempClearTableStatement();
        eastl::allocator::allocator(local_40, "EASTL basic_string");
        eastl::string::basic_string(local_60, pcVar5, local_40);
        iVar3 = ExecSqlStatement(param_1);
        eastl::string::~basic_string(local_60);
        ProcessResultCode((LootTrackerSaveHandler*)param_1, iVar3);
        return this;
    }

    // 0x10001e7d0, 272 bytes, placed by class name
    // LootTrackerSaveHandler::GetSourceLootItemById(int, int)
    LootTrackerSaveHandler* LootTrackerSaveHandler::GetSourceLootItemById(int param_1, int param_2) {
        sqlite3_stmt* psVar1;
        long lVar2;
        undefined4 in_register_00000034;
        LootTrackerSaveHandler* this_00;
        eastl::string local_60[32];
        allocator local_40[16];

        this_00 = (LootTrackerSaveHandler*)CONCAT44(in_register_00000034, param_1);
        if (param_2 < 0) {
            new (this) SourceItem();
            assign("");
            field_32 = 0;
            field_36 = 4294967295;
            field_40 = 4294967295;
        } else {
            lVar2 = std::array<SqlStatement, 37ul>::operator[]((array<SqlStatement, 37ul>*)&this_00->field_424, 20);
            psVar1 = *(sqlite3_stmt**)(lVar2 + 16);
            PerformSqlStatement((sqlite3_stmt*)this_00, (int)psVar1);
            ClearAndResetStatement(this_00, psVar1);
            eastl::allocator::allocator(local_40, "EASTL basic_string");
            eastl::string::basic_string(local_60, "", local_40);
            GetSourceLootItem(this, (basic_string*)this_00, (int)local_60, param_2);
            eastl::string::~basic_string(local_60);
        }
        return this;
    }

    // 0x10001e8f0, 96 bytes, placed by class name
    // LootTrackerSaveHandler::RemoveIgnoreItemByIndex(int, IgnoreEntryType)
    void LootTrackerSaveHandler::RemoveIgnoreItemByIndex(undefined8 param_2, int param_3) {
        long lVar1;
        sqlite3_stmt* psVar2;
        ulong uVar3;

        if (param_3 == 0) {
            uVar3 = 24;
        } else {
            if (param_3 != 1) {
                psVar2 = (sqlite3_stmt*)0;
                goto LAB_10001e929;
            }
            uVar3 = 30;
        }
        lVar1 = std::array<SqlStatement, 37ul>::operator[]((array<SqlStatement, 37ul>*)&field_424, uVar3);
        psVar2 = *(sqlite3_stmt**)(lVar1 + 16);
    LAB_10001e929:
        PerformSqlStatement((sqlite3_stmt*)this, (int)psVar2);
        ClearAndResetStatement(this, psVar2);
    }

    // 0x10001e950, 128 bytes, placed by class name
    // LootTrackerSaveHandler::GetNumberOfIgnoredItems(IgnoreEntryType)
    undefined4 LootTrackerSaveHandler::GetNumberOfIgnoredItems(int param_2) {
        char cVar1;
        int iVar2;
        undefined4 uVar3;
        long lVar4;
        ulong uVar5;
        sqlite3_stmt* psVar6;

        if (param_2 == 0) {
            uVar5 = 25;
        } else {
            if (param_2 != 1) {
                psVar6 = (sqlite3_stmt*)0;
                goto LAB_10001e987;
            }
            uVar5 = 31;
        }
        lVar4 = std::array<SqlStatement, 37ul>::operator[]((array<SqlStatement, 37ul>*)&field_424, uVar5);
        psVar6 = *(sqlite3_stmt**)(lVar4 + 16);
    LAB_10001e987:
        iVar2 = _jag_sqlite3_step(psVar6);
        cVar1 = ProcessResultCode(this, iVar2);
        uVar3 = 4294967295;
        if (cVar1 == '\0') {
            uVar3 = _jag_sqlite3_column_int(psVar6, 0);
        }
        ClearAndResetStatement(this, psVar6);
        return uVar3;
    }

    // 0x10001e9d0, 208 bytes, placed by class name
    // LootTrackerSaveHandler::GetIgnoredItem(int, IgnoreEntryType)
    eastl::string* LootTrackerSaveHandler::GetIgnoredItem(eastl::string* param_1, LootTrackerSaveHandler* param_2,
                                                          undefined8 param_3, int param_4) {
        long lVar1;
        char* pcVar2;
        sqlite3_stmt* psVar3;
        ulong uVar4;
        allocator local_38[8];

        eastl::allocator::allocator(local_38, "EASTL basic_string");
        eastl::string::basic_string(param_1, "", local_38);
        if (param_4 == 0) {
            uVar4 = 26;
        } else {
            if (param_4 != 1) {
                psVar3 = (sqlite3_stmt*)0;
                goto LAB_10001ea38;
            }
            uVar4 = 32;
        }
        lVar1 = std::array<SqlStatement, 37ul>::operator[]((array<SqlStatement, 37ul>*)&param_2->field_424, uVar4);
        psVar3 = *(sqlite3_stmt**)(lVar1 + 16);
    LAB_10001ea38:
        PerformSqlStatement((sqlite3_stmt*)param_2, (int)psVar3);
        pcVar2 = (char*)_jag_sqlite3_column_text(psVar3, 0);
        if (pcVar2 != (char*)0) {
            eastl::string::assign(param_1, pcVar2);
        }
        ClearAndResetStatement(param_2, psVar3);
        return param_1;
    }

    // 0x10001eaa0, 80 bytes, placed by class name
    // LootTrackerSaveHandler::ClearIgnoredItems(IgnoreEntryType)
    void LootTrackerSaveHandler::ClearIgnoredItems(int param_2) {
        long lVar1;
        sqlite3_stmt* psVar2;
        ulong uVar3;

        if (param_2 == 0) {
            uVar3 = 27;
        } else {
            if (param_2 != 1) {
                psVar2 = (sqlite3_stmt*)0;
                goto LAB_10001ead3;
            }
            uVar3 = 33;
        }
        lVar1 = std::array<SqlStatement, 37ul>::operator[]((array<SqlStatement, 37ul>*)&field_424, uVar3);
        psVar2 = *(sqlite3_stmt**)(lVar1 + 16);
    LAB_10001ead3:
        _jag_sqlite3_step(psVar2);
        ClearAndResetStatement(this, psVar2);
    }

} // namespace jag::oldscape::loottracker
