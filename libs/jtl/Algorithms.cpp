// libs/jtl/Algorithms.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.jtl

#include "Algorithms.h"

namespace jag {
    // 0x100cb6500
    void Algorithms::QuickSortParallel(Array<int>& arg1, Array<int>& arg2, int arg3, int arg4) {
        int iVar1;
        uint32_t uVar2;
        uint32_t uVar3;
        uint32_t uVar4;
        int iVar5;
        int* piVar6;
        uint32_t* puVar7;
        unsigned long uVar8;
        unsigned long arg1_00;
        double dVar9;

        if (arg3 < arg4) {
            dVar9 = (double)floor<int>((arg4 + arg3) / 2);
            uVar8 = (unsigned long)(int)dVar9;
            piVar6 = &arg1[uVar8];
            iVar1 = *piVar6;
            puVar7 = &arg1[(unsigned long)arg4];
            uVar2 = *puVar7;
            puVar7 = &arg1[uVar8];
            *puVar7 = uVar2;
            piVar6 = &arg1[(unsigned long)arg4];
            *piVar6 = iVar1;
            puVar7 = &arg2[uVar8];
            uVar2 = *puVar7;
            puVar7 = &arg2[(unsigned long)arg4];
            uVar3 = *puVar7;
            puVar7 = &arg2[uVar8];
            *puVar7 = uVar3;
            puVar7 = &arg2[(unsigned long)arg4];
            *puVar7 = uVar2;
            uVar8 = (unsigned long)arg3;
            iVar5 = arg3;
            do {
                piVar6 = &arg1[uVar8];
                if (*piVar6 < (int)(((unsigned int)uVar8 & (unsigned int)(iVar1 != 2147483647)) + iVar1)) {
                    puVar7 = &arg1[uVar8];
                    uVar3 = *puVar7;
                    arg1_00 = (unsigned long)iVar5;
                    puVar7 = &arg1[arg1_00];
                    uVar4 = *puVar7;
                    puVar7 = &arg1[uVar8];
                    *puVar7 = uVar4;
                    puVar7 = &arg1[arg1_00];
                    *puVar7 = uVar3;
                    puVar7 = &arg2[uVar8];
                    uVar3 = *puVar7;
                    puVar7 = &arg2[arg1_00];
                    uVar4 = *puVar7;
                    puVar7 = &arg2[uVar8];
                    *puVar7 = uVar4;
                    iVar5 = iVar5 + 1;
                    puVar7 = &arg2[arg1_00];
                    *puVar7 = uVar3;
                }
                uVar8 = uVar8 + 1;
            } while (arg4 != (int)uVar8);
            uVar8 = (unsigned long)iVar5;
            puVar7 = &arg1[uVar8];
            uVar3 = *puVar7;
            puVar7 = &arg1[(unsigned long)arg4];
            *puVar7 = uVar3;
            piVar6 = &arg1[uVar8];
            *piVar6 = iVar1;
            puVar7 = &arg2[uVar8];
            uVar3 = *puVar7;
            puVar7 = &arg2[(unsigned long)arg4];
            *puVar7 = uVar3;
            puVar7 = &arg2[uVar8];
            *puVar7 = uVar2;
            QuickSortParallel(arg1, arg2, arg3, iVar5 - 1);
            QuickSortParallel(arg1, arg2, iVar5 + 1, arg4);
        }
    }

} // namespace jag
