// libs/game/runetek5/config/worldareatype/WorldAreaTypeList.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::game {
    class WorldAreaTypeList {
    public:
        // virtual methods in vtable order
        virtual ~WorldAreaTypeList();
        virtual void CacheReset();
        virtual void CacheClean(unsigned int arg1);
        virtual void OnLoad();
        uint8_t*
        GetAreaColoursForMapSquare(shared_ptr<MapSquareWorldAreaCompositeInner>& mapSquareWorldAreaCompositeInner,
                                   unsigned int arg2, unsigned int arg3);
        uint8_t* GetAreaByCoordinate(shared_ptr<WorldAreaType>& worldAreaType, const CoordGrid& coordGrid);
        WorldAreaTypeList(ConfigTypeListContainerStrategy configTypeListContainerStrategy, const ModeGame* modeGame,
                          const Language* language, Js5ResourceProvider& js5ResourceProvider);

    private:
        uint8_t _unknown_8[56];
        Js5ResourceProvider* field_64;
        uint8_t _unknown_72[16];
        int field_88;
        uint8_t _unknown_92[84];
    };

    // 0x1004c2bc0
    void WorldAreaTypeList::CacheReset() {
        CacheReset();
        field_168.Reset();
    }

    // 0x1004c2bf0
    void WorldAreaTypeList::CacheClean(unsigned int arg1) {
        CacheClean(arg1);
        field_168.Clean((unsigned long)arg1);
    }

    // 0x1004c2d60
    WorldAreaTypeList::~WorldAreaTypeList() {
        field_168.~LRUHashCache();
        field_112.~hash_map();
    }

    // 0x1005d8420
    WorldAreaTypeList::WorldAreaTypeList(ConfigTypeListContainerStrategy configTypeListContainerStrategy,
                                         const ModeGame* modeGame, const Language* language,
                                         Js5ResourceProvider& js5ResourceProvider)
        : BaseTemplateConfigTypeList<WorldAreaType>(configTypeListContainerStrategy, modeGame, language,
                                                    js5ResourceProvider, *(Js5Archive::JS5_CONFIG),
                                                    (Js5ConfigGroup*)Js5ConfigGroup::WORLDAREATYPE, 0) {

        new (&field_112) eastl::hash_map<unsigned int, unsigned int>(local_28);
        new (&field_168) LRUHashCache<MapSquareWorldAreaCompositeInner, 32ul, 33ul, false, unsigned long long>(
            32, "WorldAreaTypeList");
    }

} // namespace jag::game
