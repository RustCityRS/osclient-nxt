// libs/graphics/runetek7/constants/TextureType.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

#include "libs/oldscape/jagex3/dash3d/Texture.h"

namespace jag {
    // 0x100f44668
    TextureType const* TextureType::TEXTURE = &enumArray;

    // 0x100f44670
    TextureType const* TextureType::CUBEMAP = &enumArray[1] /* TextureType(1, "cubemap") */;

    // 0x100f44678
    TextureType const* TextureType::SPRITE = &enumArray[2] /* TextureType(2, "sprite") */;

    // 0x103bc0720, set at startup by ___cxx_global_var_init.30
    TextureType TextureType::enumArray[3] = {
        /* [0] */ TextureType(0, "texture"),
        /* [1] */ TextureType(1, "cubemap"),
        /* [2] */ TextureType(2, "sprite"),
    };

    // 0x1004a2ca0: TextureType::TextureType(unsigned int, char const*) has the same machine code as MoveSpeed::MoveSpeed(int, char const*)

    // 0x10092a7a0
    void TextureType::GetByID(unsigned int arg1) {
        uint32_t in_register_00000034;

        if (2 < (unsigned int)this) {
            LogAssert("id >= 0 && id <TextureType::ENUM_SIZE",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "constants/TextureType.cpp",
                      30, "TextureType: Invalid TextureType ID requested");
        }
        (*((array<TextureType, 3ul>*)((unsigned long)this &
                                      4294967295)))[(((uint64_t)in_register_00000034 << 32) | (uint32_t)arg1)];
    }

} // namespace jag
