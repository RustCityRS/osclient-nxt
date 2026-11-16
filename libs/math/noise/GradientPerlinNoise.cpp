// libs/math/noise/GradientPerlinNoise.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.math

namespace jag::math {
    class GradientPerlinNoise {
    public:
        class PerlinData;
        double fade(double arg1);
        double lerp(double arg1, double arg2, double arg3);
        double grad(int arg1, double arg2, double arg3, double arg4);
        double scalebias(double arg1);
        void GradientPerlinNoise3d(double arg1, double arg2, double arg3, int arg4);
        void GenerateGradientNoise1d(WrapArray<double> wrapArray, double arg2, int arg3);
        void GenerateGradientNoise3d(WrapArray<double> wrapArray, unsigned long arg2, double arg3, int arg4);
        static PerlinData g_perlin; // = PerlinData()

        uint8_t _unknown_0[1];
    };

    class GradientPerlinNoise::PerlinData {
    public:
        PerlinData();
        uint32_t operator[](int arg1) const;
        static int32_t PERMUTATIONS[258]; // initialised in its definition

        uint8_t _unknown_0[1];
    };

    // 0x100d99b18
    int32_t GradientPerlinNoise::PerlinData::PERMUTATIONS[258] = {
        151, 160, 137, 91,  90,  15,  131, 13,  201, 95,  96,  53,  194, 233, 7,   225, 140, 36,  103, 30,  69,  142,
        8,   99,  37,  240, 21,  10,  23,  190, 6,   148, 247, 120, 234, 75,  0,   26,  197, 62,  94,  252, 219, 203,
        117, 35,  11,  32,  57,  177, 33,  88,  237, 149, 56,  87,  174, 20,  125, 136, 171, 168, 68,  175, 74,  165,
        71,  134, 139, 48,  27,  166, 77,  146, 158, 231, 83,  111, 229, 122, 60,  211, 133, 230, 220, 105, 92,  41,
        55,  46,  245, 40,  244, 102, 143, 54,  65,  25,  63,  161, 1,   216, 80,  73,  209, 76,  132, 187, 208, 89,
        18,  169, 200, 196, 135, 130, 116, 188, 159, 86,  164, 100, 109, 198, 173, 186, 3,   64,  52,  217, 226, 250,
        124, 123, 5,   202, 38,  147, 118, 126, 255, 82,  85,  212, 207, 206, 59,  227, 47,  16,  58,  17,  182, 189,
        28,  42,  223, 183, 170, 213, 119, 248, 152, 2,   44,  154, 163, 70,  221, 153, 101, 155, 167, 43,  172, 9,
        129, 22,  39,  253, 19,  98,  108, 110, 79,  113, 224, 232, 178, 185, 112, 104, 218, 246, 97,  228, 251, 34,
        242, 193, 238, 210, 144, 12,  191, 179, 162, 241, 81,  51,  145, 235, 249, 14,  239, 107, 49,  192, 214, 31,
        181, 199, 106, 157, 184, 84,  204, 176, 115, 121, 50,  45,  127, 4,   150, 254, 138, 236, 205, 93,  222, 114,
        67,  29,  24,  72,  243, 141, 128, 195, 78,  66,  215, 61,  156, 180, 0,   0,
    };

    // 0x1042350e0, set at startup by ___cxx_global_var_init.23
    GradientPerlinNoise::PerlinData GradientPerlinNoise::g_perlin = PerlinData();

    // 0x100c64850
    double GradientPerlinNoise::fade(double arg1) {
        return (arg1 * (arg1 * 6.0 - 15.0) + 10.0) * arg1 * arg1 * arg1;
    }

    // 0x100c64890
    double GradientPerlinNoise::lerp(double arg1, double arg2, double arg3) {
        return arg1 * (arg3 - arg2) + arg2;
    }

    // 0x100c648b0
    double GradientPerlinNoise::grad(int arg1, double arg2, double arg3, double arg4) {
        double dVar1 = arg2;
        if (7 < (arg1 & 15U)) {
            dVar1 = arg3;
        }
        if ((arg1 & 13U) != 12) {
            arg2 = arg4;
        }
        if (3 < (arg1 & 15U)) {
            arg3 = arg2;
        }
        if ((arg1 & 1U) != 0) {
            dVar1 = -dVar1;
        }
        if ((arg1 & 2U) != 0) {
            arg3 = -arg3;
        }
        return arg3 + dVar1;
    }

    // 0x100c64910
    double GradientPerlinNoise::scalebias(double arg1) {
        return arg1 * 0.5 + 0.5;
    }

    // 0x100c64930
    void GradientPerlinNoise::GradientPerlinNoise3d(double arg1, double arg2, double arg3, int arg4) {
        int local_88[3];
        double local_78;
        double local_68;

        local_88[1] = 255;
        local_88[0] = arg4;
        double local_48 = arg1;
        double local_40 = arg2;
        double local_38 = arg3;
        auto piVar4 = std::min<int>(*(local_88 + 1), *local_88);
        int iVar5 = *piVar4;
        double local_58 = (double)_floor(local_48);
        int iVar6 = (int)local_58;
        double local_50 = (double)_floor(local_40);
        int iVar7 = (int)local_50;
        double dVar8 = (double)_floor(local_38);
        int local_6c = (iVar6 + 1) % iVar5;
        int iVar1 = (iVar7 + 1) % iVar5;
        int iVar2 = ((int)dVar8 + 1) % iVar5;
        local_48 = local_48 - local_58;
        local_40 = local_40 - local_50;
        local_38 = local_38 - dVar8;
        iVar6 = iVar6 % iVar5;
        iVar7 = iVar7 % iVar5;
        iVar5 = (int)dVar8 % iVar5;
        local_58 = (double)fade(local_48);
        dVar8 = (double)fade(local_40);
        double arg1_00 = (double)fade(local_38);
        local_88[2] = iVar6;
        int iVar3 = g_perlin[iVar6];
        iVar3 = iVar3 + iVar7;
        local_78 = (double)(((uint64_t)local_78._4_4_ << 32) | (uint32_t)iVar3);
        iVar3 = g_perlin[iVar3];
        local_50 = (double)(((uint64_t)local_50._4_4_ << 32) | (uint32_t)(iVar3 + iVar5));
        iVar3 = g_perlin[iVar6];
        iVar6 = g_perlin[iVar3 + iVar1];
        iVar3 = local_6c;
        local_68 = (double)(((uint64_t)local_68._4_4_ << 32) | (uint32_t)(iVar6 + iVar5));
        int local_7c = g_perlin[local_6c];
        local_7c = local_7c + iVar7;
        iVar6 = g_perlin[local_7c];
        iVar3 = g_perlin[iVar3];
        iVar3 = g_perlin[iVar3 + iVar1];
        iVar7 = g_perlin[local_50._0_4_];
        double local_60 = (double)grad(iVar7, local_48, local_40, local_38);
        iVar6 = g_perlin[iVar6 + iVar5];
        local_50 = local_48 - 1.0;
        double dVar9 = (double)grad(iVar6, local_50, local_40, local_38);
        local_60 = (double)lerp(local_58, local_60, dVar9);
        iVar6 = g_perlin[local_68._0_4_];
        local_68 = local_40 - 1.0;
        dVar9 = (double)grad(iVar6, local_48, local_68, local_38);
        iVar5 = g_perlin[iVar5 + iVar3];
        double arg3_00 = (double)grad(iVar5, local_50, local_68, local_38);
        dVar9 = (double)lerp(local_58, dVar9, arg3_00);
        local_60 = (double)lerp(dVar8, local_60, dVar9);
        iVar5 = g_perlin[local_78._0_4_];
        iVar5 = g_perlin[iVar5 + iVar2];
        local_38 = local_38 - 1.0;
        local_78 = (double)grad(iVar5, local_48, local_40, local_38);
        iVar5 = g_perlin[local_7c];
        iVar5 = g_perlin[iVar5 + iVar2];
        dVar9 = (double)grad(iVar5, local_50, local_40, local_38);
        local_40 = (double)lerp(local_58, local_78, dVar9);
        iVar5 = g_perlin[local_88[2]];
        iVar5 = g_perlin[iVar5 + iVar1];
        iVar5 = g_perlin[iVar5 + iVar2];
        local_48 = (double)grad(iVar5, local_48, local_68, local_38);
        iVar5 = g_perlin[local_6c];
        iVar5 = g_perlin[iVar1 + iVar5];
        iVar5 = g_perlin[iVar2 + iVar5];
        dVar9 = (double)grad(iVar5, local_50, local_68, local_38);
        dVar9 = (double)lerp(local_58, local_48, dVar9);
        dVar8 = (double)lerp(dVar8, local_40, dVar9);
        lerp(arg1_00, local_60, dVar8);
    }

    // 0x100c64d30
    uint32_t GradientPerlinNoise::PerlinData::operator[](int arg1) const {
        if (511 < (unsigned int)arg1) {
            LogAssert("(index >= 0) && (index < (int)m_perlin.size())",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/math/noise/"
                      "GradientPerlinNoise.cpp",
                      29, nullptr);
        }
        uint32_t* puVar1 = (uint32_t*)(*this)[(long)arg1];
        return *puVar1;
    }

    // 0x100c64d80
    void GradientPerlinNoise::GenerateGradientNoise1d(WrapArray<double> wrapArray, double arg2, int arg3) {
        uint64_t* puVar3;
        unsigned long uVar4;
        unsigned long arg1;
        uint64_t uVar5;
        uint8_t auVar6[16];
        double local_30;

        uint64_t uVar1 = wrapArray->HeapBeginPtr();
        if (wrapArray->HeapBeginPtr() != 0) {
            auVar6._8_4_ = (int)((unsigned long)uVar1 >> 32);
            auVar6._0_8_ = uVar1;
            auVar6._12_4_ = 1160773632;
            local_30 = 0.0;
            arg1 = 0;
            do {
                uVar5 = scalebias((double)GradientPerlinNoise3d(local_30, 0.6, 0.8, arg3));
                puVar3 = (uint64_t*)(*wrapArray)[arg1];
                *puVar3 = uVar5;
                local_30 =
                    local_30 +
                    arg2 / ((auVar6._8_8_ - 1.9342813113834067e+25) +
                            ((double)(((uint64_t)1127219200 << 32) | (uint32_t)((int)uVar1)) - 4503599627370496.0));
                arg1 = arg1 + 1;
                uVar4 = wrapArray->HeapBeginPtr();
            } while (arg1 < uVar4);
        }
    }

    // 0x100c64ee0
    void GradientPerlinNoise::GenerateGradientNoise3d(WrapArray<double> wrapArray, unsigned long arg2, double arg3,
                                                      int arg4) {
        unsigned long uVar2;
        uint64_t* puVar3;
        unsigned long arg1;
        double dVar4;
        uint64_t uVar5;
        uint8_t auVar6[16];
        double dVar7;
        double arg2_00;
        double dVar8;
        double local_30;

        long lVar1 = wrapArray->HeapBeginPtr();
        if (lVar1 != arg2 * arg2 * arg2) {
            LogAssert("noiseArrayOut.size() == (noiseArraySizePerDim * noiseArraySizePerDim * noiseArraySizePerDim)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/math/noise/"
                      "GradientPerlinNoise.cpp",
                      135, nullptr);
        }
        lVar1 = wrapArray->HeapBeginPtr();
        if (lVar1 != 0) {
            auVar6._8_4_ = (int)(arg2 >> 32);
            auVar6._0_8_ = arg2;
            auVar6._12_4_ = 1160773632;
            dVar7 = (auVar6._8_8_ - 1.9342813113834067e+25) +
                    ((double)(((uint64_t)1127219200 << 32) | (uint32_t)((int)arg2)) - 4503599627370496.0);
            dVar4 = arg3 / dVar7;
            local_30 = 0.0;
            arg1 = 0;
            arg2_00 = 0.0;
            dVar8 = 0.0;
            do {
                uVar5 = scalebias((double)GradientPerlinNoise3d(dVar8, arg2_00, local_30, arg4));
                puVar3 = (uint64_t*)(*wrapArray)[arg1];
                *puVar3 = uVar5;
                dVar8 = dVar8 + dVar4;
                if (dVar7 <= dVar8) {
                    arg2_00 = arg2_00 + dVar4;
                }
                if (dVar7 <= arg2_00) {
                    local_30 = local_30 + dVar4;
                }
                dVar8 = (double)((unsigned long)dVar8 & -(unsigned long)(dVar8 < dVar7));
                arg2_00 = (double)((unsigned long)arg2_00 & -(unsigned long)(arg2_00 < dVar7));
                arg1 = arg1 + 1;
                uVar2 = wrapArray->HeapBeginPtr();
            } while (arg1 < uVar2);
        }
    }

    // 0x100c6d850
    GradientPerlinNoise::PerlinData::PerlinData() {
        array<int, 256ul>* this_00 = nullptr;
        do {
            this_00 = this_00 + 1;
        } while (this_00 != (array<int, 256ul>*)256);
    }

} // namespace jag::math
