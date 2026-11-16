// libs/math/BasicUtils.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.math

#include "BasicUtils.h"

namespace jag::math {
    // 0x100c60e20, 96 bytes, placed by debug map only (low confidence)
    // Log2Int(unsigned int)
    int Log2Int(uint param_1) {
        uint uVar1;
        uint uVar2;
        int iVar3;
        int iVar4;

        if (param_1 == 0) {
            return 0;
        }
        uVar2 = param_1 >> 16;
        if (65535 >= param_1) {
            uVar2 = param_1;
        }
        iVar4 = (uint)(65535 < param_1) * 16;
        iVar3 = iVar4 + 8;
        uVar1 = uVar2 >> 8;
        if (uVar2 < 256) {
            iVar3 = iVar4;
            uVar1 = uVar2;
        }
        iVar4 = iVar3 + 4;
        uVar2 = uVar1 >> 4;
        if (uVar1 < 16) {
            iVar4 = iVar3;
            uVar2 = uVar1;
        }
        iVar3 = iVar4 + 2;
        uVar1 = uVar2 >> 2;
        if (uVar2 < 4) {
            iVar3 = iVar4;
            uVar1 = uVar2;
        }
        return (iVar3 + 1) - (uint)(uVar1 < 2);
    }

} // namespace jag::math
