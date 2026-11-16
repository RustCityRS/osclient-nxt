// libs/graphics/graphicutils/createprimitive/CreateCylinder.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::graphicutils {
    // 0x1009c1730, 400 bytes, inline, placed by debug map only (low confidence)
    // void CreateCylinderTriListIndices<unsigned int>(unsigned int*, unsigned int, unsigned int, bool)
    void CreateCylinderTriListIndices<unsigned int>(uint* param_1, uint param_2, uint param_3, bool param_4) {
        uint uVar1;
        uint* puVar2;
        ulong uVar3;
        uint uVar4;
        int iVar5;
        uint uVar6;
        uint uVar7;
        ulong uVar8;
        bool bVar9;

        if ((param_1 == (uint*)0) || (param_3 == 0)) {
            /* WARNING: Subroutine does not return */
            LogAssert("pIndexDataOut && numVerticalSegments > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/graphicutils/"
                      "createprimitive/CreateCylinder.h",
                      44, (char*)0);
        }
        if (param_1 != (uint*)0) {
            uVar3 = (ulong)param_4;
            uVar8 = (ulong)!param_4;
            uVar1 = GetCylinderVertexCount(param_3);
            uVar1 = uVar1 >> 1;
            puVar2 = param_1;
            if (param_3 != 0) {
                uVar7 = 2;
                do {
                    puVar2[uVar8 * 2] = 0;
                    puVar2[1] = uVar7 - 1;
                    uVar4 = 1;
                    if (-param_3 + uVar7 != 1) {
                        uVar4 = uVar7;
                    }
                    puVar2[uVar3 * 2] = uVar4;
                    puVar2 = puVar2 + 3;
                    iVar5 = -param_3 + uVar7;
                    uVar7 = uVar7 + 1;
                } while (iVar5 != 1);
            }
            if (param_3 != 0) {
                uVar7 = 1;
                do {
                    puVar2[uVar3 * 2] = uVar1;
                    puVar2[1] = uVar1 + uVar7;
                    iVar5 = (1 - param_3) + uVar7;
                    uVar4 = uVar7;
                    if (uVar7 == param_3) {
                        uVar4 = 0;
                    }
                    puVar2[uVar8 * 2] = uVar4 + uVar1 + 1;
                    puVar2 = puVar2 + 3;
                    uVar7 = uVar7 + 1;
                } while (iVar5 != 1);
            }
            if (param_3 != 0) {
                puVar2 = puVar2 + 3;
                uVar7 = 1;
                do {
                    puVar2[uVar8 * 2 + -3] = uVar7;
                    uVar4 = uVar7;
                    if (uVar7 == param_3) {
                        uVar4 = 0;
                    }
                    uVar6 = uVar1 + 1 + uVar4;
                    puVar2[-2] = uVar6;
                    puVar2[uVar3 * 2 + -3] = uVar4 + 1;
                    puVar2[uVar8 * 2] = uVar7;
                    puVar2[1] = uVar1 + uVar7;
                    puVar2[uVar3 * 2] = uVar6;
                    puVar2 = puVar2 + 6;
                    bVar9 = uVar7 != param_3;
                    uVar7 = uVar7 + 1;
                } while (bVar9);
            }
            uVar1 = GetCylinderTriListIndexCount(param_3);
            if (uVar1 != 0) {
                uVar3 = 0;
                do {
                    param_1[uVar3] = param_1[uVar3] + param_2;
                    uVar3 = uVar3 + 1;
                } while (uVar1 != uVar3);
            }
        }
    }

    // 0x1009c18c0, 432 bytes, inline, placed by debug map only (low confidence)
    // void CreateCylinderLineListIndices<unsigned int>(unsigned int*, unsigned int, unsigned int)
    void CreateCylinderLineListIndices<unsigned int>(uint* param_1, uint param_2, uint param_3) {
        uint uVar1;
        uint* puVar2;
        ulong uVar3;
        int iVar4;
        uint uVar5;
        uint uVar6;
        long lVar7;
        uint uVar8;
        bool bVar9;

        if ((param_1 == (uint*)0) || (param_3 == 0)) {
            /* WARNING: Subroutine does not return */
            LogAssert("pIndexDataOut && numVerticalSegments > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/graphicutils/"
                      "createprimitive/CreateCylinder.h",
                      120, (char*)0);
        }
        if (param_1 != (uint*)0) {
            uVar1 = GetCylinderVertexCount(param_3);
            puVar2 = param_1;
            if (param_3 != 0) {
                uVar8 = 1;
                do {
                    *puVar2 = uVar8;
                    uVar6 = uVar8 + 1;
                    if (uVar8 == param_3) {
                        uVar6 = 1;
                    }
                    puVar2[1] = uVar6;
                    puVar2 = puVar2 + 2;
                    bVar9 = uVar8 != param_3;
                    uVar8 = uVar8 + 1;
                } while (bVar9);
            }
            if (param_3 != 0) {
                uVar8 = 1;
                do {
                    *puVar2 = 0;
                    puVar2[1] = uVar8;
                    puVar2 = puVar2 + 2;
                    bVar9 = uVar8 != param_3;
                    uVar8 = uVar8 + 1;
                } while (bVar9);
            }
            uVar8 = uVar1 >> 1;
            if (param_3 != 0) {
                uVar6 = 1;
                do {
                    *puVar2 = uVar6;
                    puVar2[1] = uVar8 + uVar6;
                    puVar2 = puVar2 + 2;
                    bVar9 = uVar6 != param_3;
                    uVar6 = uVar6 + 1;
                } while (bVar9);
            }
            if (param_3 != 0) {
                uVar6 = 1;
                do {
                    *puVar2 = uVar8 + uVar6;
                    iVar4 = (1 - param_3) + uVar6;
                    uVar5 = uVar6;
                    if (uVar6 == param_3) {
                        uVar5 = 0;
                    }
                    puVar2[1] = uVar5 + uVar8 + 1;
                    puVar2 = puVar2 + 2;
                    uVar6 = uVar6 + 1;
                } while (iVar4 != 1);
            }
            if (param_3 != 0) {
                lVar7 = 0;
                do {
                    puVar2[lVar7 * 2] = uVar8;
                    puVar2[lVar7 * 2 + 1] = (uVar1 >> 1) + 1 + (int)lVar7;
                    lVar7 = lVar7 + 1;
                } while (param_3 != (uint)lVar7);
            }
            uVar1 = GetCylinderLineListIndexCount(param_3);
            if (uVar1 != 0) {
                uVar3 = 0;
                do {
                    param_1[uVar3] = param_1[uVar3] + param_2;
                    uVar3 = uVar3 + 1;
                } while (uVar1 != uVar3);
            }
        }
    }

} // namespace jag::graphicutils
