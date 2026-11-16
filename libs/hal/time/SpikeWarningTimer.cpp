// libs/hal/time/SpikeWarningTimer.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.hal.time

namespace jag {
    class SpikeWarningTimer {
    public:
        SpikeWarningTimer(CtorSprintf, char const*, ...);
        SpikeWarningTimer(CtorSprintf, float, char const*, ...);
        SpikeWarningTimer(char const*);
        SpikeWarningTimer(float, char const*);
    };

    // 0x103bdd1e0, 144 bytes, __common; set at startup by ___cxx_global_var_init
    logger::LogStream LOGGER_SPIKE;

    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    SpikeWarningTimer::SpikeWarningTimer(SpikeWarningTimer::CtorSprintf, char const*, ...);

    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    SpikeWarningTimer::SpikeWarningTimer(SpikeWarningTimer::CtorSprintf, float, char const*, ...);

    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    SpikeWarningTimer::SpikeWarningTimer(char const*);

    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    SpikeWarningTimer::SpikeWarningTimer(float, char const*);

    // 0x10002a770: the linker folded this into void eastl::destruct<oldscape::rs2lib::CoordMapSquare*>(oldscape::rs2lib::CoordMapSquare*, oldscape::rs2lib::CoordMapSquare*), which has identical code
    SpikeWarningTimer::SpikeWarningTimer(char const*);

    // 0x10002a770: the linker folded this into void eastl::destruct<oldscape::rs2lib::CoordMapSquare*>(oldscape::rs2lib::CoordMapSquare*, oldscape::rs2lib::CoordMapSquare*), which has identical code
    SpikeWarningTimer::SpikeWarningTimer(float, char const*);

    // 0x100c9d0e0, 208 bytes, placed by the data it initialises
    // ___cxx_global_var_init
    void ___cxx_global_var_init() {
        fixed_string<char, 32, true, eastl::allocator> local_a8[72];
        fixed_string<char, 32, true, eastl::allocator> local_60[72];
        undefined8 local_18;

        local_18 = *(undefined8*)PTR____stack_chk_guard_100ee9d98;
        eastl::fixed_string<char, 32, true, eastl::allocator>::fixed_string(local_60, "Spike");
        eastl::fixed_string<char, 32, true, eastl::allocator>::fixed_string(local_a8, "Render");
        new (&LOGGER_SPIKE) logger::LogStream(local_60, local_a8, 8);
        /* WARNING: Subroutine does not return */
        local_a8->~fixed_string();
    }

    // 0x100c9d1b0, 64 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.12
    void ___cxx_global_var_init_12() {
        undefined* puVar1;

        puVar1 = PTR_LOOK_100ee47d8;
        if (*PTR_LOOK_100ee47d8 == '\0') {
            new (PTR_LOOK_100ee66e0) math::ColourHSL(0.0, 0.0, 1.0);
            *puVar1 = 1;
        }
    }

    // 0x100c9d1f0, 64 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.13
    void ___cxx_global_var_init_13() {
        undefined* puVar1;

        puVar1 = PTR_UP_100ee47c8;
        if (*PTR_UP_100ee47c8 == '\0') {
            new (PTR_UP_100ee66d0) math::ColourHSL(0.0, 1.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x100c9d230, 64 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.14
    void ___cxx_global_var_init_14() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee4298;
        if (*PTR_m_pSingleton_100ee4298 == '\0') {
            ___cxa_atexit(std::unique_ptr<ThreadPoolSingleton, std::default_delete<ThreadPoolSingleton>>::~unique_ptr,
                          PTR_m_pSingleton_100ee5948, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100c9d270, 64 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.15
    void ___cxx_global_var_init_15() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee42a0;
        if (*PTR_m_pSingleton_100ee42a0 == '\0') {
            ___cxa_atexit(
                std::unique_ptr<ShaderThreadPoolSingleton, std::default_delete<ShaderThreadPoolSingleton>>::~unique_ptr,
                PTR_m_pSingleton_100ee5950, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100c9d2b0, 34 bytes, placed by debug map only (low confidence)
    // __GLOBAL__sub_I_unity_0_cxx.cxx
    void __GLOBAL__sub_I_unity_0_cxx_cxx() {
        undefined8 uVar1;

        uVar1 = _objc_autoreleasePoolPush();
        ___cxx_global_var_init();
        _objc_autoreleasePoolPop(uVar1);
    }

} // namespace jag
