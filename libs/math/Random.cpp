// libs/math/Random.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.math

#include "Random.h"

namespace jag::math {
    // 0x100d99a30
    int32_t Random::RANDMAX_SHIFT = 15;

    // 0x100d99a34
    int32_t Random::RANDMAX_MASK = 32767;

    // 0x100d99a38
    float Random::mRandMax = 2.0f;

    // 0x100d99a3c
    int32_t Random::mRandMaxReal = 1317011456;

    // 0x100d99a40
    int32_t Random::RAND_MAX_RECIP = 805306368;

    // 0x100d99a50
    int32_t Random::mRandExpQ[8] = {1060205080, 1064235412, 1065166616, 1065327981,
                                    1065350352, 1065352936, 1065353193, 1065353214};

    // 0x103bdc7a8
    uint8_t Random::mersenneTwisterEngine[2504];

    // 0x103bdd170, set at startup by ___cxx_global_var_init.2
    std::random_device Random::randomDevice = random_device();

    // 0x103bdd174, set at startup by ___cxx_global_var_init.3
    std::uniform_int_distribution<int> Random::uniformIntDistribution = uniform_int_distribution<int>();

    // 0x103bdd17c
    int32_t Random::uniformFloatDistribution;

    // 0x103bdd184
    int32_t Random::exponentialDistribution;

    // 0x103bdd188
    int64_t Random::randGenerator;

    // 0x10000c2f0: Random::SetSeed(int) has the same machine code as Rect<int>::SetX(int)

    // 0x10000c300: Random::SetConst(int) has the same machine code as Rect<int>::SetY(int)

    // 0x100c61720
    unsigned int Random::Mult32(int arg1, int arg2) {
        return (((unsigned int)arg1 >> 15) * arg2 + ((unsigned int)arg2 >> 15) * arg1) * 32768 +
                   (arg2 & 32767U) * (arg1 & 32767U) &
               1073741823;
    }

    // 0x100c61760
    uint64_t Random::FRandExp() {
        float* pfVar1;
        long lVar2;
        uint64_t uVar3;
        uint32_t uVar4;
        float local_30;
        float local_2c;
        float local_24;

        do {
            uVar3 = FRand(1.0);
            uVar4 = (uint32_t)((unsigned long)uVar3 >> 32);
            local_2c = (float)uVar3 + (float)uVar3;
        } while (local_2c == 0.0);
        float local_28 = 0.0;
        if (local_2c <= 1.0) {
            local_28 = 0.0;
            do {
                local_28 = local_28 + 0.6931472f;
                local_2c = local_2c + local_2c;
            } while (local_2c <= 1.0);
        }
        local_2c = local_2c - 1.0;
        if (0.6931472f < local_2c) {
            local_24 = (float)FRand(1.0);
            local_30 = (float)FRand(1.0);
            pfVar1 = std::min<float>(local_24, local_30);
            local_2c = *pfVar1;
            lVar2 = 1;
            do {
                if (local_2c < *(float*)(&mRandExpQ + lVar2 * 4))
                    break;
                local_24 = (float)FRand(1.0);
                if (local_24 <= local_2c) {
                    local_2c = local_24;
                }
                lVar2 = lVar2 + 1;
            } while (lVar2 != 8);
            uVar4 = 0;
            local_2c = local_2c * 0.6931472f;
        }
        return (((uint64_t)uVar4 << 32) | (uint32_t)(local_2c + local_28));
    }

    // 0x100c61890
    float Random::FRand(float arg1) {
        int iVar1 = Rand();
        return arg1 * 9.313226e-10 * (float)iVar1;
    }

    // 0x100c61900
    float Random::FRandS(float arg1) {
        int iVar1 = Rand();
        return arg1 * 1.8626451e-09 * (float)iVar1 - arg1;
    }

} // namespace jag::math
