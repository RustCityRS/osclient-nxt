// libs/graphics/graphicutils/createprimitive/CreateCone.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::graphicutils {
    // 0x1009c0d30
    void CreateConeTriListIndices<unsigned int>(unsigned int* arg1, unsigned int arg2, unsigned int arg3, bool arg4) {
        int iVar1;
        unsigned int* puVar2;
        unsigned long uVar3;
        unsigned int uVar4;
        unsigned int uVar5;
        unsigned int local_34[3];

        local_34[2] = arg3;
        if ((arg1 == nullptr) || (arg3 == 0)) {
            LogAssert("pIndexDataOut && numBaseVertices > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/graphicutils/"
                      "createprimitive/CreateCone.h",
                      39, nullptr);
        }
        if (arg1 != nullptr) {
            local_34[0] = 3;
            local_34[1] = 128;
            local_34[2] = math::Clamp<unsigned int>(*(local_34 + 2), *local_34, *(local_34 + 1));
            puVar2 = arg1;
            if (local_34[2] != 0) {
                uVar4 = 3;
                do {
                    uVar5 = -local_34[2] + uVar4;
                    if (uVar5 != 2) {
                        uVar5 = uVar4;
                    }
                    puVar2[!arg4 * 2] = 0;
                    puVar2[1] = uVar5;
                    puVar2[arg4 * 2] = uVar4 - 1;
                    puVar2 = puVar2 + 3;
                    iVar1 = -local_34[2] + uVar4;
                    uVar4 = uVar4 + 1;
                } while (iVar1 != 2);
            }
            if (local_34[2] != 0) {
                uVar4 = 3;
                do {
                    puVar2[!arg4 * 2] = 1;
                    puVar2[1] = uVar4 - 1;
                    uVar5 = -local_34[2] + uVar4;
                    if (uVar5 != 2) {
                        uVar5 = uVar4;
                    }
                    puVar2[arg4 * 2] = uVar5;
                    puVar2 = puVar2 + 3;
                    iVar1 = -local_34[2] + uVar4;
                    uVar4 = uVar4 + 1;
                } while (iVar1 != 2);
            }
            uVar4 = GetConeTriListIndexCount(local_34[2]);
            if (uVar4 != 0) {
                uVar3 = 0;
                do {
                    arg1[uVar3] = arg1[uVar3] + arg2;
                    uVar3 = uVar3 + 1;
                } while (uVar4 != uVar3);
            }
        }
    }

    // 0x1009c0e60
    void CreateConeLineListIndices<unsigned int>(unsigned int* arg1, unsigned int arg2, unsigned int arg3) {
        unsigned int* puVar1;
        unsigned long uVar2;
        unsigned int uVar3;
        long lVar4;
        int iVar5;
        unsigned int uVar6;

        if ((arg1 == nullptr) || (arg3 == 0)) {
            LogAssert("pIndexDataOut && numBaseVertices > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/graphicutils/"
                      "createprimitive/CreateCone.h",
                      99, nullptr);
        }
        if (arg1 != nullptr) {
            puVar1 = arg1;
            if (arg3 != 0) {
                uVar3 = 2;
                do {
                    *puVar1 = 0;
                    puVar1[1] = uVar3;
                    puVar1 = puVar1 + 2;
                    iVar5 = uVar3 - arg3;
                    uVar3 = uVar3 + 1;
                } while (iVar5 != 1);
            }
            if (arg3 != 0) {
                uVar3 = 3;
                do {
                    *puVar1 = uVar3 - 1;
                    uVar6 = -arg3 + uVar3;
                    if (uVar6 != 2) {
                        uVar6 = uVar3;
                    }
                    puVar1[1] = uVar6;
                    puVar1 = puVar1 + 2;
                    iVar5 = -arg3 + uVar3;
                    uVar3 = uVar3 + 1;
                } while (iVar5 != 2);
            }
            if (arg3 != 0) {
                lVar4 = 0;
                do {
                    puVar1[lVar4 * 2] = 1;
                    puVar1[lVar4 * 2 + 1] = (int)lVar4 + 2;
                    lVar4 = lVar4 + 1;
                } while (arg3 != (unsigned int)lVar4);
            }
            uVar3 = GetConeLineListIndexCount(arg3);
            if (uVar3 != 0) {
                uVar2 = 0;
                do {
                    arg1[uVar2] = arg1[uVar2] + arg2;
                    uVar2 = uVar2 + 1;
                } while (uVar3 != uVar2);
            }
        }
    }

} // namespace jag::graphicutils
