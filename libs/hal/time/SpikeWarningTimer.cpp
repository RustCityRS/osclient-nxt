// libs/hal/time/SpikeWarningTimer.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.hal.time

namespace jag {
    class SpikeWarningTimer {
    public:
        SpikeWarningTimer(CtorSprintf arg1, const char* arg2, ...);
        SpikeWarningTimer(CtorSprintf arg1, float arg2, const char* arg3, ...);
        SpikeWarningTimer(const char* arg1);
        SpikeWarningTimer(float arg1, const char* arg2);
    };

    // 0x103bdd1e0, set at startup by ___cxx_global_var_init
    logger::LogStream LOGGER_SPIKE;

    // 0x100009e70: SpikeWarningTimer::SpikeWarningTimer(SpikeWarningTimer::CtorSprintf, char const*, ...) has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

    // 0x100009e70: SpikeWarningTimer::SpikeWarningTimer(SpikeWarningTimer::CtorSprintf, float, char const*, ...) has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

    // 0x100009e70: SpikeWarningTimer::SpikeWarningTimer(char const*) has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

    // 0x100009e70: SpikeWarningTimer::SpikeWarningTimer(float, char const*) has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

    // 0x100c9d0e0
    void ___cxx_global_var_init(void) {

        fixed_string<char, 32> local_60("Spike");
        fixed_string<char, 32> local_a8("Render");
        new ((LogStream*)&LOGGER_SPIKE) logger::LogStream(&local_60, &local_a8, 8);
    }

    // 0x100c9d1b0
    void ___cxx_global_var_init_12(void) {
        uint8_t* puVar1 = PTR_LOOK_100ee47d8;
        if (*PTR_LOOK_100ee47d8 == '\0') {
            new (PTR_LOOK_100ee66e0) math::ColourHSL(0.0, 0.0, 1.0);
            *puVar1 = 1;
        }
    }

    // 0x100c9d1f0
    void ___cxx_global_var_init_13(void) {
        uint8_t* puVar1 = PTR_UP_100ee47c8;
        if (*PTR_UP_100ee47c8 == '\0') {
            new (PTR_UP_100ee66d0) math::ColourHSL(0.0, 1.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x100c9d230
    void ___cxx_global_var_init_14(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee4298;
        if (*PTR_m_pSingleton_100ee4298 == '\0') {
            ___cxa_atexit(std::unique_ptr<ThreadPoolSingleton>::~unique_ptr, PTR_m_pSingleton_100ee5948, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100c9d270
    void ___cxx_global_var_init_15(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee42a0;
        if (*PTR_m_pSingleton_100ee42a0 == '\0') {
            ___cxa_atexit(std::unique_ptr<ShaderThreadPoolSingleton>::~unique_ptr, PTR_m_pSingleton_100ee5950,
                          4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100c9d2b0
    void __GLOBAL__sub_I_unity_0_cxx_cxx(void) {
        uint64_t uVar1 = _objc_autoreleasePoolPush();
        ___cxx_global_var_init();
        _objc_autoreleasePoolPop(uVar1);
    }

} // namespace jag
