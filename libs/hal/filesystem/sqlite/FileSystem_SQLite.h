// libs/hal/filesystem/sqlite/FileSystem_SQLite.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: osclient

namespace jag {
    class FileSystem_SQLite : public FileSystem // base inferred from shared vtable slots
    {
    public:
        class Database;
        class SQLStatement;
        // virtual methods in vtable order
        virtual ~FileSystem_SQLite();
        virtual void UpdateStats();
        virtual uint64_t GetQuotaBytes() const;
        virtual uint64_t GetUsageBytes() const;
        virtual uint8_t SetIndexUpdateCallback(std::function<Array<unsigned char>*(int)> const& callback);
        virtual void ServiceInstance();
        virtual void MoveFileSystem(const Filename& filename);
        virtual void WriteFileImpl(filesystem::QueueItem&& queueItem);
        virtual void ReadFileImpl(filesystem::QueueItem&& queueItem);
        virtual void DeleteFileImpl(filesystem::QueueItem&& queueItem);
        virtual void ResetImpl(filesystem::QueueItem&& queueItem);
        virtual void BeginTransactionImpl();
        virtual void EndTransactionImpl();
        void ProcessAllQueuedRequests();
        FileSystem_SQLite(const Filename& filename, FileSystem::Scope scope, const char* str, bool arg4);
        auto GetDatabaseFilename();
        void SQLClose();
        unsigned long SQLOpen();
        void ThreadRunnerWrapper(int arg1);
        void ThreadRunnerSEHWrapper();
        void ThreadRunner();
        void GetUsageQuota();
        void HandleSQLErrorImpl(Database& database, int arg2);
        void CheckSettingsTable(const char* str, bool arg2);
        void CreateTable(const char* str);
        bool HandleSQLError(Database& database, int arg2);
        unsigned long PerformWrite(Database& database, const filesystem::QueueItem& queueItem);
        void UpdateCacheSize();
        uint64_t PerformReadAll(Database& database, filesystem::QueueItem& queueItem);
        uint64_t PerformRead(Database& database, filesystem::QueueItem& queueItem);
        uint64_t PerformDelete(Database& database, filesystem::QueueItem& queueItem);
        void GetCurrentTableList(eastl::fixed_map<unsigned int, eastl::string, 16ul>& fixed_map);
        uint64_t UpdateAllTableSchemasFromVersion1to2();
        void SQLCheckProperties(Database& database, bool& arg2, bool arg3);
        unsigned long PerformClose(Database& database);
        bool ClearStatement(sqlite3_stmt*& arg1);

    private:
        uint8_t _unknown_913[7];
        Database field_920;
        uint8_t _unknown_1000[1336];
        char field_2336;
        uint8_t _unknown_2337[7];
        uint64_t m_usageBytes;
        char field_2352;
        uint8_t _unknown_2353[3];
        int field_2356;
        unsigned int field_2360;
        uint32_t field_2364;
        uint8_t _unknown_2368[160];
    };

    class FileSystem_SQLite::Database {
    public:
        ~Database();
        Database();
        void GetBeginStatement();
        void GetEndStatement();
        void GetInsertStatement();
        void GetSelectStatement();
        void GetDeleteStatement();
        uint64_t BuildStatement(const char* str, SQLStatement& sqlStatement);

    private:
        uint64_t field_0;
        uint8_t _unknown_8[72];
    };

    class FileSystem_SQLite::SQLStatement {
    public:
        void Get() const;
        SQLStatement(sqlite3*& arg1);
        ~SQLStatement();
        void Prepare(const char* str);
        void Reset();

    private:
        long* field_0;
        long field_8;
    };

    // 0x10002cff0
    FileSystem_SQLite::Database::~Database() {
        field_72.~SQLStatement();
        field_56.~SQLStatement();
        field_40.~SQLStatement();
        field_24.~SQLStatement();
        field_8.~SQLStatement();
    }

    // 0x100129b30
    FileSystem_SQLite::Database::Database()
        : field_0(0), field_8(*this), field_24(*this), field_40(*this), field_56(*this), field_72(*this) {}

    // 0x100129c00
    FileSystem_SQLite::SQLStatement::SQLStatement(sqlite3*& arg1) : field_0(arg1), field_8(0) {}

    // 0x100129c00: ShuffledPacketFactory::ShuffledPacketFactory(PacketT<Array<unsigned char, BucketAllocatorEASTL>>&) has the same machine code as FileSystem_SQLite::SQLStatement::SQLStatement(sqlite3*&)

    // 0x100129c20
    FileSystem_SQLite::SQLStatement::~SQLStatement() {
        Reset();
    }

    // 0x100b21450
    void FileSystem_SQLite::Database::GetBeginStatement() {
        BuildStatement("BEGIN", field_56);
    }

    // 0x100b21470
    bool FileSystem_SQLite::HandleSQLError(FileSystem_SQLite::Database& database, int arg2) {
        if (arg2 != 0) {
            HandleSQLErrorImpl(database, arg2);
        }
        return arg2 == 0;
    }

    // 0x100b214e0
    void FileSystem_SQLite::Database::GetEndStatement() {
        BuildStatement("END", field_72);
    }

    // 0x100b218f0
    void FileSystem_SQLite::Database::GetInsertStatement() {
        BuildStatement("INSERT OR REPLACE INTO cache(KEY,DATA) VALUES(?,?)", field_8);
    }

    // 0x100b21fe0
    void FileSystem_SQLite::Database::GetSelectStatement() {
        BuildStatement("SELECT DATA FROM cache WHERE KEY = ?", field_24);
    }

    // 0x100b22520
    void FileSystem_SQLite::Database::GetDeleteStatement() {
        BuildStatement("DELETE FROM cache WHERE KEY = ?", field_40);
    }

    // 0x100b22eb0
    uint64_t FileSystem_SQLite::GetQuotaBytes() const {
        return 4294967296;
    }

    // 0x100b22ec0
    uint64_t FileSystem_SQLite::GetUsageBytes() const {
        return m_usageBytes;
    }

    // 0x100b22ed0
    uint8_t FileSystem_SQLite::SetIndexUpdateCallback(std::function<Array<unsigned char>*(int)> const& callback) {
        field_2464 = callback;
        return 1;
    }

} // namespace jag

namespace jag::oldscape {
    // 0x100129be0: SuperShuffledPacketFactory::SuperShuffledPacketFactory(core::SuperPacket&) has the same machine code as FileSystem_SQLite::SQLStatement::SQLStatement(sqlite3*&)

} // namespace jag::oldscape
