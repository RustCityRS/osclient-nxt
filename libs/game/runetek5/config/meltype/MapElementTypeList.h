// libs/game/runetek5/config/meltype/MapElementTypeList.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::game {
    class MapElementTypeList {
    public:
        // virtual methods in vtable order
        virtual ~MapElementTypeList();
        virtual void CacheReset();
        virtual void CacheClean(unsigned int);
        void FindCachedSprite(int);
        void CacheSprite(shared_ptr<graphics::SpriteAtlasReference> const&, int);
        MapElementTypeList(ConfigTypeListContainerStrategy, ModeGame const*, Language const*, Js5ResourceProvider&);

        // data members, from how the methods use this: 120 bytes
        undefined* field_0; // offset 0, vtable pointer
        char _unknown_8[112];
    };

    // 0x100517440, 48 bytes, inline, placed by class name and debug map
    // MapElementTypeList::FindCachedSprite(int)
    void MapElementTypeList::FindCachedSprite(int param_1) {
        undefined4 in_register_0000003c;

        LRUHashCache<graphics::SpriteAtlasReference, 128ul, 129ul, true, unsigned long long>::Find(
            (ulonglong*)(CONCAT44(in_register_0000003c, param_1) + 112));
    }

    // 0x100517470, 48 bytes, inline, placed by class name and debug map
    // MapElementTypeList::CacheSprite(shared_ptr<graphics::SpriteAtlasReference> const&, int)
    void MapElementTypeList::CacheSprite(shared_ptr* param_1, int param_2) {
        ulonglong local_10;

        local_10 = (ulonglong)param_2;
        (&field_112, param_1, 1, &local_10)->Put();
    }

    // 0x1005abe20, 16 bytes, complete-object constructor, inline, placed by class name
    // MapElementTypeList::MapElementTypeList(ConfigTypeListContainerStrategy, ModeGame const*, Language const*, Js5ResourceProvider&): jumps straight to the base-object constructor

    // 0x1005abe40, 112 bytes, base-object constructor, inline, placed by class name
    // MapElementTypeList::MapElementTypeList(ConfigTypeListContainerStrategy, ModeGame const*, Language const*, Js5ResourceProvider&)
    void MapElementTypeList::MapElementTypeList() {
        BaseTemplateConfigTypeList<MapElementType>::BaseTemplateConfigTypeList();
        field_0 = PTR_vtable_100ee7fc8 + 16;
        new (&field_112, 0, "MapElementTypeList")
            LRUHashCache<graphics::SpriteAtlasReference, 128ul, 129ul, true, unsigned long long>();
    }

    // 0x1005ac030, 16 bytes, complete-object destructor, inline, placed by class name
    // MapElementTypeList::~MapElementTypeList(): jumps straight to the base-object destructor

    // 0x1005ac040, 32 bytes, deleting destructor, inline, placed by class name
    // MapElementTypeList::~MapElementTypeList()
    void MapElementTypeList::~MapElementTypeList() {
        ~MapElementTypeList(this);
        operator_delete(this);
    }

    // 0x1005ac0b0, 48 bytes, inline, placed by class name
    // MapElementTypeList::CacheReset()
    void MapElementTypeList::CacheReset() {
        CacheReset();
        (&field_112)->Reset();
    }

    // 0x1005ac0e0, 48 bytes, inline, placed by class name
    // MapElementTypeList::CacheClean(unsigned int)
    void MapElementTypeList::CacheClean(uint param_1) {
        CacheClean(param_1);
        (&field_112, (ulong)param_1)->Clean();
    }

    // 0x1005b2380, 48 bytes, base-object destructor, inline, placed by class name
    // MapElementTypeList::~MapElementTypeList()
    void MapElementTypeList::~MapElementTypeList() {
        field_0 = PTR_vtable_100ee7fc8 + 16;
        (&field_112)->~LRUHashCache();
        ~BaseTemplateConfigTypeList();
    }

} // namespace jag::game
