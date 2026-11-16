// libs/constants/ModeGame.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.constants

#include "ModeGame.h"

namespace jag {
    // 0x100f48230
    ModeGame const* ModeGame::RUNESCAPE = &enumArray;

    // 0x100f48238
    ModeGame const* ModeGame::STELLARDAWN = &enumArray[1] /* ModeGame(1, "stellardawn", "StellarDawn") */;

    // 0x100f48240
    ModeGame const* ModeGame::ALTERNATEREALITY =
        &enumArray[2] /* ModeGame(2, "alternatereality", "Alternate Reality") */;

    // 0x100f48248
    ModeGame const* ModeGame::TRANSFORMERS = &enumArray[3] /* ModeGame(3, "transformers", "Transformers") */;

    // 0x100f48250
    ModeGame const* ModeGame::SCRATCH = &enumArray[4] /* ModeGame(4, "scratch", "Scratch") */;

    // 0x100f48258
    ModeGame const* ModeGame::OLDSCAPE = &enumArray[5] /* ModeGame(5, "oldscape", "Old School RuneScape") */;

    // 0x103bc2458, set at startup by ___cxx_global_var_init.39
    ModeGame ModeGame::enumArray[6] = {
        /* [0] */ ModeGame(0, "runescape", "RuneScape"),
        /* [1] */ ModeGame(1, "stellardawn", "StellarDawn"),
        /* [2] */ ModeGame(2, "alternatereality", "Alternate Reality"),
        /* [3] */ ModeGame(3, "transformers", "Transformers"),
        /* [4] */ ModeGame(4, "scratch", "Scratch"),
        /* [5] */ ModeGame(5, "oldscape", "Old School RuneScape"),
    };

    // 0x100b89490
    ModeGame* ModeGame::GetByID(unsigned int arg1) {
        uint32_t in_register_00000034;

        if (5 < (unsigned int)this) {
            LogAssert("id>=0 && id <ModeGame::ENUM_SIZE",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/constants/ModeGame.cpp",
                      39, "ModeGame: Invalid ModeGame ID requested");
        }
        return (ModeGame*)(*(
            (array<ModeGame, 6ul>*)((unsigned long)this &
                                    4294967295)))[(((uint64_t)in_register_00000034 << 32) | (uint32_t)arg1)];
    }

} // namespace jag
