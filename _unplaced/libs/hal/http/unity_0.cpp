// _unplaced/libs/hal/http/unity_0.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.hal.http

namespace jag::threading {
    // 0x100d66a90
    int32_t MAX_HARDWARE_THREAD_LIMIT[18] = {
        16,          0,        0,          -1048576, 0,          2146435072, 0,           2146959360, 0,
        -1042284544, -4194304, 1105199103, -2097152, 1106247679, 0,          -1008730112, 0,          1139802112,
    };

    // 0x100adfca0
    void ___cxx_global_var_init(void) {
        uint8_t* puVar1 = PTR_LOOK_100ee47d8;
        if (*PTR_LOOK_100ee47d8 == '\0') {
            new (PTR_LOOK_100ee66e0) math::ColourHSL(0.0, 0.0, 1.0);
            *puVar1 = 1;
        }
    }

    // 0x100adfce0
    void ___cxx_global_var_init_50(void) {
        uint8_t* puVar1 = PTR_UP_100ee47c8;
        if (*PTR_UP_100ee47c8 == '\0') {
            new (PTR_UP_100ee66d0) math::ColourHSL(0.0, 1.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x100adfd20
    void ___cxx_global_var_init_51(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee4298;
        if (*PTR_m_pSingleton_100ee4298 == '\0') {
            ___cxa_atexit(std::unique_ptr<ThreadPoolSingleton>::~unique_ptr, PTR_m_pSingleton_100ee5948, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100adfd60
    void ___cxx_global_var_init_52(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee42a0;
        if (*PTR_m_pSingleton_100ee42a0 == '\0') {
            ___cxa_atexit(std::unique_ptr<ShaderThreadPoolSingleton>::~unique_ptr, PTR_m_pSingleton_100ee5950,
                          4294967296);
            *puVar1 = 1;
        }
    }

} // namespace jag::threading
