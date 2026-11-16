// libs/oldscape/jagex3/graphics/Pix2D.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.oldscape.jagex3

#include "Pix2D.h"

namespace jag::oldscape::graphics {
    // 0x10031b800, 64 bytes, placed by class name and debug map
    // Pix2D::SetPixels(SharedArray<unsigned int>&, int, int)
    void Pix2D::SetPixels(SharedArray* param_1, int param_2, int param_3) {
        (&field_32, param_1)->ref_assign();
        field_8 = param_2;
        field_12 = param_3;
        ResetClipping(this);
    }

    // 0x10031b9d0, 112 bytes, base-object constructor, placed by class name and debug map
    // Pix2D::Pix2D(SharedArray<unsigned int>&, int, int)
    void Pix2D::Pix2D(SharedArray* param_1, int param_2, int param_3) {
        field_0 = PTR_vtable_100ee8c58 + 16;
        field_16 = 0;
        field_20 = 0;
        m_subClipping = 0;
        field_28 = 0;
        new (&field_32) SharedArray<unsigned int>();
        SetPixels(this, param_1, param_2, param_3);
    }

    // 0x10031ba40, 32 bytes, placed by class name and debug map
    // Pix2D::ResetClipping()
    void Pix2D::ResetClipping() {
        m_subClipping = 0;
        field_16 = 0;
        field_28 = field_8;
        field_20 = field_12;
    }

    // 0x10031ba60, 64 bytes, placed by class name and debug map
    // Pix2D::SetClipping(int, int, int, int)
    void Pix2D::SetClipping(int param_1, int param_2, int param_3, int param_4) {
        int iVar1;

        if (field_8 < param_3) {
            param_3 = field_8;
        }
        if (field_12 < param_4) {
            param_4 = field_12;
        }
        if (param_2 < 0) {
            param_2 = 0;
        }
        iVar1 = 0;
        if (-1 < param_1) {
            iVar1 = param_1;
        }
        m_subClipping = iVar1;
        field_16 = param_2;
        field_28 = param_3;
        field_20 = param_4;
    }

    // 0x10031baa0, 64 bytes, placed by class name and debug map
    // Pix2D::SetSubClipping(int, int, int, int)
    void Pix2D::SetSubClipping(int param_1, int param_2, int param_3, int param_4) {
        int iVar1;
        uint uVar2;

        if (m_subClipping < param_1) {
            m_subClipping = param_1;
            iVar1 = field_16;
        } else {
            iVar1 = field_16;
        }
        if (iVar1 < param_2) {
            field_16 = param_2;
            uVar2 = field_28;
        } else {
            uVar2 = field_28;
        }
        if (param_3 < (int)uVar2) {
            field_28 = param_3;
            iVar1 = field_20;
        } else {
            iVar1 = field_20;
        }
        if (param_4 < iVar1) {
            field_20 = param_4;
            return;
        }
    }

    // 0x10031bae0, 112 bytes, placed by class name and debug map
    // Pix2D::SaveClipping(std::array<int, 4ul>&)
    /* Pix2D::SaveClipping(std::array<int, 4ul>&) */

    void Pix2D::SaveClipping(array* param_1) {
        int iVar1;
        uint uVar2;
        int* piVar3;
        uint* puVar4;

        iVar1 = m_subClipping;
        piVar3 = (int*)std::array<int, 4ul>::operator[]((array<int, 4ul>*)param_1, 0);
        *piVar3 = iVar1;
        iVar1 = field_16;
        piVar3 = (int*)std::array<int, 4ul>::operator[]((array<int, 4ul>*)param_1, 1);
        *piVar3 = iVar1;
        uVar2 = field_28;
        puVar4 = (uint*)std::array<int, 4ul>::operator[]((array<int, 4ul>*)param_1, 2);
        *puVar4 = uVar2;
        iVar1 = field_20;
        piVar3 = (int*)std::array<int, 4ul>::operator[]((array<int, 4ul>*)param_1, 3);
        *piVar3 = iVar1;
    }

    // 0x10031bb60, 96 bytes, placed by class name and debug map
    // Pix2D::RestoreClipping(std::array<int, 4ul>&)
    /* Pix2D::RestoreClipping(std::array<int, 4ul>&) */

    void Pix2D::RestoreClipping(array* param_1) {
        int* piVar1;
        uint* puVar2;

        piVar1 = (int*)std::array<int, 4ul>::operator[]((array<int, 4ul>*)param_1, 0);
        m_subClipping = *piVar1;
        piVar1 = (int*)std::array<int, 4ul>::operator[]((array<int, 4ul>*)param_1, 1);
        field_16 = *piVar1;
        puVar2 = (uint*)std::array<int, 4ul>::operator[]((array<int, 4ul>*)param_1, 2);
        field_28 = *puVar2;
        piVar1 = (int*)std::array<int, 4ul>::operator[]((array<int, 4ul>*)param_1, 3);
        field_20 = *piVar1;
    }

    // 0x10031bbc0, 64 bytes, placed by class name and debug map
    // Pix2D::SetPixel(int, int, unsigned int)
    void Pix2D::SetPixel(int param_1, int param_2, uint param_3) {
        uint* puVar1;

        if ((((m_subClipping <= param_1) && (field_16 <= param_2)) && (param_1 < (int)field_28)) &&
            (param_2 < field_20)) {
            puVar1 = (uint*)SharedArray<unsigned int>::operator[]((SharedArray<unsigned int>*)&field_32,
                                                                  (long)(param_2 * field_8 + param_1));
            *puVar1 = param_3;
        }
    }

    // 0x10031bc00, 496 bytes, placed by class name and debug map
    // Pix2D::FillRectVGrad(int, int, int, int, unsigned int, unsigned int)
    void Pix2D::FillRectVGrad(int param_1, int param_2, int param_3, int param_4, uint param_5, uint param_6) {
        int iVar1;
        int iVar2;
        int iVar3;
        bool bVar4;
        uint uVar5;
        uint* puVar6;
        uint uVar7;
        int iVar8;
        int iVar9;
        int iVar10;
        int iVar11;
        int iVar12;
        int iVar13;
        uint uVar14;
        ulong uVar15;
        ulong uVar16;
        uint uVar17;

        if ((0 < param_3) && (0 < param_4)) {
            iVar1 = m_subClipping;
            iVar8 = param_1 - iVar1;
            if (param_1 < iVar1) {
                iVar12 = iVar1;
            } else {
                iVar8 = 0;
                iVar12 = param_1;
            }
            iVar2 = field_16;
            iVar10 = iVar2 - param_2;
            iVar13 = param_2;
            iVar3 = 0;
            if (iVar10 != 0 && param_2 <= iVar2) {
                iVar13 = iVar2;
                iVar3 = iVar10;
            }
            uVar5 = field_28;
            iVar11 = uVar5 - iVar12;
            if (iVar8 + param_3 + iVar12 <= (int)uVar5) {
                iVar11 = iVar8 + param_3;
            }
            iVar8 = field_20 - iVar13;
            if ((param_4 - iVar3) + iVar13 <= field_20) {
                iVar8 = param_4 - iVar3;
            }
            if (0 < iVar8) {
                iVar9 = (int)(65536 / (long)param_4);
                iVar3 = field_8;
                uVar14 = iVar13 * iVar3 + iVar12;
                uVar17 = 0;
                if (param_2 < iVar2) {
                    uVar17 = iVar10 * iVar9;
                }
                if (iVar1 < param_1) {
                    param_1 = iVar1;
                }
                uVar7 = (param_3 + param_1 + iVar12) - iVar1;
                if ((int)uVar5 < (int)uVar7) {
                    uVar7 = uVar5;
                }
                iVar1 = -iVar8;
                do {
                    uVar16 = (ulong)uVar14;
                    if (-iVar11 < 0) {
                        uVar5 = 65536 - uVar17 >> 8;
                        uVar15 = (long)(int)uVar14;
                        iVar8 = ~uVar7 + iVar12;
                        do {
                            uVar16 = uVar15 + 1;
                            puVar6 = (uint*)SharedArray<unsigned int>::operator[]((SharedArray<unsigned int>*)&field_32,
                                                                                  uVar15);
                            *puVar6 =
                                ((uVar17 >> 8) * (param_6 & 65280) + uVar5 * (param_5 & 65280) & 16711680 |
                                 (uVar17 >> 8) * (param_6 & 16711935) + uVar5 * (param_5 & 16711935) & 4278255360) >>
                                8;
                            iVar8 = iVar8 + 1;
                            uVar15 = uVar16;
                        } while (iVar8 < -1);
                    }
                    uVar14 = (int)uVar16 + (iVar3 - iVar11);
                    uVar17 = uVar17 + iVar9;
                    bVar4 = iVar1 < -1;
                    iVar1 = iVar1 + 1;
                } while (bVar4);
            }
        }
    }

    // 0x10031bdf0, 160 bytes, placed by class name and debug map
    // Pix2D::DrawRect(int, int, int, int, unsigned int)
    void Pix2D::DrawRect(int param_1, int param_2, int param_3, int param_4, uint param_5) {
        (**(code**)(field_0 + 56))();
        (**(code**)(field_0 + 56))(this, param_1, param_2 + param_4 + -1, param_3, param_5);
        (**(code**)(field_0 + 72))(this, param_1, param_2, param_4, param_5);
        (**(code**)(field_0 + 72))(this, param_1 + param_3 + -1, param_2, param_4, param_5);
    }

    // 0x10031be90, 192 bytes, placed by class name and debug map
    // Pix2D::DrawRectTrans(int, int, int, int, unsigned int, unsigned int)
    void Pix2D::DrawRectTrans(int param_1, int param_2, int param_3, int param_4, uint param_5, uint param_6) {
        (**(code**)(field_0 + 64))();
        (**(code**)(field_0 + 64))(this, param_1, param_4 + param_2 + -1, param_3, param_5, param_6);
        if (2 < param_4) {
            (**(code**)(field_0 + 80))(this, param_1, param_2 + 1, param_4 + -2, param_5, param_6);
            (**(code**)(field_0 + 80))(this, param_1 + param_3 + -1, param_2 + 1, param_4 + -2, param_5, param_6);
        }
    }

    // 0x10031bf50, 224 bytes, placed by class name and debug map
    // Pix2D::FillScanLine(int, int, unsigned int, Array<int, eastl::allocator> const&, Array<int, eastl::allocator> const&)
    void Pix2D::FillScanLine(int param_1, int param_2, uint param_3, Array* param_4, Array* param_5) {
        int iVar1;
        long lVar2;
        ulong uVar3;
        int* piVar4;
        uint* puVar5;
        ulong uVar6;
        int iVar7;
        int local_34;

        iVar1 = field_8;
        lVar2 = param_4->end();
        if (lVar2 != 0) {
            local_34 = iVar1 * param_2 + param_1;
            uVar6 = 0;
            do {
                piVar4 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)param_4, uVar6);
                iVar1 = *piVar4;
                piVar4 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)param_5, uVar6);
                iVar7 = *piVar4;
                if (0 < iVar7) {
                    uVar3 = (long)(iVar1 + local_34);
                    do {
                        puVar5 =
                            (uint*)SharedArray<unsigned int>::operator[]((SharedArray<unsigned int>*)&field_32, uVar3);
                        *puVar5 = param_3;
                        iVar7 = iVar7 + -1;
                        uVar3 = uVar3 + 1;
                    } while (iVar7 != 0);
                }
                local_34 = local_34 + field_8;
                uVar6 = uVar6 + 1;
                uVar3 = param_4->end();
            } while (uVar6 < uVar3);
        }
    }

    // 0x10031c030, 64 bytes, placed by class name and debug map
    // Pix2D::PixelPerfectRotateScalePlotSprite(Pix32 const&, int, int, int, int)
    void Pix2D::PixelPerfectRotateScalePlotSprite(Pix32* param_1, int param_2, int param_3, int param_4, int param_5) {
        (**(code**)(field_0 + 280))(this, param_1, param_1->field_40 << 3, param_1->field_44 << 3, param_2 << 4,
                                    param_3 << 4, param_4, param_5);
    }

} // namespace jag::oldscape::graphics
