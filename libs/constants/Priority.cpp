// libs/constants/Priority.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.constants

namespace jag {
    class Priority {
    public:
        Priority(unsigned int, char const*);
        void GetByID(unsigned int);
        static Priority const* /* 8 bytes */ HIGHEST; // = &enumArray
        static Priority const* /* 8 bytes */ HIGH;    // = &enumArray[1] /* Priority(1, "high") */
        static Priority const* /* 8 bytes */ LOW;     // = &enumArray[2] /* Priority(2, "low") */
        static Priority const* /* 8 bytes */ NONE;    // = &enumArray[3] /* Priority(3, "none") */
        static Priority /* 64 bytes */ enumArray[4];  // initialised in its definition
    };

    // 0x100f48290, 8 bytes, __data
    Priority const* Priority::HIGHEST = &enumArray;

    // 0x100f48298, 8 bytes, __data
    Priority const* Priority::HIGH = &enumArray[1] /* Priority(1, "high") */;

    // 0x100f482a0, 8 bytes, __data
    Priority const* Priority::LOW = &enumArray[2] /* Priority(2, "low") */;

    // 0x100f482a8, 8 bytes, __data
    Priority const* Priority::NONE = &enumArray[3] /* Priority(3, "none") */;

    // 0x103bc25c8, 64 bytes, __common; constructor folded by the linker, Ghidra calls it game::VarLifetime::VarLifetime; set at startup by ___cxx_global_var_init.67
    Priority Priority::enumArray[4] = {
        /* [0] */ Priority(0, "highest"),
        /* [1] */ Priority(1, "high"),
        /* [2] */ Priority(2, "low"),
        /* [3] */ Priority(3, "none"),
    };

    // 0x1004a1f80: the linker folded this into MoveSpeed::MoveSpeed(int, char const*), which has identical code
    Priority::Priority(unsigned int, char const*);

    // 0x1004a2ca0: the linker folded this into MoveSpeed::MoveSpeed(int, char const*), which has identical code
    Priority::Priority(unsigned int, char const*);

    // 0x100b89560, 64 bytes, placed by class name and debug map
    // Priority::GetByID(unsigned int)
    void Priority::GetByID(uint param_1) {
        if (3 < param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("id>=0 && id <Priority::ENUM_SIZE",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/constants/Priority.cpp",
                      33, "Priority: Invalid Priority ID requested");
        }
        std::array<Priority, 4ul>::operator[]((ulong)param_1);
    }

    // 0x100b89f10, 112 bytes, placed by the data it initialises
    // ___cxx_global_var_init.67
    void ___cxx_global_var_init_67() {
        new (&Priority::enumArray) game::VarLifetime(0, "highest");
        new (&DAT_103bc25d8) game::VarLifetime(1, "high");
        new (&DAT_103bc25e8) game::VarLifetime(2, "low");
        new (&DAT_103bc25f8) game::VarLifetime(3, "none");
    }

} // namespace jag
