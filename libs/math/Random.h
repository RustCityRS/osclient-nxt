// libs/math/Random.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::math {
    class Random {
    public:
        void SetSeed(int arg1);
        void SetConst(int arg1);
        Random(int arg1, int arg2);
        unsigned int Mult32(int arg1, int arg2);
        uint64_t FRandExp();
        float FRand(float arg1);
        void Rand();
        float FRandS(float arg1);
        int Rand(int arg1);
        static int32_t RANDMAX_SHIFT;  // = 15
        static int32_t RANDMAX_MASK;   // = 32767
        static float mRandMax;         // = 2.0f
        static int32_t mRandMaxReal;   // = 1317011456
        static int32_t RAND_MAX_RECIP; // = 805306368
        static int32_t mRandExpQ
            [8]; // = { 1060205080, 1064235412, 1065166616, 1065327981, 1065350352, 1065352936, 1065353193, 1065353214 }
        static uint8_t mersenneTwisterEngine[2504];
        static std::random_device randomDevice;                           // = random_device()
        static std::uniform_int_distribution<int> uniformIntDistribution; // = uniform_int_distribution<int>()
        static int32_t uniformFloatDistribution;
        static int32_t exponentialDistribution;
        static int64_t randGenerator;

    private:
        unsigned int field_0;
        int m_const;
        uint8_t _unknown_8[4];
    };

    // 0x10042c610
    void Rand(int arg1) {
        g_Rand.Rand(arg1);
    }

    // 0x100c618d0
    void Random::Rand() {
        field_0 = Mult32(field_0, m_const) + 1U & 1073741823;
    }

    // 0x100c641f0
    int Random::Rand(int arg1) {
        if (65535 < arg1) {
            LogAssert("max < 65536",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/math/Random.h", 52,
                      nullptr);
        }
        int iVar1 = Rand();
        return (iVar1 >> 15) * arg1 >> 15;
    }

    // 0x100c6d520
    Random::Random(int arg1, int arg2) : std::__cxx_atomic_base_impl(arg1) {
        SetZ(arg2);
    }

} // namespace jag::math

namespace jag::graphics {
    // 0x10042ee40
    void ModelUpdateManager::AddToUpdateList(const shared_ptr<Model>& model) {
        emplace_back<shared_ptr<Model> const&>(model);
    }

} // namespace jag::graphics
