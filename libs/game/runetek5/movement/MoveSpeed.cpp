// libs/game/runetek5/movement/MoveSpeed.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.game.runetek5

#include "MoveSpeed.h"

namespace jag {
    // 0x100f395a0, 8 bytes, __data
    MoveSpeed const* MoveSpeed::STATIONARY = &enumArray;

    // 0x100f395a8, 8 bytes, __data
    MoveSpeed const* MoveSpeed::CRAWL = &enumArray[1] /* MoveSpeed(0, "crawl") */;

    // 0x100f395b0, 8 bytes, __data
    MoveSpeed const* MoveSpeed::WALK = &enumArray[2] /* MoveSpeed(1, "walk") */;

    // 0x100f395b8, 8 bytes, __data
    MoveSpeed const* MoveSpeed::RUN = &enumArray[3] /* MoveSpeed(2, "run") */;

    // 0x100f395c0, 8 bytes, __data
    MoveSpeed const* MoveSpeed::INSTANT = &enumArray[4] /* MoveSpeed(3, "instant") */;

    // 0x1039b5570, 80 bytes, __common; constructor folded by the linker, Ghidra calls it game::VarLifetime::VarLifetime; set at startup by ___cxx_global_var_init
    MoveSpeed MoveSpeed::enumArray[5] = {
        /* [0] */ MoveSpeed(4294967295, "stationary"),
        /* [1] */ MoveSpeed(0, "crawl"),
        /* [2] */ MoveSpeed(1, "walk"),
        /* [3] */ MoveSpeed(2, "run"),
        /* [4] */ MoveSpeed(3, "instant"),
    };

    // 0x1004a1f90, 80 bytes, placed by class name and debug map
    // MoveSpeed::GetByID(int)
    void MoveSpeed::GetByID(int param_1) {
        if (4 < param_1 + 1U) {
            /* WARNING: Subroutine does not return */
            LogAssert("adjustedID>=0 && adjustedID <MoveSpeed::ENUM_SIZE",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/movement/"
                      "MoveSpeed.cpp",
                      38, "MoveSpeed: Invalid MoveSpeed ID requested");
        }
        std::array<MoveSpeed, 5ul>::operator[]((ulong)(param_1 + 1U));
    }

    // 0x1004a49e0, 128 bytes, placed by the data it initialises
    // ___cxx_global_var_init
    void ___cxx_global_var_init() {
        new (&MoveSpeed::enumArray) game::VarLifetime(4294967295, "stationary");
        new (&DAT_1039b5580) game::VarLifetime(0, "crawl");
        new (&DAT_1039b5590) game::VarLifetime(1, "walk");
        new (&DAT_1039b55a0) game::VarLifetime(2, "run");
        new (&DAT_1039b55b0) game::VarLifetime(3, "instant");
    }

} // namespace jag
