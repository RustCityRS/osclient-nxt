// libs/graphics/graphicutils/textureatlas/TextureAtlasQuality.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::graphicutils {
    class TextureAtlasQuality {
    public:
        GetMaxGradMipLevels(render::TextureFormatBitSet) const;
        GetMaxMipLevels(render::TextureFormatBitSet) const;

        // data members, from how the methods use this: 1 bytes
        char _unknown_0[1];
    };

    // 0x10085b110, 48 bytes, inline, placed by class name and debug map
    // TextureAtlasQuality::GetMaxGradMipLevels(render::TextureFormatBitSet) const
    undefined4 TextureAtlasQuality::GetMaxGradMipLevels(TextureFormatBitSet param_1) {
        byte bVar1;
        undefined8 in_RAX;
        TextureFormatBitSet local_18;

        _local_18 = CONCAT44((int)((ulong)in_RAX >> 32), param_1.field_0);
        bVar1 = local_18.IsUncompressed();
        return *(undefined4*)(this + (ulong)(bVar1 ^ 1) * 4 + 16);
    }

    // 0x10085b140, 48 bytes, inline, placed by class name and debug map
    // TextureAtlasQuality::GetMaxMipLevels(render::TextureFormatBitSet) const
    undefined4 TextureAtlasQuality::GetMaxMipLevels(TextureFormatBitSet param_1) {
        byte bVar1;
        undefined8 in_RAX;
        TextureFormatBitSet local_18;

        _local_18 = CONCAT44((int)((ulong)in_RAX >> 32), param_1.field_0);
        bVar1 = local_18.IsUncompressed();
        return *(undefined4*)(this + (ulong)(bVar1 ^ 1) * 4 + 24);
    }

} // namespace jag::graphicutils

namespace jag::graphics {
    // 0x10085b5a0, 16 bytes, inline, placed by debug map only (low confidence)
    // TextureAtlasSlot2DGroup::operator[](int) const
    void TextureAtlasSlot2DGroup::operator[](int param_1) {
        std::array<graphicutils::TextureAtlasSlot2D, 3ul>::operator[](
            (array<graphicutils::TextureAtlasSlot2D, 3ul>*)this, (long)param_1);
    }

} // namespace jag::graphics
