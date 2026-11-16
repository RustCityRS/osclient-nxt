// _unplaced/libs/oldscape/rs2lib/unity_2.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.oldscape.rs2lib

namespace jag::oldscape::rs2lib {
    // 0x100fcf958, set at startup by ___cxx_global_var_init.64
    shared_ptr<worldmap::WorldmapAreaMetadata> NULL_IFTYPE = shared_ptr<worldmap::WorldmapAreaMetadata>();

    // 0x100fcf968, set at startup by ___cxx_global_var_init.66
    shared_ptr<worldmap::WorldmapAreaMetadata> pix32_null = shared_ptr<worldmap::WorldmapAreaMetadata>();

    // 0x100fcf978, set at startup by ___cxx_global_var_init.67
    shared_ptr<worldmap::WorldmapAreaMetadata> pixfont_generic_null = shared_ptr<worldmap::WorldmapAreaMetadata>();

    // 0x100fcf988, set at startup by ___cxx_global_var_init.68
    shared_ptr<worldmap::WorldmapAreaMetadata> ifgraphic_null = shared_ptr<worldmap::WorldmapAreaMetadata>();

    // 0x1042294b8, set at startup by ___cxx_global_var_init.65
    shared_ptr<worldmap::WorldmapAreaMetadata> NULL_GRAPHIC = shared_ptr<worldmap::WorldmapAreaMetadata>();

    // 0x1002265b0
    void ___cxx_global_var_init_24(void) {
        Matrix33T<float> local_50;

        jag::math::Matrix33Scaling<float>(1.0, 1.0, -1.0);
        Vector3T<int> local_28;
        new ((Matrix44T<float>*)&jag::graphics::MAYA_ANIM_INVERT_MATRIX)
            jag::math::Matrix44T<float>(local_50, local_28);
    }

    // 0x100226610
    void ___cxx_global_var_init_25(void) {
        new ((ColourHSL*)&jag::graphics::WORLD_ORTHOGONAL) jag::math::ColourHSL(-1.5707964, -1.5707964, 0.0);
    }

    // 0x100226630
    void ___cxx_global_var_init_27(void) {
        if (*PTR_VIEWRT_LUMINANCE_ADAPTED_100ee4048 == '\0') {
            if (___cxa_guard_acquire(PTR_VIEWRT_LUMINANCE_ADAPTED_100ee4048) != 0) {
                new (PTR_VIEWRT_LUMINANCE_ADAPTED_100ee5578) HashedString("LUMINANCE_ADAPTED");
                ___cxa_guard_release(PTR_VIEWRT_LUMINANCE_ADAPTED_100ee4048);
            }
        }
    }

    // 0x100226690
    void ___cxx_global_var_init_29(void) {
        if (*PTR_VIEWRT_LUMINANCE_ADAPTED_PREVIOUS_100ee4058 == '\0') {
            if (___cxa_guard_acquire(PTR_VIEWRT_LUMINANCE_ADAPTED_PREVIOUS_100ee4058) != 0) {
                new (PTR_VIEWRT_LUMINANCE_ADAPTED_PREVIOUS_100ee5588) HashedString("LUMINANCE_ADAPTED_PREVIOUS");
                ___cxa_guard_release(PTR_VIEWRT_LUMINANCE_ADAPTED_PREVIOUS_100ee4058);
            }
        }
    }

    // 0x1002266f0
    void ___cxx_global_var_init_31(void) {
        if (*PTR_VIEWRT_LUMINANCE_AVERAGE_100ee4050 == '\0') {
            if (___cxa_guard_acquire(PTR_VIEWRT_LUMINANCE_AVERAGE_100ee4050) != 0) {
                new (PTR_VIEWRT_LUMINANCE_AVERAGE_100ee5580) HashedString("VIEWRT_LUMINANCE_AVERAGE");
                ___cxa_guard_release(PTR_VIEWRT_LUMINANCE_AVERAGE_100ee4050);
            }
        }
    }

    // 0x100226750
    void ___cxx_global_var_init_33(void) {
        defaults::DefaultsGroup::GRAPHICS = 3;
    }

    // 0x100226760
    void ___cxx_global_var_init_34(void) {
        uint64_t local_28 = 21474836484;
        mach_header* local_38 = &__mh_execute_header;
        uint64_t uStack_30 = 12884901890;
        uint64_t local_40 = 6;
        new ((Array<Font>*)&AllFonts) Array<Font>(&local_38);
        ___cxa_atexit(PTR__Array_100ee6788, &AllFonts, 4294967296);
    }

    // 0x100226aa0
    void ___cxx_global_var_init_50(void) {
        new ((Array<Array<shared_ptr<IfType>>>*)&IfType::m_list) Array<Array<shared_ptr<IfType>>>();
        ___cxa_atexit(PTR__Array_100ee6740, &IfType::m_list, 4294967296);
    }

    // 0x100226b20
    void ___cxx_global_var_init_52(void) {
        new ((LRUHashCache<graphics::Pix32, 200ul, 201ul, false, unsigned long long>*)&IfType::m_spriteCache)
            LRUHashCache<graphics::Pix32, 200ul, 201ul, false, unsigned long long>(200, "IfSpr");
        ___cxa_atexit(PTR__LRUHashCache_100ee58d0, &IfType::m_spriteCache, 4294967296);
    }

    // 0x100226b60
    void ___cxx_global_var_init_54(void) {
        new ((LRUHashCache<dash3d::ModelLit, 50ul, 51ul, false, unsigned long long>*)&IfType::m_modelCache)
            LRUHashCache<dash3d::ModelLit, 50ul, 51ul, false, unsigned long long>(50, "IfModel");
        ___cxa_atexit(PTR__LRUHashCache_100ee5870, &IfType::m_modelCache, 4294967296);
    }

    // 0x100226ba0
    void ___cxx_global_var_init_56(void) {
        new ((LRUHashCache<jstring::PixfontGeneric, 20ul, 21ul, false, unsigned long long>*)&IfType::m_fontCache)
            LRUHashCache<jstring::PixfontGeneric, 20ul, 21ul, false, unsigned long long>(20, "IfFont");
        ___cxa_atexit(PTR__LRUHashCache_100ee58b0, &IfType::m_fontCache, 4294967296);
    }

    // 0x100226be0
    void ___cxx_global_var_init_58(void) {
        new ((LRUHashCache<InterfaceGraphicMask, 8ul, 9ul, false, unsigned long long>*)&IfType::m_maskCache)
            LRUHashCache<InterfaceGraphicMask, 8ul, 9ul, false, unsigned long long>(8, "IfMask");
        ___cxa_atexit(PTR__LRUHashCache_100ee58a0, &IfType::m_maskCache, 4294967296);
    }

    // 0x100226c20
    void ___cxx_global_var_init_60(void) {
        new ((LRUHashCache<HttpSpriteData, 10ul, 11ul, false, eastl::string>*)&IfType::m_httpSpriteCacheRaw)
            LRUHashCache<HttpSpriteData, 10ul, 11ul, false, eastl::string>(10, "IfHttpSprRaw");
        ___cxa_atexit(PTR__LRUHashCache_100ee5890, &IfType::m_httpSpriteCacheRaw, 4294967296);
    }

    // 0x100226c60
    void ___cxx_global_var_init_62(void) {
        new ((LRUHashCache<graphics::Pix32, 10ul, 11ul, false,
                           eastl::basic_string<char, BucketAllocatorEASTL>>*)&IfType::m_httpSpriteCacheProcessed)
            LRUHashCache<graphics::Pix32, 10ul, 11ul, false, eastl::basic_string<char, BucketAllocatorEASTL>>(
                10, "IfHttpSprProcessed");
        ___cxa_atexit(PTR__LRUHashCache_100ee58c0, &IfType::m_httpSpriteCacheProcessed, 4294967296);
    }

    // 0x100226e60
    void ___cxx_global_var_init_83(void) {
        new ((LRUHashCache<dash3d::ModelLit, 260ul, 261ul, false, unsigned long long>*)&PlayerModel::m_modelCache)
            LRUHashCache<dash3d::ModelLit, 260ul, 261ul, false, unsigned long long>(260, "PlayerModel");
        ___cxa_atexit(PTR__LRUHashCache_100ee5850, &PlayerModel::m_modelCache, 4294967296);
    }

    // 0x1002272b0
    void ___cxx_global_var_init_96(
        function<bool(ActiveOffersReply::ActiveOffer const&, ActiveOffersReply::ActiveOffer const&)>* param_1,
        __4* param_2) {
        std::function<bool(ActiveOffersReply::ActiveOffer const&,
                           ActiveOffersReply::ActiveOffer const&)>::function<ActiveOffersReply::__4, void>(param_1,
                                                                                                           param_2);
        ___cxa_atexit(PTR__function_100ee6f10, &ActiveOffersReply::compareByOfferMade, 4294967296);
    }

    // 0x1002272e0
    void ___cxx_global_var_init_97(
        function<bool(ActiveOffersReply::ActiveOffer const&, ActiveOffersReply::ActiveOffer const&)>* param_1,
        __5* param_2) {
        std::function<bool(ActiveOffersReply::ActiveOffer const&,
                           ActiveOffersReply::ActiveOffer const&)>::function<ActiveOffersReply::__5, void>(param_1,
                                                                                                           param_2);
        ___cxa_atexit(PTR__function_100ee6f10, &ActiveOffersReply::compareByNodeId, 4294967296);
    }

    // 0x100227310
    void ___cxx_global_var_init_98(
        function<bool(ActiveOffersReply::ActiveOffer const&, ActiveOffersReply::ActiveOffer const&)>* param_1,
        __6* param_2) {
        std::function<bool(ActiveOffersReply::ActiveOffer const&,
                           ActiveOffersReply::ActiveOffer const&)>::function<ActiveOffersReply::__6, void>(param_1,
                                                                                                           param_2);
        ___cxa_atexit(PTR__function_100ee6f10, &ActiveOffersReply::compareByPrice, 4294967296);
    }

    // 0x100227340
    void ___cxx_global_var_init_99(
        function<bool(ActiveOffersReply::ActiveOffer const&, ActiveOffersReply::ActiveOffer const&)>* param_1,
        __7* param_2) {
        std::function<bool(ActiveOffersReply::ActiveOffer const&,
                           ActiveOffersReply::ActiveOffer const&)>::function<ActiveOffersReply::__7, void>(param_1,
                                                                                                           param_2);
        ___cxa_atexit(PTR__function_100ee6f10, &ActiveOffersReply::compareByDisplayName, 4294967296);
    }

    // 0x100227370
    void ___cxx_global_var_init_100(
        function<bool(ActiveOffersReply::ActiveOffer const&, ActiveOffersReply::ActiveOffer const&)>* param_1,
        __8* param_2) {
        std::function<bool(ActiveOffersReply::ActiveOffer const&,
                           ActiveOffersReply::ActiveOffer const&)>::function<ActiveOffersReply::__8, void>(param_1,
                                                                                                           param_2);
        ___cxa_atexit(PTR__function_100ee6f10, &ActiveOffersReply::compareByCount, 4294967296);
    }

} // namespace jag::oldscape::rs2lib

namespace jag::oldscape {
    // 0x100d3fbf0
    int32_t MASK_LOOKUP[32] = {
        1,        3,        7,         15,        31,        63,         127,        255,
        511,      1023,     2047,      4095,      8191,      16383,      32767,      65535,
        131071,   262143,   524287,    1048575,   2097151,   4194303,    8388607,    16777215,
        33554431, 67108863, 134217727, 268435455, 536870911, 1073741823, 2147483647, -1,
    };

    // 0x104229360
    uint8_t AllFonts[24];

    // 0x104229378, set at startup by ___cxx_global_var_init.35
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
    // 0x104229310
    uint8_t MAYA_ANIM_INVERT_MATRIX[64];

    // 0x104229350
    uint8_t WORLD_ORTHOGONAL[12];

} // namespace jag::graphics

namespace jag::oldscape::defaults {
    // 0x10422935c
    int32_t DefaultsGroup::GRAPHICS;

} // namespace jag::oldscape::defaults
