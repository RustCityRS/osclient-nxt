// _unplaced/libs/hal/input/unity_0.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.hal.input

namespace jag::input {
    // 0x103bdd2a8, set at startup by ___cxx_global_var_init
    logger::LogStream LOGGER_KEYBOARD;

    // 0x103bdd338, set at startup by ___cxx_global_var_init.2
    logger::LogStream LOGGER_MOUSE;

    // 0x103be24d4
    uint8_t m_axis[32];

    // 0x103be24f4
    int32_t m_triggers;

    // 0x103be24fc
    uint8_t m_buttons[64];

    // 0x103be253c
    int32_t m_gamepadStates;

    // 0x100ca66f0
    void ___cxx_global_var_init(void) {

        fixed_string<char, 32> local_60("Keyboard");
        fixed_string<char, 32> local_a8("Input");
        new ((LogStream*)&LOGGER_KEYBOARD) logger::LogStream(&local_60, &local_a8, 3);
    }

    // 0x100ca67c0
    void ___cxx_global_var_init_2(void) {

        fixed_string<char, 32> local_60("Mouse");
        fixed_string<char, 32> local_a8("Input");
        new ((LogStream*)&LOGGER_MOUSE) logger::LogStream(&local_60, &local_a8, 3);
    }

    // 0x100ca68d0
    void ___cxx_global_var_init_32(void) {
        uint8_t* puVar1 = PTR_LOOK_100ee47d8;
        if (*PTR_LOOK_100ee47d8 == '\0') {
            new (PTR_LOOK_100ee66e0) math::ColourHSL(0.0, 0.0, 1.0);
            *puVar1 = 1;
        }
    }

    // 0x100ca6910
    void ___cxx_global_var_init_33(void) {
        uint8_t* puVar1 = PTR_UP_100ee47c8;
        if (*PTR_UP_100ee47c8 == '\0') {
            new (PTR_UP_100ee66d0) math::ColourHSL(0.0, 1.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x100ca6950
    void ___cxx_global_var_init_34(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee4298;
        if (*PTR_m_pSingleton_100ee4298 == '\0') {
            ___cxa_atexit(std::unique_ptr<ThreadPoolSingleton>::~unique_ptr, PTR_m_pSingleton_100ee5948, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100ca6990
    void ___cxx_global_var_init_35(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee42a0;
        if (*PTR_m_pSingleton_100ee42a0 == '\0') {
            ___cxa_atexit(std::unique_ptr<ShaderThreadPoolSingleton>::~unique_ptr, PTR_m_pSingleton_100ee5950,
                          4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100ca69d0
    void ___cxx_global_var_init_36(void) {
        uint8_t* puVar1 = PTR_ZERO_100ee4790;
        if (*PTR_ZERO_100ee4790 == '\0') {
            new (PTR_ZERO_100ee6698) math::Point(0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x100ca6a00
    void __GLOBAL__sub_I_unity_0_cxx_cxx(void) {
        uint64_t uVar1 = _objc_autoreleasePoolPush();
        ___cxx_global_var_init();
        ___cxx_global_var_init_2();
        ___cxx_global_var_init_31();
        _objc_autoreleasePoolPop(uVar1);
    }

} // namespace jag::input
