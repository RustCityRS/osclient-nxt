// libs/graphics/graphicutils/createtexture/CreateHALTexture2D.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::graphicutils {
    // 0x1008c82b0
    shared_ptr<render::Texture2D>
    CreateHALTexture2D<render::Texture2D>(unsigned int arg1, unsigned int arg2, const unsigned char* arg3,
                                          unsigned int arg4, unsigned int arg5, bool arg6, bool arg7, bool arg8,
                                          render::TextureFormatBitSet textureFormatBitSet, unsigned int arg10) {
        shared_ptr<render::Texture2D> result;
        uint32_t in_register_0000000c;
        uint32_t in_register_0000003c;
        ReturnValue result;
        uint64_t in_register_00000089;
        unsigned int in_stack_00000028;

        &result = (ReturnValue*)(((uint64_t)in_register_0000003c << 32) | (uint32_t)arg1);
        make_shared<render::Texture2D, char const(&)[31]>(&result, "TextureManager GetHALTexture 2D");
        Texture2D* texture2D = (Texture2D*)*result;
        CreateHALTexture2D<render::Texture2D>(
            texture2D, arg2, (unsigned int)arg3,
            (unsigned char*)(((uint64_t)in_register_0000000c << 32) | (uint32_t)arg4), arg5,
            (unsigned int)(((uint64_t)in_register_00000089 << 8) | (uint8_t)arg6), arg7, arg8,
            (uint8_t)textureFormatBitSet.m_bits, (TextureFormatBitSet)arg10, in_stack_00000028);
        return result;
    }

} // namespace jag::graphicutils
