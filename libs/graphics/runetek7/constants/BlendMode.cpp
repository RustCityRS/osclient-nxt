// libs/graphics/runetek7/constants/BlendMode.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

#include "libs/oldscape/jagex3/graphics/BlendMode.h"

namespace jag::graphics {
    // 0x100f44608, 8 bytes, __data
    BlendMode const* BlendMode::REPLACE = &enumArray;

    // 0x100f44610, 8 bytes, __data
    BlendMode const* BlendMode::NORMAL = &enumArray[1] /* BlendMode(1, "normal") */;

    // 0x100f44618, 8 bytes, __data
    BlendMode const* BlendMode::MULTIPLY = &enumArray[2] /* BlendMode(2, "multiply") */;

    // 0x100f44620, 8 bytes, __data
    BlendMode const* BlendMode::SUBTRACTIVE = &enumArray[3] /* BlendMode(3, "subtractive") */;

    // 0x100f44628, 8 bytes, __data
    BlendMode const* BlendMode::ADDITIVE = &enumArray[4] /* BlendMode(4, "additive") */;

    // 0x100f44630, 8 bytes, __data
    BlendMode const* BlendMode::MULTIPLYADDITIVE = &enumArray[5] /* BlendMode(5, "multiplyadditive") */;

    // 0x103bc0660, 96 bytes, __common; constructor folded by the linker, Ghidra calls it game::VarLifetime::VarLifetime; set at startup by ___cxx_global_var_init.6
    BlendMode BlendMode::enumArray[6] = {
        /* [0] */ BlendMode(0, "replace"),
        /* [1] */ BlendMode(1, "normal"),
        /* [2] */ BlendMode(2, "multiply"),
        /* [3] */ BlendMode(3, "subtractive"),
        /* [4] */ BlendMode(4, "additive"),
        /* [5] */ BlendMode(5, "multiplyadditive"),
    };

    // 0x1004a1f80: the linker folded this into MoveSpeed::MoveSpeed(int, char const*), which has identical code
    BlendMode::BlendMode(unsigned int, char const*);

    // 0x1004a2ca0: the linker folded this into MoveSpeed::MoveSpeed(int, char const*), which has identical code
    BlendMode::BlendMode(unsigned int, char const*);

    // 0x10092a680, 64 bytes, placed by class name and debug map
    // BlendMode::GetByID(unsigned int)
    void BlendMode::GetByID(uint param_1) {
        if (5 < param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("id >= 0 && id < BlendMode::ENUM_SIZE",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "constants/BlendMode.cpp",
                      43, "BlendMode: Invalid BlendMode ID requested");
        }
        std::array<BlendMode, 6ul>::operator[]((ulong)param_1);
    }

    // 0x10094cc90, 160 bytes, placed by the data it initialises
    // ___cxx_global_var_init.6
    void ___cxx_global_var_init_6() {
        new (&BlendMode::enumArray) game::VarLifetime(0, "replace");
        new (&DAT_103bc0670) game::VarLifetime(1, "normal");
        new (&DAT_103bc0680) game::VarLifetime(2, "multiply");
        new (&DAT_103bc0690) game::VarLifetime(3, "subtractive");
        new (&DAT_103bc06a0) game::VarLifetime(4, "additive");
        new (&DAT_103bc06b0) game::VarLifetime(5, "multiplyadditive");
    }

} // namespace jag::graphics
