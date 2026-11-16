// libs/constants/ModeWhere.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.constants

#include "ModeWhere.h"

namespace jag {
    // 0x100f481e8, 8 bytes, __data
    ModeWhere const* ModeWhere::LIVE = &enumArray;

    // 0x100f481f0, 8 bytes, __data
    ModeWhere const* ModeWhere::WTWIP = &enumArray[3] /* ModeWhere(3, "WTWIP") */;

    // 0x100f48260, 8 bytes, __data
    ModeWhere const* ModeWhere::WTRC = &enumArray[1] /* ModeWhere(1, "WTRC") */;

    // 0x100f48268, 8 bytes, __data
    ModeWhere const* ModeWhere::WTQA = &enumArray[2] /* ModeWhere(2, "WTQA") */;

    // 0x100f48270, 8 bytes, __data
    ModeWhere const* ModeWhere::LOCAL = &enumArray[4] /* ModeWhere(4, "LOCAL") */;

    // 0x100f48278, 8 bytes, __data
    ModeWhere const* ModeWhere::WTI = &enumArray[5] /* ModeWhere(5, "WTI") */;

    // 0x100f48280, 8 bytes, __data
    ModeWhere const* ModeWhere::INTBETA = &enumArray[6] /* ModeWhere(6, "INTBETA") */;

    // 0x100f48288, 8 bytes, __data
    ModeWhere const* ModeWhere::DEMO = &enumArray[10] /* ModeWhere(10, "DEMO") */;

    // 0x103bc2518, 176 bytes, __common; constructor folded by the linker, Ghidra calls it game::VarLifetime::VarLifetime; set at startup by ___cxx_global_var_init.55
    ModeWhere ModeWhere::enumArray[11] = {
        /* [0] */ ModeWhere(0, "LIVE"),
        /* [1] */ ModeWhere(1, "WTRC"),
        /* [2] */ ModeWhere(2, "WTQA"),
        /* [3] */ ModeWhere(3, "WTWIP"),
        /* [4] */ ModeWhere(4, "LOCAL"),
        /* [5] */ ModeWhere(5, "WTI"),
        /* [6] */ ModeWhere(6, "INTBETA"),
        /* [7] */ ModeWhere(),
        /* [8] */ ModeWhere(),
        /* [9] */ ModeWhere(),
        /* [10] */ ModeWhere(10, "DEMO"),
    };

    // 0x1004a1f80: the linker folded this into MoveSpeed::MoveSpeed(int, char const*), which has identical code
    ModeWhere::ModeWhere(unsigned int, char const*);

    // 0x1004a2ca0: the linker folded this into MoveSpeed::MoveSpeed(int, char const*), which has identical code
    ModeWhere::ModeWhere(unsigned int, char const*);

    // 0x100b89500, 64 bytes, placed by class name and debug map
    // ModeWhere::GetByID(unsigned int)
    void ModeWhere::GetByID(uint param_1) {
        if (10 < param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("id>=0 && id <ModeWhere::ENUM_SIZE",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/constants/ModeWhere.cpp",
                      48, "ModeWhere: Invalid ModeWhere ID requested");
        }
        std::array<ModeWhere, 11ul>::operator[]((ulong)param_1);
    }

    // 0x100b89e20, 240 bytes, placed by the data it initialises
    // ___cxx_global_var_init.55
    void ___cxx_global_var_init_55() {
        new (&ModeWhere::enumArray) game::VarLifetime(0, "LIVE");
        new (&DAT_103bc2528) game::VarLifetime(1, "WTRC");
        new (&DAT_103bc2538) game::VarLifetime(2, "WTQA");
        new (&DAT_103bc2548) game::VarLifetime(3, "WTWIP");
        new (&DAT_103bc2558) game::VarLifetime(4, "LOCAL");
        new (&DAT_103bc2568) game::VarLifetime(5, "WTI");
        new (&DAT_103bc2578) game::VarLifetime(6, "INTBETA");
        new (&DAT_103bc2588) ModeWhere();
        new (&DAT_103bc2598) ModeWhere();
        new (&DAT_103bc25a8) ModeWhere();
        new (&DAT_103bc25b8) game::VarLifetime(10, "DEMO");
    }

} // namespace jag
