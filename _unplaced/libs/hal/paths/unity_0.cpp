// _unplaced/libs/hal/paths/unity_0.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.hal.paths

// 0x100ba5510
void ___cxx_global_var_init_8(void) {

    new ((map<eastl::string, eastl::vector<jag::LoadingScreenScript::Keyframe>>*)&jag::SystemPaths::m_callbacks)
        eastl::map(local_20);
    ___cxa_atexit(PTR__map_100ee6d08, &jag::SystemPaths::m_callbacks, 4294967296);
}

// 0x100ba5560
void ___cxx_global_var_init_25(void) {
    uint8_t* puVar1 = PTR_LOOK_100ee47d8;
    if (*PTR_LOOK_100ee47d8 == '\0') {
        new (PTR_LOOK_100ee66e0) jag::math::ColourHSL(0.0, 0.0, 1.0);
        *puVar1 = 1;
    }
}

// 0x100ba55a0
void ___cxx_global_var_init_26(void) {
    uint8_t* puVar1 = PTR_UP_100ee47c8;
    if (*PTR_UP_100ee47c8 == '\0') {
        new (PTR_UP_100ee66d0) jag::math::ColourHSL(0.0, 1.0, 0.0);
        *puVar1 = 1;
    }
}

// 0x100ba55e0
void ___cxx_global_var_init_27(void) {
    uint8_t* puVar1 = PTR_m_pSingleton_100ee4298;
    if (*PTR_m_pSingleton_100ee4298 == '\0') {
        ___cxa_atexit(std::unique_ptr<jag::ThreadPoolSingleton>::~unique_ptr, PTR_m_pSingleton_100ee5948, 4294967296);
        *puVar1 = 1;
    }
}

// 0x100ba5620
void ___cxx_global_var_init_28(void) {
    uint8_t* puVar1 = PTR_m_pSingleton_100ee42a0;
    if (*PTR_m_pSingleton_100ee42a0 == '\0') {
        ___cxa_atexit(std::unique_ptr<jag::ShaderThreadPoolSingleton>::~unique_ptr, PTR_m_pSingleton_100ee5950,
                      4294967296);
        *puVar1 = 1;
    }
}

// 0x100ba5660
void __GLOBAL__sub_I_unity_0_cxx_cxx(void) {
    uint64_t uVar1 = _objc_autoreleasePoolPush();
    ___cxx_global_var_init();
    ___cxx_global_var_init_1();
    ___cxx_global_var_init_2();
    ___cxx_global_var_init_3();
    ___cxx_global_var_init_4();
    ___cxx_global_var_init_5();
    ___cxx_global_var_init_6();
    ___cxx_global_var_init_7();
    ___cxx_global_var_init_8();
    _objc_autoreleasePoolPop(uVar1);
}
