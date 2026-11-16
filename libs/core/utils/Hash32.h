// libs/core/utils/Hash32.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag {
    // 0x100bee110
    void hash_combine_32(unsigned int& arg1, unsigned int arg2) {
        unsigned int uVar1 = arg1;
        arg1 = uVar1 * 64 + arg2 + (uVar1 >> 2) + 2654435769 ^ uVar1;
    }

} // namespace jag
