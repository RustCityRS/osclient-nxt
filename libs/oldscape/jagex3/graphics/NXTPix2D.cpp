// libs/oldscape/jagex3/graphics/NXTPix2D.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.oldscape.jagex3

#include "NXTPix2D.h"

namespace jag::oldscape::graphics {
    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    NXTPix2D::PrepareRender();

    // 0x100314930, 64 bytes, placed by class name and debug map
    // NXTPix2D::Cls()
    void NXTPix2D::Cls() {
        undefined8 uVar1;
        long lVar2;

        uVar1 = (&field_32)->data();
        lVar2 = (&field_32)->HeapBeginPtr();
        ___bzero(uVar1, lVar2 * 4);
    }

    // 0x100314970, 16 bytes, placed by class name and debug map
    // NXTPix2D::ClearRect(int, int, int, int)
    void NXTPix2D::ClearRect(int param_1, int param_2, int param_3, int param_4) {
        FillRect_Inner(this, param_1, param_2, param_3, param_4, 0);
    }

    // 0x100314980, 288 bytes, placed by class name and debug map
    // NXTPix2D::FillRect_Inner(int, int, int, int, unsigned int)
    void NXTPix2D::FillRect_Inner(int param_1, int param_2, int param_3, int param_4, uint param_5) {
        uint uVar1;
        bool bVar2;
        uint uVar3;
        uint* puVar4;
        int iVar5;
        int iVar6;
        uint uVar7;
        ulong uVar8;
        ulong uVar9;
        int iVar10;
        uint uVar11;
        int iVar12;

        uVar11 = field_24;
        iVar10 = param_1 - uVar11;
        if (param_1 < (int)uVar11) {
            uVar3 = uVar11;
        } else {
            iVar10 = 0;
            uVar3 = param_1;
        }
        iVar12 = field_16;
        iVar6 = param_2 - iVar12;
        if (iVar12 <= param_2) {
            iVar6 = 0;
            iVar12 = param_2;
        }
        uVar1 = field_28;
        iVar5 = uVar1 - uVar3;
        if ((int)(iVar10 + param_3 + uVar3) <= (int)uVar1) {
            iVar5 = iVar10 + param_3;
        }
        iVar10 = field_20 - iVar12;
        if (iVar6 + param_4 + iVar12 <= field_20) {
            iVar10 = iVar6 + param_4;
        }
        if (0 < iVar10) {
            iVar6 = field_8;
            uVar7 = iVar12 * iVar6 + uVar3;
            if ((int)uVar11 < param_1) {
                param_1 = uVar11;
            }
            uVar11 = (param_3 + param_1 + uVar3) - uVar11;
            if ((int)uVar1 < (int)uVar11) {
                uVar11 = uVar1;
            }
            iVar10 = -iVar10;
            do {
                uVar9 = (ulong)uVar7;
                if (-iVar5 < 0) {
                    uVar8 = (long)(int)uVar7;
                    iVar12 = ~uVar11 + uVar3;
                    do {
                        uVar9 = uVar8 + 1;
                        puVar4 =
                            (uint*)SharedArray<unsigned int>::operator[]((SharedArray<unsigned int>*)&field_32, uVar8);
                        *puVar4 = param_5;
                        iVar12 = iVar12 + 1;
                        uVar8 = uVar9;
                    } while (iVar12 < -1);
                }
                uVar7 = (int)uVar9 + (iVar6 - iVar5);
                bVar2 = iVar10 < -1;
                iVar10 = iVar10 + 1;
            } while (bVar2);
        }
    }

    // 0x100314aa0, 464 bytes, placed by class name and debug map
    // NXTPix2D::FillRectTrans(int, int, int, int, unsigned int, unsigned int)
    void NXTPix2D::FillRectTrans(int param_1, int param_2, int param_3, int param_4, uint param_5, uint param_6) {
        int iVar1;
        uint uVar2;
        uint uVar3;
        uint uVar4;
        uint* puVar5;
        uint uVar6;
        ulong uVar7;
        int iVar8;
        undefined4 in_register_00000084;
        int iVar9;
        uint uVar10;
        int iVar11;
        int iVar12;

        if (param_6 != 0) {
            if (param_6 < 255) {
                uVar10 = field_24;
                uVar2 = param_1;
                iVar12 = 0;
                if (param_1 < (int)uVar10) {
                    uVar2 = uVar10;
                    iVar12 = param_1 - uVar10;
                }
                iVar11 = field_16;
                iVar8 = param_2 - iVar11;
                if (iVar11 <= param_2) {
                    iVar11 = param_2;
                    iVar8 = 0;
                }
                uVar4 = field_28;
                iVar9 = uVar4 - uVar2;
                if ((int)(iVar12 + param_3 + uVar2) <= (int)uVar4) {
                    iVar9 = iVar12 + param_3;
                }
                iVar12 = field_20 - iVar11;
                if (iVar8 + param_4 + iVar11 <= field_20) {
                    iVar12 = iVar8 + param_4;
                }
                uVar3 = ComputeCompositeRGB(param_5, param_6);
                iVar8 = 0;
                if (0 < iVar12) {
                    iVar1 = field_8;
                    uVar6 = iVar11 * iVar1 + uVar2;
                    if ((int)uVar10 < param_1) {
                        param_1 = uVar10;
                    }
                    uVar10 = (param_3 + param_1 + uVar2) - uVar10;
                    if ((int)uVar4 < (int)uVar10) {
                        uVar10 = uVar4;
                    }
                    do {
                        uVar7 = (ulong)uVar6;
                        if (-iVar9 < 0) {
                            uVar7 = (ulong)(int)uVar6;
                            iVar11 = ~uVar10 + uVar2;
                            do {
                                puVar5 = (uint*)SharedArray<unsigned int>::operator[](
                                    (SharedArray<unsigned int>*)&field_32, uVar7);
                                uVar4 = param_5 & 16777215 | param_6 << 24;
                                if (*puVar5 != 0) {
                                    uVar4 = BlendPixel(uVar3, param_6, 255 - param_6, *puVar5);
                                }
                                puVar5 = (uint*)SharedArray<unsigned int>::operator[](
                                    (SharedArray<unsigned int>*)&field_32, uVar7);
                                *puVar5 = uVar4;
                                uVar7 = uVar7 + 1;
                                iVar11 = iVar11 + 1;
                            } while (iVar11 < -1);
                        }
                        uVar6 = (int)uVar7 + (iVar1 - iVar9);
                        iVar8 = iVar8 + 1;
                    } while (iVar8 < iVar12);
                }
            } else {
                (*(code*)field_0[4])(this, param_1, param_2, param_3, CONCAT44(in_register_00000084, param_4), param_5);
            }
        }
    }

    // 0x100314c70, 32 bytes, placed by class name and debug map
    // NXTPix2D::FillRect(int, int, int, int, unsigned int)
    void NXTPix2D::FillRect(int param_1, int param_2, int param_3, int param_4, uint param_5) {
        FillRect_Inner(this, param_1, param_2, param_3, param_4, param_5 | 4278190080);
    }

    // 0x100314c90, 560 bytes, placed by class name and debug map
    // NXTPix2D::FillRectVGradTrans(int, int, int, int, unsigned int, unsigned int, unsigned int, unsigned int)
    void NXTPix2D::FillRectVGradTrans(int param_1, int param_2, int param_3, int param_4, uint param_5, uint param_6,
                                      uint param_7, uint param_8) {
        int iVar1;
        bool bVar2;
        int iVar3;
        int iVar4;
        int iVar5;
        uint* puVar6;
        uint uVar7;
        int iVar8;
        uint uVar9;
        ulong uVar10;
        uint uVar11;
        uint uVar12;
        int iVar13;
        int iVar14;
        uint uVar15;
        uint uVar16;
        uint uVar17;

        if ((0 < param_3) && (0 < param_4)) {
            iVar3 = (int)(65536 / (long)param_4);
            uVar16 = field_24;
            iVar8 = param_1 - uVar16;
            if (param_1 < (int)uVar16) {
                uVar12 = uVar16;
            } else {
                iVar8 = 0;
                uVar12 = param_1;
            }
            iVar4 = field_16;
            iVar13 = iVar4 - param_2;
            iVar5 = param_2;
            iVar1 = 0;
            if (iVar13 != 0 && param_2 <= iVar4) {
                iVar5 = iVar4;
                iVar1 = iVar13;
            }
            uVar11 = field_28;
            iVar14 = uVar11 - uVar12;
            if ((int)(iVar8 + param_3 + uVar12) <= (int)uVar11) {
                iVar14 = iVar8 + param_3;
            }
            iVar8 = field_20 - iVar5;
            if ((param_4 - iVar1) + iVar5 <= field_20) {
                iVar8 = param_4 - iVar1;
            }
            if (0 < iVar8) {
                iVar1 = field_8;
                uVar9 = iVar5 * iVar1 + uVar12;
                uVar7 = 0;
                if (param_2 < iVar4) {
                    uVar7 = iVar13 * iVar3;
                }
                if ((int)uVar16 < param_1) {
                    param_1 = uVar16;
                }
                uVar16 = (param_3 + param_1 + uVar12) - uVar16;
                if ((int)uVar11 < (int)uVar16) {
                    uVar16 = uVar11;
                }
                iVar8 = -iVar8;
                do {
                    uVar10 = (ulong)uVar9;
                    uVar11 = 65536 - uVar7 >> 8;
                    uVar15 = (uVar7 >> 8) * param_8 + uVar11 * param_7 >> 8;
                    uVar17 = uVar15 & 255;
                    if (uVar17 == 0) {
                        uVar9 = uVar9 + field_8;
                    } else {
                        iVar4 = ComputeCompositeRGB(param_5, uVar11);
                        iVar5 = ComputeCompositeRGB(param_6, uVar7 >> 8);
                        uVar11 = ComputeCompositeRGB(iVar5 + iVar4, uVar17);
                        if (-iVar14 < 0) {
                            uVar15 = iVar5 + iVar4 | uVar15 << 24;
                            uVar10 = (ulong)(int)uVar9;
                            iVar4 = ~uVar16 + uVar12;
                            do {
                                puVar6 = (uint*)SharedArray<unsigned int>::operator[](
                                    (SharedArray<unsigned int>*)&field_32, uVar10);
                                uVar9 = uVar15;
                                if ((*puVar6 != 0) && (uVar17 != 255)) {
                                    uVar9 = BlendPixel(uVar11, uVar17, uVar17 ^ 255, *puVar6);
                                }
                                puVar6 = (uint*)SharedArray<unsigned int>::operator[](
                                    (SharedArray<unsigned int>*)&field_32, uVar10);
                                *puVar6 = uVar9;
                                uVar10 = uVar10 + 1;
                                iVar4 = iVar4 + 1;
                            } while (iVar4 < -1);
                        }
                        uVar9 = (int)uVar10 + (iVar1 - iVar14);
                    }
                    uVar7 = uVar7 + iVar3;
                    bVar2 = iVar8 < -1;
                    iVar8 = iVar8 + 1;
                } while (bVar2);
            }
        }
    }

    // 0x100314ec0, 816 bytes, placed by class name and debug map
    // NXTPix2D::FillRect2Colour(int, int, int, int, unsigned int, unsigned int, Array<unsigned char, eastl::allocator>&, int, bool)
    void NXTPix2D::FillRect2Colour(int param_1, int param_2, int param_3, int param_4, uint param_5, uint param_6,
                                   Array* param_7, int param_8, bool param_9) {
        int iVar1;
        uint uVar2;
        int iVar3;
        ulong uVar4;
        char* pcVar5;
        uint* puVar6;
        int iVar7;
        int iVar8;
        uint uVar9;
        uint uVar10;
        uint uVar11;
        int iVar12;
        int local_90;

        if ((-1 < param_3 + param_1) && (-1 < param_4 + param_2)) {
            iVar1 = field_8;
            if (iVar1 - param_1 != 0 && param_1 <= iVar1) {
                iVar3 = field_12;
                if (iVar3 - param_2 != 0 && param_2 <= iVar3) {
                    uVar11 = -param_1;
                    uVar9 = param_1 >> 31 & uVar11;
                    if (param_1 < 0) {
                        param_3 = param_3 + param_1;
                    }
                    uVar10 = param_2 >> 31 & -param_2;
                    if (param_2 < 0) {
                        param_4 = param_4 + param_2;
                    }
                    if (iVar1 < param_3 + param_1) {
                        param_3 = iVar1 - param_1;
                    }
                    if (iVar3 < param_4 + param_2) {
                        param_4 = iVar3 - param_2;
                    }
                    uVar4 = param_7->end();
                    iVar1 = field_8;
                    local_90 = (int)(uVar4 / (ulong)(long)param_8);
                    if (param_9) {
                        if ((param_5 >> 24 != 255) || (param_6 >> 24 != 255)) {
                            if (param_4 < 1) {
                                return;
                            }
                            iVar3 = uVar10 + param_2;
                            iVar12 = param_4 + iVar3;
                            iVar7 = uVar9 + param_1;
                            uVar9 = iVar1 * iVar3 + iVar7;
                            do {
                                uVar4 = (ulong)uVar9;
                                if (0 < param_3) {
                                    uVar4 = (ulong)(int)uVar9;
                                    iVar8 = iVar7;
                                    do {
                                        pcVar5 = (char*)Array<unsigned char, eastl::allocator>::operator[](
                                            (Array<unsigned char, eastl::allocator>*)param_7,
                                            (long)((int)(uVar11 + iVar8) % param_8 +
                                                   ((iVar3 - param_2) % local_90) * param_8));
                                        uVar10 = param_6 >> 24;
                                        uVar9 = param_6;
                                        if (*pcVar5 == '\0') {
                                            uVar10 = param_5 >> 24;
                                            uVar9 = param_5;
                                        }
                                        puVar6 = (uint*)SharedArray<unsigned int>::operator[](
                                            (SharedArray<unsigned int>*)&field_32, uVar4);
                                        uVar2 = *puVar6;
                                        if ((uVar2 == 0) || (uVar10 == 255)) {
                                        LAB_100315140:
                                            puVar6 = (uint*)SharedArray<unsigned int>::operator[](
                                                (SharedArray<unsigned int>*)&field_32, uVar4);
                                            *puVar6 = uVar9;
                                        } else if (uVar10 != 0) {
                                            uVar9 = ComputeCompositeRGB(uVar9, uVar10);
                                            uVar9 = BlendPixel(uVar9, uVar10, uVar10 ^ 255, uVar2);
                                            goto LAB_100315140;
                                        }
                                        uVar4 = uVar4 + 1;
                                        iVar8 = iVar8 + 1;
                                    } while (iVar8 < param_3 + iVar7);
                                }
                                uVar9 = (int)uVar4 + (iVar1 - param_3);
                                iVar3 = iVar3 + 1;
                                if (iVar12 <= iVar3) {
                                    return;
                                }
                            } while (true);
                        }
                    }
                    if (0 < param_4) {
                        iVar7 = uVar10 + param_2;
                        iVar12 = param_4 + iVar7;
                        iVar3 = uVar9 + param_1;
                        uVar9 = iVar1 * iVar7 + iVar3;
                        do {
                            uVar4 = (ulong)uVar9;
                            if (0 < param_3) {
                                uVar4 = (ulong)(int)uVar9;
                                iVar8 = iVar3;
                                do {
                                    pcVar5 = (char*)Array<unsigned char, eastl::allocator>::operator[](
                                        (Array<unsigned char, eastl::allocator>*)param_7,
                                        (long)((int)(uVar11 + iVar8) % param_8 +
                                               ((iVar7 - param_2) % local_90) * param_8));
                                    uVar9 = param_6;
                                    if (*pcVar5 == '\0') {
                                        uVar9 = param_5;
                                    }
                                    puVar6 = (uint*)SharedArray<unsigned int>::operator[](
                                        (SharedArray<unsigned int>*)&field_32, uVar4);
                                    *puVar6 = uVar9;
                                    uVar4 = uVar4 + 1;
                                    iVar8 = iVar8 + 1;
                                } while (iVar8 < param_3 + iVar3);
                            }
                            uVar9 = (int)uVar4 + (iVar1 - param_3);
                            iVar7 = iVar7 + 1;
                        } while (iVar7 < iVar12);
                    }
                }
            }
        }
    }

    // 0x1003151f0, 144 bytes, placed by class name and debug map
    // NXTPix2D::HLine(int, int, int, unsigned int)
    void NXTPix2D::HLine(int param_1, int param_2, int param_3, uint param_4) {
        int iVar1;
        uint* puVar2;
        int iVar3;
        long lVar4;
        uint uVar5;

        if ((field_16 <= param_2) && (param_2 < field_20)) {
            uVar5 = field_24;
            iVar3 = param_1 - uVar5;
            if ((int)uVar5 <= param_1) {
                iVar3 = 0;
                uVar5 = param_1;
            }
            iVar1 = field_28 - uVar5;
            if ((int)(iVar3 + param_3 + uVar5) <= (int)field_28) {
                iVar1 = iVar3 + param_3;
            }
            if (0 < iVar1) {
                iVar3 = field_8;
                lVar4 = 0;
                do {
                    puVar2 = (uint*)SharedArray<unsigned int>::operator[]((SharedArray<unsigned int>*)&field_32,
                                                                          (int)(param_2 * iVar3 + uVar5) + lVar4);
                    *puVar2 = param_4 | 4278190080;
                    lVar4 = lVar4 + 1;
                } while (lVar4 < iVar1);
            }
        }
    }

    // 0x100315280, 320 bytes, placed by class name and debug map
    // NXTPix2D::HLineTrans(int, int, int, unsigned int, unsigned int)
    void NXTPix2D::HLineTrans(int param_1, int param_2, int param_3, uint param_4, uint param_5) {
        ulong uVar1;
        int iVar2;
        uint uVar3;
        undefined4 uVar4;
        undefined4* puVar5;
        int* piVar6;
        uint* puVar7;
        int iVar8;
        int iVar9;
        long lVar10;
        undefined1* this_00;
        uint uVar11;

        if (param_5 != 0) {
            if (param_5 < 255) {
                if ((field_16 <= param_2) && (param_2 < field_20)) {
                    uVar11 = field_24;
                    iVar9 = param_1 - uVar11;
                    if ((int)uVar11 <= param_1) {
                        uVar11 = param_1;
                        iVar9 = 0;
                    }
                    iVar8 = field_28 - uVar11;
                    if ((int)(iVar9 + param_3 + uVar11) <= (int)field_28) {
                        iVar8 = iVar9 + param_3;
                    }
                    uVar3 = ComputeCompositeRGB(param_4, param_5);
                    if (0 < iVar8) {
                        iVar9 = field_8;
                        this_00 = &field_32;
                        lVar10 = 0;
                        do {
                            uVar1 = (int)(uVar11 + param_2 * iVar9) + lVar10;
                            piVar6 =
                                (int*)SharedArray<unsigned int>::operator[]((SharedArray<unsigned int>*)this_00, uVar1);
                            iVar2 = *piVar6;
                            puVar7 = (uint*)SharedArray<unsigned int>::operator[]((SharedArray<unsigned int>*)this_00,
                                                                                  uVar1);
                            if (iVar2 == 0) {
                                *puVar7 = param_5 << 24 | uVar3;
                            } else {
                                uVar4 = BlendPixel(uVar3, param_5, 255 - param_5, *puVar7);
                                puVar5 = (undefined4*)SharedArray<unsigned int>::operator[](
                                    (SharedArray<unsigned int>*)this_00, uVar1);
                                *puVar5 = uVar4;
                            }
                            lVar10 = lVar10 + 1;
                        } while ((int)lVar10 < iVar8);
                    }
                }
            } else {
                (*(code*)field_0[7])(this, param_1, param_2);
            }
        }
    }

    // 0x1003153c0, 176 bytes, placed by class name and debug map
    // NXTPix2D::VLine(int, int, int, unsigned int)
    void NXTPix2D::VLine(int param_1, int param_2, int param_3, uint param_4) {
        uint* puVar1;
        int iVar2;
        int iVar3;
        int iVar4;
        int iVar5;

        if (((int)field_24 <= param_1) && (param_1 < (int)field_28)) {
            iVar4 = field_16;
            iVar2 = 0;
            iVar3 = param_2 - iVar4;
            if (iVar4 <= param_2) {
                iVar3 = 0;
                iVar4 = param_2;
            }
            iVar5 = field_20 - iVar4;
            if (iVar3 + param_3 + iVar4 <= field_20) {
                iVar5 = iVar3 + param_3;
            }
            if (0 < iVar5) {
                iVar3 = field_8;
                do {
                    puVar1 = (uint*)SharedArray<unsigned int>::operator[](
                        (SharedArray<unsigned int>*)&field_32, (long)(field_8 * iVar2 + iVar4 * iVar3 + param_1));
                    *puVar1 = param_4 | 4278190080;
                    iVar2 = iVar2 + 1;
                } while (iVar2 < iVar5);
            }
        }
    }

    // 0x100315470, 320 bytes, placed by class name and debug map
    // NXTPix2D::VLineTrans(int, int, int, unsigned int, unsigned int)
    void NXTPix2D::VLineTrans(int param_1, int param_2, int param_3, uint param_4, uint param_5) {
        undefined1* this_00;
        uint uVar1;
        undefined4 uVar2;
        undefined4* puVar3;
        int* piVar4;
        uint* puVar5;
        ulong uVar6;
        int iVar7;
        int iVar8;
        int iVar9;
        int iVar10;

        if (param_5 != 0) {
            if (param_5 < 255) {
                if (((int)field_24 <= param_1) && (param_1 < (int)field_28)) {
                    iVar8 = field_16;
                    iVar10 = 0;
                    iVar7 = param_2 - iVar8;
                    if (iVar8 <= param_2) {
                        iVar7 = 0;
                        iVar8 = param_2;
                    }
                    iVar9 = field_20 - iVar8;
                    if (iVar7 + param_3 + iVar8 <= field_20) {
                        iVar9 = iVar7 + param_3;
                    }
                    uVar1 = ComputeCompositeRGB(param_4, param_5);
                    if (0 < iVar9) {
                        this_00 = &field_32;
                        iVar8 = iVar8 * field_8 + param_1;
                        do {
                            uVar6 = (ulong)iVar8;
                            piVar4 =
                                (int*)SharedArray<unsigned int>::operator[]((SharedArray<unsigned int>*)this_00, uVar6);
                            iVar7 = *piVar4;
                            puVar5 = (uint*)SharedArray<unsigned int>::operator[]((SharedArray<unsigned int>*)this_00,
                                                                                  uVar6);
                            if (iVar7 == 0) {
                                *puVar5 = param_5 << 24 | uVar1;
                            } else {
                                uVar2 = BlendPixel(uVar1, param_5, 255 - param_5, *puVar5);
                                puVar3 = (undefined4*)SharedArray<unsigned int>::operator[](
                                    (SharedArray<unsigned int>*)this_00, uVar6);
                                *puVar3 = uVar2;
                            }
                            iVar8 = iVar8 + field_8;
                            iVar10 = iVar10 + 1;
                        } while (iVar10 < iVar9);
                    }
                }
            } else {
                (*(code*)field_0[9])(this, param_1, param_2);
            }
        }
    }

    // 0x1003155b0, 608 bytes, placed by class name and debug map
    // NXTPix2D::Line(int, int, int, int, unsigned int)
    void NXTPix2D::Line(int param_1, int param_2, int param_3, int param_4, uint param_5) {
        uint* puVar1;
        undefined** ppuVar2;
        undefined4 in_register_00000014;
        ulong uVar3;
        uint uVar4;
        ulong uVar5;
        undefined4 in_register_00000034;
        uint uVar6;
        int iVar7;
        int iVar8;
        int iVar9;
        int iVar10;
        double dVar11;

        uVar3 = CONCAT44(in_register_00000014, param_2);
        uVar5 = (ulong)(uint)param_3;
        uVar6 = param_5 | 4278190080;
        iVar9 = param_3 - param_1;
        iVar8 = param_4 - param_2;
        if (iVar8 == 0) {
            if (iVar9 < 0) {
                iVar9 = -iVar9;
                ppuVar2 = field_0;
            } else {
                ppuVar2 = field_0;
                uVar5 = CONCAT44(in_register_00000034, param_1);
            }
            (*(code*)ppuVar2[7])(this, uVar5, uVar3, iVar9 + 1, uVar6);
            return;
        }
        if (iVar9 == 0) {
            if (iVar8 < 0) {
                iVar8 = -iVar8;
                ppuVar2 = field_0;
                uVar3 = (ulong)(uint)param_4;
            } else {
                ppuVar2 = field_0;
            }
            (*(code*)ppuVar2[9])(this, CONCAT44(in_register_00000034, param_1), uVar3, iVar8 + 1, uVar6);
            return;
        }
        if (iVar8 + iVar9 < 0) {
            iVar9 = -iVar9;
            iVar8 = -iVar8;
            param_2 = param_4;
            param_1 = param_3;
            if (iVar9 <= iVar8)
                goto LAB_100315712;
        } else {
            uVar5 = (ulong)(uint)param_1;
            if (iVar9 <= iVar8) {
            LAB_100315712:
                dVar11 = (double)_floor((double)(iVar9 << 16) / (double)iVar8 + 0.5);
                iVar9 = field_16;
                iVar7 = param_2;
                if (iVar9 - param_2 != 0 && param_2 <= iVar9) {
                    iVar7 = iVar9;
                }
                iVar10 = field_20 + -1;
                if (iVar8 + param_2 < field_20) {
                    iVar10 = iVar8 + param_2;
                }
                if (iVar10 < iVar7) {
                    return;
                }
                iVar8 = 0;
                if (param_2 < iVar9) {
                    iVar8 = (iVar9 - param_2) * (int)dVar11;
                }
                iVar9 = iVar8 + param_1 * 65536 + 32768;
                do {
                    iVar8 = iVar9 >> 16;
                    if (((int)field_24 <= iVar8) && (iVar8 < (int)field_28)) {
                        puVar1 = (uint*)SharedArray<unsigned int>::operator[]((SharedArray<unsigned int>*)&field_32,
                                                                              (long)(field_8 * iVar7 + iVar8));
                        *puVar1 = uVar6;
                    }
                    iVar9 = iVar9 + (int)dVar11;
                    iVar7 = iVar7 + 1;
                } while (iVar10 + 1 != iVar7);
                return;
            }
        }
        dVar11 = (double)_floor((double)(iVar8 << 16) / (double)iVar9 + 0.5);
        iVar8 = (int)uVar5;
        uVar4 = field_24;
        if (uVar4 - iVar8 != 0 && iVar8 <= (int)uVar4) {
            uVar5 = (ulong)uVar4;
        }
        iVar7 = field_28 - 1;
        if (iVar9 + iVar8 < (int)field_28) {
            iVar7 = iVar9 + iVar8;
        }
        if ((int)uVar5 <= iVar7) {
            iVar9 = 0;
            if (iVar8 < (int)uVar4) {
                iVar9 = (uVar4 - iVar8) * (int)dVar11;
            }
            iVar9 = param_2 * 65536 + iVar9 + 32768;
            do {
                iVar8 = iVar9 >> 16;
                if ((field_16 <= iVar8) && (iVar8 < field_20)) {
                    puVar1 = (uint*)SharedArray<unsigned int>::operator[]((SharedArray<unsigned int>*)&field_32,
                                                                          (long)(iVar8 * field_8 + (int)uVar5));
                    *puVar1 = uVar6;
                }
                iVar9 = iVar9 + (int)dVar11;
                uVar4 = (int)uVar5 + 1;
                uVar5 = (ulong)uVar4;
            } while (iVar7 + 1U != uVar4);
        }
    }

    // 0x100315810, 800 bytes, placed by class name and debug map
    // NXTPix2D::LineTrans(int, int, int, int, unsigned int, unsigned int)
    void NXTPix2D::LineTrans(int param_1, int param_2, int param_3, int param_4, uint param_5, uint param_6) {
        undefined1* puVar1;
        uint uVar2;
        uint uVar3;
        uint uVar4;
        int iVar5;
        undefined4 uVar6;
        int* piVar7;
        uint* puVar8;
        undefined4* puVar9;
        undefined** ppuVar10;
        undefined4 in_register_00000014;
        uint uVar11;
        int iVar12;
        undefined4 in_register_00000034;
        ulong uVar13;
        int iVar14;
        int iVar15;
        ulong uVar16;
        double dVar17;

        uVar13 = CONCAT44(in_register_00000034, param_1);
        uVar16 = CONCAT44(in_register_00000014, param_2);
        if (param_6 != 0) {
            if (param_6 < 255) {
                iVar15 = param_3 - param_1;
                iVar14 = param_4 - param_2;
                if (iVar14 == 0) {
                    if (iVar15 < 0) {
                        iVar15 = -iVar15;
                        ppuVar10 = field_0;
                        uVar13 = (ulong)(uint)param_3;
                    } else {
                        ppuVar10 = field_0;
                    }
                    (*(code*)ppuVar10[8])(this, uVar13, uVar16, iVar15 + 1, param_5, param_6);
                } else if (iVar15 == 0) {
                    if (iVar14 < 0) {
                        iVar14 = -iVar14;
                        ppuVar10 = field_0;
                        uVar16 = (ulong)(uint)param_4;
                    } else {
                        ppuVar10 = field_0;
                    }
                    (*(code*)ppuVar10[10])(this, uVar13, uVar16, iVar14 + 1, param_5, param_6);
                } else {
                    if (iVar14 + iVar15 < 0) {
                        iVar15 = -iVar15;
                        iVar14 = -iVar14;
                        param_1 = param_3;
                        param_2 = param_4;
                    }
                    uVar2 = param_6 << 24 | param_5;
                    uVar3 = ComputeCompositeRGB(param_5, param_6);
                    if (iVar14 < iVar15) {
                        dVar17 = (double)_floor((double)(iVar14 << 16) / (double)iVar15 + 0.5);
                        uVar4 = field_24;
                        uVar11 = param_1;
                        if (uVar4 - param_1 != 0 && param_1 <= (int)uVar4) {
                            uVar11 = uVar4;
                        }
                        iVar14 = field_28 - 1;
                        if (iVar15 + param_1 < (int)field_28) {
                            iVar14 = iVar15 + param_1;
                        }
                        if ((int)uVar11 <= iVar14) {
                            iVar15 = 0;
                            if (param_1 < (int)uVar4) {
                                iVar15 = (uVar4 - param_1) * (int)dVar17;
                            }
                            puVar1 = &field_32;
                            iVar15 = param_2 * 65536 + iVar15 + 32768;
                            do {
                                iVar5 = iVar15 >> 16;
                                if ((field_16 <= iVar5) && (iVar5 < field_20)) {
                                    uVar16 = (ulong)(int)(iVar5 * field_8 + uVar11);
                                    piVar7 = (int*)SharedArray<unsigned int>::operator[](
                                        (SharedArray<unsigned int>*)puVar1, uVar16);
                                    iVar5 = *piVar7;
                                    puVar8 = (uint*)SharedArray<unsigned int>::operator[](
                                        (SharedArray<unsigned int>*)puVar1, uVar16);
                                    if (iVar5 == 0) {
                                        uVar4 = uVar2;
                                    } else {
                                        uVar4 = BlendPixel(uVar3, param_6, 255 - param_6, *puVar8);
                                        puVar8 = (uint*)SharedArray<unsigned int>::operator[](
                                            (SharedArray<unsigned int>*)puVar1, uVar16);
                                    }
                                    *puVar8 = uVar4;
                                }
                                iVar15 = iVar15 + (int)dVar17;
                                uVar11 = uVar11 + 1;
                            } while (iVar14 + 1U != uVar11);
                        }
                    } else {
                        dVar17 = (double)_floor((double)(iVar15 << 16) / (double)iVar14 + 0.5);
                        iVar15 = field_16;
                        iVar5 = param_2;
                        if (iVar15 - param_2 != 0 && param_2 <= iVar15) {
                            iVar5 = iVar15;
                        }
                        iVar12 = field_20 + -1;
                        if (iVar14 + param_2 < field_20) {
                            iVar12 = iVar14 + param_2;
                        }
                        if (iVar5 <= iVar12) {
                            iVar14 = 0;
                            if (param_2 < iVar15) {
                                iVar14 = (iVar15 - param_2) * (int)dVar17;
                            }
                            puVar1 = &field_32;
                            iVar15 = iVar14 + param_1 * 65536 + 32768;
                            do {
                                iVar14 = iVar15 >> 16;
                                if (((int)field_24 <= iVar14) && (iVar14 < (int)field_28)) {
                                    uVar16 = (ulong)(field_8 * iVar5 + iVar14);
                                    piVar7 = (int*)SharedArray<unsigned int>::operator[](
                                        (SharedArray<unsigned int>*)puVar1, uVar16);
                                    iVar14 = *piVar7;
                                    puVar8 = (uint*)SharedArray<unsigned int>::operator[](
                                        (SharedArray<unsigned int>*)puVar1, uVar16);
                                    if (iVar14 == 0) {
                                        *puVar8 = uVar2;
                                    } else {
                                        uVar6 = BlendPixel(uVar3, param_6, 255 - param_6, *puVar8);
                                        puVar9 = (undefined4*)SharedArray<unsigned int>::operator[](
                                            (SharedArray<unsigned int>*)puVar1, uVar16);
                                        *puVar9 = uVar6;
                                    }
                                }
                                iVar15 = iVar15 + (int)dVar17;
                                iVar5 = iVar5 + 1;
                            } while (iVar12 + 1 != iVar5);
                        }
                    }
                }
            } else {
                (*(code*)field_0[11])(this, uVar13, uVar16, param_3);
            }
        }
    }

    // 0x100315b30, 208 bytes, placed by class name and debug map
    // NXTPix2D::FillCircle(int, int, int, unsigned int)
    void NXTPix2D::FillCircle(int param_1, int param_2, int param_3, uint param_4) {
        int iVar1;
        int iVar2;
        uint uVar3;
        uint uVar4;
        int iVar5;
        int iVar6;
        SectorHLineHelper<OpaqueHelper> local_38[4];
        int local_34;
        int local_30;
        int local_2c;

        SectorHLineHelper<OpaqueHelper>::SectorHLineHelper(local_38, param_4, 255);
        iVar1 = field_20;
        iVar5 = param_2 - param_3;
        if (iVar5 < iVar1) {
            iVar2 = field_16;
            iVar6 = param_3 + param_2 + 1;
            if (iVar2 <= iVar6) {
                uVar3 = field_28;
                if ((param_1 - param_3 < (int)uVar3) && (uVar4 = field_24, (int)uVar4 <= param_3 + param_1 + 1)) {
                    local_34 = param_1;
                    local_30 = param_2;
                    local_2c = param_3;
                    if ((iVar5 < iVar2) || (((iVar1 <= param_2 + param_3 || (param_1 - param_3 < (int)uVar4)) ||
                                             ((int)uVar3 <= param_3 + param_1)))) {
                        local_38->DrawClipped((SharedArray*)&field_32, field_8, iVar5, iVar6, uVar4, iVar2, uVar3,
                                              iVar1);
                    } else {
                        local_38->DrawUnclipped((SharedArray*)&field_32, field_8, iVar6);
                    }
                }
            }
        }
    }

    // 0x100315c00, 432 bytes, placed by class name and debug map
    // NXTPix2D::FillCircleTrans(int, int, int, unsigned int, unsigned int)
    void NXTPix2D::FillCircleTrans(int param_1, int param_2, int param_3, uint param_4, uint param_5) {
        int iVar1;
        int iVar2;
        uint uVar3;
        uint uVar4;
        int iVar5;
        int iVar6;
        SectorHLineHelper<OpaqueHelper> local_48[4];
        int local_44;
        int local_40;
        int local_3c;
        int local_38;
        int local_34;
        int local_30;

        if (param_5 < 255) {
            if (param_5 != 0) {
                new (local_48) SectorHLineHelper<TransparentHelper>(param_4, param_5);
                iVar1 = field_20;
                iVar5 = param_2 - param_3;
                if (iVar5 < iVar1) {
                    iVar2 = field_16;
                    iVar6 = param_3 + param_2 + 1;
                    if (iVar2 <= iVar6) {
                        uVar3 = field_28;
                        if ((param_1 - param_3 < (int)uVar3) &&
                            (uVar4 = field_24, (int)uVar4 <= param_3 + param_1 + 1)) {
                            local_38 = param_1;
                            local_34 = param_2;
                            local_30 = param_3;
                            if ((iVar5 < iVar2) || (((iVar1 <= param_2 + param_3 || (param_1 - param_3 < (int)uVar4)) ||
                                                     ((int)uVar3 <= param_3 + param_1)))) {
                                local_48->DrawClipped((SharedArray*)&field_32, field_8, iVar5, iVar6, uVar4, iVar2,
                                                      uVar3, iVar1);
                            } else {
                                local_48->DrawUnclipped((SharedArray*)&field_32, field_8, iVar6);
                            }
                        }
                    }
                }
            }
        } else {
            SectorHLineHelper<OpaqueHelper>::SectorHLineHelper(local_48, param_4, 255);
            iVar1 = field_20;
            iVar5 = param_2 - param_3;
            if (iVar5 < iVar1) {
                iVar2 = field_16;
                iVar6 = param_3 + param_2 + 1;
                if (iVar2 <= iVar6) {
                    uVar3 = field_28;
                    if ((param_1 - param_3 < (int)uVar3) && (uVar4 = field_24, (int)uVar4 <= param_3 + param_1 + 1)) {
                        local_44 = param_1;
                        local_40 = param_2;
                        local_3c = param_3;
                        if (((iVar5 < iVar2) || ((iVar1 <= param_2 + param_3 || (param_1 - param_3 < (int)uVar4)))) ||
                            ((int)uVar3 <= param_3 + param_1)) {
                            local_48->DrawClipped((SharedArray*)&field_32, field_8, iVar5, iVar6, uVar4, iVar2, uVar3,
                                                  iVar1);
                        } else {
                            local_48->DrawUnclipped((SharedArray*)&field_32, field_8, iVar6);
                        }
                    }
                }
            }
        }
    }

    // 0x100315db0, 160 bytes, placed by class name and debug map
    // NXTPix2D::DrawCircle(int, int, int, unsigned int, unsigned int)
    void NXTPix2D::DrawCircle(int param_1, int param_2, int param_3, uint param_4, uint param_5) {
        SectorHLineHelper<OpaqueHelper> local_48[4];
        int local_44;
        int local_40;
        int local_3c;
        int local_38;

        if (0 < param_3) {
            if ((uint)param_3 < param_4) {
                (*(code*)field_0[13])(this, param_1, param_2, param_3, param_5);
            } else {
                SectorHLineHelper<OpaqueHelper>::SectorHLineHelper(local_48, param_5, 255);
                local_44 = param_1;
                local_40 = param_2;
                local_3c = param_3 - param_4;
                local_38 = param_3;
                local_48->Draw((SharedArray*)&field_32, field_8, field_24, field_16, field_28, field_20);
            }
        }
    }

    // 0x100316190, 256 bytes, placed by class name and debug map
    // NXTPix2D::DrawCircleTrans(int, int, int, unsigned int, unsigned int, unsigned int)
    void NXTPix2D::DrawCircleTrans(int param_1, int param_2, int param_3, uint param_4, uint param_5, uint param_6) {
        SectorHLineHelper<OpaqueHelper> local_50[4];
        int local_4c;
        int local_48;
        int local_44;
        int local_40;
        int local_3c;
        int local_38;
        int local_34;

        if (0 < param_3) {
            if ((uint)param_3 < param_4) {
                (*(code*)field_0[14])(this, param_1, param_2, param_3, param_5, param_6);
            } else if (param_6 < 255) {
                if (param_6 != 0) {
                    new (local_50) SectorHLineHelper<TransparentHelper>(param_5, param_6);
                    local_40 = param_1;
                    local_3c = param_2;
                    local_38 = param_3 - param_4;
                    local_34 = param_3;
                    local_50->Draw((SharedArray*)&field_32, field_8, field_24, field_16, field_28, field_20);
                }
            } else {
                SectorHLineHelper<OpaqueHelper>::SectorHLineHelper(local_50, param_5, 255);
                local_4c = param_1;
                local_48 = param_2;
                local_44 = param_3 - param_4;
                local_40 = param_3;
                local_50->Draw((SharedArray*)&field_32, field_8, field_24, field_16, field_28, field_20);
            }
        }
    }

    // 0x1003166a0, 256 bytes, placed by class name and debug map
    // NXTPix2D::FillSector(int, int, int, int, int, unsigned int)
    void NXTPix2D::FillSector(int param_1, int param_2, int param_3, int param_4, int param_5, uint param_6) {
        int iVar1;
        int iVar2;
        uint uVar3;
        uint uVar4;
        int iVar5;
        int iVar6;
        SectorHLineHelper<OpaqueHelper> local_58[24];

        SectorHLineHelper<OpaqueHelper>::SectorHLineHelper(local_58, param_6, 255);
        local_58->SetDirections(param_3, param_4, param_5);
        iVar1 = field_20;
        iVar5 = param_2 - param_3;
        if (iVar5 < iVar1) {
            iVar2 = field_16;
            iVar6 = param_3 + param_2 + 1;
            if (iVar2 <= iVar6) {
                uVar3 = field_28;
                if ((param_1 - param_3 < (int)uVar3) && (uVar4 = field_24, (int)uVar4 <= param_1 + param_3 + 1)) {
                    if ((iVar5 < iVar2) || (((iVar1 <= param_2 + param_3 || (param_1 - param_3 < (int)uVar4)) ||
                                             ((int)uVar3 <= param_1 + param_3)))) {
                        local_58->DrawClipped((SharedArray*)&field_32, field_8, iVar5, iVar6, uVar4, iVar2, uVar3,
                                              iVar1);
                    } else {
                        local_58->DrawUnclipped((SharedArray*)&field_32, field_8, iVar6);
                    }
                }
            }
        }
    }

    // 0x100316870, 496 bytes, placed by class name and debug map
    // NXTPix2D::FillSectorTrans(int, int, int, int, int, unsigned int, unsigned int)
    void NXTPix2D::FillSectorTrans(int param_1, int param_2, int param_3, int param_4, int param_5, uint param_6,
                                   uint param_7) {
        int iVar1;
        int iVar2;
        uint uVar3;
        uint uVar4;
        int iVar5;
        int iVar6;
        SectorHLineHelper<OpaqueHelper> local_68[24];
        NXTPix2D* local_38;

        if (param_7 < 255) {
            if (param_7 != 0) {
                local_38 = this;
                new (local_68) SectorHLineHelper<TransparentHelper>(param_6, param_7);
                local_68->SetDirections(param_3, param_4, param_5);
                iVar1 = local_38->field_20;
                iVar5 = param_2 - param_3;
                if (iVar5 < iVar1) {
                    iVar2 = local_38->field_16;
                    iVar6 = param_3 + param_2 + 1;
                    if (iVar2 <= iVar6) {
                        uVar3 = local_38->field_28;
                        if ((param_1 - param_3 < (int)uVar3) &&
                            (uVar4 = local_38->field_24, (int)uVar4 <= param_1 + param_3 + 1)) {
                            if ((iVar5 < iVar2) || (((iVar1 <= param_2 + param_3 || (param_1 - param_3 < (int)uVar4)) ||
                                                     ((int)uVar3 <= param_1 + param_3)))) {
                                local_68->DrawClipped((SharedArray*)&local_38->field_32, local_38->field_8, iVar5,
                                                      iVar6, uVar4, iVar2, uVar3, iVar1);
                            } else {
                                local_68->DrawUnclipped((SharedArray*)&local_38->field_32, local_38->field_8, iVar6);
                            }
                        }
                    }
                }
            }
        } else {
            local_38 = (NXTPix2D*)CONCAT44(local_38._4_4_, param_5);
            SectorHLineHelper<OpaqueHelper>::SectorHLineHelper(local_68, param_6, 255);
            local_68->SetDirections(param_3, param_4, (int)local_38);
            iVar1 = field_20;
            iVar5 = param_2 - param_3;
            if (iVar5 < iVar1) {
                iVar2 = field_16;
                iVar6 = param_3 + param_2 + 1;
                if (iVar2 <= iVar6) {
                    uVar3 = field_28;
                    if ((param_1 - param_3 < (int)uVar3) && (uVar4 = field_24, (int)uVar4 <= param_1 + param_3 + 1)) {
                        if (((iVar5 < iVar2) || ((iVar1 <= param_2 + param_3 || (param_1 - param_3 < (int)uVar4)))) ||
                            ((int)uVar3 <= param_1 + param_3)) {
                            local_68->DrawClipped((SharedArray*)&field_32, field_8, iVar5, iVar6, uVar4, iVar2, uVar3,
                                                  iVar1);
                        } else {
                            local_68->DrawUnclipped((SharedArray*)&field_32, field_8, iVar6);
                        }
                    }
                }
            }
        }
    }

    // 0x100316b30, 144 bytes, placed by class name and debug map
    // NXTPix2D::DrawCircularArc(int, int, int, int, int, unsigned int, unsigned int)
    void NXTPix2D::DrawCircularArc(int param_1, int param_2, int param_3, int param_4, int param_5, uint param_6,
                                   uint param_7) {
        SectorHLineHelper<OpaqueHelper> local_60[24];
        int local_48;
        int local_44;
        int local_40;
        int local_3c;

        SectorHLineHelper<OpaqueHelper>::SectorHLineHelper(local_60, param_7, 255);
        local_40 = param_3 - param_6;
        local_48 = param_1;
        local_44 = param_2;
        local_3c = param_3;
        local_60->SetDirections(param_3, param_4, param_5);
        local_60->Draw((SharedArray*)&field_32, field_8, field_24, field_16, field_28, field_20);
    }

    // 0x100317060, 256 bytes, placed by class name and debug map
    // NXTPix2D::DrawCircularArcTrans(int, int, int, int, int, unsigned int, unsigned int, unsigned int)
    void NXTPix2D::DrawCircularArcTrans(int param_1, int param_2, int param_3, int param_4, int param_5, uint param_6,
                                        uint param_7, uint param_8) {
        SectorHLineHelper<OpaqueHelper> local_68[24];
        int local_50;
        int local_4c;
        int local_48;
        int local_44;
        int local_40;
        int local_3c;
        int local_38;

        if (param_8 < 255) {
            if (param_8 != 0) {
                new (local_68) SectorHLineHelper<TransparentHelper>(param_7, param_8);
                local_3c = param_3 - param_6;
                local_44 = param_1;
                local_40 = param_2;
                local_38 = param_3;
                local_68->SetDirections(param_3, param_4, param_5);
                local_68->Draw((SharedArray*)&field_32, field_8, field_24, field_16, field_28, field_20);
            }
        } else {
            SectorHLineHelper<OpaqueHelper>::SectorHLineHelper(local_68, param_7, 255);
            local_48 = param_3 - param_6;
            local_50 = param_1;
            local_4c = param_2;
            local_44 = param_3;
            local_68->SetDirections(param_3, param_4, param_5);
            local_68->Draw((SharedArray*)&field_32, field_8, field_24, field_16, field_28, field_20);
        }
    }

    // 0x1003176d0, 192 bytes, placed by class name and debug map
    // NXTPix2D::QuickPlotSprite(Pix32 const&, int, int)
    void NXTPix2D::QuickPlotSprite(Pix32* param_1, int param_2, int param_3) {
        uint uVar1;
        int iVar2;
        int iVar3;
        int iVar4;
        int iVar5;
        uint uVar6;
        int iVar7;
        uint uVar8;
        int iVar9;
        uint uVar10;

        uVar8 = param_2 + param_1->field_32;
        iVar2 = param_3 + param_1->field_36;
        iVar9 = field_8;
        iVar7 = field_16;
        iVar3 = iVar2 * iVar9 + uVar8;
        uVar6 = param_1->field_24;
        uVar10 = param_1->field_28;
        iVar5 = iVar7 - iVar2;
        if (iVar5 == 0 || iVar7 < iVar2) {
            iVar4 = 0;
        } else {
            uVar10 = uVar10 - iVar5;
            iVar4 = iVar5 * uVar6;
            iVar3 = iVar3 + iVar5 * iVar9;
            iVar2 = iVar7;
        }
        iVar9 = iVar9 - uVar6;
        uVar1 = field_24;
        iVar7 = field_20 - (iVar2 + uVar10);
        if ((int)(iVar2 + uVar10) <= field_20) {
            iVar7 = 0;
        }
        iVar2 = uVar1 - uVar8;
        if (iVar2 == 0 || (int)uVar1 < (int)uVar8) {
            iVar2 = 0;
        } else {
            uVar6 = uVar6 - iVar2;
            iVar4 = iVar4 + iVar2;
            iVar3 = iVar3 + iVar2;
            iVar9 = iVar9 + iVar2;
            uVar8 = uVar1;
        }
        iVar5 = (uVar8 + uVar6) - field_28;
        if (iVar5 == 0 || (int)(uVar8 + uVar6) < (int)field_28) {
            iVar5 = 0;
        }
        if ((uVar6 - iVar5 != 0 && iVar5 <= (int)uVar6) && (0 < (int)(iVar7 + uVar10))) {
            PlotQuick((SharedArray*)&field_32, (SharedArray*)param_1, iVar4, iVar3, uVar6 - iVar5, iVar7 + uVar10,
                      iVar9 + iVar5, iVar2 + iVar5);
        }
    }

    // 0x100317790, 528 bytes, placed by class name and debug map
    // NXTPix2D::PlotQuick(SharedArray<unsigned int>&, SharedArray<unsigned int> const&, int, int, int, int, int, int)
    void NXTPix2D::PlotQuick(SharedArray* param_1, SharedArray* param_2, int param_3, int param_4, int param_5,
                             int param_6, int param_7, int param_8) {
        long lVar1;
        undefined4 uVar2;
        int iVar3;
        undefined4* puVar4;
        long lVar5;
        long lVar6;
        int iVar7;
        ulong uVar8;
        int iVar9;
        long lVar10;
        ulong uVar11;

        if (0 < param_6) {
            iVar9 = -param_6;
            do {
                iVar7 = param_4 + param_5;
                iVar3 = param_5 + param_4 + -3;
                if (param_4 < iVar3) {
                    lVar6 = (long)param_3;
                    lVar5 = (long)param_4;
                    lVar10 = 0;
                    do {
                        puVar4 = (undefined4*)SharedArray<unsigned int>::operator[]((SharedArray<unsigned int>*)param_2,
                                                                                    lVar6 + lVar10);
                        uVar2 = *puVar4;
                        puVar4 = (undefined4*)SharedArray<unsigned int>::operator[]((SharedArray<unsigned int>*)param_1,
                                                                                    lVar5 + lVar10);
                        *puVar4 = uVar2;
                        puVar4 = (undefined4*)SharedArray<unsigned int>::operator[]((SharedArray<unsigned int>*)param_2,
                                                                                    lVar6 + 1 + lVar10);
                        uVar2 = *puVar4;
                        puVar4 = (undefined4*)SharedArray<unsigned int>::operator[]((SharedArray<unsigned int>*)param_1,
                                                                                    lVar5 + lVar10 + 1);
                        *puVar4 = uVar2;
                        puVar4 = (undefined4*)SharedArray<unsigned int>::operator[]((SharedArray<unsigned int>*)param_2,
                                                                                    lVar6 + lVar10 + 2);
                        uVar2 = *puVar4;
                        puVar4 = (undefined4*)SharedArray<unsigned int>::operator[]((SharedArray<unsigned int>*)param_1,
                                                                                    lVar5 + lVar10 + 2);
                        *puVar4 = uVar2;
                        puVar4 = (undefined4*)SharedArray<unsigned int>::operator[]((SharedArray<unsigned int>*)param_2,
                                                                                    lVar6 + lVar10 + 3);
                        uVar2 = *puVar4;
                        puVar4 = (undefined4*)SharedArray<unsigned int>::operator[]((SharedArray<unsigned int>*)param_1,
                                                                                    lVar5 + lVar10 + 3);
                        *puVar4 = uVar2;
                        lVar1 = lVar5 + lVar10;
                        lVar10 = lVar10 + 4;
                    } while (lVar1 + 4 < (long)iVar3);
                    param_4 = param_4 + (int)lVar10;
                    param_3 = param_3 + (int)lVar10;
                }
                if (param_4 < iVar7) {
                    iVar3 = 0;
                    uVar8 = (long)param_3;
                    uVar11 = (long)param_4;
                    do {
                        puVar4 = (undefined4*)SharedArray<unsigned int>::operator[]((SharedArray<unsigned int>*)param_2,
                                                                                    uVar8);
                        uVar2 = *puVar4;
                        puVar4 = (undefined4*)SharedArray<unsigned int>::operator[]((SharedArray<unsigned int>*)param_1,
                                                                                    uVar11);
                        *puVar4 = uVar2;
                        iVar3 = iVar3 + -1;
                        uVar8 = uVar8 + 1;
                        uVar11 = uVar11 + 1;
                    } while (param_4 - iVar7 != iVar3);
                    param_3 = param_3 - iVar3;
                    param_4 = param_4 - iVar3;
                }
                param_3 = param_3 + param_8;
                param_4 = param_4 + param_7;
                iVar9 = iVar9 + 1;
            } while (iVar9 != 0);
        }
    }

    // 0x1003179a0, 192 bytes, placed by class name and debug map
    // NXTPix2D::PlotSprite(Pix32 const&, int, int)
    void NXTPix2D::PlotSprite(Pix32* param_1, int param_2, int param_3) {
        uint uVar1;
        int iVar2;
        int iVar3;
        uint uVar4;
        int iVar5;
        int iVar6;
        uint uVar7;
        int iVar8;
        uint uVar9;
        int iVar10;

        uVar4 = param_2 + param_1->field_32;
        iVar2 = param_3 + param_1->field_36;
        iVar8 = field_8;
        iVar10 = field_16;
        iVar6 = iVar2 * iVar8 + uVar4;
        uVar7 = param_1->field_24;
        uVar9 = param_1->field_28;
        iVar5 = iVar10 - iVar2;
        if (iVar5 == 0 || iVar10 < iVar2) {
            iVar3 = 0;
        } else {
            uVar9 = uVar9 - iVar5;
            iVar3 = iVar5 * uVar7;
            iVar6 = iVar6 + iVar5 * iVar8;
            iVar2 = iVar10;
        }
        iVar8 = iVar8 - uVar7;
        uVar1 = field_24;
        iVar10 = field_20 - (iVar2 + uVar9);
        if ((int)(iVar2 + uVar9) <= field_20) {
            iVar10 = 0;
        }
        iVar2 = uVar1 - uVar4;
        if (iVar2 == 0 || (int)uVar1 < (int)uVar4) {
            iVar2 = 0;
        } else {
            uVar7 = uVar7 - iVar2;
            iVar3 = iVar3 + iVar2;
            iVar6 = iVar6 + iVar2;
            iVar8 = iVar8 + iVar2;
            uVar4 = uVar1;
        }
        iVar5 = (uVar4 + uVar7) - field_28;
        if (iVar5 == 0 || (int)(uVar4 + uVar7) < (int)field_28) {
            iVar5 = 0;
        }
        if ((uVar7 - iVar5 != 0 && iVar5 <= (int)uVar7) && (0 < (int)(iVar10 + uVar9))) {
            PlotSprite((SharedArray*)&field_32, (SharedArray*)param_1, 0, iVar3, iVar6, uVar7 - iVar5, iVar10 + uVar9,
                       iVar8 + iVar5, iVar2 + iVar5);
        }
    }

    // 0x100317a60, 512 bytes, placed by class name and debug map
    // NXTPix2D::PlotSprite(SharedArray<unsigned int>&, SharedArray<unsigned int> const&, int, int, int, int, int, int, int)
    void NXTPix2D::PlotSprite(SharedArray* param_1, SharedArray* param_2, int param_3, int param_4, int param_5,
                              int param_6, int param_7, int param_8, int param_9) {
        int iVar1;
        long lVar2;
        int* piVar3;
        int iVar4;
        uint uVar5;
        long lVar6;
        int iVar7;
        uint uVar8;
        int iVar9;
        long lVar10;
        ulong uVar11;
        ulong uVar12;
        int local_44;

        if (0 < param_7) {
            iVar7 = -(param_6 >> 2);
            uVar8 = param_6 & 3;
            iVar4 = -uVar8;
            local_44 = -param_7;
            if (iVar7 < 0) {
                iVar7 = -1;
            }
            if (iVar4 < 0) {
                iVar4 = -1;
            }
            do {
                if (3 < param_6) {
                    lVar10 = (long)param_4;
                    lVar2 = (long)param_5;
                    lVar6 = 0;
                    iVar9 = (param_6 >> 2) + iVar7 + 1;
                    do {
                        piVar3 = (int*)SharedArray<unsigned int>::operator[]((SharedArray<unsigned int>*)param_2,
                                                                             lVar10 + lVar6);
                        iVar1 = *piVar3;
                        if (iVar1 != 0) {
                            piVar3 = (int*)SharedArray<unsigned int>::operator[]((SharedArray<unsigned int>*)param_1,
                                                                                 lVar2 + lVar6);
                            *piVar3 = iVar1;
                        }
                        piVar3 = (int*)SharedArray<unsigned int>::operator[]((SharedArray<unsigned int>*)param_2,
                                                                             lVar10 + lVar6 + 1);
                        iVar1 = *piVar3;
                        if (iVar1 != 0) {
                            piVar3 = (int*)SharedArray<unsigned int>::operator[]((SharedArray<unsigned int>*)param_1,
                                                                                 lVar2 + lVar6 + 1);
                            *piVar3 = iVar1;
                        }
                        piVar3 = (int*)SharedArray<unsigned int>::operator[]((SharedArray<unsigned int>*)param_2,
                                                                             lVar10 + lVar6 + 2);
                        iVar1 = *piVar3;
                        if (iVar1 != 0) {
                            piVar3 = (int*)SharedArray<unsigned int>::operator[]((SharedArray<unsigned int>*)param_1,
                                                                                 lVar2 + lVar6 + 2);
                            *piVar3 = iVar1;
                        }
                        piVar3 = (int*)SharedArray<unsigned int>::operator[]((SharedArray<unsigned int>*)param_2,
                                                                             lVar10 + lVar6 + 3);
                        iVar1 = *piVar3;
                        if (iVar1 != 0) {
                            piVar3 = (int*)SharedArray<unsigned int>::operator[]((SharedArray<unsigned int>*)param_1,
                                                                                 lVar2 + lVar6 + 3);
                            *piVar3 = iVar1;
                        }
                        lVar6 = lVar6 + 4;
                        iVar9 = iVar9 + -1;
                    } while (iVar9 != 0);
                    param_5 = param_5 + (int)lVar6;
                    param_4 = param_4 + (int)lVar6;
                }
                if (uVar8 != 0) {
                    uVar11 = (ulong)param_4;
                    uVar12 = (ulong)param_5;
                    uVar5 = 0;
                    do {
                        piVar3 =
                            (int*)SharedArray<unsigned int>::operator[]((SharedArray<unsigned int>*)param_2, uVar11);
                        iVar9 = *piVar3;
                        if (iVar9 != 0) {
                            piVar3 = (int*)SharedArray<unsigned int>::operator[]((SharedArray<unsigned int>*)param_1,
                                                                                 uVar12);
                            *piVar3 = iVar9;
                        }
                        uVar12 = uVar12 + 1;
                        uVar5 = uVar5 - 1;
                        uVar11 = uVar11 + 1;
                    } while (~(iVar4 + uVar8) != uVar5);
                    param_5 = param_5 - uVar5;
                    param_4 = param_4 - uVar5;
                }
                param_4 = param_4 + param_9;
                param_5 = param_5 + param_8;
                local_44 = local_44 + 1;
            } while (local_44 != 0);
        }
    }

    // 0x100317c60, 192 bytes, placed by class name and debug map
    // NXTPix2D::PlotSprite(Pix8 const&, int, int)
    void NXTPix2D::PlotSprite(Pix8* param_1, int param_2, int param_3) {
        uint uVar1;
        int iVar2;
        int iVar3;
        uint uVar4;
        int iVar5;
        int iVar6;
        int iVar7;
        int iVar8;
        uint uVar9;
        int iVar10;

        uVar4 = param_2 + param_1->field_56;
        iVar2 = param_3 + param_1->field_60;
        iVar8 = field_8;
        iVar10 = field_16;
        iVar6 = iVar2 * iVar8 + uVar4;
        iVar7 = param_1->field_48;
        uVar9 = param_1->field_52;
        iVar5 = iVar10 - iVar2;
        if (iVar5 == 0 || iVar10 < iVar2) {
            iVar3 = 0;
        } else {
            uVar9 = uVar9 - iVar5;
            iVar3 = iVar5 * iVar7;
            iVar6 = iVar6 + iVar5 * iVar8;
            iVar2 = iVar10;
        }
        iVar8 = iVar8 - iVar7;
        uVar1 = field_24;
        iVar10 = field_20 - (iVar2 + uVar9);
        if ((int)(iVar2 + uVar9) <= field_20) {
            iVar10 = 0;
        }
        iVar2 = uVar1 - uVar4;
        if (iVar2 == 0 || (int)uVar1 < (int)uVar4) {
            iVar2 = 0;
        } else {
            iVar7 = iVar7 - iVar2;
            iVar3 = iVar3 + iVar2;
            iVar6 = iVar6 + iVar2;
            iVar8 = iVar8 + iVar2;
            uVar4 = uVar1;
        }
        iVar5 = (uVar4 + iVar7) - field_28;
        if (iVar5 == 0 || (int)(uVar4 + iVar7) < (int)field_28) {
            iVar5 = 0;
        }
        if ((iVar7 - iVar5 != 0 && iVar5 <= iVar7) && (0 < (int)(iVar10 + uVar9))) {
            PlotPal((SharedArray*)&field_32, (Array*)param_1, (SharedArray*)&param_1->field_24, iVar3, iVar6,
                    iVar7 - iVar5, iVar10 + uVar9, iVar8 + iVar5, iVar2 + iVar5);
        }
    }

    // 0x100317d20, 592 bytes, placed by class name and debug map
    // NXTPix2D::PlotPal(SharedArray<unsigned int>&, Array<unsigned char, eastl::allocator> const&, SharedArray<unsigned int> const&, int, int, int, int, int, int)
    void NXTPix2D::PlotPal(SharedArray* param_1, Array* param_2, SharedArray* param_3, int param_4, int param_5,
                           int param_6, int param_7, int param_8, int param_9) {
        undefined4 uVar1;
        long lVar2;
        byte* pbVar3;
        undefined4* puVar4;
        int iVar5;
        uint uVar6;
        long lVar7;
        int iVar8;
        uint uVar9;
        long lVar10;
        ulong uVar11;
        int iVar12;
        ulong uVar13;
        int local_54;

        if (0 < param_7) {
            iVar8 = -(param_6 >> 2);
            uVar9 = param_6 & 3;
            iVar5 = -uVar9;
            local_54 = -param_7;
            if (iVar8 < 0) {
                iVar8 = -1;
            }
            if (iVar5 < 0) {
                iVar5 = -1;
            }
            do {
                if (3 < param_6) {
                    lVar10 = (long)param_4;
                    lVar2 = (long)param_5;
                    lVar7 = 0;
                    iVar12 = (param_6 >> 2) + iVar8 + 1;
                    do {
                        pbVar3 = (byte*)Array<unsigned char, eastl::allocator>::operator[](
                            (Array<unsigned char, eastl::allocator>*)param_2, lVar10 + lVar7);
                        if ((ulong)*pbVar3 != 0) {
                            puVar4 = (undefined4*)SharedArray<unsigned int>::operator[](
                                (SharedArray<unsigned int>*)param_3, (ulong)*pbVar3);
                            uVar1 = *puVar4;
                            puVar4 = (undefined4*)SharedArray<unsigned int>::operator[](
                                (SharedArray<unsigned int>*)param_1, lVar2 + lVar7);
                            *puVar4 = uVar1;
                        }
                        pbVar3 = (byte*)Array<unsigned char, eastl::allocator>::operator[](
                            (Array<unsigned char, eastl::allocator>*)param_2, lVar10 + lVar7 + 1);
                        if ((ulong)*pbVar3 != 0) {
                            puVar4 = (undefined4*)SharedArray<unsigned int>::operator[](
                                (SharedArray<unsigned int>*)param_3, (ulong)*pbVar3);
                            uVar1 = *puVar4;
                            puVar4 = (undefined4*)SharedArray<unsigned int>::operator[](
                                (SharedArray<unsigned int>*)param_1, lVar2 + lVar7 + 1);
                            *puVar4 = uVar1;
                        }
                        pbVar3 = (byte*)Array<unsigned char, eastl::allocator>::operator[](
                            (Array<unsigned char, eastl::allocator>*)param_2, lVar10 + lVar7 + 2);
                        if ((ulong)*pbVar3 != 0) {
                            puVar4 = (undefined4*)SharedArray<unsigned int>::operator[](
                                (SharedArray<unsigned int>*)param_3, (ulong)*pbVar3);
                            uVar1 = *puVar4;
                            puVar4 = (undefined4*)SharedArray<unsigned int>::operator[](
                                (SharedArray<unsigned int>*)param_1, lVar2 + lVar7 + 2);
                            *puVar4 = uVar1;
                        }
                        pbVar3 = (byte*)Array<unsigned char, eastl::allocator>::operator[](
                            (Array<unsigned char, eastl::allocator>*)param_2, lVar10 + lVar7 + 3);
                        if ((ulong)*pbVar3 != 0) {
                            puVar4 = (undefined4*)SharedArray<unsigned int>::operator[](
                                (SharedArray<unsigned int>*)param_3, (ulong)*pbVar3);
                            uVar1 = *puVar4;
                            puVar4 = (undefined4*)SharedArray<unsigned int>::operator[](
                                (SharedArray<unsigned int>*)param_1, lVar2 + lVar7 + 3);
                            *puVar4 = uVar1;
                        }
                        lVar7 = lVar7 + 4;
                        iVar12 = iVar12 + -1;
                    } while (iVar12 != 0);
                    param_5 = param_5 + (int)lVar7;
                    param_4 = param_4 + (int)lVar7;
                }
                if (uVar9 != 0) {
                    uVar13 = (ulong)param_4;
                    uVar11 = (ulong)param_5;
                    uVar6 = 0;
                    do {
                        pbVar3 = (byte*)Array<unsigned char, eastl::allocator>::operator[](
                            (Array<unsigned char, eastl::allocator>*)param_2, uVar13);
                        if ((ulong)*pbVar3 != 0) {
                            puVar4 = (undefined4*)SharedArray<unsigned int>::operator[](
                                (SharedArray<unsigned int>*)param_3, (ulong)*pbVar3);
                            uVar1 = *puVar4;
                            puVar4 = (undefined4*)SharedArray<unsigned int>::operator[](
                                (SharedArray<unsigned int>*)param_1, uVar11);
                            *puVar4 = uVar1;
                        }
                        uVar11 = uVar11 + 1;
                        uVar6 = uVar6 - 1;
                        uVar13 = uVar13 + 1;
                    } while (~(iVar5 + uVar9) != uVar6);
                    param_5 = param_5 - uVar6;
                    param_4 = param_4 - uVar6;
                }
                param_4 = param_4 + param_9;
                param_5 = param_5 + param_8;
                local_54 = local_54 + 1;
            } while (local_54 != 0);
        }
    }

    // 0x100317f70, 416 bytes, placed by class name and debug map
    // NXTPix2D::ScalePlotSprite(Pix32 const&, int, int, int, int)
    void NXTPix2D::ScalePlotSprite(Pix32* param_1, int param_2, int param_3, int param_4, int param_5) {
        uint uVar1;
        uint uVar2;
        int iVar3;
        int iVar4;
        int iVar5;
        int iVar6;
        int iVar7;
        uint uVar8;
        int iVar9;
        int iVar10;
        uint uVar11;
        int iVar12;

        if ((0 < param_4) && (0 < param_5)) {
            uVar1 = param_1->field_24;
            iVar3 = (int)(param_1->field_40 << 16) / param_4;
            iVar4 = (int)(param_1->field_44 << 16) / param_5;
            uVar11 = param_1->field_32;
            uVar8 = 0;
            if ((int)uVar11 < 1) {
                uVar11 = 0;
            } else {
                iVar10 = (int)(iVar3 + uVar11 * 65536 + -1) / iVar3;
                param_2 = param_2 + iVar10;
                uVar11 = iVar10 * iVar3 + uVar11 * -65536;
            }
            uVar2 = param_1->field_36;
            if (0 < (int)uVar2) {
                iVar10 = (int)(iVar4 + uVar2 * 65536 + -1) / iVar4;
                param_3 = param_3 + iVar10;
                uVar8 = iVar10 * iVar4 + uVar2 * -65536;
            }
            if ((int)uVar1 < (int)param_1->field_40) {
                param_4 = (int)(~uVar11 + uVar1 * 65536 + iVar3) / iVar3;
            }
            if ((int)param_1->field_28 < (int)param_1->field_44) {
                param_5 = (int)(~uVar8 + param_1->field_28 * 65536 + iVar4) / iVar4;
            }
            iVar10 = field_8;
            iVar9 = iVar10 * param_3 + param_2;
            iVar7 = field_20 - (param_5 + param_3);
            if (param_5 + param_3 <= field_20) {
                iVar7 = 0;
            }
            iVar7 = iVar7 + param_5;
            iVar5 = field_16 - param_3;
            if (iVar5 != 0 && param_3 <= field_16) {
                iVar7 = iVar7 - iVar5;
                iVar9 = iVar9 + iVar10 * iVar5;
                uVar8 = uVar8 + iVar4 * iVar5;
            }
            iVar6 = (param_4 + param_2) - field_28;
            iVar5 = 0;
            if (iVar6 != 0 && (int)field_28 <= param_4 + param_2) {
                iVar5 = iVar6;
            }
            iVar12 = (iVar10 - param_4) + iVar5;
            iVar6 = param_4 - iVar5;
            iVar10 = field_24 - param_2;
            if (iVar10 != 0 && param_2 <= (int)field_24) {
                iVar6 = iVar6 - iVar10;
                iVar9 = iVar9 + iVar10;
                uVar11 = uVar11 + iVar3 * iVar10;
                iVar12 = iVar12 + iVar10;
            }
            PlotScale((SharedArray*)&field_32, (SharedArray*)param_1, iVar5, uVar11, uVar8, iVar9, iVar12, iVar6, iVar7,
                      iVar3, iVar4, uVar1);
        }
    }

    // 0x100318110, 208 bytes, placed by class name and debug map
    // NXTPix2D::PlotScale(SharedArray<unsigned int>&, SharedArray<unsigned int> const&, int, int, int, int, int, int, int, int, int, int)
    void NXTPix2D::PlotScale(SharedArray* param_1, SharedArray* param_2, int param_3, int param_4, int param_5,
                             int param_6, int param_7, int param_8, int param_9, int param_10, int param_11,
                             int param_12) {
        int iVar1;
        int iVar2;
        int* piVar3;
        int iVar4;
        int iVar5;
        ulong uVar6;

        if (0 < param_9) {
            iVar2 = -param_9;
            do {
                if (0 < param_8) {
                    uVar6 = (ulong)param_6;
                    iVar5 = 0;
                    iVar4 = param_4;
                    do {
                        piVar3 = (int*)SharedArray<unsigned int>::operator[](
                            (SharedArray<unsigned int>*)param_2, (long)((iVar4 >> 16) + (param_5 >> 16) * param_12));
                        iVar1 = *piVar3;
                        if (iVar1 != 0) {
                            piVar3 =
                                (int*)SharedArray<unsigned int>::operator[]((SharedArray<unsigned int>*)param_1, uVar6);
                            *piVar3 = iVar1;
                        }
                        uVar6 = uVar6 + 1;
                        iVar4 = iVar4 + param_10;
                        iVar5 = iVar5 + -1;
                    } while (-param_8 != iVar5);
                    param_6 = param_6 - iVar5;
                }
                param_6 = param_6 + param_7;
                param_5 = param_5 + param_11;
                iVar2 = iVar2 + 1;
            } while (iVar2 != 0);
        }
    }

    // 0x1003181e0, 400 bytes, placed by class name and debug map
    // NXTPix2D::ScalePlotSprite(Pix8 const&, int, int, int, int)
    void NXTPix2D::ScalePlotSprite(Pix8* param_1, int param_2, int param_3, int param_4, int param_5) {
        int iVar1;
        uint uVar2;
        int iVar3;
        int iVar4;
        int iVar5;
        int iVar6;
        int iVar7;
        uint uVar8;
        uint uVar9;
        int iVar10;
        int iVar11;

        iVar1 = param_1->field_48;
        iVar11 = (param_1->field_64 << 16) / param_4;
        iVar3 = (param_1->field_68 << 16) / param_5;
        iVar5 = param_1->field_56;
        uVar9 = 0;
        if (iVar5 < 1) {
            uVar8 = 0;
        } else {
            iVar4 = (iVar11 + iVar5 * 65536 + -1) / iVar11;
            param_2 = param_2 + iVar4;
            uVar8 = iVar4 * iVar11 + iVar5 * -65536;
        }
        uVar2 = param_1->field_60;
        if (0 < (int)uVar2) {
            iVar5 = (int)(iVar3 + uVar2 * 65536 + -1) / iVar3;
            param_3 = param_3 + iVar5;
            uVar9 = iVar5 * iVar3 + uVar2 * -65536;
        }
        if (iVar1 < param_1->field_64) {
            param_4 = (int)(~uVar8 + iVar1 * 65536 + iVar11) / iVar11;
        }
        if ((int)param_1->field_52 < param_1->field_68) {
            param_5 = (int)(~uVar9 + param_1->field_52 * 65536 + iVar3) / iVar3;
        }
        iVar5 = field_8;
        iVar4 = iVar5 * param_3 + param_2;
        iVar10 = field_20 - (param_5 + param_3);
        if (param_5 + param_3 <= field_20) {
            iVar10 = 0;
        }
        iVar10 = iVar10 + param_5;
        iVar6 = field_16 - param_3;
        if (iVar6 != 0 && param_3 <= field_16) {
            iVar10 = iVar10 - iVar6;
            iVar4 = iVar4 + iVar5 * iVar6;
            uVar9 = uVar9 + iVar3 * iVar6;
        }
        iVar7 = (param_4 + param_2) - field_28;
        iVar6 = 0;
        if (iVar7 != 0 && (int)field_28 <= param_4 + param_2) {
            iVar6 = iVar7;
        }
        iVar7 = (iVar5 - param_4) + iVar6;
        iVar6 = param_4 - iVar6;
        iVar5 = field_24 - param_2;
        if (iVar5 != 0 && param_2 <= (int)field_24) {
            iVar6 = iVar6 - iVar5;
            iVar4 = iVar4 + iVar5;
            uVar8 = uVar8 + iVar11 * iVar5;
            iVar7 = iVar7 + iVar5;
        }
        PlotScale((SharedArray*)&field_32, (Array*)param_1, (SharedArray*)&param_1->field_24, uVar8, uVar9, iVar4,
                  iVar7, iVar6, iVar10, iVar11, iVar3, iVar1);
    }

    // 0x100318370, 224 bytes, placed by class name and debug map
    // NXTPix2D::PlotScale(SharedArray<unsigned int>&, Array<unsigned char, eastl::allocator> const&, SharedArray<unsigned int> const&, int, int, int, int, int, int, int, int, int)
    void NXTPix2D::PlotScale(SharedArray* param_1, Array* param_2, SharedArray* param_3, int param_4, int param_5,
                             int param_6, int param_7, int param_8, int param_9, int param_10, int param_11,
                             int param_12) {
        undefined4 uVar1;
        int iVar2;
        byte* pbVar3;
        undefined4* puVar4;
        int iVar5;
        ulong uVar6;
        int iVar7;

        if (0 < param_9) {
            iVar2 = -param_9;
            do {
                if (0 < param_8) {
                    uVar6 = (ulong)param_6;
                    iVar7 = 0;
                    iVar5 = param_4;
                    do {
                        pbVar3 = (byte*)Array<unsigned char, eastl::allocator>::operator[](
                            (Array<unsigned char, eastl::allocator>*)param_2,
                            (long)((iVar5 >> 16) + (param_5 >> 16) * param_12));
                        if ((ulong)*pbVar3 != 0) {
                            puVar4 = (undefined4*)SharedArray<unsigned int>::operator[](
                                (SharedArray<unsigned int>*)param_3, (ulong)*pbVar3);
                            uVar1 = *puVar4;
                            puVar4 = (undefined4*)SharedArray<unsigned int>::operator[](
                                (SharedArray<unsigned int>*)param_1, uVar6);
                            *puVar4 = uVar1;
                        }
                        uVar6 = uVar6 + 1;
                        iVar5 = iVar5 + param_10;
                        iVar7 = iVar7 + -1;
                    } while (-param_8 != iVar7);
                    param_6 = param_6 - iVar7;
                }
                param_6 = param_6 + param_7;
                param_5 = param_5 + param_11;
                iVar2 = iVar2 + 1;
            } while (iVar2 != 0);
        }
    }

    // 0x100318450, 224 bytes, placed by class name and debug map
    // NXTPix2D::AddPlotSprite(Pix32 const&, int, int, int)
    void NXTPix2D::AddPlotSprite(Pix32* param_1, int param_2, int param_3, int param_4) {
        uint uVar1;
        int iVar2;
        int iVar3;
        int iVar4;
        int iVar5;
        int iVar6;
        uint uVar7;
        int iVar8;
        int iVar9;
        uint uVar10;
        uint uVar11;

        uVar11 = param_2 + param_1->field_32;
        iVar3 = param_3 + param_1->field_36;
        iVar9 = field_8;
        iVar4 = field_16;
        iVar6 = iVar3 * iVar9 + uVar11;
        uVar7 = param_1->field_24;
        uVar10 = param_1->field_28;
        iVar2 = iVar4 - iVar3;
        if (iVar2 == 0 || iVar4 < iVar3) {
            iVar5 = 0;
        } else {
            uVar10 = uVar10 - iVar2;
            iVar5 = iVar2 * uVar7;
            iVar6 = iVar6 + iVar2 * iVar9;
            iVar3 = iVar4;
        }
        iVar9 = iVar9 - uVar7;
        uVar1 = field_24;
        iVar4 = field_20 - (iVar3 + uVar10);
        if ((int)(iVar3 + uVar10) <= field_20) {
            iVar4 = 0;
        }
        iVar3 = uVar1 - uVar11;
        if (iVar3 == 0 || (int)uVar1 < (int)uVar11) {
            iVar3 = 0;
        } else {
            uVar7 = uVar7 - iVar3;
            iVar5 = iVar5 + iVar3;
            iVar6 = iVar6 + iVar3;
            iVar9 = iVar9 + iVar3;
            uVar11 = uVar1;
        }
        iVar2 = (uVar11 + uVar7) - field_28;
        if (iVar2 == 0 || (int)(uVar11 + uVar7) < (int)field_28) {
            iVar2 = 0;
        }
        iVar8 = uVar7 - iVar2;
        if (iVar8 != 0 && iVar2 <= (int)uVar7) {
            iVar4 = iVar4 + uVar10;
            if (0 < iVar4) {
                if (param_4 < 255) {
                    AddSprite((SharedArray*)&field_32, (SharedArray*)param_1, iVar5, iVar4, iVar6, param_4, iVar8,
                              iVar4, iVar9 + iVar2, iVar3 + iVar2, param_4);
                } else {
                    AddSprite((SharedArray*)&field_32, (SharedArray*)param_1, iVar5, iVar4, iVar6, param_4, iVar8,
                              iVar4, iVar9 + iVar2, iVar3 + iVar2);
                }
            }
        }
    }

    // 0x100318530, 256 bytes, placed by class name and debug map
    // NXTPix2D::AddSprite(SharedArray<unsigned int>&, SharedArray<unsigned int> const&, int, int, int, int, int, int, int, int)
    void NXTPix2D::AddSprite(SharedArray* param_1, SharedArray* param_2, int param_3, int param_4, int param_5,
                             int param_6, int param_7, int param_8, int param_9, int param_10) {
        int iVar1;
        int iVar2;
        uint uVar3;
        uint* puVar4;
        int iVar5;
        ulong uVar6;
        ulong uVar7;

        if (0 < param_8) {
            iVar2 = -param_8;
            do {
                if (0 < param_7) {
                    uVar6 = (ulong)param_3;
                    uVar7 = (ulong)param_5;
                    iVar5 = 0;
                    do {
                        puVar4 =
                            (uint*)SharedArray<unsigned int>::operator[]((SharedArray<unsigned int>*)param_2, uVar6);
                        uVar3 = *puVar4;
                        if (uVar3 != 0) {
                            puVar4 = (uint*)SharedArray<unsigned int>::operator[]((SharedArray<unsigned int>*)param_1,
                                                                                  uVar7);
                            iVar1 = *puVar4 + uVar3;
                            uVar3 = (*puVar4 & 16711935) + (uVar3 & 16711935);
                            uVar3 = iVar1 - uVar3 & 65536 | uVar3 & 16777472;
                            puVar4 = (uint*)SharedArray<unsigned int>::operator[]((SharedArray<unsigned int>*)param_1,
                                                                                  uVar7);
                            *puVar4 = uVar3 - (uVar3 >> 8) | iVar1 - uVar3;
                        }
                        uVar7 = uVar7 + 1;
                        iVar5 = iVar5 + -1;
                        uVar6 = uVar6 + 1;
                    } while (-param_7 != iVar5);
                    param_5 = param_5 - iVar5;
                    param_3 = param_3 - iVar5;
                }
                param_3 = param_3 + param_10;
                param_5 = param_5 + param_9;
                iVar2 = iVar2 + 1;
            } while (iVar2 != 0);
        }
    }

    // 0x100318630, 240 bytes, placed by class name and debug map
    // NXTPix2D::AddSprite(SharedArray<unsigned int>&, SharedArray<unsigned int> const&, int, int, int, int, int, int, int, int, int)
    void NXTPix2D::AddSprite(SharedArray* param_1, SharedArray* param_2, int param_3, int param_4, int param_5,
                             int param_6, int param_7, int param_8, int param_9, int param_10, int param_11) {
        int iVar1;
        uint uVar2;
        undefined4 uVar3;
        uint* puVar4;
        undefined4* puVar5;
        int iVar6;
        ulong uVar7;
        ulong uVar8;

        if (0 < param_8) {
            iVar1 = -param_8;
            do {
                if (0 < param_7) {
                    uVar8 = (ulong)param_3;
                    uVar7 = (ulong)param_5;
                    iVar6 = 0;
                    do {
                        puVar4 =
                            (uint*)SharedArray<unsigned int>::operator[]((SharedArray<unsigned int>*)param_2, uVar8);
                        if (*puVar4 != 0) {
                            uVar2 = ComputeCompositeRGB(*puVar4, param_11);
                            puVar4 = (uint*)SharedArray<unsigned int>::operator[]((SharedArray<unsigned int>*)param_1,
                                                                                  uVar7);
                            uVar3 = BlendPixel(uVar2, param_11, 255 - param_11, *puVar4);
                            puVar5 = (undefined4*)SharedArray<unsigned int>::operator[](
                                (SharedArray<unsigned int>*)param_1, uVar7);
                            *puVar5 = uVar3;
                        }
                        uVar7 = uVar7 + 1;
                        iVar6 = iVar6 + -1;
                        uVar8 = uVar8 + 1;
                    } while (-param_7 != iVar6);
                    param_5 = param_5 - iVar6;
                    param_3 = param_3 - iVar6;
                }
                param_3 = param_3 + param_10;
                param_5 = param_5 + param_9;
                iVar1 = iVar1 + 1;
            } while (iVar1 != 0);
        }
    }

    // 0x100318720, 240 bytes, placed by class name and debug map
    // NXTPix2D::LitPlotSprite(Pix32 const&, int, int, int, unsigned int)
    void NXTPix2D::LitPlotSprite(Pix32* param_1, int param_2, int param_3, int param_4, uint param_5) {
        uint uVar1;
        int iVar2;
        int iVar3;
        uint uVar4;
        int iVar5;
        int iVar6;
        uint uVar7;
        int iVar8;
        uint uVar9;
        int iVar10;

        if (param_4 < 255) {
            uVar4 = param_2 + param_1->field_32;
            iVar2 = param_3 + param_1->field_36;
            iVar10 = field_8;
            iVar8 = field_16;
            iVar6 = iVar2 * iVar10 + uVar4;
            uVar7 = param_1->field_24;
            uVar9 = param_1->field_28;
            iVar5 = iVar8 - iVar2;
            if (iVar5 == 0 || iVar8 < iVar2) {
                iVar3 = 0;
            } else {
                uVar9 = uVar9 - iVar5;
                iVar3 = iVar5 * uVar7;
                iVar6 = iVar6 + iVar5 * iVar10;
                iVar2 = iVar8;
            }
            iVar10 = iVar10 - uVar7;
            uVar1 = field_24;
            iVar8 = field_20 - (iVar2 + uVar9);
            if ((int)(iVar2 + uVar9) <= field_20) {
                iVar8 = 0;
            }
            iVar2 = uVar1 - uVar4;
            if (iVar2 == 0 || (int)uVar1 < (int)uVar4) {
                iVar2 = 0;
            } else {
                uVar7 = uVar7 - iVar2;
                iVar3 = iVar3 + iVar2;
                iVar6 = iVar6 + iVar2;
                iVar10 = iVar10 + iVar2;
                uVar4 = uVar1;
            }
            iVar5 = (uVar4 + uVar7) - field_28;
            if (iVar5 == 0 || (int)(uVar4 + uVar7) < (int)field_28) {
                iVar5 = 0;
            }
            if ((uVar7 - iVar5 != 0 && iVar5 <= (int)uVar7) && (0 < (int)(iVar8 + uVar9))) {
                LitSprite((SharedArray*)&field_32, (SharedArray*)param_1, 0, iVar3, iVar6, uVar7 - iVar5, iVar8 + uVar9,
                          iVar10 + iVar5, iVar2 + iVar5, param_4, param_5);
            }
        } else {
            (*(code*)field_0[22])();
        }
    }

    // 0x100318810, 240 bytes, placed by class name and debug map
    // NXTPix2D::LitSprite(SharedArray<unsigned int>&, SharedArray<unsigned int> const&, int, int, int, int, int, int, int, unsigned int, unsigned int)
    void NXTPix2D::LitSprite(SharedArray* param_1, SharedArray* param_2, int param_3, int param_4, int param_5,
                             int param_6, int param_7, int param_8, int param_9, uint param_10, uint param_11) {
        int iVar1;
        int iVar2;
        uint* puVar3;
        int iVar4;
        ulong uVar5;
        int iVar6;
        ulong uVar7;

        iVar1 = ComputeCompositeRGB(param_11, 255 - param_10);
        if (0 < param_7) {
            iVar6 = -param_7;
            do {
                if (0 < param_6) {
                    uVar7 = (ulong)param_4;
                    uVar5 = (ulong)param_5;
                    iVar4 = 0;
                    do {
                        puVar3 =
                            (uint*)SharedArray<unsigned int>::operator[]((SharedArray<unsigned int>*)param_2, uVar7);
                        if (*puVar3 != 0) {
                            iVar2 = ComputeCompositeRGB(*puVar3, param_10);
                            puVar3 = (uint*)SharedArray<unsigned int>::operator[]((SharedArray<unsigned int>*)param_1,
                                                                                  uVar5);
                            *puVar3 = iVar2 + iVar1 | 4278190080;
                        }
                        uVar5 = uVar5 + 1;
                        iVar4 = iVar4 + -1;
                        uVar7 = uVar7 + 1;
                    } while (-param_6 != iVar4);
                    param_5 = param_5 - iVar4;
                    param_4 = param_4 - iVar4;
                }
                param_4 = param_4 + param_9;
                param_5 = param_5 + param_8;
                iVar6 = iVar6 + 1;
            } while (iVar6 != 0);
        }
    }

    // 0x100318900, 208 bytes, placed by class name and debug map
    // NXTPix2D::TransPlotSprite(Pix32 const&, int, int, unsigned int)
    void NXTPix2D::TransPlotSprite(Pix32* param_1, int param_2, int param_3, uint param_4) {
        uint uVar1;
        int iVar2;
        int iVar3;
        uint uVar4;
        int iVar5;
        int iVar6;
        uint uVar7;
        int iVar8;
        uint uVar9;
        int iVar10;

        if (param_4 != 0) {
            uVar4 = param_2 + param_1->field_32;
            iVar2 = param_3 + param_1->field_36;
            iVar8 = field_8;
            iVar10 = field_16;
            iVar6 = iVar2 * iVar8 + uVar4;
            uVar7 = param_1->field_24;
            uVar9 = param_1->field_28;
            iVar5 = iVar10 - iVar2;
            if (iVar5 == 0 || iVar10 < iVar2) {
                iVar3 = 0;
            } else {
                uVar9 = uVar9 - iVar5;
                iVar3 = iVar5 * uVar7;
                iVar6 = iVar6 + iVar5 * iVar8;
                iVar2 = iVar10;
            }
            iVar8 = iVar8 - uVar7;
            uVar1 = field_24;
            iVar10 = field_20 - (iVar2 + uVar9);
            if ((int)(iVar2 + uVar9) <= field_20) {
                iVar10 = 0;
            }
            iVar2 = uVar1 - uVar4;
            if (iVar2 == 0 || (int)uVar1 < (int)uVar4) {
                iVar2 = 0;
            } else {
                uVar7 = uVar7 - iVar2;
                iVar3 = iVar3 + iVar2;
                iVar6 = iVar6 + iVar2;
                iVar8 = iVar8 + iVar2;
                uVar4 = uVar1;
            }
            iVar5 = (uVar4 + uVar7) - field_28;
            if (iVar5 == 0 || (int)(uVar4 + uVar7) < (int)field_28) {
                iVar5 = 0;
            }
            if ((uVar7 - iVar5 != 0 && iVar5 <= (int)uVar7) && (0 < (int)(iVar10 + uVar9))) {
                TranSprite((SharedArray*)&field_32, (SharedArray*)param_1, 0, iVar3, iVar6, uVar7 - iVar5,
                           iVar10 + uVar9, iVar8 + iVar5, iVar2 + iVar5, param_4);
            }
        }
    }

    // 0x1003189d0, 352 bytes, placed by class name and debug map
    // NXTPix2D::TranSprite(SharedArray<unsigned int>&, SharedArray<unsigned int> const&, int, int, int, int, int, int, int, unsigned int)
    void NXTPix2D::TranSprite(SharedArray* param_1, SharedArray* param_2, int param_3, int param_4, int param_5,
                              int param_6, int param_7, int param_8, int param_9, uint param_10) {
        uint uVar1;
        int iVar2;
        uint* puVar3;
        int iVar4;
        ulong uVar5;
        ulong uVar6;
        uint uVar7;

        if (param_10 < 255) {
            if (0 < param_7) {
                iVar2 = -param_7;
                do {
                    if (0 < param_6) {
                        uVar5 = (ulong)param_4;
                        uVar6 = (ulong)param_5;
                        iVar4 = 0;
                        do {
                            puVar3 = (uint*)SharedArray<unsigned int>::operator[]((SharedArray<unsigned int>*)param_2,
                                                                                  uVar5);
                            uVar7 = *puVar3;
                            if (uVar7 != 0) {
                                puVar3 = (uint*)SharedArray<unsigned int>::operator[](
                                    (SharedArray<unsigned int>*)param_1, uVar6);
                                uVar1 = *puVar3;
                                if (uVar1 == 0) {
                                    uVar7 = uVar7 & 16777215 | param_10 << 24;
                                } else {
                                    uVar7 = ComputeCompositeRGB(uVar7, param_10);
                                    uVar7 = BlendPixel(uVar7, param_10, 255 - param_10, uVar1);
                                }
                                puVar3 = (uint*)SharedArray<unsigned int>::operator[](
                                    (SharedArray<unsigned int>*)param_1, uVar6);
                                *puVar3 = uVar7;
                            }
                            uVar6 = uVar6 + 1;
                            iVar4 = iVar4 + -1;
                            uVar5 = uVar5 + 1;
                        } while (-param_6 != iVar4);
                        param_5 = param_5 - iVar4;
                        param_4 = param_4 - iVar4;
                    }
                    param_5 = param_5 + param_8;
                    param_4 = param_4 + param_9;
                    iVar2 = iVar2 + 1;
                } while (iVar2 != 0);
            }
        } else {
            PlotSprite(param_1, param_2, param_8, param_4, param_5, param_6, param_7, param_8, param_9);
        }
    }

    // 0x100318b30, 464 bytes, placed by class name and debug map
    // NXTPix2D::XPlotSpriteARGB(Pix32 const&, int, int, int, int, int, int, int, SpriteFlip)
    void NXTPix2D::XPlotSpriteARGB(SharedArray<unsigned int>* param_1, uint param_2, int param_3, int param_4,
                                   int param_5, int param_6, int param_7, int param_8, undefined4 param_10) {
        int* piVar1;
        uint uVar2;
        uint uVar3;
        int iVar5;
        undefined8 uVar6;
        NpcUID* extraout_RDX;
        int iVar7;
        int iVar8;
        int iVar9;
        int iVar10;
        int iVar11;
        int iVar12;
        int iVar13;
        XPlotParams local_90;
        ulong local_58;
        long local_50;
        XPlotBlender<XPlot_NormalAlpha> local_40[8];
        NXTPix2D* local_38;

        if (((param_8 != 0) && (iVar5 = *(int*)(param_1 + 40), param_4 < iVar5)) &&
            (iVar11 = *(int*)(param_1 + 44), param_5 < iVar11)) {
            iVar13 = param_6;
            if (iVar5 < param_6) {
                iVar13 = iVar5;
            }
            if (param_6 < 0) {
                iVar13 = iVar5;
            }
            iVar5 = param_7;
            if (iVar11 < param_7) {
                iVar5 = iVar11;
            }
            if (param_7 < 0) {
                iVar5 = iVar11;
            }
            uVar2 = field_24;
            iVar8 = 0;
            iVar11 = uVar2 - param_2;
            uVar3 = param_2;
            if (iVar11 != 0 && (int)param_2 <= (int)uVar2) {
                uVar3 = uVar2;
            }
            local_58 = (ulong)uVar3;
            if (iVar11 == 0 || (int)uVar2 < (int)param_2) {
                iVar11 = iVar8;
            }
            iVar7 = field_16;
            if (!(iVar7 - param_3 == 0 || iVar7 < param_3)) {
                iVar8 = iVar7 - param_3;
                param_3 = iVar7;
            }
            iVar7 = iVar13 - iVar11;
            if ((iVar7 != 0 && iVar11 <= iVar13) && (iVar5 = iVar5 - iVar8, 0 < iVar5)) {
                iVar13 = field_28 - (iVar7 + uVar3);
                if ((int)(iVar7 + uVar3) <= (int)field_28) {
                    iVar13 = 0;
                }
                iVar9 = field_20 - (iVar5 + param_3);
                if (iVar5 + param_3 <= field_20) {
                    iVar9 = 0;
                }
                if ((0 < iVar13 + iVar7) && (0 < iVar9 + iVar5)) {
                    iVar12 = (iVar11 + param_4) - *(int*)(param_1 + 32);
                    iVar10 = 0;
                    if (iVar11 + param_4 < *(int*)(param_1 + 32)) {
                        iVar10 = iVar12;
                    }
                    iVar10 = iVar13 + iVar7 + iVar12 + iVar10;
                    if (*(int*)(param_1 + 24) < iVar10) {
                        iVar10 = *(int*)(param_1 + 24);
                    }
                    iVar13 = (iVar8 + param_5) - *(int*)(param_1 + 36);
                    iVar11 = 0;
                    if (iVar8 + param_5 < *(int*)(param_1 + 36)) {
                        iVar11 = iVar13;
                    }
                    iVar11 = iVar9 + iVar5 + iVar13 + iVar11;
                    if (*(int*)(param_1 + 28) < iVar11) {
                        iVar11 = *(int*)(param_1 + 28);
                    }
                    local_38 = this;
                    local_50 = (&field_32)->data();
                    piVar1 = &local_38->field_8;
                    local_38 = (NXTPix2D*)CONCAT44(local_38._4_4_, *piVar1);
                    local_50 = local_50 + (long)(param_3 * *piVar1) * 4;
                    uVar6 = param_1->data();
                    new (&local_90)
                        XPlotParams(local_50, (ulong)local_38 & 4294967295, local_58, uVar6,
                                    *(undefined4*)(param_1 + 24), iVar12, iVar13, iVar10 + -1, iVar11 + -1, param_10);
                    if (param_8 == 255) {
                        eastl::destruct<highlight::NpcUID*>((eastl*)local_40, (NpcUID*)255, extraout_RDX);
                        local_40->XPlot(&local_90);
                    } else {
                        XPlotBlender<XPlot_NormalAlpha>::XPlotBlender<int>(local_40, param_8);
                        local_40->XPlot(&local_90);
                    }
                }
            }
        }
    }

    // 0x100318f10, 432 bytes, placed by class name and debug map
    // NXTPix2D::TransScalePlotSprite(Pix32 const&, int, int, int, int, unsigned int)
    void NXTPix2D::TransScalePlotSprite(Pix32* param_1, int param_2, int param_3, int param_4, int param_5,
                                        uint param_6) {
        uint uVar1;
        int iVar2;
        int iVar3;
        int iVar4;
        int iVar5;
        uint uVar6;
        uint uVar7;
        int iVar8;
        uint uVar9;
        int iVar10;
        int iVar11;
        uint local_34;

        if (((param_6 != 0) && (0 < param_4)) && (0 < param_5)) {
            uVar1 = param_1->field_24;
            iVar2 = (int)(param_1->field_40 << 16) / param_4;
            iVar3 = (int)(param_1->field_44 << 16) / param_5;
            uVar7 = param_1->field_32;
            uVar9 = 0;
            if ((int)uVar7 < 1) {
                local_34 = 0;
            } else {
                iVar4 = (int)(iVar2 + uVar7 * 65536 + -1) / iVar2;
                param_2 = param_2 + iVar4;
                local_34 = iVar4 * iVar2 + uVar7 * -65536;
            }
            uVar7 = param_1->field_36;
            if (0 < (int)uVar7) {
                iVar4 = (int)(iVar3 + uVar7 * 65536 + -1) / iVar3;
                param_3 = param_3 + iVar4;
                uVar9 = iVar4 * iVar3 + uVar7 * -65536;
            }
            if ((int)uVar1 < (int)param_1->field_40) {
                param_4 = (int)(~local_34 + uVar1 * 65536 + iVar2) / iVar2;
            }
            if ((int)param_1->field_28 < (int)param_1->field_44) {
                param_5 = (int)(~uVar9 + param_1->field_28 * 65536 + iVar3) / iVar3;
            }
            iVar4 = field_8;
            iVar10 = iVar4 * param_3 + param_2;
            iVar8 = field_20 - (param_5 + param_3);
            if (param_5 + param_3 <= field_20) {
                iVar8 = 0;
            }
            iVar8 = iVar8 + param_5;
            iVar5 = field_16 - param_3;
            if (iVar5 != 0 && param_3 <= field_16) {
                iVar8 = iVar8 - iVar5;
                iVar10 = iVar10 + iVar4 * iVar5;
                uVar9 = uVar9 + iVar3 * iVar5;
            }
            uVar6 = (param_4 + param_2) - field_28;
            uVar7 = 0;
            if (uVar6 != 0 && (int)field_28 <= param_4 + param_2) {
                uVar7 = uVar6;
            }
            iVar11 = (iVar4 - param_4) + uVar7;
            iVar5 = param_4 - uVar7;
            iVar4 = field_24 - param_2;
            if (!(iVar4 == 0 || (int)field_24 < param_2)) {
                iVar5 = iVar5 - iVar4;
                iVar10 = iVar10 + iVar4;
                uVar7 = local_34 + iVar2 * iVar4;
                iVar11 = iVar11 + iVar4;
                local_34 = uVar7;
            }
            TranScale((SharedArray*)&field_32, (SharedArray*)param_1, uVar7, local_34, uVar9, iVar10, iVar11, iVar5,
                      iVar8, iVar2, iVar3, uVar1, param_6);
        }
    }

    // 0x1003190c0, 400 bytes, placed by class name and debug map
    // NXTPix2D::TranScale(SharedArray<unsigned int>&, SharedArray<unsigned int> const&, int, int, int, int, int, int, int, int, int, int, unsigned int)
    void NXTPix2D::TranScale(SharedArray* param_1, SharedArray* param_2, int param_3, int param_4, int param_5,
                             int param_6, int param_7, int param_8, int param_9, int param_10, int param_11,
                             int param_12, uint param_13) {
        uint uVar1;
        uint* puVar2;
        int iVar3;
        int iVar4;
        ulong uVar5;
        int iVar6;
        uint uVar7;

        if (param_13 < 255) {
            if (0 < param_9) {
                iVar3 = -param_9;
                do {
                    if (0 < param_8) {
                        uVar5 = (ulong)param_6;
                        iVar4 = 0;
                        iVar6 = param_4;
                        do {
                            puVar2 = (uint*)SharedArray<unsigned int>::operator[](
                                (SharedArray<unsigned int>*)param_2,
                                (long)((iVar6 >> 16) + (param_5 >> 16) * param_12));
                            uVar7 = *puVar2;
                            if (uVar7 != 0) {
                                puVar2 = (uint*)SharedArray<unsigned int>::operator[](
                                    (SharedArray<unsigned int>*)param_1, uVar5);
                                uVar1 = *puVar2;
                                if (uVar1 == 0) {
                                    uVar7 = uVar7 & 16777215 | param_13 << 24;
                                } else {
                                    uVar7 = ComputeCompositeRGB(uVar7, param_13);
                                    uVar7 = BlendPixel(uVar7, param_13, 255 - param_13, uVar1);
                                }
                                puVar2 = (uint*)SharedArray<unsigned int>::operator[](
                                    (SharedArray<unsigned int>*)param_1, uVar5);
                                *puVar2 = uVar7;
                            }
                            uVar5 = uVar5 + 1;
                            iVar6 = iVar6 + param_10;
                            iVar4 = iVar4 + -1;
                        } while (-param_8 != iVar4);
                        param_6 = param_6 - iVar4;
                    }
                    param_5 = param_5 + param_11;
                    param_6 = param_6 + param_7;
                    iVar3 = iVar3 + 1;
                } while (iVar3 != 0);
            }
        } else {
            PlotScale(param_1, param_2, param_8, param_4, param_5, param_6, param_7, param_8, param_9, param_10,
                      param_11, param_12);
        }
    }

    // 0x100319250, 368 bytes, placed by class name and debug map
    // NXTPix2D::ScanlinePlotSprite(Pix32 const&, int, int, int, int, int, int, Array<int, eastl::allocator> const&, Array<int, eastl::allocator> const&)
    void NXTPix2D::ScanlinePlotSprite(Pix32* param_1, int param_2, int param_3, int param_4, int param_5, int param_6,
                                      int param_7, Array* param_8, Array* param_9) {
        int iVar1;
        int* piVar2;
        uint uVar3;
        int iVar4;
        uint uVar5;
        uint uVar6;
        uint uVar7;
        uint uVar8;
        ulong uVar9;
        ulong uVar10;
        int local_38;
        uint local_34;

        local_34 = param_3 >> 31 & -param_3;
        uVar6 = param_7 - param_3;
        if ((int)(param_1->field_28 + param_3) <= param_7) {
            uVar6 = param_1->field_28;
        }
        if ((int)local_34 < (int)uVar6) {
            uVar5 = param_2 >> 31 & -param_2;
            uVar9 = (ulong)(param_3 + local_34);
            local_38 = (param_5 + param_3 + local_34) * field_8 + param_4 + param_2 + uVar5;
            do {
                piVar2 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)param_8, uVar9);
                iVar1 = *piVar2;
                piVar2 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)param_9, uVar9);
                uVar3 = iVar1 - param_2;
                uVar7 = uVar5;
                if (uVar3 != 0 && param_2 <= iVar1) {
                    uVar7 = uVar3;
                }
                uVar8 = (*piVar2 + iVar1) - param_2;
                if ((int)(param_1->field_24 + param_2) <= *piVar2 + iVar1) {
                    uVar8 = param_1->field_24;
                }
                if ((int)uVar7 < (int)uVar8) {
                    iVar4 = uVar3 - uVar5;
                    if (iVar1 <= param_2) {
                        iVar4 = 0;
                    }
                    uVar10 = (ulong)(iVar4 + local_38);
                    do {
                        piVar2 = (int*)SharedArray<unsigned int>::operator[](
                            (SharedArray<unsigned int>*)param_1, (long)(int)(param_1->field_24 * local_34 + uVar7));
                        iVar1 = *piVar2;
                        if (iVar1 != 0) {
                            piVar2 = (int*)SharedArray<unsigned int>::operator[]((SharedArray<unsigned int>*)&field_32,
                                                                                 uVar10);
                            *piVar2 = iVar1;
                        }
                        uVar10 = uVar10 + 1;
                        uVar7 = uVar7 + 1;
                    } while ((int)uVar7 < (int)uVar8);
                }
                uVar9 = uVar9 + 1;
                local_38 = local_38 + field_8;
                local_34 = local_34 + 1;
            } while ((int)local_34 < (int)uVar6);
        }
    }

    // 0x1003193c0, 496 bytes, placed by class name and debug map
    // NXTPix2D::ScanlineRotatePlotSprite(Pix32 const&, int, int, int, int, int, int, int, int, Array<int, eastl::allocator> const&, Array<int, eastl::allocator> const&)
    void NXTPix2D::ScanlineRotatePlotSprite(Pix32* param_1, int param_2, int param_3, int param_4, int param_5,
                                            int param_6, int param_7, int param_8, int param_9, Array* param_10,
                                            Array* param_11) {
        int iVar1;
        uint uVar2;
        undefined4 uVar3;
        int iVar4;
        int* piVar5;
        ulong uVar6;
        undefined4* puVar7;
        ulong uVar8;
        ulong uVar9;
        int iVar10;
        int iVar11;
        int iVar12;
        int iVar13;
        double dVar14;
        double in_XMM1_Qa;
        ulong local_50;
        int local_44;
        int local_40;
        int local_34;

        dVar14 = (double)___sincos_stret((double)param_8 * 0.003066449970868725);
        if (0 < param_5) {
            iVar4 = (int)(dVar14 * 65536.0) * param_9 >> 8;
            iVar10 = (int)(in_XMM1_Qa * 65536.0) * param_9 >> 8;
            local_34 = param_3 * field_8 + param_2;
            local_44 = (param_7 * 65536 + iVar10 * -(param_5 / 2)) - iVar4 * -(param_4 / 2);
            local_40 = -(param_5 / 2) * iVar4 + param_6 * 65536 + -(param_4 / 2) * iVar10;
            uVar8 = 0;
            do {
                piVar5 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)param_10, uVar8);
                iVar1 = *piVar5;
                piVar5 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)param_11, uVar8);
                iVar12 = *piVar5;
                if (0 < iVar12) {
                    iVar11 = local_44 - iVar1 * iVar4;
                    iVar13 = iVar1 * iVar10 + local_40;
                    local_50 = (ulong)(iVar1 + local_34);
                    do {
                        uVar2 = param_1->field_24;
                        uVar6 = (&field_32)->HeapBeginPtr();
                        if (local_50 < uVar6) {
                            uVar9 = (ulong)(int)((iVar11 >> 16) * uVar2 + (iVar13 >> 16));
                            uVar6 = param_1->HeapBeginPtr();
                            if (uVar9 < uVar6) {
                                puVar7 = (undefined4*)SharedArray<unsigned int>::operator[](
                                    (SharedArray<unsigned int>*)param_1, uVar9);
                                uVar3 = *puVar7;
                                puVar7 = (undefined4*)SharedArray<unsigned int>::operator[](
                                    (SharedArray<unsigned int>*)&field_32, local_50);
                                *puVar7 = uVar3;
                                local_50 = local_50 + 1;
                            }
                        }
                        iVar13 = iVar13 + iVar10;
                        iVar11 = iVar11 - iVar4;
                        iVar12 = iVar12 + -1;
                    } while (iVar12 != 0);
                }
                local_40 = local_40 + iVar4;
                local_44 = local_44 + iVar10;
                local_34 = local_34 + field_8;
                uVar8 = uVar8 + 1;
            } while (uVar8 != (uint)param_5);
        }
    }

    // 0x1003195b0, 416 bytes, placed by class name and debug map
    // NXTPix2D::RotateTransPlotSprite(Pix32 const&, int, int, int, int, int, int, double, int)
    void NXTPix2D::RotateTransPlotSprite(Pix32* param_1, int param_2, int param_3, int param_4, int param_5,
                                         int param_6, int param_7, double param_8, int param_9) {
        int iVar1;
        int iVar2;
        ulong uVar3;
        int* piVar4;
        int iVar5;
        int iVar6;
        int iVar7;
        int iVar8;
        int iVar9;
        ulong uVar10;
        ulong uVar11;
        double dVar12;
        double in_XMM1_Qa;
        int local_44;
        int local_40;
        int local_38;

        dVar12 = (double)___sincos_stret();
        if (0 < param_5) {
            iVar6 = (int)(dVar12 * 65536.0) * param_9 >> 8;
            iVar1 = (int)(in_XMM1_Qa * 65536.0) * param_9 >> 8;
            local_38 = param_3 * field_8 + param_2;
            local_44 = (param_7 * 65536 + iVar1 * -(param_5 / 2)) - iVar6 * -(param_4 / 2);
            local_40 = -(param_5 / 2) * iVar6 + param_6 * 65536 + -(param_4 / 2) * iVar1;
            iVar2 = 0;
            do {
                if (0 < param_4) {
                    uVar10 = (ulong)local_38;
                    iVar8 = param_4;
                    iVar9 = local_44;
                    iVar7 = local_40;
                    do {
                        uVar11 = (ulong)(int)((iVar9 >> 16) * param_1->field_24 + (iVar7 >> 16));
                        uVar3 = param_1->HeapBeginPtr();
                        iVar5 = 0;
                        if (uVar11 < uVar3) {
                            piVar4 = (int*)SharedArray<unsigned int>::operator[]((SharedArray<unsigned int>*)param_1,
                                                                                 uVar11);
                            iVar5 = *piVar4;
                        }
                        if (iVar5 != 0) {
                            uVar3 = (&field_32)->HeapBeginPtr();
                            if (uVar10 < uVar3) {
                                piVar4 = (int*)SharedArray<unsigned int>::operator[](
                                    (SharedArray<unsigned int>*)&field_32, uVar10);
                                *piVar4 = iVar5;
                            }
                        }
                        uVar10 = uVar10 + 1;
                        iVar7 = iVar7 + iVar1;
                        iVar9 = iVar9 - iVar6;
                        iVar8 = iVar8 + -1;
                    } while (iVar8 != 0);
                }
                local_40 = local_40 + iVar6;
                local_44 = local_44 + iVar1;
                local_38 = local_38 + field_8;
                iVar2 = iVar2 + 1;
            } while (iVar2 != param_5);
        }
    }

    // 0x100319750, 208 bytes, placed by class name and debug map
    // NXTPix2D::RecolourPlotSprite(Pix32 const&, int, int, unsigned int)
    void NXTPix2D::RecolourPlotSprite(Pix32* param_1, int param_2, int param_3, uint param_4) {
        uint uVar1;
        uint uVar2;
        int iVar3;
        int iVar4;
        uint uVar5;
        int iVar6;
        int iVar7;
        int iVar8;
        uint uVar9;
        int iVar10;
        int in_stack_ffffffffffffff98;
        int in_stack_ffffffffffffffa0;

        uVar5 = param_2 + param_1->field_32;
        iVar3 = param_3 + param_1->field_36;
        iVar10 = field_8;
        iVar4 = field_16;
        iVar7 = iVar3 * iVar10 + uVar5;
        uVar2 = param_1->field_24;
        uVar9 = param_1->field_28;
        iVar6 = iVar4 - iVar3;
        if (iVar6 == 0 || iVar4 < iVar3) {
            iVar8 = 0;
        } else {
            uVar9 = uVar9 - iVar6;
            iVar8 = iVar6 * uVar2;
            iVar7 = iVar7 + iVar6 * iVar10;
            iVar3 = iVar4;
        }
        iVar10 = iVar10 - uVar2;
        uVar1 = field_24;
        iVar4 = field_20 - (iVar3 + uVar9);
        if ((int)(iVar3 + uVar9) <= field_20) {
            iVar4 = 0;
        }
        iVar3 = uVar1 - uVar5;
        if (iVar3 == 0 || (int)uVar1 < (int)uVar5) {
            iVar3 = 0;
        } else {
            uVar2 = uVar2 - iVar3;
            iVar8 = iVar8 + iVar3;
            iVar7 = iVar7 + iVar3;
            iVar10 = iVar10 + iVar3;
            uVar5 = uVar1;
        }
        iVar6 = (uVar5 + uVar2) - field_28;
        if (iVar6 == 0 || (int)(uVar5 + uVar2) < (int)field_28) {
            iVar6 = 0;
        }
        if ((uVar2 - iVar6 != 0 && iVar6 <= (int)uVar2) && (iVar4 = iVar4 + uVar9, 0 < iVar4)) {
            RecolSprite((NXTPix2D*)&field_32, (SharedArray*)&field_32, (SharedArray*)param_1, iVar4, iVar8, iVar7,
                        in_stack_ffffffffffffff98, in_stack_ffffffffffffffa0, uVar2 - iVar6, iVar4, iVar10 + iVar6,
                        iVar3 + iVar6, param_4);
        }
    }

    // 0x100319820, 256 bytes, placed by class name and debug map
    // NXTPix2D::RecolSprite(SharedArray<unsigned int>&, SharedArray<unsigned int> const&, int, int, int, int, int, int, int, int, int, unsigned int)
    void NXTPix2D::RecolSprite(SharedArray* param_1, SharedArray* param_2, int param_3, int param_4, int param_5,
                               int param_6, int param_7, int param_8, int param_9, int param_10, int param_11,
                               uint param_12) {
        uint* puVar1;
        int iVar2;
        ulong uVar3;
        int iVar4;
        uint uVar5;
        ulong uVar6;

        if (0 < param_9) {
            iVar2 = -param_9;
            do {
                if (0 < param_8) {
                    uVar3 = (ulong)param_4;
                    uVar6 = (ulong)param_5;
                    iVar4 = 0;
                    do {
                        puVar1 =
                            (uint*)SharedArray<unsigned int>::operator[]((SharedArray<unsigned int>*)param_2, uVar3);
                        uVar5 = *puVar1;
                        if (uVar5 != 0) {
                            if ((short)(uVar5 >> 8) == (short)uVar5) {
                                uVar5 = (uVar5 & 255) * (param_12 >> 8 & 255) & 65280 | uVar5 & 4278190080 |
                                        (uVar5 & 255) * (param_12 & 16711935) >> 8 & 16711935;
                            }
                            puVar1 = (uint*)SharedArray<unsigned int>::operator[]((SharedArray<unsigned int>*)param_1,
                                                                                  uVar6);
                            *puVar1 = uVar5;
                        }
                        uVar6 = uVar6 + 1;
                        iVar4 = iVar4 + -1;
                        uVar3 = uVar3 + 1;
                    } while (-param_8 != iVar4);
                    param_5 = param_5 - iVar4;
                    param_4 = param_4 - iVar4;
                }
                param_4 = param_4 + param_11;
                param_5 = param_5 + param_10;
                iVar2 = iVar2 + 1;
            } while (iVar2 != 0);
        }
    }

    // 0x100319920, 4256 bytes, placed by class name and debug map
    // NXTPix2D::PixelPerfectRotateScalePlotSprite(Pix32 const&, int, int, int, int, int, int)
    void NXTPix2D::PixelPerfectRotateScalePlotSprite(Pix32* param_1, int param_2, int param_3, int param_4, int param_5,
                                                     int param_6, int param_7) {
        uint uVar1;
        uint* puVar2;
        int iVar3;
        int iVar4;
        int iVar5;
        int iVar6;
        int iVar7;
        uint uVar8;
        int iVar9;
        int iVar10;
        uint uVar11;
        int iVar12;
        int iVar13;
        uint uVar14;
        int iVar15;
        int iVar16;
        uint uVar17;
        int iVar18;
        ulong uVar19;
        uint uVar20;
        double dVar21;
        double dVar22;
        double in_XMM1_Qa;

        if (param_7 != 0) {
            iVar4 = param_2 + param_1->field_32 * -16;
            iVar18 = param_3 + param_1->field_36 * -16;
            dVar21 = (double)___sincos_stret((double)(param_6 & 65535) * 9.587379924285257e-05);
            dVar22 = (double)_floor(dVar21 * (double)param_7 + 0.5);
            iVar15 = (int)dVar22;
            dVar22 = (double)_floor(in_XMM1_Qa * (double)param_7 + 0.5);
            iVar12 = (int)dVar22;
            iVar13 = -iVar18 * iVar15;
            iVar10 = param_1->field_24 * 16 - iVar4;
            iVar9 = iVar10 * iVar12;
            iVar7 = iVar9 + iVar13;
            iVar13 = iVar13 - iVar4 * iVar12;
            iVar10 = iVar10 * iVar15;
            iVar3 = param_1->field_28 * 16 - iVar18;
            iVar16 = iVar15 * iVar3;
            iVar6 = iVar16 - iVar4 * iVar12;
            iVar5 = -iVar18 * iVar12;
            iVar3 = iVar3 * iVar12;
            iVar16 = iVar16 + iVar9;
            iVar9 = iVar5 + iVar4 * iVar15;
            iVar5 = iVar5 - iVar10;
            iVar12 = iVar4 * iVar15 + iVar3;
            iVar3 = iVar3 - iVar10;
            if (iVar13 < iVar7) {
                iVar10 = iVar13;
                iVar13 = iVar7;
            } else {
                iVar10 = iVar7;
            }
            if (iVar6 < iVar10) {
                iVar10 = iVar6;
            }
            if (iVar16 < iVar10) {
                iVar10 = iVar16;
            }
            if (iVar13 < iVar6) {
                iVar13 = iVar6;
            }
            if (iVar13 < iVar16) {
                iVar13 = iVar16;
            }
            iVar7 = iVar5;
            if (iVar9 < iVar5) {
                iVar7 = iVar9;
                iVar9 = iVar5;
            }
            if (iVar12 < iVar7) {
                iVar7 = iVar12;
            }
            if (iVar3 < iVar7) {
                iVar7 = iVar3;
            }
            if (iVar9 < iVar12) {
                iVar9 = iVar12;
            }
            if (iVar9 < iVar3) {
                iVar9 = iVar3;
            }
            uVar14 = (iVar10 >> 12) + param_4 >> 4;
            uVar17 = param_4 + (iVar13 + 4095 >> 12) + 15 >> 4;
            iVar7 = (iVar7 >> 12) + param_5 >> 4;
            if ((int)uVar14 < (int)field_24) {
                uVar14 = field_24;
            }
            if ((int)field_28 < (int)uVar17) {
                uVar17 = field_28;
            }
            if (iVar7 < field_16) {
                iVar7 = field_16;
            }
            iVar13 = uVar14 - uVar17;
            if (iVar13 < 0) {
                iVar9 = param_5 + (iVar9 + 4095 >> 12) + 15 >> 4;
                if (field_20 < iVar9) {
                    iVar9 = field_20;
                }
                iVar9 = iVar7 - iVar9;
                if (iVar9 < 0) {
                    iVar12 = field_8 * iVar7 + uVar14;
                    dVar21 = (double)_floor(dVar21 * (16777216.0 / (double)param_7) + 0.5);
                    iVar6 = (int)dVar21;
                    dVar21 = (double)_floor(in_XMM1_Qa * (16777216.0 / (double)param_7) + 0.5);
                    iVar5 = (int)dVar21;
                    iVar3 = (uVar14 * 16 - param_4) + 8;
                    iVar7 = (iVar7 * 16 - param_5) + 8;
                    uVar11 = iVar4 * 256 - (iVar7 * iVar6 >> 4);
                    uVar8 = (iVar7 * iVar5 >> 4) + iVar18 * 256;
                    if (iVar5 == 0) {
                        if (iVar6 == 0) {
                            if (iVar9 < 0) {
                                do {
                                    if (((-1 < (int)(uVar11 | uVar8)) &&
                                         ((int)(uVar11 + param_1->field_24 * -4096) < 0)) &&
                                        ((int)(uVar8 + param_1->field_28 * -4096) < 0)) {
                                        uVar19 = (ulong)iVar12;
                                        iVar7 = uVar17 - uVar14;
                                        do {
                                            puVar2 = (uint*)SharedArray<unsigned int>::operator[](
                                                (SharedArray<unsigned int>*)param_1,
                                                (long)(int)(param_1->field_24 * ((int)uVar8 >> 12) +
                                                            ((int)uVar11 >> 12)));
                                            uVar1 = *puVar2;
                                            puVar2 = (uint*)SharedArray<unsigned int>::operator[](
                                                (SharedArray<unsigned int>*)&field_32, uVar19);
                                            if (16777215 < uVar1) {
                                                if (uVar1 < 4278190081) {
                                                    uVar20 = uVar1 >> 24;
                                                    uVar1 = ComputeCompositeRGB(uVar1, uVar20);
                                                    uVar1 = BlendPixel(uVar1, uVar20, uVar20 ^ 255, *puVar2);
                                                }
                                                *puVar2 = uVar1;
                                            }
                                            uVar19 = uVar19 + 1;
                                            iVar7 = iVar7 + -1;
                                        } while (iVar7 != 0);
                                    }
                                    iVar12 = iVar12 + field_8;
                                    iVar9 = iVar9 + 1;
                                } while (iVar9 != 0);
                            }
                        } else {
                            uVar8 = uVar8 + (iVar3 * iVar6 >> 4);
                            if (iVar6 < 0) {
                                if (iVar9 < 0) {
                                    do {
                                        if ((-1 < (int)uVar11) && ((int)(uVar11 + param_1->field_24 * -4096) < 0)) {
                                            iVar4 = uVar8 + param_1->field_28 * -4096;
                                            iVar7 = iVar12;
                                            iVar3 = iVar13;
                                            uVar14 = uVar8;
                                            if (-1 < iVar4) {
                                                iVar7 = (iVar6 - iVar4) / iVar6;
                                                iVar3 = iVar7 + iVar13;
                                                uVar14 = iVar7 * iVar6 + uVar8;
                                                iVar7 = iVar7 + iVar12;
                                            }
                                            iVar4 = (int)(uVar14 - iVar6) / iVar6;
                                            if (iVar3 < iVar4) {
                                                iVar3 = iVar4;
                                            }
                                            if (iVar3 < 0) {
                                                uVar19 = (ulong)iVar7;
                                                do {
                                                    puVar2 = (uint*)SharedArray<unsigned int>::operator[](
                                                        (SharedArray<unsigned int>*)param_1,
                                                        (long)(int)(((int)uVar14 >> 12) * param_1->field_24 +
                                                                    ((int)uVar11 >> 12)));
                                                    uVar17 = *puVar2;
                                                    puVar2 = (uint*)SharedArray<unsigned int>::operator[](
                                                        (SharedArray<unsigned int>*)&field_32, uVar19);
                                                    if (16777215 < uVar17) {
                                                        if (uVar17 < 4278190081) {
                                                            uVar1 = uVar17 >> 24;
                                                            uVar17 = ComputeCompositeRGB(uVar17, uVar1);
                                                            uVar17 = BlendPixel(uVar17, uVar1, uVar1 ^ 255, *puVar2);
                                                        }
                                                        *puVar2 = uVar17;
                                                    }
                                                    uVar14 = uVar14 + iVar6;
                                                    uVar19 = uVar19 + 1;
                                                    iVar3 = iVar3 + 1;
                                                } while (iVar3 != 0);
                                            }
                                        }
                                        uVar11 = uVar11 - iVar6;
                                        iVar12 = iVar12 + field_8;
                                        iVar9 = iVar9 + 1;
                                    } while (iVar9 != 0);
                                }
                            } else if (iVar9 < 0) {
                                do {
                                    if ((-1 < (int)uVar11) && ((int)(uVar11 + param_1->field_24 * -4096) < 0)) {
                                        iVar7 = iVar12;
                                        iVar3 = iVar13;
                                        uVar14 = uVar8;
                                        if ((int)uVar8 < 0) {
                                            iVar7 = (int)(~uVar8 + iVar6) / iVar6;
                                            iVar3 = iVar7 + iVar13;
                                            uVar14 = iVar7 * iVar6 + uVar8;
                                            iVar7 = iVar7 + iVar12;
                                        }
                                        iVar4 = (int)((1 - iVar6) + uVar14 + param_1->field_28 * -4096) / iVar6;
                                        if (iVar3 < iVar4) {
                                            iVar3 = iVar4;
                                        }
                                        if (iVar3 < 0) {
                                            uVar19 = (ulong)iVar7;
                                            do {
                                                puVar2 = (uint*)SharedArray<unsigned int>::operator[](
                                                    (SharedArray<unsigned int>*)param_1,
                                                    (long)(int)(((int)uVar14 >> 12) * param_1->field_24 +
                                                                ((int)uVar11 >> 12)));
                                                uVar17 = *puVar2;
                                                puVar2 = (uint*)SharedArray<unsigned int>::operator[](
                                                    (SharedArray<unsigned int>*)&field_32, uVar19);
                                                if (16777215 < uVar17) {
                                                    if (uVar17 < 4278190081) {
                                                        uVar1 = uVar17 >> 24;
                                                        uVar17 = ComputeCompositeRGB(uVar17, uVar1);
                                                        uVar17 = BlendPixel(uVar17, uVar1, uVar1 ^ 255, *puVar2);
                                                    }
                                                    *puVar2 = uVar17;
                                                }
                                                uVar14 = uVar14 + iVar6;
                                                uVar19 = uVar19 + 1;
                                                iVar3 = iVar3 + 1;
                                            } while (iVar3 != 0);
                                        }
                                    }
                                    uVar11 = uVar11 - iVar6;
                                    iVar12 = iVar12 + field_8;
                                    iVar9 = iVar9 + 1;
                                } while (iVar9 != 0);
                            }
                        }
                    } else if (iVar5 < 0) {
                        if (iVar6 == 0) {
                            if (iVar9 < 0) {
                                iVar7 = uVar11 + (iVar3 * iVar5 >> 4);
                                do {
                                    if ((-1 < (int)uVar8) && ((int)(uVar8 + param_1->field_28 * -4096) < 0)) {
                                        iVar10 = iVar7 + param_1->field_24 * -4096;
                                        iVar3 = iVar12;
                                        iVar6 = iVar13;
                                        iVar4 = iVar7;
                                        if (-1 < iVar10) {
                                            iVar3 = (iVar5 - iVar10) / iVar5;
                                            iVar6 = iVar3 + iVar13;
                                            iVar4 = iVar3 * iVar5 + iVar7;
                                            iVar3 = iVar3 + iVar12;
                                        }
                                        iVar10 = (iVar4 - iVar5) / iVar5;
                                        if (iVar6 < iVar10) {
                                            iVar6 = iVar10;
                                        }
                                        if (iVar6 < 0) {
                                            uVar19 = (ulong)iVar3;
                                            do {
                                                puVar2 = (uint*)SharedArray<unsigned int>::operator[](
                                                    (SharedArray<unsigned int>*)param_1,
                                                    (long)(int)((iVar4 >> 12) +
                                                                param_1->field_24 * ((int)uVar8 >> 12)));
                                                uVar14 = *puVar2;
                                                puVar2 = (uint*)SharedArray<unsigned int>::operator[](
                                                    (SharedArray<unsigned int>*)&field_32, uVar19);
                                                if (16777215 < uVar14) {
                                                    if (uVar14 < 4278190081) {
                                                        uVar17 = uVar14 >> 24;
                                                        uVar14 = ComputeCompositeRGB(uVar14, uVar17);
                                                        uVar14 = BlendPixel(uVar14, uVar17, uVar17 ^ 255, *puVar2);
                                                    }
                                                    *puVar2 = uVar14;
                                                }
                                                iVar4 = iVar4 + iVar5;
                                                uVar19 = uVar19 + 1;
                                                iVar6 = iVar6 + 1;
                                            } while (iVar6 != 0);
                                        }
                                    }
                                    uVar8 = uVar8 + iVar5;
                                    iVar12 = iVar12 + field_8;
                                    iVar9 = iVar9 + 1;
                                } while (iVar9 != 0);
                            }
                        } else {
                            iVar7 = iVar3 * iVar5 >> 4;
                            iVar3 = iVar3 * iVar6 >> 4;
                            if (iVar6 < 0) {
                                if (iVar9 < 0) {
                                    do {
                                        iVar10 = uVar11 + iVar7;
                                        iVar15 = uVar8 + iVar3;
                                        iVar4 = iVar10 + param_1->field_24 * -4096;
                                        if (iVar4 < 0) {
                                            iVar4 = iVar13;
                                            iVar16 = iVar12;
                                        } else {
                                            iVar16 = (iVar5 - iVar4) / iVar5;
                                            iVar10 = iVar10 + iVar16 * iVar5;
                                            iVar15 = iVar15 + iVar16 * iVar6;
                                            iVar4 = iVar16 + iVar13;
                                            iVar16 = iVar16 + iVar12;
                                        }
                                        iVar18 = (iVar10 - iVar5) / iVar5;
                                        if (iVar4 < iVar18) {
                                            iVar4 = iVar18;
                                        }
                                        iVar18 = iVar15 + param_1->field_28 * -4096;
                                        if (-1 < iVar18) {
                                            iVar18 = (iVar6 - iVar18) / iVar6;
                                            iVar4 = iVar4 + iVar18;
                                            iVar16 = iVar16 + iVar18;
                                            iVar10 = iVar10 + iVar18 * iVar5;
                                            iVar15 = iVar15 + iVar18 * iVar6;
                                        }
                                        iVar18 = (iVar15 - iVar6) / iVar6;
                                        if (iVar4 < iVar18) {
                                            iVar4 = iVar18;
                                        }
                                        if (iVar4 < 0) {
                                            uVar19 = (ulong)iVar16;
                                            do {
                                                puVar2 = (uint*)SharedArray<unsigned int>::operator[](
                                                    (SharedArray<unsigned int>*)param_1,
                                                    (long)(int)((iVar10 >> 12) + (iVar15 >> 12) * param_1->field_24));
                                                uVar14 = *puVar2;
                                                puVar2 = (uint*)SharedArray<unsigned int>::operator[](
                                                    (SharedArray<unsigned int>*)&field_32, uVar19);
                                                if (16777215 < uVar14) {
                                                    if (uVar14 < 4278190081) {
                                                        uVar17 = uVar14 >> 24;
                                                        uVar14 = ComputeCompositeRGB(uVar14, uVar17);
                                                        uVar14 = BlendPixel(uVar14, uVar17, uVar17 ^ 255, *puVar2);
                                                    }
                                                    *puVar2 = uVar14;
                                                }
                                                iVar10 = iVar10 + iVar5;
                                                iVar15 = iVar15 + iVar6;
                                                uVar19 = uVar19 + 1;
                                                iVar4 = iVar4 + 1;
                                            } while (iVar4 != 0);
                                        }
                                        uVar11 = uVar11 - iVar6;
                                        uVar8 = uVar8 + iVar5;
                                        iVar12 = iVar12 + field_8;
                                        iVar9 = iVar9 + 1;
                                    } while (iVar9 != 0);
                                }
                            } else if (iVar9 < 0) {
                                do {
                                    iVar10 = uVar11 + iVar7;
                                    uVar14 = uVar8 + iVar3;
                                    iVar4 = iVar10 + param_1->field_24 * -4096;
                                    if (iVar4 < 0) {
                                        iVar4 = iVar13;
                                        iVar15 = iVar12;
                                    } else {
                                        iVar15 = (iVar5 - iVar4) / iVar5;
                                        iVar10 = iVar10 + iVar15 * iVar5;
                                        uVar14 = iVar15 * iVar6 + uVar14;
                                        iVar4 = iVar15 + iVar13;
                                        iVar15 = iVar15 + iVar12;
                                    }
                                    iVar16 = (iVar10 - iVar5) / iVar5;
                                    if (iVar4 < iVar16) {
                                        iVar4 = iVar16;
                                    }
                                    if ((int)uVar14 < 0) {
                                        iVar16 = (int)(~uVar14 + iVar6) / iVar6;
                                        iVar4 = iVar4 + iVar16;
                                        iVar15 = iVar15 + iVar16;
                                        iVar10 = iVar10 + iVar16 * iVar5;
                                        uVar14 = iVar16 * iVar6 + uVar14;
                                    }
                                    iVar16 = (int)((1 - iVar6) + uVar14 + param_1->field_28 * -4096) / iVar6;
                                    if (iVar4 < iVar16) {
                                        iVar4 = iVar16;
                                    }
                                    if (iVar4 < 0) {
                                        uVar19 = (ulong)iVar15;
                                        do {
                                            puVar2 = (uint*)SharedArray<unsigned int>::operator[](
                                                (SharedArray<unsigned int>*)param_1,
                                                (long)(int)((iVar10 >> 12) + ((int)uVar14 >> 12) * param_1->field_24));
                                            uVar17 = *puVar2;
                                            puVar2 = (uint*)SharedArray<unsigned int>::operator[](
                                                (SharedArray<unsigned int>*)&field_32, uVar19);
                                            if (16777215 < uVar17) {
                                                if (uVar17 < 4278190081) {
                                                    uVar1 = uVar17 >> 24;
                                                    uVar17 = ComputeCompositeRGB(uVar17, uVar1);
                                                    uVar17 = BlendPixel(uVar17, uVar1, uVar1 ^ 255, *puVar2);
                                                }
                                                *puVar2 = uVar17;
                                            }
                                            iVar10 = iVar10 + iVar5;
                                            uVar14 = uVar14 + iVar6;
                                            uVar19 = uVar19 + 1;
                                            iVar4 = iVar4 + 1;
                                        } while (iVar4 != 0);
                                    }
                                    uVar11 = uVar11 - iVar6;
                                    uVar8 = uVar8 + iVar5;
                                    iVar12 = iVar12 + field_8;
                                    iVar9 = iVar9 + 1;
                                } while (iVar9 != 0);
                            }
                        }
                    } else if (iVar6 == 0) {
                        if (iVar9 < 0) {
                            uVar11 = uVar11 + (iVar3 * iVar5 >> 4);
                            do {
                                if ((-1 < (int)uVar8) && ((int)(uVar8 + param_1->field_28 * -4096) < 0)) {
                                    iVar7 = iVar12;
                                    iVar3 = iVar13;
                                    uVar14 = uVar11;
                                    if ((int)uVar11 < 0) {
                                        iVar7 = (int)(~uVar11 + iVar5) / iVar5;
                                        iVar3 = iVar7 + iVar13;
                                        uVar14 = iVar7 * iVar5 + uVar11;
                                        iVar7 = iVar7 + iVar12;
                                    }
                                    iVar4 = (int)((1 - iVar5) + uVar14 + param_1->field_24 * -4096) / iVar5;
                                    if (iVar3 < iVar4) {
                                        iVar3 = iVar4;
                                    }
                                    if (iVar3 < 0) {
                                        uVar19 = (ulong)iVar7;
                                        do {
                                            puVar2 = (uint*)SharedArray<unsigned int>::operator[](
                                                (SharedArray<unsigned int>*)param_1,
                                                (long)(int)(((int)uVar14 >> 12) +
                                                            param_1->field_24 * ((int)uVar8 >> 12)));
                                            uVar17 = *puVar2;
                                            puVar2 = (uint*)SharedArray<unsigned int>::operator[](
                                                (SharedArray<unsigned int>*)&field_32, uVar19);
                                            if (16777215 < uVar17) {
                                                if (uVar17 < 4278190081) {
                                                    uVar1 = uVar17 >> 24;
                                                    uVar17 = ComputeCompositeRGB(uVar17, uVar1);
                                                    uVar17 = BlendPixel(uVar17, uVar1, uVar1 ^ 255, *puVar2);
                                                }
                                                *puVar2 = uVar17;
                                            }
                                            uVar14 = uVar14 + iVar5;
                                            uVar19 = uVar19 + 1;
                                            iVar3 = iVar3 + 1;
                                        } while (iVar3 != 0);
                                    }
                                }
                                uVar8 = uVar8 + iVar5;
                                iVar12 = iVar12 + field_8;
                                iVar9 = iVar9 + 1;
                            } while (iVar9 != 0);
                        }
                    } else {
                        iVar7 = iVar3 * iVar5 >> 4;
                        iVar3 = iVar3 * iVar6 >> 4;
                        if (iVar6 < 0) {
                            if (iVar9 < 0) {
                                do {
                                    iVar4 = uVar8 + iVar3;
                                    uVar14 = uVar11 + iVar7;
                                    if ((int)uVar14 < 0) {
                                        iVar10 = (int)(~uVar14 + iVar5) / iVar5;
                                        iVar15 = iVar10 + iVar13;
                                        uVar14 = iVar10 * iVar5 + uVar14;
                                        iVar4 = iVar4 + iVar10 * iVar6;
                                        iVar10 = iVar10 + iVar12;
                                    } else {
                                        iVar10 = iVar12;
                                        iVar15 = iVar13;
                                    }
                                    iVar16 = (int)((1 - iVar5) + uVar14 + param_1->field_24 * -4096) / iVar5;
                                    if (iVar15 < iVar16) {
                                        iVar15 = iVar16;
                                    }
                                    iVar16 = iVar4 + param_1->field_28 * -4096;
                                    if (-1 < iVar16) {
                                        iVar16 = (iVar6 - iVar16) / iVar6;
                                        iVar15 = iVar15 + iVar16;
                                        iVar10 = iVar10 + iVar16;
                                        uVar14 = iVar16 * iVar5 + uVar14;
                                        iVar4 = iVar4 + iVar16 * iVar6;
                                    }
                                    iVar16 = (iVar4 - iVar6) / iVar6;
                                    if (iVar15 < iVar16) {
                                        iVar15 = iVar16;
                                    }
                                    if (iVar15 < 0) {
                                        uVar19 = (ulong)iVar10;
                                        do {
                                            puVar2 = (uint*)SharedArray<unsigned int>::operator[](
                                                (SharedArray<unsigned int>*)param_1,
                                                (long)(int)(((int)uVar14 >> 12) + (iVar4 >> 12) * param_1->field_24));
                                            uVar17 = *puVar2;
                                            puVar2 = (uint*)SharedArray<unsigned int>::operator[](
                                                (SharedArray<unsigned int>*)&field_32, uVar19);
                                            if (16777215 < uVar17) {
                                                if (uVar17 < 4278190081) {
                                                    uVar1 = uVar17 >> 24;
                                                    uVar17 = ComputeCompositeRGB(uVar17, uVar1);
                                                    uVar17 = BlendPixel(uVar17, uVar1, uVar1 ^ 255, *puVar2);
                                                }
                                                *puVar2 = uVar17;
                                            }
                                            uVar14 = uVar14 + iVar5;
                                            iVar4 = iVar4 + iVar6;
                                            uVar19 = uVar19 + 1;
                                            iVar15 = iVar15 + 1;
                                        } while (iVar15 != 0);
                                    }
                                    uVar11 = uVar11 - iVar6;
                                    uVar8 = uVar8 + iVar5;
                                    iVar12 = iVar12 + field_8;
                                    iVar9 = iVar9 + 1;
                                } while (iVar9 != 0);
                            }
                        } else if (iVar9 < 0) {
                            do {
                                uVar17 = uVar8 + iVar3;
                                uVar14 = uVar11 + iVar7;
                                if ((int)uVar14 < 0) {
                                    iVar4 = (int)(~uVar14 + iVar5) / iVar5;
                                    iVar10 = iVar4 + iVar13;
                                    uVar14 = iVar4 * iVar5 + uVar14;
                                    uVar17 = iVar4 * iVar6 + uVar17;
                                    iVar4 = iVar4 + iVar12;
                                } else {
                                    iVar4 = iVar12;
                                    iVar10 = iVar13;
                                }
                                iVar15 = (int)((1 - iVar5) + uVar14 + param_1->field_24 * -4096) / iVar5;
                                if (iVar10 < iVar15) {
                                    iVar10 = iVar15;
                                }
                                if ((int)uVar17 < 0) {
                                    iVar15 = (int)(~uVar17 + iVar6) / iVar6;
                                    iVar10 = iVar10 + iVar15;
                                    iVar4 = iVar4 + iVar15;
                                    uVar14 = iVar15 * iVar5 + uVar14;
                                    uVar17 = iVar15 * iVar6 + uVar17;
                                }
                                iVar15 = (int)((1 - iVar6) + uVar17 + param_1->field_28 * -4096) / iVar6;
                                if (iVar10 < iVar15) {
                                    iVar10 = iVar15;
                                }
                                if (iVar10 < 0) {
                                    uVar19 = (ulong)iVar4;
                                    do {
                                        puVar2 = (uint*)SharedArray<unsigned int>::operator[](
                                            (SharedArray<unsigned int>*)param_1,
                                            (long)(int)(((int)uVar14 >> 12) + ((int)uVar17 >> 12) * param_1->field_24));
                                        uVar1 = *puVar2;
                                        puVar2 = (uint*)SharedArray<unsigned int>::operator[](
                                            (SharedArray<unsigned int>*)&field_32, uVar19);
                                        if (16777215 < uVar1) {
                                            if (uVar1 < 4278190081) {
                                                uVar20 = uVar1 >> 24;
                                                uVar1 = ComputeCompositeRGB(uVar1, uVar20);
                                                uVar1 = BlendPixel(uVar1, uVar20, uVar20 ^ 255, *puVar2);
                                            }
                                            *puVar2 = uVar1;
                                        }
                                        uVar14 = uVar14 + iVar5;
                                        uVar17 = uVar17 + iVar6;
                                        uVar19 = uVar19 + 1;
                                        iVar10 = iVar10 + 1;
                                    } while (iVar10 != 0);
                                }
                                uVar11 = uVar11 - iVar6;
                                uVar8 = uVar8 + iVar5;
                                iVar12 = iVar12 + field_8;
                                iVar9 = iVar9 + 1;
                            } while (iVar9 != 0);
                        }
                    }
                }
            }
        }
    }

    // 0x10031a9c0, 1088 bytes, placed by class name and debug map
    // NXTPix2D::AntialiasedShrinkPlotSprite(Pix32 const&, int, int, int, int)
    void NXTPix2D::AntialiasedShrinkPlotSprite(Pix32* param_1, int param_2, int param_3, int param_4, int param_5) {
        int iVar1;
        uint uVar2;
        int iVar3;
        uint uVar4;
        ulong uVar5;
        uint* puVar6;
        int iVar7;
        uint uVar8;
        int iVar9;
        uint uVar10;
        int iVar11;
        uint uVar12;
        int iVar13;
        uint uVar14;
        int iVar15;
        uint uVar16;
        uint uVar17;
        uint uVar18;
        uint uVar19;
        uint uVar20;
        int iVar21;
        uint uVar22;
        int iVar23;
        uint uVar24;
        uint uVar25;
        bool bVar26;
        ulong local_68;
        uint local_40;
        uint local_3c;
        uint local_38;

        uVar24 = param_1->field_40;
        if (param_4 <= (int)uVar24) {
            uVar8 = param_1->field_44;
            if (param_5 <= (int)uVar8) {
                uVar22 = (int)(param_1->field_32 * param_4) / (int)uVar24 + param_2;
                uVar24 = (int)(uVar24 + (param_1->field_32 + param_1->field_24) * param_4 + -1) / (int)uVar24 + param_2;
                iVar15 = (int)(param_1->field_36 * param_5) / (int)uVar8 + param_3;
                iVar3 = (int)(uVar8 + (param_1->field_36 + param_1->field_28) * param_5 + -1) / (int)uVar8 + param_3;
                if ((int)uVar22 < (int)field_24) {
                    uVar22 = field_24;
                }
                if ((int)field_28 < (int)uVar24) {
                    uVar24 = field_28;
                }
                if (iVar15 < field_16) {
                    iVar15 = field_16;
                }
                if (field_20 < iVar3) {
                    iVar3 = field_20;
                }
                if (((int)uVar22 < (int)uVar24) && (iVar15 < iVar3)) {
                    iVar1 = field_8;
                    local_68 = (ulong)(iVar1 * iVar15 + uVar22);
                    uVar5 = (&field_32)->HeapBeginPtr();
                    if (local_68 < uVar5) {
                        do {
                            iVar7 = (iVar15 - param_3) * 16;
                            uVar8 = uVar22;
                            do {
                                iVar9 = (uVar8 - param_2) * 16;
                                uVar18 = (int)(param_1->field_40 * iVar9) / param_4 + param_1->field_32 * -16;
                                iVar21 = (int)((iVar9 + 16) * param_1->field_40) / param_4 + param_1->field_32 * -16;
                                uVar20 = (int)(param_1->field_44 * iVar7) / param_5 + param_1->field_36 * -16;
                                iVar9 = (int)(param_1->field_44 * (iVar7 + 16)) / param_5 + param_1->field_36 * -16;
                                uVar10 = (iVar9 - uVar20) * (iVar21 - uVar18);
                                if (1 < uVar10) {
                                    if ((int)uVar18 < 0) {
                                        uVar18 = 0;
                                    }
                                    iVar11 = param_1->field_24 * 16;
                                    if (iVar21 < iVar11) {
                                        iVar11 = iVar21;
                                    }
                                    local_40 = 0;
                                    if ((int)uVar20 < 0) {
                                        uVar20 = 0;
                                    }
                                    iVar21 = param_1->field_28 * 16;
                                    if (iVar9 < iVar21) {
                                        iVar21 = iVar9;
                                    }
                                    uVar4 = uVar20 >> 4;
                                    uVar14 = (int)(iVar21 - 1U) >> 4;
                                    local_38 = 0;
                                    local_3c = 0;
                                    uVar25 = 0;
                                    if ((int)uVar4 <= (int)uVar14) {
                                        uVar19 = uVar18 >> 4;
                                        uVar12 = (int)(iVar11 - 1U) >> 4;
                                        uVar16 = uVar19;
                                        if ((int)uVar19 < (int)uVar12) {
                                            uVar16 = uVar12;
                                        }
                                        uVar25 = 0;
                                        local_3c = 0;
                                        local_38 = 0;
                                        local_40 = 0;
                                        uVar17 = uVar4;
                                        do {
                                            iVar9 = 16;
                                            if (uVar17 == uVar4) {
                                                iVar9 = 16 - (uVar20 & 15);
                                            }
                                            if (uVar17 == uVar14) {
                                                iVar9 = (iVar21 - 1U & 15) + 1;
                                            }
                                            if ((int)uVar19 <= (int)uVar12) {
                                                iVar23 = 0;
                                                do {
                                                    puVar6 = (uint*)SharedArray<unsigned int>::operator[](
                                                        (SharedArray<unsigned int>*)param_1,
                                                        (long)(int)(param_1->field_24 * uVar17 + uVar19 + iVar23));
                                                    uVar2 = *puVar6;
                                                    if (uVar2 != 0) {
                                                        iVar13 = iVar9 << 4;
                                                        if (iVar23 == uVar12 - uVar19) {
                                                            iVar13 = iVar9 * ((iVar11 - 1U & 15) + 1);
                                                        }
                                                        if (iVar23 == 0) {
                                                            iVar13 = iVar9 * (16 - (uVar18 & 15));
                                                        }
                                                        uVar25 = uVar25 + iVar13;
                                                        local_40 = local_40 + (uVar2 >> 16 & 255) * iVar13;
                                                        local_38 = local_38 + (uVar2 >> 8 & 255) * iVar13;
                                                        local_3c = local_3c + (uVar2 & 255) * iVar13;
                                                    }
                                                    iVar23 = iVar23 + 1;
                                                } while ((uVar16 - uVar19) + 1 != iVar23);
                                            }
                                            bVar26 = uVar17 != uVar14;
                                            uVar17 = uVar17 + 1;
                                        } while (bVar26);
                                    }
                                    if ((uint)((int)uVar10 >> 1) <= uVar25) {
                                        puVar6 = (uint*)SharedArray<unsigned int>::operator[](
                                            (SharedArray<unsigned int>*)&field_32, (long)(int)local_68);
                                        *puVar6 = local_3c / uVar25 + (local_38 / uVar25) * 256 +
                                                      (local_40 / uVar25) * 65536 |
                                                  4278190080;
                                    }
                                    local_68 = (ulong)((int)local_68 + 1);
                                }
                                uVar8 = uVar8 + 1;
                            } while (uVar8 != uVar24);
                            local_68 = (ulong)((int)local_68 + (uVar22 - uVar24) + iVar1);
                            iVar15 = iVar15 + 1;
                        } while (iVar15 != iVar3);
                    }
                }
                return;
            }
        }
        /* WARNING: Subroutine does not return */
        LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/"
                        "graphics/NXTPix2D.cpp",
                        3074, "This is only suitable for scaling down, not up");
    }

} // namespace jag::oldscape::graphics
