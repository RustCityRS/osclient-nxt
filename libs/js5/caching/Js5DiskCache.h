// libs/js5/caching/Js5DiskCache.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag {
    class Js5DiskCache : public oldscape::dash3d::DeferredHighlight // base inferred from shared vtable slots
    {
    public:
        class ActionCounter;
        class ArchiveCacheStatusData;
        class ArchiveInUseGuard;
        class Database;
        class QueueItem;
        class QueueRequestItem;
        class QueueResultItem;
        // virtual methods in vtable order
        virtual void OnCacheFolderChanged(Filename const&, Filename const&);
        virtual ~Js5DiskCache();
        long GetUsageBytes() const;
        GetQuotaBytes() const;
        int GetActivity() const;
        int GetQueueSize() const;
        GetMissingGroupCount(int) const;
        Ready(int) const;
        bool IsValidated(int) const;
        void Validate(int);
        void EnableValidate(bool);
        Js5DiskCache(Js5ResourceProvider&, eastl::string const&, SystemSettings*, Js5ArchiveSetSettings&);
        void UpdateIndexSizesForArchives();
        int CheckGroup(int, int) const;
        HasReadOnlyArchive(int) const;
        void Service();
        int GetStateFulllArchiveLoad(int);
        void RequestFullArchive(int);
        void GetGroup(int, int, Js5Index const*, Js5DiskCacheFormat, Priority const*, bool, bool);
        void ProvideGroup(int, int, shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>> const&, unsigned int,
                          unsigned int, Js5DiskCacheFormat);
        void DeleteCache();
        void ClearFullArchiveRequestState();
        void Shutdown();
        void Startup();
        Js5DiskCache* GetDatabaseRootFolder();
        void GetDatabaseFilename(int, bool);
        void DeleteOldArchives();
        void StopThreads();
        int GetNextVacuumCandidate();
        void CloseDatabases();
        void UpdateMissingGroupCount(int, unsigned int);
        void MoveFromInsertionQueue();
        void IncrementCounterForJob(QueueRequestItem const&, bool);
        void DeleteGroup(int, int);
        void HandleCrash(callstack::JagException const&, int);
        void ThreadRunnerWrapper(int);
        void ThreadRunnerSEHWrapper(int);
        void CloseDatabasesSEHWrapper();
        void ThreadRunner(int);
        void ServiceLoop(int);
        void ProcessOpen(Database&);
        void ValidateDatabase(int);
        void DecrementCounterForJob(QueueRequestItem const&, bool);
        ulong AnythingMoreImportant(Priority const*);
        void UpdateDiskCacheSize();
        void ClearSQLSoftCache();
        void LoadFullArchiveService();
        void ProcessRequest(QueueRequestItem const&);
        void ProcessRead(QueueRequestItem const&);
        void ProcessWrite(QueueRequestItem const&);
        void ProcessDelete(QueueRequestItem const&);
        void ProcessDelayedEnd(QueueRequestItem const&);
        ulong PerformWrite(Database&, QueueRequestItem const&, bool);
        void RescheduleRequest(QueueRequestItem const&, bool);
        void DelayedEndTransaction(int);
        void LoadFullArchive(int);
        ulong UnpackReadData(unsigned char const*, int, QueueResultItem&);
        PerformDelete(Database&, QueueRequestItem const&);
        void PerformInfoStatement(Database&);
        PerformRead(Database&, QueueRequestItem const&);
        void RescheduleRequestInner(QueueRequestItem const&);
        void OnCacheFolderChangedImpl(Filename const&, Filename const&);
        static /* 8 bytes */ m_notificationHandler;

        // data members, from how the methods use this: 1513236 bytes, the first 8 are DeferredHighlight
        char _unknown_8[70216];
        undefined8 field_70224; // offset 70224
        undefined8 field_70232; // offset 70232
        undefined8 field_70240; // offset 70240
        undefined8 field_70248; // offset 70248
        undefined8 field_70256; // offset 70256
        undefined8 field_70264; // offset 70264
        undefined8 field_70272; // offset 70272
        undefined8 field_70280; // offset 70280
        char _unknown_70288[8];
        Js5ArchiveSetSettings* field_70296; // offset 70296
        SystemSettings* field_70304;        // offset 70304
        Js5ResourceProvider* field_70312;   // offset 70312
        char _unknown_70320[32];
        char field_70352; // offset 70352
        char _unknown_70353[3];
        int field_70356; // offset 70356
        char _unknown_70360[4];
        uint field_70364; // offset 70364
        char _unknown_70368[16];
        long m_usageBytes;      // offset 70384
        undefined1 field_70392; // offset 70392
        char _unknown_70393[7];
        ulonglong field_70400;  // offset 70400
        undefined1 field_70408; // offset 70408
        char _unknown_70409[7];
        int field_70416; // offset 70416
        int field_70420; // offset 70420
        char _unknown_70424[1441784];
        undefined1 field_1512208; // offset 1512208
        char _unknown_1512209[63];
        undefined1 field_1512272; // offset 1512272
        char _unknown_1512273[111];
        int field_1512384; // offset 1512384
        char _unknown_1512388[340];
        ulong field_1512728;      // offset 1512728
        ulong field_1512736;      // offset 1512736
        undefined1 field_1512744; // offset 1512744
        char _unknown_1512745[7];
        ulong field_1512752;      // offset 1512752
        undefined1 field_1512760; // offset 1512760
        char _unknown_1512761[95];
        undefined1 field_1512856; // offset 1512856
        char _unknown_1512857[63];
        Filename field_1512920; // offset 1512920
        char _unknown_1512936[288];
        undefined1 field_1513224; // offset 1513224
        bool field_1513225;       // offset 1513225
        byte field_1513226;       // offset 1513226
        char _unknown_1513227[1];
        int field_1513228; // offset 1513228
        char _unknown_1513232[4];
    };

    class Js5DiskCache::ActionCounter {
    public:
        ActionCounter();
    };

    class Js5DiskCache::ArchiveCacheStatusData {
    public:
        ArchiveCacheStatusData();
        ~ArchiveCacheStatusData();

        // data members, from how the methods use this: 16 bytes
        undefined4 field_0; // offset 0
        char _unknown_4[12];
    };

    class Js5DiskCache::ArchiveInUseGuard {
    public:
        ArchiveInUseGuard(std::array<signed char, 67ul>&, int);
        bool Lock(int);
        IsLocked(int);
        ~ArchiveInUseGuard();
        bool IsLocked();
        void Unlock();

        // data members, from how the methods use this: 20 bytes
        array* field_0; // offset 0
        int field_8;    // offset 8
        int field_12;   // offset 12
        char _unknown_16[4];
    };

    class Js5DiskCache::Database {
    public:
        byte Close();
        void HandleSQLErrorImpl(int);
        bool IsOpen() const;
        Open();
        bool Vacuum();
        long GetSizeOnDisk() const;
        sqlite3_stmt* BuildStatement(char const*, sqlite3_stmt*&);
        bool HandleSQLError(int);
        void GetInsertIndexStatement();
        void GetInsertStatement();
        bool DoBeginTransaction();
        void GetBeginStatement();
        bool DoEndTransaction();
        void GetEndStatement();
        void GetSelectAllStatement();
        void GetPageCountStatement();
        void GetFreeListCountStatement();
        void GetSelectIndexStatement();
        void GetSelectStatement();
        void GetDeleteIndexStatement();
        void GetDeleteStatement();
        void SetProperties(bool);
        bool ClearStatement(sqlite3_stmt*&);
        Database();
        ~Database();

        // data members, from how the methods use this: 472 bytes
        Js5DiskCache* field_0; // offset 0
        undefined4 field_8;    // offset 8
        char _unknown_12[2];
        char field_14; // offset 14
        char field_15; // offset 15
        char _unknown_16[4];
        undefined4 field_20; // offset 20
        undefined1 field_24; // offset 24
        char _unknown_25[3];
        undefined4 field_28; // offset 28
        undefined1 field_32; // offset 32
        undefined1 field_33; // offset 33
        char _unknown_34[6];
        undefined8 field_40; // offset 40
        Filename field_48;   // offset 48
        char _unknown_64[288];
        uint field_352;       // offset 352
        uint field_356;       // offset 356
        undefined4 field_360; // offset 360
        undefined1 field_364; // offset 364
        char _unknown_365[3];
        undefined4 field_368; // offset 368
        char _unknown_372[4];
        long field_376;          // offset 376
        sqlite3_stmt* field_384; // offset 384
        sqlite3_stmt* field_392; // offset 392
        sqlite3_stmt* field_400; // offset 400
        sqlite3_stmt* field_408; // offset 408
        sqlite3_stmt* field_416; // offset 416
        sqlite3_stmt* field_424; // offset 424
        sqlite3_stmt* field_432; // offset 432
        sqlite3_stmt* field_440; // offset 440
        sqlite3_stmt* field_448; // offset 448
        sqlite3_stmt* field_456; // offset 456
        sqlite3_stmt* field_464; // offset 464
    };

    class Js5DiskCache::QueueItem {
    public:
        void swap(QueueItem&);
        QueueItem();

        // data members, from how the methods use this: 44 bytes
        uint field_0;  // offset 0
        uint field_4;  // offset 4
        uint field_8;  // offset 8
        uint field_12; // offset 12
        uint field_16; // offset 16
        char _unknown_20[4];
        Pix8* field_24; // offset 24
        char _unknown_32[4];
        undefined4 field_36; // offset 36
        char _unknown_40[4];
    };

    class Js5DiskCache::QueueRequestItem {
    public:
        ~QueueRequestItem();
        void swap(QueueRequestItem&);
        QueueRequestItem();
        QueueRequestItem(QueueRequestItem&&);
        QueueRequestItem* operator=(QueueRequestItem&&);
        bool operator<(QueueRequestItem const&) const;
        QueueRequestItem(QueueRequestItem const&);

        // data members, from how the methods use this: 48 bytes
        undefined4 field_0;  // offset 0
        uint field_4;        // offset 4
        uint field_8;        // offset 8
        uint field_12;       // offset 12
        uint field_16;       // offset 16
        undefined4 field_20; // offset 20
        Pix8* field_24;      // offset 24
        undefined4 field_32; // offset 32
        uint field_36;       // offset 36
        char _unknown_40[8];
    };

    class Js5DiskCache::QueueResultItem {
    public:
        QueueResultItem(QueueItem const&);
        ~QueueResultItem();
        QueueResultItem();
        QueueResultItem(QueueResultItem&&);
        QueueResultItem* operator=(QueueResultItem&&);
        QueueResultItem* operator=(QueueResultItem const&);
        QueueResultItem(QueueResultItem const&);

        // data members, from how the methods use this: 56 bytes
        undefined4 field_0;  // offset 0
        undefined4 field_4;  // offset 4
        undefined4 field_8;  // offset 8
        undefined4 field_12; // offset 12
        undefined4 field_16; // offset 16
        undefined4 field_20; // offset 20
        undefined8 field_24; // offset 24
        undefined1 field_32; // offset 32
        undefined1 field_33; // offset 33
        undefined1 field_34; // offset 34
        undefined1 field_35; // offset 35
        undefined4 field_36; // offset 36
        undefined4 field_40; // offset 40
        char _unknown_44[12];
    };

    // 0x1008fc870, 16 bytes, inline, placed by class name and debug map
    // Js5DiskCache::GetUsageBytes() const
    long Js5DiskCache::GetUsageBytes() {
        return m_usageBytes;
    }

    // 0x1008fc880, 16 bytes, inline, placed by class name and debug map
    // Js5DiskCache::GetQuotaBytes() const
    undefined8 Js5DiskCache::GetQuotaBytes() {
        return 5368709120;
    }

    // 0x1008fc890, 128 bytes, inline, placed by debug map only (low confidence)
    // char const* DataSizeString<eastl::fixed_string<char, 32, true, eastl::allocator> >(eastl::fixed_string<char, 32, true, eastl::allocator>&, unsigned long long)
    char* DataSizeString<eastl::fixed_string<char, 32, true, eastl::allocator>>(fixed_string* param_1,
                                                                                ulonglong param_2) {
        char* pcVar1;
        float fVar2;

        if (param_2 < 1048577) {
            if (param_2 < 1025) {
                eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 32ul, 1ul, 0ul, true, eastl::allocator>>::
                    sprintf((char*)param_1, "%d bytes");
                goto LAB_1008fc8f3;
            }
            fVar2 = Bytes2Kilobytes<unsigned long long>(param_2);
            pcVar1 = "%.3fKB";
        } else {
            fVar2 = Bytes2Megabytes<unsigned long long>(param_2);
            pcVar1 = "%.3fMB";
        }
        eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 32ul, 1ul, 0ul, true, eastl::allocator>>::sprintf(
            (char*)param_1, (double)fVar2, pcVar1);
    LAB_1008fc8f3:
        pcVar1 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        return pcVar1;
    }

    // 0x1008fc9a0, 32 bytes, inline, placed by class name and debug map
    // Js5DiskCache::GetActivity() const
    int Js5DiskCache::GetActivity() {
        int iVar1;

        iVar1 = field_1513228;
        field_1513228 = 0;
        return iVar1;
    }

    // 0x1008fca00, 32 bytes, inline, placed by class name and debug map
    // Js5DiskCache::GetQueueSize() const
    int Js5DiskCache::GetQueueSize() {
        return field_70420 + field_70416;
    }

    // 0x1009e1400, 32 bytes, inline, placed by class name
    // Js5DiskCache::Ready(int) const
    undefined1 Js5DiskCache::Ready(int param_1) {
        long lVar1;

        lVar1 = std::array<Js5DiskCache::Database, 67ul>::operator[]((array<Js5DiskCache::Database, 67ul>*)&field_8,
                                                                     (long)param_1);
        return *(undefined1*)(lVar1 + 12);
    }

    // 0x1009e3f00, 32 bytes, inline, placed by class name
    // Js5DiskCache::EnableValidate(bool)
    void Js5DiskCache::EnableValidate(bool param_1) {
        if (field_70364 != 0) {
            field_1513225 = param_1;
        }
    }

    // 0x1009e5110, 32 bytes, inline, placed by class name
    // Js5DiskCache::HasReadOnlyArchive(int) const
    undefined1 Js5DiskCache::HasReadOnlyArchive(int param_1) {
        undefined1* puVar1;

        puVar1 = (undefined1*)std::array<bool, 67ul>::operator[]((array<bool, 67ul>*)&field_1512656, (long)param_1);
        return *puVar1;
    }

    // 0x1009e5950, 64 bytes, inline, placed by class name
    // Js5DiskCache::GetStateFulllArchiveLoad(int)
    int Js5DiskCache::GetStateFulllArchiveLoad(int param_1) {
        int* piVar1;

        piVar1 = (int*)std::array<FullArchiveRequestStatus, 67ul>::operator[](
            (array<FullArchiveRequestStatus, 67ul>*)&field_1512388, (long)param_1);
        if (*piVar1 == 3) {
            Service(this);
            *piVar1 = 4;
            field_1512384 = field_1512384 + -1;
        }
        return *piVar1;
    }

    // 0x1009e5990, 96 bytes, inline, placed by class name
    // Js5DiskCache::RequestFullArchive(int)
    void Js5DiskCache::RequestFullArchive(int param_1) {
        int* piVar1;

        piVar1 = (int*)std::array<FullArchiveRequestStatus, 67ul>::operator[](
            (array<FullArchiveRequestStatus, 67ul>*)&field_1512388, (long)param_1);
        if (*piVar1 != 0) {
            /* WARNING: Subroutine does not return */
            LogAssert(
                "m_fullArchiveRequestStatus[archiveID] == FullArchiveRequestStatus::NONE",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/caching/Js5DiskCache.h", 131,
                (char*)0);
        }
        if (*piVar1 != 2) {
            field_1512384 = field_1512384 + 1;
        }
        *piVar1 = 1;
    }

    // 0x1009e86b0, 80 bytes, inline, placed by class name
    // Js5DiskCache::ClearFullArchiveRequestState()
    void Js5DiskCache::ClearFullArchiveRequestState() {
        FullArchiveRequestStatus* pFVar1;
        FullArchiveRequestStatus* pFVar2;
        undefined4 local_1c;

        pFVar1 = (FullArchiveRequestStatus*)(&field_1512388)->begin();
        pFVar2 = (FullArchiveRequestStatus*)(&field_1512388)->end();
        local_1c = 0;
        eastl::fill<FullArchiveRequestStatus*, FullArchiveRequestStatus>(pFVar1, pFVar2,
                                                                         (FullArchiveRequestStatus*)&local_1c);
    }

    // 0x1009eb3d0, 32 bytes, inline, placed by class name
    // Js5DiskCache::Database::IsOpen() const
    bool Js5DiskCache::Database::IsOpen() {
        return field_376 != 0;
    }

    // 0x1009ebce0, 48 bytes, inline, placed by class name
    // Js5DiskCache::QueueRequestItem::swap(Js5DiskCache::QueueRequestItem&)
    void Js5DiskCache::QueueRequestItem::swap(QueueRequestItem* param_1) {
        swap(param_1);
        (&field_40, (shared_ptr*)&param_1->field_40)->swap();
    }

    // 0x1009ebf30, 16 bytes, complete-object constructor, inline, placed by class name
    // Js5DiskCache::ArchiveInUseGuard::ArchiveInUseGuard(std::array<signed char, 67ul>&, int): jumps straight to the base-object constructor

    // 0x1009ec110, 16 bytes, complete-object constructor, inline, placed by class name
    // Js5DiskCache::QueueRequestItem::QueueRequestItem(): jumps straight to the base-object constructor

    // 0x1009ec120, 96 bytes, inline, placed by class name
    // Js5DiskCache::ArchiveInUseGuard::Lock(int)
    bool Js5DiskCache::ArchiveInUseGuard::Lock(int param_1) {
        char cVar1;
        char* pcVar2;

        cVar1 = IsLocked(this);
        if (cVar1 != '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert(
                "!IsLocked()",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/caching/Js5DiskCache.h", 303,
                (char*)0);
        }
        pcVar2 = (char*)std::array<signed char, 67ul>::operator[]((array<signed char, 67ul>*)field_0, (long)param_1);
        cVar1 = *pcVar2;
        if (cVar1 == '\0') {
            *pcVar2 = (char)field_12;
            field_8 = param_1;
        }
        return cVar1 == '\0';
    }

    // 0x1009ec360, 32 bytes, inline, placed by class name
    // Js5DiskCache::ArchiveInUseGuard::IsLocked(int)
    undefined4 Js5DiskCache::ArchiveInUseGuard::IsLocked(int param_1) {
        int iVar1;

        iVar1 = field_8;
        return CONCAT31((int3)((uint)iVar1 >> 8), iVar1 == param_1 && iVar1 != -1);
    }

    // 0x1009ec3f0, 16 bytes, complete-object destructor, inline, placed by class name
    // Js5DiskCache::ArchiveInUseGuard::~ArchiveInUseGuard(): jumps straight to the base-object destructor

    // 0x1009ec410, 32 bytes, inline, placed by class name
    // Js5DiskCache::Database::GetSizeOnDisk() const
    long Js5DiskCache::Database::GetSizeOnDisk() {
        return (ulong)field_356 * (ulong)field_352;
    }

    // 0x1009ec7d0, 32 bytes, inline, placed by class name
    // Js5DiskCache::Database::HandleSQLError(int)
    bool Js5DiskCache::Database::HandleSQLError(int param_1) {
        if (param_1 != 0) {
            HandleSQLErrorImpl(this, param_1);
        }
        return param_1 == 0;
    }

    // 0x1009ecc80, 32 bytes, inline, placed by class name
    // Js5DiskCache::Database::GetInsertIndexStatement()
    void Js5DiskCache::Database::GetInsertIndexStatement() {
        BuildStatement(this, "INSERT OR REPLACE INTO cache_index(KEY,DATA,VERSION,CRC) VALUES(1,?,?,?)", &field_408);
    }

    // 0x1009ecca0, 32 bytes, inline, placed by class name
    // Js5DiskCache::Database::GetInsertStatement()
    void Js5DiskCache::Database::GetInsertStatement() {
        BuildStatement(this, "INSERT OR REPLACE INTO cache(KEY,DATA,VERSION,CRC) VALUES(?,?,?,?);", &field_400);
    }

    // 0x1009eccc0, 16 bytes, complete-object constructor, inline, placed by class name
    // Js5DiskCache::QueueResultItem::QueueResultItem(Js5DiskCache::QueueItem const&): jumps straight to the base-object constructor

    // 0x1009ecd40, 16 bytes, complete-object destructor, inline, placed by class name
    // Js5DiskCache::QueueResultItem::~QueueResultItem(): jumps straight to the base-object destructor

    // 0x1009ecec0, 32 bytes, inline, placed by class name
    // Js5DiskCache::Database::GetBeginStatement()
    void Js5DiskCache::Database::GetBeginStatement() {
        BuildStatement(this, "BEGIN", &field_456);
    }

    // 0x1009ecf50, 32 bytes, inline, placed by class name
    // Js5DiskCache::Database::GetEndStatement()
    void Js5DiskCache::Database::GetEndStatement() {
        BuildStatement(this, "END", &field_464);
    }

    // 0x1009ed6e0, 32 bytes, inline, placed by class name
    // Js5DiskCache::Database::GetSelectAllStatement()
    void Js5DiskCache::Database::GetSelectAllStatement() {
        BuildStatement(this, "SELECT DATA,VERSION,CRC,KEY FROM cache", &field_432);
    }

    // 0x1009ed790, 16 bytes, complete-object constructor, inline, placed by class name
    // Js5DiskCache::QueueResultItem::QueueResultItem(): jumps straight to the base-object constructor

    // 0x1009edf20, 32 bytes, inline, placed by class name
    // Js5DiskCache::Database::GetPageCountStatement()
    void Js5DiskCache::Database::GetPageCountStatement() {
        BuildStatement(this, "PRAGMA page_count;", &field_384);
    }

    // 0x1009edf40, 32 bytes, inline, placed by class name
    // Js5DiskCache::Database::GetFreeListCountStatement()
    void Js5DiskCache::Database::GetFreeListCountStatement() {
        BuildStatement(this, "PRAGMA freelist_count;", &field_392);
    }

    // 0x1009ee330, 32 bytes, inline, placed by class name
    // Js5DiskCache::Database::GetSelectIndexStatement()
    void Js5DiskCache::Database::GetSelectIndexStatement() {
        BuildStatement(this, "SELECT DATA,VERSION,CRC FROM cache_index WHERE KEY = 1", &field_424);
    }

    // 0x1009ee350, 32 bytes, inline, placed by class name
    // Js5DiskCache::Database::GetSelectStatement()
    void Js5DiskCache::Database::GetSelectStatement() {
        BuildStatement(this, "SELECT DATA,VERSION,CRC FROM cache WHERE KEY = ?", &field_416);
    }

    // 0x1009ee3b0, 32 bytes, inline, placed by class name
    // Js5DiskCache::Database::GetDeleteIndexStatement()
    void Js5DiskCache::Database::GetDeleteIndexStatement() {
        BuildStatement(this, "DELETE FROM cache_index WHERE KEY = 1", &field_448);
    }

    // 0x1009ee3d0, 32 bytes, inline, placed by class name
    // Js5DiskCache::Database::GetDeleteStatement()
    void Js5DiskCache::Database::GetDeleteStatement() {
        BuildStatement(this, "DELETE FROM cache WHERE KEY = ?", &field_440);
    }

    // 0x1009f8770, 16 bytes, complete-object constructor, inline, placed by class name
    // Js5DiskCache::Database::Database(): jumps straight to the base-object constructor

    // 0x1009f8780, 16 bytes, complete-object destructor, inline, placed by class name
    // Js5DiskCache::Database::~Database(): jumps straight to the base-object destructor

    // 0x1009f8790, 160 bytes, base-object constructor, inline, placed by class name
    // Js5DiskCache::Database::Database()
    void Js5DiskCache::Database::Database() {
        field_0 = (Js5DiskCache*)0;
        field_8 = 4294967295;
        *(undefined8*)&field_12 = 0;
        field_20 = 0;
        field_24 = 1;
        field_28 = 1;
        field_32 = 0;
        field_33 = 0;
        field_40 = 0;
        new (field_48) Filename();
        field_368 = 0;
        field_352 = 0;
        field_356 = 0;
        *(undefined8*)((long)&field_356 + 1) = 0;
        field_376 = 0;
        field_384 = (sqlite3_stmt*)0;
        field_392 = (sqlite3_stmt*)0;
        field_400 = (sqlite3_stmt*)0;
        field_408 = (sqlite3_stmt*)0;
        field_416 = (sqlite3_stmt*)0;
        field_424 = (sqlite3_stmt*)0;
        field_432 = (sqlite3_stmt*)0;
        field_440 = (sqlite3_stmt*)0;
        field_448 = (sqlite3_stmt*)0;
        field_456 = (sqlite3_stmt*)0;
        field_464 = (sqlite3_stmt*)0;
    }

    // 0x1009f8830, 16 bytes, base-object destructor, inline, placed by class name
    // Js5DiskCache::Database::~Database()
    void Js5DiskCache::Database::~Database() {
        field_48->~pair();
    }

    // 0x1009f88a0, 16 bytes, complete-object constructor, inline, placed by class name
    // Js5DiskCache::ArchiveCacheStatusData::ArchiveCacheStatusData(): jumps straight to the base-object constructor

    // 0x1009f88b0, 16 bytes, complete-object destructor, inline, placed by class name
    // Js5DiskCache::ArchiveCacheStatusData::~ArchiveCacheStatusData(): jumps straight to the base-object destructor

    // 0x1009f88c0, 32 bytes, base-object constructor, inline, placed by class name
    // Js5DiskCache::ArchiveCacheStatusData::ArchiveCacheStatusData()
    void Js5DiskCache::ArchiveCacheStatusData::ArchiveCacheStatusData() {
        field_0 = 0;
        new (&field_8) eastl::vector<Js5DiskCacheFileStatus, eastl::allocator>();
    }

    // 0x1009f8950, 16 bytes, base-object destructor, inline, placed by class name
    // Js5DiskCache::ArchiveCacheStatusData::~ArchiveCacheStatusData()
    void Js5DiskCache::ArchiveCacheStatusData::~ArchiveCacheStatusData() {
        (&field_8)->~vector();
    }

    // 0x1009f89b0, 16 bytes, inline, placed by class name
    // Js5DiskCache::Js5DiskCache(Js5ResourceProvider&, eastl::string const&, SystemSettings*, Js5ArchiveSetSettings&)::$_2::__invoke(void*)
    /* __invoke(void*) */

    void Js5DiskCache::Js5DiskCache(Js5ResourceProvider&, eastl::stringconst&, SystemSettings*,
                                    Js5ArchiveSetSettings&)::$_2::__invoke(void* param_1) {}

    // 0x1009f9350, 160 bytes, inline, placed by class name
    // Js5DiskCache::QueueItem::swap(Js5DiskCache::QueueItem&)
    void Js5DiskCache::QueueItem::swap(QueueItem* param_1) {
        eastl::swap<unsigned int>(&field_0, &param_1->field_0);
        eastl::swap<unsigned int>(&field_4, &param_1->field_4);
        eastl::swap<unsigned int>(&field_8, &param_1->field_8);
        eastl::swap<unsigned int>(&field_12, &param_1->field_12);
        eastl::swap<unsigned int>(&field_16, &param_1->field_16);
        eastl::swap<oldscape::graphics::Pix8*>(&field_24, &param_1->field_24);
        eastl::swap<signed char>((signed*)&field_32, (signed*)&param_1->field_32);
        eastl::swap<unsigned int>(&field_36, &param_1->field_36);
        eastl::swap<signed char>((signed*)&field_33, (signed*)&param_1->field_33);
        eastl::swap<signed char>((signed*)&field_34, (signed*)&param_1->field_34);
    }

    // 0x1009f9470, 32 bytes, base-object constructor, inline, placed by class name
    // Js5DiskCache::ArchiveInUseGuard::ArchiveInUseGuard(std::array<signed char, 67ul>&, int)
    /* Js5DiskCache::ArchiveInUseGuard::ArchiveInUseGuard(std::array<signed char, 67ul>&, int) */

    void Js5DiskCache::ArchiveInUseGuard::ArchiveInUseGuard(array* param_1, int param_2) {
        field_0 = param_1;
        field_8 = -1;
        field_12 = param_2;
    }

    // 0x1009f94a0, 48 bytes, base-object constructor, inline, placed by class name
    // Js5DiskCache::QueueRequestItem::QueueRequestItem()
    void Js5DiskCache::QueueRequestItem::QueueRequestItem() {
        _func_decltype_nullptr* in_RSI;

        new (this) QueueItem();
        new (&field_40, in_RSI) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
    }

    // 0x1009f94d0, 48 bytes, base-object constructor, inline, placed by class name
    // Js5DiskCache::QueueItem::QueueItem()
    void Js5DiskCache::QueueItem::QueueItem() {
        field_0 = 0;
        field_12 = 0;
        field_16 = 0;
        field_24 = (Pix8*)0;
        *(undefined4*)((long)&field_24 + 7) = 0;
        field_36 = 1;
    }

    // 0x1009f9500, 96 bytes, inline, placed by class name
    // Js5DiskCache::ArchiveInUseGuard::IsLocked()
    bool Js5DiskCache::ArchiveInUseGuard::IsLocked() {
        char* pcVar1;

        if ((long)field_8 != 18446744073709551615) {
            pcVar1 =
                (char*)std::array<signed char, 67ul>::operator[]((array<signed char, 67ul>*)field_0, (long)field_8);
            if ((char)field_12 != *pcVar1) {
                /* WARNING: Subroutine does not return */
                LogAssert(
                    "m_archiveID == -1 || m_archivesInUse[m_archiveID] == (int8)m_threadID",
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/caching/Js5DiskCache.h",
                    292, (char*)0);
            }
        }
        return field_8 != -1;
    }

    // 0x1009f9560, 32 bytes, base-object destructor, inline, placed by class name
    // Js5DiskCache::ArchiveInUseGuard::~ArchiveInUseGuard()
    void Js5DiskCache::ArchiveInUseGuard::~ArchiveInUseGuard() {
        if (field_8 != -1) {
            Unlock(this);
        }
    }

    // 0x1009f9580, 128 bytes, inline, placed by class name
    // Js5DiskCache::ArchiveInUseGuard::Unlock()
    void Js5DiskCache::ArchiveInUseGuard::Unlock() {
        char* pcVar1;
        undefined1* puVar2;

        if (field_8 == -1) {
            /* WARNING: Subroutine does not return */
            LogAssert(
                "m_archiveID != -1",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/caching/Js5DiskCache.h", 315,
                (char*)0);
        }
        pcVar1 = (char*)std::array<signed char, 67ul>::operator[]((array<signed char, 67ul>*)field_0, (long)field_8);
        if ((char)field_12 != *pcVar1) {
            /* WARNING: Subroutine does not return */
            LogAssert(
                "m_archivesInUse[m_archiveID] == (int8)m_threadID",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/caching/Js5DiskCache.h", 316,
                (char*)0);
        }
        puVar2 =
            (undefined1*)std::array<signed char, 67ul>::operator[]((array<signed char, 67ul>*)field_0, (long)field_8);
        *puVar2 = 0;
        field_8 = -1;
    }

    // 0x1009f9600, 112 bytes, base-object constructor, inline, placed by class name
    // Js5DiskCache::QueueResultItem::QueueResultItem(Js5DiskCache::QueueItem const&)
    void Js5DiskCache::QueueResultItem::QueueResultItem(QueueItem* param_1) {
        new (this) QueueItem();
        field_40 = 0;
        new (&field_48) Array<unsigned char, eastl::allocator>();
        field_0 = param_1->field_0;
        field_4 = param_1->field_4;
        field_8 = param_1->field_8;
        field_12 = param_1->field_12;
        field_16 = param_1->field_16;
        field_24 = param_1->field_24;
        field_32 = param_1->field_32;
        field_36 = param_1->field_36;
        field_33 = param_1->field_33;
        field_34 = param_1->field_34;
    }

    // 0x1009f9670, 16 bytes, base-object destructor, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // Js5DiskCache::QueueResultItem::~QueueResultItem()
    /* Js5WorkerRequestMessage::~Js5WorkerRequestMessage() */

    void Js5WorkerRequestMessage::~Js5WorkerRequestMessage() {
        ((this + 48))->~Array();
    }

    // 0x1009f9680, 48 bytes, base-object constructor, inline, placed by class name
    // Js5DiskCache::QueueResultItem::QueueResultItem()
    void Js5DiskCache::QueueResultItem::QueueResultItem() {
        new (this) QueueItem();
        field_40 = 0;
        new (&field_48) Array<unsigned char, eastl::allocator>();
    }

    // 0x100a03cf0, 16 bytes, complete-object constructor, inline, placed by class name
    // Js5DiskCache::QueueRequestItem::QueueRequestItem(Js5DiskCache::QueueRequestItem&&): jumps straight to the base-object constructor

    // 0x100a03d20, 64 bytes, inline, placed by class name
    // Js5DiskCache::QueueRequestItem::operator=(Js5DiskCache::QueueRequestItem&&)
    /* Js5DiskCache::QueueRequestItem::TEMPNAMEPLACEHOLDERVALUE(Js5DiskCache::QueueRequestItem&&)
    */

    QueueRequestItem* Js5DiskCache::QueueRequestItem::operator=(QueueRequestItem* param_1) {
        Pix8* pPVar1;
        uint uVar2;
        undefined4 uVar3;
        undefined4 uVar4;
        uint uVar5;
        uint uVar6;

        uVar2 = param_1->field_36;
        field_32 = param_1->field_32;
        field_36 = uVar2;
        uVar4 = param_1->field_0;
        uVar2 = param_1->field_4;
        uVar5 = param_1->field_8;
        uVar6 = param_1->field_12;
        uVar3 = param_1->field_20;
        pPVar1 = param_1->field_24;
        field_16 = param_1->field_16;
        field_20 = uVar3;
        field_24 = pPVar1;
        field_0 = uVar4;
        field_4 = uVar2;
        field_8 = uVar5;
        field_12 = uVar6;
        shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>::operator=(
            (shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>*)&field_40, (shared_ptr*)&param_1->field_40);
        return this;
    }

    // 0x100a03d60, 48 bytes, base-object constructor, inline, placed by class name
    // Js5DiskCache::QueueRequestItem::QueueRequestItem(Js5DiskCache::QueueRequestItem&&)
    void Js5DiskCache::QueueRequestItem::QueueRequestItem(QueueRequestItem* param_1) {
        Pix8* pPVar1;
        uint uVar2;
        undefined4 uVar3;
        undefined4 uVar4;
        uint uVar5;
        uint uVar6;

        uVar2 = param_1->field_36;
        field_32 = param_1->field_32;
        field_36 = uVar2;
        uVar4 = param_1->field_0;
        uVar2 = param_1->field_4;
        uVar5 = param_1->field_8;
        uVar6 = param_1->field_12;
        uVar3 = param_1->field_20;
        pPVar1 = param_1->field_24;
        field_16 = param_1->field_16;
        field_20 = uVar3;
        field_24 = pPVar1;
        field_0 = uVar4;
        field_4 = uVar2;
        field_8 = uVar5;
        field_12 = uVar6;
        shared_ptr<oldscape::RSevenDebugPresetProvider>::shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(
            (shared_ptr<oldscape::RSevenDebugPresetProvider>*)&field_40, (shared_ptr*)&param_1->field_40);
    }

    // 0x100a03d90, 80 bytes, inline, placed by class name
    // Js5DiskCache::QueueRequestItem::operator<(Js5DiskCache::QueueRequestItem const&) const
    /* Js5DiskCache::QueueRequestItem::TEMPNAMEPLACEHOLDERVALUE(Js5DiskCache::QueueRequestItem
   const&) const */

    bool Js5DiskCache::QueueRequestItem::operator<(QueueRequestItem* param_1) {
        uint uVar1;
        uint uVar2;

        if ((field_0 == 4) && (param_1->field_0 != 4)) {
            return true;
        }
        if ((field_0 != 4) && (param_1->field_0 == 4)) {
            return false;
        }
        uVar1 = 4294967295;
        uVar2 = 4294967295;
        if (field_8 != 4294967295) {
            uVar2 = (uint)field_24->field_8;
        }
        if (param_1->field_8 != 4294967295) {
            uVar1 = (uint)param_1->field_24->field_8;
        }
        return uVar2 < uVar1;
    }

    // 0x100a04280, 16 bytes, complete-object constructor, inline, placed by class name
    // Js5DiskCache::QueueRequestItem::QueueRequestItem(Js5DiskCache::QueueRequestItem const&): jumps straight to the base-object constructor

    // 0x100a04290, 48 bytes, base-object constructor, inline, placed by class name
    // Js5DiskCache::QueueRequestItem::QueueRequestItem(Js5DiskCache::QueueRequestItem const&)
    void Js5DiskCache::QueueRequestItem::QueueRequestItem(QueueRequestItem* param_1) {
        Pix8* pPVar1;
        uint uVar2;
        undefined4 uVar3;
        undefined4 uVar4;
        uint uVar5;
        uint uVar6;

        uVar2 = param_1->field_36;
        field_32 = param_1->field_32;
        field_36 = uVar2;
        uVar4 = param_1->field_0;
        uVar2 = param_1->field_4;
        uVar5 = param_1->field_8;
        uVar6 = param_1->field_12;
        uVar3 = param_1->field_20;
        pPVar1 = param_1->field_24;
        field_16 = param_1->field_16;
        field_20 = uVar3;
        field_24 = pPVar1;
        field_0 = uVar4;
        field_4 = uVar2;
        field_8 = uVar5;
        field_12 = uVar6;
        new (&field_40, (shared_ptr*)&param_1->field_40) shared_ptr<oldscape::dash3d::Decor>();
    }

    // 0x100a04bd0, 16 bytes, complete-object constructor, inline, placed by class name
    // Js5DiskCache::QueueResultItem::QueueResultItem(Js5DiskCache::QueueResultItem&&): jumps straight to the base-object constructor

    // 0x100a04be0, 48 bytes, base-object constructor, inline, placed by class name
    // Js5DiskCache::QueueResultItem::QueueResultItem(Js5DiskCache::QueueResultItem&&)
    void Js5DiskCache::QueueResultItem::QueueResultItem(QueueResultItem* param_1) {
        undefined8 uVar1;
        undefined1 uVar2;
        undefined1 uVar3;
        undefined1 uVar4;
        undefined4 uVar5;
        undefined4 uVar6;
        undefined4 uVar7;
        undefined4 uVar8;
        undefined4 uVar9;

        uVar2 = param_1->field_33;
        uVar3 = param_1->field_34;
        uVar4 = param_1->field_35;
        uVar5 = param_1->field_36;
        field_32 = param_1->field_32;
        field_33 = uVar2;
        field_34 = uVar3;
        field_35 = uVar4;
        field_36 = uVar5;
        uVar6 = param_1->field_0;
        uVar7 = param_1->field_4;
        uVar8 = param_1->field_8;
        uVar9 = param_1->field_12;
        uVar5 = param_1->field_20;
        uVar1 = param_1->field_24;
        field_16 = param_1->field_16;
        field_20 = uVar5;
        field_24 = uVar1;
        field_0 = uVar6;
        field_4 = uVar7;
        field_8 = uVar8;
        field_12 = uVar9;
        field_40 = param_1->field_40;
        new (&field_48, (Array*)&param_1->field_48) Array<unsigned char, eastl::allocator>();
    }

    // 0x100a051c0, 64 bytes, inline, placed by class name
    // Js5DiskCache::QueueResultItem::operator=(Js5DiskCache::QueueResultItem&&)
    /* Js5DiskCache::QueueResultItem::TEMPNAMEPLACEHOLDERVALUE(Js5DiskCache::QueueResultItem&&)
    */

    QueueResultItem* Js5DiskCache::QueueResultItem::operator=(QueueResultItem* param_1) {
        undefined8 uVar1;
        undefined1 uVar2;
        undefined1 uVar3;
        undefined1 uVar4;
        undefined4 uVar5;
        undefined4 uVar6;
        undefined4 uVar7;
        undefined4 uVar8;
        undefined4 uVar9;

        uVar2 = param_1->field_33;
        uVar3 = param_1->field_34;
        uVar4 = param_1->field_35;
        uVar5 = param_1->field_36;
        field_32 = param_1->field_32;
        field_33 = uVar2;
        field_34 = uVar3;
        field_35 = uVar4;
        field_36 = uVar5;
        uVar6 = param_1->field_0;
        uVar7 = param_1->field_4;
        uVar8 = param_1->field_8;
        uVar9 = param_1->field_12;
        uVar5 = param_1->field_20;
        uVar1 = param_1->field_24;
        field_16 = param_1->field_16;
        field_20 = uVar5;
        field_24 = uVar1;
        field_0 = uVar6;
        field_4 = uVar7;
        field_8 = uVar8;
        field_12 = uVar9;
        field_40 = param_1->field_40;
        Array<unsigned char, eastl::allocator>::operator=((Array<unsigned char, eastl::allocator>*)&field_48,
                                                          (Array*)&param_1->field_48);
        return this;
    }

    // 0x100a052c0, 64 bytes, inline, placed by class name
    // Js5DiskCache::QueueResultItem::operator=(Js5DiskCache::QueueResultItem const&)
    /* Js5DiskCache::QueueResultItem::TEMPNAMEPLACEHOLDERVALUE(Js5DiskCache::QueueResultItem
   const&) */

    QueueResultItem* Js5DiskCache::QueueResultItem::operator=(QueueResultItem* param_1) {
        undefined8 uVar1;
        undefined1 uVar2;
        undefined1 uVar3;
        undefined1 uVar4;
        undefined4 uVar5;
        undefined4 uVar6;
        undefined4 uVar7;
        undefined4 uVar8;
        undefined4 uVar9;

        uVar2 = param_1->field_33;
        uVar3 = param_1->field_34;
        uVar4 = param_1->field_35;
        uVar5 = param_1->field_36;
        field_32 = param_1->field_32;
        field_33 = uVar2;
        field_34 = uVar3;
        field_35 = uVar4;
        field_36 = uVar5;
        uVar6 = param_1->field_0;
        uVar7 = param_1->field_4;
        uVar8 = param_1->field_8;
        uVar9 = param_1->field_12;
        uVar5 = param_1->field_20;
        uVar1 = param_1->field_24;
        field_16 = param_1->field_16;
        field_20 = uVar5;
        field_24 = uVar1;
        field_0 = uVar6;
        field_4 = uVar7;
        field_8 = uVar8;
        field_12 = uVar9;
        field_40 = param_1->field_40;
        Array<unsigned char, eastl::allocator>::operator=((Array<unsigned char, eastl::allocator>*)&field_48,
                                                          (Array*)&param_1->field_48);
        return this;
    }

    // 0x100a053c0, 16 bytes, complete-object constructor, inline, placed by class name
    // Js5DiskCache::QueueResultItem::QueueResultItem(Js5DiskCache::QueueResultItem const&): jumps straight to the base-object constructor

    // 0x100a053d0, 48 bytes, base-object constructor, inline, placed by class name
    // Js5DiskCache::QueueResultItem::QueueResultItem(Js5DiskCache::QueueResultItem const&)
    void Js5DiskCache::QueueResultItem::QueueResultItem(QueueResultItem* param_1) {
        undefined8 uVar1;
        undefined1 uVar2;
        undefined1 uVar3;
        undefined1 uVar4;
        undefined4 uVar5;
        undefined4 uVar6;
        undefined4 uVar7;
        undefined4 uVar8;
        undefined4 uVar9;

        uVar2 = param_1->field_33;
        uVar3 = param_1->field_34;
        uVar4 = param_1->field_35;
        uVar5 = param_1->field_36;
        field_32 = param_1->field_32;
        field_33 = uVar2;
        field_34 = uVar3;
        field_35 = uVar4;
        field_36 = uVar5;
        uVar6 = param_1->field_0;
        uVar7 = param_1->field_4;
        uVar8 = param_1->field_8;
        uVar9 = param_1->field_12;
        uVar5 = param_1->field_20;
        uVar1 = param_1->field_24;
        field_16 = param_1->field_16;
        field_20 = uVar5;
        field_24 = uVar1;
        field_0 = uVar6;
        field_4 = uVar7;
        field_8 = uVar8;
        field_12 = uVar9;
        field_40 = param_1->field_40;
        new (&field_48, (Array*)&param_1->field_48) Array<unsigned char, eastl::allocator>();
    }

} // namespace jag
