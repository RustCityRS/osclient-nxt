// projects/osclient/script/DBTableIndexCache.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::oldscape {
    class DBTableIndexCache {
    public:
        void MainLogic();
        auto GetDBTableIndex(int arg1);
        auto GetDBTableMasterIndex(int arg1);
        ~DBTableIndexCache();
        DBTableIndexCache(jagex3::Js5* js5);

    private:
        Js5* field_0;
        uint8_t _unknown_8[5384];
    };

    // 0x10013bbb0
    DBTableIndexCache::~DBTableIndexCache() {
        field_5384.~LRUHashCache();
        field_8.~LRUHashCache();
    }

    // 0x10013e6d0
    DBTableIndexCache::DBTableIndexCache(jagex3::Js5* js5)
        : field_0(js5), field_8(64, "DBTableIndexCache"), field_5384(32, "DBTableMasterIndexCache") {}

} // namespace jag::oldscape
