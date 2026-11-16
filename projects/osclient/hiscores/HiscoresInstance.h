// projects/osclient/hiscores/HiscoresInstance.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: osclient

namespace jag::oldscape {
    // 0x103c04d78, 320 bytes, __bss; set at startup by ___cxx_global_var_init.10
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

    // 0x103c04eb8, 16 bytes, __bss; set at startup by ___cxx_global_var_init.39
    dash3d::GridRect DrawOptions::COMMAND_LINE_PADDING = GridRect(8, 4, 8, 4);

    // 0x103c04ec8, 16 bytes, __bss; set at startup by ___cxx_global_var_init.40
    dash3d::GridRect DrawOptions::OUTPUT_PADDING = GridRect(8, 0, 8, 8);

    // 0x103c04fb8, 320 bytes, __bss; set at startup by ___cxx_global_var_init.10
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

    // 0x1000b30d0, 688 bytes, placed by the data it initialises
    // ___cxx_global_var_init.10
    void ___cxx_global_var_init_10() {
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
        new (&typeToInstance) eastl::string("hiscore_oldschool", local_70);
        eastl::allocator::allocator(local_68, "EASTL basic_string");
        new (&DAT_103c04d98) eastl::string("hiscore_oldschool_ironman", local_68);
        eastl::allocator::allocator(local_60, "EASTL basic_string");
        new (&DAT_103c04db8) eastl::string("hiscore_oldschool_hardcore_ironman", local_60);
        eastl::allocator::allocator(local_58, "EASTL basic_string");
        new (&DAT_103c04dd8) eastl::string("hiscore_oldschool_deadman", local_58);
        eastl::allocator::allocator(local_50, "EASTL basic_string");
        new (&DAT_103c04df8) eastl::string("hiscore_oldschool_seasonal", local_50);
        eastl::allocator::allocator(local_48, "EASTL basic_string");
        new (&DAT_103c04e18) eastl::string("hiscore_oldschool_ultimate", local_48);
        eastl::allocator::allocator(local_40, "EASTL basic_string");
        new (&DAT_103c04e38) eastl::string("hiscore_oldschool_tournament", local_40);
        eastl::allocator::allocator(local_38, "EASTL basic_string");
        new (&DAT_103c04e58) eastl::string("oldschool_gim_hiscores", local_38);
        eastl::allocator::allocator(local_30, "EASTL basic_string");
        new (&DAT_103c04e78) eastl::string("oldschool_hardcore_gim_hiscores", local_30);
        eastl::allocator::allocator(local_28, "EASTL basic_string");
        new (&DAT_103c04e98) eastl::string("hiscore_oldschool_fresh_start", local_28);
        ___cxa_atexit(PTR__array_100ee6eb8, &typeToInstance, 4294967296);
    }

    // 0x1000b3380, 48 bytes, placed by the data it initialises
    // ___cxx_global_var_init.39
    void ___cxx_global_var_init_39() {
        new (&DrawOptions::COMMAND_LINE_PADDING) dash3d::GridRect(8, 4, 8, 4);
    }

    // 0x1000b33b0, 48 bytes, placed by the data it initialises
    // ___cxx_global_var_init.40
    void ___cxx_global_var_init_40() {
        new (&DrawOptions::OUTPUT_PADDING) dash3d::GridRect(8, 0, 8, 8);
    }

    // 0x1000b33e0, 32 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.72
    void ___cxx_global_var_init_72() {
        ___cxa_atexit(
            std::unique_ptr<debug::PerformanceCapture, std::default_delete<debug::PerformanceCapture>>::~unique_ptr,
            &debug::PerformanceCapture::m_instance, 4294967296);
    }

    // 0x1000b3400, 32 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.343
    void ___cxx_global_var_init_343() {
        ___cxa_atexit(
            std::unique_ptr<minimenu::MinimenuEntry, std::default_delete<minimenu::MinimenuEntry>>::~unique_ptr,
            &minimenu::Minimenu::CANCEL_ENTRY, 4294967296);
    }

    // 0x1000b3420, 64 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.344
    void ___cxx_global_var_init_344() {
        new (&minimenu::Minimenu::m_testOps) eastl::fixed_vector<eastl::string, 5ul, true, eastl::allocator>(5);
        ___cxa_atexit(PTR__fixed_vector_100ee6cb0, &minimenu::Minimenu::m_testOps, 4294967296);
    }

    // 0x1000b3460, 32 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.346
    void ___cxx_global_var_init_346() {
        ___cxa_atexit(
            std::unique_ptr<minimenu::MinimenuEntry, std::default_delete<minimenu::MinimenuEntry>>::~unique_ptr,
            &minimenu::Minimenu::m_stashedEntry, 4294967296);
    }

    // 0x1000b34e0, 64 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.352
    void ___cxx_global_var_init_352() {
        undefined* puVar1;

        puVar1 = PTR_LOOK_100ee47d8;
        if (*PTR_LOOK_100ee47d8 == '\0') {
            new (PTR_LOOK_100ee66e0) jag::math::ColourHSL(0.0, 0.0, 1.0);
            *puVar1 = 1;
        }
    }

    // 0x1000b3520, 64 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.353
    void ___cxx_global_var_init_353() {
        undefined* puVar1;

        puVar1 = PTR_UP_100ee47c8;
        if (*PTR_UP_100ee47c8 == '\0') {
            new (PTR_UP_100ee66d0) jag::math::ColourHSL(0.0, 1.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x1000b3560, 48 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.354
    void ___cxx_global_var_init_354() {
        undefined* puVar1;

        puVar1 = PTR_ZERO_100ee4790;
        if (*PTR_ZERO_100ee4790 == '\0') {
            new (PTR_ZERO_100ee6698) jag::math::Point<float>(0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x1000b3590, 64 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.355
    void ___cxx_global_var_init_355() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee49f0;
        if (*PTR_m_pSingleton_100ee49f0 == '\0') {
            ___cxa_atexit(
                std::unique_ptr<hardware::HardwareInfo, std::default_delete<hardware::HardwareInfo>>::~unique_ptr,
                PTR_m_pSingleton_100ee6c60, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1000b35d0, 64 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.356
    void ___cxx_global_var_init_356() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee4298;
        if (*PTR_m_pSingleton_100ee4298 == '\0') {
            ___cxa_atexit(std::unique_ptr<ThreadPoolSingleton, std::default_delete<ThreadPoolSingleton>>::~unique_ptr,
                          PTR_m_pSingleton_100ee5948, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1000b3610, 64 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.357
    void ___cxx_global_var_init_357() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee42a0;
        if (*PTR_m_pSingleton_100ee42a0 == '\0') {
            ___cxa_atexit(
                std::unique_ptr<ShaderThreadPoolSingleton, std::default_delete<ShaderThreadPoolSingleton>>::~unique_ptr,
                PTR_m_pSingleton_100ee5950, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1000b3650, 64 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.358
    void ___cxx_global_var_init_358() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee4518;
        if (*PTR_m_mutex_100ee4518 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5df0, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1000b3690, 64 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.359
    void ___cxx_global_var_init_359() {
        undefined* puVar1;

        puVar1 = PTR_ZERO_100ee4800;
        if (*PTR_ZERO_100ee4800 == '\0') {
            new (PTR_ZERO_100ee6708) ImVec4(0.0, 0.0, 0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x1000b36d0, 64 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.360
    void ___cxx_global_var_init_360() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee49c8;
        if (*PTR_m_pSingleton_100ee49c8 == '\0') {
            ___cxa_atexit(std::unique_ptr<render::ShaderProgramManager,
                                          std::default_delete<render::ShaderProgramManager>>::~unique_ptr,
                          PTR_m_pSingleton_100ee6c38, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1000b3710, 64 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.361
    void ___cxx_global_var_init_361() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee49d0;
        if (*PTR_m_pSingleton_100ee49d0 == '\0') {
            ___cxa_atexit(std::unique_ptr<render::VertexDeclarationManager,
                                          std::default_delete<render::VertexDeclarationManager>>::~unique_ptr,
                          PTR_m_pSingleton_100ee6c40, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1000b3750, 64 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.362
    void ___cxx_global_var_init_362() {
        undefined* puVar1;

        puVar1 = PTR_ZERO_100ee47e0;
        if (*PTR_ZERO_100ee47e0 == '\0') {
            new (PTR_ZERO_100ee66e8) jag::math::ColourHSL(0.0, 0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x1000b3790, 64 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.363
    void ___cxx_global_var_init_363() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee49a0;
        if (*PTR_m_pSingleton_100ee49a0 == '\0') {
            ___cxa_atexit(std::unique_ptr<render::RenderDevice, std::default_delete<render::RenderDevice>>::~unique_ptr,
                          PTR_m_pSingleton_100ee6c10, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1000b37d0, 64 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.364
    void ___cxx_global_var_init_364() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee45b0;
        if (*PTR_m_mutex_100ee45b0 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5f20, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1000b3810, 64 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.365
    void ___cxx_global_var_init_365() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee49d8;
        if (*PTR_m_pSingleton_100ee49d8 == '\0') {
            ___cxa_atexit(std::unique_ptr<jag::graphics::AnimationManager,
                                          std::default_delete<jag::graphics::AnimationManager>>::~unique_ptr,
                          PTR_m_pSingleton_100ee6c48, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1000b3850, 96 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.366
    void ___cxx_global_var_init_366() {
        undefined* puVar1;

        puVar1 = PTR_ZERO_100ee4820;
        if (*PTR_ZERO_100ee4820 == '\0') {
            new (PTR_ZERO_100ee6728) jag::math::Matrix44T<float>(0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
                                                                 0.0, 0.0, 0.0, 0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x1000b38b0, 64 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.367
    void ___cxx_global_var_init_367() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee45d8;
        if (*PTR_m_mutex_100ee45d8 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5f70, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1000b38f0, 96 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.368
    void ___cxx_global_var_init_368() {
        undefined* puVar1;

        puVar1 = PTR_IDENTITY_100ee4828;
        if (*PTR_IDENTITY_100ee4828 == '\0') {
            new (PTR_IDENTITY_100ee6730) jag::math::Matrix44T<float>(1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0,
                                                                     1.0, 0.0, 0.0, 0.0, 0.0, 1.0);
            *puVar1 = 1;
        }
    }

    // 0x1000b3950, 64 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.369
    void ___cxx_global_var_init_369() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee4590;
        if (*PTR_m_mutex_100ee4590 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5ee0, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1000b3990, 64 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.370
    void ___cxx_global_var_init_370() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee4290;
        if (*PTR_m_pSingleton_100ee4290 == '\0') {
            ___cxa_atexit(std::unique_ptr<graphicutils::BatchDestroyManager,
                                          std::default_delete<graphicutils::BatchDestroyManager>>::~unique_ptr,
                          PTR_m_pSingleton_100ee5940, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1000b39d0, 64 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.371
    void ___cxx_global_var_init_371() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee4520;
        if (*PTR_m_mutex_100ee4520 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5e00, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1000b3a10, 64 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.372
    void ___cxx_global_var_init_372() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee4500;
        if (*PTR_m_mutex_100ee4500 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5dc0, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1000b3a50, 64 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.373
    void ___cxx_global_var_init_373() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee42a8;
        if (*PTR_m_pSingleton_100ee42a8 == '\0') {
            ___cxa_atexit(std::unique_ptr<hal::Haptics, std::default_delete<hal::Haptics>>::~unique_ptr,
                          PTR_m_pSingleton_100ee5958, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1000b3ad0, 64 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.375
    void ___cxx_global_var_init_375() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee42b0;
        if (*PTR_m_pSingleton_100ee42b0 == '\0') {
            ___cxa_atexit(std::unique_ptr<jag::debug::DebugUIManager,
                                          std::default_delete<jag::debug::DebugUIManager>>::~unique_ptr,
                          PTR_m_pSingleton_100ee5960, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1000b3b10, 89 bytes, placed by debug map only (low confidence)
    // __GLOBAL__sub_I_unity_3_cxx.cxx
    void __GLOBAL__sub_I_unity_3_cxx_cxx() {
        undefined8 uVar1;

        uVar1 = _objc_autoreleasePoolPush();
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

    // 0x100156dd0, 688 bytes, placed by the data it initialises
    // ___cxx_global_var_init.10
    void ___cxx_global_var_init_10() {
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
        new (&typeToInstance) eastl::string("hiscore_oldschool", local_70);
        eastl::allocator::allocator(local_68, "EASTL basic_string");
        new (&DAT_103c04fd8) eastl::string("hiscore_oldschool_ironman", local_68);
        eastl::allocator::allocator(local_60, "EASTL basic_string");
        new (&DAT_103c04ff8) eastl::string("hiscore_oldschool_hardcore_ironman", local_60);
        eastl::allocator::allocator(local_58, "EASTL basic_string");
        new (&DAT_103c05018) eastl::string("hiscore_oldschool_deadman", local_58);
        eastl::allocator::allocator(local_50, "EASTL basic_string");
        new (&DAT_103c05038) eastl::string("hiscore_oldschool_seasonal", local_50);
        eastl::allocator::allocator(local_48, "EASTL basic_string");
        new (&DAT_103c05058) eastl::string("hiscore_oldschool_ultimate", local_48);
        eastl::allocator::allocator(local_40, "EASTL basic_string");
        new (&DAT_103c05078) eastl::string("hiscore_oldschool_tournament", local_40);
        eastl::allocator::allocator(local_38, "EASTL basic_string");
        new (&DAT_103c05098) eastl::string("oldschool_gim_hiscores", local_38);
        eastl::allocator::allocator(local_30, "EASTL basic_string");
        new (&DAT_103c050b8) eastl::string("oldschool_hardcore_gim_hiscores", local_30);
        eastl::allocator::allocator(local_28, "EASTL basic_string");
        new (&DAT_103c050d8) eastl::string("hiscore_oldschool_fresh_start", local_28);
        ___cxa_atexit(PTR__array_100ee6eb8, &typeToInstance, 4294967296);
    }

    // 0x100157080, 256 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.82
    void ___cxx_global_var_init_82() {
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

    // 0x100157180, 1568 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.85
    void ___cxx_global_var_init_85() {
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

    // 0x1001577a0, 256 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.107
    void ___cxx_global_var_init_107() {
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

} // namespace jag::oldscape
