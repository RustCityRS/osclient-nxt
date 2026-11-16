// libs/graphics/runetek7/constants/AlphaMode.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

namespace jag::graphics {
    class AlphaMode {
    public:
        AlphaMode(unsigned int, char const*);
        void GetByID(unsigned int);
        static AlphaMode const* /* 8 bytes */ ALPHA_OPAQUE;  // = &enumArray
        static AlphaMode const* /* 8 bytes */ ALPHA_TESTED;  // = &enumArray[1] /* AlphaMode(1, "alpha tested") */
        static AlphaMode const* /* 8 bytes */ ALPHA_BLENDED; // = &enumArray[2] /* AlphaMode(2, "alpha blended") */
        static AlphaMode /* 48 bytes */ enumArray[3];        // initialised in its definition
    };

    // 0x100f445f0, 8 bytes, __data
    AlphaMode const* AlphaMode::ALPHA_OPAQUE = &enumArray;

    // 0x100f445f8, 8 bytes, __data
    AlphaMode const* AlphaMode::ALPHA_TESTED = &enumArray[1] /* AlphaMode(1, "alpha tested") */;

    // 0x100f44600, 8 bytes, __data
    AlphaMode const* AlphaMode::ALPHA_BLENDED = &enumArray[2] /* AlphaMode(2, "alpha blended") */;

    // 0x103bc0630, 48 bytes, __common; constructor folded by the linker, Ghidra calls it game::VarLifetime::VarLifetime; set at startup by ___cxx_global_var_init
    AlphaMode AlphaMode::enumArray[3] = {
        /* [0] */ AlphaMode(0, "opaque"),
        /* [1] */ AlphaMode(1, "alpha tested"),
        /* [2] */ AlphaMode(2, "alpha blended"),
    };

    // 0x1004a1f80: the linker folded this into MoveSpeed::MoveSpeed(int, char const*), which has identical code
    AlphaMode::AlphaMode(unsigned int, char const*);

    // 0x1004a2ca0: the linker folded this into MoveSpeed::MoveSpeed(int, char const*), which has identical code
    AlphaMode::AlphaMode(unsigned int, char const*);

    // 0x10092a620, 64 bytes, placed by class name and debug map
    // AlphaMode::GetByID(unsigned int)
    void AlphaMode::GetByID(uint param_1) {
        if (2 < param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("id >= 0 && id < AlphaMode::ENUM_SIZE",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "constants/AlphaMode.cpp",
                      34, "AlphaMode: Invalid AlphaMode ID requested");
        }
        std::array<AlphaMode, 3ul>::operator[]((ulong)param_1);
    }

    // 0x10094cc40, 80 bytes, placed by the data it initialises
    // ___cxx_global_var_init
    void ___cxx_global_var_init() {
        new (&AlphaMode::enumArray) game::VarLifetime(0, "opaque");
        new (&DAT_103bc0640) game::VarLifetime(1, "alpha tested");
        new (&DAT_103bc0650) game::VarLifetime(2, "alpha blended");
    }

} // namespace jag::graphics
