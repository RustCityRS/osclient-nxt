// libs/oldscape/rs2lib/worldmap/OverlayShapes.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.oldscape.rs2lib

#include "OverlayShapes.h"

namespace jag::oldscape::rs2lib::worldmap {
    // 0x10020d8c0
    OverlayShapes::OverlayShapes(int arg1) {
        new (&field_8) Array<Array<unsigned char>>();
        field_0 = arg1;
    }

    // 0x10020d8f0
    void OverlayShapes::DrawOverlayShape(int arg1, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7, int arg8,
                                         graphics::Pix2D& pix2D) {
        uint64_t uVar1;
        int arg2_00;
        OverlayShapes* this_00;
        uint32_t in_register_00000084;

        if ((arg7 != 0) && (field_0 != 0)) {
            this_00 = (OverlayShapes*)&field_8;
            if (this_00->empty() == '\0') {
                arg2_00 = AdjustRotation(this_00, arg8, arg7);
                uVar1 = RShapes(AdjustShape(this_00, arg7) - 1, arg2_00);
                (**(void (**)(...))(pix2D.field_0 + 48))(pix2D, arg1, arg2, arg5, arg6, arg3,
                                                         (((uint64_t)in_register_00000084 << 32) | (uint32_t)arg4),
                                                         uVar1, field_0, 1);
            }
        }
    }

    // 0x10020d990
    unsigned int OverlayShapes::AdjustRotation(int arg1, int arg2) {
        unsigned int uVar1 = arg1 + 1U & 3;
        if (arg2 != 9) {
            uVar1 = arg1;
        }
        unsigned int uVar2 = uVar1 - 1 & 3;
        if (arg2 != 10) {
            uVar2 = uVar1;
        }
        uVar1 = uVar2 - 1 & 3;
        if (arg2 != 11) {
            uVar1 = uVar2;
        }
        return uVar1;
    }

    // 0x10020d9c0
    int OverlayShapes::AdjustShape(int arg1) {
        int iVar2 = 8;
        if (arg1 != 11) {
            iVar2 = arg1;
        }
        int iVar1 = 1;
        if (1 < arg1 - 9U) {
            iVar1 = iVar2;
        }
        return iVar1;
    }

    // 0x10020da00
    void OverlayShapes::CalcOverlayShapes() {
        if (field_8.empty() != '\0') {
            field_8.set_max_size(32, 3);
            CalculateShape1();
            CalculateShape2();
            CalculateShape4();
            CalculateShape5();
            CalculateShape6();
            CalculateShape7();
            CalculateShape3();
            CalculateShape8();
        }
    }

    // 0x10020da80
    void OverlayShapes::CalculateShape1() {
        bool bVar1;
        uint8_t* puVar5;
        long lVar6;
        unsigned int uVar7;

        int iVar2 = 0;
        auto pAVar4 = RShapes(0, 0);
        pAVar4->set_max_size((unsigned long)(unsigned int)(field_0 * field_0), 3);
        if (0 < field_0) {
            uVar7 = 0;
            do {
                if (0 < field_0) {
                    lVar6 = 0;
                    do {
                        if ((unsigned int)lVar6 <= uVar7) {
                            puVar5 = (uint8_t*)(*pAVar4)[iVar2 + lVar6];
                            *puVar5 = 255;
                        }
                        lVar6 = lVar6 + 1;
                    } while ((int)lVar6 < field_0);
                    iVar2 = iVar2 + (int)lVar6;
                }
                uVar7 = uVar7 + 1;
            } while ((int)uVar7 < field_0);
        }
        int iVar3 = 0;
        pAVar4 = (Array<unsigned char>*)RShapes(0, 1);
        pAVar4->set_max_size((unsigned long)(unsigned int)(field_0 * field_0), 3);
        iVar2 = field_0;
        if (0 < field_0) {
            do {
                if (0 < field_0) {
                    lVar6 = 0;
                    do {
                        if ((int)lVar6 < iVar2) {
                            puVar5 = (uint8_t*)(*pAVar4)[iVar3 + lVar6];
                            *puVar5 = 255;
                        }
                        lVar6 = lVar6 + 1;
                    } while ((int)lVar6 < field_0);
                    iVar3 = iVar3 + (int)lVar6;
                }
                bVar1 = 1 < iVar2;
                iVar2 = iVar2 - 1;
            } while (bVar1);
        }
        uVar7 = 0;
        pAVar4 = (Array<unsigned char>*)RShapes(0, 2);
        pAVar4->set_max_size((unsigned long)(unsigned int)(field_0 * field_0), 3);
        if (0 < field_0) {
            iVar2 = 0;
            do {
                if (0 < field_0) {
                    lVar6 = 0;
                    do {
                        if (uVar7 <= (unsigned int)lVar6) {
                            puVar5 = (uint8_t*)(*pAVar4)[iVar2 + lVar6];
                            *puVar5 = 255;
                        }
                        lVar6 = lVar6 + 1;
                    } while ((int)lVar6 < field_0);
                    iVar2 = iVar2 + (int)lVar6;
                }
                uVar7 = uVar7 + 1;
            } while ((int)uVar7 < field_0);
        }
        iVar3 = 0;
        pAVar4 = (Array<unsigned char>*)RShapes(0, 3);
        pAVar4->set_max_size((unsigned long)(unsigned int)(field_0 * field_0), 3);
        iVar2 = field_0;
        if (0 < field_0) {
            do {
                if (0 < field_0) {
                    lVar6 = 0;
                    do {
                        if (iVar2 - 1 <= (int)lVar6) {
                            puVar5 = (uint8_t*)(*pAVar4)[lVar6 + iVar3];
                            *puVar5 = 255;
                        }
                        lVar6 = lVar6 + 1;
                    } while ((int)lVar6 < field_0);
                    iVar3 = iVar3 + (int)lVar6;
                }
                bVar1 = 1 < iVar2;
                iVar2 = iVar2 - 1;
            } while (bVar1);
        }
    }

    // 0x10020dcb0
    void OverlayShapes::CalculateShape2() {
        int iVar1;
        bool bVar2;
        int iVar3;
        uint8_t* puVar5;
        unsigned long uVar6;
        unsigned int uVar7;
        int iVar8;
        long lVar9;
        long lVar10;

        auto pAVar4 = RShapes(1, 0);
        pAVar4->set_max_size((unsigned long)(unsigned int)(field_0 * field_0), 3);
        if (0 < field_0) {
            lVar9 = 0;
            iVar3 = field_0;
            do {
                if (0 < field_0) {
                    lVar10 = 0;
                    do {
                        if ((int)lVar10 <= iVar3 - 1 >> 1) {
                            puVar5 = (uint8_t*)(*pAVar4)[lVar9 + lVar10];
                            *puVar5 = 255;
                        }
                        lVar10 = lVar10 + 1;
                    } while ((int)lVar10 < field_0);
                    lVar9 = lVar9 + lVar10;
                }
                bVar2 = 1 < iVar3;
                iVar3 = iVar3 - 1;
            } while (bVar2);
        }
        pAVar4 = (Array<unsigned char>*)RShapes(1, 1);
        pAVar4->set_max_size((unsigned long)(unsigned int)(field_0 * field_0), 3);
        if (0 < field_0) {
            iVar3 = 0;
            lVar9 = 0;
            do {
                if (0 < field_0) {
                    lVar10 = 0;
                    do {
                        uVar6 = pAVar4->end();
                        if (((unsigned long)(lVar10 + lVar9) < uVar6) && (iVar3 * 2 <= (int)lVar10)) {
                            puVar5 = (uint8_t*)(*pAVar4)[lVar10 + lVar9];
                            *puVar5 = 255;
                        }
                        lVar10 = lVar10 + 1;
                    } while ((int)lVar10 < field_0);
                    lVar9 = lVar9 + lVar10;
                }
                iVar3 = iVar3 + 1;
            } while (iVar3 < field_0);
        }
        pAVar4 = (Array<unsigned char>*)RShapes(1, 2);
        pAVar4->set_max_size((unsigned long)(unsigned int)(field_0 * field_0), 3);
        iVar3 = field_0;
        if (0 < iVar3) {
            uVar7 = 0;
            uVar6 = 0;
            do {
                if (0 < iVar3) {
                    do {
                        iVar3 = iVar3 - 1;
                        if (iVar3 <= (int)(uVar7 >> 1)) {
                            puVar5 = (uint8_t*)(*pAVar4)[uVar6];
                            *puVar5 = 255;
                        }
                        uVar6 = uVar6 + 1;
                    } while (iVar3 != 0);
                }
                uVar7 = uVar7 + 1;
                iVar3 = field_0;
            } while ((int)uVar7 < iVar3);
        }
        pAVar4 = (Array<unsigned char>*)RShapes(1, 3);
        pAVar4->set_max_size((unsigned long)(unsigned int)(field_0 * field_0), 3);
        if (0 < field_0) {
            uVar6 = 0;
            iVar3 = field_0;
            do {
                if (0 < field_0) {
                    iVar8 = field_0;
                    do {
                        iVar1 = iVar8 - 1;
                        if (iVar3 * 2 - 2 < iVar8) {
                            puVar5 = (uint8_t*)(*pAVar4)[uVar6];
                            *puVar5 = 255;
                        }
                        uVar6 = uVar6 + 1;
                        iVar8 = iVar1;
                    } while (iVar1 != 0);
                }
                bVar2 = 1 < iVar3;
                iVar3 = iVar3 - 1;
            } while (bVar2);
        }
    }

    // 0x10020df10
    void OverlayShapes::CalculateShape4() {
        bool bVar1;
        uint8_t* puVar4;
        long lVar6;
        unsigned long uVar7;
        unsigned int uVar8;

        int iVar5 = 0;
        auto pAVar3 = RShapes(3, 0);
        pAVar3->set_max_size((unsigned long)(unsigned int)(field_0 * field_0), 3);
        int iVar2 = field_0;
        if (0 < field_0) {
            do {
                if (0 < field_0) {
                    lVar6 = 0;
                    do {
                        if (iVar2 - 1 >> 1 <= (int)lVar6) {
                            puVar4 = (uint8_t*)(*pAVar3)[iVar5 + lVar6];
                            *puVar4 = 255;
                        }
                        lVar6 = lVar6 + 1;
                    } while ((int)lVar6 < field_0);
                    iVar5 = iVar5 + (int)lVar6;
                }
                bVar1 = 1 < iVar2;
                iVar2 = iVar2 - 1;
            } while (bVar1);
        }
        pAVar3 = (Array<unsigned char>*)RShapes(3, 1);
        pAVar3->set_max_size((unsigned long)(unsigned int)(field_0 * field_0), 3);
        if (0 < field_0) {
            iVar2 = 0;
            iVar5 = 0;
            do {
                if (0 < field_0) {
                    lVar6 = 0;
                    do {
                        if ((int)lVar6 <= iVar2 * 2) {
                            puVar4 = (uint8_t*)(*pAVar3)[lVar6 + iVar5];
                            *puVar4 = 255;
                        }
                        lVar6 = lVar6 + 1;
                    } while ((int)lVar6 < field_0);
                    iVar5 = iVar5 + (int)lVar6;
                }
                iVar2 = iVar2 + 1;
            } while (iVar2 < field_0);
        }
        pAVar3 = (Array<unsigned char>*)RShapes(3, 2);
        pAVar3->set_max_size((unsigned long)(unsigned int)(field_0 * field_0), 3);
        iVar2 = field_0;
        if (0 < iVar2) {
            uVar8 = 0;
            uVar7 = 0;
            do {
                if (0 < iVar2) {
                    uVar7 = (unsigned long)(int)uVar7;
                    do {
                        if ((int)(uVar8 >> 1) < iVar2) {
                            puVar4 = (uint8_t*)(*pAVar3)[uVar7];
                            *puVar4 = 255;
                        }
                        uVar7 = uVar7 + 1;
                        bVar1 = 1 < iVar2;
                        iVar2 = iVar2 - 1;
                    } while (bVar1);
                }
                uVar8 = uVar8 + 1;
                iVar2 = field_0;
            } while ((int)uVar8 < iVar2);
        }
        pAVar3 = (Array<unsigned char>*)RShapes(3, 3);
        pAVar3->set_max_size((unsigned long)(unsigned int)(field_0 * field_0), 3);
        if (0 < field_0) {
            uVar7 = 0;
            iVar2 = field_0;
            do {
                if (0 < field_0) {
                    uVar7 = (unsigned long)(int)uVar7;
                    iVar5 = field_0 + 1;
                    do {
                        if (iVar5 - 2 <= iVar2 * 2 - 2) {
                            puVar4 = (uint8_t*)(*pAVar3)[uVar7];
                            *puVar4 = 255;
                        }
                        uVar7 = uVar7 + 1;
                        iVar5 = iVar5 - 1;
                    } while (1 < iVar5);
                }
                bVar1 = 1 < iVar2;
                iVar2 = iVar2 - 1;
            } while (bVar1);
        }
    }

    // 0x10020e180
    void OverlayShapes::CalculateShape5() {
        bool bVar1;
        unsigned int uVar2;
        uint8_t* puVar4;
        int iVar6;
        long lVar7;

        unsigned long uVar8 = 0;
        auto pAVar3 = RShapes(4, 0);
        pAVar3->set_max_size((unsigned long)(unsigned int)(field_0 * field_0), 3);
        int iVar5 = field_0;
        if (0 < field_0) {
            do {
                if (0 < field_0) {
                    uVar8 = (unsigned long)(int)uVar8;
                    iVar6 = field_0;
                    do {
                        if (iVar5 - 1 >> 1 < iVar6) {
                            puVar4 = (uint8_t*)(*pAVar3)[uVar8];
                            *puVar4 = 255;
                        }
                        uVar8 = uVar8 + 1;
                        bVar1 = 1 < iVar6;
                        iVar6 = iVar6 - 1;
                    } while (bVar1);
                }
                bVar1 = 1 < iVar5;
                iVar5 = iVar5 - 1;
            } while (bVar1);
        }
        pAVar3 = (Array<unsigned char>*)RShapes(4, 1);
        pAVar3->set_max_size((unsigned long)(unsigned int)(field_0 * field_0), 3);
        if (0 < field_0) {
            iVar6 = 0;
            iVar5 = field_0;
            do {
                if (0 < field_0) {
                    lVar7 = 0;
                    do {
                        if ((int)lVar7 <= iVar5 * 2 - 2) {
                            puVar4 = (uint8_t*)(*pAVar3)[iVar6 + lVar7];
                            *puVar4 = 255;
                        }
                        lVar7 = lVar7 + 1;
                    } while ((int)lVar7 < field_0);
                    iVar6 = iVar6 + (int)lVar7;
                }
                bVar1 = 1 < iVar5;
                iVar5 = iVar5 - 1;
            } while (bVar1);
        }
        pAVar3 = (Array<unsigned char>*)RShapes(4, 2);
        pAVar3->set_max_size((unsigned long)(unsigned int)(field_0 * field_0), 3);
        if (0 < field_0) {
            uVar2 = 0;
            iVar5 = 0;
            do {
                if (0 < field_0) {
                    lVar7 = 0;
                    do {
                        if (uVar2 >> 1 <= (unsigned int)lVar7) {
                            puVar4 = (uint8_t*)(*pAVar3)[iVar5 + lVar7];
                            *puVar4 = 255;
                        }
                        lVar7 = lVar7 + 1;
                    } while ((int)lVar7 < field_0);
                    iVar5 = iVar5 + (int)lVar7;
                }
                uVar2 = uVar2 + 1;
            } while ((int)uVar2 < field_0);
        }
        pAVar3 = (Array<unsigned char>*)RShapes(4, 3);
        pAVar3->set_max_size((unsigned long)(unsigned int)(field_0 * field_0), 3);
        iVar5 = field_0;
        if (0 < iVar5) {
            iVar6 = 0;
            uVar8 = 0;
            do {
                if (0 < iVar5) {
                    uVar8 = (unsigned long)(int)uVar8;
                    iVar5 = iVar5 + 1;
                    do {
                        if (iVar5 - 2 <= iVar6 * 2) {
                            puVar4 = (uint8_t*)(*pAVar3)[uVar8];
                            *puVar4 = 255;
                        }
                        uVar8 = uVar8 + 1;
                        iVar5 = iVar5 - 1;
                    } while (1 < iVar5);
                }
                iVar6 = iVar6 + 1;
                iVar5 = field_0;
            } while (iVar6 < iVar5);
        }
    }

    // 0x10020e400
    void OverlayShapes::CalculateShape6() {
        int iVar2;
        uint8_t* puVar4;
        long lVar5;
        int iVar6;

        int iVar1 = 0;
        auto pAVar3 = RShapes(5, 0);
        pAVar3->set_max_size((unsigned long)(unsigned int)(field_0 * field_0), 3);
        if (0 < field_0) {
            iVar6 = 0;
            do {
                iVar2 = field_0;
                if (0 < iVar2) {
                    lVar5 = 0;
                    do {
                        if ((int)lVar5 <= iVar2 / 2) {
                            puVar4 = (uint8_t*)(*pAVar3)[iVar1 + lVar5];
                            *puVar4 = 255;
                        }
                        iVar2 = field_0;
                        lVar5 = lVar5 + 1;
                    } while ((int)lVar5 < iVar2);
                    iVar1 = iVar1 + (int)lVar5;
                }
                iVar6 = iVar6 + 1;
            } while (iVar6 < field_0);
        }
        pAVar3 = (Array<unsigned char>*)RShapes(5, 1);
        pAVar3->set_max_size((unsigned long)(unsigned int)(field_0 * field_0), 3);
        if (0 < field_0) {
            iVar6 = 0;
            iVar1 = 0;
            do {
                iVar2 = field_0;
                if (0 < iVar2) {
                    lVar5 = 0;
                    do {
                        if (iVar6 <= iVar2 / 2) {
                            puVar4 = (uint8_t*)(*pAVar3)[iVar1 + lVar5];
                            *puVar4 = 255;
                        }
                        iVar2 = field_0;
                        lVar5 = lVar5 + 1;
                    } while ((int)lVar5 < iVar2);
                    iVar1 = iVar1 + (int)lVar5;
                }
                iVar6 = iVar6 + 1;
            } while (iVar6 < field_0);
        }
        pAVar3 = (Array<unsigned char>*)RShapes(5, 2);
        pAVar3->set_max_size((unsigned long)(unsigned int)(field_0 * field_0), 3);
        if (0 < field_0) {
            iVar6 = 0;
            iVar1 = 0;
            do {
                iVar2 = field_0;
                if (0 < iVar2) {
                    lVar5 = 0;
                    do {
                        if (iVar2 / 2 <= (int)lVar5) {
                            puVar4 = (uint8_t*)(*pAVar3)[lVar5 + iVar1];
                            *puVar4 = 255;
                        }
                        iVar2 = field_0;
                        lVar5 = lVar5 + 1;
                    } while ((int)lVar5 < iVar2);
                    iVar1 = iVar1 + (int)lVar5;
                }
                iVar6 = iVar6 + 1;
            } while (iVar6 < field_0);
        }
        pAVar3 = (Array<unsigned char>*)RShapes(5, 3);
        pAVar3->set_max_size((unsigned long)(unsigned int)(field_0 * field_0), 3);
        if (0 < field_0) {
            iVar6 = 0;
            iVar1 = 0;
            do {
                iVar2 = field_0;
                if (0 < iVar2) {
                    lVar5 = 0;
                    do {
                        if (iVar2 / 2 <= iVar6) {
                            puVar4 = (uint8_t*)(*pAVar3)[iVar1 + lVar5];
                            *puVar4 = 255;
                        }
                        iVar2 = field_0;
                        lVar5 = lVar5 + 1;
                    } while ((int)lVar5 < iVar2);
                    iVar1 = iVar1 + (int)lVar5;
                }
                iVar6 = iVar6 + 1;
            } while (iVar6 < field_0);
        }
    }

    // 0x10020e6a0
    void OverlayShapes::CalculateShape7() {
        bool bVar1;
        int iVar3;
        uint8_t* puVar5;
        long lVar6;
        unsigned long uVar7;
        int iVar8;

        int iVar2 = 0;
        auto pAVar4 = RShapes(6, 0);
        pAVar4->set_max_size((unsigned long)(unsigned int)(field_0 * field_0), 3);
        if (0 < field_0) {
            iVar8 = 0;
            do {
                iVar3 = field_0;
                if (0 < iVar3) {
                    lVar6 = 0;
                    do {
                        if ((int)lVar6 <= iVar8 - iVar3 / 2) {
                            puVar5 = (uint8_t*)(*pAVar4)[iVar2 + lVar6];
                            *puVar5 = 255;
                        }
                        iVar3 = field_0;
                        lVar6 = lVar6 + 1;
                    } while ((int)lVar6 < iVar3);
                    iVar2 = iVar2 + (int)lVar6;
                }
                iVar8 = iVar8 + 1;
            } while (iVar8 < field_0);
        }
        pAVar4 = (Array<unsigned char>*)RShapes(6, 1);
        pAVar4->set_max_size((unsigned long)(unsigned int)(field_0 * field_0), 3);
        if (0 < field_0) {
            iVar8 = 0;
            iVar2 = field_0;
            do {
                iVar3 = field_0;
                if (0 < iVar3) {
                    lVar6 = 0;
                    do {
                        if ((int)lVar6 <= (iVar2 - 1) - iVar3 / 2) {
                            puVar5 = (uint8_t*)(*pAVar4)[lVar6 + iVar8];
                            *puVar5 = 255;
                        }
                        iVar3 = field_0;
                        lVar6 = lVar6 + 1;
                    } while ((int)lVar6 < iVar3);
                    iVar8 = iVar8 + (int)lVar6;
                }
                bVar1 = 1 < iVar2;
                iVar2 = iVar2 - 1;
            } while (bVar1);
        }
        pAVar4 = (Array<unsigned char>*)RShapes(6, 2);
        pAVar4->set_max_size((unsigned long)(unsigned int)(field_0 * field_0), 3);
        if (0 < field_0) {
            uVar7 = 0;
            iVar2 = field_0;
            do {
                if (0 < field_0) {
                    uVar7 = (unsigned long)(int)uVar7;
                    iVar8 = field_0 + 1;
                    do {
                        if (iVar8 - 2 <= (iVar2 - 1) - field_0 / 2) {
                            puVar5 = (uint8_t*)(*pAVar4)[uVar7];
                            *puVar5 = 255;
                        }
                        uVar7 = uVar7 + 1;
                        iVar8 = iVar8 - 1;
                    } while (1 < iVar8);
                }
                bVar1 = 1 < iVar2;
                iVar2 = iVar2 - 1;
            } while (bVar1);
        }
        pAVar4 = (Array<unsigned char>*)RShapes(6, 3);
        pAVar4->set_max_size((unsigned long)(unsigned int)(field_0 * field_0), 3);
        iVar2 = field_0;
        if (0 < iVar2) {
            iVar8 = 0;
            uVar7 = 0;
            do {
                if (0 < iVar2) {
                    uVar7 = (unsigned long)(int)uVar7;
                    iVar2 = iVar2 + 1;
                    do {
                        if (iVar2 - 2 <= iVar8 - field_0 / 2) {
                            puVar5 = (uint8_t*)(*pAVar4)[uVar7];
                            *puVar5 = 255;
                        }
                        uVar7 = uVar7 + 1;
                        iVar2 = iVar2 - 1;
                    } while (1 < iVar2);
                }
                iVar8 = iVar8 + 1;
                iVar2 = field_0;
            } while (iVar8 < iVar2);
        }
    }

    // 0x10020e940
    void OverlayShapes::CalculateShape3() {
        bool bVar1;
        unsigned int uVar2;
        uint8_t* puVar4;
        int iVar6;
        long lVar7;

        unsigned long uVar8 = 0;
        auto pAVar3 = RShapes(2, 0);
        pAVar3->set_max_size((unsigned long)(unsigned int)(field_0 * field_0), 3);
        int iVar5 = field_0;
        if (0 < field_0) {
            do {
                if (0 < field_0) {
                    uVar8 = (unsigned long)(int)uVar8;
                    iVar6 = field_0 + 1;
                    do {
                        if (iVar6 - 2 <= iVar5 - 1 >> 1) {
                            puVar4 = (uint8_t*)(*pAVar3)[uVar8];
                            *puVar4 = 255;
                        }
                        uVar8 = uVar8 + 1;
                        iVar6 = iVar6 - 1;
                    } while (1 < iVar6);
                }
                bVar1 = 1 < iVar5;
                iVar5 = iVar5 - 1;
            } while (bVar1);
        }
        pAVar3 = (Array<unsigned char>*)RShapes(2, 1);
        pAVar3->set_max_size((unsigned long)(unsigned int)(field_0 * field_0), 3);
        if (0 < field_0) {
            iVar6 = 0;
            iVar5 = field_0;
            do {
                if (0 < field_0) {
                    lVar7 = 0;
                    do {
                        if (iVar5 * 2 - 2 <= (int)lVar7) {
                            puVar4 = (uint8_t*)(*pAVar3)[iVar6 + lVar7];
                            *puVar4 = 255;
                        }
                        lVar7 = lVar7 + 1;
                    } while ((int)lVar7 < field_0);
                    iVar6 = iVar6 + (int)lVar7;
                }
                bVar1 = 1 < iVar5;
                iVar5 = iVar5 - 1;
            } while (bVar1);
        }
        pAVar3 = (Array<unsigned char>*)RShapes(2, 2);
        pAVar3->set_max_size((unsigned long)(unsigned int)(field_0 * field_0), 3);
        if (0 < field_0) {
            uVar2 = 0;
            iVar5 = 0;
            do {
                if (0 < field_0) {
                    lVar7 = 0;
                    do {
                        if ((unsigned int)lVar7 <= uVar2 >> 1) {
                            puVar4 = (uint8_t*)(*pAVar3)[iVar5 + lVar7];
                            *puVar4 = 255;
                        }
                        lVar7 = lVar7 + 1;
                    } while ((int)lVar7 < field_0);
                    iVar5 = iVar5 + (int)lVar7;
                }
                uVar2 = uVar2 + 1;
            } while ((int)uVar2 < field_0);
        }
        pAVar3 = (Array<unsigned char>*)RShapes(2, 3);
        pAVar3->set_max_size((unsigned long)(unsigned int)(field_0 * field_0), 3);
        iVar5 = field_0;
        if (0 < iVar5) {
            iVar6 = 0;
            uVar8 = 0;
            do {
                if (0 < iVar5) {
                    uVar8 = (unsigned long)(int)uVar8;
                    do {
                        if (iVar6 * 2 < iVar5) {
                            puVar4 = (uint8_t*)(*pAVar3)[uVar8];
                            *puVar4 = 255;
                        }
                        uVar8 = uVar8 + 1;
                        bVar1 = 1 < iVar5;
                        iVar5 = iVar5 - 1;
                    } while (bVar1);
                }
                iVar6 = iVar6 + 1;
                iVar5 = field_0;
            } while (iVar6 < iVar5);
        }
    }

    // 0x10020ebc0
    void OverlayShapes::CalculateShape8() {
        bool bVar1;
        int iVar3;
        uint8_t* puVar5;
        long lVar6;
        unsigned long uVar7;
        int iVar8;

        int iVar2 = 0;
        auto pAVar4 = RShapes(7, 0);
        pAVar4->set_max_size((unsigned long)(unsigned int)(field_0 * field_0), 3);
        if (0 < field_0) {
            iVar8 = 0;
            do {
                iVar3 = field_0;
                if (0 < iVar3) {
                    lVar6 = 0;
                    do {
                        if (iVar8 - iVar3 / 2 <= (int)lVar6) {
                            puVar5 = (uint8_t*)(*pAVar4)[iVar2 + lVar6];
                            *puVar5 = 255;
                        }
                        iVar3 = field_0;
                        lVar6 = lVar6 + 1;
                    } while ((int)lVar6 < iVar3);
                    iVar2 = iVar2 + (int)lVar6;
                }
                iVar8 = iVar8 + 1;
            } while (iVar8 < field_0);
        }
        pAVar4 = (Array<unsigned char>*)RShapes(7, 1);
        pAVar4->set_max_size((unsigned long)(unsigned int)(field_0 * field_0), 3);
        if (0 < field_0) {
            iVar8 = 0;
            iVar2 = field_0;
            do {
                iVar3 = field_0;
                if (0 < iVar3) {
                    lVar6 = 0;
                    do {
                        if ((iVar2 - 1) - iVar3 / 2 <= (int)lVar6) {
                            puVar5 = (uint8_t*)(*pAVar4)[lVar6 + iVar8];
                            *puVar5 = 255;
                        }
                        iVar3 = field_0;
                        lVar6 = lVar6 + 1;
                    } while ((int)lVar6 < iVar3);
                    iVar8 = iVar8 + (int)lVar6;
                }
                bVar1 = 1 < iVar2;
                iVar2 = iVar2 - 1;
            } while (bVar1);
        }
        pAVar4 = (Array<unsigned char>*)RShapes(7, 2);
        pAVar4->set_max_size((unsigned long)(unsigned int)(field_0 * field_0), 3);
        if (0 < field_0) {
            uVar7 = 0;
            iVar2 = field_0;
            do {
                if (0 < field_0) {
                    uVar7 = (unsigned long)(int)uVar7;
                    iVar8 = field_0;
                    do {
                        if ((iVar2 - 1) - field_0 / 2 < iVar8) {
                            puVar5 = (uint8_t*)(*pAVar4)[uVar7];
                            *puVar5 = 255;
                        }
                        uVar7 = uVar7 + 1;
                        bVar1 = 1 < iVar8;
                        iVar8 = iVar8 - 1;
                    } while (bVar1);
                }
                bVar1 = 1 < iVar2;
                iVar2 = iVar2 - 1;
            } while (bVar1);
        }
        pAVar4 = (Array<unsigned char>*)RShapes(7, 3);
        pAVar4->set_max_size((unsigned long)(unsigned int)(field_0 * field_0), 3);
        iVar2 = field_0;
        if (0 < iVar2) {
            iVar8 = 0;
            uVar7 = 0;
            do {
                if (0 < iVar2) {
                    uVar7 = (unsigned long)(int)uVar7;
                    do {
                        if (iVar8 - field_0 / 2 < iVar2) {
                            puVar5 = (uint8_t*)(*pAVar4)[uVar7];
                            *puVar5 = 255;
                        }
                        uVar7 = uVar7 + 1;
                        bVar1 = 1 < iVar2;
                        iVar2 = iVar2 - 1;
                    } while (bVar1);
                }
                iVar8 = iVar8 + 1;
                iVar2 = field_0;
            } while (iVar8 < iVar2);
        }
    }

} // namespace jag::oldscape::rs2lib::worldmap

namespace jag {
    // 0x1002118a0
    shared_ptr_if_not_array<oldscape::graphics::Pix32>::type
    make_shared<oldscape::graphics::Pix32, int, int>(int&& arg1, int&& arg2) {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_3c;
        Pix32* local_38[2];

        auto arg1_00 = aligned_alloc(80, 8);
        if (arg1_00 == nullptr) {
            shared_ptr_if_not_array<oldscape::graphics::Pix32>::type result;
        } else {
            local_38[0] = placement_new<oldscape::graphics::Pix32, int&, int&>((void*)((long)arg1_00 + 32), arg1, arg2);
            local_3c = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared<oldscape::graphics::Pix32>, int, oldscape::graphics::Pix32*&>(
                    arg1_00, &local_3c, local_38);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_38[0]);
        }
        return result;
    }

} // namespace jag
