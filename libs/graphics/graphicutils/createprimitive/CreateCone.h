// libs/graphics/graphicutils/createprimitive/CreateCone.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::graphicutils {
    // 0x1009c0d30, 304 bytes, inline, placed by debug map only (low confidence)
    // void CreateConeTriListIndices<unsigned int>(unsigned int*, unsigned int, unsigned int, bool)
    void CreateConeTriListIndices<unsigned int>(uint* param_1, uint param_2, uint param_3, bool param_4) {
        int iVar1;
        uint* puVar2;
        ulong uVar3;
        uint uVar4;
        uint uVar5;
        uint local_34[3];

        local_34[2] = param_3;
        if ((param_1 == (uint*)0) || (param_3 == 0)) {
            /* WARNING: Subroutine does not return */
            LogAssert("pIndexDataOut && numBaseVertices > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/graphicutils/"
                      "createprimitive/CreateCone.h",
                      39, (char*)0);
        }
        if (param_1 != (uint*)0) {
            local_34[0] = 3;
            local_34[1] = 128;
            local_34[2] = math::Clamp<unsigned int>(local_34 + 2, local_34, local_34 + 1);
            puVar2 = param_1;
            if (local_34[2] != 0) {
                uVar4 = 3;
                do {
                    uVar5 = -local_34[2] + uVar4;
                    if (uVar5 != 2) {
                        uVar5 = uVar4;
                    }
                    puVar2[(ulong)!param_4 * 2] = 0;
                    puVar2[1] = uVar5;
                    puVar2[(ulong)param_4 * 2] = uVar4 - 1;
                    puVar2 = puVar2 + 3;
                    iVar1 = -local_34[2] + uVar4;
                    uVar4 = uVar4 + 1;
                } while (iVar1 != 2);
            }
            if (local_34[2] != 0) {
                uVar4 = 3;
                do {
                    puVar2[(ulong)!param_4 * 2] = 1;
                    puVar2[1] = uVar4 - 1;
                    uVar5 = -local_34[2] + uVar4;
                    if (uVar5 != 2) {
                        uVar5 = uVar4;
                    }
                    puVar2[(ulong)param_4 * 2] = uVar5;
                    puVar2 = puVar2 + 3;
                    iVar1 = -local_34[2] + uVar4;
                    uVar4 = uVar4 + 1;
                } while (iVar1 != 2);
            }
            uVar4 = GetConeTriListIndexCount(local_34[2]);
            if (uVar4 != 0) {
                uVar3 = 0;
                do {
                    param_1[uVar3] = param_1[uVar3] + param_2;
                    uVar3 = uVar3 + 1;
                } while (uVar4 != uVar3);
            }
        }
    }

    // 0x1009c0e60, 272 bytes, inline, placed by debug map only (low confidence)
    // void CreateConeLineListIndices<unsigned int>(unsigned int*, unsigned int, unsigned int)
    void CreateConeLineListIndices<unsigned int>(uint* param_1, uint param_2, uint param_3) {
        uint* puVar1;
        ulong uVar2;
        uint uVar3;
        long lVar4;
        int iVar5;
        uint uVar6;

        if ((param_1 == (uint*)0) || (param_3 == 0)) {
            /* WARNING: Subroutine does not return */
            LogAssert("pIndexDataOut && numBaseVertices > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/graphicutils/"
                      "createprimitive/CreateCone.h",
                      99, (char*)0);
        }
        if (param_1 != (uint*)0) {
            puVar1 = param_1;
            if (param_3 != 0) {
                uVar3 = 2;
                do {
                    *puVar1 = 0;
                    puVar1[1] = uVar3;
                    puVar1 = puVar1 + 2;
                    iVar5 = uVar3 - param_3;
                    uVar3 = uVar3 + 1;
                } while (iVar5 != 1);
            }
            if (param_3 != 0) {
                uVar3 = 3;
                do {
                    *puVar1 = uVar3 - 1;
                    uVar6 = -param_3 + uVar3;
                    if (uVar6 != 2) {
                        uVar6 = uVar3;
                    }
                    puVar1[1] = uVar6;
                    puVar1 = puVar1 + 2;
                    iVar5 = -param_3 + uVar3;
                    uVar3 = uVar3 + 1;
                } while (iVar5 != 2);
            }
            if (param_3 != 0) {
                lVar4 = 0;
                do {
                    puVar1[lVar4 * 2] = 1;
                    puVar1[lVar4 * 2 + 1] = (int)lVar4 + 2;
                    lVar4 = lVar4 + 1;
                } while (param_3 != (uint)lVar4);
            }
            uVar3 = GetConeLineListIndexCount(param_3);
            if (uVar3 != 0) {
                uVar2 = 0;
                do {
                    param_1[uVar2] = param_1[uVar2] + param_2;
                    uVar2 = uVar2 + 1;
                } while (uVar3 != uVar2);
            }
        }
    }

} // namespace jag::graphicutils
