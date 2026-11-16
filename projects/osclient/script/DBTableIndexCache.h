// projects/osclient/script/DBTableIndexCache.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::oldscape {
    class DBTableIndexCache {
    public:
        void MainLogic();
        GetDBTableIndex(int);
        GetDBTableMasterIndex(int);
        ~DBTableIndexCache();
        DBTableIndexCache(jagex3::Js5*);

        // data members, from how the methods use this: 5392 bytes
        Js5* field_0; // offset 0
        char _unknown_8[5384];
    };

    // 0x10013bba0, 16 bytes, complete-object destructor, inline, placed by class name and debug map
    // DBTableIndexCache::~DBTableIndexCache(): jumps straight to the base-object destructor

    // 0x10013bbb0, 48 bytes, base-object destructor, inline, placed by class name and debug map
    // DBTableIndexCache::~DBTableIndexCache()
    void DBTableIndexCache::~DBTableIndexCache() {
        (&field_5384)->~LRUHashCache();
        (&field_8)->~LRUHashCache();
    }

    // 0x10013e6b0, 16 bytes, complete-object constructor, inline, placed by class name
    // DBTableIndexCache::DBTableIndexCache(jagex3::Js5*): jumps straight to the base-object constructor

    // 0x10013e6d0, 96 bytes, base-object constructor, inline, placed by class name
    // DBTableIndexCache::DBTableIndexCache(jagex3::Js5*)
    void DBTableIndexCache::DBTableIndexCache(Js5* param_1) {
        field_0 = param_1;
        new (&field_8, 64, "DBTableIndexCache") LRUHashCache<DBTableIndex, 64ul, 65ul, false, unsigned long long>();
        new (&field_5384, 32, "DBTableMasterIndexCache")
            LRUHashCache<DBTableIndex, 32ul, 33ul, false, unsigned long long>();
    }

} // namespace jag::oldscape
