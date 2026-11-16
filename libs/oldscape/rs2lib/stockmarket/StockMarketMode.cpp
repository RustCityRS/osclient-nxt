// libs/oldscape/rs2lib/stockmarket/StockMarketMode.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.oldscape.rs2lib

#include "StockMarketMode.h"

namespace jag::oldscape::rs2lib {
    // 0x100f37598, 8 bytes, __data
    StockMarketMode const* StockMarketMode::NONE = &enumArray;

    // 0x100f375a0, 8 bytes, __data
    StockMarketMode const* StockMarketMode::RUNESCAPE = &enumArray[1];

    // 0x100f375a8, 8 bytes, __data
    StockMarketMode const* StockMarketMode::RUNESCAPE_BETA0 = &enumArray[2];

    // 0x100f375b0, 8 bytes, __data
    StockMarketMode const* StockMarketMode::OLDSCHOOL = &enumArray[3];

    // 0x100f375b8, 8 bytes, __data
    StockMarketMode const* StockMarketMode::OLDSCHOOL_DEADMAN = &enumArray[4];

    // 0x100f375c0, 8 bytes, __data
    StockMarketMode const* StockMarketMode::OLDSCHOOL_SEASONAL = &enumArray[5];

    // 0x100f375c8, 8 bytes, __data
    StockMarketMode const* StockMarketMode::OLDSCHOOL_ALTSEASONAL = &enumArray[6];

    // 0x100f375d0, 8 bytes, __data
    StockMarketMode const* StockMarketMode::OLDSCHOOL_TOURNAMENT = &enumArray[7];

    // 0x100f375d8, 8 bytes, __data
    StockMarketMode const* StockMarketMode::OLDSCHOOL_PVPARENA = &enumArray[8];

    // 0x100f375e0, 8 bytes, __data
    StockMarketMode const* StockMarketMode::OLDSCHOOL_SPEEDRUN = &enumArray[9];

    // 0x100f375e8, 8 bytes, __data
    StockMarketMode const* StockMarketMode::OLDSCHOOL_NOSAVEMODE = &enumArray[10];

    // 0x100fd54d0, 616 bytes, __common; set at startup by ___cxx_global_var_init.103
    StockMarketMode StockMarketMode::enumArray[11] = {
        /* [0] */
        ?,
        /* [1] */
        ?,
        /* [2] */
        ?,
        /* [3] */
        ?,
        /* [4] */
        ?,
        /* [5] */
        ?,
        /* [6] */
        ?,
        /* [7] */
        ?,
        /* [8] */
        ?,
        /* [9] */
        ?,
        /* [10] */
        ?, };

    // 0x100024070: the linker folded this into eastl::pair<eastl::string, option::IOption*>::~pair(), which has identical code
    StockMarketMode::~StockMarketMode();

    // 0x10002dfe0: the linker folded this into eastl::hash_node<eastl::string, false>::~hash_node(), which has identical code
    StockMarketMode::~StockMarketMode();

    // 0x1002273a0, 1536 bytes, placed by the data it initialises
    // ___cxx_global_var_init.103
    void ___cxx_global_var_init_103() {
        eastl::string local_1d8[32];
        eastl::string local_1b8[32];
        eastl::string local_198[32];
        eastl::string local_178[32];
        eastl::string local_158[32];
        eastl::string local_138[32];
        eastl::string local_118[32];
        eastl::string local_f8[32];
        eastl::string local_d8[32];
        eastl::string local_b8[32];
        eastl::string local_98[32];
        allocator local_78[8];
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

        eastl::allocator::allocator(local_78, "EASTL basic_string");
        eastl::string::basic_string(local_1d8, "", local_78);
        new (&StockMarketMode::enumArray) StockMarketMode(0, local_1d8, 18446744073709551615, 4294967295, 0, 0);
        eastl::allocator::allocator(local_70, "EASTL basic_string");
        eastl::string::basic_string(local_1b8, "stockmarket", local_70);
        new (&DAT_100fd5508) StockMarketMode(1, local_1b8, ModeGame::RUNESCAPE, 0, 1, 1);
        eastl::allocator::allocator(local_68, "EASTL basic_string");
        eastl::string::basic_string(local_198, "beta-stockmarket0", local_68);
        new (&DAT_100fd5540) StockMarketMode(2, local_198, ModeGame::RUNESCAPE, 1, 1, 1);
        eastl::allocator::allocator(local_60, "EASTL basic_string");
        eastl::string::basic_string(local_178, "stockmarket_oldschool", local_60);
        new (&DAT_100fd5578) StockMarketMode(3, local_178, ModeGame::OLDSCAPE, 0, 1, 1);
        eastl::allocator::allocator(local_58, "EASTL basic_string");
        eastl::string::basic_string(local_158, "stockmarket_oldschool_deadman", local_58);
        new (&DAT_100fd55b0) StockMarketMode(4, local_158, ModeGame::OLDSCAPE, 2, 1, 1);
        eastl::allocator::allocator(local_50, "EASTL basic_string");
        eastl::string::basic_string(local_138, "stockmarket_oldschool_seasonal", local_50);
        new (&DAT_100fd55e8) StockMarketMode(5, local_138, ModeGame::OLDSCAPE, 3, 1, 1);
        eastl::allocator::allocator(local_48, "EASTL basic_string");
        eastl::string::basic_string(local_118, "stockmarket_oldschool_seasonal", local_48);
        new (&DAT_100fd5620) StockMarketMode(6, local_118, ModeGame::OLDSCAPE, 4, 1, 1);
        eastl::allocator::allocator(local_40, "EASTL basic_string");
        eastl::string::basic_string(local_f8, "stockmarket_oldschool_tournament", local_40);
        new (&DAT_100fd5658) StockMarketMode(7, local_f8, ModeGame::OLDSCAPE, 5, 1, 1);
        eastl::allocator::allocator(local_38, "EASTL basic_string");
        eastl::string::basic_string(local_d8, "stockmarket_oldschool", local_38);
        new (&DAT_100fd5690) StockMarketMode(8, local_d8, ModeGame::OLDSCAPE, 6, 1, 0);
        eastl::allocator::allocator(local_30, "EASTL basic_string");
        eastl::string::basic_string(local_b8, "stockmarket_oldschool", local_30);
        new (&DAT_100fd56c8) StockMarketMode(9, local_b8, ModeGame::OLDSCAPE, 7, 0, 0);
        eastl::allocator::allocator(local_28, "EASTL basic_string");
        eastl::string::basic_string(local_98, "stockmarket_oldschool", local_28);
        new (&DAT_100fd5700) StockMarketMode(10, local_98, ModeGame::OLDSCAPE, 0, 1, 0);
        eastl::string::~basic_string(local_98);
        eastl::string::~basic_string(local_b8);
        eastl::string::~basic_string(local_d8);
        eastl::string::~basic_string(local_f8);
        eastl::string::~basic_string(local_118);
        eastl::string::~basic_string(local_138);
        eastl::string::~basic_string(local_158);
        eastl::string::~basic_string(local_178);
        eastl::string::~basic_string(local_198);
        eastl::string::~basic_string(local_1b8);
        eastl::string::~basic_string(local_1d8);
        ___cxa_atexit(___cxx_global_array_dtor, 0, 4294967296);
    }

    // 0x1002279e0, 80 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.114
    void ___cxx_global_var_init_114() {
        allocator local_20[8];

        eastl::allocator::allocator(local_20, "EASTL hash_map");
        new (&ScriptVarType::LOOKUP_MAP)
            eastl::hash_map<unsigned int, ScriptVarType*, eastl::hash<unsigned int>, eastl::equal_to<unsigned int>,
                            eastl::allocator, false>(local_20);
        ___cxa_atexit(PTR__hash_map_100ee6dc8, &ScriptVarType::LOOKUP_MAP, 4294967296);
    }

    // 0x100227b50, 64 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.136
    void ___cxx_global_var_init_136() {
        undefined* puVar1;

        puVar1 = PTR_LOOK_100ee47d8;
        if (*PTR_LOOK_100ee47d8 == '\0') {
            new (PTR_LOOK_100ee66e0) jag::math::ColourHSL(0.0, 0.0, 1.0);
            *puVar1 = 1;
        }
    }

    // 0x100227b90, 64 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.137
    void ___cxx_global_var_init_137() {
        undefined* puVar1;

        puVar1 = PTR_UP_100ee47c8;
        if (*PTR_UP_100ee47c8 == '\0') {
            new (PTR_UP_100ee66d0) jag::math::ColourHSL(0.0, 1.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x100227bd0, 64 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.138
    void ___cxx_global_var_init_138() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee4298;
        if (*PTR_m_pSingleton_100ee4298 == '\0') {
            ___cxa_atexit(std::unique_ptr<ThreadPoolSingleton, std::default_delete<ThreadPoolSingleton>>::~unique_ptr,
                          PTR_m_pSingleton_100ee5948, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100227c10, 64 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.139
    void ___cxx_global_var_init_139() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee42a0;
        if (*PTR_m_pSingleton_100ee42a0 == '\0') {
            ___cxa_atexit(
                std::unique_ptr<ShaderThreadPoolSingleton, std::default_delete<ShaderThreadPoolSingleton>>::~unique_ptr,
                PTR_m_pSingleton_100ee5950, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100227c50, 48 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.140
    void ___cxx_global_var_init_140() {
        undefined* puVar1;

        puVar1 = PTR_ZERO_100ee4790;
        if (*PTR_ZERO_100ee4790 == '\0') {
            new (PTR_ZERO_100ee6698) jag::math::Point<float>(0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x100227c80, 64 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.141
    void ___cxx_global_var_init_141() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee4518;
        if (*PTR_m_mutex_100ee4518 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5df0, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100227cc0, 64 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.142
    void ___cxx_global_var_init_142() {
        undefined* puVar1;

        puVar1 = PTR_ZERO_100ee4800;
        if (*PTR_ZERO_100ee4800 == '\0') {
            new (PTR_ZERO_100ee6708) ImVec4(0.0, 0.0, 0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x100227d00, 64 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.143
    void ___cxx_global_var_init_143() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee49c8;
        if (*PTR_m_pSingleton_100ee49c8 == '\0') {
            ___cxa_atexit(std::unique_ptr<render::ShaderProgramManager,
                                          std::default_delete<render::ShaderProgramManager>>::~unique_ptr,
                          PTR_m_pSingleton_100ee6c38, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100227d40, 64 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.144
    void ___cxx_global_var_init_144() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee49d0;
        if (*PTR_m_pSingleton_100ee49d0 == '\0') {
            ___cxa_atexit(std::unique_ptr<render::VertexDeclarationManager,
                                          std::default_delete<render::VertexDeclarationManager>>::~unique_ptr,
                          PTR_m_pSingleton_100ee6c40, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100227d80, 64 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.145
    void ___cxx_global_var_init_145() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee49f0;
        if (*PTR_m_pSingleton_100ee49f0 == '\0') {
            ___cxa_atexit(
                std::unique_ptr<hardware::HardwareInfo, std::default_delete<hardware::HardwareInfo>>::~unique_ptr,
                PTR_m_pSingleton_100ee6c60, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100227dc0, 64 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.146
    void ___cxx_global_var_init_146() {
        undefined* puVar1;

        puVar1 = PTR_ZERO_100ee47e0;
        if (*PTR_ZERO_100ee47e0 == '\0') {
            new (PTR_ZERO_100ee66e8) jag::math::ColourHSL(0.0, 0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x100227e00, 64 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.147
    void ___cxx_global_var_init_147() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee49a0;
        if (*PTR_m_pSingleton_100ee49a0 == '\0') {
            ___cxa_atexit(std::unique_ptr<render::RenderDevice, std::default_delete<render::RenderDevice>>::~unique_ptr,
                          PTR_m_pSingleton_100ee6c10, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100227e40, 64 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.148
    void ___cxx_global_var_init_148() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee45b0;
        if (*PTR_m_mutex_100ee45b0 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5f20, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100227e80, 64 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.149
    void ___cxx_global_var_init_149() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee49d8;
        if (*PTR_m_pSingleton_100ee49d8 == '\0') {
            ___cxa_atexit(std::unique_ptr<jag::graphics::AnimationManager,
                                          std::default_delete<jag::graphics::AnimationManager>>::~unique_ptr,
                          PTR_m_pSingleton_100ee6c48, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100227ec0, 96 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.150
    void ___cxx_global_var_init_150() {
        undefined* puVar1;

        puVar1 = PTR_ZERO_100ee4820;
        if (*PTR_ZERO_100ee4820 == '\0') {
            new (PTR_ZERO_100ee6728) jag::math::Matrix44T<float>(0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
                                                                 0.0, 0.0, 0.0, 0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x100227f20, 64 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.151
    void ___cxx_global_var_init_151() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee45d8;
        if (*PTR_m_mutex_100ee45d8 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5f70, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100227f60, 96 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.152
    void ___cxx_global_var_init_152() {
        undefined* puVar1;

        puVar1 = PTR_IDENTITY_100ee4828;
        if (*PTR_IDENTITY_100ee4828 == '\0') {
            new (PTR_IDENTITY_100ee6730) jag::math::Matrix44T<float>(1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0,
                                                                     1.0, 0.0, 0.0, 0.0, 0.0, 1.0);
            *puVar1 = 1;
        }
    }

    // 0x100227fc0, 64 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.153
    void ___cxx_global_var_init_153() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee4590;
        if (*PTR_m_mutex_100ee4590 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5ee0, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100228000, 64 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.154
    void ___cxx_global_var_init_154() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee4290;
        if (*PTR_m_pSingleton_100ee4290 == '\0') {
            ___cxa_atexit(std::unique_ptr<graphicutils::BatchDestroyManager,
                                          std::default_delete<graphicutils::BatchDestroyManager>>::~unique_ptr,
                          PTR_m_pSingleton_100ee5940, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100228040, 64 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.155
    void ___cxx_global_var_init_155() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee4520;
        if (*PTR_m_mutex_100ee4520 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5e00, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100228080, 64 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.156
    void ___cxx_global_var_init_156() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee4500;
        if (*PTR_m_mutex_100ee4500 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5dc0, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100228300, 234 bytes, placed by debug map only (low confidence)
    // __GLOBAL__sub_I_unity_2_cxx.cxx
    void __GLOBAL__sub_I_unity_2_cxx_cxx() {
        undefined8 uVar1;

        uVar1 = _objc_autoreleasePoolPush();
        ___cxx_global_var_init();
        ___cxx_global_var_init_12();
        ___cxx_global_var_init_13();
        ___cxx_global_var_init_24();
        ___cxx_global_var_init_25();
        ___cxx_global_var_init_33();
        ___cxx_global_var_init_34();
        ___cxx_global_var_init_35();
        ___cxx_global_var_init_50();
        ___cxx_global_var_init_51();
        ___cxx_global_var_init_52();
        ___cxx_global_var_init_54();
        ___cxx_global_var_init_56();
        ___cxx_global_var_init_58();
        ___cxx_global_var_init_60();
        ___cxx_global_var_init_62();
        ___cxx_global_var_init_64();
        ___cxx_global_var_init_65();
        ___cxx_global_var_init_66();
        ___cxx_global_var_init_67();
        ___cxx_global_var_init_68();
        ___cxx_global_var_init_81();
        ___cxx_global_var_init_82();
        ___cxx_global_var_init_83();
        ___cxx_global_var_init_85();
        ___cxx_global_var_init_88();
        ___cxx_global_var_init_93();
        ___cxx_global_var_init_96();
        ___cxx_global_var_init_97();
        ___cxx_global_var_init_98();
        ___cxx_global_var_init_99();
        ___cxx_global_var_init_100();
        ___cxx_global_var_init_103();
        ___cxx_global_var_init_114();
        ___cxx_global_var_init_116();
        ___cxx_global_var_init_117();
        ___cxx_global_var_init_118();
        ___cxx_global_var_init_119();
        ___cxx_global_var_init_128();
        ___cxx_global_var_init_132();
        ___cxx_global_var_init_133();
        _objc_autoreleasePoolPop(uVar1);
    }

} // namespace jag::oldscape::rs2lib

// 0x1002279a0, 64 bytes, placed by debug map only (low confidence)
// ___cxx_global_array_dtor
void ___cxx_global_array_dtor() {
    long lVar1;

    lVar1 = 560;
    do {
        ((&jag::oldscape::rs2lib::StockMarketMode::enumArray + lVar1))->~hash_node();
        lVar1 = lVar1 + -56;
    } while (lVar1 != -56);
}
