// libs/game/runetek5/config/worldareatype/WorldAreaTypeList.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::game {
    class WorldAreaTypeList {
    public:
        // virtual methods in vtable order
        virtual ~WorldAreaTypeList();
        virtual void CacheReset();
        virtual void CacheClean(unsigned int);
        virtual void OnLoad();
        GetAreaColoursForMapSquare(shared_ptr<MapSquareWorldAreaCompositeInner>&, unsigned int, unsigned int);
        GetAreaByCoordinate(shared_ptr<WorldAreaType>&, CoordGrid const&);
        WorldAreaTypeList(ConfigTypeListContainerStrategy, ModeGame const*, Language const*, Js5ResourceProvider&);

        // data members, from how the methods use this: 176 bytes
        undefined** field_0; // offset 0, vtable pointer
        char _unknown_8[56];
        Js5ResourceProvider* field_64; // offset 64
        char _unknown_72[16];
        int field_88; // offset 88
        char _unknown_92[76];
        ulonglong field_168; // offset 168
    };

    // 0x1004c2b40, 16 bytes, complete-object destructor, inline, placed by class name and debug map
    // WorldAreaTypeList::~WorldAreaTypeList(): jumps straight to the base-object destructor

    // 0x1004c2b50, 32 bytes, deleting destructor, inline, placed by class name and debug map
    // WorldAreaTypeList::~WorldAreaTypeList()
    void WorldAreaTypeList::~WorldAreaTypeList() {
        ~WorldAreaTypeList(this);
        operator_delete(this);
    }

    // 0x1004c2bc0, 48 bytes, inline, placed by class name and debug map
    // WorldAreaTypeList::CacheReset()
    void WorldAreaTypeList::CacheReset() {
        CacheReset();
        (&field_168)->Reset();
    }

    // 0x1004c2bf0, 48 bytes, inline, placed by class name and debug map
    // WorldAreaTypeList::CacheClean(unsigned int)
    void WorldAreaTypeList::CacheClean(uint param_1) {
        CacheClean(param_1);
        (&field_168, (ulong)param_1)->Clean();
    }

    // 0x1004c2d60, 64 bytes, base-object destructor, inline, placed by class name
    // WorldAreaTypeList::~WorldAreaTypeList()
    void WorldAreaTypeList::~WorldAreaTypeList() {
        field_0 = &PTR__WorldAreaTypeList_100f01ab8;
        (&field_168)->~LRUHashCache();
        (&field_112)->~hash_map();
        ~BaseTemplateConfigTypeList();
    }

    // 0x1005d8400, 16 bytes, complete-object constructor, inline, placed by class name
    // WorldAreaTypeList::WorldAreaTypeList(ConfigTypeListContainerStrategy, ModeGame const*, Language const*, Js5ResourceProvider&): jumps straight to the base-object constructor

    // 0x1005d8420, 176 bytes, base-object constructor, inline, placed by class name
    // WorldAreaTypeList::WorldAreaTypeList(ConfigTypeListContainerStrategy, ModeGame const*, Language const*, Js5ResourceProvider&)
    void WorldAreaTypeList::WorldAreaTypeList() {
        allocator local_28[8];

        BaseTemplateConfigTypeList<WorldAreaType>::BaseTemplateConfigTypeList();
        field_0 = &PTR__WorldAreaTypeList_100f01ab8;
        eastl::allocator::allocator(local_28, "EASTL hash_map");
        new (&field_112, local_28) eastl::hash_map<unsigned int, unsigned int, eastl::hash<unsigned int>,
                                                   eastl::equal_to<unsigned int>, eastl::allocator, false>();
        new (&field_168, 32, "WorldAreaTypeList")
            LRUHashCache<MapSquareWorldAreaCompositeInner, 32ul, 33ul, false, unsigned long long>();
    }

} // namespace jag::game
