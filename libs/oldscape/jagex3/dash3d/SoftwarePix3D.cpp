// libs/oldscape/jagex3/dash3d/SoftwarePix3D.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.oldscape.jagex3

#include "SoftwarePix3D.h"

namespace jag::oldscape::dash3d {
    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    SoftwarePix3D::PrepareRender();

    // 0x1002f8dc0, 3168 bytes, placed by class name and debug map
    // SoftwarePix3D::FlatTriangle(int, int, int, int, int, int, int)
    void SoftwarePix3D::FlatTriangle(int param_1, int param_2, int param_3, int param_4, int param_5, int param_6,
                                     int param_7) {
        int iVar1;
        int* piVar2;
        int iVar3;
        uint uVar4;
        int iVar5;
        ulong uVar6;
        int iVar7;
        uint uVar8;
        uint uVar9;
        int iVar10;
        int iVar11;
        int iVar12;
        int iVar13;
        undefined1* puVar14;
        int iVar15;

        if (field_12 < 256) {
            iVar11 = 0;
            uVar6 = 0;
            if (param_2 - param_1 != 0) {
                uVar6 = (long)((param_5 - param_4) * 16384) / (long)(param_2 - param_1) & 4294967295;
            }
            if (param_3 - param_2 != 0) {
                iVar11 = ((param_6 - param_5) * 16384) / (param_3 - param_2);
            }
            iVar1 = 0;
            if (param_1 - param_3 != 0) {
                iVar1 = ((param_4 - param_6) * 16384) / (param_1 - param_3);
            }
            iVar5 = (int)uVar6;
            if ((param_2 < param_1) || (param_3 < param_1)) {
                uVar9 = field_32;
                if (param_3 < param_2) {
                    if (param_3 < (int)uVar9) {
                        if ((int)uVar9 < param_1) {
                            param_1 = uVar9;
                        }
                        if ((int)uVar9 < param_2) {
                            param_2 = uVar9;
                        }
                        uVar4 = 0;
                        uVar9 = param_3;
                        if (param_3 < 0) {
                            uVar9 = uVar4;
                        }
                        iVar15 = param_6 * 16384 - (iVar11 * param_3 & param_3 >> 31);
                        iVar13 = param_6 * 16384 - (param_3 >> 31 & iVar1 * param_3);
                        if (param_1 < param_2) {
                            iVar12 = param_4 * 16384 - (param_1 >> 31 & param_1 * iVar5);
                            if (-1 < param_1) {
                                uVar4 = param_1;
                            }
                            iVar10 = param_2 - uVar4;
                            iVar7 = uVar4 - uVar9;
                            piVar2 = (int*)eastl::vector<int, eastl::allocator>::operator[](
                                (vector<int, eastl::allocator>*)&field_56, (ulong)uVar9);
                            puVar14 = &field_120;
                            iVar3 = *piVar2;
                            if (iVar11 < iVar1) {
                                if (0 < iVar7) {
                                    iVar7 = iVar7 + 1;
                                    do {
                                        FlatRaster(this, (SharedArray*)puVar14, iVar3, param_7, (int)uVar6,
                                                   iVar15 >> 14, iVar13 >> 14);
                                        iVar15 = iVar15 + iVar11;
                                        iVar13 = iVar13 + iVar1;
                                        iVar3 = iVar3 + field_104;
                                        iVar7 = iVar7 + -1;
                                    } while (1 < iVar7);
                                }
                                if (0 < iVar10) {
                                    iVar10 = iVar10 + 1;
                                    do {
                                        FlatRaster(this, (SharedArray*)puVar14, iVar3, param_7, (int)uVar6,
                                                   iVar15 >> 14, iVar12 >> 14);
                                        iVar15 = iVar15 + iVar11;
                                        iVar12 = iVar12 + iVar5;
                                        iVar3 = iVar3 + field_104;
                                        iVar10 = iVar10 + -1;
                                    } while (1 < iVar10);
                                }
                            } else {
                                if (0 < iVar7) {
                                    iVar7 = iVar7 + 1;
                                    do {
                                        FlatRaster(this, (SharedArray*)puVar14, iVar3, param_7, (int)uVar6,
                                                   iVar13 >> 14, iVar15 >> 14);
                                        iVar15 = iVar15 + iVar11;
                                        iVar13 = iVar13 + iVar1;
                                        iVar3 = iVar3 + field_104;
                                        iVar7 = iVar7 + -1;
                                    } while (1 < iVar7);
                                }
                                if (0 < iVar10) {
                                    iVar10 = iVar10 + 1;
                                    do {
                                        FlatRaster(this, (SharedArray*)puVar14, iVar3, param_7, (int)uVar6,
                                                   iVar12 >> 14, iVar15 >> 14);
                                        iVar15 = iVar15 + iVar11;
                                        iVar12 = iVar12 + iVar5;
                                        iVar3 = iVar3 + field_104;
                                        iVar10 = iVar10 + -1;
                                    } while (1 < iVar10);
                                }
                            }
                        } else {
                            if (-1 < param_2) {
                                uVar4 = param_2;
                            }
                            iVar10 = param_5 * 16384 - (param_2 >> 31 & param_2 * iVar5);
                            iVar7 = param_1 - uVar4;
                            iVar3 = uVar4 - uVar9;
                            piVar2 = (int*)eastl::vector<int, eastl::allocator>::operator[](
                                (vector<int, eastl::allocator>*)&field_56, (ulong)uVar9);
                            puVar14 = &field_120;
                            iVar12 = *piVar2;
                            if (iVar11 < iVar1) {
                                if (0 < iVar3) {
                                    iVar3 = iVar3 + 1;
                                    do {
                                        FlatRaster(this, (SharedArray*)puVar14, iVar12, param_7, (int)uVar6,
                                                   iVar15 >> 14, iVar13 >> 14);
                                        iVar15 = iVar15 + iVar11;
                                        iVar13 = iVar13 + iVar1;
                                        iVar12 = iVar12 + field_104;
                                        iVar3 = iVar3 + -1;
                                    } while (1 < iVar3);
                                }
                                if (0 < iVar7) {
                                    iVar7 = iVar7 + 1;
                                    do {
                                        FlatRaster(this, (SharedArray*)puVar14, iVar12, param_7, (int)uVar6,
                                                   iVar10 >> 14, iVar13 >> 14);
                                        iVar10 = iVar10 + iVar5;
                                        iVar13 = iVar13 + iVar1;
                                        iVar12 = iVar12 + field_104;
                                        iVar7 = iVar7 + -1;
                                    } while (1 < iVar7);
                                }
                            } else {
                                if (0 < iVar3) {
                                    iVar3 = iVar3 + 1;
                                    do {
                                        FlatRaster(this, (SharedArray*)puVar14, iVar12, param_7, (int)uVar6,
                                                   iVar13 >> 14, iVar15 >> 14);
                                        iVar15 = iVar15 + iVar11;
                                        iVar13 = iVar13 + iVar1;
                                        iVar12 = iVar12 + field_104;
                                        iVar3 = iVar3 + -1;
                                    } while (1 < iVar3);
                                }
                                if (0 < iVar7) {
                                    iVar7 = iVar7 + 1;
                                    do {
                                        FlatRaster(this, (SharedArray*)puVar14, iVar12, param_7, (int)uVar6,
                                                   iVar13 >> 14, iVar10 >> 14);
                                        iVar10 = iVar10 + iVar5;
                                        iVar13 = iVar13 + iVar1;
                                        iVar12 = iVar12 + field_104;
                                        iVar7 = iVar7 + -1;
                                    } while (1 < iVar7);
                                }
                            }
                        }
                    }
                } else if (param_2 < (int)uVar9) {
                    if ((int)uVar9 < param_3) {
                        param_3 = uVar9;
                    }
                    if ((int)uVar9 < param_1) {
                        param_1 = uVar9;
                    }
                    iVar13 = param_5 * 16384;
                    uVar4 = iVar5 * param_2;
                    uVar6 = (ulong)uVar4;
                    uVar9 = param_2;
                    if (param_2 < 0) {
                        uVar9 = 0;
                    }
                    uVar8 = param_2 >> 31;
                    if (param_3 < param_1) {
                        uVar6 = (ulong)(uVar4 & uVar8);
                        iVar15 = iVar13 - (uVar4 & uVar8);
                        iVar13 = iVar13 - (uVar8 & iVar11 * param_2);
                        uVar4 = 0;
                        if (-1 < param_3) {
                            uVar4 = param_3;
                        }
                        iVar10 = param_6 * 16384 - (param_3 >> 31 & param_3 * iVar1);
                        iVar7 = param_1 - uVar4;
                        piVar2 = (int*)eastl::vector<int, eastl::allocator>::operator[](
                            (vector<int, eastl::allocator>*)&field_56, (ulong)uVar9);
                        puVar14 = &field_120;
                        iVar12 = *piVar2;
                        iVar3 = uVar4 - uVar9;
                        if ((iVar3 == 0) || (iVar11 <= iVar5)) {
                            if (0 < iVar3) {
                                iVar3 = iVar3 + 1;
                                do {
                                    FlatRaster(this, (SharedArray*)puVar14, iVar12, param_7, (int)uVar6, iVar13 >> 14,
                                               iVar15 >> 14);
                                    iVar15 = iVar15 + iVar5;
                                    iVar13 = iVar13 + iVar11;
                                    iVar12 = iVar12 + field_104;
                                    iVar3 = iVar3 + -1;
                                } while (1 < iVar3);
                            }
                            if (0 < iVar7) {
                                iVar7 = iVar7 + 1;
                                do {
                                    FlatRaster(this, (SharedArray*)puVar14, iVar12, param_7, (int)uVar6, iVar10 >> 14,
                                               iVar15 >> 14);
                                    iVar15 = iVar15 + iVar5;
                                    iVar10 = iVar10 + iVar1;
                                    iVar12 = iVar12 + field_104;
                                    iVar7 = iVar7 + -1;
                                } while (1 < iVar7);
                            }
                        } else {
                            if (0 < iVar3) {
                                iVar3 = iVar3 + 1;
                                do {
                                    FlatRaster(this, (SharedArray*)puVar14, iVar12, param_7, (int)uVar6, iVar15 >> 14,
                                               iVar13 >> 14);
                                    iVar15 = iVar15 + iVar5;
                                    iVar13 = iVar13 + iVar11;
                                    iVar12 = iVar12 + field_104;
                                    iVar3 = iVar3 + -1;
                                } while (1 < iVar3);
                            }
                            if (0 < iVar7) {
                                iVar7 = iVar7 + 1;
                                do {
                                    FlatRaster(this, (SharedArray*)puVar14, iVar12, param_7, (int)uVar6, iVar15 >> 14,
                                               iVar10 >> 14);
                                    iVar15 = iVar15 + iVar5;
                                    iVar10 = iVar10 + iVar1;
                                    iVar12 = iVar12 + field_104;
                                    iVar7 = iVar7 + -1;
                                } while (1 < iVar7);
                            }
                        }
                    } else {
                        iVar15 = iVar13 - (iVar11 * param_2 & uVar8);
                        iVar13 = iVar13 - (uVar8 & uVar4);
                        iVar12 = param_4 * 16384 - (param_1 >> 31 & param_1 * iVar1);
                        uVar4 = 0;
                        if (-1 < param_1) {
                            uVar4 = param_1;
                        }
                        iVar7 = param_3 - uVar4;
                        iVar10 = uVar4 - uVar9;
                        piVar2 = (int*)eastl::vector<int, eastl::allocator>::operator[](
                            (vector<int, eastl::allocator>*)&field_56, (ulong)uVar9);
                        puVar14 = &field_120;
                        iVar3 = *piVar2;
                        if (iVar5 < iVar11) {
                            if (0 < iVar10) {
                                iVar10 = iVar10 + 1;
                                do {
                                    FlatRaster(this, (SharedArray*)puVar14, iVar3, param_7, (int)uVar6, iVar13 >> 14,
                                               iVar15 >> 14);
                                    iVar13 = iVar13 + iVar5;
                                    iVar15 = iVar15 + iVar11;
                                    iVar3 = iVar3 + field_104;
                                    iVar10 = iVar10 + -1;
                                } while (1 < iVar10);
                            }
                            if (0 < iVar7) {
                                iVar7 = iVar7 + 1;
                                do {
                                    FlatRaster(this, (SharedArray*)puVar14, iVar3, param_7, (int)uVar6, iVar12 >> 14,
                                               iVar15 >> 14);
                                    iVar12 = iVar12 + iVar1;
                                    iVar15 = iVar15 + iVar11;
                                    iVar3 = iVar3 + field_104;
                                    iVar7 = iVar7 + -1;
                                } while (1 < iVar7);
                            }
                        } else {
                            if (0 < iVar10) {
                                iVar10 = iVar10 + 1;
                                do {
                                    FlatRaster(this, (SharedArray*)puVar14, iVar3, param_7, (int)uVar6, iVar15 >> 14,
                                               iVar13 >> 14);
                                    iVar13 = iVar13 + iVar5;
                                    iVar15 = iVar15 + iVar11;
                                    iVar3 = iVar3 + field_104;
                                    iVar10 = iVar10 + -1;
                                } while (1 < iVar10);
                            }
                            if (0 < iVar7) {
                                iVar7 = iVar7 + 1;
                                do {
                                    FlatRaster(this, (SharedArray*)puVar14, iVar3, param_7, (int)uVar6, iVar15 >> 14,
                                               iVar12 >> 14);
                                    iVar12 = iVar12 + iVar1;
                                    iVar15 = iVar15 + iVar11;
                                    iVar3 = iVar3 + field_104;
                                    iVar7 = iVar7 + -1;
                                } while (1 < iVar7);
                            }
                        }
                    }
                }
            } else {
                uVar9 = field_32;
                if (param_1 < (int)uVar9) {
                    if ((int)uVar9 < param_2) {
                        param_2 = uVar9;
                    }
                    if ((int)uVar9 < param_3) {
                        param_3 = uVar9;
                    }
                    iVar13 = param_4 * 16384 - (iVar5 * param_1 & param_1 >> 31);
                    iVar15 = param_4 * 16384 - (param_1 >> 31 & iVar1 * param_1);
                    if (param_1 < 0) {
                        param_1 = 0;
                    }
                    if (param_2 < param_3) {
                        uVar9 = 0;
                        if (-1 < param_2) {
                            uVar9 = param_2;
                        }
                        iVar7 = param_5 * 16384 - (param_2 >> 31 & param_2 * iVar11);
                        iVar3 = param_3 - uVar9;
                        piVar2 = (int*)eastl::vector<int, eastl::allocator>::operator[](
                            (vector<int, eastl::allocator>*)&field_56, (ulong)(uint)param_1);
                        puVar14 = &field_120;
                        iVar12 = *piVar2;
                        iVar10 = uVar9 - param_1;
                        if ((iVar10 == 0) || (iVar5 <= iVar1)) {
                            if (0 < iVar10) {
                                iVar10 = iVar10 + 1;
                                do {
                                    FlatRaster(this, (SharedArray*)puVar14, iVar12, param_7, (int)uVar6, iVar13 >> 14,
                                               iVar15 >> 14);
                                    iVar15 = iVar15 + iVar1;
                                    iVar13 = iVar13 + iVar5;
                                    iVar12 = iVar12 + field_104;
                                    iVar10 = iVar10 + -1;
                                } while (1 < iVar10);
                            }
                            if (0 < iVar3) {
                                iVar3 = iVar3 + 1;
                                do {
                                    FlatRaster(this, (SharedArray*)puVar14, iVar12, param_7, (int)uVar6, iVar7 >> 14,
                                               iVar15 >> 14);
                                    iVar15 = iVar15 + iVar1;
                                    iVar7 = iVar7 + iVar11;
                                    iVar12 = iVar12 + field_104;
                                    iVar3 = iVar3 + -1;
                                } while (1 < iVar3);
                            }
                        } else {
                            if (0 < iVar10) {
                                iVar10 = iVar10 + 1;
                                do {
                                    FlatRaster(this, (SharedArray*)puVar14, iVar12, param_7, (int)uVar6, iVar15 >> 14,
                                               iVar13 >> 14);
                                    iVar15 = iVar15 + iVar1;
                                    iVar13 = iVar13 + iVar5;
                                    iVar12 = iVar12 + field_104;
                                    iVar10 = iVar10 + -1;
                                } while (1 < iVar10);
                            }
                            if (0 < iVar3) {
                                iVar3 = iVar3 + 1;
                                do {
                                    FlatRaster(this, (SharedArray*)puVar14, iVar12, param_7, (int)uVar6, iVar15 >> 14,
                                               iVar7 >> 14);
                                    iVar15 = iVar15 + iVar1;
                                    iVar7 = iVar7 + iVar11;
                                    iVar12 = iVar12 + field_104;
                                    iVar3 = iVar3 + -1;
                                } while (1 < iVar3);
                            }
                        }
                    } else {
                        uVar9 = 0;
                        if (-1 < param_3) {
                            uVar9 = param_3;
                        }
                        iVar12 = param_6 * 16384 - (param_3 >> 31 & param_3 * iVar11);
                        if (((uVar9 == param_1) || (iVar5 <= iVar1)) && ((uVar9 != param_1 || (iVar11 <= iVar5)))) {
                            piVar2 = (int*)eastl::vector<int, eastl::allocator>::operator[](
                                (vector<int, eastl::allocator>*)&field_56, (ulong)(uint)param_1);
                            iVar3 = *piVar2;
                            if (uVar9 - param_1 != 0 && param_1 <= (int)uVar9) {
                                iVar7 = (uVar9 - param_1) + 1;
                                do {
                                    FlatRaster(this, (SharedArray*)&field_120, iVar3, param_7, (int)uVar6, iVar13 >> 14,
                                               iVar15 >> 14);
                                    iVar15 = iVar15 + iVar1;
                                    iVar13 = iVar13 + iVar5;
                                    iVar3 = iVar3 + field_104;
                                    iVar7 = iVar7 + -1;
                                } while (1 < iVar7);
                            }
                            if (0 < (int)(param_2 - uVar9)) {
                                iVar1 = (param_2 - uVar9) + 1;
                                do {
                                    FlatRaster(this, (SharedArray*)&field_120, iVar3, param_7, (int)uVar6, iVar13 >> 14,
                                               iVar12 >> 14);
                                    iVar12 = iVar12 + iVar11;
                                    iVar13 = iVar13 + iVar5;
                                    iVar3 = iVar3 + field_104;
                                    iVar1 = iVar1 + -1;
                                } while (1 < iVar1);
                            }
                        } else {
                            piVar2 = (int*)eastl::vector<int, eastl::allocator>::operator[](
                                (vector<int, eastl::allocator>*)&field_56, (ulong)(uint)param_1);
                            iVar3 = *piVar2;
                            if (uVar9 - param_1 != 0 && param_1 <= (int)uVar9) {
                                iVar7 = (uVar9 - param_1) + 1;
                                do {
                                    FlatRaster(this, (SharedArray*)&field_120, iVar3, param_7, (int)uVar6, iVar15 >> 14,
                                               iVar13 >> 14);
                                    iVar15 = iVar15 + iVar1;
                                    iVar13 = iVar13 + iVar5;
                                    iVar3 = iVar3 + field_104;
                                    iVar7 = iVar7 + -1;
                                } while (1 < iVar7);
                            }
                            if (0 < (int)(param_2 - uVar9)) {
                                iVar1 = (param_2 - uVar9) + 1;
                                do {
                                    FlatRaster(this, (SharedArray*)&field_120, iVar3, param_7, (int)uVar6, iVar12 >> 14,
                                               iVar13 >> 14);
                                    iVar12 = iVar12 + iVar11;
                                    iVar13 = iVar13 + iVar5;
                                    iVar3 = iVar3 + field_104;
                                    iVar1 = iVar1 + -1;
                                } while (1 < iVar1);
                            }
                        }
                    }
                }
            }
        }
    }

    // 0x1002f9a30, 3840 bytes, placed by class name and debug map
    // SoftwarePix3D::GouraudTriangle(int, int, int, int, int, int, int, int, int)
    void SoftwarePix3D::GouraudTriangle(int param_1, int param_2, int param_3, int param_4, int param_5, int param_6,
                                        int param_7, int param_8, int param_9) {
        undefined1* puVar1;
        uint uVar2;
        uint uVar3;
        int* piVar4;
        int iVar5;
        uint uVar6;
        undefined1* puVar7;
        ulong uVar8;
        int iVar9;
        int iVar10;
        uint uVar11;
        int iVar12;
        int iVar13;
        uint uVar14;
        ulong uVar15;
        int iVar16;
        int iVar17;
        int iVar18;
        int iVar19;
        int local_7c;
        int local_5c;

        uVar15 = (ulong)(uint)param_4;
        if (field_12 < 256) {
            uVar11 = 0;
            uVar2 = 0;
            if (param_3 - param_2 != 0) {
                uVar2 = ((param_6 - param_5) * 16384) / (param_3 - param_2);
            }
            iVar13 = param_5 - param_4;
            iVar17 = param_2 - param_1;
            if (iVar17 != 0) {
                uVar11 = (iVar13 * 16384) / iVar17;
            }
            iVar16 = param_6 - param_4;
            uVar3 = 0;
            iVar5 = param_3 - param_1;
            if (iVar5 != 0) {
                uVar3 = (iVar16 * 16384) / iVar5;
            }
            iVar9 = iVar13 * iVar5 - iVar16 * iVar17;
            if (iVar9 != 0) {
                iVar17 = ((iVar5 * (param_8 - param_7) - iVar17 * (param_9 - param_7)) * 256) / iVar9;
                iVar9 = (((param_9 - param_7) * iVar13 - (param_8 - param_7) * iVar16) * 256) / iVar9;
                if ((param_2 < param_1) || (param_3 < param_1)) {
                    uVar6 = field_32;
                    if (param_3 < param_2) {
                        if (param_3 < (int)uVar6) {
                            if ((int)uVar6 < param_1) {
                                param_1 = uVar6;
                            }
                            if ((int)uVar6 < param_2) {
                                param_2 = uVar6;
                            }
                            iVar13 = (param_9 * 256 - iVar17 * param_6) + iVar17;
                            local_5c = param_6 * 16384;
                            if (param_1 < param_2) {
                                if (param_3 < 0) {
                                    iVar5 = local_5c - uVar2 * param_3;
                                    local_5c = local_5c - uVar3 * param_3;
                                    iVar13 = iVar13 - param_3 * iVar9;
                                    param_3 = 0;
                                } else {
                                    iVar5 = local_5c;
                                }
                                uVar14 = param_4 * 16384 - (param_1 >> 31 & param_1 * uVar11);
                                uVar15 = (ulong)uVar14;
                                uVar6 = 0;
                                if (-1 < param_1) {
                                    uVar6 = param_1;
                                }
                                iVar19 = param_2 - uVar6;
                                iVar12 = uVar6 - param_3;
                                piVar4 = (int*)eastl::vector<int, eastl::allocator>::operator[](
                                    (vector<int, eastl::allocator>*)&field_56, (long)param_3);
                                puVar1 = &field_120;
                                iVar16 = *piVar4;
                                if ((int)uVar2 < (int)uVar3) {
                                    if (0 < iVar12) {
                                        iVar12 = iVar12 + 1;
                                        do {
                                            GouraudRaster(this, (SharedArray*)puVar1, iVar16, iVar17, (int)uVar15,
                                                          iVar5 >> 14, local_5c >> 14, iVar13, iVar17);
                                            iVar5 = iVar5 + uVar2;
                                            local_5c = local_5c + uVar3;
                                            iVar13 = iVar13 + iVar9;
                                            iVar16 = iVar16 + field_104;
                                            iVar12 = iVar12 + -1;
                                        } while (1 < iVar12);
                                    }
                                    if (0 < iVar19) {
                                        iVar19 = iVar19 + 1;
                                        do {
                                            GouraudRaster(this, (SharedArray*)puVar1, iVar16, iVar17, (int)uVar15,
                                                          iVar5 >> 14, (int)uVar14 >> 14, iVar13, iVar17);
                                            iVar5 = iVar5 + uVar2;
                                            uVar14 = uVar14 + uVar11;
                                            iVar13 = iVar13 + iVar9;
                                            iVar16 = iVar16 + field_104;
                                            iVar19 = iVar19 + -1;
                                        } while (1 < iVar19);
                                    }
                                } else {
                                    if (0 < iVar12) {
                                        iVar12 = iVar12 + 1;
                                        do {
                                            GouraudRaster(this, (SharedArray*)puVar1, iVar16, iVar17, (int)uVar15,
                                                          local_5c >> 14, iVar5 >> 14, iVar13, iVar17);
                                            iVar5 = iVar5 + uVar2;
                                            local_5c = local_5c + uVar3;
                                            iVar13 = iVar13 + iVar9;
                                            iVar16 = iVar16 + field_104;
                                            iVar12 = iVar12 + -1;
                                        } while (1 < iVar12);
                                    }
                                    if (0 < iVar19) {
                                        iVar19 = iVar19 + 1;
                                        do {
                                            GouraudRaster(this, (SharedArray*)puVar1, iVar16, iVar17, (int)uVar15,
                                                          (int)uVar14 >> 14, iVar5 >> 14, iVar13, iVar17);
                                            iVar5 = iVar5 + uVar2;
                                            uVar14 = uVar14 + uVar11;
                                            iVar13 = iVar13 + iVar9;
                                            iVar16 = iVar16 + field_104;
                                            iVar19 = iVar19 + -1;
                                        } while (1 < iVar19);
                                    }
                                }
                            } else {
                                if (param_3 < 0) {
                                    local_7c = local_5c - uVar2 * param_3;
                                    local_5c = local_5c - uVar3 * param_3;
                                    iVar13 = iVar13 - param_3 * iVar9;
                                    param_3 = 0;
                                } else {
                                    local_7c = local_5c;
                                }
                                uVar6 = param_2 >> 31 & param_2 * uVar11;
                                uVar8 = (ulong)uVar6;
                                iVar5 = param_5 * 16384 - uVar6;
                                uVar6 = 0;
                                if (-1 < param_2) {
                                    uVar6 = param_2;
                                }
                                iVar12 = param_1 - uVar6;
                                iVar19 = uVar6 - param_3;
                                piVar4 = (int*)eastl::vector<int, eastl::allocator>::operator[](
                                    (vector<int, eastl::allocator>*)&field_56, (long)param_3);
                                puVar1 = &field_120;
                                iVar16 = *piVar4;
                                if ((int)uVar2 < (int)uVar3) {
                                    if (0 < iVar19) {
                                        iVar19 = iVar19 + 1;
                                        do {
                                            GouraudRaster(this, (SharedArray*)puVar1, iVar16, (int)uVar8, iVar17,
                                                          local_7c >> 14, local_5c >> 14, iVar13, iVar17);
                                            local_7c = local_7c + uVar2;
                                            local_5c = local_5c + uVar3;
                                            iVar13 = iVar13 + iVar9;
                                            iVar16 = iVar16 + field_104;
                                            iVar19 = iVar19 + -1;
                                        } while (1 < iVar19);
                                    }
                                    if (0 < iVar12) {
                                        iVar12 = iVar12 + 1;
                                        do {
                                            GouraudRaster(this, (SharedArray*)puVar1, iVar16, (int)uVar8, iVar17,
                                                          iVar5 >> 14, local_5c >> 14, iVar13, iVar17);
                                            uVar8 = (ulong)uVar11;
                                            iVar5 = iVar5 + uVar11;
                                            local_5c = local_5c + uVar3;
                                            iVar13 = iVar13 + iVar9;
                                            iVar16 = iVar16 + field_104;
                                            iVar12 = iVar12 + -1;
                                        } while (1 < iVar12);
                                    }
                                } else {
                                    if (0 < iVar19) {
                                        iVar19 = iVar19 + 1;
                                        do {
                                            GouraudRaster(this, (SharedArray*)puVar1, iVar16, iVar17, (int)uVar15,
                                                          local_5c >> 14, local_7c >> 14, iVar13, iVar17);
                                            local_7c = local_7c + uVar2;
                                            local_5c = local_5c + uVar3;
                                            iVar13 = iVar13 + iVar9;
                                            iVar16 = iVar16 + field_104;
                                            iVar19 = iVar19 + -1;
                                        } while (1 < iVar19);
                                    }
                                    if (0 < iVar12) {
                                        iVar12 = iVar12 + 1;
                                        do {
                                            GouraudRaster(this, (SharedArray*)puVar1, iVar16, iVar17, (int)uVar15,
                                                          local_5c >> 14, iVar5 >> 14, iVar13, iVar17);
                                            iVar5 = iVar5 + uVar11;
                                            local_5c = local_5c + uVar3;
                                            iVar13 = iVar13 + iVar9;
                                            iVar16 = iVar16 + field_104;
                                            iVar12 = iVar12 + -1;
                                        } while (1 < iVar12);
                                    }
                                }
                            }
                        }
                    } else if (param_2 < (int)uVar6) {
                        if ((int)uVar6 < param_3) {
                            param_3 = uVar6;
                        }
                        if ((int)uVar6 < param_1) {
                            param_1 = uVar6;
                        }
                        iVar5 = (param_8 * 256 - iVar17 * param_5) + iVar17;
                        iVar13 = param_5 * 16384;
                        if (param_3 < param_1) {
                            if (param_2 < 0) {
                                iVar16 = iVar13 - uVar11 * param_2;
                                iVar13 = iVar13 - uVar2 * param_2;
                                iVar5 = iVar5 - param_2 * iVar9;
                                param_2 = 0;
                            } else {
                                iVar16 = iVar13;
                            }
                            iVar12 = param_6 * 16384 - (param_3 >> 31 & param_3 * uVar3);
                            uVar6 = 0;
                            if (-1 < param_3) {
                                uVar6 = param_3;
                            }
                            iVar10 = param_1 - uVar6;
                            piVar4 = (int*)eastl::vector<int, eastl::allocator>::operator[](
                                (vector<int, eastl::allocator>*)&field_56, (long)param_2);
                            puVar1 = &field_120;
                            iVar19 = *piVar4;
                            iVar18 = uVar6 - param_2;
                            if ((iVar18 == 0) || ((int)uVar2 <= (int)uVar11)) {
                                puVar7 = puVar1;
                                if (0 < iVar18) {
                                    iVar18 = iVar18 + 1;
                                    do {
                                        GouraudRaster(this, (SharedArray*)puVar1, iVar19, (int)puVar7, iVar17,
                                                      iVar13 >> 14, iVar16 >> 14, iVar5, iVar17);
                                        iVar16 = iVar16 + uVar11;
                                        iVar13 = iVar13 + uVar2;
                                        iVar5 = iVar5 + iVar9;
                                        iVar19 = iVar19 + field_104;
                                        iVar18 = iVar18 + -1;
                                    } while (1 < iVar18);
                                }
                                if (0 < iVar10) {
                                    iVar10 = iVar10 + 1;
                                    do {
                                        GouraudRaster(this, (SharedArray*)puVar1, iVar19, (int)puVar7, iVar17,
                                                      iVar12 >> 14, iVar16 >> 14, iVar5, iVar17);
                                        puVar7 = (undefined1*)(ulong)uVar3;
                                        iVar16 = iVar16 + uVar11;
                                        iVar12 = iVar12 + uVar3;
                                        iVar5 = iVar5 + iVar9;
                                        iVar19 = iVar19 + field_104;
                                        iVar10 = iVar10 + -1;
                                    } while (1 < iVar10);
                                }
                            } else {
                                puVar7 = puVar1;
                                if (0 < iVar18) {
                                    iVar18 = iVar18 + 1;
                                    do {
                                        GouraudRaster(this, (SharedArray*)puVar1, iVar19, (int)puVar7, iVar17,
                                                      iVar16 >> 14, iVar13 >> 14, iVar5, iVar17);
                                        iVar16 = iVar16 + uVar11;
                                        iVar13 = iVar13 + uVar2;
                                        iVar5 = iVar5 + iVar9;
                                        iVar19 = iVar19 + field_104;
                                        iVar18 = iVar18 + -1;
                                    } while (1 < iVar18);
                                }
                                if (0 < iVar10) {
                                    iVar10 = iVar10 + 1;
                                    do {
                                        GouraudRaster(this, (SharedArray*)puVar1, iVar19, (int)puVar7, iVar17,
                                                      iVar16 >> 14, iVar12 >> 14, iVar5, iVar17);
                                        puVar7 = (undefined1*)(ulong)uVar3;
                                        iVar16 = iVar16 + uVar11;
                                        iVar12 = iVar12 + uVar3;
                                        iVar5 = iVar5 + iVar9;
                                        iVar19 = iVar19 + field_104;
                                        iVar10 = iVar10 + -1;
                                    } while (1 < iVar10);
                                }
                            }
                        } else {
                            if (param_2 < 0) {
                                iVar16 = iVar13 - uVar11 * param_2;
                                iVar13 = iVar13 - uVar2 * param_2;
                                iVar5 = iVar5 - param_2 * iVar9;
                                param_2 = 0;
                            } else {
                                iVar16 = iVar13;
                            }
                            iVar12 = param_4 * 16384 - (param_1 >> 31 & param_1 * uVar3);
                            uVar6 = 0;
                            if (-1 < param_1) {
                                uVar6 = param_1;
                            }
                            iVar19 = param_3 - uVar6;
                            iVar18 = uVar6 - param_2;
                            piVar4 = (int*)eastl::vector<int, eastl::allocator>::operator[](
                                (vector<int, eastl::allocator>*)&field_56, (long)param_2);
                            puVar1 = &field_120;
                            iVar10 = *piVar4;
                            if ((int)uVar11 < (int)uVar2) {
                                puVar7 = puVar1;
                                if (0 < iVar18) {
                                    iVar18 = iVar18 + 1;
                                    do {
                                        GouraudRaster(this, (SharedArray*)puVar1, iVar10, (int)puVar7, iVar17,
                                                      iVar16 >> 14, iVar13 >> 14, iVar5, iVar17);
                                        iVar16 = iVar16 + uVar11;
                                        iVar13 = iVar13 + uVar2;
                                        iVar5 = iVar5 + iVar9;
                                        iVar10 = iVar10 + field_104;
                                        iVar18 = iVar18 + -1;
                                    } while (1 < iVar18);
                                }
                                if (0 < iVar19) {
                                    iVar19 = iVar19 + 1;
                                    do {
                                        GouraudRaster(this, (SharedArray*)puVar1, iVar10, (int)puVar7, iVar17,
                                                      iVar12 >> 14, iVar13 >> 14, iVar5, iVar17);
                                        puVar7 = (undefined1*)(ulong)uVar3;
                                        iVar12 = iVar12 + uVar3;
                                        iVar13 = iVar13 + uVar2;
                                        iVar5 = iVar5 + iVar9;
                                        iVar10 = iVar10 + field_104;
                                        iVar19 = iVar19 + -1;
                                    } while (1 < iVar19);
                                }
                            } else {
                                puVar7 = puVar1;
                                if (0 < iVar18) {
                                    iVar18 = iVar18 + 1;
                                    do {
                                        GouraudRaster(this, (SharedArray*)puVar1, iVar10, (int)puVar7, iVar17,
                                                      iVar13 >> 14, iVar16 >> 14, iVar5, iVar17);
                                        puVar7 = (undefined1*)(ulong)uVar2;
                                        iVar16 = iVar16 + uVar11;
                                        iVar13 = iVar13 + uVar2;
                                        iVar5 = iVar5 + iVar9;
                                        iVar10 = iVar10 + field_104;
                                        iVar18 = iVar18 + -1;
                                    } while (1 < iVar18);
                                }
                                if (0 < iVar19) {
                                    iVar19 = iVar19 + 1;
                                    do {
                                        GouraudRaster(this, (SharedArray*)puVar1, iVar10, (int)puVar7, iVar17,
                                                      iVar13 >> 14, iVar12 >> 14, iVar5, iVar17);
                                        puVar7 = (undefined1*)(ulong)uVar2;
                                        iVar12 = iVar12 + uVar3;
                                        iVar13 = iVar13 + uVar2;
                                        iVar5 = iVar5 + iVar9;
                                        iVar10 = iVar10 + field_104;
                                        iVar19 = iVar19 + -1;
                                    } while (1 < iVar19);
                                }
                            }
                        }
                    }
                } else {
                    uVar6 = field_32;
                    if (param_1 < (int)uVar6) {
                        if ((int)uVar6 < param_2) {
                            param_2 = uVar6;
                        }
                        if ((int)uVar6 < param_3) {
                            param_3 = uVar6;
                        }
                        iVar5 = (param_7 * 256 - iVar17 * param_4) + iVar17;
                        iVar13 = param_4 * 16384;
                        if (param_2 < param_3) {
                            if (param_1 < 0) {
                                iVar16 = iVar13 - uVar3 * param_1;
                                iVar13 = iVar13 - uVar11 * param_1;
                                iVar5 = iVar5 - param_1 * iVar9;
                                param_1 = 0;
                            } else {
                                iVar16 = iVar13;
                            }
                            iVar12 = param_5 * 16384 - (param_2 >> 31 & param_2 * uVar2);
                            uVar6 = 0;
                            if (-1 < param_2) {
                                uVar6 = param_2;
                            }
                            iVar19 = param_3 - uVar6;
                            piVar4 = (int*)eastl::vector<int, eastl::allocator>::operator[](
                                (vector<int, eastl::allocator>*)&field_56, (long)param_1);
                            puVar1 = &field_120;
                            iVar10 = *piVar4;
                            iVar18 = uVar6 - param_1;
                            if ((iVar18 == 0) || ((int)uVar11 <= (int)uVar3)) {
                                if (0 < iVar18) {
                                    iVar18 = iVar18 + 1;
                                    puVar7 = puVar1;
                                    do {
                                        GouraudRaster(this, (SharedArray*)puVar1, iVar10, (int)puVar7, iVar17,
                                                      iVar13 >> 14, iVar16 >> 14, iVar5, iVar17);
                                        iVar16 = iVar16 + uVar3;
                                        iVar13 = iVar13 + uVar11;
                                        iVar5 = iVar5 + iVar9;
                                        iVar10 = iVar10 + field_104;
                                        iVar18 = iVar18 + -1;
                                    } while (1 < iVar18);
                                }
                                if (0 < iVar19) {
                                    iVar19 = iVar19 + 1;
                                    do {
                                        GouraudRaster(this, (SharedArray*)puVar1, iVar10, iVar12, iVar17, iVar12 >> 14,
                                                      iVar16 >> 14, iVar5, iVar17);
                                        iVar16 = iVar16 + uVar3;
                                        iVar12 = iVar12 + uVar2;
                                        iVar5 = iVar5 + iVar9;
                                        iVar10 = iVar10 + field_104;
                                        iVar19 = iVar19 + -1;
                                    } while (1 < iVar19);
                                }
                            } else {
                                if (0 < iVar18) {
                                    iVar18 = iVar18 + 1;
                                    puVar7 = puVar1;
                                    do {
                                        GouraudRaster(this, (SharedArray*)puVar1, iVar10, (int)puVar7, iVar17,
                                                      iVar16 >> 14, iVar13 >> 14, iVar5, iVar17);
                                        iVar16 = iVar16 + uVar3;
                                        iVar13 = iVar13 + uVar11;
                                        iVar5 = iVar5 + iVar9;
                                        iVar10 = iVar10 + field_104;
                                        iVar18 = iVar18 + -1;
                                    } while (1 < iVar18);
                                }
                                if (0 < iVar19) {
                                    iVar19 = iVar19 + 1;
                                    do {
                                        GouraudRaster(this, (SharedArray*)puVar1, iVar10, iVar12, iVar17, iVar16 >> 14,
                                                      iVar12 >> 14, iVar5, iVar17);
                                        iVar16 = iVar16 + uVar3;
                                        iVar12 = iVar12 + uVar2;
                                        iVar5 = iVar5 + iVar9;
                                        iVar10 = iVar10 + field_104;
                                        iVar19 = iVar19 + -1;
                                    } while (1 < iVar19);
                                }
                            }
                        } else {
                            uVar15 = (ulong)uVar3;
                            if (param_1 < 0) {
                                iVar16 = iVar13 - uVar3 * param_1;
                                iVar13 = iVar13 - uVar11 * param_1;
                                iVar5 = iVar5 - param_1 * iVar9;
                                param_1 = 0;
                            } else {
                                iVar16 = iVar13;
                            }
                            iVar12 = param_6 * 16384 - (param_3 >> 31 & param_3 * uVar2);
                            uVar6 = 0;
                            if (-1 < param_3) {
                                uVar6 = param_3;
                            }
                            if (((uVar6 == param_1) || ((int)uVar11 <= (int)uVar3)) &&
                                ((uVar6 != param_1 || ((int)uVar2 <= (int)uVar11)))) {
                                piVar4 = (int*)eastl::vector<int, eastl::allocator>::operator[](
                                    (vector<int, eastl::allocator>*)&field_56, (long)param_1);
                                iVar19 = *piVar4;
                                if (uVar6 - param_1 != 0 && param_1 <= (int)uVar6) {
                                    iVar10 = (uVar6 - param_1) + 1;
                                    do {
                                        GouraudRaster(this, (SharedArray*)&field_120, iVar19, iVar17, (int)uVar15,
                                                      iVar13 >> 14, iVar16 >> 14, iVar5, iVar17);
                                        iVar16 = iVar16 + uVar3;
                                        iVar13 = iVar13 + uVar11;
                                        iVar5 = iVar5 + iVar9;
                                        iVar19 = iVar19 + field_104;
                                        iVar10 = iVar10 + -1;
                                    } while (1 < iVar10);
                                }
                                if (0 < (int)(param_2 - uVar6)) {
                                    iVar16 = (param_2 - uVar6) + 1;
                                    do {
                                        GouraudRaster(this, (SharedArray*)&field_120, iVar19, iVar17, (int)uVar15,
                                                      iVar13 >> 14, iVar12 >> 14, iVar5, iVar17);
                                        iVar12 = iVar12 + uVar2;
                                        iVar13 = iVar13 + uVar11;
                                        iVar5 = iVar5 + iVar9;
                                        iVar19 = iVar19 + field_104;
                                        iVar16 = iVar16 + -1;
                                    } while (1 < iVar16);
                                }
                            } else {
                                piVar4 = (int*)eastl::vector<int, eastl::allocator>::operator[](
                                    (vector<int, eastl::allocator>*)&field_56, (long)param_1);
                                iVar19 = *piVar4;
                                if (uVar6 - param_1 != 0 && param_1 <= (int)uVar6) {
                                    iVar10 = (uVar6 - param_1) + 1;
                                    do {
                                        GouraudRaster(this, (SharedArray*)&field_120, iVar19, iVar17, (int)uVar15,
                                                      iVar16 >> 14, iVar13 >> 14, iVar5, iVar17);
                                        iVar16 = iVar16 + uVar3;
                                        iVar13 = iVar13 + uVar11;
                                        iVar5 = iVar5 + iVar9;
                                        iVar19 = iVar19 + field_104;
                                        iVar10 = iVar10 + -1;
                                    } while (1 < iVar10);
                                }
                                if (0 < (int)(param_2 - uVar6)) {
                                    iVar16 = (param_2 - uVar6) + 1;
                                    do {
                                        GouraudRaster(this, (SharedArray*)&field_120, iVar19, iVar17, (int)uVar15,
                                                      iVar12 >> 14, iVar13 >> 14, iVar5, iVar17);
                                        iVar12 = iVar12 + uVar2;
                                        iVar13 = iVar13 + uVar11;
                                        iVar5 = iVar5 + iVar9;
                                        iVar19 = iVar19 + field_104;
                                        iVar16 = iVar16 + -1;
                                    } while (1 < iVar16);
                                }
                            }
                        }
                    }
                }
            }
        }
    }

    // 0x1002fa990, 80 bytes, placed by class name and debug map
    // SoftwarePix3D::SetDest(SharedArray<unsigned int>&, int, int)
    void SoftwarePix3D::SetDest(SharedArray* param_1, int param_2, int param_3) {
        (&field_120, param_1)->ref_assign();
        field_104 = param_2;
        field_108 = param_3;
        SetClipping(0, 0, param_2, param_3);
        SetRenderClipping();
    }

    // 0x1002fa9e0, 1184 bytes, placed by class name and debug map
    // SoftwarePix3D::GouraudRaster(SharedArray<unsigned int>&, int, int, int, int, int, int, int)
    void SoftwarePix3D::GouraudRaster(SharedArray* param_1, int param_2, int param_3, int param_4, int param_5,
                                      int param_6, int param_7, int param_8) {
        uint uVar1;
        uint uVar2;
        undefined4 uVar3;
        undefined4* puVar4;
        uint* puVar5;
        uint uVar6;
        int iVar7;
        ulong uVar8;
        uint uVar9;
        int iVar10;
        uint uVar11;
        ulong local_40;

        if (field_8 != '\0') {
            if (field_28 < param_6) {
                param_6 = field_28;
            }
            if (param_5 < 0) {
                param_5 = 0;
            }
        }
        uVar9 = param_6 - param_5;
        if (uVar9 != 0 && param_5 <= param_6) {
            uVar1 = param_2 + param_5;
            local_40 = (ulong)uVar1;
            uVar11 = param_5 * param_8 + param_7;
            if (field_11 == '\0') {
                iVar7 = field_12;
                if (iVar7 < 2) {
                    iVar7 = uVar9 + 1;
                    uVar8 = (long)(int)uVar1;
                    do {
                        puVar4 = (undefined4*)std::array<int, 65536ul>::operator[](
                            (long)((int)(4294967295U - ((int)uVar11 >> 31) & uVar11) >> 8));
                        uVar3 = *puVar4;
                        puVar4 = (undefined4*)SharedArray<unsigned int>::operator[]((SharedArray<unsigned int>*)param_1,
                                                                                    uVar8);
                        *puVar4 = uVar3;
                        uVar11 = uVar11 + param_8;
                        iVar7 = iVar7 + -1;
                        uVar8 = uVar8 + 1;
                    } while (1 < iVar7);
                } else {
                    iVar10 = uVar9 + 1;
                    uVar8 = (long)(int)uVar1;
                    do {
                        puVar5 = (uint*)std::array<int, 65536ul>::operator[](
                            (long)((int)(4294967295U - ((int)uVar11 >> 31) & uVar11) >> 8));
                        uVar11 = uVar11 + param_8;
                        uVar9 = graphics::ComputeCompositeRGB(*puVar5, 256U - iVar7);
                        puVar5 =
                            (uint*)SharedArray<unsigned int>::operator[]((SharedArray<unsigned int>*)param_1, uVar8);
                        uVar3 = graphics::BlendPixel(uVar9, 256U - iVar7, iVar7 - 1, *puVar5);
                        puVar4 = (undefined4*)SharedArray<unsigned int>::operator[]((SharedArray<unsigned int>*)param_1,
                                                                                    uVar8);
                        *puVar4 = uVar3;
                        iVar10 = iVar10 + -1;
                        uVar8 = uVar8 + 1;
                    } while (1 < iVar10);
                }
            } else {
                iVar7 = field_12;
                if (iVar7 < 2) {
                    if (3 < (int)uVar9) {
                        local_40 = (ulong)(int)uVar1;
                        iVar7 = ((int)uVar9 >> 2) + 1;
                        do {
                            puVar4 = (undefined4*)std::array<int, 65536ul>::operator[](
                                (long)((int)(4294967295U - ((int)uVar11 >> 31) & uVar11) >> 8));
                            uVar3 = *puVar4;
                            uVar11 = uVar11 + param_8 * 4;
                            puVar4 = (undefined4*)SharedArray<unsigned int>::operator[](
                                (SharedArray<unsigned int>*)param_1, local_40);
                            *puVar4 = uVar3;
                            puVar4 = (undefined4*)SharedArray<unsigned int>::operator[](
                                (SharedArray<unsigned int>*)param_1, local_40 + 1);
                            *puVar4 = uVar3;
                            uVar8 = local_40 + 3;
                            puVar4 = (undefined4*)SharedArray<unsigned int>::operator[](
                                (SharedArray<unsigned int>*)param_1, local_40 + 2);
                            *puVar4 = uVar3;
                            local_40 = local_40 + 4;
                            puVar4 = (undefined4*)SharedArray<unsigned int>::operator[](
                                (SharedArray<unsigned int>*)param_1, uVar8);
                            *puVar4 = uVar3;
                            iVar7 = iVar7 + -1;
                        } while (1 < iVar7);
                    }
                    if ((uVar9 & 3) != 0) {
                        puVar4 = (undefined4*)std::array<int, 65536ul>::operator[](
                            (long)((int)(4294967295U - ((int)uVar11 >> 31) & uVar11) >> 8));
                        uVar3 = *puVar4;
                        iVar7 = (uVar9 & 3) + 1;
                        uVar8 = (long)(int)local_40;
                        do {
                            puVar4 = (undefined4*)SharedArray<unsigned int>::operator[](
                                (SharedArray<unsigned int>*)param_1, uVar8);
                            *puVar4 = uVar3;
                            iVar7 = iVar7 + -1;
                            uVar8 = uVar8 + 1;
                        } while (1 < iVar7);
                    }
                } else {
                    uVar6 = 256 - iVar7;
                    uVar2 = iVar7 - 1;
                    if (3 < (int)uVar9) {
                        local_40 = (ulong)(int)uVar1;
                        iVar7 = ((int)uVar9 >> 2) + 1;
                        do {
                            puVar5 = (uint*)std::array<int, 65536ul>::operator[](
                                (long)((int)(4294967295U - ((int)uVar11 >> 31) & uVar11) >> 8));
                            uVar11 = uVar11 + param_8 * 4;
                            uVar1 = graphics::ComputeCompositeRGB(*puVar5, uVar6);
                            puVar5 = (uint*)SharedArray<unsigned int>::operator[]((SharedArray<unsigned int>*)param_1,
                                                                                  local_40);
                            uVar3 = graphics::BlendPixel(uVar1, uVar6, uVar2, *puVar5);
                            puVar4 = (undefined4*)SharedArray<unsigned int>::operator[](
                                (SharedArray<unsigned int>*)param_1, local_40);
                            *puVar4 = uVar3;
                            puVar5 = (uint*)SharedArray<unsigned int>::operator[]((SharedArray<unsigned int>*)param_1,
                                                                                  local_40 + 1);
                            uVar3 = graphics::BlendPixel(uVar1, uVar6, uVar2, *puVar5);
                            puVar4 = (undefined4*)SharedArray<unsigned int>::operator[](
                                (SharedArray<unsigned int>*)param_1, local_40 + 1);
                            *puVar4 = uVar3;
                            puVar5 = (uint*)SharedArray<unsigned int>::operator[]((SharedArray<unsigned int>*)param_1,
                                                                                  local_40 + 2);
                            uVar3 = graphics::BlendPixel(uVar1, uVar6, uVar2, *puVar5);
                            uVar8 = local_40 + 3;
                            puVar4 = (undefined4*)SharedArray<unsigned int>::operator[](
                                (SharedArray<unsigned int>*)param_1, local_40 + 2);
                            *puVar4 = uVar3;
                            puVar5 = (uint*)SharedArray<unsigned int>::operator[]((SharedArray<unsigned int>*)param_1,
                                                                                  uVar8);
                            uVar3 = graphics::BlendPixel(uVar1, uVar6, uVar2, *puVar5);
                            local_40 = local_40 + 4;
                            puVar4 = (undefined4*)SharedArray<unsigned int>::operator[](
                                (SharedArray<unsigned int>*)param_1, uVar8);
                            *puVar4 = uVar3;
                            iVar7 = iVar7 + -1;
                        } while (1 < iVar7);
                    }
                    if ((uVar9 & 3) != 0) {
                        puVar5 = (uint*)std::array<int, 65536ul>::operator[](
                            (long)((int)(4294967295U - ((int)uVar11 >> 31) & uVar11) >> 8));
                        uVar1 = graphics::ComputeCompositeRGB(*puVar5, uVar6);
                        iVar7 = (uVar9 & 3) + 1;
                        uVar8 = (long)(int)local_40;
                        do {
                            puVar5 = (uint*)SharedArray<unsigned int>::operator[]((SharedArray<unsigned int>*)param_1,
                                                                                  uVar8);
                            uVar3 = graphics::BlendPixel(uVar1, uVar6, uVar2, *puVar5);
                            puVar4 = (undefined4*)SharedArray<unsigned int>::operator[](
                                (SharedArray<unsigned int>*)param_1, uVar8);
                            *puVar4 = uVar3;
                            iVar7 = iVar7 + -1;
                            uVar8 = uVar8 + 1;
                        } while (1 < iVar7);
                    }
                }
            }
        }
    }

    // 0x1002fae80, 928 bytes, placed by class name and debug map
    // SoftwarePix3D::FlatRaster(SharedArray<unsigned int>&, int, int, int, int, int)
    void SoftwarePix3D::FlatRaster(SharedArray* param_1, int param_2, int param_3, int param_4, int param_5,
                                   int param_6) {
        ulong uVar1;
        uint uVar2;
        uint uVar3;
        undefined4 uVar4;
        int* piVar5;
        undefined4* puVar6;
        uint* puVar7;
        int iVar8;
        uint uVar9;
        uint uVar10;
        int iVar11;
        uint uVar12;
        ulong uVar13;

        if (field_8 != '\0') {
            if (field_28 < param_6) {
                param_6 = field_28;
            }
            if (param_5 < 0) {
                param_5 = 0;
            }
        }
        uVar2 = param_6 - param_5;
        if (uVar2 != 0 && param_5 <= param_6) {
            uVar12 = param_5 + param_2;
            uVar13 = (ulong)uVar12;
            iVar11 = (int)uVar2 >> 2;
            iVar8 = field_12;
            if (iVar8 < 2) {
                if (3 < (int)uVar2) {
                    uVar13 = (ulong)(int)uVar12;
                    iVar11 = iVar11 + 1;
                    do {
                        piVar5 =
                            (int*)SharedArray<unsigned int>::operator[]((SharedArray<unsigned int>*)param_1, uVar13);
                        *piVar5 = param_3;
                        piVar5 = (int*)SharedArray<unsigned int>::operator[]((SharedArray<unsigned int>*)param_1,
                                                                             uVar13 + 1);
                        *piVar5 = param_3;
                        uVar1 = uVar13 + 3;
                        piVar5 = (int*)SharedArray<unsigned int>::operator[]((SharedArray<unsigned int>*)param_1,
                                                                             uVar13 + 2);
                        *piVar5 = param_3;
                        uVar13 = uVar13 + 4;
                        piVar5 =
                            (int*)SharedArray<unsigned int>::operator[]((SharedArray<unsigned int>*)param_1, uVar1);
                        *piVar5 = param_3;
                        iVar11 = iVar11 + -1;
                    } while (1 < iVar11);
                }
                if ((uVar2 & 3) != 0) {
                    iVar8 = (uVar2 & 3) + 1;
                    uVar13 = (long)(int)uVar13;
                    do {
                        piVar5 =
                            (int*)SharedArray<unsigned int>::operator[]((SharedArray<unsigned int>*)param_1, uVar13);
                        *piVar5 = param_3;
                        iVar8 = iVar8 + -1;
                        uVar13 = uVar13 + 1;
                    } while (1 < iVar8);
                }
            } else if (iVar8 == 254) {
                if (3 < (int)uVar2) {
                    uVar13 = (ulong)(int)uVar12;
                    iVar11 = iVar11 + 1;
                    do {
                        puVar6 = (undefined4*)SharedArray<unsigned int>::operator[]((SharedArray<unsigned int>*)param_1,
                                                                                    uVar13 + 1);
                        uVar4 = *puVar6;
                        puVar6 = (undefined4*)SharedArray<unsigned int>::operator[]((SharedArray<unsigned int>*)param_1,
                                                                                    uVar13);
                        *puVar6 = uVar4;
                        puVar6 = (undefined4*)SharedArray<unsigned int>::operator[]((SharedArray<unsigned int>*)param_1,
                                                                                    uVar13 + 2);
                        uVar4 = *puVar6;
                        puVar6 = (undefined4*)SharedArray<unsigned int>::operator[]((SharedArray<unsigned int>*)param_1,
                                                                                    uVar13 + 1);
                        *puVar6 = uVar4;
                        uVar1 = uVar13 + 3;
                        puVar6 = (undefined4*)SharedArray<unsigned int>::operator[]((SharedArray<unsigned int>*)param_1,
                                                                                    uVar1);
                        uVar4 = *puVar6;
                        puVar6 = (undefined4*)SharedArray<unsigned int>::operator[]((SharedArray<unsigned int>*)param_1,
                                                                                    uVar13 + 2);
                        *puVar6 = uVar4;
                        uVar13 = uVar13 + 4;
                        puVar6 = (undefined4*)SharedArray<unsigned int>::operator[]((SharedArray<unsigned int>*)param_1,
                                                                                    uVar13);
                        uVar4 = *puVar6;
                        puVar6 = (undefined4*)SharedArray<unsigned int>::operator[]((SharedArray<unsigned int>*)param_1,
                                                                                    uVar1);
                        *puVar6 = uVar4;
                        iVar11 = iVar11 + -1;
                    } while (1 < iVar11);
                }
                if ((uVar2 & 3) != 0) {
                    iVar8 = (uVar2 & 3) + 1;
                    uVar13 = (long)(int)uVar13;
                    do {
                        puVar6 = (undefined4*)SharedArray<unsigned int>::operator[]((SharedArray<unsigned int>*)param_1,
                                                                                    uVar13 + 1);
                        uVar4 = *puVar6;
                        puVar6 = (undefined4*)SharedArray<unsigned int>::operator[]((SharedArray<unsigned int>*)param_1,
                                                                                    uVar13);
                        *puVar6 = uVar4;
                        iVar8 = iVar8 + -1;
                        uVar13 = uVar13 + 1;
                    } while (1 < iVar8);
                }
            } else {
                uVar9 = 256 - iVar8;
                uVar10 = iVar8 - 1;
                uVar3 = graphics::ComputeCompositeRGB(param_3, uVar9);
                if (3 < (int)uVar2) {
                    uVar13 = (ulong)(int)uVar12;
                    iVar11 = iVar11 + 1;
                    do {
                        puVar7 =
                            (uint*)SharedArray<unsigned int>::operator[]((SharedArray<unsigned int>*)param_1, uVar13);
                        uVar4 = graphics::BlendPixel(uVar3, uVar9, uVar10, *puVar7);
                        puVar6 = (undefined4*)SharedArray<unsigned int>::operator[]((SharedArray<unsigned int>*)param_1,
                                                                                    uVar13);
                        *puVar6 = uVar4;
                        puVar7 = (uint*)SharedArray<unsigned int>::operator[]((SharedArray<unsigned int>*)param_1,
                                                                              uVar13 + 1);
                        uVar4 = graphics::BlendPixel(uVar3, uVar9, uVar10, *puVar7);
                        puVar6 = (undefined4*)SharedArray<unsigned int>::operator[]((SharedArray<unsigned int>*)param_1,
                                                                                    uVar13 + 1);
                        *puVar6 = uVar4;
                        puVar7 = (uint*)SharedArray<unsigned int>::operator[]((SharedArray<unsigned int>*)param_1,
                                                                              uVar13 + 2);
                        uVar4 = graphics::BlendPixel(uVar3, uVar9, uVar10, *puVar7);
                        uVar1 = uVar13 + 3;
                        puVar6 = (undefined4*)SharedArray<unsigned int>::operator[]((SharedArray<unsigned int>*)param_1,
                                                                                    uVar13 + 2);
                        *puVar6 = uVar4;
                        puVar7 =
                            (uint*)SharedArray<unsigned int>::operator[]((SharedArray<unsigned int>*)param_1, uVar1);
                        uVar4 = graphics::BlendPixel(uVar3, uVar9, uVar10, *puVar7);
                        uVar13 = uVar13 + 4;
                        puVar6 = (undefined4*)SharedArray<unsigned int>::operator[]((SharedArray<unsigned int>*)param_1,
                                                                                    uVar1);
                        *puVar6 = uVar4;
                        iVar11 = iVar11 + -1;
                    } while (1 < iVar11);
                }
                if ((uVar2 & 3) != 0) {
                    iVar8 = (uVar2 & 3) + 1;
                    uVar13 = (long)(int)uVar13;
                    do {
                        puVar7 =
                            (uint*)SharedArray<unsigned int>::operator[]((SharedArray<unsigned int>*)param_1, uVar13);
                        uVar4 = graphics::BlendPixel(uVar3, uVar9, uVar10, *puVar7);
                        puVar6 = (undefined4*)SharedArray<unsigned int>::operator[]((SharedArray<unsigned int>*)param_1,
                                                                                    uVar13);
                        *puVar6 = uVar4;
                        iVar8 = iVar8 + -1;
                        uVar13 = uVar13 + 1;
                    } while (1 < iVar8);
                }
            }
        }
    }

    // 0x1002fb220, 8400 bytes, placed by class name and debug map
    // SoftwarePix3D::TextureTriangle(int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int)
    void SoftwarePix3D::TextureTriangle(int param_1, int param_2, int param_3, int param_4, int param_5, int param_6,
                                        int param_7, int param_8, int param_9, int param_10, int param_11, int param_12,
                                        int param_13, int param_14, int param_15, int param_16, int param_17,
                                        int param_18, int param_19) {
        SoftwarePix3D* pSVar1;
        bool bVar2;
        char cVar3;
        undefined1 uVar4;
        int iVar5;
        int iVar6;
        int iVar7;
        long* plVar8;
        undefined4* puVar9;
        Array* pAVar10;
        int* piVar11;
        int iVar12;
        uint uVar13;
        int iVar14;
        uint uVar15;
        int iVar16;
        int iVar17;
        int iVar18;
        int iVar19;
        uint uVar20;
        int iVar21;
        ErrorCapture local_418[17];
        shared_ptr local_c8;
        SharedArray* local_b8;
        long local_b0;
        long local_a8;
        long local_a0;
        long local_98;
        long local_90;
        long local_88;
        SharedArray* local_80;
        SharedArray* local_78;
        int local_6c;
        int local_68;
        int local_64;
        int local_60;
        int local_5c;
        SoftwarePix3D* local_58;
        uint local_50;
        uint local_4c;
        int local_48;
        uint local_44;
        uint local_40;
        uint local_3c;
        uint local_38;
        uint local_34;

        local_44 = param_5;
        local_3c = param_2;
        local_38 = param_1;
        local_34 = param_3;
        ErrorCapture::ErrorCapture(local_418, true);
        plVar8 =
            (long*)shared_ptr<TextureProvider>::operator->((shared_ptr<TextureProvider>*)&Pix3D::m_textureProvider);
        (**(code**)(*plVar8 + 16))(&local_c8, plVar8, param_19, local_418);
        bVar2 = operator==(&local_c8, (_func_decltype_nullptr*)0);
        local_58 = this;
        if ((bVar2) || (cVar3 = local_418->IsRaised(), cVar3 != '\0')) {
            plVar8 =
                (long*)shared_ptr<TextureProvider>::operator->((shared_ptr<TextureProvider>*)&Pix3D::m_textureProvider);
            iVar5 = (**(code**)(*plVar8 + 24))(plVar8, param_19);
            iVar6 = Pix3D::TextureLightColour(iVar5, param_7);
            iVar7 = Pix3D::TextureLightColour(iVar5, param_8);
            iVar5 = Pix3D::TextureLightColour(iVar5, param_9);
            GouraudTriangle(local_58, local_38, local_3c, local_34, param_4, local_44, param_6, iVar6, iVar7, iVar5);
        } else {
            plVar8 =
                (long*)shared_ptr<TextureProvider>::operator->((shared_ptr<TextureProvider>*)&Pix3D::m_textureProvider);
            uVar4 = (**(code**)(*plVar8 + 40))(plVar8, param_19);
            field_10 = uVar4;
            plVar8 =
                (long*)shared_ptr<TextureProvider>::operator->((shared_ptr<TextureProvider>*)&Pix3D::m_textureProvider);
            uVar4 = (**(code**)(*plVar8 + 32))(plVar8, param_19);
            pSVar1 = local_58;
            field_9 = uVar4;
            iVar6 = local_44 - param_4;
            local_6c = 0;
            local_68 = 0;
            iVar5 = local_3c - local_38;
            if (iVar5 != 0) {
                local_68 = (iVar6 * 16384) / iVar5;
            }
            if (local_34 - local_3c != 0) {
                local_6c = (int)((param_6 - local_44) * 16384) / (int)(local_34 - local_3c);
            }
            local_64 = 0;
            iVar7 = local_34 - local_38;
            if (iVar7 != 0) {
                local_64 = ((param_4 - param_6) * 16384) / (int)(local_38 - local_34);
            }
            iVar12 = iVar6 * iVar7 - (param_6 - param_4) * iVar5;
            local_40 = param_4;
            if (iVar12 != 0) {
                iVar17 = param_10 - param_11;
                iVar18 = param_13 - param_14;
                iVar21 = param_16 - param_17;
                iVar19 = param_12 - param_10;
                iVar14 = param_15 - param_13;
                iVar16 = param_18 - param_16;
                local_60 = ((iVar7 * (param_8 - param_7) - iVar5 * (param_9 - param_7)) * 512) / iVar12;
                local_5c = (((param_9 - param_7) * iVar6 - (param_8 - param_7) * (param_6 - param_4)) * 512) / iVar12;
                iVar7 = (iVar19 * param_13 - iVar14 * param_10) * 16384;
                local_88 = (long)*(int*)&local_58->field_16;
                local_a0 = ((long)(iVar14 * param_16 - iVar16 * param_13) << 17) / local_88;
                local_98 = ((long)(iVar16 * param_10 - iVar19 * param_16) << 14) / local_88;
                iVar5 = (iVar17 * param_13 - iVar18 * param_10) * 16384;
                local_b0 = ((long)(iVar18 * param_16 - param_13 * iVar21) << 17) / local_88;
                local_90 = ((long)(param_10 * iVar21 - param_16 * iVar17) << 14) / local_88;
                iVar6 = (iVar18 * iVar19 - iVar14 * iVar17) * 16384;
                local_a8 = ((long)(iVar21 * iVar14 - iVar16 * iVar18) << 17) / local_88;
                local_88 = ((long)(iVar16 * iVar17 - iVar19 * iVar21) << 14) / local_88;
                if (((int)local_3c < (int)local_38) || ((int)local_34 < (int)local_38)) {
                    uVar15 = local_58->field_32;
                    if ((int)local_34 < (int)local_3c) {
                        if ((int)local_34 < (int)uVar15) {
                            if ((int)uVar15 < (int)local_38) {
                                local_38 = uVar15;
                            }
                            if ((int)uVar15 < (int)local_3c) {
                                local_3c = uVar15;
                            }
                            local_48 = (param_9 * 512 - local_60 * param_6) + local_60;
                            local_4c = param_6 * 16384;
                            if ((int)local_38 < (int)local_3c) {
                                if ((int)local_34 < 0) {
                                    local_50 = local_4c - local_6c * local_34;
                                    local_4c = local_4c - local_64 * local_34;
                                    local_48 = local_48 - local_34 * local_5c;
                                    uVar15 = 0;
                                } else {
                                    uVar15 = local_34;
                                    local_50 = local_4c;
                                }
                                local_40 = param_4 * 16384 - ((int)local_38 >> 31 & local_38 * local_68);
                                uVar20 = 0;
                                if (-1 < (int)local_38) {
                                    uVar20 = local_38;
                                }
                                iVar12 = uVar15 - *(int*)&local_58->field_24;
                                local_38 = iVar12 * (int)local_98 + iVar7;
                                local_34 = iVar12 * (int)local_90 + iVar5;
                                local_44 = iVar12 * (int)local_88 + iVar6;
                                local_3c = local_3c - uVar20;
                                if (local_6c < local_64) {
                                    piVar11 = (int*)eastl::vector<int, eastl::allocator>::operator[](
                                        (vector<int, eastl::allocator>*)&local_58->field_56, (long)(int)uVar15);
                                    iVar5 = *piVar11;
                                    local_78 = (SharedArray*)&local_58->field_120;
                                    if (uVar20 - uVar15 != 0 && (int)uVar15 <= (int)uVar20) {
                                        local_80 = (SharedArray*)CONCAT44(local_80._4_4_, (uVar20 - uVar15) + 1);
                                        do {
                                            pAVar10 =
                                                (Array*)shared_ptr<Array<unsigned int, eastl::allocator>>::operator*(
                                                    (shared_ptr<Array<unsigned int, eastl::allocator>>*)&local_c8);
                                            uVar13 = local_38;
                                            iVar6 = local_48;
                                            uVar20 = local_4c;
                                            uVar15 = local_50;
                                            TextureRaster(local_58, local_78, pAVar10, local_34, (int)local_50 >> 14,
                                                          iVar5, (int)local_50 >> 14, (int)local_4c >> 14, local_48,
                                                          local_60, local_38, local_34, local_44, (int)local_a0,
                                                          (int)local_b0, (int)local_a8);
                                            local_50 = uVar15 + local_6c;
                                            local_4c = uVar20 + local_64;
                                            local_48 = iVar6 + local_5c;
                                            iVar5 = iVar5 + local_58->field_104;
                                            local_38 = uVar13 + (int)local_98;
                                            local_34 = local_34 + (int)local_90;
                                            local_44 = local_44 + (int)local_88;
                                            iVar6 = (int)local_80 + -1;
                                            local_80 = (SharedArray*)CONCAT44(local_80._4_4_, iVar6);
                                        } while (1 < iVar6);
                                    }
                                    if (0 < (int)local_3c) {
                                        local_3c = local_3c + 1;
                                        do {
                                            pAVar10 =
                                                (Array*)shared_ptr<Array<unsigned int, eastl::allocator>>::operator*(
                                                    (shared_ptr<Array<unsigned int, eastl::allocator>>*)&local_c8);
                                            uVar13 = local_38;
                                            uVar20 = local_40;
                                            iVar6 = local_48;
                                            uVar15 = local_50;
                                            TextureRaster(local_58, local_78, pAVar10, local_34, (int)local_50 >> 14,
                                                          iVar5, (int)local_50 >> 14, (int)local_40 >> 14, local_48,
                                                          local_60, local_38, local_34, local_44, (int)local_a0,
                                                          (int)local_b0, (int)local_a8);
                                            local_50 = uVar15 + local_6c;
                                            local_40 = uVar20 + local_68;
                                            local_48 = iVar6 + local_5c;
                                            iVar5 = iVar5 + local_58->field_104;
                                            local_38 = uVar13 + (int)local_98;
                                            local_34 = local_34 + (int)local_90;
                                            local_44 = local_44 + (int)local_88;
                                            local_3c = local_3c - 1;
                                        } while (1 < (int)local_3c);
                                    }
                                } else {
                                    piVar11 = (int*)eastl::vector<int, eastl::allocator>::operator[](
                                        (vector<int, eastl::allocator>*)&local_58->field_56, (long)(int)uVar15);
                                    iVar5 = *piVar11;
                                    local_78 = (SharedArray*)&local_58->field_120;
                                    if (uVar20 - uVar15 != 0 && (int)uVar15 <= (int)uVar20) {
                                        local_80 = (SharedArray*)CONCAT44(local_80._4_4_, (uVar20 - uVar15) + 1);
                                        do {
                                            pAVar10 =
                                                (Array*)shared_ptr<Array<unsigned int, eastl::allocator>>::operator*(
                                                    (shared_ptr<Array<unsigned int, eastl::allocator>>*)&local_c8);
                                            uVar13 = local_38;
                                            iVar6 = local_48;
                                            uVar20 = local_4c;
                                            uVar15 = local_50;
                                            TextureRaster(local_58, local_78, pAVar10, local_34, (int)local_4c >> 14,
                                                          iVar5, (int)local_4c >> 14, (int)local_50 >> 14, local_48,
                                                          local_60, local_38, local_34, local_44, (int)local_a0,
                                                          (int)local_b0, (int)local_a8);
                                            local_50 = uVar15 + local_6c;
                                            local_4c = uVar20 + local_64;
                                            local_48 = iVar6 + local_5c;
                                            iVar5 = iVar5 + local_58->field_104;
                                            local_38 = uVar13 + (int)local_98;
                                            local_34 = local_34 + (int)local_90;
                                            local_44 = local_44 + (int)local_88;
                                            iVar6 = (int)local_80 + -1;
                                            local_80 = (SharedArray*)CONCAT44(local_80._4_4_, iVar6);
                                        } while (1 < iVar6);
                                    }
                                    if (0 < (int)local_3c) {
                                        local_3c = local_3c + 1;
                                        do {
                                            pAVar10 =
                                                (Array*)shared_ptr<Array<unsigned int, eastl::allocator>>::operator*(
                                                    (shared_ptr<Array<unsigned int, eastl::allocator>>*)&local_c8);
                                            uVar13 = local_38;
                                            uVar20 = local_40;
                                            iVar6 = local_48;
                                            uVar15 = local_50;
                                            TextureRaster(local_58, local_78, pAVar10, local_34, (int)local_40 >> 14,
                                                          iVar5, (int)local_40 >> 14, (int)local_50 >> 14, local_48,
                                                          local_60, local_38, local_34, local_44, (int)local_a0,
                                                          (int)local_b0, (int)local_a8);
                                            local_50 = uVar15 + local_6c;
                                            local_40 = uVar20 + local_68;
                                            local_48 = iVar6 + local_5c;
                                            iVar5 = iVar5 + local_58->field_104;
                                            local_38 = uVar13 + (int)local_98;
                                            local_34 = local_34 + (int)local_90;
                                            local_44 = local_44 + (int)local_88;
                                            local_3c = local_3c - 1;
                                        } while (1 < (int)local_3c);
                                    }
                                }
                            } else {
                                if ((int)local_34 < 0) {
                                    uVar20 = local_4c - local_6c * local_34;
                                    local_4c = local_4c - local_64 * local_34;
                                    local_48 = local_48 - local_34 * local_5c;
                                    uVar15 = 0;
                                } else {
                                    uVar15 = local_34;
                                    uVar20 = local_4c;
                                }
                                local_44 = local_44 * 16384 - ((int)local_3c >> 31 & local_3c * local_68);
                                uVar13 = 0;
                                if (-1 < (int)local_3c) {
                                    uVar13 = local_3c;
                                }
                                iVar12 = uVar15 - *(int*)&local_58->field_24;
                                local_3c = iVar12 * (int)local_98 + iVar7;
                                local_34 = iVar12 * (int)local_90 + iVar5;
                                local_40 = iVar12 * (int)local_88 + iVar6;
                                local_38 = local_38 - uVar13;
                                if (local_6c < local_64) {
                                    puVar9 = (undefined4*)eastl::vector<int, eastl::allocator>::operator[](
                                        (vector<int, eastl::allocator>*)&local_58->field_56, (long)(int)uVar15);
                                    local_78 = (SharedArray*)CONCAT44(local_78._4_4_, *puVar9);
                                    local_b8 = (SharedArray*)&local_58->field_120;
                                    if (uVar13 - uVar15 != 0 && (int)uVar15 <= (int)uVar13) {
                                        local_80 = (SharedArray*)CONCAT44(local_80._4_4_, (uVar13 - uVar15) + 1);
                                        local_50 = uVar20;
                                        do {
                                            pAVar10 =
                                                (Array*)shared_ptr<Array<unsigned int, eastl::allocator>>::operator*(
                                                    (shared_ptr<Array<unsigned int, eastl::allocator>>*)&local_c8);
                                            uVar13 = local_3c;
                                            iVar6 = local_48;
                                            uVar20 = local_4c;
                                            uVar15 = local_50;
                                            iVar5 = (int)local_78;
                                            TextureRaster(local_58, local_b8, pAVar10, local_34, (int)local_50 >> 14,
                                                          (int)local_78, (int)local_50 >> 14, (int)local_4c >> 14,
                                                          local_48, local_60, local_3c, local_34, local_40,
                                                          (int)local_a0, (int)local_b0, (int)local_a8);
                                            local_50 = uVar15 + local_6c;
                                            local_4c = uVar20 + local_64;
                                            local_48 = iVar6 + local_5c;
                                            local_78 =
                                                (SharedArray*)CONCAT44(local_78._4_4_, iVar5 + local_58->field_104);
                                            local_3c = uVar13 + (int)local_98;
                                            local_34 = local_34 + (int)local_90;
                                            local_40 = local_40 + (int)local_88;
                                            iVar5 = (int)local_80 + -1;
                                            local_80 = (SharedArray*)CONCAT44(local_80._4_4_, iVar5);
                                        } while (1 < iVar5);
                                    }
                                    if (0 < (int)local_38) {
                                        local_38 = local_38 + 1;
                                        do {
                                            pAVar10 =
                                                (Array*)shared_ptr<Array<unsigned int, eastl::allocator>>::operator*(
                                                    (shared_ptr<Array<unsigned int, eastl::allocator>>*)&local_c8);
                                            uVar13 = local_3c;
                                            uVar20 = local_44;
                                            iVar6 = local_48;
                                            uVar15 = local_4c;
                                            iVar5 = (int)local_78;
                                            TextureRaster(local_58, local_b8, pAVar10, local_34, (int)local_44 >> 14,
                                                          (int)local_78, (int)local_44 >> 14, (int)local_4c >> 14,
                                                          local_48, local_60, local_3c, local_34, local_40,
                                                          (int)local_a0, (int)local_b0, (int)local_a8);
                                            local_44 = uVar20 + local_68;
                                            local_4c = uVar15 + local_64;
                                            local_48 = iVar6 + local_5c;
                                            local_78 =
                                                (SharedArray*)CONCAT44(local_78._4_4_, iVar5 + local_58->field_104);
                                            local_3c = uVar13 + (int)local_98;
                                            local_34 = local_34 + (int)local_90;
                                            local_40 = local_40 + (int)local_88;
                                            local_38 = local_38 - 1;
                                        } while (1 < (int)local_38);
                                    }
                                } else {
                                    puVar9 = (undefined4*)eastl::vector<int, eastl::allocator>::operator[](
                                        (vector<int, eastl::allocator>*)&local_58->field_56, (long)(int)uVar15);
                                    local_78 = (SharedArray*)CONCAT44(local_78._4_4_, *puVar9);
                                    local_b8 = (SharedArray*)&local_58->field_120;
                                    if (uVar13 - uVar15 != 0 && (int)uVar15 <= (int)uVar13) {
                                        local_80 = (SharedArray*)CONCAT44(local_80._4_4_, (uVar13 - uVar15) + 1);
                                        local_50 = uVar20;
                                        do {
                                            pAVar10 =
                                                (Array*)shared_ptr<Array<unsigned int, eastl::allocator>>::operator*(
                                                    (shared_ptr<Array<unsigned int, eastl::allocator>>*)&local_c8);
                                            uVar13 = local_3c;
                                            iVar6 = local_48;
                                            uVar20 = local_4c;
                                            uVar15 = local_50;
                                            iVar5 = (int)local_78;
                                            TextureRaster(local_58, local_b8, pAVar10, local_34, (int)local_4c >> 14,
                                                          (int)local_78, (int)local_4c >> 14, (int)local_50 >> 14,
                                                          local_48, local_60, local_3c, local_34, local_40,
                                                          (int)local_a0, (int)local_b0, (int)local_a8);
                                            local_50 = uVar15 + local_6c;
                                            local_4c = uVar20 + local_64;
                                            local_48 = iVar6 + local_5c;
                                            local_78 =
                                                (SharedArray*)CONCAT44(local_78._4_4_, iVar5 + local_58->field_104);
                                            local_3c = uVar13 + (int)local_98;
                                            local_34 = local_34 + (int)local_90;
                                            local_40 = local_40 + (int)local_88;
                                            iVar5 = (int)local_80 + -1;
                                            local_80 = (SharedArray*)CONCAT44(local_80._4_4_, iVar5);
                                        } while (1 < iVar5);
                                    }
                                    if (0 < (int)local_38) {
                                        local_38 = local_38 + 1;
                                        do {
                                            pAVar10 =
                                                (Array*)shared_ptr<Array<unsigned int, eastl::allocator>>::operator*(
                                                    (shared_ptr<Array<unsigned int, eastl::allocator>>*)&local_c8);
                                            uVar13 = local_3c;
                                            uVar20 = local_44;
                                            iVar6 = local_48;
                                            uVar15 = local_4c;
                                            iVar5 = (int)local_78;
                                            TextureRaster(local_58, local_b8, pAVar10, local_34, (int)local_4c >> 14,
                                                          (int)local_78, (int)local_4c >> 14, (int)local_44 >> 14,
                                                          local_48, local_60, local_3c, local_34, local_40,
                                                          (int)local_a0, (int)local_b0, (int)local_a8);
                                            local_44 = uVar20 + local_68;
                                            local_4c = uVar15 + local_64;
                                            local_48 = iVar6 + local_5c;
                                            local_78 =
                                                (SharedArray*)CONCAT44(local_78._4_4_, iVar5 + local_58->field_104);
                                            local_3c = uVar13 + (int)local_98;
                                            local_34 = local_34 + (int)local_90;
                                            local_40 = local_40 + (int)local_88;
                                            local_38 = local_38 - 1;
                                        } while (1 < (int)local_38);
                                    }
                                }
                            }
                        }
                    } else if ((int)local_3c < (int)uVar15) {
                        if ((int)uVar15 < (int)local_34) {
                            local_34 = uVar15;
                        }
                        if ((int)uVar15 < (int)local_38) {
                            local_38 = uVar15;
                        }
                        local_48 = (param_8 * 512 - local_60 * local_44) + local_60;
                        local_4c = local_44 * 16384;
                        local_44 = local_4c;
                        if ((int)local_34 < (int)local_38) {
                            if ((int)local_3c < 0) {
                                uVar20 = local_4c - local_68 * local_3c;
                                local_44 = local_4c - local_6c * local_3c;
                                local_48 = local_48 - local_3c * local_5c;
                                uVar15 = 0;
                            } else {
                                uVar15 = local_3c;
                                uVar20 = local_4c;
                            }
                            local_4c = param_6 * 16384 - ((int)local_34 >> 31 & local_34 * local_64);
                            uVar13 = 0;
                            if (-1 < (int)local_34) {
                                uVar13 = local_34;
                            }
                            iVar12 = uVar15 - *(int*)&local_58->field_24;
                            local_50 = iVar12 * (int)local_98 + iVar7;
                            local_34 = iVar12 * (int)local_90 + iVar5;
                            local_40 = iVar12 * (int)local_88 + iVar6;
                            local_38 = local_38 - uVar13;
                            local_3c = uVar20;
                            if ((uVar13 == uVar15) || (local_6c <= local_68)) {
                                piVar11 = (int*)eastl::vector<int, eastl::allocator>::operator[](
                                    (vector<int, eastl::allocator>*)&local_58->field_56, (long)(int)uVar15);
                                iVar5 = *piVar11;
                                local_78 = (SharedArray*)&local_58->field_120;
                                if (uVar13 - uVar15 != 0 && (int)uVar15 <= (int)uVar13) {
                                    local_80 = (SharedArray*)CONCAT44(local_80._4_4_, (uVar13 - uVar15) + 1);
                                    do {
                                        pAVar10 = (Array*)shared_ptr<Array<unsigned int, eastl::allocator>>::operator*(
                                            (shared_ptr<Array<unsigned int, eastl::allocator>>*)&local_c8);
                                        uVar13 = local_3c;
                                        uVar20 = local_44;
                                        iVar6 = local_48;
                                        uVar15 = local_50;
                                        TextureRaster(local_58, local_78, pAVar10, local_34, (int)local_44 >> 14, iVar5,
                                                      (int)local_44 >> 14, (int)local_3c >> 14, local_48, local_60,
                                                      local_50, local_34, local_40, (int)local_a0, (int)local_b0,
                                                      (int)local_a8);
                                        local_3c = uVar13 + local_68;
                                        local_44 = uVar20 + local_6c;
                                        local_48 = iVar6 + local_5c;
                                        iVar5 = iVar5 + local_58->field_104;
                                        local_50 = uVar15 + (int)local_98;
                                        local_34 = local_34 + (int)local_90;
                                        local_40 = local_40 + (int)local_88;
                                        iVar6 = (int)local_80 + -1;
                                        local_80 = (SharedArray*)CONCAT44(local_80._4_4_, iVar6);
                                    } while (1 < iVar6);
                                }
                                if (0 < (int)local_38) {
                                    local_38 = local_38 + 1;
                                    do {
                                        pAVar10 = (Array*)shared_ptr<Array<unsigned int, eastl::allocator>>::operator*(
                                            (shared_ptr<Array<unsigned int, eastl::allocator>>*)&local_c8);
                                        uVar13 = local_3c;
                                        iVar6 = local_48;
                                        uVar20 = local_4c;
                                        uVar15 = local_50;
                                        TextureRaster(local_58, local_78, pAVar10, local_34, (int)local_4c >> 14, iVar5,
                                                      (int)local_4c >> 14, (int)local_3c >> 14, local_48, local_60,
                                                      local_50, local_34, local_40, (int)local_a0, (int)local_b0,
                                                      (int)local_a8);
                                        local_3c = uVar13 + local_68;
                                        local_4c = uVar20 + local_64;
                                        local_48 = iVar6 + local_5c;
                                        iVar5 = iVar5 + local_58->field_104;
                                        local_50 = uVar15 + (int)local_98;
                                        local_34 = local_34 + (int)local_90;
                                        local_40 = local_40 + (int)local_88;
                                        local_38 = local_38 - 1;
                                    } while (1 < (int)local_38);
                                }
                            } else {
                                piVar11 = (int*)eastl::vector<int, eastl::allocator>::operator[](
                                    (vector<int, eastl::allocator>*)&local_58->field_56, (long)(int)uVar15);
                                iVar5 = *piVar11;
                                local_78 = (SharedArray*)&local_58->field_120;
                                if (uVar13 - uVar15 != 0 && (int)uVar15 <= (int)uVar13) {
                                    local_80 = (SharedArray*)CONCAT44(local_80._4_4_, (uVar13 - uVar15) + 1);
                                    do {
                                        pAVar10 = (Array*)shared_ptr<Array<unsigned int, eastl::allocator>>::operator*(
                                            (shared_ptr<Array<unsigned int, eastl::allocator>>*)&local_c8);
                                        uVar13 = local_3c;
                                        uVar20 = local_44;
                                        iVar6 = local_48;
                                        uVar15 = local_50;
                                        TextureRaster(local_58, local_78, pAVar10, local_34, (int)local_3c >> 14, iVar5,
                                                      (int)local_3c >> 14, (int)local_44 >> 14, local_48, local_60,
                                                      local_50, local_34, local_40, (int)local_a0, (int)local_b0,
                                                      (int)local_a8);
                                        local_3c = uVar13 + local_68;
                                        local_44 = uVar20 + local_6c;
                                        local_48 = iVar6 + local_5c;
                                        iVar5 = iVar5 + local_58->field_104;
                                        local_50 = uVar15 + (int)local_98;
                                        local_34 = local_34 + (int)local_90;
                                        local_40 = local_40 + (int)local_88;
                                        iVar6 = (int)local_80 + -1;
                                        local_80 = (SharedArray*)CONCAT44(local_80._4_4_, iVar6);
                                    } while (1 < iVar6);
                                }
                                if (0 < (int)local_38) {
                                    local_38 = local_38 + 1;
                                    do {
                                        pAVar10 = (Array*)shared_ptr<Array<unsigned int, eastl::allocator>>::operator*(
                                            (shared_ptr<Array<unsigned int, eastl::allocator>>*)&local_c8);
                                        uVar13 = local_3c;
                                        iVar6 = local_48;
                                        uVar20 = local_4c;
                                        uVar15 = local_50;
                                        TextureRaster(local_58, local_78, pAVar10, local_34, (int)local_3c >> 14, iVar5,
                                                      (int)local_3c >> 14, (int)local_4c >> 14, local_48, local_60,
                                                      local_50, local_34, local_40, (int)local_a0, (int)local_b0,
                                                      (int)local_a8);
                                        local_3c = uVar13 + local_68;
                                        local_4c = uVar20 + local_64;
                                        local_48 = iVar6 + local_5c;
                                        iVar5 = iVar5 + local_58->field_104;
                                        local_50 = uVar15 + (int)local_98;
                                        local_34 = local_34 + (int)local_90;
                                        local_40 = local_40 + (int)local_88;
                                        local_38 = local_38 - 1;
                                    } while (1 < (int)local_38);
                                }
                            }
                        } else {
                            if ((int)local_3c < 0) {
                                local_44 = local_4c - local_68 * local_3c;
                                local_4c = local_4c - local_6c * local_3c;
                                local_48 = local_48 - local_3c * local_5c;
                                uVar15 = 0;
                            } else {
                                uVar15 = local_3c;
                            }
                            local_40 = param_4 * 16384 - ((int)local_38 >> 31 & local_38 * local_64);
                            uVar20 = 0;
                            if (-1 < (int)local_38) {
                                uVar20 = local_38;
                            }
                            iVar12 = uVar15 - *(int*)&local_58->field_24;
                            local_50 = iVar12 * (int)local_98 + iVar7;
                            local_38 = iVar12 * (int)local_90 + iVar5;
                            local_3c = iVar12 * (int)local_88 + iVar6;
                            local_34 = local_34 - uVar20;
                            if (local_68 < local_6c) {
                                piVar11 = (int*)eastl::vector<int, eastl::allocator>::operator[](
                                    (vector<int, eastl::allocator>*)&local_58->field_56, (long)(int)uVar15);
                                iVar5 = *piVar11;
                                local_78 = (SharedArray*)&local_58->field_120;
                                if (uVar20 - uVar15 != 0 && (int)uVar15 <= (int)uVar20) {
                                    local_80 = (SharedArray*)CONCAT44(local_80._4_4_, (uVar20 - uVar15) + 1);
                                    do {
                                        pAVar10 = (Array*)shared_ptr<Array<unsigned int, eastl::allocator>>::operator*(
                                            (shared_ptr<Array<unsigned int, eastl::allocator>>*)&local_c8);
                                        uVar13 = local_44;
                                        iVar6 = local_48;
                                        uVar20 = local_4c;
                                        uVar15 = local_50;
                                        TextureRaster(local_58, local_78, pAVar10, local_38, (int)local_44 >> 14, iVar5,
                                                      (int)local_44 >> 14, (int)local_4c >> 14, local_48, local_60,
                                                      local_50, local_38, local_3c, (int)local_a0, (int)local_b0,
                                                      (int)local_a8);
                                        local_44 = uVar13 + local_68;
                                        local_4c = uVar20 + local_6c;
                                        local_48 = iVar6 + local_5c;
                                        iVar5 = iVar5 + local_58->field_104;
                                        local_50 = uVar15 + (int)local_98;
                                        local_38 = local_38 + (int)local_90;
                                        local_3c = local_3c + (int)local_88;
                                        iVar6 = (int)local_80 + -1;
                                        local_80 = (SharedArray*)CONCAT44(local_80._4_4_, iVar6);
                                    } while (1 < iVar6);
                                }
                                if (0 < (int)local_34) {
                                    local_34 = local_34 + 1;
                                    do {
                                        pAVar10 = (Array*)shared_ptr<Array<unsigned int, eastl::allocator>>::operator*(
                                            (shared_ptr<Array<unsigned int, eastl::allocator>>*)&local_c8);
                                        uVar13 = local_40;
                                        iVar6 = local_48;
                                        uVar20 = local_4c;
                                        uVar15 = local_50;
                                        TextureRaster(local_58, local_78, pAVar10, local_38, (int)local_40 >> 14, iVar5,
                                                      (int)local_40 >> 14, (int)local_4c >> 14, local_48, local_60,
                                                      local_50, local_38, local_3c, (int)local_a0, (int)local_b0,
                                                      (int)local_a8);
                                        local_40 = uVar13 + local_64;
                                        local_4c = uVar20 + local_6c;
                                        local_48 = iVar6 + local_5c;
                                        iVar5 = iVar5 + local_58->field_104;
                                        local_50 = uVar15 + (int)local_98;
                                        local_38 = local_38 + (int)local_90;
                                        local_3c = local_3c + (int)local_88;
                                        local_34 = local_34 - 1;
                                    } while (1 < (int)local_34);
                                }
                            } else {
                                piVar11 = (int*)eastl::vector<int, eastl::allocator>::operator[](
                                    (vector<int, eastl::allocator>*)&local_58->field_56, (long)(int)uVar15);
                                iVar5 = *piVar11;
                                local_78 = (SharedArray*)&local_58->field_120;
                                if (uVar20 - uVar15 != 0 && (int)uVar15 <= (int)uVar20) {
                                    local_80 = (SharedArray*)CONCAT44(local_80._4_4_, (uVar20 - uVar15) + 1);
                                    do {
                                        pAVar10 = (Array*)shared_ptr<Array<unsigned int, eastl::allocator>>::operator*(
                                            (shared_ptr<Array<unsigned int, eastl::allocator>>*)&local_c8);
                                        uVar13 = local_44;
                                        iVar6 = local_48;
                                        uVar20 = local_4c;
                                        uVar15 = local_50;
                                        TextureRaster(local_58, local_78, pAVar10, local_38, (int)local_4c >> 14, iVar5,
                                                      (int)local_4c >> 14, (int)local_44 >> 14, local_48, local_60,
                                                      local_50, local_38, local_3c, (int)local_a0, (int)local_b0,
                                                      (int)local_a8);
                                        local_44 = uVar13 + local_68;
                                        local_4c = uVar20 + local_6c;
                                        local_48 = iVar6 + local_5c;
                                        iVar5 = iVar5 + local_58->field_104;
                                        local_50 = uVar15 + (int)local_98;
                                        local_38 = local_38 + (int)local_90;
                                        local_3c = local_3c + (int)local_88;
                                        iVar6 = (int)local_80 + -1;
                                        local_80 = (SharedArray*)CONCAT44(local_80._4_4_, iVar6);
                                    } while (1 < iVar6);
                                }
                                if (0 < (int)local_34) {
                                    local_34 = local_34 + 1;
                                    do {
                                        pAVar10 = (Array*)shared_ptr<Array<unsigned int, eastl::allocator>>::operator*(
                                            (shared_ptr<Array<unsigned int, eastl::allocator>>*)&local_c8);
                                        uVar13 = local_40;
                                        iVar6 = local_48;
                                        uVar20 = local_4c;
                                        uVar15 = local_50;
                                        TextureRaster(local_58, local_78, pAVar10, local_38, (int)local_4c >> 14, iVar5,
                                                      (int)local_4c >> 14, (int)local_40 >> 14, local_48, local_60,
                                                      local_50, local_38, local_3c, (int)local_a0, (int)local_b0,
                                                      (int)local_a8);
                                        local_40 = uVar13 + local_64;
                                        local_4c = uVar20 + local_6c;
                                        local_48 = iVar6 + local_5c;
                                        iVar5 = iVar5 + local_58->field_104;
                                        local_50 = uVar15 + (int)local_98;
                                        local_38 = local_38 + (int)local_90;
                                        local_3c = local_3c + (int)local_88;
                                        local_34 = local_34 - 1;
                                    } while (1 < (int)local_34);
                                }
                            }
                        }
                    }
                } else {
                    uVar15 = local_58->field_32;
                    if ((int)local_38 < (int)uVar15) {
                        if ((int)uVar15 < (int)local_3c) {
                            local_3c = uVar15;
                        }
                        if ((int)uVar15 < (int)local_34) {
                            local_34 = uVar15;
                        }
                        local_48 = (param_7 * 512 - local_60 * param_4) + local_60;
                        uVar15 = param_4 * 16384;
                        local_40 = uVar15;
                        if ((int)local_3c < (int)local_34) {
                            if ((int)local_38 < 0) {
                                local_40 = uVar15 - local_64 * local_38;
                                uVar15 = uVar15 - local_68 * local_38;
                                local_48 = local_48 - local_38 * local_5c;
                                uVar20 = 0;
                            } else {
                                uVar20 = local_38;
                            }
                            local_44 = local_44 * 16384 - ((int)local_3c >> 31 & local_3c * local_6c);
                            uVar13 = 0;
                            if (-1 < (int)local_3c) {
                                uVar13 = local_3c;
                            }
                            iVar12 = uVar20 - *(int*)&local_58->field_24;
                            local_4c = iVar12 * (int)local_98 + iVar7;
                            local_38 = iVar12 * (int)local_90 + iVar5;
                            local_3c = iVar12 * (int)local_88 + iVar6;
                            local_34 = local_34 - uVar13;
                            if ((uVar13 == uVar20) || (local_68 <= local_64)) {
                                puVar9 = (undefined4*)eastl::vector<int, eastl::allocator>::operator[](
                                    (vector<int, eastl::allocator>*)&local_58->field_56, (long)(int)uVar20);
                                local_78 = (SharedArray*)CONCAT44(local_78._4_4_, *puVar9);
                                local_b8 = (SharedArray*)&local_58->field_120;
                                if (uVar13 - uVar20 != 0 && (int)uVar20 <= (int)uVar13) {
                                    local_80 = (SharedArray*)CONCAT44(local_80._4_4_, (uVar13 - uVar20) + 1);
                                    local_50 = uVar15;
                                    do {
                                        pAVar10 = (Array*)shared_ptr<Array<unsigned int, eastl::allocator>>::operator*(
                                            (shared_ptr<Array<unsigned int, eastl::allocator>>*)&local_c8);
                                        uVar13 = local_38;
                                        uVar20 = local_40;
                                        iVar6 = local_48;
                                        uVar15 = local_50;
                                        iVar5 = (int)local_78;
                                        TextureRaster(local_58, local_b8, pAVar10, local_4c, (int)local_50 >> 14,
                                                      (int)local_78, (int)local_50 >> 14, (int)local_40 >> 14, local_48,
                                                      local_60, local_4c, local_38, local_3c, (int)local_a0,
                                                      (int)local_b0, (int)local_a8);
                                        local_40 = uVar20 + local_64;
                                        local_50 = uVar15 + local_68;
                                        local_48 = iVar6 + local_5c;
                                        local_78 = (SharedArray*)CONCAT44(local_78._4_4_, iVar5 + local_58->field_104);
                                        local_4c = local_4c + (int)local_98;
                                        local_38 = uVar13 + (int)local_90;
                                        local_3c = local_3c + (int)local_88;
                                        iVar5 = (int)local_80 + -1;
                                        local_80 = (SharedArray*)CONCAT44(local_80._4_4_, iVar5);
                                    } while (1 < iVar5);
                                }
                                if (0 < (int)local_34) {
                                    local_34 = local_34 + 1;
                                    do {
                                        pAVar10 = (Array*)shared_ptr<Array<unsigned int, eastl::allocator>>::operator*(
                                            (shared_ptr<Array<unsigned int, eastl::allocator>>*)&local_c8);
                                        uVar13 = local_40;
                                        uVar20 = local_44;
                                        iVar6 = local_48;
                                        uVar15 = local_4c;
                                        iVar5 = (int)local_78;
                                        TextureRaster(local_58, local_b8, pAVar10, local_38, (int)local_44 >> 14,
                                                      (int)local_78, (int)local_44 >> 14, (int)local_40 >> 14, local_48,
                                                      local_60, local_4c, local_38, local_3c, (int)local_a0,
                                                      (int)local_b0, (int)local_a8);
                                        local_40 = uVar13 + local_64;
                                        local_44 = uVar20 + local_6c;
                                        local_48 = iVar6 + local_5c;
                                        local_78 = (SharedArray*)CONCAT44(local_78._4_4_, iVar5 + local_58->field_104);
                                        local_4c = uVar15 + (int)local_98;
                                        local_38 = local_38 + (int)local_90;
                                        local_3c = local_3c + (int)local_88;
                                        local_34 = local_34 - 1;
                                    } while (1 < (int)local_34);
                                }
                            } else {
                                puVar9 = (undefined4*)eastl::vector<int, eastl::allocator>::operator[](
                                    (vector<int, eastl::allocator>*)&local_58->field_56, (long)(int)uVar20);
                                local_78 = (SharedArray*)CONCAT44(local_78._4_4_, *puVar9);
                                local_b8 = (SharedArray*)&local_58->field_120;
                                if (uVar13 - uVar20 != 0 && (int)uVar20 <= (int)uVar13) {
                                    local_80 = (SharedArray*)CONCAT44(local_80._4_4_, (uVar13 - uVar20) + 1);
                                    local_50 = uVar15;
                                    do {
                                        pAVar10 = (Array*)shared_ptr<Array<unsigned int, eastl::allocator>>::operator*(
                                            (shared_ptr<Array<unsigned int, eastl::allocator>>*)&local_c8);
                                        uVar13 = local_40;
                                        iVar6 = local_48;
                                        uVar20 = local_4c;
                                        uVar15 = local_50;
                                        iVar5 = (int)local_78;
                                        TextureRaster(local_58, local_b8, pAVar10, local_38, (int)local_40 >> 14,
                                                      (int)local_78, (int)local_40 >> 14, (int)local_50 >> 14, local_48,
                                                      local_60, local_4c, local_38, local_3c, (int)local_a0,
                                                      (int)local_b0, (int)local_a8);
                                        local_40 = uVar13 + local_64;
                                        local_50 = uVar15 + local_68;
                                        local_48 = iVar6 + local_5c;
                                        local_78 = (SharedArray*)CONCAT44(local_78._4_4_, iVar5 + local_58->field_104);
                                        local_4c = uVar20 + (int)local_98;
                                        local_38 = local_38 + (int)local_90;
                                        local_3c = local_3c + (int)local_88;
                                        iVar5 = (int)local_80 + -1;
                                        local_80 = (SharedArray*)CONCAT44(local_80._4_4_, iVar5);
                                    } while (1 < iVar5);
                                }
                                if (0 < (int)local_34) {
                                    local_34 = local_34 + 1;
                                    do {
                                        pAVar10 = (Array*)shared_ptr<Array<unsigned int, eastl::allocator>>::operator*(
                                            (shared_ptr<Array<unsigned int, eastl::allocator>>*)&local_c8);
                                        uVar13 = local_40;
                                        uVar20 = local_44;
                                        iVar6 = local_48;
                                        uVar15 = local_4c;
                                        iVar5 = (int)local_78;
                                        TextureRaster(local_58, local_b8, pAVar10, local_38, (int)local_40 >> 14,
                                                      (int)local_78, (int)local_40 >> 14, (int)local_44 >> 14, local_48,
                                                      local_60, local_4c, local_38, local_3c, (int)local_a0,
                                                      (int)local_b0, (int)local_a8);
                                        local_40 = uVar13 + local_64;
                                        local_44 = uVar20 + local_6c;
                                        local_48 = iVar6 + local_5c;
                                        local_78 = (SharedArray*)CONCAT44(local_78._4_4_, iVar5 + local_58->field_104);
                                        local_4c = uVar15 + (int)local_98;
                                        local_38 = local_38 + (int)local_90;
                                        local_3c = local_3c + (int)local_88;
                                        local_34 = local_34 - 1;
                                    } while (1 < (int)local_34);
                                }
                            }
                        } else {
                            if ((int)local_38 < 0) {
                                local_40 = uVar15 - local_64 * local_38;
                                uVar15 = uVar15 - local_68 * local_38;
                                local_48 = local_48 - local_38 * local_5c;
                                uVar20 = 0;
                            } else {
                                uVar20 = local_38;
                            }
                            local_4c = param_6 * 16384 - ((int)local_34 >> 31 & local_34 * local_6c);
                            uVar13 = 0;
                            if (-1 < (int)local_34) {
                                uVar13 = local_34;
                            }
                            iVar12 = uVar20 - *(int*)&local_58->field_24;
                            local_38 = iVar12 * (int)local_98 + iVar7;
                            local_34 = iVar12 * (int)local_90 + iVar5;
                            local_44 = iVar12 * (int)local_88 + iVar6;
                            local_b8 = (SharedArray*)CONCAT44(local_b8._4_4_, uVar13);
                            local_50 = uVar15;
                            if (((uVar13 == uVar20) || (local_68 <= local_64)) &&
                                ((uVar13 != uVar20 || (local_6c <= local_68)))) {
                                piVar11 = (int*)eastl::vector<int, eastl::allocator>::operator[](
                                    (vector<int, eastl::allocator>*)&local_58->field_56, (long)(int)uVar20);
                                iVar5 = *piVar11;
                                local_80 = (SharedArray*)&pSVar1->field_120;
                                if ((int)local_b8 - uVar20 != 0 && (int)uVar20 <= (int)local_b8) {
                                    local_78 = (SharedArray*)CONCAT44(local_78._4_4_, ((int)local_b8 - uVar20) + 1);
                                    do {
                                        pAVar10 = (Array*)shared_ptr<Array<unsigned int, eastl::allocator>>::operator*(
                                            (shared_ptr<Array<unsigned int, eastl::allocator>>*)&local_c8);
                                        uVar13 = local_38;
                                        uVar20 = local_40;
                                        iVar6 = local_48;
                                        uVar15 = local_50;
                                        TextureRaster(local_58, local_80, pAVar10, local_34, (int)local_50 >> 14, iVar5,
                                                      (int)local_50 >> 14, (int)local_40 >> 14, local_48, local_60,
                                                      local_38, local_34, local_44, (int)local_a0, (int)local_b0,
                                                      (int)local_a8);
                                        local_40 = uVar20 + local_64;
                                        local_50 = uVar15 + local_68;
                                        local_48 = iVar6 + local_5c;
                                        iVar5 = iVar5 + local_58->field_104;
                                        local_38 = uVar13 + (int)local_98;
                                        local_34 = local_34 + (int)local_90;
                                        local_44 = local_44 + (int)local_88;
                                        iVar6 = (int)local_78 + -1;
                                        local_78 = (SharedArray*)CONCAT44(local_78._4_4_, iVar6);
                                    } while (1 < iVar6);
                                }
                                local_3c = local_3c - (int)local_b8;
                                if (0 < (int)local_3c) {
                                    local_3c = local_3c + 1;
                                    uVar15 = local_50;
                                    do {
                                        pAVar10 = (Array*)shared_ptr<Array<unsigned int, eastl::allocator>>::operator*(
                                            (shared_ptr<Array<unsigned int, eastl::allocator>>*)&local_c8);
                                        uVar13 = local_38;
                                        iVar6 = local_48;
                                        uVar20 = local_4c;
                                        TextureRaster(local_58, local_80, pAVar10, local_34, (int)uVar15 >> 14, iVar5,
                                                      (int)uVar15 >> 14, (int)local_4c >> 14, local_48, local_60,
                                                      local_38, local_34, local_44, (int)local_a0, (int)local_b0,
                                                      (int)local_a8);
                                        local_4c = uVar20 + local_6c;
                                        uVar15 = uVar15 + local_68;
                                        local_48 = iVar6 + local_5c;
                                        iVar5 = iVar5 + local_58->field_104;
                                        local_38 = uVar13 + (int)local_98;
                                        local_34 = local_34 + (int)local_90;
                                        local_44 = local_44 + (int)local_88;
                                        local_3c = local_3c - 1;
                                    } while (1 < (int)local_3c);
                                }
                            } else {
                                piVar11 = (int*)eastl::vector<int, eastl::allocator>::operator[](
                                    (vector<int, eastl::allocator>*)&local_58->field_56, (long)(int)uVar20);
                                iVar5 = *piVar11;
                                local_80 = (SharedArray*)&pSVar1->field_120;
                                if ((int)local_b8 - uVar20 != 0 && (int)uVar20 <= (int)local_b8) {
                                    local_78 = (SharedArray*)CONCAT44(local_78._4_4_, ((int)local_b8 - uVar20) + 1);
                                    do {
                                        pAVar10 = (Array*)shared_ptr<Array<unsigned int, eastl::allocator>>::operator*(
                                            (shared_ptr<Array<unsigned int, eastl::allocator>>*)&local_c8);
                                        uVar13 = local_38;
                                        uVar20 = local_40;
                                        iVar6 = local_48;
                                        uVar15 = local_50;
                                        TextureRaster(local_58, local_80, pAVar10, local_34, (int)local_40 >> 14, iVar5,
                                                      (int)local_40 >> 14, (int)local_50 >> 14, local_48, local_60,
                                                      local_38, local_34, local_44, (int)local_a0, (int)local_b0,
                                                      (int)local_a8);
                                        local_40 = uVar20 + local_64;
                                        local_50 = uVar15 + local_68;
                                        local_48 = iVar6 + local_5c;
                                        iVar5 = iVar5 + local_58->field_104;
                                        local_38 = uVar13 + (int)local_98;
                                        local_34 = local_34 + (int)local_90;
                                        local_44 = local_44 + (int)local_88;
                                        iVar6 = (int)local_78 + -1;
                                        local_78 = (SharedArray*)CONCAT44(local_78._4_4_, iVar6);
                                    } while (1 < iVar6);
                                }
                                local_3c = local_3c - (int)local_b8;
                                if (0 < (int)local_3c) {
                                    local_3c = local_3c + 1;
                                    do {
                                        pAVar10 = (Array*)shared_ptr<Array<unsigned int, eastl::allocator>>::operator*(
                                            (shared_ptr<Array<unsigned int, eastl::allocator>>*)&local_c8);
                                        uVar13 = local_38;
                                        iVar6 = local_48;
                                        uVar20 = local_4c;
                                        uVar15 = local_50;
                                        TextureRaster(local_58, local_80, pAVar10, local_34, (int)local_4c >> 14, iVar5,
                                                      (int)local_4c >> 14, (int)local_50 >> 14, local_48, local_60,
                                                      local_38, local_34, local_44, (int)local_a0, (int)local_b0,
                                                      (int)local_a8);
                                        local_4c = uVar20 + local_6c;
                                        local_50 = uVar15 + local_68;
                                        local_48 = iVar6 + local_5c;
                                        iVar5 = iVar5 + local_58->field_104;
                                        local_38 = uVar13 + (int)local_98;
                                        local_34 = local_34 + (int)local_90;
                                        local_44 = local_44 + (int)local_88;
                                        local_3c = local_3c - 1;
                                    } while (1 < (int)local_3c);
                                }
                            }
                        }
                    }
                }
            }
        }
        local_c8.~shared_ptr();
        local_418->~LanguageMessage();
    }

    // 0x1002fd2f0, 5056 bytes, placed by class name and debug map
    // SoftwarePix3D::TextureRaster(SharedArray<unsigned int>&, Array<unsigned int, eastl::allocator>&, int, int, int, int, int, int, int, int, int, int, int, int, int)
    void SoftwarePix3D::TextureRaster(SharedArray* param_1, Array* param_2, int param_3, int param_4, int param_5,
                                      int param_6, int param_7, int param_8, int param_9, int param_10, int param_11,
                                      int param_12, int param_13, int param_14, int param_15) {
        int iVar1;
        int iVar2;
        undefined4 uVar3;
        uint uVar4;
        long lVar5;
        int* piVar6;
        undefined4* puVar7;
        uint uVar8;
        uint uVar9;
        long lVar10;
        int iVar11;
        int iVar12;
        int iVar13;
        uint uVar14;
        int iVar15;
        int iVar16;
        ulong uVar17;
        int iVar18;
        int local_80;
        long local_48;
        int local_38;
        int local_34;

        if (field_8 != '\0') {
            if (field_28 < param_7) {
                param_7 = field_28;
            }
            if (param_6 < 0) {
                param_6 = 0;
            }
        }
        uVar8 = param_7 - param_6;
        if (uVar8 != 0 && param_6 <= param_7) {
            iVar11 = param_5 + param_6;
            iVar1 = param_6 - field_20;
            iVar18 = (param_13 >> 3) * iVar1 + param_10;
            iVar13 = (param_14 >> 3) * iVar1 + param_11;
            uVar9 = (param_15 >> 3) * iVar1 + param_12;
            iVar1 = (int)uVar8 >> 3;
            local_34 = param_6 * param_9 + param_8 >> 8;
            if (field_10 == '\0') {
                local_80 = 0;
                iVar16 = 0;
                iVar12 = 0;
                if (16383 < uVar9) {
                    iVar2 = iVar18 / ((int)uVar9 >> 14);
                    iVar16 = iVar13 / ((int)uVar9 >> 14);
                    if (iVar2 < 0) {
                        iVar12 = 0;
                    } else {
                        iVar12 = 16256;
                        if (iVar2 < 16256) {
                            iVar12 = iVar2;
                        }
                    }
                }
                if (uVar9 + param_15 < 16384) {
                    uVar17 = 0;
                } else {
                    iVar15 = (int)(uVar9 + param_15) >> 14;
                    iVar2 = (param_13 + iVar18) / iVar15;
                    uVar17 = (long)(iVar13 + param_14) / (long)iVar15 & 4294967295;
                    if (iVar2 < 0) {
                        local_80 = 0;
                    } else {
                        local_80 = 16256;
                        if (iVar2 < 16256) {
                            local_80 = iVar2;
                        }
                    }
                }
                uVar14 = iVar12 * 262144 + iVar16;
                local_38 = ((int)uVar17 - iVar16 >> 3) + (local_80 - iVar12 & 4294967288U) * 32768;
                if (field_9 == '\0') {
                    if (7 < (int)uVar8) {
                        lVar5 = (long)iVar11;
                        iVar12 = param_8 + param_9 * (param_6 + 8);
                        iVar18 = iVar18 + param_13 * 2;
                        iVar13 = iVar13 + param_14 * 2;
                        uVar9 = uVar9 + param_15 * 2;
                        iVar1 = iVar1 + 1;
                        local_48 = 0;
                        do {
                            piVar6 = (int*)Array<unsigned int, eastl::allocator>::operator[](
                                (Array<unsigned int, eastl::allocator>*)param_2,
                                (ulong)(uVar14 >> 25 | uVar14 & 16256));
                            if (*piVar6 != 0) {
                                uVar3 = TextureRasterWithAlphaChannel(*piVar6, local_34);
                                puVar7 = (undefined4*)SharedArray<unsigned int>::operator[](
                                    (SharedArray<unsigned int>*)param_1, lVar5 + local_48);
                                *puVar7 = uVar3;
                            }
                            uVar14 = uVar14 + local_38;
                            piVar6 = (int*)Array<unsigned int, eastl::allocator>::operator[](
                                (Array<unsigned int, eastl::allocator>*)param_2,
                                (ulong)(uVar14 >> 25 | uVar14 & 16256));
                            if (*piVar6 != 0) {
                                uVar3 = TextureRasterWithAlphaChannel(*piVar6, local_34);
                                puVar7 = (undefined4*)SharedArray<unsigned int>::operator[](
                                    (SharedArray<unsigned int>*)param_1, lVar5 + local_48 + 1);
                                *puVar7 = uVar3;
                            }
                            uVar14 = uVar14 + local_38;
                            piVar6 = (int*)Array<unsigned int, eastl::allocator>::operator[](
                                (Array<unsigned int, eastl::allocator>*)param_2,
                                (ulong)(uVar14 >> 25 | uVar14 & 16256));
                            if (*piVar6 != 0) {
                                uVar3 = TextureRasterWithAlphaChannel(*piVar6, local_34);
                                puVar7 = (undefined4*)SharedArray<unsigned int>::operator[](
                                    (SharedArray<unsigned int>*)param_1, lVar5 + local_48 + 2);
                                *puVar7 = uVar3;
                            }
                            uVar14 = uVar14 + local_38;
                            piVar6 = (int*)Array<unsigned int, eastl::allocator>::operator[](
                                (Array<unsigned int, eastl::allocator>*)param_2,
                                (ulong)(uVar14 >> 25 | uVar14 & 16256));
                            if (*piVar6 != 0) {
                                uVar3 = TextureRasterWithAlphaChannel(*piVar6, local_34);
                                puVar7 = (undefined4*)SharedArray<unsigned int>::operator[](
                                    (SharedArray<unsigned int>*)param_1, lVar5 + local_48 + 3);
                                *puVar7 = uVar3;
                            }
                            uVar14 = uVar14 + local_38;
                            piVar6 = (int*)Array<unsigned int, eastl::allocator>::operator[](
                                (Array<unsigned int, eastl::allocator>*)param_2,
                                (ulong)(uVar14 >> 25 | uVar14 & 16256));
                            if (*piVar6 != 0) {
                                uVar3 = TextureRasterWithAlphaChannel(*piVar6, local_34);
                                puVar7 = (undefined4*)SharedArray<unsigned int>::operator[](
                                    (SharedArray<unsigned int>*)param_1, lVar5 + local_48 + 4);
                                *puVar7 = uVar3;
                            }
                            uVar14 = uVar14 + local_38;
                            piVar6 = (int*)Array<unsigned int, eastl::allocator>::operator[](
                                (Array<unsigned int, eastl::allocator>*)param_2,
                                (ulong)(uVar14 >> 25 | uVar14 & 16256));
                            if (*piVar6 != 0) {
                                uVar3 = TextureRasterWithAlphaChannel(*piVar6, local_34);
                                puVar7 = (undefined4*)SharedArray<unsigned int>::operator[](
                                    (SharedArray<unsigned int>*)param_1, lVar5 + local_48 + 5);
                                *puVar7 = uVar3;
                            }
                            uVar14 = uVar14 + local_38;
                            piVar6 = (int*)Array<unsigned int, eastl::allocator>::operator[](
                                (Array<unsigned int, eastl::allocator>*)param_2,
                                (ulong)(uVar14 >> 25 | uVar14 & 16256));
                            if (*piVar6 != 0) {
                                uVar3 = TextureRasterWithAlphaChannel(*piVar6, local_34);
                                puVar7 = (undefined4*)SharedArray<unsigned int>::operator[](
                                    (SharedArray<unsigned int>*)param_1, lVar5 + local_48 + 6);
                                *puVar7 = uVar3;
                            }
                            piVar6 = (int*)Array<unsigned int, eastl::allocator>::operator[](
                                (Array<unsigned int, eastl::allocator>*)param_2,
                                (ulong)(uVar14 + local_38 >> 25 | uVar14 + local_38 & 16256));
                            if (*piVar6 != 0) {
                                uVar3 = TextureRasterWithAlphaChannel(*piVar6, local_34);
                                puVar7 = (undefined4*)SharedArray<unsigned int>::operator[](
                                    (SharedArray<unsigned int>*)param_1, lVar5 + local_48 + 7);
                                *puVar7 = uVar3;
                            }
                            iVar16 = 0;
                            if (uVar9 < 16384) {
                                uVar4 = 0;
                            } else {
                                iVar2 = iVar18 / ((int)uVar9 >> 14);
                                uVar4 = iVar13 / ((int)uVar9 >> 14);
                                if ((-1 < iVar2) && (iVar16 = iVar2, 16255 < iVar2)) {
                                    iVar16 = 16256;
                                }
                            }
                            uVar14 = local_80 * 262144 + (int)uVar17;
                            local_38 = ((int)(uVar4 - (int)uVar17) >> 3) + (iVar16 - local_80 & 4294967288U) * 32768;
                            local_34 = iVar12 >> 8;
                            local_48 = local_48 + 8;
                            iVar12 = iVar12 + param_9 * 8;
                            iVar18 = iVar18 + param_13;
                            iVar13 = iVar13 + param_14;
                            uVar9 = uVar9 + param_15;
                            iVar1 = iVar1 + -1;
                            uVar17 = (ulong)uVar4;
                            local_80 = iVar16;
                        } while (1 < iVar1);
                        iVar11 = iVar11 + (int)local_48;
                    }
                    if ((uVar8 & 7) != 0) {
                        uVar17 = (ulong)iVar11;
                        iVar18 = (uVar8 & 7) + 1;
                        do {
                            piVar6 = (int*)Array<unsigned int, eastl::allocator>::operator[](
                                (Array<unsigned int, eastl::allocator>*)param_2,
                                (ulong)(uVar14 >> 25 | uVar14 & 16256));
                            if (*piVar6 != 0) {
                                uVar3 = TextureRasterWithAlphaChannel(*piVar6, local_34);
                                puVar7 = (undefined4*)SharedArray<unsigned int>::operator[](
                                    (SharedArray<unsigned int>*)param_1, uVar17);
                                *puVar7 = uVar3;
                            }
                            uVar17 = uVar17 + 1;
                            uVar14 = uVar14 + local_38;
                            iVar18 = iVar18 + -1;
                        } while (1 < iVar18);
                    }
                } else {
                    if (7 < (int)uVar8) {
                        lVar5 = (long)iVar11;
                        iVar12 = param_8 + param_9 * (param_6 + 8);
                        iVar18 = iVar18 + param_13 * 2;
                        iVar13 = iVar13 + param_14 * 2;
                        uVar9 = uVar9 + param_15 * 2;
                        iVar1 = iVar1 + 1;
                        lVar10 = 0;
                        do {
                            piVar6 = (int*)Array<unsigned int, eastl::allocator>::operator[](
                                (Array<unsigned int, eastl::allocator>*)param_2,
                                (ulong)(uVar14 >> 25 | uVar14 & 16256));
                            uVar3 = TextureRasterWithAlphaChannel(*piVar6, local_34);
                            puVar7 = (undefined4*)SharedArray<unsigned int>::operator[](
                                (SharedArray<unsigned int>*)param_1, lVar5 + lVar10);
                            *puVar7 = uVar3;
                            uVar14 = uVar14 + local_38;
                            piVar6 = (int*)Array<unsigned int, eastl::allocator>::operator[](
                                (Array<unsigned int, eastl::allocator>*)param_2,
                                (ulong)(uVar14 >> 25 | uVar14 & 16256));
                            uVar3 = TextureRasterWithAlphaChannel(*piVar6, local_34);
                            puVar7 = (undefined4*)SharedArray<unsigned int>::operator[](
                                (SharedArray<unsigned int>*)param_1, lVar5 + lVar10 + 1);
                            *puVar7 = uVar3;
                            uVar14 = uVar14 + local_38;
                            piVar6 = (int*)Array<unsigned int, eastl::allocator>::operator[](
                                (Array<unsigned int, eastl::allocator>*)param_2,
                                (ulong)(uVar14 >> 25 | uVar14 & 16256));
                            uVar3 = TextureRasterWithAlphaChannel(*piVar6, local_34);
                            puVar7 = (undefined4*)SharedArray<unsigned int>::operator[](
                                (SharedArray<unsigned int>*)param_1, lVar10 + lVar5 + 2);
                            *puVar7 = uVar3;
                            uVar14 = uVar14 + local_38;
                            piVar6 = (int*)Array<unsigned int, eastl::allocator>::operator[](
                                (Array<unsigned int, eastl::allocator>*)param_2,
                                (ulong)(uVar14 >> 25 | uVar14 & 16256));
                            uVar3 = TextureRasterWithAlphaChannel(*piVar6, local_34);
                            puVar7 = (undefined4*)SharedArray<unsigned int>::operator[](
                                (SharedArray<unsigned int>*)param_1, lVar10 + lVar5 + 3);
                            *puVar7 = uVar3;
                            uVar14 = uVar14 + local_38;
                            piVar6 = (int*)Array<unsigned int, eastl::allocator>::operator[](
                                (Array<unsigned int, eastl::allocator>*)param_2,
                                (ulong)(uVar14 >> 25 | uVar14 & 16256));
                            uVar3 = TextureRasterWithAlphaChannel(*piVar6, local_34);
                            puVar7 = (undefined4*)SharedArray<unsigned int>::operator[](
                                (SharedArray<unsigned int>*)param_1, lVar10 + lVar5 + 4);
                            *puVar7 = uVar3;
                            uVar14 = uVar14 + local_38;
                            piVar6 = (int*)Array<unsigned int, eastl::allocator>::operator[](
                                (Array<unsigned int, eastl::allocator>*)param_2,
                                (ulong)(uVar14 >> 25 | uVar14 & 16256));
                            uVar3 = TextureRasterWithAlphaChannel(*piVar6, local_34);
                            puVar7 = (undefined4*)SharedArray<unsigned int>::operator[](
                                (SharedArray<unsigned int>*)param_1, lVar5 + lVar10 + 5);
                            *puVar7 = uVar3;
                            uVar14 = uVar14 + local_38;
                            piVar6 = (int*)Array<unsigned int, eastl::allocator>::operator[](
                                (Array<unsigned int, eastl::allocator>*)param_2,
                                (ulong)(uVar14 >> 25 | uVar14 & 16256));
                            uVar3 = TextureRasterWithAlphaChannel(*piVar6, local_34);
                            puVar7 = (undefined4*)SharedArray<unsigned int>::operator[](
                                (SharedArray<unsigned int>*)param_1, lVar5 + lVar10 + 6);
                            *puVar7 = uVar3;
                            piVar6 = (int*)Array<unsigned int, eastl::allocator>::operator[](
                                (Array<unsigned int, eastl::allocator>*)param_2,
                                (ulong)(uVar14 + local_38 >> 25 | uVar14 + local_38 & 16256));
                            uVar3 = TextureRasterWithAlphaChannel(*piVar6, local_34);
                            puVar7 = (undefined4*)SharedArray<unsigned int>::operator[](
                                (SharedArray<unsigned int>*)param_1, lVar10 + lVar5 + 7);
                            *puVar7 = uVar3;
                            iVar16 = 0;
                            uVar4 = 0;
                            if (16383 < uVar9) {
                                iVar16 = iVar18 / ((int)uVar9 >> 14);
                                uVar4 = iVar13 / ((int)uVar9 >> 14);
                                if (iVar16 < 0) {
                                    iVar16 = 0;
                                } else if (16255 < iVar16) {
                                    iVar16 = 16256;
                                }
                            }
                            uVar14 = local_80 * 262144 + (int)uVar17;
                            local_38 = ((int)(uVar4 - (int)uVar17) >> 3) + (iVar16 - local_80 & 4294967288U) * 32768;
                            local_34 = iVar12 >> 8;
                            lVar10 = lVar10 + 8;
                            iVar12 = iVar12 + param_9 * 8;
                            iVar18 = iVar18 + param_13;
                            iVar13 = iVar13 + param_14;
                            uVar9 = uVar9 + param_15;
                            iVar1 = iVar1 + -1;
                            uVar17 = (ulong)uVar4;
                            local_80 = iVar16;
                        } while (1 < iVar1);
                        iVar11 = iVar11 + (int)lVar10;
                    }
                    if ((uVar8 & 7) != 0) {
                        iVar18 = (uVar8 & 7) + 1;
                        uVar17 = (long)iVar11;
                        do {
                            piVar6 = (int*)Array<unsigned int, eastl::allocator>::operator[](
                                (Array<unsigned int, eastl::allocator>*)param_2,
                                (ulong)(uVar14 >> 25 | uVar14 & 16256));
                            uVar3 = TextureRasterWithAlphaChannel(*piVar6, local_34);
                            puVar7 = (undefined4*)SharedArray<unsigned int>::operator[](
                                (SharedArray<unsigned int>*)param_1, uVar17);
                            *puVar7 = uVar3;
                            uVar14 = uVar14 + local_38;
                            iVar18 = iVar18 + -1;
                            uVar17 = uVar17 + 1;
                        } while (1 < iVar18);
                    }
                }
            } else {
                local_80 = 0;
                iVar16 = 0;
                iVar12 = 0;
                if (4095 < uVar9) {
                    iVar2 = iVar18 / ((int)uVar9 >> 12);
                    iVar16 = iVar13 / ((int)uVar9 >> 12);
                    if (iVar2 < 0) {
                        iVar12 = 0;
                    } else {
                        iVar12 = 4032;
                        if (iVar2 < 4032) {
                            iVar12 = iVar2;
                        }
                    }
                }
                if (uVar9 + param_15 < 4096) {
                    uVar17 = 0;
                } else {
                    iVar15 = (int)(uVar9 + param_15) >> 12;
                    iVar2 = (param_13 + iVar18) / iVar15;
                    uVar17 = (long)(iVar13 + param_14) / (long)iVar15 & 4294967295;
                    if (iVar2 < 0) {
                        local_80 = 0;
                    } else {
                        local_80 = 4032;
                        if (iVar2 < 4032) {
                            local_80 = iVar2;
                        }
                    }
                }
                uVar14 = iVar12 * 1048576 + iVar16;
                local_38 = ((int)uVar17 - iVar16 >> 3) + (local_80 - iVar12 & 4294967288U) * 131072;
                if (field_9 == '\0') {
                    if (7 < (int)uVar8) {
                        lVar5 = (long)iVar11;
                        iVar12 = param_8 + param_9 * (param_6 + 8);
                        iVar18 = iVar18 + param_13 * 2;
                        iVar13 = iVar13 + param_14 * 2;
                        uVar9 = uVar9 + param_15 * 2;
                        iVar1 = iVar1 + 1;
                        local_48 = 0;
                        do {
                            piVar6 = (int*)Array<unsigned int, eastl::allocator>::operator[](
                                (Array<unsigned int, eastl::allocator>*)param_2, (ulong)(uVar14 >> 26 | uVar14 & 4032));
                            if (*piVar6 != 0) {
                                uVar3 = TextureRasterWithAlphaChannel(*piVar6, local_34);
                                puVar7 = (undefined4*)SharedArray<unsigned int>::operator[](
                                    (SharedArray<unsigned int>*)param_1, lVar5 + local_48);
                                *puVar7 = uVar3;
                            }
                            uVar14 = uVar14 + local_38;
                            piVar6 = (int*)Array<unsigned int, eastl::allocator>::operator[](
                                (Array<unsigned int, eastl::allocator>*)param_2, (ulong)(uVar14 >> 26 | uVar14 & 4032));
                            if (*piVar6 != 0) {
                                uVar3 = TextureRasterWithAlphaChannel(*piVar6, local_34);
                                puVar7 = (undefined4*)SharedArray<unsigned int>::operator[](
                                    (SharedArray<unsigned int>*)param_1, lVar5 + local_48 + 1);
                                *puVar7 = uVar3;
                            }
                            uVar14 = uVar14 + local_38;
                            piVar6 = (int*)Array<unsigned int, eastl::allocator>::operator[](
                                (Array<unsigned int, eastl::allocator>*)param_2, (ulong)(uVar14 >> 26 | uVar14 & 4032));
                            if (*piVar6 != 0) {
                                uVar3 = TextureRasterWithAlphaChannel(*piVar6, local_34);
                                puVar7 = (undefined4*)SharedArray<unsigned int>::operator[](
                                    (SharedArray<unsigned int>*)param_1, lVar5 + local_48 + 2);
                                *puVar7 = uVar3;
                            }
                            uVar14 = uVar14 + local_38;
                            piVar6 = (int*)Array<unsigned int, eastl::allocator>::operator[](
                                (Array<unsigned int, eastl::allocator>*)param_2, (ulong)(uVar14 >> 26 | uVar14 & 4032));
                            if (*piVar6 != 0) {
                                uVar3 = TextureRasterWithAlphaChannel(*piVar6, local_34);
                                puVar7 = (undefined4*)SharedArray<unsigned int>::operator[](
                                    (SharedArray<unsigned int>*)param_1, lVar5 + local_48 + 3);
                                *puVar7 = uVar3;
                            }
                            uVar14 = uVar14 + local_38;
                            piVar6 = (int*)Array<unsigned int, eastl::allocator>::operator[](
                                (Array<unsigned int, eastl::allocator>*)param_2, (ulong)(uVar14 >> 26 | uVar14 & 4032));
                            if (*piVar6 != 0) {
                                uVar3 = TextureRasterWithAlphaChannel(*piVar6, local_34);
                                puVar7 = (undefined4*)SharedArray<unsigned int>::operator[](
                                    (SharedArray<unsigned int>*)param_1, lVar5 + local_48 + 4);
                                *puVar7 = uVar3;
                            }
                            uVar14 = uVar14 + local_38;
                            piVar6 = (int*)Array<unsigned int, eastl::allocator>::operator[](
                                (Array<unsigned int, eastl::allocator>*)param_2, (ulong)(uVar14 >> 26 | uVar14 & 4032));
                            if (*piVar6 != 0) {
                                uVar3 = TextureRasterWithAlphaChannel(*piVar6, local_34);
                                puVar7 = (undefined4*)SharedArray<unsigned int>::operator[](
                                    (SharedArray<unsigned int>*)param_1, lVar5 + local_48 + 5);
                                *puVar7 = uVar3;
                            }
                            uVar14 = uVar14 + local_38;
                            piVar6 = (int*)Array<unsigned int, eastl::allocator>::operator[](
                                (Array<unsigned int, eastl::allocator>*)param_2, (ulong)(uVar14 >> 26 | uVar14 & 4032));
                            if (*piVar6 != 0) {
                                uVar3 = TextureRasterWithAlphaChannel(*piVar6, local_34);
                                puVar7 = (undefined4*)SharedArray<unsigned int>::operator[](
                                    (SharedArray<unsigned int>*)param_1, lVar5 + local_48 + 6);
                                *puVar7 = uVar3;
                            }
                            piVar6 = (int*)Array<unsigned int, eastl::allocator>::operator[](
                                (Array<unsigned int, eastl::allocator>*)param_2,
                                (ulong)(uVar14 + local_38 >> 26 | uVar14 + local_38 & 4032));
                            if (*piVar6 != 0) {
                                uVar3 = TextureRasterWithAlphaChannel(*piVar6, local_34);
                                puVar7 = (undefined4*)SharedArray<unsigned int>::operator[](
                                    (SharedArray<unsigned int>*)param_1, lVar5 + local_48 + 7);
                                *puVar7 = uVar3;
                            }
                            iVar16 = 0;
                            if (uVar9 < 4096) {
                                uVar4 = 0;
                            } else {
                                iVar2 = iVar18 / ((int)uVar9 >> 12);
                                uVar4 = iVar13 / ((int)uVar9 >> 12);
                                if ((-1 < iVar2) && (iVar16 = iVar2, 4031 < iVar2)) {
                                    iVar16 = 4032;
                                }
                            }
                            uVar14 = local_80 * 1048576 + (int)uVar17;
                            local_38 = ((int)(uVar4 - (int)uVar17) >> 3) + (iVar16 - local_80 & 4294967288U) * 131072;
                            local_34 = iVar12 >> 8;
                            local_48 = local_48 + 8;
                            iVar12 = iVar12 + param_9 * 8;
                            iVar18 = iVar18 + param_13;
                            iVar13 = iVar13 + param_14;
                            uVar9 = uVar9 + param_15;
                            iVar1 = iVar1 + -1;
                            uVar17 = (ulong)uVar4;
                            local_80 = iVar16;
                        } while (1 < iVar1);
                        iVar11 = iVar11 + (int)local_48;
                    }
                    if ((uVar8 & 7) != 0) {
                        uVar17 = (ulong)iVar11;
                        iVar18 = (uVar8 & 7) + 1;
                        do {
                            piVar6 = (int*)Array<unsigned int, eastl::allocator>::operator[](
                                (Array<unsigned int, eastl::allocator>*)param_2, (ulong)(uVar14 >> 26 | uVar14 & 4032));
                            if (*piVar6 != 0) {
                                uVar3 = TextureRasterWithAlphaChannel(*piVar6, local_34);
                                puVar7 = (undefined4*)SharedArray<unsigned int>::operator[](
                                    (SharedArray<unsigned int>*)param_1, uVar17);
                                *puVar7 = uVar3;
                            }
                            uVar17 = uVar17 + 1;
                            uVar14 = uVar14 + local_38;
                            iVar18 = iVar18 + -1;
                        } while (1 < iVar18);
                    }
                } else {
                    if (7 < (int)uVar8) {
                        lVar5 = (long)iVar11;
                        iVar12 = param_8 + param_9 * (param_6 + 8);
                        iVar18 = iVar18 + param_13 * 2;
                        iVar13 = iVar13 + param_14 * 2;
                        uVar9 = uVar9 + param_15 * 2;
                        iVar1 = iVar1 + 1;
                        lVar10 = 0;
                        do {
                            piVar6 = (int*)Array<unsigned int, eastl::allocator>::operator[](
                                (Array<unsigned int, eastl::allocator>*)param_2, (ulong)(uVar14 >> 26 | uVar14 & 4032));
                            uVar3 = TextureRasterWithAlphaChannel(*piVar6, local_34);
                            puVar7 = (undefined4*)SharedArray<unsigned int>::operator[](
                                (SharedArray<unsigned int>*)param_1, lVar5 + lVar10);
                            *puVar7 = uVar3;
                            uVar14 = uVar14 + local_38;
                            piVar6 = (int*)Array<unsigned int, eastl::allocator>::operator[](
                                (Array<unsigned int, eastl::allocator>*)param_2, (ulong)(uVar14 >> 26 | uVar14 & 4032));
                            uVar3 = TextureRasterWithAlphaChannel(*piVar6, local_34);
                            puVar7 = (undefined4*)SharedArray<unsigned int>::operator[](
                                (SharedArray<unsigned int>*)param_1, lVar5 + lVar10 + 1);
                            *puVar7 = uVar3;
                            uVar14 = uVar14 + local_38;
                            piVar6 = (int*)Array<unsigned int, eastl::allocator>::operator[](
                                (Array<unsigned int, eastl::allocator>*)param_2, (ulong)(uVar14 >> 26 | uVar14 & 4032));
                            uVar3 = TextureRasterWithAlphaChannel(*piVar6, local_34);
                            puVar7 = (undefined4*)SharedArray<unsigned int>::operator[](
                                (SharedArray<unsigned int>*)param_1, lVar10 + lVar5 + 2);
                            *puVar7 = uVar3;
                            uVar14 = uVar14 + local_38;
                            piVar6 = (int*)Array<unsigned int, eastl::allocator>::operator[](
                                (Array<unsigned int, eastl::allocator>*)param_2, (ulong)(uVar14 >> 26 | uVar14 & 4032));
                            uVar3 = TextureRasterWithAlphaChannel(*piVar6, local_34);
                            puVar7 = (undefined4*)SharedArray<unsigned int>::operator[](
                                (SharedArray<unsigned int>*)param_1, lVar10 + lVar5 + 3);
                            *puVar7 = uVar3;
                            uVar14 = uVar14 + local_38;
                            piVar6 = (int*)Array<unsigned int, eastl::allocator>::operator[](
                                (Array<unsigned int, eastl::allocator>*)param_2, (ulong)(uVar14 >> 26 | uVar14 & 4032));
                            uVar3 = TextureRasterWithAlphaChannel(*piVar6, local_34);
                            puVar7 = (undefined4*)SharedArray<unsigned int>::operator[](
                                (SharedArray<unsigned int>*)param_1, lVar10 + lVar5 + 4);
                            *puVar7 = uVar3;
                            uVar14 = uVar14 + local_38;
                            piVar6 = (int*)Array<unsigned int, eastl::allocator>::operator[](
                                (Array<unsigned int, eastl::allocator>*)param_2, (ulong)(uVar14 >> 26 | uVar14 & 4032));
                            uVar3 = TextureRasterWithAlphaChannel(*piVar6, local_34);
                            puVar7 = (undefined4*)SharedArray<unsigned int>::operator[](
                                (SharedArray<unsigned int>*)param_1, lVar5 + lVar10 + 5);
                            *puVar7 = uVar3;
                            uVar14 = uVar14 + local_38;
                            piVar6 = (int*)Array<unsigned int, eastl::allocator>::operator[](
                                (Array<unsigned int, eastl::allocator>*)param_2, (ulong)(uVar14 >> 26 | uVar14 & 4032));
                            uVar3 = TextureRasterWithAlphaChannel(*piVar6, local_34);
                            puVar7 = (undefined4*)SharedArray<unsigned int>::operator[](
                                (SharedArray<unsigned int>*)param_1, lVar5 + lVar10 + 6);
                            *puVar7 = uVar3;
                            piVar6 = (int*)Array<unsigned int, eastl::allocator>::operator[](
                                (Array<unsigned int, eastl::allocator>*)param_2,
                                (ulong)(uVar14 + local_38 >> 26 | uVar14 + local_38 & 4032));
                            uVar3 = TextureRasterWithAlphaChannel(*piVar6, local_34);
                            puVar7 = (undefined4*)SharedArray<unsigned int>::operator[](
                                (SharedArray<unsigned int>*)param_1, lVar10 + lVar5 + 7);
                            *puVar7 = uVar3;
                            iVar16 = 0;
                            uVar4 = 0;
                            if (4095 < uVar9) {
                                iVar16 = iVar18 / ((int)uVar9 >> 12);
                                uVar4 = iVar13 / ((int)uVar9 >> 12);
                                if (iVar16 < 0) {
                                    iVar16 = 0;
                                } else if (4031 < iVar16) {
                                    iVar16 = 4032;
                                }
                            }
                            uVar14 = local_80 * 1048576 + (int)uVar17;
                            local_38 = ((int)(uVar4 - (int)uVar17) >> 3) + (iVar16 - local_80 & 4294967288U) * 131072;
                            local_34 = iVar12 >> 8;
                            lVar10 = lVar10 + 8;
                            iVar12 = iVar12 + param_9 * 8;
                            iVar18 = iVar18 + param_13;
                            iVar13 = iVar13 + param_14;
                            uVar9 = uVar9 + param_15;
                            iVar1 = iVar1 + -1;
                            uVar17 = (ulong)uVar4;
                            local_80 = iVar16;
                        } while (1 < iVar1);
                        iVar11 = iVar11 + (int)lVar10;
                    }
                    if ((uVar8 & 7) != 0) {
                        iVar18 = (uVar8 & 7) + 1;
                        uVar17 = (long)iVar11;
                        do {
                            piVar6 = (int*)Array<unsigned int, eastl::allocator>::operator[](
                                (Array<unsigned int, eastl::allocator>*)param_2, (ulong)(uVar14 >> 26 | uVar14 & 4032));
                            uVar3 = TextureRasterWithAlphaChannel(*piVar6, local_34);
                            puVar7 = (undefined4*)SharedArray<unsigned int>::operator[](
                                (SharedArray<unsigned int>*)param_1, uVar17);
                            *puVar7 = uVar3;
                            uVar14 = uVar14 + local_38;
                            iVar18 = iVar18 + -1;
                            uVar17 = uVar17 + 1;
                        } while (1 < iVar18);
                    }
                }
            }
        }
    }

    // 0x1002fe6f0, 8400 bytes, placed by class name and debug map
    // SoftwarePix3D::TextureTriangleAffine(int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int)
    void SoftwarePix3D::TextureTriangleAffine(int param_1, int param_2, int param_3, int param_4, int param_5,
                                              int param_6, int param_7, int param_8, int param_9, int param_10,
                                              int param_11, int param_12, int param_13, int param_14, int param_15,
                                              int param_16, int param_17, int param_18, int param_19) {
        SoftwarePix3D* pSVar1;
        bool bVar2;
        char cVar3;
        undefined1 uVar4;
        int iVar5;
        int iVar6;
        int iVar7;
        long* plVar8;
        undefined4* puVar9;
        Array* pAVar10;
        int* piVar11;
        int iVar12;
        uint uVar13;
        int iVar14;
        uint uVar15;
        int iVar16;
        int iVar17;
        int iVar18;
        int iVar19;
        uint uVar20;
        int iVar21;
        ErrorCapture local_418[17];
        shared_ptr local_c8;
        SharedArray* local_b8;
        long local_b0;
        long local_a8;
        long local_a0;
        long local_98;
        long local_90;
        long local_88;
        SharedArray* local_80;
        SharedArray* local_78;
        int local_6c;
        int local_68;
        int local_64;
        int local_60;
        int local_5c;
        SoftwarePix3D* local_58;
        uint local_50;
        uint local_4c;
        int local_48;
        uint local_44;
        uint local_40;
        uint local_3c;
        uint local_38;
        uint local_34;

        local_44 = param_5;
        local_3c = param_2;
        local_38 = param_1;
        local_34 = param_3;
        ErrorCapture::ErrorCapture(local_418, true);
        plVar8 =
            (long*)shared_ptr<TextureProvider>::operator->((shared_ptr<TextureProvider>*)&Pix3D::m_textureProvider);
        (**(code**)(*plVar8 + 16))(&local_c8, plVar8, param_19, local_418);
        bVar2 = operator==(&local_c8, (_func_decltype_nullptr*)0);
        local_58 = this;
        if ((bVar2) || (cVar3 = local_418->IsRaised(), cVar3 != '\0')) {
            plVar8 =
                (long*)shared_ptr<TextureProvider>::operator->((shared_ptr<TextureProvider>*)&Pix3D::m_textureProvider);
            iVar5 = (**(code**)(*plVar8 + 24))(plVar8, param_19);
            iVar6 = Pix3D::TextureLightColour(iVar5, param_7);
            iVar7 = Pix3D::TextureLightColour(iVar5, param_8);
            iVar5 = Pix3D::TextureLightColour(iVar5, param_9);
            GouraudTriangle(local_58, local_38, local_3c, local_34, param_4, local_44, param_6, iVar6, iVar7, iVar5);
        } else {
            plVar8 =
                (long*)shared_ptr<TextureProvider>::operator->((shared_ptr<TextureProvider>*)&Pix3D::m_textureProvider);
            uVar4 = (**(code**)(*plVar8 + 40))(plVar8, param_19);
            field_10 = uVar4;
            plVar8 =
                (long*)shared_ptr<TextureProvider>::operator->((shared_ptr<TextureProvider>*)&Pix3D::m_textureProvider);
            uVar4 = (**(code**)(*plVar8 + 32))(plVar8, param_19);
            pSVar1 = local_58;
            field_9 = uVar4;
            iVar6 = local_44 - param_4;
            local_6c = 0;
            local_68 = 0;
            iVar5 = local_3c - local_38;
            if (iVar5 != 0) {
                local_68 = (iVar6 * 16384) / iVar5;
            }
            if (local_34 - local_3c != 0) {
                local_6c = (int)((param_6 - local_44) * 16384) / (int)(local_34 - local_3c);
            }
            local_64 = 0;
            iVar7 = local_34 - local_38;
            if (iVar7 != 0) {
                local_64 = ((param_4 - param_6) * 16384) / (int)(local_38 - local_34);
            }
            iVar12 = iVar6 * iVar7 - (param_6 - param_4) * iVar5;
            local_40 = param_4;
            if (iVar12 != 0) {
                iVar17 = param_10 - param_11;
                iVar18 = param_13 - param_14;
                iVar21 = param_16 - param_17;
                iVar19 = param_12 - param_10;
                iVar14 = param_15 - param_13;
                iVar16 = param_18 - param_16;
                local_60 = ((iVar7 * (param_8 - param_7) - iVar5 * (param_9 - param_7)) * 512) / iVar12;
                local_5c = (((param_9 - param_7) * iVar6 - (param_8 - param_7) * (param_6 - param_4)) * 512) / iVar12;
                iVar7 = (iVar19 * param_13 - iVar14 * param_10) * 16384;
                local_88 = (long)*(int*)&local_58->field_16;
                local_a0 = ((long)(iVar14 * param_16 - iVar16 * param_13) << 14) / local_88;
                local_98 = ((long)(iVar16 * param_10 - iVar19 * param_16) << 14) / local_88;
                iVar5 = (iVar17 * param_13 - iVar18 * param_10) * 16384;
                local_b0 = ((long)(iVar18 * param_16 - param_13 * iVar21) << 14) / local_88;
                local_90 = ((long)(param_10 * iVar21 - param_16 * iVar17) << 14) / local_88;
                iVar6 = (iVar18 * iVar19 - iVar14 * iVar17) * 16384;
                local_a8 = ((long)(iVar21 * iVar14 - iVar16 * iVar18) << 14) / local_88;
                local_88 = ((long)(iVar16 * iVar17 - iVar19 * iVar21) << 14) / local_88;
                if (((int)local_3c < (int)local_38) || ((int)local_34 < (int)local_38)) {
                    uVar15 = local_58->field_32;
                    if ((int)local_34 < (int)local_3c) {
                        if ((int)local_34 < (int)uVar15) {
                            if ((int)uVar15 < (int)local_38) {
                                local_38 = uVar15;
                            }
                            if ((int)uVar15 < (int)local_3c) {
                                local_3c = uVar15;
                            }
                            local_48 = (param_9 * 512 - local_60 * param_6) + local_60;
                            local_4c = param_6 * 16384;
                            if ((int)local_38 < (int)local_3c) {
                                if ((int)local_34 < 0) {
                                    local_50 = local_4c - local_6c * local_34;
                                    local_4c = local_4c - local_64 * local_34;
                                    local_48 = local_48 - local_34 * local_5c;
                                    uVar15 = 0;
                                } else {
                                    uVar15 = local_34;
                                    local_50 = local_4c;
                                }
                                local_40 = param_4 * 16384 - ((int)local_38 >> 31 & local_38 * local_68);
                                uVar20 = 0;
                                if (-1 < (int)local_38) {
                                    uVar20 = local_38;
                                }
                                iVar12 = uVar15 - *(int*)&local_58->field_24;
                                local_38 = iVar12 * (int)local_98 + iVar7;
                                local_34 = iVar12 * (int)local_90 + iVar5;
                                local_44 = iVar12 * (int)local_88 + iVar6;
                                local_3c = local_3c - uVar20;
                                if (local_6c < local_64) {
                                    piVar11 = (int*)eastl::vector<int, eastl::allocator>::operator[](
                                        (vector<int, eastl::allocator>*)&local_58->field_56, (long)(int)uVar15);
                                    iVar5 = *piVar11;
                                    local_78 = (SharedArray*)&local_58->field_120;
                                    if (uVar20 - uVar15 != 0 && (int)uVar15 <= (int)uVar20) {
                                        local_80 = (SharedArray*)CONCAT44(local_80._4_4_, (uVar20 - uVar15) + 1);
                                        do {
                                            pAVar10 =
                                                (Array*)shared_ptr<Array<unsigned int, eastl::allocator>>::operator*(
                                                    (shared_ptr<Array<unsigned int, eastl::allocator>>*)&local_c8);
                                            uVar13 = local_38;
                                            iVar6 = local_48;
                                            uVar20 = local_4c;
                                            uVar15 = local_50;
                                            TextureRasterAffine(
                                                local_58, local_78, pAVar10, local_34, (int)local_50 >> 14, iVar5,
                                                (int)local_50 >> 14, (int)local_4c >> 14, local_48, local_60, local_38,
                                                local_34, local_44, (int)local_a0, (int)local_b0, (int)local_a8);
                                            local_50 = uVar15 + local_6c;
                                            local_4c = uVar20 + local_64;
                                            local_48 = iVar6 + local_5c;
                                            iVar5 = iVar5 + local_58->field_104;
                                            local_38 = uVar13 + (int)local_98;
                                            local_34 = local_34 + (int)local_90;
                                            local_44 = local_44 + (int)local_88;
                                            iVar6 = (int)local_80 + -1;
                                            local_80 = (SharedArray*)CONCAT44(local_80._4_4_, iVar6);
                                        } while (1 < iVar6);
                                    }
                                    if (0 < (int)local_3c) {
                                        local_3c = local_3c + 1;
                                        do {
                                            pAVar10 =
                                                (Array*)shared_ptr<Array<unsigned int, eastl::allocator>>::operator*(
                                                    (shared_ptr<Array<unsigned int, eastl::allocator>>*)&local_c8);
                                            uVar13 = local_38;
                                            uVar20 = local_40;
                                            iVar6 = local_48;
                                            uVar15 = local_50;
                                            TextureRasterAffine(
                                                local_58, local_78, pAVar10, local_34, (int)local_50 >> 14, iVar5,
                                                (int)local_50 >> 14, (int)local_40 >> 14, local_48, local_60, local_38,
                                                local_34, local_44, (int)local_a0, (int)local_b0, (int)local_a8);
                                            local_50 = uVar15 + local_6c;
                                            local_40 = uVar20 + local_68;
                                            local_48 = iVar6 + local_5c;
                                            iVar5 = iVar5 + local_58->field_104;
                                            local_38 = uVar13 + (int)local_98;
                                            local_34 = local_34 + (int)local_90;
                                            local_44 = local_44 + (int)local_88;
                                            local_3c = local_3c - 1;
                                        } while (1 < (int)local_3c);
                                    }
                                } else {
                                    piVar11 = (int*)eastl::vector<int, eastl::allocator>::operator[](
                                        (vector<int, eastl::allocator>*)&local_58->field_56, (long)(int)uVar15);
                                    iVar5 = *piVar11;
                                    local_78 = (SharedArray*)&local_58->field_120;
                                    if (uVar20 - uVar15 != 0 && (int)uVar15 <= (int)uVar20) {
                                        local_80 = (SharedArray*)CONCAT44(local_80._4_4_, (uVar20 - uVar15) + 1);
                                        do {
                                            pAVar10 =
                                                (Array*)shared_ptr<Array<unsigned int, eastl::allocator>>::operator*(
                                                    (shared_ptr<Array<unsigned int, eastl::allocator>>*)&local_c8);
                                            uVar13 = local_38;
                                            iVar6 = local_48;
                                            uVar20 = local_4c;
                                            uVar15 = local_50;
                                            TextureRasterAffine(
                                                local_58, local_78, pAVar10, local_34, (int)local_4c >> 14, iVar5,
                                                (int)local_4c >> 14, (int)local_50 >> 14, local_48, local_60, local_38,
                                                local_34, local_44, (int)local_a0, (int)local_b0, (int)local_a8);
                                            local_50 = uVar15 + local_6c;
                                            local_4c = uVar20 + local_64;
                                            local_48 = iVar6 + local_5c;
                                            iVar5 = iVar5 + local_58->field_104;
                                            local_38 = uVar13 + (int)local_98;
                                            local_34 = local_34 + (int)local_90;
                                            local_44 = local_44 + (int)local_88;
                                            iVar6 = (int)local_80 + -1;
                                            local_80 = (SharedArray*)CONCAT44(local_80._4_4_, iVar6);
                                        } while (1 < iVar6);
                                    }
                                    if (0 < (int)local_3c) {
                                        local_3c = local_3c + 1;
                                        do {
                                            pAVar10 =
                                                (Array*)shared_ptr<Array<unsigned int, eastl::allocator>>::operator*(
                                                    (shared_ptr<Array<unsigned int, eastl::allocator>>*)&local_c8);
                                            uVar13 = local_38;
                                            uVar20 = local_40;
                                            iVar6 = local_48;
                                            uVar15 = local_50;
                                            TextureRasterAffine(
                                                local_58, local_78, pAVar10, local_34, (int)local_40 >> 14, iVar5,
                                                (int)local_40 >> 14, (int)local_50 >> 14, local_48, local_60, local_38,
                                                local_34, local_44, (int)local_a0, (int)local_b0, (int)local_a8);
                                            local_50 = uVar15 + local_6c;
                                            local_40 = uVar20 + local_68;
                                            local_48 = iVar6 + local_5c;
                                            iVar5 = iVar5 + local_58->field_104;
                                            local_38 = uVar13 + (int)local_98;
                                            local_34 = local_34 + (int)local_90;
                                            local_44 = local_44 + (int)local_88;
                                            local_3c = local_3c - 1;
                                        } while (1 < (int)local_3c);
                                    }
                                }
                            } else {
                                if ((int)local_34 < 0) {
                                    uVar20 = local_4c - local_6c * local_34;
                                    local_4c = local_4c - local_64 * local_34;
                                    local_48 = local_48 - local_34 * local_5c;
                                    uVar15 = 0;
                                } else {
                                    uVar15 = local_34;
                                    uVar20 = local_4c;
                                }
                                local_44 = local_44 * 16384 - ((int)local_3c >> 31 & local_3c * local_68);
                                uVar13 = 0;
                                if (-1 < (int)local_3c) {
                                    uVar13 = local_3c;
                                }
                                iVar12 = uVar15 - *(int*)&local_58->field_24;
                                local_3c = iVar12 * (int)local_98 + iVar7;
                                local_34 = iVar12 * (int)local_90 + iVar5;
                                local_40 = iVar12 * (int)local_88 + iVar6;
                                local_38 = local_38 - uVar13;
                                if (local_6c < local_64) {
                                    puVar9 = (undefined4*)eastl::vector<int, eastl::allocator>::operator[](
                                        (vector<int, eastl::allocator>*)&local_58->field_56, (long)(int)uVar15);
                                    local_78 = (SharedArray*)CONCAT44(local_78._4_4_, *puVar9);
                                    local_b8 = (SharedArray*)&local_58->field_120;
                                    if (uVar13 - uVar15 != 0 && (int)uVar15 <= (int)uVar13) {
                                        local_80 = (SharedArray*)CONCAT44(local_80._4_4_, (uVar13 - uVar15) + 1);
                                        local_50 = uVar20;
                                        do {
                                            pAVar10 =
                                                (Array*)shared_ptr<Array<unsigned int, eastl::allocator>>::operator*(
                                                    (shared_ptr<Array<unsigned int, eastl::allocator>>*)&local_c8);
                                            uVar13 = local_3c;
                                            iVar6 = local_48;
                                            uVar20 = local_4c;
                                            uVar15 = local_50;
                                            iVar5 = (int)local_78;
                                            TextureRasterAffine(local_58, local_b8, pAVar10, local_34,
                                                                (int)local_50 >> 14, (int)local_78, (int)local_50 >> 14,
                                                                (int)local_4c >> 14, local_48, local_60, local_3c,
                                                                local_34, local_40, (int)local_a0, (int)local_b0,
                                                                (int)local_a8);
                                            local_50 = uVar15 + local_6c;
                                            local_4c = uVar20 + local_64;
                                            local_48 = iVar6 + local_5c;
                                            local_78 =
                                                (SharedArray*)CONCAT44(local_78._4_4_, iVar5 + local_58->field_104);
                                            local_3c = uVar13 + (int)local_98;
                                            local_34 = local_34 + (int)local_90;
                                            local_40 = local_40 + (int)local_88;
                                            iVar5 = (int)local_80 + -1;
                                            local_80 = (SharedArray*)CONCAT44(local_80._4_4_, iVar5);
                                        } while (1 < iVar5);
                                    }
                                    if (0 < (int)local_38) {
                                        local_38 = local_38 + 1;
                                        do {
                                            pAVar10 =
                                                (Array*)shared_ptr<Array<unsigned int, eastl::allocator>>::operator*(
                                                    (shared_ptr<Array<unsigned int, eastl::allocator>>*)&local_c8);
                                            uVar13 = local_3c;
                                            uVar20 = local_44;
                                            iVar6 = local_48;
                                            uVar15 = local_4c;
                                            iVar5 = (int)local_78;
                                            TextureRasterAffine(local_58, local_b8, pAVar10, local_34,
                                                                (int)local_44 >> 14, (int)local_78, (int)local_44 >> 14,
                                                                (int)local_4c >> 14, local_48, local_60, local_3c,
                                                                local_34, local_40, (int)local_a0, (int)local_b0,
                                                                (int)local_a8);
                                            local_44 = uVar20 + local_68;
                                            local_4c = uVar15 + local_64;
                                            local_48 = iVar6 + local_5c;
                                            local_78 =
                                                (SharedArray*)CONCAT44(local_78._4_4_, iVar5 + local_58->field_104);
                                            local_3c = uVar13 + (int)local_98;
                                            local_34 = local_34 + (int)local_90;
                                            local_40 = local_40 + (int)local_88;
                                            local_38 = local_38 - 1;
                                        } while (1 < (int)local_38);
                                    }
                                } else {
                                    puVar9 = (undefined4*)eastl::vector<int, eastl::allocator>::operator[](
                                        (vector<int, eastl::allocator>*)&local_58->field_56, (long)(int)uVar15);
                                    local_78 = (SharedArray*)CONCAT44(local_78._4_4_, *puVar9);
                                    local_b8 = (SharedArray*)&local_58->field_120;
                                    if (uVar13 - uVar15 != 0 && (int)uVar15 <= (int)uVar13) {
                                        local_80 = (SharedArray*)CONCAT44(local_80._4_4_, (uVar13 - uVar15) + 1);
                                        local_50 = uVar20;
                                        do {
                                            pAVar10 =
                                                (Array*)shared_ptr<Array<unsigned int, eastl::allocator>>::operator*(
                                                    (shared_ptr<Array<unsigned int, eastl::allocator>>*)&local_c8);
                                            uVar13 = local_3c;
                                            iVar6 = local_48;
                                            uVar20 = local_4c;
                                            uVar15 = local_50;
                                            iVar5 = (int)local_78;
                                            TextureRasterAffine(local_58, local_b8, pAVar10, local_34,
                                                                (int)local_4c >> 14, (int)local_78, (int)local_4c >> 14,
                                                                (int)local_50 >> 14, local_48, local_60, local_3c,
                                                                local_34, local_40, (int)local_a0, (int)local_b0,
                                                                (int)local_a8);
                                            local_50 = uVar15 + local_6c;
                                            local_4c = uVar20 + local_64;
                                            local_48 = iVar6 + local_5c;
                                            local_78 =
                                                (SharedArray*)CONCAT44(local_78._4_4_, iVar5 + local_58->field_104);
                                            local_3c = uVar13 + (int)local_98;
                                            local_34 = local_34 + (int)local_90;
                                            local_40 = local_40 + (int)local_88;
                                            iVar5 = (int)local_80 + -1;
                                            local_80 = (SharedArray*)CONCAT44(local_80._4_4_, iVar5);
                                        } while (1 < iVar5);
                                    }
                                    if (0 < (int)local_38) {
                                        local_38 = local_38 + 1;
                                        do {
                                            pAVar10 =
                                                (Array*)shared_ptr<Array<unsigned int, eastl::allocator>>::operator*(
                                                    (shared_ptr<Array<unsigned int, eastl::allocator>>*)&local_c8);
                                            uVar13 = local_3c;
                                            uVar20 = local_44;
                                            iVar6 = local_48;
                                            uVar15 = local_4c;
                                            iVar5 = (int)local_78;
                                            TextureRasterAffine(local_58, local_b8, pAVar10, local_34,
                                                                (int)local_4c >> 14, (int)local_78, (int)local_4c >> 14,
                                                                (int)local_44 >> 14, local_48, local_60, local_3c,
                                                                local_34, local_40, (int)local_a0, (int)local_b0,
                                                                (int)local_a8);
                                            local_44 = uVar20 + local_68;
                                            local_4c = uVar15 + local_64;
                                            local_48 = iVar6 + local_5c;
                                            local_78 =
                                                (SharedArray*)CONCAT44(local_78._4_4_, iVar5 + local_58->field_104);
                                            local_3c = uVar13 + (int)local_98;
                                            local_34 = local_34 + (int)local_90;
                                            local_40 = local_40 + (int)local_88;
                                            local_38 = local_38 - 1;
                                        } while (1 < (int)local_38);
                                    }
                                }
                            }
                        }
                    } else if ((int)local_3c < (int)uVar15) {
                        if ((int)uVar15 < (int)local_34) {
                            local_34 = uVar15;
                        }
                        if ((int)uVar15 < (int)local_38) {
                            local_38 = uVar15;
                        }
                        local_48 = (param_8 * 512 - local_60 * local_44) + local_60;
                        local_4c = local_44 * 16384;
                        local_44 = local_4c;
                        if ((int)local_34 < (int)local_38) {
                            if ((int)local_3c < 0) {
                                uVar20 = local_4c - local_68 * local_3c;
                                local_44 = local_4c - local_6c * local_3c;
                                local_48 = local_48 - local_3c * local_5c;
                                uVar15 = 0;
                            } else {
                                uVar15 = local_3c;
                                uVar20 = local_4c;
                            }
                            local_4c = param_6 * 16384 - ((int)local_34 >> 31 & local_34 * local_64);
                            uVar13 = 0;
                            if (-1 < (int)local_34) {
                                uVar13 = local_34;
                            }
                            iVar12 = uVar15 - *(int*)&local_58->field_24;
                            local_50 = iVar12 * (int)local_98 + iVar7;
                            local_34 = iVar12 * (int)local_90 + iVar5;
                            local_40 = iVar12 * (int)local_88 + iVar6;
                            local_38 = local_38 - uVar13;
                            local_3c = uVar20;
                            if ((uVar13 == uVar15) || (local_6c <= local_68)) {
                                piVar11 = (int*)eastl::vector<int, eastl::allocator>::operator[](
                                    (vector<int, eastl::allocator>*)&local_58->field_56, (long)(int)uVar15);
                                iVar5 = *piVar11;
                                local_78 = (SharedArray*)&local_58->field_120;
                                if (uVar13 - uVar15 != 0 && (int)uVar15 <= (int)uVar13) {
                                    local_80 = (SharedArray*)CONCAT44(local_80._4_4_, (uVar13 - uVar15) + 1);
                                    do {
                                        pAVar10 = (Array*)shared_ptr<Array<unsigned int, eastl::allocator>>::operator*(
                                            (shared_ptr<Array<unsigned int, eastl::allocator>>*)&local_c8);
                                        uVar13 = local_3c;
                                        uVar20 = local_44;
                                        iVar6 = local_48;
                                        uVar15 = local_50;
                                        TextureRasterAffine(local_58, local_78, pAVar10, local_34, (int)local_44 >> 14,
                                                            iVar5, (int)local_44 >> 14, (int)local_3c >> 14, local_48,
                                                            local_60, local_50, local_34, local_40, (int)local_a0,
                                                            (int)local_b0, (int)local_a8);
                                        local_3c = uVar13 + local_68;
                                        local_44 = uVar20 + local_6c;
                                        local_48 = iVar6 + local_5c;
                                        iVar5 = iVar5 + local_58->field_104;
                                        local_50 = uVar15 + (int)local_98;
                                        local_34 = local_34 + (int)local_90;
                                        local_40 = local_40 + (int)local_88;
                                        iVar6 = (int)local_80 + -1;
                                        local_80 = (SharedArray*)CONCAT44(local_80._4_4_, iVar6);
                                    } while (1 < iVar6);
                                }
                                if (0 < (int)local_38) {
                                    local_38 = local_38 + 1;
                                    do {
                                        pAVar10 = (Array*)shared_ptr<Array<unsigned int, eastl::allocator>>::operator*(
                                            (shared_ptr<Array<unsigned int, eastl::allocator>>*)&local_c8);
                                        uVar13 = local_3c;
                                        iVar6 = local_48;
                                        uVar20 = local_4c;
                                        uVar15 = local_50;
                                        TextureRasterAffine(local_58, local_78, pAVar10, local_34, (int)local_4c >> 14,
                                                            iVar5, (int)local_4c >> 14, (int)local_3c >> 14, local_48,
                                                            local_60, local_50, local_34, local_40, (int)local_a0,
                                                            (int)local_b0, (int)local_a8);
                                        local_3c = uVar13 + local_68;
                                        local_4c = uVar20 + local_64;
                                        local_48 = iVar6 + local_5c;
                                        iVar5 = iVar5 + local_58->field_104;
                                        local_50 = uVar15 + (int)local_98;
                                        local_34 = local_34 + (int)local_90;
                                        local_40 = local_40 + (int)local_88;
                                        local_38 = local_38 - 1;
                                    } while (1 < (int)local_38);
                                }
                            } else {
                                piVar11 = (int*)eastl::vector<int, eastl::allocator>::operator[](
                                    (vector<int, eastl::allocator>*)&local_58->field_56, (long)(int)uVar15);
                                iVar5 = *piVar11;
                                local_78 = (SharedArray*)&local_58->field_120;
                                if (uVar13 - uVar15 != 0 && (int)uVar15 <= (int)uVar13) {
                                    local_80 = (SharedArray*)CONCAT44(local_80._4_4_, (uVar13 - uVar15) + 1);
                                    do {
                                        pAVar10 = (Array*)shared_ptr<Array<unsigned int, eastl::allocator>>::operator*(
                                            (shared_ptr<Array<unsigned int, eastl::allocator>>*)&local_c8);
                                        uVar13 = local_3c;
                                        uVar20 = local_44;
                                        iVar6 = local_48;
                                        uVar15 = local_50;
                                        TextureRasterAffine(local_58, local_78, pAVar10, local_34, (int)local_3c >> 14,
                                                            iVar5, (int)local_3c >> 14, (int)local_44 >> 14, local_48,
                                                            local_60, local_50, local_34, local_40, (int)local_a0,
                                                            (int)local_b0, (int)local_a8);
                                        local_3c = uVar13 + local_68;
                                        local_44 = uVar20 + local_6c;
                                        local_48 = iVar6 + local_5c;
                                        iVar5 = iVar5 + local_58->field_104;
                                        local_50 = uVar15 + (int)local_98;
                                        local_34 = local_34 + (int)local_90;
                                        local_40 = local_40 + (int)local_88;
                                        iVar6 = (int)local_80 + -1;
                                        local_80 = (SharedArray*)CONCAT44(local_80._4_4_, iVar6);
                                    } while (1 < iVar6);
                                }
                                if (0 < (int)local_38) {
                                    local_38 = local_38 + 1;
                                    do {
                                        pAVar10 = (Array*)shared_ptr<Array<unsigned int, eastl::allocator>>::operator*(
                                            (shared_ptr<Array<unsigned int, eastl::allocator>>*)&local_c8);
                                        uVar13 = local_3c;
                                        iVar6 = local_48;
                                        uVar20 = local_4c;
                                        uVar15 = local_50;
                                        TextureRasterAffine(local_58, local_78, pAVar10, local_34, (int)local_3c >> 14,
                                                            iVar5, (int)local_3c >> 14, (int)local_4c >> 14, local_48,
                                                            local_60, local_50, local_34, local_40, (int)local_a0,
                                                            (int)local_b0, (int)local_a8);
                                        local_3c = uVar13 + local_68;
                                        local_4c = uVar20 + local_64;
                                        local_48 = iVar6 + local_5c;
                                        iVar5 = iVar5 + local_58->field_104;
                                        local_50 = uVar15 + (int)local_98;
                                        local_34 = local_34 + (int)local_90;
                                        local_40 = local_40 + (int)local_88;
                                        local_38 = local_38 - 1;
                                    } while (1 < (int)local_38);
                                }
                            }
                        } else {
                            if ((int)local_3c < 0) {
                                local_44 = local_4c - local_68 * local_3c;
                                local_4c = local_4c - local_6c * local_3c;
                                local_48 = local_48 - local_3c * local_5c;
                                uVar15 = 0;
                            } else {
                                uVar15 = local_3c;
                            }
                            local_40 = param_4 * 16384 - ((int)local_38 >> 31 & local_38 * local_64);
                            uVar20 = 0;
                            if (-1 < (int)local_38) {
                                uVar20 = local_38;
                            }
                            iVar12 = uVar15 - *(int*)&local_58->field_24;
                            local_50 = iVar12 * (int)local_98 + iVar7;
                            local_38 = iVar12 * (int)local_90 + iVar5;
                            local_3c = iVar12 * (int)local_88 + iVar6;
                            local_34 = local_34 - uVar20;
                            if (local_68 < local_6c) {
                                piVar11 = (int*)eastl::vector<int, eastl::allocator>::operator[](
                                    (vector<int, eastl::allocator>*)&local_58->field_56, (long)(int)uVar15);
                                iVar5 = *piVar11;
                                local_78 = (SharedArray*)&local_58->field_120;
                                if (uVar20 - uVar15 != 0 && (int)uVar15 <= (int)uVar20) {
                                    local_80 = (SharedArray*)CONCAT44(local_80._4_4_, (uVar20 - uVar15) + 1);
                                    do {
                                        pAVar10 = (Array*)shared_ptr<Array<unsigned int, eastl::allocator>>::operator*(
                                            (shared_ptr<Array<unsigned int, eastl::allocator>>*)&local_c8);
                                        uVar13 = local_44;
                                        iVar6 = local_48;
                                        uVar20 = local_4c;
                                        uVar15 = local_50;
                                        TextureRasterAffine(local_58, local_78, pAVar10, local_38, (int)local_44 >> 14,
                                                            iVar5, (int)local_44 >> 14, (int)local_4c >> 14, local_48,
                                                            local_60, local_50, local_38, local_3c, (int)local_a0,
                                                            (int)local_b0, (int)local_a8);
                                        local_44 = uVar13 + local_68;
                                        local_4c = uVar20 + local_6c;
                                        local_48 = iVar6 + local_5c;
                                        iVar5 = iVar5 + local_58->field_104;
                                        local_50 = uVar15 + (int)local_98;
                                        local_38 = local_38 + (int)local_90;
                                        local_3c = local_3c + (int)local_88;
                                        iVar6 = (int)local_80 + -1;
                                        local_80 = (SharedArray*)CONCAT44(local_80._4_4_, iVar6);
                                    } while (1 < iVar6);
                                }
                                if (0 < (int)local_34) {
                                    local_34 = local_34 + 1;
                                    do {
                                        pAVar10 = (Array*)shared_ptr<Array<unsigned int, eastl::allocator>>::operator*(
                                            (shared_ptr<Array<unsigned int, eastl::allocator>>*)&local_c8);
                                        uVar13 = local_40;
                                        iVar6 = local_48;
                                        uVar20 = local_4c;
                                        uVar15 = local_50;
                                        TextureRasterAffine(local_58, local_78, pAVar10, local_38, (int)local_40 >> 14,
                                                            iVar5, (int)local_40 >> 14, (int)local_4c >> 14, local_48,
                                                            local_60, local_50, local_38, local_3c, (int)local_a0,
                                                            (int)local_b0, (int)local_a8);
                                        local_40 = uVar13 + local_64;
                                        local_4c = uVar20 + local_6c;
                                        local_48 = iVar6 + local_5c;
                                        iVar5 = iVar5 + local_58->field_104;
                                        local_50 = uVar15 + (int)local_98;
                                        local_38 = local_38 + (int)local_90;
                                        local_3c = local_3c + (int)local_88;
                                        local_34 = local_34 - 1;
                                    } while (1 < (int)local_34);
                                }
                            } else {
                                piVar11 = (int*)eastl::vector<int, eastl::allocator>::operator[](
                                    (vector<int, eastl::allocator>*)&local_58->field_56, (long)(int)uVar15);
                                iVar5 = *piVar11;
                                local_78 = (SharedArray*)&local_58->field_120;
                                if (uVar20 - uVar15 != 0 && (int)uVar15 <= (int)uVar20) {
                                    local_80 = (SharedArray*)CONCAT44(local_80._4_4_, (uVar20 - uVar15) + 1);
                                    do {
                                        pAVar10 = (Array*)shared_ptr<Array<unsigned int, eastl::allocator>>::operator*(
                                            (shared_ptr<Array<unsigned int, eastl::allocator>>*)&local_c8);
                                        uVar13 = local_44;
                                        iVar6 = local_48;
                                        uVar20 = local_4c;
                                        uVar15 = local_50;
                                        TextureRasterAffine(local_58, local_78, pAVar10, local_38, (int)local_4c >> 14,
                                                            iVar5, (int)local_4c >> 14, (int)local_44 >> 14, local_48,
                                                            local_60, local_50, local_38, local_3c, (int)local_a0,
                                                            (int)local_b0, (int)local_a8);
                                        local_44 = uVar13 + local_68;
                                        local_4c = uVar20 + local_6c;
                                        local_48 = iVar6 + local_5c;
                                        iVar5 = iVar5 + local_58->field_104;
                                        local_50 = uVar15 + (int)local_98;
                                        local_38 = local_38 + (int)local_90;
                                        local_3c = local_3c + (int)local_88;
                                        iVar6 = (int)local_80 + -1;
                                        local_80 = (SharedArray*)CONCAT44(local_80._4_4_, iVar6);
                                    } while (1 < iVar6);
                                }
                                if (0 < (int)local_34) {
                                    local_34 = local_34 + 1;
                                    do {
                                        pAVar10 = (Array*)shared_ptr<Array<unsigned int, eastl::allocator>>::operator*(
                                            (shared_ptr<Array<unsigned int, eastl::allocator>>*)&local_c8);
                                        uVar13 = local_40;
                                        iVar6 = local_48;
                                        uVar20 = local_4c;
                                        uVar15 = local_50;
                                        TextureRasterAffine(local_58, local_78, pAVar10, local_38, (int)local_4c >> 14,
                                                            iVar5, (int)local_4c >> 14, (int)local_40 >> 14, local_48,
                                                            local_60, local_50, local_38, local_3c, (int)local_a0,
                                                            (int)local_b0, (int)local_a8);
                                        local_40 = uVar13 + local_64;
                                        local_4c = uVar20 + local_6c;
                                        local_48 = iVar6 + local_5c;
                                        iVar5 = iVar5 + local_58->field_104;
                                        local_50 = uVar15 + (int)local_98;
                                        local_38 = local_38 + (int)local_90;
                                        local_3c = local_3c + (int)local_88;
                                        local_34 = local_34 - 1;
                                    } while (1 < (int)local_34);
                                }
                            }
                        }
                    }
                } else {
                    uVar15 = local_58->field_32;
                    if ((int)local_38 < (int)uVar15) {
                        if ((int)uVar15 < (int)local_3c) {
                            local_3c = uVar15;
                        }
                        if ((int)uVar15 < (int)local_34) {
                            local_34 = uVar15;
                        }
                        local_48 = (param_7 * 512 - local_60 * param_4) + local_60;
                        uVar15 = param_4 * 16384;
                        local_40 = uVar15;
                        if ((int)local_3c < (int)local_34) {
                            if ((int)local_38 < 0) {
                                local_40 = uVar15 - local_64 * local_38;
                                uVar15 = uVar15 - local_68 * local_38;
                                local_48 = local_48 - local_38 * local_5c;
                                uVar20 = 0;
                            } else {
                                uVar20 = local_38;
                            }
                            local_44 = local_44 * 16384 - ((int)local_3c >> 31 & local_3c * local_6c);
                            uVar13 = 0;
                            if (-1 < (int)local_3c) {
                                uVar13 = local_3c;
                            }
                            iVar12 = uVar20 - *(int*)&local_58->field_24;
                            local_4c = iVar12 * (int)local_98 + iVar7;
                            local_38 = iVar12 * (int)local_90 + iVar5;
                            local_3c = iVar12 * (int)local_88 + iVar6;
                            local_34 = local_34 - uVar13;
                            if ((uVar13 == uVar20) || (local_68 <= local_64)) {
                                puVar9 = (undefined4*)eastl::vector<int, eastl::allocator>::operator[](
                                    (vector<int, eastl::allocator>*)&local_58->field_56, (long)(int)uVar20);
                                local_78 = (SharedArray*)CONCAT44(local_78._4_4_, *puVar9);
                                local_b8 = (SharedArray*)&local_58->field_120;
                                if (uVar13 - uVar20 != 0 && (int)uVar20 <= (int)uVar13) {
                                    local_80 = (SharedArray*)CONCAT44(local_80._4_4_, (uVar13 - uVar20) + 1);
                                    local_50 = uVar15;
                                    do {
                                        pAVar10 = (Array*)shared_ptr<Array<unsigned int, eastl::allocator>>::operator*(
                                            (shared_ptr<Array<unsigned int, eastl::allocator>>*)&local_c8);
                                        uVar13 = local_38;
                                        uVar20 = local_40;
                                        iVar6 = local_48;
                                        uVar15 = local_50;
                                        iVar5 = (int)local_78;
                                        TextureRasterAffine(local_58, local_b8, pAVar10, local_4c, (int)local_50 >> 14,
                                                            (int)local_78, (int)local_50 >> 14, (int)local_40 >> 14,
                                                            local_48, local_60, local_4c, local_38, local_3c,
                                                            (int)local_a0, (int)local_b0, (int)local_a8);
                                        local_40 = uVar20 + local_64;
                                        local_50 = uVar15 + local_68;
                                        local_48 = iVar6 + local_5c;
                                        local_78 = (SharedArray*)CONCAT44(local_78._4_4_, iVar5 + local_58->field_104);
                                        local_4c = local_4c + (int)local_98;
                                        local_38 = uVar13 + (int)local_90;
                                        local_3c = local_3c + (int)local_88;
                                        iVar5 = (int)local_80 + -1;
                                        local_80 = (SharedArray*)CONCAT44(local_80._4_4_, iVar5);
                                    } while (1 < iVar5);
                                }
                                if (0 < (int)local_34) {
                                    local_34 = local_34 + 1;
                                    do {
                                        pAVar10 = (Array*)shared_ptr<Array<unsigned int, eastl::allocator>>::operator*(
                                            (shared_ptr<Array<unsigned int, eastl::allocator>>*)&local_c8);
                                        uVar13 = local_40;
                                        uVar20 = local_44;
                                        iVar6 = local_48;
                                        uVar15 = local_4c;
                                        iVar5 = (int)local_78;
                                        TextureRasterAffine(local_58, local_b8, pAVar10, local_38, (int)local_44 >> 14,
                                                            (int)local_78, (int)local_44 >> 14, (int)local_40 >> 14,
                                                            local_48, local_60, local_4c, local_38, local_3c,
                                                            (int)local_a0, (int)local_b0, (int)local_a8);
                                        local_40 = uVar13 + local_64;
                                        local_44 = uVar20 + local_6c;
                                        local_48 = iVar6 + local_5c;
                                        local_78 = (SharedArray*)CONCAT44(local_78._4_4_, iVar5 + local_58->field_104);
                                        local_4c = uVar15 + (int)local_98;
                                        local_38 = local_38 + (int)local_90;
                                        local_3c = local_3c + (int)local_88;
                                        local_34 = local_34 - 1;
                                    } while (1 < (int)local_34);
                                }
                            } else {
                                puVar9 = (undefined4*)eastl::vector<int, eastl::allocator>::operator[](
                                    (vector<int, eastl::allocator>*)&local_58->field_56, (long)(int)uVar20);
                                local_78 = (SharedArray*)CONCAT44(local_78._4_4_, *puVar9);
                                local_b8 = (SharedArray*)&local_58->field_120;
                                if (uVar13 - uVar20 != 0 && (int)uVar20 <= (int)uVar13) {
                                    local_80 = (SharedArray*)CONCAT44(local_80._4_4_, (uVar13 - uVar20) + 1);
                                    local_50 = uVar15;
                                    do {
                                        pAVar10 = (Array*)shared_ptr<Array<unsigned int, eastl::allocator>>::operator*(
                                            (shared_ptr<Array<unsigned int, eastl::allocator>>*)&local_c8);
                                        uVar13 = local_40;
                                        iVar6 = local_48;
                                        uVar20 = local_4c;
                                        uVar15 = local_50;
                                        iVar5 = (int)local_78;
                                        TextureRasterAffine(local_58, local_b8, pAVar10, local_38, (int)local_40 >> 14,
                                                            (int)local_78, (int)local_40 >> 14, (int)local_50 >> 14,
                                                            local_48, local_60, local_4c, local_38, local_3c,
                                                            (int)local_a0, (int)local_b0, (int)local_a8);
                                        local_40 = uVar13 + local_64;
                                        local_50 = uVar15 + local_68;
                                        local_48 = iVar6 + local_5c;
                                        local_78 = (SharedArray*)CONCAT44(local_78._4_4_, iVar5 + local_58->field_104);
                                        local_4c = uVar20 + (int)local_98;
                                        local_38 = local_38 + (int)local_90;
                                        local_3c = local_3c + (int)local_88;
                                        iVar5 = (int)local_80 + -1;
                                        local_80 = (SharedArray*)CONCAT44(local_80._4_4_, iVar5);
                                    } while (1 < iVar5);
                                }
                                if (0 < (int)local_34) {
                                    local_34 = local_34 + 1;
                                    do {
                                        pAVar10 = (Array*)shared_ptr<Array<unsigned int, eastl::allocator>>::operator*(
                                            (shared_ptr<Array<unsigned int, eastl::allocator>>*)&local_c8);
                                        uVar13 = local_40;
                                        uVar20 = local_44;
                                        iVar6 = local_48;
                                        uVar15 = local_4c;
                                        iVar5 = (int)local_78;
                                        TextureRasterAffine(local_58, local_b8, pAVar10, local_38, (int)local_40 >> 14,
                                                            (int)local_78, (int)local_40 >> 14, (int)local_44 >> 14,
                                                            local_48, local_60, local_4c, local_38, local_3c,
                                                            (int)local_a0, (int)local_b0, (int)local_a8);
                                        local_40 = uVar13 + local_64;
                                        local_44 = uVar20 + local_6c;
                                        local_48 = iVar6 + local_5c;
                                        local_78 = (SharedArray*)CONCAT44(local_78._4_4_, iVar5 + local_58->field_104);
                                        local_4c = uVar15 + (int)local_98;
                                        local_38 = local_38 + (int)local_90;
                                        local_3c = local_3c + (int)local_88;
                                        local_34 = local_34 - 1;
                                    } while (1 < (int)local_34);
                                }
                            }
                        } else {
                            if ((int)local_38 < 0) {
                                local_40 = uVar15 - local_64 * local_38;
                                uVar15 = uVar15 - local_68 * local_38;
                                local_48 = local_48 - local_38 * local_5c;
                                uVar20 = 0;
                            } else {
                                uVar20 = local_38;
                            }
                            local_4c = param_6 * 16384 - ((int)local_34 >> 31 & local_34 * local_6c);
                            uVar13 = 0;
                            if (-1 < (int)local_34) {
                                uVar13 = local_34;
                            }
                            iVar12 = uVar20 - *(int*)&local_58->field_24;
                            local_38 = iVar12 * (int)local_98 + iVar7;
                            local_34 = iVar12 * (int)local_90 + iVar5;
                            local_44 = iVar12 * (int)local_88 + iVar6;
                            local_b8 = (SharedArray*)CONCAT44(local_b8._4_4_, uVar13);
                            local_50 = uVar15;
                            if (((uVar13 == uVar20) || (local_68 <= local_64)) &&
                                ((uVar13 != uVar20 || (local_6c <= local_68)))) {
                                piVar11 = (int*)eastl::vector<int, eastl::allocator>::operator[](
                                    (vector<int, eastl::allocator>*)&local_58->field_56, (long)(int)uVar20);
                                iVar5 = *piVar11;
                                local_80 = (SharedArray*)&pSVar1->field_120;
                                if ((int)local_b8 - uVar20 != 0 && (int)uVar20 <= (int)local_b8) {
                                    local_78 = (SharedArray*)CONCAT44(local_78._4_4_, ((int)local_b8 - uVar20) + 1);
                                    do {
                                        pAVar10 = (Array*)shared_ptr<Array<unsigned int, eastl::allocator>>::operator*(
                                            (shared_ptr<Array<unsigned int, eastl::allocator>>*)&local_c8);
                                        uVar13 = local_38;
                                        uVar20 = local_40;
                                        iVar6 = local_48;
                                        uVar15 = local_50;
                                        TextureRasterAffine(local_58, local_80, pAVar10, local_34, (int)local_50 >> 14,
                                                            iVar5, (int)local_50 >> 14, (int)local_40 >> 14, local_48,
                                                            local_60, local_38, local_34, local_44, (int)local_a0,
                                                            (int)local_b0, (int)local_a8);
                                        local_40 = uVar20 + local_64;
                                        local_50 = uVar15 + local_68;
                                        local_48 = iVar6 + local_5c;
                                        iVar5 = iVar5 + local_58->field_104;
                                        local_38 = uVar13 + (int)local_98;
                                        local_34 = local_34 + (int)local_90;
                                        local_44 = local_44 + (int)local_88;
                                        iVar6 = (int)local_78 + -1;
                                        local_78 = (SharedArray*)CONCAT44(local_78._4_4_, iVar6);
                                    } while (1 < iVar6);
                                }
                                local_3c = local_3c - (int)local_b8;
                                if (0 < (int)local_3c) {
                                    local_3c = local_3c + 1;
                                    uVar15 = local_50;
                                    do {
                                        pAVar10 = (Array*)shared_ptr<Array<unsigned int, eastl::allocator>>::operator*(
                                            (shared_ptr<Array<unsigned int, eastl::allocator>>*)&local_c8);
                                        uVar13 = local_38;
                                        iVar6 = local_48;
                                        uVar20 = local_4c;
                                        TextureRasterAffine(local_58, local_80, pAVar10, local_34, (int)uVar15 >> 14,
                                                            iVar5, (int)uVar15 >> 14, (int)local_4c >> 14, local_48,
                                                            local_60, local_38, local_34, local_44, (int)local_a0,
                                                            (int)local_b0, (int)local_a8);
                                        local_4c = uVar20 + local_6c;
                                        uVar15 = uVar15 + local_68;
                                        local_48 = iVar6 + local_5c;
                                        iVar5 = iVar5 + local_58->field_104;
                                        local_38 = uVar13 + (int)local_98;
                                        local_34 = local_34 + (int)local_90;
                                        local_44 = local_44 + (int)local_88;
                                        local_3c = local_3c - 1;
                                    } while (1 < (int)local_3c);
                                }
                            } else {
                                piVar11 = (int*)eastl::vector<int, eastl::allocator>::operator[](
                                    (vector<int, eastl::allocator>*)&local_58->field_56, (long)(int)uVar20);
                                iVar5 = *piVar11;
                                local_80 = (SharedArray*)&pSVar1->field_120;
                                if ((int)local_b8 - uVar20 != 0 && (int)uVar20 <= (int)local_b8) {
                                    local_78 = (SharedArray*)CONCAT44(local_78._4_4_, ((int)local_b8 - uVar20) + 1);
                                    do {
                                        pAVar10 = (Array*)shared_ptr<Array<unsigned int, eastl::allocator>>::operator*(
                                            (shared_ptr<Array<unsigned int, eastl::allocator>>*)&local_c8);
                                        uVar13 = local_38;
                                        uVar20 = local_40;
                                        iVar6 = local_48;
                                        uVar15 = local_50;
                                        TextureRasterAffine(local_58, local_80, pAVar10, local_34, (int)local_40 >> 14,
                                                            iVar5, (int)local_40 >> 14, (int)local_50 >> 14, local_48,
                                                            local_60, local_38, local_34, local_44, (int)local_a0,
                                                            (int)local_b0, (int)local_a8);
                                        local_40 = uVar20 + local_64;
                                        local_50 = uVar15 + local_68;
                                        local_48 = iVar6 + local_5c;
                                        iVar5 = iVar5 + local_58->field_104;
                                        local_38 = uVar13 + (int)local_98;
                                        local_34 = local_34 + (int)local_90;
                                        local_44 = local_44 + (int)local_88;
                                        iVar6 = (int)local_78 + -1;
                                        local_78 = (SharedArray*)CONCAT44(local_78._4_4_, iVar6);
                                    } while (1 < iVar6);
                                }
                                local_3c = local_3c - (int)local_b8;
                                if (0 < (int)local_3c) {
                                    local_3c = local_3c + 1;
                                    do {
                                        pAVar10 = (Array*)shared_ptr<Array<unsigned int, eastl::allocator>>::operator*(
                                            (shared_ptr<Array<unsigned int, eastl::allocator>>*)&local_c8);
                                        uVar13 = local_38;
                                        iVar6 = local_48;
                                        uVar20 = local_4c;
                                        uVar15 = local_50;
                                        TextureRasterAffine(local_58, local_80, pAVar10, local_34, (int)local_4c >> 14,
                                                            iVar5, (int)local_4c >> 14, (int)local_50 >> 14, local_48,
                                                            local_60, local_38, local_34, local_44, (int)local_a0,
                                                            (int)local_b0, (int)local_a8);
                                        local_4c = uVar20 + local_6c;
                                        local_50 = uVar15 + local_68;
                                        local_48 = iVar6 + local_5c;
                                        iVar5 = iVar5 + local_58->field_104;
                                        local_38 = uVar13 + (int)local_98;
                                        local_34 = local_34 + (int)local_90;
                                        local_44 = local_44 + (int)local_88;
                                        local_3c = local_3c - 1;
                                    } while (1 < (int)local_3c);
                                }
                            }
                        }
                    }
                }
            }
        }
        local_c8.~shared_ptr();
        local_418->~LanguageMessage();
    }

    // 0x1003007c0, 5360 bytes, placed by class name and debug map
    // SoftwarePix3D::TextureRasterAffine(SharedArray<unsigned int>&, Array<unsigned int, eastl::allocator>&, int, int, int, int, int, int, int, int, int, int, int, int, int)
    void SoftwarePix3D::TextureRasterAffine(SharedArray* param_1, Array* param_2, int param_3, int param_4, int param_5,
                                            int param_6, int param_7, int param_8, int param_9, int param_10,
                                            int param_11, int param_12, int param_13, int param_14, int param_15) {
        uint* puVar1;
        int iVar2;
        long lVar3;
        long lVar4;
        uint uVar5;
        int iVar6;
        uint uVar7;
        int iVar8;
        int iVar9;
        uint uVar10;
        int iVar11;
        int iVar12;
        int iVar13;
        int iVar14;
        uint uVar15;
        int iVar16;
        ulong uVar17;

        if (field_8 != '\0') {
            if (field_28 < param_7) {
                param_7 = field_28;
            }
            if (param_6 < 0) {
                param_6 = 0;
            }
        }
        uVar5 = param_7 - param_6;
        if (uVar5 != 0 && param_6 <= param_7) {
            iVar12 = param_5 + param_6;
            iVar6 = param_6 - field_20;
            iVar2 = iVar6 * param_13 + param_10;
            iVar16 = iVar6 * param_14 + param_11;
            uVar7 = iVar6 * param_15 + param_12;
            iVar9 = (int)uVar5 >> 3;
            iVar6 = param_6 * param_9 + param_8 >> 8;
            if (field_10 == '\0') {
                iVar13 = 0;
                iVar14 = 0;
                iVar11 = 0;
                if (16383 < uVar7) {
                    iVar14 = iVar2 / ((int)uVar7 >> 14);
                    iVar11 = iVar16 / ((int)uVar7 >> 14);
                }
                uVar7 = uVar7 + param_15 * uVar5;
                iVar8 = 0;
                if (16383 < uVar7) {
                    iVar8 = (int)uVar7 >> 14;
                    iVar13 = (int)(iVar2 + param_13 * uVar5) / iVar8;
                    iVar8 = (int)(iVar16 + param_14 * uVar5) / iVar8;
                }
                uVar7 = iVar14 * 262144 + iVar11;
                iVar2 = (iVar13 - iVar14) / (int)uVar5;
                iVar16 = (iVar8 - iVar11) / (int)uVar5;
                iVar13 = iVar2 * 262144 + iVar16;
                if (field_9 == '\0') {
                    if (7 < (int)uVar5) {
                        lVar3 = (long)iVar12;
                        iVar11 = param_8 + param_9 * (param_6 + 8);
                        iVar9 = iVar9 + 1;
                        lVar4 = 0;
                        uVar15 = uVar7;
                        do {
                            puVar1 = (uint*)Array<unsigned int, eastl::allocator>::operator[](
                                (Array<unsigned int, eastl::allocator>*)param_2,
                                (ulong)(uVar15 >> 25 | uVar15 & 16256));
                            uVar7 = *puVar1;
                            if (uVar7 != 0) {
                                puVar1 = (uint*)SharedArray<unsigned int>::operator[](
                                    (SharedArray<unsigned int>*)param_1, lVar3 + lVar4);
                                *puVar1 =
                                    ((uVar7 & 65280) * iVar6 & 16711680 | (uVar7 & 16711935) * iVar6 & 4278255360) >> 8;
                            }
                            uVar7 = iVar13 + uVar15;
                            puVar1 = (uint*)Array<unsigned int, eastl::allocator>::operator[](
                                (Array<unsigned int, eastl::allocator>*)param_2, (ulong)(uVar7 >> 25 | uVar7 & 16256));
                            uVar10 = *puVar1;
                            if (uVar10 != 0) {
                                puVar1 = (uint*)SharedArray<unsigned int>::operator[](
                                    (SharedArray<unsigned int>*)param_1, lVar3 + lVar4 + 1);
                                *puVar1 =
                                    ((uVar10 & 65280) * iVar6 & 16711680 | (uVar10 & 16711935) * iVar6 & 4278255360) >>
                                    8;
                            }
                            uVar7 = uVar7 + iVar13 * 7;
                            uVar10 = iVar2 * 524288 + iVar16 * 2 + uVar15;
                            puVar1 = (uint*)Array<unsigned int, eastl::allocator>::operator[](
                                (Array<unsigned int, eastl::allocator>*)param_2,
                                (ulong)(uVar10 >> 25 | uVar10 & 16256));
                            uVar10 = *puVar1;
                            if (uVar10 != 0) {
                                puVar1 = (uint*)SharedArray<unsigned int>::operator[](
                                    (SharedArray<unsigned int>*)param_1, lVar3 + lVar4 + 2);
                                *puVar1 =
                                    ((uVar10 & 65280) * iVar6 & 16711680 | (uVar10 & 16711935) * iVar6 & 4278255360) >>
                                    8;
                            }
                            uVar10 = iVar2 * 786432 + iVar16 * 3 + uVar15;
                            puVar1 = (uint*)Array<unsigned int, eastl::allocator>::operator[](
                                (Array<unsigned int, eastl::allocator>*)param_2,
                                (ulong)(uVar10 >> 25 | uVar10 & 16256));
                            uVar10 = *puVar1;
                            if (uVar10 != 0) {
                                puVar1 = (uint*)SharedArray<unsigned int>::operator[](
                                    (SharedArray<unsigned int>*)param_1, lVar3 + lVar4 + 3);
                                *puVar1 =
                                    ((uVar10 & 65280) * iVar6 & 16711680 | (uVar10 & 16711935) * iVar6 & 4278255360) >>
                                    8;
                            }
                            uVar10 = iVar2 * 1048576 + iVar16 * 4 + uVar15;
                            puVar1 = (uint*)Array<unsigned int, eastl::allocator>::operator[](
                                (Array<unsigned int, eastl::allocator>*)param_2,
                                (ulong)(uVar10 >> 25 | uVar10 & 16256));
                            uVar10 = *puVar1;
                            if (uVar10 != 0) {
                                puVar1 = (uint*)SharedArray<unsigned int>::operator[](
                                    (SharedArray<unsigned int>*)param_1, lVar3 + lVar4 + 4);
                                *puVar1 =
                                    ((uVar10 & 65280) * iVar6 & 16711680 | (uVar10 & 16711935) * iVar6 & 4278255360) >>
                                    8;
                            }
                            uVar10 = iVar16 * 5 + iVar2 * 1310720 + uVar15;
                            puVar1 = (uint*)Array<unsigned int, eastl::allocator>::operator[](
                                (Array<unsigned int, eastl::allocator>*)param_2,
                                (ulong)(uVar10 >> 25 | uVar10 & 16256));
                            uVar10 = *puVar1;
                            if (uVar10 != 0) {
                                puVar1 = (uint*)SharedArray<unsigned int>::operator[](
                                    (SharedArray<unsigned int>*)param_1, lVar3 + lVar4 + 5);
                                *puVar1 =
                                    ((uVar10 & 65280) * iVar6 & 16711680 | (uVar10 & 16711935) * iVar6 & 4278255360) >>
                                    8;
                            }
                            uVar10 = iVar2 * 1572864 + iVar16 * 6 + uVar15;
                            puVar1 = (uint*)Array<unsigned int, eastl::allocator>::operator[](
                                (Array<unsigned int, eastl::allocator>*)param_2,
                                (ulong)(uVar10 >> 25 | uVar10 & 16256));
                            uVar10 = *puVar1;
                            if (uVar10 != 0) {
                                puVar1 = (uint*)SharedArray<unsigned int>::operator[](
                                    (SharedArray<unsigned int>*)param_1, lVar3 + lVar4 + 6);
                                *puVar1 =
                                    ((uVar10 & 65280) * iVar6 & 16711680 | (uVar10 & 16711935) * iVar6 & 4278255360) >>
                                    8;
                            }
                            uVar15 = uVar15 + iVar16 * 7 + iVar2 * 1835008;
                            puVar1 = (uint*)Array<unsigned int, eastl::allocator>::operator[](
                                (Array<unsigned int, eastl::allocator>*)param_2,
                                (ulong)(uVar15 >> 25 | uVar15 & 16256));
                            uVar15 = *puVar1;
                            if (uVar15 != 0) {
                                puVar1 = (uint*)SharedArray<unsigned int>::operator[](
                                    (SharedArray<unsigned int>*)param_1, lVar3 + lVar4 + 7);
                                *puVar1 =
                                    ((uVar15 & 65280) * iVar6 & 16711680 | (uVar15 & 16711935) * iVar6 & 4278255360) >>
                                    8;
                            }
                            iVar6 = iVar11 >> 8;
                            lVar4 = lVar4 + 8;
                            iVar11 = iVar11 + param_9 * 8;
                            iVar9 = iVar9 + -1;
                            uVar15 = uVar7;
                        } while (1 < iVar9);
                        iVar12 = iVar12 + (int)lVar4;
                    }
                    if ((uVar5 & 7) != 0) {
                        uVar17 = (ulong)iVar12;
                        iVar12 = (uVar5 & 7) + 1;
                        do {
                            puVar1 = (uint*)Array<unsigned int, eastl::allocator>::operator[](
                                (Array<unsigned int, eastl::allocator>*)param_2, (ulong)(uVar7 >> 25 | uVar7 & 16256));
                            uVar5 = *puVar1;
                            if (uVar5 != 0) {
                                puVar1 = (uint*)SharedArray<unsigned int>::operator[](
                                    (SharedArray<unsigned int>*)param_1, uVar17);
                                *puVar1 =
                                    ((uVar5 & 65280) * iVar6 & 16711680 | (uVar5 & 16711935) * iVar6 & 4278255360) >> 8;
                            }
                            uVar17 = uVar17 + 1;
                            uVar7 = uVar7 + iVar13;
                            iVar12 = iVar12 + -1;
                        } while (1 < iVar12);
                    }
                } else {
                    if (7 < (int)uVar5) {
                        lVar4 = (long)iVar12;
                        iVar11 = param_8 + param_9 * (param_6 + 8);
                        iVar9 = iVar9 + 1;
                        lVar3 = 0;
                        uVar15 = uVar7;
                        do {
                            puVar1 = (uint*)Array<unsigned int, eastl::allocator>::operator[](
                                (Array<unsigned int, eastl::allocator>*)param_2,
                                (ulong)(uVar15 >> 25 | uVar15 & 16256));
                            uVar7 = *puVar1;
                            puVar1 = (uint*)SharedArray<unsigned int>::operator[]((SharedArray<unsigned int>*)param_1,
                                                                                  lVar4 + lVar3);
                            *puVar1 =
                                ((uVar7 & 65280) * iVar6 & 16711680 | (uVar7 & 16711935) * iVar6 & 4278255360) >> 8;
                            uVar7 = iVar13 + uVar15;
                            puVar1 = (uint*)Array<unsigned int, eastl::allocator>::operator[](
                                (Array<unsigned int, eastl::allocator>*)param_2, (ulong)(uVar7 >> 25 | uVar7 & 16256));
                            uVar10 = *puVar1;
                            puVar1 = (uint*)SharedArray<unsigned int>::operator[]((SharedArray<unsigned int>*)param_1,
                                                                                  lVar3 + lVar4 + 1);
                            *puVar1 =
                                ((uVar10 & 65280) * iVar6 & 16711680 | (uVar10 & 16711935) * iVar6 & 4278255360) >> 8;
                            uVar7 = uVar7 + iVar13 * 7;
                            uVar10 = iVar2 * 524288 + iVar16 * 2 + uVar15;
                            puVar1 = (uint*)Array<unsigned int, eastl::allocator>::operator[](
                                (Array<unsigned int, eastl::allocator>*)param_2,
                                (ulong)(uVar10 >> 25 | uVar10 & 16256));
                            uVar10 = *puVar1;
                            puVar1 = (uint*)SharedArray<unsigned int>::operator[]((SharedArray<unsigned int>*)param_1,
                                                                                  lVar3 + lVar4 + 2);
                            *puVar1 =
                                ((uVar10 & 65280) * iVar6 & 16711680 | (uVar10 & 16711935) * iVar6 & 4278255360) >> 8;
                            uVar10 = iVar2 * 786432 + iVar16 * 3 + uVar15;
                            puVar1 = (uint*)Array<unsigned int, eastl::allocator>::operator[](
                                (Array<unsigned int, eastl::allocator>*)param_2,
                                (ulong)(uVar10 >> 25 | uVar10 & 16256));
                            uVar10 = *puVar1;
                            puVar1 = (uint*)SharedArray<unsigned int>::operator[]((SharedArray<unsigned int>*)param_1,
                                                                                  lVar3 + lVar4 + 3);
                            *puVar1 =
                                ((uVar10 & 65280) * iVar6 & 16711680 | (uVar10 & 16711935) * iVar6 & 4278255360) >> 8;
                            uVar10 = iVar2 * 1048576 + iVar16 * 4 + uVar15;
                            puVar1 = (uint*)Array<unsigned int, eastl::allocator>::operator[](
                                (Array<unsigned int, eastl::allocator>*)param_2,
                                (ulong)(uVar10 >> 25 | uVar10 & 16256));
                            uVar10 = *puVar1;
                            puVar1 = (uint*)SharedArray<unsigned int>::operator[]((SharedArray<unsigned int>*)param_1,
                                                                                  lVar3 + lVar4 + 4);
                            *puVar1 =
                                ((uVar10 & 65280) * iVar6 & 16711680 | (uVar10 & 16711935) * iVar6 & 4278255360) >> 8;
                            uVar10 = iVar16 * 5 + iVar2 * 1310720 + uVar15;
                            puVar1 = (uint*)Array<unsigned int, eastl::allocator>::operator[](
                                (Array<unsigned int, eastl::allocator>*)param_2,
                                (ulong)(uVar10 >> 25 | uVar10 & 16256));
                            uVar10 = *puVar1;
                            puVar1 = (uint*)SharedArray<unsigned int>::operator[]((SharedArray<unsigned int>*)param_1,
                                                                                  lVar3 + lVar4 + 5);
                            *puVar1 =
                                ((uVar10 & 65280) * iVar6 & 16711680 | (uVar10 & 16711935) * iVar6 & 4278255360) >> 8;
                            uVar10 = iVar2 * 1572864 + iVar16 * 6 + uVar15;
                            puVar1 = (uint*)Array<unsigned int, eastl::allocator>::operator[](
                                (Array<unsigned int, eastl::allocator>*)param_2,
                                (ulong)(uVar10 >> 25 | uVar10 & 16256));
                            uVar10 = *puVar1;
                            puVar1 = (uint*)SharedArray<unsigned int>::operator[]((SharedArray<unsigned int>*)param_1,
                                                                                  lVar3 + lVar4 + 6);
                            *puVar1 =
                                ((uVar10 & 65280) * iVar6 & 16711680 | (uVar10 & 16711935) * iVar6 & 4278255360) >> 8;
                            uVar15 = uVar15 + iVar16 * 7 + iVar2 * 1835008;
                            puVar1 = (uint*)Array<unsigned int, eastl::allocator>::operator[](
                                (Array<unsigned int, eastl::allocator>*)param_2,
                                (ulong)(uVar15 >> 25 | uVar15 & 16256));
                            uVar15 = *puVar1;
                            puVar1 = (uint*)SharedArray<unsigned int>::operator[]((SharedArray<unsigned int>*)param_1,
                                                                                  lVar3 + lVar4 + 7);
                            *puVar1 =
                                ((uVar15 & 65280) * iVar6 & 16711680 | (uVar15 & 16711935) * iVar6 & 4278255360) >> 8;
                            iVar6 = iVar11 >> 8;
                            lVar3 = lVar3 + 8;
                            iVar11 = iVar11 + param_9 * 8;
                            iVar9 = iVar9 + -1;
                            uVar15 = uVar7;
                        } while (1 < iVar9);
                        iVar12 = iVar12 + (int)lVar3;
                    }
                    if ((uVar5 & 7) != 0) {
                        iVar2 = (uVar5 & 7) + 1;
                        uVar17 = (long)iVar12;
                        do {
                            puVar1 = (uint*)Array<unsigned int, eastl::allocator>::operator[](
                                (Array<unsigned int, eastl::allocator>*)param_2, (ulong)(uVar7 >> 25 | uVar7 & 16256));
                            uVar5 = *puVar1;
                            puVar1 = (uint*)SharedArray<unsigned int>::operator[]((SharedArray<unsigned int>*)param_1,
                                                                                  uVar17);
                            *puVar1 =
                                ((uVar5 & 65280) * iVar6 & 16711680 | (uVar5 & 16711935) * iVar6 & 4278255360) >> 8;
                            uVar7 = uVar7 + iVar13;
                            iVar2 = iVar2 + -1;
                            uVar17 = uVar17 + 1;
                        } while (1 < iVar2);
                    }
                }
            } else {
                iVar13 = 0;
                iVar14 = 0;
                iVar11 = 0;
                if (4095 < uVar7) {
                    iVar14 = iVar2 / ((int)uVar7 >> 12);
                    iVar11 = iVar16 / ((int)uVar7 >> 12);
                }
                uVar7 = uVar7 + param_15 * uVar5;
                iVar8 = 0;
                if (4095 < uVar7) {
                    iVar8 = (int)uVar7 >> 12;
                    iVar13 = (int)(iVar2 + param_13 * uVar5) / iVar8;
                    iVar8 = (int)(iVar16 + param_14 * uVar5) / iVar8;
                }
                uVar7 = iVar14 * 1048576 + iVar11;
                iVar2 = (iVar13 - iVar14) / (int)uVar5;
                iVar16 = (iVar8 - iVar11) / (int)uVar5;
                iVar13 = iVar2 * 1048576 + iVar16;
                if (field_9 == '\0') {
                    if (7 < (int)uVar5) {
                        lVar3 = (long)iVar12;
                        iVar11 = param_8 + param_9 * (param_6 + 8);
                        iVar9 = iVar9 + 1;
                        lVar4 = 0;
                        uVar15 = uVar7;
                        do {
                            puVar1 = (uint*)Array<unsigned int, eastl::allocator>::operator[](
                                (Array<unsigned int, eastl::allocator>*)param_2, (ulong)(uVar15 >> 26 | uVar15 & 4032));
                            uVar7 = *puVar1;
                            if (uVar7 != 0) {
                                puVar1 = (uint*)SharedArray<unsigned int>::operator[](
                                    (SharedArray<unsigned int>*)param_1, lVar3 + lVar4);
                                *puVar1 =
                                    ((uVar7 & 65280) * iVar6 & 16711680 | (uVar7 & 16711935) * iVar6 & 4278255360) >> 8;
                            }
                            uVar7 = iVar13 + uVar15;
                            puVar1 = (uint*)Array<unsigned int, eastl::allocator>::operator[](
                                (Array<unsigned int, eastl::allocator>*)param_2, (ulong)(uVar7 >> 26 | uVar7 & 4032));
                            uVar10 = *puVar1;
                            if (uVar10 != 0) {
                                puVar1 = (uint*)SharedArray<unsigned int>::operator[](
                                    (SharedArray<unsigned int>*)param_1, lVar3 + lVar4 + 1);
                                *puVar1 =
                                    ((uVar10 & 65280) * iVar6 & 16711680 | (uVar10 & 16711935) * iVar6 & 4278255360) >>
                                    8;
                            }
                            uVar7 = uVar7 + iVar13 * 7;
                            uVar10 = iVar2 * 2097152 + iVar16 * 2 + uVar15;
                            puVar1 = (uint*)Array<unsigned int, eastl::allocator>::operator[](
                                (Array<unsigned int, eastl::allocator>*)param_2, (ulong)(uVar10 >> 26 | uVar10 & 4032));
                            uVar10 = *puVar1;
                            if (uVar10 != 0) {
                                puVar1 = (uint*)SharedArray<unsigned int>::operator[](
                                    (SharedArray<unsigned int>*)param_1, lVar3 + lVar4 + 2);
                                *puVar1 =
                                    ((uVar10 & 65280) * iVar6 & 16711680 | (uVar10 & 16711935) * iVar6 & 4278255360) >>
                                    8;
                            }
                            uVar10 = iVar2 * 3145728 + iVar16 * 3 + uVar15;
                            puVar1 = (uint*)Array<unsigned int, eastl::allocator>::operator[](
                                (Array<unsigned int, eastl::allocator>*)param_2, (ulong)(uVar10 >> 26 | uVar10 & 4032));
                            uVar10 = *puVar1;
                            if (uVar10 != 0) {
                                puVar1 = (uint*)SharedArray<unsigned int>::operator[](
                                    (SharedArray<unsigned int>*)param_1, lVar3 + lVar4 + 3);
                                *puVar1 =
                                    ((uVar10 & 65280) * iVar6 & 16711680 | (uVar10 & 16711935) * iVar6 & 4278255360) >>
                                    8;
                            }
                            uVar10 = iVar2 * 4194304 + iVar16 * 4 + uVar15;
                            puVar1 = (uint*)Array<unsigned int, eastl::allocator>::operator[](
                                (Array<unsigned int, eastl::allocator>*)param_2, (ulong)(uVar10 >> 26 | uVar10 & 4032));
                            uVar10 = *puVar1;
                            if (uVar10 != 0) {
                                puVar1 = (uint*)SharedArray<unsigned int>::operator[](
                                    (SharedArray<unsigned int>*)param_1, lVar3 + lVar4 + 4);
                                *puVar1 =
                                    ((uVar10 & 65280) * iVar6 & 16711680 | (uVar10 & 16711935) * iVar6 & 4278255360) >>
                                    8;
                            }
                            uVar10 = iVar16 * 5 + iVar2 * 5242880 + uVar15;
                            puVar1 = (uint*)Array<unsigned int, eastl::allocator>::operator[](
                                (Array<unsigned int, eastl::allocator>*)param_2, (ulong)(uVar10 >> 26 | uVar10 & 4032));
                            uVar10 = *puVar1;
                            if (uVar10 != 0) {
                                puVar1 = (uint*)SharedArray<unsigned int>::operator[](
                                    (SharedArray<unsigned int>*)param_1, lVar3 + lVar4 + 5);
                                *puVar1 =
                                    ((uVar10 & 65280) * iVar6 & 16711680 | (uVar10 & 16711935) * iVar6 & 4278255360) >>
                                    8;
                            }
                            uVar10 = iVar2 * 6291456 + iVar16 * 6 + uVar15;
                            puVar1 = (uint*)Array<unsigned int, eastl::allocator>::operator[](
                                (Array<unsigned int, eastl::allocator>*)param_2, (ulong)(uVar10 >> 26 | uVar10 & 4032));
                            uVar10 = *puVar1;
                            if (uVar10 != 0) {
                                puVar1 = (uint*)SharedArray<unsigned int>::operator[](
                                    (SharedArray<unsigned int>*)param_1, lVar3 + lVar4 + 6);
                                *puVar1 =
                                    ((uVar10 & 65280) * iVar6 & 16711680 | (uVar10 & 16711935) * iVar6 & 4278255360) >>
                                    8;
                            }
                            uVar15 = uVar15 + iVar16 * 7 + iVar2 * 7340032;
                            puVar1 = (uint*)Array<unsigned int, eastl::allocator>::operator[](
                                (Array<unsigned int, eastl::allocator>*)param_2, (ulong)(uVar15 >> 26 | uVar15 & 4032));
                            uVar15 = *puVar1;
                            if (uVar15 != 0) {
                                puVar1 = (uint*)SharedArray<unsigned int>::operator[](
                                    (SharedArray<unsigned int>*)param_1, lVar3 + lVar4 + 7);
                                *puVar1 =
                                    ((uVar15 & 65280) * iVar6 & 16711680 | (uVar15 & 16711935) * iVar6 & 4278255360) >>
                                    8;
                            }
                            iVar6 = iVar11 >> 8;
                            lVar4 = lVar4 + 8;
                            iVar11 = iVar11 + param_9 * 8;
                            iVar9 = iVar9 + -1;
                            uVar15 = uVar7;
                        } while (1 < iVar9);
                        iVar12 = iVar12 + (int)lVar4;
                    }
                    if ((uVar5 & 7) != 0) {
                        uVar17 = (ulong)iVar12;
                        iVar12 = (uVar5 & 7) + 1;
                        do {
                            puVar1 = (uint*)Array<unsigned int, eastl::allocator>::operator[](
                                (Array<unsigned int, eastl::allocator>*)param_2, (ulong)(uVar7 >> 26 | uVar7 & 4032));
                            uVar5 = *puVar1;
                            if (uVar5 != 0) {
                                puVar1 = (uint*)SharedArray<unsigned int>::operator[](
                                    (SharedArray<unsigned int>*)param_1, uVar17);
                                *puVar1 =
                                    ((uVar5 & 65280) * iVar6 & 16711680 | (uVar5 & 16711935) * iVar6 & 4278255360) >> 8;
                            }
                            uVar17 = uVar17 + 1;
                            uVar7 = uVar7 + iVar13;
                            iVar12 = iVar12 + -1;
                        } while (1 < iVar12);
                    }
                } else {
                    if (7 < (int)uVar5) {
                        lVar4 = (long)iVar12;
                        iVar11 = param_8 + param_9 * (param_6 + 8);
                        iVar9 = iVar9 + 1;
                        lVar3 = 0;
                        uVar15 = uVar7;
                        do {
                            puVar1 = (uint*)Array<unsigned int, eastl::allocator>::operator[](
                                (Array<unsigned int, eastl::allocator>*)param_2, (ulong)(uVar15 >> 26 | uVar15 & 4032));
                            uVar7 = *puVar1;
                            puVar1 = (uint*)SharedArray<unsigned int>::operator[]((SharedArray<unsigned int>*)param_1,
                                                                                  lVar3 + lVar4);
                            *puVar1 =
                                ((uVar7 & 65280) * iVar6 & 16711680 | (uVar7 & 16711935) * iVar6 & 4278255360) >> 8;
                            uVar7 = iVar13 + uVar15;
                            puVar1 = (uint*)Array<unsigned int, eastl::allocator>::operator[](
                                (Array<unsigned int, eastl::allocator>*)param_2, (ulong)(uVar7 >> 26 | uVar7 & 4032));
                            uVar10 = *puVar1;
                            puVar1 = (uint*)SharedArray<unsigned int>::operator[]((SharedArray<unsigned int>*)param_1,
                                                                                  lVar3 + lVar4 + 1);
                            *puVar1 =
                                ((uVar10 & 65280) * iVar6 & 16711680 | (uVar10 & 16711935) * iVar6 & 4278255360) >> 8;
                            uVar7 = uVar7 + iVar13 * 7;
                            uVar10 = iVar2 * 2097152 + iVar16 * 2 + uVar15;
                            puVar1 = (uint*)Array<unsigned int, eastl::allocator>::operator[](
                                (Array<unsigned int, eastl::allocator>*)param_2, (ulong)(uVar10 >> 26 | uVar10 & 4032));
                            uVar10 = *puVar1;
                            puVar1 = (uint*)SharedArray<unsigned int>::operator[]((SharedArray<unsigned int>*)param_1,
                                                                                  lVar3 + lVar4 + 2);
                            *puVar1 =
                                ((uVar10 & 65280) * iVar6 & 16711680 | (uVar10 & 16711935) * iVar6 & 4278255360) >> 8;
                            uVar10 = iVar2 * 3145728 + iVar16 * 3 + uVar15;
                            puVar1 = (uint*)Array<unsigned int, eastl::allocator>::operator[](
                                (Array<unsigned int, eastl::allocator>*)param_2, (ulong)(uVar10 >> 26 | uVar10 & 4032));
                            uVar10 = *puVar1;
                            puVar1 = (uint*)SharedArray<unsigned int>::operator[]((SharedArray<unsigned int>*)param_1,
                                                                                  lVar3 + lVar4 + 3);
                            *puVar1 =
                                ((uVar10 & 65280) * iVar6 & 16711680 | (uVar10 & 16711935) * iVar6 & 4278255360) >> 8;
                            uVar10 = iVar2 * 4194304 + iVar16 * 4 + uVar15;
                            puVar1 = (uint*)Array<unsigned int, eastl::allocator>::operator[](
                                (Array<unsigned int, eastl::allocator>*)param_2, (ulong)(uVar10 >> 26 | uVar10 & 4032));
                            uVar10 = *puVar1;
                            puVar1 = (uint*)SharedArray<unsigned int>::operator[]((SharedArray<unsigned int>*)param_1,
                                                                                  lVar3 + lVar4 + 4);
                            *puVar1 =
                                ((uVar10 & 65280) * iVar6 & 16711680 | (uVar10 & 16711935) * iVar6 & 4278255360) >> 8;
                            uVar10 = iVar16 * 5 + iVar2 * 5242880 + uVar15;
                            puVar1 = (uint*)Array<unsigned int, eastl::allocator>::operator[](
                                (Array<unsigned int, eastl::allocator>*)param_2, (ulong)(uVar10 >> 26 | uVar10 & 4032));
                            uVar10 = *puVar1;
                            puVar1 = (uint*)SharedArray<unsigned int>::operator[]((SharedArray<unsigned int>*)param_1,
                                                                                  lVar3 + lVar4 + 5);
                            *puVar1 =
                                ((uVar10 & 65280) * iVar6 & 16711680 | (uVar10 & 16711935) * iVar6 & 4278255360) >> 8;
                            uVar10 = iVar2 * 6291456 + iVar16 * 6 + uVar15;
                            puVar1 = (uint*)Array<unsigned int, eastl::allocator>::operator[](
                                (Array<unsigned int, eastl::allocator>*)param_2, (ulong)(uVar10 >> 26 | uVar10 & 4032));
                            uVar10 = *puVar1;
                            puVar1 = (uint*)SharedArray<unsigned int>::operator[]((SharedArray<unsigned int>*)param_1,
                                                                                  lVar3 + lVar4 + 6);
                            *puVar1 =
                                ((uVar10 & 65280) * iVar6 & 16711680 | (uVar10 & 16711935) * iVar6 & 4278255360) >> 8;
                            uVar15 = uVar15 + iVar16 * 7 + iVar2 * 7340032;
                            puVar1 = (uint*)Array<unsigned int, eastl::allocator>::operator[](
                                (Array<unsigned int, eastl::allocator>*)param_2, (ulong)(uVar15 >> 26 | uVar15 & 4032));
                            uVar15 = *puVar1;
                            puVar1 = (uint*)SharedArray<unsigned int>::operator[]((SharedArray<unsigned int>*)param_1,
                                                                                  lVar3 + lVar4 + 7);
                            *puVar1 =
                                ((uVar15 & 65280) * iVar6 & 16711680 | (uVar15 & 16711935) * iVar6 & 4278255360) >> 8;
                            iVar6 = iVar11 >> 8;
                            lVar3 = lVar3 + 8;
                            iVar11 = iVar11 + param_9 * 8;
                            iVar9 = iVar9 + -1;
                            uVar15 = uVar7;
                        } while (1 < iVar9);
                        iVar12 = iVar12 + (int)lVar3;
                    }
                    if ((uVar5 & 7) != 0) {
                        iVar2 = (uVar5 & 7) + 1;
                        uVar17 = (long)iVar12;
                        do {
                            puVar1 = (uint*)Array<unsigned int, eastl::allocator>::operator[](
                                (Array<unsigned int, eastl::allocator>*)param_2, (ulong)(uVar7 >> 26 | uVar7 & 4032));
                            uVar5 = *puVar1;
                            puVar1 = (uint*)SharedArray<unsigned int>::operator[]((SharedArray<unsigned int>*)param_1,
                                                                                  uVar17);
                            *puVar1 =
                                ((uVar5 & 65280) * iVar6 & 16711680 | (uVar5 & 16711935) * iVar6 & 4278255360) >> 8;
                            uVar7 = uVar7 + iVar13;
                            iVar2 = iVar2 + -1;
                            uVar17 = uVar17 + 1;
                        } while (1 < iVar2);
                    }
                }
            }
        }
    }

    // 0x100301cd0, 48 bytes, inline, placed by debug map only (low confidence)
    // TextureRasterWithAlphaChannel(int, int)
    uint TextureRasterWithAlphaChannel(int param_1, int param_2) {
        return ((param_1 & 16711935U) * param_2 & 4278255360 | (param_1 & 65280U) * param_2 & 16711680) >> 8 |
               4278190080;
    }

} // namespace jag::oldscape::dash3d
