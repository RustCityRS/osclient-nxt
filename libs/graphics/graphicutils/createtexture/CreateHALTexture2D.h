// libs/graphics/graphicutils/createtexture/CreateHALTexture2D.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::graphicutils {
    // 0x1008c82b0, 176 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr<render::Texture2D> CreateHALTexture2D<render::Texture2D>(unsigned int, unsigned int, unsigned char const*, unsigned int, unsigned int, bool, bool, bool, render::TextureFormatBitSet, unsigned int)
    shared_ptr* CreateHALTexture2D<render::Texture2D>(shared_ptr* __return_storage_ptr__, graphicutils* this,
                                                      uint param_1, uint param_2, uchar* param_3, uint param_4,
                                                      uint param_5, bool param_6, bool param_7, bool param_8,
                                                      TextureFormatBitSet param_9, uint param_10) {
        Texture2D* pTVar1;
        undefined4 in_register_0000000c;

        make_shared<render::Texture2D, char const(&)[31]>((jag*)__return_storage_ptr__,
                                                          "TextureManager GetHALTexture 2D");
        pTVar1 = (Texture2D*)shared_ptr<render::Texture2D>::operator*(
            (shared_ptr<render::Texture2D>*)__return_storage_ptr__);
        CreateHALTexture2D<render::Texture2D>(pTVar1, (uint)this, param_1,
                                              (uchar*)CONCAT44(in_register_0000000c, param_2), (uint)param_3, param_4,
                                              SUB41(param_5, 0), param_6, param_7, _param_8, param_9.m_bits);
        return __return_storage_ptr__;
    }

} // namespace jag::graphicutils

namespace jag::graphics {
    // 0x1008c8360, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // SpriteAtlasMapping::SpriteAtlasMapping(): jumps straight to the base-object constructor

} // namespace jag::graphics
