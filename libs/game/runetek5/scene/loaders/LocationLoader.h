// libs/game/runetek5/scene/loaders/LocationLoader.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::game {
    class LocationLoader {
    public:
        unsigned long Load(eastl::vector<shared_ptr<MapSquareLocation>>& mapSquareLocations,
                           Js5ResourceProvider& js5ResourceProvider, ConfigProvider& configProvider,
                           const LinkMap& linkMap);
        uint8_t* LoadMapSquareLocations(eastl::vector<shared_ptr<MapSquareLocation>>& mapSquareLocations,
                                        Js5ResourceProvider& js5ResourceProvider, int arg3, int arg4);
        void Destruct();
        void LoadLocationData(eastl::vector<shared_ptr<MapSquareLocation>>& mapSquareLocations,
                              Js5ResourceProvider& js5ResourceProvider, int arg3, int arg4, bool arg5);
        LocationLoader(int arg1, int arg2, const ClientCompositeData* clientCompositeData);
        ~LocationLoader();

    private:
        int field_0;
        int field_4;
        ClientCompositeData* field_8;
        uint8_t field_16;
        uint8_t _unknown_17[39];
        uint8_t field_56;
        uint8_t _unknown_57[63];
    };

    // 0x1003e3fa0
    MapSquareLocation::~MapSquareLocation() {
        field_72.~shared_ptr();
    }

    // 0x1003e41b0
    MapSquareLocation::MapSquareLocation(signed char arg1, signed char arg2, signed char arg3, int arg4,
                                         const LocData& locData, bool arg6, bool arg7, signed char arg8,
                                         const shared_ptr<LocType>& locType, unsigned short arg10, bool arg11)
        : MakeSharedPool<MapSquareLocation, 16384>(), field_0(arg4), field_4(arg1), field_5(arg2), field_6(arg3),
          field_8(locData), field_60(arg6), field_61(arg7), field_62(arg8), field_64(arg10), field_66(arg11),
          field_67(6), field_72(locType) {}

    // 0x10041cf40
    LocationLoader::LocationLoader(int arg1, int arg2, const ClientCompositeData* clientCompositeData)
        : field_0(arg1), field_4(arg2), field_8(clientCompositeData), field_16(0), field_56(0) {
        eastl local_28;

        eastl::destruct<oldscape::highlight::NpcUID*>(&local_28);
        new (&field_64) eastl::hash_map<unsigned int, shared_ptr<MapSquareLocation>, eastl::hash<unsigned int>,
                                        eastl::equal_to<unsigned int>, BucketAllocatorEASTL>(local_28);
        new (&field_112) eastl::vector<shared_ptr<MapSquareLocation>, BucketAllocatorEASTL>();
    }

    // 0x10041d3e0
    LocationLoader::~LocationLoader() {
        field_112.~vector();
        field_64.~hash_map();
        field_24.~vector();
    }

} // namespace jag::game

namespace jag {
    // 0x1003e4d20
    MakeSharedPoolRefCounter<game::MapSquareLocation, MakeSharedPool<game::MapSquareLocation, 16384>>::
        MakeSharedPoolRefCounter(void* arg1, game::MapSquareLocation* mapSquareLocation)
        : ref_counter_base() {
        *(uint8_t**)this = PTR_vtable_100ee7a70 + 16;
        *(void**)(this + 16) = arg1;
        *(MapSquareLocation**)(this + 24) = mapSquareLocation;
    }

    // 0x1003e4d60
    void
    MakeSharedPoolRefCounter<game::MapSquareLocation, MakeSharedPool<game::MapSquareLocation, 16384>>::DeleteData() {
        if (*(MapSquareLocation**)(this + 24) != nullptr) {
            (*(MapSquareLocation**)(this + 24))->~MapSquareLocation();
            *(uint64_t*)(this + 24) = 0;
        }
    }

    // 0x1003e4d90
    void
    MakeSharedPoolRefCounter<game::MapSquareLocation, MakeSharedPool<game::MapSquareLocation, 16384>>::DeleteSelf() {
        void* arg1 = *(void**)(this + 16);
        (*(void (*)(...)) * *(uint64_t**)this)();
        MakeSharedPool<game::MapSquareLocation, 16384>::deallocate(arg1);
    }

} // namespace jag
