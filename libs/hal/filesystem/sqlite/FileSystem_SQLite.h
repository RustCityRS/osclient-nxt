// libs/hal/filesystem/sqlite/FileSystem_SQLite.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

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
        virtual UpdateStats();
        virtual GetQuotaBytes() const;
        virtual GetUsageBytes() const;
        virtual SetIndexUpdateCallback(std::function<Array<unsigned char, eastl::allocator>*(int)> const&);
        virtual void ServiceInstance();
        virtual void MoveFileSystem(Filename const&);
        virtual void WriteFileImpl(filesystem::QueueItem&&);
        virtual void ReadFileImpl(filesystem::QueueItem&&);
        virtual void DeleteFileImpl(filesystem::QueueItem&&);
        virtual void ResetImpl(filesystem::QueueItem&&);
        virtual void BeginTransactionImpl();
        virtual void EndTransactionImpl();
        ProcessAllQueuedRequests();
        FileSystem_SQLite(Filename const&, FileSystem::Scope, char const*, bool);
        GetDatabaseFilename();
        void SQLClose();
        ulong SQLOpen();
        void ThreadRunnerWrapper(int);
        void ThreadRunnerSEHWrapper();
        void ThreadRunner();
        void GetUsageQuota();
        void HandleSQLErrorImpl(Database&, int);
        void CheckSettingsTable(char const*, bool);
        void CreateTable(char const*);
        bool HandleSQLError(Database&, int);
        ulong PerformWrite(Database&, filesystem::QueueItem const&);
        void UpdateCacheSize();
        PerformReadAll(Database&, filesystem::QueueItem&);
        PerformRead(Database&, filesystem::QueueItem&);
        PerformDelete(Database&, filesystem::QueueItem&);
        void GetCurrentTableList(
            eastl::fixed_map<unsigned int, eastl::string, 16ul, true, eastl::less<unsigned int>, eastl::allocator>&);
        UpdateAllTableSchemasFromVersion1to2();
        void SQLCheckProperties(Database&, bool&, bool);
        ulong PerformClose(Database&);
        bool ClearStatement(sqlite3_stmt*&);

        // data members, from how the methods use this: 2528 bytes, the first 913 are FileSystem
        char _unknown_913[7];
        Database field_920; // offset 920
        char _unknown_1000[1336];
        char field_2336; // offset 2336
        char _unknown_2337[7];
        undefined8 m_usageBytes; // offset 2344
        char field_2352;         // offset 2352
        char _unknown_2353[3];
        int field_2356;        // offset 2356
        uint field_2360;       // offset 2360
        undefined4 field_2364; // offset 2364
        char _unknown_2368[160];
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
        BuildStatement(char const*, SQLStatement&);

        // data members, from how the methods use this: 80 bytes
        undefined8 field_0; // offset 0
        char _unknown_8[72];
    };

    class FileSystem_SQLite::SQLStatement {
    public:
        Get() const;
        SQLStatement(sqlite3*&);
        ~SQLStatement();
        void Prepare(char const*);
        void Reset();

        // data members, from how the methods use this: 16 bytes
        long* field_0; // offset 0
        long field_8;  // offset 8
    };

    // 0x10001d440, 16 bytes, complete-object destructor, inline, placed by class name and debug map
    // FileSystem_SQLite::Database::~Database(): jumps straight to the base-object destructor

    // 0x10002cff0, 64 bytes, base-object destructor, inline, placed by class name
    // FileSystem_SQLite::Database::~Database()
    void FileSystem_SQLite::Database::~Database() {
        (&field_72)->~SQLStatement();
        (&field_56)->~SQLStatement();
        (&field_40)->~SQLStatement();
        (&field_24)->~SQLStatement();
        (&field_8)->~SQLStatement();
    }

    // 0x1001298d0, 16 bytes, complete-object constructor, inline, placed by class name
    // FileSystem_SQLite::Database::Database(): jumps straight to the base-object constructor

    // 0x100129b30, 176 bytes, base-object constructor, inline, placed by class name
    // FileSystem_SQLite::Database::Database()
    void FileSystem_SQLite::Database::Database() {
        field_0 = 0;
        new (&field_8, (SuperPacket*)this) oldscape::SuperShuffledPacketFactory();
        new (&field_24, (SuperPacket*)this) oldscape::SuperShuffledPacketFactory();
        new (&field_40, (SuperPacket*)this) oldscape::SuperShuffledPacketFactory();
        new (&field_56, (SuperPacket*)this) oldscape::SuperShuffledPacketFactory();
        new (&field_72, (SuperPacket*)this) oldscape::SuperShuffledPacketFactory();
    }

    // 0x100129be0, 16 bytes, complete-object constructor, inline, placed by class name
    // FileSystem_SQLite::SQLStatement::SQLStatement(sqlite3*&): jumps straight to the base-object constructor

    // 0x100129bf0, 16 bytes, complete-object destructor, inline, placed by class name
    // FileSystem_SQLite::SQLStatement::~SQLStatement(): jumps straight to the base-object destructor

    // 0x100129c00, 32 bytes, base-object constructor, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // FileSystem_SQLite::SQLStatement::SQLStatement(sqlite3*&)
    /* ShuffledPacketFactory::ShuffledPacketFactory(PacketT<Array<unsigned char,
   BucketAllocatorEASTL> >&) */

    void ShuffledPacketFactory::ShuffledPacketFactory(PacketT* param_1) {
        field_0 = param_1;
        field_8 = 0;
    }

    // 0x100129c00: the linker folded this into FileSystem_SQLite::SQLStatement::SQLStatement(sqlite3*&), which has identical code
    ShuffledPacketFactory::ShuffledPacketFactory(PacketT<Array<unsigned char, BucketAllocatorEASTL>>&);

    // 0x100129c20, 16 bytes, base-object destructor, inline, placed by class name
    // FileSystem_SQLite::SQLStatement::~SQLStatement()
    void FileSystem_SQLite::SQLStatement::~SQLStatement() {
        Reset(this);
    }

    // 0x100b21450, 32 bytes, inline, placed by class name
    // FileSystem_SQLite::Database::GetBeginStatement()
    void FileSystem_SQLite::Database::GetBeginStatement() {
        BuildStatement(this, "BEGIN", (SQLStatement*)&field_56);
    }

    // 0x100b21470, 32 bytes, inline, placed by class name
    // FileSystem_SQLite::HandleSQLError(FileSystem_SQLite::Database&, int)
    bool FileSystem_SQLite::HandleSQLError(Database* param_1, int param_2) {
        if (param_2 != 0) {
            HandleSQLErrorImpl(this, param_1, param_2);
        }
        return param_2 == 0;
    }

    // 0x100b214e0, 32 bytes, inline, placed by class name
    // FileSystem_SQLite::Database::GetEndStatement()
    void FileSystem_SQLite::Database::GetEndStatement() {
        BuildStatement(this, "END", (SQLStatement*)&field_72);
    }

    // 0x100b218f0, 32 bytes, inline, placed by class name
    // FileSystem_SQLite::Database::GetInsertStatement()
    void FileSystem_SQLite::Database::GetInsertStatement() {
        BuildStatement(this, "INSERT OR REPLACE INTO cache(KEY,DATA) VALUES(?,?)", (SQLStatement*)&field_8);
    }

    // 0x100b21fe0, 32 bytes, inline, placed by class name
    // FileSystem_SQLite::Database::GetSelectStatement()
    void FileSystem_SQLite::Database::GetSelectStatement() {
        BuildStatement(this, "SELECT DATA FROM cache WHERE KEY = ?", (SQLStatement*)&field_24);
    }

    // 0x100b22520, 32 bytes, inline, placed by class name
    // FileSystem_SQLite::Database::GetDeleteStatement()
    void FileSystem_SQLite::Database::GetDeleteStatement() {
        BuildStatement(this, "DELETE FROM cache WHERE KEY = ?", (SQLStatement*)&field_40);
    }

    // 0x100b22eb0, 16 bytes, inline, placed by class name
    // FileSystem_SQLite::GetQuotaBytes() const
    undefined8 FileSystem_SQLite::GetQuotaBytes() {
        return 4294967296;
    }

    // 0x100b22ec0, 16 bytes, inline, placed by class name
    // FileSystem_SQLite::GetUsageBytes() const
    undefined8 FileSystem_SQLite::GetUsageBytes() {
        return m_usageBytes;
    }

    // 0x100b22ed0, 32 bytes, inline, placed by class name
    // FileSystem_SQLite::SetIndexUpdateCallback(std::function<Array<unsigned char, eastl::allocator>* (int)> const&)
    /* FileSystem_SQLite::SetIndexUpdateCallback(std::function<Array<unsigned char,
   eastl::allocator>* (int)> const&) */

    undefined1 FileSystem_SQLite::SetIndexUpdateCallback(function* param_1) {
        std::function<Array<unsigned char, eastl::allocator>*(int)>::operator=(
            (function<Array<unsigned char, eastl::allocator>*(int)>*)&field_2464, param_1);
        return 1;
    }

} // namespace jag

namespace jag::oldscape {
    // 0x100129be0: the linker folded this into FileSystem_SQLite::SQLStatement::SQLStatement(sqlite3*&), which has identical code
    SuperShuffledPacketFactory::SuperShuffledPacketFactory(core::SuperPacket&);

} // namespace jag::oldscape
