// libs/graphics/runetek7/materials/textures/TextureDataProvider.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

#include "TextureDataProvider.h"

namespace jag::graphics {
    // 0x100009e70: TextureDataProvider::~TextureDataProvider() has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

    // 0x100860020
    void TextureDataProvider::GetTextureData(TextureData& textureData, const TextureType* textureType,
                                             unsigned int arg3, render::TextureFormatBitSet textureFormatBitSet) {
        uint64_t in_register_00000001;
        TextureDataProvider_vtbl* pTVar2;
        TextureFormatBitSet local_38;

        _local_38 =
            (((uint64_t)((int)((uint64_t)in_register_00000001 >> 24)) << 32) | (uint32_t)textureFormatBitSet.m_bits);
        if (!(local_38.IsCompressed())) {
            pTVar2 = (TextureDataProvider_vtbl*)&this->_vptr[3]._x7e___2;
        } else {
            if (!(local_38.HasFormatType(2))) {
                pTVar2 = this->_vptr + 4;
            } else {
                pTVar2 = (TextureDataProvider_vtbl*)&this->_vptr[4]._x7e___2;
            }
        }
        (*pTVar2->_dtor)(this, textureData, textureType, (unsigned long)arg3);
    }

    // 0x1008600a0
    void TextureDataProvider::AllocateImageData(unsigned int arg1) {
        TextureManager::AllocateImageData(arg1);
    }

} // namespace jag::graphics
