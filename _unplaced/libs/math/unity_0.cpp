// _unplaced/libs/math/unity_0.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.math

namespace jag::math {
    // 0x100d99a70
    int64_t MAX_OCTAVES = 8;

    // 0x100d99a78
    int32_t PRIME_NUMBER[40] = {
        0, 1104150528, 0, 1088619168, 0, 1087159936, 0, 1083388928, 0, 1088190528, 0, 1086790784, 0, 1089711664,
        0, 1088988000, 0, 1,          1, 3,          3, 2,          2, 0,          1, 5,          0, 4,
        3, 7,          2, 6,          4, 5,          5, 7,          7, 6,          6, 4,
    };

    // 0x103bdc7a0, set at startup by ___cxx_global_var_init
    Random g_Rand = Random(123456789, 31415821);

    // 0x100c6f100
    void ___cxx_global_var_init_1(
        mersenne_twister_engine<unsigned int, 32ul, 624ul, 397ul, 31ul, 2567483615u, 11ul, 4294967295u, 7ul,
                                2636928640u, 15ul, 4022730752u, 18ul, 1812433253u>* param_1) {
        new (param_1)
            std::mersenne_twister_engine<unsigned int, 32ul, 624ul, 397ul, 31ul, 2567483615u, 11ul, 4294967295u, 7ul,
                                         2636928640u, 15ul, 4022730752u, 18ul, 1812433253u>();
    }

    // 0x100c6f170
    void ___cxx_global_var_init_4(uniform_real_distribution<float>* param_1) {
        new (param_1) std::uniform_real_distribution<float>();
    }

    // 0x100c6f180
    void ___cxx_global_var_init_5(float param_1, exponential_distribution<float>* param_2) {
        new (param_2) std::exponential_distribution<float>(param_1);
    }

    // 0x100c6f190
    void ___cxx_global_var_init_6(linear_congruential_engine<unsigned int, 48271u, 0u, 2147483647u>* param_1) {
        new (param_1) std::linear_congruential_engine<unsigned int, 48271u, 0u, 2147483647u>();
    }

    // 0x100c6f1c0
    void ___cxx_global_var_init_40(void) {
        uint8_t* puVar1 = PTR_LOOK_100ee47d8;
        if (*PTR_LOOK_100ee47d8 == '\0') {
            new (PTR_LOOK_100ee66e0) ColourHSL(0.0, 0.0, 1.0);
            *puVar1 = 1;
        }
    }

    // 0x100c6f200
    void ___cxx_global_var_init_41(void) {
        uint8_t* puVar1 = PTR_UP_100ee47c8;
        if (*PTR_UP_100ee47c8 == '\0') {
            new (PTR_UP_100ee66d0) ColourHSL(0.0, 1.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x100c6f240
    void ___cxx_global_var_init_42(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee4298;
        if (*PTR_m_pSingleton_100ee4298 == '\0') {
            ___cxa_atexit(std::unique_ptr<ThreadPoolSingleton>::~unique_ptr, PTR_m_pSingleton_100ee5948, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100c6f280
    void ___cxx_global_var_init_43(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee42a0;
        if (*PTR_m_pSingleton_100ee42a0 == '\0') {
            ___cxa_atexit(std::unique_ptr<ShaderThreadPoolSingleton>::~unique_ptr, PTR_m_pSingleton_100ee5950,
                          4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100c6f2c0
    void __GLOBAL__sub_I_unity_0_cxx_cxx(void) {
        uint64_t uVar1 = _objc_autoreleasePoolPush();
        ___cxx_global_var_init();
        ___cxx_global_var_init_1();
        ___cxx_global_var_init_2();
        ___cxx_global_var_init_3();
        ___cxx_global_var_init_4();
        ___cxx_global_var_init_5();
        ___cxx_global_var_init_6();
        ___cxx_global_var_init_23();
        _objc_autoreleasePoolPop(uVar1);
    }

} // namespace jag::math
