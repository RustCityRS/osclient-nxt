// libs/hal/render/textures/TextureFormatType.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::render {
    // 0x100857720
    bool TextureFormatBitSet::IsValid() const {
        bool cVar1 = IsCompressed();
        uint32_t uVar2 = 1;
        if (!cVar1) {
            uVar2 = IsUncompressed();
        }
        return uVar2;
    }

    // 0x100857750
    unsigned long TextureFormatBitSet::IsUncompressed() const {
        unsigned int uVar2;
        uint64_t unaff_R14;

        bool cVar1 = HasFormatType(4);
        unsigned long uVar3 = (((uint64_t)((int64_t)((unsigned long)unaff_R14 >> 8)) << 8) | (uint8_t)1);
        if (!cVar1) {
            cVar1 = HasFormatType(5);
            if (!cVar1) {
                uVar2 = HasFormatType(3);
                uVar3 = (unsigned long)uVar2;
            }
        }
        return uVar3 & 4294967295;
    }

    // 0x100857e80
    uint64_t TextureFormatBitSet::GetBitsPerPixel() const {
        bool cVar1 = HasFormatType(0);
        uint64_t uVar2 = 4;
        if (!cVar1) {
            cVar1 = HasFormatType(1);
            uVar2 = 8;
            if (!cVar1) {
                cVar1 = HasFormatType(3);
                if (!cVar1) {
                    cVar1 = HasFormatType(2);
                    if (!cVar1) {
                        cVar1 = HasFormatType(4);
                        uVar2 = 24;
                        if (!cVar1) {
                            cVar1 = HasFormatType(5);
                            uVar2 = 32;
                            if (!cVar1) {
                                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                                "hal/render/textures/TextureFormatType.h",
                                                73, nullptr);
                            }
                        }
                    }
                }
            }
        }
        return uVar2;
    }

} // namespace jag::render

namespace jag::graphics {
    // 0x100858190
    void TextureAtlasTextureMapping::Initialise(unsigned int arg1, unsigned int arg2, unsigned int arg3, bool arg4,
                                                bool arg5) {
        if (65534 < arg1) {
            LogAssert("slotX < std::numeric_limits<uint16>::max()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "materials/textures/TextureAtlas.h",
                      135, nullptr);
        }
        if (65534 < arg2) {
            LogAssert("slotY < std::numeric_limits<uint16>::max()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "materials/textures/TextureAtlas.h",
                      136, nullptr);
        }
        if (65534 < arg3) {
            LogAssert("sizePixels < std::numeric_limits<uint16>::max()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "materials/textures/TextureAtlas.h",
                      137, nullptr);
        }
        field_4 = (short)arg1;
        field_6 = (short)arg2;
        field_8 = (short)arg3;
        field_10 = arg4;
        field_0 = -(unsigned int)arg5;
    }

    // 0x1008582e0
    void TextureAtlasMaterialMapping::Initialise(const std::array<int, 3ul>& arg1, unsigned int arg2) {
        field_8 = *(uint32_t*)(arg1 + 8);
        field_0 = *(uint64_t*)arg1;
        field_12 = arg2;
        field_16 = 0;
        field_20 = 1;
    }

} // namespace jag::graphics
