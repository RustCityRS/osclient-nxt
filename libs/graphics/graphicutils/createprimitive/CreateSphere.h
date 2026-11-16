// libs/graphics/graphicutils/createprimitive/CreateSphere.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::graphicutils {
    // 0x1009308a0
    void CreateSphereTriListIndices<unsigned int>(unsigned int* arg1, unsigned int arg2, unsigned int arg3,
                                                  unsigned int arg4, bool arg5) {
        int iVar1;
        unsigned int uVar3;
        int iVar4;
        unsigned long uVar5;
        unsigned int* puVar6;
        unsigned int uVar7;
        unsigned int uVar8;
        long lVar9;
        unsigned int uVar10;
        long lVar11;
        bool bVar12;

        if (arg1 == nullptr) {
            LogAssert("pIndexDataOut",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/graphicutils/"
                      "createprimitive/CreateSphere.h",
                      60, nullptr);
        }
        int iVar2 = GetSphereVertexCount(arg3, arg4);
        if (arg1 != nullptr) {
            uVar5 = (unsigned long)arg5;
            lVar11 = -uVar5 + 2;
            lVar9 = uVar5 + 1;
            puVar6 = arg1;
            if (arg3 != 0) {
                uVar7 = 1;
                do {
                    *puVar6 = 0;
                    uVar3 = uVar7 + 1;
                    if (uVar7 == arg3) {
                        uVar3 = 1;
                    }
                    puVar6[lVar9] = uVar3;
                    puVar6[lVar11] = uVar7;
                    puVar6 = puVar6 + 3;
                    bVar12 = uVar7 != arg3;
                    uVar7 = uVar7 + 1;
                } while (bVar12);
            }
            if (1 < arg4 - 1) {
                uVar3 = 1;
                iVar4 = 0;
                uVar7 = arg3;
                do {
                    if (arg3 != 0) {
                        uVar8 = 1;
                        do {
                            *puVar6 = iVar4 + uVar8;
                            iVar1 = (1 - arg3) + uVar8;
                            uVar10 = uVar8;
                            if (uVar8 == arg3) {
                                uVar10 = 0;
                            }
                            puVar6[lVar9] = uVar10 + (uVar3 - 1) * arg3 + 1;
                            uVar10 = uVar10 + uVar3 * arg3 + 1;
                            puVar6[lVar11] = uVar10;
                            puVar6[3] = iVar4 + uVar8;
                            puVar6[uVar5 + 4] = uVar10;
                            puVar6[-uVar5 + 5] = uVar7 + uVar8;
                            puVar6 = puVar6 + 6;
                            uVar8 = uVar8 + 1;
                        } while (iVar1 != 1);
                    }
                    uVar3 = uVar3 + 1;
                    uVar7 = uVar7 + arg3;
                    iVar4 = iVar4 + arg3;
                } while (uVar3 != arg4 - 1);
            }
            if (arg3 != 0) {
                uVar3 = ~arg3;
                uVar7 = 1;
                do {
                    *puVar6 = iVar2 - 1;
                    uVar8 = uVar7 + 1;
                    iVar4 = uVar3 + 2 + uVar7;
                    if (uVar3 + 1 + uVar7 == 0) {
                        uVar7 = 0;
                    }
                    puVar6[lVar9] = uVar7 + iVar2 + uVar3;
                    puVar6[lVar11] = uVar8 % arg3 + iVar2 + uVar3;
                    puVar6 = puVar6 + 3;
                    uVar7 = uVar8;
                } while (iVar4 != 1);
            }
            uVar7 = GetSphereTriListIndexCount(arg3, arg4);
            if (uVar7 != 0) {
                uVar5 = 0;
                do {
                    arg1[uVar5] = arg1[uVar5] + arg2;
                    uVar5 = uVar5 + 1;
                } while (uVar7 != uVar5);
            }
        }
    }

} // namespace jag::graphicutils

namespace jag {
    // 0x100930bf0
    shared_ptr_if_not_array<render::BufferedRenderTargets>::type
    make_shared<render::BufferedRenderTargets, int, int const&, int const&, render::Format&, char const (&)[11]>(
        int&& arg1, const int& arg2, const int& arg3, render::Format& format, char const (&arg5)[11]) {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_44;
        BufferedRenderTargets* local_40[2];

        auto arg1_00 = aligned_alloc(560, 8);
        if (arg1_00 == nullptr) {
            shared_ptr_if_not_array<render::BufferedRenderTargets>::type result;
        } else {
            local_40[0] = placement_new<render::BufferedRenderTargets, int, int const&, int const&, render::Format&,
                                        char const(&)[11]>((void*)((long)arg1_00 + 32), arg1, arg2, arg3, format, arg5);
            local_44 = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared<render::BufferedRenderTargets>, int, render::BufferedRenderTargets*&>(
                    arg1_00, &local_44, local_40);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_40[0]);
        }
        return result;
    }

} // namespace jag
