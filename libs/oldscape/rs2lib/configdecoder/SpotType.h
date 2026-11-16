// libs/oldscape/rs2lib/configdecoder/SpotType.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::oldscape::configdecoder {
    class SpotType {
    public:
        void Init(jagex3::Js5*, jagex3::Js5*);
        SpotType* List(int);
        void Decode(PacketJ<Array<unsigned char, eastl::allocator>>&);
        void Decode(PacketJ<Array<unsigned char, eastl::allocator>>&, int);
        GetTempModel2(int);
        GetBaseModel();
        void ResetCache();
        SpotType();
        ~SpotType();
        static /* 8 bytes */ m_pConfigClient;
        static /* 8 bytes */ m_pModels;
        static /* 5376 bytes */ m_recentUse;
        static /* 2656 bytes */ m_modelCache;

        // data members, from how the methods use this: 136 bytes
        char _unknown_0[4];
        uint field_4; // offset 4
        long field_8; // offset 8
        char _unknown_16[96];
        uint field_112; // offset 112
        uint field_116; // offset 116
        uint field_120; // offset 120
        uint field_124; // offset 124
        uint field_128; // offset 128
        char _unknown_132[4];
    };

    // 0x10024e6c0, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // SpotType::SpotType(): jumps straight to the base-object constructor

    // 0x10024e6d0, 144 bytes, base-object constructor, inline, placed by class name and debug map
    // SpotType::SpotType()
    void SpotType::SpotType() {
        *(undefined4*)&field_8 = 4294967295;
        new (&field_16) Array<short, eastl::allocator>();
        new (&field_40) Array<short, eastl::allocator>();
        new (&field_64) Array<short, eastl::allocator>();
        new (&field_88) Array<short, eastl::allocator>();
        field_112 = 128;
        field_116 = 128;
        field_120 = 0;
        field_124 = 0;
        field_128 = 0;
    }

    // 0x10024e800, 16 bytes, complete-object destructor, inline, placed by class name and debug map
    // SpotType::~SpotType(): jumps straight to the base-object destructor

    // 0x10024e810, 64 bytes, base-object destructor, inline, placed by class name and debug map
    // SpotType::~SpotType()
    void SpotType::~SpotType() {
        (&field_88)->~Array();
        (&field_64)->~Array();
        (&field_40)->~Array();
        (&field_16)->~Array();
    }

} // namespace jag::oldscape::configdecoder

namespace jag {
    // 0x10024e760, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::configdecoder::SpotType>::ref_counter_shared(unsigned long, oldscape::configdecoder::SpotType*): jumps straight to the base-object constructor

    // 0x10024e770, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::configdecoder::SpotType>::ref_counter_shared(unsigned long, oldscape::configdecoder::SpotType*)
    void ref_counter_shared<oldscape::configdecoder::SpotType>::ref_counter_shared(ulong param_1, SpotType* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7630 + 16;
        *(ulong*)(this + 16) = param_1;
        *(SpotType**)(this + 24) = param_2;
    }

    // 0x10024e7b0, 80 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::configdecoder::SpotType>::DeleteData()
    void ref_counter_shared<oldscape::configdecoder::SpotType>::DeleteData() {
        ulong uVar1;
        long lVar2;

        if (*(long*)(this + 24) != 0) {
            if (*(long*)(this + 16) != 0) {
                lVar2 = 0;
                uVar1 = 0;
                do {
                    ((*(long*)(this + 24) + lVar2))->~SpotType();
                    uVar1 = uVar1 + 1;
                    lVar2 = lVar2 + 136;
                } while (uVar1 < *(ulong*)(this + 16));
            }
            *(undefined8*)(this + 24) = 0;
        }
    }

    // 0x10024edd0, 48 bytes, inline, placed by debug map only (low confidence)
    // oldscape::configdecoder::StructType* placement_new<oldscape::configdecoder::StructType>(void*)
    StructType* placement_new<oldscape::configdecoder::StructType>(void* param_1) {
        *(undefined8*)((long)param_1 + 48) = 0;
        *(undefined8*)((long)param_1 + 56) = 0;
        *(undefined8*)((long)param_1 + 32) = 0;
        *(undefined8*)((long)param_1 + 40) = 0;
        *(undefined8*)((long)param_1 + 16) = 0;
        *(undefined8*)((long)param_1 + 24) = 0;
        *(undefined8*)param_1 = 0;
        *(undefined8*)((long)param_1 + 8) = 0;
        oldscape::configdecoder::StructType::StructType(param_1);
        return param_1;
    }

    // 0x10024ee00, 32 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::configdecoder::StructType>* placement_new<ref_counter_shared<oldscape::configdecoder::StructType>, int, oldscape::configdecoder::StructType*&>(void*, int&&, oldscape::configdecoder::StructType*&)
    ref_counter_shared* jag::placement_new<ref_counter_shared<oldscape::configdecoder::StructType>, int,
                                           oldscape::configdecoder::StructType*&>(void* param_1, int* param_2,
                                                                                  StructType** param_3) {
        ref_counter_shared<oldscape::configdecoder::StructType>::ref_counter_shared(param_1, (long)*param_2, *param_3);
        return param_1;
    }

} // namespace jag
