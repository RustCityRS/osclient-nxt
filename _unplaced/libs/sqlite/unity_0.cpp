// _unplaced/libs/sqlite/unity_0.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.sqlite

namespace jag {
    class SQLInit {
    public:
        IsDBCorruptionError(int);
        bool IsDBLockedError(int);
        ulong Initialise();
        void AtExit();
        void Destroy();
        GetMemoryUsage(SQLiteMemoryStatus&);
        static /* 72 bytes */ ms_exclusive; // initialised in its definition
        static /* 8 bytes */ ms_initDone;
    };

    // 0x100f46138, 72 bytes, __data
    SQLInit::ms_exclusive = {
        850045863, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    };

    // 0x103bc22a8, 8 bytes, __common; zero-initialised
    SQLInit::ms_initDone;

    // 0x100b2abb0, 32 bytes, placed by nothing (unplaced)
    // SQLiteMalloc(int)
    void SQLiteMalloc(int param_1) {
        BucketManager::Allocate((long)param_1, 0, 16);
    }

    // 0x100b2abd0, 16 bytes, placed by nothing (unplaced)
    // SQLiteFree(void*)
    void SQLiteFree(void* param_1) {
        BucketManager::DeAllocate(param_1);
    }

    // 0x100b2abe0, 96 bytes, placed by nothing (unplaced)
    // SQLiteRealloc(void*, int)
    void* SQLiteRealloc(void* param_1, int param_2) {
        int iVar1;
        void* pvVar2;

        iVar1 = BucketManager::GetAllocationSize(param_1);
        pvVar2 = param_1;
        if (iVar1 < param_2) {
            pvVar2 = (void*)BucketManager::Allocate((long)param_2, 0, 16);
            _memcpy(pvVar2, param_1, (long)iVar1);
            BucketManager::DeAllocate(param_1);
        }
        return pvVar2;
    }

    // 0x100b2ac40, 16 bytes, placed by nothing (unplaced)
    // SQLiteSize(void*)
    void SQLiteSize(void* param_1) {
        BucketManager::GetAllocationSize(param_1);
    }

    // 0x100b2ac50, 32 bytes, placed by nothing (unplaced)
    // SQLiteRoundup(int)
    uint SQLiteRoundup(int param_1) {
        uint uVar1;

        uVar1 = param_1 + 6;
        if (-1 < (int)(param_1 + 3U)) {
            uVar1 = param_1 + 3U;
        }
        return uVar1 & 4294967292;
    }

    // 0x100b2ac70, 16 bytes, placed by nothing (unplaced)
    // SQLiteInit(void*)
    undefined8 SQLiteInit(void* param_1) {
        return 0;
    }

    // 0x100b2ac80, 16 bytes, placed by nothing (unplaced)
    // SQLiteShutdown(void*)
    void SQLiteShutdown(void* param_1) {}

    // 0x100b2ac90, 32 bytes, placed by nothing (unplaced)
    // SQLInit::IsDBCorruptionError(int)
    undefined8 SQLInit::IsDBCorruptionError(int param_1) {
        return CONCAT71(168, (43073U >> (param_1 - 11U & 31) & 1) != 0 && param_1 - 11U < 16);
    }

    // 0x100b2acb0, 16 bytes, placed by nothing (unplaced)
    // SQLInit::IsDBLockedError(int)
    bool SQLInit::IsDBLockedError(int param_1) {
        return param_1 - 5U < 2;
    }

    // 0x100b2acc0, 240 bytes, placed by nothing (unplaced)
    // SQLInit::Initialise()
    ulong SQLInit::Initialise() {
        int iVar1;
        undefined8 unaff_RBX;
        undefined7 uVar3;
        ulong uVar2;
        code* local_58;
        code* local_50;
        code* local_48;
        code* local_40;
        code* local_38;
        code* local_30;
        code* local_28;
        scoped_lock<std::mutex> local_18[8];

        std::scoped_lock<std::mutex>::scoped_lock(local_18, (mutex*)&ms_exclusive);
        uVar3 = (undefined7)((ulong)unaff_RBX >> 8);
        uVar2 = CONCAT71(uVar3, 1);
        if (ms_initDone == '\0') {
            ms_initDone = '\x01';
            _jag_sqlite3_config(9, 0);
            _jag_sqlite3_config(16, SQLlogFunc, 0);
            local_58 = SQLiteMalloc;
            local_50 = SQLiteFree;
            local_48 = SQLiteRealloc;
            local_40 = SQLiteSize;
            local_38 = SQLiteRoundup;
            local_30 = SQLiteInit;
            local_28 = SQLiteShutdown;
            _jag_sqlite3_config(4, &local_58);
            iVar1 = _jag_sqlite3_initialize();
            uVar2 = CONCAT71(uVar3, iVar1 == 0);
            if (iVar1 == 0) {
                _atexit(AtExit);
            }
        }
        std::scoped_lock<std::mutex>::~scoped_lock(local_18);
        return uVar2 & 4294967295;
    }

    // 0x100b2adb0, 80 bytes, placed by nothing (unplaced)
    // SQLlogFunc(void*, int, char const*)
    void SQLlogFunc(void* param_1, int param_2, char* param_3) {
        undefined8 uVar1;

        uVar1 = logger::default_logger();
        logger::Logger::Log(uVar1, 0, 2,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/devplatform/3rdPartyLibs/"
                            "cpp/sqlite/SQLInit.cpp",
                            66, "SQLite[%d]: %s", param_2, param_3);
    }

    // 0x100b2ae00, 16 bytes, placed by nothing (unplaced)
    // SQLInit::AtExit()
    void SQLInit::AtExit() {
        _jag_sqlite3_shutdown();
    }

    // 0x100b2ae10, 16 bytes, placed by nothing (unplaced)
    // SQLInit::Destroy()
    void SQLInit::Destroy() {
        BucketManager::PrintMetrics();
    }

    // 0x100b2ae20, 16 bytes, placed by nothing (unplaced)
    // SQLInit::GetMemoryUsage(SQLiteMemoryStatus&)
    undefined8 SQLInit::GetMemoryUsage(SQLiteMemoryStatus* param_1) {
        return 0;
    }

} // namespace jag
