// libs/hal/render/buffers/PooledBuffer.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#include "PooledBuffer.h"

namespace jag::math {
    // 0x100c0d4a0, 48 bytes, inline, placed by debug map only (low confidence)
    // RoundUpToPowerOf2(unsigned int)
    uint RoundUpToPowerOf2(uint param_1) {
        if (param_1 == 0) {
            param_1 = 4294967295;
        } else {
            if (IsPowerOf2(param_1) == '\0') {
                param_1 = RoundDownToPowerOf2(param_1) * 2;
            }
        }
        return param_1;
    }

    // 0x100c0d4d0, 80 bytes, inline, placed by debug map only (low confidence)
    // RoundUpToMultiple(int, unsigned int)
    int RoundUpToMultiple(int param_1, uint param_2) {
        int iVar1;

        if (param_2 == 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("multiple > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/math/BasicUtils.h", 135,
                      (char*)0);
        }
        iVar1 = param_2 - 1;
        if (param_1 < 0) {
            iVar1 = 0;
        }
        return (iVar1 + param_1) - (uint)(iVar1 + param_1) % param_2;
    }

} // namespace jag::math
