// _unplaced/libs/hal/input/unity_0.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.hal.input

namespace jag::input {
    // 0x103bdd2a8, 144 bytes, __common; set at startup by ___cxx_global_var_init
    logger::LogStream LOGGER_KEYBOARD;

    // 0x103bdd338, 144 bytes, __common; set at startup by ___cxx_global_var_init.2
    logger::LogStream LOGGER_MOUSE;

    // 0x103be24d4, 32 bytes, __common; zero-initialised
    m_axis;

    // 0x103be24f4, 8 bytes, __common; zero-initialised
    m_triggers;

    // 0x103be24fc, 64 bytes, __common; zero-initialised
    m_buttons;

    // 0x103be253c, 4 bytes, __common; zero-initialised
    m_gamepadStates;

    // 0x100ca66f0, 208 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init
    void ___cxx_global_var_init() {
        fixed_string<char, 32, true, eastl::allocator> local_a8[72];
        fixed_string<char, 32, true, eastl::allocator> local_60[72];
        undefined8 local_18;

        local_18 = *(undefined8*)PTR____stack_chk_guard_100ee9d98;
        eastl::fixed_string<char, 32, true, eastl::allocator>::fixed_string(local_60, "Keyboard");
        eastl::fixed_string<char, 32, true, eastl::allocator>::fixed_string(local_a8, "Input");
        new (&LOGGER_KEYBOARD) logger::LogStream(local_60, local_a8, 3);
        /* WARNING: Subroutine does not return */
        local_a8->~fixed_string();
    }

    // 0x100ca67c0, 208 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.2
    void ___cxx_global_var_init_2() {
        fixed_string<char, 32, true, eastl::allocator> local_a8[72];
        fixed_string<char, 32, true, eastl::allocator> local_60[72];
        undefined8 local_18;

        local_18 = *(undefined8*)PTR____stack_chk_guard_100ee9d98;
        eastl::fixed_string<char, 32, true, eastl::allocator>::fixed_string(local_60, "Mouse");
        eastl::fixed_string<char, 32, true, eastl::allocator>::fixed_string(local_a8, "Input");
        new (&LOGGER_MOUSE) logger::LogStream(local_60, local_a8, 3);
        /* WARNING: Subroutine does not return */
        local_a8->~fixed_string();
    }

    // 0x100ca68d0, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.32
    void ___cxx_global_var_init_32() {
        undefined* puVar1;

        puVar1 = PTR_LOOK_100ee47d8;
        if (*PTR_LOOK_100ee47d8 == '\0') {
            new (PTR_LOOK_100ee66e0) math::ColourHSL(0.0, 0.0, 1.0);
            *puVar1 = 1;
        }
    }

    // 0x100ca6910, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.33
    void ___cxx_global_var_init_33() {
        undefined* puVar1;

        puVar1 = PTR_UP_100ee47c8;
        if (*PTR_UP_100ee47c8 == '\0') {
            new (PTR_UP_100ee66d0) math::ColourHSL(0.0, 1.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x100ca6950, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.34
    void ___cxx_global_var_init_34() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee4298;
        if (*PTR_m_pSingleton_100ee4298 == '\0') {
            ___cxa_atexit(std::unique_ptr<ThreadPoolSingleton, std::default_delete<ThreadPoolSingleton>>::~unique_ptr,
                          PTR_m_pSingleton_100ee5948, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100ca6990, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.35
    void ___cxx_global_var_init_35() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee42a0;
        if (*PTR_m_pSingleton_100ee42a0 == '\0') {
            ___cxa_atexit(
                std::unique_ptr<ShaderThreadPoolSingleton, std::default_delete<ShaderThreadPoolSingleton>>::~unique_ptr,
                PTR_m_pSingleton_100ee5950, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100ca69d0, 48 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.36
    void ___cxx_global_var_init_36() {
        undefined* puVar1;

        puVar1 = PTR_ZERO_100ee4790;
        if (*PTR_ZERO_100ee4790 == '\0') {
            new (PTR_ZERO_100ee6698) math::Point<float>(0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x100ca6a00, 44 bytes, placed by nothing (unplaced)
    // __GLOBAL__sub_I_unity_0_cxx.cxx
    void __GLOBAL__sub_I_unity_0_cxx_cxx() {
        undefined8 uVar1;

        uVar1 = _objc_autoreleasePoolPush();
        ___cxx_global_var_init();
        ___cxx_global_var_init_2();
        ___cxx_global_var_init_31();
        _objc_autoreleasePoolPop(uVar1);
    }

} // namespace jag::input
