// libs/js5/caching/Js5DiskCache.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

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
        virtual void OnCacheFolderChanged(const Filename& filename1, const Filename& filename2);
        virtual ~Js5DiskCache();
        long GetUsageBytes() const;
        uint64_t GetQuotaBytes() const;
        int GetActivity() const;
        int GetQueueSize() const;
        uint32_t GetMissingGroupCount(int arg1) const;
        uint8_t Ready(int arg1) const;
        bool IsValidated(int arg1) const;
        void Validate(int arg1);
        void EnableValidate(bool arg1);
        Js5DiskCache(Js5ResourceProvider& js5ResourceProvider, const eastl::string& str, SystemSettings* systemSettings,
                     Js5ArchiveSetSettings& js5ArchiveSetSettings);
        void UpdateIndexSizesForArchives();
        int CheckGroup(int arg1, int arg2) const;
        bool HasReadOnlyArchive(int arg1) const;
        void Service();
        int GetStateFulllArchiveLoad(int arg1);
        void RequestFullArchive(int arg1);
        void GetGroup(int arg1, int arg2, const Js5Index* js5Index, Js5DiskCacheFormat js5DiskCacheFormat,
                      const Priority* priority, bool arg6, bool arg7);
        void ProvideGroup(int arg1, int arg2, const shared_ptr<PacketT<Array<unsigned char>>>& arg3, unsigned int arg4,
                          unsigned int arg5, Js5DiskCacheFormat js5DiskCacheFormat);
        void DeleteCache();
        void ClearFullArchiveRequestState();
        void Shutdown();
        void Startup();
        auto GetDatabaseRootFolder();
        void GetDatabaseFilename(int arg1, bool arg2);
        void DeleteOldArchives();
        void StopThreads();
        int GetNextVacuumCandidate();
        void CloseDatabases();
        void UpdateMissingGroupCount(int arg1, unsigned int arg2);
        void MoveFromInsertionQueue();
        void IncrementCounterForJob(const QueueRequestItem& queueRequestItem, bool arg2);
        void DeleteGroup(int arg1, int arg2);
        void HandleCrash(const callstack::JagException& jagException, int arg2);
        void ThreadRunnerWrapper(int arg1);
        void ThreadRunnerSEHWrapper(int arg1);
        void CloseDatabasesSEHWrapper();
        void ThreadRunner(int arg1);
        void ServiceLoop(int arg1);
        void ProcessOpen(Database& database);
        void ValidateDatabase(int arg1);
        void DecrementCounterForJob(const QueueRequestItem& queueRequestItem, bool arg2);
        unsigned long AnythingMoreImportant(const Priority* priority);
        void UpdateDiskCacheSize();
        void ClearSQLSoftCache();
        void LoadFullArchiveService();
        void ProcessRequest(const QueueRequestItem& queueRequestItem);
        void ProcessRead(const QueueRequestItem& queueRequestItem);
        void ProcessWrite(const QueueRequestItem& queueRequestItem);
        void ProcessDelete(const QueueRequestItem& queueRequestItem);
        void ProcessDelayedEnd(const QueueRequestItem& queueRequestItem);
        unsigned long PerformWrite(Database& database, const QueueRequestItem& queueRequestItem, bool arg3);
        void RescheduleRequest(const QueueRequestItem& queueRequestItem, bool arg2);
        void DelayedEndTransaction(int arg1);
        void LoadFullArchive(int arg1);
        unsigned long UnpackReadData(const unsigned char* arg1, int arg2, QueueResultItem& queueResultItem);
        uint64_t PerformDelete(Database& database, const QueueRequestItem& queueRequestItem);
        void PerformInfoStatement(Database& database);
        uint64_t PerformRead(Database& database, const QueueRequestItem& queueRequestItem);
        void RescheduleRequestInner(const QueueRequestItem& queueRequestItem);
        void OnCacheFolderChangedImpl(const Filename& filename1, const Filename& filename2);
        static int64_t m_notificationHandler;

    private:
        uint8_t _unknown_8[70216];
        uint64_t field_70224;
        uint64_t field_70232;
        uint64_t field_70240;
        uint64_t field_70248;
        uint64_t field_70256;
        uint64_t field_70264;
        uint64_t field_70272;
        uint64_t field_70280;
        uint8_t _unknown_70288[8];
        Js5ArchiveSetSettings* field_70296;
        SystemSettings* field_70304;
        Js5ResourceProvider* field_70312;
        uint8_t _unknown_70320[32];
        char field_70352;
        uint8_t _unknown_70353[3];
        int field_70356;
        uint8_t _unknown_70360[4];
        unsigned int field_70364;
        uint8_t _unknown_70368[16];
        long m_usageBytes;
        uint8_t field_70392;
        uint8_t _unknown_70393[7];
        unsigned long long field_70400;
        uint8_t field_70408;
        uint8_t _unknown_70409[7];
        int field_70416;
        int field_70420;
        uint8_t _unknown_70424[1441960];
        int field_1512384;
        uint8_t _unknown_1512388[340];
        unsigned long field_1512728;
        unsigned long field_1512736;
        uint8_t field_1512744;
        uint8_t _unknown_1512745[7];
        unsigned long field_1512752;
        uint8_t field_1512760;
        uint8_t _unknown_1512761[463];
        uint8_t field_1513224;
        bool field_1513225;
        uint8_t field_1513226;
        uint8_t _unknown_1513227[1];
        int field_1513228;
        uint8_t _unknown_1513232[4];
    };

    class Js5DiskCache::ActionCounter {
    public:
        ActionCounter();
    };

    class Js5DiskCache::ArchiveCacheStatusData {
    public:
        ArchiveCacheStatusData();
        ~ArchiveCacheStatusData();

    private:
        uint32_t field_0;
        uint8_t _unknown_4[12];
    };

    class Js5DiskCache::ArchiveInUseGuard {
    public:
        ArchiveInUseGuard(std::array<signed char, 67ul>& arg1, int arg2);
        bool Lock(int arg1);
        bool IsLocked(int arg1);
        ~ArchiveInUseGuard();
        bool IsLocked();
        void Unlock();

    private:
        array<signed char, 67ul>* field_0;
        int field_8;
        int field_12;
        uint8_t _unknown_16[4];
    };

    class Js5DiskCache::Database {
    public:
        uint8_t Close();
        void HandleSQLErrorImpl(int arg1);
        bool IsOpen() const;
        uint64_t Open();
        bool Vacuum();
        long GetSizeOnDisk() const;
        sqlite3_stmt* BuildStatement(const char* str, sqlite3_stmt*& arg2);
        bool HandleSQLError(int arg1);
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
        void SetProperties(bool arg1);
        bool ClearStatement(sqlite3_stmt*& arg1);
        Database();
        ~Database();

    private:
        Js5DiskCache* field_0;
        unsigned int field_8;
        uint8_t _unknown_12[2];
        char field_14;
        char field_15;
        uint8_t _unknown_16[4];
        uint32_t field_20;
        uint8_t field_24;
        uint8_t _unknown_25[3];
        uint32_t field_28;
        uint8_t field_32;
        uint8_t field_33;
        uint8_t _unknown_34[6];
        uint64_t field_40;
        uint8_t _unknown_48[304];
        unsigned int field_352;
        unsigned int field_356;
        uint32_t field_360;
        uint8_t field_364;
        uint8_t _unknown_365[3];
        uint32_t field_368;
        uint8_t _unknown_372[4];
        long field_376;
        sqlite3_stmt* field_384;
        sqlite3_stmt* field_392;
        sqlite3_stmt* field_400;
        sqlite3_stmt* field_408;
        sqlite3_stmt* field_416;
        sqlite3_stmt* field_424;
        sqlite3_stmt* field_432;
        sqlite3_stmt* field_440;
        sqlite3_stmt* field_448;
        sqlite3_stmt* field_456;
        sqlite3_stmt* field_464;
    };

    class Js5DiskCache::QueueItem {
    public:
        void swap(QueueItem& queueItem);
        QueueItem();

    private:
        int field_0;
        int field_4;
        int field_8;
        int field_12;
        int field_16;
        uint8_t _unknown_20[4];
        Pix32* field_24;
        uint8_t field_32;
        uint8_t field_33;
        uint8_t field_34;
        uint8_t _unknown_35[1];
        uint32_t field_36;
        uint8_t _unknown_40[4];
    };

    class Js5DiskCache::QueueRequestItem {
    public:
        ~QueueRequestItem();
        void swap(QueueRequestItem& queueRequestItem);
        QueueRequestItem();
        QueueRequestItem(QueueRequestItem&& queueRequestItem);
        QueueRequestItem* operator=(QueueRequestItem&& queueRequestItem);
        bool operator<(const QueueRequestItem& queueRequestItem) const;
        QueueRequestItem(const QueueRequestItem& queueRequestItem);

    private:
        uint32_t field_0;
        int field_4;
        int field_8;
        int field_12;
        int field_16;
        uint32_t field_20;
        Pix32* field_24;
        uint8_t field_32;
        uint8_t field_33;
        uint8_t field_34;
        uint8_t field_35;
        int field_36;
        uint8_t _unknown_40[8];
    };

    class Js5DiskCache::QueueResultItem {
    public:
        QueueResultItem(const QueueItem& queueItem);
        ~QueueResultItem();
        QueueResultItem();
        QueueResultItem(QueueResultItem&& queueResultItem);
        QueueResultItem* operator=(QueueResultItem&& queueResultItem);
        QueueResultItem* operator=(const QueueResultItem& queueResultItem);
        QueueResultItem(const QueueResultItem& queueResultItem);

    private:
        uint32_t field_0;
        uint32_t field_4;
        uint32_t field_8;
        uint32_t field_12;
        uint32_t field_16;
        uint32_t field_20;
        uint64_t field_24;
        uint8_t field_32;
        uint8_t field_33;
        uint8_t field_34;
        uint8_t field_35;
        uint32_t field_36;
        uint32_t field_40;
        uint8_t _unknown_44[12];
    };

    // 0x1008fc870
    long Js5DiskCache::GetUsageBytes() const {
        return m_usageBytes;
    }

    // 0x1008fc880
    uint64_t Js5DiskCache::GetQuotaBytes() const {
        return 5368709120;
    }

    // 0x1008fc890
    char const* DataSizeString<eastl::fixed_string<char, 32>>(eastl::fixed_string<char, 32>& str,
                                                              unsigned long long arg2) {
        char* pcVar1;
        float fVar2;

        if (arg2 < 1048577) {
            if (arg2 < 1025) {
                str.sprintf("%d bytes");
                goto LAB_1008fc8f3;
            }
            fVar2 = Bytes2Kilobytes<unsigned long long>(arg2);
            pcVar1 = "%.3fKB";
        } else {
            fVar2 = Bytes2Megabytes<unsigned long long>(arg2);
            pcVar1 = "%.3fMB";
        }
        str.sprintf(pcVar1, (double)fVar2);
    LAB_1008fc8f3:
        pcVar1 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        return pcVar1;
    }

    // 0x1008fc9a0
    int Js5DiskCache::GetActivity() const {
        int iVar1 = field_1513228;
        field_1513228 = 0;
        return iVar1;
    }

    // 0x1008fca00
    int Js5DiskCache::GetQueueSize() const {
        return field_70420 + field_70416;
    }

    // 0x1009e1400
    uint8_t Js5DiskCache::Ready(int arg1) const {
        long lVar1 = field_8[(long)arg1];
        return *(uint8_t*)(lVar1 + 12);
    }

    // 0x1009e3f00
    void Js5DiskCache::EnableValidate(bool arg1) {
        if (field_70364 != 0) {
            field_1513225 = arg1;
        }
    }

    // 0x1009e5110
    bool Js5DiskCache::HasReadOnlyArchive(int arg1) const {
        uint8_t* puVar1 = &field_1512656[(long)arg1];
        return *puVar1;
    }

    // 0x1009e5950
    int Js5DiskCache::GetStateFulllArchiveLoad(int arg1) {
        int* piVar1 = &field_1512388[(long)arg1];
        if (*piVar1 == 3) {
            Service();
            *piVar1 = 4;
            field_1512384 = field_1512384 - 1;
        }
        return *piVar1;
    }

    // 0x1009e5990
    void Js5DiskCache::RequestFullArchive(int arg1) {
        int* piVar1 = &field_1512388[(long)arg1];
        if (*piVar1 != 0) {
            LogAssert(
                "m_fullArchiveRequestStatus[archiveID] == FullArchiveRequestStatus::NONE",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/caching/Js5DiskCache.h", 131,
                nullptr);
        }
        if (*piVar1 != 2) {
            field_1512384 = field_1512384 + 1;
        }
        *piVar1 = 1;
    }

    // 0x1009e86b0
    void Js5DiskCache::ClearFullArchiveRequestState() {
        FullArchiveRequestStatus* fullArchiveRequestStatus1;
        FullArchiveRequestStatus* fullArchiveRequestStatus2;

        fullArchiveRequestStatus1 = (FullArchiveRequestStatus*)std::array<FullArchiveRequestStatus, 67ul>::begin();
        fullArchiveRequestStatus2 = (FullArchiveRequestStatus*)std::array<FullArchiveRequestStatus, 67ul>::end();
        eastl::fill<FullArchiveRequestStatus*, FullArchiveRequestStatus>(fullArchiveRequestStatus1,
                                                                         fullArchiveRequestStatus2, 0);
    }

    // 0x1009eb3d0
    bool Js5DiskCache::Database::IsOpen() const {
        return field_376 != 0;
    }

    // 0x1009ebce0
    void Js5DiskCache::QueueRequestItem::swap(Js5DiskCache::QueueRequestItem& queueRequestItem) {
        swap(queueRequestItem);
        field_40.swap(queueRequestItem.field_40);
    }

    // 0x1009ec120
    bool Js5DiskCache::ArchiveInUseGuard::Lock(int arg1) {
        bool cVar1 = IsLocked();
        if (cVar1) {
            LogAssert(
                "!IsLocked()",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/caching/Js5DiskCache.h", 303,
                nullptr);
        }
        char* pcVar2 = (char*)(*field_0)[(long)arg1];
        cVar1 = *pcVar2;
        if (!cVar1) {
            *pcVar2 = (char)field_12;
            field_8 = arg1;
        }
        return !cVar1;
    }

    // 0x1009ec360
    bool Js5DiskCache::ArchiveInUseGuard::IsLocked(int arg1) {
        int iVar1 = field_8;
        return iVar1 == arg1 && iVar1 != -1;
    }

    // 0x1009ec410
    long Js5DiskCache::Database::GetSizeOnDisk() const {
        return (unsigned long)field_356 * (unsigned long)field_352;
    }

    // 0x1009ec7d0
    bool Js5DiskCache::Database::HandleSQLError(int arg1) {
        if (arg1 != 0) {
            HandleSQLErrorImpl(arg1);
        }
        return arg1 == 0;
    }

    // 0x1009ecc80
    void Js5DiskCache::Database::GetInsertIndexStatement() {
        BuildStatement("INSERT OR REPLACE INTO cache_index(KEY,DATA,VERSION,CRC) VALUES(1,?,?,?)", field_408);
    }

    // 0x1009ecca0
    void Js5DiskCache::Database::GetInsertStatement() {
        BuildStatement("INSERT OR REPLACE INTO cache(KEY,DATA,VERSION,CRC) VALUES(?,?,?,?);", field_400);
    }

    // 0x1009ecec0
    void Js5DiskCache::Database::GetBeginStatement() {
        BuildStatement("BEGIN", field_456);
    }

    // 0x1009ecf50
    void Js5DiskCache::Database::GetEndStatement() {
        BuildStatement("END", field_464);
    }

    // 0x1009ed6e0
    void Js5DiskCache::Database::GetSelectAllStatement() {
        BuildStatement("SELECT DATA,VERSION,CRC,KEY FROM cache", field_432);
    }

    // 0x1009edf20
    void Js5DiskCache::Database::GetPageCountStatement() {
        BuildStatement("PRAGMA page_count;", field_384);
    }

    // 0x1009edf40
    void Js5DiskCache::Database::GetFreeListCountStatement() {
        BuildStatement("PRAGMA freelist_count;", field_392);
    }

    // 0x1009ee330
    void Js5DiskCache::Database::GetSelectIndexStatement() {
        BuildStatement("SELECT DATA,VERSION,CRC FROM cache_index WHERE KEY = 1", field_424);
    }

    // 0x1009ee350
    void Js5DiskCache::Database::GetSelectStatement() {
        BuildStatement("SELECT DATA,VERSION,CRC FROM cache WHERE KEY = ?", field_416);
    }

    // 0x1009ee3b0
    void Js5DiskCache::Database::GetDeleteIndexStatement() {
        BuildStatement("DELETE FROM cache_index WHERE KEY = 1", field_448);
    }

    // 0x1009ee3d0
    void Js5DiskCache::Database::GetDeleteStatement() {
        BuildStatement("DELETE FROM cache WHERE KEY = ?", field_440);
    }

    // 0x1009f8790
    Js5DiskCache::Database::Database() : field_0(nullptr), field_8(4294967295) {
        *(uint64_t*)&field_12 = 0;
        field_20 = 0;
        field_24 = 1;
        field_28 = 1;
        field_32 = 0;
        field_33 = 0;
        field_40 = 0;
        new (&field_48) Filename();
        field_368 = 0;
        field_352 = 0;
        field_356 = 0;
        *(uint64_t*)((long)&field_356 + 1) = 0;
        field_376 = 0;
        field_384 = nullptr;
        field_392 = nullptr;
        field_400 = nullptr;
        field_408 = nullptr;
        field_416 = nullptr;
        field_424 = nullptr;
        field_432 = nullptr;
        field_440 = nullptr;
        field_448 = nullptr;
        field_456 = nullptr;
        field_464 = nullptr;
    }

    // 0x1009f8830
    Js5DiskCache::Database::~Database() {
        field_48.~pair();
    }

    // 0x1009f88c0
    Js5DiskCache::ArchiveCacheStatusData::ArchiveCacheStatusData() : field_0(0) {}

    // 0x1009f8950
    Js5DiskCache::ArchiveCacheStatusData::~ArchiveCacheStatusData() {
        field_8.~vector();
    }

    // 0x1009f89b0
    void Js5DiskCache::Js5DiskCache(Js5ResourceProvider&, eastl::string const&, SystemSettings*,
                                    Js5ArchiveSetSettings&)::$_2::__invoke(void* arg1) {}

    // 0x1009f9350
    void Js5DiskCache::QueueItem::swap(Js5DiskCache::QueueItem& queueItem) {
        eastl::swap<unsigned int>(field_0, queueItem.field_0);
        eastl::swap<unsigned int>(field_4, queueItem.field_4);
        eastl::swap<unsigned int>(field_8, queueItem.field_8);
        eastl::swap<unsigned int>(field_12, queueItem.field_12);
        eastl::swap<unsigned int>(field_16, queueItem.field_16);
        eastl::swap<oldscape::graphics::Pix8*>(field_24, queueItem.field_24);
        eastl::swap<signed char>(field_32, queueItem.field_32);
        eastl::swap<unsigned int>(field_36, queueItem.field_36);
        eastl::swap<signed char>(field_33, queueItem.field_33);
        eastl::swap<signed char>(field_34, queueItem.field_34);
    }

    // 0x1009f9470
    Js5DiskCache::ArchiveInUseGuard::ArchiveInUseGuard(std::array<signed char, 67ul>& arg1, int arg2)
        : field_0(arg1), field_8(-1), field_12(arg2) {}

    // 0x1009f94a0
    Js5DiskCache::QueueRequestItem::QueueRequestItem() : QueueItem() {
        new (&field_40) shared_ptr();
    }

    // 0x1009f94d0
    Js5DiskCache::QueueItem::QueueItem() : field_0(0), field_12(0), field_16(0), field_24(nullptr) {
        *(uint32_t*)((long)&field_24 + 7) = 0;
        field_36 = 1;
    }

    // 0x1009f9500
    bool Js5DiskCache::ArchiveInUseGuard::IsLocked() {
        char* pcVar1;

        if ((long)field_8 != 18446744073709551615) {
            pcVar1 = (char*)(*field_0)[(long)field_8];
            if ((char)field_12 != *pcVar1) {
                LogAssert(
                    "m_archiveID == -1 || m_archivesInUse[m_archiveID] == (int8)m_threadID",
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/caching/Js5DiskCache.h",
                    292, nullptr);
            }
        }
        return field_8 != -1;
    }

    // 0x1009f9560
    Js5DiskCache::ArchiveInUseGuard::~ArchiveInUseGuard() {
        if (field_8 != -1) {
            Unlock();
        }
    }

    // 0x1009f9580
    void Js5DiskCache::ArchiveInUseGuard::Unlock() {
        if (field_8 == -1) {
            LogAssert(
                "m_archiveID != -1",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/caching/Js5DiskCache.h", 315,
                nullptr);
        }
        char* pcVar1 = (char*)(*field_0)[(long)field_8];
        if ((char)field_12 != *pcVar1) {
            LogAssert(
                "m_archivesInUse[m_archiveID] == (int8)m_threadID",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/caching/Js5DiskCache.h", 316,
                nullptr);
        }
        uint8_t* puVar2 = (uint8_t*)(*field_0)[(long)field_8];
        *puVar2 = 0;
        field_8 = -1;
    }

    // 0x1009f9600
    Js5DiskCache::QueueResultItem::QueueResultItem(const Js5DiskCache::QueueItem& queueItem)
        : QueueItem(), field_40(0), field_0(queueItem.field_0), field_4(queueItem.field_4), field_8(queueItem.field_8),
          field_12(queueItem.field_12), field_16(queueItem.field_16), field_24(queueItem.field_24),
          field_32(queueItem.field_32), field_36(queueItem.field_36), field_33(queueItem.field_33),
          field_34(queueItem.field_34) {}

    // 0x1009f9670
    Js5DiskCache::QueueResultItem::~QueueResultItem() {
        ((this + 48))->~Array();
    }

    // 0x1009f9680
    Js5DiskCache::QueueResultItem::QueueResultItem() : QueueItem(), field_40(0) {}

    // 0x100a03d20
    QueueRequestItem* Js5DiskCache::QueueRequestItem::operator=(Js5DiskCache::QueueRequestItem&& queueRequestItem) {
        uint8_t uVar2 = queueRequestItem.field_33;
        uint8_t uVar3 = queueRequestItem.field_34;
        uint8_t uVar4 = queueRequestItem.field_35;
        int iVar5 = queueRequestItem.field_36;
        field_32 = queueRequestItem.field_32;
        field_33 = uVar2;
        field_34 = uVar3;
        field_35 = uVar4;
        field_36 = iVar5;
        uint32_t uVar7 = queueRequestItem.field_0;
        iVar5 = queueRequestItem.field_4;
        int iVar8 = queueRequestItem.field_8;
        int iVar9 = queueRequestItem.field_12;
        uint32_t uVar6 = queueRequestItem.field_20;
        Pix32* pPVar1 = queueRequestItem.field_24;
        field_16 = queueRequestItem.field_16;
        field_20 = uVar6;
        field_24 = pPVar1;
        field_0 = uVar7;
        field_4 = iVar5;
        field_8 = iVar8;
        field_12 = iVar9;
        field_40 = queueRequestItem.field_40;
        return this;
    }

    // 0x100a03d60
    Js5DiskCache::QueueRequestItem::QueueRequestItem(Js5DiskCache::QueueRequestItem&& queueRequestItem) {
        uint8_t uVar2 = queueRequestItem.field_33;
        uint8_t uVar3 = queueRequestItem.field_34;
        uint8_t uVar4 = queueRequestItem.field_35;
        int iVar5 = queueRequestItem.field_36;
        field_32 = queueRequestItem.field_32;
        field_33 = uVar2;
        field_34 = uVar3;
        field_35 = uVar4;
        field_36 = iVar5;
        uint32_t uVar7 = queueRequestItem.field_0;
        iVar5 = queueRequestItem.field_4;
        int iVar8 = queueRequestItem.field_8;
        int iVar9 = queueRequestItem.field_12;
        uint32_t uVar6 = queueRequestItem.field_20;
        Pix32* pPVar1 = queueRequestItem.field_24;
        field_16 = queueRequestItem.field_16;
        field_20 = uVar6;
        field_24 = pPVar1;
        field_0 = uVar7;
        field_4 = iVar5;
        field_8 = iVar8;
        field_12 = iVar9;
        field_40.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(queueRequestItem.field_40);
    }

    // 0x100a03d90
    bool Js5DiskCache::QueueRequestItem::operator<(const Js5DiskCache::QueueRequestItem& queueRequestItem) const {
        if ((field_0 == 4) && (queueRequestItem.field_0 != 4)) {
            return true;
        }
        if ((field_0 != 4) && (queueRequestItem.field_0 == 4)) {
            return false;
        }
        unsigned int uVar1 = 4294967295;
        unsigned int uVar2 = 4294967295;
        if (field_8 != -1) {
            uVar2 = *(unsigned int*)&field_24->field_8;
        }
        if (queueRequestItem.field_8 != -1) {
            uVar1 = *(unsigned int*)&queueRequestItem.field_24->field_8;
        }
        return uVar2 < uVar1;
    }

    // 0x100a04290
    Js5DiskCache::QueueRequestItem::QueueRequestItem(const Js5DiskCache::QueueRequestItem& queueRequestItem) {
        uint8_t uVar2 = queueRequestItem.field_33;
        uint8_t uVar3 = queueRequestItem.field_34;
        uint8_t uVar4 = queueRequestItem.field_35;
        int iVar5 = queueRequestItem.field_36;
        field_32 = queueRequestItem.field_32;
        field_33 = uVar2;
        field_34 = uVar3;
        field_35 = uVar4;
        field_36 = iVar5;
        uint32_t uVar7 = queueRequestItem.field_0;
        iVar5 = queueRequestItem.field_4;
        int iVar8 = queueRequestItem.field_8;
        int iVar9 = queueRequestItem.field_12;
        uint32_t uVar6 = queueRequestItem.field_20;
        Pix32* pPVar1 = queueRequestItem.field_24;
        field_16 = queueRequestItem.field_16;
        field_20 = uVar6;
        field_24 = pPVar1;
        field_0 = uVar7;
        field_4 = iVar5;
        field_8 = iVar8;
        field_12 = iVar9;
        new (&field_40) shared_ptr(&queueRequestItem.field_40);
    }

    // 0x100a04be0
    Js5DiskCache::QueueResultItem::QueueResultItem(Js5DiskCache::QueueResultItem&& queueResultItem) {
        uint8_t uVar2 = queueResultItem.field_33;
        uint8_t uVar3 = queueResultItem.field_34;
        uint8_t uVar4 = queueResultItem.field_35;
        uint32_t uVar5 = queueResultItem.field_36;
        field_32 = queueResultItem.field_32;
        field_33 = uVar2;
        field_34 = uVar3;
        field_35 = uVar4;
        field_36 = uVar5;
        uint32_t uVar6 = queueResultItem.field_0;
        uint32_t uVar7 = queueResultItem.field_4;
        uint32_t uVar8 = queueResultItem.field_8;
        uint32_t uVar9 = queueResultItem.field_12;
        uVar5 = queueResultItem.field_20;
        uint64_t uVar1 = queueResultItem.field_24;
        field_16 = queueResultItem.field_16;
        field_20 = uVar5;
        field_24 = uVar1;
        field_0 = uVar6;
        field_4 = uVar7;
        field_8 = uVar8;
        field_12 = uVar9;
        field_40 = queueResultItem.field_40;
        new (&field_48) Array<unsigned char>(&queueResultItem.field_48);
    }

    // 0x100a051c0
    QueueResultItem* Js5DiskCache::QueueResultItem::operator=(Js5DiskCache::QueueResultItem&& queueResultItem) {
        uint8_t uVar2 = queueResultItem.field_33;
        uint8_t uVar3 = queueResultItem.field_34;
        uint8_t uVar4 = queueResultItem.field_35;
        uint32_t uVar5 = queueResultItem.field_36;
        field_32 = queueResultItem.field_32;
        field_33 = uVar2;
        field_34 = uVar3;
        field_35 = uVar4;
        field_36 = uVar5;
        uint32_t uVar6 = queueResultItem.field_0;
        uint32_t uVar7 = queueResultItem.field_4;
        uint32_t uVar8 = queueResultItem.field_8;
        uint32_t uVar9 = queueResultItem.field_12;
        uVar5 = queueResultItem.field_20;
        uint64_t uVar1 = queueResultItem.field_24;
        field_16 = queueResultItem.field_16;
        field_20 = uVar5;
        field_24 = uVar1;
        field_0 = uVar6;
        field_4 = uVar7;
        field_8 = uVar8;
        field_12 = uVar9;
        field_40 = queueResultItem.field_40;
        field_48 = queueResultItem.field_48;
        return this;
    }

    // 0x100a052c0
    QueueResultItem* Js5DiskCache::QueueResultItem::operator=(const Js5DiskCache::QueueResultItem& queueResultItem) {
        uint8_t uVar2 = queueResultItem.field_33;
        uint8_t uVar3 = queueResultItem.field_34;
        uint8_t uVar4 = queueResultItem.field_35;
        uint32_t uVar5 = queueResultItem.field_36;
        field_32 = queueResultItem.field_32;
        field_33 = uVar2;
        field_34 = uVar3;
        field_35 = uVar4;
        field_36 = uVar5;
        uint32_t uVar6 = queueResultItem.field_0;
        uint32_t uVar7 = queueResultItem.field_4;
        uint32_t uVar8 = queueResultItem.field_8;
        uint32_t uVar9 = queueResultItem.field_12;
        uVar5 = queueResultItem.field_20;
        uint64_t uVar1 = queueResultItem.field_24;
        field_16 = queueResultItem.field_16;
        field_20 = uVar5;
        field_24 = uVar1;
        field_0 = uVar6;
        field_4 = uVar7;
        field_8 = uVar8;
        field_12 = uVar9;
        field_40 = queueResultItem.field_40;
        field_48 = queueResultItem.field_48;
        return this;
    }

    // 0x100a053d0
    Js5DiskCache::QueueResultItem::QueueResultItem(const Js5DiskCache::QueueResultItem& queueResultItem) {
        uint8_t uVar2 = queueResultItem.field_33;
        uint8_t uVar3 = queueResultItem.field_34;
        uint8_t uVar4 = queueResultItem.field_35;
        uint32_t uVar5 = queueResultItem.field_36;
        field_32 = queueResultItem.field_32;
        field_33 = uVar2;
        field_34 = uVar3;
        field_35 = uVar4;
        field_36 = uVar5;
        uint32_t uVar6 = queueResultItem.field_0;
        uint32_t uVar7 = queueResultItem.field_4;
        uint32_t uVar8 = queueResultItem.field_8;
        uint32_t uVar9 = queueResultItem.field_12;
        uVar5 = queueResultItem.field_20;
        uint64_t uVar1 = queueResultItem.field_24;
        field_16 = queueResultItem.field_16;
        field_20 = uVar5;
        field_24 = uVar1;
        field_0 = uVar6;
        field_4 = uVar7;
        field_8 = uVar8;
        field_12 = uVar9;
        field_40 = queueResultItem.field_40;
        new (&field_48) Array<unsigned char>(&queueResultItem.field_48);
    }

} // namespace jag
