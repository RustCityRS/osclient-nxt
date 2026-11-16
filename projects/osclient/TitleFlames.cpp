// projects/osclient/TitleFlames.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: osclient

#include "TitleFlames.h"

namespace jag::oldscape {
    // 0x1000be1e0, 32 bytes, placed by class name and debug map
    // TitleFlames::Close()
    void TitleFlames::Close() {
        field_529444 = 0;
        field_529448 = 0;
    }

    // 0x1000be200, 96 bytes, placed by class name and debug map
    // TitleFlames::RenderFlames(int, int, graphics::Pix2D&)
    void TitleFlames::RenderFlames(int param_1, int param_2, Pix2D* param_3) {
        int iVar1;
        int iVar2;

        if (field_529452 == 0) {
            field_529452 = param_2;
        }
        iVar1 = param_2 - field_529452;
        iVar2 = 0;
        if (iVar1 < 256) {
            iVar2 = iVar1;
        }
        field_529452 = param_2;
        if (0 < iVar2) {
            UpdateFlames(this, iVar2);
        }
        DrawFlames(this, param_1, param_3);
    }

    // 0x1000be260, 1632 bytes, placed by class name and debug map
    // TitleFlames::UpdateFlames(int)
    void TitleFlames::UpdateFlames(int param_1) {
        ulong uVar1;
        undefined1* this_00;
        uint uVar2;
        int iVar3;
        int iVar4;
        int iVar5;
        Pix8* pPVar6;
        int* piVar7;
        undefined4* puVar8;
        long lVar9;
        long lVar10;
        int iVar11;
        int iVar12;
        ulong uVar13;
        ulong uVar14;
        undefined1* puVar15;
        undefined4 uVar16;
        int iVar17;
        int iVar18;
        float fVar19;
        double dVar20;
        double dVar21;
        double dVar22;
        long local_38;

        uVar2 = field_529444 + param_1 * 128;
        field_529444 = uVar2;
        if (32768 < uVar2) {
            field_529444 = uVar2 - 32768;
            iVar3 = (&jag::math::g_Rand)->Rand(12);
            pPVar6 = (Pix8*)Array<graphics::Pix8, eastl::allocator>::operator[](
                (Array<graphics::Pix8, eastl::allocator>*)this, (long)iVar3);
            GenerateFlameCoolingMap(this, pPVar6);
        }
        this_00 = &field_5156;
        if (param_1 < 256) {
            uVar2 = param_1 * -128 + 32768;
            uVar13 = 1;
            if (1 < (int)uVar2) {
                uVar13 = (ulong)uVar2;
            }
            uVar14 = 0;
            do {
                piVar7 = (int*)std::array<int, 32768ul>::operator[]((array<int, 32768ul>*)this_00,
                                                                    (long)((int)uVar14 + param_1 * 128));
                iVar3 = *piVar7;
                piVar7 = (int*)std::array<int, 32768ul>::operator[]((array<int, 32768ul>*)&field_267300,
                                                                    (ulong)(field_529444 + (int)uVar14 & 32767));
                iVar12 = (int)((ulong)((long)(*piVar7 * param_1) * -715827883) >> 32);
                iVar3 = (iVar12 - (iVar12 >> 31)) + iVar3;
                if (iVar3 < 0) {
                    iVar3 = 0;
                }
                uVar1 = uVar14 + 1;
                piVar7 = (int*)std::array<int, 32768ul>::operator[]((array<int, 32768ul>*)this_00, uVar14);
                *piVar7 = iVar3;
                uVar14 = uVar1;
            } while (uVar13 != uVar1);
        }
        iVar3 = 256 - param_1;
        if (0 < param_1) {
            iVar11 = param_1 * -128 + 32768;
            iVar12 = iVar3;
            do {
                uVar13 = 0;
                do {
                    iVar4 = (&jag::math::g_Rand)->Rand(100);
                    uVar16 = 0;
                    if (uVar13 < 118) {
                        uVar16 = 255;
                    }
                    if (uVar13 < 11) {
                        uVar16 = 0;
                    }
                    if (49 < iVar4) {
                        uVar16 = 0;
                    }
                    puVar8 = (undefined4*)std::array<int, 32768ul>::operator[]((array<int, 32768ul>*)this_00,
                                                                               (long)iVar11 + uVar13);
                    *puVar8 = uVar16;
                    uVar13 = uVar13 + 1;
                } while (uVar13 != 128);
                iVar12 = iVar12 + 1;
                iVar11 = iVar11 + 128;
            } while (iVar12 != 256);
        }
        if (0 < field_5148) {
            field_5148 = field_5148 + param_1 * -4;
        }
        if (0 < field_5152) {
            field_5152 = field_5152 + param_1 * -4;
        }
        if ((field_5148 < 1) && (field_5152 < 1)) {
            fVar19 = (float)(&jag::math::g_Rand)->FRand(1.0);
            iVar12 = (int)((float)(int)(2000 / (long)param_1) * fVar19);
            if (iVar12 == 1) {
                field_5152 = 1024;
            } else if (iVar12 == 0) {
                field_5148 = 1024;
            }
        }
        puVar15 = &field_24;
        if (param_1 < 256) {
            uVar13 = 0;
            do {
                puVar8 = (undefined4*)std::array<int, 256ul>::operator[]((array<int, 256ul>*)puVar15,
                                                                         (long)(param_1 + (int)uVar13));
                uVar16 = *puVar8;
                puVar8 = (undefined4*)std::array<int, 256ul>::operator[]((array<int, 256ul>*)puVar15, uVar13);
                *puVar8 = uVar16;
                uVar13 = uVar13 + 1;
            } while ((long)uVar13 < (long)iVar3);
        }
        if (0 < param_1) {
            uVar13 = (ulong)iVar3;
            iVar3 = param_1;
            do {
                dVar20 = (double)field_1048;
                dVar21 = (double)_sin(dVar20 * 0.07142857142857142);
                dVar22 = (double)_sin(dVar20 * 0.06666666666666667);
                dVar20 = (double)_sin(dVar20 * 0.0625);
                piVar7 = (int*)std::array<int, 256ul>::operator[]((array<int, 256ul>*)puVar15, uVar13);
                *piVar7 = (int)(dVar20 * 12.0 + dVar22 * 14.0 + dVar21 * 16.0);
                field_1048 = field_1048 + 1;
                uVar13 = uVar13 + 1;
                iVar3 = iVar3 + -1;
            } while (iVar3 != 0);
        }
        field_529448 = field_529448 + param_1;
        lVar9 = Client::Instance();
        iVar3 = (*(uint*)(lVar9 + 8488) & 1) + param_1;
        if (1 < iVar3) {
            iVar12 = iVar3 / 2;
            if (0 < field_529448) {
                iVar11 = 0;
                do {
                    iVar4 = (&jag::math::g_Rand)->Rand(124);
                    iVar5 = (&jag::math::g_Rand)->Rand(128);
                    puVar8 = (undefined4*)std::array<int, 32768ul>::operator[]((array<int, 32768ul>*)this_00,
                                                                               (long)(iVar5 * 128 + iVar4 + 16386));
                    *puVar8 = 192;
                    iVar11 = iVar11 + 1;
                } while (iVar11 < field_529448 * 100);
            }
            field_529448 = 0;
            iVar5 = -iVar12;
            iVar4 = iVar12 * 2 + 1;
            puVar15 = &field_136228;
            lVar9 = (long)iVar5;
            iVar11 = 127;
            if (127 < iVar5) {
                iVar11 = iVar5;
            }
            uVar2 = iVar12 * 2 ^ 4294967294U | 1;
            local_38 = 0;
            lVar10 = 0;
            do {
                if (-256 < iVar3) {
                    uVar13 = 0;
                    iVar18 = 0;
                    do {
                        if (uVar13 < 128) {
                            piVar7 = (int*)std::array<int, 32768ul>::operator[]((array<int, 32768ul>*)this_00,
                                                                                local_38 + uVar13);
                            iVar18 = iVar18 + *piVar7;
                        }
                        if ((long)iVar12 < (long)(uVar13 + lVar9)) {
                            piVar7 = (int*)std::array<int, 32768ul>::operator[]((array<int, 32768ul>*)this_00,
                                                                                (long)(int)(uVar2 + (int)uVar13));
                            iVar18 = iVar18 - *piVar7;
                        }
                        if (-1 < (long)(uVar13 + lVar9)) {
                            piVar7 = (int*)std::array<int, 32768ul>::operator[]((array<int, 32768ul>*)puVar15,
                                                                                local_38 + lVar9 + uVar13);
                            *piVar7 = iVar18 / iVar4;
                        }
                        uVar13 = uVar13 + 1;
                    } while (iVar12 + iVar11 + 1 != (int)uVar13);
                }
                lVar10 = lVar10 + 1;
                uVar2 = uVar2 + 128;
                local_38 = local_38 + 128;
            } while (lVar10 != 256);
            iVar11 = 255;
            if (255 < iVar5) {
                iVar11 = iVar5;
            }
            iVar5 = 0;
            do {
                if (-512 < iVar3) {
                    uVar13 = 0;
                    iVar18 = 0;
                    iVar17 = iVar5;
                    do {
                        if (uVar13 < 256) {
                            piVar7 =
                                (int*)std::array<int, 32768ul>::operator[]((array<int, 32768ul>*)puVar15, (long)iVar17);
                            iVar18 = iVar18 + *piVar7;
                        }
                        if ((long)iVar12 < (long)(uVar13 + lVar9)) {
                            piVar7 = (int*)std::array<int, 32768ul>::operator[](
                                (array<int, 32768ul>*)puVar15, (long)(int)((iVar12 << 8 ^ 4294967168U) + iVar17));
                            iVar18 = iVar18 - *piVar7;
                        }
                        if (-1 < (long)(uVar13 + lVar9)) {
                            piVar7 = (int*)std::array<int, 32768ul>::operator[]((array<int, 32768ul>*)this_00,
                                                                                (long)(iVar12 * -128 + iVar17));
                            *piVar7 = iVar18 / iVar4;
                        }
                        uVar13 = uVar13 + 1;
                        iVar17 = iVar17 + 128;
                    } while (iVar11 + iVar12 + 1 != (int)uVar13);
                }
                iVar5 = iVar5 + 1;
            } while (iVar5 != 128);
        }
    }

    // 0x1000be8c0, 176 bytes, placed by class name and debug map
    // TitleFlames::DrawFlames(int, graphics::Pix2D&)
    void TitleFlames::DrawFlames(int param_1, Pix2D* param_2) {
        undefined4 uVar1;
        undefined4* puVar2;
        array* paVar3;
        int iVar4;
        ulong uVar5;

        iVar4 = field_5148;
        if (iVar4 < 1) {
            iVar4 = field_5152;
            if (iVar4 < 1) {
                uVar5 = 0;
                do {
                    puVar2 = (undefined4*)std::array<int, 256ul>::operator[]((array<int, 256ul>*)&field_2076, uVar5);
                    uVar1 = *puVar2;
                    puVar2 = (undefined4*)std::array<int, 256ul>::operator[]((array<int, 256ul>*)&field_1052, uVar5);
                    *puVar2 = uVar1;
                    uVar5 = uVar5 + 1;
                } while (uVar5 != 256);
                goto LAB_1000be90b;
            }
            paVar3 = (array*)&field_4124;
        } else {
            paVar3 = (array*)&field_3100;
        }
        DoBlend(this, iVar4, paVar3);
    LAB_1000be90b:
        DrawSingleFlame(this, param_2, param_1);
    }

    // 0x1000be970, 752 bytes, placed by class name and debug map
    // TitleFlames::SetupFire()
    void TitleFlames::SetupFire() {
        undefined1* puVar1;
        int* piVar2;
        undefined4* puVar3;
        ulong uVar4;
        int iVar5;
        int local_2c;

        puVar1 = &field_2076;
        iVar5 = 0;
        uVar4 = 0;
        do {
            piVar2 = (int*)std::array<int, 256ul>::operator[]((array<int, 256ul>*)puVar1, uVar4);
            *piVar2 = iVar5;
            uVar4 = uVar4 + 1;
            iVar5 = iVar5 + 262144;
        } while (uVar4 != 64);
        iVar5 = 16711680;
        uVar4 = 64;
        do {
            piVar2 = (int*)std::array<int, 256ul>::operator[]((array<int, 256ul>*)puVar1, uVar4);
            *piVar2 = iVar5;
            iVar5 = iVar5 + 1024;
            uVar4 = uVar4 + 1;
        } while (uVar4 != 128);
        iVar5 = 16776960;
        uVar4 = 128;
        do {
            piVar2 = (int*)std::array<int, 256ul>::operator[]((array<int, 256ul>*)puVar1, uVar4);
            *piVar2 = iVar5;
            iVar5 = iVar5 + 4;
            uVar4 = uVar4 + 1;
        } while (uVar4 != 192);
        uVar4 = 192;
        do {
            puVar3 = (undefined4*)std::array<int, 256ul>::operator[]((array<int, 256ul>*)puVar1, uVar4);
            *puVar3 = 16777215;
            uVar4 = uVar4 + 1;
        } while (uVar4 != 256);
        puVar1 = &field_3100;
        iVar5 = 0;
        uVar4 = 0;
        do {
            piVar2 = (int*)std::array<int, 256ul>::operator[]((array<int, 256ul>*)puVar1, uVar4);
            *piVar2 = iVar5;
            uVar4 = uVar4 + 1;
            iVar5 = iVar5 + 1024;
        } while (uVar4 != 64);
        iVar5 = 65280;
        uVar4 = 64;
        do {
            piVar2 = (int*)std::array<int, 256ul>::operator[]((array<int, 256ul>*)puVar1, uVar4);
            *piVar2 = iVar5;
            iVar5 = iVar5 + 4;
            uVar4 = uVar4 + 1;
        } while (uVar4 != 128);
        iVar5 = 65535;
        uVar4 = 128;
        do {
            piVar2 = (int*)std::array<int, 256ul>::operator[]((array<int, 256ul>*)puVar1, uVar4);
            *piVar2 = iVar5;
            iVar5 = iVar5 + 262144;
            uVar4 = uVar4 + 1;
        } while (uVar4 != 192);
        uVar4 = 192;
        do {
            puVar3 = (undefined4*)std::array<int, 256ul>::operator[]((array<int, 256ul>*)puVar1, uVar4);
            *puVar3 = 16777215;
            uVar4 = uVar4 + 1;
        } while (uVar4 != 256);
        puVar1 = &field_4124;
        iVar5 = 0;
        uVar4 = 0;
        do {
            piVar2 = (int*)std::array<int, 256ul>::operator[]((array<int, 256ul>*)puVar1, uVar4);
            *piVar2 = iVar5;
            uVar4 = uVar4 + 1;
            iVar5 = iVar5 + 4;
        } while (uVar4 != 64);
        iVar5 = 255;
        uVar4 = 64;
        do {
            piVar2 = (int*)std::array<int, 256ul>::operator[]((array<int, 256ul>*)puVar1, uVar4);
            *piVar2 = iVar5;
            iVar5 = iVar5 + 262144;
            uVar4 = uVar4 + 1;
        } while (uVar4 != 128);
        iVar5 = 16711935;
        uVar4 = 128;
        do {
            piVar2 = (int*)std::array<int, 256ul>::operator[]((array<int, 256ul>*)puVar1, uVar4);
            *piVar2 = iVar5;
            iVar5 = iVar5 + 1024;
            uVar4 = uVar4 + 1;
        } while (uVar4 != 192);
        uVar4 = 192;
        do {
            puVar3 = (undefined4*)std::array<int, 256ul>::operator[]((array<int, 256ul>*)puVar1, uVar4);
            *puVar3 = 16777215;
            uVar4 = uVar4 + 1;
        } while (uVar4 != 256);
        local_2c = 0;
        (&field_24, &local_2c)->fill();
        local_2c = 0;
        (&field_1052, &local_2c)->fill();
        local_2c = 0;
        (&field_267300, &local_2c)->fill();
        local_2c = 0;
        (&field_398372, &local_2c)->fill();
        GenerateFlameCoolingMap(this, (Pix8*)0);
        local_2c = 0;
        (&field_5156, &local_2c)->fill();
        local_2c = 0;
        (&field_136228, &local_2c)->fill();
    }

    // 0x1000becd0, 464 bytes, placed by class name and debug map
    // TitleFlames::GenerateFlameCoolingMap(graphics::Pix8*)
    void TitleFlames::GenerateFlameCoolingMap(Pix8* param_1) {
        int iVar1;
        undefined4 uVar2;
        undefined4* puVar3;
        int* piVar4;
        char* pcVar5;
        int* piVar6;
        int iVar7;
        long lVar8;
        int iVar9;
        long lVar10;
        int* local_48;
        array<int, 32768ul>* local_40;
        int* local_38;

        local_40 = (array<int, 32768ul>*)&field_267300;
        local_38 = (int*)std::array<int, 32768ul>::data(local_40);
        local_48 = (int*)(&field_398372)->data();
        ___bzero(local_38, 131072);
        iVar7 = 5000;
        do {
            iVar1 = (&jag::math::g_Rand)->Rand(32768);
            uVar2 = (&jag::math::g_Rand)->Rand(256);
            puVar3 = (undefined4*)std::array<int, 32768ul>::operator[](local_40, (long)iVar1);
            *puVar3 = uVar2;
            iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
        iVar7 = 0;
        do {
            piVar4 = local_38 + 257;
            piVar6 = local_48 + 129;
            lVar10 = 1;
            do {
                lVar8 = -126;
                do {
                    iVar1 = piVar4[lVar8 + -1] + piVar4[lVar8 + -3] + piVar4[lVar8 + -130];
                    iVar9 = iVar1 + piVar4[lVar8 + 126];
                    iVar1 = piVar4[lVar8 + 126] + iVar1 + 3;
                    if (-1 < iVar9) {
                        iVar1 = iVar9;
                    }
                    piVar6[lVar8 + 126] = iVar1 >> 2;
                    lVar8 = lVar8 + 1;
                } while (lVar8 != 0);
                lVar10 = lVar10 + 1;
                piVar4 = piVar4 + 128;
                piVar6 = piVar6 + 128;
            } while (lVar10 != 255);
            std::swap<int*>(&local_38, &local_48);
            iVar7 = iVar7 + 1;
        } while (iVar7 != 20);
        if ((param_1 != (Pix8*)0) && (0 < (int)param_1->field_52)) {
            iVar1 = 0;
            iVar9 = 16;
            iVar7 = 0;
            do {
                if (0 < param_1->field_48) {
                    local_40 = (array<int, 32768ul>*)CONCAT44(local_40._4_4_, iVar7);
                    lVar10 = 0;
                    do {
                        pcVar5 = (char*)Array<unsigned char, eastl::allocator>::operator[](
                            (Array<unsigned char, eastl::allocator>*)param_1, iVar7 + lVar10);
                        if (*pcVar5 != '\0') {
                            local_38[(int)((param_1->field_60 + iVar9) * 128 + param_1->field_56 + (int)lVar10 + 16)] =
                                0;
                        }
                        lVar10 = lVar10 + 1;
                    } while ((int)lVar10 < param_1->field_48);
                    iVar7 = (int)local_40 + (int)lVar10;
                }
                iVar1 = iVar1 + 1;
                iVar9 = iVar9 + 1;
            } while (iVar1 < (int)param_1->field_52);
        }
    }

    // 0x1000bef30, 80 bytes, placed by class name and debug map
    // TitleFlames::Merge(int, int, int)
    uint TitleFlames::Merge(int param_1, int param_2, int param_3) {
        return ((256 - param_3) * (param_1 & 65280U) + (param_2 & 65280U) * param_3 & 16711680 |
                (param_2 & 16711935U) * param_3 + (param_1 & 16711935U) * (256 - param_3) & 4278255360) >>
               8;
    }

    // 0x1000bef80, 224 bytes, placed by class name and debug map
    // TitleFlames::DoBlend(int, std::array<int, 256ul>&)
    /* TitleFlames::DoBlend(int, std::array<int, 256ul>&) */

    void TitleFlames::DoBlend(int param_1, array* param_2) {
        int iVar1;
        int* piVar2;
        int iVar3;
        int iVar4;
        undefined1* this_00;
        TitleFlames* this_01;
        ulong uVar5;

        this_00 = &field_2076;
        uVar5 = 0;
        do {
            if (param_1 < 769) {
                piVar2 = (int*)std::array<int, 256ul>::operator[]((array<int, 256ul>*)param_2, uVar5);
                iVar1 = *piVar2;
                if (param_1 < 257) {
                    this_01 = (TitleFlames*)this_00;
                    piVar2 = (int*)std::array<int, 256ul>::operator[]((array<int, 256ul>*)this_00, uVar5);
                    iVar4 = *piVar2;
                    iVar3 = 256 - param_1;
                    goto LAB_1000beff1;
                }
            } else {
                piVar2 = (int*)std::array<int, 256ul>::operator[]((array<int, 256ul>*)this_00, uVar5);
                iVar1 = *piVar2;
                this_01 = (TitleFlames*)param_2;
                piVar2 = (int*)std::array<int, 256ul>::operator[]((array<int, 256ul>*)param_2, uVar5);
                iVar4 = *piVar2;
                iVar3 = 1024 - param_1;
            LAB_1000beff1:
                iVar1 = Merge(this_01, iVar1, iVar4, iVar3);
            }
            piVar2 = (int*)std::array<int, 256ul>::operator[]((array<int, 256ul>*)&field_1052, uVar5);
            *piVar2 = iVar1;
            uVar5 = uVar5 + 1;
            if (uVar5 == 256) {
                return;
            }
        } while (true);
    }

    // 0x1000bf060, 528 bytes, placed by class name and debug map
    // TitleFlames::DrawSingleFlame(graphics::Pix2D&, int)
    void TitleFlames::DrawSingleFlame(Pix2D* param_1, int param_2) {
        int iVar1;
        uint uVar2;
        uint uVar3;
        int iVar4;
        int iVar5;
        int* piVar6;
        uint* puVar7;
        int iVar8;
        uint uVar9;
        int iVar10;
        ulong uVar11;
        ulong uVar12;
        int iVar13;
        ulong uVar14;

        iVar13 = 9;
        uVar11 = 1;
        iVar4 = 0;
        do {
            piVar6 = (int*)std::array<int, 256ul>::operator[]((array<int, 256ul>*)&field_24, uVar11);
            iVar8 = (256 - (int)uVar11) * *piVar6;
            iVar5 = iVar8 + 255;
            if (-1 < iVar8) {
                iVar5 = iVar8;
            }
            iVar8 = (iVar5 >> 8) + param_2;
            iVar5 = iVar8;
            if (iVar8 < 0) {
                iVar5 = 0;
            }
            uVar9 = iVar8 >> 31 & -iVar8;
            iVar1 = param_1->field_8;
            iVar10 = iVar1 - iVar5;
            if (iVar5 + 128 < iVar1) {
                iVar10 = 128;
            }
            if ((int)uVar9 < iVar10) {
                uVar14 = (ulong)((iVar4 + iVar5) - iVar8);
                uVar12 = (ulong)(iVar5 + iVar1 * iVar13);
                do {
                    piVar6 = (int*)std::array<int, 32768ul>::operator[]((array<int, 32768ul>*)&field_5156, uVar14);
                    iVar5 = *piVar6;
                    if ((long)iVar5 != 0) {
                        puVar7 =
                            (uint*)std::array<int, 256ul>::operator[]((array<int, 256ul>*)&field_1052, (long)iVar5);
                        uVar2 = *puVar7;
                        puVar7 = (uint*)SharedArray<unsigned int>::operator[](
                            (SharedArray<unsigned int>*)&param_1->field_32, uVar12);
                        uVar3 = *puVar7;
                        puVar7 = (uint*)SharedArray<unsigned int>::operator[](
                            (SharedArray<unsigned int>*)&param_1->field_32, uVar12);
                        *puVar7 = ((uVar3 & 65280) * (256 - iVar5) + (uVar2 & 65280) * iVar5 & 16711680 |
                                   (uVar3 & 16711935) * (256 - iVar5) + (uVar2 & 16711935) * iVar5 & 4278255360) >>
                                      8 |
                                  4278190080;
                    }
                    uVar12 = uVar12 + 1;
                    uVar9 = uVar9 + 1;
                    uVar14 = uVar14 + 1;
                } while ((int)uVar9 < iVar10);
            }
            iVar4 = ((iVar4 + uVar9) - iVar10) + 128;
            uVar11 = uVar11 + 1;
            iVar13 = iVar13 + 1;
        } while (uVar11 != 255);
    }

} // namespace jag::oldscape
