// libs/core/utils/CRC.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.core

namespace jag {
    // 0x100cc5ba0, 80 bytes, placed by debug map only (low confidence)
    // CRC32(unsigned char const*, unsigned long, unsigned int)
    uint CRC32(uchar* param_1, ulong param_2, uint param_3) {
        ulong uVar1;

        if (param_2 != 0) {
            uVar1 = 0;
            do {
                param_3 = param_3 >> 8 ^ *(uint*)(&CRCTable32 + (ulong)(param_3 & 255 ^ (uint)param_1[uVar1]) * 4);
                uVar1 = uVar1 + 1;
            } while (param_2 != uVar1);
        }
        return ~param_3;
    }

} // namespace jag
