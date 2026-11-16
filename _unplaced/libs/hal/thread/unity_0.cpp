// _unplaced/libs/hal/thread/unity_0.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.hal.thread

namespace jag::this_thread::internal {
    // 0x100f4e3f8, 24 bytes, __thread_vars
    g_ThreadName = {0, 0, 0, 0, 1640, 0};

    // 0x103bdd1d0, 8 bytes, __common; set at startup by ___cxx_global_var_init
    g_MainThreadID = GetThreadID();

    // 0x100c98f50, 32 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init
    void ___cxx_global_var_init() {
        g_MainThreadID = GetThreadID();
    }

    // 0x100c98f70, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.5
    void ___cxx_global_var_init_5() {
        tls_map* this;

        this = (tls_map*)(*(code*)detail::g_tlsMap)();
        detail::tls_map::tls_map(this);
        __tlv_atexit(PTR__tls_map_100ee6820, this, 4294967296);
    }

    // 0x100c98fb0, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.14
    void ___cxx_global_var_init_14() {
        eastl::string* this;

        this = (eastl::string*)(*(code*)g_ThreadName)();
        eastl::string::basic_string(this);
        __tlv_atexit(PTR__basic_string_100ee6c80, this, 4294967296);
    }

    // 0x100c98ff0, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.22
    void ___cxx_global_var_init_22() {
        undefined* puVar1;

        puVar1 = PTR_LOOK_100ee47d8;
        if (*PTR_LOOK_100ee47d8 == '\0') {
            new (PTR_LOOK_100ee66e0) math::ColourHSL(0.0, 0.0, 1.0);
            *puVar1 = 1;
        }
    }

    // 0x100c99030, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.23
    void ___cxx_global_var_init_23() {
        undefined* puVar1;

        puVar1 = PTR_UP_100ee47c8;
        if (*PTR_UP_100ee47c8 == '\0') {
            new (PTR_UP_100ee66d0) math::ColourHSL(0.0, 1.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x100c99070, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.24
    void ___cxx_global_var_init_24() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee4298;
        if (*PTR_m_pSingleton_100ee4298 == '\0') {
            ___cxa_atexit(std::unique_ptr<ThreadPoolSingleton, std::default_delete<ThreadPoolSingleton>>::~unique_ptr,
                          PTR_m_pSingleton_100ee5948, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100c990b0, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.25
    void ___cxx_global_var_init_25() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee42a0;
        if (*PTR_m_pSingleton_100ee42a0 == '\0') {
            ___cxa_atexit(
                std::unique_ptr<ShaderThreadPoolSingleton, std::default_delete<ShaderThreadPoolSingleton>>::~unique_ptr,
                PTR_m_pSingleton_100ee5950, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100c990f0, 34 bytes, placed by nothing (unplaced)
    // __GLOBAL__sub_I_unity_0_cxx.cxx
    void __GLOBAL__sub_I_unity_0_cxx_cxx() {
        undefined8 uVar1;

        uVar1 = _objc_autoreleasePoolPush();
        ___cxx_global_var_init();
        _objc_autoreleasePoolPop(uVar1);
    }

} // namespace jag::this_thread::internal

namespace jag::this_thread {
    // 0x100c967c0, 32 bytes, placed by nothing (unplaced)
    // Sleep(unsigned int)
    void Sleep(uint param_1) {
        _usleep(param_1 * 1000);
    }

    // 0x100c96800, 16 bytes, placed by nothing (unplaced)
    // SetAffinity(unsigned int)
    void SetAffinity(uint param_1) {}

} // namespace jag::this_thread

namespace jag::detail {
    // 0x100f4e3c8, 24 bytes, __thread_vars
    g_tlsMap = {0, 0, 0, 0, 1584, 0};

} // namespace jag::detail

namespace jag::internal {
    // 0x100f4e3e0, 24 bytes, __thread_vars
    g_signalHandlerStack = {0, 0, 0, 0, 1632, 0};

} // namespace jag::internal

namespace jag::threading {
    // 0x100c967a0, 32 bytes, placed by nothing (unplaced)
    // GetNumCoresByAffinity()
    threading* GetNumCoresByAffinity() {
        field_0 = 0;
        field_8 = 0;
        field_16 = 0;
        return this;
    }

} // namespace jag::threading
