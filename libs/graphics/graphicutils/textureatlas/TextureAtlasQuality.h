// libs/graphics/graphicutils/textureatlas/TextureAtlasQuality.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::graphicutils {
    class TextureAtlasQuality {
    public:
        uint32_t GetMaxGradMipLevels(render::TextureFormatBitSet textureFormatBitSet) const;
        uint32_t GetMaxMipLevels(render::TextureFormatBitSet textureFormatBitSet) const;

        uint8_t _unknown_0[1];
    };

    // 0x10085b110
    uint32_t TextureAtlasQuality::GetMaxGradMipLevels(render::TextureFormatBitSet textureFormatBitSet) const {
        uint64_t in_RAX;
        TextureFormatBitSet local_18;

        _local_18 = (((uint64_t)((int)((unsigned long)in_RAX >> 32)) << 32) | (uint32_t)textureFormatBitSet.m_bits);
        uint8_t bVar1 = local_18.IsUncompressed();
        return *(uint32_t*)(this + (unsigned long)(bVar1 ^ 1) * 4 + 16);
    }

    // 0x10085b140
    uint32_t TextureAtlasQuality::GetMaxMipLevels(render::TextureFormatBitSet textureFormatBitSet) const {
        uint64_t in_RAX;
        TextureFormatBitSet local_18;

        _local_18 = (((uint64_t)((int)((unsigned long)in_RAX >> 32)) << 32) | (uint32_t)textureFormatBitSet.m_bits);
        uint8_t bVar1 = local_18.IsUncompressed();
        return *(uint32_t*)(this + (unsigned long)(bVar1 ^ 1) * 4 + 24);
    }

} // namespace jag::graphicutils

namespace jag::graphics {
    // 0x10085b5a0
    void TextureAtlasSlot2DGroup::operator[](int arg1) const {
        (*this)[(long)arg1];
    }

} // namespace jag::graphics
