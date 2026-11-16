// libs/game/runetek5/network/protocol/ZoneProt.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.game.runetek5

namespace jag {
    class ZoneProt {
    public:
        ZoneProt(int, int, char const*);
        ~ZoneProt();
        static eastl::fixed_vector<ZoneProt_const*, 16ul, true, eastl::allocator> /* 176 bytes */
            m_typeLookup;                          // = fixed_vector<ZoneProt_const*,16ul,true,eastl::allocator>()
        static ZoneProt /* 64 bytes */ TEXT_COORD; // = ZoneProt(0, -1, "TEXT_COORD")
        static ZoneProt /* 64 bytes */ LOC_DEL;    // = ZoneProt(1, 2, "LOC_DEL")
        static ZoneProt /* 64 bytes */ MAP_PROJANIM_HALFSQ; // = ZoneProt(2, 21, "MAP_PROJANIM_HALFSQ")
        static ZoneProt /* 64 bytes */ SOUND_VORBIS_AREA;   // = ZoneProt(3, 11, "SOUND_VORBIS_AREA")
        static ZoneProt /* 64 bytes */ LOC_ANIM;            // = ZoneProt(4, 7, "LOC_ANIM")
        static ZoneProt /* 64 bytes */ LOC_PREFETCH;        // = ZoneProt(5, 5, "LOC_PREFETCH")
        static ZoneProt /* 64 bytes */ OBJ_REVEAL;          // = ZoneProt(6, 7, "OBJ_REVEAL")
        static ZoneProt /* 64 bytes */ LOC_ADD_CHANGE;      // = ZoneProt(7, -1, "LOC_ADD_CHANGE")
        static ZoneProt /* 64 bytes */ LOC_CUSTOMISE;       // = ZoneProt(8, -1, "LOC_CUSTOMISE")
        static ZoneProt /* 64 bytes */ OBJ_COUNT;           // = ZoneProt(9, 7, "OBJ_COUNT")
        static ZoneProt /* 64 bytes */ OBJ_ADD;             // = ZoneProt(10, 5, "OBJ_ADD")
        static ZoneProt /* 64 bytes */ MAP_PROJANIM;        // = ZoneProt(11, 20, "MAP_PROJANIM")
        static ZoneProt /* 64 bytes */ OBJ_DEL;             // = ZoneProt(12, 3, "OBJ_DEL")
        static ZoneProt /* 64 bytes */ SOUND_AREA;          // = ZoneProt(13, 10, "SOUND_AREA")
        static ZoneProt /* 64 bytes */ MAP_ANIM;            // = ZoneProt(14, 11, "MAP_ANIM")

        // data members, from how the methods use this: 24 bytes
        int field_0;   // offset 0
        int field_4;   // offset 4
        char* field_8; // offset 8
        char _unknown_16[8];
    };

    // 0x1039b5100, 176 bytes, __common; set at startup by ___cxx_global_var_init
    eastl::fixed_vector<ZoneProt_const*, 16ul, true, eastl::allocator> ZoneProt::m_typeLookup =
        fixed_vector<ZoneProt_const*, 16ul, true, eastl::allocator>();

    // 0x1039b51b0, 64 bytes, __common; set at startup by ___cxx_global_var_init.1
    ZoneProt ZoneProt::TEXT_COORD = ZoneProt(0, -1, "TEXT_COORD");

    // 0x1039b51f0, 64 bytes, __common; set at startup by ___cxx_global_var_init.2
    ZoneProt ZoneProt::LOC_DEL = ZoneProt(1, 2, "LOC_DEL");

    // 0x1039b5230, 64 bytes, __common; set at startup by ___cxx_global_var_init.4
    ZoneProt ZoneProt::MAP_PROJANIM_HALFSQ = ZoneProt(2, 21, "MAP_PROJANIM_HALFSQ");

    // 0x1039b5270, 64 bytes, __common; set at startup by ___cxx_global_var_init.6
    ZoneProt ZoneProt::SOUND_VORBIS_AREA = ZoneProt(3, 11, "SOUND_VORBIS_AREA");

    // 0x1039b52b0, 64 bytes, __common; set at startup by ___cxx_global_var_init.8
    ZoneProt ZoneProt::LOC_ANIM = ZoneProt(4, 7, "LOC_ANIM");

    // 0x1039b52f0, 64 bytes, __common; set at startup by ___cxx_global_var_init.10
    ZoneProt ZoneProt::LOC_PREFETCH = ZoneProt(5, 5, "LOC_PREFETCH");

    // 0x1039b5330, 64 bytes, __common; set at startup by ___cxx_global_var_init.12
    ZoneProt ZoneProt::OBJ_REVEAL = ZoneProt(6, 7, "OBJ_REVEAL");

    // 0x1039b5370, 64 bytes, __common; set at startup by ___cxx_global_var_init.14
    ZoneProt ZoneProt::LOC_ADD_CHANGE = ZoneProt(7, -1, "LOC_ADD_CHANGE");

    // 0x1039b53b0, 64 bytes, __common; set at startup by ___cxx_global_var_init.16
    ZoneProt ZoneProt::LOC_CUSTOMISE = ZoneProt(8, -1, "LOC_CUSTOMISE");

    // 0x1039b53f0, 64 bytes, __common; set at startup by ___cxx_global_var_init.18
    ZoneProt ZoneProt::OBJ_COUNT = ZoneProt(9, 7, "OBJ_COUNT");

    // 0x1039b5430, 64 bytes, __common; set at startup by ___cxx_global_var_init.20
    ZoneProt ZoneProt::OBJ_ADD = ZoneProt(10, 5, "OBJ_ADD");

    // 0x1039b5470, 64 bytes, __common; set at startup by ___cxx_global_var_init.22
    ZoneProt ZoneProt::MAP_PROJANIM = ZoneProt(11, 20, "MAP_PROJANIM");

    // 0x1039b54b0, 64 bytes, __common; set at startup by ___cxx_global_var_init.24
    ZoneProt ZoneProt::OBJ_DEL = ZoneProt(12, 3, "OBJ_DEL");

    // 0x1039b54f0, 64 bytes, __common; set at startup by ___cxx_global_var_init.26
    ZoneProt ZoneProt::SOUND_AREA = ZoneProt(13, 10, "SOUND_AREA");

    // 0x1039b5530, 64 bytes, __common; set at startup by ___cxx_global_var_init.28
    ZoneProt ZoneProt::MAP_ANIM = ZoneProt(14, 11, "MAP_ANIM");

    // 0x10049fb20, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // ZoneProt::ZoneProt(int, int, char const*): jumps straight to the base-object constructor

    // 0x10049fb30, 16 bytes, complete-object destructor, inline, placed by class name and debug map
    // ZoneProt::~ZoneProt(): jumps straight to the base-object destructor

    // 0x1004a0650, 144 bytes, base-object constructor, inline, placed by class name
    // ZoneProt::ZoneProt(int, int, char const*)
    void ZoneProt::ZoneProt(int param_1, int param_2, char* param_3) {
        int iVar1;
        ZoneProt* local_28;

        field_0 = param_1;
        field_4 = param_2;
        field_8 = param_3;
        std::function<PacketError_const&(PacketT<Array<unsigned char, BucketAllocatorEASTL>>&, int, Isaac*)>::function((
            function<PacketError_const&(PacketT<Array<unsigned char, BucketAllocatorEASTL>>&, int, Isaac*)>*)&field_16);
        iVar1 = m_typeLookup.size();
        if (iVar1 != param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("pType == (int)m_typeLookup.size()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/network/"
                      "protocol/ZoneProt.h",
                      37, "ZoneProt creation error");
        }
        local_28 = this;
        m_typeLookup.push_back(&local_28);
    }

    // 0x1004a09d0, 16 bytes, base-object destructor, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // ZoneProt::~ZoneProt()
    /* ServerProt::~ServerProt() */

    void ServerProt::~ServerProt() {
        std::function<PacketError_const&(PacketT<Array<unsigned char, BucketAllocatorEASTL>>&, int, Isaac*)>::~function(
            (function<PacketError_const&(PacketT<Array<unsigned char, BucketAllocatorEASTL>>&, int,
                                         Isaac*)>*)&field_16);
    }

    // 0x1004a1800, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init
    void ___cxx_global_var_init() {
        new (&ZoneProt::m_typeLookup) eastl::fixed_vector<ZoneProt_const*, 16ul, true, eastl::allocator>();
        ___cxa_atexit(PTR__fixed_vector_100ee6cc8, &ZoneProt::m_typeLookup, 4294967296);
    }

    // 0x1004a1840, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.1
    void ___cxx_global_var_init_1() {
        new (&ZoneProt::TEXT_COORD) ZoneProt(0, -1, "TEXT_COORD");
        ___cxa_atexit(PTR__ServerProt_100ee6998, &ZoneProt::TEXT_COORD, 4294967296);
    }

    // 0x1004a1880, 80 bytes, placed by the data it initialises
    // ___cxx_global_var_init.2
    void ___cxx_global_var_init_2() {
        new (&ZoneProt::LOC_DEL) ZoneProt(1, 2, "LOC_DEL");
        ___cxa_atexit(PTR__ServerProt_100ee6998, &ZoneProt::LOC_DEL, 4294967296);
    }

    // 0x1004a18d0, 80 bytes, placed by the data it initialises
    // ___cxx_global_var_init.4
    void ___cxx_global_var_init_4() {
        new (&ZoneProt::MAP_PROJANIM_HALFSQ) ZoneProt(2, 21, "MAP_PROJANIM_HALFSQ");
        ___cxa_atexit(PTR__ServerProt_100ee6998, &ZoneProt::MAP_PROJANIM_HALFSQ, 4294967296);
    }

    // 0x1004a1920, 80 bytes, placed by the data it initialises
    // ___cxx_global_var_init.6
    void ___cxx_global_var_init_6() {
        new (&ZoneProt::SOUND_VORBIS_AREA) ZoneProt(3, 11, "SOUND_VORBIS_AREA");
        ___cxa_atexit(PTR__ServerProt_100ee6998, &ZoneProt::SOUND_VORBIS_AREA, 4294967296);
    }

    // 0x1004a1970, 80 bytes, placed by the data it initialises
    // ___cxx_global_var_init.8
    void ___cxx_global_var_init_8() {
        new (&ZoneProt::LOC_ANIM) ZoneProt(4, 7, "LOC_ANIM");
        ___cxa_atexit(PTR__ServerProt_100ee6998, &ZoneProt::LOC_ANIM, 4294967296);
    }

    // 0x1004a19c0, 80 bytes, placed by the data it initialises
    // ___cxx_global_var_init.10
    void ___cxx_global_var_init_10() {
        new (&ZoneProt::LOC_PREFETCH) ZoneProt(5, 5, "LOC_PREFETCH");
        ___cxa_atexit(PTR__ServerProt_100ee6998, &ZoneProt::LOC_PREFETCH, 4294967296);
    }

    // 0x1004a1a10, 80 bytes, placed by the data it initialises
    // ___cxx_global_var_init.12
    void ___cxx_global_var_init_12() {
        new (&ZoneProt::OBJ_REVEAL) ZoneProt(6, 7, "OBJ_REVEAL");
        ___cxa_atexit(PTR__ServerProt_100ee6998, &ZoneProt::OBJ_REVEAL, 4294967296);
    }

    // 0x1004a1a60, 80 bytes, placed by the data it initialises
    // ___cxx_global_var_init.14
    void ___cxx_global_var_init_14() {
        new (&ZoneProt::LOC_ADD_CHANGE) ZoneProt(7, -1, "LOC_ADD_CHANGE");
        ___cxa_atexit(PTR__ServerProt_100ee6998, &ZoneProt::LOC_ADD_CHANGE, 4294967296);
    }

    // 0x1004a1ab0, 80 bytes, placed by the data it initialises
    // ___cxx_global_var_init.16
    void ___cxx_global_var_init_16() {
        new (&ZoneProt::LOC_CUSTOMISE) ZoneProt(8, -1, "LOC_CUSTOMISE");
        ___cxa_atexit(PTR__ServerProt_100ee6998, &ZoneProt::LOC_CUSTOMISE, 4294967296);
    }

    // 0x1004a1b00, 80 bytes, placed by the data it initialises
    // ___cxx_global_var_init.18
    void ___cxx_global_var_init_18() {
        new (&ZoneProt::OBJ_COUNT) ZoneProt(9, 7, "OBJ_COUNT");
        ___cxa_atexit(PTR__ServerProt_100ee6998, &ZoneProt::OBJ_COUNT, 4294967296);
    }

    // 0x1004a1b50, 80 bytes, placed by the data it initialises
    // ___cxx_global_var_init.20
    void ___cxx_global_var_init_20() {
        new (&ZoneProt::OBJ_ADD) ZoneProt(10, 5, "OBJ_ADD");
        ___cxa_atexit(PTR__ServerProt_100ee6998, &ZoneProt::OBJ_ADD, 4294967296);
    }

    // 0x1004a1ba0, 80 bytes, placed by the data it initialises
    // ___cxx_global_var_init.22
    void ___cxx_global_var_init_22() {
        new (&ZoneProt::MAP_PROJANIM) ZoneProt(11, 20, "MAP_PROJANIM");
        ___cxa_atexit(PTR__ServerProt_100ee6998, &ZoneProt::MAP_PROJANIM, 4294967296);
    }

    // 0x1004a1bf0, 80 bytes, placed by the data it initialises
    // ___cxx_global_var_init.24
    void ___cxx_global_var_init_24() {
        new (&ZoneProt::OBJ_DEL) ZoneProt(12, 3, "OBJ_DEL");
        ___cxa_atexit(PTR__ServerProt_100ee6998, &ZoneProt::OBJ_DEL, 4294967296);
    }

    // 0x1004a1c40, 80 bytes, placed by the data it initialises
    // ___cxx_global_var_init.26
    void ___cxx_global_var_init_26() {
        new (&ZoneProt::SOUND_AREA) ZoneProt(13, 10, "SOUND_AREA");
        ___cxa_atexit(PTR__ServerProt_100ee6998, &ZoneProt::SOUND_AREA, 4294967296);
    }

    // 0x1004a1c90, 80 bytes, placed by the data it initialises
    // ___cxx_global_var_init.28
    void ___cxx_global_var_init_28() {
        new (&ZoneProt::MAP_ANIM) ZoneProt(14, 11, "MAP_ANIM");
        ___cxa_atexit(PTR__ServerProt_100ee6998, &ZoneProt::MAP_ANIM, 4294967296);
    }

} // namespace jag
