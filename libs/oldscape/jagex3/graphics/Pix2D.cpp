// libs/oldscape/jagex3/graphics/Pix2D.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.oldscape.jagex3

#include "Pix2D.h"

namespace jag::oldscape::graphics {
    // 0x10031b800
    void Pix2D::SetPixels(SharedArray<unsigned int>& sharedArray, int arg2, int arg3) {
        field_32.ref_assign(sharedArray);
        field_8 = arg2;
        field_12 = arg3;
        ResetClipping();
    }

    // 0x10031b9d0
    Pix2D::Pix2D(SharedArray<unsigned int>& sharedArray, int arg2, int arg3) {
        field_0 = PTR_vtable_100ee8c58 + 16;
        field_16 = 0;
        field_20 = 0;
        field_24 = 0;
        field_28 = 0;
        new (&field_32) SharedArray();
        SetPixels(sharedArray, arg2, arg3);
    }

    // 0x10031ba40
    void Pix2D::ResetClipping() {
        field_24 = 0;
        field_16 = 0;
        field_28 = field_8;
        field_20 = field_12;
    }

    // 0x10031ba60
    void Pix2D::SetClipping(int arg1, int arg2, int arg3, int arg4) {
        if (field_8 < arg3) {
            arg3 = field_8;
        }
        if (field_12 < arg4) {
            arg4 = field_12;
        }
        if (arg2 < 0) {
            arg2 = 0;
        }
        int iVar1 = 0;
        if (-1 < arg1) {
            iVar1 = arg1;
        }
        field_24 = iVar1;
        field_16 = arg2;
        field_28 = arg3;
        field_20 = arg4;
    }

    // 0x10031baa0
    void Pix2D::SetSubClipping(int arg1, int arg2, int arg3, int arg4) {
        int iVar1;

        if (field_24 < arg1) {
            field_24 = arg1;
            iVar1 = field_16;
        } else {
            iVar1 = field_16;
        }
        if (iVar1 < arg2) {
            field_16 = arg2;
            iVar1 = field_28;
        } else {
            iVar1 = field_28;
        }
        if (arg3 < iVar1) {
            field_28 = arg3;
            iVar1 = field_20;
        } else {
            iVar1 = field_20;
        }
        if (arg4 < iVar1) {
            field_20 = arg4;
            return;
        }
    }

    // 0x10031bae0
    void Pix2D::SaveClipping(std::array<int, 4ul>& arg1) {
        int iVar1 = field_24;
        int* piVar2 = &arg1[0];
        *piVar2 = iVar1;
        iVar1 = field_16;
        piVar2 = &arg1[1];
        *piVar2 = iVar1;
        iVar1 = field_28;
        piVar2 = &arg1[2];
        *piVar2 = iVar1;
        iVar1 = field_20;
        piVar2 = &arg1[3];
        *piVar2 = iVar1;
    }

    // 0x10031bb60
    void Pix2D::RestoreClipping(std::array<int, 4ul>& arg1) {
        int* piVar1 = &arg1[0];
        field_24 = *piVar1;
        piVar1 = &arg1[1];
        field_16 = *piVar1;
        piVar1 = &arg1[2];
        field_28 = *piVar1;
        piVar1 = &arg1[3];
        field_20 = *piVar1;
    }

    // 0x10031bbc0
    void Pix2D::SetPixel(int arg1, int arg2, unsigned int arg3) {
        unsigned int* puVar1;

        if ((((field_24 <= arg1) && (field_16 <= arg2)) && (arg1 < field_28)) && (arg2 < field_20)) {
            puVar1 = &field_32[(long)(arg2 * field_8 + arg1)];
            *puVar1 = arg3;
        }
    }

    // 0x10031bc00
    void Pix2D::FillRectVGrad(int arg1, int arg2, int arg3, int arg4, unsigned int arg5, unsigned int arg6) {
        int iVar1;
        int iVar2;
        int iVar3;
        bool bVar4;
        unsigned int uVar5;
        unsigned int* puVar6;
        unsigned int uVar7;
        int iVar8;
        uint32_t in_register_0000003c;
        int iVar10;
        int iVar11;
        int iVar12;
        int iVar13;
        int iVar14;
        unsigned int uVar15;
        unsigned long arg1_00;
        unsigned long uVar16;
        unsigned int uVar17;
        unsigned int in_stack_00000008;

        long lVar9 = (((uint64_t)in_register_0000003c << 32) | (uint32_t)arg1);
        if ((0 < arg4) && (0 < (int)arg5)) {
            iVar1 = *(int*)(lVar9 + 24);
            iVar8 = arg2 - iVar1;
            if (arg2 < iVar1) {
                iVar13 = iVar1;
            } else {
                iVar8 = 0;
                iVar13 = arg2;
            }
            iVar2 = *(int*)(lVar9 + 16);
            iVar11 = iVar2 - arg3;
            iVar14 = arg3;
            iVar3 = 0;
            if (iVar11 != 0 && arg3 <= iVar2) {
                iVar14 = iVar2;
                iVar3 = iVar11;
            }
            uVar5 = *(unsigned int*)(lVar9 + 28);
            iVar12 = uVar5 - iVar13;
            if (iVar8 + arg4 + iVar13 <= (int)uVar5) {
                iVar12 = iVar8 + arg4;
            }
            iVar8 = *(int*)(lVar9 + 20) - iVar14;
            if ((int)((arg5 - iVar3) + iVar14) <= *(int*)(lVar9 + 20)) {
                iVar8 = arg5 - iVar3;
            }
            if (0 < iVar8) {
                iVar10 = (int)(65536 / (long)(int)arg5);
                iVar3 = *(int*)(lVar9 + 8);
                uVar15 = iVar14 * iVar3 + iVar13;
                uVar17 = 0;
                if (arg3 < iVar2) {
                    uVar17 = iVar11 * iVar10;
                }
                if (iVar1 < arg2) {
                    arg2 = iVar1;
                }
                uVar7 = (arg4 + arg2 + iVar13) - iVar1;
                if ((int)uVar5 < (int)uVar7) {
                    uVar7 = uVar5;
                }
                iVar1 = -iVar8;
                do {
                    uVar16 = (unsigned long)uVar15;
                    if (-iVar12 < 0) {
                        uVar5 = 65536 - uVar17 >> 8;
                        arg1_00 = (long)(int)uVar15;
                        iVar8 = ~uVar7 + iVar13;
                        do {
                            uVar16 = arg1_00 + 1;
                            puVar6 = (unsigned int*)(*((lVar9 + 32)))[arg1_00];
                            *puVar6 = ((uVar17 >> 8) * (in_stack_00000008 & 65280) + uVar5 * (arg6 & 65280) & 16711680 |
                                       (uVar17 >> 8) * (in_stack_00000008 & 16711935) + uVar5 * (arg6 & 16711935) &
                                           4278255360) >>
                                      8;
                            iVar8 = iVar8 + 1;
                            arg1_00 = uVar16;
                        } while (iVar8 < -1);
                    }
                    uVar15 = (int)uVar16 + (iVar3 - iVar12);
                    uVar17 = uVar17 + iVar10;
                    bVar4 = iVar1 < -1;
                    iVar1 = iVar1 + 1;
                } while (bVar4);
            }
        }
    }

    // 0x10031bdf0
    void Pix2D::DrawRect(int arg1, int arg2, int arg3, int arg4, unsigned int arg5) {
        (**(void (**)(...))(field_0 + 56))();
        (**(void (**)(...))(field_0 + 56))(this, arg1, arg2 + arg4 - 1, arg3, arg5);
        (**(void (**)(...))(field_0 + 72))(this, arg1, arg2, arg4, arg5);
        (**(void (**)(...))(field_0 + 72))(this, arg1 + arg3 - 1, arg2, arg4, arg5);
    }

    // 0x10031be90
    void Pix2D::DrawRectTrans(int arg1, int arg2, int arg3, int arg4, unsigned int arg5, unsigned int arg6) {
        (**(void (**)(...))(field_0 + 64))();
        (**(void (**)(...))(field_0 + 64))(this, arg1, arg4 + arg2 - 1, arg3, arg5, arg6);
        if (2 < arg4) {
            (**(void (**)(...))(field_0 + 80))(this, arg1, arg2 + 1, arg4 - 2, arg5, arg6);
            (**(void (**)(...))(field_0 + 80))(this, arg1 + arg3 - 1, arg2 + 1, arg4 - 2, arg5, arg6);
        }
    }

    // 0x10031bf50
    void Pix2D::FillScanLine(int arg1, int arg2, unsigned int arg3, const Array<int>& arg4, const Array<int>& arg5) {
        unsigned long uVar3;
        int* piVar4;
        unsigned int* puVar5;
        unsigned long arg1_00;
        int iVar6;
        int local_34;

        int iVar1 = field_8;
        if (arg4.end() != 0) {
            local_34 = iVar1 * arg2 + arg1;
            arg1_00 = 0;
            do {
                piVar4 = &arg4[arg1_00];
                iVar1 = *piVar4;
                piVar4 = &arg5[arg1_00];
                iVar6 = *piVar4;
                if (0 < iVar6) {
                    uVar3 = (long)(iVar1 + local_34);
                    do {
                        puVar5 = &field_32[uVar3];
                        *puVar5 = arg3;
                        iVar6 = iVar6 - 1;
                        uVar3 = uVar3 + 1;
                    } while (iVar6 != 0);
                }
                local_34 = local_34 + field_8;
                arg1_00 = arg1_00 + 1;
                uVar3 = arg4.end();
            } while (arg1_00 < uVar3);
        }
    }

    // 0x10031c030
    void Pix2D::PixelPerfectRotateScalePlotSprite(const Pix32& pix32, int arg2, int arg3, int arg4, int arg5) {
        (**(void (**)(...))(field_0 + 280))(this, pix32, pix32.field_40 << 3, pix32.field_44 << 3, arg2 << 4, arg3 << 4,
                                            arg4, arg5);
    }

} // namespace jag::oldscape::graphics
