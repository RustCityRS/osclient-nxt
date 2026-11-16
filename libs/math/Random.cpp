// libs/math/Random.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.math

#include "Random.h"

namespace jag::math {
    // 0x100d99a30, 4 bytes, __const
    Random::RANDMAX_SHIFT = 15;

    // 0x100d99a34, 4 bytes, __const
    Random::RANDMAX_MASK = 32767;

    // 0x100d99a38, 4 bytes, __const
    float Random::mRandMax = 2.0f;

    // 0x100d99a3c, 4 bytes, __const
    Random::mRandMaxReal = 1317011456;

    // 0x100d99a40, 4 bytes, __const
    Random::RAND_MAX_RECIP = 805306368;

    // 0x100d99a50, 32 bytes, __const
    Random::mRandExpQ = {1060205080, 1064235412, 1065166616, 1065327981,
                         1065350352, 1065352936, 1065353193, 1065353214};

    // 0x103bdc7a8, 2504 bytes, __common; zero-initialised
    Random::mersenneTwisterEngine;

    // 0x103bdd170, 4 bytes, __common; set at startup by ___cxx_global_var_init.2
    std::random_device Random::randomDevice = random_device();

    // 0x103bdd174, 8 bytes, __common; set at startup by ___cxx_global_var_init.3
    std::uniform_int_distribution<int> Random::uniformIntDistribution = uniform_int_distribution<int>();

    // 0x103bdd17c, 8 bytes, __common; zero-initialised
    Random::uniformFloatDistribution;

    // 0x103bdd184, 4 bytes, __common; zero-initialised
    Random::exponentialDistribution;

    // 0x103bdd188, 8 bytes, __common; zero-initialised
    Random::randGenerator;

    // 0x10000c2f0: the linker folded this into Rect<int>::SetX(int), which has identical code
    Random::SetSeed(int);

    // 0x10000c300: the linker folded this into Rect<int>::SetY(int), which has identical code
    Random::SetConst(int);

    // 0x100c61720, 64 bytes, placed by class name and debug map
    // Random::Mult32(int, int)
    uint Random::Mult32(int param_1, int param_2) {
        return (((uint)param_1 >> 15) * param_2 + ((uint)param_2 >> 15) * param_1) * 32768 +
                   (param_2 & 32767U) * (param_1 & 32767U) &
               1073741823;
    }

    // 0x100c61760, 304 bytes, placed by class name and debug map
    // Random::FRandExp()
    undefined8 Random::FRandExp() {
        float* pfVar1;
        long lVar2;
        undefined8 uVar3;
        undefined4 uVar4;
        float local_30;
        float local_2c;
        float local_28;
        float local_24;

        do {
            uVar3 = FRand(this, 1.0);
            uVar4 = (undefined4)((ulong)uVar3 >> 32);
            local_2c = (float)uVar3 + (float)uVar3;
        } while (local_2c == 0.0);
        local_28 = 0.0;
        if (local_2c <= 1.0) {
            local_28 = 0.0;
            do {
                local_28 = local_28 + 0.6931472;
                local_2c = local_2c + local_2c;
            } while (local_2c <= 1.0);
        }
        local_2c = local_2c + -1.0;
        if (0.6931472 < local_2c) {
            local_24 = (float)FRand(this, 1.0);
            local_30 = (float)FRand(this, 1.0);
            pfVar1 = std::min<float>(&local_24, &local_30);
            local_2c = *pfVar1;
            lVar2 = 1;
            do {
                if (local_2c < *(float*)(&mRandExpQ + lVar2 * 4))
                    break;
                local_24 = (float)FRand(this, 1.0);
                if (local_24 <= local_2c) {
                    local_2c = local_24;
                }
                lVar2 = lVar2 + 1;
            } while (lVar2 != 8);
            uVar4 = 0;
            local_2c = local_2c * 0.6931472;
        }
        return CONCAT44(uVar4, local_2c + local_28);
    }

    // 0x100c61890, 48 bytes, placed by class name and debug map
    // Random::FRand(float)
    float Random::FRand(float param_1) {
        int iVar1;

        iVar1 = Rand(this);
        return param_1 * 9.313226e-10 * (float)iVar1;
    }

    // 0x100c61900, 64 bytes, placed by class name and debug map
    // Random::FRandS(float)
    float Random::FRandS(float param_1) {
        int iVar1;

        iVar1 = Rand(this);
        return param_1 * 1.8626451e-09 * (float)iVar1 - param_1;
    }

    // 0x100c6f110, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.2
    void ___cxx_global_var_init_2() {
        new (&Random::randomDevice) std::random_device();
        ___cxa_atexit(PTR__random_device_100ee6e80, &Random::randomDevice, 4294967296);
    }

    // 0x100c6f150, 32 bytes, placed by the data it initialises
    // ___cxx_global_var_init.3
    void ___cxx_global_var_init_3() {
        new (&Random::uniformIntDistribution) std::uniform_int_distribution<int>();
    }

} // namespace jag::math
