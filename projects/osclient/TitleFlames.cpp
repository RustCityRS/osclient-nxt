// projects/osclient/TitleFlames.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: osclient

#include "TitleFlames.h"

namespace jag::oldscape {
    // 0x1000be1e0
    void TitleFlames::Close() {
        field_529444 = 0;
        field_529448 = 0;
    }

    // 0x1000be200
    void TitleFlames::RenderFlames(int arg1, int arg2, graphics::Pix2D& pix2D) {
        if (field_529452 == 0) {
            field_529452 = arg2;
        }
        int iVar1 = arg2 - field_529452;
        int arg1_00 = 0;
        if (iVar1 < 256) {
            arg1_00 = iVar1;
        }
        field_529452 = arg2;
        if (0 < arg1_00) {
            UpdateFlames(arg1_00);
        }
        DrawFlames(arg1, pix2D);
    }

    // 0x1000be260
    void TitleFlames::UpdateFlames(int arg1) {
        unsigned long uVar1;
        int iVar3;
        int iVar4;
        int iVar5;
        int* piVar6;
        uint32_t* puVar7;
        long lVar9;
        int iVar10;
        int iVar11;
        unsigned long uVar12;
        long lVar13;
        unsigned long arg1_00;
        uint32_t uVar15;
        int iVar16;
        int iVar17;
        float fVar18;
        double dVar19;
        double dVar20;
        double dVar21;
        long local_38;

        unsigned int uVar2 = field_529444 + arg1 * 128;
        field_529444 = uVar2;
        if (32768 < uVar2) {
            field_529444 = uVar2 - 32768;
            iVar3 = ((Random*)&jag::math::g_Rand)->Rand(12);
            GenerateFlameCoolingMap((Pix8*)(*this)[(long)iVar3]);
        }
        uint8_t* this_00 = &field_5156;
        if (arg1 < 256) {
            uVar2 = arg1 * -128 + 32768;
            uVar12 = 1;
            if (1 < (int)uVar2) {
                uVar12 = (unsigned long)uVar2;
            }
            arg1_00 = 0;
            do {
                piVar6 = (int*)(*this_00)[(long)((int)arg1_00 + arg1 * 128)];
                iVar3 = *piVar6;
                piVar6 = &field_267300[(unsigned long)(field_529444 + (int)arg1_00 & 32767)];
                iVar11 = (int)((unsigned long)((long)(*piVar6 * arg1) * -715827883) >> 32);
                iVar3 = (iVar11 - (iVar11 >> 31)) + iVar3;
                if (iVar3 < 0) {
                    iVar3 = 0;
                }
                uVar1 = arg1_00 + 1;
                piVar6 = (int*)(*this_00)[arg1_00];
                *piVar6 = iVar3;
                arg1_00 = uVar1;
            } while (uVar12 != uVar1);
        }
        iVar3 = 256 - arg1;
        if (0 < arg1) {
            iVar10 = arg1 * -128 + 32768;
            iVar11 = iVar3;
            do {
                uVar12 = 0;
                do {
                    iVar4 = ((Random*)&jag::math::g_Rand)->Rand(100);
                    uVar15 = 0;
                    if (uVar12 < 118) {
                        uVar15 = 255;
                    }
                    if (uVar12 < 11) {
                        uVar15 = 0;
                    }
                    if (49 < iVar4) {
                        uVar15 = 0;
                    }
                    puVar7 = (uint32_t*)(*this_00)[(long)iVar10 + uVar12];
                    *puVar7 = uVar15;
                    uVar12 = uVar12 + 1;
                } while (uVar12 != 128);
                iVar11 = iVar11 + 1;
                iVar10 = iVar10 + 128;
            } while (iVar11 != 256);
        }
        if (0 < field_5148) {
            field_5148 = field_5148 + arg1 * -4;
        }
        if (0 < field_5152) {
            field_5152 = field_5152 + arg1 * -4;
        }
        if ((field_5148 < 1) && (field_5152 < 1)) {
            fVar18 = (float)((Random*)&jag::math::g_Rand)->FRand(1.0);
            iVar11 = (int)((float)(int)(2000 / (long)arg1) * fVar18);
            if (iVar11 == 1) {
                field_5152 = 1024;
            } else if (iVar11 == 0) {
                field_5148 = 1024;
            }
        }
        uint8_t* puVar14 = &field_24;
        if (arg1 < 256) {
            uVar12 = 0;
            do {
                puVar7 = (uint32_t*)(*puVar14)[(long)(arg1 + (int)uVar12)];
                uVar15 = *puVar7;
                puVar7 = (uint32_t*)(*puVar14)[uVar12];
                *puVar7 = uVar15;
                uVar12 = uVar12 + 1;
            } while ((long)uVar12 < (long)iVar3);
        }
        if (0 < arg1) {
            uVar12 = (unsigned long)iVar3;
            iVar3 = arg1;
            do {
                dVar19 = (double)field_1048;
                dVar20 = (double)_sin(dVar19 * 0.07142857142857142);
                dVar21 = (double)_sin(dVar19 * 0.06666666666666667);
                dVar19 = (double)_sin(dVar19 * 0.0625);
                piVar6 = (int*)(*puVar14)[uVar12];
                *piVar6 = (int)(dVar19 * 12.0 + dVar21 * 14.0 + dVar20 * 16.0);
                field_1048 = field_1048 + 1;
                uVar12 = uVar12 + 1;
                iVar3 = iVar3 - 1;
            } while (iVar3 != 0);
        }
        field_529448 = field_529448 + arg1;
        auto pCVar8 = Client::Instance();
        iVar3 = (pCVar8->field_8488 & 1U) + arg1;
        if (1 < iVar3) {
            iVar11 = iVar3 / 2;
            if (0 < field_529448) {
                iVar10 = 0;
                do {
                    iVar4 = ((Random*)&jag::math::g_Rand)->Rand(124);
                    iVar5 = ((Random*)&jag::math::g_Rand)->Rand(128);
                    puVar7 = (uint32_t*)(*this_00)[(long)(iVar5 * 128 + iVar4 + 16386)];
                    *puVar7 = 192;
                    iVar10 = iVar10 + 1;
                } while (iVar10 < field_529448 * 100);
            }
            field_529448 = 0;
            iVar5 = -iVar11;
            iVar4 = iVar11 * 2 + 1;
            puVar14 = &field_136228;
            lVar13 = (long)iVar5;
            iVar10 = 127;
            if (127 < iVar5) {
                iVar10 = iVar5;
            }
            uVar2 = iVar11 * 2 ^ 4294967294U | 1;
            local_38 = 0;
            lVar9 = 0;
            do {
                if (-256 < iVar3) {
                    uVar12 = 0;
                    iVar17 = 0;
                    do {
                        if (uVar12 < 128) {
                            piVar6 = (int*)(*this_00)[local_38 + uVar12];
                            iVar17 = iVar17 + *piVar6;
                        }
                        if ((long)iVar11 < (long)(uVar12 + lVar13)) {
                            piVar6 = (int*)(*this_00)[(long)(int)(uVar2 + (int)uVar12)];
                            iVar17 = iVar17 - *piVar6;
                        }
                        if (-1 < (long)(uVar12 + lVar13)) {
                            piVar6 = (int*)(*puVar14)[local_38 + lVar13 + uVar12];
                            *piVar6 = iVar17 / iVar4;
                        }
                        uVar12 = uVar12 + 1;
                    } while (iVar11 + iVar10 + 1 != (int)uVar12);
                }
                lVar9 = lVar9 + 1;
                uVar2 = uVar2 + 128;
                local_38 = local_38 + 128;
            } while (lVar9 != 256);
            iVar10 = 255;
            if (255 < iVar5) {
                iVar10 = iVar5;
            }
            iVar5 = 0;
            do {
                if (-512 < iVar3) {
                    uVar12 = 0;
                    iVar17 = 0;
                    iVar16 = iVar5;
                    do {
                        if (uVar12 < 256) {
                            piVar6 = (int*)(*puVar14)[(long)iVar16];
                            iVar17 = iVar17 + *piVar6;
                        }
                        if ((long)iVar11 < (long)(uVar12 + lVar13)) {
                            piVar6 = (int*)(*puVar14)[(long)(int)((iVar11 << 8 ^ 4294967168U) + iVar16)];
                            iVar17 = iVar17 - *piVar6;
                        }
                        if (-1 < (long)(uVar12 + lVar13)) {
                            piVar6 = (int*)(*this_00)[(long)(iVar11 * -128 + iVar16)];
                            *piVar6 = iVar17 / iVar4;
                        }
                        uVar12 = uVar12 + 1;
                        iVar16 = iVar16 + 128;
                    } while (iVar10 + iVar11 + 1 != (int)uVar12);
                }
                iVar5 = iVar5 + 1;
            } while (iVar5 != 128);
        }
    }

    // 0x1000be8c0
    void TitleFlames::DrawFlames(int arg1, graphics::Pix2D& pix2D) {
        uint32_t uVar1;
        uint32_t* puVar2;
        array<int, _256ul>* arg2;
        unsigned long arg1_01;

        int arg1_00 = field_5148;
        if (arg1_00 < 1) {
            arg1_00 = field_5152;
            if (arg1_00 < 1) {
                arg1_01 = 0;
                do {
                    puVar2 = &field_2076[arg1_01];
                    uVar1 = *puVar2;
                    puVar2 = &field_1052[arg1_01];
                    *puVar2 = uVar1;
                    arg1_01 = arg1_01 + 1;
                } while (arg1_01 != 256);
                goto LAB_1000be90b;
            }
            arg2 = (array<int, _256ul>*)&field_4124;
        } else {
            arg2 = (array<int, _256ul>*)&field_3100;
        }
        DoBlend(arg1_00, *arg2);
    LAB_1000be90b:
        DrawSingleFlame(pix2D, arg1);
    }

    // 0x1000be970
    void TitleFlames::SetupFire() {
        int* piVar2;
        uint32_t* puVar3;

        uint8_t* puVar1 = &field_2076;
        int iVar5 = 0;
        unsigned long uVar4 = 0;
        do {
            piVar2 = (int*)(*puVar1)[uVar4];
            *piVar2 = iVar5;
            uVar4 = uVar4 + 1;
            iVar5 = iVar5 + 262144;
        } while (uVar4 != 64);
        iVar5 = 16711680;
        uVar4 = 64;
        do {
            piVar2 = (int*)(*puVar1)[uVar4];
            *piVar2 = iVar5;
            iVar5 = iVar5 + 1024;
            uVar4 = uVar4 + 1;
        } while (uVar4 != 128);
        iVar5 = 16776960;
        uVar4 = 128;
        do {
            piVar2 = (int*)(*puVar1)[uVar4];
            *piVar2 = iVar5;
            iVar5 = iVar5 + 4;
            uVar4 = uVar4 + 1;
        } while (uVar4 != 192);
        uVar4 = 192;
        do {
            puVar3 = (uint32_t*)(*puVar1)[uVar4];
            *puVar3 = 16777215;
            uVar4 = uVar4 + 1;
        } while (uVar4 != 256);
        puVar1 = &field_3100;
        iVar5 = 0;
        uVar4 = 0;
        do {
            piVar2 = (int*)(*puVar1)[uVar4];
            *piVar2 = iVar5;
            uVar4 = uVar4 + 1;
            iVar5 = iVar5 + 1024;
        } while (uVar4 != 64);
        iVar5 = 65280;
        uVar4 = 64;
        do {
            piVar2 = (int*)(*puVar1)[uVar4];
            *piVar2 = iVar5;
            iVar5 = iVar5 + 4;
            uVar4 = uVar4 + 1;
        } while (uVar4 != 128);
        iVar5 = 65535;
        uVar4 = 128;
        do {
            piVar2 = (int*)(*puVar1)[uVar4];
            *piVar2 = iVar5;
            iVar5 = iVar5 + 262144;
            uVar4 = uVar4 + 1;
        } while (uVar4 != 192);
        uVar4 = 192;
        do {
            puVar3 = (uint32_t*)(*puVar1)[uVar4];
            *puVar3 = 16777215;
            uVar4 = uVar4 + 1;
        } while (uVar4 != 256);
        puVar1 = &field_4124;
        iVar5 = 0;
        uVar4 = 0;
        do {
            piVar2 = (int*)(*puVar1)[uVar4];
            *piVar2 = iVar5;
            uVar4 = uVar4 + 1;
            iVar5 = iVar5 + 4;
        } while (uVar4 != 64);
        iVar5 = 255;
        uVar4 = 64;
        do {
            piVar2 = (int*)(*puVar1)[uVar4];
            *piVar2 = iVar5;
            iVar5 = iVar5 + 262144;
            uVar4 = uVar4 + 1;
        } while (uVar4 != 128);
        iVar5 = 16711935;
        uVar4 = 128;
        do {
            piVar2 = (int*)(*puVar1)[uVar4];
            *piVar2 = iVar5;
            iVar5 = iVar5 + 1024;
            uVar4 = uVar4 + 1;
        } while (uVar4 != 192);
        uVar4 = 192;
        do {
            puVar3 = (uint32_t*)(*puVar1)[uVar4];
            *puVar3 = 16777215;
            uVar4 = uVar4 + 1;
        } while (uVar4 != 256);
        int local_2c = 0;
        field_24.fill(local_2c);
        local_2c = 0;
        field_1052.fill(local_2c);
        local_2c = 0;
        field_267300.fill(local_2c);
        local_2c = 0;
        field_398372.fill(local_2c);
        GenerateFlameCoolingMap(nullptr);
        local_2c = 0;
        field_5156.fill(local_2c);
        local_2c = 0;
        field_136228.fill(local_2c);
    }

    // 0x1000becd0
    void TitleFlames::GenerateFlameCoolingMap(graphics::Pix8* pix8) {
        int iVar1;
        uint32_t uVar2;
        uint32_t* puVar3;
        int* piVar4;
        char* pcVar5;
        int* piVar6;
        long lVar8;
        int iVar9;
        long lVar10;

        array<int, 32768ul>* local_40 = (array<int, 32768ul>*)&field_267300;
        auto local_38 = local_40->data();
        auto local_48 = field_398372.data();
        ___bzero(local_38, 131072);
        int iVar7 = 5000;
        do {
            iVar1 = ((Random*)&jag::math::g_Rand)->Rand(32768);
            uVar2 = ((Random*)&jag::math::g_Rand)->Rand(256);
            puVar3 = (uint32_t*)(*local_40)[(long)iVar1];
            *puVar3 = uVar2;
            iVar7 = iVar7 - 1;
        } while (iVar7 != 0);
        iVar7 = 0;
        do {
            piVar4 = local_38 + 257;
            piVar6 = local_48 + 129;
            lVar10 = 1;
            do {
                lVar8 = -126;
                do {
                    iVar1 = piVar4[lVar8 - 1] + piVar4[lVar8 - 3] + piVar4[lVar8 - 130];
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
            std::swap<int*>(local_38, local_48);
            iVar7 = iVar7 + 1;
        } while (iVar7 != 20);
        if ((pix8 != nullptr) && (0 < (int)pix8->field_52)) {
            iVar1 = 0;
            iVar9 = 16;
            iVar7 = 0;
            do {
                if (0 < pix8->field_48) {
                    local_40 = (array<int, 32768ul>*)(((uint64_t)local_40._4_4_ << 32) | (uint32_t)iVar7);
                    lVar10 = 0;
                    do {
                        pcVar5 = (char*)(*pix8)[iVar7 + lVar10];
                        if (*pcVar5 != '\0') {
                            local_38[((pix8->field_60 + iVar9) * 128 + pix8->field_56 + (int)lVar10 + 16)] = 0;
                        }
                        lVar10 = lVar10 + 1;
                    } while ((int)lVar10 < pix8->field_48);
                    iVar7 = (int)local_40 + (int)lVar10;
                }
                iVar1 = iVar1 + 1;
                iVar9 = iVar9 + 1;
            } while (iVar1 < (int)pix8->field_52);
        }
    }

    // 0x1000bef30
    unsigned int TitleFlames::Merge(int arg1, int arg2, int arg3) {
        return ((256 - arg3) * (arg1 & 65280U) + (arg2 & 65280U) * arg3 & 16711680 |
                (arg2 & 16711935U) * arg3 + (arg1 & 16711935U) * (256 - arg3) & 4278255360) >>
               8;
    }

    // 0x1000bef80
    void TitleFlames::DoBlend(int arg1, std::array<int, 256ul>& arg2) {
        int arg1_00;
        int* piVar1;
        int arg3;
        int arg2_00;
        TitleFlames* this_01;

        uint8_t* this_00 = &field_2076;
        unsigned long arg1_01 = 0;
        do {
            if (arg1 < 769) {
                piVar1 = &arg2[arg1_01];
                arg1_00 = *piVar1;
                if (arg1 < 257) {
                    this_01 = (TitleFlames*)this_00;
                    piVar1 = (int*)(*this_00)[arg1_01];
                    arg2_00 = *piVar1;
                    arg3 = 256 - arg1;
                    goto LAB_1000beff1;
                }
            } else {
                piVar1 = (int*)(*this_00)[arg1_01];
                arg1_00 = *piVar1;
                this_01 = (TitleFlames*)arg2;
                piVar1 = &arg2[arg1_01];
                arg2_00 = *piVar1;
                arg3 = 1024 - arg1;
            LAB_1000beff1:
                arg1_00 = Merge(this_01, arg1_00, arg2_00, arg3);
            }
            piVar1 = &field_1052[arg1_01];
            *piVar1 = arg1_00;
            arg1_01 = arg1_01 + 1;
            if (arg1_01 == 256) {
                return;
            }
        } while (true);
    }

    // 0x1000bf060
    void TitleFlames::DrawSingleFlame(graphics::Pix2D& pix2D, int arg2) {
        int iVar1;
        unsigned int uVar2;
        unsigned int uVar3;
        int iVar5;
        int* piVar6;
        unsigned int* puVar7;
        int iVar8;
        unsigned int uVar9;
        int iVar10;
        unsigned long arg1_00;
        unsigned long arg1_01;

        int iVar11 = 9;
        unsigned long arg1 = 1;
        int iVar4 = 0;
        do {
            piVar6 = &field_24[arg1];
            iVar8 = (256 - (int)arg1) * *piVar6;
            iVar5 = iVar8 + 255;
            if (-1 < iVar8) {
                iVar5 = iVar8;
            }
            iVar8 = (iVar5 >> 8) + arg2;
            iVar5 = iVar8;
            if (iVar8 < 0) {
                iVar5 = 0;
            }
            uVar9 = iVar8 >> 31 & -iVar8;
            iVar1 = pix2D.field_8;
            iVar10 = iVar1 - iVar5;
            if (iVar5 + 128 < iVar1) {
                iVar10 = 128;
            }
            if ((int)uVar9 < iVar10) {
                arg1_01 = (unsigned long)((iVar4 + iVar5) - iVar8);
                arg1_00 = (unsigned long)(iVar5 + iVar1 * iVar11);
                do {
                    piVar6 = &field_5156[arg1_01];
                    iVar5 = *piVar6;
                    if ((long)iVar5 != 0) {
                        puVar7 = &field_1052[(long)iVar5];
                        uVar2 = *puVar7;
                        puVar7 = &pix2D.field_32[arg1_00];
                        uVar3 = *puVar7;
                        puVar7 = &pix2D.field_32[arg1_00];
                        *puVar7 = ((uVar3 & 65280) * (256 - iVar5) + (uVar2 & 65280) * iVar5 & 16711680 |
                                   (uVar3 & 16711935) * (256 - iVar5) + (uVar2 & 16711935) * iVar5 & 4278255360) >>
                                      8 |
                                  4278190080;
                    }
                    arg1_00 = arg1_00 + 1;
                    uVar9 = uVar9 + 1;
                    arg1_01 = arg1_01 + 1;
                } while ((int)uVar9 < iVar10);
            }
            iVar4 = ((iVar4 + uVar9) - iVar10) + 128;
            arg1 = arg1 + 1;
            iVar11 = iVar11 + 1;
        } while (arg1 != 255);
    }

} // namespace jag::oldscape
