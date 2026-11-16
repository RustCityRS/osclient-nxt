// libs/graphics/runetek7/constants/TextureType.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

#include "libs/oldscape/jagex3/dash3d/Texture.h"

namespace jag {
    // 0x100f44668, 8 bytes, __data
    TextureType const* TextureType::TEXTURE = &enumArray;

    // 0x100f44670, 8 bytes, __data
    TextureType const* TextureType::CUBEMAP = &enumArray[1] /* TextureType(1, "cubemap") */;

    // 0x100f44678, 8 bytes, __data
    TextureType const* TextureType::SPRITE = &enumArray[2] /* TextureType(2, "sprite") */;

    // 0x103bc0720, 48 bytes, __common; constructor folded by the linker, Ghidra calls it game::VarLifetime::VarLifetime; set at startup by ___cxx_global_var_init.30
    TextureType TextureType::enumArray[3] = {
        /* [0] */ TextureType(0, "texture"),
        /* [1] */ TextureType(1, "cubemap"),
        /* [2] */ TextureType(2, "sprite"),
    };

    // 0x1004a1f80: the linker folded this into MoveSpeed::MoveSpeed(int, char const*), which has identical code
    TextureType::TextureType(unsigned int, char const*);

    // 0x1004a2ca0: the linker folded this into MoveSpeed::MoveSpeed(int, char const*), which has identical code
    TextureType::TextureType(unsigned int, char const*);

    // 0x10092a7a0, 64 bytes, placed by class name and debug map
    // TextureType::GetByID(unsigned int)
    void TextureType::GetByID(uint param_1) {
        if (2 < param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("id >= 0 && id <TextureType::ENUM_SIZE",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "constants/TextureType.cpp",
                      30, "TextureType: Invalid TextureType ID requested");
        }
        std::array<TextureType, 3ul>::operator[]((ulong)param_1);
    }

    // 0x10094cdd0, 80 bytes, placed by the data it initialises
    // ___cxx_global_var_init.30
    void ___cxx_global_var_init_30() {
        new (&TextureType::enumArray) game::VarLifetime(0, "texture");
        new (&DAT_103bc0730) game::VarLifetime(1, "cubemap");
        new (&DAT_103bc0740) game::VarLifetime(2, "sprite");
    }

} // namespace jag
