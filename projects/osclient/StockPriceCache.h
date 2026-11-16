// projects/osclient/StockPriceCache.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::oldscape {
    class StockPriceCache {
    public:
        class DBImpl;
        uint64_t Init(const eastl::string& str);
        uint64_t Load(const eastl::string& str);
        uint8_t* StartDownloadIfNeeded();
        void Destroy();
        uint8_t* GetMarketPriceForObj(int& arg1, int arg2);
        StockPriceCache();
        ~StockPriceCache();

        uint8_t _unknown_0[1];
    };

    class StockPriceCache::DBImpl {
    public:
        unsigned long Init();
        uint32_t Load(const eastl::string& str);
        void Destroy();
        uint8_t* StartDownloadIfNeeded();
        uint8_t* GetMarketPriceForObj(int& arg1, int arg2);
        void LogSqlError(int arg1, StatementIndex statementIndex, const char* str);
        bool ExecuteSql(const char* str);
        bool PrepareStatement(StatementIndex statementIndex);
        uint64_t Query(StatementIndex statementIndex, int arg2);
        bool ExecuteStatement(StatementIndex statementIndex, int arg2, long long arg3);
        uint32_t Parse(const char* str1, const char* str2);
        void ProcessCompletedRequest();
        DBImpl(const eastl::string& str);
        ~DBImpl();

    private:
        uint8_t _unknown_0[40];
        long field_40;
        long field_48;
        long field_56;
        uint64_t field_64;
        uint8_t _unknown_72[80];
    };

    // 0x100128270
    StockPriceCache::StockPriceCache() {
        unique_ptr<true, void>();
    }

    // 0x10012a560
    StockPriceCache::~StockPriceCache() {}

    // 0x100136420
    StockPriceCache::DBImpl::DBImpl(const eastl::string& str) {
        unique_ptr<true, void>();
        new (&field_8) eastl::string(str);
        field_64 = 0;
        _memcpy(&field_72, &DAT_100ef44f8, 192);
    }

    // 0x100136600
    StockPriceCache::DBImpl::~DBImpl() {
        field_8.~basic_string();
        ~unique_ptr();
    }

} // namespace jag::oldscape
