// libs/game/runetek5/scene/loaders/LocationLoader.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::game {
    class LocationLoader {
    public:
        ulong Load(eastl::vector<shared_ptr<MapSquareLocation>, eastl::allocator>&, Js5ResourceProvider&,
                   ConfigProvider&, LinkMap const&);
        LoadMapSquareLocations(eastl::vector<shared_ptr<MapSquareLocation>, eastl::allocator>&, Js5ResourceProvider&,
                               int, int);
        void Destruct();
        void LoadLocationData(eastl::vector<shared_ptr<MapSquareLocation>, eastl::allocator>&, Js5ResourceProvider&,
                              int, int, bool);
        LocationLoader(int, int, ClientCompositeData const*);
        ~LocationLoader();

        // data members, from how the methods use this: 120 bytes
        int field_0;                  // offset 0
        int field_4;                  // offset 4
        ClientCompositeData* field_8; // offset 8
        undefined1 field_16;          // offset 16
        char _unknown_17[39];
        undefined1 field_56; // offset 56
        char _unknown_57[63];
    };

    // 0x1003e3f90, 16 bytes, complete-object destructor, inline, placed by debug map only (low confidence)
    // MapSquareLocation::~MapSquareLocation(): jumps straight to the base-object destructor

    // 0x1003e3fa0, 16 bytes, base-object destructor, inline, placed by debug map only (low confidence)
    // MapSquareLocation::~MapSquareLocation()
    void MapSquareLocation::~MapSquareLocation() {
        (&field_72)->~shared_ptr();
    }

    // 0x1003e4170, 64 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // MapSquareLocation::MapSquareLocation(signed char, signed char, signed char, int, LocData const&, bool, bool, signed char, shared_ptr<LocType> const&, unsigned short, bool)
    void MapSquareLocation::MapSquareLocation() {
        MapSquareLocation();
    }

    // 0x1003e41b0, 144 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // MapSquareLocation::MapSquareLocation(signed char, signed char, signed char, int, LocData const&, bool, bool, signed char, shared_ptr<LocType> const&, unsigned short, bool)
    void MapSquareLocation::MapSquareLocation(undefined1 param_2, undefined1 param_3, undefined1 param_4,
                                              undefined4 param_5, LocData* param_6, undefined1 param_7,
                                              undefined1 param_8, undefined1 param_9, shared_ptr* param_10,
                                              undefined2 param_11, undefined1 param_12) {
        new (this) MakeSharedPool<MapSquareLocation, 16384>();
        field_0 = param_5;
        field_4 = param_2;
        field_5 = param_3;
        field_6 = param_4;
        new (field_8, param_6) LocData();
        field_60 = param_7;
        field_61 = param_8;
        field_62 = param_9;
        field_64 = param_11;
        field_66 = param_12;
        field_67 = 6;
        new (&field_72, param_10) shared_ptr<oldscape::dash3d::Decor>();
    }

    // 0x1004144d0, 16 bytes, complete-object constructor, inline, placed by class name
    // LocationLoader::LocationLoader(int, int, ClientCompositeData const*): jumps straight to the base-object constructor

    // 0x1004146b0, 16 bytes, complete-object destructor, inline, placed by class name
    // LocationLoader::~LocationLoader(): jumps straight to the base-object destructor

    // 0x10041cf40, 144 bytes, base-object constructor, inline, placed by class name
    // LocationLoader::LocationLoader(int, int, ClientCompositeData const*)
    void LocationLoader::LocationLoader(int param_1, int param_2, ClientCompositeData* param_3) {
        undefined4 extraout_EDX;
        undefined4 extraout_var;
        eastl local_28[8];

        field_0 = param_1;
        field_4 = param_2;
        field_8 = param_3;
        field_16 = 0;
        new (&field_24)
            eastl::vector<eastl::vector<shared_ptr<MapSquareLocation>, eastl::allocator>, eastl::allocator>();
        field_56 = 0;
        eastl::destruct<oldscape::highlight::NpcUID*>(local_28, (NpcUID*)"EASTL hash_map",
                                                      (NpcUID*)CONCAT44(extraout_var, extraout_EDX));
        eastl::hash_map<unsigned int, shared_ptr<MapSquareLocation>, eastl::hash<unsigned int>,
                        eastl::equal_to<unsigned int>, BucketAllocatorEASTL,
                        false>::hash_map((BucketAllocatorEASTL*)&field_64);
        eastl::vector<shared_ptr<MapSquareLocation>, BucketAllocatorEASTL>::vector();
    }

    // 0x10041d3e0, 48 bytes, base-object destructor, inline, placed by class name
    // LocationLoader::~LocationLoader()
    void LocationLoader::~LocationLoader() {
        (&field_112)->~vector();
        (&field_64)->~hash_map();
        (&field_24)->~vector();
    }

} // namespace jag::game

namespace jag {
    // 0x1003e4d10, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<game::MapSquareLocation, MakeSharedPool<game::MapSquareLocation, 16384> >::MakeSharedPoolRefCounter(void*, game::MapSquareLocation*): jumps straight to the base-object constructor

    // 0x1003e4d20, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<game::MapSquareLocation, MakeSharedPool<game::MapSquareLocation, 16384> >::MakeSharedPoolRefCounter(void*, game::MapSquareLocation*)
    void jag::MakeSharedPoolRefCounter<game::MapSquareLocation, MakeSharedPool<game::MapSquareLocation, 16384>>::
        MakeSharedPoolRefCounter(
            MakeSharedPoolRefCounter<game::MapSquareLocation, MakeSharedPool<game::MapSquareLocation, 16384>>* this,
            void* param_1, MapSquareLocation* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7a70 + 16;
        *(void**)(this + 16) = param_1;
        *(MapSquareLocation**)(this + 24) = param_2;
    }

    // 0x1003e4d60, 48 bytes, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<game::MapSquareLocation, MakeSharedPool<game::MapSquareLocation, 16384> >::DeleteData()
    void
    jag::MakeSharedPoolRefCounter<game::MapSquareLocation, MakeSharedPool<game::MapSquareLocation, 16384>>::DeleteData(
        MakeSharedPoolRefCounter<game::MapSquareLocation, MakeSharedPool<game::MapSquareLocation, 16384>>* this) {
        if (*(MapSquareLocation**)(this + 24) != (MapSquareLocation*)0) {
            (*(MapSquareLocation**)(this + 24))->~MapSquareLocation();
            *(undefined8*)(this + 24) = 0;
        }
    }

    // 0x1003e4d90, 32 bytes, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<game::MapSquareLocation, MakeSharedPool<game::MapSquareLocation, 16384> >::DeleteSelf()
    void
    jag::MakeSharedPoolRefCounter<game::MapSquareLocation, MakeSharedPool<game::MapSquareLocation, 16384>>::DeleteSelf(
        MakeSharedPoolRefCounter<game::MapSquareLocation, MakeSharedPool<game::MapSquareLocation, 16384>>* this) {
        void* pvVar1;

        pvVar1 = *(void**)(this + 16);
        (*(code*)**(undefined8**)this)();
        MakeSharedPool<game::MapSquareLocation, 16384>::deallocate(pvVar1);
    }

} // namespace jag
