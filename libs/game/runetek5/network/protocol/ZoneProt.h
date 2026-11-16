// libs/game/runetek5/network/protocol/ZoneProt.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.game.runetek5

namespace jag {
    class ZoneProt {
    public:
        ZoneProt(int arg1, int arg2, const char* str);
        ~ZoneProt();
        static eastl::fixed_vector<ZoneProt const*, 16ul> m_typeLookup; // = fixed_vector<ZoneProt const*, 16ul>()
        static ZoneProt TEXT_COORD;                                     // = ZoneProt(0, -1, "TEXT_COORD")
        static ZoneProt LOC_DEL;                                        // = ZoneProt(1, 2, "LOC_DEL")
        static ZoneProt MAP_PROJANIM_HALFSQ;                            // = ZoneProt(2, 21, "MAP_PROJANIM_HALFSQ")
        static ZoneProt SOUND_VORBIS_AREA;                              // = ZoneProt(3, 11, "SOUND_VORBIS_AREA")
        static ZoneProt LOC_ANIM;                                       // = ZoneProt(4, 7, "LOC_ANIM")
        static ZoneProt LOC_PREFETCH;                                   // = ZoneProt(5, 5, "LOC_PREFETCH")
        static ZoneProt OBJ_REVEAL;                                     // = ZoneProt(6, 7, "OBJ_REVEAL")
        static ZoneProt LOC_ADD_CHANGE;                                 // = ZoneProt(7, -1, "LOC_ADD_CHANGE")
        static ZoneProt LOC_CUSTOMISE;                                  // = ZoneProt(8, -1, "LOC_CUSTOMISE")
        static ZoneProt OBJ_COUNT;                                      // = ZoneProt(9, 7, "OBJ_COUNT")
        static ZoneProt OBJ_ADD;                                        // = ZoneProt(10, 5, "OBJ_ADD")
        static ZoneProt MAP_PROJANIM;                                   // = ZoneProt(11, 20, "MAP_PROJANIM")
        static ZoneProt OBJ_DEL;                                        // = ZoneProt(12, 3, "OBJ_DEL")
        static ZoneProt SOUND_AREA;                                     // = ZoneProt(13, 10, "SOUND_AREA")
        static ZoneProt MAP_ANIM;                                       // = ZoneProt(14, 11, "MAP_ANIM")

    private:
        int field_0;
        int field_4;
        char* field_8;
        uint8_t _unknown_16[8];
    };

    // 0x1039b5100, set at startup by ___cxx_global_var_init
    eastl::fixed_vector<ZoneProt const*, 16ul> ZoneProt::m_typeLookup = fixed_vector<ZoneProt const*, 16ul>();

    // 0x1039b51b0, set at startup by ___cxx_global_var_init.1
    ZoneProt ZoneProt::TEXT_COORD = ZoneProt(0, -1, "TEXT_COORD");

    // 0x1039b51f0, set at startup by ___cxx_global_var_init.2
    ZoneProt ZoneProt::LOC_DEL = ZoneProt(1, 2, "LOC_DEL");

    // 0x1039b5230, set at startup by ___cxx_global_var_init.4
    ZoneProt ZoneProt::MAP_PROJANIM_HALFSQ = ZoneProt(2, 21, "MAP_PROJANIM_HALFSQ");

    // 0x1039b5270, set at startup by ___cxx_global_var_init.6
    ZoneProt ZoneProt::SOUND_VORBIS_AREA = ZoneProt(3, 11, "SOUND_VORBIS_AREA");

    // 0x1039b52b0, set at startup by ___cxx_global_var_init.8
    ZoneProt ZoneProt::LOC_ANIM = ZoneProt(4, 7, "LOC_ANIM");

    // 0x1039b52f0, set at startup by ___cxx_global_var_init.10
    ZoneProt ZoneProt::LOC_PREFETCH = ZoneProt(5, 5, "LOC_PREFETCH");

    // 0x1039b5330, set at startup by ___cxx_global_var_init.12
    ZoneProt ZoneProt::OBJ_REVEAL = ZoneProt(6, 7, "OBJ_REVEAL");

    // 0x1039b5370, set at startup by ___cxx_global_var_init.14
    ZoneProt ZoneProt::LOC_ADD_CHANGE = ZoneProt(7, -1, "LOC_ADD_CHANGE");

    // 0x1039b53b0, set at startup by ___cxx_global_var_init.16
    ZoneProt ZoneProt::LOC_CUSTOMISE = ZoneProt(8, -1, "LOC_CUSTOMISE");

    // 0x1039b53f0, set at startup by ___cxx_global_var_init.18
    ZoneProt ZoneProt::OBJ_COUNT = ZoneProt(9, 7, "OBJ_COUNT");

    // 0x1039b5430, set at startup by ___cxx_global_var_init.20
    ZoneProt ZoneProt::OBJ_ADD = ZoneProt(10, 5, "OBJ_ADD");

    // 0x1039b5470, set at startup by ___cxx_global_var_init.22
    ZoneProt ZoneProt::MAP_PROJANIM = ZoneProt(11, 20, "MAP_PROJANIM");

    // 0x1039b54b0, set at startup by ___cxx_global_var_init.24
    ZoneProt ZoneProt::OBJ_DEL = ZoneProt(12, 3, "OBJ_DEL");

    // 0x1039b54f0, set at startup by ___cxx_global_var_init.26
    ZoneProt ZoneProt::SOUND_AREA = ZoneProt(13, 10, "SOUND_AREA");

    // 0x1039b5530, set at startup by ___cxx_global_var_init.28
    ZoneProt ZoneProt::MAP_ANIM = ZoneProt(14, 11, "MAP_ANIM");

    // 0x1004a0650
    ZoneProt::ZoneProt(int arg1, int arg2, const char* str) : field_0(arg1), field_4(arg2), field_8(str) {
        if (m_typeLookup.size() != arg1) {
            LogAssert("pType == (int)m_typeLookup.size()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/network/"
                      "protocol/ZoneProt.h",
                      37, "ZoneProt creation error");
        }
        m_typeLookup.push_back(this);
    }

    // 0x1004a09d0
    ZoneProt::~ZoneProt() {
        field_16.~function();
    }

} // namespace jag
