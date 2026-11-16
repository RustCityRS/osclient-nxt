// libs/math/noise/GradientPerlinNoise.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.math

namespace jag::math {
    class GradientPerlinNoise {
    public:
        class PerlinData;
        double fade(double);
        double lerp(double, double, double);
        double grad(int, double, double, double);
        double scalebias(double);
        void GradientPerlinNoise3d(double, double, double, int);
        void GenerateGradientNoise1d(WrapArray<double>, double, int);
        void GenerateGradientNoise3d(WrapArray<double>, unsigned long, double, int);
        static PerlinData /* 2048 bytes */ g_perlin; // = PerlinData()

        // data members, from how the methods use this: 1 bytes
        char _unknown_0[1];
    };

    class GradientPerlinNoise::PerlinData {
    public:
        PerlinData();
        operator[](int) const;
        static /* 1032 bytes */ PERMUTATIONS; // initialised in its definition

        // data members, from how the methods use this: 1 bytes
        char _unknown_0[1];
    };

    // 0x100d99b18, 1032 bytes, __const
    GradientPerlinNoise::PerlinData::PERMUTATIONS = {
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

    // 0x1042350e0, 2048 bytes, __bss; set at startup by ___cxx_global_var_init.23
    GradientPerlinNoise::PerlinData GradientPerlinNoise::g_perlin = PerlinData();

    // 0x100c64840, 16 bytes, complete-object constructor, inline, placed by class name
    // GradientPerlinNoise::PerlinData::PerlinData(): jumps straight to the base-object constructor

    // 0x100c64850, 64 bytes, placed by class name and debug map
    // GradientPerlinNoise::fade(double)
    double GradientPerlinNoise::fade(double param_1) {
        return (param_1 * (param_1 * 6.0 + -15.0) + 10.0) * param_1 * param_1 * param_1;
    }

    // 0x100c64890, 32 bytes, placed by class name and debug map
    // GradientPerlinNoise::lerp(double, double, double)
    double GradientPerlinNoise::lerp(double param_1, double param_2, double param_3) {
        return param_1 * (param_3 - param_2) + param_2;
    }

    // 0x100c648b0, 96 bytes, placed by class name and debug map
    // GradientPerlinNoise::grad(int, double, double, double)
    double GradientPerlinNoise::grad(int param_1, double param_2, double param_3, double param_4) {
        double dVar1;

        dVar1 = param_2;
        if (7 < (param_1 & 15U)) {
            dVar1 = param_3;
        }
        if ((param_1 & 13U) != 12) {
            param_2 = param_4;
        }
        if (3 < (param_1 & 15U)) {
            param_3 = param_2;
        }
        if ((param_1 & 1U) != 0) {
            dVar1 = -dVar1;
        }
        if ((param_1 & 2U) != 0) {
            param_3 = -param_3;
        }
        return param_3 + dVar1;
    }

    // 0x100c64910, 32 bytes, placed by class name and debug map
    // GradientPerlinNoise::scalebias(double)
    double GradientPerlinNoise::scalebias(double param_1) {
        return param_1 * 0.5 + 0.5;
    }

    // 0x100c64930, 1008 bytes, placed by class name and debug map
    // GradientPerlinNoise::GradientPerlinNoise3d(double, double, double, int)
    void GradientPerlinNoise::GradientPerlinNoise3d(double param_1, double param_2, double param_3, int param_4) {
        int iVar1;
        int iVar2;
        int iVar3;
        int* piVar4;
        int iVar5;
        int iVar6;
        int iVar7;
        double dVar8;
        double dVar9;
        double dVar10;
        double dVar11;
        int local_88[3];
        int local_7c;
        double local_78;
        int local_6c;
        double local_68;
        double local_60;
        double local_58;
        double local_50;
        double local_48;
        double local_40;
        double local_38;

        local_88[0] = (int)this;
        local_88[1] = 255;
        local_48 = param_1;
        local_40 = param_2;
        local_38 = param_3;
        piVar4 = std::min<int>(local_88 + 1, local_88);
        iVar5 = *piVar4;
        local_58 = (double)_floor(local_48);
        iVar6 = (int)local_58;
        local_50 = (double)_floor(local_40);
        iVar7 = (int)local_50;
        dVar8 = (double)_floor(local_38);
        local_6c = (iVar6 + 1) % iVar5;
        iVar1 = (iVar7 + 1) % iVar5;
        iVar2 = ((int)dVar8 + 1) % iVar5;
        local_48 = local_48 - local_58;
        local_40 = local_40 - local_50;
        local_38 = local_38 - dVar8;
        iVar6 = iVar6 % iVar5;
        iVar7 = iVar7 % iVar5;
        iVar5 = (int)dVar8 % iVar5;
        local_58 = (double)fade(local_48);
        dVar8 = (double)fade(local_40);
        dVar9 = (double)fade(local_38);
        local_88[2] = iVar6;
        iVar3 = PerlinData::operator[]((PerlinData*)&g_perlin, iVar6);
        iVar3 = iVar3 + iVar7;
        local_78 = (double)CONCAT44(local_78._4_4_, iVar3);
        iVar3 = PerlinData::operator[]((PerlinData*)&g_perlin, iVar3);
        local_50 = (double)CONCAT44(local_50._4_4_, iVar3 + iVar5);
        iVar3 = PerlinData::operator[]((PerlinData*)&g_perlin, iVar6);
        iVar6 = PerlinData::operator[]((PerlinData*)&g_perlin, iVar3 + iVar1);
        iVar3 = local_6c;
        local_68 = (double)CONCAT44(local_68._4_4_, iVar6 + iVar5);
        local_7c = PerlinData::operator[]((PerlinData*)&g_perlin, local_6c);
        local_7c = local_7c + iVar7;
        iVar6 = PerlinData::operator[]((PerlinData*)&g_perlin, local_7c);
        iVar3 = PerlinData::operator[]((PerlinData*)&g_perlin, iVar3);
        iVar3 = PerlinData::operator[]((PerlinData*)&g_perlin, iVar3 + iVar1);
        iVar7 = PerlinData::operator[]((PerlinData*)&g_perlin, local_50._0_4_);
        local_60 = (double)grad(iVar7, local_48, local_40, local_38);
        iVar6 = PerlinData::operator[]((PerlinData*)&g_perlin, iVar6 + iVar5);
        local_50 = local_48 + -1.0;
        dVar10 = (double)grad(iVar6, local_50, local_40, local_38);
        local_60 = (double)lerp(local_58, local_60, dVar10);
        iVar6 = PerlinData::operator[]((PerlinData*)&g_perlin, local_68._0_4_);
        local_68 = local_40 + -1.0;
        dVar10 = (double)grad(iVar6, local_48, local_68, local_38);
        iVar5 = PerlinData::operator[]((PerlinData*)&g_perlin, iVar5 + iVar3);
        dVar11 = (double)grad(iVar5, local_50, local_68, local_38);
        dVar10 = (double)lerp(local_58, dVar10, dVar11);
        local_60 = (double)lerp(dVar8, local_60, dVar10);
        iVar5 = PerlinData::operator[]((PerlinData*)&g_perlin, local_78._0_4_);
        iVar5 = PerlinData::operator[]((PerlinData*)&g_perlin, iVar5 + iVar2);
        local_38 = local_38 + -1.0;
        local_78 = (double)grad(iVar5, local_48, local_40, local_38);
        iVar5 = PerlinData::operator[]((PerlinData*)&g_perlin, local_7c);
        iVar5 = PerlinData::operator[]((PerlinData*)&g_perlin, iVar5 + iVar2);
        dVar10 = (double)grad(iVar5, local_50, local_40, local_38);
        local_40 = (double)lerp(local_58, local_78, dVar10);
        iVar5 = PerlinData::operator[]((PerlinData*)&g_perlin, local_88[2]);
        iVar5 = PerlinData::operator[]((PerlinData*)&g_perlin, iVar5 + iVar1);
        iVar5 = PerlinData::operator[]((PerlinData*)&g_perlin, iVar5 + iVar2);
        local_48 = (double)grad(iVar5, local_48, local_68, local_38);
        iVar5 = PerlinData::operator[]((PerlinData*)&g_perlin, local_6c);
        iVar5 = PerlinData::operator[]((PerlinData*)&g_perlin, iVar1 + iVar5);
        iVar5 = PerlinData::operator[]((PerlinData*)&g_perlin, iVar2 + iVar5);
        dVar10 = (double)grad(iVar5, local_50, local_68, local_38);
        dVar10 = (double)lerp(local_58, local_48, dVar10);
        dVar8 = (double)lerp(dVar8, local_40, dVar10);
        lerp(dVar9, local_60, dVar8);
    }

    // 0x100c64d30, 80 bytes, inline, placed by class name
    // GradientPerlinNoise::PerlinData::operator[](int) const
    undefined4 GradientPerlinNoise::PerlinData::operator[](int param_1) {
        undefined4* puVar1;

        if (511 < (uint)param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("(index >= 0) && (index < (int)m_perlin.size())",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/math/noise/"
                      "GradientPerlinNoise.cpp",
                      29, (char*)0);
        }
        puVar1 = (undefined4*)std::array<int, 512ul>::operator[]((array<int, 512ul>*)this, (long)param_1);
        return *puVar1;
    }

    // 0x100c64d80, 224 bytes, placed by class name and debug map
    // GradientPerlinNoise::GenerateGradientNoise1d(WrapArray<double>, double, int)
    void GradientPerlinNoise::GenerateGradientNoise1d(double param_1, Layout* param_2, ulong param_3) {
        undefined8 uVar1;
        undefined8* puVar3;
        ulong uVar4;
        ulong uVar5;
        GradientPerlinNoise* this;
        double dVar6;
        undefined8 uVar7;
        undefined1 auVar8[16];
        double local_30;

        this = (GradientPerlinNoise*)(param_3 & 4294967295);
        uVar1 = eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::
            Layout::HeapBeginPtr(param_2);
        if (eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::
                Layout::HeapBeginPtr(param_2) != 0) {
            auVar8._8_4_ = (int)((ulong)uVar1 >> 32);
            auVar8._0_8_ = uVar1;
            auVar8._12_4_ = 1160773632;
            local_30 = 0.0;
            uVar5 = 0;
            do {
                dVar6 = (double)GradientPerlinNoise3d(this, local_30, 0.6, 0.8, (int)param_3);
                uVar7 = scalebias(dVar6);
                param_3 = uVar5;
                puVar3 = (undefined8*)WrapArray<double>::operator[]((WrapArray<double>*)param_2, uVar5);
                *puVar3 = uVar7;
                local_30 = local_30 + param_1 / ((auVar8._8_8_ - 1.9342813113834067e+25) +
                                                 ((double)CONCAT44(1127219200, (int)uVar1) - 4503599627370496.0));
                uVar5 = uVar5 + 1;
                uVar4 =
                    eastl::basic_string<char,
                                        eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                      eastl::allocator>>::Layout::HeapBeginPtr(param_2);
            } while (uVar5 < uVar4);
        }
    }

    // 0x100c64ee0, 384 bytes, placed by class name and debug map
    // GradientPerlinNoise::GenerateGradientNoise3d(WrapArray<double>, unsigned long, double, int)
    void GradientPerlinNoise::GenerateGradientNoise3d(double param_1, Layout* param_2, ulong param_3, uint param_4) {
        long lVar1;
        ulong uVar2;
        undefined8* puVar3;
        ulong uVar4;
        ulong uVar5;
        double dVar6;
        undefined8 uVar7;
        undefined1 auVar8[16];
        double dVar9;
        double dVar10;
        double dVar11;
        double local_30;

        uVar5 = param_3;
        lVar1 = eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::
            Layout::HeapBeginPtr(param_2);
        if (lVar1 != param_3 * param_3 * param_3) {
            /* WARNING: Subroutine does not return */
            LogAssert("noiseArrayOut.size() == (noiseArraySizePerDim * noiseArraySizePerDim * noiseArraySizePerDim)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/math/noise/"
                      "GradientPerlinNoise.cpp",
                      135, (char*)0);
        }
        lVar1 = eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::
            Layout::HeapBeginPtr(param_2);
        if (lVar1 != 0) {
            auVar8._8_4_ = (int)(param_3 >> 32);
            auVar8._0_8_ = param_3;
            auVar8._12_4_ = 1160773632;
            dVar9 = (auVar8._8_8_ - 1.9342813113834067e+25) +
                    ((double)CONCAT44(1127219200, (int)param_3) - 4503599627370496.0);
            param_1 = param_1 / dVar9;
            local_30 = 0.0;
            uVar4 = 0;
            dVar10 = 0.0;
            dVar11 = 0.0;
            do {
                dVar6 = (double)GradientPerlinNoise3d((GradientPerlinNoise*)(ulong)param_4, dVar11, dVar10, local_30,
                                                      (int)uVar5);
                uVar7 = scalebias(dVar6);
                uVar5 = uVar4;
                puVar3 = (undefined8*)WrapArray<double>::operator[]((WrapArray<double>*)param_2, uVar4);
                *puVar3 = uVar7;
                dVar11 = dVar11 + param_1;
                if (dVar9 <= dVar11) {
                    dVar10 = dVar10 + param_1;
                }
                if (dVar9 <= dVar10) {
                    local_30 = local_30 + param_1;
                }
                dVar11 = (double)((ulong)dVar11 & -(ulong)(dVar11 < dVar9));
                dVar10 = (double)((ulong)dVar10 & -(ulong)(dVar10 < dVar9));
                uVar4 = uVar4 + 1;
                uVar2 =
                    eastl::basic_string<char,
                                        eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                      eastl::allocator>>::Layout::HeapBeginPtr(param_2);
            } while (uVar4 < uVar2);
        }
    }

    // 0x100c6d850, 96 bytes, base-object constructor, inline, placed by class name
    // GradientPerlinNoise::PerlinData::PerlinData()
    void GradientPerlinNoise::PerlinData::PerlinData() {
        undefined4 uVar1;
        undefined4* puVar2;
        ulong uVar3;

        uVar3 = 0;
        do {
            puVar2 = (undefined4*)std::array<int, 256ul>::operator[](uVar3);
            uVar1 = *puVar2;
            puVar2 = (undefined4*)std::array<int, 512ul>::operator[]((array<int, 512ul>*)this, uVar3);
            *puVar2 = uVar1;
            puVar2 = (undefined4*)std::array<int, 512ul>::operator[]((array<int, 512ul>*)this, uVar3 + 256);
            *puVar2 = uVar1;
            uVar3 = uVar3 + 1;
        } while (uVar3 != 256);
    }

    // 0x100c6f1a0, 32 bytes, placed by the data it initialises
    // ___cxx_global_var_init.23
    void ___cxx_global_var_init_23() {
        new (&GradientPerlinNoise::g_perlin) GradientPerlinNoise::PerlinData();
    }

} // namespace jag::math
