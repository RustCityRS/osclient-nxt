// projects/osclient/StockPriceCache.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::oldscape {
    class StockPriceCache {
    public:
        class DBImpl;
        Init(eastl::string const&);
        Load(eastl::string const&);
        StartDownloadIfNeeded();
        void Destroy();
        GetMarketPriceForObj(int&, int);
        StockPriceCache();
        ~StockPriceCache();

        // data members, from how the methods use this: 1 bytes
        char _unknown_0[1];
    };

    class StockPriceCache::DBImpl {
    public:
        ulong Init();
        Load(eastl::string const&);
        void Destroy();
        StartDownloadIfNeeded();
        GetMarketPriceForObj(int&, int);
        void LogSqlError(int, StatementIndex, char const*);
        bool ExecuteSql(char const*);
        bool PrepareStatement(StatementIndex);
        Query(StatementIndex, int);
        bool ExecuteStatement(StatementIndex, int, long long);
        Parse(char const*, char const*);
        void ProcessCompletedRequest();
        DBImpl(eastl::string const&);
        ~DBImpl();

        // data members, from how the methods use this: 152 bytes
        char _unknown_0[40];
        long field_40;       // offset 40
        long field_48;       // offset 48
        long field_56;       // offset 56
        undefined8 field_64; // offset 64
        char _unknown_72[80];
    };

    // 0x1000c4280, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // StockPriceCache::StockPriceCache(): jumps straight to the base-object constructor

    // 0x1000c4ac0, 16 bytes, complete-object destructor, inline, placed by class name
    // StockPriceCache::~StockPriceCache(): jumps straight to the base-object destructor

    // 0x100128270, 16 bytes, base-object constructor, inline, placed by class name
    // StockPriceCache::StockPriceCache()
    void StockPriceCache::StockPriceCache() {
        std::unique_ptr<StockPriceCache::DBImpl, std::default_delete<StockPriceCache::DBImpl>>::unique_ptr<true, void>(
            (unique_ptr<StockPriceCache::DBImpl, std::default_delete<StockPriceCache::DBImpl>>*)this);
    }

    // 0x10012a560, 16 bytes, base-object destructor, inline, placed by class name
    // StockPriceCache::~StockPriceCache()
    void StockPriceCache::~StockPriceCache() {
        ~unique_ptr();
    }

    // 0x100136400, 16 bytes, complete-object constructor, inline, placed by class name
    // StockPriceCache::DBImpl::DBImpl(eastl::string const&): jumps straight to the base-object constructor

    // 0x100136420, 96 bytes, base-object constructor, inline, placed by class name
    // StockPriceCache::DBImpl::DBImpl(eastl::string const&)
    void StockPriceCache::DBImpl::DBImpl(basic_string* param_1) {
        std::unique_ptr<http::HTTPRequest, std::default_delete<http::HTTPRequest>>::unique_ptr<true, void>(
            (unique_ptr<http::HTTPRequest, std::default_delete<http::HTTPRequest>>*)this);
        new (&field_8, param_1) eastl::string();
        field_64 = 0;
        _memcpy(&field_72, &DAT_100ef44f8, 192);
    }

    // 0x1001365f0, 16 bytes, complete-object destructor, inline, placed by class name
    // StockPriceCache::DBImpl::~DBImpl(): jumps straight to the base-object destructor

    // 0x100136600, 48 bytes, base-object destructor, inline, placed by class name
    // StockPriceCache::DBImpl::~DBImpl()
    void StockPriceCache::DBImpl::~DBImpl() {
        (&field_8)->~basic_string();
        ~unique_ptr();
    }

} // namespace jag::oldscape
