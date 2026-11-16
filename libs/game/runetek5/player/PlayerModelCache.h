// libs/game/runetek5/player/PlayerModelCache.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::game {
    class PlayerModelCache {
    public:
        PlayerModelCache();
        ~PlayerModelCache();
        void CacheModelSet(PlayerModel const&, BuildRequest<graphics::Model, BuildModelMain> const&);
        long* GetModelSet(PlayerModel const&);
        void CacheModelSet(PlayerModel const&, shared_ptr<PlayerModelModelSet>&);
        KeyMatches(PlayerModel const&, PlayerModelCacheKey const&);
        ulong CustomisationMatches(Array<shared_ptr<ObjTypeCustomisation>, eastl::allocator> const&,
                                   Array<shared_ptr<ObjTypeCustomisation>, eastl::allocator> const&);

        // data members, from how the methods use this: 1 bytes
        char _unknown_0[1];
    };

    class PlayerModelCacheEntry {
    public:
        PlayerModelCacheEntry();
        ~PlayerModelCacheEntry();

        // data members, from how the methods use this: 120 bytes
        undefined8 field_0; // offset 0
        char _unknown_8[112];
    };

    class PlayerModelCacheKey {
    public:
        PlayerModelCacheKey();
        ~PlayerModelCacheKey();

        // data members, from how the methods use this: 88 bytes
        char _unknown_0[88];
    };

    // 0x100495130, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // PlayerModelCache::PlayerModelCache(): jumps straight to the base-object constructor

    // 0x100495470, 16 bytes, complete-object destructor, inline, placed by class name
    // PlayerModelCache::~PlayerModelCache(): jumps straight to the base-object destructor

    // 0x100498e70, 16 bytes, base-object constructor, inline, placed by class name
    // PlayerModelCache::PlayerModelCache()
    void PlayerModelCache::PlayerModelCache() {
        new (this) std::array<PlayerModelCacheEntry, 4ul>();
    }

    // 0x100498ef0, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // PlayerModelCacheEntry::PlayerModelCacheEntry(): jumps straight to the base-object constructor

    // 0x100498f00, 16 bytes, complete-object destructor, inline, placed by class header (inline)
    // PlayerModelCacheEntry::~PlayerModelCacheEntry(): jumps straight to the base-object destructor

    // 0x100498f10, 80 bytes, base-object constructor, inline, placed by class header (inline)
    // PlayerModelCacheEntry::PlayerModelCacheEntry()
    void PlayerModelCacheEntry::PlayerModelCacheEntry() {
        _func_decltype_nullptr* in_RSI;

        field_0 = 18446744073709551615;
        new (&field_8) PlayerModelCacheKey();
        new (&field_112, in_RSI) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
    }

    // 0x100498f60, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // PlayerModelCacheKey::PlayerModelCacheKey(): jumps straight to the base-object constructor

    // 0x100498f70, 16 bytes, complete-object destructor, inline, placed by class header (inline)
    // PlayerModelCacheKey::~PlayerModelCacheKey(): jumps straight to the base-object destructor

    // 0x100498f80, 128 bytes, base-object constructor, inline, placed by class header (inline)
    // PlayerModelCacheKey::PlayerModelCacheKey()
    void PlayerModelCacheKey::PlayerModelCacheKey() {
        new (&field_8) Array<PlayerModelWearSlot, eastl::allocator>();
        new (&field_32) Array<shared_ptr<ObjTypeCustomisation>, eastl::allocator>();
        new (&field_56) Array<unsigned char, eastl::allocator>();
        new (&field_80) Array<unsigned char, eastl::allocator>();
    }

    // 0x100499000, 64 bytes, base-object destructor, inline, placed by class header (inline)
    // PlayerModelCacheKey::~PlayerModelCacheKey()
    void PlayerModelCacheKey::~PlayerModelCacheKey() {
        (&field_80)->~Array();
        (&field_56)->~Array();
        (&field_32)->~Array();
        (&field_8)->~Array();
    }

    // 0x100499040, 48 bytes, base-object destructor, inline, placed by class header (inline)
    // PlayerModelCacheEntry::~PlayerModelCacheEntry()
    void PlayerModelCacheEntry::~PlayerModelCacheEntry() {
        (&field_112)->~shared_ptr();
        (&field_8)->~PlayerModelCacheKey();
    }

    // 0x100499120, 16 bytes, base-object destructor, inline, placed by class name
    // PlayerModelCache::~PlayerModelCache()
    void PlayerModelCache::~PlayerModelCache() {
        ~array();
    }

} // namespace jag::game
