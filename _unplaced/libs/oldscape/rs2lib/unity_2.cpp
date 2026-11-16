// _unplaced/libs/oldscape/rs2lib/unity_2.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.oldscape.rs2lib

namespace jag::oldscape::rs2lib {
    // 0x100fcf958, 16 bytes, __common; set at startup by ___cxx_global_var_init.64
    shared_ptr<worldmap::WorldmapAreaMetadata> NULL_IFTYPE;

    // 0x100fcf968, 16 bytes, __common; set at startup by ___cxx_global_var_init.66
    shared_ptr<worldmap::WorldmapAreaMetadata> pix32_null;

    // 0x100fcf978, 16 bytes, __common; set at startup by ___cxx_global_var_init.67
    shared_ptr<worldmap::WorldmapAreaMetadata> pixfont_generic_null;

    // 0x100fcf988, 16 bytes, __common; set at startup by ___cxx_global_var_init.68
    shared_ptr<worldmap::WorldmapAreaMetadata> ifgraphic_null;

    // 0x1042294b8, 16 bytes, __bss; set at startup by ___cxx_global_var_init.65
    shared_ptr<worldmap::WorldmapAreaMetadata> NULL_GRAPHIC;

    // 0x1002265b0, 96 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.24
    void ___cxx_global_var_init_24() {
        undefined1 local_50[40];
        Vector3T<int> local_28[16];

        jag::math::Matrix33Scaling<float>((math*)local_50, 1.0, 1.0, -1.0);
        jag::math::Vector3T<int>::Vector3T(local_28);
        new (&jag::graphics::MAYA_ANIM_INVERT_MATRIX) jag::math::Matrix44T<float>(local_50, local_28);
    }

    // 0x100226610, 32 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.25
    void ___cxx_global_var_init_25() {
        new (&jag::graphics::WORLD_ORTHOGONAL) jag::math::ColourHSL(-1.5707964, -1.5707964, 0.0);
    }

    // 0x100226630, 96 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.27
    void ___cxx_global_var_init_27() {
        if (*PTR_VIEWRT_LUMINANCE_ADAPTED_100ee4048 == '\0') {
            if (___cxa_guard_acquire(PTR_VIEWRT_LUMINANCE_ADAPTED_100ee4048) != 0) {
                new (PTR_VIEWRT_LUMINANCE_ADAPTED_100ee5578) HashedString("LUMINANCE_ADAPTED");
                ___cxa_guard_release(PTR_VIEWRT_LUMINANCE_ADAPTED_100ee4048);
            }
        }
    }

    // 0x100226690, 96 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.29
    void ___cxx_global_var_init_29() {
        if (*PTR_VIEWRT_LUMINANCE_ADAPTED_PREVIOUS_100ee4058 == '\0') {
            if (___cxa_guard_acquire(PTR_VIEWRT_LUMINANCE_ADAPTED_PREVIOUS_100ee4058) != 0) {
                new (PTR_VIEWRT_LUMINANCE_ADAPTED_PREVIOUS_100ee5588) HashedString("LUMINANCE_ADAPTED_PREVIOUS");
                ___cxa_guard_release(PTR_VIEWRT_LUMINANCE_ADAPTED_PREVIOUS_100ee4058);
            }
        }
    }

    // 0x1002266f0, 96 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.31
    void ___cxx_global_var_init_31() {
        if (*PTR_VIEWRT_LUMINANCE_AVERAGE_100ee4050 == '\0') {
            if (___cxa_guard_acquire(PTR_VIEWRT_LUMINANCE_AVERAGE_100ee4050) != 0) {
                new (PTR_VIEWRT_LUMINANCE_AVERAGE_100ee5580) HashedString("VIEWRT_LUMINANCE_AVERAGE");
                ___cxa_guard_release(PTR_VIEWRT_LUMINANCE_AVERAGE_100ee4050);
            }
        }
    }

    // 0x100226750, 16 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.33
    void ___cxx_global_var_init_33() {
        defaults::DefaultsGroup::GRAPHICS = 3;
    }

    // 0x100226760, 144 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.34
    void ___cxx_global_var_init_34() {
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

    // 0x1002267f0, 688 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.35
    void ___cxx_global_var_init_35() {
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
        new (&DAT_104229398) eastl::string("hiscore_oldschool_ironman", local_68);
        eastl::allocator::allocator(local_60, "EASTL basic_string");
        new (&DAT_1042293b8) eastl::string("hiscore_oldschool_hardcore_ironman", local_60);
        eastl::allocator::allocator(local_58, "EASTL basic_string");
        new (&DAT_1042293d8) eastl::string("hiscore_oldschool_deadman", local_58);
        eastl::allocator::allocator(local_50, "EASTL basic_string");
        new (&DAT_1042293f8) eastl::string("hiscore_oldschool_seasonal", local_50);
        eastl::allocator::allocator(local_48, "EASTL basic_string");
        new (&DAT_104229418) eastl::string("hiscore_oldschool_ultimate", local_48);
        eastl::allocator::allocator(local_40, "EASTL basic_string");
        new (&DAT_104229438) eastl::string("hiscore_oldschool_tournament", local_40);
        eastl::allocator::allocator(local_38, "EASTL basic_string");
        new (&DAT_104229458) eastl::string("oldschool_gim_hiscores", local_38);
        eastl::allocator::allocator(local_30, "EASTL basic_string");
        new (&DAT_104229478) eastl::string("oldschool_hardcore_gim_hiscores", local_30);
        eastl::allocator::allocator(local_28, "EASTL basic_string");
        new (&DAT_104229498) eastl::string("hiscore_oldschool_fresh_start", local_28);
        ___cxa_atexit(PTR__array_100ee6eb8, &typeToInstance, 4294967296);
    }

    // 0x100226aa0, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.50
    void ___cxx_global_var_init_50() {
        new (&IfType::m_list) Array<Array<shared_ptr<IfType>, eastl::allocator>, eastl::allocator>();
        ___cxa_atexit(PTR__Array_100ee6740, &IfType::m_list, 4294967296);
    }

    // 0x100226b20, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.52
    void ___cxx_global_var_init_52() {
        new (&IfType::m_spriteCache)
            LRUHashCache<graphics::Pix32, 200ul, 201ul, false, unsigned long long>(200, "IfSpr");
        ___cxa_atexit(PTR__LRUHashCache_100ee58d0, &IfType::m_spriteCache, 4294967296);
    }

    // 0x100226b60, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.54
    void ___cxx_global_var_init_54() {
        new (&IfType::m_modelCache)
            LRUHashCache<dash3d::ModelLit, 50ul, 51ul, false, unsigned long long>(50, "IfModel");
        ___cxa_atexit(PTR__LRUHashCache_100ee5870, &IfType::m_modelCache, 4294967296);
    }

    // 0x100226ba0, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.56
    void ___cxx_global_var_init_56() {
        new (&IfType::m_fontCache)
            LRUHashCache<jstring::PixfontGeneric, 20ul, 21ul, false, unsigned long long>(20, "IfFont");
        ___cxa_atexit(PTR__LRUHashCache_100ee58b0, &IfType::m_fontCache, 4294967296);
    }

    // 0x100226be0, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.58
    void ___cxx_global_var_init_58() {
        new (&IfType::m_maskCache) LRUHashCache<InterfaceGraphicMask, 8ul, 9ul, false, unsigned long long>(8, "IfMask");
        ___cxa_atexit(PTR__LRUHashCache_100ee58a0, &IfType::m_maskCache, 4294967296);
    }

    // 0x100226c20, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.60
    void ___cxx_global_var_init_60() {
        new (&IfType::m_httpSpriteCacheRaw)
            LRUHashCache<HttpSpriteData, 10ul, 11ul, false, eastl::string>(10, "IfHttpSprRaw");
        ___cxa_atexit(PTR__LRUHashCache_100ee5890, &IfType::m_httpSpriteCacheRaw, 4294967296);
    }

    // 0x100226c60, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.62
    void ___cxx_global_var_init_62() {
        new (&IfType::m_httpSpriteCacheProcessed)
            LRUHashCache<graphics::Pix32, 10ul, 11ul, false, eastl::basic_string<char, BucketAllocatorEASTL>>(
                10, "IfHttpSprProcessed");
        ___cxa_atexit(PTR__LRUHashCache_100ee58c0, &IfType::m_httpSpriteCacheProcessed, 4294967296);
    }

    // 0x100226ca0, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.64
    void ___cxx_global_var_init_64(undefined8 param_1, _func_decltype_nullptr* param_2) {
        new (&NULL_IFTYPE) shared_ptr<worldmap::WorldmapAreaMetadata>(param_2);
        ___cxa_atexit(PTR__shared_ptr_100ee5508, &NULL_IFTYPE, 4294967296);
    }

    // 0x100226ce0, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.65
    void ___cxx_global_var_init_65(undefined8 param_1, _func_decltype_nullptr* param_2) {
        new (&NULL_GRAPHIC) shared_ptr<worldmap::WorldmapAreaMetadata>(param_2);
        ___cxa_atexit(PTR__shared_ptr_100ee5530, &NULL_GRAPHIC, 4294967296);
    }

    // 0x100226d20, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.66
    void ___cxx_global_var_init_66(undefined8 param_1, _func_decltype_nullptr* param_2) {
        new (&pix32_null) shared_ptr<worldmap::WorldmapAreaMetadata>(param_2);
        ___cxa_atexit(PTR__shared_ptr_100ee5530, &pix32_null, 4294967296);
    }

    // 0x100226d60, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.67
    void ___cxx_global_var_init_67(undefined8 param_1, _func_decltype_nullptr* param_2) {
        new (&pixfont_generic_null) shared_ptr<worldmap::WorldmapAreaMetadata>(param_2);
        ___cxa_atexit(PTR__shared_ptr_100ee5520, &pixfont_generic_null, 4294967296);
    }

    // 0x100226da0, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.68
    void ___cxx_global_var_init_68(undefined8 param_1, _func_decltype_nullptr* param_2) {
        new (&ifgraphic_null) shared_ptr<worldmap::WorldmapAreaMetadata>(param_2);
        ___cxa_atexit(PTR__shared_ptr_100ee5500, &ifgraphic_null, 4294967296);
    }

    // 0x100226e60, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.83
    void ___cxx_global_var_init_83() {
        new (&PlayerModel::m_modelCache)
            LRUHashCache<dash3d::ModelLit, 260ul, 261ul, false, unsigned long long>(260, "PlayerModel");
        ___cxa_atexit(PTR__LRUHashCache_100ee5850, &PlayerModel::m_modelCache, 4294967296);
    }

    // 0x1002272b0, 48 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.96
    void ___cxx_global_var_init_96() {
        std::function<bool(ActiveOffersReply::ActiveOffer_const&,
                           ActiveOffersReply::ActiveOffer_const&)>::function<ActiveOffersReply::__4, void>();
        ___cxa_atexit(PTR__function_100ee6f10, &ActiveOffersReply::compareByOfferMade, 4294967296);
    }

    // 0x1002272e0, 48 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.97
    void ___cxx_global_var_init_97() {
        std::function<bool(ActiveOffersReply::ActiveOffer_const&,
                           ActiveOffersReply::ActiveOffer_const&)>::function<ActiveOffersReply::__5, void>();
        ___cxa_atexit(PTR__function_100ee6f10, &ActiveOffersReply::compareByNodeId, 4294967296);
    }

    // 0x100227310, 48 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.98
    void ___cxx_global_var_init_98() {
        std::function<bool(ActiveOffersReply::ActiveOffer_const&,
                           ActiveOffersReply::ActiveOffer_const&)>::function<ActiveOffersReply::__6, void>();
        ___cxa_atexit(PTR__function_100ee6f10, &ActiveOffersReply::compareByPrice, 4294967296);
    }

    // 0x100227340, 48 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.99
    void ___cxx_global_var_init_99() {
        std::function<bool(ActiveOffersReply::ActiveOffer_const&,
                           ActiveOffersReply::ActiveOffer_const&)>::function<ActiveOffersReply::__7, void>();
        ___cxa_atexit(PTR__function_100ee6f10, &ActiveOffersReply::compareByDisplayName, 4294967296);
    }

    // 0x100227370, 48 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.100
    void ___cxx_global_var_init_100() {
        std::function<bool(ActiveOffersReply::ActiveOffer_const&,
                           ActiveOffersReply::ActiveOffer_const&)>::function<ActiveOffersReply::__8, void>();
        ___cxa_atexit(PTR__function_100ee6f10, &ActiveOffersReply::compareByCount, 4294967296);
    }

} // namespace jag::oldscape::rs2lib

namespace jag::oldscape {
    // 0x100d3fbf0, 128 bytes, __const
    MASK_LOOKUP = {
        1,        3,        7,         15,        31,        63,         127,        255,
        511,      1023,     2047,      4095,      8191,      16383,      32767,      65535,
        131071,   262143,   524287,    1048575,   2097151,   4194303,    8388607,    16777215,
        33554431, 67108863, 134217727, 268435455, 536870911, 1073741823, 2147483647, -1,
    };

    // 0x104229360, 24 bytes, __bss; zero-initialised
    AllFonts;

    // 0x104229378, 320 bytes, __bss; set at startup by ___cxx_global_var_init.35
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

namespace jag::graphics {
    // 0x104229310, 64 bytes, __bss; zero-initialised
    MAYA_ANIM_INVERT_MATRIX;

    // 0x104229350, 12 bytes, __bss; zero-initialised
    WORLD_ORTHOGONAL;

} // namespace jag::graphics

namespace jag::oldscape::defaults {
    // 0x10422935c, 4 bytes, __bss; zero-initialised
    DefaultsGroup::GRAPHICS;

} // namespace jag::oldscape::defaults
