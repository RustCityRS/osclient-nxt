// libs/oldscape/rs2lib/stockmarket/StockMarketMode.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.oldscape.rs2lib

#include "StockMarketMode.h"

namespace jag::oldscape::rs2lib {
    // 0x100f37598
    StockMarketMode const* StockMarketMode::NONE = &enumArray;

    // 0x100f375a0
    StockMarketMode const* StockMarketMode::RUNESCAPE = &enumArray[1];

    // 0x100f375a8
    StockMarketMode const* StockMarketMode::RUNESCAPE_BETA0 = &enumArray[2];

    // 0x100f375b0
    StockMarketMode const* StockMarketMode::OLDSCHOOL = &enumArray[3];

    // 0x100f375b8
    StockMarketMode const* StockMarketMode::OLDSCHOOL_DEADMAN = &enumArray[4];

    // 0x100f375c0
    StockMarketMode const* StockMarketMode::OLDSCHOOL_SEASONAL = &enumArray[5];

    // 0x100f375c8
    StockMarketMode const* StockMarketMode::OLDSCHOOL_ALTSEASONAL = &enumArray[6];

    // 0x100f375d0
    StockMarketMode const* StockMarketMode::OLDSCHOOL_TOURNAMENT = &enumArray[7];

    // 0x100f375d8
    StockMarketMode const* StockMarketMode::OLDSCHOOL_PVPARENA = &enumArray[8];

    // 0x100f375e0
    StockMarketMode const* StockMarketMode::OLDSCHOOL_SPEEDRUN = &enumArray[9];

    // 0x100f375e8
    StockMarketMode const* StockMarketMode::OLDSCHOOL_NOSAVEMODE = &enumArray[10];

    // 0x100fd54d0, set at startup by ___cxx_global_var_init.103
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

    // 0x100024070: StockMarketMode::~StockMarketMode() has the same machine code as eastl::pair<eastl::string, option::IOption*>::~pair()

    // 0x10002dfe0: StockMarketMode::~StockMarketMode() has the same machine code as eastl::hash_node<eastl::string, false>::~hash_node()

    // 0x1002273a0
    void ___cxx_global_var_init_103(void) {

        eastl::string local_1d8("");
        new ((StockMarketMode*)&StockMarketMode::enumArray)
            StockMarketMode(0, &local_1d8, 18446744073709551615, 4294967295, false, false);
        eastl::string local_1b8("stockmarket");
        new ((StockMarketMode*)&reinterpret_cast<const uint64_t*>(&enumArray)[7])
            StockMarketMode(1, &local_1b8, (ModeGame*)ModeGame::RUNESCAPE, 0, true, true);
        eastl::string local_198("beta-stockmarket0");
        new ((StockMarketMode*)&reinterpret_cast<const uint64_t*>(&enumArray)[14])
            StockMarketMode(2, &local_198, (ModeGame*)ModeGame::RUNESCAPE, 1, true, true);
        eastl::string local_178("stockmarket_oldschool");
        new ((StockMarketMode*)&reinterpret_cast<const uint64_t*>(&enumArray)[21])
            StockMarketMode(3, &local_178, (ModeGame*)ModeGame::OLDSCAPE, 0, true, true);
        eastl::string local_158("stockmarket_oldschool_deadman");
        new ((StockMarketMode*)&reinterpret_cast<const uint64_t*>(&enumArray)[28])
            StockMarketMode(4, &local_158, (ModeGame*)ModeGame::OLDSCAPE, 2, true, true);
        eastl::string local_138("stockmarket_oldschool_seasonal");
        new ((StockMarketMode*)&reinterpret_cast<const uint64_t*>(&enumArray)[35])
            StockMarketMode(5, &local_138, (ModeGame*)ModeGame::OLDSCAPE, 3, true, true);
        eastl::string local_118("stockmarket_oldschool_seasonal");
        new ((StockMarketMode*)&reinterpret_cast<const uint64_t*>(&enumArray)[42])
            StockMarketMode(6, &local_118, (ModeGame*)ModeGame::OLDSCAPE, 4, true, true);
        eastl::string local_f8("stockmarket_oldschool_tournament");
        new ((StockMarketMode*)&reinterpret_cast<const uint64_t*>(&enumArray)[49])
            StockMarketMode(7, &local_f8, (ModeGame*)ModeGame::OLDSCAPE, 5, true, true);
        eastl::string local_d8("stockmarket_oldschool");
        new ((StockMarketMode*)&reinterpret_cast<const uint64_t*>(&enumArray)[56])
            StockMarketMode(8, &local_d8, (ModeGame*)ModeGame::OLDSCAPE, 6, true, false);
        eastl::string local_b8("stockmarket_oldschool");
        new ((StockMarketMode*)&reinterpret_cast<const uint64_t*>(&enumArray)[63])
            StockMarketMode(9, &local_b8, (ModeGame*)ModeGame::OLDSCAPE, 7, false, false);
        eastl::string local_98("stockmarket_oldschool");
        new ((StockMarketMode*)&reinterpret_cast<const uint64_t*>(&enumArray)[70])
            StockMarketMode(10, &local_98, (ModeGame*)ModeGame::OLDSCAPE, 0, true, false);
        ___cxa_atexit(___cxx_global_array_dtor, 0, 4294967296);
    }

    // 0x1002279e0
    void ___cxx_global_var_init_114(void) {

        new ((hash_map<unsigned int, ScriptVarType*>*)&ScriptVarType::LOOKUP_MAP)
            eastl::hash_map<unsigned int, ScriptVarType*>(local_20);
        ___cxa_atexit(PTR__hash_map_100ee6dc8, &ScriptVarType::LOOKUP_MAP, 4294967296);
    }

    // 0x100227b50
    void ___cxx_global_var_init_136(void) {
        uint8_t* puVar1 = PTR_LOOK_100ee47d8;
        if (*PTR_LOOK_100ee47d8 == '\0') {
            new (PTR_LOOK_100ee66e0) jag::math::ColourHSL(0.0, 0.0, 1.0);
            *puVar1 = 1;
        }
    }

    // 0x100227b90
    void ___cxx_global_var_init_137(void) {
        uint8_t* puVar1 = PTR_UP_100ee47c8;
        if (*PTR_UP_100ee47c8 == '\0') {
            new (PTR_UP_100ee66d0) jag::math::ColourHSL(0.0, 1.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x100227bd0
    void ___cxx_global_var_init_138(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee4298;
        if (*PTR_m_pSingleton_100ee4298 == '\0') {
            ___cxa_atexit(std::unique_ptr<ThreadPoolSingleton>::~unique_ptr, PTR_m_pSingleton_100ee5948, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100227c10
    void ___cxx_global_var_init_139(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee42a0;
        if (*PTR_m_pSingleton_100ee42a0 == '\0') {
            ___cxa_atexit(std::unique_ptr<ShaderThreadPoolSingleton>::~unique_ptr, PTR_m_pSingleton_100ee5950,
                          4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100227c50
    void ___cxx_global_var_init_140(void) {
        uint8_t* puVar1 = PTR_ZERO_100ee4790;
        if (*PTR_ZERO_100ee4790 == '\0') {
            new (PTR_ZERO_100ee6698) jag::math::Point(0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x100227c80
    void ___cxx_global_var_init_141(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee4518;
        if (*PTR_m_mutex_100ee4518 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5df0, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100227cc0
    void ___cxx_global_var_init_142(void) {
        uint8_t* puVar1 = PTR_ZERO_100ee4800;
        if (*PTR_ZERO_100ee4800 == '\0') {
            new (PTR_ZERO_100ee6708) ImVec4(0.0, 0.0, 0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x100227d00
    void ___cxx_global_var_init_143(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee49c8;
        if (*PTR_m_pSingleton_100ee49c8 == '\0') {
            ___cxa_atexit(std::unique_ptr<render::ShaderProgramManager>::~unique_ptr, PTR_m_pSingleton_100ee6c38,
                          4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100227d40
    void ___cxx_global_var_init_144(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee49d0;
        if (*PTR_m_pSingleton_100ee49d0 == '\0') {
            ___cxa_atexit(std::unique_ptr<render::VertexDeclarationManager>::~unique_ptr, PTR_m_pSingleton_100ee6c40,
                          4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100227d80
    void ___cxx_global_var_init_145(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee49f0;
        if (*PTR_m_pSingleton_100ee49f0 == '\0') {
            ___cxa_atexit(std::unique_ptr<hardware::HardwareInfo>::~unique_ptr, PTR_m_pSingleton_100ee6c60, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100227dc0
    void ___cxx_global_var_init_146(void) {
        uint8_t* puVar1 = PTR_ZERO_100ee47e0;
        if (*PTR_ZERO_100ee47e0 == '\0') {
            new (PTR_ZERO_100ee66e8) jag::math::ColourHSL(0.0, 0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x100227e00
    void ___cxx_global_var_init_147(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee49a0;
        if (*PTR_m_pSingleton_100ee49a0 == '\0') {
            ___cxa_atexit(std::unique_ptr<render::RenderDevice>::~unique_ptr, PTR_m_pSingleton_100ee6c10, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100227e40
    void ___cxx_global_var_init_148(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee45b0;
        if (*PTR_m_mutex_100ee45b0 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5f20, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100227e80
    void ___cxx_global_var_init_149(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee49d8;
        if (*PTR_m_pSingleton_100ee49d8 == '\0') {
            ___cxa_atexit(std::unique_ptr<jag::graphics::AnimationManager>::~unique_ptr, PTR_m_pSingleton_100ee6c48,
                          4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100227ec0
    void ___cxx_global_var_init_150(void) {
        uint8_t* puVar1 = PTR_ZERO_100ee4820;
        if (*PTR_ZERO_100ee4820 == '\0') {
            new (PTR_ZERO_100ee6728) jag::math::Matrix44T<float>(0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
                                                                 0.0, 0.0, 0.0, 0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x100227f20
    void ___cxx_global_var_init_151(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee45d8;
        if (*PTR_m_mutex_100ee45d8 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5f70, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100227f60
    void ___cxx_global_var_init_152(void) {
        uint8_t* puVar1 = PTR_IDENTITY_100ee4828;
        if (*PTR_IDENTITY_100ee4828 == '\0') {
            new (PTR_IDENTITY_100ee6730) jag::math::Matrix44T<float>(1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0,
                                                                     1.0, 0.0, 0.0, 0.0, 0.0, 1.0);
            *puVar1 = 1;
        }
    }

    // 0x100227fc0
    void ___cxx_global_var_init_153(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee4590;
        if (*PTR_m_mutex_100ee4590 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5ee0, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100228000
    void ___cxx_global_var_init_154(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee4290;
        if (*PTR_m_pSingleton_100ee4290 == '\0') {
            ___cxa_atexit(std::unique_ptr<graphicutils::BatchDestroyManager>::~unique_ptr, PTR_m_pSingleton_100ee5940,
                          4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100228040
    void ___cxx_global_var_init_155(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee4520;
        if (*PTR_m_mutex_100ee4520 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5e00, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100228080
    void ___cxx_global_var_init_156(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee4500;
        if (*PTR_m_mutex_100ee4500 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5dc0, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100228300
    void __GLOBAL__sub_I_unity_2_cxx_cxx(void) {
        uint64_t uVar1 = _objc_autoreleasePoolPush();
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

// 0x1002279a0
void ___cxx_global_array_dtor(void) {
    long lVar1 = 560;
    do {
        ((&jag::oldscape::rs2lib::StockMarketMode::enumArray + lVar1))->~hash_node();
        lVar1 = lVar1 - 56;
    } while (lVar1 != -56);
}
