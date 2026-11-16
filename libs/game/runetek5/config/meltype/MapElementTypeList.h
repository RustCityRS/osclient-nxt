// libs/game/runetek5/config/meltype/MapElementTypeList.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::game {
    class MapElementTypeList {
    public:
        // virtual methods in vtable order
        virtual ~MapElementTypeList();
        virtual void CacheReset();
        virtual void CacheClean(unsigned int arg1);
        PacketView* FindCachedSprite(int arg1);
        PacketView* CacheSprite(const shared_ptr<graphics::SpriteAtlasReference>& spriteAtlasReference, int arg2);
        MapElementTypeList(ConfigTypeListContainerStrategy configTypeListContainerStrategy, const ModeGame* modeGame,
                           const Language* language, Js5ResourceProvider& js5ResourceProvider);

    private:
        uint8_t _unknown_8[112];
    };

    // 0x100517440
    PacketView* MapElementTypeList::FindCachedSprite(int arg1) {
        return (PacketView*)field_112.Find((unsigned long long)arg1);
    }

    // 0x100517470
    PacketView* MapElementTypeList::CacheSprite(const shared_ptr<graphics::SpriteAtlasReference>& spriteAtlasReference,
                                                int arg2) {
        return (PacketView*)field_112.Put(spriteAtlasReference, 1, (unsigned long long)arg2);
    }

    // 0x1005abe40
    MapElementTypeList::MapElementTypeList(ConfigTypeListContainerStrategy configTypeListContainerStrategy,
                                           const ModeGame* modeGame, const Language* language,
                                           Js5ResourceProvider& js5ResourceProvider)
        : BaseTemplateConfigTypeList<MapElementType>(configTypeListContainerStrategy, modeGame, language,
                                                     js5ResourceProvider, *(Js5Archive::JS5_CONFIG),
                                                     (Js5ConfigGroup*)Js5ConfigGroup::MELTYPE, 0),
          field_112(0, "MapElementTypeList") {}

    // 0x1005ac0b0
    void MapElementTypeList::CacheReset() {
        CacheReset();
        field_112.Reset();
    }

    // 0x1005ac0e0
    void MapElementTypeList::CacheClean(unsigned int arg1) {
        CacheClean(arg1);
        field_112.Clean((unsigned long)arg1);
    }

    // 0x1005b2380
    MapElementTypeList::~MapElementTypeList() {
        field_112.~LRUHashCache();
    }

} // namespace jag::game
