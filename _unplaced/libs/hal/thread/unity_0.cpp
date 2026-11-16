// _unplaced/libs/hal/thread/unity_0.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.hal.thread

namespace jag::this_thread::internal {
    // 0x100f4e3f8
    int32_t g_ThreadName[6] = {0, 0, 0, 0, 1640, 0};

    // 0x103bdd1d0, set at startup by ___cxx_global_var_init
    int64_t g_MainThreadID = GetThreadID();

    // 0x100c98f70
    void ___cxx_global_var_init_5(void) {
        tls_map* tls_map;

        tls_map = (tls_map*)(*(void (*)(...))detail::g_tlsMap)();
        new (tls_map) detail::tls_map();
        __tlv_atexit(PTR__tls_map_100ee6820, tls_map, 4294967296);
    }

    // 0x100c98fb0
    void ___cxx_global_var_init_14(void) {
        eastl::string* basic_string;

        basic_string = (eastl::string*)(*(void (*)(...))g_ThreadName)();
        new (basic_string) eastl::string();
        __tlv_atexit(PTR__basic_string_100ee6c80, basic_string, 4294967296);
    }

    // 0x100c98ff0
    void ___cxx_global_var_init_22(void) {
        uint8_t* puVar1 = PTR_LOOK_100ee47d8;
        if (*PTR_LOOK_100ee47d8 == '\0') {
            new (PTR_LOOK_100ee66e0) math::ColourHSL(0.0, 0.0, 1.0);
            *puVar1 = 1;
        }
    }

    // 0x100c99030
    void ___cxx_global_var_init_23(void) {
        uint8_t* puVar1 = PTR_UP_100ee47c8;
        if (*PTR_UP_100ee47c8 == '\0') {
            new (PTR_UP_100ee66d0) math::ColourHSL(0.0, 1.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x100c99070
    void ___cxx_global_var_init_24(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee4298;
        if (*PTR_m_pSingleton_100ee4298 == '\0') {
            ___cxa_atexit(std::unique_ptr<ThreadPoolSingleton>::~unique_ptr, PTR_m_pSingleton_100ee5948, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100c990b0
    void ___cxx_global_var_init_25(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee42a0;
        if (*PTR_m_pSingleton_100ee42a0 == '\0') {
            ___cxa_atexit(std::unique_ptr<ShaderThreadPoolSingleton>::~unique_ptr, PTR_m_pSingleton_100ee5950,
                          4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100c990f0
    void __GLOBAL__sub_I_unity_0_cxx_cxx(void) {
        uint64_t uVar1 = _objc_autoreleasePoolPush();
        ___cxx_global_var_init();
        _objc_autoreleasePoolPop(uVar1);
    }

} // namespace jag::this_thread::internal

namespace jag::this_thread {
    // 0x100c967c0
    void Sleep(unsigned int arg1) {
        _usleep(arg1 * 1000);
    }

    // 0x100c96800
    void SetAffinity(unsigned int arg1) {}

} // namespace jag::this_thread

namespace jag::detail {
    // 0x100f4e3c8
    int32_t g_tlsMap[6] = {0, 0, 0, 0, 1584, 0};

} // namespace jag::detail

namespace jag::internal {
    // 0x100f4e3e0
    int32_t g_signalHandlerStack[6] = {0, 0, 0, 0, 1632, 0};

} // namespace jag::internal

namespace jag::threading {
    // 0x100c967a0
    auto GetNumCoresByAffinity() {
        auto result;
        result = (ReturnValue)0;
        &result[1] = (ReturnValue)0;
        *(uint32_t*)(&result + 2) = 0;
        return result;
    }

} // namespace jag::threading
