// _unplaced/libs/hal/system/auth/unity_0.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.hal.system.auth

namespace jag::auth {
    // 0x100f381c8
    const char* HTTP_PARAM_REFRESH_TOKEN = "refresh_token";

    // 0x100f381d0
    const char* HTTP_PARAM_SCOPE = "scope";

    // 0x100f381d8
    const char* HTTP_PARAM_REDIRTO = "redirTo";

    // 0x100f381e0
    const char* HTTP_PARAM_GRANT_TYPE = "grant_type";

    // 0x100f381e8
    const char* HTTP_VALUE_GRANT_TYPE = "refresh_token";

    // 0x100f381f0
    const char* HTTP_PARAM_TOKEN = "token";

    // 0x100f381f8
    const char* HTTP_PARAM_TOKEN_TYPE_HINT = "token_type_hint";

    // 0x100f38200
    const char* HTTP_VALUE_TOKEN_HINT_TYPE = "refresh_token";

    // 0x100f38208
    const char* HTTP_PARAM_SIG = "sig";

    // 0x103992e30, set at startup by ___cxx_global_var_init
    AuthWeb m_authWeb = AuthWeb();

    // 0x1003b4290
    void ___cxx_global_var_init_76(void) {
        uint8_t* puVar1 = PTR_LOOK_100ee47d8;
        if (*PTR_LOOK_100ee47d8 == '\0') {
            new (PTR_LOOK_100ee66e0) math::ColourHSL(0.0, 0.0, 1.0);
            *puVar1 = 1;
        }
    }

    // 0x1003b42d0
    void ___cxx_global_var_init_77(void) {
        uint8_t* puVar1 = PTR_UP_100ee47c8;
        if (*PTR_UP_100ee47c8 == '\0') {
            new (PTR_UP_100ee66d0) math::ColourHSL(0.0, 1.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x1003b4310
    void ___cxx_global_var_init_78(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee4298;
        if (*PTR_m_pSingleton_100ee4298 == '\0') {
            ___cxa_atexit(std::unique_ptr<ThreadPoolSingleton>::~unique_ptr, PTR_m_pSingleton_100ee5948, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1003b4350
    void ___cxx_global_var_init_79(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee42a0;
        if (*PTR_m_pSingleton_100ee42a0 == '\0') {
            ___cxa_atexit(std::unique_ptr<ShaderThreadPoolSingleton>::~unique_ptr, PTR_m_pSingleton_100ee5950,
                          4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1003b4390
    void __GLOBAL__sub_I_unity_0_cxx_cxx(void) {
        uint64_t uVar1 = _objc_autoreleasePoolPush();
        ___cxx_global_var_init();
        _objc_autoreleasePoolPop(uVar1);
    }

} // namespace jag::auth
