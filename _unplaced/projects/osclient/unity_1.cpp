// _unplaced/projects/osclient/unity_1.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: osclient

namespace jag::graphics {
    // 0x103c05300
    uint8_t MAYA_ANIM_INVERT_MATRIX[64];

    // 0x103c05340
    uint8_t WORLD_ORTHOGONAL[12];

    // 0x100178d70
    void ___cxx_global_var_init(void) {
        Matrix33T<float> local_50;

        math::Matrix33Scaling<float>(1.0, 1.0, -1.0);
        Vector3T<int> local_28;
        new ((Matrix44T<float>*)&MAYA_ANIM_INVERT_MATRIX) math::Matrix44T<float>(local_50, local_28);
    }

    // 0x100178dd0
    void ___cxx_global_var_init_1(void) {
        new ((ColourHSL*)&WORLD_ORTHOGONAL) math::ColourHSL(-1.5707964, -1.5707964, 0.0);
    }

    // 0x100178df0
    void ___cxx_global_var_init_11(void) {
        if (*PTR_VIEWRT_LUMINANCE_ADAPTED_100ee4048 == '\0') {
            if (___cxa_guard_acquire(PTR_VIEWRT_LUMINANCE_ADAPTED_100ee4048) != 0) {
                new (PTR_VIEWRT_LUMINANCE_ADAPTED_100ee5578) HashedString("LUMINANCE_ADAPTED");
                ___cxa_guard_release(PTR_VIEWRT_LUMINANCE_ADAPTED_100ee4048);
            }
        }
    }

    // 0x100178e50
    void ___cxx_global_var_init_13(void) {
        if (*PTR_VIEWRT_LUMINANCE_ADAPTED_PREVIOUS_100ee4058 == '\0') {
            if (___cxa_guard_acquire(PTR_VIEWRT_LUMINANCE_ADAPTED_PREVIOUS_100ee4058) != 0) {
                new (PTR_VIEWRT_LUMINANCE_ADAPTED_PREVIOUS_100ee5588) HashedString("LUMINANCE_ADAPTED_PREVIOUS");
                ___cxa_guard_release(PTR_VIEWRT_LUMINANCE_ADAPTED_PREVIOUS_100ee4058);
            }
        }
    }

    // 0x100178eb0
    void ___cxx_global_var_init_15(void) {
        if (*PTR_VIEWRT_LUMINANCE_AVERAGE_100ee4050 == '\0') {
            if (___cxa_guard_acquire(PTR_VIEWRT_LUMINANCE_AVERAGE_100ee4050) != 0) {
                new (PTR_VIEWRT_LUMINANCE_AVERAGE_100ee5580) HashedString("VIEWRT_LUMINANCE_AVERAGE");
                ___cxa_guard_release(PTR_VIEWRT_LUMINANCE_AVERAGE_100ee4050);
            }
        }
    }

    // 0x100178f10
    void ___cxx_global_var_init_17(void) {
        oldscape::defaults::DefaultsGroup::GRAPHICS = 3;
    }

    // 0x100178f20
    void ___cxx_global_var_init_18(void) {
        uint64_t local_28 = 21474836484;
        mach_header* local_38 = &__mh_execute_header;
        uint64_t uStack_30 = 12884901890;
        uint64_t local_40 = 6;
        new ((Array<oldscape::Font>*)&oldscape::AllFonts) Array<oldscape::Font>(&local_38);
        ___cxa_atexit(PTR__Array_100ee6788, &oldscape::AllFonts, 4294967296);
    }

    // 0x100179260
    void ___cxx_global_var_init_40(void) {
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

    // 0x100179360
    void ___cxx_global_var_init_43(void) {
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

    // 0x100179980
    void ___cxx_global_var_init_65(void) {
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

    // 0x100179a80
    void ___cxx_global_var_init_90(void) {
        LOG_E_2 = log<int>(2);
    }

    // 0x100179aa0
    void ___cxx_global_var_init_128(void) {
        uint8_t* puVar1 = PTR_LOOK_100ee47d8;
        if (*PTR_LOOK_100ee47d8 == '\0') {
            new (PTR_LOOK_100ee66e0) math::ColourHSL(0.0, 0.0, 1.0);
            *puVar1 = 1;
        }
    }

    // 0x100179ae0
    void ___cxx_global_var_init_129(void) {
        uint8_t* puVar1 = PTR_UP_100ee47c8;
        if (*PTR_UP_100ee47c8 == '\0') {
            new (PTR_UP_100ee66d0) math::ColourHSL(0.0, 1.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x100179b20
    void ___cxx_global_var_init_130(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee4298;
        if (*PTR_m_pSingleton_100ee4298 == '\0') {
            ___cxa_atexit(std::unique_ptr<ThreadPoolSingleton>::~unique_ptr, PTR_m_pSingleton_100ee5948, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100179b60
    void ___cxx_global_var_init_131(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee42a0;
        if (*PTR_m_pSingleton_100ee42a0 == '\0') {
            ___cxa_atexit(std::unique_ptr<ShaderThreadPoolSingleton>::~unique_ptr, PTR_m_pSingleton_100ee5950,
                          4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100179ba0
    void ___cxx_global_var_init_132(void) {
        uint8_t* puVar1 = PTR_ZERO_100ee4790;
        if (*PTR_ZERO_100ee4790 == '\0') {
            new (PTR_ZERO_100ee6698) math::Point(0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x100179bd0
    void ___cxx_global_var_init_133(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee4518;
        if (*PTR_m_mutex_100ee4518 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5df0, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100179c10
    void ___cxx_global_var_init_134(void) {
        uint8_t* puVar1 = PTR_ZERO_100ee4800;
        if (*PTR_ZERO_100ee4800 == '\0') {
            new (PTR_ZERO_100ee6708) ImVec4(0.0, 0.0, 0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x100179c50
    void ___cxx_global_var_init_135(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee49c8;
        if (*PTR_m_pSingleton_100ee49c8 == '\0') {
            ___cxa_atexit(std::unique_ptr<render::ShaderProgramManager>::~unique_ptr, PTR_m_pSingleton_100ee6c38,
                          4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100179c90
    void ___cxx_global_var_init_136(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee49d0;
        if (*PTR_m_pSingleton_100ee49d0 == '\0') {
            ___cxa_atexit(std::unique_ptr<render::VertexDeclarationManager>::~unique_ptr, PTR_m_pSingleton_100ee6c40,
                          4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100179cd0
    void ___cxx_global_var_init_137(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee49a0;
        if (*PTR_m_pSingleton_100ee49a0 == '\0') {
            ___cxa_atexit(std::unique_ptr<render::RenderDevice>::~unique_ptr, PTR_m_pSingleton_100ee6c10, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100179d10
    void ___cxx_global_var_init_138(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee45b0;
        if (*PTR_m_mutex_100ee45b0 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5f20, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100179d50
    void ___cxx_global_var_init_139(void) {
        uint8_t* puVar1 = PTR_ZERO_100ee47e0;
        if (*PTR_ZERO_100ee47e0 == '\0') {
            new (PTR_ZERO_100ee66e8) math::ColourHSL(0.0, 0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x100179d90
    void ___cxx_global_var_init_140(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee49d8;
        if (*PTR_m_pSingleton_100ee49d8 == '\0') {
            ___cxa_atexit(std::unique_ptr<AnimationManager>::~unique_ptr, PTR_m_pSingleton_100ee6c48, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100179dd0
    void ___cxx_global_var_init_141(void) {
        uint8_t* puVar1 = PTR_ZERO_100ee4820;
        if (*PTR_ZERO_100ee4820 == '\0') {
            new (PTR_ZERO_100ee6728)
                math::Matrix44T<float>(0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x100179e30
    void ___cxx_global_var_init_142(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee45d8;
        if (*PTR_m_mutex_100ee45d8 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5f70, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100179e70
    void ___cxx_global_var_init_143(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee49f0;
        if (*PTR_m_pSingleton_100ee49f0 == '\0') {
            ___cxa_atexit(std::unique_ptr<hardware::HardwareInfo>::~unique_ptr, PTR_m_pSingleton_100ee6c60, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100179eb0
    void ___cxx_global_var_init_144(void) {
        uint8_t* puVar1 = PTR_IDENTITY_100ee4828;
        if (*PTR_IDENTITY_100ee4828 == '\0') {
            new (PTR_IDENTITY_100ee6730)
                math::Matrix44T<float>(1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0);
            *puVar1 = 1;
        }
    }

    // 0x100179f10
    void ___cxx_global_var_init_145(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee4590;
        if (*PTR_m_mutex_100ee4590 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5ee0, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100179f50
    void ___cxx_global_var_init_146(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee4290;
        if (*PTR_m_pSingleton_100ee4290 == '\0') {
            ___cxa_atexit(std::unique_ptr<graphicutils::BatchDestroyManager>::~unique_ptr, PTR_m_pSingleton_100ee5940,
                          4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100179f90
    void ___cxx_global_var_init_147(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee4520;
        if (*PTR_m_mutex_100ee4520 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5e00, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100179fd0
    void ___cxx_global_var_init_148(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee4500;
        if (*PTR_m_mutex_100ee4500 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5dc0, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x10017a010
    void ___cxx_global_var_init_149(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee42a8;
        if (*PTR_m_pSingleton_100ee42a8 == '\0') {
            ___cxa_atexit(std::unique_ptr<hal::Haptics>::~unique_ptr, PTR_m_pSingleton_100ee5958, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x10017a050
    void ___cxx_global_var_init_150(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee4968;
        if (*PTR_m_pSingleton_100ee4968 == '\0') {
            ___cxa_atexit(std::unique_ptr<graphicutils::Screengrabber>::~unique_ptr, PTR_m_pSingleton_100ee6bd8,
                          4294967296);
            *puVar1 = 1;
        }
    }

    // 0x10017a090
    void __GLOBAL__sub_I_unity_1_cxx_cxx(void) {
        uint64_t uVar1 = _objc_autoreleasePoolPush();
        ___cxx_global_var_init();
        ___cxx_global_var_init_1();
        ___cxx_global_var_init_17();
        ___cxx_global_var_init_18();
        ___cxx_global_var_init_19();
        ___cxx_global_var_init_90();
        _objc_autoreleasePoolPop(uVar1);
    }

} // namespace jag::graphics

namespace jag::oldscape {
    // 0x103c05350
    uint8_t AllFonts[24];

    // 0x103c05368, set at startup by ___cxx_global_var_init.19
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

} // namespace jag::oldscape

namespace jag::oldscape::defaults {
    // 0x103c0534c
    int32_t DefaultsGroup::GRAPHICS;

} // namespace jag::oldscape::defaults
