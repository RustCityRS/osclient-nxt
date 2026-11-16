// libs/hal/render/textures/TextureUtils.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag {
    // 0x1008a9c60
    void hash_combine<unsigned int>(unsigned long& arg1, const unsigned int& arg2) {
        long lVar2 = std::hash<unsigned int>::operator()((hash<unsigned int>*)(unsigned long)*arg2, (unsigned int)arg2);
        unsigned long uVar1 = arg1;
        arg1 = (uVar1 >> 2) + uVar1 * 64 + lVar2 + 2654435769 ^ uVar1;
    }

    // 0x1008a9ca0
    void hash_combine<unsigned short>(unsigned long& arg1, const unsigned short& arg2) {
        long lVar2 =
            std::hash<unsigned short>::operator()((hash<unsigned short>*)(unsigned long)*arg2, (unsigned short)arg2);
        unsigned long uVar1 = arg1;
        arg1 = (uVar1 >> 2) + uVar1 * 64 + lVar2 + 2654435769 ^ uVar1;
    }

} // namespace jag
