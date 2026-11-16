// libs/game/runetek5/config/vartype/constants/VarTransmitLevel.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.game.runetek5

namespace jag::game {
    class VarTransmitLevel {
    public:
        VarTransmitLevel(unsigned int, char const*);
        void GetByID(unsigned int);
        static VarTransmitLevel const* /* 8 bytes */ NEVER;  // = &enumArray
        static VarTransmitLevel const*                       /* 8 bytes */
            ON_SET_DIFFERENT;                                // = &enumArray[1] /* VarTransmitLevel(1, "onsetdiff") */
        static VarTransmitLevel const*                       /* 8 bytes */
            ON_SET_ALWAYS;                                   // = &enumArray[2] /* VarTransmitLevel(2, "onsetalways") */
        static VarTransmitLevel /* 48 bytes */ enumArray[3]; // initialised in its definition
    };

    // 0x100f3c138, 8 bytes, __data
    VarTransmitLevel const* VarTransmitLevel::NEVER = &enumArray;

    // 0x100f3c140, 8 bytes, __data
    VarTransmitLevel const* VarTransmitLevel::ON_SET_DIFFERENT = &enumArray[1] /* VarTransmitLevel(1, "onsetdiff") */;

    // 0x100f3c148, 8 bytes, __data
    VarTransmitLevel const* VarTransmitLevel::ON_SET_ALWAYS = &enumArray[2] /* VarTransmitLevel(2, "onsetalways") */;

    // 0x1039bb7a0, 48 bytes, __common; constructor folded by the linker, Ghidra calls it VarLifetime::VarLifetime; set at startup by ___cxx_global_var_init.14
    VarTransmitLevel VarTransmitLevel::enumArray[3] = {
        /* [0] */ VarTransmitLevel(0, "never"),
        /* [1] */ VarTransmitLevel(1, "onsetdiff"),
        /* [2] */ VarTransmitLevel(2, "onsetalways"),
    };

    // 0x1004a1f80: the linker folded this into MoveSpeed::MoveSpeed(int, char const*), which has identical code
    VarTransmitLevel::VarTransmitLevel(unsigned int, char const*);

    // 0x1004a2ca0: the linker folded this into MoveSpeed::MoveSpeed(int, char const*), which has identical code
    VarTransmitLevel::VarTransmitLevel(unsigned int, char const*);

    // 0x1004c6040, 64 bytes, placed by class name and debug map
    // VarTransmitLevel::GetByID(unsigned int)
    void VarTransmitLevel::GetByID(uint param_1) {
        if (2 < param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("id>=0 && id <VarTransmitLevel::ENUM_SIZE",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                      "vartype/constants/VarTransmitLevel.cpp",
                      32, "VarTransmitLevel: Invalid VarTransmitLevel ID requested");
        }
        std::array<VarTransmitLevel, 3ul>::operator[]((ulong)param_1);
    }

    // 0x1004cd1a0, 80 bytes, placed by the data it initialises
    // ___cxx_global_var_init.14
    void ___cxx_global_var_init_14() {
        new (&VarTransmitLevel::enumArray) VarLifetime(0, "never");
        new (&DAT_1039bb7b0) VarLifetime(1, "onsetdiff");
        new (&DAT_1039bb7c0) VarLifetime(2, "onsetalways");
    }

} // namespace jag::game
