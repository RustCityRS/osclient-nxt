// libs/graphics/graphicutils/createprimitive/CreateCapsule.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::graphicutils {
    // 0x1009bf5b0
    void CreateCapsuleTriListIndices<unsigned int>(unsigned int* arg1, unsigned int arg2, unsigned int arg3,
                                                   unsigned int arg4) {
        int iVar2;
        unsigned long uVar4;
        unsigned int uVar5;
        int iVar6;
        int iVar7;
        unsigned int uVar10;
        int iVar11;

        if (arg1 == nullptr) {
            LogAssert("pIndexDataOut",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/graphicutils/"
                      "createprimitive/CreateCapsule.h",
                      64, nullptr);
        }
        int iVar8 = -arg3;
        int iVar3 = 0;
        int iVar1 = 0;
        unsigned int uVar9 = 0;
        do {
            uVar5 = 0;
            do {
                if ((uVar5 != 0) && (uVar9 != 0)) {
                    uVar10 = (iVar8 + uVar5) - 2;
                    if (uVar9 == arg4) {
                        iVar2 = 3;
                        iVar11 = 2;
                        iVar6 = 1;
                        iVar7 = iVar1;
                    } else {
                        arg1[iVar1] = iVar3 + uVar5;
                        arg1[iVar1 + 1] = (iVar3 + uVar5) - 1;
                        arg1[iVar1 + 2] = uVar10;
                        if (uVar9 == 1) {
                            iVar1 = iVar1 + 3;
                            goto LAB_1009bf652;
                        }
                        iVar2 = 6;
                        iVar11 = 5;
                        iVar6 = 4;
                        iVar7 = iVar1 + 3;
                    }
                    arg1[iVar7] = iVar3 + uVar5;
                    iVar11 = iVar11 + iVar1;
                    arg1[iVar6 + iVar1] = uVar10;
                    iVar1 = iVar2 + iVar1;
                    arg1[iVar11] = (iVar8 + uVar5) - 1;
                }
            LAB_1009bf652:
                uVar5 = uVar5 + 1;
            } while (uVar5 <= arg3);
            uVar9 = uVar9 + 1;
            iVar8 = iVar8 + arg3 + 1;
            iVar3 = iVar3 + arg3 + 1;
            if (arg4 < uVar9) {
                uVar9 = GetCapsuleTriListIndexCount(arg3, arg4);
                if (uVar9 != 0) {
                    uVar4 = 0;
                    do {
                        arg1[uVar4] = arg1[uVar4] + arg2;
                        uVar4 = uVar4 + 1;
                    } while (uVar9 != uVar4);
                }
                return;
            }
        } while (true);
    }

    // 0x1009bf710
    void CreateCapsuleLineListIndices<unsigned int>(unsigned int* arg1, unsigned int arg2, unsigned int arg3,
                                                    unsigned int arg4) {
        long lVar1;
        unsigned int* puVar3;
        unsigned int* puVar4;
        unsigned long uVar5;
        unsigned int uVar6;
        long lVar7;
        unsigned int uVar9;
        unsigned int uVar10;
        unsigned int uVar13;
        unsigned int local_48;
        unsigned int local_44;

        if (arg1 == nullptr) {
            LogAssert("pIndexDataOut",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/graphicutils/"
                      "createprimitive/CreateCapsule.h",
                      130, nullptr);
        }
        unsigned int uVar2 = GetCapsuleVertexCount(arg3, arg4);
        unsigned int local_40 = uVar2 - 1;
        unsigned int local_3c = 0;
        unsigned int uVar12 = 0;
        unsigned int* puVar11 = arg1;
        do {
            local_3c = local_3c + 1;
            uVar6 = 0;
            uVar13 = local_3c;
            uVar9 = 0;
            do {
                uVar10 = uVar13;
                puVar3 = puVar11;
                *puVar3 = uVar9;
                puVar3[1] = uVar10;
                local_48 = arg3 + 1 + uVar10;
                local_44 = local_40;
                puVar4 = std::min<unsigned int>(local_48, local_44);
                if (uVar2 <= *puVar4) {
                    LogAssert("nextVertex < vertexCount",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                              "graphicutils/createprimitive/CreateCapsule.h",
                              157, nullptr);
                }
                uVar6 = uVar6 + 1;
                uVar12 = uVar12 + 2;
                puVar11 = puVar3 + 2;
                uVar13 = *puVar4;
                uVar9 = uVar10;
            } while (uVar6 <= arg4);
            puVar11 = puVar3 + 2;
        } while (local_3c <= arg3);
        int iVar8 = 0;
        uVar2 = 0;
        do {
            uVar13 = uVar12;
            lVar7 = 0;
            uVar12 = 0;
            puVar3 = puVar11;
            do {
                puVar4 = puVar3;
                puVar11[lVar7] = iVar8 + uVar12;
                puVar11[lVar7 + 1] = iVar8 + uVar12 + 1;
                uVar12 = uVar12 + 1;
                lVar1 = lVar7 + 2;
                lVar7 = lVar7 + 2;
                puVar3 = puVar11 + lVar1;
            } while (uVar12 <= arg3);
            puVar11 = puVar4 + 2;
            uVar2 = uVar2 + 1;
            iVar8 = iVar8 + arg3;
            uVar12 = uVar13 + (int)lVar7;
        } while (uVar2 <= arg4);
        iVar8 = GetCapsuleLineListIndexCount(arg3, arg4);
        if ((int)lVar7 + (uVar13 - iVar8) != 0) {
            LogAssert("indexCount == static_cast<IndexType>(GetCapsuleLineListIndexCount(horzSegments, vertSegments))",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/graphicutils/"
                      "createprimitive/CreateCapsule.h",
                      178, nullptr);
        }
        if ((int)((unsigned long)uVar13 + lVar7) != 0) {
            uVar5 = 0;
            do {
                arg1[uVar5] = arg1[uVar5] + arg2;
                uVar5 = uVar5 + 1;
            } while (((unsigned long)uVar13 + lVar7 & 4294967295) != uVar5);
        }
    }

} // namespace jag::graphicutils
