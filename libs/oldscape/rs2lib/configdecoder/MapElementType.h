// libs/oldscape/rs2lib/configdecoder/MapElementType.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::oldscape::configdecoder {
    class MapElementType {
    public:
        MapElementType(MapElementType const&);
        ~MapElementType();
        MapElementType(int);
        bool Init(jagex3::Js5*, jagex3::Js5*);
        void Decode(PacketJ<Array<unsigned char, eastl::allocator>>&);
        void PostDecode();
        void List(int);
        void Decode(PacketJ<Array<unsigned char, eastl::allocator>>&, int);
        GetSprite(int) const;
        GetSprite(bool) const;
        MapElementType* GetFlashSprite();
        MapElementType* GetWorldmapArrow();
        int GetID() const;
        void ResetCache();
        static /* 8 bytes */ m_num;
        static /* 20736 bytes */ m_spriteCache;
        static /* 8 bytes */ m_pConfigClient;
        static /* 8 bytes */ m_pSprites;
        static /* 24 bytes */ m_list;

        // data members, from how the methods use this: 452 bytes
        int m_iD;           // offset 0
        undefined4 field_4; // offset 4
        undefined4 field_8; // offset 8
        char _unknown_12[36];
        undefined4 field_48; // offset 48
        undefined4 field_52; // offset 52
        uint field_56;       // offset 56
        undefined4 field_60; // offset 60
        undefined4 field_64; // offset 64
        undefined1 field_68; // offset 68
        undefined1 field_69; // offset 69
        bool field_70;       // offset 70
        char _unknown_71[233];
        undefined4 field_304; // offset 304
        char _unknown_308[28];
        int field_336;        // offset 336
        int field_340;        // offset 340
        int field_344;        // offset 344
        int field_348;        // offset 348
        undefined4 field_352; // offset 352
        uint field_356;       // offset 356
        uint field_360;       // offset 360
        uint field_364;       // offset 364
        int field_368;        // offset 368
        int field_372;        // offset 372
        uint field_376;       // offset 376
        uint field_380;       // offset 380
        char _unknown_384[48];
        uint field_432;       // offset 432
        undefined1 field_436; // offset 436
        char _unknown_437[3];
        uint field_440;       // offset 440
        undefined4 field_444; // offset 444
        char _unknown_448[4];
    };

    // 0x1002136b0, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // MapElementType::MapElementType(MapElementType const&): jumps straight to the base-object constructor

    // 0x100213770, 16 bytes, complete-object destructor, inline, placed by class name and debug map
    // MapElementType::~MapElementType(): jumps straight to the base-object destructor

    // 0x100216fb0, 336 bytes, base-object constructor, inline, placed by class name
    // MapElementType::MapElementType(MapElementType const&)
    void MapElementType::MapElementType(MapElementType* param_1) {
        undefined4 uVar1;
        uint uVar2;
        undefined4 uVar3;
        int iVar4;
        uint uVar5;
        uint uVar6;
        uint uVar7;
        uint uVar8;
        int iVar9;
        int iVar10;
        int iVar11;
        int iVar12;
        undefined1 uVar13;
        undefined3 uVar14;

        field_8 = param_1->field_8;
        uVar1 = param_1->field_4;
        m_iD = param_1->m_iD;
        field_4 = uVar1;
        new (&field_16, (basic_string*)&param_1->field_16) eastl::string();
        *(undefined8*)((long)&field_60 + 3) = *(undefined8*)((long)&param_1->field_60 + 3);
        uVar1 = param_1->field_52;
        uVar2 = param_1->field_56;
        uVar3 = param_1->field_60;
        field_48 = param_1->field_48;
        field_52 = uVar1;
        field_56 = uVar2;
        field_60 = uVar3;
        new (&field_72, (fixed_vector*)&param_1->field_72)
            eastl::fixed_vector<eastl::string, 5ul, true, eastl::allocator>();
        new (&field_272, (basic_string*)&param_1->field_272) eastl::string();
        field_304 = param_1->field_304;
        new (&field_312, (Array*)&param_1->field_312) Array<int, eastl::allocator>();
        iVar9 = param_1->field_336;
        iVar10 = param_1->field_340;
        iVar11 = param_1->field_344;
        iVar12 = param_1->field_348;
        uVar1 = param_1->field_352;
        uVar6 = param_1->field_356;
        uVar7 = param_1->field_360;
        uVar8 = param_1->field_364;
        iVar4 = param_1->field_372;
        uVar2 = param_1->field_376;
        uVar5 = param_1->field_380;
        field_368 = param_1->field_368;
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
        new (&field_384, (Array*)&param_1->field_384) Array<int, eastl::allocator>();
        new (&field_408, (Array*)&param_1->field_408) Array<signed char, eastl::allocator>();
        uVar13 = param_1->field_436;
        uVar14 = *(undefined3*)&param_1->field_437;
        uVar2 = param_1->field_440;
        uVar1 = param_1->field_444;
        field_432 = param_1->field_432;
        field_436 = uVar13;
        *(undefined3*)&field_437 = uVar14;
        field_440 = uVar2;
        field_444 = uVar1;
    }

    // 0x100217500, 96 bytes, base-object destructor, inline, placed by class name
    // MapElementType::~MapElementType()
    void MapElementType::~MapElementType() {
        (&field_408)->~Array();
        (&field_384)->~Array();
        (&field_312)->~Array();
        (&field_272)->~basic_string();
        (&field_72)->~fixed_vector();
        (&field_16)->~basic_string();
    }

} // namespace jag::oldscape::configdecoder

namespace jag {
    // 0x1002137d0, 192 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<oldscape::rs2lib::worldmap::StaticMapElement>::type make_shared<oldscape::rs2lib::worldmap::StaticMapElement, oldscape::rs2lib::CoordGrid const&, oldscape::rs2lib::CoordGrid const&, int const&, oldscape::rs2lib::worldmap::MapTextLabel*>(oldscape::rs2lib::CoordGrid const&, oldscape::rs2lib::CoordGrid const&, int const&, oldscape::rs2lib::worldmap::MapTextLabel*&&)
    jag* jag::make_shared<oldscape::rs2lib::worldmap::StaticMapElement, oldscape::rs2lib::CoordGrid_const&,
                          oldscape::rs2lib::CoordGrid_const&, int const&, oldscape::rs2lib::worldmap::MapTextLabel*>(
        CoordGrid* param_1, CoordGrid* param_2, int* param_3, MapTextLabel** param_4) {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_44;
        StaticMapElement* local_40[2];

        pvVar1 = (void*)aligned_alloc(96, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_40[0] = placement_new<oldscape::rs2lib::worldmap::StaticMapElement,
                                        oldscape::rs2lib::CoordGrid_const&, oldscape::rs2lib::CoordGrid_const&,
                                        int const&, oldscape::rs2lib::worldmap::MapTextLabel*>(
                (void*)((long)pvVar1 + 32), param_1, param_2, param_3, param_4);
            local_44 = 1;
            prVar2 = placement_new<ref_counter_shared<oldscape::rs2lib::worldmap::StaticMapElement>, int,
                                   oldscape::rs2lib::worldmap::StaticMapElement*&>(pvVar1, &local_44, local_40);
            prVar2->~AutoSingleton(local_40[0]);
            prVar2->~AutoSingleton(local_40[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_40[0]);
        }
        return this;
    }

} // namespace jag
