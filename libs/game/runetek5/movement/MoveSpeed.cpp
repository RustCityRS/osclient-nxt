// libs/game/runetek5/movement/MoveSpeed.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.runetek5

#include "MoveSpeed.h"

namespace jag {
    // 0x100f395a0
    MoveSpeed const* MoveSpeed::STATIONARY = &enumArray;

    // 0x100f395a8
    MoveSpeed const* MoveSpeed::CRAWL = &enumArray[1] /* MoveSpeed(0, "crawl") */;

    // 0x100f395b0
    MoveSpeed const* MoveSpeed::WALK = &enumArray[2] /* MoveSpeed(1, "walk") */;

    // 0x100f395b8
    MoveSpeed const* MoveSpeed::RUN = &enumArray[3] /* MoveSpeed(2, "run") */;

    // 0x100f395c0
    MoveSpeed const* MoveSpeed::INSTANT = &enumArray[4] /* MoveSpeed(3, "instant") */;

    // 0x1039b5570, set at startup by ___cxx_global_var_init
    MoveSpeed MoveSpeed::enumArray[5] = {
        /* [0] */ MoveSpeed(4294967295, "stationary"),
        /* [1] */ MoveSpeed(0, "crawl"),
        /* [2] */ MoveSpeed(1, "walk"),
        /* [3] */ MoveSpeed(2, "run"),
        /* [4] */ MoveSpeed(3, "instant"),
    };

    // 0x1004a1f90
    void MoveSpeed::GetByID(int arg1) {
        uint32_t in_register_00000034;

        unsigned int uVar1 = (int)this + 1;
        if (4 < uVar1) {
            LogAssert("adjustedID>=0 && adjustedID <MoveSpeed::ENUM_SIZE",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/movement/"
                      "MoveSpeed.cpp",
                      38, "MoveSpeed: Invalid MoveSpeed ID requested");
        }
        (*((array<MoveSpeed, 5ul>*)(unsigned long)uVar1))[(((uint64_t)in_register_00000034 << 32) | (uint32_t)arg1)];
    }

} // namespace jag
