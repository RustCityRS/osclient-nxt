// libs/oldscape/rs2lib/configdecoder/MapElementType.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::oldscape::configdecoder {
    class MapElementType {
    public:
        MapElementType(const MapElementType& mapElementType);
        ~MapElementType();
        MapElementType(int arg1);
        bool Init(jagex3::Js5* js51, jagex3::Js5* js52);
        void Decode(PacketJ<Array<unsigned char>>& packetJ);
        void PostDecode();
        MapElementType* List(int arg1);
        void Decode(PacketJ<Array<unsigned char>>& packetJ, int arg2);
        auto GetSprite(int arg1) const;
        auto GetSprite(bool arg1) const;
        auto GetFlashSprite();
        auto GetWorldmapArrow();
        int GetID() const;
        void ResetCache();
        static int64_t m_num;
        static LRUHashCache<graphics::Pix32, 256ul, 257ul, false, unsigned long long> m_spriteCache;
        static int64_t m_pConfigClient;
        static int64_t m_pSprites;
        static Array<std::unique_ptr<MapElementType>> m_list;

    private:
        int m_iD;
        uint32_t field_4;
        uint32_t field_8;
        uint8_t _unknown_12[36];
        uint32_t field_48;
        uint32_t field_52;
        unsigned int field_56;
        uint32_t field_60;
        uint32_t field_64;
        uint8_t field_68;
        uint8_t field_69;
        bool field_70;
        uint8_t _unknown_71[233];
        uint32_t field_304;
        uint8_t _unknown_308[28];
        int field_336;
        int field_340;
        int field_344;
        int field_348;
        uint32_t field_352;
        unsigned int field_356;
        unsigned int field_360;
        unsigned int field_364;
        int field_368;
        int field_372;
        unsigned int field_376;
        unsigned int field_380;
        uint8_t _unknown_384[48];
        unsigned int field_432;
        uint8_t field_436;
        uint8_t _unknown_437[3];
        unsigned int field_440;
        uint32_t field_444;
        uint8_t _unknown_448[4];
    };

    // 0x100216fb0
    MapElementType::MapElementType(const MapElementType& mapElementType) : field_8(mapElementType.field_8) {
        uint32_t uVar1 = mapElementType.field_4;
        m_iD = mapElementType.m_iD;
        field_4 = uVar1;
        new (&field_16) eastl::string(mapElementType.field_16);
        *(uint64_t*)((long)&field_60 + 3) = *(uint64_t*)((long)&mapElementType.field_60 + 3);
        uVar1 = mapElementType.field_52;
        unsigned int uVar2 = mapElementType.field_56;
        uint32_t uVar3 = mapElementType.field_60;
        field_48 = mapElementType.field_48;
        field_52 = uVar1;
        field_56 = uVar2;
        field_60 = uVar3;
        new (&field_72) eastl::fixed_vector<eastl::string, 5ul>(&mapElementType.field_72);
        new (&field_272) eastl::string(mapElementType.field_272);
        field_304 = mapElementType.field_304;
        new (&field_312) Array<int>(&mapElementType.field_312);
        int iVar9 = mapElementType.field_336;
        int iVar10 = mapElementType.field_340;
        int iVar11 = mapElementType.field_344;
        int iVar12 = mapElementType.field_348;
        uVar1 = mapElementType.field_352;
        unsigned int uVar6 = mapElementType.field_356;
        unsigned int uVar7 = mapElementType.field_360;
        unsigned int uVar8 = mapElementType.field_364;
        int iVar4 = mapElementType.field_372;
        uVar2 = mapElementType.field_376;
        unsigned int uVar5 = mapElementType.field_380;
        field_368 = mapElementType.field_368;
        field_372 = iVar4;
        field_376 = uVar2;
        field_380 = uVar5;
        field_352 = uVar1;
        field_356 = uVar6;
        field_360 = uVar7;
        field_364 = uVar8;
        field_336 = iVar9;
        field_340 = iVar10;
        field_344 = iVar11;
        field_348 = iVar12;
        new (&field_384) Array<int>(&mapElementType.field_384);
        new (&field_408) Array<signed char>(&mapElementType.field_408);
        uint8_t uVar13 = mapElementType.field_436;
        uint32_t uVar14 = *(uint32_t*)&mapElementType.field_437;
        uVar2 = mapElementType.field_440;
        uVar1 = mapElementType.field_444;
        field_432 = mapElementType.field_432;
        field_436 = uVar13;
        *(uint32_t*)&field_437 = uVar14;
        field_440 = uVar2;
        field_444 = uVar1;
    }

    // 0x100217500
    MapElementType::~MapElementType() {
        field_408.~Array();
        field_384.~Array();
        field_312.~Array();
        field_272.~basic_string();
        field_72.~fixed_vector();
        field_16.~basic_string();
    }

} // namespace jag::oldscape::configdecoder

namespace jag {
    // 0x1002137d0
    shared_ptr_if_not_array<oldscape::rs2lib::worldmap::StaticMapElement>::type
    make_shared<oldscape::rs2lib::worldmap::StaticMapElement, oldscape::rs2lib::CoordGrid const&,
                oldscape::rs2lib::CoordGrid const&, int const&, oldscape::rs2lib::worldmap::MapTextLabel*>(
        const oldscape::rs2lib::CoordGrid& coordGrid1, const oldscape::rs2lib::CoordGrid& coordGrid2, const int& arg3,
        oldscape::rs2lib::worldmap::MapTextLabel*&& arg4) {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_44;
        StaticMapElement* local_40[2];

        auto arg1 = aligned_alloc(96, 8);
        if (arg1 == nullptr) {
            shared_ptr_if_not_array<oldscape::rs2lib::worldmap::StaticMapElement>::type result;
        } else {
            local_40[0] = placement_new<oldscape::rs2lib::worldmap::StaticMapElement,
                                        oldscape::rs2lib::CoordGrid const&, oldscape::rs2lib::CoordGrid const&,
                                        int const&, oldscape::rs2lib::worldmap::MapTextLabel*>(
                (void*)((long)arg1 + 32), coordGrid1, coordGrid2, arg3, arg4);
            local_44 = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared<oldscape::rs2lib::worldmap::StaticMapElement>, int,
                              oldscape::rs2lib::worldmap::StaticMapElement*&>(arg1, &local_44, local_40);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_40[0]);
        }
        return result;
    }

} // namespace jag
