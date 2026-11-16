// libs/oldscape/jagex3/graphics/NXTPix2D.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.oldscape.jagex3

#include "NXTPix2D.h"

namespace jag::oldscape::graphics {
    // 0x100009e70: NXTPix2D::PrepareRender() has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

    // 0x100314930
    void NXTPix2D::Cls() {
        uint64_t uVar1 = field_32.data();
        long lVar2 = field_32.HeapBeginPtr();
        ___bzero(uVar1, lVar2 * 4);
    }

    // 0x100314970
    void NXTPix2D::ClearRect(int arg1, int arg2, int arg3, int arg4) {
        FillRect_Inner(arg1, arg2, arg3, arg4, 0);
    }

    // 0x100314980
    void NXTPix2D::FillRect_Inner(int arg1, int arg2, int arg3, int arg4, unsigned int arg5) {
        bool bVar2;
        unsigned int uVar3;
        unsigned int* puVar4;
        unsigned int uVar7;
        unsigned long arg1_00;
        unsigned long uVar8;

        unsigned int uVar10 = field_24;
        int iVar9 = arg1 - uVar10;
        if (arg1 < (int)uVar10) {
            uVar3 = uVar10;
        } else {
            iVar9 = 0;
            uVar3 = arg1;
        }
        int iVar11 = field_16;
        int iVar6 = arg2 - iVar11;
        if (iVar11 <= arg2) {
            iVar6 = 0;
            iVar11 = arg2;
        }
        unsigned int uVar1 = field_28;
        int iVar5 = uVar1 - uVar3;
        if ((int)(iVar9 + arg3 + uVar3) <= (int)uVar1) {
            iVar5 = iVar9 + arg3;
        }
        iVar9 = field_20 - iVar11;
        if (iVar6 + arg4 + iVar11 <= field_20) {
            iVar9 = iVar6 + arg4;
        }
        if (0 < iVar9) {
            iVar6 = field_8;
            uVar7 = iVar11 * iVar6 + uVar3;
            if ((int)uVar10 < arg1) {
                arg1 = uVar10;
            }
            uVar10 = (arg3 + arg1 + uVar3) - uVar10;
            if ((int)uVar1 < (int)uVar10) {
                uVar10 = uVar1;
            }
            iVar9 = -iVar9;
            do {
                uVar8 = (unsigned long)uVar7;
                if (-iVar5 < 0) {
                    arg1_00 = (long)(int)uVar7;
                    iVar11 = ~uVar10 + uVar3;
                    do {
                        uVar8 = arg1_00 + 1;
                        puVar4 = &field_32[arg1_00];
                        *puVar4 = arg5;
                        iVar11 = iVar11 + 1;
                        arg1_00 = uVar8;
                    } while (iVar11 < -1);
                }
                uVar7 = (int)uVar8 + (iVar6 - iVar5);
                bVar2 = iVar9 < -1;
                iVar9 = iVar9 + 1;
            } while (bVar2);
        }
    }

    // 0x100314aa0
    void NXTPix2D::FillRectTrans(int arg1, int arg2, int arg3, int arg4, unsigned int arg5, unsigned int arg6) {
        int iVar1;
        unsigned int uVar2;
        unsigned int arg1_00;
        unsigned int uVar3;
        unsigned int* puVar4;
        unsigned int uVar5;
        unsigned long arg1_01;
        int iVar6;
        int iVar7;
        unsigned int uVar8;
        int iVar9;
        int iVar10;

        if (arg6 != 0) {
            if (arg6 < 255) {
                uVar8 = field_24;
                uVar2 = arg1;
                iVar10 = 0;
                if (arg1 < (int)uVar8) {
                    uVar2 = uVar8;
                    iVar10 = arg1 - uVar8;
                }
                iVar9 = field_16;
                iVar6 = arg2 - iVar9;
                if (iVar9 <= arg2) {
                    iVar9 = arg2;
                    iVar6 = 0;
                }
                uVar3 = field_28;
                iVar7 = uVar3 - uVar2;
                if ((int)(iVar10 + arg3 + uVar2) <= (int)uVar3) {
                    iVar7 = iVar10 + arg3;
                }
                iVar10 = field_20 - iVar9;
                if (iVar6 + arg4 + iVar9 <= field_20) {
                    iVar10 = iVar6 + arg4;
                }
                arg1_00 = ComputeCompositeRGB(arg5, arg6);
                iVar6 = 0;
                if (0 < iVar10) {
                    iVar1 = field_8;
                    uVar5 = iVar9 * iVar1 + uVar2;
                    if ((int)uVar8 < arg1) {
                        arg1 = uVar8;
                    }
                    uVar8 = (arg3 + arg1 + uVar2) - uVar8;
                    if ((int)uVar3 < (int)uVar8) {
                        uVar8 = uVar3;
                    }
                    do {
                        arg1_01 = (unsigned long)uVar5;
                        if (-iVar7 < 0) {
                            arg1_01 = (unsigned long)(int)uVar5;
                            iVar9 = ~uVar8 + uVar2;
                            do {
                                puVar4 = &field_32[arg1_01];
                                uVar3 = arg5 & 16777215 | arg6 << 24;
                                if (*puVar4 != 0) {
                                    uVar3 = BlendPixel(arg1_00, arg6, 255 - arg6, *puVar4);
                                }
                                puVar4 = &field_32[arg1_01];
                                *puVar4 = uVar3;
                                arg1_01 = arg1_01 + 1;
                                iVar9 = iVar9 + 1;
                            } while (iVar9 < -1);
                        }
                        uVar5 = (int)arg1_01 + (iVar1 - iVar7);
                        iVar6 = iVar6 + 1;
                    } while (iVar6 < iVar10);
                }
            } else {
                FillRect((int)this, arg1, arg2, arg3, arg4);
            }
        }
    }

    // 0x100314c70
    void NXTPix2D::FillRect(int arg1, int arg2, int arg3, int arg4, unsigned int arg5) {
        FillRect_Inner(arg1, arg2, arg3, arg4, arg5 | 4278190080);
    }

    // 0x100314c90
    void NXTPix2D::FillRectVGradTrans(int arg1, int arg2, int arg3, int arg4, unsigned int arg5, unsigned int arg6,
                                      unsigned int arg7, unsigned int arg8) {
        int iVar1;
        bool bVar2;
        int iVar3;
        int iVar4;
        int iVar5;
        unsigned int* puVar6;
        unsigned int uVar7;
        int iVar8;
        unsigned int uVar9;
        unsigned long arg1_00;
        unsigned int uVar10;
        unsigned int uVar11;
        int iVar12;
        int iVar13;
        unsigned int uVar14;
        unsigned int uVar15;
        unsigned int arg2_00;

        if ((0 < arg3) && (0 < arg4)) {
            iVar3 = (int)(65536 / (long)arg4);
            uVar15 = field_24;
            iVar8 = arg1 - uVar15;
            if (arg1 < (int)uVar15) {
                uVar11 = uVar15;
            } else {
                iVar8 = 0;
                uVar11 = arg1;
            }
            iVar4 = field_16;
            iVar12 = iVar4 - arg2;
            iVar5 = arg2;
            iVar1 = 0;
            if (iVar12 != 0 && arg2 <= iVar4) {
                iVar5 = iVar4;
                iVar1 = iVar12;
            }
            uVar10 = field_28;
            iVar13 = uVar10 - uVar11;
            if ((int)(iVar8 + arg3 + uVar11) <= (int)uVar10) {
                iVar13 = iVar8 + arg3;
            }
            iVar8 = field_20 - iVar5;
            if ((arg4 - iVar1) + iVar5 <= field_20) {
                iVar8 = arg4 - iVar1;
            }
            if (0 < iVar8) {
                iVar1 = field_8;
                uVar9 = iVar5 * iVar1 + uVar11;
                uVar7 = 0;
                if (arg2 < iVar4) {
                    uVar7 = iVar12 * iVar3;
                }
                if ((int)uVar15 < arg1) {
                    arg1 = uVar15;
                }
                uVar15 = (arg3 + arg1 + uVar11) - uVar15;
                if ((int)uVar10 < (int)uVar15) {
                    uVar15 = uVar10;
                }
                iVar8 = -iVar8;
                do {
                    arg1_00 = (unsigned long)uVar9;
                    uVar10 = 65536 - uVar7 >> 8;
                    uVar14 = (uVar7 >> 8) * arg8 + uVar10 * arg7 >> 8;
                    arg2_00 = uVar14 & 255;
                    if (arg2_00 == 0) {
                        uVar9 = uVar9 + field_8;
                    } else {
                        iVar4 = ComputeCompositeRGB(arg5, uVar10);
                        iVar5 = ComputeCompositeRGB(arg6, uVar7 >> 8);
                        uVar10 = ComputeCompositeRGB(iVar5 + iVar4, arg2_00);
                        if (-iVar13 < 0) {
                            uVar14 = iVar5 + iVar4 | uVar14 << 24;
                            arg1_00 = (unsigned long)(int)uVar9;
                            iVar4 = ~uVar15 + uVar11;
                            do {
                                puVar6 = &field_32[arg1_00];
                                uVar9 = uVar14;
                                if ((*puVar6 != 0) && (arg2_00 != 255)) {
                                    uVar9 = BlendPixel(uVar10, arg2_00, arg2_00 ^ 255, *puVar6);
                                }
                                puVar6 = &field_32[arg1_00];
                                *puVar6 = uVar9;
                                arg1_00 = arg1_00 + 1;
                                iVar4 = iVar4 + 1;
                            } while (iVar4 < -1);
                        }
                        uVar9 = (int)arg1_00 + (iVar1 - iVar13);
                    }
                    uVar7 = uVar7 + iVar3;
                    bVar2 = iVar8 < -1;
                    iVar8 = iVar8 + 1;
                } while (bVar2);
            }
        }
    }

    // 0x100314ec0
    void NXTPix2D::FillRect2Colour(int arg1, int arg2, int arg3, int arg4, unsigned int arg5, unsigned int arg6,
                                   Array<unsigned char>& arg7, int arg8, bool arg9) {
        int iVar1;
        unsigned int arg4_00;
        int iVar2;
        unsigned long uVar3;
        char* pcVar4;
        unsigned int* puVar5;
        int iVar6;
        int iVar7;
        unsigned int uVar8;
        unsigned int uVar9;
        unsigned int uVar10;
        int iVar11;
        int local_90;

        if ((-1 < arg3 + arg1) && (-1 < arg4 + arg2)) {
            iVar1 = field_8;
            if (iVar1 - arg1 != 0 && arg1 <= iVar1) {
                iVar2 = field_12;
                if (iVar2 - arg2 != 0 && arg2 <= iVar2) {
                    uVar10 = -arg1;
                    uVar8 = arg1 >> 31 & uVar10;
                    if (arg1 < 0) {
                        arg3 = arg3 + arg1;
                    }
                    uVar9 = arg2 >> 31 & -arg2;
                    if (arg2 < 0) {
                        arg4 = arg4 + arg2;
                    }
                    if (iVar1 < arg3 + arg1) {
                        arg3 = iVar1 - arg1;
                    }
                    if (iVar2 < arg4 + arg2) {
                        arg4 = iVar2 - arg2;
                    }
                    uVar3 = arg7.end();
                    iVar1 = field_8;
                    local_90 = (int)(uVar3 / (unsigned long)(long)arg8);
                    if (arg9) {
                        if ((arg5 >> 24 != 255) || (arg6 >> 24 != 255)) {
                            if (arg4 < 1) {
                                return;
                            }
                            iVar2 = uVar9 + arg2;
                            iVar11 = arg4 + iVar2;
                            iVar6 = uVar8 + arg1;
                            uVar8 = iVar1 * iVar2 + iVar6;
                            do {
                                uVar3 = (unsigned long)uVar8;
                                if (0 < arg3) {
                                    uVar3 = (unsigned long)(int)uVar8;
                                    iVar7 = iVar6;
                                    do {
                                        pcVar4 = &arg7[(long)((int)(uVar10 + iVar7) % arg8 +
                                                              ((iVar2 - arg2) % local_90) * arg8)];
                                        uVar9 = arg6 >> 24;
                                        uVar8 = arg6;
                                        if (*pcVar4 == '\0') {
                                            uVar9 = arg5 >> 24;
                                            uVar8 = arg5;
                                        }
                                        puVar5 = &field_32[uVar3];
                                        arg4_00 = *puVar5;
                                        if ((arg4_00 == 0) || (uVar9 == 255)) {
                                        LAB_100315140:
                                            puVar5 = &field_32[uVar3];
                                            *puVar5 = uVar8;
                                        } else if (uVar9 != 0) {
                                            uVar8 = ComputeCompositeRGB(uVar8, uVar9);
                                            uVar8 = BlendPixel(uVar8, uVar9, uVar9 ^ 255, arg4_00);
                                            goto LAB_100315140;
                                        }
                                        uVar3 = uVar3 + 1;
                                        iVar7 = iVar7 + 1;
                                    } while (iVar7 < arg3 + iVar6);
                                }
                                uVar8 = (int)uVar3 + (iVar1 - arg3);
                                iVar2 = iVar2 + 1;
                                if (iVar11 <= iVar2) {
                                    return;
                                }
                            } while (true);
                        }
                    }
                    if (0 < arg4) {
                        iVar6 = uVar9 + arg2;
                        iVar11 = arg4 + iVar6;
                        iVar2 = uVar8 + arg1;
                        uVar8 = iVar1 * iVar6 + iVar2;
                        do {
                            uVar3 = (unsigned long)uVar8;
                            if (0 < arg3) {
                                uVar3 = (unsigned long)(int)uVar8;
                                iVar7 = iVar2;
                                do {
                                    pcVar4 = &arg7[(long)((int)(uVar10 + iVar7) % arg8 +
                                                          ((iVar6 - arg2) % local_90) * arg8)];
                                    uVar8 = arg6;
                                    if (*pcVar4 == '\0') {
                                        uVar8 = arg5;
                                    }
                                    puVar5 = &field_32[uVar3];
                                    *puVar5 = uVar8;
                                    uVar3 = uVar3 + 1;
                                    iVar7 = iVar7 + 1;
                                } while (iVar7 < arg3 + iVar2);
                            }
                            uVar8 = (int)uVar3 + (iVar1 - arg3);
                            iVar6 = iVar6 + 1;
                        } while (iVar6 < iVar11);
                    }
                }
            }
        }
    }

    // 0x1003151f0
    void NXTPix2D::HLine(int arg1, int arg2, int arg3, unsigned int arg4) {
        int iVar1;
        unsigned int* puVar2;
        int iVar3;
        long lVar4;
        unsigned int uVar5;

        if ((field_16 <= arg2) && (arg2 < field_20)) {
            uVar5 = field_24;
            iVar3 = arg1 - uVar5;
            if ((int)uVar5 <= arg1) {
                iVar3 = 0;
                uVar5 = arg1;
            }
            iVar1 = field_28 - uVar5;
            if ((int)(iVar3 + arg3 + uVar5) <= (int)field_28) {
                iVar1 = iVar3 + arg3;
            }
            if (0 < iVar1) {
                iVar3 = field_8;
                lVar4 = 0;
                do {
                    puVar2 = &field_32[(int)(arg2 * iVar3 + uVar5) + lVar4];
                    *puVar2 = arg4 | 4278190080;
                    lVar4 = lVar4 + 1;
                } while (lVar4 < iVar1);
            }
        }
    }

    // 0x100315280
    void NXTPix2D::HLineTrans(int arg1, int arg2, int arg3, unsigned int arg4, unsigned int arg5) {
        unsigned long arg1_00;
        int iVar1;
        unsigned int arg1_01;
        uint32_t uVar2;
        uint32_t* puVar3;
        int* piVar4;
        unsigned int* puVar5;
        int iVar6;
        int iVar7;
        long lVar8;
        uint8_t* this_00;
        unsigned int uVar9;

        if (arg5 != 0) {
            if (arg5 < 255) {
                if ((field_16 <= arg2) && (arg2 < field_20)) {
                    uVar9 = field_24;
                    iVar7 = arg1 - uVar9;
                    if ((int)uVar9 <= arg1) {
                        uVar9 = arg1;
                        iVar7 = 0;
                    }
                    iVar6 = field_28 - uVar9;
                    if ((int)(iVar7 + arg3 + uVar9) <= (int)field_28) {
                        iVar6 = iVar7 + arg3;
                    }
                    arg1_01 = ComputeCompositeRGB(arg4, arg5);
                    if (0 < iVar6) {
                        iVar7 = field_8;
                        this_00 = &field_32;
                        lVar8 = 0;
                        do {
                            arg1_00 = (int)(uVar9 + arg2 * iVar7) + lVar8;
                            piVar4 = (int*)(*this_00)[arg1_00];
                            iVar1 = *piVar4;
                            puVar5 = (unsigned int*)(*this_00)[arg1_00];
                            if (iVar1 == 0) {
                                *puVar5 = arg5 << 24 | arg1_01;
                            } else {
                                uVar2 = BlendPixel(arg1_01, arg5, 255 - arg5, *puVar5);
                                puVar3 = (uint32_t*)(*this_00)[arg1_00];
                                *puVar3 = uVar2;
                            }
                            lVar8 = lVar8 + 1;
                        } while ((int)lVar8 < iVar6);
                    }
                }
            } else {
                HLine((int)this, arg1, arg2, arg3);
            }
        }
    }

    // 0x1003153c0
    void NXTPix2D::VLine(int arg1, int arg2, int arg3, unsigned int arg4) {
        unsigned int* puVar1;
        int iVar2;
        int iVar3;
        int iVar4;
        int iVar5;

        if (((int)field_24 <= arg1) && (arg1 < (int)field_28)) {
            iVar4 = field_16;
            iVar2 = 0;
            iVar3 = arg2 - iVar4;
            if (iVar4 <= arg2) {
                iVar3 = 0;
                iVar4 = arg2;
            }
            iVar5 = field_20 - iVar4;
            if (iVar3 + arg3 + iVar4 <= field_20) {
                iVar5 = iVar3 + arg3;
            }
            if (0 < iVar5) {
                iVar3 = field_8;
                do {
                    puVar1 = &field_32[(long)(field_8 * iVar2 + iVar4 * iVar3 + arg1)];
                    *puVar1 = arg4 | 4278190080;
                    iVar2 = iVar2 + 1;
                } while (iVar2 < iVar5);
            }
        }
    }

    // 0x100315470
    void NXTPix2D::VLineTrans(int arg1, int arg2, int arg3, unsigned int arg4, unsigned int arg5) {
        uint8_t* this_00;
        unsigned int arg1_00;
        uint32_t uVar1;
        uint32_t* puVar2;
        int* piVar3;
        unsigned int* puVar4;
        unsigned long arg1_01;
        int iVar5;
        int iVar6;
        int iVar7;
        int iVar8;

        if (arg5 != 0) {
            if (arg5 < 255) {
                if (((int)field_24 <= arg1) && (arg1 < (int)field_28)) {
                    iVar6 = field_16;
                    iVar8 = 0;
                    iVar5 = arg2 - iVar6;
                    if (iVar6 <= arg2) {
                        iVar5 = 0;
                        iVar6 = arg2;
                    }
                    iVar7 = field_20 - iVar6;
                    if (iVar5 + arg3 + iVar6 <= field_20) {
                        iVar7 = iVar5 + arg3;
                    }
                    arg1_00 = ComputeCompositeRGB(arg4, arg5);
                    if (0 < iVar7) {
                        this_00 = &field_32;
                        iVar6 = iVar6 * field_8 + arg1;
                        do {
                            arg1_01 = (unsigned long)iVar6;
                            piVar3 = (int*)(*this_00)[arg1_01];
                            iVar5 = *piVar3;
                            puVar4 = (unsigned int*)(*this_00)[arg1_01];
                            if (iVar5 == 0) {
                                *puVar4 = arg5 << 24 | arg1_00;
                            } else {
                                uVar1 = BlendPixel(arg1_00, arg5, 255 - arg5, *puVar4);
                                puVar2 = (uint32_t*)(*this_00)[arg1_01];
                                *puVar2 = uVar1;
                            }
                            iVar6 = iVar6 + field_8;
                            iVar8 = iVar8 + 1;
                        } while (iVar8 < iVar7);
                    }
                }
            } else {
                VLine((int)this, arg1, arg2, arg3);
            }
        }
    }

    // 0x1003155b0
    void NXTPix2D::Line(int arg1, int arg2, int arg3, int arg4, unsigned int arg5) {
        int iVar2;
        unsigned int* puVar3;
        NXTPix2D_vtbl* pNVar4;
        int iVar8;
        double dVar9;

        int iVar7 = arg3 - arg1;
        int iVar6 = arg4 - arg2;
        if (iVar6 == 0) {
            if (iVar7 < 0) {
                iVar7 = -iVar7;
                pNVar4 = this->_vptr;
                arg1 = arg3;
            } else {
                pNVar4 = this->_vptr;
            }
            (*pNVar4->HLine)((int)this, arg1, arg2, iVar7 + 1);
            return;
        }
        if (iVar7 == 0) {
            if (iVar6 < 0) {
                iVar6 = -iVar6;
                pNVar4 = this->_vptr;
                arg2 = arg4;
            } else {
                pNVar4 = this->_vptr;
            }
            (*pNVar4->VLine)((int)this, arg1, arg2, iVar6 + 1);
            return;
        }
        if (iVar6 + iVar7 < 0) {
            iVar7 = -iVar7;
            iVar6 = -iVar6;
            arg2 = arg4;
            arg1 = arg3;
            if (iVar7 <= iVar6)
                goto LAB_100315712;
        } else if (iVar7 <= iVar6) {
        LAB_100315712:
            dVar9 = (double)_floor((double)(iVar7 << 16) / (double)iVar6 + 0.5);
            iVar7 = field_16;
            iVar2 = arg2;
            if (iVar7 - arg2 != 0 && arg2 <= iVar7) {
                iVar2 = iVar7;
            }
            iVar8 = field_20 - 1;
            if (iVar6 + arg2 < field_20) {
                iVar8 = iVar6 + arg2;
            }
            if (iVar8 < iVar2) {
                return;
            }
            iVar6 = 0;
            if (arg2 < iVar7) {
                iVar6 = (iVar7 - arg2) * (int)dVar9;
            }
            iVar7 = iVar6 + arg1 * 65536 + 32768;
            do {
                iVar6 = iVar7 >> 16;
                if (((int)field_24 <= iVar6) && (iVar6 < (int)field_28)) {
                    puVar3 = &field_32[(long)(field_8 * iVar2 + iVar6)];
                    *puVar3 = arg5 | 4278190080;
                }
                iVar7 = iVar7 + (int)dVar9;
                iVar2 = iVar2 + 1;
            } while (iVar8 + 1 != iVar2);
            return;
        }
        dVar9 = (double)_floor((double)(iVar6 << 16) / (double)iVar7 + 0.5);
        unsigned int uVar1 = field_24;
        unsigned int uVar5 = arg1;
        if (uVar1 - arg1 != 0 && arg1 <= (int)uVar1) {
            uVar5 = uVar1;
        }
        iVar6 = field_28 - 1;
        if (iVar7 + arg1 < (int)field_28) {
            iVar6 = iVar7 + arg1;
        }
        if ((int)uVar5 <= iVar6) {
            iVar7 = 0;
            if (arg1 < (int)uVar1) {
                iVar7 = (uVar1 - arg1) * (int)dVar9;
            }
            iVar7 = arg2 * 65536 + iVar7 + 32768;
            do {
                iVar2 = iVar7 >> 16;
                if ((field_16 <= iVar2) && (iVar2 < field_20)) {
                    puVar3 = &field_32[(long)(int)(iVar2 * field_8 + uVar5)];
                    *puVar3 = arg5 | 4278190080;
                }
                iVar7 = iVar7 + (int)dVar9;
                uVar5 = uVar5 + 1;
            } while (iVar6 + 1U != uVar5);
        }
    }

    // 0x100315810
    void NXTPix2D::LineTrans(int arg1, int arg2, int arg3, int arg4, unsigned int arg5, unsigned int arg6) {
        uint8_t* puVar1;
        unsigned int uVar2;
        unsigned int arg1_00;
        unsigned int uVar3;
        uint32_t uVar4;
        int* piVar5;
        unsigned int* puVar6;
        uint32_t* puVar7;
        NXTPix2D_vtbl* pNVar8;
        unsigned int uVar9;
        int iVar10;
        int iVar11;
        int iVar12;
        int iVar13;
        unsigned long uVar14;
        double dVar15;

        if (arg6 != 0) {
            iVar12 = (int)this;
            if (arg6 < 255) {
                iVar13 = arg3 - arg1;
                iVar11 = arg4 - arg2;
                if (iVar11 == 0) {
                    if (iVar13 < 0) {
                        iVar13 = -iVar13;
                        pNVar8 = this->_vptr;
                        arg1 = arg3;
                    } else {
                        pNVar8 = this->_vptr;
                    }
                    (*pNVar8->HLineTrans)(iVar12, arg1, arg2, iVar13 + 1, arg5);
                } else if (iVar13 == 0) {
                    if (iVar11 < 0) {
                        iVar11 = -iVar11;
                        pNVar8 = this->_vptr;
                        arg2 = arg4;
                    } else {
                        pNVar8 = this->_vptr;
                    }
                    (*pNVar8->VLineTrans)(iVar12, arg1, arg2, iVar11 + 1, arg5);
                } else {
                    if (iVar11 + iVar13 < 0) {
                        iVar13 = -iVar13;
                        iVar11 = -iVar11;
                        arg1 = arg3;
                        arg2 = arg4;
                    }
                    uVar2 = arg6 << 24 | arg5;
                    arg1_00 = ComputeCompositeRGB(arg5, arg6);
                    if (iVar11 < iVar13) {
                        dVar15 = (double)_floor((double)(iVar11 << 16) / (double)iVar13 + 0.5);
                        uVar3 = field_24;
                        uVar9 = arg1;
                        if (uVar3 - arg1 != 0 && arg1 <= (int)uVar3) {
                            uVar9 = uVar3;
                        }
                        iVar12 = field_28 - 1;
                        if (iVar13 + arg1 < (int)field_28) {
                            iVar12 = iVar13 + arg1;
                        }
                        if ((int)uVar9 <= iVar12) {
                            iVar13 = 0;
                            if (arg1 < (int)uVar3) {
                                iVar13 = (uVar3 - arg1) * (int)dVar15;
                            }
                            puVar1 = &field_32;
                            iVar13 = arg2 * 65536 + iVar13 + 32768;
                            do {
                                iVar11 = iVar13 >> 16;
                                if ((field_16 <= iVar11) && (iVar11 < field_20)) {
                                    uVar14 = (unsigned long)(int)(iVar11 * field_8 + uVar9);
                                    piVar5 = (int*)(*puVar1)[uVar14];
                                    iVar11 = *piVar5;
                                    puVar6 = (unsigned int*)(*puVar1)[uVar14];
                                    if (iVar11 == 0) {
                                        uVar3 = uVar2;
                                    } else {
                                        uVar3 = BlendPixel(arg1_00, arg6, 255 - arg6, *puVar6);
                                        puVar6 = (unsigned int*)(*puVar1)[uVar14];
                                    }
                                    *puVar6 = uVar3;
                                }
                                iVar13 = iVar13 + (int)dVar15;
                                uVar9 = uVar9 + 1;
                            } while (iVar12 + 1U != uVar9);
                        }
                    } else {
                        dVar15 = (double)_floor((double)(iVar13 << 16) / (double)iVar11 + 0.5);
                        iVar12 = field_16;
                        iVar13 = arg2;
                        if (iVar12 - arg2 != 0 && arg2 <= iVar12) {
                            iVar13 = iVar12;
                        }
                        iVar10 = field_20 - 1;
                        if (iVar11 + arg2 < field_20) {
                            iVar10 = iVar11 + arg2;
                        }
                        if (iVar13 <= iVar10) {
                            iVar11 = 0;
                            if (arg2 < iVar12) {
                                iVar11 = (iVar12 - arg2) * (int)dVar15;
                            }
                            puVar1 = &field_32;
                            iVar12 = iVar11 + arg1 * 65536 + 32768;
                            do {
                                iVar11 = iVar12 >> 16;
                                if (((int)field_24 <= iVar11) && (iVar11 < (int)field_28)) {
                                    uVar14 = (unsigned long)(field_8 * iVar13 + iVar11);
                                    piVar5 = (int*)(*puVar1)[uVar14];
                                    iVar11 = *piVar5;
                                    puVar6 = (unsigned int*)(*puVar1)[uVar14];
                                    if (iVar11 == 0) {
                                        *puVar6 = uVar2;
                                    } else {
                                        uVar4 = BlendPixel(arg1_00, arg6, 255 - arg6, *puVar6);
                                        puVar7 = (uint32_t*)(*puVar1)[uVar14];
                                        *puVar7 = uVar4;
                                    }
                                }
                                iVar12 = iVar12 + (int)dVar15;
                                iVar13 = iVar13 + 1;
                            } while (iVar10 + 1 != iVar13);
                        }
                    }
                }
            } else {
                Line(iVar12, arg1, arg2, arg3, arg4);
            }
        }
    }

    // 0x100315b30
    void NXTPix2D::FillCircle(int arg1, int arg2, int arg3, unsigned int arg4) {
        int arg6;
        unsigned int arg7;
        unsigned int arg5;
        int arg4_00;
        int local_34;
        int local_30;
        int local_2c;

        SectorHLineHelper<OpaqueHelper> local_38(arg4, 255);
        int arg8 = field_20;
        int arg3_00 = arg2 - arg3;
        if (arg3_00 < arg8) {
            arg6 = field_16;
            arg4_00 = arg3 + arg2 + 1;
            if (arg6 <= arg4_00) {
                arg7 = field_28;
                if ((arg1 - arg3 < (int)arg7) && (arg5 = field_24, (int)arg5 <= arg3 + arg1 + 1)) {
                    local_34 = arg1;
                    local_30 = arg2;
                    local_2c = arg3;
                    if ((arg3_00 < arg6) ||
                        (((arg8 <= arg2 + arg3 || (arg1 - arg3 < (int)arg5)) || ((int)arg7 <= arg3 + arg1)))) {
                        local_38.DrawClipped(field_32, field_8, arg3_00, arg4_00, arg5, arg6, arg7, arg8);
                    } else {
                        local_38.DrawUnclipped(field_32, field_8, arg4_00);
                    }
                }
            }
        }
    }

    // 0x100315c00
    void NXTPix2D::FillCircleTrans(int arg1, int arg2, int arg3, unsigned int arg4, unsigned int arg5) {
        int iVar1;
        int iVar2;
        unsigned int uVar3;
        unsigned int uVar4;
        int iVar5;
        int iVar6;
        SectorHLineHelper<OpaqueHelper> local_48;
        int local_44;
        int local_40;
        int local_3c;
        int local_38;
        int local_34;
        int local_30;

        if (arg5 < 255) {
            if (arg5 != 0) {
                local_48 = SectorHLineHelper(arg4, arg5);
                iVar1 = field_20;
                iVar5 = arg2 - arg3;
                if (iVar5 < iVar1) {
                    iVar2 = field_16;
                    iVar6 = arg3 + arg2 + 1;
                    if (iVar2 <= iVar6) {
                        uVar3 = field_28;
                        if ((arg1 - arg3 < (int)uVar3) && (uVar4 = field_24, (int)uVar4 <= arg3 + arg1 + 1)) {
                            local_38 = arg1;
                            local_34 = arg2;
                            local_30 = arg3;
                            if ((iVar5 < iVar2) || (((iVar1 <= arg2 + arg3 || (arg1 - arg3 < (int)uVar4)) ||
                                                     ((int)uVar3 <= arg3 + arg1)))) {
                                local_48.DrawClipped(field_32, field_8, iVar5, iVar6, uVar4, iVar2, uVar3, iVar1);
                            } else {
                                local_48.DrawUnclipped(field_32, field_8, iVar6);
                            }
                        }
                    }
                }
            }
        } else {
            local_48 = SectorHLineHelper(arg4, 255);
            iVar1 = field_20;
            iVar5 = arg2 - arg3;
            if (iVar5 < iVar1) {
                iVar2 = field_16;
                iVar6 = arg3 + arg2 + 1;
                if (iVar2 <= iVar6) {
                    uVar3 = field_28;
                    if ((arg1 - arg3 < (int)uVar3) && (uVar4 = field_24, (int)uVar4 <= arg3 + arg1 + 1)) {
                        local_44 = arg1;
                        local_40 = arg2;
                        local_3c = arg3;
                        if (((iVar5 < iVar2) || ((iVar1 <= arg2 + arg3 || (arg1 - arg3 < (int)uVar4)))) ||
                            ((int)uVar3 <= arg3 + arg1)) {
                            local_48.DrawClipped(field_32, field_8, iVar5, iVar6, uVar4, iVar2, uVar3, iVar1);
                        } else {
                            local_48.DrawUnclipped(field_32, field_8, iVar6);
                        }
                    }
                }
            }
        }
    }

    // 0x100315db0
    void NXTPix2D::DrawCircle(int arg1, int arg2, int arg3, unsigned int arg4, unsigned int arg5) {
        SectorHLineHelper<OpaqueHelper> local_48;
        int local_44;
        int local_40;
        int local_3c;
        int local_38;

        if (0 < arg3) {
            if ((unsigned int)arg3 < arg4) {
                FillCircle((int)this, arg1, arg2, arg3);
            } else {
                local_48 = SectorHLineHelper(arg5, 255);
                local_44 = arg1;
                local_40 = arg2;
                local_3c = arg3 - arg4;
                local_38 = arg3;
                DrawCircleHelper<BasicHLineHelper<OpaqueHelper>>::Draw(local_48, (int)this + 32, field_8, field_24,
                                                                       field_16, field_28);
            }
        }
    }

    // 0x100316190
    void NXTPix2D::DrawCircleTrans(int arg1, int arg2, int arg3, unsigned int arg4, unsigned int arg5,
                                   unsigned int arg6) {
        SectorHLineHelper<OpaqueHelper> local_50;
        int local_4c;
        int local_48;
        int local_44;
        int local_40;
        int local_3c;
        int local_38;
        int local_34;

        if (0 < arg3) {
            if ((unsigned int)arg3 < arg4) {
                FillCircleTrans((int)this, arg1, arg2, arg3, arg5);
            } else if (arg6 < 255) {
                if (arg6 != 0) {
                    local_50 = SectorHLineHelper(arg5, arg6);
                    local_40 = arg1;
                    local_3c = arg2;
                    local_38 = arg3 - arg4;
                    local_34 = arg3;
                    DrawCircleHelper<BasicHLineHelper<TransparentHelper>>::Draw(local_50, (int)this + 32, field_8,
                                                                                field_24, field_16, field_28);
                }
            } else {
                local_50 = SectorHLineHelper(arg5, 255);
                local_4c = arg1;
                local_48 = arg2;
                local_44 = arg3 - arg4;
                local_40 = arg3;
                DrawCircleHelper<BasicHLineHelper<OpaqueHelper>>::Draw(local_50, (int)this + 32, field_8, field_24,
                                                                       field_16, field_28);
            }
        }
    }

    // 0x1003166a0
    void NXTPix2D::FillSector(int arg1, int arg2, int arg3, int arg4, int arg5, unsigned int arg6) {
        int arg6_00;
        unsigned int arg7;
        unsigned int arg5_00;
        int arg4_00;

        SectorHLineHelper<OpaqueHelper> local_58(arg6, 255);
        local_58.SetDirections(arg3, arg4, arg5);
        int arg8 = field_20;
        int arg3_00 = arg2 - arg3;
        if (arg3_00 < arg8) {
            arg6_00 = field_16;
            arg4_00 = arg3 + arg2 + 1;
            if (arg6_00 <= arg4_00) {
                arg7 = field_28;
                if ((arg1 - arg3 < (int)arg7) && (arg5_00 = field_24, (int)arg5_00 <= arg1 + arg3 + 1)) {
                    if ((arg3_00 < arg6_00) ||
                        (((arg8 <= arg2 + arg3 || (arg1 - arg3 < (int)arg5_00)) || ((int)arg7 <= arg1 + arg3)))) {
                        local_58.DrawClipped(field_32, field_8, arg3_00, arg4_00, arg5_00, arg6_00, arg7, arg8);
                    } else {
                        local_58.DrawUnclipped(field_32, field_8, arg4_00);
                    }
                }
            }
        }
    }

    // 0x100316870
    void NXTPix2D::FillSectorTrans(int arg1, int arg2, int arg3, int arg4, int arg5, unsigned int arg6,
                                   unsigned int arg7) {
        int iVar1;
        int iVar2;
        unsigned int uVar3;
        unsigned int uVar4;
        int iVar5;
        int iVar6;
        SectorHLineHelper<OpaqueHelper> local_68;
        NXTPix2D* local_38;

        if (arg7 < 255) {
            if (arg7 != 0) {
                local_38 = this;
                local_68 = SectorHLineHelper(arg6, arg7);
                local_68.SetDirections(arg3, arg4, arg5);
                iVar1 = local_38->field_20;
                iVar5 = arg2 - arg3;
                if (iVar5 < iVar1) {
                    iVar2 = local_38->field_16;
                    iVar6 = arg3 + arg2 + 1;
                    if (iVar2 <= iVar6) {
                        uVar3 = local_38->field_28;
                        if ((arg1 - arg3 < (int)uVar3) && (uVar4 = local_38->field_24, (int)uVar4 <= arg1 + arg3 + 1)) {
                            if ((iVar5 < iVar2) || (((iVar1 <= arg2 + arg3 || (arg1 - arg3 < (int)uVar4)) ||
                                                     ((int)uVar3 <= arg1 + arg3)))) {
                                local_68.DrawClipped(local_38->field_32, local_38->field_8, iVar5, iVar6, uVar4, iVar2,
                                                     uVar3, iVar1);
                            } else {
                                local_68.DrawUnclipped(local_38->field_32, local_38->field_8, iVar6);
                            }
                        }
                    }
                }
            }
        } else {
            local_38 = (NXTPix2D*)(((uint64_t)local_38._4_4_ << 32) | (uint32_t)arg5);
            local_68 = SectorHLineHelper(arg6, 255);
            local_68.SetDirections(arg3, arg4, (int)local_38);
            iVar1 = field_20;
            iVar5 = arg2 - arg3;
            if (iVar5 < iVar1) {
                iVar2 = field_16;
                iVar6 = arg3 + arg2 + 1;
                if (iVar2 <= iVar6) {
                    uVar3 = field_28;
                    if ((arg1 - arg3 < (int)uVar3) && (uVar4 = field_24, (int)uVar4 <= arg1 + arg3 + 1)) {
                        if (((iVar5 < iVar2) || ((iVar1 <= arg2 + arg3 || (arg1 - arg3 < (int)uVar4)))) ||
                            ((int)uVar3 <= arg1 + arg3)) {
                            local_68.DrawClipped(field_32, field_8, iVar5, iVar6, uVar4, iVar2, uVar3, iVar1);
                        } else {
                            local_68.DrawUnclipped(field_32, field_8, iVar6);
                        }
                    }
                }
            }
        }
    }

    // 0x100316b30
    void NXTPix2D::DrawCircularArc(int arg1, int arg2, int arg3, int arg4, int arg5, unsigned int arg6,
                                   unsigned int arg7) {
        SectorHLineHelper<OpaqueHelper> local_60(arg7, 255);
        int local_40 = arg3 - arg6;
        int local_48 = arg1;
        int local_44 = arg2;
        int local_3c = arg3;
        local_60.SetDirections(arg3, arg4, arg5);
        DrawCircleHelper<SectorHLineHelper<OpaqueHelper>>::Draw(local_60, (int)this + 32, field_8, field_24, field_16,
                                                                field_28);
    }

    // 0x100317060
    void NXTPix2D::DrawCircularArcTrans(int arg1, int arg2, int arg3, int arg4, int arg5, unsigned int arg6,
                                        unsigned int arg7, unsigned int arg8) {
        SectorHLineHelper<OpaqueHelper> local_68;
        int local_50;
        int local_4c;
        int local_48;
        int local_44;
        int local_40;
        int local_3c;
        int local_38;

        if (arg8 < 255) {
            if (arg8 != 0) {
                local_68 = SectorHLineHelper(arg7, arg8);
                local_3c = arg3 - arg6;
                local_44 = arg1;
                local_40 = arg2;
                local_38 = arg3;
                local_68.SetDirections(arg3, arg4, arg5);
                DrawCircleHelper<SectorHLineHelper<TransparentHelper>>::Draw(local_68, (int)this + 32, field_8,
                                                                             field_24, field_16, field_28);
            }
        } else {
            local_68 = SectorHLineHelper(arg7, 255);
            local_48 = arg3 - arg6;
            local_50 = arg1;
            local_4c = arg2;
            local_44 = arg3;
            local_68.SetDirections(arg3, arg4, arg5);
            DrawCircleHelper<SectorHLineHelper<OpaqueHelper>>::Draw(local_68, (int)this + 32, field_8, field_24,
                                                                    field_16, field_28);
        }
    }

    // 0x1003176d0
    void NXTPix2D::QuickPlotSprite(const Pix32& pix32, int arg2, int arg3) {
        SharedArray<unsigned int>* sharedArray2;
        int unaff_EBX;

        unsigned int uVar6 = arg2 + pix32.field_32;
        int iVar2 = arg3 + pix32.field_36;
        int iVar7 = field_8;
        int iVar5 = field_16;
        int arg3_00 = iVar2 * iVar7 + uVar6;
        unsigned int uVar4 = pix32.field_24;
        unsigned int uVar8 = pix32.field_28;
        int iVar3 = iVar5 - iVar2;
        if (iVar3 == 0 || iVar5 < iVar2) {
            sharedArray2 = nullptr;
        } else {
            uVar8 = uVar8 - iVar3;
            sharedArray2 = (SharedArray<unsigned int>*)(unsigned long)(iVar3 * uVar4);
            arg3_00 = arg3_00 + iVar3 * iVar7;
            iVar2 = iVar5;
        }
        iVar7 = iVar7 - uVar4;
        unsigned int uVar1 = field_24;
        iVar5 = field_20 - (iVar2 + uVar8);
        if ((int)(iVar2 + uVar8) <= field_20) {
            iVar5 = 0;
        }
        iVar2 = uVar1 - uVar6;
        if (iVar2 == 0 || (int)uVar1 < (int)uVar6) {
            iVar2 = 0;
        } else {
            uVar4 = uVar4 - iVar2;
            sharedArray2 = (SharedArray<unsigned int>*)(unsigned long)(unsigned int)((int)sharedArray2 + iVar2);
            arg3_00 = arg3_00 + iVar2;
            iVar7 = iVar7 + iVar2;
            uVar6 = uVar1;
        }
        iVar3 = (uVar6 + uVar4) - field_28;
        if (iVar3 == 0 || (int)(uVar6 + uVar4) < (int)field_28) {
            iVar3 = 0;
        }
        if ((uVar4 - iVar3 != 0 && iVar3 <= (int)uVar4) && (0 < (int)(iVar5 + uVar8))) {
            PlotQuick((NXTPix2D*)&field_32, (SharedArray<unsigned int>*)pix32, sharedArray2, arg3_00, uVar4 - iVar3,
                      iVar5 + uVar8, iVar7 + iVar3, iVar2 + iVar3, unaff_EBX);
        }
    }

    // 0x100317790
    void NXTPix2D::PlotQuick(SharedArray<unsigned int>& sharedArray1, const SharedArray<unsigned int>& sharedArray2,
                             int arg3, int arg4, int arg5, int arg6, int arg7, int arg8) {
        long lVar1;
        uint32_t uVar2;
        int iVar3;
        uint32_t* puVar4;
        long lVar5;
        int iVar6;
        long lVar7;
        int iVar8;
        unsigned long arg1;
        int iVar9;
        long lVar10;
        unsigned long arg1_00;

        if (0 < arg5) {
            iVar9 = -arg5;
            do {
                iVar6 = (int)sharedArray2;
                iVar8 = arg3 + arg4;
                iVar3 = arg4 + arg3 - 3;
                if (arg3 < iVar3) {
                    lVar7 = (long)iVar6;
                    lVar5 = (long)arg3;
                    lVar10 = 0;
                    do {
                        puVar4 = &sharedArray1[lVar7 + lVar10];
                        uVar2 = *puVar4;
                        puVar4 = (uint32_t*)(*this)[lVar5 + lVar10];
                        *puVar4 = uVar2;
                        puVar4 = &sharedArray1[lVar7 + 1 + lVar10];
                        uVar2 = *puVar4;
                        puVar4 = (uint32_t*)(*this)[lVar5 + lVar10 + 1];
                        *puVar4 = uVar2;
                        puVar4 = &sharedArray1[lVar7 + lVar10 + 2];
                        uVar2 = *puVar4;
                        puVar4 = (uint32_t*)(*this)[lVar5 + lVar10 + 2];
                        *puVar4 = uVar2;
                        puVar4 = &sharedArray1[lVar7 + lVar10 + 3];
                        uVar2 = *puVar4;
                        puVar4 = (uint32_t*)(*this)[lVar5 + lVar10 + 3];
                        *puVar4 = uVar2;
                        lVar1 = lVar5 + lVar10;
                        lVar10 = lVar10 + 4;
                    } while (lVar1 + 4 < (long)iVar3);
                    arg3 = arg3 + (int)lVar10;
                    iVar6 = iVar6 + (int)lVar10;
                }
                if (arg3 < iVar8) {
                    iVar3 = 0;
                    arg1 = (long)iVar6;
                    arg1_00 = (long)arg3;
                    do {
                        puVar4 = &sharedArray1[arg1];
                        uVar2 = *puVar4;
                        puVar4 = (uint32_t*)(*this)[arg1_00];
                        *puVar4 = uVar2;
                        iVar3 = iVar3 - 1;
                        arg1 = arg1 + 1;
                        arg1_00 = arg1_00 + 1;
                    } while (arg3 - iVar8 != iVar3);
                    iVar6 = iVar6 - iVar3;
                    arg3 = arg3 - iVar3;
                }
                sharedArray2 = (SharedArray<unsigned int>*)(unsigned long)(unsigned int)(iVar6 + arg7);
                arg3 = arg3 + arg6;
                iVar9 = iVar9 + 1;
            } while (iVar9 != 0);
        }
    }

    // 0x1003179a0
    void NXTPix2D::PlotSprite(const Pix32& pix32, int arg2, int arg3) {
        int arg3_00;
        int in_stack_ffffffffffffffd0;

        unsigned int uVar3 = arg2 + pix32.field_32;
        int iVar2 = arg3 + pix32.field_36;
        int iVar6 = field_8;
        int iVar8 = field_16;
        int arg4 = iVar2 * iVar6 + uVar3;
        unsigned int uVar5 = pix32.field_24;
        unsigned int uVar7 = pix32.field_28;
        int iVar4 = iVar8 - iVar2;
        if (iVar4 == 0 || iVar8 < iVar2) {
            arg3_00 = 0;
        } else {
            uVar7 = uVar7 - iVar4;
            arg3_00 = iVar4 * uVar5;
            arg4 = arg4 + iVar4 * iVar6;
            iVar2 = iVar8;
        }
        iVar6 = iVar6 - uVar5;
        unsigned int uVar1 = field_24;
        iVar8 = field_20 - (iVar2 + uVar7);
        if ((int)(iVar2 + uVar7) <= field_20) {
            iVar8 = 0;
        }
        iVar2 = uVar1 - uVar3;
        if (iVar2 == 0 || (int)uVar1 < (int)uVar3) {
            iVar2 = 0;
        } else {
            uVar5 = uVar5 - iVar2;
            arg3_00 = arg3_00 + iVar2;
            arg4 = arg4 + iVar2;
            iVar6 = iVar6 + iVar2;
            uVar3 = uVar1;
        }
        iVar4 = (uVar3 + uVar5) - field_28;
        if (iVar4 == 0 || (int)(uVar3 + uVar5) < (int)field_28) {
            iVar4 = 0;
        }
        if ((uVar5 - iVar4 != 0 && iVar4 <= (int)uVar5) && (0 < (int)(iVar8 + uVar7))) {
            PlotSprite((NXTPix2D*)&field_32, (SharedArray<unsigned int>*)pix32, nullptr, arg3_00, arg4, uVar5 - iVar4,
                       iVar8 + uVar7, iVar6 + iVar4, iVar2 + iVar4, in_stack_ffffffffffffffd0);
        }
    }

    // 0x100317a60
    void NXTPix2D::PlotSprite(SharedArray<unsigned int>& sharedArray1, const SharedArray<unsigned int>& sharedArray2,
                              int arg3, int arg4, int arg5, int arg6, int arg7, int arg8, int arg9) {
        int iVar1;
        long lVar2;
        int* piVar3;
        int iVar4;
        unsigned int uVar5;
        long lVar6;
        int iVar7;
        unsigned int uVar8;
        int iVar9;
        long lVar10;
        unsigned long arg1;
        unsigned long arg1_00;
        int local_44;

        if (0 < arg6) {
            iVar7 = -(arg5 >> 2);
            uVar8 = arg5 & 3;
            iVar4 = -uVar8;
            local_44 = -arg6;
            if (iVar7 < 0) {
                iVar7 = -1;
            }
            if (iVar4 < 0) {
                iVar4 = -1;
            }
            do {
                if (3 < arg5) {
                    lVar10 = (long)arg3;
                    lVar2 = (long)arg4;
                    lVar6 = 0;
                    iVar9 = (arg5 >> 2) + iVar7 + 1;
                    do {
                        piVar3 = &sharedArray1[lVar10 + lVar6];
                        iVar1 = *piVar3;
                        if (iVar1 != 0) {
                            piVar3 = (int*)(*this)[lVar2 + lVar6];
                            *piVar3 = iVar1;
                        }
                        piVar3 = &sharedArray1[lVar10 + lVar6 + 1];
                        iVar1 = *piVar3;
                        if (iVar1 != 0) {
                            piVar3 = (int*)(*this)[lVar2 + lVar6 + 1];
                            *piVar3 = iVar1;
                        }
                        piVar3 = &sharedArray1[lVar10 + lVar6 + 2];
                        iVar1 = *piVar3;
                        if (iVar1 != 0) {
                            piVar3 = (int*)(*this)[lVar2 + lVar6 + 2];
                            *piVar3 = iVar1;
                        }
                        piVar3 = &sharedArray1[lVar10 + lVar6 + 3];
                        iVar1 = *piVar3;
                        if (iVar1 != 0) {
                            piVar3 = (int*)(*this)[lVar2 + lVar6 + 3];
                            *piVar3 = iVar1;
                        }
                        lVar6 = lVar6 + 4;
                        iVar9 = iVar9 - 1;
                    } while (iVar9 != 0);
                    arg4 = arg4 + (int)lVar6;
                    arg3 = arg3 + (int)lVar6;
                }
                if (uVar8 != 0) {
                    arg1 = (unsigned long)arg3;
                    arg1_00 = (unsigned long)arg4;
                    uVar5 = 0;
                    do {
                        piVar3 = &sharedArray1[arg1];
                        iVar9 = *piVar3;
                        if (iVar9 != 0) {
                            piVar3 = (int*)(*this)[arg1_00];
                            *piVar3 = iVar9;
                        }
                        arg1_00 = arg1_00 + 1;
                        uVar5 = uVar5 - 1;
                        arg1 = arg1 + 1;
                    } while (~(iVar4 + uVar8) != uVar5);
                    arg4 = arg4 - uVar5;
                    arg3 = arg3 - uVar5;
                }
                arg3 = arg3 + arg8;
                arg4 = arg4 + arg7;
                local_44 = local_44 + 1;
            } while (local_44 != 0);
        }
    }

    // 0x100317c60
    void NXTPix2D::PlotSprite(const Pix8& pix8, int arg2, int arg3) {
        SharedArray<unsigned int>* sharedArray2;
        int in_stack_ffffffffffffffd0;

        unsigned int uVar3 = arg2 + pix8.field_56;
        int iVar2 = arg3 + pix8.field_60;
        int iVar6 = field_8;
        int iVar8 = field_16;
        int arg4 = iVar2 * iVar6 + uVar3;
        int iVar5 = pix8.field_48;
        unsigned int uVar7 = pix8.field_52;
        int iVar4 = iVar8 - iVar2;
        if (iVar4 == 0 || iVar8 < iVar2) {
            sharedArray2 = nullptr;
        } else {
            uVar7 = uVar7 - iVar4;
            sharedArray2 = (SharedArray<unsigned int>*)(unsigned long)(unsigned int)(iVar4 * iVar5);
            arg4 = arg4 + iVar4 * iVar6;
            iVar2 = iVar8;
        }
        iVar6 = iVar6 - iVar5;
        unsigned int uVar1 = field_24;
        iVar8 = field_20 - (iVar2 + uVar7);
        if ((int)(iVar2 + uVar7) <= field_20) {
            iVar8 = 0;
        }
        iVar2 = uVar1 - uVar3;
        if (iVar2 == 0 || (int)uVar1 < (int)uVar3) {
            iVar2 = 0;
        } else {
            iVar5 = iVar5 - iVar2;
            sharedArray2 = (SharedArray<unsigned int>*)(unsigned long)(unsigned int)((int)sharedArray2 + iVar2);
            arg4 = arg4 + iVar2;
            iVar6 = iVar6 + iVar2;
            uVar3 = uVar1;
        }
        iVar4 = (uVar3 + iVar5) - field_28;
        if (iVar4 == 0 || (int)(uVar3 + iVar5) < (int)field_28) {
            iVar4 = 0;
        }
        if ((iVar5 - iVar4 != 0 && iVar4 <= iVar5) && (0 < (int)(iVar8 + uVar7))) {
            PlotPal((NXTPix2D*)&field_32, (SharedArray<unsigned int>*)pix8, (Array<unsigned char>*)&pix8.field_24,
                    sharedArray2, arg4, iVar5 - iVar4, iVar8 + uVar7, iVar6 + iVar4, iVar2 + iVar4,
                    in_stack_ffffffffffffffd0);
        }
    }

    // 0x100317d20
    void NXTPix2D::PlotPal(SharedArray<unsigned int>& sharedArray1, const Array<unsigned char>& arg2,
                           const SharedArray<unsigned int>& sharedArray2, int arg4, int arg5, int arg6, int arg7,
                           int arg8, int arg9) {
        uint32_t uVar1;
        long lVar2;
        uint8_t* pbVar3;
        uint32_t* puVar4;
        int iVar5;
        int iVar6;
        unsigned int uVar7;
        long lVar8;
        int iVar9;
        unsigned int uVar10;
        long lVar11;
        unsigned long arg1;
        int iVar12;
        unsigned long arg1_00;
        int local_54;

        if (0 < arg6) {
            iVar9 = -(arg5 >> 2);
            uVar10 = arg5 & 3;
            iVar6 = -uVar10;
            local_54 = -arg6;
            if (iVar9 < 0) {
                iVar9 = -1;
            }
            if (iVar6 < 0) {
                iVar6 = -1;
            }
            do {
                iVar5 = (int)sharedArray2;
                if (3 < arg5) {
                    lVar11 = (long)iVar5;
                    lVar2 = (long)arg4;
                    lVar8 = 0;
                    iVar12 = (arg5 >> 2) + iVar9 + 1;
                    do {
                        pbVar3 = &sharedArray1[lVar11 + lVar8];
                        if ((unsigned long)*pbVar3 != 0) {
                            puVar4 = &arg2[(unsigned long)*pbVar3];
                            uVar1 = *puVar4;
                            puVar4 = (uint32_t*)(*this)[lVar2 + lVar8];
                            *puVar4 = uVar1;
                        }
                        pbVar3 = &sharedArray1[lVar11 + lVar8 + 1];
                        if ((unsigned long)*pbVar3 != 0) {
                            puVar4 = &arg2[(unsigned long)*pbVar3];
                            uVar1 = *puVar4;
                            puVar4 = (uint32_t*)(*this)[lVar2 + lVar8 + 1];
                            *puVar4 = uVar1;
                        }
                        pbVar3 = &sharedArray1[lVar11 + lVar8 + 2];
                        if ((unsigned long)*pbVar3 != 0) {
                            puVar4 = &arg2[(unsigned long)*pbVar3];
                            uVar1 = *puVar4;
                            puVar4 = (uint32_t*)(*this)[lVar2 + lVar8 + 2];
                            *puVar4 = uVar1;
                        }
                        pbVar3 = &sharedArray1[lVar11 + lVar8 + 3];
                        if ((unsigned long)*pbVar3 != 0) {
                            puVar4 = &arg2[(unsigned long)*pbVar3];
                            uVar1 = *puVar4;
                            puVar4 = (uint32_t*)(*this)[lVar2 + lVar8 + 3];
                            *puVar4 = uVar1;
                        }
                        lVar8 = lVar8 + 4;
                        iVar12 = iVar12 - 1;
                    } while (iVar12 != 0);
                    arg4 = arg4 + (int)lVar8;
                    iVar5 = iVar5 + (int)lVar8;
                }
                if (uVar10 != 0) {
                    arg1_00 = (unsigned long)iVar5;
                    arg1 = (unsigned long)arg4;
                    uVar7 = 0;
                    do {
                        pbVar3 = (uint8_t*)sharedArray1[arg1_00];
                        if ((unsigned long)*pbVar3 != 0) {
                            puVar4 = &arg2[(unsigned long)*pbVar3];
                            uVar1 = *puVar4;
                            puVar4 = (uint32_t*)(*this)[arg1];
                            *puVar4 = uVar1;
                        }
                        arg1 = arg1 + 1;
                        uVar7 = uVar7 - 1;
                        arg1_00 = arg1_00 + 1;
                    } while (~(iVar6 + uVar10) != uVar7);
                    arg4 = arg4 - uVar7;
                    iVar5 = iVar5 - uVar7;
                }
                sharedArray2 = (SharedArray<unsigned int>*)(unsigned long)(unsigned int)(iVar5 + arg8);
                arg4 = arg4 + arg7;
                local_54 = local_54 + 1;
            } while (local_54 != 0);
        }
    }

    // 0x100317f70
    void NXTPix2D::ScalePlotSprite(const Pix32& pix32, int arg2, int arg3, int arg4, int arg5) {
        unsigned int arg11;
        int arg9;
        int arg10;
        int iVar1;
        unsigned int uVar2;
        SharedArray<unsigned int>* sharedArray2;
        int iVar3;
        unsigned int arg4_00;
        int arg5_00;
        int iVar4;
        unsigned int uVar5;
        int arg6;

        if ((0 < arg4) && (0 < arg5)) {
            arg11 = pix32.field_24;
            arg9 = (int)(pix32.field_40 << 16) / arg4;
            arg10 = (int)(pix32.field_44 << 16) / arg5;
            uVar5 = pix32.field_32;
            arg4_00 = 0;
            if ((int)uVar5 < 1) {
                uVar5 = 0;
            } else {
                iVar4 = (int)(arg9 + uVar5 * 65536 - 1) / arg9;
                arg2 = arg2 + iVar4;
                uVar5 = iVar4 * arg9 + uVar5 * -65536;
            }
            uVar2 = pix32.field_36;
            if (0 < (int)uVar2) {
                iVar4 = (int)(arg10 + uVar2 * 65536 - 1) / arg10;
                arg3 = arg3 + iVar4;
                arg4_00 = iVar4 * arg10 + uVar2 * -65536;
            }
            if ((int)arg11 < (int)pix32.field_40) {
                arg4 = (int)(~uVar5 + arg11 * 65536 + arg9) / arg9;
            }
            if ((int)pix32.field_28 < (int)pix32.field_44) {
                arg5 = (int)(~arg4_00 + pix32.field_28 * 65536 + arg10) / arg10;
            }
            iVar4 = field_8;
            arg5_00 = iVar4 * arg3 + arg2;
            iVar3 = field_20 - (arg5 + arg3);
            if (arg5 + arg3 <= field_20) {
                iVar3 = 0;
            }
            iVar3 = iVar3 + arg5;
            iVar1 = field_16 - arg3;
            if (iVar1 != 0 && arg3 <= field_16) {
                iVar3 = iVar3 - iVar1;
                arg5_00 = arg5_00 + iVar4 * iVar1;
                arg4_00 = arg4_00 + arg10 * iVar1;
            }
            uVar2 = (arg4 + arg2) - field_28;
            sharedArray2 = nullptr;
            if (uVar2 != 0 && (int)field_28 <= arg4 + arg2) {
                sharedArray2 = (SharedArray<unsigned int>*)(unsigned long)uVar2;
            }
            arg6 = (iVar4 - arg4) + (int)sharedArray2;
            iVar1 = arg4 - (int)sharedArray2;
            iVar4 = field_24 - arg2;
            if (iVar4 != 0 && arg2 <= (int)field_24) {
                iVar1 = iVar1 - iVar4;
                arg5_00 = arg5_00 + iVar4;
                uVar5 = uVar5 + arg9 * iVar4;
                arg6 = arg6 + iVar4;
            }
            PlotScale((NXTPix2D*)&field_32, (SharedArray<unsigned int>*)pix32, sharedArray2, uVar5, arg4_00, arg5_00,
                      arg6, iVar1, iVar3, arg9, arg10, arg11, arg11);
        }
    }

    // 0x100318110
    void NXTPix2D::PlotScale(SharedArray<unsigned int>& sharedArray1, const SharedArray<unsigned int>& sharedArray2,
                             int arg3, int arg4, int arg5, int arg6, int arg7, int arg8, int arg9, int arg10, int arg11,
                             int arg12) {
        int iVar1;
        int iVar2;
        int* piVar3;
        int iVar4;
        int iVar5;
        unsigned long arg1;

        if (0 < arg8) {
            iVar2 = -arg8;
            do {
                if (0 < arg7) {
                    arg1 = (unsigned long)arg5;
                    iVar5 = 0;
                    iVar4 = arg3;
                    do {
                        piVar3 = &sharedArray1[(long)((iVar4 >> 16) + (arg4 >> 16) * arg11)];
                        iVar1 = *piVar3;
                        if (iVar1 != 0) {
                            piVar3 = (int*)(*this)[arg1];
                            *piVar3 = iVar1;
                        }
                        arg1 = arg1 + 1;
                        iVar4 = iVar4 + arg9;
                        iVar5 = iVar5 - 1;
                    } while (-arg7 != iVar5);
                    arg5 = arg5 - iVar5;
                }
                arg5 = arg5 + arg6;
                arg4 = arg4 + arg10;
                iVar2 = iVar2 + 1;
            } while (iVar2 != 0);
        }
    }

    // 0x1003181e0
    void NXTPix2D::ScalePlotSprite(const Pix8& pix8, int arg2, int arg3, int arg4, int arg5) {
        int iVar2;
        SharedArray<unsigned int>* sharedArray2;

        int arg11 = pix8.field_48;
        int arg9 = (pix8.field_64 << 16) / arg4;
        int arg10 = (pix8.field_68 << 16) / arg5;
        int iVar3 = pix8.field_56;
        unsigned int arg4_00 = 0;
        if (iVar3 < 1) {
            sharedArray2 = nullptr;
        } else {
            iVar2 = (arg9 + iVar3 * 65536 - 1) / arg9;
            arg2 = arg2 + iVar2;
            sharedArray2 = (SharedArray<unsigned int>*)(unsigned long)(unsigned int)(iVar2 * arg9 + iVar3 * -65536);
        }
        unsigned int uVar1 = pix8.field_60;
        if (0 < (int)uVar1) {
            iVar3 = (int)(arg10 + uVar1 * 65536 - 1) / arg10;
            arg3 = arg3 + iVar3;
            arg4_00 = iVar3 * arg10 + uVar1 * -65536;
        }
        if (arg11 < pix8.field_64) {
            arg4 = (int)(~(unsigned int)sharedArray2 + arg11 * 65536 + arg9) / arg9;
        }
        if ((int)pix8.field_52 < pix8.field_68) {
            arg5 = (int)(~arg4_00 + pix8.field_52 * 65536 + arg10) / arg10;
        }
        iVar3 = field_8;
        iVar2 = iVar3 * arg3 + arg2;
        int iVar6 = field_20 - (arg5 + arg3);
        if (arg5 + arg3 <= field_20) {
            iVar6 = 0;
        }
        iVar6 = iVar6 + arg5;
        int iVar4 = field_16 - arg3;
        if (iVar4 != 0 && arg3 <= field_16) {
            iVar6 = iVar6 - iVar4;
            iVar2 = iVar2 + iVar3 * iVar4;
            arg4_00 = arg4_00 + arg10 * iVar4;
        }
        int iVar5 = (arg4 + arg2) - field_28;
        iVar4 = 0;
        if (iVar5 != 0 && (int)field_28 <= arg4 + arg2) {
            iVar4 = iVar5;
        }
        iVar5 = (iVar3 - arg4) + iVar4;
        iVar4 = arg4 - iVar4;
        iVar3 = field_24 - arg2;
        if (iVar3 != 0 && arg2 <= (int)field_24) {
            iVar4 = iVar4 - iVar3;
            iVar2 = iVar2 + iVar3;
            sharedArray2 = (SharedArray<unsigned int>*)(unsigned long)((unsigned int)sharedArray2 + arg9 * iVar3);
            iVar5 = iVar5 + iVar3;
        }
        PlotScale((NXTPix2D*)&field_32, (SharedArray<unsigned int>*)pix8, (Array<unsigned char>*)&pix8.field_24,
                  sharedArray2, arg4_00, iVar2, iVar5, iVar4, iVar6, arg9, arg10, arg11, arg9);
    }

    // 0x100318370
    void NXTPix2D::PlotScale(SharedArray<unsigned int>& sharedArray1, const Array<unsigned char>& arg2,
                             const SharedArray<unsigned int>& sharedArray2, int arg4, int arg5, int arg6, int arg7,
                             int arg8, int arg9, int arg10, int arg11, int arg12) {
        uint32_t uVar1;
        int iVar2;
        uint8_t* pbVar3;
        uint32_t* puVar4;
        int iVar5;
        unsigned long arg1;
        int iVar6;

        if (0 < arg8) {
            iVar2 = -arg8;
            do {
                if (0 < arg7) {
                    arg1 = (unsigned long)arg5;
                    iVar6 = 0;
                    iVar5 = (int)sharedArray2;
                    do {
                        pbVar3 = &sharedArray1[(long)((iVar5 >> 16) + (arg4 >> 16) * arg11)];
                        if ((unsigned long)*pbVar3 != 0) {
                            puVar4 = &arg2[(unsigned long)*pbVar3];
                            uVar1 = *puVar4;
                            puVar4 = (uint32_t*)(*this)[arg1];
                            *puVar4 = uVar1;
                        }
                        arg1 = arg1 + 1;
                        iVar5 = iVar5 + arg9;
                        iVar6 = iVar6 - 1;
                    } while (-arg7 != iVar6);
                    arg5 = arg5 - iVar6;
                }
                arg5 = arg5 + arg6;
                arg4 = arg4 + arg10;
                iVar2 = iVar2 + 1;
            } while (iVar2 != 0);
        }
    }

    // 0x100318450
    void NXTPix2D::AddPlotSprite(const Pix32& pix32, int arg2, int arg3, int arg4) {
        SharedArray<unsigned int>* sharedArray2;
        int unaff_EBX;
        int in_stack_ffffffffffffffd0;

        unsigned int uVar8 = arg2 + pix32.field_32;
        int iVar3 = arg3 + pix32.field_36;
        int iVar6 = field_8;
        int iVar4 = field_16;
        int arg4_00 = iVar3 * iVar6 + uVar8;
        unsigned int uVar5 = pix32.field_24;
        unsigned int uVar7 = pix32.field_28;
        int iVar2 = iVar4 - iVar3;
        if (iVar2 == 0 || iVar4 < iVar3) {
            sharedArray2 = nullptr;
        } else {
            uVar7 = uVar7 - iVar2;
            sharedArray2 = (SharedArray<unsigned int>*)(unsigned long)(iVar2 * uVar5);
            arg4_00 = arg4_00 + iVar2 * iVar6;
            iVar3 = iVar4;
        }
        iVar6 = iVar6 - uVar5;
        unsigned int uVar1 = field_24;
        iVar4 = field_20 - (iVar3 + uVar7);
        if ((int)(iVar3 + uVar7) <= field_20) {
            iVar4 = 0;
        }
        iVar3 = uVar1 - uVar8;
        if (iVar3 == 0 || (int)uVar1 < (int)uVar8) {
            iVar3 = 0;
        } else {
            uVar5 = uVar5 - iVar3;
            sharedArray2 = (SharedArray<unsigned int>*)(unsigned long)(unsigned int)((int)sharedArray2 + iVar3);
            arg4_00 = arg4_00 + iVar3;
            iVar6 = iVar6 + iVar3;
            uVar8 = uVar1;
        }
        iVar2 = (uVar8 + uVar5) - field_28;
        if (iVar2 == 0 || (int)(uVar8 + uVar5) < (int)field_28) {
            iVar2 = 0;
        }
        int arg6 = uVar5 - iVar2;
        if (arg6 != 0 && iVar2 <= (int)uVar5) {
            iVar4 = iVar4 + uVar7;
            if (0 < iVar4) {
                if (arg4 < 255) {
                    AddSprite((NXTPix2D*)&field_32, (SharedArray<unsigned int>*)pix32, sharedArray2, iVar4, arg4_00,
                              arg4, arg6, iVar4, iVar6 + iVar2, iVar3 + iVar2, arg4, in_stack_ffffffffffffffd0);
                } else {
                    AddSprite((NXTPix2D*)&field_32, (SharedArray<unsigned int>*)pix32, sharedArray2, iVar4, arg4_00,
                              arg4, arg6, iVar4, iVar6 + iVar2, iVar3 + iVar2, unaff_EBX);
                }
            }
        }
    }

    // 0x100318530
    void NXTPix2D::AddSprite(SharedArray<unsigned int>& sharedArray1, const SharedArray<unsigned int>& sharedArray2,
                             int arg3, int arg4, int arg5, int arg6, int arg7, int arg8, int arg9, int arg10) {
        int iVar1;
        int iVar2;
        unsigned int uVar3;
        unsigned int* puVar4;
        int iVar5;
        int iVar6;
        unsigned long arg1;
        unsigned long arg1_00;

        if (0 < arg7) {
            iVar2 = -arg7;
            do {
                iVar5 = (int)sharedArray2;
                if (0 < arg6) {
                    arg1 = (unsigned long)iVar5;
                    arg1_00 = (unsigned long)arg4;
                    iVar6 = 0;
                    do {
                        puVar4 = &sharedArray1[arg1];
                        uVar3 = *puVar4;
                        if (uVar3 != 0) {
                            puVar4 = (unsigned int*)(*this)[arg1_00];
                            iVar1 = *puVar4 + uVar3;
                            uVar3 = (*puVar4 & 16711935) + (uVar3 & 16711935);
                            uVar3 = iVar1 - uVar3 & 65536 | uVar3 & 16777472;
                            puVar4 = (unsigned int*)(*this)[arg1_00];
                            *puVar4 = uVar3 - (uVar3 >> 8) | iVar1 - uVar3;
                        }
                        arg1_00 = arg1_00 + 1;
                        iVar6 = iVar6 - 1;
                        arg1 = arg1 + 1;
                    } while (-arg6 != iVar6);
                    arg4 = arg4 - iVar6;
                    iVar5 = iVar5 - iVar6;
                }
                sharedArray2 = (SharedArray<unsigned int>*)(unsigned long)(unsigned int)(iVar5 + arg9);
                arg4 = arg4 + arg8;
                iVar2 = iVar2 + 1;
            } while (iVar2 != 0);
        }
    }

    // 0x100318630
    void NXTPix2D::AddSprite(SharedArray<unsigned int>& sharedArray1, const SharedArray<unsigned int>& sharedArray2,
                             int arg3, int arg4, int arg5, int arg6, int arg7, int arg8, int arg9, int arg10,
                             int arg11) {
        int iVar1;
        unsigned int arg1;
        uint32_t uVar2;
        unsigned int* puVar3;
        uint32_t* puVar4;
        int iVar5;
        int iVar6;
        unsigned long arg1_00;
        unsigned long arg1_01;

        if (0 < arg7) {
            iVar1 = -arg7;
            do {
                iVar5 = (int)sharedArray2;
                if (0 < arg6) {
                    arg1_01 = (unsigned long)iVar5;
                    arg1_00 = (unsigned long)arg4;
                    iVar6 = 0;
                    do {
                        puVar3 = &sharedArray1[arg1_01];
                        if (*puVar3 != 0) {
                            arg1 = ComputeCompositeRGB(*puVar3, arg10);
                            puVar3 = (unsigned int*)(*this)[arg1_00];
                            uVar2 = BlendPixel(arg1, arg10, 255 - arg10, *puVar3);
                            puVar4 = (uint32_t*)(*this)[arg1_00];
                            *puVar4 = uVar2;
                        }
                        arg1_00 = arg1_00 + 1;
                        iVar6 = iVar6 - 1;
                        arg1_01 = arg1_01 + 1;
                    } while (-arg6 != iVar6);
                    arg4 = arg4 - iVar6;
                    iVar5 = iVar5 - iVar6;
                }
                sharedArray2 = (SharedArray<unsigned int>*)(unsigned long)(unsigned int)(iVar5 + arg9);
                arg4 = arg4 + arg8;
                iVar1 = iVar1 + 1;
            } while (iVar1 != 0);
        }
    }

    // 0x100318720
    void NXTPix2D::LitPlotSprite(const Pix32& pix32, int arg2, int arg3, int arg4, unsigned int arg5) {
        unsigned int uVar1;
        int iVar2;
        int arg3_00;
        unsigned int uVar3;
        int iVar4;
        int arg4_00;
        unsigned int uVar5;
        int iVar6;
        unsigned int uVar7;
        int iVar8;
        unsigned int in_stack_ffffffffffffffc0;

        if (arg4 < 255) {
            uVar3 = arg2 + pix32.field_32;
            iVar2 = arg3 + pix32.field_36;
            iVar8 = field_8;
            iVar6 = field_16;
            arg4_00 = iVar2 * iVar8 + uVar3;
            uVar5 = pix32.field_24;
            uVar7 = pix32.field_28;
            iVar4 = iVar6 - iVar2;
            if (iVar4 == 0 || iVar6 < iVar2) {
                arg3_00 = 0;
            } else {
                uVar7 = uVar7 - iVar4;
                arg3_00 = iVar4 * uVar5;
                arg4_00 = arg4_00 + iVar4 * iVar8;
                iVar2 = iVar6;
            }
            iVar8 = iVar8 - uVar5;
            uVar1 = field_24;
            iVar6 = field_20 - (iVar2 + uVar7);
            if ((int)(iVar2 + uVar7) <= field_20) {
                iVar6 = 0;
            }
            iVar2 = uVar1 - uVar3;
            if (iVar2 == 0 || (int)uVar1 < (int)uVar3) {
                iVar2 = 0;
            } else {
                uVar5 = uVar5 - iVar2;
                arg3_00 = arg3_00 + iVar2;
                arg4_00 = arg4_00 + iVar2;
                iVar8 = iVar8 + iVar2;
                uVar3 = uVar1;
            }
            iVar4 = (uVar3 + uVar5) - field_28;
            if (iVar4 == 0 || (int)(uVar3 + uVar5) < (int)field_28) {
                iVar4 = 0;
            }
            if ((uVar5 - iVar4 != 0 && iVar4 <= (int)uVar5) && (0 < (int)(iVar6 + uVar7))) {
                LitSprite((NXTPix2D*)&field_32, (SharedArray<unsigned int>*)pix32, nullptr, arg3_00, arg4_00,
                          uVar5 - iVar4, iVar6 + uVar7, iVar8 + iVar4, iVar2 + iVar4, arg4, arg5,
                          in_stack_ffffffffffffffc0);
            }
        } else {
            PlotSprite((int)pix32, arg2);
        }
    }

    // 0x100318810
    void NXTPix2D::LitSprite(SharedArray<unsigned int>& sharedArray1, const SharedArray<unsigned int>& sharedArray2,
                             int arg3, int arg4, int arg5, int arg6, int arg7, int arg8, int arg9, unsigned int arg10,
                             unsigned int arg11) {
        int iVar2;
        unsigned int* puVar3;
        int iVar4;
        unsigned long arg1;
        int iVar5;
        unsigned long arg1_00;

        int iVar1 = ComputeCompositeRGB(arg10, 255 - arg9);
        if (0 < arg6) {
            iVar5 = -arg6;
            do {
                if (0 < arg5) {
                    arg1_00 = (unsigned long)arg3;
                    arg1 = (unsigned long)arg4;
                    iVar4 = 0;
                    do {
                        puVar3 = &sharedArray1[arg1_00];
                        if (*puVar3 != 0) {
                            iVar2 = ComputeCompositeRGB(*puVar3, arg9);
                            puVar3 = (unsigned int*)(*this)[arg1];
                            *puVar3 = iVar2 + iVar1 | 4278190080;
                        }
                        arg1 = arg1 + 1;
                        iVar4 = iVar4 - 1;
                        arg1_00 = arg1_00 + 1;
                    } while (-arg5 != iVar4);
                    arg4 = arg4 - iVar4;
                    arg3 = arg3 - iVar4;
                }
                arg3 = arg3 + arg8;
                arg4 = arg4 + arg7;
                iVar5 = iVar5 + 1;
            } while (iVar5 != 0);
        }
    }

    // 0x100318900
    void NXTPix2D::TransPlotSprite(const Pix32& pix32, int arg2, int arg3, unsigned int arg4) {
        unsigned int uVar1;
        unsigned int in_EAX;
        int iVar2;
        int arg3_00;
        unsigned int uVar3;
        int iVar4;
        int arg4_00;
        unsigned int uVar5;
        int iVar6;
        unsigned int uVar7;
        int iVar8;

        if (arg4 != 0) {
            uVar3 = arg2 + pix32.field_32;
            iVar2 = arg3 + pix32.field_36;
            iVar6 = field_8;
            iVar8 = field_16;
            arg4_00 = iVar2 * iVar6 + uVar3;
            uVar5 = pix32.field_24;
            uVar7 = pix32.field_28;
            iVar4 = iVar8 - iVar2;
            if (iVar4 == 0 || iVar8 < iVar2) {
                arg3_00 = 0;
            } else {
                uVar7 = uVar7 - iVar4;
                arg3_00 = iVar4 * uVar5;
                arg4_00 = arg4_00 + iVar4 * iVar6;
                iVar2 = iVar8;
            }
            iVar6 = iVar6 - uVar5;
            uVar1 = field_24;
            iVar8 = field_20 - (iVar2 + uVar7);
            if ((int)(iVar2 + uVar7) <= field_20) {
                iVar8 = 0;
            }
            iVar2 = uVar1 - uVar3;
            if (iVar2 == 0 || (int)uVar1 < (int)uVar3) {
                iVar2 = 0;
            } else {
                uVar5 = uVar5 - iVar2;
                arg3_00 = arg3_00 + iVar2;
                arg4_00 = arg4_00 + iVar2;
                iVar6 = iVar6 + iVar2;
                uVar3 = uVar1;
            }
            iVar4 = (uVar3 + uVar5) - field_28;
            if (iVar4 == 0 || (int)(uVar3 + uVar5) < (int)field_28) {
                iVar4 = 0;
            }
            if ((uVar5 - iVar4 != 0 && iVar4 <= (int)uVar5) && (0 < (int)(iVar8 + uVar7))) {
                TranSprite((NXTPix2D*)&field_32, (SharedArray<unsigned int>*)pix32, nullptr, arg3_00, arg4_00,
                           uVar5 - iVar4, iVar8 + uVar7, iVar6 + iVar4, iVar2 + iVar4, arg4, in_EAX);
            }
        }
    }

    // 0x1003189d0
    void NXTPix2D::TranSprite(SharedArray<unsigned int>& sharedArray1, const SharedArray<unsigned int>& sharedArray2,
                              int arg3, int arg4, int arg5, int arg6, int arg7, int arg8, int arg9,
                              unsigned int arg10) {
        unsigned int arg4_00;
        int iVar1;
        unsigned int* puVar2;
        int iVar3;
        unsigned long arg1;
        unsigned long arg1_00;
        unsigned int uVar4;
        int in_stack_ffffffffffffff90;

        if ((unsigned int)arg9 < 255) {
            if (0 < arg6) {
                iVar1 = -arg6;
                do {
                    if (0 < arg5) {
                        arg1 = (unsigned long)arg3;
                        arg1_00 = (unsigned long)arg4;
                        iVar3 = 0;
                        do {
                            puVar2 = &sharedArray1[arg1];
                            uVar4 = *puVar2;
                            if (uVar4 != 0) {
                                puVar2 = (unsigned int*)(*this)[arg1_00];
                                arg4_00 = *puVar2;
                                if (arg4_00 == 0) {
                                    uVar4 = uVar4 & 16777215 | arg9 << 24;
                                } else {
                                    uVar4 = ComputeCompositeRGB(uVar4, arg9);
                                    uVar4 = BlendPixel(uVar4, arg9, 255 - arg9, arg4_00);
                                }
                                puVar2 = (unsigned int*)(*this)[arg1_00];
                                *puVar2 = uVar4;
                            }
                            arg1_00 = arg1_00 + 1;
                            iVar3 = iVar3 - 1;
                            arg1 = arg1 + 1;
                        } while (-arg5 != iVar3);
                        arg4 = arg4 - iVar3;
                        arg3 = arg3 - iVar3;
                    }
                    arg4 = arg4 + arg7;
                    arg3 = arg3 + arg8;
                    iVar1 = iVar1 + 1;
                } while (iVar1 != 0);
            }
        } else {
            PlotSprite(sharedArray1, *((SharedArray<unsigned int>*)(unsigned long)(unsigned int)arg7), arg3, arg4, arg5,
                       arg6, arg7, arg8, in_stack_ffffffffffffff90);
        }
    }

    // 0x100318b30
    void NXTPix2D::XPlotSpriteARGB(const Pix32& pix32, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7,
                                   int arg8, SpriteFlip spriteFlip) {
        int* piVar1;
        int iVar3;
        long lVar4;
        unsigned int* arg4_00;
        unsigned int uVar5;
        int iVar6;
        int iVar7;
        int iVar8;
        int iVar9;
        unsigned int uVar10;
        int iVar11;
        unsigned int uVar12;
        int iVar13;
        int arg6_00;
        XPlotParams local_90;
        unsigned long local_58;
        unsigned int* local_50;
        XPlotBlender<XPlot_NormalAlpha> local_40;
        NXTPix2D* local_38;

        if (((arg8 != 0) && (uVar12 = pix32.field_40, arg4 < (int)uVar12)) &&
            (uVar10 = pix32.field_44, arg5 < (int)uVar10)) {
            uVar5 = arg6;
            if ((int)uVar12 < arg6) {
                uVar5 = uVar12;
            }
            if (arg6 < 0) {
                uVar5 = uVar12;
            }
            uVar12 = arg7;
            if ((int)uVar10 < arg7) {
                uVar12 = uVar10;
            }
            if (arg7 < 0) {
                uVar12 = uVar10;
            }
            uVar10 = field_24;
            iVar8 = 0;
            iVar13 = uVar10 - arg2;
            if (iVar13 == 0 || (int)uVar10 < arg2) {
                iVar13 = iVar8;
                uVar10 = arg2;
            }
            local_58 = (unsigned long)uVar10;
            iVar6 = field_16;
            if (!(iVar6 - arg3 == 0 || iVar6 < arg3)) {
                iVar8 = iVar6 - arg3;
                arg3 = iVar6;
            }
            iVar6 = uVar5 - iVar13;
            if ((iVar6 != 0 && iVar13 <= (int)uVar5) && (iVar3 = uVar12 - iVar8, 0 < iVar3)) {
                iVar11 = field_28 - (iVar6 + uVar10);
                if ((int)(iVar6 + uVar10) <= (int)field_28) {
                    iVar11 = 0;
                }
                iVar9 = field_20 - (iVar3 + arg3);
                if (iVar3 + arg3 <= field_20) {
                    iVar9 = 0;
                }
                if ((0 < iVar11 + iVar6) && (0 < iVar9 + iVar3)) {
                    arg6_00 = (iVar13 + arg4) - pix32.field_32;
                    iVar7 = 0;
                    if (iVar13 + arg4 < (int)pix32.field_32) {
                        iVar7 = arg6_00;
                    }
                    uVar12 = iVar11 + iVar6 + arg6_00 + iVar7;
                    if ((int)pix32.field_24 < (int)uVar12) {
                        uVar12 = pix32.field_24;
                    }
                    iVar6 = (iVar8 + arg5) - pix32.field_36;
                    iVar13 = 0;
                    if (iVar8 + arg5 < (int)pix32.field_36) {
                        iVar13 = iVar6;
                    }
                    uVar10 = iVar9 + iVar3 + iVar6 + iVar13;
                    if ((int)pix32.field_28 < (int)uVar10) {
                        uVar10 = pix32.field_28;
                    }
                    local_38 = this;
                    lVar4 = field_32.data();
                    piVar1 = &local_38->field_8;
                    local_38 = (NXTPix2D*)(((uint64_t)local_38._4_4_ << 32) | (uint32_t)(*piVar1));
                    local_50 = (unsigned int*)(lVar4 + (long)(arg3 * *piVar1) * 4);
                    arg4_00 = (unsigned int*)pix32.data();
                    local_90 = XPlotParams(local_50, (unsigned int)local_38, (int)local_58, arg4_00, pix32.field_24,
                                           arg6_00, iVar6, uVar12 - 1, uVar10 - 1, spriteFlip);
                    if (arg8 == 255) {
                        eastl::destruct<highlight::NpcUID*>(&local_40);
                        local_40.XPlot(local_90);
                    } else {
                        local_40.XPlotBlender<int>(arg8);
                        local_40.XPlot(local_90);
                    }
                }
            }
        }
    }

    // 0x100318f10
    void NXTPix2D::TransScalePlotSprite(const Pix32& pix32, int arg2, int arg3, int arg4, int arg5, unsigned int arg6) {
        unsigned int arg11;
        int arg9;
        int arg10;
        int iVar1;
        int iVar2;
        unsigned int uVar3;
        SharedArray<unsigned int>* sharedArray2;
        int iVar4;
        unsigned int arg4_00;
        int arg5_00;
        int arg6_00;
        unsigned int in_stack_ffffffffffffffa0;
        unsigned int local_34;

        if (((arg6 != 0) && (0 < arg4)) && (0 < arg5)) {
            arg11 = pix32.field_24;
            arg9 = (int)(pix32.field_40 << 16) / arg4;
            arg10 = (int)(pix32.field_44 << 16) / arg5;
            uVar3 = pix32.field_32;
            arg4_00 = 0;
            if ((int)uVar3 < 1) {
                local_34 = 0;
            } else {
                iVar1 = (int)(arg9 + uVar3 * 65536 - 1) / arg9;
                arg2 = arg2 + iVar1;
                local_34 = iVar1 * arg9 + uVar3 * -65536;
            }
            uVar3 = pix32.field_36;
            if (0 < (int)uVar3) {
                iVar1 = (int)(arg10 + uVar3 * 65536 - 1) / arg10;
                arg3 = arg3 + iVar1;
                arg4_00 = iVar1 * arg10 + uVar3 * -65536;
            }
            if ((int)arg11 < (int)pix32.field_40) {
                arg4 = (int)(~local_34 + arg11 * 65536 + arg9) / arg9;
            }
            if ((int)pix32.field_28 < (int)pix32.field_44) {
                arg5 = (int)(~arg4_00 + pix32.field_28 * 65536 + arg10) / arg10;
            }
            iVar1 = field_8;
            arg5_00 = iVar1 * arg3 + arg2;
            iVar4 = field_20 - (arg5 + arg3);
            if (arg5 + arg3 <= field_20) {
                iVar4 = 0;
            }
            iVar4 = iVar4 + arg5;
            iVar2 = field_16 - arg3;
            if (iVar2 != 0 && arg3 <= field_16) {
                iVar4 = iVar4 - iVar2;
                arg5_00 = arg5_00 + iVar1 * iVar2;
                arg4_00 = arg4_00 + arg10 * iVar2;
            }
            uVar3 = (arg4 + arg2) - field_28;
            sharedArray2 = nullptr;
            if (uVar3 != 0 && (int)field_28 <= arg4 + arg2) {
                sharedArray2 = (SharedArray<unsigned int>*)(unsigned long)uVar3;
            }
            arg6_00 = (iVar1 - arg4) + (int)sharedArray2;
            iVar2 = arg4 - (int)sharedArray2;
            iVar1 = field_24 - arg2;
            if (!(iVar1 == 0 || (int)field_24 < arg2)) {
                iVar2 = iVar2 - iVar1;
                arg5_00 = arg5_00 + iVar1;
                local_34 = local_34 + arg9 * iVar1;
                sharedArray2 = (SharedArray<unsigned int>*)(unsigned long)local_34;
                arg6_00 = arg6_00 + iVar1;
            }
            TranScale((NXTPix2D*)&field_32, (SharedArray<unsigned int>*)pix32, sharedArray2, local_34, arg4_00, arg5_00,
                      arg6_00, iVar2, iVar4, arg9, arg10, arg11, arg6, in_stack_ffffffffffffffa0);
        }
    }

    // 0x1003190c0
    void NXTPix2D::TranScale(SharedArray<unsigned int>& sharedArray1, const SharedArray<unsigned int>& sharedArray2,
                             int arg3, int arg4, int arg5, int arg6, int arg7, int arg8, int arg9, int arg10, int arg11,
                             int arg12, unsigned int arg13) {
        unsigned int arg4_00;
        unsigned int* puVar1;
        int iVar2;
        int iVar3;
        unsigned long arg1;
        int iVar4;
        unsigned int uVar5;
        int in_stack_ffffffffffffff98;
        SharedArray<unsigned int>* pSVar6;

        if ((unsigned int)arg12 < 255) {
            if (0 < arg8) {
                iVar2 = -arg8;
                pSVar6 = sharedArray1;
                do {
                    if (0 < arg7) {
                        arg1 = (unsigned long)arg5;
                        iVar3 = 0;
                        iVar4 = arg3;
                        do {
                            puVar1 = &sharedArray1[(long)((iVar4 >> 16) + (arg4 >> 16) * arg11)];
                            uVar5 = *puVar1;
                            sharedArray1 = pSVar6;
                            if (uVar5 != 0) {
                                puVar1 = (unsigned int*)(*this)[arg1];
                                arg4_00 = *puVar1;
                                if (arg4_00 == 0) {
                                    uVar5 = uVar5 & 16777215 | arg12 << 24;
                                    sharedArray1 = pSVar6;
                                } else {
                                    uVar5 = ComputeCompositeRGB(uVar5, arg12);
                                    uVar5 = BlendPixel(uVar5, arg12, 255 - arg12, arg4_00);
                                    sharedArray1 = pSVar6;
                                }
                                puVar1 = (unsigned int*)(*this)[arg1];
                                *puVar1 = uVar5;
                            }
                            arg1 = arg1 + 1;
                            iVar4 = iVar4 + arg9;
                            iVar3 = iVar3 - 1;
                            pSVar6 = sharedArray1;
                        } while (-arg7 != iVar3);
                        arg5 = arg5 - iVar3;
                    }
                    arg4 = arg4 + arg10;
                    arg5 = arg5 + arg6;
                    iVar2 = iVar2 + 1;
                } while (iVar2 != 0);
            }
        } else {
            PlotScale(sharedArray1, (SharedArray<unsigned int>*)(unsigned long)(unsigned int)arg7, arg3, arg4, arg5,
                      arg6, arg7, arg8, arg9, arg10, arg11, in_stack_ffffffffffffff98);
        }
    }

    // 0x100319250
    void NXTPix2D::ScanlinePlotSprite(const Pix32& pix32, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7,
                                      const Array<int>& arg8, const Array<int>& arg9) {
        int iVar1;
        int* piVar2;
        unsigned int uVar3;
        int iVar4;
        unsigned int uVar5;
        unsigned int uVar7;
        unsigned int uVar8;
        unsigned long arg1;
        unsigned long arg1_00;
        int local_38;

        unsigned int local_34 = arg3 >> 31 & -arg3;
        unsigned int uVar6 = arg7 - arg3;
        if ((int)(pix32.field_28 + arg3) <= arg7) {
            uVar6 = pix32.field_28;
        }
        if ((int)local_34 < (int)uVar6) {
            uVar5 = arg2 >> 31 & -arg2;
            arg1 = (unsigned long)(arg3 + local_34);
            local_38 = (arg5 + arg3 + local_34) * field_8 + arg4 + arg2 + uVar5;
            do {
                piVar2 = &arg8[arg1];
                iVar1 = *piVar2;
                piVar2 = &arg9[arg1];
                uVar3 = iVar1 - arg2;
                uVar7 = uVar5;
                if (uVar3 != 0 && arg2 <= iVar1) {
                    uVar7 = uVar3;
                }
                uVar8 = (*piVar2 + iVar1) - arg2;
                if ((int)(pix32.field_24 + arg2) <= *piVar2 + iVar1) {
                    uVar8 = pix32.field_24;
                }
                if ((int)uVar7 < (int)uVar8) {
                    iVar4 = uVar3 - uVar5;
                    if (iVar1 <= arg2) {
                        iVar4 = 0;
                    }
                    arg1_00 = (unsigned long)(iVar4 + local_38);
                    do {
                        piVar2 = &pix32[(long)(int)(pix32.field_24 * local_34 + uVar7)];
                        iVar1 = *piVar2;
                        if (iVar1 != 0) {
                            piVar2 = &field_32[arg1_00];
                            *piVar2 = iVar1;
                        }
                        arg1_00 = arg1_00 + 1;
                        uVar7 = uVar7 + 1;
                    } while ((int)uVar7 < (int)uVar8);
                }
                arg1 = arg1 + 1;
                local_38 = local_38 + field_8;
                local_34 = local_34 + 1;
            } while ((int)local_34 < (int)uVar6);
        }
    }

    // 0x1003193c0
    void NXTPix2D::ScanlineRotatePlotSprite(const Pix32& pix32, int arg2, int arg3, int arg4, int arg5, int arg6,
                                            int arg7, int arg8, int arg9, const Array<int>& arg10,
                                            const Array<int>& arg11) {
        int iVar1;
        unsigned int uVar2;
        uint32_t uVar3;
        int iVar4;
        int* piVar5;
        unsigned long uVar6;
        uint32_t* puVar7;
        unsigned long arg1;
        unsigned long arg1_00;
        int iVar8;
        int iVar9;
        int iVar10;
        int iVar11;
        double in_XMM1_Qa;
        unsigned long local_50;
        int local_44;
        int local_40;
        int local_34;

        double dVar12 = (double)___sincos_stret((double)arg8 * 0.003066449970868725);
        if (0 < arg5) {
            iVar4 = (int)(dVar12 * 65536.0) * arg9 >> 8;
            iVar8 = (int)(in_XMM1_Qa * 65536.0) * arg9 >> 8;
            local_34 = arg3 * field_8 + arg2;
            local_44 = (arg7 * 65536 + iVar8 * -(arg5 / 2)) - iVar4 * -(arg4 / 2);
            local_40 = -(arg5 / 2) * iVar4 + arg6 * 65536 + -(arg4 / 2) * iVar8;
            arg1 = 0;
            do {
                piVar5 = &arg10[arg1];
                iVar1 = *piVar5;
                piVar5 = &arg11[arg1];
                iVar10 = *piVar5;
                if (0 < iVar10) {
                    iVar9 = local_44 - iVar1 * iVar4;
                    iVar11 = iVar1 * iVar8 + local_40;
                    local_50 = (unsigned long)(iVar1 + local_34);
                    do {
                        uVar2 = pix32.field_24;
                        uVar6 = field_32.HeapBeginPtr();
                        if (local_50 < uVar6) {
                            arg1_00 = (unsigned long)(int)((iVar9 >> 16) * uVar2 + (iVar11 >> 16));
                            uVar6 = pix32.HeapBeginPtr();
                            if (arg1_00 < uVar6) {
                                puVar7 = &pix32[arg1_00];
                                uVar3 = *puVar7;
                                puVar7 = &field_32[local_50];
                                *puVar7 = uVar3;
                                local_50 = local_50 + 1;
                            }
                        }
                        iVar11 = iVar11 + iVar8;
                        iVar9 = iVar9 - iVar4;
                        iVar10 = iVar10 - 1;
                    } while (iVar10 != 0);
                }
                local_40 = local_40 + iVar4;
                local_44 = local_44 + iVar8;
                local_34 = local_34 + field_8;
                arg1 = arg1 + 1;
            } while (arg1 != (unsigned int)arg5);
        }
    }

    // 0x1003195b0
    void NXTPix2D::RotateTransPlotSprite(const Pix32& pix32, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7,
                                         double arg8, int arg9) {
        int iVar1;
        int iVar2;
        unsigned long uVar3;
        int* piVar4;
        int iVar5;
        int iVar6;
        int iVar7;
        int iVar8;
        int iVar9;
        unsigned long arg1;
        unsigned long arg1_00;
        double in_XMM1_Qa;
        int local_44;
        int local_40;
        int local_38;

        double dVar10 = (double)___sincos_stret();
        if (0 < arg5) {
            iVar6 = (int)(dVar10 * 65536.0) * arg9 >> 8;
            iVar1 = (int)(in_XMM1_Qa * 65536.0) * arg9 >> 8;
            local_38 = arg3 * field_8 + arg2;
            local_44 = (arg7 * 65536 + iVar1 * -(arg5 / 2)) - iVar6 * -(arg4 / 2);
            local_40 = -(arg5 / 2) * iVar6 + arg6 * 65536 + -(arg4 / 2) * iVar1;
            iVar2 = 0;
            do {
                if (0 < arg4) {
                    arg1 = (unsigned long)local_38;
                    iVar8 = arg4;
                    iVar9 = local_44;
                    iVar7 = local_40;
                    do {
                        arg1_00 = (unsigned long)(int)((iVar9 >> 16) pix32.field_24 + (iVar7 >> 16));
                        uVar3 = pix32.HeapBeginPtr();
                        iVar5 = 0;
                        if (arg1_00 < uVar3) {
                            piVar4 = &pix32[arg1_00];
                            iVar5 = *piVar4;
                        }
                        if (iVar5 != 0) {
                            uVar3 = field_32.HeapBeginPtr();
                            if (arg1 < uVar3) {
                                piVar4 = &field_32[arg1];
                                *piVar4 = iVar5;
                            }
                        }
                        arg1 = arg1 + 1;
                        iVar7 = iVar7 + iVar1;
                        iVar9 = iVar9 - iVar6;
                        iVar8 = iVar8 - 1;
                    } while (iVar8 != 0);
                }
                local_40 = local_40 + iVar6;
                local_44 = local_44 + iVar1;
                local_38 = local_38 + field_8;
                iVar2 = iVar2 + 1;
            } while (iVar2 != arg5);
        }
    }

    // 0x100319750
    void NXTPix2D::RecolourPlotSprite(const Pix32& pix32, int arg2, int arg3, unsigned int arg4) {
        int arg4_00;
        int in_stack_ffffffffffffff98;
        int in_stack_ffffffffffffffa0;

        unsigned int uVar5 = arg2 + pix32.field_32;
        int iVar3 = arg3 + pix32.field_36;
        int iVar8 = field_8;
        int iVar4 = field_16;
        int arg5 = iVar3 * iVar8 + uVar5;
        unsigned int uVar2 = pix32.field_24;
        unsigned int uVar7 = pix32.field_28;
        int iVar6 = iVar4 - iVar3;
        if (iVar6 == 0 || iVar4 < iVar3) {
            arg4_00 = 0;
        } else {
            uVar7 = uVar7 - iVar6;
            arg4_00 = iVar6 * uVar2;
            arg5 = arg5 + iVar6 * iVar8;
            iVar3 = iVar4;
        }
        iVar8 = iVar8 - uVar2;
        unsigned int uVar1 = field_24;
        iVar4 = field_20 - (iVar3 + uVar7);
        if ((int)(iVar3 + uVar7) <= field_20) {
            iVar4 = 0;
        }
        iVar3 = uVar1 - uVar5;
        if (iVar3 == 0 || (int)uVar1 < (int)uVar5) {
            iVar3 = 0;
        } else {
            uVar2 = uVar2 - iVar3;
            arg4_00 = arg4_00 + iVar3;
            arg5 = arg5 + iVar3;
            iVar8 = iVar8 + iVar3;
            uVar5 = uVar1;
        }
        iVar6 = (uVar5 + uVar2) - field_28;
        if (iVar6 == 0 || (int)(uVar5 + uVar2) < (int)field_28) {
            iVar6 = 0;
        }
        if ((uVar2 - iVar6 != 0 && iVar6 <= (int)uVar2) && (iVar4 = iVar4 + uVar7, 0 < iVar4)) {
            RecolSprite((NXTPix2D*)&field_32, (SharedArray<unsigned int>*)&field_32, (SharedArray<unsigned int>*)pix32,
                        iVar4, arg4_00, arg5, in_stack_ffffffffffffff98, in_stack_ffffffffffffffa0, uVar2 - iVar6,
                        iVar4, iVar8 + iVar6, iVar3 + iVar6, arg4);
        }
    }

    // 0x100319820
    void NXTPix2D::RecolSprite(SharedArray<unsigned int>& sharedArray1, const SharedArray<unsigned int>& sharedArray2,
                               int arg3, int arg4, int arg5, int arg6, int arg7, int arg8, int arg9, int arg10,
                               int arg11, unsigned int arg12) {
        unsigned int* puVar1;
        int iVar2;
        unsigned long arg1;
        int iVar3;
        unsigned int uVar4;
        unsigned long arg1_00;

        if (0 < arg9) {
            iVar2 = -arg9;
            do {
                if (0 < arg8) {
                    arg1 = (unsigned long)arg4;
                    arg1_00 = (unsigned long)arg5;
                    iVar3 = 0;
                    do {
                        puVar1 = &sharedArray2[arg1];
                        uVar4 = *puVar1;
                        if (uVar4 != 0) {
                            if ((short)(uVar4 >> 8) == (short)uVar4) {
                                uVar4 = (uVar4 & 255) * (arg12 >> 8 & 255) & 65280 | uVar4 & 4278190080 |
                                        (uVar4 & 255) * (arg12 & 16711935) >> 8 & 16711935;
                            }
                            puVar1 = &sharedArray1[arg1_00];
                            *puVar1 = uVar4;
                        }
                        arg1_00 = arg1_00 + 1;
                        iVar3 = iVar3 - 1;
                        arg1 = arg1 + 1;
                    } while (-arg8 != iVar3);
                    arg5 = arg5 - iVar3;
                    arg4 = arg4 - iVar3;
                }
                arg4 = arg4 + arg11;
                arg5 = arg5 + arg10;
                iVar2 = iVar2 + 1;
            } while (iVar2 != 0);
        }
    }

    // 0x100319920
    void NXTPix2D::PixelPerfectRotateScalePlotSprite(const Pix32& pix32, int arg2, int arg3, int arg4, int arg5,
                                                     int arg6, int arg7) {
        unsigned int uVar1;
        unsigned int* puVar2;
        int iVar3;
        int iVar4;
        int iVar5;
        int iVar6;
        int iVar7;
        unsigned int uVar8;
        int iVar9;
        int iVar10;
        unsigned int uVar11;
        int iVar12;
        int iVar13;
        unsigned int uVar14;
        int iVar15;
        int iVar16;
        unsigned int uVar17;
        int iVar18;
        unsigned long uVar19;
        unsigned int uVar20;
        double dVar21;
        double dVar22;
        double in_XMM1_Qa;

        if (arg7 != 0) {
            iVar4 = arg2 + pix32.field_32 * -16;
            iVar18 = arg3 + pix32.field_36 * -16;
            dVar21 = (double)___sincos_stret((double)(arg6 & 65535) * 9.587379924285257e-05);
            dVar22 = (double)_floor(dVar21 * (double)arg7 + 0.5);
            iVar15 = (int)dVar22;
            dVar22 = (double)_floor(in_XMM1_Qa * (double)arg7 + 0.5);
            iVar12 = (int)dVar22;
            iVar13 = -iVar18 * iVar15;
            iVar10 = pix32.field_24 * 16 - iVar4;
            iVar9 = iVar10 * iVar12;
            iVar7 = iVar9 + iVar13;
            iVar13 = iVar13 - iVar4 * iVar12;
            iVar10 = iVar10 * iVar15;
            iVar3 = pix32.field_28 * 16 - iVar18;
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
            uVar14 = (iVar10 >> 12) + arg4 >> 4;
            uVar17 = arg4 + (iVar13 + 4095 >> 12) + 15 >> 4;
            iVar7 = (iVar7 >> 12) + arg5 >> 4;
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
                iVar9 = arg5 + (iVar9 + 4095 >> 12) + 15 >> 4;
                if (field_20 < iVar9) {
                    iVar9 = field_20;
                }
                iVar9 = iVar7 - iVar9;
                if (iVar9 < 0) {
                    iVar12 = field_8 * iVar7 + uVar14;
                    dVar21 = (double)_floor(dVar21 * (16777216.0 / (double)arg7) + 0.5);
                    iVar6 = (int)dVar21;
                    dVar21 = (double)_floor(in_XMM1_Qa * (16777216.0 / (double)arg7) + 0.5);
                    iVar5 = (int)dVar21;
                    iVar3 = (uVar14 * 16 - arg4) + 8;
                    iVar7 = (iVar7 * 16 - arg5) + 8;
                    uVar11 = iVar4 * 256 - (iVar7 * iVar6 >> 4);
                    uVar8 = (iVar7 * iVar5 >> 4) + iVar18 * 256;
                    if (iVar5 == 0) {
                        if (iVar6 == 0) {
                            if (iVar9 < 0) {
                                do {
                                    if (((-1 < (int)(uVar11 | uVar8)) &&
                                         ((int)(uVar11 + pix32.field_24 * -4096) < 0)) &&
                                        ((int)(uVar8 + pix32.field_28 * -4096) < 0)) {
                                        uVar19 = (unsigned long)iVar12;
                                        iVar7 = uVar17 - uVar14;
                                        do {
                                            puVar2 = &pix32[(long)(int)(pix32.field_24 * ((int)uVar8 >> 12) +
                                                                        ((int)uVar11 >> 12))];
                                            uVar1 = *puVar2;
                                            puVar2 = &field_32[uVar19];
                                            if (16777215 < uVar1) {
                                                if (uVar1 < 4278190081) {
                                                    uVar20 = uVar1 >> 24;
                                                    uVar1 = ComputeCompositeRGB(uVar1, uVar20);
                                                    uVar1 = BlendPixel(uVar1, uVar20, uVar20 ^ 255, *puVar2);
                                                }
                                                *puVar2 = uVar1;
                                            }
                                            uVar19 = uVar19 + 1;
                                            iVar7 = iVar7 - 1;
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
                                        if ((-1 < (int)uVar11) && ((int)(uVar11 + pix32.field_24 * -4096) < 0)) {
                                            iVar4 = uVar8 + pix32.field_28 * -4096;
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
                                                uVar19 = (unsigned long)iVar7;
                                                do {
                                                    puVar2 = &pix32[(long)(int)(((int)uVar14 >> 12) pix32.field_24 +
                                                                                ((int)uVar11 >> 12))];
                                                    uVar17 = *puVar2;
                                                    puVar2 = &field_32[uVar19];
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
                                    if ((-1 < (int)uVar11) && ((int)(uVar11 + pix32.field_24 * -4096) < 0)) {
                                        iVar7 = iVar12;
                                        iVar3 = iVar13;
                                        uVar14 = uVar8;
                                        if ((int)uVar8 < 0) {
                                            iVar7 = (int)(~uVar8 + iVar6) / iVar6;
                                            iVar3 = iVar7 + iVar13;
                                            uVar14 = iVar7 * iVar6 + uVar8;
                                            iVar7 = iVar7 + iVar12;
                                        }
                                        iVar4 = (int)((1 - iVar6) + uVar14 + pix32.field_28 * -4096) / iVar6;
                                        if (iVar3 < iVar4) {
                                            iVar3 = iVar4;
                                        }
                                        if (iVar3 < 0) {
                                            uVar19 = (unsigned long)iVar7;
                                            do {
                                                puVar2 = &pix32[(long)(int)(((int)uVar14 >> 12) pix32.field_24 +
                                                                            ((int)uVar11 >> 12))];
                                                uVar17 = *puVar2;
                                                puVar2 = &field_32[uVar19];
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
                                    if ((-1 < (int)uVar8) && ((int)(uVar8 + pix32.field_28 * -4096) < 0)) {
                                        iVar10 = iVar7 + pix32.field_24 * -4096;
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
                                            uVar19 = (unsigned long)iVar3;
                                            do {
                                                puVar2 = &pix32[(long)(int)((iVar4 >> 12) +
                                                                            pix32.field_24 * ((int)uVar8 >> 12))];
                                                uVar14 = *puVar2;
                                                puVar2 = &field_32[uVar19];
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
                                        iVar4 = iVar10 + pix32.field_24 * -4096;
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
                                        iVar18 = iVar15 + pix32.field_28 * -4096;
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
                                            uVar19 = (unsigned long)iVar16;
                                            do {
                                                puVar2 = (unsigned int*)
                                                    pix32[(long)(int)((iVar10 >> 12) + (iVar15 >> 12) pix32.field_24)];
                                                uVar14 = *puVar2;
                                                puVar2 = &field_32[uVar19];
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
                                    iVar4 = iVar10 + pix32.field_24 * -4096;
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
                                    iVar16 = (int)((1 - iVar6) + uVar14 + pix32.field_28 * -4096) / iVar6;
                                    if (iVar4 < iVar16) {
                                        iVar4 = iVar16;
                                    }
                                    if (iVar4 < 0) {
                                        uVar19 = (unsigned long)iVar15;
                                        do {
                                            puVar2 = &pix32[(long)(int)((iVar10 >> 12) + ((int)uVar14 >> 12)
                                                                                             pix32.field_24)];
                                            uVar17 = *puVar2;
                                            puVar2 = &field_32[uVar19];
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
                                if ((-1 < (int)uVar8) && ((int)(uVar8 + pix32.field_28 * -4096) < 0)) {
                                    iVar7 = iVar12;
                                    iVar3 = iVar13;
                                    uVar14 = uVar11;
                                    if ((int)uVar11 < 0) {
                                        iVar7 = (int)(~uVar11 + iVar5) / iVar5;
                                        iVar3 = iVar7 + iVar13;
                                        uVar14 = iVar7 * iVar5 + uVar11;
                                        iVar7 = iVar7 + iVar12;
                                    }
                                    iVar4 = (int)((1 - iVar5) + uVar14 + pix32.field_24 * -4096) / iVar5;
                                    if (iVar3 < iVar4) {
                                        iVar3 = iVar4;
                                    }
                                    if (iVar3 < 0) {
                                        uVar19 = (unsigned long)iVar7;
                                        do {
                                            puVar2 = &pix32[(long)(int)(((int)uVar14 >> 12) +
                                                                        pix32.field_24 * ((int)uVar8 >> 12))];
                                            uVar17 = *puVar2;
                                            puVar2 = &field_32[uVar19];
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
                                    iVar16 = (int)((1 - iVar5) + uVar14 + pix32.field_24 * -4096) / iVar5;
                                    if (iVar15 < iVar16) {
                                        iVar15 = iVar16;
                                    }
                                    iVar16 = iVar4 + pix32.field_28 * -4096;
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
                                        uVar19 = (unsigned long)iVar10;
                                        do {
                                            puVar2 =
                                                &pix32[(long)(int)(((int)uVar14 >> 12) + (iVar4 >> 12) pix32.field_24)];
                                            uVar17 = *puVar2;
                                            puVar2 = &field_32[uVar19];
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
                                iVar15 = (int)((1 - iVar5) + uVar14 + pix32.field_24 * -4096) / iVar5;
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
                                iVar15 = (int)((1 - iVar6) + uVar17 + pix32.field_28 * -4096) / iVar6;
                                if (iVar10 < iVar15) {
                                    iVar10 = iVar15;
                                }
                                if (iVar10 < 0) {
                                    uVar19 = (unsigned long)iVar4;
                                    do {
                                        puVar2 = &pix32[(long)(int)(((int)uVar14 >> 12) + ((int)uVar17 >> 12)
                                                                                              pix32.field_24)];
                                        uVar1 = *puVar2;
                                        puVar2 = (unsigned int*)field_32[uVar19];
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

    // 0x10031a9c0
    void NXTPix2D::AntialiasedShrinkPlotSprite(const Pix32& pix32, int arg2, int arg3, int arg4, int arg5) {
        int iVar1;
        unsigned int uVar2;
        int iVar3;
        unsigned int uVar4;
        unsigned long uVar5;
        unsigned int* puVar6;
        int iVar7;
        unsigned int uVar8;
        int iVar9;
        unsigned int uVar10;
        int iVar11;
        unsigned int uVar12;
        int iVar13;
        unsigned int uVar14;
        int iVar15;
        unsigned int uVar16;
        unsigned int uVar17;
        unsigned int uVar18;
        unsigned int uVar19;
        unsigned int uVar20;
        int iVar21;
        unsigned int uVar22;
        int iVar23;
        unsigned int uVar25;
        bool bVar26;
        unsigned long local_68;
        unsigned int local_40;
        unsigned int local_3c;
        unsigned int local_38;

        unsigned int uVar24 = pix32.field_40;
        if (arg4 <= (int)uVar24) {
            uVar8 = pix32.field_44;
            if (arg5 <= (int)uVar8) {
                uVar22 = (int)(pix32.field_32 * arg4) / (int)uVar24 + arg2;
                uVar24 = (int)(uVar24 + (pix32.field_32 + pix32.field_24) * arg4 - 1) / (int)uVar24 + arg2;
                iVar15 = (int)(pix32.field_36 * arg5) / (int)uVar8 + arg3;
                iVar3 = (int)(uVar8 + (pix32.field_36 + pix32.field_28) * arg5 - 1) / (int)uVar8 + arg3;
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
                    local_68 = (unsigned long)(iVar1 * iVar15 + uVar22);
                    uVar5 = field_32.HeapBeginPtr();
                    if (local_68 < uVar5) {
                        do {
                            iVar7 = (iVar15 - arg3) * 16;
                            uVar8 = uVar22;
                            do {
                                iVar9 = (uVar8 - arg2) * 16;
                                uVar18 = (int)(pix32.field_40 * iVar9) / arg4 + pix32.field_32 * -16;
                                iVar21 = (int)((iVar9 + 16) pix32.field_40) / arg4 + pix32.field_32 * -16;
                                uVar20 = (int)(pix32.field_44 * iVar7) / arg5 + pix32.field_36 * -16;
                                iVar9 = (int)(pix32.field_44 * (iVar7 + 16)) / arg5 + pix32.field_36 * -16;
                                uVar10 = (iVar9 - uVar20) * (iVar21 - uVar18);
                                if (1 < uVar10) {
                                    if ((int)uVar18 < 0) {
                                        uVar18 = 0;
                                    }
                                    iVar11 = pix32.field_24 * 16;
                                    if (iVar21 < iVar11) {
                                        iVar11 = iVar21;
                                    }
                                    local_40 = 0;
                                    if ((int)uVar20 < 0) {
                                        uVar20 = 0;
                                    }
                                    iVar21 = pix32.field_28 * 16;
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
                                                    puVar6 =
                                                        &pix32[(long)(int)(pix32.field_24 * uVar17 + uVar19 + iVar23)];
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
                                    if ((unsigned int)((int)uVar10 >> 1) <= uVar25) {
                                        puVar6 = &field_32[(long)(int)local_68];
                                        *puVar6 = local_3c / uVar25 + (local_38 / uVar25) * 256 +
                                                      (local_40 / uVar25) * 65536 |
                                                  4278190080;
                                    }
                                    local_68 = (unsigned long)((int)local_68 + 1);
                                }
                                uVar8 = uVar8 + 1;
                            } while (uVar8 != uVar24);
                            local_68 = (unsigned long)((int)local_68 + (uVar22 - uVar24) + iVar1);
                            iVar15 = iVar15 + 1;
                        } while (iVar15 != iVar3);
                    }
                }
                return;
            }
        }
        LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/"
                        "graphics/NXTPix2D.cpp",
                        3074, "This is only suitable for scaling down, not up");
    }

} // namespace jag::oldscape::graphics
