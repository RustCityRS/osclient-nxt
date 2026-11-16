// libs/core/utils/Hash32.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag {
    // 0x100bee110, 32 bytes, inline, placed by debug map only (low confidence)
    // hash_combine_32(unsigned int&, unsigned int)
    void hash_combine_32(uint* param_1, uint param_2) {
        uint uVar1;

        uVar1 = *param_1;
        *param_1 = uVar1 * 64 + param_2 + (uVar1 >> 2) + 2654435769 ^ uVar1;
    }

} // namespace jag
