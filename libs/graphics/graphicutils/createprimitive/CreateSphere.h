// libs/graphics/graphicutils/createprimitive/CreateSphere.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::graphicutils {
    // 0x1009308a0, 560 bytes, inline, placed by debug map only (low confidence)
    // void CreateSphereTriListIndices<unsigned int>(unsigned int*, unsigned int, unsigned int, unsigned int, bool)
    void CreateSphereTriListIndices<unsigned int>(uint* param_1, uint param_2, uint param_3, uint param_4,
                                                  bool param_5) {
        int iVar1;
        int iVar2;
        uint uVar3;
        int iVar4;
        ulong uVar5;
        uint* puVar6;
        uint uVar7;
        uint uVar8;
        long lVar9;
        uint uVar10;
        long lVar11;
        bool bVar12;

        if (param_1 == (uint*)0) {
            /* WARNING: Subroutine does not return */
            LogAssert("pIndexDataOut",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/graphicutils/"
                      "createprimitive/CreateSphere.h",
                      60, (char*)0);
        }
        iVar2 = GetSphereVertexCount(param_3, param_4);
        if (param_1 != (uint*)0) {
            uVar5 = (ulong)param_5;
            lVar11 = -uVar5 + 2;
            lVar9 = uVar5 + 1;
            puVar6 = param_1;
            if (param_3 != 0) {
                uVar7 = 1;
                do {
                    *puVar6 = 0;
                    uVar3 = uVar7 + 1;
                    if (uVar7 == param_3) {
                        uVar3 = 1;
                    }
                    puVar6[lVar9] = uVar3;
                    puVar6[lVar11] = uVar7;
                    puVar6 = puVar6 + 3;
                    bVar12 = uVar7 != param_3;
                    uVar7 = uVar7 + 1;
                } while (bVar12);
            }
            if (1 < param_4 - 1) {
                uVar3 = 1;
                iVar4 = 0;
                uVar7 = param_3;
                do {
                    if (param_3 != 0) {
                        uVar8 = 1;
                        do {
                            *puVar6 = iVar4 + uVar8;
                            iVar1 = (1 - param_3) + uVar8;
                            uVar10 = uVar8;
                            if (uVar8 == param_3) {
                                uVar10 = 0;
                            }
                            puVar6[lVar9] = uVar10 + (uVar3 - 1) * param_3 + 1;
                            uVar10 = uVar10 + uVar3 * param_3 + 1;
                            puVar6[lVar11] = uVar10;
                            puVar6[3] = iVar4 + uVar8;
                            puVar6[uVar5 + 4] = uVar10;
                            puVar6[-uVar5 + 5] = uVar7 + uVar8;
                            puVar6 = puVar6 + 6;
                            uVar8 = uVar8 + 1;
                        } while (iVar1 != 1);
                    }
                    uVar3 = uVar3 + 1;
                    uVar7 = uVar7 + param_3;
                    iVar4 = iVar4 + param_3;
                } while (uVar3 != param_4 - 1);
            }
            if (param_3 != 0) {
                uVar3 = ~param_3;
                uVar7 = 1;
                do {
                    *puVar6 = iVar2 - 1;
                    uVar8 = uVar7 + 1;
                    iVar4 = uVar3 + 2 + uVar7;
                    if (uVar3 + 1 + uVar7 == 0) {
                        uVar7 = 0;
                    }
                    puVar6[lVar9] = uVar7 + iVar2 + uVar3;
                    puVar6[lVar11] = uVar8 % param_3 + iVar2 + uVar3;
                    puVar6 = puVar6 + 3;
                    uVar7 = uVar8;
                } while (iVar4 != 1);
            }
            uVar7 = GetSphereTriListIndexCount(param_3, param_4);
            if (uVar7 != 0) {
                uVar5 = 0;
                do {
                    param_1[uVar5] = param_1[uVar5] + param_2;
                    uVar5 = uVar5 + 1;
                } while (uVar7 != uVar5);
            }
        }
    }

} // namespace jag::graphicutils

namespace jag {
    // 0x100930bf0, 192 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<render::BufferedRenderTargets>::type make_shared<render::BufferedRenderTargets, int, int const&, int const&, render::Format&, char const (&) [11]>(int&&, int const&, int const&, render::Format&, char const (&) [11])
    jag*
    jag::make_shared<render::BufferedRenderTargets, int, int const&, int const&, render::Format&, char const (&)[11]>(
        int* param_1, int* param_2, int* param_3, Format* param_4, char* param_5) {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_44;
        BufferedRenderTargets* local_40[2];

        pvVar1 = (void*)aligned_alloc(560, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_40[0] = placement_new<render::BufferedRenderTargets, int, int const&, int const&, render::Format&,
                                        char const(&)[11]>((void*)((long)pvVar1 + 32), param_1, param_2, param_3,
                                                           param_4, param_5);
            local_44 = 1;
            prVar2 =
                placement_new<ref_counter_shared<render::BufferedRenderTargets>, int, render::BufferedRenderTargets*&>(
                    pvVar1, &local_44, local_40);
            prVar2->~AutoSingleton(local_40[0]);
            prVar2->~AutoSingleton(local_40[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_40[0]);
        }
        return this;
    }

} // namespace jag
