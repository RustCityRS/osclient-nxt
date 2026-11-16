// libs/graphics/runetek7/constants/BlendMode.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

#include "libs/oldscape/jagex3/graphics/BlendMode.h"

namespace jag::graphics {
    // 0x100f44608
    BlendMode const* BlendMode::REPLACE = &enumArray;

    // 0x100f44610
    BlendMode const* BlendMode::NORMAL = &enumArray[1] /* BlendMode(1, "normal") */;

    // 0x100f44618
    BlendMode const* BlendMode::MULTIPLY = &enumArray[2] /* BlendMode(2, "multiply") */;

    // 0x100f44620
    BlendMode const* BlendMode::SUBTRACTIVE = &enumArray[3] /* BlendMode(3, "subtractive") */;

    // 0x100f44628
    BlendMode const* BlendMode::ADDITIVE = &enumArray[4] /* BlendMode(4, "additive") */;

    // 0x100f44630
    BlendMode const* BlendMode::MULTIPLYADDITIVE = &enumArray[5] /* BlendMode(5, "multiplyadditive") */;

    // 0x103bc0660, set at startup by ___cxx_global_var_init.6
    BlendMode BlendMode::enumArray[6] = {
        /* [0] */ BlendMode(0, "replace"),
        /* [1] */ BlendMode(1, "normal"),
        /* [2] */ BlendMode(2, "multiply"),
        /* [3] */ BlendMode(3, "subtractive"),
        /* [4] */ BlendMode(4, "additive"),
        /* [5] */ BlendMode(5, "multiplyadditive"),
    };

    // 0x1004a2ca0: BlendMode::BlendMode(unsigned int, char const*) has the same machine code as MoveSpeed::MoveSpeed(int, char const*)

    // 0x10092a680
    void BlendMode::GetByID(unsigned int arg1) {
        uint32_t in_register_00000034;

        if (5 < (unsigned int)this) {
            LogAssert("id >= 0 && id < BlendMode::ENUM_SIZE",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "constants/BlendMode.cpp",
                      43, "BlendMode: Invalid BlendMode ID requested");
        }
        (*((array<BlendMode, 6ul>*)((unsigned long)this &
                                    4294967295)))[(((uint64_t)in_register_00000034 << 32) | (uint32_t)arg1)];
    }

} // namespace jag::graphics
