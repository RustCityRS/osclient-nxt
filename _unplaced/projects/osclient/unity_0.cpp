// _unplaced/projects/osclient/unity_0.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: osclient

#include "_unplaced/classes/jag/TintMode.h"
#include "_unplaced/classes/jag/oldscape/sound/PCMStreamable.h"
#include "libs/graphics/runetek7/animation/Animation.h"
#include "libs/graphics/runetek7/particles/Particle.h"

namespace jag {
    // 0x10017dee0, 192 bytes, inline, placed by nothing (unplaced)
    // shared_ptr_if_not_array<oldscape::ChatLine>::type make_shared<oldscape::ChatLine, int&, eastl::string const&, eastl::string const&, eastl::string const&>(int&, eastl::string const&, eastl::string const&, eastl::string const&)
    jag* jag::make_shared<oldscape::ChatLine, int&, eastl::stringconst&, eastl::stringconst&, eastl::stringconst&>(
        int* param_1, basic_string* param_2, basic_string* param_3, basic_string* param_4) {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_44;
        ChatLine* local_40[2];

        pvVar1 = (void*)aligned_alloc(280, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_40[0] =
                placement_new<oldscape::ChatLine, int&, eastl::stringconst&, eastl::stringconst&, eastl::stringconst&>(
                    (void*)((long)pvVar1 + 32), param_1, param_2, param_3, param_4);
            local_44 = 1;
            prVar2 = placement_new<ref_counter_shared<oldscape::ChatLine>, int, oldscape::ChatLine*&>(pvVar1, &local_44,
                                                                                                      local_40);
            prVar2->~AutoSingleton(local_40[0]);
            prVar2->~AutoSingleton(local_40[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_40[0]);
        }
        return this;
    }

    // 0x1001981a0: the linker folded this into Error::Error(), which has identical code
    TintMode::TintMode();

    // 0x100198d90, 176 bytes, inline, placed by nothing (unplaced)
    // char const* GetErrorString<eastl::string >(eastl::string&, int)
    char* GetErrorString<eastl::string>(basic_string* param_1, int param_2) {
        char* pcVar3;
        char local_228[520];
        long local_20;

        local_20 = *(long*)PTR____stack_chk_guard_100ee9d98;
        if (_strerror_r(param_2, local_228, 512) == 0) {
            param_1->assign(local_228);
        } else {
            eastl::string::clear();
        }
        if (eastl::basic_string<char,
                                eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::empty() !=
            '\0') {
            param_1->reserve(16);
            eastl::string::sprintf((char*)param_1, "Error (%d)", (ulong)(uint)param_2);
        }
        pcVar3 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_20) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return pcVar3;
    }

    // 0x1001a8860, 32 bytes, inline, placed by nothing (unplaced)
    // oldscape::ChatLine* placement_new<oldscape::ChatLine, int&, eastl::string const&, eastl::string const&, eastl::string const&>(void*, int&, eastl::string const&, eastl::string const&, eastl::string const&)
    ChatLine*
    jag::placement_new<oldscape::ChatLine, int&, eastl::stringconst&, eastl::stringconst&, eastl::stringconst&>(
        void* param_1, int* param_2, basic_string* param_3, basic_string* param_4, basic_string* param_5) {
        oldscape::ChatLine::ChatLine(param_1, *param_2, param_3, param_4, param_5);
        return param_1;
    }

    // 0x1001a8880, 32 bytes, inline, placed by nothing (unplaced)
    // ref_counter_shared<oldscape::ChatLine>* placement_new<ref_counter_shared<oldscape::ChatLine>, int, oldscape::ChatLine*&>(void*, int&&, oldscape::ChatLine*&)
    ref_counter_shared*
    placement_new<ref_counter_shared<oldscape::ChatLine>, int, oldscape::ChatLine*&>(void* param_1, int* param_2,
                                                                                     ChatLine** param_3) {
        ref_counter_shared<oldscape::ChatLine>::ref_counter_shared(param_1, (long)*param_2, *param_3);
        return param_1;
    }

    // 0x1001a8e00, 32 bytes, inline, placed by nothing (unplaced)
    // oldscape::rs2lib::social::DisplayName* placement_new<oldscape::rs2lib::social::DisplayName, eastl::string, oldscape::rs2lib::social::NameSpace&>(void*, eastl::string&&, oldscape::rs2lib::social::NameSpace&)
    DisplayName*
    jag::placement_new<oldscape::rs2lib::social::DisplayName, eastl::string, oldscape::rs2lib::social::NameSpace&>(
        void* param_1, basic_string* param_2, NameSpace* param_3) {
        oldscape::rs2lib::social::DisplayName::DisplayName(param_1, param_2, *(undefined4*)param_3);
        return param_1;
    }

    // 0x1001a8e20, 32 bytes, inline, placed by nothing (unplaced)
    // ref_counter_shared<oldscape::rs2lib::social::DisplayName>* placement_new<ref_counter_shared<oldscape::rs2lib::social::DisplayName>, int, oldscape::rs2lib::social::DisplayName*&>(void*, int&&, oldscape::rs2lib::social::DisplayName*&)
    ref_counter_shared* jag::placement_new<ref_counter_shared<oldscape::rs2lib::social::DisplayName>, int,
                                           oldscape::rs2lib::social::DisplayName*&>(void* param_1, int* param_2,
                                                                                    DisplayName** param_3) {
        ref_counter_shared<oldscape::rs2lib::social::DisplayName>::ref_counter_shared(param_1, (long)*param_2,
                                                                                      *param_3);
        return param_1;
    }

    // 0x1001aa6f0, 96 bytes, inline, placed by nothing (unplaced)
    // oldscape::ClientScript* placement_new<oldscape::ClientScript>(void*)
    ClientScript* placement_new<oldscape::ClientScript>(void* param_1) {
        *(undefined8*)((long)param_1 + 144) = 0;
        *(undefined8*)((long)param_1 + 152) = 0;
        *(undefined8*)((long)param_1 + 128) = 0;
        *(undefined8*)((long)param_1 + 136) = 0;
        *(undefined8*)((long)param_1 + 112) = 0;
        *(undefined8*)((long)param_1 + 120) = 0;
        *(undefined8*)((long)param_1 + 96) = 0;
        *(undefined8*)((long)param_1 + 104) = 0;
        *(undefined8*)((long)param_1 + 80) = 0;
        *(undefined8*)((long)param_1 + 88) = 0;
        *(undefined8*)((long)param_1 + 64) = 0;
        *(undefined8*)((long)param_1 + 72) = 0;
        *(undefined8*)((long)param_1 + 48) = 0;
        *(undefined8*)((long)param_1 + 56) = 0;
        *(undefined8*)((long)param_1 + 32) = 0;
        *(undefined8*)((long)param_1 + 40) = 0;
        *(undefined8*)((long)param_1 + 16) = 0;
        *(undefined8*)((long)param_1 + 24) = 0;
        *(undefined8*)param_1 = 0;
        *(undefined8*)((long)param_1 + 8) = 0;
        *(undefined8*)((long)param_1 + 160) = 0;
        oldscape::ClientScript::ClientScript(param_1);
        return param_1;
    }

    // 0x1001aa750, 32 bytes, inline, placed by nothing (unplaced)
    // ref_counter_shared<oldscape::ClientScript>* placement_new<ref_counter_shared<oldscape::ClientScript>, int, oldscape::ClientScript*&>(void*, int&&, oldscape::ClientScript*&)
    ref_counter_shared* jag::placement_new<ref_counter_shared<oldscape::ClientScript>, int, oldscape::ClientScript*&>(
        void* param_1, int* param_2, ClientScript** param_3) {
        ref_counter_shared<oldscape::ClientScript>::ref_counter_shared(param_1, (long)*param_2, *param_3);
        return param_1;
    }

    // 0x1001ae510, 32 bytes, inline, placed by nothing (unplaced)
    // oldscape::rs2lib::IfType* placement_new<oldscape::rs2lib::IfType, int&>(void*, int&)
    /* oldscape::rs2lib::IfType* placement_new<oldscape::rs2lib::IfType, int
   const&>(void*, int const&) */

    IfType* placement_new<oldscape::rs2lib::IfType, int const&>(void* param_1, int* param_2) {
        oldscape::rs2lib::IfType::IfType(param_1, *param_2);
        return param_1;
    }

    // 0x1001ae530, 32 bytes, inline, placed by nothing (unplaced)
    // ref_counter_shared<oldscape::rs2lib::IfType>* placement_new<ref_counter_shared<oldscape::rs2lib::IfType>, int, oldscape::rs2lib::IfType*&>(void*, int&&, oldscape::rs2lib::IfType*&)
    ref_counter_shared*
    jag::placement_new<ref_counter_shared<oldscape::rs2lib::IfType>, int, oldscape::rs2lib::IfType*&>(
        void* param_1, int* param_2, IfType** param_3) {
        ref_counter_shared<oldscape::rs2lib::IfType>::ref_counter_shared(param_1, (long)*param_2, *param_3);
        return param_1;
    }

    // 0x1001b5e10, 96 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init
    void ___cxx_global_var_init() {
        undefined1 local_50[40];
        Vector3T<int> local_28[16];

        math::Matrix33Scaling<float>((math*)local_50, 1.0, 1.0, -1.0);
        math::Vector3T<int>::Vector3T(local_28);
        new (&graphics::MAYA_ANIM_INVERT_MATRIX) math::Matrix44T<float>(local_50, local_28);
    }

    // 0x1001b5e70, 32 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.1
    void ___cxx_global_var_init_1() {
        new (&graphics::WORLD_ORTHOGONAL) math::ColourHSL(-1.5707964, -1.5707964, 0.0);
    }

    // 0x1001b5e90, 96 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.3
    void ___cxx_global_var_init_3() {
        if (*PTR_VIEWRT_LUMINANCE_ADAPTED_100ee4048 == '\0') {
            if (___cxa_guard_acquire(PTR_VIEWRT_LUMINANCE_ADAPTED_100ee4048) != 0) {
                new (PTR_VIEWRT_LUMINANCE_ADAPTED_100ee5578) HashedString("LUMINANCE_ADAPTED");
                ___cxa_guard_release(PTR_VIEWRT_LUMINANCE_ADAPTED_100ee4048);
            }
        }
    }

    // 0x1001b5ef0, 96 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.4
    void ___cxx_global_var_init_4() {
        if (*PTR_VIEWRT_LUMINANCE_ADAPTED_PREVIOUS_100ee4058 == '\0') {
            if (___cxa_guard_acquire(PTR_VIEWRT_LUMINANCE_ADAPTED_PREVIOUS_100ee4058) != 0) {
                new (PTR_VIEWRT_LUMINANCE_ADAPTED_PREVIOUS_100ee5588) HashedString("LUMINANCE_ADAPTED_PREVIOUS");
                ___cxa_guard_release(PTR_VIEWRT_LUMINANCE_ADAPTED_PREVIOUS_100ee4058);
            }
        }
    }

    // 0x1001b5f50, 96 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.6
    void ___cxx_global_var_init_6() {
        if (*PTR_VIEWRT_LUMINANCE_AVERAGE_100ee4050 == '\0') {
            if (___cxa_guard_acquire(PTR_VIEWRT_LUMINANCE_AVERAGE_100ee4050) != 0) {
                new (PTR_VIEWRT_LUMINANCE_AVERAGE_100ee5580) HashedString("VIEWRT_LUMINANCE_AVERAGE");
                ___cxa_guard_release(PTR_VIEWRT_LUMINANCE_AVERAGE_100ee4050);
            }
        }
    }

    // 0x1001b5fb0, 16 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.8
    void ___cxx_global_var_init_8() {
        oldscape::defaults::DefaultsGroup::GRAPHICS = 3;
    }

    // 0x1001b5fc0, 144 bytes, placed by nothing (unplaced)
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
        new (&oldscape::AllFonts) Array<oldscape::Font, eastl::allocator>((initializer_list*)&local_48);
        ___cxa_atexit(PTR__Array_100ee6788, &oldscape::AllFonts, 4294967296);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_18) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x1001b6050, 688 bytes, placed by nothing (unplaced)
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
        new (&oldscape::typeToInstance) eastl::string("hiscore_oldschool", local_70);
        eastl::allocator::allocator(local_68, "EASTL basic_string");
        new (&DAT_103c05538) eastl::string("hiscore_oldschool_ironman", local_68);
        eastl::allocator::allocator(local_60, "EASTL basic_string");
        new (&DAT_103c05558) eastl::string("hiscore_oldschool_hardcore_ironman", local_60);
        eastl::allocator::allocator(local_58, "EASTL basic_string");
        new (&DAT_103c05578) eastl::string("hiscore_oldschool_deadman", local_58);
        eastl::allocator::allocator(local_50, "EASTL basic_string");
        new (&DAT_103c05598) eastl::string("hiscore_oldschool_seasonal", local_50);
        eastl::allocator::allocator(local_48, "EASTL basic_string");
        new (&DAT_103c055b8) eastl::string("hiscore_oldschool_ultimate", local_48);
        eastl::allocator::allocator(local_40, "EASTL basic_string");
        new (&DAT_103c055d8) eastl::string("hiscore_oldschool_tournament", local_40);
        eastl::allocator::allocator(local_38, "EASTL basic_string");
        new (&DAT_103c055f8) eastl::string("oldschool_gim_hiscores", local_38);
        eastl::allocator::allocator(local_30, "EASTL basic_string");
        new (&DAT_103c05618) eastl::string("oldschool_hardcore_gim_hiscores", local_30);
        eastl::allocator::allocator(local_28, "EASTL basic_string");
        new (&DAT_103c05638) eastl::string("hiscore_oldschool_fresh_start", local_28);
        ___cxa_atexit(PTR__array_100ee6eb8, &oldscape::typeToInstance, 4294967296);
    }

    // 0x1001b64a0, 80 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.41
    void ___cxx_global_var_init_41() {
        allocator local_20[8];

        eastl::allocator::allocator(local_20, "EASTL hash_map");
        new (&oldscape::ChatHistory::m_history)
            eastl::hash_map<int,
                            std::unique_ptr<oldscape::ChatHistory::HistoryBuffer,
                                            std::default_delete<oldscape::ChatHistory::HistoryBuffer>>,
                            eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>(local_20);
        ___cxa_atexit(PTR__hash_map_100ee6da0, &oldscape::ChatHistory::m_history, 4294967296);
    }

    // 0x1001b64f0, 80 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.43
    void ___cxx_global_var_init_43() {
        allocator local_20[8];

        eastl::allocator::allocator(local_20, "EASTL hash_map");
        new (&oldscape::ChatHistory::m_historyByUid)
            eastl::hash_map<int, shared_ptr<oldscape::ChatLine>, eastl::hash<int>, eastl::equal_to<int>,
                            eastl::allocator, false>(local_20);
        ___cxa_atexit(PTR__hash_map_100ee6d90, &oldscape::ChatHistory::m_historyByUid, 4294967296);
    }

    // 0x1001b6580, 96 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.51
    void ___cxx_global_var_init_51() {
        allocator local_30[8];
        hash local_28[8];
        equal_to local_20[8];

        eastl::allocator::allocator(local_30, "EASTL hash_map");
        new (&oldscape::ClientInvCache::m_invList)
            eastl::hash_map<int, oldscape::ClientInvCache, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator,
                            false>(32, local_28, local_20, local_30);
        ___cxa_atexit(PTR__hash_map_100ee6d98, &oldscape::ClientInvCache::m_invList, 4294967296);
    }

    // 0x1001b6620, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.57
    void ___cxx_global_var_init_57(undefined8 param_1, _func_decltype_nullptr* param_2) {
        new (&oldscape::g_nullScript) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_2);
        ___cxa_atexit(PTR__shared_ptr_100ee53b8, &oldscape::g_nullScript, 4294967296);
    }

    // 0x1001b6660, 256 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.68
    void ___cxx_global_var_init_68() {
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

    // 0x1001b6760, 1568 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.71
    void ___cxx_global_var_init_71() {
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

    // 0x1001b6d80, 256 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.93
    void ___cxx_global_var_init_93() {
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

    // 0x1001b6f40, 128 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.194
    void ___cxx_global_var_init_194(undefined8 param_1, _func_decltype_nullptr* param_2) {
        long lVar1;

        lVar1 = 0;
        do {
            new ((&oldscape::ReceivePlayerPositions::m_apCache + lVar1))
                shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_2);
            lVar1 = lVar1 + 16;
        } while (lVar1 != 32768);
        ___cxa_atexit(___cxx_global_array_dtor, 0, 4294967296);
    }

    // 0x1001b7000, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.195
    void ___cxx_global_var_init_195() {
        int local_14;

        make_shared<oldscape::PacketJ<Array<unsigned char, BucketAllocatorEASTL>>, int&>(
            (jag*)&oldscape::ReceivePlayerPositions::m_tempP, &local_14);
        ___cxa_atexit(PTR__shared_ptr_100ee5518, &oldscape::ReceivePlayerPositions::m_tempP, 4294967296);
    }

    // 0x1001b70c0, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.206
    void ___cxx_global_var_init_206() {
        new (&oldscape::g_SRStatics) oldscape::ScriptRunnerImpl();
        ___cxa_atexit(PTR__ScriptRunnerImpl_100ee6af0, &oldscape::g_SRStatics, 4294967296);
    }

    // 0x1001b7100, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.244
    void ___cxx_global_var_init_244() {
        undefined* puVar1;

        puVar1 = PTR_LOOK_100ee47d8;
        if (*PTR_LOOK_100ee47d8 == '\0') {
            new (PTR_LOOK_100ee66e0) math::ColourHSL(0.0, 0.0, 1.0);
            *puVar1 = 1;
        }
    }

    // 0x1001b7140, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.245
    void ___cxx_global_var_init_245() {
        undefined* puVar1;

        puVar1 = PTR_UP_100ee47c8;
        if (*PTR_UP_100ee47c8 == '\0') {
            new (PTR_UP_100ee66d0) math::ColourHSL(0.0, 1.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x1001b7180, 48 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.246
    void ___cxx_global_var_init_246() {
        undefined* puVar1;

        puVar1 = PTR_ZERO_100ee4790;
        if (*PTR_ZERO_100ee4790 == '\0') {
            new (PTR_ZERO_100ee6698) math::Point<float>(0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x1001b71b0, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.247
    void ___cxx_global_var_init_247() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee49f0;
        if (*PTR_m_pSingleton_100ee49f0 == '\0') {
            ___cxa_atexit(
                std::unique_ptr<hardware::HardwareInfo, std::default_delete<hardware::HardwareInfo>>::~unique_ptr,
                PTR_m_pSingleton_100ee6c60, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1001b71f0, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.248
    void ___cxx_global_var_init_248() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee4298;
        if (*PTR_m_pSingleton_100ee4298 == '\0') {
            ___cxa_atexit(std::unique_ptr<ThreadPoolSingleton, std::default_delete<ThreadPoolSingleton>>::~unique_ptr,
                          PTR_m_pSingleton_100ee5948, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1001b7230, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.249
    void ___cxx_global_var_init_249() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee42a0;
        if (*PTR_m_pSingleton_100ee42a0 == '\0') {
            ___cxa_atexit(
                std::unique_ptr<ShaderThreadPoolSingleton, std::default_delete<ShaderThreadPoolSingleton>>::~unique_ptr,
                PTR_m_pSingleton_100ee5950, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1001b7270, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.250
    void ___cxx_global_var_init_250() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee4518;
        if (*PTR_m_mutex_100ee4518 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5df0, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1001b72b0, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.251
    void ___cxx_global_var_init_251() {
        undefined* puVar1;

        puVar1 = PTR_ZERO_100ee4800;
        if (*PTR_ZERO_100ee4800 == '\0') {
            new (PTR_ZERO_100ee6708) ImVec4(0.0, 0.0, 0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x1001b72f0, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.252
    void ___cxx_global_var_init_252() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee49c8;
        if (*PTR_m_pSingleton_100ee49c8 == '\0') {
            ___cxa_atexit(std::unique_ptr<render::ShaderProgramManager,
                                          std::default_delete<render::ShaderProgramManager>>::~unique_ptr,
                          PTR_m_pSingleton_100ee6c38, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1001b7330, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.253
    void ___cxx_global_var_init_253() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee49d0;
        if (*PTR_m_pSingleton_100ee49d0 == '\0') {
            ___cxa_atexit(std::unique_ptr<render::VertexDeclarationManager,
                                          std::default_delete<render::VertexDeclarationManager>>::~unique_ptr,
                          PTR_m_pSingleton_100ee6c40, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1001b7370, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.254
    void ___cxx_global_var_init_254() {
        undefined* puVar1;

        puVar1 = PTR_ZERO_100ee47e0;
        if (*PTR_ZERO_100ee47e0 == '\0') {
            new (PTR_ZERO_100ee66e8) math::ColourHSL(0.0, 0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x1001b73b0, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.255
    void ___cxx_global_var_init_255() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee49a0;
        if (*PTR_m_pSingleton_100ee49a0 == '\0') {
            ___cxa_atexit(std::unique_ptr<render::RenderDevice, std::default_delete<render::RenderDevice>>::~unique_ptr,
                          PTR_m_pSingleton_100ee6c10, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1001b73f0, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.256
    void ___cxx_global_var_init_256() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee45b0;
        if (*PTR_m_mutex_100ee45b0 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5f20, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1001b7430, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.257
    void ___cxx_global_var_init_257() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee49d8;
        if (*PTR_m_pSingleton_100ee49d8 == '\0') {
            ___cxa_atexit(std::unique_ptr<graphics::AnimationManager,
                                          std::default_delete<graphics::AnimationManager>>::~unique_ptr,
                          PTR_m_pSingleton_100ee6c48, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1001b7470, 96 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.258
    void ___cxx_global_var_init_258() {
        undefined* puVar1;

        puVar1 = PTR_ZERO_100ee4820;
        if (*PTR_ZERO_100ee4820 == '\0') {
            new (PTR_ZERO_100ee6728)
                math::Matrix44T<float>(0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x1001b74d0, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.259
    void ___cxx_global_var_init_259() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee45d8;
        if (*PTR_m_mutex_100ee45d8 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5f70, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1001b7510, 96 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.260
    void ___cxx_global_var_init_260() {
        undefined* puVar1;

        puVar1 = PTR_IDENTITY_100ee4828;
        if (*PTR_IDENTITY_100ee4828 == '\0') {
            new (PTR_IDENTITY_100ee6730)
                math::Matrix44T<float>(1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0);
            *puVar1 = 1;
        }
    }

    // 0x1001b7570, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.261
    void ___cxx_global_var_init_261() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee4590;
        if (*PTR_m_mutex_100ee4590 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5ee0, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1001b75b0, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.262
    void ___cxx_global_var_init_262() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee4290;
        if (*PTR_m_pSingleton_100ee4290 == '\0') {
            ___cxa_atexit(std::unique_ptr<graphicutils::BatchDestroyManager,
                                          std::default_delete<graphicutils::BatchDestroyManager>>::~unique_ptr,
                          PTR_m_pSingleton_100ee5940, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1001b75f0, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.263
    void ___cxx_global_var_init_263() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee4520;
        if (*PTR_m_mutex_100ee4520 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5e00, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1001b7630, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.264
    void ___cxx_global_var_init_264() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee4500;
        if (*PTR_m_mutex_100ee4500 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5dc0, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1001b7670, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.265
    void ___cxx_global_var_init_265() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee4960;
        if (*PTR_m_pSingleton_100ee4960 == '\0') {
            ___cxa_atexit(std::unique_ptr<SecureRandom, std::default_delete<SecureRandom>>::~unique_ptr,
                          PTR_m_pSingleton_100ee6bd0, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1001b76b0, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.266
    void ___cxx_global_var_init_266() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee42a8;
        if (*PTR_m_pSingleton_100ee42a8 == '\0') {
            ___cxa_atexit(std::unique_ptr<hal::Haptics, std::default_delete<hal::Haptics>>::~unique_ptr,
                          PTR_m_pSingleton_100ee5958, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1001b7730, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.268
    void ___cxx_global_var_init_268(undefined8 param_1, _func_decltype_nullptr* param_2) {
        undefined* puVar1;
        undefined* puVar2;

        puVar2 = PTR_NullCacheObj_100ee6980;
        puVar1 = PTR_NullCacheObj_100ee4930;
        if (*PTR_NullCacheObj_100ee4930 == '\0') {
            new (PTR_NullCacheObj_100ee6980) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_2);
            ___cxa_atexit(PTR__shared_ptr_100ee5430, puVar2, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1001b7770, 149 bytes, placed by nothing (unplaced)
    // __GLOBAL__sub_I_unity_0_cxx.cxx
    void __GLOBAL__sub_I_unity_0_cxx_cxx() {
        undefined8 uVar1;

        uVar1 = _objc_autoreleasePoolPush();
        ___cxx_global_var_init();
        ___cxx_global_var_init_1();
        ___cxx_global_var_init_8();
        ___cxx_global_var_init_9();
        ___cxx_global_var_init_10();
        ___cxx_global_var_init_31();
        ___cxx_global_var_init_33();
        ___cxx_global_var_init_35();
        ___cxx_global_var_init_37();
        ___cxx_global_var_init_39();
        ___cxx_global_var_init_41();
        ___cxx_global_var_init_43();
        ___cxx_global_var_init_44();
        ___cxx_global_var_init_51();
        ___cxx_global_var_init_55();
        ___cxx_global_var_init_57();
        ___cxx_global_var_init_185();
        ___cxx_global_var_init_192();
        ___cxx_global_var_init_193();
        ___cxx_global_var_init_194();
        ___cxx_global_var_init_195();
        ___cxx_global_var_init_196();
        ___cxx_global_var_init_197();
        ___cxx_global_var_init_206();
        _objc_autoreleasePoolPop(uVar1);
    }

} // namespace jag

namespace jag::graphics {
    // 0x103c054b0, 64 bytes, __bss; zero-initialised
    MAYA_ANIM_INVERT_MATRIX;

    // 0x103c054f0, 12 bytes, __bss; zero-initialised
    WORLD_ORTHOGONAL;

    // 0x1001981a0: the linker folded this into Error::Error(), which has identical code
    RenderPassBitSet::Clear();

    // 0x1001981a0: the linker folded this into Error::Error(), which has identical code
    RenderPassBitSet::RenderPassBitSet();

    // 0x1001981a0: the linker folded this into Error::Error(), which has identical code
    ParticleModuleUpdateState::ParticleModuleUpdateState();

    // 0x10019c120: the linker folded this into eastl::rbtree_node<shared_ptr<Js5WorkerRequestMessage> >::~rbtree_node(), which has identical code
    AnimationInfo::~AnimationInfo();

    // 0x10019c130: the linker folded this into eastl::rbtree_node<shared_ptr<Js5WorkerRequestMessage> >::~rbtree_node(), which has identical code
    AnimationInfo::~AnimationInfo();

} // namespace jag::graphics

namespace jag::oldscape {
    // 0x100fa67a8, 141864 bytes, __common; set at startup by ___cxx_global_var_init.206
    ScriptRunnerImpl g_SRStatics = ScriptRunnerImpl();

    // 0x103c05500, 24 bytes, __bss; zero-initialised
    AllFonts;

    // 0x103c05518, 320 bytes, __bss; set at startup by ___cxx_global_var_init.10
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

    // 0x103c05688, 16 bytes, __bss; set at startup by ___cxx_global_var_init.57
    shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata> g_nullScript;

} // namespace jag::oldscape

namespace jag::render {
    // 0x1001981a0: the linker folded this into Error::Error(), which has identical code
    TextureFormatBitSet::Clear();

    // 0x1001981a0: the linker folded this into Error::Error(), which has identical code
    TextureFormatBitSet::TextureFormatBitSet();

} // namespace jag::render

namespace jag::oldscape::defaults {
    // 0x103c054fc, 4 bytes, __bss; zero-initialised
    DefaultsGroup::GRAPHICS;

} // namespace jag::oldscape::defaults

namespace jag::hal::audio::decoders::vorbis {
    // 0x100198190: the linker folded this into oldscape::PacketJ<Array<unsigned char, eastl::allocator> >::~PacketJ(), which has identical code
    VorbisDecoderPacket::~VorbisDecoderPacket();

} // namespace jag::hal::audio::decoders::vorbis

namespace jag::oldscape::sound {
    // 0x1001981a0: the linker folded this into Error::Error(), which has identical code
    PCMStreamable::PCMStreamable();

} // namespace jag::oldscape::sound

// 0x1001b6fc0, 64 bytes, placed by nothing (unplaced)
// ___cxx_global_array_dtor
void ___cxx_global_array_dtor() {
    long lVar1;

    lVar1 = 32752;
    do {
        ((&jag::oldscape::ReceivePlayerPositions::m_apCache + lVar1))->~shared_ptr();
        lVar1 = lVar1 + -16;
    } while (lVar1 != -16);
}
