// libs/oldscape/rs2lib/configdecoder/LocType.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::oldscape::configdecoder {
    class LocType {
    public:
        void Init(jagex3::Js5*, jagex3::Js5*, bool);
        LocType();
        shared_ptr* List(int);
        void Decode(shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>&);
        void PostDecode();
        void Decode(shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>&, int);
        ulong CheckModel(int);
        ulong CheckModelAll();
        GetModel(int, int, int, int, int, int);
        BuildModel(int, int);
        GetModelLit(int, int, int, int, int, int);
        GetTempModel(int, int, int, int, int, int, SeqType*, int);
        GetMultiLoc() const;
        LocType* GetMultiLocOrThis() const;
        LocType* GetSpecifiedMultiLocOrThis(int) const;
        void GetParam(int, int);
        GetParam(int, eastl::string const&);
        void ResetCache();
        ulong HasBgSound();
        ~LocType();
        static /* 8 bytes */ m_lowMem;
        static /* 8 bytes */ m_pConfigClient;
        static /* 8 bytes */ m_pModels;
        static /* 327936 bytes */ m_recentUse;
        static /* 40256 bytes */ m_mc1;
        static /* 10496 bytes */ m_mc2;
        static /* 10496 bytes */ m_mc3;

        // data members, from how the methods use this: 576 bytes
        char _unknown_0[184];
        uint field_184;       // offset 184
        uint field_188;       // offset 188
        undefined4 field_192; // offset 192
        undefined1 field_196; // offset 196
        char _unknown_197[3];
        uint field_200;       // offset 200
        uint field_204;       // offset 204
        undefined1 field_208; // offset 208
        undefined1 field_209; // offset 209
        char _unknown_210[2];
        uint field_212; // offset 212
        uint field_216; // offset 216
        int field_220;  // offset 220
        int field_224;  // offset 224
        char _unknown_228[204];
        uint field_432;       // offset 432
        uint field_436;       // offset 436
        uint field_440;       // offset 440
        undefined1 field_444; // offset 444
        undefined1 field_445; // offset 445
        char _unknown_446[2];
        uint field_448;       // offset 448
        uint field_452;       // offset 452
        uint field_456;       // offset 456
        int field_460;        // offset 460
        int field_464;        // offset 464
        int field_468;        // offset 468
        uint field_472;       // offset 472
        undefined1 field_476; // offset 476
        undefined1 field_477; // offset 477
        char _unknown_478[2];
        uint field_480; // offset 480
        char _unknown_484[28];
        uint field_512; // offset 512
        uint field_516; // offset 516
        uint field_520; // offset 520
        uint field_524; // offset 524
        uint field_528; // offset 528
        uint field_532; // offset 532
        char _unknown_536[24];
        undefined1 field_560; // offset 560
        char _unknown_561[15];
    };

    // 0x100246c50, 16 bytes, complete-object destructor, inline, placed by class name
    // LocType::~LocType(): jumps straight to the base-object destructor

    // 0x100246c60, 144 bytes, base-object destructor, inline, placed by class name
    // LocType::~LocType()
    void LocType::~LocType() {
        (&field_568)->~hash_map();
        (&field_536)->~Array();
        (&field_488)->~Array();
        (&field_232)->~fixed_vector();
        (&field_160)->~Array();
        (&field_136)->~Array();
        (&field_112)->~Array();
        (&field_88)->~Array();
        (&field_56)->~basic_string();
        (&field_32)->~Array();
        (&field_8)->~Array();
    }

} // namespace jag::oldscape::configdecoder

namespace jag {
    // 0x100228ea0, 144 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<oldscape::configdecoder::LocType>::type make_shared<oldscape::configdecoder::LocType>()
    jag* make_shared<oldscape::configdecoder::LocType>() {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_2c;
        LocType* local_28[2];

        pvVar1 = (void*)aligned_alloc(656, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_28[0] = placement_new<oldscape::configdecoder::LocType>((void*)((long)pvVar1 + 32));
            local_2c = 1;
            prVar2 = placement_new<ref_counter_shared<oldscape::configdecoder::LocType>, int,
                                   oldscape::configdecoder::LocType*&>(pvVar1, &local_2c, local_28);
            prVar2->~AutoSingleton(local_28[0]);
            prVar2->~AutoSingleton(local_28[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_28[0]);
        }
        return this;
    }

} // namespace jag
