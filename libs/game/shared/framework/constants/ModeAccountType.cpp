// libs/game/shared/framework/constants/ModeAccountType.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.game.shared

namespace jag {
    class ModeAccountType {
    public:
        ModeAccountType(unsigned int, char const*);
        void GetByID(unsigned int);
        static ModeAccountType const* /* 8 bytes */ FREE;    // = &enumArray
        static ModeAccountType const* /* 8 bytes */ MEMBERS; // = &enumArray[1] /* ModeAccountType(1, "members") */
        static ModeAccountType /* 32 bytes */ enumArray[2];  // initialised in its definition
    };

    // 0x100f3f128, 8 bytes, __data
    ModeAccountType const* ModeAccountType::FREE = &enumArray;

    // 0x100f3f130, 8 bytes, __data
    ModeAccountType const* ModeAccountType::MEMBERS = &enumArray[1] /* ModeAccountType(1, "members") */;

    // 0x1039bd070, 32 bytes, __common; constructor folded by the linker, Ghidra calls it game::VarLifetime::VarLifetime; set at startup by ___cxx_global_var_init.105
    ModeAccountType ModeAccountType::enumArray[2] = {
        /* [0] */ ModeAccountType(0, "free"),
        /* [1] */ ModeAccountType(1, "members"),
    };

    // 0x1004a1f80: the linker folded this into MoveSpeed::MoveSpeed(int, char const*), which has identical code
    ModeAccountType::ModeAccountType(unsigned int, char const*);

    // 0x1004a2ca0: the linker folded this into MoveSpeed::MoveSpeed(int, char const*), which has identical code
    ModeAccountType::ModeAccountType(unsigned int, char const*);

    // 0x1006e1850, 64 bytes, placed by class name and debug map
    // ModeAccountType::GetByID(unsigned int)
    void ModeAccountType::GetByID(uint param_1) {
        if (1 < param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("id>=0 && id <ModeAccountType::ENUM_SIZE",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/shared/framework/"
                      "constants/ModeAccountType.cpp",
                      27, "ModeAccountType: Invalid ModeAccountType ID requested");
        }
        std::array<ModeAccountType, 2ul>::operator[]((ulong)param_1);
    }

    // 0x10071ff10, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.105
    void ___cxx_global_var_init_105() {
        new (&ModeAccountType::enumArray) game::VarLifetime(0, "free");
        new (&DAT_1039bd080) game::VarLifetime(1, "members");
    }

} // namespace jag
