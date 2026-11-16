// libs/oldscape/rs2lib/configdecoder/IdkType.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::oldscape::configdecoder {
    class IdkType {
    public:
        void Init(jagex3::Js5*, jagex3::Js5*);
        IdkType* List(int);
        void Decode(PacketJ<Array<unsigned char, eastl::allocator>>&);
        void Decode(PacketJ<Array<unsigned char, eastl::allocator>>&, int);
        ulong CheckModel();
        GetModelNoCheck();
        ulong CheckHead();
        GetHeadNoCheck();
        void ResetCache();
        IdkType();
        ~IdkType();
        static /* 8 bytes */ m_pConfigClient;
        static /* 8 bytes */ m_pModels;
        static /* 8 bytes */ m_numDefinitions;
        static /* 5384 bytes */ m_recentUse;

        // data members, from how the methods use this: 152 bytes
        uint field_0; // offset 0
        char _unknown_4[4];
        long field_8; // offset 8
        char _unknown_16[112];
        undefined4 field_128; // offset 128
        undefined4 field_132; // offset 132
        undefined4 field_136; // offset 136
        undefined4 field_140; // offset 140
        undefined4 field_144; // offset 144
        undefined1 field_148; // offset 148
        char _unknown_149[3];
    };

    // 0x1002836f0, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // IdkType::IdkType(): jumps straight to the base-object constructor

    // 0x100283700, 192 bytes, base-object constructor, inline, placed by class name and debug map
    // IdkType::IdkType()
    void IdkType::IdkType() {
        field_0 = 4294967295;
        new (&field_8) Array<int, eastl::allocator>();
        new (&field_32) Array<short, eastl::allocator>();
        new (&field_56) Array<short, eastl::allocator>();
        new (&field_80) Array<short, eastl::allocator>();
        new (&field_104) Array<short, eastl::allocator>();
        field_128 = 4294967295;
        field_132 = 4294967295;
        field_136 = 4294967295;
        field_140 = 4294967295;
        field_144 = 4294967295;
        field_148 = 0;
    }

    // 0x100283860, 16 bytes, complete-object destructor, inline, placed by class name and debug map
    // IdkType::~IdkType(): jumps straight to the base-object destructor

    // 0x100283870, 64 bytes, base-object destructor, inline, placed by class name and debug map
    // IdkType::~IdkType()
    void IdkType::~IdkType() {
        (&field_104)->~Array();
        (&field_80)->~Array();
        (&field_56)->~Array();
        (&field_32)->~Array();
        (&field_8)->~Array();
    }

} // namespace jag::oldscape::configdecoder

namespace jag {
    // 0x1002837c0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::configdecoder::IdkType>::ref_counter_shared(unsigned long, oldscape::configdecoder::IdkType*): jumps straight to the base-object constructor

    // 0x1002837d0, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::configdecoder::IdkType>::ref_counter_shared(unsigned long, oldscape::configdecoder::IdkType*)
    void ref_counter_shared<oldscape::configdecoder::IdkType>::ref_counter_shared(ulong param_1, IdkType* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7600 + 16;
        *(ulong*)(this + 16) = param_1;
        *(IdkType**)(this + 24) = param_2;
    }

    // 0x100283810, 80 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::configdecoder::IdkType>::DeleteData()
    void ref_counter_shared<oldscape::configdecoder::IdkType>::DeleteData() {
        ulong uVar1;
        long lVar2;

        if (*(long*)(this + 24) != 0) {
            if (*(long*)(this + 16) != 0) {
                lVar2 = 0;
                uVar1 = 0;
                do {
                    ((*(long*)(this + 24) + lVar2))->~IdkType();
                    uVar1 = uVar1 + 1;
                    lVar2 = lVar2 + 152;
                } while (uVar1 < *(ulong*)(this + 16));
            }
            *(undefined8*)(this + 24) = 0;
        }
    }

} // namespace jag
