// _unplaced/libs/hal/paths/unity_0.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.hal.paths

// 0x100ba5510, 80 bytes, placed by nothing (unplaced)
// ___cxx_global_var_init.8
void ___cxx_global_var_init_8() {
    allocator local_20[8];

    eastl::allocator::allocator(local_20, "EASTL set");
    eastl::map<eastl::string, eastl::vector<jag::LoadingScreenScript::Keyframe, eastl::allocator>,
               eastl::less<eastl::string>, eastl::allocator>::map((allocator*)&jag::SystemPaths::m_callbacks);
    ___cxa_atexit(PTR__map_100ee6d08, &jag::SystemPaths::m_callbacks, 4294967296);
}

// 0x100ba5560, 64 bytes, placed by nothing (unplaced)
// ___cxx_global_var_init.25
void ___cxx_global_var_init_25() {
    undefined* puVar1;

    puVar1 = PTR_LOOK_100ee47d8;
    if (*PTR_LOOK_100ee47d8 == '\0') {
        new (PTR_LOOK_100ee66e0) jag::math::ColourHSL(0.0, 0.0, 1.0);
        *puVar1 = 1;
    }
}

// 0x100ba55a0, 64 bytes, placed by nothing (unplaced)
// ___cxx_global_var_init.26
void ___cxx_global_var_init_26() {
    undefined* puVar1;

    puVar1 = PTR_UP_100ee47c8;
    if (*PTR_UP_100ee47c8 == '\0') {
        new (PTR_UP_100ee66d0) jag::math::ColourHSL(0.0, 1.0, 0.0);
        *puVar1 = 1;
    }
}

// 0x100ba55e0, 64 bytes, placed by nothing (unplaced)
// ___cxx_global_var_init.27
void ___cxx_global_var_init_27() {
    undefined* puVar1;

    puVar1 = PTR_m_pSingleton_100ee4298;
    if (*PTR_m_pSingleton_100ee4298 == '\0') {
        ___cxa_atexit(
            std::unique_ptr<jag::ThreadPoolSingleton, std::default_delete<jag::ThreadPoolSingleton>>::~unique_ptr,
            PTR_m_pSingleton_100ee5948, 4294967296);
        *puVar1 = 1;
    }
}

// 0x100ba5620, 64 bytes, placed by nothing (unplaced)
// ___cxx_global_var_init.28
void ___cxx_global_var_init_28() {
    undefined* puVar1;

    puVar1 = PTR_m_pSingleton_100ee42a0;
    if (*PTR_m_pSingleton_100ee42a0 == '\0') {
        ___cxa_atexit(std::unique_ptr<jag::ShaderThreadPoolSingleton,
                                      std::default_delete<jag::ShaderThreadPoolSingleton>>::~unique_ptr,
                      PTR_m_pSingleton_100ee5950, 4294967296);
        *puVar1 = 1;
    }
}

// 0x100ba5660, 74 bytes, placed by nothing (unplaced)
// __GLOBAL__sub_I_unity_0_cxx.cxx
void __GLOBAL__sub_I_unity_0_cxx_cxx() {
    undefined8 uVar1;

    uVar1 = _objc_autoreleasePoolPush();
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
