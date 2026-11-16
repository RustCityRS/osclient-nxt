// projects/osclient/hiscores/HiscoresInstance.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: osclient

namespace jag::oldscape {
    // 0x103c04d78, set at startup by ___cxx_global_var_init.10
    eastl::string typeToInstance[10] = {
        /* [1] */ "hiscore_oldschool_ironman",
        /* [2] */ "hiscore_oldschool_hardcore_ironman",
        /* [3] */ "hiscore_oldschool_deadman",
        /* [4] */ "hiscore_oldschool_seasonal",
        /* [5] */ "hiscore_oldschool_ultimate",
        /* [6] */ "hiscore_oldschool_tournament",
        /* [7] */ "oldschool_gim_hiscores",
        /* [8] */ "oldschool_hardcore_gim_hiscores",
        /* [9] */ "hiscore_oldschool_fresh_start",
    };

    // 0x103c04eb8, set at startup by ___cxx_global_var_init.39
    dash3d::GridRect DrawOptions::COMMAND_LINE_PADDING = GridRect(8, 4, 8, 4);

    // 0x103c04ec8, set at startup by ___cxx_global_var_init.40
    dash3d::GridRect DrawOptions::OUTPUT_PADDING = GridRect(8, 0, 8, 8);

    // 0x103c04fb8, set at startup by ___cxx_global_var_init.10
    eastl::string typeToInstance[10] = {
        /* [1] */ "hiscore_oldschool_ironman",
        /* [2] */ "hiscore_oldschool_hardcore_ironman",
        /* [3] */ "hiscore_oldschool_deadman",
        /* [4] */ "hiscore_oldschool_seasonal",
        /* [5] */ "hiscore_oldschool_ultimate",
        /* [6] */ "hiscore_oldschool_tournament",
        /* [7] */ "oldschool_gim_hiscores",
        /* [8] */ "oldschool_hardcore_gim_hiscores",
        /* [9] */ "hiscore_oldschool_fresh_start",
    };

    // 0x1000b33e0
    void ___cxx_global_var_init_72(void) {
        ___cxa_atexit(std::unique_ptr<debug::PerformanceCapture>::~unique_ptr, &debug::PerformanceCapture::m_instance,
                      4294967296);
    }

    // 0x1000b3400
    void ___cxx_global_var_init_343(void) {
        ___cxa_atexit(std::unique_ptr<minimenu::MinimenuEntry>::~unique_ptr, &minimenu::Minimenu::CANCEL_ENTRY,
                      4294967296);
    }

    // 0x1000b3420
    void ___cxx_global_var_init_344(void) {
        new ((fixed_vector<eastl::string, 5ul>*)&minimenu::Minimenu::m_testOps)
            eastl::fixed_vector<eastl::string, 5ul>(5);
        ___cxa_atexit(PTR__fixed_vector_100ee6cb0, &minimenu::Minimenu::m_testOps, 4294967296);
    }

    // 0x1000b3460
    void ___cxx_global_var_init_346(void) {
        ___cxa_atexit(std::unique_ptr<minimenu::MinimenuEntry>::~unique_ptr, &minimenu::Minimenu::m_stashedEntry,
                      4294967296);
    }

    // 0x1000b34e0
    void ___cxx_global_var_init_352(void) {
        uint8_t* puVar1 = PTR_LOOK_100ee47d8;
        if (*PTR_LOOK_100ee47d8 == '\0') {
            new (PTR_LOOK_100ee66e0) jag::math::ColourHSL(0.0, 0.0, 1.0);
            *puVar1 = 1;
        }
    }

    // 0x1000b3520
    void ___cxx_global_var_init_353(void) {
        uint8_t* puVar1 = PTR_UP_100ee47c8;
        if (*PTR_UP_100ee47c8 == '\0') {
            new (PTR_UP_100ee66d0) jag::math::ColourHSL(0.0, 1.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x1000b3560
    void ___cxx_global_var_init_354(void) {
        uint8_t* puVar1 = PTR_ZERO_100ee4790;
        if (*PTR_ZERO_100ee4790 == '\0') {
            new (PTR_ZERO_100ee6698) jag::math::Point(0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x1000b3590
    void ___cxx_global_var_init_355(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee49f0;
        if (*PTR_m_pSingleton_100ee49f0 == '\0') {
            ___cxa_atexit(std::unique_ptr<hardware::HardwareInfo>::~unique_ptr, PTR_m_pSingleton_100ee6c60, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1000b35d0
    void ___cxx_global_var_init_356(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee4298;
        if (*PTR_m_pSingleton_100ee4298 == '\0') {
            ___cxa_atexit(std::unique_ptr<ThreadPoolSingleton>::~unique_ptr, PTR_m_pSingleton_100ee5948, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1000b3610
    void ___cxx_global_var_init_357(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee42a0;
        if (*PTR_m_pSingleton_100ee42a0 == '\0') {
            ___cxa_atexit(std::unique_ptr<ShaderThreadPoolSingleton>::~unique_ptr, PTR_m_pSingleton_100ee5950,
                          4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1000b3650
    void ___cxx_global_var_init_358(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee4518;
        if (*PTR_m_mutex_100ee4518 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5df0, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1000b3690
    void ___cxx_global_var_init_359(void) {
        uint8_t* puVar1 = PTR_ZERO_100ee4800;
        if (*PTR_ZERO_100ee4800 == '\0') {
            new (PTR_ZERO_100ee6708) ImVec4(0.0, 0.0, 0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x1000b36d0
    void ___cxx_global_var_init_360(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee49c8;
        if (*PTR_m_pSingleton_100ee49c8 == '\0') {
            ___cxa_atexit(std::unique_ptr<render::ShaderProgramManager>::~unique_ptr, PTR_m_pSingleton_100ee6c38,
                          4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1000b3710
    void ___cxx_global_var_init_361(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee49d0;
        if (*PTR_m_pSingleton_100ee49d0 == '\0') {
            ___cxa_atexit(std::unique_ptr<render::VertexDeclarationManager>::~unique_ptr, PTR_m_pSingleton_100ee6c40,
                          4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1000b3750
    void ___cxx_global_var_init_362(void) {
        uint8_t* puVar1 = PTR_ZERO_100ee47e0;
        if (*PTR_ZERO_100ee47e0 == '\0') {
            new (PTR_ZERO_100ee66e8) jag::math::ColourHSL(0.0, 0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x1000b3790
    void ___cxx_global_var_init_363(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee49a0;
        if (*PTR_m_pSingleton_100ee49a0 == '\0') {
            ___cxa_atexit(std::unique_ptr<render::RenderDevice>::~unique_ptr, PTR_m_pSingleton_100ee6c10, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1000b37d0
    void ___cxx_global_var_init_364(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee45b0;
        if (*PTR_m_mutex_100ee45b0 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5f20, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1000b3810
    void ___cxx_global_var_init_365(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee49d8;
        if (*PTR_m_pSingleton_100ee49d8 == '\0') {
            ___cxa_atexit(std::unique_ptr<jag::graphics::AnimationManager>::~unique_ptr, PTR_m_pSingleton_100ee6c48,
                          4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1000b3850
    void ___cxx_global_var_init_366(void) {
        uint8_t* puVar1 = PTR_ZERO_100ee4820;
        if (*PTR_ZERO_100ee4820 == '\0') {
            new (PTR_ZERO_100ee6728) jag::math::Matrix44T<float>(0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
                                                                 0.0, 0.0, 0.0, 0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x1000b38b0
    void ___cxx_global_var_init_367(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee45d8;
        if (*PTR_m_mutex_100ee45d8 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5f70, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1000b38f0
    void ___cxx_global_var_init_368(void) {
        uint8_t* puVar1 = PTR_IDENTITY_100ee4828;
        if (*PTR_IDENTITY_100ee4828 == '\0') {
            new (PTR_IDENTITY_100ee6730) jag::math::Matrix44T<float>(1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0,
                                                                     1.0, 0.0, 0.0, 0.0, 0.0, 1.0);
            *puVar1 = 1;
        }
    }

    // 0x1000b3950
    void ___cxx_global_var_init_369(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee4590;
        if (*PTR_m_mutex_100ee4590 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5ee0, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1000b3990
    void ___cxx_global_var_init_370(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee4290;
        if (*PTR_m_pSingleton_100ee4290 == '\0') {
            ___cxa_atexit(std::unique_ptr<graphicutils::BatchDestroyManager>::~unique_ptr, PTR_m_pSingleton_100ee5940,
                          4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1000b39d0
    void ___cxx_global_var_init_371(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee4520;
        if (*PTR_m_mutex_100ee4520 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5e00, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1000b3a10
    void ___cxx_global_var_init_372(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee4500;
        if (*PTR_m_mutex_100ee4500 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5dc0, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1000b3a50
    void ___cxx_global_var_init_373(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee42a8;
        if (*PTR_m_pSingleton_100ee42a8 == '\0') {
            ___cxa_atexit(std::unique_ptr<hal::Haptics>::~unique_ptr, PTR_m_pSingleton_100ee5958, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1000b3ad0
    void ___cxx_global_var_init_375(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee42b0;
        if (*PTR_m_pSingleton_100ee42b0 == '\0') {
            ___cxa_atexit(std::unique_ptr<jag::debug::DebugUIManager>::~unique_ptr, PTR_m_pSingleton_100ee5960,
                          4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1000b3b10
    void __GLOBAL__sub_I_unity_3_cxx_cxx(void) {
        uint64_t uVar1 = _objc_autoreleasePoolPush();
        ___cxx_global_var_init();
        ___cxx_global_var_init_1();
        ___cxx_global_var_init_8();
        ___cxx_global_var_init_9();
        ___cxx_global_var_init_10();
        ___cxx_global_var_init_39();
        ___cxx_global_var_init_40();
        ___cxx_global_var_init_72();
        ___cxx_global_var_init_343();
        ___cxx_global_var_init_344();
        ___cxx_global_var_init_346();
        ___cxx_global_var_init_349();
        _objc_autoreleasePoolPop(uVar1);
    }

    // 0x100157080
    void ___cxx_global_var_init_82(void) {
        eastl::string local_38;

        if (*PTR_m_spriteNamesInBinary_100ee4950 == '\0') {
            if (___cxa_guard_acquire(PTR_m_spriteNamesInBinary_100ee4950) != 0) {
                local_38 = eastl::string("titlewide.png");
                new (PTR_m_spriteNamesInBinary_100ee6aa0) eastl::vector<eastl::string>(&local_38, DAT_00000001);
                ___cxa_atexit(PTR__vector_100ee6d48, PTR_m_spriteNamesInBinary_100ee6aa0, 4294967296);
                ___cxa_guard_release(PTR_m_spriteNamesInBinary_100ee4950);
            }
        }
    }

    // 0x100157180
    void ___cxx_global_var_init_85(void) {
        long lVar2;
        eastl::string local_2c8;
        eastl::string local_2a8;
        eastl::string local_288;
        eastl::string local_268;
        eastl::string local_248;
        eastl::string local_228;
        eastl::string local_208;
        eastl::string local_1e8;
        eastl::string local_1c8;
        eastl::string local_1a8;
        eastl::string local_188;
        eastl::string local_168;
        eastl::string local_148;
        eastl::string local_128;
        eastl::string local_108;
        eastl::string local_e8;
        eastl::string local_c8;
        eastl::string local_a8;
        eastl::string local_88;
        eastl::string local_68;
        eastl::string local_48;

        if (*PTR_m_spriteNames_100ee4948 == '\0') {
            if (___cxa_guard_acquire(PTR_m_spriteNames_100ee4948) != 0) {
                local_2c8 = eastl::string("logo_osrs");
                local_2a8 = eastl::string("logo_deadman_mode");
                local_288 = eastl::string("logo_seasonal_mode");
                local_268 = eastl::string("titlebox");
                local_248 = eastl::string("titlebutton");
                local_228 = eastl::string("titlebutton_large");
                local_208 = eastl::string("play_now_text");
                local_1e8 = eastl::string("titlebutton_wide42,1");
                local_1c8 = eastl::string("runes");
                local_1a8 = eastl::string("title_mute");
                local_188 = eastl::string("volume_options_bobble_slider");
                local_168 = eastl::string("options_radio_buttons,0");
                local_148 = eastl::string("options_radio_buttons,2");
                local_128 = eastl::string("options_radio_buttons,4");
                local_108 = eastl::string("options_radio_buttons,6");
                local_e8 = eastl::string("login_icons");
                local_c8 = eastl::string("sl_back");
                local_a8 = eastl::string("sl_flags");
                local_88 = eastl::string("sl_arrows");
                local_68 = eastl::string("sl_stars");
                local_48 = eastl::string("sl_button");
                new (PTR_m_spriteNames_100ee6a98) eastl::vector<eastl::string>(&local_2c8, *21);
                lVar2 = 640;
                do {
                    (&local_2c8 + lVar2)->~basic_string();
                    lVar2 = lVar2 - 32;
                } while (lVar2 != -32);
                ___cxa_atexit(PTR__vector_100ee6d48, PTR_m_spriteNames_100ee6a98, 4294967296);
                ___cxa_guard_release(PTR_m_spriteNames_100ee4948);
            }
        }
    }

    // 0x1001577a0
    void ___cxx_global_var_init_107(void) {
        eastl::string local_38;

        if (*PTR_m_spriteNamesOptional_100ee4958 == '\0') {
            if (___cxa_guard_acquire(PTR_m_spriteNamesOptional_100ee4958) != 0) {
                local_38 = eastl::string("logo_speedrunning");
                new (PTR_m_spriteNamesOptional_100ee6aa8) eastl::vector<eastl::string>(&local_38, DAT_00000001);
                ___cxa_atexit(PTR__vector_100ee6d48, PTR_m_spriteNamesOptional_100ee6aa8, 4294967296);
                ___cxa_guard_release(PTR_m_spriteNamesOptional_100ee4958);
            }
        }
    }

} // namespace jag::oldscape
