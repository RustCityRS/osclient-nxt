// libs/hal/render/buffers/PooledBuffer.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#include "PooledBuffer.h"

namespace jag::math {
    // 0x100c0d4a0
    unsigned int RoundUpToPowerOf2(unsigned int arg1) {
        if (arg1 == 0) {
            arg1 = 4294967295;
        } else {
            if (IsPowerOf2(arg1) == '\0') {
                arg1 = RoundDownToPowerOf2(arg1) * 2;
            }
        }
        return arg1;
    }

    // 0x100c0d4d0
    int RoundUpToMultiple(int arg1, unsigned int arg2) {
        if (arg2 == 0) {
            LogAssert("multiple > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/math/BasicUtils.h", 135,
                      nullptr);
        }
        int iVar1 = arg2 - 1;
        if (arg1 < 0) {
            iVar1 = 0;
        }
        return (iVar1 + arg1) - (unsigned int)(iVar1 + arg1) % arg2;
    }

} // namespace jag::math
