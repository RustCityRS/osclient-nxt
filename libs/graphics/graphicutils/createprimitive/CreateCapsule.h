// libs/graphics/graphicutils/createprimitive/CreateCapsule.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::graphicutils {
    // 0x1009bf5b0, 352 bytes, inline, placed by debug map only (low confidence)
    // void CreateCapsuleTriListIndices<unsigned int>(unsigned int*, unsigned int, unsigned int, unsigned int)
    void CreateCapsuleTriListIndices<unsigned int>(uint* param_1, uint param_2, uint param_3, uint param_4) {
        int iVar1;
        int iVar2;
        int iVar3;
        ulong uVar4;
        uint uVar5;
        int iVar6;
        int iVar7;
        int iVar8;
        uint uVar9;
        uint uVar10;
        int iVar11;

        if (param_1 == (uint*)0) {
            /* WARNING: Subroutine does not return */
            LogAssert("pIndexDataOut",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/graphicutils/"
                      "createprimitive/CreateCapsule.h",
                      64, (char*)0);
        }
        iVar8 = -param_3;
        iVar3 = 0;
        iVar1 = 0;
        uVar9 = 0;
        do {
            uVar5 = 0;
            do {
                if ((uVar5 != 0) && (uVar9 != 0)) {
                    uVar10 = (iVar8 + uVar5) - 2;
                    if (uVar9 == param_4) {
                        iVar2 = 3;
                        iVar11 = 2;
                        iVar6 = 1;
                        iVar7 = iVar1;
                    } else {
                        param_1[iVar1] = iVar3 + uVar5;
                        param_1[(long)iVar1 + 1] = (iVar3 + uVar5) - 1;
                        param_1[(long)iVar1 + 2] = uVar10;
                        if (uVar9 == 1) {
                            iVar1 = iVar1 + 3;
                            goto LAB_1009bf652;
                        }
                        iVar2 = 6;
                        iVar11 = 5;
                        iVar6 = 4;
                        iVar7 = iVar1 + 3;
                    }
                    param_1[iVar7] = iVar3 + uVar5;
                    iVar11 = iVar11 + iVar1;
                    param_1[iVar6 + iVar1] = uVar10;
                    iVar1 = iVar2 + iVar1;
                    param_1[iVar11] = (iVar8 + uVar5) - 1;
                }
            LAB_1009bf652:
                uVar5 = uVar5 + 1;
            } while (uVar5 <= param_3);
            uVar9 = uVar9 + 1;
            iVar8 = iVar8 + param_3 + 1;
            iVar3 = iVar3 + param_3 + 1;
            if (param_4 < uVar9) {
                uVar9 = GetCapsuleTriListIndexCount(param_3, param_4);
                if (uVar9 != 0) {
                    uVar4 = 0;
                    do {
                        param_1[uVar4] = param_1[uVar4] + param_2;
                        uVar4 = uVar4 + 1;
                    } while (uVar9 != uVar4);
                }
                return;
            }
        } while (true);
    }

    // 0x1009bf710, 480 bytes, inline, placed by debug map only (low confidence)
    // void CreateCapsuleLineListIndices<unsigned int>(unsigned int*, unsigned int, unsigned int, unsigned int)
    void CreateCapsuleLineListIndices<unsigned int>(uint* param_1, uint param_2, uint param_3, uint param_4) {
        long lVar1;
        uint uVar2;
        uint* puVar3;
        uint* puVar4;
        ulong uVar5;
        uint uVar6;
        long lVar7;
        int iVar8;
        uint uVar9;
        uint uVar10;
        uint* puVar11;
        uint uVar12;
        uint uVar13;
        uint local_48;
        uint local_44;
        uint local_40;
        uint local_3c;

        if (param_1 == (uint*)0) {
            /* WARNING: Subroutine does not return */
            LogAssert("pIndexDataOut",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/graphicutils/"
                      "createprimitive/CreateCapsule.h",
                      130, (char*)0);
        }
        uVar2 = GetCapsuleVertexCount(param_3, param_4);
        local_40 = uVar2 - 1;
        local_3c = 0;
        uVar12 = 0;
        puVar11 = param_1;
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
                local_48 = param_3 + 1 + uVar10;
                local_44 = local_40;
                puVar4 = std::min<unsigned int>(&local_48, &local_44);
                if (uVar2 <= *puVar4) {
                    /* WARNING: Subroutine does not return */
                    LogAssert("nextVertex < vertexCount",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                              "graphicutils/createprimitive/CreateCapsule.h",
                              157, (char*)0);
                }
                uVar6 = uVar6 + 1;
                uVar12 = uVar12 + 2;
                puVar11 = puVar3 + 2;
                uVar13 = *puVar4;
                uVar9 = uVar10;
            } while (uVar6 <= param_4);
            puVar11 = puVar3 + 2;
        } while (local_3c <= param_3);
        iVar8 = 0;
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
            } while (uVar12 <= param_3);
            puVar11 = puVar4 + 2;
            uVar2 = uVar2 + 1;
            iVar8 = iVar8 + param_3;
            uVar12 = uVar13 + (int)lVar7;
        } while (uVar2 <= param_4);
        iVar8 = GetCapsuleLineListIndexCount(param_3, param_4);
        if ((int)lVar7 + (uVar13 - iVar8) != 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("indexCount == static_cast<IndexType>(GetCapsuleLineListIndexCount(horzSegments, vertSegments))",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/graphicutils/"
                      "createprimitive/CreateCapsule.h",
                      178, (char*)0);
        }
        if ((int)((ulong)uVar13 + lVar7) != 0) {
            uVar5 = 0;
            do {
                param_1[uVar5] = param_1[uVar5] + param_2;
                uVar5 = uVar5 + 1;
            } while (((ulong)uVar13 + lVar7 & 4294967295) != uVar5);
        }
    }

} // namespace jag::graphicutils
