// libs/oldscape/clientlib/auth/AppsFlyerEvent.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: osclient

namespace jag::oldscape::auth {
    // 0x103c050f8, 32 bytes, __bss; set at startup by ___cxx_global_var_init.113
    eastl::string AppsFlyerEvent::LOGIN_FAILED = "lfPMvO";

    // 0x103c05118, 32 bytes, __bss; set at startup by ___cxx_global_var_init.115
    eastl::string AppsFlyerEvent::FORGOT_PASSWORD = "fpVPSZ";

    // 0x103c05138, 32 bytes, __bss; set at startup by ___cxx_global_var_init.117
    eastl::string AppsFlyerEvent::FORGOT_LOGIN = "flSB8L";

    // 0x103c05158, 32 bytes, __bss; set at startup by ___cxx_global_var_init.119
    eastl::string AppsFlyerEvent::ACCOUNT_RECOVERY_INITIATED = "ariMOV";

    // 0x103c05178, 32 bytes, __bss; set at startup by ___cxx_global_var_init.121
    eastl::string AppsFlyerEvent::ACCOUNT_CREATION_INITIATED = "acipK9";

    // 0x103c05198, 32 bytes, __bss; set at startup by ___cxx_global_var_init.123
    eastl::string AppsFlyerEvent::CONTINUE_WITH_GAME_CENTER = "cgcPRM";

    // 0x103c051b8, 32 bytes, __bss; set at startup by ___cxx_global_var_init.125
    eastl::string AppsFlyerEvent::CONTINUE_WITH_RS_ACCOUNT = "crsG39";

    // 0x103c051d8, 32 bytes, __bss; set at startup by ___cxx_global_var_init.127
    eastl::string AppsFlyerEvent::GAME_CENTER_ERROR_UNDERAGE = "gcu1M3";

    // 0x103c051f8, 32 bytes, __bss; set at startup by ___cxx_global_var_init.129
    eastl::string AppsFlyerEvent::GAME_CENTER_ERROR_UNAVAILABLE = "gcu2QC";

    // 0x103c05218, 32 bytes, __bss; set at startup by ___cxx_global_var_init.131
    eastl::string AppsFlyerEvent::NOTIFICATION_PRESSED = "npR101";

    // 0x103c05238, 32 bytes, __bss; set at startup by ___cxx_global_var_init.133
    eastl::string AppsFlyerEvent::JAGEX_WEB_AUTH_CANCELLED = "jwaTV9";

    // 0x103c05258, 32 bytes, __bss; set at startup by ___cxx_global_var_init.135
    eastl::string AppsFlyerEvent::JAGEX_WEB_AUTH_NOT_AUTHORISED = "jwaFA4";

    // 0x103c05278, 32 bytes, __bss; set at startup by ___cxx_global_var_init.137
    eastl::string AppsFlyerEvent::JAGEX_WEB_AUTH_FAILURE = "jwa2GG";

    // 0x1001578e0, 96 bytes, placed by the data it initialises
    // ___cxx_global_var_init.113
    void ___cxx_global_var_init_113() {
        allocator local_20[8];

        eastl::allocator::allocator(local_20, "EASTL basic_string");
        new (&AppsFlyerEvent::LOGIN_FAILED) eastl::string("lfPMvO", local_20);
        ___cxa_atexit(PTR__basic_string_100ee6c80, &AppsFlyerEvent::LOGIN_FAILED, 4294967296);
    }

    // 0x100157940, 96 bytes, placed by the data it initialises
    // ___cxx_global_var_init.115
    void ___cxx_global_var_init_115() {
        allocator local_20[8];

        eastl::allocator::allocator(local_20, "EASTL basic_string");
        new (&AppsFlyerEvent::FORGOT_PASSWORD) eastl::string("fpVPSZ", local_20);
        ___cxa_atexit(PTR__basic_string_100ee6c80, &AppsFlyerEvent::FORGOT_PASSWORD, 4294967296);
    }

    // 0x1001579a0, 96 bytes, placed by the data it initialises
    // ___cxx_global_var_init.117
    void ___cxx_global_var_init_117() {
        allocator local_20[8];

        eastl::allocator::allocator(local_20, "EASTL basic_string");
        new (&AppsFlyerEvent::FORGOT_LOGIN) eastl::string("flSB8L", local_20);
        ___cxa_atexit(PTR__basic_string_100ee6c80, &AppsFlyerEvent::FORGOT_LOGIN, 4294967296);
    }

    // 0x100157a00, 96 bytes, placed by the data it initialises
    // ___cxx_global_var_init.119
    void ___cxx_global_var_init_119() {
        allocator local_20[8];

        eastl::allocator::allocator(local_20, "EASTL basic_string");
        new (&AppsFlyerEvent::ACCOUNT_RECOVERY_INITIATED) eastl::string("ariMOV", local_20);
        ___cxa_atexit(PTR__basic_string_100ee6c80, &AppsFlyerEvent::ACCOUNT_RECOVERY_INITIATED, 4294967296);
    }

    // 0x100157a60, 96 bytes, placed by the data it initialises
    // ___cxx_global_var_init.121
    void ___cxx_global_var_init_121() {
        allocator local_20[8];

        eastl::allocator::allocator(local_20, "EASTL basic_string");
        new (&AppsFlyerEvent::ACCOUNT_CREATION_INITIATED) eastl::string("acipK9", local_20);
        ___cxa_atexit(PTR__basic_string_100ee6c80, &AppsFlyerEvent::ACCOUNT_CREATION_INITIATED, 4294967296);
    }

    // 0x100157ac0, 96 bytes, placed by the data it initialises
    // ___cxx_global_var_init.123
    void ___cxx_global_var_init_123() {
        allocator local_20[8];

        eastl::allocator::allocator(local_20, "EASTL basic_string");
        new (&AppsFlyerEvent::CONTINUE_WITH_GAME_CENTER) eastl::string("cgcPRM", local_20);
        ___cxa_atexit(PTR__basic_string_100ee6c80, &AppsFlyerEvent::CONTINUE_WITH_GAME_CENTER, 4294967296);
    }

    // 0x100157b20, 96 bytes, placed by the data it initialises
    // ___cxx_global_var_init.125
    void ___cxx_global_var_init_125() {
        allocator local_20[8];

        eastl::allocator::allocator(local_20, "EASTL basic_string");
        new (&AppsFlyerEvent::CONTINUE_WITH_RS_ACCOUNT) eastl::string("crsG39", local_20);
        ___cxa_atexit(PTR__basic_string_100ee6c80, &AppsFlyerEvent::CONTINUE_WITH_RS_ACCOUNT, 4294967296);
    }

    // 0x100157b80, 96 bytes, placed by the data it initialises
    // ___cxx_global_var_init.127
    void ___cxx_global_var_init_127() {
        allocator local_20[8];

        eastl::allocator::allocator(local_20, "EASTL basic_string");
        new (&AppsFlyerEvent::GAME_CENTER_ERROR_UNDERAGE) eastl::string("gcu1M3", local_20);
        ___cxa_atexit(PTR__basic_string_100ee6c80, &AppsFlyerEvent::GAME_CENTER_ERROR_UNDERAGE, 4294967296);
    }

    // 0x100157be0, 96 bytes, placed by the data it initialises
    // ___cxx_global_var_init.129
    void ___cxx_global_var_init_129() {
        allocator local_20[8];

        eastl::allocator::allocator(local_20, "EASTL basic_string");
        new (&AppsFlyerEvent::GAME_CENTER_ERROR_UNAVAILABLE) eastl::string("gcu2QC", local_20);
        ___cxa_atexit(PTR__basic_string_100ee6c80, &AppsFlyerEvent::GAME_CENTER_ERROR_UNAVAILABLE, 4294967296);
    }

    // 0x100157c40, 96 bytes, placed by the data it initialises
    // ___cxx_global_var_init.131
    void ___cxx_global_var_init_131() {
        allocator local_20[8];

        eastl::allocator::allocator(local_20, "EASTL basic_string");
        new (&AppsFlyerEvent::NOTIFICATION_PRESSED) eastl::string("npR101", local_20);
        ___cxa_atexit(PTR__basic_string_100ee6c80, &AppsFlyerEvent::NOTIFICATION_PRESSED, 4294967296);
    }

    // 0x100157ca0, 96 bytes, placed by the data it initialises
    // ___cxx_global_var_init.133
    void ___cxx_global_var_init_133() {
        allocator local_20[8];

        eastl::allocator::allocator(local_20, "EASTL basic_string");
        new (&AppsFlyerEvent::JAGEX_WEB_AUTH_CANCELLED) eastl::string("jwaTV9", local_20);
        ___cxa_atexit(PTR__basic_string_100ee6c80, &AppsFlyerEvent::JAGEX_WEB_AUTH_CANCELLED, 4294967296);
    }

    // 0x100157d00, 96 bytes, placed by the data it initialises
    // ___cxx_global_var_init.135
    void ___cxx_global_var_init_135() {
        allocator local_20[8];

        eastl::allocator::allocator(local_20, "EASTL basic_string");
        new (&AppsFlyerEvent::JAGEX_WEB_AUTH_NOT_AUTHORISED) eastl::string("jwaFA4", local_20);
        ___cxa_atexit(PTR__basic_string_100ee6c80, &AppsFlyerEvent::JAGEX_WEB_AUTH_NOT_AUTHORISED, 4294967296);
    }

    // 0x100157d60, 96 bytes, placed by the data it initialises
    // ___cxx_global_var_init.137
    void ___cxx_global_var_init_137() {
        allocator local_20[8];

        eastl::allocator::allocator(local_20, "EASTL basic_string");
        new (&AppsFlyerEvent::JAGEX_WEB_AUTH_FAILURE) eastl::string("jwa2GG", local_20);
        ___cxa_atexit(PTR__basic_string_100ee6c80, &AppsFlyerEvent::JAGEX_WEB_AUTH_FAILURE, 4294967296);
    }

    // 0x100157f00, 64 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.454
    void ___cxx_global_var_init_454() {
        new (&GameWorld::m_list) Array<std::unique_ptr<GameWorld, std::default_delete<GameWorld>>, eastl::allocator>();
        ___cxa_atexit(PTR__Array_100ee67d0, &GameWorld::m_list, 4294967296);
    }

    // 0x100157f40, 32 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.455
    void ___cxx_global_var_init_455() {
        ___cxa_atexit(std::unique_ptr<http::HTTPRequest, std::default_delete<http::HTTPRequest>>::~unique_ptr,
                      &GameWorld::m_gameworldListDownloadRequest, 4294967296);
    }

    // 0x100157f60, 32 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.493
    void ___cxx_global_var_init_493() {
        ___cxa_atexit(std::unique_ptr<TitleFlames, std::default_delete<TitleFlames>>::~unique_ptr,
                      &TitleScreen::m_titleFlames, 4294967296);
    }

    // 0x100158300, 32 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.506
    void ___cxx_global_var_init_506() {
        ___cxa_atexit(std::unique_ptr<LoadingScreenScript, std::default_delete<LoadingScreenScript>>::~unique_ptr,
                      &TitleScreen::m_loading, 4294967296);
    }

    // 0x100158320, 32 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.508
    void ___cxx_global_var_init_508() {
        ___cxa_atexit(std::unique_ptr<graphics::Pix8, std::default_delete<graphics::Pix8>>::~unique_ptr,
                      &TitleScreen::m_titleBox, 4294967296);
    }

    // 0x100158340, 32 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.510
    void ___cxx_global_var_init_510() {
        ___cxa_atexit(std::unique_ptr<graphics::Pix8, std::default_delete<graphics::Pix8>>::~unique_ptr,
                      &TitleScreen::m_titleBut, 4294967296);
    }

    // 0x100158360, 32 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.512
    void ___cxx_global_var_init_512() {
        ___cxa_atexit(std::unique_ptr<graphics::Pix8, std::default_delete<graphics::Pix8>>::~unique_ptr,
                      &TitleScreen::m_titleButLarge, 4294967296);
    }

    // 0x100158380, 32 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.514
    void ___cxx_global_var_init_514() {
        ___cxa_atexit(std::unique_ptr<graphics::Pix8, std::default_delete<graphics::Pix8>>::~unique_ptr,
                      &TitleScreen::m_textPlayNow, 4294967296);
    }

    // 0x1001583a0, 32 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.516
    void ___cxx_global_var_init_516() {
        ___cxa_atexit(std::unique_ptr<graphics::Pix8, std::default_delete<graphics::Pix8>>::~unique_ptr,
                      &TitleScreen::m_titleButWide, 4294967296);
    }

    // 0x100158480, 32 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.521
    void ___cxx_global_var_init_521() {
        ___cxa_atexit(std::unique_ptr<graphics::Pix8, std::default_delete<graphics::Pix8>>::~unique_ptr,
                      &TitleScreen::m_logo, 4294967296);
    }

    // 0x100158520, 32 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.525
    void ___cxx_global_var_init_525() {
        ___cxa_atexit(std::unique_ptr<graphics::Pix8, std::default_delete<graphics::Pix8>>::~unique_ptr,
                      &TitleScreen::m_optionsRadioButtonNone, 4294967296);
    }

    // 0x100158540, 32 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.527
    void ___cxx_global_var_init_527() {
        ___cxa_atexit(std::unique_ptr<graphics::Pix8, std::default_delete<graphics::Pix8>>::~unique_ptr,
                      &TitleScreen::m_optionsRadioButtonNoneHighlight, 4294967296);
    }

    // 0x100158560, 32 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.529
    void ___cxx_global_var_init_529() {
        ___cxa_atexit(std::unique_ptr<graphics::Pix8, std::default_delete<graphics::Pix8>>::~unique_ptr,
                      &TitleScreen::m_optionsRadioButtonYes, 4294967296);
    }

    // 0x100158580, 32 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.531
    void ___cxx_global_var_init_531() {
        ___cxa_atexit(std::unique_ptr<graphics::Pix8, std::default_delete<graphics::Pix8>>::~unique_ptr,
                      &TitleScreen::m_optionsRadioButtonYesHighlight, 4294967296);
    }

    // 0x1001589c0, 32 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.551
    void ___cxx_global_var_init_551() {
        ___cxa_atexit(std::unique_ptr<graphics::Pix8, std::default_delete<graphics::Pix8>>::~unique_ptr,
                      &TitleScreen::m_slButton, 4294967296);
    }

    // 0x1001589e0, 32 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.553
    void ___cxx_global_var_init_553() {
        ___cxa_atexit(std::unique_ptr<graphics::Pix8, std::default_delete<graphics::Pix8>>::~unique_ptr,
                      &TitleScreen::m_slLeftArrow, 4294967296);
    }

    // 0x100158a00, 32 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.555
    void ___cxx_global_var_init_555() {
        ___cxa_atexit(std::unique_ptr<graphics::Pix8, std::default_delete<graphics::Pix8>>::~unique_ptr,
                      &TitleScreen::m_slRightArrow, 4294967296);
    }

    // 0x100158ac0, 64 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.566
    void ___cxx_global_var_init_566() {
        undefined* puVar1;

        puVar1 = PTR_LOOK_100ee47d8;
        if (*PTR_LOOK_100ee47d8 == '\0') {
            new (PTR_LOOK_100ee66e0) jag::math::ColourHSL(0.0, 0.0, 1.0);
            *puVar1 = 1;
        }
    }

    // 0x100158b00, 64 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.567
    void ___cxx_global_var_init_567() {
        undefined* puVar1;

        puVar1 = PTR_UP_100ee47c8;
        if (*PTR_UP_100ee47c8 == '\0') {
            new (PTR_UP_100ee66d0) jag::math::ColourHSL(0.0, 1.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x100158b40, 64 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.568
    void ___cxx_global_var_init_568() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee4298;
        if (*PTR_m_pSingleton_100ee4298 == '\0') {
            ___cxa_atexit(std::unique_ptr<ThreadPoolSingleton, std::default_delete<ThreadPoolSingleton>>::~unique_ptr,
                          PTR_m_pSingleton_100ee5948, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100158b80, 64 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.569
    void ___cxx_global_var_init_569() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee42a0;
        if (*PTR_m_pSingleton_100ee42a0 == '\0') {
            ___cxa_atexit(
                std::unique_ptr<ShaderThreadPoolSingleton, std::default_delete<ShaderThreadPoolSingleton>>::~unique_ptr,
                PTR_m_pSingleton_100ee5950, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100158bc0, 48 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.570
    void ___cxx_global_var_init_570() {
        undefined* puVar1;

        puVar1 = PTR_ZERO_100ee4790;
        if (*PTR_ZERO_100ee4790 == '\0') {
            new (PTR_ZERO_100ee6698) jag::math::Point<float>(0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x100158bf0, 64 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.571
    void ___cxx_global_var_init_571() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee4518;
        if (*PTR_m_mutex_100ee4518 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5df0, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100158c30, 64 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.572
    void ___cxx_global_var_init_572() {
        undefined* puVar1;

        puVar1 = PTR_ZERO_100ee4800;
        if (*PTR_ZERO_100ee4800 == '\0') {
            new (PTR_ZERO_100ee6708) ImVec4(0.0, 0.0, 0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x100158c70, 64 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.573
    void ___cxx_global_var_init_573() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee49c8;
        if (*PTR_m_pSingleton_100ee49c8 == '\0') {
            ___cxa_atexit(std::unique_ptr<render::ShaderProgramManager,
                                          std::default_delete<render::ShaderProgramManager>>::~unique_ptr,
                          PTR_m_pSingleton_100ee6c38, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100158cb0, 64 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.574
    void ___cxx_global_var_init_574() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee49d0;
        if (*PTR_m_pSingleton_100ee49d0 == '\0') {
            ___cxa_atexit(std::unique_ptr<render::VertexDeclarationManager,
                                          std::default_delete<render::VertexDeclarationManager>>::~unique_ptr,
                          PTR_m_pSingleton_100ee6c40, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100158cf0, 64 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.575
    void ___cxx_global_var_init_575() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee49a0;
        if (*PTR_m_pSingleton_100ee49a0 == '\0') {
            ___cxa_atexit(std::unique_ptr<render::RenderDevice, std::default_delete<render::RenderDevice>>::~unique_ptr,
                          PTR_m_pSingleton_100ee6c10, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100158d30, 64 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.576
    void ___cxx_global_var_init_576() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee45b0;
        if (*PTR_m_mutex_100ee45b0 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5f20, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100158d70, 64 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.577
    void ___cxx_global_var_init_577() {
        undefined* puVar1;

        puVar1 = PTR_ZERO_100ee47e0;
        if (*PTR_ZERO_100ee47e0 == '\0') {
            new (PTR_ZERO_100ee66e8) jag::math::ColourHSL(0.0, 0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x100158db0, 64 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.578
    void ___cxx_global_var_init_578() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee49d8;
        if (*PTR_m_pSingleton_100ee49d8 == '\0') {
            ___cxa_atexit(std::unique_ptr<jag::graphics::AnimationManager,
                                          std::default_delete<jag::graphics::AnimationManager>>::~unique_ptr,
                          PTR_m_pSingleton_100ee6c48, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100158df0, 96 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.579
    void ___cxx_global_var_init_579() {
        undefined* puVar1;

        puVar1 = PTR_ZERO_100ee4820;
        if (*PTR_ZERO_100ee4820 == '\0') {
            new (PTR_ZERO_100ee6728) jag::math::Matrix44T<float>(0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
                                                                 0.0, 0.0, 0.0, 0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x100158e50, 64 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.580
    void ___cxx_global_var_init_580() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee45d8;
        if (*PTR_m_mutex_100ee45d8 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5f70, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100158e90, 64 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.581
    void ___cxx_global_var_init_581() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee49f0;
        if (*PTR_m_pSingleton_100ee49f0 == '\0') {
            ___cxa_atexit(
                std::unique_ptr<hardware::HardwareInfo, std::default_delete<hardware::HardwareInfo>>::~unique_ptr,
                PTR_m_pSingleton_100ee6c60, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100158ed0, 96 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.582
    void ___cxx_global_var_init_582() {
        undefined* puVar1;

        puVar1 = PTR_IDENTITY_100ee4828;
        if (*PTR_IDENTITY_100ee4828 == '\0') {
            new (PTR_IDENTITY_100ee6730) jag::math::Matrix44T<float>(1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0,
                                                                     1.0, 0.0, 0.0, 0.0, 0.0, 1.0);
            *puVar1 = 1;
        }
    }

    // 0x100158f30, 64 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.583
    void ___cxx_global_var_init_583() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee4590;
        if (*PTR_m_mutex_100ee4590 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5ee0, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100158f70, 64 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.584
    void ___cxx_global_var_init_584() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee4290;
        if (*PTR_m_pSingleton_100ee4290 == '\0') {
            ___cxa_atexit(std::unique_ptr<graphicutils::BatchDestroyManager,
                                          std::default_delete<graphicutils::BatchDestroyManager>>::~unique_ptr,
                          PTR_m_pSingleton_100ee5940, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100158fb0, 64 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.585
    void ___cxx_global_var_init_585() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee4520;
        if (*PTR_m_mutex_100ee4520 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5e00, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100158ff0, 64 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.586
    void ___cxx_global_var_init_586() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee4500;
        if (*PTR_m_mutex_100ee4500 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5dc0, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100159030, 64 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.587
    void ___cxx_global_var_init_587() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee44e8;
        if (*PTR_m_mutex_100ee44e8 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5d90, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100159070, 64 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.588
    void ___cxx_global_var_init_588() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee4378;
        if (*PTR_m_mutex_100ee4378 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5ab8, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1001590b0, 64 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.589
    void ___cxx_global_var_init_589() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee42a8;
        if (*PTR_m_pSingleton_100ee42a8 == '\0') {
            ___cxa_atexit(std::unique_ptr<hal::Haptics, std::default_delete<hal::Haptics>>::~unique_ptr,
                          PTR_m_pSingleton_100ee5958, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100159130, 64 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.591
    void ___cxx_global_var_init_591() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee42b0;
        if (*PTR_m_pSingleton_100ee42b0 == '\0') {
            ___cxa_atexit(std::unique_ptr<jag::debug::DebugUIManager,
                                          std::default_delete<jag::debug::DebugUIManager>>::~unique_ptr,
                          PTR_m_pSingleton_100ee5960, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1001591b0, 64 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.593
    void ___cxx_global_var_init_593() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee4960;
        if (*PTR_m_pSingleton_100ee4960 == '\0') {
            ___cxa_atexit(std::unique_ptr<SecureRandom, std::default_delete<SecureRandom>>::~unique_ptr,
                          PTR_m_pSingleton_100ee6bd0, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1001591f0, 414 bytes, placed by debug map only (low confidence)
    // __GLOBAL__sub_I_unity_2_cxx.cxx
    void __GLOBAL__sub_I_unity_2_cxx_cxx() {
        undefined8 uVar1;

        uVar1 = _objc_autoreleasePoolPush();
        ___cxx_global_var_init();
        ___cxx_global_var_init_1();
        ___cxx_global_var_init_8();
        ___cxx_global_var_init_9();
        ___cxx_global_var_init_10();
        ___cxx_global_var_init_112();
        ___cxx_global_var_init_113();
        ___cxx_global_var_init_115();
        ___cxx_global_var_init_117();
        ___cxx_global_var_init_119();
        ___cxx_global_var_init_121();
        ___cxx_global_var_init_123();
        ___cxx_global_var_init_125();
        ___cxx_global_var_init_127();
        ___cxx_global_var_init_129();
        ___cxx_global_var_init_131();
        ___cxx_global_var_init_133();
        ___cxx_global_var_init_135();
        ___cxx_global_var_init_137();
        ___cxx_global_var_init_139();
        ___cxx_global_var_init_297();
        ___cxx_global_var_init_299();
        ___cxx_global_var_init_301();
        ___cxx_global_var_init_454();
        ___cxx_global_var_init_455();
        ___cxx_global_var_init_493();
        ___cxx_global_var_init_494();
        ___cxx_global_var_init_495();
        ___cxx_global_var_init_496();
        ___cxx_global_var_init_497();
        ___cxx_global_var_init_498();
        ___cxx_global_var_init_499();
        ___cxx_global_var_init_500();
        ___cxx_global_var_init_501();
        ___cxx_global_var_init_502();
        ___cxx_global_var_init_503();
        ___cxx_global_var_init_504();
        ___cxx_global_var_init_506();
        ___cxx_global_var_init_508();
        ___cxx_global_var_init_510();
        ___cxx_global_var_init_512();
        ___cxx_global_var_init_514();
        ___cxx_global_var_init_516();
        ___cxx_global_var_init_517();
        ___cxx_global_var_init_518();
        ___cxx_global_var_init_519();
        ___cxx_global_var_init_521();
        ___cxx_global_var_init_522();
        ___cxx_global_var_init_523();
        ___cxx_global_var_init_525();
        ___cxx_global_var_init_527();
        ___cxx_global_var_init_529();
        ___cxx_global_var_init_531();
        ___cxx_global_var_init_532();
        ___cxx_global_var_init_533();
        ___cxx_global_var_init_534();
        ___cxx_global_var_init_535();
        ___cxx_global_var_init_536();
        ___cxx_global_var_init_537();
        ___cxx_global_var_init_538();
        ___cxx_global_var_init_539();
        ___cxx_global_var_init_540();
        ___cxx_global_var_init_541();
        ___cxx_global_var_init_542();
        ___cxx_global_var_init_544();
        ___cxx_global_var_init_546();
        ___cxx_global_var_init_547();
        ___cxx_global_var_init_548();
        ___cxx_global_var_init_549();
        ___cxx_global_var_init_551();
        ___cxx_global_var_init_553();
        ___cxx_global_var_init_555();
        ___cxx_global_var_init_556();
        ___cxx_global_var_init_557();
        ___cxx_global_var_init_558();
        ___cxx_global_var_init_559();
        ___cxx_global_var_init_560();
        _objc_autoreleasePoolPop(uVar1);
    }

} // namespace jag::oldscape::auth
