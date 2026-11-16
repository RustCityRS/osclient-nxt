// projects/osclient/ClientInvCache.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::oldscape {
    class ClientInvCache {
    public:
        ClientInvCache();
        void GetType(int arg1, int arg2);
        void GetCount(int arg1, int arg2);
        int InvTotal(int arg1, int arg2);
        void Set(int arg1, int arg2, int arg3, int arg4);
        ~ClientInvCache();
        void Blank(int arg1);
        void Delete(int arg1);
        void DeleteAll();
        ClientInvCache(ClientInvCache&& clientInvCache);
        static eastl::hash_map<int, ClientInvCache> m_invList;

    private:
        eastl* field_0;
        should_move_or_copy_tag<true>* field_8;
        uint8_t _unknown_16[24];
    };

    // 0x100197ad0
    ClientInvCache::~ClientInvCache() {
        field_32.~vector();
    }

    // 0x1001a9a30
    ClientInvCache::ClientInvCache(ClientInvCache&& clientInvCache)
        : eastl::vector<int>(clientInvCache), field_32(clientInvCache.field_32) {}

} // namespace jag::oldscape
