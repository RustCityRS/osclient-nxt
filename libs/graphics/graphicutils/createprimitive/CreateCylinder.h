// libs/graphics/graphicutils/createprimitive/CreateCylinder.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::graphicutils {
    // 0x1009c1730
    void CreateCylinderTriListIndices<unsigned int>(unsigned int* arg1, unsigned int arg2, unsigned int arg3,
                                                    bool arg4) {
        unsigned int uVar1;
        unsigned int* puVar2;
        unsigned long uVar3;
        unsigned int uVar4;
        int iVar5;
        unsigned int uVar6;
        unsigned int uVar7;
        unsigned long uVar8;
        bool bVar9;

        if ((arg1 == nullptr) || (arg3 == 0)) {
            LogAssert("pIndexDataOut && numVerticalSegments > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/graphicutils/"
                      "createprimitive/CreateCylinder.h",
                      44, nullptr);
        }
        if (arg1 != nullptr) {
            uVar3 = (unsigned long)arg4;
            uVar8 = (unsigned long)!arg4;
            uVar1 = GetCylinderVertexCount(arg3);
            uVar1 = uVar1 >> 1;
            puVar2 = arg1;
            if (arg3 != 0) {
                uVar7 = 2;
                do {
                    puVar2[uVar8 * 2] = 0;
                    puVar2[1] = uVar7 - 1;
                    uVar4 = 1;
                    if (-arg3 + uVar7 != 1) {
                        uVar4 = uVar7;
                    }
                    puVar2[uVar3 * 2] = uVar4;
                    puVar2 = puVar2 + 3;
                    iVar5 = -arg3 + uVar7;
                    uVar7 = uVar7 + 1;
                } while (iVar5 != 1);
            }
            if (arg3 != 0) {
                uVar7 = 1;
                do {
                    puVar2[uVar3 * 2] = uVar1;
                    puVar2[1] = uVar1 + uVar7;
                    iVar5 = (1 - arg3) + uVar7;
                    uVar4 = uVar7;
                    if (uVar7 == arg3) {
                        uVar4 = 0;
                    }
                    puVar2[uVar8 * 2] = uVar4 + uVar1 + 1;
                    puVar2 = puVar2 + 3;
                    uVar7 = uVar7 + 1;
                } while (iVar5 != 1);
            }
            if (arg3 != 0) {
                puVar2 = puVar2 + 3;
                uVar7 = 1;
                do {
                    puVar2[uVar8 * 2 - 3] = uVar7;
                    uVar4 = uVar7;
                    if (uVar7 == arg3) {
                        uVar4 = 0;
                    }
                    uVar6 = uVar1 + 1 + uVar4;
                    puVar2[-2] = uVar6;
                    puVar2[uVar3 * 2 - 3] = uVar4 + 1;
                    puVar2[uVar8 * 2] = uVar7;
                    puVar2[1] = uVar1 + uVar7;
                    puVar2[uVar3 * 2] = uVar6;
                    puVar2 = puVar2 + 6;
                    bVar9 = uVar7 != arg3;
                    uVar7 = uVar7 + 1;
                } while (bVar9);
            }
            uVar1 = GetCylinderTriListIndexCount(arg3);
            if (uVar1 != 0) {
                uVar3 = 0;
                do {
                    arg1[uVar3] = arg1[uVar3] + arg2;
                    uVar3 = uVar3 + 1;
                } while (uVar1 != uVar3);
            }
        }
    }

    // 0x1009c18c0
    void CreateCylinderLineListIndices<unsigned int>(unsigned int* arg1, unsigned int arg2, unsigned int arg3) {
        unsigned int uVar1;
        unsigned int* puVar2;
        unsigned long uVar3;
        int iVar4;
        unsigned int uVar5;
        unsigned int uVar6;
        long lVar7;
        unsigned int uVar8;
        bool bVar9;

        if ((arg1 == nullptr) || (arg3 == 0)) {
            LogAssert("pIndexDataOut && numVerticalSegments > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/graphicutils/"
                      "createprimitive/CreateCylinder.h",
                      120, nullptr);
        }
        if (arg1 != nullptr) {
            uVar1 = GetCylinderVertexCount(arg3);
            puVar2 = arg1;
            if (arg3 != 0) {
                uVar8 = 1;
                do {
                    *puVar2 = uVar8;
                    uVar6 = uVar8 + 1;
                    if (uVar8 == arg3) {
                        uVar6 = 1;
                    }
                    puVar2[1] = uVar6;
                    puVar2 = puVar2 + 2;
                    bVar9 = uVar8 != arg3;
                    uVar8 = uVar8 + 1;
                } while (bVar9);
            }
            if (arg3 != 0) {
                uVar8 = 1;
                do {
                    *puVar2 = 0;
                    puVar2[1] = uVar8;
                    puVar2 = puVar2 + 2;
                    bVar9 = uVar8 != arg3;
                    uVar8 = uVar8 + 1;
                } while (bVar9);
            }
            uVar8 = uVar1 >> 1;
            if (arg3 != 0) {
                uVar6 = 1;
                do {
                    *puVar2 = uVar6;
                    puVar2[1] = uVar8 + uVar6;
                    puVar2 = puVar2 + 2;
                    bVar9 = uVar6 != arg3;
                    uVar6 = uVar6 + 1;
                } while (bVar9);
            }
            if (arg3 != 0) {
                uVar6 = 1;
                do {
                    *puVar2 = uVar8 + uVar6;
                    iVar4 = (1 - arg3) + uVar6;
                    uVar5 = uVar6;
                    if (uVar6 == arg3) {
                        uVar5 = 0;
                    }
                    puVar2[1] = uVar5 + uVar8 + 1;
                    puVar2 = puVar2 + 2;
                    uVar6 = uVar6 + 1;
                } while (iVar4 != 1);
            }
            if (arg3 != 0) {
                lVar7 = 0;
                do {
                    puVar2[lVar7 * 2] = uVar8;
                    puVar2[lVar7 * 2 + 1] = (uVar1 >> 1) + 1 + (int)lVar7;
                    lVar7 = lVar7 + 1;
                } while (arg3 != (unsigned int)lVar7);
            }
            uVar1 = GetCylinderLineListIndexCount(arg3);
            if (uVar1 != 0) {
                uVar3 = 0;
                do {
                    arg1[uVar3] = arg1[uVar3] + arg2;
                    uVar3 = uVar3 + 1;
                } while (uVar1 != uVar3);
            }
        }
    }

} // namespace jag::graphicutils
