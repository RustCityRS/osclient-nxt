// libs/oldscape/jagex3/dash3d/SoftwarePix3D.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.oldscape.jagex3

#include "SoftwarePix3D.h"

namespace jag::oldscape::dash3d {
    // 0x100009e70: SoftwarePix3D::PrepareRender() has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

    // 0x1002f8dc0
    void SoftwarePix3D::FlatTriangle(int arg1, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7) {
        int iVar1;
        int* piVar2;
        int iVar3;
        unsigned int uVar4;
        int iVar5;
        unsigned long uVar6;
        int iVar7;
        unsigned int uVar8;
        unsigned int uVar9;
        int iVar10;
        int iVar11;
        int iVar12;
        int iVar13;
        int iVar14;
        int iVar15;

        if (field_12 < 256) {
            iVar11 = 0;
            uVar6 = 0;
            if (arg2 - arg1 != 0) {
                uVar6 = (long)((arg5 - arg4) * 16384) / (long)(arg2 - arg1) & 4294967295;
            }
            if (arg3 - arg2 != 0) {
                iVar11 = ((arg6 - arg5) * 16384) / (arg3 - arg2);
            }
            iVar1 = 0;
            if (arg1 - arg3 != 0) {
                iVar1 = ((arg4 - arg6) * 16384) / (arg1 - arg3);
            }
            iVar13 = (int)uVar6;
            iVar5 = (int)this;
            if ((arg2 < arg1) || (arg3 < arg1)) {
                uVar9 = field_32;
                if (arg3 < arg2) {
                    if (arg3 < (int)uVar9) {
                        if ((int)uVar9 < arg1) {
                            arg1 = uVar9;
                        }
                        if ((int)uVar9 < arg2) {
                            arg2 = uVar9;
                        }
                        uVar4 = 0;
                        uVar9 = arg3;
                        if (arg3 < 0) {
                            uVar9 = uVar4;
                        }
                        iVar14 = arg6 * 16384 - (iVar11 * arg3 & arg3 >> 31);
                        iVar15 = arg6 * 16384 - (arg3 >> 31 & iVar1 * arg3);
                        if (arg1 < arg2) {
                            iVar12 = arg4 * 16384 - (arg1 >> 31 & arg1 * iVar13);
                            if (-1 < arg1) {
                                uVar4 = arg1;
                            }
                            iVar10 = arg2 - uVar4;
                            iVar7 = uVar4 - uVar9;
                            piVar2 = &field_56[(unsigned long)uVar9];
                            iVar5 = iVar5 + 120;
                            iVar3 = *piVar2;
                            if (iVar11 < iVar1) {
                                if (0 < iVar7) {
                                    iVar7 = iVar7 + 1;
                                    do {
                                        FlatRaster((SharedArray<unsigned int>*)this, iVar5, iVar3, arg7, (int)uVar6,
                                                   iVar14 >> 14);
                                        iVar14 = iVar14 + iVar11;
                                        iVar3 = iVar3 + field_104;
                                        iVar7 = iVar7 - 1;
                                    } while (1 < iVar7);
                                }
                                if (0 < iVar10) {
                                    iVar10 = iVar10 + 1;
                                    do {
                                        FlatRaster((SharedArray<unsigned int>*)this, iVar5, iVar3, arg7, (int)uVar6,
                                                   iVar14 >> 14);
                                        iVar14 = iVar14 + iVar11;
                                        iVar3 = iVar3 + field_104;
                                        iVar10 = iVar10 - 1;
                                    } while (1 < iVar10);
                                }
                            } else {
                                if (0 < iVar7) {
                                    iVar7 = iVar7 + 1;
                                    do {
                                        FlatRaster((SharedArray<unsigned int>*)this, iVar5, iVar3, arg7, (int)uVar6,
                                                   iVar15 >> 14);
                                        iVar15 = iVar15 + iVar1;
                                        iVar3 = iVar3 + field_104;
                                        iVar7 = iVar7 - 1;
                                    } while (1 < iVar7);
                                }
                                if (0 < iVar10) {
                                    iVar10 = iVar10 + 1;
                                    do {
                                        FlatRaster((SharedArray<unsigned int>*)this, iVar5, iVar3, arg7, (int)uVar6,
                                                   iVar12 >> 14);
                                        iVar12 = iVar12 + iVar13;
                                        iVar3 = iVar3 + field_104;
                                        iVar10 = iVar10 - 1;
                                    } while (1 < iVar10);
                                }
                            }
                        } else {
                            if (-1 < arg2) {
                                uVar4 = arg2;
                            }
                            iVar10 = arg5 * 16384 - (arg2 >> 31 & arg2 * iVar13);
                            iVar7 = arg1 - uVar4;
                            iVar3 = uVar4 - uVar9;
                            piVar2 = &field_56[(unsigned long)uVar9];
                            iVar5 = iVar5 + 120;
                            iVar12 = *piVar2;
                            if (iVar11 < iVar1) {
                                if (0 < iVar3) {
                                    iVar3 = iVar3 + 1;
                                    do {
                                        FlatRaster((SharedArray<unsigned int>*)this, iVar5, iVar12, arg7, (int)uVar6,
                                                   iVar14 >> 14);
                                        iVar14 = iVar14 + iVar11;
                                        iVar12 = iVar12 + field_104;
                                        iVar3 = iVar3 - 1;
                                    } while (1 < iVar3);
                                }
                                if (0 < iVar7) {
                                    iVar7 = iVar7 + 1;
                                    do {
                                        FlatRaster((SharedArray<unsigned int>*)this, iVar5, iVar12, arg7, (int)uVar6,
                                                   iVar10 >> 14);
                                        iVar10 = iVar10 + iVar13;
                                        iVar12 = iVar12 + field_104;
                                        iVar7 = iVar7 - 1;
                                    } while (1 < iVar7);
                                }
                            } else {
                                if (0 < iVar3) {
                                    iVar3 = iVar3 + 1;
                                    do {
                                        FlatRaster((SharedArray<unsigned int>*)this, iVar5, iVar12, arg7, (int)uVar6,
                                                   iVar15 >> 14);
                                        iVar15 = iVar15 + iVar1;
                                        iVar12 = iVar12 + field_104;
                                        iVar3 = iVar3 - 1;
                                    } while (1 < iVar3);
                                }
                                if (0 < iVar7) {
                                    iVar7 = iVar7 + 1;
                                    do {
                                        FlatRaster((SharedArray<unsigned int>*)this, iVar5, iVar12, arg7, (int)uVar6,
                                                   iVar15 >> 14);
                                        iVar15 = iVar15 + iVar1;
                                        iVar12 = iVar12 + field_104;
                                        iVar7 = iVar7 - 1;
                                    } while (1 < iVar7);
                                }
                            }
                        }
                    }
                } else if (arg2 < (int)uVar9) {
                    if ((int)uVar9 < arg3) {
                        arg3 = uVar9;
                    }
                    if ((int)uVar9 < arg1) {
                        arg1 = uVar9;
                    }
                    iVar15 = arg5 * 16384;
                    uVar4 = iVar13 * arg2;
                    uVar6 = (unsigned long)uVar4;
                    uVar9 = arg2;
                    if (arg2 < 0) {
                        uVar9 = 0;
                    }
                    uVar8 = arg2 >> 31;
                    if (arg3 < arg1) {
                        uVar6 = (unsigned long)(uVar4 & uVar8);
                        iVar14 = iVar15 - (uVar4 & uVar8);
                        iVar15 = iVar15 - (uVar8 & iVar11 * arg2);
                        uVar4 = 0;
                        if (-1 < arg3) {
                            uVar4 = arg3;
                        }
                        iVar10 = arg6 * 16384 - (arg3 >> 31 & arg3 * iVar1);
                        iVar7 = arg1 - uVar4;
                        piVar2 = (int*)field_56[(unsigned long)uVar9];
                        iVar5 = iVar5 + 120;
                        iVar12 = *piVar2;
                        iVar3 = uVar4 - uVar9;
                        if ((iVar3 == 0) || (iVar11 <= iVar13)) {
                            if (0 < iVar3) {
                                iVar3 = iVar3 + 1;
                                do {
                                    FlatRaster((SharedArray<unsigned int>*)this, iVar5, iVar12, arg7, (int)uVar6,
                                               iVar15 >> 14);
                                    iVar15 = iVar15 + iVar11;
                                    iVar12 = iVar12 + field_104;
                                    iVar3 = iVar3 - 1;
                                } while (1 < iVar3);
                            }
                            if (0 < iVar7) {
                                iVar7 = iVar7 + 1;
                                do {
                                    FlatRaster((SharedArray<unsigned int>*)this, iVar5, iVar12, arg7, (int)uVar6,
                                               iVar10 >> 14);
                                    iVar10 = iVar10 + iVar1;
                                    iVar12 = iVar12 + field_104;
                                    iVar7 = iVar7 - 1;
                                } while (1 < iVar7);
                            }
                        } else {
                            if (0 < iVar3) {
                                iVar3 = iVar3 + 1;
                                do {
                                    FlatRaster((SharedArray<unsigned int>*)this, iVar5, iVar12, arg7, (int)uVar6,
                                               iVar14 >> 14);
                                    iVar14 = iVar14 + iVar13;
                                    iVar12 = iVar12 + field_104;
                                    iVar3 = iVar3 - 1;
                                } while (1 < iVar3);
                            }
                            if (0 < iVar7) {
                                iVar7 = iVar7 + 1;
                                do {
                                    FlatRaster((SharedArray<unsigned int>*)this, iVar5, iVar12, arg7, (int)uVar6,
                                               iVar14 >> 14);
                                    iVar14 = iVar14 + iVar13;
                                    iVar12 = iVar12 + field_104;
                                    iVar7 = iVar7 - 1;
                                } while (1 < iVar7);
                            }
                        }
                    } else {
                        iVar14 = iVar15 - (iVar11 * arg2 & uVar8);
                        iVar15 = iVar15 - (uVar8 & uVar4);
                        iVar12 = arg4 * 16384 - (arg1 >> 31 & arg1 * iVar1);
                        uVar4 = 0;
                        if (-1 < arg1) {
                            uVar4 = arg1;
                        }
                        iVar7 = arg3 - uVar4;
                        iVar10 = uVar4 - uVar9;
                        piVar2 = (int*)field_56[(unsigned long)uVar9];
                        iVar5 = iVar5 + 120;
                        iVar3 = *piVar2;
                        if (iVar13 < iVar11) {
                            if (0 < iVar10) {
                                iVar10 = iVar10 + 1;
                                do {
                                    FlatRaster((SharedArray<unsigned int>*)this, iVar5, iVar3, arg7, (int)uVar6,
                                               iVar15 >> 14);
                                    iVar15 = iVar15 + iVar13;
                                    iVar3 = iVar3 + field_104;
                                    iVar10 = iVar10 - 1;
                                } while (1 < iVar10);
                            }
                            if (0 < iVar7) {
                                iVar7 = iVar7 + 1;
                                do {
                                    FlatRaster((SharedArray<unsigned int>*)this, iVar5, iVar3, arg7, (int)uVar6,
                                               iVar12 >> 14);
                                    iVar12 = iVar12 + iVar1;
                                    iVar3 = iVar3 + field_104;
                                    iVar7 = iVar7 - 1;
                                } while (1 < iVar7);
                            }
                        } else {
                            if (0 < iVar10) {
                                iVar10 = iVar10 + 1;
                                do {
                                    FlatRaster((SharedArray<unsigned int>*)this, iVar5, iVar3, arg7, (int)uVar6,
                                               iVar14 >> 14);
                                    iVar14 = iVar14 + iVar11;
                                    iVar3 = iVar3 + field_104;
                                    iVar10 = iVar10 - 1;
                                } while (1 < iVar10);
                            }
                            if (0 < iVar7) {
                                iVar7 = iVar7 + 1;
                                do {
                                    FlatRaster((SharedArray<unsigned int>*)this, iVar5, iVar3, arg7, (int)uVar6,
                                               iVar14 >> 14);
                                    iVar14 = iVar14 + iVar11;
                                    iVar3 = iVar3 + field_104;
                                    iVar7 = iVar7 - 1;
                                } while (1 < iVar7);
                            }
                        }
                    }
                }
            } else {
                uVar9 = field_32;
                if (arg1 < (int)uVar9) {
                    if ((int)uVar9 < arg2) {
                        arg2 = uVar9;
                    }
                    if ((int)uVar9 < arg3) {
                        arg3 = uVar9;
                    }
                    iVar14 = arg4 * 16384 - (iVar13 * arg1 & arg1 >> 31);
                    iVar15 = arg4 * 16384 - (arg1 >> 31 & iVar1 * arg1);
                    if (arg1 < 0) {
                        arg1 = 0;
                    }
                    if (arg2 < arg3) {
                        uVar9 = 0;
                        if (-1 < arg2) {
                            uVar9 = arg2;
                        }
                        iVar7 = arg5 * 16384 - (arg2 >> 31 & arg2 * iVar11);
                        iVar3 = arg3 - uVar9;
                        piVar2 = &field_56[(unsigned long)(unsigned int)arg1];
                        iVar5 = iVar5 + 120;
                        iVar12 = *piVar2;
                        iVar10 = uVar9 - arg1;
                        if ((iVar10 == 0) || (iVar13 <= iVar1)) {
                            if (0 < iVar10) {
                                iVar10 = iVar10 + 1;
                                do {
                                    FlatRaster((SharedArray<unsigned int>*)this, iVar5, iVar12, arg7, (int)uVar6,
                                               iVar14 >> 14);
                                    iVar14 = iVar14 + iVar13;
                                    iVar12 = iVar12 + field_104;
                                    iVar10 = iVar10 - 1;
                                } while (1 < iVar10);
                            }
                            if (0 < iVar3) {
                                iVar3 = iVar3 + 1;
                                do {
                                    FlatRaster((SharedArray<unsigned int>*)this, iVar5, iVar12, arg7, (int)uVar6,
                                               iVar7 >> 14);
                                    iVar7 = iVar7 + iVar11;
                                    iVar12 = iVar12 + field_104;
                                    iVar3 = iVar3 - 1;
                                } while (1 < iVar3);
                            }
                        } else {
                            if (0 < iVar10) {
                                iVar10 = iVar10 + 1;
                                do {
                                    FlatRaster((SharedArray<unsigned int>*)this, iVar5, iVar12, arg7, (int)uVar6,
                                               iVar15 >> 14);
                                    iVar15 = iVar15 + iVar1;
                                    iVar12 = iVar12 + field_104;
                                    iVar10 = iVar10 - 1;
                                } while (1 < iVar10);
                            }
                            if (0 < iVar3) {
                                iVar3 = iVar3 + 1;
                                do {
                                    FlatRaster((SharedArray<unsigned int>*)this, iVar5, iVar12, arg7, (int)uVar6,
                                               iVar15 >> 14);
                                    iVar15 = iVar15 + iVar1;
                                    iVar12 = iVar12 + field_104;
                                    iVar3 = iVar3 - 1;
                                } while (1 < iVar3);
                            }
                        }
                    } else {
                        uVar9 = 0;
                        if (-1 < arg3) {
                            uVar9 = arg3;
                        }
                        iVar12 = arg6 * 16384 - (arg3 >> 31 & arg3 * iVar11);
                        if (((uVar9 == arg1) || (iVar13 <= iVar1)) && ((uVar9 != arg1 || (iVar11 <= iVar13)))) {
                            piVar2 = &field_56[(unsigned long)(unsigned int)arg1];
                            iVar11 = *piVar2;
                            if (uVar9 - arg1 != 0 && arg1 <= (int)uVar9) {
                                iVar1 = (uVar9 - arg1) + 1;
                                do {
                                    FlatRaster((SharedArray<unsigned int>*)this, iVar5 + 120, iVar11, arg7, (int)uVar6,
                                               iVar14 >> 14);
                                    iVar14 = iVar14 + iVar13;
                                    iVar11 = iVar11 + field_104;
                                    iVar1 = iVar1 - 1;
                                } while (1 < iVar1);
                            }
                            if (0 < (int)(arg2 - uVar9)) {
                                iVar1 = (arg2 - uVar9) + 1;
                                do {
                                    FlatRaster((SharedArray<unsigned int>*)this, iVar5 + 120, iVar11, arg7, (int)uVar6,
                                               iVar14 >> 14);
                                    iVar14 = iVar14 + iVar13;
                                    iVar11 = iVar11 + field_104;
                                    iVar1 = iVar1 - 1;
                                } while (1 < iVar1);
                            }
                        } else {
                            piVar2 = &field_56[(unsigned long)(unsigned int)arg1];
                            iVar13 = *piVar2;
                            if (uVar9 - arg1 != 0 && arg1 <= (int)uVar9) {
                                iVar14 = (uVar9 - arg1) + 1;
                                do {
                                    FlatRaster((SharedArray<unsigned int>*)this, iVar5 + 120, iVar13, arg7, (int)uVar6,
                                               iVar15 >> 14);
                                    iVar15 = iVar15 + iVar1;
                                    iVar13 = iVar13 + field_104;
                                    iVar14 = iVar14 - 1;
                                } while (1 < iVar14);
                            }
                            if (0 < (int)(arg2 - uVar9)) {
                                iVar1 = (arg2 - uVar9) + 1;
                                do {
                                    FlatRaster((SharedArray<unsigned int>*)this, iVar5 + 120, iVar13, arg7, (int)uVar6,
                                               iVar12 >> 14);
                                    iVar12 = iVar12 + iVar11;
                                    iVar13 = iVar13 + field_104;
                                    iVar1 = iVar1 - 1;
                                } while (1 < iVar1);
                            }
                        }
                    }
                }
            }
        }
    }

    // 0x1002f9a30
    void SoftwarePix3D::GouraudTriangle(int arg1, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7, int arg8,
                                        int arg9) {
        uint8_t* puVar1;
        unsigned int uVar2;
        unsigned int uVar3;
        int* piVar4;
        int iVar5;
        unsigned int uVar6;
        uint8_t* puVar7;
        unsigned long uVar8;
        int iVar9;
        int iVar10;
        unsigned int uVar11;
        int iVar12;
        int iVar13;
        unsigned int uVar14;
        int iVar16;
        int iVar17;
        int iVar18;
        int iVar19;
        int local_7c;
        int local_5c;

        unsigned long uVar15 = (unsigned long)(unsigned int)arg4;
        if (field_12 < 256) {
            uVar11 = 0;
            uVar2 = 0;
            if (arg3 - arg2 != 0) {
                uVar2 = ((arg6 - arg5) * 16384) / (arg3 - arg2);
            }
            iVar13 = arg5 - arg4;
            iVar17 = arg2 - arg1;
            if (iVar17 != 0) {
                uVar11 = (iVar13 * 16384) / iVar17;
            }
            iVar16 = arg6 - arg4;
            uVar3 = 0;
            iVar5 = arg3 - arg1;
            if (iVar5 != 0) {
                uVar3 = (iVar16 * 16384) / iVar5;
            }
            iVar9 = iVar13 * iVar5 - iVar16 * iVar17;
            if (iVar9 != 0) {
                iVar17 = ((iVar5 * (arg8 - arg7) - iVar17 * (arg9 - arg7)) * 256) / iVar9;
                iVar9 = (((arg9 - arg7) * iVar13 - (arg8 - arg7) * iVar16) * 256) / iVar9;
                if ((arg2 < arg1) || (arg3 < arg1)) {
                    uVar6 = field_32;
                    if (arg3 < arg2) {
                        if (arg3 < (int)uVar6) {
                            if ((int)uVar6 < arg1) {
                                arg1 = uVar6;
                            }
                            if ((int)uVar6 < arg2) {
                                arg2 = uVar6;
                            }
                            iVar13 = (arg9 * 256 - iVar17 * arg6) + iVar17;
                            local_5c = arg6 * 16384;
                            if (arg1 < arg2) {
                                if (arg3 < 0) {
                                    iVar5 = local_5c - uVar2 * arg3;
                                    local_5c = local_5c - uVar3 * arg3;
                                    iVar13 = iVar13 - arg3 * iVar9;
                                    arg3 = 0;
                                } else {
                                    iVar5 = local_5c;
                                }
                                uVar14 = arg4 * 16384 - (arg1 >> 31 & arg1 * uVar11);
                                uVar15 = (unsigned long)uVar14;
                                uVar6 = 0;
                                if (-1 < arg1) {
                                    uVar6 = arg1;
                                }
                                iVar19 = arg2 - uVar6;
                                iVar12 = uVar6 - arg3;
                                piVar4 = &field_56[(long)arg3];
                                puVar1 = &field_120;
                                iVar16 = *piVar4;
                                if ((int)uVar2 < (int)uVar3) {
                                    if (0 < iVar12) {
                                        iVar12 = iVar12 + 1;
                                        do {
                                            GouraudRaster(*puVar1, iVar16, iVar17, (int)uVar15, iVar5 >> 14,
                                                          local_5c >> 14, iVar13, iVar17);
                                            iVar5 = iVar5 + uVar2;
                                            local_5c = local_5c + uVar3;
                                            iVar13 = iVar13 + iVar9;
                                            iVar16 = iVar16 + field_104;
                                            iVar12 = iVar12 - 1;
                                        } while (1 < iVar12);
                                    }
                                    if (0 < iVar19) {
                                        iVar19 = iVar19 + 1;
                                        do {
                                            GouraudRaster(*puVar1, iVar16, iVar17, (int)uVar15, iVar5 >> 14,
                                                          (int)uVar14 >> 14, iVar13, iVar17);
                                            iVar5 = iVar5 + uVar2;
                                            uVar14 = uVar14 + uVar11;
                                            iVar13 = iVar13 + iVar9;
                                            iVar16 = iVar16 + field_104;
                                            iVar19 = iVar19 - 1;
                                        } while (1 < iVar19);
                                    }
                                } else {
                                    if (0 < iVar12) {
                                        iVar12 = iVar12 + 1;
                                        do {
                                            GouraudRaster(*puVar1, iVar16, iVar17, (int)uVar15, local_5c >> 14,
                                                          iVar5 >> 14, iVar13, iVar17);
                                            iVar5 = iVar5 + uVar2;
                                            local_5c = local_5c + uVar3;
                                            iVar13 = iVar13 + iVar9;
                                            iVar16 = iVar16 + field_104;
                                            iVar12 = iVar12 - 1;
                                        } while (1 < iVar12);
                                    }
                                    if (0 < iVar19) {
                                        iVar19 = iVar19 + 1;
                                        do {
                                            GouraudRaster(*puVar1, iVar16, iVar17, (int)uVar15, (int)uVar14 >> 14,
                                                          iVar5 >> 14, iVar13, iVar17);
                                            iVar5 = iVar5 + uVar2;
                                            uVar14 = uVar14 + uVar11;
                                            iVar13 = iVar13 + iVar9;
                                            iVar16 = iVar16 + field_104;
                                            iVar19 = iVar19 - 1;
                                        } while (1 < iVar19);
                                    }
                                }
                            } else {
                                if (arg3 < 0) {
                                    local_7c = local_5c - uVar2 * arg3;
                                    local_5c = local_5c - uVar3 * arg3;
                                    iVar13 = iVar13 - arg3 * iVar9;
                                    arg3 = 0;
                                } else {
                                    local_7c = local_5c;
                                }
                                uVar6 = arg2 >> 31 & arg2 * uVar11;
                                uVar8 = (unsigned long)uVar6;
                                iVar5 = arg5 * 16384 - uVar6;
                                uVar6 = 0;
                                if (-1 < arg2) {
                                    uVar6 = arg2;
                                }
                                iVar12 = arg1 - uVar6;
                                iVar19 = uVar6 - arg3;
                                piVar4 = &field_56[(long)arg3];
                                puVar1 = &field_120;
                                iVar16 = *piVar4;
                                if ((int)uVar2 < (int)uVar3) {
                                    if (0 < iVar19) {
                                        iVar19 = iVar19 + 1;
                                        do {
                                            GouraudRaster(*puVar1, iVar16, (int)uVar8, iVar17, local_7c >> 14,
                                                          local_5c >> 14, iVar13, iVar17);
                                            local_7c = local_7c + uVar2;
                                            local_5c = local_5c + uVar3;
                                            iVar13 = iVar13 + iVar9;
                                            iVar16 = iVar16 + field_104;
                                            iVar19 = iVar19 - 1;
                                        } while (1 < iVar19);
                                    }
                                    if (0 < iVar12) {
                                        iVar12 = iVar12 + 1;
                                        do {
                                            GouraudRaster(*puVar1, iVar16, (int)uVar8, iVar17, iVar5 >> 14,
                                                          local_5c >> 14, iVar13, iVar17);
                                            uVar8 = (unsigned long)uVar11;
                                            iVar5 = iVar5 + uVar11;
                                            local_5c = local_5c + uVar3;
                                            iVar13 = iVar13 + iVar9;
                                            iVar16 = iVar16 + field_104;
                                            iVar12 = iVar12 - 1;
                                        } while (1 < iVar12);
                                    }
                                } else {
                                    if (0 < iVar19) {
                                        iVar19 = iVar19 + 1;
                                        do {
                                            GouraudRaster(*puVar1, iVar16, iVar17, (int)uVar15, local_5c >> 14,
                                                          local_7c >> 14, iVar13, iVar17);
                                            local_7c = local_7c + uVar2;
                                            local_5c = local_5c + uVar3;
                                            iVar13 = iVar13 + iVar9;
                                            iVar16 = iVar16 + field_104;
                                            iVar19 = iVar19 - 1;
                                        } while (1 < iVar19);
                                    }
                                    if (0 < iVar12) {
                                        iVar12 = iVar12 + 1;
                                        do {
                                            GouraudRaster(*puVar1, iVar16, iVar17, (int)uVar15, local_5c >> 14,
                                                          iVar5 >> 14, iVar13, iVar17);
                                            iVar5 = iVar5 + uVar11;
                                            local_5c = local_5c + uVar3;
                                            iVar13 = iVar13 + iVar9;
                                            iVar16 = iVar16 + field_104;
                                            iVar12 = iVar12 - 1;
                                        } while (1 < iVar12);
                                    }
                                }
                            }
                        }
                    } else if (arg2 < (int)uVar6) {
                        if ((int)uVar6 < arg3) {
                            arg3 = uVar6;
                        }
                        if ((int)uVar6 < arg1) {
                            arg1 = uVar6;
                        }
                        iVar5 = (arg8 * 256 - iVar17 * arg5) + iVar17;
                        iVar13 = arg5 * 16384;
                        if (arg3 < arg1) {
                            if (arg2 < 0) {
                                iVar16 = iVar13 - uVar11 * arg2;
                                iVar13 = iVar13 - uVar2 * arg2;
                                iVar5 = iVar5 - arg2 * iVar9;
                                arg2 = 0;
                            } else {
                                iVar16 = iVar13;
                            }
                            iVar12 = arg6 * 16384 - (arg3 >> 31 & arg3 * uVar3);
                            uVar6 = 0;
                            if (-1 < arg3) {
                                uVar6 = arg3;
                            }
                            iVar10 = arg1 - uVar6;
                            piVar4 = (int*)field_56[(long)arg2];
                            puVar1 = &field_120;
                            iVar19 = *piVar4;
                            iVar18 = uVar6 - arg2;
                            if ((iVar18 == 0) || ((int)uVar2 <= (int)uVar11)) {
                                puVar7 = puVar1;
                                if (0 < iVar18) {
                                    iVar18 = iVar18 + 1;
                                    do {
                                        GouraudRaster(*puVar1, iVar19, (int)puVar7, iVar17, iVar13 >> 14, iVar16 >> 14,
                                                      iVar5, iVar17);
                                        iVar16 = iVar16 + uVar11;
                                        iVar13 = iVar13 + uVar2;
                                        iVar5 = iVar5 + iVar9;
                                        iVar19 = iVar19 + field_104;
                                        iVar18 = iVar18 - 1;
                                    } while (1 < iVar18);
                                }
                                if (0 < iVar10) {
                                    iVar10 = iVar10 + 1;
                                    do {
                                        GouraudRaster(*puVar1, iVar19, (int)puVar7, iVar17, iVar12 >> 14, iVar16 >> 14,
                                                      iVar5, iVar17);
                                        puVar7 = (uint8_t*)(unsigned long)uVar3;
                                        iVar16 = iVar16 + uVar11;
                                        iVar12 = iVar12 + uVar3;
                                        iVar5 = iVar5 + iVar9;
                                        iVar19 = iVar19 + field_104;
                                        iVar10 = iVar10 - 1;
                                    } while (1 < iVar10);
                                }
                            } else {
                                puVar7 = puVar1;
                                if (0 < iVar18) {
                                    iVar18 = iVar18 + 1;
                                    do {
                                        GouraudRaster(*puVar1, iVar19, (int)puVar7, iVar17, iVar16 >> 14, iVar13 >> 14,
                                                      iVar5, iVar17);
                                        iVar16 = iVar16 + uVar11;
                                        iVar13 = iVar13 + uVar2;
                                        iVar5 = iVar5 + iVar9;
                                        iVar19 = iVar19 + field_104;
                                        iVar18 = iVar18 - 1;
                                    } while (1 < iVar18);
                                }
                                if (0 < iVar10) {
                                    iVar10 = iVar10 + 1;
                                    do {
                                        GouraudRaster(*puVar1, iVar19, (int)puVar7, iVar17, iVar16 >> 14, iVar12 >> 14,
                                                      iVar5, iVar17);
                                        puVar7 = (uint8_t*)(unsigned long)uVar3;
                                        iVar16 = iVar16 + uVar11;
                                        iVar12 = iVar12 + uVar3;
                                        iVar5 = iVar5 + iVar9;
                                        iVar19 = iVar19 + field_104;
                                        iVar10 = iVar10 - 1;
                                    } while (1 < iVar10);
                                }
                            }
                        } else {
                            if (arg2 < 0) {
                                iVar16 = iVar13 - uVar11 * arg2;
                                iVar13 = iVar13 - uVar2 * arg2;
                                iVar5 = iVar5 - arg2 * iVar9;
                                arg2 = 0;
                            } else {
                                iVar16 = iVar13;
                            }
                            iVar12 = arg4 * 16384 - (arg1 >> 31 & arg1 * uVar3);
                            uVar6 = 0;
                            if (-1 < arg1) {
                                uVar6 = arg1;
                            }
                            iVar19 = arg3 - uVar6;
                            iVar18 = uVar6 - arg2;
                            piVar4 = (int*)field_56[(long)arg2];
                            puVar1 = &field_120;
                            iVar10 = *piVar4;
                            if ((int)uVar11 < (int)uVar2) {
                                puVar7 = puVar1;
                                if (0 < iVar18) {
                                    iVar18 = iVar18 + 1;
                                    do {
                                        GouraudRaster(*puVar1, iVar10, (int)puVar7, iVar17, iVar16 >> 14, iVar13 >> 14,
                                                      iVar5, iVar17);
                                        iVar16 = iVar16 + uVar11;
                                        iVar13 = iVar13 + uVar2;
                                        iVar5 = iVar5 + iVar9;
                                        iVar10 = iVar10 + field_104;
                                        iVar18 = iVar18 - 1;
                                    } while (1 < iVar18);
                                }
                                if (0 < iVar19) {
                                    iVar19 = iVar19 + 1;
                                    do {
                                        GouraudRaster(*puVar1, iVar10, (int)puVar7, iVar17, iVar12 >> 14, iVar13 >> 14,
                                                      iVar5, iVar17);
                                        puVar7 = (uint8_t*)(unsigned long)uVar3;
                                        iVar12 = iVar12 + uVar3;
                                        iVar13 = iVar13 + uVar2;
                                        iVar5 = iVar5 + iVar9;
                                        iVar10 = iVar10 + field_104;
                                        iVar19 = iVar19 - 1;
                                    } while (1 < iVar19);
                                }
                            } else {
                                puVar7 = puVar1;
                                if (0 < iVar18) {
                                    iVar18 = iVar18 + 1;
                                    do {
                                        GouraudRaster(*puVar1, iVar10, (int)puVar7, iVar17, iVar13 >> 14, iVar16 >> 14,
                                                      iVar5, iVar17);
                                        puVar7 = (uint8_t*)(unsigned long)uVar2;
                                        iVar16 = iVar16 + uVar11;
                                        iVar13 = iVar13 + uVar2;
                                        iVar5 = iVar5 + iVar9;
                                        iVar10 = iVar10 + field_104;
                                        iVar18 = iVar18 - 1;
                                    } while (1 < iVar18);
                                }
                                if (0 < iVar19) {
                                    iVar19 = iVar19 + 1;
                                    do {
                                        GouraudRaster(*puVar1, iVar10, (int)puVar7, iVar17, iVar13 >> 14, iVar12 >> 14,
                                                      iVar5, iVar17);
                                        puVar7 = (uint8_t*)(unsigned long)uVar2;
                                        iVar12 = iVar12 + uVar3;
                                        iVar13 = iVar13 + uVar2;
                                        iVar5 = iVar5 + iVar9;
                                        iVar10 = iVar10 + field_104;
                                        iVar19 = iVar19 - 1;
                                    } while (1 < iVar19);
                                }
                            }
                        }
                    }
                } else {
                    uVar6 = field_32;
                    if (arg1 < (int)uVar6) {
                        if ((int)uVar6 < arg2) {
                            arg2 = uVar6;
                        }
                        if ((int)uVar6 < arg3) {
                            arg3 = uVar6;
                        }
                        iVar5 = (arg7 * 256 - iVar17 * arg4) + iVar17;
                        iVar13 = arg4 * 16384;
                        if (arg2 < arg3) {
                            if (arg1 < 0) {
                                iVar16 = iVar13 - uVar3 * arg1;
                                iVar13 = iVar13 - uVar11 * arg1;
                                iVar5 = iVar5 - arg1 * iVar9;
                                arg1 = 0;
                            } else {
                                iVar16 = iVar13;
                            }
                            iVar12 = arg5 * 16384 - (arg2 >> 31 & arg2 * uVar2);
                            uVar6 = 0;
                            if (-1 < arg2) {
                                uVar6 = arg2;
                            }
                            iVar19 = arg3 - uVar6;
                            piVar4 = (int*)field_56[(long)arg1];
                            puVar1 = &field_120;
                            iVar10 = *piVar4;
                            iVar18 = uVar6 - arg1;
                            if ((iVar18 == 0) || ((int)uVar11 <= (int)uVar3)) {
                                if (0 < iVar18) {
                                    iVar18 = iVar18 + 1;
                                    puVar7 = puVar1;
                                    do {
                                        GouraudRaster(*puVar1, iVar10, (int)puVar7, iVar17, iVar13 >> 14, iVar16 >> 14,
                                                      iVar5, iVar17);
                                        iVar16 = iVar16 + uVar3;
                                        iVar13 = iVar13 + uVar11;
                                        iVar5 = iVar5 + iVar9;
                                        iVar10 = iVar10 + field_104;
                                        iVar18 = iVar18 - 1;
                                    } while (1 < iVar18);
                                }
                                if (0 < iVar19) {
                                    iVar19 = iVar19 + 1;
                                    do {
                                        GouraudRaster(*puVar1, iVar10, iVar12, iVar17, iVar12 >> 14, iVar16 >> 14,
                                                      iVar5, iVar17);
                                        iVar16 = iVar16 + uVar3;
                                        iVar12 = iVar12 + uVar2;
                                        iVar5 = iVar5 + iVar9;
                                        iVar10 = iVar10 + field_104;
                                        iVar19 = iVar19 - 1;
                                    } while (1 < iVar19);
                                }
                            } else {
                                if (0 < iVar18) {
                                    iVar18 = iVar18 + 1;
                                    puVar7 = puVar1;
                                    do {
                                        GouraudRaster(*puVar1, iVar10, (int)puVar7, iVar17, iVar16 >> 14, iVar13 >> 14,
                                                      iVar5, iVar17);
                                        iVar16 = iVar16 + uVar3;
                                        iVar13 = iVar13 + uVar11;
                                        iVar5 = iVar5 + iVar9;
                                        iVar10 = iVar10 + field_104;
                                        iVar18 = iVar18 - 1;
                                    } while (1 < iVar18);
                                }
                                if (0 < iVar19) {
                                    iVar19 = iVar19 + 1;
                                    do {
                                        GouraudRaster(*puVar1, iVar10, iVar12, iVar17, iVar16 >> 14, iVar12 >> 14,
                                                      iVar5, iVar17);
                                        iVar16 = iVar16 + uVar3;
                                        iVar12 = iVar12 + uVar2;
                                        iVar5 = iVar5 + iVar9;
                                        iVar10 = iVar10 + field_104;
                                        iVar19 = iVar19 - 1;
                                    } while (1 < iVar19);
                                }
                            }
                        } else {
                            uVar15 = (unsigned long)uVar3;
                            if (arg1 < 0) {
                                iVar16 = iVar13 - uVar3 * arg1;
                                iVar13 = iVar13 - uVar11 * arg1;
                                iVar5 = iVar5 - arg1 * iVar9;
                                arg1 = 0;
                            } else {
                                iVar16 = iVar13;
                            }
                            iVar12 = arg6 * 16384 - (arg3 >> 31 & arg3 * uVar2);
                            uVar6 = 0;
                            if (-1 < arg3) {
                                uVar6 = arg3;
                            }
                            if (((uVar6 == arg1) || ((int)uVar11 <= (int)uVar3)) &&
                                ((uVar6 != arg1 || ((int)uVar2 <= (int)uVar11)))) {
                                piVar4 = &field_56[(long)arg1];
                                iVar19 = *piVar4;
                                if (uVar6 - arg1 != 0 && arg1 <= (int)uVar6) {
                                    iVar10 = (uVar6 - arg1) + 1;
                                    do {
                                        GouraudRaster(field_120, iVar19, iVar17, (int)uVar15, iVar13 >> 14,
                                                      iVar16 >> 14, iVar5, iVar17);
                                        iVar16 = iVar16 + uVar3;
                                        iVar13 = iVar13 + uVar11;
                                        iVar5 = iVar5 + iVar9;
                                        iVar19 = iVar19 + field_104;
                                        iVar10 = iVar10 - 1;
                                    } while (1 < iVar10);
                                }
                                if (0 < (int)(arg2 - uVar6)) {
                                    iVar16 = (arg2 - uVar6) + 1;
                                    do {
                                        GouraudRaster(field_120, iVar19, iVar17, (int)uVar15, iVar13 >> 14,
                                                      iVar12 >> 14, iVar5, iVar17);
                                        iVar12 = iVar12 + uVar2;
                                        iVar13 = iVar13 + uVar11;
                                        iVar5 = iVar5 + iVar9;
                                        iVar19 = iVar19 + field_104;
                                        iVar16 = iVar16 - 1;
                                    } while (1 < iVar16);
                                }
                            } else {
                                piVar4 = &field_56[(long)arg1];
                                iVar19 = *piVar4;
                                if (uVar6 - arg1 != 0 && arg1 <= (int)uVar6) {
                                    iVar10 = (uVar6 - arg1) + 1;
                                    do {
                                        GouraudRaster(field_120, iVar19, iVar17, (int)uVar15, iVar16 >> 14,
                                                      iVar13 >> 14, iVar5, iVar17);
                                        iVar16 = iVar16 + uVar3;
                                        iVar13 = iVar13 + uVar11;
                                        iVar5 = iVar5 + iVar9;
                                        iVar19 = iVar19 + field_104;
                                        iVar10 = iVar10 - 1;
                                    } while (1 < iVar10);
                                }
                                if (0 < (int)(arg2 - uVar6)) {
                                    iVar16 = (arg2 - uVar6) + 1;
                                    do {
                                        GouraudRaster(field_120, iVar19, iVar17, (int)uVar15, iVar12 >> 14,
                                                      iVar13 >> 14, iVar5, iVar17);
                                        iVar12 = iVar12 + uVar2;
                                        iVar13 = iVar13 + uVar11;
                                        iVar5 = iVar5 + iVar9;
                                        iVar19 = iVar19 + field_104;
                                        iVar16 = iVar16 - 1;
                                    } while (1 < iVar16);
                                }
                            }
                        }
                    }
                }
            }
        }
    }

    // 0x1002fa990
    void SoftwarePix3D::SetDest(SharedArray<unsigned int>& sharedArray, int arg2, int arg3) {
        field_120.ref_assign(sharedArray);
        field_104 = arg2;
        field_108 = arg3;
        SetClipping(0, 0, arg2, arg3);
        SetRenderClipping();
    }

    // 0x1002fa9e0
    void SoftwarePix3D::GouraudRaster(SharedArray<unsigned int>& sharedArray, int arg2, int arg3, int arg4, int arg5,
                                      int arg6, int arg7, int arg8) {
        SharedArray<unsigned int>* pSVar1;
        unsigned int uVar2;
        unsigned int arg3_00;
        uint32_t uVar3;
        uint32_t* puVar4;
        unsigned int* puVar5;
        unsigned int arg2_00;
        int iVar6;
        SharedArray<unsigned int>* pSVar7;
        unsigned long uVar8;
        SharedArray<unsigned int>* pSVar9;
        int iVar11;
        unsigned int uVar12;
        unsigned long local_40;

        if (field_8[0] != '\0') {
            if (field_28 < arg6) {
                arg6 = field_28;
            }
            if (arg5 < 0) {
                arg5 = 0;
            }
        }
        unsigned int uVar10 = arg6 - arg5;
        if (uVar10 != 0 && arg5 <= arg6) {
            uVar2 = arg2 + arg5;
            local_40 = (unsigned long)uVar2;
            uVar12 = arg5 * arg8 + arg7;
            if (field_11 == '\0') {
                iVar6 = field_12;
                if (iVar6 < 2) {
                    iVar6 = uVar10 + 1;
                    pSVar7 = (SharedArray<unsigned int>*)(long)(int)uVar2;
                    pSVar9 = sharedArray;
                    do {
                        puVar4 = (uint32_t*)(*(
                            (array<int, 65536ul>*)(long)((int)(4294967295U - ((int)uVar12 >> 31) & uVar12) >>
                                                         8)))[(unsigned long)pSVar9];
                        uVar3 = *puVar4;
                        pSVar9 = pSVar7;
                        puVar4 = &sharedArray[(unsigned long)pSVar7];
                        *puVar4 = uVar3;
                        uVar12 = uVar12 + arg8;
                        iVar6 = iVar6 - 1;
                        pSVar7 = pSVar7 + 1;
                    } while (1 < iVar6);
                } else {
                    iVar11 = uVar10 + 1;
                    pSVar7 = sharedArray;
                    pSVar9 = (SharedArray<unsigned int>*)(long)(int)uVar2;
                    do {
                        puVar5 = (unsigned int*)(*(
                            (array<int, 65536ul>*)(long)((int)(4294967295U - ((int)uVar12 >> 31) & uVar12) >>
                                                         8)))[(unsigned long)pSVar7];
                        uVar12 = uVar12 + arg8;
                        uVar10 = graphics::ComputeCompositeRGB(*puVar5, 256U - iVar6);
                        puVar5 = &sharedArray[(unsigned long)pSVar9];
                        uVar3 = graphics::BlendPixel(uVar10, 256U - iVar6, iVar6 - 1, *puVar5);
                        pSVar1 = pSVar9 + 1;
                        puVar4 = &sharedArray[(unsigned long)pSVar9];
                        *puVar4 = uVar3;
                        iVar11 = iVar11 - 1;
                        pSVar7 = pSVar9;
                        pSVar9 = pSVar1;
                    } while (1 < iVar11);
                }
            } else {
                iVar6 = field_12;
                if (iVar6 < 2) {
                    pSVar7 = sharedArray;
                    if (3 < (int)uVar10) {
                        local_40 = (unsigned long)(int)uVar2;
                        iVar6 = ((int)uVar10 >> 2) + 1;
                        do {
                            puVar4 = (uint32_t*)(*(
                                (array<int, 65536ul>*)(long)((int)(4294967295U - ((int)uVar12 >> 31) & uVar12) >>
                                                             8)))[(unsigned long)pSVar7];
                            uVar3 = *puVar4;
                            uVar12 = uVar12 + arg8 * 4;
                            puVar4 = &sharedArray[local_40];
                            *puVar4 = uVar3;
                            puVar4 = &sharedArray[local_40 + 1];
                            *puVar4 = uVar3;
                            pSVar7 = (SharedArray<unsigned int>*)(local_40 + 3);
                            puVar4 = &sharedArray[local_40 + 2];
                            *puVar4 = uVar3;
                            local_40 = local_40 + 4;
                            puVar4 = &sharedArray[(unsigned long)pSVar7];
                            *puVar4 = uVar3;
                            iVar6 = iVar6 - 1;
                        } while (1 < iVar6);
                    }
                    if ((uVar10 & 3) != 0) {
                        puVar4 = (uint32_t*)(*(
                            (array<int, 65536ul>*)(long)((int)(4294967295U - ((int)uVar12 >> 31) & uVar12) >>
                                                         8)))[(unsigned long)pSVar7];
                        uVar3 = *puVar4;
                        iVar6 = (uVar10 & 3) + 1;
                        uVar8 = (long)(int)local_40;
                        do {
                            puVar4 = &sharedArray[uVar8];
                            *puVar4 = uVar3;
                            iVar6 = iVar6 - 1;
                            uVar8 = uVar8 + 1;
                        } while (1 < iVar6);
                    }
                } else {
                    arg2_00 = 256 - iVar6;
                    arg3_00 = iVar6 - 1;
                    pSVar7 = sharedArray;
                    if (3 < (int)uVar10) {
                        local_40 = (unsigned long)(int)uVar2;
                        iVar6 = ((int)uVar10 >> 2) + 1;
                        do {
                            puVar5 = (unsigned int*)(*(
                                (array<int, 65536ul>*)(long)((int)(4294967295U - ((int)uVar12 >> 31) & uVar12) >>
                                                             8)))[(unsigned long)pSVar7];
                            uVar12 = uVar12 + arg8 * 4;
                            uVar2 = graphics::ComputeCompositeRGB(*puVar5, arg2_00);
                            puVar5 = &sharedArray[local_40];
                            uVar3 = graphics::BlendPixel(uVar2, arg2_00, arg3_00, *puVar5);
                            puVar4 = &sharedArray[local_40];
                            *puVar4 = uVar3;
                            puVar5 = &sharedArray[local_40 + 1];
                            uVar3 = graphics::BlendPixel(uVar2, arg2_00, arg3_00, *puVar5);
                            puVar4 = &sharedArray[local_40 + 1];
                            *puVar4 = uVar3;
                            puVar5 = &sharedArray[local_40 + 2];
                            uVar3 = graphics::BlendPixel(uVar2, arg2_00, arg3_00, *puVar5);
                            pSVar7 = (SharedArray<unsigned int>*)(local_40 + 3);
                            puVar4 = &sharedArray[local_40 + 2];
                            *puVar4 = uVar3;
                            puVar5 = &sharedArray[(unsigned long)pSVar7];
                            uVar3 = graphics::BlendPixel(uVar2, arg2_00, arg3_00, *puVar5);
                            local_40 = local_40 + 4;
                            puVar4 = &sharedArray[(unsigned long)pSVar7];
                            *puVar4 = uVar3;
                            iVar6 = iVar6 - 1;
                        } while (1 < iVar6);
                    }
                    if ((uVar10 & 3) != 0) {
                        puVar5 = (unsigned int*)(*(
                            (array<int, 65536ul>*)(long)((int)(4294967295U - ((int)uVar12 >> 31) & uVar12) >>
                                                         8)))[(unsigned long)pSVar7];
                        uVar2 = graphics::ComputeCompositeRGB(*puVar5, arg2_00);
                        iVar6 = (uVar10 & 3) + 1;
                        uVar8 = (long)(int)local_40;
                        do {
                            puVar5 = &sharedArray[uVar8];
                            uVar3 = graphics::BlendPixel(uVar2, arg2_00, arg3_00, *puVar5);
                            puVar4 = &sharedArray[uVar8];
                            *puVar4 = uVar3;
                            iVar6 = iVar6 - 1;
                            uVar8 = uVar8 + 1;
                        } while (1 < iVar6);
                    }
                }
            }
        }
    }

    // 0x1002fae80
    void SoftwarePix3D::FlatRaster(SharedArray<unsigned int>& sharedArray, int arg2, int arg3, int arg4, int arg5,
                                   int arg6) {
        unsigned long uVar1;
        unsigned int arg1;
        uint32_t uVar3;
        int* piVar4;
        uint32_t* puVar5;
        unsigned int* puVar6;
        int iVar7;
        unsigned int arg2_00;
        uint32_t in_register_00000034;
        unsigned int arg3_00;
        int iVar8;
        unsigned int uVar9;
        unsigned long uVar10;
        int in_stack_00000008;

        SharedArray<unsigned int> sharedArray =
            (SharedArray<unsigned int>*)(((uint64_t)in_register_00000034 << 32) | (uint32_t)arg2);
        if (sharedArray[8] != (SharedArray<unsigned int>)0) {
            if (*(int*)(sharedArray + 28) < in_stack_00000008) {
                in_stack_00000008 = *(int*)(sharedArray + 28);
            }
            if (arg6 < 0) {
                arg6 = 0;
            }
        }
        unsigned int uVar2 = in_stack_00000008 - arg6;
        if (uVar2 != 0 && arg6 <= in_stack_00000008) {
            uVar9 = arg6 + arg3;
            uVar10 = (unsigned long)uVar9;
            iVar8 = (int)uVar2 >> 2;
            iVar7 = *(int*)(sharedArray + 12);
            if (iVar7 < 2) {
                if (3 < (int)uVar2) {
                    uVar10 = (unsigned long)(int)uVar9;
                    iVar8 = iVar8 + 1;
                    do {
                        piVar4 = &sharedArray[uVar10];
                        *piVar4 = arg4;
                        piVar4 = &sharedArray[uVar10 + 1];
                        *piVar4 = arg4;
                        uVar1 = uVar10 + 3;
                        piVar4 = &sharedArray[uVar10 + 2];
                        *piVar4 = arg4;
                        uVar10 = uVar10 + 4;
                        piVar4 = &sharedArray[uVar1];
                        *piVar4 = arg4;
                        iVar8 = iVar8 - 1;
                    } while (1 < iVar8);
                }
                if ((uVar2 & 3) != 0) {
                    iVar7 = (uVar2 & 3) + 1;
                    uVar10 = (long)(int)uVar10;
                    do {
                        piVar4 = &sharedArray[uVar10];
                        *piVar4 = arg4;
                        iVar7 = iVar7 - 1;
                        uVar10 = uVar10 + 1;
                    } while (1 < iVar7);
                }
            } else if (iVar7 == 254) {
                if (3 < (int)uVar2) {
                    uVar10 = (unsigned long)(int)uVar9;
                    iVar8 = iVar8 + 1;
                    do {
                        puVar5 = &sharedArray[uVar10 + 1];
                        uVar3 = *puVar5;
                        puVar5 = &sharedArray[uVar10];
                        *puVar5 = uVar3;
                        puVar5 = &sharedArray[uVar10 + 2];
                        uVar3 = *puVar5;
                        puVar5 = &sharedArray[uVar10 + 1];
                        *puVar5 = uVar3;
                        uVar1 = uVar10 + 3;
                        puVar5 = &sharedArray[uVar1];
                        uVar3 = *puVar5;
                        puVar5 = &sharedArray[uVar10 + 2];
                        *puVar5 = uVar3;
                        uVar10 = uVar10 + 4;
                        puVar5 = &sharedArray[uVar10];
                        uVar3 = *puVar5;
                        puVar5 = &sharedArray[uVar1];
                        *puVar5 = uVar3;
                        iVar8 = iVar8 - 1;
                    } while (1 < iVar8);
                }
                if ((uVar2 & 3) != 0) {
                    iVar7 = (uVar2 & 3) + 1;
                    uVar10 = (long)(int)uVar10;
                    do {
                        puVar5 = &sharedArray[uVar10 + 1];
                        uVar3 = *puVar5;
                        puVar5 = &sharedArray[uVar10];
                        *puVar5 = uVar3;
                        iVar7 = iVar7 - 1;
                        uVar10 = uVar10 + 1;
                    } while (1 < iVar7);
                }
            } else {
                arg2_00 = 256 - iVar7;
                arg3_00 = iVar7 - 1;
                arg1 = graphics::ComputeCompositeRGB(arg4, arg2_00);
                if (3 < (int)uVar2) {
                    uVar10 = (unsigned long)(int)uVar9;
                    iVar8 = iVar8 + 1;
                    do {
                        puVar6 = &sharedArray[uVar10];
                        uVar3 = graphics::BlendPixel(arg1, arg2_00, arg3_00, *puVar6);
                        puVar5 = &sharedArray[uVar10];
                        *puVar5 = uVar3;
                        puVar6 = &sharedArray[uVar10 + 1];
                        uVar3 = graphics::BlendPixel(arg1, arg2_00, arg3_00, *puVar6);
                        puVar5 = &sharedArray[uVar10 + 1];
                        *puVar5 = uVar3;
                        puVar6 = &sharedArray[uVar10 + 2];
                        uVar3 = graphics::BlendPixel(arg1, arg2_00, arg3_00, *puVar6);
                        uVar1 = uVar10 + 3;
                        puVar5 = &sharedArray[uVar10 + 2];
                        *puVar5 = uVar3;
                        puVar6 = &sharedArray[uVar1];
                        uVar3 = graphics::BlendPixel(arg1, arg2_00, arg3_00, *puVar6);
                        uVar10 = uVar10 + 4;
                        puVar5 = &sharedArray[uVar1];
                        *puVar5 = uVar3;
                        iVar8 = iVar8 - 1;
                    } while (1 < iVar8);
                }
                if ((uVar2 & 3) != 0) {
                    iVar7 = (uVar2 & 3) + 1;
                    uVar10 = (long)(int)uVar10;
                    do {
                        puVar6 = &sharedArray[uVar10];
                        uVar3 = graphics::BlendPixel(arg1, arg2_00, arg3_00, *puVar6);
                        puVar5 = &sharedArray[uVar10];
                        *puVar5 = uVar3;
                        iVar7 = iVar7 - 1;
                        uVar10 = uVar10 + 1;
                    } while (1 < iVar7);
                }
            }
        }
    }

    // 0x1002fb220
    void SoftwarePix3D::TextureTriangle(int arg1, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7, int arg8,
                                        int arg9, int arg10, int arg11, int arg12, int arg13, int arg14, int arg15,
                                        int arg16, int arg17, int arg18, int arg19) {
        SoftwarePix3D* pSVar1;
        bool cVar3;
        uint8_t uVar4;
        int iVar5;
        int iVar6;
        int iVar7;
        uint32_t* puVar9;
        Array<unsigned int>* pAVar10;
        int* piVar11;
        int iVar12;
        unsigned int uVar13;
        int iVar14;
        unsigned int uVar15;
        int iVar16;
        int iVar17;
        int iVar18;
        int iVar19;
        unsigned int uVar20;
        int iVar21;
        shared_ptr<configdecoder::ObjType> local_c8;
        SharedArray<unsigned int>* local_b8;
        long local_b0;
        long local_a8;
        long local_a0;
        long local_98;
        long local_90;
        long local_88;
        SharedArray<unsigned int>* local_80;
        SharedArray<unsigned int>* local_78;
        int local_6c;
        int local_68;
        int local_64;
        int local_60;
        int local_5c;
        unsigned int local_50;
        unsigned int local_4c;
        int local_48;
        unsigned int local_40;

        unsigned int local_44 = arg5;
        unsigned int local_3c = arg2;
        unsigned int local_38 = arg1;
        unsigned int local_34 = arg3;
        ErrorCapture local_418(true);
        long* plVar8 = (long*)(*((shared_ptr<TextureProvider>*)&Pix3D::m_textureProvider)).operator->();
        (**(void (**)(...))(*plVar8 + 16))(&local_c8, plVar8, arg19, &local_418);
        bool bVar2 = local_c8 == nullptr;
        SoftwarePix3D* local_58 = this;
        if ((bVar2) || (cVar3 = local_418.IsRaised(), cVar3)) {
            plVar8 = (long*)(*((shared_ptr<TextureProvider>*)&Pix3D::m_textureProvider)).operator->();
            iVar5 = (**(void (**)(...))(*plVar8 + 24))(plVar8, arg19);
            iVar6 = Pix3D::TextureLightColour(iVar5, arg7);
            iVar7 = Pix3D::TextureLightColour(iVar5, arg8);
            iVar5 = Pix3D::TextureLightColour(iVar5, arg9);
            GouraudTriangle(local_58, local_38, local_3c, local_34, arg4, local_44, arg6, iVar6, iVar7, iVar5);
        } else {
            plVar8 = (long*)(*((shared_ptr<TextureProvider>*)&Pix3D::m_textureProvider)).operator->();
            uVar4 = (**(void (**)(...))(*plVar8 + 40))(plVar8, arg19);
            field_10 = uVar4;
            plVar8 = (long*)(*((shared_ptr<TextureProvider>*)&Pix3D::m_textureProvider)).operator->();
            uVar4 = (**(void (**)(...))(*plVar8 + 32))(plVar8, arg19);
            pSVar1 = local_58;
            field_9 = uVar4;
            iVar6 = local_44 - arg4;
            local_6c = 0;
            local_68 = 0;
            iVar5 = local_3c - local_38;
            if (iVar5 != 0) {
                local_68 = (iVar6 * 16384) / iVar5;
            }
            if (local_34 - local_3c != 0) {
                local_6c = (int)((arg6 - local_44) * 16384) / (int)(local_34 - local_3c);
            }
            local_64 = 0;
            iVar7 = local_34 - local_38;
            if (iVar7 != 0) {
                local_64 = ((arg4 - arg6) * 16384) / (int)(local_38 - local_34);
            }
            iVar12 = iVar6 * iVar7 - (arg6 - arg4) * iVar5;
            local_40 = arg4;
            if (iVar12 != 0) {
                iVar17 = arg10 - arg11;
                iVar18 = arg13 - arg14;
                iVar21 = arg16 - arg17;
                iVar19 = arg12 - arg10;
                iVar14 = arg15 - arg13;
                iVar16 = arg18 - arg16;
                local_60 = ((iVar7 * (arg8 - arg7) - iVar5 * (arg9 - arg7)) * 512) / iVar12;
                local_5c = (((arg9 - arg7) * iVar6 - (arg8 - arg7) * (arg6 - arg4)) * 512) / iVar12;
                iVar7 = (iVar19 * arg13 - iVar14 * arg10) * 16384;
                local_88 = (long)*(int*)&local_58->field_16;
                local_a0 = ((long)(iVar14 * arg16 - iVar16 * arg13) << 17) / local_88;
                local_98 = ((long)(iVar16 * arg10 - iVar19 * arg16) << 14) / local_88;
                iVar5 = (iVar17 * arg13 - iVar18 * arg10) * 16384;
                local_b0 = ((long)(iVar18 * arg16 - arg13 * iVar21) << 17) / local_88;
                local_90 = ((long)(arg10 * iVar21 - arg16 * iVar17) << 14) / local_88;
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
                            local_48 = (arg9 * 512 - local_60 * arg6) + local_60;
                            local_4c = arg6 * 16384;
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
                                local_40 = arg4 * 16384 - ((int)local_38 >> 31 & local_38 * local_68);
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
                                    piVar11 = &local_58->field_56[(long)(int)uVar15];
                                    iVar5 = *piVar11;
                                    local_78 = (SharedArray<unsigned int>*)&local_58->field_120;
                                    if (uVar20 - uVar15 != 0 && (int)uVar15 <= (int)uVar20) {
                                        local_80 = (SharedArray<unsigned int>*)(((uint64_t)local_80._4_4_ << 32) |
                                                                                (uint32_t)((uVar20 - uVar15) + 1));
                                        do {
                                            pAVar10 = (Array<unsigned int>*)*local_c8;
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
                                            iVar6 = (int)local_80 - 1;
                                            local_80 = (SharedArray<unsigned int>*)(((uint64_t)local_80._4_4_ << 32) |
                                                                                    (uint32_t)iVar6);
                                        } while (1 < iVar6);
                                    }
                                    if (0 < (int)local_3c) {
                                        local_3c = local_3c + 1;
                                        do {
                                            pAVar10 = (Array<unsigned int>*)*local_c8;
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
                                    piVar11 = &local_58->field_56[(long)(int)uVar15];
                                    iVar5 = *piVar11;
                                    local_78 = (SharedArray<unsigned int>*)&local_58->field_120;
                                    if (uVar20 - uVar15 != 0 && (int)uVar15 <= (int)uVar20) {
                                        local_80 = (SharedArray<unsigned int>*)(((uint64_t)local_80._4_4_ << 32) |
                                                                                (uint32_t)((uVar20 - uVar15) + 1));
                                        do {
                                            pAVar10 = (Array<unsigned int>*)*local_c8;
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
                                            iVar6 = (int)local_80 - 1;
                                            local_80 = (SharedArray<unsigned int>*)(((uint64_t)local_80._4_4_ << 32) |
                                                                                    (uint32_t)iVar6);
                                        } while (1 < iVar6);
                                    }
                                    if (0 < (int)local_3c) {
                                        local_3c = local_3c + 1;
                                        do {
                                            pAVar10 = (Array<unsigned int>*)*local_c8;
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
                                    puVar9 = &local_58->field_56[(long)(int)uVar15];
                                    local_78 = (SharedArray<unsigned int>*)(((uint64_t)local_78._4_4_ << 32) |
                                                                            (uint32_t)(*puVar9));
                                    local_b8 = (SharedArray<unsigned int>*)&local_58->field_120;
                                    if (uVar13 - uVar15 != 0 && (int)uVar15 <= (int)uVar13) {
                                        local_80 = (SharedArray<unsigned int>*)(((uint64_t)local_80._4_4_ << 32) |
                                                                                (uint32_t)((uVar13 - uVar15) + 1));
                                        local_50 = uVar20;
                                        do {
                                            pAVar10 = (Array<unsigned int>*)*local_c8;
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
                                                (SharedArray<unsigned int>*)(((uint64_t)local_78._4_4_ << 32) |
                                                                             (uint32_t)(iVar5 + local_58->field_104));
                                            local_3c = uVar13 + (int)local_98;
                                            local_34 = local_34 + (int)local_90;
                                            local_40 = local_40 + (int)local_88;
                                            iVar5 = (int)local_80 - 1;
                                            local_80 = (SharedArray<unsigned int>*)(((uint64_t)local_80._4_4_ << 32) |
                                                                                    (uint32_t)iVar5);
                                        } while (1 < iVar5);
                                    }
                                    if (0 < (int)local_38) {
                                        local_38 = local_38 + 1;
                                        do {
                                            pAVar10 = (Array<unsigned int>*)*local_c8;
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
                                                (SharedArray<unsigned int>*)(((uint64_t)local_78._4_4_ << 32) |
                                                                             (uint32_t)(iVar5 + local_58->field_104));
                                            local_3c = uVar13 + (int)local_98;
                                            local_34 = local_34 + (int)local_90;
                                            local_40 = local_40 + (int)local_88;
                                            local_38 = local_38 - 1;
                                        } while (1 < (int)local_38);
                                    }
                                } else {
                                    puVar9 = &local_58->field_56[(long)(int)uVar15];
                                    local_78 = (SharedArray<unsigned int>*)(((uint64_t)local_78._4_4_ << 32) |
                                                                            (uint32_t)(*puVar9));
                                    local_b8 = (SharedArray<unsigned int>*)&local_58->field_120;
                                    if (uVar13 - uVar15 != 0 && (int)uVar15 <= (int)uVar13) {
                                        local_80 = (SharedArray<unsigned int>*)(((uint64_t)local_80._4_4_ << 32) |
                                                                                (uint32_t)((uVar13 - uVar15) + 1));
                                        local_50 = uVar20;
                                        do {
                                            pAVar10 = (Array<unsigned int>*)*local_c8;
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
                                                (SharedArray<unsigned int>*)(((uint64_t)local_78._4_4_ << 32) |
                                                                             (uint32_t)(iVar5 + local_58->field_104));
                                            local_3c = uVar13 + (int)local_98;
                                            local_34 = local_34 + (int)local_90;
                                            local_40 = local_40 + (int)local_88;
                                            iVar5 = (int)local_80 - 1;
                                            local_80 = (SharedArray<unsigned int>*)(((uint64_t)local_80._4_4_ << 32) |
                                                                                    (uint32_t)iVar5);
                                        } while (1 < iVar5);
                                    }
                                    if (0 < (int)local_38) {
                                        local_38 = local_38 + 1;
                                        do {
                                            pAVar10 = (Array<unsigned int>*)*local_c8;
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
                                                (SharedArray<unsigned int>*)(((uint64_t)local_78._4_4_ << 32) |
                                                                             (uint32_t)(iVar5 + local_58->field_104));
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
                        local_48 = (arg8 * 512 - local_60 * local_44) + local_60;
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
                            local_4c = arg6 * 16384 - ((int)local_34 >> 31 & local_34 * local_64);
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
                                piVar11 = &local_58->field_56[(long)(int)uVar15];
                                iVar5 = *piVar11;
                                local_78 = (SharedArray<unsigned int>*)&local_58->field_120;
                                if (uVar13 - uVar15 != 0 && (int)uVar15 <= (int)uVar13) {
                                    local_80 = (SharedArray<unsigned int>*)(((uint64_t)local_80._4_4_ << 32) |
                                                                            (uint32_t)((uVar13 - uVar15) + 1));
                                    do {
                                        pAVar10 = (Array<unsigned int>*)*local_c8;
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
                                        iVar6 = (int)local_80 - 1;
                                        local_80 = (SharedArray<unsigned int>*)(((uint64_t)local_80._4_4_ << 32) |
                                                                                (uint32_t)iVar6);
                                    } while (1 < iVar6);
                                }
                                if (0 < (int)local_38) {
                                    local_38 = local_38 + 1;
                                    do {
                                        pAVar10 = (Array<unsigned int>*)*local_c8;
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
                                piVar11 = &local_58->field_56[(long)(int)uVar15];
                                iVar5 = *piVar11;
                                local_78 = (SharedArray<unsigned int>*)&local_58->field_120;
                                if (uVar13 - uVar15 != 0 && (int)uVar15 <= (int)uVar13) {
                                    local_80 = (SharedArray<unsigned int>*)(((uint64_t)local_80._4_4_ << 32) |
                                                                            (uint32_t)((uVar13 - uVar15) + 1));
                                    do {
                                        pAVar10 = (Array<unsigned int>*)*local_c8;
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
                                        iVar6 = (int)local_80 - 1;
                                        local_80 = (SharedArray<unsigned int>*)(((uint64_t)local_80._4_4_ << 32) |
                                                                                (uint32_t)iVar6);
                                    } while (1 < iVar6);
                                }
                                if (0 < (int)local_38) {
                                    local_38 = local_38 + 1;
                                    do {
                                        pAVar10 = (Array<unsigned int>*)*local_c8;
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
                            local_40 = arg4 * 16384 - ((int)local_38 >> 31 & local_38 * local_64);
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
                                piVar11 = &local_58->field_56[(long)(int)uVar15];
                                iVar5 = *piVar11;
                                local_78 = (SharedArray<unsigned int>*)&local_58->field_120;
                                if (uVar20 - uVar15 != 0 && (int)uVar15 <= (int)uVar20) {
                                    local_80 = (SharedArray<unsigned int>*)(((uint64_t)local_80._4_4_ << 32) |
                                                                            (uint32_t)((uVar20 - uVar15) + 1));
                                    do {
                                        pAVar10 = (Array<unsigned int>*)*local_c8;
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
                                        iVar6 = (int)local_80 - 1;
                                        local_80 = (SharedArray<unsigned int>*)(((uint64_t)local_80._4_4_ << 32) |
                                                                                (uint32_t)iVar6);
                                    } while (1 < iVar6);
                                }
                                if (0 < (int)local_34) {
                                    local_34 = local_34 + 1;
                                    do {
                                        pAVar10 = (Array<unsigned int>*)*local_c8;
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
                                piVar11 = &local_58->field_56[(long)(int)uVar15];
                                iVar5 = *piVar11;
                                local_78 = (SharedArray<unsigned int>*)&local_58->field_120;
                                if (uVar20 - uVar15 != 0 && (int)uVar15 <= (int)uVar20) {
                                    local_80 = (SharedArray<unsigned int>*)(((uint64_t)local_80._4_4_ << 32) |
                                                                            (uint32_t)((uVar20 - uVar15) + 1));
                                    do {
                                        pAVar10 = (Array<unsigned int>*)*local_c8;
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
                                        iVar6 = (int)local_80 - 1;
                                        local_80 = (SharedArray<unsigned int>*)(((uint64_t)local_80._4_4_ << 32) |
                                                                                (uint32_t)iVar6);
                                    } while (1 < iVar6);
                                }
                                if (0 < (int)local_34) {
                                    local_34 = local_34 + 1;
                                    do {
                                        pAVar10 = (Array<unsigned int>*)*local_c8;
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
                        local_48 = (arg7 * 512 - local_60 * arg4) + local_60;
                        uVar15 = arg4 * 16384;
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
                                puVar9 = &local_58->field_56[(long)(int)uVar20];
                                local_78 = (SharedArray<unsigned int>*)(((uint64_t)local_78._4_4_ << 32) |
                                                                        (uint32_t)(*puVar9));
                                local_b8 = (SharedArray<unsigned int>*)&local_58->field_120;
                                if (uVar13 - uVar20 != 0 && (int)uVar20 <= (int)uVar13) {
                                    local_80 = (SharedArray<unsigned int>*)(((uint64_t)local_80._4_4_ << 32) |
                                                                            (uint32_t)((uVar13 - uVar20) + 1));
                                    local_50 = uVar15;
                                    do {
                                        pAVar10 = (Array<unsigned int>*)*local_c8;
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
                                        local_78 =
                                            (SharedArray<unsigned int>*)(((uint64_t)local_78._4_4_ << 32) |
                                                                         (uint32_t)(iVar5 + local_58->field_104));
                                        local_4c = local_4c + (int)local_98;
                                        local_38 = uVar13 + (int)local_90;
                                        local_3c = local_3c + (int)local_88;
                                        iVar5 = (int)local_80 - 1;
                                        local_80 = (SharedArray<unsigned int>*)(((uint64_t)local_80._4_4_ << 32) |
                                                                                (uint32_t)iVar5);
                                    } while (1 < iVar5);
                                }
                                if (0 < (int)local_34) {
                                    local_34 = local_34 + 1;
                                    do {
                                        pAVar10 = (Array<unsigned int>*)*local_c8;
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
                                        local_78 =
                                            (SharedArray<unsigned int>*)(((uint64_t)local_78._4_4_ << 32) |
                                                                         (uint32_t)(iVar5 + local_58->field_104));
                                        local_4c = uVar15 + (int)local_98;
                                        local_38 = local_38 + (int)local_90;
                                        local_3c = local_3c + (int)local_88;
                                        local_34 = local_34 - 1;
                                    } while (1 < (int)local_34);
                                }
                            } else {
                                puVar9 = &local_58->field_56[(long)(int)uVar20];
                                local_78 = (SharedArray<unsigned int>*)(((uint64_t)local_78._4_4_ << 32) |
                                                                        (uint32_t)(*puVar9));
                                local_b8 = (SharedArray<unsigned int>*)&local_58->field_120;
                                if (uVar13 - uVar20 != 0 && (int)uVar20 <= (int)uVar13) {
                                    local_80 = (SharedArray<unsigned int>*)(((uint64_t)local_80._4_4_ << 32) |
                                                                            (uint32_t)((uVar13 - uVar20) + 1));
                                    local_50 = uVar15;
                                    do {
                                        pAVar10 = (Array<unsigned int>*)*local_c8;
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
                                        local_78 =
                                            (SharedArray<unsigned int>*)(((uint64_t)local_78._4_4_ << 32) |
                                                                         (uint32_t)(iVar5 + local_58->field_104));
                                        local_4c = uVar20 + (int)local_98;
                                        local_38 = local_38 + (int)local_90;
                                        local_3c = local_3c + (int)local_88;
                                        iVar5 = (int)local_80 - 1;
                                        local_80 = (SharedArray<unsigned int>*)(((uint64_t)local_80._4_4_ << 32) |
                                                                                (uint32_t)iVar5);
                                    } while (1 < iVar5);
                                }
                                if (0 < (int)local_34) {
                                    local_34 = local_34 + 1;
                                    do {
                                        pAVar10 = (Array<unsigned int>*)*local_c8;
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
                                        local_78 =
                                            (SharedArray<unsigned int>*)(((uint64_t)local_78._4_4_ << 32) |
                                                                         (uint32_t)(iVar5 + local_58->field_104));
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
                            local_4c = arg6 * 16384 - ((int)local_34 >> 31 & local_34 * local_6c);
                            uVar13 = 0;
                            if (-1 < (int)local_34) {
                                uVar13 = local_34;
                            }
                            iVar12 = uVar20 - *(int*)&local_58->field_24;
                            local_38 = iVar12 * (int)local_98 + iVar7;
                            local_34 = iVar12 * (int)local_90 + iVar5;
                            local_44 = iVar12 * (int)local_88 + iVar6;
                            local_b8 =
                                (SharedArray<unsigned int>*)(((uint64_t)local_b8._4_4_ << 32) | (uint32_t)uVar13);
                            local_50 = uVar15;
                            if (((uVar13 == uVar20) || (local_68 <= local_64)) &&
                                ((uVar13 != uVar20 || (local_6c <= local_68)))) {
                                piVar11 = &local_58->field_56[(long)(int)uVar20];
                                iVar5 = *piVar11;
                                local_80 = (SharedArray<unsigned int>*)&pSVar1->field_120;
                                if ((int)local_b8 - uVar20 != 0 && (int)uVar20 <= (int)local_b8) {
                                    local_78 = (SharedArray<unsigned int>*)(((uint64_t)local_78._4_4_ << 32) |
                                                                            (uint32_t)(((int)local_b8 - uVar20) + 1));
                                    do {
                                        pAVar10 = (Array<unsigned int>*)*local_c8;
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
                                        iVar6 = (int)local_78 - 1;
                                        local_78 = (SharedArray<unsigned int>*)(((uint64_t)local_78._4_4_ << 32) |
                                                                                (uint32_t)iVar6);
                                    } while (1 < iVar6);
                                }
                                local_3c = local_3c - (int)local_b8;
                                if (0 < (int)local_3c) {
                                    local_3c = local_3c + 1;
                                    uVar15 = local_50;
                                    do {
                                        pAVar10 = (Array<unsigned int>*)*local_c8;
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
                                piVar11 = &local_58->field_56[(long)(int)uVar20];
                                iVar5 = *piVar11;
                                local_80 = (SharedArray<unsigned int>*)&pSVar1->field_120;
                                if ((int)local_b8 - uVar20 != 0 && (int)uVar20 <= (int)local_b8) {
                                    local_78 = (SharedArray<unsigned int>*)(((uint64_t)local_78._4_4_ << 32) |
                                                                            (uint32_t)(((int)local_b8 - uVar20) + 1));
                                    do {
                                        pAVar10 = (Array<unsigned int>*)*local_c8;
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
                                        iVar6 = (int)local_78 - 1;
                                        local_78 = (SharedArray<unsigned int>*)(((uint64_t)local_78._4_4_ << 32) |
                                                                                (uint32_t)iVar6);
                                    } while (1 < iVar6);
                                }
                                local_3c = local_3c - (int)local_b8;
                                if (0 < (int)local_3c) {
                                    local_3c = local_3c + 1;
                                    do {
                                        pAVar10 = (Array<unsigned int>*)*local_c8;
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
    }

    // 0x1002fd2f0
    void SoftwarePix3D::TextureRaster(SharedArray<unsigned int>& sharedArray, Array<unsigned int>& arg2, int arg3,
                                      int arg4, int arg5, int arg6, int arg7, int arg8, int arg9, int arg10, int arg11,
                                      int arg12, int arg13, int arg14, int arg15) {
        int iVar1;
        int iVar2;
        uint32_t uVar3;
        unsigned int uVar4;
        long lVar5;
        int* piVar6;
        uint32_t* puVar7;
        unsigned int uVar9;
        long lVar10;
        int iVar11;
        int iVar12;
        int iVar13;
        unsigned int uVar14;
        int iVar15;
        int iVar16;
        unsigned long uVar17;
        int iVar18;
        int local_80;
        long local_48;
        int local_38;
        int local_34;

        if (field_8[0] != '\0') {
            if (field_28 < arg7) {
                arg7 = field_28;
            }
            if (arg6 < 0) {
                arg6 = 0;
            }
        }
        unsigned int uVar8 = arg7 - arg6;
        if (uVar8 != 0 && arg6 <= arg7) {
            iVar11 = arg5 + arg6;
            iVar1 = arg6 - field_20;
            iVar18 = (arg13 >> 3) * iVar1 + arg10;
            iVar13 = (arg14 >> 3) * iVar1 + arg11;
            uVar9 = (arg15 >> 3) * iVar1 + arg12;
            iVar1 = (int)uVar8 >> 3;
            local_34 = arg6 * arg9 + arg8 >> 8;
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
                if (uVar9 + arg15 < 16384) {
                    uVar17 = 0;
                } else {
                    iVar15 = (int)(uVar9 + arg15) >> 14;
                    iVar2 = (arg13 + iVar18) / iVar15;
                    uVar17 = (long)(iVar13 + arg14) / (long)iVar15 & 4294967295;
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
                        iVar12 = arg8 + arg9 * (arg6 + 8);
                        iVar18 = iVar18 + arg13 * 2;
                        iVar13 = iVar13 + arg14 * 2;
                        uVar9 = uVar9 + arg15 * 2;
                        iVar1 = iVar1 + 1;
                        local_48 = 0;
                        do {
                            piVar6 = &arg2[(unsigned long)(uVar14 >> 25 | uVar14 & 16256)];
                            if (*piVar6 != 0) {
                                uVar3 = TextureRasterWithAlphaChannel(*piVar6, local_34);
                                puVar7 = &sharedArray[lVar5 + local_48];
                                *puVar7 = uVar3;
                            }
                            uVar14 = uVar14 + local_38;
                            piVar6 = &arg2[(unsigned long)(uVar14 >> 25 | uVar14 & 16256)];
                            if (*piVar6 != 0) {
                                uVar3 = TextureRasterWithAlphaChannel(*piVar6, local_34);
                                puVar7 = &sharedArray[lVar5 + local_48 + 1];
                                *puVar7 = uVar3;
                            }
                            uVar14 = uVar14 + local_38;
                            piVar6 = &arg2[(unsigned long)(uVar14 >> 25 | uVar14 & 16256)];
                            if (*piVar6 != 0) {
                                uVar3 = TextureRasterWithAlphaChannel(*piVar6, local_34);
                                puVar7 = &sharedArray[lVar5 + local_48 + 2];
                                *puVar7 = uVar3;
                            }
                            uVar14 = uVar14 + local_38;
                            piVar6 = &arg2[(unsigned long)(uVar14 >> 25 | uVar14 & 16256)];
                            if (*piVar6 != 0) {
                                uVar3 = TextureRasterWithAlphaChannel(*piVar6, local_34);
                                puVar7 = &sharedArray[lVar5 + local_48 + 3];
                                *puVar7 = uVar3;
                            }
                            uVar14 = uVar14 + local_38;
                            piVar6 = &arg2[(unsigned long)(uVar14 >> 25 | uVar14 & 16256)];
                            if (*piVar6 != 0) {
                                uVar3 = TextureRasterWithAlphaChannel(*piVar6, local_34);
                                puVar7 = &sharedArray[lVar5 + local_48 + 4];
                                *puVar7 = uVar3;
                            }
                            uVar14 = uVar14 + local_38;
                            piVar6 = &arg2[(unsigned long)(uVar14 >> 25 | uVar14 & 16256)];
                            if (*piVar6 != 0) {
                                uVar3 = TextureRasterWithAlphaChannel(*piVar6, local_34);
                                puVar7 = &sharedArray[lVar5 + local_48 + 5];
                                *puVar7 = uVar3;
                            }
                            uVar14 = uVar14 + local_38;
                            piVar6 = &arg2[(unsigned long)(uVar14 >> 25 | uVar14 & 16256)];
                            if (*piVar6 != 0) {
                                uVar3 = TextureRasterWithAlphaChannel(*piVar6, local_34);
                                puVar7 = &sharedArray[lVar5 + local_48 + 6];
                                *puVar7 = uVar3;
                            }
                            piVar6 = &arg2[(unsigned long)(uVar14 + local_38 >> 25 | uVar14 + local_38 & 16256)];
                            if (*piVar6 != 0) {
                                uVar3 = TextureRasterWithAlphaChannel(*piVar6, local_34);
                                puVar7 = &sharedArray[lVar5 + local_48 + 7];
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
                            iVar12 = iVar12 + arg9 * 8;
                            iVar18 = iVar18 + arg13;
                            iVar13 = iVar13 + arg14;
                            uVar9 = uVar9 + arg15;
                            iVar1 = iVar1 - 1;
                            uVar17 = (unsigned long)uVar4;
                            local_80 = iVar16;
                        } while (1 < iVar1);
                        iVar11 = iVar11 + (int)local_48;
                    }
                    if ((uVar8 & 7) != 0) {
                        uVar17 = (unsigned long)iVar11;
                        iVar18 = (uVar8 & 7) + 1;
                        do {
                            piVar6 = &arg2[(unsigned long)(uVar14 >> 25 | uVar14 & 16256)];
                            if (*piVar6 != 0) {
                                uVar3 = TextureRasterWithAlphaChannel(*piVar6, local_34);
                                puVar7 = &sharedArray[uVar17];
                                *puVar7 = uVar3;
                            }
                            uVar17 = uVar17 + 1;
                            uVar14 = uVar14 + local_38;
                            iVar18 = iVar18 - 1;
                        } while (1 < iVar18);
                    }
                } else {
                    if (7 < (int)uVar8) {
                        lVar5 = (long)iVar11;
                        iVar12 = arg8 + arg9 * (arg6 + 8);
                        iVar18 = iVar18 + arg13 * 2;
                        iVar13 = iVar13 + arg14 * 2;
                        uVar9 = uVar9 + arg15 * 2;
                        iVar1 = iVar1 + 1;
                        lVar10 = 0;
                        do {
                            piVar6 = &arg2[(unsigned long)(uVar14 >> 25 | uVar14 & 16256)];
                            uVar3 = TextureRasterWithAlphaChannel(*piVar6, local_34);
                            puVar7 = &sharedArray[lVar5 + lVar10];
                            *puVar7 = uVar3;
                            uVar14 = uVar14 + local_38;
                            piVar6 = &arg2[(unsigned long)(uVar14 >> 25 | uVar14 & 16256)];
                            uVar3 = TextureRasterWithAlphaChannel(*piVar6, local_34);
                            puVar7 = &sharedArray[lVar5 + lVar10 + 1];
                            *puVar7 = uVar3;
                            uVar14 = uVar14 + local_38;
                            piVar6 = &arg2[(unsigned long)(uVar14 >> 25 | uVar14 & 16256)];
                            uVar3 = TextureRasterWithAlphaChannel(*piVar6, local_34);
                            puVar7 = &sharedArray[lVar10 + lVar5 + 2];
                            *puVar7 = uVar3;
                            uVar14 = uVar14 + local_38;
                            piVar6 = &arg2[(unsigned long)(uVar14 >> 25 | uVar14 & 16256)];
                            uVar3 = TextureRasterWithAlphaChannel(*piVar6, local_34);
                            puVar7 = &sharedArray[lVar10 + lVar5 + 3];
                            *puVar7 = uVar3;
                            uVar14 = uVar14 + local_38;
                            piVar6 = &arg2[(unsigned long)(uVar14 >> 25 | uVar14 & 16256)];
                            uVar3 = TextureRasterWithAlphaChannel(*piVar6, local_34);
                            puVar7 = &sharedArray[lVar10 + lVar5 + 4];
                            *puVar7 = uVar3;
                            uVar14 = uVar14 + local_38;
                            piVar6 = &arg2[(unsigned long)(uVar14 >> 25 | uVar14 & 16256)];
                            uVar3 = TextureRasterWithAlphaChannel(*piVar6, local_34);
                            puVar7 = &sharedArray[lVar5 + lVar10 + 5];
                            *puVar7 = uVar3;
                            uVar14 = uVar14 + local_38;
                            piVar6 = &arg2[(unsigned long)(uVar14 >> 25 | uVar14 & 16256)];
                            uVar3 = TextureRasterWithAlphaChannel(*piVar6, local_34);
                            puVar7 = &sharedArray[lVar5 + lVar10 + 6];
                            *puVar7 = uVar3;
                            piVar6 = &arg2[(unsigned long)(uVar14 + local_38 >> 25 | uVar14 + local_38 & 16256)];
                            uVar3 = TextureRasterWithAlphaChannel(*piVar6, local_34);
                            puVar7 = &sharedArray[lVar10 + lVar5 + 7];
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
                            iVar12 = iVar12 + arg9 * 8;
                            iVar18 = iVar18 + arg13;
                            iVar13 = iVar13 + arg14;
                            uVar9 = uVar9 + arg15;
                            iVar1 = iVar1 - 1;
                            uVar17 = (unsigned long)uVar4;
                            local_80 = iVar16;
                        } while (1 < iVar1);
                        iVar11 = iVar11 + (int)lVar10;
                    }
                    if ((uVar8 & 7) != 0) {
                        iVar18 = (uVar8 & 7) + 1;
                        uVar17 = (long)iVar11;
                        do {
                            piVar6 = &arg2[(unsigned long)(uVar14 >> 25 | uVar14 & 16256)];
                            uVar3 = TextureRasterWithAlphaChannel(*piVar6, local_34);
                            puVar7 = &sharedArray[uVar17];
                            *puVar7 = uVar3;
                            uVar14 = uVar14 + local_38;
                            iVar18 = iVar18 - 1;
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
                if (uVar9 + arg15 < 4096) {
                    uVar17 = 0;
                } else {
                    iVar15 = (int)(uVar9 + arg15) >> 12;
                    iVar2 = (arg13 + iVar18) / iVar15;
                    uVar17 = (long)(iVar13 + arg14) / (long)iVar15 & 4294967295;
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
                        iVar12 = arg8 + arg9 * (arg6 + 8);
                        iVar18 = iVar18 + arg13 * 2;
                        iVar13 = iVar13 + arg14 * 2;
                        uVar9 = uVar9 + arg15 * 2;
                        iVar1 = iVar1 + 1;
                        local_48 = 0;
                        do {
                            piVar6 = &arg2[(unsigned long)(uVar14 >> 26 | uVar14 & 4032)];
                            if (*piVar6 != 0) {
                                uVar3 = TextureRasterWithAlphaChannel(*piVar6, local_34);
                                puVar7 = &sharedArray[lVar5 + local_48];
                                *puVar7 = uVar3;
                            }
                            uVar14 = uVar14 + local_38;
                            piVar6 = &arg2[(unsigned long)(uVar14 >> 26 | uVar14 & 4032)];
                            if (*piVar6 != 0) {
                                uVar3 = TextureRasterWithAlphaChannel(*piVar6, local_34);
                                puVar7 = &sharedArray[lVar5 + local_48 + 1];
                                *puVar7 = uVar3;
                            }
                            uVar14 = uVar14 + local_38;
                            piVar6 = &arg2[(unsigned long)(uVar14 >> 26 | uVar14 & 4032)];
                            if (*piVar6 != 0) {
                                uVar3 = TextureRasterWithAlphaChannel(*piVar6, local_34);
                                puVar7 = &sharedArray[lVar5 + local_48 + 2];
                                *puVar7 = uVar3;
                            }
                            uVar14 = uVar14 + local_38;
                            piVar6 = &arg2[(unsigned long)(uVar14 >> 26 | uVar14 & 4032)];
                            if (*piVar6 != 0) {
                                uVar3 = TextureRasterWithAlphaChannel(*piVar6, local_34);
                                puVar7 = &sharedArray[lVar5 + local_48 + 3];
                                *puVar7 = uVar3;
                            }
                            uVar14 = uVar14 + local_38;
                            piVar6 = &arg2[(unsigned long)(uVar14 >> 26 | uVar14 & 4032)];
                            if (*piVar6 != 0) {
                                uVar3 = TextureRasterWithAlphaChannel(*piVar6, local_34);
                                puVar7 = &sharedArray[lVar5 + local_48 + 4];
                                *puVar7 = uVar3;
                            }
                            uVar14 = uVar14 + local_38;
                            piVar6 = &arg2[(unsigned long)(uVar14 >> 26 | uVar14 & 4032)];
                            if (*piVar6 != 0) {
                                uVar3 = TextureRasterWithAlphaChannel(*piVar6, local_34);
                                puVar7 = &sharedArray[lVar5 + local_48 + 5];
                                *puVar7 = uVar3;
                            }
                            uVar14 = uVar14 + local_38;
                            piVar6 = &arg2[(unsigned long)(uVar14 >> 26 | uVar14 & 4032)];
                            if (*piVar6 != 0) {
                                uVar3 = TextureRasterWithAlphaChannel(*piVar6, local_34);
                                puVar7 = &sharedArray[lVar5 + local_48 + 6];
                                *puVar7 = uVar3;
                            }
                            piVar6 = &arg2[(unsigned long)(uVar14 + local_38 >> 26 | uVar14 + local_38 & 4032)];
                            if (*piVar6 != 0) {
                                uVar3 = TextureRasterWithAlphaChannel(*piVar6, local_34);
                                puVar7 = &sharedArray[lVar5 + local_48 + 7];
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
                            iVar12 = iVar12 + arg9 * 8;
                            iVar18 = iVar18 + arg13;
                            iVar13 = iVar13 + arg14;
                            uVar9 = uVar9 + arg15;
                            iVar1 = iVar1 - 1;
                            uVar17 = (unsigned long)uVar4;
                            local_80 = iVar16;
                        } while (1 < iVar1);
                        iVar11 = iVar11 + (int)local_48;
                    }
                    if ((uVar8 & 7) != 0) {
                        uVar17 = (unsigned long)iVar11;
                        iVar18 = (uVar8 & 7) + 1;
                        do {
                            piVar6 = &arg2[(unsigned long)(uVar14 >> 26 | uVar14 & 4032)];
                            if (*piVar6 != 0) {
                                uVar3 = TextureRasterWithAlphaChannel(*piVar6, local_34);
                                puVar7 = &sharedArray[uVar17];
                                *puVar7 = uVar3;
                            }
                            uVar17 = uVar17 + 1;
                            uVar14 = uVar14 + local_38;
                            iVar18 = iVar18 - 1;
                        } while (1 < iVar18);
                    }
                } else {
                    if (7 < (int)uVar8) {
                        lVar5 = (long)iVar11;
                        iVar12 = arg8 + arg9 * (arg6 + 8);
                        iVar18 = iVar18 + arg13 * 2;
                        iVar13 = iVar13 + arg14 * 2;
                        uVar9 = uVar9 + arg15 * 2;
                        iVar1 = iVar1 + 1;
                        lVar10 = 0;
                        do {
                            piVar6 = &arg2[(unsigned long)(uVar14 >> 26 | uVar14 & 4032)];
                            uVar3 = TextureRasterWithAlphaChannel(*piVar6, local_34);
                            puVar7 = &sharedArray[lVar5 + lVar10];
                            *puVar7 = uVar3;
                            uVar14 = uVar14 + local_38;
                            piVar6 = &arg2[(unsigned long)(uVar14 >> 26 | uVar14 & 4032)];
                            uVar3 = TextureRasterWithAlphaChannel(*piVar6, local_34);
                            puVar7 = &sharedArray[lVar5 + lVar10 + 1];
                            *puVar7 = uVar3;
                            uVar14 = uVar14 + local_38;
                            piVar6 = &arg2[(unsigned long)(uVar14 >> 26 | uVar14 & 4032)];
                            uVar3 = TextureRasterWithAlphaChannel(*piVar6, local_34);
                            puVar7 = &sharedArray[lVar10 + lVar5 + 2];
                            *puVar7 = uVar3;
                            uVar14 = uVar14 + local_38;
                            piVar6 = &arg2[(unsigned long)(uVar14 >> 26 | uVar14 & 4032)];
                            uVar3 = TextureRasterWithAlphaChannel(*piVar6, local_34);
                            puVar7 = &sharedArray[lVar10 + lVar5 + 3];
                            *puVar7 = uVar3;
                            uVar14 = uVar14 + local_38;
                            piVar6 = &arg2[(unsigned long)(uVar14 >> 26 | uVar14 & 4032)];
                            uVar3 = TextureRasterWithAlphaChannel(*piVar6, local_34);
                            puVar7 = &sharedArray[lVar10 + lVar5 + 4];
                            *puVar7 = uVar3;
                            uVar14 = uVar14 + local_38;
                            piVar6 = &arg2[(unsigned long)(uVar14 >> 26 | uVar14 & 4032)];
                            uVar3 = TextureRasterWithAlphaChannel(*piVar6, local_34);
                            puVar7 = &sharedArray[lVar5 + lVar10 + 5];
                            *puVar7 = uVar3;
                            uVar14 = uVar14 + local_38;
                            piVar6 = &arg2[(unsigned long)(uVar14 >> 26 | uVar14 & 4032)];
                            uVar3 = TextureRasterWithAlphaChannel(*piVar6, local_34);
                            puVar7 = &sharedArray[lVar5 + lVar10 + 6];
                            *puVar7 = uVar3;
                            piVar6 = &arg2[(unsigned long)(uVar14 + local_38 >> 26 | uVar14 + local_38 & 4032)];
                            uVar3 = TextureRasterWithAlphaChannel(*piVar6, local_34);
                            puVar7 = &sharedArray[lVar10 + lVar5 + 7];
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
                            iVar12 = iVar12 + arg9 * 8;
                            iVar18 = iVar18 + arg13;
                            iVar13 = iVar13 + arg14;
                            uVar9 = uVar9 + arg15;
                            iVar1 = iVar1 - 1;
                            uVar17 = (unsigned long)uVar4;
                            local_80 = iVar16;
                        } while (1 < iVar1);
                        iVar11 = iVar11 + (int)lVar10;
                    }
                    if ((uVar8 & 7) != 0) {
                        iVar18 = (uVar8 & 7) + 1;
                        uVar17 = (long)iVar11;
                        do {
                            piVar6 = &arg2[(unsigned long)(uVar14 >> 26 | uVar14 & 4032)];
                            uVar3 = TextureRasterWithAlphaChannel(*piVar6, local_34);
                            puVar7 = &sharedArray[uVar17];
                            *puVar7 = uVar3;
                            uVar14 = uVar14 + local_38;
                            iVar18 = iVar18 - 1;
                            uVar17 = uVar17 + 1;
                        } while (1 < iVar18);
                    }
                }
            }
        }
    }

    // 0x1002fe6f0
    void SoftwarePix3D::TextureTriangleAffine(int arg1, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7,
                                              int arg8, int arg9, int arg10, int arg11, int arg12, int arg13, int arg14,
                                              int arg15, int arg16, int arg17, int arg18, int arg19) {
        SoftwarePix3D* pSVar1;
        bool cVar3;
        uint8_t uVar4;
        int iVar5;
        int iVar6;
        int iVar7;
        uint32_t* puVar9;
        Array<unsigned int>* pAVar10;
        int* piVar11;
        int iVar12;
        unsigned int uVar13;
        int iVar14;
        unsigned int uVar15;
        int iVar16;
        int iVar17;
        int iVar18;
        int iVar19;
        unsigned int uVar20;
        int iVar21;
        shared_ptr<configdecoder::ObjType> local_c8;
        SharedArray<unsigned int>* local_b8;
        long local_b0;
        long local_a8;
        long local_a0;
        long local_98;
        long local_90;
        long local_88;
        SharedArray<unsigned int>* local_80;
        SharedArray<unsigned int>* local_78;
        int local_6c;
        int local_68;
        int local_64;
        int local_60;
        int local_5c;
        unsigned int local_50;
        unsigned int local_4c;
        int local_48;
        unsigned int local_40;

        unsigned int local_44 = arg5;
        unsigned int local_3c = arg2;
        unsigned int local_38 = arg1;
        unsigned int local_34 = arg3;
        ErrorCapture local_418(true);
        long* plVar8 = (long*)(*((shared_ptr<TextureProvider>*)&Pix3D::m_textureProvider)).operator->();
        (**(void (**)(...))(*plVar8 + 16))(&local_c8, plVar8, arg19, &local_418);
        bool bVar2 = local_c8 == nullptr;
        SoftwarePix3D* local_58 = this;
        if ((bVar2) || (cVar3 = local_418.IsRaised(), cVar3)) {
            plVar8 = (long*)(*((shared_ptr<TextureProvider>*)&Pix3D::m_textureProvider)).operator->();
            iVar5 = (**(void (**)(...))(*plVar8 + 24))(plVar8, arg19);
            iVar6 = Pix3D::TextureLightColour(iVar5, arg7);
            iVar7 = Pix3D::TextureLightColour(iVar5, arg8);
            iVar5 = Pix3D::TextureLightColour(iVar5, arg9);
            GouraudTriangle(local_58, local_38, local_3c, local_34, arg4, local_44, arg6, iVar6, iVar7, iVar5);
        } else {
            plVar8 = (long*)(*((shared_ptr<TextureProvider>*)&Pix3D::m_textureProvider)).operator->();
            uVar4 = (**(void (**)(...))(*plVar8 + 40))(plVar8, arg19);
            field_10 = uVar4;
            plVar8 = (long*)(*((shared_ptr<TextureProvider>*)&Pix3D::m_textureProvider)).operator->();
            uVar4 = (**(void (**)(...))(*plVar8 + 32))(plVar8, arg19);
            pSVar1 = local_58;
            field_9 = uVar4;
            iVar6 = local_44 - arg4;
            local_6c = 0;
            local_68 = 0;
            iVar5 = local_3c - local_38;
            if (iVar5 != 0) {
                local_68 = (iVar6 * 16384) / iVar5;
            }
            if (local_34 - local_3c != 0) {
                local_6c = (int)((arg6 - local_44) * 16384) / (int)(local_34 - local_3c);
            }
            local_64 = 0;
            iVar7 = local_34 - local_38;
            if (iVar7 != 0) {
                local_64 = ((arg4 - arg6) * 16384) / (int)(local_38 - local_34);
            }
            iVar12 = iVar6 * iVar7 - (arg6 - arg4) * iVar5;
            local_40 = arg4;
            if (iVar12 != 0) {
                iVar17 = arg10 - arg11;
                iVar18 = arg13 - arg14;
                iVar21 = arg16 - arg17;
                iVar19 = arg12 - arg10;
                iVar14 = arg15 - arg13;
                iVar16 = arg18 - arg16;
                local_60 = ((iVar7 * (arg8 - arg7) - iVar5 * (arg9 - arg7)) * 512) / iVar12;
                local_5c = (((arg9 - arg7) * iVar6 - (arg8 - arg7) * (arg6 - arg4)) * 512) / iVar12;
                iVar7 = (iVar19 * arg13 - iVar14 * arg10) * 16384;
                local_88 = (long)*(int*)&local_58->field_16;
                local_a0 = ((long)(iVar14 * arg16 - iVar16 * arg13) << 14) / local_88;
                local_98 = ((long)(iVar16 * arg10 - iVar19 * arg16) << 14) / local_88;
                iVar5 = (iVar17 * arg13 - iVar18 * arg10) * 16384;
                local_b0 = ((long)(iVar18 * arg16 - arg13 * iVar21) << 14) / local_88;
                local_90 = ((long)(arg10 * iVar21 - arg16 * iVar17) << 14) / local_88;
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
                            local_48 = (arg9 * 512 - local_60 * arg6) + local_60;
                            local_4c = arg6 * 16384;
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
                                local_40 = arg4 * 16384 - ((int)local_38 >> 31 & local_38 * local_68);
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
                                    piVar11 = &local_58->field_56[(long)(int)uVar15];
                                    iVar5 = *piVar11;
                                    local_78 = (SharedArray<unsigned int>*)&local_58->field_120;
                                    if (uVar20 - uVar15 != 0 && (int)uVar15 <= (int)uVar20) {
                                        local_80 = (SharedArray<unsigned int>*)(((uint64_t)local_80._4_4_ << 32) |
                                                                                (uint32_t)((uVar20 - uVar15) + 1));
                                        do {
                                            pAVar10 = (Array<unsigned int>*)*local_c8;
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
                                            iVar6 = (int)local_80 - 1;
                                            local_80 = (SharedArray<unsigned int>*)(((uint64_t)local_80._4_4_ << 32) |
                                                                                    (uint32_t)iVar6);
                                        } while (1 < iVar6);
                                    }
                                    if (0 < (int)local_3c) {
                                        local_3c = local_3c + 1;
                                        do {
                                            pAVar10 = (Array<unsigned int>*)*local_c8;
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
                                    piVar11 = &local_58->field_56[(long)(int)uVar15];
                                    iVar5 = *piVar11;
                                    local_78 = (SharedArray<unsigned int>*)&local_58->field_120;
                                    if (uVar20 - uVar15 != 0 && (int)uVar15 <= (int)uVar20) {
                                        local_80 = (SharedArray<unsigned int>*)(((uint64_t)local_80._4_4_ << 32) |
                                                                                (uint32_t)((uVar20 - uVar15) + 1));
                                        do {
                                            pAVar10 = (Array<unsigned int>*)*local_c8;
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
                                            iVar6 = (int)local_80 - 1;
                                            local_80 = (SharedArray<unsigned int>*)(((uint64_t)local_80._4_4_ << 32) |
                                                                                    (uint32_t)iVar6);
                                        } while (1 < iVar6);
                                    }
                                    if (0 < (int)local_3c) {
                                        local_3c = local_3c + 1;
                                        do {
                                            pAVar10 = (Array<unsigned int>*)*local_c8;
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
                                    puVar9 = &local_58->field_56[(long)(int)uVar15];
                                    local_78 = (SharedArray<unsigned int>*)(((uint64_t)local_78._4_4_ << 32) |
                                                                            (uint32_t)(*puVar9));
                                    local_b8 = (SharedArray<unsigned int>*)&local_58->field_120;
                                    if (uVar13 - uVar15 != 0 && (int)uVar15 <= (int)uVar13) {
                                        local_80 = (SharedArray<unsigned int>*)(((uint64_t)local_80._4_4_ << 32) |
                                                                                (uint32_t)((uVar13 - uVar15) + 1));
                                        local_50 = uVar20;
                                        do {
                                            pAVar10 = (Array<unsigned int>*)*local_c8;
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
                                                (SharedArray<unsigned int>*)(((uint64_t)local_78._4_4_ << 32) |
                                                                             (uint32_t)(iVar5 + local_58->field_104));
                                            local_3c = uVar13 + (int)local_98;
                                            local_34 = local_34 + (int)local_90;
                                            local_40 = local_40 + (int)local_88;
                                            iVar5 = (int)local_80 - 1;
                                            local_80 = (SharedArray<unsigned int>*)(((uint64_t)local_80._4_4_ << 32) |
                                                                                    (uint32_t)iVar5);
                                        } while (1 < iVar5);
                                    }
                                    if (0 < (int)local_38) {
                                        local_38 = local_38 + 1;
                                        do {
                                            pAVar10 = (Array<unsigned int>*)*local_c8;
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
                                                (SharedArray<unsigned int>*)(((uint64_t)local_78._4_4_ << 32) |
                                                                             (uint32_t)(iVar5 + local_58->field_104));
                                            local_3c = uVar13 + (int)local_98;
                                            local_34 = local_34 + (int)local_90;
                                            local_40 = local_40 + (int)local_88;
                                            local_38 = local_38 - 1;
                                        } while (1 < (int)local_38);
                                    }
                                } else {
                                    puVar9 = &local_58->field_56[(long)(int)uVar15];
                                    local_78 = (SharedArray<unsigned int>*)(((uint64_t)local_78._4_4_ << 32) |
                                                                            (uint32_t)(*puVar9));
                                    local_b8 = (SharedArray<unsigned int>*)&local_58->field_120;
                                    if (uVar13 - uVar15 != 0 && (int)uVar15 <= (int)uVar13) {
                                        local_80 = (SharedArray<unsigned int>*)(((uint64_t)local_80._4_4_ << 32) |
                                                                                (uint32_t)((uVar13 - uVar15) + 1));
                                        local_50 = uVar20;
                                        do {
                                            pAVar10 = (Array<unsigned int>*)*local_c8;
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
                                                (SharedArray<unsigned int>*)(((uint64_t)local_78._4_4_ << 32) |
                                                                             (uint32_t)(iVar5 + local_58->field_104));
                                            local_3c = uVar13 + (int)local_98;
                                            local_34 = local_34 + (int)local_90;
                                            local_40 = local_40 + (int)local_88;
                                            iVar5 = (int)local_80 - 1;
                                            local_80 = (SharedArray<unsigned int>*)(((uint64_t)local_80._4_4_ << 32) |
                                                                                    (uint32_t)iVar5);
                                        } while (1 < iVar5);
                                    }
                                    if (0 < (int)local_38) {
                                        local_38 = local_38 + 1;
                                        do {
                                            pAVar10 = (Array<unsigned int>*)*local_c8;
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
                                                (SharedArray<unsigned int>*)(((uint64_t)local_78._4_4_ << 32) |
                                                                             (uint32_t)(iVar5 + local_58->field_104));
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
                        local_48 = (arg8 * 512 - local_60 * local_44) + local_60;
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
                            local_4c = arg6 * 16384 - ((int)local_34 >> 31 & local_34 * local_64);
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
                                piVar11 = &local_58->field_56[(long)(int)uVar15];
                                iVar5 = *piVar11;
                                local_78 = (SharedArray<unsigned int>*)&local_58->field_120;
                                if (uVar13 - uVar15 != 0 && (int)uVar15 <= (int)uVar13) {
                                    local_80 = (SharedArray<unsigned int>*)(((uint64_t)local_80._4_4_ << 32) |
                                                                            (uint32_t)((uVar13 - uVar15) + 1));
                                    do {
                                        pAVar10 = (Array<unsigned int>*)*local_c8;
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
                                        iVar6 = (int)local_80 - 1;
                                        local_80 = (SharedArray<unsigned int>*)(((uint64_t)local_80._4_4_ << 32) |
                                                                                (uint32_t)iVar6);
                                    } while (1 < iVar6);
                                }
                                if (0 < (int)local_38) {
                                    local_38 = local_38 + 1;
                                    do {
                                        pAVar10 = (Array<unsigned int>*)*local_c8;
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
                                piVar11 = &local_58->field_56[(long)(int)uVar15];
                                iVar5 = *piVar11;
                                local_78 = (SharedArray<unsigned int>*)&local_58->field_120;
                                if (uVar13 - uVar15 != 0 && (int)uVar15 <= (int)uVar13) {
                                    local_80 = (SharedArray<unsigned int>*)(((uint64_t)local_80._4_4_ << 32) |
                                                                            (uint32_t)((uVar13 - uVar15) + 1));
                                    do {
                                        pAVar10 = (Array<unsigned int>*)*local_c8;
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
                                        iVar6 = (int)local_80 - 1;
                                        local_80 = (SharedArray<unsigned int>*)(((uint64_t)local_80._4_4_ << 32) |
                                                                                (uint32_t)iVar6);
                                    } while (1 < iVar6);
                                }
                                if (0 < (int)local_38) {
                                    local_38 = local_38 + 1;
                                    do {
                                        pAVar10 = (Array<unsigned int>*)*local_c8;
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
                            local_40 = arg4 * 16384 - ((int)local_38 >> 31 & local_38 * local_64);
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
                                piVar11 = &local_58->field_56[(long)(int)uVar15];
                                iVar5 = *piVar11;
                                local_78 = (SharedArray<unsigned int>*)&local_58->field_120;
                                if (uVar20 - uVar15 != 0 && (int)uVar15 <= (int)uVar20) {
                                    local_80 = (SharedArray<unsigned int>*)(((uint64_t)local_80._4_4_ << 32) |
                                                                            (uint32_t)((uVar20 - uVar15) + 1));
                                    do {
                                        pAVar10 = (Array<unsigned int>*)*local_c8;
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
                                        iVar6 = (int)local_80 - 1;
                                        local_80 = (SharedArray<unsigned int>*)(((uint64_t)local_80._4_4_ << 32) |
                                                                                (uint32_t)iVar6);
                                    } while (1 < iVar6);
                                }
                                if (0 < (int)local_34) {
                                    local_34 = local_34 + 1;
                                    do {
                                        pAVar10 = (Array<unsigned int>*)*local_c8;
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
                                piVar11 = &local_58->field_56[(long)(int)uVar15];
                                iVar5 = *piVar11;
                                local_78 = (SharedArray<unsigned int>*)&local_58->field_120;
                                if (uVar20 - uVar15 != 0 && (int)uVar15 <= (int)uVar20) {
                                    local_80 = (SharedArray<unsigned int>*)(((uint64_t)local_80._4_4_ << 32) |
                                                                            (uint32_t)((uVar20 - uVar15) + 1));
                                    do {
                                        pAVar10 = (Array<unsigned int>*)*local_c8;
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
                                        iVar6 = (int)local_80 - 1;
                                        local_80 = (SharedArray<unsigned int>*)(((uint64_t)local_80._4_4_ << 32) |
                                                                                (uint32_t)iVar6);
                                    } while (1 < iVar6);
                                }
                                if (0 < (int)local_34) {
                                    local_34 = local_34 + 1;
                                    do {
                                        pAVar10 = (Array<unsigned int>*)*local_c8;
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
                        local_48 = (arg7 * 512 - local_60 * arg4) + local_60;
                        uVar15 = arg4 * 16384;
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
                                puVar9 = &local_58->field_56[(long)(int)uVar20];
                                local_78 = (SharedArray<unsigned int>*)(((uint64_t)local_78._4_4_ << 32) |
                                                                        (uint32_t)(*puVar9));
                                local_b8 = (SharedArray<unsigned int>*)&local_58->field_120;
                                if (uVar13 - uVar20 != 0 && (int)uVar20 <= (int)uVar13) {
                                    local_80 = (SharedArray<unsigned int>*)(((uint64_t)local_80._4_4_ << 32) |
                                                                            (uint32_t)((uVar13 - uVar20) + 1));
                                    local_50 = uVar15;
                                    do {
                                        pAVar10 = (Array<unsigned int>*)*local_c8;
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
                                        local_78 =
                                            (SharedArray<unsigned int>*)(((uint64_t)local_78._4_4_ << 32) |
                                                                         (uint32_t)(iVar5 + local_58->field_104));
                                        local_4c = local_4c + (int)local_98;
                                        local_38 = uVar13 + (int)local_90;
                                        local_3c = local_3c + (int)local_88;
                                        iVar5 = (int)local_80 - 1;
                                        local_80 = (SharedArray<unsigned int>*)(((uint64_t)local_80._4_4_ << 32) |
                                                                                (uint32_t)iVar5);
                                    } while (1 < iVar5);
                                }
                                if (0 < (int)local_34) {
                                    local_34 = local_34 + 1;
                                    do {
                                        pAVar10 = (Array<unsigned int>*)*local_c8;
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
                                        local_78 =
                                            (SharedArray<unsigned int>*)(((uint64_t)local_78._4_4_ << 32) |
                                                                         (uint32_t)(iVar5 + local_58->field_104));
                                        local_4c = uVar15 + (int)local_98;
                                        local_38 = local_38 + (int)local_90;
                                        local_3c = local_3c + (int)local_88;
                                        local_34 = local_34 - 1;
                                    } while (1 < (int)local_34);
                                }
                            } else {
                                puVar9 = &local_58->field_56[(long)(int)uVar20];
                                local_78 = (SharedArray<unsigned int>*)(((uint64_t)local_78._4_4_ << 32) |
                                                                        (uint32_t)(*puVar9));
                                local_b8 = (SharedArray<unsigned int>*)&local_58->field_120;
                                if (uVar13 - uVar20 != 0 && (int)uVar20 <= (int)uVar13) {
                                    local_80 = (SharedArray<unsigned int>*)(((uint64_t)local_80._4_4_ << 32) |
                                                                            (uint32_t)((uVar13 - uVar20) + 1));
                                    local_50 = uVar15;
                                    do {
                                        pAVar10 = (Array<unsigned int>*)*local_c8;
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
                                        local_78 =
                                            (SharedArray<unsigned int>*)(((uint64_t)local_78._4_4_ << 32) |
                                                                         (uint32_t)(iVar5 + local_58->field_104));
                                        local_4c = uVar20 + (int)local_98;
                                        local_38 = local_38 + (int)local_90;
                                        local_3c = local_3c + (int)local_88;
                                        iVar5 = (int)local_80 - 1;
                                        local_80 = (SharedArray<unsigned int>*)(((uint64_t)local_80._4_4_ << 32) |
                                                                                (uint32_t)iVar5);
                                    } while (1 < iVar5);
                                }
                                if (0 < (int)local_34) {
                                    local_34 = local_34 + 1;
                                    do {
                                        pAVar10 = (Array<unsigned int>*)*local_c8;
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
                                        local_78 =
                                            (SharedArray<unsigned int>*)(((uint64_t)local_78._4_4_ << 32) |
                                                                         (uint32_t)(iVar5 + local_58->field_104));
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
                            local_4c = arg6 * 16384 - ((int)local_34 >> 31 & local_34 * local_6c);
                            uVar13 = 0;
                            if (-1 < (int)local_34) {
                                uVar13 = local_34;
                            }
                            iVar12 = uVar20 - *(int*)&local_58->field_24;
                            local_38 = iVar12 * (int)local_98 + iVar7;
                            local_34 = iVar12 * (int)local_90 + iVar5;
                            local_44 = iVar12 * (int)local_88 + iVar6;
                            local_b8 =
                                (SharedArray<unsigned int>*)(((uint64_t)local_b8._4_4_ << 32) | (uint32_t)uVar13);
                            local_50 = uVar15;
                            if (((uVar13 == uVar20) || (local_68 <= local_64)) &&
                                ((uVar13 != uVar20 || (local_6c <= local_68)))) {
                                piVar11 = &local_58->field_56[(long)(int)uVar20];
                                iVar5 = *piVar11;
                                local_80 = (SharedArray<unsigned int>*)&pSVar1->field_120;
                                if ((int)local_b8 - uVar20 != 0 && (int)uVar20 <= (int)local_b8) {
                                    local_78 = (SharedArray<unsigned int>*)(((uint64_t)local_78._4_4_ << 32) |
                                                                            (uint32_t)(((int)local_b8 - uVar20) + 1));
                                    do {
                                        pAVar10 = (Array<unsigned int>*)*local_c8;
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
                                        iVar6 = (int)local_78 - 1;
                                        local_78 = (SharedArray<unsigned int>*)(((uint64_t)local_78._4_4_ << 32) |
                                                                                (uint32_t)iVar6);
                                    } while (1 < iVar6);
                                }
                                local_3c = local_3c - (int)local_b8;
                                if (0 < (int)local_3c) {
                                    local_3c = local_3c + 1;
                                    uVar15 = local_50;
                                    do {
                                        pAVar10 = (Array<unsigned int>*)*local_c8;
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
                                piVar11 = &local_58->field_56[(long)(int)uVar20];
                                iVar5 = *piVar11;
                                local_80 = (SharedArray<unsigned int>*)&pSVar1->field_120;
                                if ((int)local_b8 - uVar20 != 0 && (int)uVar20 <= (int)local_b8) {
                                    local_78 = (SharedArray<unsigned int>*)(((uint64_t)local_78._4_4_ << 32) |
                                                                            (uint32_t)(((int)local_b8 - uVar20) + 1));
                                    do {
                                        pAVar10 = (Array<unsigned int>*)*local_c8;
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
                                        iVar6 = (int)local_78 - 1;
                                        local_78 = (SharedArray<unsigned int>*)(((uint64_t)local_78._4_4_ << 32) |
                                                                                (uint32_t)iVar6);
                                    } while (1 < iVar6);
                                }
                                local_3c = local_3c - (int)local_b8;
                                if (0 < (int)local_3c) {
                                    local_3c = local_3c + 1;
                                    do {
                                        pAVar10 = (Array<unsigned int>*)*local_c8;
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
    }

    // 0x1003007c0
    void SoftwarePix3D::TextureRasterAffine(SharedArray<unsigned int>& sharedArray, Array<unsigned int>& arg2, int arg3,
                                            int arg4, int arg5, int arg6, int arg7, int arg8, int arg9, int arg10,
                                            int arg11, int arg12, int arg13, int arg14, int arg15) {
        unsigned int* puVar1;
        int iVar2;
        long lVar3;
        long lVar4;
        int iVar6;
        unsigned int uVar7;
        int iVar8;
        int iVar9;
        unsigned int uVar10;
        int iVar11;
        int iVar12;
        int iVar13;
        int iVar14;
        unsigned int uVar15;
        int iVar16;
        unsigned long uVar17;

        if (field_8[0] != '\0') {
            if (field_28 < arg7) {
                arg7 = field_28;
            }
            if (arg6 < 0) {
                arg6 = 0;
            }
        }
        unsigned int uVar5 = arg7 - arg6;
        if (uVar5 != 0 && arg6 <= arg7) {
            iVar12 = arg5 + arg6;
            iVar6 = arg6 - field_20;
            iVar2 = iVar6 * arg13 + arg10;
            iVar16 = iVar6 * arg14 + arg11;
            uVar7 = iVar6 * arg15 + arg12;
            iVar9 = (int)uVar5 >> 3;
            iVar6 = arg6 * arg9 + arg8 >> 8;
            if (field_10 == '\0') {
                iVar13 = 0;
                iVar14 = 0;
                iVar11 = 0;
                if (16383 < uVar7) {
                    iVar14 = iVar2 / ((int)uVar7 >> 14);
                    iVar11 = iVar16 / ((int)uVar7 >> 14);
                }
                uVar7 = uVar7 + arg15 * uVar5;
                iVar8 = 0;
                if (16383 < uVar7) {
                    iVar8 = (int)uVar7 >> 14;
                    iVar13 = (int)(iVar2 + arg13 * uVar5) / iVar8;
                    iVar8 = (int)(iVar16 + arg14 * uVar5) / iVar8;
                }
                uVar7 = iVar14 * 262144 + iVar11;
                iVar2 = (iVar13 - iVar14) / (int)uVar5;
                iVar16 = (iVar8 - iVar11) / (int)uVar5;
                iVar13 = iVar2 * 262144 + iVar16;
                if (field_9 == '\0') {
                    if (7 < (int)uVar5) {
                        lVar3 = (long)iVar12;
                        iVar11 = arg8 + arg9 * (arg6 + 8);
                        iVar9 = iVar9 + 1;
                        lVar4 = 0;
                        uVar15 = uVar7;
                        do {
                            puVar1 = &arg2[(unsigned long)(uVar15 >> 25 | uVar15 & 16256)];
                            uVar7 = *puVar1;
                            if (uVar7 != 0) {
                                puVar1 = &sharedArray[lVar3 + lVar4];
                                *puVar1 =
                                    ((uVar7 & 65280) * iVar6 & 16711680 | (uVar7 & 16711935) * iVar6 & 4278255360) >> 8;
                            }
                            uVar7 = iVar13 + uVar15;
                            puVar1 = &arg2[(unsigned long)(uVar7 >> 25 | uVar7 & 16256)];
                            uVar10 = *puVar1;
                            if (uVar10 != 0) {
                                puVar1 = &sharedArray[lVar3 + lVar4 + 1];
                                *puVar1 =
                                    ((uVar10 & 65280) * iVar6 & 16711680 | (uVar10 & 16711935) * iVar6 & 4278255360) >>
                                    8;
                            }
                            uVar7 = uVar7 + iVar13 * 7;
                            uVar10 = iVar2 * 524288 + iVar16 * 2 + uVar15;
                            puVar1 = &arg2[(unsigned long)(uVar10 >> 25 | uVar10 & 16256)];
                            uVar10 = *puVar1;
                            if (uVar10 != 0) {
                                puVar1 = &sharedArray[lVar3 + lVar4 + 2];
                                *puVar1 =
                                    ((uVar10 & 65280) * iVar6 & 16711680 | (uVar10 & 16711935) * iVar6 & 4278255360) >>
                                    8;
                            }
                            uVar10 = iVar2 * 786432 + iVar16 * 3 + uVar15;
                            puVar1 = &arg2[(unsigned long)(uVar10 >> 25 | uVar10 & 16256)];
                            uVar10 = *puVar1;
                            if (uVar10 != 0) {
                                puVar1 = &sharedArray[lVar3 + lVar4 + 3];
                                *puVar1 =
                                    ((uVar10 & 65280) * iVar6 & 16711680 | (uVar10 & 16711935) * iVar6 & 4278255360) >>
                                    8;
                            }
                            uVar10 = iVar2 * 1048576 + iVar16 * 4 + uVar15;
                            puVar1 = &arg2[(unsigned long)(uVar10 >> 25 | uVar10 & 16256)];
                            uVar10 = *puVar1;
                            if (uVar10 != 0) {
                                puVar1 = &sharedArray[lVar3 + lVar4 + 4];
                                *puVar1 =
                                    ((uVar10 & 65280) * iVar6 & 16711680 | (uVar10 & 16711935) * iVar6 & 4278255360) >>
                                    8;
                            }
                            uVar10 = iVar16 * 5 + iVar2 * 1310720 + uVar15;
                            puVar1 = &arg2[(unsigned long)(uVar10 >> 25 | uVar10 & 16256)];
                            uVar10 = *puVar1;
                            if (uVar10 != 0) {
                                puVar1 = &sharedArray[lVar3 + lVar4 + 5];
                                *puVar1 =
                                    ((uVar10 & 65280) * iVar6 & 16711680 | (uVar10 & 16711935) * iVar6 & 4278255360) >>
                                    8;
                            }
                            uVar10 = iVar2 * 1572864 + iVar16 * 6 + uVar15;
                            puVar1 = &arg2[(unsigned long)(uVar10 >> 25 | uVar10 & 16256)];
                            uVar10 = *puVar1;
                            if (uVar10 != 0) {
                                puVar1 = &sharedArray[lVar3 + lVar4 + 6];
                                *puVar1 =
                                    ((uVar10 & 65280) * iVar6 & 16711680 | (uVar10 & 16711935) * iVar6 & 4278255360) >>
                                    8;
                            }
                            uVar15 = uVar15 + iVar16 * 7 + iVar2 * 1835008;
                            puVar1 = &arg2[(unsigned long)(uVar15 >> 25 | uVar15 & 16256)];
                            uVar15 = *puVar1;
                            if (uVar15 != 0) {
                                puVar1 = &sharedArray[lVar3 + lVar4 + 7];
                                *puVar1 =
                                    ((uVar15 & 65280) * iVar6 & 16711680 | (uVar15 & 16711935) * iVar6 & 4278255360) >>
                                    8;
                            }
                            iVar6 = iVar11 >> 8;
                            lVar4 = lVar4 + 8;
                            iVar11 = iVar11 + arg9 * 8;
                            iVar9 = iVar9 - 1;
                            uVar15 = uVar7;
                        } while (1 < iVar9);
                        iVar12 = iVar12 + (int)lVar4;
                    }
                    if ((uVar5 & 7) != 0) {
                        uVar17 = (unsigned long)iVar12;
                        iVar12 = (uVar5 & 7) + 1;
                        do {
                            puVar1 = &arg2[(unsigned long)(uVar7 >> 25 | uVar7 & 16256)];
                            uVar5 = *puVar1;
                            if (uVar5 != 0) {
                                puVar1 = &sharedArray[uVar17];
                                *puVar1 =
                                    ((uVar5 & 65280) * iVar6 & 16711680 | (uVar5 & 16711935) * iVar6 & 4278255360) >> 8;
                            }
                            uVar17 = uVar17 + 1;
                            uVar7 = uVar7 + iVar13;
                            iVar12 = iVar12 - 1;
                        } while (1 < iVar12);
                    }
                } else {
                    if (7 < (int)uVar5) {
                        lVar4 = (long)iVar12;
                        iVar11 = arg8 + arg9 * (arg6 + 8);
                        iVar9 = iVar9 + 1;
                        lVar3 = 0;
                        uVar15 = uVar7;
                        do {
                            puVar1 = &arg2[(unsigned long)(uVar15 >> 25 | uVar15 & 16256)];
                            uVar7 = *puVar1;
                            puVar1 = &sharedArray[lVar4 + lVar3];
                            *puVar1 =
                                ((uVar7 & 65280) * iVar6 & 16711680 | (uVar7 & 16711935) * iVar6 & 4278255360) >> 8;
                            uVar7 = iVar13 + uVar15;
                            puVar1 = &arg2[(unsigned long)(uVar7 >> 25 | uVar7 & 16256)];
                            uVar10 = *puVar1;
                            puVar1 = &sharedArray[lVar3 + lVar4 + 1];
                            *puVar1 =
                                ((uVar10 & 65280) * iVar6 & 16711680 | (uVar10 & 16711935) * iVar6 & 4278255360) >> 8;
                            uVar7 = uVar7 + iVar13 * 7;
                            uVar10 = iVar2 * 524288 + iVar16 * 2 + uVar15;
                            puVar1 = &arg2[(unsigned long)(uVar10 >> 25 | uVar10 & 16256)];
                            uVar10 = *puVar1;
                            puVar1 = &sharedArray[lVar3 + lVar4 + 2];
                            *puVar1 =
                                ((uVar10 & 65280) * iVar6 & 16711680 | (uVar10 & 16711935) * iVar6 & 4278255360) >> 8;
                            uVar10 = iVar2 * 786432 + iVar16 * 3 + uVar15;
                            puVar1 = &arg2[(unsigned long)(uVar10 >> 25 | uVar10 & 16256)];
                            uVar10 = *puVar1;
                            puVar1 = &sharedArray[lVar3 + lVar4 + 3];
                            *puVar1 =
                                ((uVar10 & 65280) * iVar6 & 16711680 | (uVar10 & 16711935) * iVar6 & 4278255360) >> 8;
                            uVar10 = iVar2 * 1048576 + iVar16 * 4 + uVar15;
                            puVar1 = &arg2[(unsigned long)(uVar10 >> 25 | uVar10 & 16256)];
                            uVar10 = *puVar1;
                            puVar1 = &sharedArray[lVar3 + lVar4 + 4];
                            *puVar1 =
                                ((uVar10 & 65280) * iVar6 & 16711680 | (uVar10 & 16711935) * iVar6 & 4278255360) >> 8;
                            uVar10 = iVar16 * 5 + iVar2 * 1310720 + uVar15;
                            puVar1 = &arg2[(unsigned long)(uVar10 >> 25 | uVar10 & 16256)];
                            uVar10 = *puVar1;
                            puVar1 = &sharedArray[lVar3 + lVar4 + 5];
                            *puVar1 =
                                ((uVar10 & 65280) * iVar6 & 16711680 | (uVar10 & 16711935) * iVar6 & 4278255360) >> 8;
                            uVar10 = iVar2 * 1572864 + iVar16 * 6 + uVar15;
                            puVar1 = &arg2[(unsigned long)(uVar10 >> 25 | uVar10 & 16256)];
                            uVar10 = *puVar1;
                            puVar1 = &sharedArray[lVar3 + lVar4 + 6];
                            *puVar1 =
                                ((uVar10 & 65280) * iVar6 & 16711680 | (uVar10 & 16711935) * iVar6 & 4278255360) >> 8;
                            uVar15 = uVar15 + iVar16 * 7 + iVar2 * 1835008;
                            puVar1 = &arg2[(unsigned long)(uVar15 >> 25 | uVar15 & 16256)];
                            uVar15 = *puVar1;
                            puVar1 = &sharedArray[lVar3 + lVar4 + 7];
                            *puVar1 =
                                ((uVar15 & 65280) * iVar6 & 16711680 | (uVar15 & 16711935) * iVar6 & 4278255360) >> 8;
                            iVar6 = iVar11 >> 8;
                            lVar3 = lVar3 + 8;
                            iVar11 = iVar11 + arg9 * 8;
                            iVar9 = iVar9 - 1;
                            uVar15 = uVar7;
                        } while (1 < iVar9);
                        iVar12 = iVar12 + (int)lVar3;
                    }
                    if ((uVar5 & 7) != 0) {
                        iVar2 = (uVar5 & 7) + 1;
                        uVar17 = (long)iVar12;
                        do {
                            puVar1 = &arg2[(unsigned long)(uVar7 >> 25 | uVar7 & 16256)];
                            uVar5 = *puVar1;
                            puVar1 = &sharedArray[uVar17];
                            *puVar1 =
                                ((uVar5 & 65280) * iVar6 & 16711680 | (uVar5 & 16711935) * iVar6 & 4278255360) >> 8;
                            uVar7 = uVar7 + iVar13;
                            iVar2 = iVar2 - 1;
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
                uVar7 = uVar7 + arg15 * uVar5;
                iVar8 = 0;
                if (4095 < uVar7) {
                    iVar8 = (int)uVar7 >> 12;
                    iVar13 = (int)(iVar2 + arg13 * uVar5) / iVar8;
                    iVar8 = (int)(iVar16 + arg14 * uVar5) / iVar8;
                }
                uVar7 = iVar14 * 1048576 + iVar11;
                iVar2 = (iVar13 - iVar14) / (int)uVar5;
                iVar16 = (iVar8 - iVar11) / (int)uVar5;
                iVar13 = iVar2 * 1048576 + iVar16;
                if (field_9 == '\0') {
                    if (7 < (int)uVar5) {
                        lVar3 = (long)iVar12;
                        iVar11 = arg8 + arg9 * (arg6 + 8);
                        iVar9 = iVar9 + 1;
                        lVar4 = 0;
                        uVar15 = uVar7;
                        do {
                            puVar1 = &arg2[(unsigned long)(uVar15 >> 26 | uVar15 & 4032)];
                            uVar7 = *puVar1;
                            if (uVar7 != 0) {
                                puVar1 = &sharedArray[lVar3 + lVar4];
                                *puVar1 =
                                    ((uVar7 & 65280) * iVar6 & 16711680 | (uVar7 & 16711935) * iVar6 & 4278255360) >> 8;
                            }
                            uVar7 = iVar13 + uVar15;
                            puVar1 = &arg2[(unsigned long)(uVar7 >> 26 | uVar7 & 4032)];
                            uVar10 = *puVar1;
                            if (uVar10 != 0) {
                                puVar1 = &sharedArray[lVar3 + lVar4 + 1];
                                *puVar1 =
                                    ((uVar10 & 65280) * iVar6 & 16711680 | (uVar10 & 16711935) * iVar6 & 4278255360) >>
                                    8;
                            }
                            uVar7 = uVar7 + iVar13 * 7;
                            uVar10 = iVar2 * 2097152 + iVar16 * 2 + uVar15;
                            puVar1 = &arg2[(unsigned long)(uVar10 >> 26 | uVar10 & 4032)];
                            uVar10 = *puVar1;
                            if (uVar10 != 0) {
                                puVar1 = &sharedArray[lVar3 + lVar4 + 2];
                                *puVar1 =
                                    ((uVar10 & 65280) * iVar6 & 16711680 | (uVar10 & 16711935) * iVar6 & 4278255360) >>
                                    8;
                            }
                            uVar10 = iVar2 * 3145728 + iVar16 * 3 + uVar15;
                            puVar1 = &arg2[(unsigned long)(uVar10 >> 26 | uVar10 & 4032)];
                            uVar10 = *puVar1;
                            if (uVar10 != 0) {
                                puVar1 = &sharedArray[lVar3 + lVar4 + 3];
                                *puVar1 =
                                    ((uVar10 & 65280) * iVar6 & 16711680 | (uVar10 & 16711935) * iVar6 & 4278255360) >>
                                    8;
                            }
                            uVar10 = iVar2 * 4194304 + iVar16 * 4 + uVar15;
                            puVar1 = &arg2[(unsigned long)(uVar10 >> 26 | uVar10 & 4032)];
                            uVar10 = *puVar1;
                            if (uVar10 != 0) {
                                puVar1 = &sharedArray[lVar3 + lVar4 + 4];
                                *puVar1 =
                                    ((uVar10 & 65280) * iVar6 & 16711680 | (uVar10 & 16711935) * iVar6 & 4278255360) >>
                                    8;
                            }
                            uVar10 = iVar16 * 5 + iVar2 * 5242880 + uVar15;
                            puVar1 = &arg2[(unsigned long)(uVar10 >> 26 | uVar10 & 4032)];
                            uVar10 = *puVar1;
                            if (uVar10 != 0) {
                                puVar1 = &sharedArray[lVar3 + lVar4 + 5];
                                *puVar1 =
                                    ((uVar10 & 65280) * iVar6 & 16711680 | (uVar10 & 16711935) * iVar6 & 4278255360) >>
                                    8;
                            }
                            uVar10 = iVar2 * 6291456 + iVar16 * 6 + uVar15;
                            puVar1 = &arg2[(unsigned long)(uVar10 >> 26 | uVar10 & 4032)];
                            uVar10 = *puVar1;
                            if (uVar10 != 0) {
                                puVar1 = &sharedArray[lVar3 + lVar4 + 6];
                                *puVar1 =
                                    ((uVar10 & 65280) * iVar6 & 16711680 | (uVar10 & 16711935) * iVar6 & 4278255360) >>
                                    8;
                            }
                            uVar15 = uVar15 + iVar16 * 7 + iVar2 * 7340032;
                            puVar1 = &arg2[(unsigned long)(uVar15 >> 26 | uVar15 & 4032)];
                            uVar15 = *puVar1;
                            if (uVar15 != 0) {
                                puVar1 = &sharedArray[lVar3 + lVar4 + 7];
                                *puVar1 =
                                    ((uVar15 & 65280) * iVar6 & 16711680 | (uVar15 & 16711935) * iVar6 & 4278255360) >>
                                    8;
                            }
                            iVar6 = iVar11 >> 8;
                            lVar4 = lVar4 + 8;
                            iVar11 = iVar11 + arg9 * 8;
                            iVar9 = iVar9 - 1;
                            uVar15 = uVar7;
                        } while (1 < iVar9);
                        iVar12 = iVar12 + (int)lVar4;
                    }
                    if ((uVar5 & 7) != 0) {
                        uVar17 = (unsigned long)iVar12;
                        iVar12 = (uVar5 & 7) + 1;
                        do {
                            puVar1 = &arg2[(unsigned long)(uVar7 >> 26 | uVar7 & 4032)];
                            uVar5 = *puVar1;
                            if (uVar5 != 0) {
                                puVar1 = &sharedArray[uVar17];
                                *puVar1 =
                                    ((uVar5 & 65280) * iVar6 & 16711680 | (uVar5 & 16711935) * iVar6 & 4278255360) >> 8;
                            }
                            uVar17 = uVar17 + 1;
                            uVar7 = uVar7 + iVar13;
                            iVar12 = iVar12 - 1;
                        } while (1 < iVar12);
                    }
                } else {
                    if (7 < (int)uVar5) {
                        lVar4 = (long)iVar12;
                        iVar11 = arg8 + arg9 * (arg6 + 8);
                        iVar9 = iVar9 + 1;
                        lVar3 = 0;
                        uVar15 = uVar7;
                        do {
                            puVar1 = &arg2[(unsigned long)(uVar15 >> 26 | uVar15 & 4032)];
                            uVar7 = *puVar1;
                            puVar1 = &sharedArray[lVar3 + lVar4];
                            *puVar1 =
                                ((uVar7 & 65280) * iVar6 & 16711680 | (uVar7 & 16711935) * iVar6 & 4278255360) >> 8;
                            uVar7 = iVar13 + uVar15;
                            puVar1 = &arg2[(unsigned long)(uVar7 >> 26 | uVar7 & 4032)];
                            uVar10 = *puVar1;
                            puVar1 = &sharedArray[lVar3 + lVar4 + 1];
                            *puVar1 =
                                ((uVar10 & 65280) * iVar6 & 16711680 | (uVar10 & 16711935) * iVar6 & 4278255360) >> 8;
                            uVar7 = uVar7 + iVar13 * 7;
                            uVar10 = iVar2 * 2097152 + iVar16 * 2 + uVar15;
                            puVar1 = &arg2[(unsigned long)(uVar10 >> 26 | uVar10 & 4032)];
                            uVar10 = *puVar1;
                            puVar1 = &sharedArray[lVar3 + lVar4 + 2];
                            *puVar1 =
                                ((uVar10 & 65280) * iVar6 & 16711680 | (uVar10 & 16711935) * iVar6 & 4278255360) >> 8;
                            uVar10 = iVar2 * 3145728 + iVar16 * 3 + uVar15;
                            puVar1 = &arg2[(unsigned long)(uVar10 >> 26 | uVar10 & 4032)];
                            uVar10 = *puVar1;
                            puVar1 = &sharedArray[lVar3 + lVar4 + 3];
                            *puVar1 =
                                ((uVar10 & 65280) * iVar6 & 16711680 | (uVar10 & 16711935) * iVar6 & 4278255360) >> 8;
                            uVar10 = iVar2 * 4194304 + iVar16 * 4 + uVar15;
                            puVar1 = &arg2[(unsigned long)(uVar10 >> 26 | uVar10 & 4032)];
                            uVar10 = *puVar1;
                            puVar1 = &sharedArray[lVar3 + lVar4 + 4];
                            *puVar1 =
                                ((uVar10 & 65280) * iVar6 & 16711680 | (uVar10 & 16711935) * iVar6 & 4278255360) >> 8;
                            uVar10 = iVar16 * 5 + iVar2 * 5242880 + uVar15;
                            puVar1 = &arg2[(unsigned long)(uVar10 >> 26 | uVar10 & 4032)];
                            uVar10 = *puVar1;
                            puVar1 = &sharedArray[lVar3 + lVar4 + 5];
                            *puVar1 =
                                ((uVar10 & 65280) * iVar6 & 16711680 | (uVar10 & 16711935) * iVar6 & 4278255360) >> 8;
                            uVar10 = iVar2 * 6291456 + iVar16 * 6 + uVar15;
                            puVar1 = &arg2[(unsigned long)(uVar10 >> 26 | uVar10 & 4032)];
                            uVar10 = *puVar1;
                            puVar1 = &sharedArray[lVar3 + lVar4 + 6];
                            *puVar1 =
                                ((uVar10 & 65280) * iVar6 & 16711680 | (uVar10 & 16711935) * iVar6 & 4278255360) >> 8;
                            uVar15 = uVar15 + iVar16 * 7 + iVar2 * 7340032;
                            puVar1 = &arg2[(unsigned long)(uVar15 >> 26 | uVar15 & 4032)];
                            uVar15 = *puVar1;
                            puVar1 = &sharedArray[lVar3 + lVar4 + 7];
                            *puVar1 =
                                ((uVar15 & 65280) * iVar6 & 16711680 | (uVar15 & 16711935) * iVar6 & 4278255360) >> 8;
                            iVar6 = iVar11 >> 8;
                            lVar3 = lVar3 + 8;
                            iVar11 = iVar11 + arg9 * 8;
                            iVar9 = iVar9 - 1;
                            uVar15 = uVar7;
                        } while (1 < iVar9);
                        iVar12 = iVar12 + (int)lVar3;
                    }
                    if ((uVar5 & 7) != 0) {
                        iVar2 = (uVar5 & 7) + 1;
                        uVar17 = (long)iVar12;
                        do {
                            puVar1 = &arg2[(unsigned long)(uVar7 >> 26 | uVar7 & 4032)];
                            uVar5 = *puVar1;
                            puVar1 = &sharedArray[uVar17];
                            *puVar1 =
                                ((uVar5 & 65280) * iVar6 & 16711680 | (uVar5 & 16711935) * iVar6 & 4278255360) >> 8;
                            uVar7 = uVar7 + iVar13;
                            iVar2 = iVar2 - 1;
                            uVar17 = uVar17 + 1;
                        } while (1 < iVar2);
                    }
                }
            }
        }
    }

    // 0x100301cd0
    unsigned int TextureRasterWithAlphaChannel(int arg1, int arg2) {
        return ((arg1 & 16711935U) * arg2 & 4278255360 | (arg1 & 65280U) * arg2 & 16711680) >> 8 | 4278190080;
    }

} // namespace jag::oldscape::dash3d
