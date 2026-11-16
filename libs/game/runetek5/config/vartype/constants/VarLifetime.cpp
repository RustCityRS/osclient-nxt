// libs/game/runetek5/config/vartype/constants/VarLifetime.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.game.runetek5

namespace jag::game {
    class VarLifetime {
    public:
        VarLifetime(unsigned int, char const*);
        void GetByID(unsigned int);
        static VarLifetime const* /* 8 bytes */ TEMPORARY; // = &enumArray
        static VarLifetime const* /* 8 bytes */ PERMANENT; // = &enumArray[1] /* VarLifetime(1, "permanent") */
        static VarLifetime const*                          /* 8 bytes */
            SERVERPERMANENT;                               // = &enumArray[2] /* VarLifetime(2, "serverpermanent") */
        static VarLifetime /* 48 bytes */ enumArray[3];    // initialised in its definition

        // data members, from how the methods use this: 16 bytes
        EntityHighlight** field_0; // offset 0
        uint field_8;              // offset 8
        char _unknown_12[4];
    };

    // 0x100f3c120, 8 bytes, __data
    VarLifetime const* VarLifetime::TEMPORARY = &enumArray;

    // 0x100f3c128, 8 bytes, __data
    VarLifetime const* VarLifetime::PERMANENT = &enumArray[1] /* VarLifetime(1, "permanent") */;

    // 0x100f3c130, 8 bytes, __data
    VarLifetime const* VarLifetime::SERVERPERMANENT = &enumArray[2] /* VarLifetime(2, "serverpermanent") */;

    // 0x1039bb770, 48 bytes, __common; set at startup by ___cxx_global_var_init.7
    VarLifetime VarLifetime::enumArray[3] = {
        /* [0] */ VarLifetime(0, "temporary"),
        /* [1] */ VarLifetime(1, "permanent"),
        /* [2] */ VarLifetime(2, "serverpermanent"),
    };

    // 0x1004a1f80: the linker folded this into MoveSpeed::MoveSpeed(int, char const*), which has identical code
    VarLifetime::VarLifetime(unsigned int, char const*);

    // 0x1004a2ca0: the linker folded this into MoveSpeed::MoveSpeed(int, char const*), which has identical code
    VarLifetime::VarLifetime(unsigned int, char const*);

    // 0x1004c5fe0, 64 bytes, placed by class name and debug map
    // VarLifetime::GetByID(unsigned int)
    void VarLifetime::GetByID(uint param_1) {
        if (2 < param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("id>=0 && id <VarLifetime::ENUM_SIZE",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                      "vartype/constants/VarLifetime.cpp",
                      32, "VarLifetime: Invalid VarLifetime ID requested");
        }
        std::array<VarLifetime, 3ul>::operator[]((ulong)param_1);
    }

    // 0x1004cd150, 80 bytes, placed by the data it initialises
    // ___cxx_global_var_init.7
    void ___cxx_global_var_init_7() {
        new (&VarLifetime::enumArray) VarLifetime(0, "temporary");
        new (&DAT_1039bb780) VarLifetime(1, "permanent");
        new (&DAT_1039bb790) VarLifetime(2, "serverpermanent");
    }

} // namespace jag::game
