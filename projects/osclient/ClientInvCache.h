// projects/osclient/ClientInvCache.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::oldscape {
    class ClientInvCache {
    public:
        ClientInvCache();
        GetType(int, int);
        GetCount(int, int);
        int InvTotal(int, int);
        void Set(int, int, int, int);
        ~ClientInvCache();
        void Blank(int);
        void Delete(int);
        void DeleteAll();
        ClientInvCache(ClientInvCache&&);
        static /* 56 bytes */ m_invList;

        // data members, from how the methods use this: 40 bytes
        eastl* field_0;  // offset 0
        NpcUID* field_8; // offset 8
        char _unknown_16[24];
    };

    // 0x100180c80, 16 bytes, complete-object destructor, inline, placed by class name and debug map
    // ClientInvCache::~ClientInvCache(): jumps straight to the base-object destructor

    // 0x100197ad0, 48 bytes, base-object destructor, inline, placed by class name
    // ClientInvCache::~ClientInvCache()
    void ClientInvCache::~ClientInvCache() {
        (&field_32)->~vector();
        ~vector();
    }

    // 0x1001a9a20, 16 bytes, complete-object constructor, inline, placed by class name
    // ClientInvCache::ClientInvCache(ClientInvCache&&): jumps straight to the base-object constructor

    // 0x1001a9a30, 48 bytes, base-object constructor, inline, placed by class name
    // ClientInvCache::ClientInvCache(ClientInvCache&&)
    void ClientInvCache::ClientInvCache(ClientInvCache* param_1) {
        new (this) eastl::vector<int, eastl::allocator>(param_1);
        new (&field_32, (vector*)&param_1->field_32) eastl::vector<int, eastl::allocator>();
    }

} // namespace jag::oldscape
