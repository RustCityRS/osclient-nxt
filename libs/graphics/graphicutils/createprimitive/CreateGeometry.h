// libs/graphics/graphicutils/createprimitive/CreateGeometry.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::graphicutils {
    // 0x1008f3280
    void CreateQuadListIndices<unsigned short>(Array<unsigned short>& arg1, unsigned long arg2) {
        short* psVar1;
        short sVar2;
        unsigned short uVar3;
        unsigned int uVar4;

        if (65535 < arg2 * 4 - 1) {
            LogAssert("(quadCount * 4) - 1 <= std::numeric_limits<IndexType>::max()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/graphicutils/"
                      "createprimitive/CreateGeometry.h",
                      19, "quadCount exceeds what can be indexed using IndexType");
        }
        arg1.set_max_size(arg2 * 6, 0);
        if (arg2 != 0) {
            sVar2 = 0;
            uVar3 = 0;
            do {
                uVar4 = (unsigned int)uVar3;
                psVar1 = &arg1[(unsigned long)(uVar4 * 6 + 2)];
                *psVar1 = sVar2;
                psVar1 = &arg1[(unsigned long)(uVar4 * 6 | 1)];
                *psVar1 = sVar2 + 1;
                psVar1 = &arg1[(unsigned long)(uVar4 * 6)];
                *psVar1 = sVar2 + 2;
                psVar1 = &arg1[(unsigned long)(uVar4 * 6 + 5)];
                *psVar1 = sVar2;
                psVar1 = &arg1[(unsigned long)(uVar4 * 6 + 4)];
                *psVar1 = sVar2 + 2;
                psVar1 = &arg1[(unsigned long)(uVar4 * 6 + 3)];
                *psVar1 = sVar2 + 3;
                uVar3 = uVar3 + 1;
                sVar2 = sVar2 + 4;
            } while (uVar3 < arg2);
        }
    }

} // namespace jag::graphicutils
