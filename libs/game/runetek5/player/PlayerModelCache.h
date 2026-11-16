// libs/game/runetek5/player/PlayerModelCache.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::game {
    class PlayerModelCache {
    public:
        PlayerModelCache();
        ~PlayerModelCache();
        void CacheModelSet(const PlayerModel& playerModel,
                           const BuildRequest<graphics::Model, BuildModelMain>& buildRequest);
        shared_ptr* GetModelSet(const PlayerModel& playerModel);
        void CacheModelSet(const PlayerModel& playerModel, shared_ptr<PlayerModelModelSet>& playerModelModelSet);
        uint64_t KeyMatches(const PlayerModel& playerModel, const PlayerModelCacheKey& playerModelCacheKey);
        unsigned long CustomisationMatches(const Array<shared_ptr<ObjTypeCustomisation>>& objTypeCustomisations1,
                                           const Array<shared_ptr<ObjTypeCustomisation>>& objTypeCustomisations2);

        uint8_t _unknown_0[1];
    };

    class PlayerModelCacheEntry {
    public:
        PlayerModelCacheEntry();
        ~PlayerModelCacheEntry();

    private:
        uint64_t field_0;
        uint8_t _unknown_8[112];
    };

    class PlayerModelCacheKey {
    public:
        PlayerModelCacheKey();
        ~PlayerModelCacheKey();

        uint8_t _unknown_0[88];
    };

    // 0x100498e70
    PlayerModelCache::PlayerModelCache() : std::array<PlayerModelCacheEntry, 4ul>() {}

    // 0x100498f10
    PlayerModelCacheEntry::PlayerModelCacheEntry() : field_0(18446744073709551615) {
        new (&field_112) shared_ptr();
    }

    // 0x100498f80
    PlayerModelCacheKey::PlayerModelCacheKey() {
        new (&field_8) Array<PlayerModelWearSlot>();
        new (&field_32) Array<shared_ptr<ObjTypeCustomisation>>();
        new (&field_56) Array<unsigned char>();
        new (&field_80) Array<unsigned char>();
    }

    // 0x100499000
    PlayerModelCacheKey::~PlayerModelCacheKey() {
        field_80.~Array();
        field_56.~Array();
        field_32.~Array();
        field_8.~Array();
    }

    // 0x100499040
    PlayerModelCacheEntry::~PlayerModelCacheEntry() {
        field_112.~shared_ptr();
        field_8.~PlayerModelCacheKey();
    }

    // 0x100499120
    PlayerModelCache::~PlayerModelCache() {}

} // namespace jag::game
