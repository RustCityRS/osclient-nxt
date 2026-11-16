// _unplaced/projects/osclient/unity_1.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: osclient

namespace jag::graphics {
    // 0x103c05300, 64 bytes, __bss; zero-initialised
    MAYA_ANIM_INVERT_MATRIX;

    // 0x103c05340, 12 bytes, __bss; zero-initialised
    WORLD_ORTHOGONAL;

    // 0x100178d70, 96 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init
    void ___cxx_global_var_init() {
        undefined1 local_50[40];
        Vector3T<int> local_28[16];

        math::Matrix33Scaling<float>((math*)local_50, 1.0, 1.0, -1.0);
        math::Vector3T<int>::Vector3T(local_28);
        new (&MAYA_ANIM_INVERT_MATRIX) math::Matrix44T<float>(local_50, local_28);
    }

    // 0x100178dd0, 32 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.1
    void ___cxx_global_var_init_1() {
        new (&WORLD_ORTHOGONAL) math::ColourHSL(-1.5707964, -1.5707964, 0.0);
    }

    // 0x100178df0, 96 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.11
    void ___cxx_global_var_init_11() {
        if (*PTR_VIEWRT_LUMINANCE_ADAPTED_100ee4048 == '\0') {
            if (___cxa_guard_acquire(PTR_VIEWRT_LUMINANCE_ADAPTED_100ee4048) != 0) {
                new (PTR_VIEWRT_LUMINANCE_ADAPTED_100ee5578) HashedString("LUMINANCE_ADAPTED");
                ___cxa_guard_release(PTR_VIEWRT_LUMINANCE_ADAPTED_100ee4048);
            }
        }
    }

    // 0x100178e50, 96 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.13
    void ___cxx_global_var_init_13() {
        if (*PTR_VIEWRT_LUMINANCE_ADAPTED_PREVIOUS_100ee4058 == '\0') {
            if (___cxa_guard_acquire(PTR_VIEWRT_LUMINANCE_ADAPTED_PREVIOUS_100ee4058) != 0) {
                new (PTR_VIEWRT_LUMINANCE_ADAPTED_PREVIOUS_100ee5588) HashedString("LUMINANCE_ADAPTED_PREVIOUS");
                ___cxa_guard_release(PTR_VIEWRT_LUMINANCE_ADAPTED_PREVIOUS_100ee4058);
            }
        }
    }

    // 0x100178eb0, 96 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.15
    void ___cxx_global_var_init_15() {
        if (*PTR_VIEWRT_LUMINANCE_AVERAGE_100ee4050 == '\0') {
            if (___cxa_guard_acquire(PTR_VIEWRT_LUMINANCE_AVERAGE_100ee4050) != 0) {
                new (PTR_VIEWRT_LUMINANCE_AVERAGE_100ee5580) HashedString("VIEWRT_LUMINANCE_AVERAGE");
                ___cxa_guard_release(PTR_VIEWRT_LUMINANCE_AVERAGE_100ee4050);
            }
        }
    }

    // 0x100178f10, 16 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.17
    void ___cxx_global_var_init_17() {
        oldscape::defaults::DefaultsGroup::GRAPHICS = 3;
    }

    // 0x100178f20, 144 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.18
    void ___cxx_global_var_init_18() {
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
        new (&oldscape::AllFonts) Array<oldscape::Font, eastl::allocator>((initializer_list*)&local_48);
        ___cxa_atexit(PTR__Array_100ee6788, &oldscape::AllFonts, 4294967296);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_18) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100178fb0, 688 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.19
    void ___cxx_global_var_init_19() {
        allocator local_70[8];
        allocator local_68[8];
        allocator local_60[8];
        allocator local_58[8];
        allocator local_50[8];
        allocator local_48[8];
        allocator local_40[8];
        allocator local_38[8];
        allocator local_30[8];
        allocator local_28[8];

        eastl::allocator::allocator(local_70, "EASTL basic_string");
        new (&oldscape::typeToInstance) eastl::string("hiscore_oldschool", local_70);
        eastl::allocator::allocator(local_68, "EASTL basic_string");
        new (&DAT_103c05388) eastl::string("hiscore_oldschool_ironman", local_68);
        eastl::allocator::allocator(local_60, "EASTL basic_string");
        new (&DAT_103c053a8) eastl::string("hiscore_oldschool_hardcore_ironman", local_60);
        eastl::allocator::allocator(local_58, "EASTL basic_string");
        new (&DAT_103c053c8) eastl::string("hiscore_oldschool_deadman", local_58);
        eastl::allocator::allocator(local_50, "EASTL basic_string");
        new (&DAT_103c053e8) eastl::string("hiscore_oldschool_seasonal", local_50);
        eastl::allocator::allocator(local_48, "EASTL basic_string");
        new (&DAT_103c05408) eastl::string("hiscore_oldschool_ultimate", local_48);
        eastl::allocator::allocator(local_40, "EASTL basic_string");
        new (&DAT_103c05428) eastl::string("hiscore_oldschool_tournament", local_40);
        eastl::allocator::allocator(local_38, "EASTL basic_string");
        new (&DAT_103c05448) eastl::string("oldschool_gim_hiscores", local_38);
        eastl::allocator::allocator(local_30, "EASTL basic_string");
        new (&DAT_103c05468) eastl::string("oldschool_hardcore_gim_hiscores", local_30);
        eastl::allocator::allocator(local_28, "EASTL basic_string");
        new (&DAT_103c05488) eastl::string("hiscore_oldschool_fresh_start", local_28);
        ___cxa_atexit(PTR__array_100ee6eb8, &oldscape::typeToInstance, 4294967296);
    }

    // 0x100179260, 256 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.40
    void ___cxx_global_var_init_40() {
        allocator local_48[8];
        allocator local_40[8];
        eastl::string local_38[32];
        long local_18;

        local_18 = *(long*)PTR____stack_chk_guard_100ee9d98;
        if (*PTR_m_spriteNamesInBinary_100ee4950 == '\0') {
            if (___cxa_guard_acquire(PTR_m_spriteNamesInBinary_100ee4950) != 0) {
                eastl::allocator::allocator(local_48, "EASTL basic_string");
                eastl::string::basic_string(local_38, "titlewide.png", local_48);
                eastl::allocator::allocator(local_40, "EASTL vector");
                eastl::vector<eastl::string, eastl::allocator>::vector(PTR_m_spriteNamesInBinary_100ee6aa0, local_38, 1,
                                                                       local_40);
                eastl::string::~basic_string(local_38);
                ___cxa_atexit(PTR__vector_100ee6d48, PTR_m_spriteNamesInBinary_100ee6aa0, 4294967296);
                ___cxa_guard_release(PTR_m_spriteNamesInBinary_100ee4950);
            }
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_18) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100179360, 1568 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.43
    void ___cxx_global_var_init_43() {
        long lVar2;
        allocator local_378[8];
        allocator local_370[8];
        allocator local_368[8];
        allocator local_360[8];
        allocator local_358[8];
        allocator local_350[8];
        allocator local_348[8];
        allocator local_340[8];
        allocator local_338[8];
        allocator local_330[8];
        allocator local_328[8];
        allocator local_320[8];
        allocator local_318[8];
        allocator local_310[8];
        allocator local_308[8];
        allocator local_300[8];
        allocator local_2f8[8];
        allocator local_2f0[8];
        allocator local_2e8[8];
        allocator local_2e0[8];
        allocator local_2d8[8];
        allocator local_2d0[8];
        eastl::string local_2c8[32];
        eastl::string local_2a8[32];
        eastl::string local_288[32];
        eastl::string local_268[32];
        eastl::string local_248[32];
        eastl::string local_228[32];
        eastl::string local_208[32];
        eastl::string local_1e8[32];
        eastl::string local_1c8[32];
        eastl::string local_1a8[32];
        eastl::string local_188[32];
        eastl::string local_168[32];
        eastl::string local_148[32];
        eastl::string local_128[32];
        eastl::string local_108[32];
        eastl::string local_e8[32];
        eastl::string local_c8[32];
        eastl::string local_a8[32];
        eastl::string local_88[32];
        eastl::string local_68[32];
        eastl::string local_48[32];
        long local_28;

        local_28 = *(long*)PTR____stack_chk_guard_100ee9d98;
        if (*PTR_m_spriteNames_100ee4948 == '\0') {
            if (___cxa_guard_acquire(PTR_m_spriteNames_100ee4948) != 0) {
                eastl::allocator::allocator(local_378, "EASTL basic_string");
                eastl::string::basic_string(local_2c8, "logo_osrs", local_378);
                eastl::allocator::allocator(local_370, "EASTL basic_string");
                eastl::string::basic_string(local_2a8, "logo_deadman_mode", local_370);
                eastl::allocator::allocator(local_368, "EASTL basic_string");
                eastl::string::basic_string(local_288, "logo_seasonal_mode", local_368);
                eastl::allocator::allocator(local_360, "EASTL basic_string");
                eastl::string::basic_string(local_268, "titlebox", local_360);
                eastl::allocator::allocator(local_358, "EASTL basic_string");
                eastl::string::basic_string(local_248, "titlebutton", local_358);
                eastl::allocator::allocator(local_350, "EASTL basic_string");
                eastl::string::basic_string(local_228, "titlebutton_large", local_350);
                eastl::allocator::allocator(local_348, "EASTL basic_string");
                eastl::string::basic_string(local_208, "play_now_text", local_348);
                eastl::allocator::allocator(local_340, "EASTL basic_string");
                eastl::string::basic_string(local_1e8, "titlebutton_wide42,1", local_340);
                eastl::allocator::allocator(local_338, "EASTL basic_string");
                eastl::string::basic_string(local_1c8, "runes", local_338);
                eastl::allocator::allocator(local_330, "EASTL basic_string");
                eastl::string::basic_string(local_1a8, "title_mute", local_330);
                eastl::allocator::allocator(local_328, "EASTL basic_string");
                eastl::string::basic_string(local_188, "volume_options_bobble_slider", local_328);
                eastl::allocator::allocator(local_320, "EASTL basic_string");
                eastl::string::basic_string(local_168, "options_radio_buttons,0", local_320);
                eastl::allocator::allocator(local_318, "EASTL basic_string");
                eastl::string::basic_string(local_148, "options_radio_buttons,2", local_318);
                eastl::allocator::allocator(local_310, "EASTL basic_string");
                eastl::string::basic_string(local_128, "options_radio_buttons,4", local_310);
                eastl::allocator::allocator(local_308, "EASTL basic_string");
                eastl::string::basic_string(local_108, "options_radio_buttons,6", local_308);
                eastl::allocator::allocator(local_300, "EASTL basic_string");
                eastl::string::basic_string(local_e8, "login_icons", local_300);
                eastl::allocator::allocator(local_2f8, "EASTL basic_string");
                eastl::string::basic_string(local_c8, "sl_back", local_2f8);
                eastl::allocator::allocator(local_2f0, "EASTL basic_string");
                eastl::string::basic_string(local_a8, "sl_flags", local_2f0);
                eastl::allocator::allocator(local_2e8, "EASTL basic_string");
                eastl::string::basic_string(local_88, "sl_arrows", local_2e8);
                eastl::allocator::allocator(local_2e0, "EASTL basic_string");
                eastl::string::basic_string(local_68, "sl_stars", local_2e0);
                eastl::allocator::allocator(local_2d8, "EASTL basic_string");
                eastl::string::basic_string(local_48, "sl_button", local_2d8);
                eastl::allocator::allocator(local_2d0, "EASTL vector");
                eastl::vector<eastl::string, eastl::allocator>::vector(PTR_m_spriteNames_100ee6a98, local_2c8, 21,
                                                                       local_2d0);
                lVar2 = 640;
                do {
                    eastl::string::~basic_string(local_2c8 + lVar2);
                    lVar2 = lVar2 + -32;
                } while (lVar2 != -32);
                ___cxa_atexit(PTR__vector_100ee6d48, PTR_m_spriteNames_100ee6a98, 4294967296);
                ___cxa_guard_release(PTR_m_spriteNames_100ee4948);
            }
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_28) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100179980, 256 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.65
    void ___cxx_global_var_init_65() {
        allocator local_48[8];
        allocator local_40[8];
        eastl::string local_38[32];
        long local_18;

        local_18 = *(long*)PTR____stack_chk_guard_100ee9d98;
        if (*PTR_m_spriteNamesOptional_100ee4958 == '\0') {
            if (___cxa_guard_acquire(PTR_m_spriteNamesOptional_100ee4958) != 0) {
                eastl::allocator::allocator(local_48, "EASTL basic_string");
                eastl::string::basic_string(local_38, "logo_speedrunning", local_48);
                eastl::allocator::allocator(local_40, "EASTL vector");
                eastl::vector<eastl::string, eastl::allocator>::vector(PTR_m_spriteNamesOptional_100ee6aa8, local_38, 1,
                                                                       local_40);
                eastl::string::~basic_string(local_38);
                ___cxa_atexit(PTR__vector_100ee6d48, PTR_m_spriteNamesOptional_100ee6aa8, 4294967296);
                ___cxa_guard_release(PTR_m_spriteNamesOptional_100ee4958);
            }
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_18) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100179a80, 32 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.90
    /* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

    void ___cxx_global_var_init_90() {
        _LOG_E_2 = log<int>(2);
    }

    // 0x100179aa0, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.128
    void ___cxx_global_var_init_128() {
        undefined* puVar1;

        puVar1 = PTR_LOOK_100ee47d8;
        if (*PTR_LOOK_100ee47d8 == '\0') {
            new (PTR_LOOK_100ee66e0) math::ColourHSL(0.0, 0.0, 1.0);
            *puVar1 = 1;
        }
    }

    // 0x100179ae0, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.129
    void ___cxx_global_var_init_129() {
        undefined* puVar1;

        puVar1 = PTR_UP_100ee47c8;
        if (*PTR_UP_100ee47c8 == '\0') {
            new (PTR_UP_100ee66d0) math::ColourHSL(0.0, 1.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x100179b20, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.130
    void ___cxx_global_var_init_130() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee4298;
        if (*PTR_m_pSingleton_100ee4298 == '\0') {
            ___cxa_atexit(std::unique_ptr<ThreadPoolSingleton, std::default_delete<ThreadPoolSingleton>>::~unique_ptr,
                          PTR_m_pSingleton_100ee5948, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100179b60, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.131
    void ___cxx_global_var_init_131() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee42a0;
        if (*PTR_m_pSingleton_100ee42a0 == '\0') {
            ___cxa_atexit(
                std::unique_ptr<ShaderThreadPoolSingleton, std::default_delete<ShaderThreadPoolSingleton>>::~unique_ptr,
                PTR_m_pSingleton_100ee5950, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100179ba0, 48 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.132
    void ___cxx_global_var_init_132() {
        undefined* puVar1;

        puVar1 = PTR_ZERO_100ee4790;
        if (*PTR_ZERO_100ee4790 == '\0') {
            new (PTR_ZERO_100ee6698) math::Point<float>(0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x100179bd0, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.133
    void ___cxx_global_var_init_133() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee4518;
        if (*PTR_m_mutex_100ee4518 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5df0, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100179c10, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.134
    void ___cxx_global_var_init_134() {
        undefined* puVar1;

        puVar1 = PTR_ZERO_100ee4800;
        if (*PTR_ZERO_100ee4800 == '\0') {
            new (PTR_ZERO_100ee6708) ImVec4(0.0, 0.0, 0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x100179c50, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.135
    void ___cxx_global_var_init_135() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee49c8;
        if (*PTR_m_pSingleton_100ee49c8 == '\0') {
            ___cxa_atexit(std::unique_ptr<render::ShaderProgramManager,
                                          std::default_delete<render::ShaderProgramManager>>::~unique_ptr,
                          PTR_m_pSingleton_100ee6c38, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100179c90, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.136
    void ___cxx_global_var_init_136() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee49d0;
        if (*PTR_m_pSingleton_100ee49d0 == '\0') {
            ___cxa_atexit(std::unique_ptr<render::VertexDeclarationManager,
                                          std::default_delete<render::VertexDeclarationManager>>::~unique_ptr,
                          PTR_m_pSingleton_100ee6c40, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100179cd0, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.137
    void ___cxx_global_var_init_137() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee49a0;
        if (*PTR_m_pSingleton_100ee49a0 == '\0') {
            ___cxa_atexit(std::unique_ptr<render::RenderDevice, std::default_delete<render::RenderDevice>>::~unique_ptr,
                          PTR_m_pSingleton_100ee6c10, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100179d10, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.138
    void ___cxx_global_var_init_138() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee45b0;
        if (*PTR_m_mutex_100ee45b0 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5f20, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100179d50, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.139
    void ___cxx_global_var_init_139() {
        undefined* puVar1;

        puVar1 = PTR_ZERO_100ee47e0;
        if (*PTR_ZERO_100ee47e0 == '\0') {
            new (PTR_ZERO_100ee66e8) math::ColourHSL(0.0, 0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x100179d90, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.140
    void ___cxx_global_var_init_140() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee49d8;
        if (*PTR_m_pSingleton_100ee49d8 == '\0') {
            ___cxa_atexit(std::unique_ptr<AnimationManager, std::default_delete<AnimationManager>>::~unique_ptr,
                          PTR_m_pSingleton_100ee6c48, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100179dd0, 96 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.141
    void ___cxx_global_var_init_141() {
        undefined* puVar1;

        puVar1 = PTR_ZERO_100ee4820;
        if (*PTR_ZERO_100ee4820 == '\0') {
            new (PTR_ZERO_100ee6728)
                math::Matrix44T<float>(0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x100179e30, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.142
    void ___cxx_global_var_init_142() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee45d8;
        if (*PTR_m_mutex_100ee45d8 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5f70, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100179e70, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.143
    void ___cxx_global_var_init_143() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee49f0;
        if (*PTR_m_pSingleton_100ee49f0 == '\0') {
            ___cxa_atexit(
                std::unique_ptr<hardware::HardwareInfo, std::default_delete<hardware::HardwareInfo>>::~unique_ptr,
                PTR_m_pSingleton_100ee6c60, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100179eb0, 96 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.144
    void ___cxx_global_var_init_144() {
        undefined* puVar1;

        puVar1 = PTR_IDENTITY_100ee4828;
        if (*PTR_IDENTITY_100ee4828 == '\0') {
            new (PTR_IDENTITY_100ee6730)
                math::Matrix44T<float>(1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0);
            *puVar1 = 1;
        }
    }

    // 0x100179f10, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.145
    void ___cxx_global_var_init_145() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee4590;
        if (*PTR_m_mutex_100ee4590 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5ee0, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100179f50, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.146
    void ___cxx_global_var_init_146() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee4290;
        if (*PTR_m_pSingleton_100ee4290 == '\0') {
            ___cxa_atexit(std::unique_ptr<graphicutils::BatchDestroyManager,
                                          std::default_delete<graphicutils::BatchDestroyManager>>::~unique_ptr,
                          PTR_m_pSingleton_100ee5940, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100179f90, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.147
    void ___cxx_global_var_init_147() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee4520;
        if (*PTR_m_mutex_100ee4520 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5e00, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100179fd0, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.148
    void ___cxx_global_var_init_148() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee4500;
        if (*PTR_m_mutex_100ee4500 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5dc0, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x10017a010, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.149
    void ___cxx_global_var_init_149() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee42a8;
        if (*PTR_m_pSingleton_100ee42a8 == '\0') {
            ___cxa_atexit(std::unique_ptr<hal::Haptics, std::default_delete<hal::Haptics>>::~unique_ptr,
                          PTR_m_pSingleton_100ee5958, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x10017a050, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.150
    void ___cxx_global_var_init_150() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee4968;
        if (*PTR_m_pSingleton_100ee4968 == '\0') {
            ___cxa_atexit(std::unique_ptr<graphicutils::Screengrabber,
                                          std::default_delete<graphicutils::Screengrabber>>::~unique_ptr,
                          PTR_m_pSingleton_100ee6bd8, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x10017a090, 59 bytes, placed by nothing (unplaced)
    // __GLOBAL__sub_I_unity_1_cxx.cxx
    void __GLOBAL__sub_I_unity_1_cxx_cxx() {
        undefined8 uVar1;

        uVar1 = _objc_autoreleasePoolPush();
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
    // 0x103c05350, 24 bytes, __bss; zero-initialised
    AllFonts;

    // 0x103c05368, 328 bytes, __bss; set at startup by ___cxx_global_var_init.19
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
    // 0x103c0534c, 4 bytes, __bss; zero-initialised
    DefaultsGroup::GRAPHICS;

} // namespace jag::oldscape::defaults
