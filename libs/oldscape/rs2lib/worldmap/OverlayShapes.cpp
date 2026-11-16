// libs/oldscape/rs2lib/worldmap/OverlayShapes.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.oldscape.rs2lib

#include "OverlayShapes.h"

namespace jag::oldscape::rs2lib::worldmap {
    // 0x10020d8c0, 32 bytes, base-object constructor, placed by class name and debug map
    // OverlayShapes::OverlayShapes(int)
    void OverlayShapes::OverlayShapes(int param_1) {
        new (&field_8) Array<Array<unsigned char, eastl::allocator>, eastl::allocator>();
        field_0 = param_1;
    }

    // 0x10020d8e0, 16 bytes, complete-object constructor, placed by class name and debug map
    // OverlayShapes::OverlayShapes(int): jumps straight to the base-object constructor

    // 0x10020d8f0, 160 bytes, placed by class name and debug map
    // OverlayShapes::DrawOverlayShape(int, int, int, int, int, int, int, int, graphics::Pix2D&)
    void OverlayShapes::DrawOverlayShape(int param_1, int param_2, int param_3, int param_4, int param_5, int param_6,
                                         int param_7, int param_8, Pix2D* param_9) {
        undefined8 uVar1;
        char cVar2;
        int iVar3;
        int iVar4;
        OverlayShapes* this_00;
        undefined4 in_register_00000084;

        if ((param_7 != 0) && (field_0 != 0)) {
            this_00 = (OverlayShapes*)&field_8;
            cVar2 = this_00->empty();
            if (cVar2 == '\0') {
                iVar3 = AdjustRotation(this_00, param_8, param_7);
                iVar4 = AdjustShape(this_00, param_7);
                uVar1 = RShapes(this, iVar4 + -1, iVar3);
                (**(code**)(param_9->field_0 + 48))(param_9, param_1, param_2, param_5, param_6, param_3,
                                                    CONCAT44(in_register_00000084, param_4), uVar1, field_0, 1);
            }
        }
    }

    // 0x10020d990, 48 bytes, placed by class name and debug map
    // OverlayShapes::AdjustRotation(int, int)
    uint OverlayShapes::AdjustRotation(int param_1, int param_2) {
        uint uVar1;
        uint uVar2;

        uVar1 = param_1 + 1U & 3;
        if (param_2 != 9) {
            uVar1 = param_1;
        }
        uVar2 = uVar1 - 1 & 3;
        if (param_2 != 10) {
            uVar2 = uVar1;
        }
        uVar1 = uVar2 - 1 & 3;
        if (param_2 != 11) {
            uVar1 = uVar2;
        }
        return uVar1;
    }

    // 0x10020d9c0, 32 bytes, placed by class name and debug map
    // OverlayShapes::AdjustShape(int)
    int OverlayShapes::AdjustShape(int param_1) {
        int iVar1;
        int iVar2;

        iVar2 = 8;
        if (param_1 != 11) {
            iVar2 = param_1;
        }
        iVar1 = 1;
        if (1 < param_1 - 9U) {
            iVar1 = iVar2;
        }
        return iVar1;
    }

    // 0x10020da00, 128 bytes, placed by class name and debug map
    // OverlayShapes::CalcOverlayShapes()
    void OverlayShapes::CalcOverlayShapes() {
        char cVar1;

        cVar1 = (&field_8)->empty();
        if (cVar1 != '\0') {
            (&field_8, 32, 3)->set_max_size();
            CalculateShape1(this);
            CalculateShape2(this);
            CalculateShape4(this);
            CalculateShape5(this);
            CalculateShape6(this);
            CalculateShape7(this);
            CalculateShape3(this);
            CalculateShape8(this);
        }
    }

    // 0x10020da80, 560 bytes, placed by class name and debug map
    // OverlayShapes::CalculateShape1()
    void OverlayShapes::CalculateShape1() {
        bool bVar1;
        int iVar2;
        int iVar3;
        Array<unsigned char, eastl::allocator>* pAVar4;
        undefined1* puVar5;
        long lVar6;
        uint uVar7;

        iVar2 = 0;
        pAVar4 = (Array<unsigned char, eastl::allocator>*)RShapes(this, 0, 0);
        pAVar4->set_max_size((ulong)(uint)(field_0 * field_0), 3);
        if (0 < field_0) {
            uVar7 = 0;
            do {
                if (0 < field_0) {
                    lVar6 = 0;
                    do {
                        if ((uint)lVar6 <= uVar7) {
                            puVar5 =
                                (undefined1*)Array<unsigned char, eastl::allocator>::operator[](pAVar4, iVar2 + lVar6);
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
        pAVar4 = (Array<unsigned char, eastl::allocator>*)RShapes(this, 0, 1);
        pAVar4->set_max_size((ulong)(uint)(field_0 * field_0), 3);
        iVar2 = field_0;
        if (0 < field_0) {
            do {
                if (0 < field_0) {
                    lVar6 = 0;
                    do {
                        if ((int)lVar6 < iVar2) {
                            puVar5 =
                                (undefined1*)Array<unsigned char, eastl::allocator>::operator[](pAVar4, iVar3 + lVar6);
                            *puVar5 = 255;
                        }
                        lVar6 = lVar6 + 1;
                    } while ((int)lVar6 < field_0);
                    iVar3 = iVar3 + (int)lVar6;
                }
                bVar1 = 1 < iVar2;
                iVar2 = iVar2 + -1;
            } while (bVar1);
        }
        uVar7 = 0;
        pAVar4 = (Array<unsigned char, eastl::allocator>*)RShapes(this, 0, 2);
        pAVar4->set_max_size((ulong)(uint)(field_0 * field_0), 3);
        if (0 < field_0) {
            iVar2 = 0;
            do {
                if (0 < field_0) {
                    lVar6 = 0;
                    do {
                        if (uVar7 <= (uint)lVar6) {
                            puVar5 =
                                (undefined1*)Array<unsigned char, eastl::allocator>::operator[](pAVar4, iVar2 + lVar6);
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
        pAVar4 = (Array<unsigned char, eastl::allocator>*)RShapes(this, 0, 3);
        pAVar4->set_max_size((ulong)(uint)(field_0 * field_0), 3);
        iVar2 = field_0;
        if (0 < field_0) {
            do {
                if (0 < field_0) {
                    lVar6 = 0;
                    do {
                        if (iVar2 + -1 <= (int)lVar6) {
                            puVar5 =
                                (undefined1*)Array<unsigned char, eastl::allocator>::operator[](pAVar4, lVar6 + iVar3);
                            *puVar5 = 255;
                        }
                        lVar6 = lVar6 + 1;
                    } while ((int)lVar6 < field_0);
                    iVar3 = iVar3 + (int)lVar6;
                }
                bVar1 = 1 < iVar2;
                iVar2 = iVar2 + -1;
            } while (bVar1);
        }
    }

    // 0x10020dcb0, 608 bytes, placed by class name and debug map
    // OverlayShapes::CalculateShape2()
    void OverlayShapes::CalculateShape2() {
        int iVar1;
        bool bVar2;
        int iVar3;
        Array<unsigned char, eastl::allocator>* pAVar4;
        undefined1* puVar5;
        ulong uVar6;
        uint uVar7;
        int iVar8;
        long lVar9;
        long lVar10;

        pAVar4 = (Array<unsigned char, eastl::allocator>*)RShapes(this, 1, 0);
        pAVar4->set_max_size((ulong)(uint)(field_0 * field_0), 3);
        if (0 < field_0) {
            lVar9 = 0;
            iVar3 = field_0;
            do {
                if (0 < field_0) {
                    lVar10 = 0;
                    do {
                        if ((int)lVar10 <= iVar3 + -1 >> 1) {
                            puVar5 =
                                (undefined1*)Array<unsigned char, eastl::allocator>::operator[](pAVar4, lVar9 + lVar10);
                            *puVar5 = 255;
                        }
                        lVar10 = lVar10 + 1;
                    } while ((int)lVar10 < field_0);
                    lVar9 = lVar9 + lVar10;
                }
                bVar2 = 1 < iVar3;
                iVar3 = iVar3 + -1;
            } while (bVar2);
        }
        pAVar4 = (Array<unsigned char, eastl::allocator>*)RShapes(this, 1, 1);
        pAVar4->set_max_size((ulong)(uint)(field_0 * field_0), 3);
        if (0 < field_0) {
            iVar3 = 0;
            lVar9 = 0;
            do {
                if (0 < field_0) {
                    lVar10 = 0;
                    do {
                        uVar6 = pAVar4->end();
                        if (((ulong)(lVar10 + lVar9) < uVar6) && (iVar3 * 2 <= (int)lVar10)) {
                            puVar5 =
                                (undefined1*)Array<unsigned char, eastl::allocator>::operator[](pAVar4, lVar10 + lVar9);
                            *puVar5 = 255;
                        }
                        lVar10 = lVar10 + 1;
                    } while ((int)lVar10 < field_0);
                    lVar9 = lVar9 + lVar10;
                }
                iVar3 = iVar3 + 1;
            } while (iVar3 < field_0);
        }
        pAVar4 = (Array<unsigned char, eastl::allocator>*)RShapes(this, 1, 2);
        pAVar4->set_max_size((ulong)(uint)(field_0 * field_0), 3);
        iVar3 = field_0;
        if (0 < iVar3) {
            uVar7 = 0;
            uVar6 = 0;
            do {
                if (0 < iVar3) {
                    do {
                        iVar3 = iVar3 + -1;
                        if (iVar3 <= (int)(uVar7 >> 1)) {
                            puVar5 = (undefined1*)Array<unsigned char, eastl::allocator>::operator[](pAVar4, uVar6);
                            *puVar5 = 255;
                        }
                        uVar6 = uVar6 + 1;
                    } while (iVar3 != 0);
                }
                uVar7 = uVar7 + 1;
                iVar3 = field_0;
            } while ((int)uVar7 < iVar3);
        }
        pAVar4 = (Array<unsigned char, eastl::allocator>*)RShapes(this, 1, 3);
        pAVar4->set_max_size((ulong)(uint)(field_0 * field_0), 3);
        if (0 < field_0) {
            uVar6 = 0;
            iVar3 = field_0;
            do {
                if (0 < field_0) {
                    iVar8 = field_0;
                    do {
                        iVar1 = iVar8 + -1;
                        if (iVar3 * 2 + -2 < iVar8) {
                            puVar5 = (undefined1*)Array<unsigned char, eastl::allocator>::operator[](pAVar4, uVar6);
                            *puVar5 = 255;
                        }
                        uVar6 = uVar6 + 1;
                        iVar8 = iVar1;
                    } while (iVar1 != 0);
                }
                bVar2 = 1 < iVar3;
                iVar3 = iVar3 + -1;
            } while (bVar2);
        }
    }

    // 0x10020df10, 624 bytes, placed by class name and debug map
    // OverlayShapes::CalculateShape4()
    void OverlayShapes::CalculateShape4() {
        bool bVar1;
        int iVar2;
        Array<unsigned char, eastl::allocator>* pAVar3;
        undefined1* puVar4;
        int iVar5;
        long lVar6;
        ulong uVar7;
        uint uVar8;

        iVar5 = 0;
        pAVar3 = (Array<unsigned char, eastl::allocator>*)RShapes(this, 3, 0);
        pAVar3->set_max_size((ulong)(uint)(field_0 * field_0), 3);
        iVar2 = field_0;
        if (0 < field_0) {
            do {
                if (0 < field_0) {
                    lVar6 = 0;
                    do {
                        if (iVar2 + -1 >> 1 <= (int)lVar6) {
                            puVar4 =
                                (undefined1*)Array<unsigned char, eastl::allocator>::operator[](pAVar3, iVar5 + lVar6);
                            *puVar4 = 255;
                        }
                        lVar6 = lVar6 + 1;
                    } while ((int)lVar6 < field_0);
                    iVar5 = iVar5 + (int)lVar6;
                }
                bVar1 = 1 < iVar2;
                iVar2 = iVar2 + -1;
            } while (bVar1);
        }
        pAVar3 = (Array<unsigned char, eastl::allocator>*)RShapes(this, 3, 1);
        pAVar3->set_max_size((ulong)(uint)(field_0 * field_0), 3);
        if (0 < field_0) {
            iVar2 = 0;
            iVar5 = 0;
            do {
                if (0 < field_0) {
                    lVar6 = 0;
                    do {
                        if ((int)lVar6 <= iVar2 * 2) {
                            puVar4 =
                                (undefined1*)Array<unsigned char, eastl::allocator>::operator[](pAVar3, lVar6 + iVar5);
                            *puVar4 = 255;
                        }
                        lVar6 = lVar6 + 1;
                    } while ((int)lVar6 < field_0);
                    iVar5 = iVar5 + (int)lVar6;
                }
                iVar2 = iVar2 + 1;
            } while (iVar2 < field_0);
        }
        pAVar3 = (Array<unsigned char, eastl::allocator>*)RShapes(this, 3, 2);
        pAVar3->set_max_size((ulong)(uint)(field_0 * field_0), 3);
        iVar2 = field_0;
        if (0 < iVar2) {
            uVar8 = 0;
            uVar7 = 0;
            do {
                if (0 < iVar2) {
                    uVar7 = (ulong)(int)uVar7;
                    do {
                        if ((int)(uVar8 >> 1) < iVar2) {
                            puVar4 = (undefined1*)Array<unsigned char, eastl::allocator>::operator[](pAVar3, uVar7);
                            *puVar4 = 255;
                        }
                        uVar7 = uVar7 + 1;
                        bVar1 = 1 < iVar2;
                        iVar2 = iVar2 + -1;
                    } while (bVar1);
                }
                uVar8 = uVar8 + 1;
                iVar2 = field_0;
            } while ((int)uVar8 < iVar2);
        }
        pAVar3 = (Array<unsigned char, eastl::allocator>*)RShapes(this, 3, 3);
        pAVar3->set_max_size((ulong)(uint)(field_0 * field_0), 3);
        if (0 < field_0) {
            uVar7 = 0;
            iVar2 = field_0;
            do {
                if (0 < field_0) {
                    uVar7 = (ulong)(int)uVar7;
                    iVar5 = field_0 + 1;
                    do {
                        if (iVar5 + -2 <= iVar2 * 2 + -2) {
                            puVar4 = (undefined1*)Array<unsigned char, eastl::allocator>::operator[](pAVar3, uVar7);
                            *puVar4 = 255;
                        }
                        uVar7 = uVar7 + 1;
                        iVar5 = iVar5 + -1;
                    } while (1 < iVar5);
                }
                bVar1 = 1 < iVar2;
                iVar2 = iVar2 + -1;
            } while (bVar1);
        }
    }

    // 0x10020e180, 640 bytes, placed by class name and debug map
    // OverlayShapes::CalculateShape5()
    void OverlayShapes::CalculateShape5() {
        bool bVar1;
        uint uVar2;
        Array<unsigned char, eastl::allocator>* pAVar3;
        undefined1* puVar4;
        int iVar5;
        int iVar6;
        long lVar7;
        ulong uVar8;

        uVar8 = 0;
        pAVar3 = (Array<unsigned char, eastl::allocator>*)RShapes(this, 4, 0);
        pAVar3->set_max_size((ulong)(uint)(field_0 * field_0), 3);
        iVar5 = field_0;
        if (0 < field_0) {
            do {
                if (0 < field_0) {
                    uVar8 = (ulong)(int)uVar8;
                    iVar6 = field_0;
                    do {
                        if (iVar5 + -1 >> 1 < iVar6) {
                            puVar4 = (undefined1*)Array<unsigned char, eastl::allocator>::operator[](pAVar3, uVar8);
                            *puVar4 = 255;
                        }
                        uVar8 = uVar8 + 1;
                        bVar1 = 1 < iVar6;
                        iVar6 = iVar6 + -1;
                    } while (bVar1);
                }
                bVar1 = 1 < iVar5;
                iVar5 = iVar5 + -1;
            } while (bVar1);
        }
        pAVar3 = (Array<unsigned char, eastl::allocator>*)RShapes(this, 4, 1);
        pAVar3->set_max_size((ulong)(uint)(field_0 * field_0), 3);
        if (0 < field_0) {
            iVar6 = 0;
            iVar5 = field_0;
            do {
                if (0 < field_0) {
                    lVar7 = 0;
                    do {
                        if ((int)lVar7 <= iVar5 * 2 + -2) {
                            puVar4 =
                                (undefined1*)Array<unsigned char, eastl::allocator>::operator[](pAVar3, iVar6 + lVar7);
                            *puVar4 = 255;
                        }
                        lVar7 = lVar7 + 1;
                    } while ((int)lVar7 < field_0);
                    iVar6 = iVar6 + (int)lVar7;
                }
                bVar1 = 1 < iVar5;
                iVar5 = iVar5 + -1;
            } while (bVar1);
        }
        pAVar3 = (Array<unsigned char, eastl::allocator>*)RShapes(this, 4, 2);
        pAVar3->set_max_size((ulong)(uint)(field_0 * field_0), 3);
        if (0 < field_0) {
            uVar2 = 0;
            iVar5 = 0;
            do {
                if (0 < field_0) {
                    lVar7 = 0;
                    do {
                        if (uVar2 >> 1 <= (uint)lVar7) {
                            puVar4 =
                                (undefined1*)Array<unsigned char, eastl::allocator>::operator[](pAVar3, iVar5 + lVar7);
                            *puVar4 = 255;
                        }
                        lVar7 = lVar7 + 1;
                    } while ((int)lVar7 < field_0);
                    iVar5 = iVar5 + (int)lVar7;
                }
                uVar2 = uVar2 + 1;
            } while ((int)uVar2 < field_0);
        }
        pAVar3 = (Array<unsigned char, eastl::allocator>*)RShapes(this, 4, 3);
        pAVar3->set_max_size((ulong)(uint)(field_0 * field_0), 3);
        iVar5 = field_0;
        if (0 < iVar5) {
            iVar6 = 0;
            uVar8 = 0;
            do {
                if (0 < iVar5) {
                    uVar8 = (ulong)(int)uVar8;
                    iVar5 = iVar5 + 1;
                    do {
                        if (iVar5 + -2 <= iVar6 * 2) {
                            puVar4 = (undefined1*)Array<unsigned char, eastl::allocator>::operator[](pAVar3, uVar8);
                            *puVar4 = 255;
                        }
                        uVar8 = uVar8 + 1;
                        iVar5 = iVar5 + -1;
                    } while (1 < iVar5);
                }
                iVar6 = iVar6 + 1;
                iVar5 = field_0;
            } while (iVar6 < iVar5);
        }
    }

    // 0x10020e400, 672 bytes, placed by class name and debug map
    // OverlayShapes::CalculateShape6()
    void OverlayShapes::CalculateShape6() {
        int iVar1;
        int iVar2;
        Array<unsigned char, eastl::allocator>* pAVar3;
        undefined1* puVar4;
        long lVar5;
        int iVar6;

        iVar1 = 0;
        pAVar3 = (Array<unsigned char, eastl::allocator>*)RShapes(this, 5, 0);
        pAVar3->set_max_size((ulong)(uint)(field_0 * field_0), 3);
        if (0 < field_0) {
            iVar6 = 0;
            do {
                iVar2 = field_0;
                if (0 < iVar2) {
                    lVar5 = 0;
                    do {
                        if ((int)lVar5 <= iVar2 / 2) {
                            puVar4 =
                                (undefined1*)Array<unsigned char, eastl::allocator>::operator[](pAVar3, iVar1 + lVar5);
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
        pAVar3 = (Array<unsigned char, eastl::allocator>*)RShapes(this, 5, 1);
        pAVar3->set_max_size((ulong)(uint)(field_0 * field_0), 3);
        if (0 < field_0) {
            iVar6 = 0;
            iVar1 = 0;
            do {
                iVar2 = field_0;
                if (0 < iVar2) {
                    lVar5 = 0;
                    do {
                        if (iVar6 <= iVar2 / 2) {
                            puVar4 =
                                (undefined1*)Array<unsigned char, eastl::allocator>::operator[](pAVar3, iVar1 + lVar5);
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
        pAVar3 = (Array<unsigned char, eastl::allocator>*)RShapes(this, 5, 2);
        pAVar3->set_max_size((ulong)(uint)(field_0 * field_0), 3);
        if (0 < field_0) {
            iVar6 = 0;
            iVar1 = 0;
            do {
                iVar2 = field_0;
                if (0 < iVar2) {
                    lVar5 = 0;
                    do {
                        if (iVar2 / 2 <= (int)lVar5) {
                            puVar4 =
                                (undefined1*)Array<unsigned char, eastl::allocator>::operator[](pAVar3, lVar5 + iVar1);
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
        pAVar3 = (Array<unsigned char, eastl::allocator>*)RShapes(this, 5, 3);
        pAVar3->set_max_size((ulong)(uint)(field_0 * field_0), 3);
        if (0 < field_0) {
            iVar6 = 0;
            iVar1 = 0;
            do {
                iVar2 = field_0;
                if (0 < iVar2) {
                    lVar5 = 0;
                    do {
                        if (iVar2 / 2 <= iVar6) {
                            puVar4 =
                                (undefined1*)Array<unsigned char, eastl::allocator>::operator[](pAVar3, iVar1 + lVar5);
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

    // 0x10020e6a0, 672 bytes, placed by class name and debug map
    // OverlayShapes::CalculateShape7()
    void OverlayShapes::CalculateShape7() {
        bool bVar1;
        int iVar2;
        int iVar3;
        Array<unsigned char, eastl::allocator>* pAVar4;
        undefined1* puVar5;
        long lVar6;
        ulong uVar7;
        int iVar8;

        iVar2 = 0;
        pAVar4 = (Array<unsigned char, eastl::allocator>*)RShapes(this, 6, 0);
        pAVar4->set_max_size((ulong)(uint)(field_0 * field_0), 3);
        if (0 < field_0) {
            iVar8 = 0;
            do {
                iVar3 = field_0;
                if (0 < iVar3) {
                    lVar6 = 0;
                    do {
                        if ((int)lVar6 <= iVar8 - iVar3 / 2) {
                            puVar5 =
                                (undefined1*)Array<unsigned char, eastl::allocator>::operator[](pAVar4, iVar2 + lVar6);
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
        pAVar4 = (Array<unsigned char, eastl::allocator>*)RShapes(this, 6, 1);
        pAVar4->set_max_size((ulong)(uint)(field_0 * field_0), 3);
        if (0 < field_0) {
            iVar8 = 0;
            iVar2 = field_0;
            do {
                iVar3 = field_0;
                if (0 < iVar3) {
                    lVar6 = 0;
                    do {
                        if ((int)lVar6 <= (iVar2 + -1) - iVar3 / 2) {
                            puVar5 =
                                (undefined1*)Array<unsigned char, eastl::allocator>::operator[](pAVar4, lVar6 + iVar8);
                            *puVar5 = 255;
                        }
                        iVar3 = field_0;
                        lVar6 = lVar6 + 1;
                    } while ((int)lVar6 < iVar3);
                    iVar8 = iVar8 + (int)lVar6;
                }
                bVar1 = 1 < iVar2;
                iVar2 = iVar2 + -1;
            } while (bVar1);
        }
        pAVar4 = (Array<unsigned char, eastl::allocator>*)RShapes(this, 6, 2);
        pAVar4->set_max_size((ulong)(uint)(field_0 * field_0), 3);
        if (0 < field_0) {
            uVar7 = 0;
            iVar2 = field_0;
            do {
                if (0 < field_0) {
                    uVar7 = (ulong)(int)uVar7;
                    iVar8 = field_0 + 1;
                    do {
                        if (iVar8 + -2 <= (iVar2 + -1) - field_0 / 2) {
                            puVar5 = (undefined1*)Array<unsigned char, eastl::allocator>::operator[](pAVar4, uVar7);
                            *puVar5 = 255;
                        }
                        uVar7 = uVar7 + 1;
                        iVar8 = iVar8 + -1;
                    } while (1 < iVar8);
                }
                bVar1 = 1 < iVar2;
                iVar2 = iVar2 + -1;
            } while (bVar1);
        }
        pAVar4 = (Array<unsigned char, eastl::allocator>*)RShapes(this, 6, 3);
        pAVar4->set_max_size((ulong)(uint)(field_0 * field_0), 3);
        iVar2 = field_0;
        if (0 < iVar2) {
            iVar8 = 0;
            uVar7 = 0;
            do {
                if (0 < iVar2) {
                    uVar7 = (ulong)(int)uVar7;
                    iVar2 = iVar2 + 1;
                    do {
                        if (iVar2 + -2 <= iVar8 - field_0 / 2) {
                            puVar5 = (undefined1*)Array<unsigned char, eastl::allocator>::operator[](pAVar4, uVar7);
                            *puVar5 = 255;
                        }
                        uVar7 = uVar7 + 1;
                        iVar2 = iVar2 + -1;
                    } while (1 < iVar2);
                }
                iVar8 = iVar8 + 1;
                iVar2 = field_0;
            } while (iVar8 < iVar2);
        }
    }

    // 0x10020e940, 640 bytes, placed by class name and debug map
    // OverlayShapes::CalculateShape3()
    void OverlayShapes::CalculateShape3() {
        bool bVar1;
        uint uVar2;
        Array<unsigned char, eastl::allocator>* pAVar3;
        undefined1* puVar4;
        int iVar5;
        int iVar6;
        long lVar7;
        ulong uVar8;

        uVar8 = 0;
        pAVar3 = (Array<unsigned char, eastl::allocator>*)RShapes(this, 2, 0);
        pAVar3->set_max_size((ulong)(uint)(field_0 * field_0), 3);
        iVar5 = field_0;
        if (0 < field_0) {
            do {
                if (0 < field_0) {
                    uVar8 = (ulong)(int)uVar8;
                    iVar6 = field_0 + 1;
                    do {
                        if (iVar6 + -2 <= iVar5 + -1 >> 1) {
                            puVar4 = (undefined1*)Array<unsigned char, eastl::allocator>::operator[](pAVar3, uVar8);
                            *puVar4 = 255;
                        }
                        uVar8 = uVar8 + 1;
                        iVar6 = iVar6 + -1;
                    } while (1 < iVar6);
                }
                bVar1 = 1 < iVar5;
                iVar5 = iVar5 + -1;
            } while (bVar1);
        }
        pAVar3 = (Array<unsigned char, eastl::allocator>*)RShapes(this, 2, 1);
        pAVar3->set_max_size((ulong)(uint)(field_0 * field_0), 3);
        if (0 < field_0) {
            iVar6 = 0;
            iVar5 = field_0;
            do {
                if (0 < field_0) {
                    lVar7 = 0;
                    do {
                        if (iVar5 * 2 + -2 <= (int)lVar7) {
                            puVar4 =
                                (undefined1*)Array<unsigned char, eastl::allocator>::operator[](pAVar3, iVar6 + lVar7);
                            *puVar4 = 255;
                        }
                        lVar7 = lVar7 + 1;
                    } while ((int)lVar7 < field_0);
                    iVar6 = iVar6 + (int)lVar7;
                }
                bVar1 = 1 < iVar5;
                iVar5 = iVar5 + -1;
            } while (bVar1);
        }
        pAVar3 = (Array<unsigned char, eastl::allocator>*)RShapes(this, 2, 2);
        pAVar3->set_max_size((ulong)(uint)(field_0 * field_0), 3);
        if (0 < field_0) {
            uVar2 = 0;
            iVar5 = 0;
            do {
                if (0 < field_0) {
                    lVar7 = 0;
                    do {
                        if ((uint)lVar7 <= uVar2 >> 1) {
                            puVar4 =
                                (undefined1*)Array<unsigned char, eastl::allocator>::operator[](pAVar3, iVar5 + lVar7);
                            *puVar4 = 255;
                        }
                        lVar7 = lVar7 + 1;
                    } while ((int)lVar7 < field_0);
                    iVar5 = iVar5 + (int)lVar7;
                }
                uVar2 = uVar2 + 1;
            } while ((int)uVar2 < field_0);
        }
        pAVar3 = (Array<unsigned char, eastl::allocator>*)RShapes(this, 2, 3);
        pAVar3->set_max_size((ulong)(uint)(field_0 * field_0), 3);
        iVar5 = field_0;
        if (0 < iVar5) {
            iVar6 = 0;
            uVar8 = 0;
            do {
                if (0 < iVar5) {
                    uVar8 = (ulong)(int)uVar8;
                    do {
                        if (iVar6 * 2 < iVar5) {
                            puVar4 = (undefined1*)Array<unsigned char, eastl::allocator>::operator[](pAVar3, uVar8);
                            *puVar4 = 255;
                        }
                        uVar8 = uVar8 + 1;
                        bVar1 = 1 < iVar5;
                        iVar5 = iVar5 + -1;
                    } while (bVar1);
                }
                iVar6 = iVar6 + 1;
                iVar5 = field_0;
            } while (iVar6 < iVar5);
        }
    }

    // 0x10020ebc0, 672 bytes, placed by class name and debug map
    // OverlayShapes::CalculateShape8()
    void OverlayShapes::CalculateShape8() {
        bool bVar1;
        int iVar2;
        int iVar3;
        Array<unsigned char, eastl::allocator>* pAVar4;
        undefined1* puVar5;
        long lVar6;
        ulong uVar7;
        int iVar8;

        iVar2 = 0;
        pAVar4 = (Array<unsigned char, eastl::allocator>*)RShapes(this, 7, 0);
        pAVar4->set_max_size((ulong)(uint)(field_0 * field_0), 3);
        if (0 < field_0) {
            iVar8 = 0;
            do {
                iVar3 = field_0;
                if (0 < iVar3) {
                    lVar6 = 0;
                    do {
                        if (iVar8 - iVar3 / 2 <= (int)lVar6) {
                            puVar5 =
                                (undefined1*)Array<unsigned char, eastl::allocator>::operator[](pAVar4, iVar2 + lVar6);
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
        pAVar4 = (Array<unsigned char, eastl::allocator>*)RShapes(this, 7, 1);
        pAVar4->set_max_size((ulong)(uint)(field_0 * field_0), 3);
        if (0 < field_0) {
            iVar8 = 0;
            iVar2 = field_0;
            do {
                iVar3 = field_0;
                if (0 < iVar3) {
                    lVar6 = 0;
                    do {
                        if ((iVar2 + -1) - iVar3 / 2 <= (int)lVar6) {
                            puVar5 =
                                (undefined1*)Array<unsigned char, eastl::allocator>::operator[](pAVar4, lVar6 + iVar8);
                            *puVar5 = 255;
                        }
                        iVar3 = field_0;
                        lVar6 = lVar6 + 1;
                    } while ((int)lVar6 < iVar3);
                    iVar8 = iVar8 + (int)lVar6;
                }
                bVar1 = 1 < iVar2;
                iVar2 = iVar2 + -1;
            } while (bVar1);
        }
        pAVar4 = (Array<unsigned char, eastl::allocator>*)RShapes(this, 7, 2);
        pAVar4->set_max_size((ulong)(uint)(field_0 * field_0), 3);
        if (0 < field_0) {
            uVar7 = 0;
            iVar2 = field_0;
            do {
                if (0 < field_0) {
                    uVar7 = (ulong)(int)uVar7;
                    iVar8 = field_0;
                    do {
                        if ((iVar2 + -1) - field_0 / 2 < iVar8) {
                            puVar5 = (undefined1*)Array<unsigned char, eastl::allocator>::operator[](pAVar4, uVar7);
                            *puVar5 = 255;
                        }
                        uVar7 = uVar7 + 1;
                        bVar1 = 1 < iVar8;
                        iVar8 = iVar8 + -1;
                    } while (bVar1);
                }
                bVar1 = 1 < iVar2;
                iVar2 = iVar2 + -1;
            } while (bVar1);
        }
        pAVar4 = (Array<unsigned char, eastl::allocator>*)RShapes(this, 7, 3);
        pAVar4->set_max_size((ulong)(uint)(field_0 * field_0), 3);
        iVar2 = field_0;
        if (0 < iVar2) {
            iVar8 = 0;
            uVar7 = 0;
            do {
                if (0 < iVar2) {
                    uVar7 = (ulong)(int)uVar7;
                    do {
                        if (iVar8 - field_0 / 2 < iVar2) {
                            puVar5 = (undefined1*)Array<unsigned char, eastl::allocator>::operator[](pAVar4, uVar7);
                            *puVar5 = 255;
                        }
                        uVar7 = uVar7 + 1;
                        bVar1 = 1 < iVar2;
                        iVar2 = iVar2 + -1;
                    } while (bVar1);
                }
                iVar8 = iVar8 + 1;
                iVar2 = field_0;
            } while (iVar8 < iVar2);
        }
    }

} // namespace jag::oldscape::rs2lib::worldmap

namespace jag {
    // 0x1002118a0, 176 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<oldscape::graphics::Pix32>::type make_shared<oldscape::graphics::Pix32, int, int>(int&&, int&&)
    /* shared_ptr_if_not_array<oldscape::graphics::Pix32>::type
   make_shared<oldscape::graphics::Pix32, int&, int&>(int&, int&) */

    jag* make_shared<oldscape::graphics::Pix32, int&, int&>(int* param_1, int* param_2) {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_3c;
        Pix32* local_38[2];

        pvVar1 = (void*)aligned_alloc(80, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_38[0] =
                placement_new<oldscape::graphics::Pix32, int&, int&>((void*)((long)pvVar1 + 32), param_1, param_2);
            local_3c = 1;
            prVar2 = placement_new<ref_counter_shared<oldscape::graphics::Pix32>, int, oldscape::graphics::Pix32*&>(
                pvVar1, &local_3c, local_38);
            prVar2->~AutoSingleton(local_38[0]);
            prVar2->~AutoSingleton(local_38[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_38[0]);
        }
        return this;
    }

} // namespace jag
