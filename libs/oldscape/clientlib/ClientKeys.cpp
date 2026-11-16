// libs/oldscape/clientlib/ClientKeys.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.oldscape.clientlib

namespace jag::oldscape {
    // 0x103992670, 8 bytes, __common; set at startup by ___cxx_global_var_init
    jag::math::BigInteger ClientKeys::login_rsae = BigInteger("10001", 16);

    // 0x103992678, 8 bytes, __common; set at startup by ___cxx_global_var_init.1
    jag::math::BigInteger ClientKeys::login_rsan =
        BigInteger("9d65aa39691f5fadd6296eeee7726eab566ecc003adda321a1bf18f94cce90d5198fcdf30dca1deef73fa1deb8c1ed0731e"
                   "3f4712b23ab9f180de4946043ea93a3fef2c0099f69c64d0be204a1415322032e6f60aca9aa2a420c696627b2ed49a7970b"
                   "dfe1cdcf1446fa65530a3bb0b1573a3effc1086fa29016ff9cc35e8951",
                   16);

    // 0x103992680, 72 bytes, __common; set at startup by ___cxx_global_var_init.3
    OldscapeClientError g_singletonClientError = OldscapeClientError();

    // 0x1003a0590, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init
    void ___cxx_global_var_init() {
        new (&ClientKeys::login_rsae) jag::math::BigInteger("10001", 16);
        ___cxa_atexit(PTR__BigInteger_100ee6670, &ClientKeys::login_rsae, 4294967296);
    }

    // 0x1003a05d0, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.1
    void ___cxx_global_var_init_1() {
        new (&ClientKeys::login_rsan) jag::math::BigInteger(
            "9d65aa39691f5fadd6296eeee7726eab566ecc003adda321a1bf18f94cce90d5198fcdf30dca1deef73fa1deb8c1ed0731e3f4712b"
            "23ab9f180de4946043ea93a3fef2c0099f69c64d0be204a1415322032e6f60aca9aa2a420c696627b2ed49a7970bdfe1cdcf1446fa"
            "65530a3bb0b1573a3effc1086fa29016ff9cc35e8951",
            16);
        ___cxa_atexit(PTR__BigInteger_100ee6670, &ClientKeys::login_rsan, 4294967296);
    }

    // 0x1003a0610, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.3
    void ___cxx_global_var_init_3() {
        new (&g_singletonClientError) OldscapeClientError();
        ___cxa_atexit(OldscapeClientError::~OldscapeClientError, &g_singletonClientError, 4294967296);
    }

    // 0x1003a0830, 96 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.42
    void ___cxx_global_var_init_42() {
        undefined1 local_50[40];
        Vector3T<int> local_28[16];

        jag::math::Matrix33Scaling<float>((math*)local_50, 1.0, 1.0, -1.0);
        jag::math::Vector3T<int>::Vector3T(local_28);
        new (&jag::graphics::MAYA_ANIM_INVERT_MATRIX) jag::math::Matrix44T<float>(local_50, local_28);
    }

    // 0x1003a0890, 32 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.43
    void ___cxx_global_var_init_43() {
        new (&jag::graphics::WORLD_ORTHOGONAL) jag::math::ColourHSL(-1.5707964, -1.5707964, 0.0);
    }

    // 0x1003a08b0, 96 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.45
    void ___cxx_global_var_init_45() {
        if (*PTR_VIEWRT_LUMINANCE_ADAPTED_100ee4048 == '\0') {
            if (___cxa_guard_acquire(PTR_VIEWRT_LUMINANCE_ADAPTED_100ee4048) != 0) {
                new (PTR_VIEWRT_LUMINANCE_ADAPTED_100ee5578) HashedString("LUMINANCE_ADAPTED");
                ___cxa_guard_release(PTR_VIEWRT_LUMINANCE_ADAPTED_100ee4048);
            }
        }
    }

    // 0x1003a0910, 96 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.47
    void ___cxx_global_var_init_47() {
        if (*PTR_VIEWRT_LUMINANCE_ADAPTED_PREVIOUS_100ee4058 == '\0') {
            if (___cxa_guard_acquire(PTR_VIEWRT_LUMINANCE_ADAPTED_PREVIOUS_100ee4058) != 0) {
                new (PTR_VIEWRT_LUMINANCE_ADAPTED_PREVIOUS_100ee5588) HashedString("LUMINANCE_ADAPTED_PREVIOUS");
                ___cxa_guard_release(PTR_VIEWRT_LUMINANCE_ADAPTED_PREVIOUS_100ee4058);
            }
        }
    }

    // 0x1003a0970, 96 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.49
    void ___cxx_global_var_init_49() {
        if (*PTR_VIEWRT_LUMINANCE_AVERAGE_100ee4050 == '\0') {
            if (___cxa_guard_acquire(PTR_VIEWRT_LUMINANCE_AVERAGE_100ee4050) != 0) {
                new (PTR_VIEWRT_LUMINANCE_AVERAGE_100ee5580) HashedString("VIEWRT_LUMINANCE_AVERAGE");
                ___cxa_guard_release(PTR_VIEWRT_LUMINANCE_AVERAGE_100ee4050);
            }
        }
    }

    // 0x1003a0a50, 16 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.70
    void ___cxx_global_var_init_70() {
        defaults::DefaultsGroup::GRAPHICS._0_4_ = 3;
    }

    // 0x1003a0a60, 144 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.71
    void ___cxx_global_var_init_71() {
        mach_header** local_48;
        undefined8 local_40;
        mach_header* local_38;
        undefined8 uStack_30;
        undefined8 local_28;
        long local_18;

        local_18 = *(long*)PTR____stack_chk_guard_100ee9d98;
        local_28 = 21474836484;
        local_38 = &__mh_execute_header;
        uStack_30 = 12884901890;
        local_48 = &local_38;
        local_40 = 6;
        new (&AllFonts) Array<Font, eastl::allocator>((initializer_list*)&local_48);
        ___cxa_atexit(PTR__Array_100ee6788, &AllFonts, 4294967296);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_18) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x1003a0f20, 32 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.89
    void ___cxx_global_var_init_89() {
        ___cxa_atexit(std::unique_ptr<File, std::default_delete<File>>::~unique_ptr, &GameShell3Cache::m_uidDat,
                      4294967296);
    }

    // 0x1003a0f90, 64 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.108
    void ___cxx_global_var_init_108() {
        undefined* puVar1;

        puVar1 = PTR_LOOK_100ee47d8;
        if (*PTR_LOOK_100ee47d8 == '\0') {
            new (PTR_LOOK_100ee66e0) jag::math::ColourHSL(0.0, 0.0, 1.0);
            *puVar1 = 1;
        }
    }

    // 0x1003a0fd0, 64 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.109
    void ___cxx_global_var_init_109() {
        undefined* puVar1;

        puVar1 = PTR_UP_100ee47c8;
        if (*PTR_UP_100ee47c8 == '\0') {
            new (PTR_UP_100ee66d0) jag::math::ColourHSL(0.0, 1.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x1003a1010, 48 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.110
    void ___cxx_global_var_init_110() {
        undefined* puVar1;

        puVar1 = PTR_ZERO_100ee4790;
        if (*PTR_ZERO_100ee4790 == '\0') {
            new (PTR_ZERO_100ee6698) jag::math::Point<float>(0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x1003a1040, 64 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.111
    void ___cxx_global_var_init_111() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee49f0;
        if (*PTR_m_pSingleton_100ee49f0 == '\0') {
            ___cxa_atexit(
                std::unique_ptr<hardware::HardwareInfo, std::default_delete<hardware::HardwareInfo>>::~unique_ptr,
                PTR_m_pSingleton_100ee6c60, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1003a1080, 64 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.112
    void ___cxx_global_var_init_112() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee4298;
        if (*PTR_m_pSingleton_100ee4298 == '\0') {
            ___cxa_atexit(std::unique_ptr<ThreadPoolSingleton, std::default_delete<ThreadPoolSingleton>>::~unique_ptr,
                          PTR_m_pSingleton_100ee5948, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1003a10c0, 64 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.113
    void ___cxx_global_var_init_113() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee42a0;
        if (*PTR_m_pSingleton_100ee42a0 == '\0') {
            ___cxa_atexit(
                std::unique_ptr<ShaderThreadPoolSingleton, std::default_delete<ShaderThreadPoolSingleton>>::~unique_ptr,
                PTR_m_pSingleton_100ee5950, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1003a1100, 64 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.114
    void ___cxx_global_var_init_114() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee4518;
        if (*PTR_m_mutex_100ee4518 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5df0, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1003a1140, 64 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.115
    void ___cxx_global_var_init_115() {
        undefined* puVar1;

        puVar1 = PTR_ZERO_100ee4800;
        if (*PTR_ZERO_100ee4800 == '\0') {
            new (PTR_ZERO_100ee6708) ImVec4(0.0, 0.0, 0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x1003a1180, 64 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.116
    void ___cxx_global_var_init_116() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee49c8;
        if (*PTR_m_pSingleton_100ee49c8 == '\0') {
            ___cxa_atexit(std::unique_ptr<render::ShaderProgramManager,
                                          std::default_delete<render::ShaderProgramManager>>::~unique_ptr,
                          PTR_m_pSingleton_100ee6c38, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1003a11c0, 64 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.117
    void ___cxx_global_var_init_117() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee49d0;
        if (*PTR_m_pSingleton_100ee49d0 == '\0') {
            ___cxa_atexit(std::unique_ptr<render::VertexDeclarationManager,
                                          std::default_delete<render::VertexDeclarationManager>>::~unique_ptr,
                          PTR_m_pSingleton_100ee6c40, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1003a1200, 64 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.118
    void ___cxx_global_var_init_118() {
        undefined* puVar1;

        puVar1 = PTR_ZERO_100ee47e0;
        if (*PTR_ZERO_100ee47e0 == '\0') {
            new (PTR_ZERO_100ee66e8) jag::math::ColourHSL(0.0, 0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x1003a1240, 64 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.119
    void ___cxx_global_var_init_119() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee49a0;
        if (*PTR_m_pSingleton_100ee49a0 == '\0') {
            ___cxa_atexit(std::unique_ptr<render::RenderDevice, std::default_delete<render::RenderDevice>>::~unique_ptr,
                          PTR_m_pSingleton_100ee6c10, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1003a1280, 64 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.120
    void ___cxx_global_var_init_120() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee45b0;
        if (*PTR_m_mutex_100ee45b0 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5f20, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1003a12c0, 64 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.121
    void ___cxx_global_var_init_121() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee49d8;
        if (*PTR_m_pSingleton_100ee49d8 == '\0') {
            ___cxa_atexit(std::unique_ptr<jag::graphics::AnimationManager,
                                          std::default_delete<jag::graphics::AnimationManager>>::~unique_ptr,
                          PTR_m_pSingleton_100ee6c48, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1003a1300, 96 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.122
    void ___cxx_global_var_init_122() {
        undefined* puVar1;

        puVar1 = PTR_ZERO_100ee4820;
        if (*PTR_ZERO_100ee4820 == '\0') {
            new (PTR_ZERO_100ee6728) jag::math::Matrix44T<float>(0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
                                                                 0.0, 0.0, 0.0, 0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x1003a1360, 64 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.123
    void ___cxx_global_var_init_123() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee45d8;
        if (*PTR_m_mutex_100ee45d8 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5f70, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1003a13a0, 96 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.124
    void ___cxx_global_var_init_124() {
        undefined* puVar1;

        puVar1 = PTR_IDENTITY_100ee4828;
        if (*PTR_IDENTITY_100ee4828 == '\0') {
            new (PTR_IDENTITY_100ee6730) jag::math::Matrix44T<float>(1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0,
                                                                     1.0, 0.0, 0.0, 0.0, 0.0, 1.0);
            *puVar1 = 1;
        }
    }

    // 0x1003a1400, 64 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.125
    void ___cxx_global_var_init_125() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee4590;
        if (*PTR_m_mutex_100ee4590 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5ee0, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1003a1440, 64 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.126
    void ___cxx_global_var_init_126() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee4290;
        if (*PTR_m_pSingleton_100ee4290 == '\0') {
            ___cxa_atexit(std::unique_ptr<graphicutils::BatchDestroyManager,
                                          std::default_delete<graphicutils::BatchDestroyManager>>::~unique_ptr,
                          PTR_m_pSingleton_100ee5940, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1003a1480, 64 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.127
    void ___cxx_global_var_init_127() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee4520;
        if (*PTR_m_mutex_100ee4520 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5e00, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1003a14c0, 64 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.128
    void ___cxx_global_var_init_128() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee4500;
        if (*PTR_m_mutex_100ee4500 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5dc0, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1003a1500, 64 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.129
    void ___cxx_global_var_init_129() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee42a8;
        if (*PTR_m_pSingleton_100ee42a8 == '\0') {
            ___cxa_atexit(std::unique_ptr<hal::Haptics, std::default_delete<hal::Haptics>>::~unique_ptr,
                          PTR_m_pSingleton_100ee5958, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1003a1540, 144 bytes, placed by debug map only (low confidence)
    // __GLOBAL__sub_I_unity_0_cxx.cxx
    void __GLOBAL__sub_I_unity_0_cxx_cxx() {
        undefined8 uVar1;

        uVar1 = _objc_autoreleasePoolPush();
        ___cxx_global_var_init();
        ___cxx_global_var_init_1();
        ___cxx_global_var_init_3();
        ___cxx_global_var_init_19();
        ___cxx_global_var_init_22();
        ___cxx_global_var_init_24();
        ___cxx_global_var_init_26();
        ___cxx_global_var_init_28();
        ___cxx_global_var_init_42();
        ___cxx_global_var_init_43();
        ___cxx_global_var_init_51();
        ___cxx_global_var_init_52();
        ___cxx_global_var_init_70();
        ___cxx_global_var_init_71();
        ___cxx_global_var_init_72();
        ___cxx_global_var_init_83();
        ___cxx_global_var_init_84();
        ___cxx_global_var_init_85();
        ___cxx_global_var_init_86();
        ___cxx_global_var_init_87();
        ___cxx_global_var_init_88();
        ___cxx_global_var_init_89();
        ___cxx_global_var_init_105();
        _objc_autoreleasePoolPop(uVar1);
    }

} // namespace jag::oldscape
