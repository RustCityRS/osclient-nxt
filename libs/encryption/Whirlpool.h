// libs/encryption/Whirlpool.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag {
    class Whirlpool {
    public:
        Whirlpool();
        void Update(unsigned char const*, unsigned long);
        void Final(unsigned char*);
        void processBuffer(NESSIEstruct*);
        void NESSIEinit(NESSIEstruct*);
        void NESSIEadd(unsigned char const*, unsigned long, NESSIEstruct*);
        void NESSIEfinalize(NESSIEstruct*, unsigned char*);
        static /* 2048 bytes */ C0; // initialised in its definition
        static /* 2048 bytes */ C1; // initialised in its definition
        static /* 2048 bytes */ C2; // initialised in its definition
        static /* 2048 bytes */ C3; // initialised in its definition
        static /* 2048 bytes */ C4; // initialised in its definition
        static /* 2048 bytes */ C5; // initialised in its definition
        static /* 2048 bytes */ C6; // initialised in its definition
        static /* 2048 bytes */ C7; // initialised in its definition
        static /* 96 bytes */ rc;   // initialised in its definition

        // data members, from how the methods use this: 168 bytes
        undefined8 field_0;    // offset 0
        undefined8 field_8;    // offset 8
        undefined8 field_16;   // offset 16
        undefined8 field_24;   // offset 24
        NESSIEstruct field_32; // offset 32
        char _unknown_33[31];
        undefined8 field_64;  // offset 64
        undefined8 field_72;  // offset 72
        undefined8 field_80;  // offset 80
        undefined8 field_88;  // offset 88
        uint field_96;        // offset 96
        int field_100;        // offset 100
        undefined8 field_104; // offset 104
        undefined8 field_112; // offset 112
        undefined8 field_120; // offset 120
        undefined8 field_128; // offset 128
        undefined8 field_136; // offset 136
        undefined8 field_144; // offset 144
        undefined8 field_152; // offset 152
        undefined8 field_160; // offset 160
    };

    // 0x1009e0320, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // Whirlpool::Whirlpool(): jumps straight to the base-object constructor

    // 0x1009e0330, 32 bytes, inline, placed by class name and debug map
    // Whirlpool::Update(unsigned char const*, unsigned long)
    void Whirlpool::Update(uchar* param_1, ulong param_2) {
        NESSIEadd(this, param_1, param_2 << 3, (NESSIEstruct*)this);
    }

    // 0x1009e0360, 32 bytes, inline, placed by class name and debug map
    // Whirlpool::Final(unsigned char*)
    void Whirlpool::Final(uchar* param_1) {
        NESSIEfinalize(this, (NESSIEstruct*)this, param_1);
    }

    // 0x1009e0380, 64 bytes, inline, placed by debug map only (low confidence)
    // PacketT<Array<unsigned char, eastl::allocator> >::ToString() const
    PacketT<Array<unsigned char, eastl::allocator>>*
    PacketT<Array<unsigned char, eastl::allocator>>::ToString(PacketT<Array<unsigned char, eastl::allocator>>* this) {
        undefined4 uVar1;
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* in_RSI;

        uVar1 =
            eastl::hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                             eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                             eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                             eastl::prime_rehash_policy, false, true, true>::size(in_RSI);
        eastl::min<graphics::GraphicsQuality>(20, uVar1);
        ToString(this, (int)in_RSI, 0);
        return this;
    }

    // 0x1009f6c80, 16 bytes, base-object constructor, inline, placed by class name
    // Whirlpool::Whirlpool()
    void Whirlpool::Whirlpool() {
        NESSIEinit(this, (NESSIEstruct*)this);
    }

} // namespace jag
