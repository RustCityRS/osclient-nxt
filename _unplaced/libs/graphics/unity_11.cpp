// _unplaced/libs/graphics/unity_11.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

namespace jag::graphics {
    // 0x100d4aa5a, 406 bytes, __const
    g_vertexTextureWeights = {
        1,   0,  0,   0,   1,   0,   0,   0,   1,   0,   1,   2,   6,   7,   79,  98,  101, 24,  29,  30,  31,  32,
        33,  34, 37,  106, 48,  107, 108, 51,  30,  57,  89,  68,  50,  69,  2,   0,   0,   0,   1,   0,   2,   0,
        1,   0,  3,   0,   5,   0,   4,   0,   6,   0,   5,   0,   6,   0,   7,   0,   3,   0,   1,   0,   5,   0,
        3,   0,  5,   0,   7,   0,   6,   0,   4,   0,   0,   0,   6,   0,   0,   0,   2,   0,   1,   0,   0,   0,
        4,   0,  1,   0,   4,   0,   5,   0,   6,   0,   2,   0,   3,   0,   6,   0,   3,   0,   7,   0,   0,   0,
        2,   0,  1,   0,   1,   0,   2,   0,   3,   0,   4,   0,   5,   0,   6,   0,   6,   0,   5,   0,   7,   0,
        1,   0,  3,   0,   5,   0,   5,   0,   3,   0,   7,   0,   4,   0,   6,   0,   0,   0,   0,   0,   6,   0,
        2,   0,  0,   0,   1,   0,   4,   0,   4,   0,   1,   0,   5,   0,   2,   0,   6,   0,   3,   0,   3,   0,
        6,   0,  7,   0,   0,   0,   10,  215, 163, 188, 149, 191, 214, 51,  0,   0,   72,  194, 0,   254, 255, 198,
        0,   0,  72,  63,  0,   0,   72,  57,  23,  183, 81,  57,  10,  215, 35,  56,  10,  215, 35,  52,  0,   255,
        127, 71, 210, 83,  251, 65,  240, 35,  116, 201, 0,   0,   240, 64,  0,   64,  156, 71,  0,   0,   128, 47,
        0,   0,  0,   0,   95,  0,   0,   0,   95,  0,   0,   0,   95,  0,   0,   0,   95,  0,   0,   0,   53,  0,
        0,   0,  53,  0,   0,   0,   53,  0,   0,   0,   53,  0,   0,   0,   0,   8,   0,   0,   0,   8,   0,   0,
        16,  0,  0,   0,   0,   0,   0,   0,   0,   0,   128, 0,   0,   0,   128, 0,   0,   0,   0,   0,   0,   0,
        0,   0,  0,   0,   0,   0,   0,   0,   128, 0,   0,   0,   128, 0,   255, 255, 255, 255, 0,   0,   128, 63,
        0,   0,  128, 64,  0,   80,  195, 70,  0,   184, 136, 70,  59,  79,  106, 54,  29,  30,  31,  32,  33,  34,
        48,  57, 64,  103, 7,   108, 50,  69,  68,  61,  59,  79,  29,  30,  31,  32,  33,  34,  106, 54,  48,  57,
        7,   87, 69,  68,  61,  0,   0,   0,   64,  0,   0,   0,   32,  0,   0,   0,   16,  0,   0,   0,   16,  0,
        0,   0,  16,  0,   0,   0,   48,  0,   0,   0,
    };

    // 0x100f4e0f8, 24 bytes, __thread_vars
    PLAIN_SHAPE = {0, 0, 0, 0, 32, 0};

    // 0x100f4e110, 24 bytes, __thread_vars
    DIAGONAL_SHAPE = {0, 0, 0, 0, 80, 0};

    // 0x100f4e128, 24 bytes, __thread_vars
    LEFT_SEMI_DIAGONAL_SMALL_SHAPE = {0, 0, 0, 0, 128, 0};

    // 0x100f4e140, 24 bytes, __thread_vars
    RIGHT_SEMI_DIAGONAL_SMALL_SHAPE = {0, 0, 0, 0, 232, 0};

    // 0x100f4e158, 24 bytes, __thread_vars
    LEFT_SEMI_DIAGONAL_BIG_SHAPE = {0, 0, 0, 0, 336, 0};

    // 0x100f4e170, 24 bytes, __thread_vars
    RIGHT_SEMI_DIAGONAL_BIG_SHAPE = {0, 0, 0, 0, 440, 0};

    // 0x100f4e188, 24 bytes, __thread_vars
    HALF_SQUARE_SHAPE = {0, 0, 0, 0, 544, 0};

    // 0x100f4e1a0, 24 bytes, __thread_vars
    CORNER_SMALL_SHAPE = {0, 0, 0, 0, 592, 0};

    // 0x100f4e1b8, 24 bytes, __thread_vars
    CORNER_BIG_SHAPE = {0, 0, 0, 0, 648, 0};

    // 0x100f4e1d0, 24 bytes, __thread_vars
    FAN_SMALL_SHAPE = {0, 0, 0, 0, 704, 0};

    // 0x100f4e1e8, 24 bytes, __thread_vars
    FAN_BIG_SHAPE = {0, 0, 0, 0, 808, 0};

    // 0x100f4e200, 24 bytes, __thread_vars
    TRAPEZIUM_SHAPE = {0, 0, 0, 0, 912, 0};

    // 0x1042324a0, 64 bytes, __bss; zero-initialised
    MAYA_ANIM_INVERT_MATRIX;

    // 0x1042324e0, 16 bytes, __bss; zero-initialised
    WORLD_ORTHOGONAL;

    // 0x1007c8e70, 96 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init
    void ___cxx_global_var_init() {
        undefined1 local_50[40];
        Vector3T<int> local_28[16];

        math::Matrix33Scaling<float>((math*)local_50, 1.0, 1.0, -1.0);
        math::Vector3T<int>::Vector3T(local_28);
        new (&MAYA_ANIM_INVERT_MATRIX) math::Matrix44T<float>(local_50, local_28);
    }

    // 0x1007c8ed0, 32 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.1
    void ___cxx_global_var_init_1() {
        new (&WORLD_ORTHOGONAL) math::ColourHSL(-1.5707964, -1.5707964, 0.0);
    }

} // namespace jag::graphics

// 0x100f4e218, 24 bytes, __thread_vars
___tls_guard = {0, 0, 0, 0, 1016, 0};

// 0x100f4e568, 8 bytes, __thread_bss; zero-initialised
__ZN3jag8graphics15particlemodules6Module11g_moduleRngE$tlv$init;

// 0x100f4e570, 8 bytes, __thread_bss; zero-initialised
__ZGVN3jag8graphics15particlemodules6Module11g_moduleRngE$tlv$init;

// 0x100f4e578, 48 bytes, __thread_bss; zero-initialised
__ZN3jag8graphics11PLAIN_SHAPEE$tlv$init;

// 0x100f4e5a8, 48 bytes, __thread_bss; zero-initialised
__ZN3jag8graphics14DIAGONAL_SHAPEE$tlv$init;

// 0x100f4e5d8, 104 bytes, __thread_bss; zero-initialised
__ZN3jag8graphics30LEFT_SEMI_DIAGONAL_SMALL_SHAPEE$tlv$init;

// 0x100f4e640, 104 bytes, __thread_bss; zero-initialised
__ZN3jag8graphics31RIGHT_SEMI_DIAGONAL_SMALL_SHAPEE$tlv$init;

// 0x100f4e6a8, 104 bytes, __thread_bss; zero-initialised
__ZN3jag8graphics28LEFT_SEMI_DIAGONAL_BIG_SHAPEE$tlv$init;

// 0x100f4e710, 104 bytes, __thread_bss; zero-initialised
__ZN3jag8graphics29RIGHT_SEMI_DIAGONAL_BIG_SHAPEE$tlv$init;

// 0x100f4e778, 48 bytes, __thread_bss; zero-initialised
__ZN3jag8graphics17HALF_SQUARE_SHAPEE$tlv$init;

// 0x100f4e7a8, 56 bytes, __thread_bss; zero-initialised
__ZN3jag8graphics18CORNER_SMALL_SHAPEE$tlv$init;

// 0x100f4e7e0, 56 bytes, __thread_bss; zero-initialised
__ZN3jag8graphics16CORNER_BIG_SHAPEE$tlv$init;

// 0x100f4e818, 104 bytes, __thread_bss; zero-initialised
__ZN3jag8graphics15FAN_SMALL_SHAPEE$tlv$init;

// 0x100f4e880, 104 bytes, __thread_bss; zero-initialised
__ZN3jag8graphics13FAN_BIG_SHAPEE$tlv$init;

// 0x100f4e8e8, 104 bytes, __thread_bss; zero-initialised
__ZN3jag8graphics15TRAPEZIUM_SHAPEE$tlv$init;

// 0x100f4e950, 8 bytes, __thread_bss; zero-initialised
___tls_guard$tlv$init;
