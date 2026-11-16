// libs/math/polynomial/Polynomial.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.math

#include "Polynomial.h"

namespace jag::math::polynomial {
    // 0x100c63240
    int FindCubicRoots(std::array<float, 3ul>* arg1, float arg2, float arg3, float arg4, float arg5) {
        int iVar1;
        float* pfVar2;
        uint32_t* puVar3;
        uint32_t uVar5;
        float arg1_00;
        float fVar6;
        float fVar7;

        if (arg2 == 0.0) {
            iVar1 = FindQuadraticRoots<3ul>(arg1, arg3, arg4, arg5);
            return iVar1;
        }
        float fVar9 = 1.0 / arg2;
        float fVar8 = arg3 * fVar9;
        float fVar10 = arg4 * fVar9 * 3.0 - fVar8 * fVar8;
        float fVar4 = (float)pow(fVar8, 3.0);
        fVar9 = fVar4 + fVar4 + arg5 * 27.0 * fVar9 + fVar8 * -9.0 * arg4 * fVar9;
        fVar4 = fVar9 * 0.037037037f;
        if (fVar10 * 0.33333334f == 0.0) {
            fVar4 = (float)(anonymous namespace)::CubeRealRoot(-fVar4);
            pfVar2 = (float*)(*arg1)[0];
        LAB_100c63326:
            *pfVar2 = fVar4;
            iVar1 = 1;
        } else {
            if (fVar4 == 0.0) {
                uVar5 = ::sqrt(-(fVar10 * 0.33333334f));
                puVar3 = (uint32_t*)(*arg1)[0];
                *puVar3 = uVar5;
                pfVar2 = (float*)(*arg1)[1];
                fVar4 = -*pfVar2;
            } else {
                arg1_00 = fVar9 * 0.018518519f;
                fVar6 = (float)pow(arg1_00, 2.0);
                fVar7 = (float)pow(fVar10 * 0.11111112f, 3.0);
                fVar7 = fVar7 + fVar6;
                if (fVar7 != 0.0) {
                    if (fVar7 <= 0.0) {
                        fVar9 = (float)pow(fVar10 * -0.11111112, 3.0);
                        fVar9 = (float)::sqrt(fVar9);
                        fVar10 = (float)acos(-fVar4 / (fVar9 + fVar9));
                        fVar4 = (float)(anonymous namespace)::CubeRealRoot(fVar9);
                        fVar4 = fVar4 + fVar4;
                        fVar8 = fVar8 * 0.33333334f;
                        fVar10 = fVar10 * 0.33333334f;
                        fVar9 = (float)::cos(fVar10);
                        pfVar2 = (float*)(*arg1)[0];
                        *pfVar2 = fVar9 * fVar4 - fVar8;
                        fVar9 = (float)::cos(fVar10 + 2.0943952f);
                        pfVar2 = (float*)(*arg1)[1];
                        *pfVar2 = fVar9 * fVar4 - fVar8;
                        fVar9 = (float)::cos(fVar10 + 4.1887903f);
                        pfVar2 = (float*)(*arg1)[2];
                        *pfVar2 = fVar9 * fVar4 - fVar8;
                        return 3;
                    }
                    fVar4 = (float)::sqrt(fVar7);
                    fVar9 = (float)(anonymous namespace)::CubeRealRoot(fVar4 - arg1_00);
                    fVar4 = (float)(anonymous namespace)::CubeRealRoot(fVar4 + arg1_00);
                    fVar4 = (fVar8 * -0.33333334 + fVar9) - fVar4;
                    pfVar2 = (float*)(*arg1)[0];
                    goto LAB_100c63326;
                }
                fVar4 = (float)(anonymous namespace)::CubeRealRoot(fVar9 * -0.018518519);
                pfVar2 = (float*)(*arg1)[0];
                *pfVar2 = (fVar4 + fVar4) - fVar8 * 0.33333334f;
                fVar4 = -(fVar8 * 0.33333334f + fVar4);
                pfVar2 = (float*)(*arg1)[1];
            }
            *pfVar2 = fVar4;
            iVar1 = 2;
        }
        return iVar1;
    }

    // 0x100c65d00
    void HornersMethod(std::array<float, 4ul>* arg1, int arg2, float arg3) {
        long lVar1;

        (*arg1)[(long)arg2];
        if (0 < arg2) {
            lVar1 = (long)arg2 + 1;
            do {
                (*arg1)[lVar1 - 2];
                lVar1 = lVar1 - 1;
            } while (1 < lVar1);
        }
    }

    // 0x100c65d80
    unsigned long FindZeroOfPolynomialWithinInterval(std::array<float, 4ul>* arg1, int arg2, float arg3, float arg4,
                                                     float arg5) {
        bool bVar1;
        bool bVar2;
        float fVar5;
        float fVar6;
        float fVar7;
        float fVar8;
        float fVar9;
        float arg1_00;
        float fVar10;
        float fVar11;
        uint32_t in_XMM1_Db;
        float local_58;
        float local_54;
        float local_50;
        float local_4c;
        float local_48;
        float local_34;

        return local_78 = (((uint64_t)in_XMM1_Db << 32) | (uint32_t)arg4);
        float fVar3 = (float)HornersMethod(arg1, arg2, arg3);
        float fVar4 = (float)::abs(fVar3);
        if (1.1920929e-07 <= fVar4) {
            local_34 = (float)HornersMethod(arg1, arg2, arg4);
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
                        local_58 = arg4 - arg3;
                        bVar2 = false;
                        local_50 = arg3;
                        fVar4 = fVar3;
                        local_54 = local_58;
                    }
                    fVar5 = (float)::abs(fVar4);
                    fVar6 = (float)::abs(local_34);
                    if (fVar6 <= fVar5) {
                        local_4c = local_34;
                        fVar5 = arg4;
                        local_48 = fVar4;
                        local_34 = fVar3;
                    } else {
                        local_48 = local_34;
                        fVar5 = local_50;
                        local_50 = arg4;
                        local_4c = fVar4;
                        arg3 = arg4;
                    }
                    fVar3 = (float)::abs(fVar5);
                    fVar4 = fVar3 * 2.3841858e-07 + arg5 * 0.5;
                    fVar3 = local_50 - fVar5;
                    fVar6 = fVar3 * 0.5;
                    fVar7 = (float)::abs(fVar6);
                    bVar1 = local_4c == 0.0;
                    if (bVar1 || fVar7 <= fVar4) {
                        fVar3 = local_34;
                        arg4 = fVar5;
                    } else {
                        fVar8 = (float)::abs(local_54);
                        arg1_00 = fVar6;
                        fVar11 = fVar6;
                        if (fVar4 <= fVar8) {
                            fVar8 = (float)::abs(local_34);
                            fVar9 = (float)::abs(local_4c);
                            if (fVar9 < fVar8) {
                                fVar8 = local_4c / local_34;
                                if (arg3 == local_50) {
                                    fVar10 = 1.0 - fVar8;
                                    fVar9 = fVar3;
                                } else {
                                    local_34 = local_34 * (1.0 / local_48);
                                    fVar9 = (1.0 / local_48) * local_4c;
                                    fVar10 = fVar9 - 1.0;
                                    fVar9 = (arg3 - fVar5) * fVar10 + (local_34 - fVar9) * fVar3 * local_34;
                                    fVar10 = (fVar8 - 1.0) * fVar10 * (local_34 - 1.0);
                                }
                                fVar9 = fVar9 * fVar8;
                                fVar8 = fVar9;
                                if (fVar9 <= 0.0) {
                                    fVar8 = -fVar9;
                                }
                                fVar10 = (float)(~-(unsigned int)(0.0 < fVar9) & (unsigned int)fVar10 |
                                                 (unsigned int)-fVar10 & -(unsigned int)(0.0 < fVar9));
                                fVar9 = (float)::abs(fVar10 * fVar4);
                                if ((fVar8 + fVar8 < fVar3 * 1.5 * fVar10 - fVar9) &&
                                    (fVar3 = (float)::abs(local_54 * 0.5 * fVar10), fVar8 < fVar3)) {
                                    arg1_00 = fVar8 / fVar10;
                                    fVar11 = local_58;
                                }
                            }
                        }
                        fVar3 = (float)::abs(arg1_00);
                        if (fVar3 <= fVar4) {
                            if (fVar6 <= 0.0) {
                                arg4 = fVar5 - fVar4;
                            } else {
                                arg4 = fVar4 + fVar5;
                            }
                        } else {
                            arg4 = arg1_00 + fVar5;
                        }
                        fVar6 = (float)HornersMethod(arg1, arg2, arg4);
                        fVar3 = (float)::abs(local_48);
                        if (0.0 < (fVar6 * local_48) / fVar3) {
                            bVar2 = true;
                        }
                        arg3 = fVar5;
                        fVar3 = local_4c;
                        local_4c = fVar6;
                        local_58 = arg1_00;
                        local_54 = fVar11;
                    }
                    local_78 = (unsigned long)(unsigned int)arg4;
                    local_34 = local_4c;
                } while (!bVar1 && fVar7 > fVar4);
            }
        } else {
            local_78 = (unsigned long)(unsigned int)arg3;
        }
        return local_78;
    }

    // 0x100c661f0
    unsigned long FindPolynomialRoots(std::array<float, 4ul>& arg1, std::array<float, 4ul>& arg2, int arg3, float arg4,
                                      bool arg5, float arg6, bool arg7) {
        bool bVar1;
        unsigned int uVar2;
        float* pfVar3;
        uint64_t in_register_00000009;
        int arg3_00;
        unsigned long uVar4;
        unsigned long uVar5;
        uint64_t in_register_00000081;
        int iVar6;
        array<float, _4ul>* paVar7;
        unsigned long arg1_00;
        float fVar8;
        float fVar9;
        array<float, 4ul> local_c8;
        array<float, _4ul> local_b8;
        long local_a8;
        unsigned long local_a0;
        array<float, 4ul> local_98;
        uint8_t local_88[16];
        float local_6c;
        unsigned int local_64;
        float local_58;
        uint32_t uStack_54;
        uint32_t uStack_50;
        uint32_t uStack_4c;
        float local_48;
        float local_44;

        uint32_t local_68 = (uint32_t)(((uint64_t)in_register_00000081 << 8) | (uint8_t)arg7);
        unsigned int local_40 = (unsigned int)(((uint64_t)in_register_00000009 << 8) | (uint8_t)arg5);
        float local_3c = arg4;
        if (arg3 < 0) {
            local_58 = 0.0;
        } else {
            local_58 = 0.0;
            uVar4 = 0;
            do {
                pfVar3 = &arg2[uVar4];
                fVar8 = (float)::abs(*pfVar3);
                local_58 = local_58 + fVar8;
                uVar4 = uVar4 + 1;
            } while (arg3 + 1 != uVar4);
        }
        float local_34 = (float)::abs(local_3c);
        fVar8 = (float)::abs(arg6);
        fVar8 = (float)(int)(arg3 + 1U) * 1.1920929e-07 * (fVar8 + local_34);
        uVar4 = 4294967295;
        if (fVar8 < local_58) {
            local_88 = (unsigned __int128)((unsigned int)fVar8);
            if (-1 < arg3) {
                uVar4 = 0;
                do {
                    pfVar3 = &arg2[uVar4];
                    local_34 = *pfVar3 / local_58;
                    pfVar3 = &local_98[uVar4];
                    *pfVar3 = local_34;
                    uVar4 = uVar4 + 1;
                } while (arg3 + 1U != uVar4);
            }
            uVar4 = (long)arg3;
            do {
                uVar5 = uVar4;
                pfVar3 = &local_98[uVar5];
                fVar8 = (float)::abs(*pfVar3);
                paVar7 = arg1;
                uVar4 = uVar5 - 1;
            } while (fVar8 < (float)local_88._0_4_);
            iVar6 = (int)uVar5;
            if (iVar6 == 1) {
                pfVar3 = &local_98[0];
                local_58 = -*pfVar3;
                uStack_54 = 2147483648;
                uStack_50 = 2147483648;
                uStack_4c = 2147483648;
                pfVar3 = &local_98[1];
                local_58 = local_58 / *pfVar3;
                pfVar3 = (float*)(*paVar7)[0];
                *pfVar3 = local_58;
                fVar8 = (float)local_88._0_4_;
                if ((char)local_40 == '\0') {
                    fVar8 = -(float)local_88._0_4_;
                }
                fVar9 = -(float)local_88._0_4_;
                if ((char)local_68 == '\0') {
                    fVar9 = (float)local_88._0_4_;
                }
                bVar1 = fVar9 + local_58 < arg6;
                uVar4 = (unsigned long)(local_3c < fVar8 + local_58 && bVar1);
                if (local_3c < fVar8 + local_58 && bVar1) {
                    if (((char)local_40 == '\0') || (local_3c <= local_58)) {
                        if ((char)local_68 == '\0') {
                            return uVar4;
                        }
                        local_3c = arg6;
                        if (local_58 <= arg6) {
                            return uVar4;
                        }
                    }
                    *pfVar3 = local_3c;
                }
            } else {
                uVar4 = uVar5 & 4294967295;
                if (iVar6 != 0) {
                    arg3_00 = (int)(uVar5 - 1);
                    local_34 = (float)iVar6;
                    if (0 < iVar6) {
                        uVar4 = 1;
                        do {
                            local_58 = (float)(int)uVar4;
                            pfVar3 = &local_98[uVar4];
                            local_58 = local_58 * *pfVar3;
                            pfVar3 = &local_c8[uVar4 - 1];
                            *pfVar3 = local_58;
                            uVar4 = uVar4 + 1;
                        } while (uVar4 != arg3_00 + 2);
                    }
                    uVar4 = 0;
                    uVar2 = FindPolynomialRoots(&local_b8, &local_c8, arg3_00, local_3c, false, arg6, false);
                    if (((uVar2 != 4294967295) && (-1 < (int)uVar2)) && (-1 < (int)local_34)) {
                        local_40 = local_40 ^ 1;
                        local_a0 = (unsigned long)uVar2;
                        local_a8 = (long)(int)uVar2;
                        arg1_00 = 0;
                        local_58 = 0.0;
                        fVar8 = 0.0;
                        uVar5 = 0;
                        uVar4 = 0;
                        paVar7 = arg1;
                        uVar2 = local_40;
                        do {
                            if (arg1_00 == 0) {
                                local_48 = (float)HornersMethod(&local_98, (int)local_34, local_3c);
                                fVar8 = (float)::abs(local_48);
                                if (fVar8 <= (float)local_88._0_4_ && (char)uVar2 == '\0') {
                                    iVar6 = (int)uVar4;
                                    uVar4 = (unsigned long)(iVar6 + 1);
                                    pfVar3 = (float*)(*paVar7)[(long)iVar6];
                                    *pfVar3 = local_3c;
                                }
                                local_6c = local_3c;
                                if (local_a0 == 0)
                                    goto LAB_100c6645d;
                            LAB_100c664cc:
                                pfVar3 = &local_b8[arg1_00];
                                local_58 = *pfVar3;
                            } else {
                                local_6c = local_58;
                                local_48 = fVar8;
                                if (local_a0 != arg1_00)
                                    goto LAB_100c664cc;
                            LAB_100c6645d:
                                uVar5 = 0;
                                local_58 = arg6;
                            }
                            fVar8 = (float)HornersMethod(&local_98, (int)local_34, local_58);
                            if ((uVar5 & 1) == 0) {
                                local_44 = fVar8;
                                fVar8 = (float)::abs(fVar8);
                                iVar6 = (int)uVar4;
                                if ((float)local_88._0_4_ <= fVar8) {
                                    if (((local_48 < 0.0) && (0.0 < local_44)) ||
                                        ((0.0 < local_48 && (local_44 < 0.0)))) {
                                        local_64 = (unsigned int)uVar5;
                                        local_48 = (float)FindZeroOfPolynomialWithinInterval(&local_98, (int)local_34,
                                                                                             local_6c, local_58, 0.0);
                                        paVar7 = arg1;
                                        pfVar3 = &arg1[(long)iVar6];
                                        *pfVar3 = local_48;
                                        if (iVar6 < 1) {
                                            uVar4 = (unsigned long)(iVar6 + 1U);
                                        } else {
                                            pfVar3 = (float*)(*paVar7)[(unsigned long)(iVar6 - 1)];
                                            if (local_48 - (float)local_88._0_4_ <= *pfVar3) {
                                                *pfVar3 = (*pfVar3 + local_48) * 0.5;
                                            } else {
                                                uVar4 = (unsigned long)(iVar6 + 1U);
                                            }
                                            paVar7 = arg1;
                                        }
                                        uVar5 = (unsigned long)local_64;
                                        fVar8 = local_44;
                                        uVar2 = local_40;
                                    } else {
                                        paVar7 = arg1;
                                        fVar8 = local_44;
                                    }
                                } else {
                                    if ((local_a0 != arg1_00) || ((char)local_68 != '\0')) {
                                        uVar4 = (unsigned long)(iVar6 + 1);
                                        pfVar3 = (float*)(*paVar7)[(long)iVar6];
                                        *pfVar3 = local_58;
                                        uVar5 = (((uint64_t)((int64_t)(uVar5 >> 8)) << 8) | (uint8_t)1);
                                    }
                                    fVar8 = local_44;
                                }
                            } else {
                                uVar5 = 0;
                            }
                        } while (((long)arg1_00 < local_a8) && (arg1_00 = arg1_00 + 1, (int)uVar4 <= (int)local_34));
                    }
                }
            }
        }
        return uVar4;
    }

} // namespace jag::math::polynomial

// 0x100c635e0
unsigned long fabs(float arg1) {
    uint32_t in_XMM0_Db;

    return (((uint64_t)in_XMM0_Db << 32) | (uint32_t)arg1) & 9223372034707292159;
}
