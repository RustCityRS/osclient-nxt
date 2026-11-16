// libs/math/polynomial/Polynomial.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.math

#include "Polynomial.h"

namespace jag::math::polynomial {
    // 0x100c63240, 912 bytes, placed by class name and debug map
    // FindCubicRoots(std::array<float, 3ul>*, float, float, float, float)
    /* FindCubicRoots(std::array<float, 3ul>*, float, float, float, float) */

    int FindCubicRoots(array* param_1, float param_2, float param_3, float param_4, float param_5) {
        int iVar1;
        float* pfVar2;
        undefined4* puVar3;
        float fVar4;
        undefined4 uVar5;
        float fVar6;
        float fVar7;
        float fVar8;
        float fVar9;
        float fVar10;
        float fVar11;

        if (param_2 == 0.0) {
            iVar1 = FindQuadraticRoots<3ul>(param_1, param_3, param_4, param_5);
            return iVar1;
        }
        fVar10 = 1.0 / param_2;
        fVar9 = param_3 * fVar10;
        fVar11 = param_4 * fVar10 * 3.0 - fVar9 * fVar9;
        fVar4 = (float)pow(fVar9, 3.0);
        fVar10 = fVar4 + fVar4 + param_5 * 27.0 * fVar10 + fVar9 * -9.0 * param_4 * fVar10;
        fVar4 = fVar10 * 0.037037037;
        if (fVar11 * 0.33333334 == 0.0) {
            fVar4 = (float)(anonymous namespace)::CubeRealRoot(-fVar4);
            pfVar2 = (float*)std::array<float, 3ul>::operator[]((array<float, 3ul>*)param_1, 0);
        LAB_100c63326:
            *pfVar2 = fVar4;
            iVar1 = 1;
        } else {
            if (fVar4 == 0.0) {
                uVar5 = ::sqrt(-(fVar11 * 0.33333334));
                puVar3 = (undefined4*)std::array<float, 3ul>::operator[]((array<float, 3ul>*)param_1, 0);
                *puVar3 = uVar5;
                pfVar2 = (float*)std::array<float, 3ul>::operator[]((array<float, 3ul>*)param_1, 1);
                fVar4 = -*pfVar2;
            } else {
                fVar6 = fVar10 * 0.018518519;
                fVar7 = (float)pow(fVar6, 2.0);
                fVar8 = (float)pow(fVar11 * 0.11111112, 3.0);
                fVar8 = fVar8 + fVar7;
                if (fVar8 != 0.0) {
                    if (fVar8 <= 0.0) {
                        fVar10 = (float)pow(fVar11 * -0.11111112, 3.0);
                        fVar10 = (float)::sqrt(fVar10);
                        fVar11 = (float)acos(-fVar4 / (fVar10 + fVar10));
                        fVar4 = (float)(anonymous namespace)::CubeRealRoot(fVar10);
                        fVar4 = fVar4 + fVar4;
                        fVar9 = fVar9 * 0.33333334;
                        fVar11 = fVar11 * 0.33333334;
                        fVar10 = (float)::cos(fVar11);
                        pfVar2 = (float*)std::array<float, 3ul>::operator[]((array<float, 3ul>*)param_1, 0);
                        *pfVar2 = fVar10 * fVar4 - fVar9;
                        fVar10 = (float)::cos(fVar11 + 2.0943952);
                        pfVar2 = (float*)std::array<float, 3ul>::operator[]((array<float, 3ul>*)param_1, 1);
                        *pfVar2 = fVar10 * fVar4 - fVar9;
                        fVar10 = (float)::cos(fVar11 + 4.1887903);
                        pfVar2 = (float*)std::array<float, 3ul>::operator[]((array<float, 3ul>*)param_1, 2);
                        *pfVar2 = fVar10 * fVar4 - fVar9;
                        return 3;
                    }
                    fVar4 = (float)::sqrt(fVar8);
                    fVar10 = (float)(anonymous namespace)::CubeRealRoot(fVar4 - fVar6);
                    fVar4 = (float)(anonymous namespace)::CubeRealRoot(fVar4 + fVar6);
                    fVar4 = (fVar9 * -0.33333334 + fVar10) - fVar4;
                    pfVar2 = (float*)std::array<float, 3ul>::operator[]((array<float, 3ul>*)param_1, 0);
                    goto LAB_100c63326;
                }
                fVar4 = (float)(anonymous namespace)::CubeRealRoot(fVar10 * -0.018518519);
                pfVar2 = (float*)std::array<float, 3ul>::operator[]((array<float, 3ul>*)param_1, 0);
                *pfVar2 = (fVar4 + fVar4) - fVar9 * 0.33333334;
                fVar4 = -(fVar9 * 0.33333334 + fVar4);
                pfVar2 = (float*)std::array<float, 3ul>::operator[]((array<float, 3ul>*)param_1, 1);
            }
            *pfVar2 = fVar4;
            iVar1 = 2;
        }
        return iVar1;
    }

    // 0x100c65d00, 112 bytes, placed by class name
    // HornersMethod(std::array<float, 4ul>*, int, float)
    /* HornersMethod(std::array<float, 4ul>*, int, float) */

    void HornersMethod(array* param_1, int param_2, float param_3) {
        long lVar1;

        std::array<float, 4ul>::operator[]((array<float, 4ul>*)param_1, (long)param_2);
        if (0 < param_2) {
            lVar1 = (long)param_2 + 1;
            do {
                std::array<float, 4ul>::operator[]((array<float, 4ul>*)param_1, lVar1 - 2);
                lVar1 = lVar1 + -1;
            } while (1 < lVar1);
        }
    }

    // 0x100c65d80, 1136 bytes, placed by class name
    // FindZeroOfPolynomialWithinInterval(std::array<float, 4ul>*, int, float, float, float)
    /* FindZeroOfPolynomialWithinInterval(std::array<float, 4ul>*, int, float,
   float, float) */

    ulong FindZeroOfPolynomialWithinInterval(array* param_1, int param_2, float param_3, float param_4, float param_5) {
        bool bVar1;
        bool bVar2;
        float fVar3;
        float fVar4;
        float fVar5;
        float fVar6;
        float fVar7;
        float fVar8;
        float fVar9;
        float fVar10;
        float fVar11;
        float fVar12;
        undefined4 in_XMM1_Db;
        undefined8 local_78;
        float local_58;
        float local_54;
        float local_50;
        float local_4c;
        float local_48;
        float local_34;

        local_78 = CONCAT44(in_XMM1_Db, param_4);
        fVar3 = (float)HornersMethod(param_1, param_2, param_3);
        fVar4 = (float)::abs(fVar3);
        if (1.1920929e-07 <= fVar4) {
            local_34 = (float)HornersMethod(param_1, param_2, param_4);
            fVar4 = (float)::abs(local_34);
            if (1.1920929e-07 <= fVar4) {
                bVar2 = true;
                local_50 = 0.0;
                local_58 = 0.0;
                local_54 = 0.0;
                local_48 = 0.0;
                do {
                    fVar4 = local_48;
                    if (bVar2) {
                        local_58 = param_4 - param_3;
                        bVar2 = false;
                        local_50 = param_3;
                        fVar4 = fVar3;
                        local_54 = local_58;
                    }
                    fVar5 = (float)::abs(fVar4);
                    fVar6 = (float)::abs(local_34);
                    if (fVar6 <= fVar5) {
                        local_4c = local_34;
                        fVar5 = param_4;
                        local_48 = fVar4;
                        local_34 = fVar3;
                    } else {
                        local_48 = local_34;
                        fVar5 = local_50;
                        local_50 = param_4;
                        local_4c = fVar4;
                        param_3 = param_4;
                    }
                    fVar3 = (float)::abs(fVar5);
                    fVar4 = fVar3 * 2.3841858e-07 + param_5 * 0.5;
                    fVar3 = local_50 - fVar5;
                    fVar6 = fVar3 * 0.5;
                    fVar7 = (float)::abs(fVar6);
                    bVar1 = local_4c == 0.0;
                    if (bVar1 || fVar7 <= fVar4) {
                        fVar3 = local_34;
                        param_4 = fVar5;
                    } else {
                        fVar8 = (float)::abs(local_54);
                        fVar10 = fVar6;
                        fVar12 = fVar6;
                        if (fVar4 <= fVar8) {
                            fVar8 = (float)::abs(local_34);
                            fVar9 = (float)::abs(local_4c);
                            if (fVar9 < fVar8) {
                                fVar8 = local_4c / local_34;
                                if (param_3 == local_50) {
                                    fVar11 = 1.0 - fVar8;
                                    fVar9 = fVar3;
                                } else {
                                    local_34 = local_34 * (1.0 / local_48);
                                    fVar9 = (1.0 / local_48) * local_4c;
                                    fVar11 = fVar9 + -1.0;
                                    fVar9 = (param_3 - fVar5) * fVar11 + (local_34 - fVar9) * fVar3 * local_34;
                                    fVar11 = (fVar8 + -1.0) * fVar11 * (local_34 + -1.0);
                                }
                                fVar9 = fVar9 * fVar8;
                                fVar8 = fVar9;
                                if (fVar9 <= 0.0) {
                                    fVar8 = -fVar9;
                                }
                                fVar11 = (float)(~-(uint)(0.0 < fVar9) & (uint)fVar11 |
                                                 (uint)-fVar11 & -(uint)(0.0 < fVar9));
                                fVar9 = (float)::abs(fVar11 * fVar4);
                                if ((fVar8 + fVar8 < fVar3 * 1.5 * fVar11 - fVar9) &&
                                    (fVar3 = (float)::abs(local_54 * 0.5 * fVar11), fVar8 < fVar3)) {
                                    fVar10 = fVar8 / fVar11;
                                    fVar12 = local_58;
                                }
                            }
                        }
                        fVar3 = (float)::abs(fVar10);
                        if (fVar3 <= fVar4) {
                            if (fVar6 <= 0.0) {
                                param_4 = fVar5 - fVar4;
                            } else {
                                param_4 = fVar4 + fVar5;
                            }
                        } else {
                            param_4 = fVar10 + fVar5;
                        }
                        fVar6 = (float)HornersMethod(param_1, param_2, param_4);
                        fVar3 = (float)::abs(local_48);
                        if (0.0 < (fVar6 * local_48) / fVar3) {
                            bVar2 = true;
                        }
                        param_3 = fVar5;
                        fVar3 = local_4c;
                        local_4c = fVar6;
                        local_58 = fVar10;
                        local_54 = fVar12;
                    }
                    local_78 = (ulong)(uint)param_4;
                    local_34 = local_4c;
                } while (!bVar1 && fVar7 > fVar4);
            }
        } else {
            local_78 = (ulong)(uint)param_3;
        }
        return local_78;
    }

    // 0x100c661f0, 1328 bytes, placed by class name
    // FindPolynomialRoots(std::array<float, 4ul>&, std::array<float, 4ul>&, int, float, bool, float, bool)
    /* FindPolynomialRoots(std::array<float, 4ul>&, std::array<float, 4ul>&, int,
   float, bool, float, bool) */

    ulong FindPolynomialRoots(array* param_1, array* param_2, int param_3, float param_4, bool param_5, float param_6,
                              bool param_7) {
        bool bVar1;
        uint uVar2;
        float* pfVar3;
        undefined7 in_register_00000009;
        int iVar4;
        ulong uVar5;
        ulong uVar6;
        undefined7 in_register_00000081;
        int iVar7;
        array* paVar8;
        ulong uVar9;
        float fVar10;
        float fVar11;
        array<float, 4ul> local_c8[16];
        array local_b8[16];
        long local_a8;
        ulong local_a0;
        array<float, 4ul> local_98[16];
        undefined1 local_88[16];
        float local_6c;
        undefined4 local_68;
        uint local_64;
        float local_58;
        undefined4 uStack_54;
        undefined4 uStack_50;
        undefined4 uStack_4c;
        float local_48;
        float local_44;
        uint local_40;
        float local_3c;
        float local_34;

        local_68 = (undefined4)CONCAT71(in_register_00000081, param_7);
        local_40 = (uint)CONCAT71(in_register_00000009, param_5);
        local_3c = param_4;
        if (param_3 < 0) {
            local_58 = 0.0;
        } else {
            local_58 = 0.0;
            uVar5 = 0;
            do {
                pfVar3 = (float*)std::array<float, 4ul>::operator[]((array<float, 4ul>*)param_2, uVar5);
                fVar10 = (float)::abs(*pfVar3);
                local_58 = local_58 + fVar10;
                uVar5 = uVar5 + 1;
            } while (param_3 + 1 != uVar5);
        }
        local_34 = (float)::abs(local_3c);
        fVar10 = (float)::abs(param_6);
        fVar10 = (float)(int)(param_3 + 1U) * 1.1920929e-07 * (fVar10 + local_34);
        uVar5 = 4294967295;
        if (fVar10 < local_58) {
            local_88 = ZEXT416((uint)fVar10);
            if (-1 < param_3) {
                uVar5 = 0;
                do {
                    pfVar3 = (float*)std::array<float, 4ul>::operator[]((array<float, 4ul>*)param_2, uVar5);
                    local_34 = *pfVar3 / local_58;
                    pfVar3 = (float*)std::array<float, 4ul>::operator[](local_98, uVar5);
                    *pfVar3 = local_34;
                    uVar5 = uVar5 + 1;
                } while (param_3 + 1U != uVar5);
            }
            uVar5 = (long)param_3;
            do {
                uVar6 = uVar5;
                pfVar3 = (float*)std::array<float, 4ul>::operator[](local_98, uVar6);
                fVar10 = (float)::abs(*pfVar3);
                paVar8 = param_1;
                uVar5 = uVar6 - 1;
            } while (fVar10 < (float)local_88._0_4_);
            iVar7 = (int)uVar6;
            if (iVar7 == 1) {
                pfVar3 = (float*)std::array<float, 4ul>::operator[](local_98, 0);
                local_58 = -*pfVar3;
                uStack_54 = 2147483648;
                uStack_50 = 2147483648;
                uStack_4c = 2147483648;
                pfVar3 = (float*)std::array<float, 4ul>::operator[](local_98, 1);
                local_58 = local_58 / *pfVar3;
                pfVar3 = (float*)std::array<float, 4ul>::operator[]((array<float, 4ul>*)paVar8, 0);
                *pfVar3 = local_58;
                fVar10 = (float)local_88._0_4_;
                if ((char)local_40 == '\0') {
                    fVar10 = -(float)local_88._0_4_;
                }
                fVar11 = -(float)local_88._0_4_;
                if ((char)local_68 == '\0') {
                    fVar11 = (float)local_88._0_4_;
                }
                bVar1 = fVar11 + local_58 < param_6;
                uVar5 = (ulong)(local_3c < fVar10 + local_58 && bVar1);
                if (local_3c < fVar10 + local_58 && bVar1) {
                    if (((char)local_40 == '\0') || (local_3c <= local_58)) {
                        if ((char)local_68 == '\0') {
                            return uVar5;
                        }
                        local_3c = param_6;
                        if (local_58 <= param_6) {
                            return uVar5;
                        }
                    }
                    *pfVar3 = local_3c;
                }
            } else {
                uVar5 = uVar6 & 4294967295;
                if (iVar7 != 0) {
                    iVar4 = (int)(uVar6 - 1);
                    local_34 = (float)iVar7;
                    if (0 < iVar7) {
                        uVar5 = 1;
                        do {
                            local_58 = (float)(int)uVar5;
                            pfVar3 = (float*)std::array<float, 4ul>::operator[](local_98, uVar5);
                            local_58 = local_58 * *pfVar3;
                            pfVar3 = (float*)std::array<float, 4ul>::operator[](local_c8, uVar5 - 1);
                            *pfVar3 = local_58;
                            uVar5 = uVar5 + 1;
                        } while (uVar5 != iVar4 + 2);
                    }
                    uVar5 = 0;
                    uVar2 = FindPolynomialRoots(local_b8, (array*)local_c8, iVar4, local_3c, false, param_6, false);
                    if (((uVar2 != 4294967295) && (-1 < (int)uVar2)) && (-1 < (int)local_34)) {
                        local_40 = local_40 ^ 1;
                        local_a0 = (ulong)uVar2;
                        local_a8 = (long)(int)uVar2;
                        uVar9 = 0;
                        local_58 = 0.0;
                        fVar10 = 0.0;
                        uVar6 = 0;
                        uVar5 = 0;
                        paVar8 = param_1;
                        uVar2 = local_40;
                        do {
                            if (uVar9 == 0) {
                                local_48 = (float)HornersMethod((array*)local_98, (int)local_34, local_3c);
                                fVar10 = (float)::abs(local_48);
                                if (fVar10 <= (float)local_88._0_4_ && (char)uVar2 == '\0') {
                                    iVar7 = (int)uVar5;
                                    uVar5 = (ulong)(iVar7 + 1);
                                    pfVar3 = (float*)std::array<float, 4ul>::operator[]((array<float, 4ul>*)paVar8,
                                                                                        (long)iVar7);
                                    *pfVar3 = local_3c;
                                }
                                local_6c = local_3c;
                                if (local_a0 == 0)
                                    goto LAB_100c6645d;
                            LAB_100c664cc:
                                pfVar3 =
                                    (float*)std::array<float, 4ul>::operator[]((array<float, 4ul>*)local_b8, uVar9);
                                local_58 = *pfVar3;
                            } else {
                                local_6c = local_58;
                                local_48 = fVar10;
                                if (local_a0 != uVar9)
                                    goto LAB_100c664cc;
                            LAB_100c6645d:
                                uVar6 = 0;
                                local_58 = param_6;
                            }
                            fVar10 = (float)HornersMethod((array*)local_98, (int)local_34, local_58);
                            if ((uVar6 & 1) == 0) {
                                local_44 = fVar10;
                                fVar10 = (float)::abs(fVar10);
                                iVar7 = (int)uVar5;
                                if ((float)local_88._0_4_ <= fVar10) {
                                    if (((local_48 < 0.0) && (0.0 < local_44)) ||
                                        ((0.0 < local_48 && (local_44 < 0.0)))) {
                                        local_64 = (uint)uVar6;
                                        local_48 = (float)FindZeroOfPolynomialWithinInterval(
                                            (array*)local_98, (int)local_34, local_6c, local_58, 0.0);
                                        paVar8 = param_1;
                                        pfVar3 = (float*)std::array<float, 4ul>::operator[]((array<float, 4ul>*)param_1,
                                                                                            (long)iVar7);
                                        *pfVar3 = local_48;
                                        if (iVar7 < 1) {
                                            uVar5 = (ulong)(iVar7 + 1U);
                                        } else {
                                            pfVar3 = (float*)std::array<float, 4ul>::operator[](
                                                (array<float, 4ul>*)paVar8, (ulong)(iVar7 - 1));
                                            if (local_48 - (float)local_88._0_4_ <= *pfVar3) {
                                                *pfVar3 = (*pfVar3 + local_48) * 0.5;
                                            } else {
                                                uVar5 = (ulong)(iVar7 + 1U);
                                            }
                                            paVar8 = param_1;
                                        }
                                        uVar6 = (ulong)local_64;
                                        fVar10 = local_44;
                                        uVar2 = local_40;
                                    } else {
                                        paVar8 = param_1;
                                        fVar10 = local_44;
                                    }
                                } else {
                                    if ((local_a0 != uVar9) || ((char)local_68 != '\0')) {
                                        uVar5 = (ulong)(iVar7 + 1);
                                        pfVar3 = (float*)std::array<float, 4ul>::operator[]((array<float, 4ul>*)paVar8,
                                                                                            (long)iVar7);
                                        *pfVar3 = local_58;
                                        uVar6 = CONCAT71((int7)(uVar6 >> 8), 1);
                                    }
                                    fVar10 = local_44;
                                }
                            } else {
                                uVar6 = 0;
                            }
                        } while (((long)uVar9 < local_a8) && (uVar9 = uVar9 + 1, (int)uVar5 <= (int)local_34));
                    }
                }
            }
        }
        return uVar5;
    }

} // namespace jag::math::polynomial

// 0x100c635e0, 16 bytes, placed by debug map only (low confidence)
// fabs(float)
ulong fabs(float param_1) {
    undefined4 in_XMM0_Db;

    return CONCAT44(in_XMM0_Db, param_1) & 9223372034707292159;
}
