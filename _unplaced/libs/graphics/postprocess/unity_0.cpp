// _unplaced/libs/graphics/postprocess/unity_0.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

namespace jag::postprocess {
    // 0x100d4fc8c, 8 bytes, __const
    g_kawaseKernel7x7 = 0;

    // 0x100d4fc94, 12 bytes, __const
    g_kawaseKernel15x15 = {0, 1.0f, 1.0f};

    // 0x100d4fca0, 16 bytes, __const
    g_kawaseKernel23x23 = {0, 1.0f, 1.0f, 2.0f};

    // 0x100d4fcb0, 20 bytes, __const
    g_kawaseKernel35x35 = {0, 1.0f, 2.0f, 2.0f, 3.0f};

    // 0x100d4fcc4, 28 bytes, __const
    g_kawaseKernel63x63 = {0, 1.0f, 2.0f, 3.0f, 4.0f, 4.0f, 5.0f};

    // 0x100d4fce0, 40 bytes, __const
    g_kawaseKernel127x127 = {
        0, 1.0f, 2.0f, 3.0f, 4.0f, 5.0f, 7.0f, 8.0f, 9.0f, 10.0f,
    };

    // 0x100d4fd10, 4 bytes, __const
    DEF_MIN_BLACK_LUM = 0;

    // 0x100d4fd14, 4 bytes, __const
    float DEF_MAX_WHITE_LUM = 5.25f;

    // 0x100d4fd18, 4 bytes, __const
    float DEF_EXPOSURE_KEY = 2.75f;

    // 0x100d4fd1c, 4 bytes, __const
    DEF_MIN_AUTO_EXPOSURE = 0;

    // 0x100d4fd20, 4 bytes, __const
    float DEF_MAX_AUTO_EXPOSURE = 5.0f;

    // 0x100d4fd24, 380 bytes, __const
    DEF_EXPOSURE_SPEED_MUL = {
        1056964608,  3,         0,          4,           0,          5,           0,           7,           0,
        10,          0,         1053038739, 1064078148,  1060437492, -1094444909, -1087046156, -1083405500, 2,
        131073,      196609,    262149,     327686,      458758,     65539,       196613,      458757,      262150,
        393216,      131072,    1,          65540,       327684,     131078,      393219,      458755,      131072,
        65537,       196610,    327684,     393222,      458757,     196609,      327685,      458755,      393220,
        0,           131078,    65536,      262148,      327681,     393218,      196611,      458758,      65536,
        196609,      131075,    2,          327681,      262144,     458755,      393218,      327684,      458757,
        393223,      262150,    1016003125, 1157627904,  1137180672, 1006834287,  -1149206399, 973111425,   1171048448,
        -1001914368, 987395086, 1075838976, -1071644672, 1,          2,           0,           1092616192,  1119092736,
        981668463,   0,         30,         -1,          -1,         0,           0,           1051721728,  -755914244,
        1062232653,  0,         1138753536, -400107883,  1041313291,
    };

} // namespace jag::postprocess
