// libs/math/Random.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::math {
    class Random {
    public:
        SetSeed(int);
        SetConst(int);
        Random(int, int);
        uint Mult32(int, int);
        FRandExp();
        float FRand(float);
        void Rand();
        float FRandS(float);
        int Rand(int);
        static /* 4 bytes */ RANDMAX_SHIFT;  // = 15
        static /* 4 bytes */ RANDMAX_MASK;   // = 32767
        static float /* 4 bytes */ mRandMax; // = 2.0f
        static /* 4 bytes */ mRandMaxReal;   // = 1317011456
        static /* 4 bytes */ RAND_MAX_RECIP; // = 805306368
        static                               /* 32 bytes */
            mRandExpQ; // = { 1060205080, 1064235412, 1065166616, 1065327981, 1065350352, 1065352936, 1065353193, 1065353214 }
        static /* 2504 bytes */ mersenneTwisterEngine;
        static std::random_device /* 4 bytes */ randomDevice; // = random_device()
        static std::uniform_int_distribution<int>             /* 8 bytes */
            uniformIntDistribution;                           // = uniform_int_distribution<int>()
        static /* 8 bytes */ uniformFloatDistribution;
        static /* 4 bytes */ exponentialDistribution;
        static /* 8 bytes */ randGenerator;

        // data members, from how the methods use this: 12 bytes
        uint field_0; // offset 0
        int m_const;  // offset 4
        char _unknown_8[4];
    };

    // 0x10042c610, 32 bytes, inline, placed by debug map only (low confidence)
    // Rand(int)
    void Rand(int param_1) {
        g_Rand.Rand(param_1);
    }

    // 0x10042d4b0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // Matrix44T<float>::Matrix44T(QuaternionT<float> const&, Vector3T<float> const&): jumps straight to the base-object constructor

    // 0x100c616a0, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // Random::Random(int, int): jumps straight to the base-object constructor

    // 0x100c618d0, 48 bytes, inline, placed by class name
    // Random::Rand()
    void Random::Rand() {
        field_0 = Mult32(field_0, m_const) + 1U & 1073741823;
    }

    // 0x100c641f0, 80 bytes, inline, placed by class name
    // Random::Rand(int)
    int Random::Rand(int param_1) {
        int iVar1;

        if (65535 < param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("max < 65536",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/math/Random.h", 52,
                      (char*)0);
        }
        iVar1 = Rand(this);
        return (iVar1 >> 15) * param_1 >> 15;
    }

    // 0x100c6d520, 48 bytes, base-object constructor, inline, placed by class name
    // Random::Random(int, int)
    void Random::Random(int param_1, int param_2) {
        undefined4 in_register_00000034;

        new (this) std::__cxx_atomic_base_impl<oldscape::FolderSelection::FolderPathRequestStatus>(
            CONCAT44(in_register_00000034, param_1));
        SetZ(param_2);
    }

} // namespace jag::math

namespace jag::graphics {
    // 0x10042ee40, 16 bytes, inline, placed by debug map only (low confidence)
    // ModelUpdateManager::AddToUpdateList(shared_ptr<Model> const&)
    void ModelUpdateManager::AddToUpdateList(shared_ptr* param_1) {
        eastl::vector<weak_ptr<Model>, eastl::allocator>::emplace_back<shared_ptr<Model> const&>(
            (vector<weak_ptr<Model>, eastl::allocator>*)this, param_1);
    }

} // namespace jag::graphics
