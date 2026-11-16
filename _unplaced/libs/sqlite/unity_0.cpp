// _unplaced/libs/sqlite/unity_0.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.sqlite

namespace jag {
    class SQLInit {
    public:
        void IsDBCorruptionError(int arg1);
        bool IsDBLockedError(int arg1);
        unsigned long Initialise();
        void AtExit();
        void Destroy();
        uint64_t GetMemoryUsage(SQLiteMemoryStatus& sqLiteMemoryStatus);
        static int32_t ms_exclusive[18]; // initialised in its definition
        static int64_t ms_initDone;

        uint8_t _unknown_0[1];
    };

    // 0x100f46138
    int32_t SQLInit::ms_exclusive[18] = {
        850045863, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    };

    // 0x103bc22a8
    int64_t SQLInit::ms_initDone;

    // 0x100b2abb0
    void SQLiteMalloc(int arg1) {
        BucketManager::Allocate((long)arg1, 0, 16);
    }

    // 0x100b2abd0
    void SQLiteFree(void* arg1) {
        BucketManager::DeAllocate(arg1);
    }

    // 0x100b2abe0
    void* SQLiteRealloc(void* arg1, int arg2) {
        int iVar1 = BucketManager::GetAllocationSize(arg1);
        void* pvVar2 = arg1;
        if (iVar1 < arg2) {
            pvVar2 = (void*)BucketManager::Allocate((long)arg2, 0, 16);
            _memcpy(pvVar2, arg1, (long)iVar1);
            BucketManager::DeAllocate(arg1);
        }
        return pvVar2;
    }

    // 0x100b2ac40
    void SQLiteSize(void* arg1) {
        BucketManager::GetAllocationSize(arg1);
    }

    // 0x100b2ac50
    unsigned int SQLiteRoundup(int arg1) {
        unsigned int uVar1 = arg1 + 6;
        if (-1 < (int)(arg1 + 3U)) {
            uVar1 = arg1 + 3U;
        }
        return uVar1 & 4294967292;
    }

    // 0x100b2ac70
    void SQLiteInit(void* arg1) {
        return 0;
    }

    // 0x100b2ac80
    void SQLiteShutdown(void* arg1) {}

    // 0x100b2ac90
    void SQLInit::IsDBCorruptionError(int arg1) {
        return (43073U >> (arg1 - 11U & 31) & 1) != 0 && arg1 - 11U < 16;
    }

    // 0x100b2acb0
    bool SQLInit::IsDBLockedError(int arg1) {
        return arg1 - 5U < 2;
    }

    // 0x100b2acc0
    unsigned long SQLInit::Initialise() {
        int iVar1;
        uint64_t unaff_RBX;
        void* local_58;
        void* local_50;
        void* local_48;
        void* local_40;
        void* local_38;
        void* local_30;
        void* local_28;

        scoped_lock<std::mutex> local_18(ms_exclusive);
        uint64_t uVar3 = (uint64_t)((unsigned long)unaff_RBX >> 8);
        unsigned long uVar2 = (((uint64_t)uVar3 << 8) | (uint8_t)1);
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
            uVar2 = (((uint64_t)uVar3 << 8) | (uint8_t)(iVar1 == 0));
            if (iVar1 == 0) {
                _atexit(AtExit);
            }
        }
        return uVar2 & 4294967295;
    }

    // 0x100b2adb0
    void SQLlogFunc(void* arg1, int arg2, const char* str) {
        (logger::default_logger())
            ->Log(false, 2,
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/devplatform/3rdPartyLibs/cpp/"
                  "sqlite/SQLInit.cpp",
                  66, "SQLite[%d]: %s", (unsigned long)(unsigned int)arg2, str);
    }

    // 0x100b2ae00
    void SQLInit::AtExit() {
        _jag_sqlite3_shutdown();
    }

    // 0x100b2ae10
    void SQLInit::Destroy() {
        BucketManager::PrintMetrics();
    }

    // 0x100b2ae20
    uint64_t SQLInit::GetMemoryUsage(SQLiteMemoryStatus& sqLiteMemoryStatus) {
        return 0;
    }

} // namespace jag
