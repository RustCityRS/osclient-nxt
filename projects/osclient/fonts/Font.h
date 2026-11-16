// projects/osclient/fonts/Font.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: osclient

namespace jag::oldscape {
    // 0x103c04bc8, 328 bytes, __bss; set at startup by ___cxx_global_var_init.10
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

    // 0x10422a950, 24 bytes, __bss; set at startup by ___cxx_global_var_init.9
    Array<Font, eastl::allocator> AllFonts;

    // 0x10422a968, 328 bytes, __bss; set at startup by ___cxx_global_var_init.10
    eastl::string typeToInstance[10] = {
        /* [0] */ "hiscore_oldschool",
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

    // 0x100059380, 144 bytes, placed by the data it initialises
    // ___cxx_global_var_init.9
    void ___cxx_global_var_init_9() {
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

    // 0x100059410, 688 bytes, placed by the data it initialises
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
        new (&DAT_103c04be8) eastl::string("hiscore_oldschool_ironman", local_68);
        eastl::allocator::allocator(local_60, "EASTL basic_string");
        new (&DAT_103c04c08) eastl::string("hiscore_oldschool_hardcore_ironman", local_60);
        eastl::allocator::allocator(local_58, "EASTL basic_string");
        new (&DAT_103c04c28) eastl::string("hiscore_oldschool_deadman", local_58);
        eastl::allocator::allocator(local_50, "EASTL basic_string");
        new (&DAT_103c04c48) eastl::string("hiscore_oldschool_seasonal", local_50);
        eastl::allocator::allocator(local_48, "EASTL basic_string");
        new (&DAT_103c04c68) eastl::string("hiscore_oldschool_ultimate", local_48);
        eastl::allocator::allocator(local_40, "EASTL basic_string");
        new (&DAT_103c04c88) eastl::string("hiscore_oldschool_tournament", local_40);
        eastl::allocator::allocator(local_38, "EASTL basic_string");
        new (&DAT_103c04ca8) eastl::string("oldschool_gim_hiscores", local_38);
        eastl::allocator::allocator(local_30, "EASTL basic_string");
        new (&DAT_103c04cc8) eastl::string("oldschool_hardcore_gim_hiscores", local_30);
        eastl::allocator::allocator(local_28, "EASTL basic_string");
        new (&DAT_103c04ce8) eastl::string("hiscore_oldschool_fresh_start", local_28);
        ___cxa_atexit(PTR__array_100ee6eb8, &typeToInstance, 4294967296);
    }

    // 0x100059f00, 64 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.209
    void ___cxx_global_var_init_209() {
        undefined* puVar1;

        puVar1 = PTR_LOOK_100ee47d8;
        if (*PTR_LOOK_100ee47d8 == '\0') {
            new (PTR_LOOK_100ee66e0) jag::math::ColourHSL(0.0, 0.0, 1.0);
            *puVar1 = 1;
        }
    }

    // 0x100059f40, 64 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.210
    void ___cxx_global_var_init_210() {
        undefined* puVar1;

        puVar1 = PTR_UP_100ee47c8;
        if (*PTR_UP_100ee47c8 == '\0') {
            new (PTR_UP_100ee66d0) jag::math::ColourHSL(0.0, 1.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x100059f80, 64 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.211
    void ___cxx_global_var_init_211() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee4298;
        if (*PTR_m_pSingleton_100ee4298 == '\0') {
            ___cxa_atexit(std::unique_ptr<ThreadPoolSingleton, std::default_delete<ThreadPoolSingleton>>::~unique_ptr,
                          PTR_m_pSingleton_100ee5948, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100059fc0, 64 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.212
    void ___cxx_global_var_init_212() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee42a0;
        if (*PTR_m_pSingleton_100ee42a0 == '\0') {
            ___cxa_atexit(
                std::unique_ptr<ShaderThreadPoolSingleton, std::default_delete<ShaderThreadPoolSingleton>>::~unique_ptr,
                PTR_m_pSingleton_100ee5950, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1000b3040, 144 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.9
    void ___cxx_global_var_init_9() {
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

    // 0x100156d40, 144 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.9
    void ___cxx_global_var_init_9() {
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

    // 0x1003a0af0, 688 bytes, placed by the data it initialises
    // ___cxx_global_var_init.72
    void ___cxx_global_var_init_72() {
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
        new (&DAT_10422a988) eastl::string("hiscore_oldschool_ironman", local_68);
        eastl::allocator::allocator(local_60, "EASTL basic_string");
        new (&DAT_10422a9a8) eastl::string("hiscore_oldschool_hardcore_ironman", local_60);
        eastl::allocator::allocator(local_58, "EASTL basic_string");
        new (&DAT_10422a9c8) eastl::string("hiscore_oldschool_deadman", local_58);
        eastl::allocator::allocator(local_50, "EASTL basic_string");
        new (&DAT_10422a9e8) eastl::string("hiscore_oldschool_seasonal", local_50);
        eastl::allocator::allocator(local_48, "EASTL basic_string");
        new (&DAT_10422aa08) eastl::string("hiscore_oldschool_ultimate", local_48);
        eastl::allocator::allocator(local_40, "EASTL basic_string");
        new (&DAT_10422aa28) eastl::string("hiscore_oldschool_tournament", local_40);
        eastl::allocator::allocator(local_38, "EASTL basic_string");
        new (&DAT_10422aa48) eastl::string("oldschool_gim_hiscores", local_38);
        eastl::allocator::allocator(local_30, "EASTL basic_string");
        new (&DAT_10422aa68) eastl::string("oldschool_hardcore_gim_hiscores", local_30);
        eastl::allocator::allocator(local_28, "EASTL basic_string");
        new (&DAT_10422aa88) eastl::string("hiscore_oldschool_fresh_start", local_28);
        ___cxa_atexit(PTR__array_100ee6eb8, &typeToInstance, 4294967296);
    }

} // namespace jag::oldscape
