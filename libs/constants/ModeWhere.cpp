// libs/constants/ModeWhere.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.constants

#include "ModeWhere.h"

namespace jag {
    // 0x100f481e8
    ModeWhere const* ModeWhere::LIVE = &enumArray;

    // 0x100f481f0
    ModeWhere const* ModeWhere::WTWIP = &enumArray[3] /* ModeWhere(3, "WTWIP") */;

    // 0x100f48260
    ModeWhere const* ModeWhere::WTRC = &enumArray[1] /* ModeWhere(1, "WTRC") */;

    // 0x100f48268
    ModeWhere const* ModeWhere::WTQA = &enumArray[2] /* ModeWhere(2, "WTQA") */;

    // 0x100f48270
    ModeWhere const* ModeWhere::LOCAL = &enumArray[4] /* ModeWhere(4, "LOCAL") */;

    // 0x100f48278
    ModeWhere const* ModeWhere::WTI = &enumArray[5] /* ModeWhere(5, "WTI") */;

    // 0x100f48280
    ModeWhere const* ModeWhere::INTBETA = &enumArray[6] /* ModeWhere(6, "INTBETA") */;

    // 0x100f48288
    ModeWhere const* ModeWhere::DEMO = &enumArray[10] /* ModeWhere(10, "DEMO") */;

    // 0x103bc2518, set at startup by ___cxx_global_var_init.55
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

    // 0x1004a2ca0: ModeWhere::ModeWhere(unsigned int, char const*) has the same machine code as MoveSpeed::MoveSpeed(int, char const*)

    // 0x100b89500
    void ModeWhere::GetByID(unsigned int arg1) {
        uint32_t in_register_00000034;

        if (10 < (unsigned int)this) {
            LogAssert("id>=0 && id <ModeWhere::ENUM_SIZE",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/constants/ModeWhere.cpp",
                      48, "ModeWhere: Invalid ModeWhere ID requested");
        }
        (*((array<ModeWhere, 11ul>*)((unsigned long)this &
                                     4294967295)))[(((uint64_t)in_register_00000034 << 32) | (uint32_t)arg1)];
    }

} // namespace jag
