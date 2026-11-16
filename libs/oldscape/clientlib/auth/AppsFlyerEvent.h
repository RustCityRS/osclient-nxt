// libs/oldscape/clientlib/auth/AppsFlyerEvent.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: osclient

namespace jag::oldscape::auth {
    // 0x103c050f8, set at startup by ___cxx_global_var_init.113
    eastl::string AppsFlyerEvent::LOGIN_FAILED = "lfPMvO";

    // 0x103c05118, set at startup by ___cxx_global_var_init.115
    eastl::string AppsFlyerEvent::FORGOT_PASSWORD = "fpVPSZ";

    // 0x103c05138, set at startup by ___cxx_global_var_init.117
    eastl::string AppsFlyerEvent::FORGOT_LOGIN = "flSB8L";

    // 0x103c05158, set at startup by ___cxx_global_var_init.119
    eastl::string AppsFlyerEvent::ACCOUNT_RECOVERY_INITIATED = "ariMOV";

    // 0x103c05178, set at startup by ___cxx_global_var_init.121
    eastl::string AppsFlyerEvent::ACCOUNT_CREATION_INITIATED = "acipK9";

    // 0x103c05198, set at startup by ___cxx_global_var_init.123
    eastl::string AppsFlyerEvent::CONTINUE_WITH_GAME_CENTER = "cgcPRM";

    // 0x103c051b8, set at startup by ___cxx_global_var_init.125
    eastl::string AppsFlyerEvent::CONTINUE_WITH_RS_ACCOUNT = "crsG39";

    // 0x103c051d8, set at startup by ___cxx_global_var_init.127
    eastl::string AppsFlyerEvent::GAME_CENTER_ERROR_UNDERAGE = "gcu1M3";

    // 0x103c051f8, set at startup by ___cxx_global_var_init.129
    eastl::string AppsFlyerEvent::GAME_CENTER_ERROR_UNAVAILABLE = "gcu2QC";

    // 0x103c05218, set at startup by ___cxx_global_var_init.131
    eastl::string AppsFlyerEvent::NOTIFICATION_PRESSED = "npR101";

    // 0x103c05238, set at startup by ___cxx_global_var_init.133
    eastl::string AppsFlyerEvent::JAGEX_WEB_AUTH_CANCELLED = "jwaTV9";

    // 0x103c05258, set at startup by ___cxx_global_var_init.135
    eastl::string AppsFlyerEvent::JAGEX_WEB_AUTH_NOT_AUTHORISED = "jwaFA4";

    // 0x103c05278, set at startup by ___cxx_global_var_init.137
    eastl::string AppsFlyerEvent::JAGEX_WEB_AUTH_FAILURE = "jwa2GG";

    // 0x100157f00
    void ___cxx_global_var_init_454(void) {
        new ((Array<std::unique_ptr<GameWorld>>*)&GameWorld::m_list) Array<std::unique_ptr<GameWorld>>();
        ___cxa_atexit(PTR__Array_100ee67d0, &GameWorld::m_list, 4294967296);
    }

    // 0x100157f40
    void ___cxx_global_var_init_455(void) {
        ___cxa_atexit(std::unique_ptr<http::HTTPRequest>::~unique_ptr, &GameWorld::m_gameworldListDownloadRequest,
                      4294967296);
    }

    // 0x100157f60
    void ___cxx_global_var_init_493(void) {
        ___cxa_atexit(std::unique_ptr<TitleFlames>::~unique_ptr, &TitleScreen::m_titleFlames, 4294967296);
    }

    // 0x100158300
    void ___cxx_global_var_init_506(void) {
        ___cxa_atexit(std::unique_ptr<LoadingScreenScript>::~unique_ptr, &TitleScreen::m_loading, 4294967296);
    }

    // 0x100158320
    void ___cxx_global_var_init_508(void) {
        ___cxa_atexit(std::unique_ptr<graphics::Pix8>::~unique_ptr, &TitleScreen::m_titleBox, 4294967296);
    }

    // 0x100158340
    void ___cxx_global_var_init_510(void) {
        ___cxa_atexit(std::unique_ptr<graphics::Pix8>::~unique_ptr, &TitleScreen::m_titleBut, 4294967296);
    }

    // 0x100158360
    void ___cxx_global_var_init_512(void) {
        ___cxa_atexit(std::unique_ptr<graphics::Pix8>::~unique_ptr, &TitleScreen::m_titleButLarge, 4294967296);
    }

    // 0x100158380
    void ___cxx_global_var_init_514(void) {
        ___cxa_atexit(std::unique_ptr<graphics::Pix8>::~unique_ptr, &TitleScreen::m_textPlayNow, 4294967296);
    }

    // 0x1001583a0
    void ___cxx_global_var_init_516(void) {
        ___cxa_atexit(std::unique_ptr<graphics::Pix8>::~unique_ptr, &TitleScreen::m_titleButWide, 4294967296);
    }

    // 0x100158480
    void ___cxx_global_var_init_521(void) {
        ___cxa_atexit(std::unique_ptr<graphics::Pix8>::~unique_ptr, &TitleScreen::m_logo, 4294967296);
    }

    // 0x100158520
    void ___cxx_global_var_init_525(void) {
        ___cxa_atexit(std::unique_ptr<graphics::Pix8>::~unique_ptr, &TitleScreen::m_optionsRadioButtonNone, 4294967296);
    }

    // 0x100158540
    void ___cxx_global_var_init_527(void) {
        ___cxa_atexit(std::unique_ptr<graphics::Pix8>::~unique_ptr, &TitleScreen::m_optionsRadioButtonNoneHighlight,
                      4294967296);
    }

    // 0x100158560
    void ___cxx_global_var_init_529(void) {
        ___cxa_atexit(std::unique_ptr<graphics::Pix8>::~unique_ptr, &TitleScreen::m_optionsRadioButtonYes, 4294967296);
    }

    // 0x100158580
    void ___cxx_global_var_init_531(void) {
        ___cxa_atexit(std::unique_ptr<graphics::Pix8>::~unique_ptr, &TitleScreen::m_optionsRadioButtonYesHighlight,
                      4294967296);
    }

    // 0x1001589c0
    void ___cxx_global_var_init_551(void) {
        ___cxa_atexit(std::unique_ptr<graphics::Pix8>::~unique_ptr, &TitleScreen::m_slButton, 4294967296);
    }

    // 0x1001589e0
    void ___cxx_global_var_init_553(void) {
        ___cxa_atexit(std::unique_ptr<graphics::Pix8>::~unique_ptr, &TitleScreen::m_slLeftArrow, 4294967296);
    }

    // 0x100158a00
    void ___cxx_global_var_init_555(void) {
        ___cxa_atexit(std::unique_ptr<graphics::Pix8>::~unique_ptr, &TitleScreen::m_slRightArrow, 4294967296);
    }

    // 0x100158ac0
    void ___cxx_global_var_init_566(void) {
        uint8_t* puVar1 = PTR_LOOK_100ee47d8;
        if (*PTR_LOOK_100ee47d8 == '\0') {
            new (PTR_LOOK_100ee66e0) jag::math::ColourHSL(0.0, 0.0, 1.0);
            *puVar1 = 1;
        }
    }

    // 0x100158b00
    void ___cxx_global_var_init_567(void) {
        uint8_t* puVar1 = PTR_UP_100ee47c8;
        if (*PTR_UP_100ee47c8 == '\0') {
            new (PTR_UP_100ee66d0) jag::math::ColourHSL(0.0, 1.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x100158b40
    void ___cxx_global_var_init_568(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee4298;
        if (*PTR_m_pSingleton_100ee4298 == '\0') {
            ___cxa_atexit(std::unique_ptr<ThreadPoolSingleton>::~unique_ptr, PTR_m_pSingleton_100ee5948, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100158b80
    void ___cxx_global_var_init_569(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee42a0;
        if (*PTR_m_pSingleton_100ee42a0 == '\0') {
            ___cxa_atexit(std::unique_ptr<ShaderThreadPoolSingleton>::~unique_ptr, PTR_m_pSingleton_100ee5950,
                          4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100158bc0
    void ___cxx_global_var_init_570(void) {
        uint8_t* puVar1 = PTR_ZERO_100ee4790;
        if (*PTR_ZERO_100ee4790 == '\0') {
            new (PTR_ZERO_100ee6698) jag::math::Point(0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x100158bf0
    void ___cxx_global_var_init_571(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee4518;
        if (*PTR_m_mutex_100ee4518 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5df0, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100158c30
    void ___cxx_global_var_init_572(void) {
        uint8_t* puVar1 = PTR_ZERO_100ee4800;
        if (*PTR_ZERO_100ee4800 == '\0') {
            new (PTR_ZERO_100ee6708) ImVec4(0.0, 0.0, 0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x100158c70
    void ___cxx_global_var_init_573(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee49c8;
        if (*PTR_m_pSingleton_100ee49c8 == '\0') {
            ___cxa_atexit(std::unique_ptr<render::ShaderProgramManager>::~unique_ptr, PTR_m_pSingleton_100ee6c38,
                          4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100158cb0
    void ___cxx_global_var_init_574(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee49d0;
        if (*PTR_m_pSingleton_100ee49d0 == '\0') {
            ___cxa_atexit(std::unique_ptr<render::VertexDeclarationManager>::~unique_ptr, PTR_m_pSingleton_100ee6c40,
                          4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100158cf0
    void ___cxx_global_var_init_575(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee49a0;
        if (*PTR_m_pSingleton_100ee49a0 == '\0') {
            ___cxa_atexit(std::unique_ptr<render::RenderDevice>::~unique_ptr, PTR_m_pSingleton_100ee6c10, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100158d30
    void ___cxx_global_var_init_576(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee45b0;
        if (*PTR_m_mutex_100ee45b0 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5f20, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100158d70
    void ___cxx_global_var_init_577(void) {
        uint8_t* puVar1 = PTR_ZERO_100ee47e0;
        if (*PTR_ZERO_100ee47e0 == '\0') {
            new (PTR_ZERO_100ee66e8) jag::math::ColourHSL(0.0, 0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x100158db0
    void ___cxx_global_var_init_578(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee49d8;
        if (*PTR_m_pSingleton_100ee49d8 == '\0') {
            ___cxa_atexit(std::unique_ptr<jag::graphics::AnimationManager>::~unique_ptr, PTR_m_pSingleton_100ee6c48,
                          4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100158df0
    void ___cxx_global_var_init_579(void) {
        uint8_t* puVar1 = PTR_ZERO_100ee4820;
        if (*PTR_ZERO_100ee4820 == '\0') {
            new (PTR_ZERO_100ee6728) jag::math::Matrix44T<float>(0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
                                                                 0.0, 0.0, 0.0, 0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x100158e50
    void ___cxx_global_var_init_580(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee45d8;
        if (*PTR_m_mutex_100ee45d8 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5f70, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100158e90
    void ___cxx_global_var_init_581(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee49f0;
        if (*PTR_m_pSingleton_100ee49f0 == '\0') {
            ___cxa_atexit(std::unique_ptr<hardware::HardwareInfo>::~unique_ptr, PTR_m_pSingleton_100ee6c60, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100158ed0
    void ___cxx_global_var_init_582(void) {
        uint8_t* puVar1 = PTR_IDENTITY_100ee4828;
        if (*PTR_IDENTITY_100ee4828 == '\0') {
            new (PTR_IDENTITY_100ee6730) jag::math::Matrix44T<float>(1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0,
                                                                     1.0, 0.0, 0.0, 0.0, 0.0, 1.0);
            *puVar1 = 1;
        }
    }

    // 0x100158f30
    void ___cxx_global_var_init_583(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee4590;
        if (*PTR_m_mutex_100ee4590 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5ee0, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100158f70
    void ___cxx_global_var_init_584(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee4290;
        if (*PTR_m_pSingleton_100ee4290 == '\0') {
            ___cxa_atexit(std::unique_ptr<graphicutils::BatchDestroyManager>::~unique_ptr, PTR_m_pSingleton_100ee5940,
                          4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100158fb0
    void ___cxx_global_var_init_585(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee4520;
        if (*PTR_m_mutex_100ee4520 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5e00, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100158ff0
    void ___cxx_global_var_init_586(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee4500;
        if (*PTR_m_mutex_100ee4500 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5dc0, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100159030
    void ___cxx_global_var_init_587(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee44e8;
        if (*PTR_m_mutex_100ee44e8 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5d90, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100159070
    void ___cxx_global_var_init_588(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee4378;
        if (*PTR_m_mutex_100ee4378 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5ab8, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1001590b0
    void ___cxx_global_var_init_589(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee42a8;
        if (*PTR_m_pSingleton_100ee42a8 == '\0') {
            ___cxa_atexit(std::unique_ptr<hal::Haptics>::~unique_ptr, PTR_m_pSingleton_100ee5958, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100159130
    void ___cxx_global_var_init_591(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee42b0;
        if (*PTR_m_pSingleton_100ee42b0 == '\0') {
            ___cxa_atexit(std::unique_ptr<jag::debug::DebugUIManager>::~unique_ptr, PTR_m_pSingleton_100ee5960,
                          4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1001591b0
    void ___cxx_global_var_init_593(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee4960;
        if (*PTR_m_pSingleton_100ee4960 == '\0') {
            ___cxa_atexit(std::unique_ptr<SecureRandom>::~unique_ptr, PTR_m_pSingleton_100ee6bd0, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1001591f0
    void __GLOBAL__sub_I_unity_2_cxx_cxx(void) {
        uint64_t uVar1 = _objc_autoreleasePoolPush();
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
