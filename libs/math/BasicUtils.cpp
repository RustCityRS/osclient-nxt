// libs/math/BasicUtils.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.math

#include "BasicUtils.h"

namespace jag::math {
    // 0x100c60e20
    int Log2Int(unsigned int arg1) {
        if (arg1 == 0) {
            return 0;
        }
        unsigned int uVar2 = arg1 >> 16;
        if (65535 >= arg1) {
            uVar2 = arg1;
        }
        int iVar4 = (unsigned int)(65535 < arg1) * 16;
        int iVar3 = iVar4 + 8;
        unsigned int uVar1 = uVar2 >> 8;
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
        return (iVar3 + 1) - (unsigned int)(uVar1 < 2);
    }

} // namespace jag::math
