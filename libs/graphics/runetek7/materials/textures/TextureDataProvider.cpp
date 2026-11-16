// libs/graphics/runetek7/materials/textures/TextureDataProvider.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

#include "TextureDataProvider.h"

namespace jag::graphics {
    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    TextureDataProvider::~TextureDataProvider();

    // 0x100860020, 128 bytes, placed by class name and debug map
    // TextureDataProvider::GetTextureData(TextureData&, TextureType const*, unsigned int, render::TextureFormatBitSet)
    void TextureDataProvider::GetTextureData(TextureData* param_1, TextureType* param_2, uint param_3,
                                             TextureFormatBitSet param_4) {
        char cVar1;
        undefined7 in_register_00000001;
        undefined** ppuVar2;
        TextureFormatBitSet local_38;

        _local_38 = CONCAT44((int)((uint7)in_register_00000001 >> 24), param_4.m_bits);
        cVar1 = local_38.IsCompressed();
        if (cVar1 == '\0') {
            ppuVar2 = field_0 + 7;
        } else {
            cVar1 = local_38.HasFormatType(2);
            if (cVar1 == '\0') {
                ppuVar2 = field_0 + 8;
            } else {
                ppuVar2 = field_0 + 9;
            }
        }
        (*(code*)*ppuVar2)(this, param_1, param_2, param_3);
    }

    // 0x1008600a0, 16 bytes, placed by class name and debug map
    // TextureDataProvider::AllocateImageData(unsigned int)
    void TextureDataProvider::AllocateImageData(uint param_1) {
        TextureManager::AllocateImageData(param_1);
    }

    // 0x100c92b50: the linker folded this into InlineFatalBreak(), which has identical code
    TextureDataProvider::~TextureDataProvider();

    // 0x100c92b50: the linker folded this into InlineFatalBreak(), which has identical code
    TextureDataProvider::~TextureDataProvider();

} // namespace jag::graphics
