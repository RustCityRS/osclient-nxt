// libs/hal/render/textures/TextureFormatType.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::render {
    // 0x100857720, 48 bytes, inline, placed by debug map only (low confidence)
    // TextureFormatBitSet::IsValid() const
    undefined4 TextureFormatBitSet::IsValid() {
        char cVar1;
        undefined4 uVar2;

        cVar1 = IsCompressed(this);
        uVar2 = 1;
        if (cVar1 == '\0') {
            uVar2 = IsUncompressed(this);
        }
        return uVar2;
    }

    // 0x100857750, 80 bytes, inline, placed by debug map only (low confidence)
    // TextureFormatBitSet::IsUncompressed() const
    ulong TextureFormatBitSet::IsUncompressed() {
        char cVar1;
        uint uVar2;
        undefined8 unaff_R14;
        ulong uVar3;

        cVar1 = HasFormatType(this, 4);
        uVar3 = CONCAT71((int7)((ulong)unaff_R14 >> 8), 1);
        if (cVar1 == '\0') {
            cVar1 = HasFormatType(this, 5);
            if (cVar1 == '\0') {
                uVar2 = HasFormatType(this, 3);
                uVar3 = (ulong)uVar2;
            }
        }
        return uVar3 & 4294967295;
    }

    // 0x100857e80, 176 bytes, inline, placed by debug map only (low confidence)
    // TextureFormatBitSet::GetBitsPerPixel() const
    undefined8 TextureFormatBitSet::GetBitsPerPixel() {
        char cVar1;
        undefined8 uVar2;

        cVar1 = HasFormatType(this, 0);
        uVar2 = 4;
        if (cVar1 == '\0') {
            cVar1 = HasFormatType(this, 1);
            uVar2 = 8;
            if (cVar1 == '\0') {
                cVar1 = HasFormatType(this, 3);
                if (cVar1 == '\0') {
                    cVar1 = HasFormatType(this, 2);
                    if (cVar1 == '\0') {
                        cVar1 = HasFormatType(this, 4);
                        uVar2 = 24;
                        if (cVar1 == '\0') {
                            cVar1 = HasFormatType(this, 5);
                            uVar2 = 32;
                            if (cVar1 == '\0') {
                                /* WARNING: Subroutine does not return */
                                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                                "hal/render/textures/TextureFormatType.h",
                                                73, (char*)0);
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
    // 0x100858190, 224 bytes, inline, placed by debug map only (low confidence)
    // TextureAtlasTextureMapping::Initialise(unsigned int, unsigned int, unsigned int, bool, bool)
    void TextureAtlasTextureMapping::Initialise(uint param_1, uint param_2, uint param_3, bool param_4, bool param_5) {
        if (65534 < param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("slotX < std::numeric_limits<uint16>::max()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "materials/textures/TextureAtlas.h",
                      135, (char*)0);
        }
        if (65534 < param_2) {
            /* WARNING: Subroutine does not return */
            LogAssert("slotY < std::numeric_limits<uint16>::max()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "materials/textures/TextureAtlas.h",
                      136, (char*)0);
        }
        if (65534 < param_3) {
            /* WARNING: Subroutine does not return */
            LogAssert("sizePixels < std::numeric_limits<uint16>::max()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "materials/textures/TextureAtlas.h",
                      137, (char*)0);
        }
        field_4 = (short)param_1;
        field_6 = (short)param_2;
        field_8 = (short)param_3;
        field_10 = param_4;
        field_0 = -(uint)param_5;
    }

    // 0x1008582d0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // TextureAtlasMaterialMapping::TextureAtlasMaterialMapping(): jumps straight to the base-object constructor

    // 0x1008582e0, 32 bytes, inline, placed by debug map only (low confidence)
    // TextureAtlasMaterialMapping::Initialise(std::array<int, 3ul> const&, unsigned int)
    /* TextureAtlasMaterialMapping::Initialise(std::array<int, 3ul> const&, unsigned int)
    */

    void TextureAtlasMaterialMapping::Initialise(array* param_1, uint param_2) {
        field_8 = *(undefined4*)(param_1 + 8);
        field_0 = *(undefined8*)param_1;
        field_12 = param_2;
        field_16 = 0;
        field_20 = 1;
    }

} // namespace jag::graphics
