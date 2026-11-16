// libs/math/noise/NoiseGenerator.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.math

namespace jag::math {
    // 0x100c65060, 208 bytes, placed by debug map only (low confidence)
    // GetSummedNoise(double, double, int)
    void GetSummedNoise(double param_1, double param_2, int param_3) {
        int iVar1;
        double dVar2;
        double dVar3;
        int* piVar4;
        double* pdVar5;
        ulong uVar6;
        double local_38;
        int local_24;
        double local_20;

        local_24 = 2;
        piVar4 = std::max<int>(&local_24, (int*)&MAX_OCTAVES);
        iVar1 = *piVar4;
        if (1 < iVar1) {
            local_20 = 0.0;
            uVar6 = 0;
            do {
                local_38 = (double)pow<float, int>(SUB84(local_20, 0), (int)uVar6);
                dVar2 = (double)pow<double, int>(param_2, (int)uVar6);
                pdVar5 = (double*)std::array<double, 8ul>::operator[](uVar6);
                dVar3 = (double)InterpolatedNoise((double)(int)local_38 * param_1, *pdVar5);
                local_20 = local_20 + dVar3 * dVar2;
                uVar6 = uVar6 + 1;
            } while (iVar1 - 1 != uVar6);
        }
    }

    // 0x100c65170, 128 bytes, placed by debug map only (low confidence)
    // InterpolatedNoise(double, double)
    void InterpolatedNoise(double param_1, double param_2) {
        double dVar1;
        double dVar2;
        double dVar3;

        dVar1 = (double)(int)param_1;
        dVar2 = (double)SmoothedNoise(dVar1, param_2);
        dVar3 = (double)SmoothedNoise(dVar1 + *(double*)(&DAT_100d99960 + (ulong)(0.0 < param_1) * 8), param_2);
        CosineInterpolate(dVar2, dVar3, param_1 - dVar1);
    }

    // 0x100c65210, 224 bytes, placed by debug map only (low confidence)
    // GetSummedNoise2d(double, double, double, int)
    void GetSummedNoise2d(double param_1, double param_2, double param_3, int param_4) {
        int iVar1;
        double dVar2;
        double dVar3;
        int* piVar4;
        double* pdVar5;
        ulong uVar6;
        double local_38;
        int local_24;
        double local_20;

        local_24 = 2;
        piVar4 = std::max<int>(&local_24, (int*)&MAX_OCTAVES);
        iVar1 = *piVar4;
        if (1 < iVar1) {
            local_20 = 0.0;
            uVar6 = 0;
            do {
                local_38 = (double)pow<float, int>(SUB84(local_20, 0), (int)uVar6);
                dVar2 = (double)pow<double, int>(param_3, (int)uVar6);
                pdVar5 = (double*)std::array<double, 8ul>::operator[](uVar6);
                dVar3 = (double)InterpolatedNoise2d((double)(int)local_38 * param_1, (double)(int)local_38 * param_2,
                                                    *pdVar5);
                local_20 = local_20 + dVar3 * dVar2;
                uVar6 = uVar6 + 1;
            } while (iVar1 - 1 != uVar6);
        }
    }

    // 0x100c652f0, 320 bytes, placed by debug map only (low confidence)
    // InterpolatedNoise2d(double, double, double)
    void InterpolatedNoise2d(double param_1, double param_2, double param_3) {
        double dVar1;
        double dVar2;
        double dVar3;
        double dVar4;
        double dVar5;
        double dVar6;
        double dVar7;

        dVar7 = (double)(int)param_1;
        dVar6 = (double)(int)param_2;
        dVar1 = (double)SmoothedNoise2d(dVar7, dVar6, param_3);
        dVar4 =
            (double)(~-(ulong)(0.0 < param_1) & 13830554455654793216 | -(ulong)(0.0 < param_1) & 4607182418800017408) +
            dVar7;
        dVar2 = (double)SmoothedNoise2d(dVar4, dVar6, param_3);
        dVar5 = (double)(~-(ulong)(0.0 < param_2) & 13830554455654793216 |
                         (ulong)((uint)(-(ulong)(0.0 < param_2) >> 32) & 1072693248) << 32) +
                dVar6;
        dVar3 = (double)SmoothedNoise2d(dVar7, dVar5, param_3);
        dVar4 = (double)SmoothedNoise2d(dVar4, dVar5, param_3);
        dVar1 = (double)CosineInterpolate(dVar1, dVar2, param_1 - dVar7);
        dVar2 = (double)CosineInterpolate(dVar3, dVar4, param_1 - dVar7);
        CosineInterpolate(dVar1, dVar2, param_2 - dVar6);
    }

    // 0x100c65430, 432 bytes, placed by debug map only (low confidence)
    // GetTiledSummedNoise2d(double, double, double, double, double, int)
    double GetTiledSummedNoise2d(double param_1, double param_2, double param_3, double param_4, double param_5,
                                 int param_6) {
        double* pdVar1;
        int iVar2;
        double dVar3;
        double dVar4;
        double local_58;
        double local_50;
        double local_40;
        double local_38;
        double local_20;
        double local_18;

        local_18 = 2.0;
        local_40 = param_3;
        local_20 = param_4;
        pdVar1 = std::max<double>(&local_18, &local_40);
        local_40 = *pdVar1;
        local_18 = 2.0;
        local_38 = local_40;
        pdVar1 = std::max<double>(&local_18, &local_20);
        local_20 = *pdVar1;
        local_18 = param_1;
        local_58 = 0.0;
        local_50 = local_38;
        Wrap<double>(&local_18, &local_58, &local_50);
        local_18 = param_2;
        local_58 = 0.0;
        local_50 = local_20;
        pdVar1 = &local_18;
        Wrap<double>(pdVar1, &local_58, &local_50);
        iVar2 = (int)pdVar1;
        dVar3 = (double)GetSummedNoise2d(param_1, param_2, param_5, iVar2);
        local_38 = dVar3 * (local_40 - param_1) * (local_20 - param_2);
        dVar3 = (double)GetSummedNoise2d(param_1 - local_40, param_2, param_5, iVar2);
        local_38 = dVar3 * (local_20 - param_2) * param_1 + local_38;
        dVar3 = (double)GetSummedNoise2d(param_1 - local_40, param_2 - local_20, param_5, iVar2);
        dVar3 = dVar3 * param_1;
        dVar4 = (double)GetSummedNoise2d(param_1, param_2 - local_20, param_5, iVar2);
        return ((dVar4 * (local_40 - param_1) + dVar3) * param_2 + local_38) / (local_40 * local_20);
    }

    // 0x100c655f0, 80 bytes, inline, placed by debug map only (low confidence)
    // double Wrap<double>(double const&, double const&, double const&)
    double Wrap<double>(double* param_1, double* param_2, double* param_3) {
        double dVar1;
        double dVar2;

        dVar2 = *param_1;
        dVar1 = *param_2;
        if (dVar2 < dVar1) {
            do {
                dVar2 = (dVar2 - dVar1) + *param_3;
            } while (dVar2 < dVar1);
        }
        for (; *param_3 <= dVar2; dVar2 = (dVar2 + dVar1) - *param_3) {
        }
        return dVar2;
    }

    // 0x100c65640, 288 bytes, placed by debug map only (low confidence)
    // GetSummedGradientNoise3d(double, double, double, double, double, int, int, int)
    double GetSummedGradientNoise3d(double param_1, double param_2, double param_3, double param_4, double param_5,
                                    int param_6, int param_7, int param_8) {
        int* piVar1;
        int* piVar2;
        double dVar3;
        double local_40;
        int local_38[2];
        double local_30;
        int local_24;

        local_38[0] = 2;
        piVar2 = &local_24;
        local_24 = param_6;
        piVar1 = std::max<int>(local_38, piVar2);
        local_24 = *piVar1;
        if (param_7 < 1) {
            local_30 = 0.0;
        } else {
            local_30 = 0.0;
            local_40 = param_4;
            do {
                dVar3 = 1.0 / (double)local_24;
                dVar3 = (double)((ulong)(uint)(int)(dVar3 * (double)param_8))
                            ->GradientPerlinNoise3d(dVar3 * param_1, dVar3 * param_2, dVar3 * param_3, (int)piVar2);
                local_30 = local_30 + dVar3 * local_40;
                local_40 = local_40 * param_5;
                local_24 = local_24 / 2;
                local_38[1] = 2;
                piVar2 = &local_24;
                piVar1 = std::max<int>(local_38 + 1, &local_24);
                local_24 = *piVar1;
                param_7 = param_7 + -1;
            } while (param_7 != 0);
        }
        return local_30;
    }

    // 0x100c65760, 112 bytes, placed by debug map only (low confidence)
    // SmoothedNoise(double, double)
    double SmoothedNoise(double param_1, double param_2) {
        double dVar1;
        double dVar2;
        double dVar3;

        dVar1 = (double)Noise((int)param_1, param_1);
        dVar2 = (double)Noise((int)(param_1 + -1.0), param_1 + -1.0);
        dVar3 = (double)Noise((int)(param_1 + 1.0), param_1 + 1.0);
        return (dVar3 + dVar2) * 0.25 + dVar1 * 0.5;
    }

    // 0x100c657d0, 80 bytes, placed by debug map only (low confidence)
    // CosineInterpolate(double, double, double)
    double CosineInterpolate(double param_1, double param_2, double param_3) {
        double dVar1;

        dVar1 = (double)_cos(param_3 * 3.1415927410125732);
        return (dVar1 * 0.5 + 0.5) * param_1 + (0.5 - dVar1 * 0.5) * param_2;
    }

    // 0x100c65820, 320 bytes, placed by debug map only (low confidence)
    // SmoothedNoise2d(double, double, double)
    double SmoothedNoise2d(double param_1, double param_2, double param_3) {
        int iVar1;
        int iVar2;
        int iVar4;
        int iVar5;
        double dVar6;
        double dVar7;
        double dVar8;
        double dVar9;
        double dVar10;

        iVar5 = (int)(param_1 + -1.0);
        iVar4 = (int)(param_2 + -1.0);
        dVar6 = (double)Noise2d(iVar5, iVar4, param_1);
        iVar1 = (int)(param_1 + 1.0);
        dVar7 = (double)Noise2d(iVar1, iVar4, param_1 + 1.0);
        iVar2 = (int)(param_2 + 1.0);
        dVar8 = (double)Noise2d(iVar5, iVar2, param_2 + 1.0);
        dVar9 = (double)Noise2d(iVar1, iVar2, dVar8);
        dVar10 = (dVar9 + dVar8 + dVar7 + dVar6) * 0.0625;
        dVar6 = (double)Noise2d(iVar5, (int)param_2, dVar10);
        dVar7 = (double)Noise2d(iVar1, (int)param_2, dVar6);
        iVar1 = (int)param_1;
        dVar8 = (double)Noise2d(iVar1, iVar4, dVar7 + dVar6);
        dVar9 = (double)Noise2d(iVar1, iVar2, dVar8);
        dVar10 = (dVar9 + dVar8 + dVar7 + dVar6) * 0.125 + dVar10;
        dVar6 = (double)Noise2d(iVar1, (int)param_2, dVar10);
        return dVar6 * 0.25 + dVar10;
    }

    // 0x100c65960, 80 bytes, placed by debug map only (low confidence)
    // Noise(int, double)
    double Noise(int param_1, double param_2) {
        uint uVar1;

        uVar1 = param_1 << 13 ^ param_1;
        return (double)((float)((uVar1 * uVar1 * 15731 + 789221) * uVar1 + 1376312589 & 2147483647) * -9.313226e-10) +
               1.0;
    }

    // 0x100c659b0, 80 bytes, placed by debug map only (low confidence)
    // Noise2d(int, int, double)
    double Noise2d(int param_1, int param_2, double param_3) {
        uint uVar1;

        uVar1 = param_2 * 57 + param_1;
        uVar1 = uVar1 * 8192 ^ uVar1;
        return (double)((float)((uVar1 * uVar1 * 15731 + 789221) * uVar1 + 1376312589 & 2147483647) * -9.313226e-10) +
               1.0;
    }

    // 0x100c65a00, 64 bytes, placed by debug map only (low confidence)
    // Noise(int)
    double Noise(int param_1) {
        double in_XMM0_Qa;
        double dVar1;
        double dVar2;

        dVar1 = (double)Noise((int)this, in_XMM0_Qa);
        dVar2 = (double)_floor();
        return ABS(dVar1) - dVar2;
    }

    // 0x100c65a40, 64 bytes, placed by debug map only (low confidence)
    // Noise2d(int, int)
    double Noise2d(int param_1, int param_2) {
        double in_XMM0_Qa;
        double dVar1;
        double dVar2;

        dVar1 = (double)Noise2d((int)this, param_1, in_XMM0_Qa);
        dVar2 = (double)_floor();
        return ABS(dVar1) - dVar2;
    }

    // 0x100c65a80, 624 bytes, placed by debug map only (low confidence)
    // GenerateSummedGradientNoise3d(WrapArray<double>, unsigned long, double, double, double, int, int)
    void GenerateSummedGradientNoise3d(double param_1, double param_2, Layout* param_3, long param_4,
                                       undefined4 param_5, int param_6) {
        long lVar1;
        double* pdVar2;
        double* pdVar3;
        int* piVar4;
        ulong uVar5;
        ulong uVar6;
        int iVar7;
        undefined1 auVar8[16];
        double dVar9;
        double dVar10;
        double local_88;
        double local_78;
        double local_68;
        int local_50;
        double local_48;
        int local_3c;
        double local_38;

        local_48 = param_1;
        local_3c = param_5;
        lVar1 = eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::
            Layout::HeapBeginPtr(param_3);
        if (lVar1 != param_4 * param_4 * param_4) {
            /* WARNING: Subroutine does not return */
            LogAssert(
                "noiseArrayOut.size() == (noiseArraySizePerDim * noiseArraySizePerDim * noiseArraySizePerDim)",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/math/noise/NoiseGenerator.cpp",
                251, (char*)0);
        }
        pdVar2 = (double*)param_3->end();
        pdVar3 = (double*)param_3->end();
        local_38 = 0.0;
        std::fill<double*, double>(pdVar2, pdVar3, &local_38);
        local_38 = (double)CONCAT44(local_38._4_4_, 2);
        pdVar2 = (double*)&local_3c;
        piVar4 = std::max<int>((int*)&local_38, (int*)pdVar2);
        local_3c = *piVar4;
        lVar1 = eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::
            Layout::HeapBeginPtr(param_3);
        if (lVar1 != 0) {
            auVar8._8_4_ = (int)((ulong)param_4 >> 32);
            auVar8._0_8_ = param_4;
            auVar8._12_4_ = 1160773632;
            dVar9 = (auVar8._8_8_ - 1.9342813113834067e+25) +
                    ((double)CONCAT44(1127219200, (int)param_4) - 4503599627370496.0);
            local_48 = local_48 / dVar9;
            local_78 = 0.0;
            uVar6 = 0;
            local_68 = 0.0;
            local_88 = 0.0;
            do {
                iVar7 = param_6;
                if (0 < param_6) {
                    do {
                        local_38._0_4_ = local_3c;
                        dVar10 = 1.0 / (double)local_3c;
                        dVar10 = (double)((ulong)(uint)(int)(dVar10 * dVar9))
                                     ->GradientPerlinNoise3d(dVar10 * local_78, dVar10 * local_68, dVar10 * local_88,
                                                             (int)pdVar2);
                        pdVar2 = (double*)WrapArray<double>::operator[]((WrapArray<double>*)param_3, uVar6);
                        *pdVar2 = dVar10 * param_2 + *pdVar2;
                        local_38 = (double)CONCAT44(local_38._4_4_, local_38._0_4_ / 2);
                        local_50 = 2;
                        pdVar2 = &local_38;
                        std::max<int>(&local_50, (int*)&local_38);
                        iVar7 = iVar7 + -1;
                    } while (iVar7 != 0);
                }
                local_78 = local_78 + local_48;
                if (dVar9 <= local_78) {
                    local_68 = local_68 + local_48;
                }
                if (dVar9 <= local_68) {
                    local_88 = local_88 + local_48;
                }
                local_78 = (double)((ulong)local_78 & -(ulong)(local_78 < dVar9));
                local_68 = (double)((ulong)local_68 & -(ulong)(local_68 < dVar9));
                uVar6 = uVar6 + 1;
                uVar5 =
                    eastl::basic_string<char,
                                        eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                      eastl::allocator>>::Layout::HeapBeginPtr(param_3);
            } while (uVar6 < uVar5);
        }
    }

} // namespace jag::math
