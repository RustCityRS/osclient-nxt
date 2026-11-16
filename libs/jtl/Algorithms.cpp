// libs/jtl/Algorithms.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.jtl

#include "Algorithms.h"

namespace jag {
    // 0x100cb6500, 592 bytes, placed by class name and debug map
    // Algorithms::QuickSortParallel(Array<int, eastl::allocator>&, Array<int, eastl::allocator>&, int, int)
    void Algorithms::QuickSortParallel(Array* param_1, Array* param_2, int param_3, int param_4) {
        int iVar1;
        undefined4 uVar2;
        undefined4 uVar3;
        undefined4 uVar4;
        int iVar5;
        int* piVar6;
        undefined4* puVar7;
        ulong uVar8;
        ulong uVar9;
        double dVar11;

        if (param_3 < param_4) {
            dVar11 = (double)floor<int>((param_4 + param_3) / 2);
            uVar8 = (ulong)(int)dVar11;
            piVar6 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)param_1, uVar8);
            iVar1 = *piVar6;
            puVar7 = (undefined4*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)param_1,
                                                                           (ulong)param_4);
            uVar2 = *puVar7;
            puVar7 =
                (undefined4*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)param_1, uVar8);
            *puVar7 = uVar2;
            piVar6 =
                (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)param_1, (ulong)param_4);
            *piVar6 = iVar1;
            puVar7 =
                (undefined4*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)param_2, uVar8);
            uVar2 = *puVar7;
            puVar7 = (undefined4*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)param_2,
                                                                           (ulong)param_4);
            uVar3 = *puVar7;
            puVar7 =
                (undefined4*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)param_2, uVar8);
            *puVar7 = uVar3;
            puVar7 = (undefined4*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)param_2,
                                                                           (ulong)param_4);
            *puVar7 = uVar2;
            uVar8 = (ulong)param_3;
            iVar5 = param_3;
            do {
                piVar6 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)param_1, uVar8);
                if (*piVar6 < (int)(((uint)uVar8 & (uint)(iVar1 != 2147483647)) + iVar1)) {
                    puVar7 = (undefined4*)Array<int, eastl::allocator>::operator[](
                        (Array<int, eastl::allocator>*)param_1, uVar8);
                    uVar3 = *puVar7;
                    uVar9 = (ulong)iVar5;
                    puVar7 = (undefined4*)Array<int, eastl::allocator>::operator[](
                        (Array<int, eastl::allocator>*)param_1, uVar9);
                    uVar4 = *puVar7;
                    puVar7 = (undefined4*)Array<int, eastl::allocator>::operator[](
                        (Array<int, eastl::allocator>*)param_1, uVar8);
                    *puVar7 = uVar4;
                    puVar7 = (undefined4*)Array<int, eastl::allocator>::operator[](
                        (Array<int, eastl::allocator>*)param_1, uVar9);
                    *puVar7 = uVar3;
                    puVar7 = (undefined4*)Array<int, eastl::allocator>::operator[](
                        (Array<int, eastl::allocator>*)param_2, uVar8);
                    uVar3 = *puVar7;
                    puVar7 = (undefined4*)Array<int, eastl::allocator>::operator[](
                        (Array<int, eastl::allocator>*)param_2, uVar9);
                    uVar4 = *puVar7;
                    puVar7 = (undefined4*)Array<int, eastl::allocator>::operator[](
                        (Array<int, eastl::allocator>*)param_2, uVar8);
                    *puVar7 = uVar4;
                    iVar5 = iVar5 + 1;
                    puVar7 = (undefined4*)Array<int, eastl::allocator>::operator[](
                        (Array<int, eastl::allocator>*)param_2, uVar9);
                    *puVar7 = uVar3;
                }
                uVar8 = uVar8 + 1;
            } while (param_4 != (int)uVar8);
            uVar8 = (ulong)iVar5;
            puVar7 =
                (undefined4*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)param_1, uVar8);
            uVar3 = *puVar7;
            puVar7 = (undefined4*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)param_1,
                                                                           (ulong)param_4);
            *puVar7 = uVar3;
            piVar6 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)param_1, uVar8);
            *piVar6 = iVar1;
            puVar7 =
                (undefined4*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)param_2, uVar8);
            uVar3 = *puVar7;
            puVar7 = (undefined4*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)param_2,
                                                                           (ulong)param_4);
            *puVar7 = uVar3;
            puVar7 =
                (undefined4*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)param_2, uVar8);
            *puVar7 = uVar2;
            QuickSortParallel(param_1, param_2, param_3, iVar5 + -1);
            QuickSortParallel(param_1, param_2, iVar5 + 1, param_4);
        }
    }

} // namespace jag
