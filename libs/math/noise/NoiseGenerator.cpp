// libs/math/noise/NoiseGenerator.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.math

namespace jag::math {
    // 0x100c65060
    void GetSummedNoise(double arg1, double arg2, int arg3) {
        double dVar2;
        double dVar3;
        double* pdVar5;
        array<double, 8ul>* array;
        double local_38;
        double local_20;

        uint64_t* arg1_00 = &MAX_OCTAVES;
        auto piVar4 = std::max<int>(2, MAX_OCTAVES);
        int iVar1 = *piVar4;
        if (1 < iVar1) {
            local_20 = 0.0;
            array = nullptr;
            do {
                local_38 = (double)pow<float, int>((uint32_t)local_20, (int)array);
                dVar2 = (double)pow<double, int>(arg2, (int)array);
                pdVar5 = (double*)(*array)[(unsigned long)arg1_00];
                dVar3 = (double)InterpolatedNoise((double)(int)local_38 * arg1, *pdVar5);
                local_20 = local_20 + dVar3 * dVar2;
                array = array + 1;
            } while ((array<double, 8ul>*)(unsigned long)(iVar1 - 1) != array);
        }
    }

    // 0x100c65170
    void InterpolatedNoise(double arg1, double arg2) {
        double arg1_00 = (double)(int)arg1;
        double arg1_01 = (double)SmoothedNoise(arg1_00, arg2);
        double arg2_00 =
            (double)SmoothedNoise(arg1_00 + *(double*)(&DAT_100d99960 + (unsigned long)(0.0 < arg1) * 8), arg2);
        CosineInterpolate(arg1_01, arg2_00, arg1 - arg1_00);
    }

    // 0x100c65210
    void GetSummedNoise2d(double arg1, double arg2, double arg3, int arg4) {
        double dVar2;
        double dVar3;
        double* pdVar5;
        array<double, 8ul>* array;
        double local_38;
        double local_20;

        uint64_t* arg1_00 = &MAX_OCTAVES;
        auto piVar4 = std::max<int>(2, MAX_OCTAVES);
        int iVar1 = *piVar4;
        if (1 < iVar1) {
            local_20 = 0.0;
            array = nullptr;
            do {
                local_38 = (double)pow<float, int>((uint32_t)local_20, (int)array);
                dVar2 = (double)pow<double, int>(arg3, (int)array);
                pdVar5 = (double*)(*array)[(unsigned long)arg1_00];
                dVar3 =
                    (double)InterpolatedNoise2d((double)(int)local_38 * arg1, (double)(int)local_38 * arg2, *pdVar5);
                local_20 = local_20 + dVar3 * dVar2;
                array = array + 1;
            } while ((array<double, 8ul>*)(unsigned long)(iVar1 - 1) != array);
        }
    }

    // 0x100c652f0
    void InterpolatedNoise2d(double arg1, double arg2, double arg3) {
        double arg1_01 = (double)(int)arg1;
        double arg2_01 = (double)(int)arg2;
        double dVar1 = (double)SmoothedNoise2d(arg1_01, arg2_01, arg3);
        double dVar3 = (double)(~-(unsigned long)(0.0 < arg1) & 13830554455654793216 |
                                -(unsigned long)(0.0 < arg1) & 4607182418800017408) +
                       arg1_01;
        double dVar2 = (double)SmoothedNoise2d(dVar3, arg2_01, arg3);
        double arg2_00 =
            (double)(~-(unsigned long)(0.0 < arg2) & 13830554455654793216 |
                     (unsigned long)((unsigned int)(-(unsigned long)(0.0 < arg2) >> 32) & 1072693248) << 32) +
            arg2_01;
        double arg1_00 = (double)SmoothedNoise2d(arg1_01, arg2_00, arg3);
        dVar3 = (double)SmoothedNoise2d(dVar3, arg2_00, arg3);
        dVar1 = (double)CosineInterpolate(dVar1, dVar2, arg1 - arg1_01);
        dVar2 = (double)CosineInterpolate(arg1_00, dVar3, arg1 - arg1_01);
        CosineInterpolate(dVar1, dVar2, arg2 - arg2_01);
    }

    // 0x100c65430
    double GetTiledSummedNoise2d(double arg1, double arg2, double arg3, double arg4, double arg5, int arg6) {
        double local_18 = 2.0;
        double local_40 = arg3;
        double local_20 = arg4;
        auto pdVar1 = std::max<double>(local_18, local_40);
        local_40 = *pdVar1;
        local_18 = 2.0;
        double local_38 = local_40;
        pdVar1 = std::max<double>(local_18, local_20);
        local_20 = *pdVar1;
        local_18 = arg1;
        double local_58 = 0.0;
        double local_50 = local_38;
        Wrap<double>(&local_18, &local_58, &local_50);
        local_18 = arg2;
        local_58 = 0.0;
        local_50 = local_20;
        pdVar1 = &local_18;
        Wrap<double>(pdVar1, &local_58, &local_50);
        int arg4_00 = (int)pdVar1;
        double dVar2 = (double)GetSummedNoise2d(arg1, arg2, arg5, arg4_00);
        local_38 = dVar2 * (local_40 - arg1) * (local_20 - arg2);
        dVar2 = (double)GetSummedNoise2d(arg1 - local_40, arg2, arg5, arg4_00);
        local_38 = dVar2 * (local_20 - arg2) * arg1 + local_38;
        dVar2 = (double)GetSummedNoise2d(arg1 - local_40, arg2 - local_20, arg5, arg4_00);
        dVar2 = dVar2 * arg1;
        double dVar3 = (double)GetSummedNoise2d(arg1, arg2 - local_20, arg5, arg4_00);
        return ((dVar3 * (local_40 - arg1) + dVar2) * arg2 + local_38) / (local_40 * local_20);
    }

    // 0x100c655f0
    double Wrap<double>(const double& arg1, const double& arg2, const double& arg3) {
        double dVar2 = arg1;
        if (dVar2 < (double)arg2) {
            do {
                dVar2 = (dVar2 - (double)arg2) + arg3;
            } while (dVar2 < (double)arg2);
        }
        for (; arg3 <= dVar2; dVar2 = (dVar2 + (double)arg2) - arg3) {
        }
        return dVar2;
    }

    // 0x100c65640
    double GetSummedGradientNoise3d(double arg1, double arg2, double arg3, double arg4, double arg5, int arg6, int arg7,
                                    int arg8) {
        double dVar2;
        double local_40;
        int local_38[2];
        double local_30;

        local_38[0] = 2;
        int local_24 = arg6;
        auto piVar1 = std::max<int>(*local_38, local_24);
        local_24 = *piVar1;
        if (arg7 < 1) {
            local_30 = 0.0;
        } else {
            local_30 = 0.0;
            local_40 = arg4;
            do {
                dVar2 = 1.0 / (double)local_24;
                dVar2 = (double)GradientPerlinNoise::GradientPerlinNoise3d(dVar2 * arg1, dVar2 * arg2, dVar2 * arg3,
                                                                           (int)(dVar2 * (double)arg8));
                local_30 = local_30 + dVar2 * local_40;
                local_40 = local_40 * arg5;
                local_24 = local_24 / 2;
                local_38[1] = 2;
                piVar1 = std::max<int>(*(local_38 + 1), local_24);
                local_24 = *piVar1;
                arg7 = arg7 - 1;
            } while (arg7 != 0);
        }
        return local_30;
    }

    // 0x100c65760
    double SmoothedNoise(double arg1, double arg2) {
        double dVar1 = (double)Noise((int)arg1, arg1);
        double dVar2 = (double)Noise((int)(arg1 - 1.0), arg1 - 1.0);
        double dVar3 = (double)Noise((int)(arg1 + 1.0), arg1 + 1.0);
        return (dVar3 + dVar2) * 0.25 + dVar1 * 0.5;
    }

    // 0x100c657d0
    double CosineInterpolate(double arg1, double arg2, double arg3) {
        double dVar1 = (double)_cos(arg3 * 3.1415927f);
        return (dVar1 * 0.5 + 0.5) * arg1 + (0.5 - dVar1 * 0.5) * arg2;
    }

    // 0x100c65820
    double SmoothedNoise2d(double arg1, double arg2, double arg3) {
        int arg1_00 = (int)(arg1 - 1.0);
        int arg2_02 = (int)(arg2 - 1.0);
        double dVar2 = (double)Noise2d(arg1_00, arg2_02, arg1);
        int iVar1 = (int)(arg1 + 1.0);
        double dVar3 = (double)Noise2d(iVar1, arg2_02, arg1 + 1.0);
        int arg2_00 = (int)(arg2 + 1.0);
        double dVar4 = (double)Noise2d(arg1_00, arg2_00, arg2 + 1.0);
        double dVar5 = (double)Noise2d(iVar1, arg2_00, dVar4);
        double dVar6 = (dVar5 + dVar4 + dVar3 + dVar2) * 0.0625;
        dVar2 = (double)Noise2d(arg1_00, (int)arg2, dVar6);
        dVar3 = (double)Noise2d(iVar1, (int)arg2, dVar2);
        iVar1 = (int)arg1;
        dVar4 = (double)Noise2d(iVar1, arg2_02, dVar3 + dVar2);
        dVar5 = (double)Noise2d(iVar1, arg2_00, dVar4);
        dVar6 = (dVar5 + dVar4 + dVar3 + dVar2) * 0.125 + dVar6;
        dVar2 = (double)Noise2d(iVar1, (int)arg2, dVar6);
        return dVar2 * 0.25 + dVar6;
    }

    // 0x100c65960
    double Noise(int arg1, double arg2) {
        unsigned int uVar1 = arg1 << 13 ^ arg1;
        return (double)((float)((uVar1 * uVar1 * 15731 + 789221) * uVar1 + 1376312589 & 2147483647) * -9.313226e-10) +
               1.0;
    }

    // 0x100c659b0
    double Noise2d(int arg1, int arg2, double arg3) {
        unsigned int uVar1 = arg2 * 57 + arg1;
        uVar1 = uVar1 * 8192 ^ uVar1;
        return (double)((float)((uVar1 * uVar1 * 15731 + 789221) * uVar1 + 1376312589 & 2147483647) * -9.313226e-10) +
               1.0;
    }

    // 0x100c65a00
    double Noise(int arg1) {
        double in_XMM0_Qa;

        double dVar1 = (double)Noise(arg1, in_XMM0_Qa);
        double dVar2 = (double)_floor();
        return ABS(dVar1) - dVar2;
    }

    // 0x100c65a40
    double Noise2d(int arg1, int arg2) {
        double in_XMM0_Qa;

        double dVar1 = (double)Noise2d(arg1, arg2, in_XMM0_Qa);
        double dVar2 = (double)_floor();
        return ABS(dVar1) - dVar2;
    }

    // 0x100c65a80
    void GenerateSummedGradientNoise3d(WrapArray<double> wrapArray, unsigned long arg2, double arg3, double arg4,
                                       double arg5, int arg6, int arg7) {
        unsigned long uVar4;
        unsigned long arg1;
        int iVar5;
        uint8_t auVar6[16];
        double dVar7;
        double dVar8;
        double local_88;
        double local_78;
        double local_68;

        double local_48 = arg3;
        int local_3c = arg6;
        long lVar1 = wrapArray->HeapBeginPtr();
        if (lVar1 != arg2 * arg2 * arg2) {
            LogAssert(
                "noiseArrayOut.size() == (noiseArraySizePerDim * noiseArraySizePerDim * noiseArraySizePerDim)",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/math/noise/NoiseGenerator.cpp",
                251, nullptr);
        }
        auto pdVar2 = wrapArray->end();
        auto arg2_00 = wrapArray->end();
        double local_38 = 0.0;
        std::fill<double*, double>(pdVar2, arg2_00, local_38);
        local_38 = (double)(((uint64_t)local_38._4_4_ << 32) | (uint32_t)2);
        auto piVar3 = std::max<int>(local_38, local_3c);
        local_3c = *piVar3;
        lVar1 = wrapArray->HeapBeginPtr();
        if (lVar1 != 0) {
            auVar6._8_4_ = (int)(arg2 >> 32);
            auVar6._0_8_ = arg2;
            auVar6._12_4_ = 1160773632;
            dVar7 = (auVar6._8_8_ - 1.9342813113834067e+25) +
                    ((double)(((uint64_t)1127219200 << 32) | (uint32_t)((int)arg2)) - 4503599627370496.0);
            local_48 = local_48 / dVar7;
            local_78 = 0.0;
            arg1 = 0;
            local_68 = 0.0;
            local_88 = 0.0;
            do {
                iVar5 = arg7;
                if (0 < arg7) {
                    do {
                        local_38._0_4_ = local_3c;
                        dVar8 = 1.0 / (double)local_3c;
                        dVar8 = (double)GradientPerlinNoise::GradientPerlinNoise3d(
                            dVar8 * local_78, dVar8 * local_68, dVar8 * local_88, (int)(dVar8 * dVar7));
                        pdVar2 = (double*)(*wrapArray)[arg1];
                        *pdVar2 = dVar8 * arg4 + *pdVar2;
                        local_38 = (double)(((uint64_t)local_38._4_4_ << 32) | (uint32_t)(local_38._0_4_ / 2));
                        std::max<int>(2, local_38);
                        iVar5 = iVar5 - 1;
                    } while (iVar5 != 0);
                }
                local_78 = local_78 + local_48;
                if (dVar7 <= local_78) {
                    local_68 = local_68 + local_48;
                }
                if (dVar7 <= local_68) {
                    local_88 = local_88 + local_48;
                }
                local_78 = (double)((unsigned long)local_78 & -(unsigned long)(local_78 < dVar7));
                local_68 = (double)((unsigned long)local_68 & -(unsigned long)(local_68 < dVar7));
                arg1 = arg1 + 1;
                uVar4 = wrapArray->HeapBeginPtr();
            } while (arg1 < uVar4);
        }
    }

} // namespace jag::math
