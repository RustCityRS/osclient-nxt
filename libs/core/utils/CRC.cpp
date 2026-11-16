// libs/core/utils/CRC.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.core

namespace jag {
    // 0x100cc5ba0
    unsigned int CRC32(const unsigned char* arg1, unsigned long arg2, unsigned int arg3) {
        unsigned long uVar1;

        if (arg2 != 0) {
            uVar1 = 0;
            do {
                arg3 = arg3 >> 8 ^
                       *(unsigned int*)(&CRCTable32 + (unsigned long)(arg3 & 255 ^ (unsigned int)arg1[uVar1]) * 4);
                uVar1 = uVar1 + 1;
            } while (arg2 != uVar1);
        }
        return ~arg3;
    }

} // namespace jag
