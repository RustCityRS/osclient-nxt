// libs/constants/ModeGame.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.constants

#include "ModeGame.h"

namespace jag {
    // 0x100f48230, 8 bytes, __data
    ModeGame const* ModeGame::RUNESCAPE = &enumArray;

    // 0x100f48238, 8 bytes, __data
    ModeGame const* ModeGame::STELLARDAWN = &enumArray[1] /* ModeGame(1, "stellardawn", "StellarDawn") */;

    // 0x100f48240, 8 bytes, __data
    ModeGame const* ModeGame::ALTERNATEREALITY =
        &enumArray[2] /* ModeGame(2, "alternatereality", "Alternate Reality") */;

    // 0x100f48248, 8 bytes, __data
    ModeGame const* ModeGame::TRANSFORMERS = &enumArray[3] /* ModeGame(3, "transformers", "Transformers") */;

    // 0x100f48250, 8 bytes, __data
    ModeGame const* ModeGame::SCRATCH = &enumArray[4] /* ModeGame(4, "scratch", "Scratch") */;

    // 0x100f48258, 8 bytes, __data
    ModeGame const* ModeGame::OLDSCAPE = &enumArray[5] /* ModeGame(5, "oldscape", "Old School RuneScape") */;

    // 0x103bc2458, 192 bytes, __common; set at startup by ___cxx_global_var_init.39
    ModeGame ModeGame::enumArray[6] = {
        /* [0] */ ModeGame(0, "runescape", "RuneScape"),
        /* [1] */ ModeGame(1, "stellardawn", "StellarDawn"),
        /* [2] */ ModeGame(2, "alternatereality", "Alternate Reality"),
        /* [3] */ ModeGame(3, "transformers", "Transformers"),
        /* [4] */ ModeGame(4, "scratch", "Scratch"),
        /* [5] */ ModeGame(5, "oldscape", "Old School RuneScape"),
    };

    // 0x100b89490, 64 bytes, placed by class name and debug map
    // ModeGame::GetByID(unsigned int)
    void ModeGame::GetByID(uint param_1) {
        if (5 < param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("id>=0 && id <ModeGame::ENUM_SIZE",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/constants/ModeGame.cpp",
                      39, "ModeGame: Invalid ModeGame ID requested");
        }
        std::array<ModeGame, 6ul>::operator[]((ulong)param_1);
    }

    // 0x100b89d60, 192 bytes, placed by the data it initialises
    // ___cxx_global_var_init.39
    void ___cxx_global_var_init_39() {
        new (&ModeGame::enumArray) ModeGame(0, "runescape", "RuneScape");
        new (&DAT_103bc2478) ModeGame(1, "stellardawn", "StellarDawn");
        new (&DAT_103bc2498) ModeGame(2, "alternatereality", "Alternate Reality");
        new (&DAT_103bc24b8) ModeGame(3, "transformers", "Transformers");
        new (&DAT_103bc24d8) ModeGame(4, "scratch", "Scratch");
        new (&DAT_103bc24f8) ModeGame(5, "oldscape", "Old School RuneScape");
    }

} // namespace jag
