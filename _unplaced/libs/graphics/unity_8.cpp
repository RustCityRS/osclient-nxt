// _unplaced/libs/graphics/unity_8.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

namespace jag::graphics {
    // 0x100d4b150, 4 bytes, __const
    MIN_SPECULAR_FACTOR_RT7 = 1008981770;

    // 0x100d4b154, 4 bytes, __const
    float MAX_SPECULAR_FACTOR_RT7 = 8192.0f;

    // 0x100d4b158, 4 bytes, __const
    float MIN_SPECULAR_FACTOR_RT5 = 5.0f;

    // 0x100d4b15c, 1636 bytes, __const
    MAX_SPECULAR_FACTOR_RT5 = {
        1107296256,  404166165,   993532441,   1027817535,  538910276,   472064545,   1848782885,  1463367274,
        33620056,    184878083,   134678028,   326569738,   286396460,   661931326,   100794369,   1802116376,
        522072940,   622993696,   1701077808,  1482242406,  774712388,   807214661,   1465386809,  555753246,
        774710562,   845571171,   1193852928,  404166165,   1109072409,  1094662993,  507788608,   572596255,
        925178915,   842084408,   959867502,   892613463,   50462976,    202048772,   117837325,   252315912,
        319885840,   710103638,   791435819,   1950695020,  1562855285,  1263147839,  436686413,   1448301111,
        2014205738,  809065533,   912936763,   538910237,   807150113,   1733771321,  845940585,   4472133,
        -1087163597, 1090260677,  1171049472,  1140457472,  1085276160,  1187205120,  953267991,   -938312704,
        1195593728,  -1027080192, 1067450368,  1092013028,  1098601426,  1053609165,  1102048736,  1107966695,
        1044000396,  1078530012,  1065749138,  1056582172,  -1090901476, 1064450177,  -1096713471, -1081354079,
        1066129569,  1057740961,  1072616758,  -1081127750, -1072545487, 1055523304,  1069088711,  -1089008359,
        1073610236,  -1082078166, -1063920178, 1073771770,  1079243121,  -1091422079, -1075670107, 1059075781,
        1073657727,  -1082106499, 1073871888,  -1082280903, 1088820987,  -1072077657, -1064507760, 1056603505,
        1074059175,  -1087895384, 1071494103,  -1075989545, 1066650938,  1049873722,  1063105495,  1049652923,
        -1107218636, -1101020927, 1046462721,  1048653620,  1043893395,  1042273025,  1035504787,  -1105210623,
        1043893396,  -1116785672, -1100506247, -1106085064, -1103291575, 1045374951,  1046977401,  1030697976,
        1048426126,  1044192073,  -1111452765, 1044419491,  1041574742,  1036030883,  1041776329,  1038867323,
        -1105707319, 1047475192,  1030985640,  -1108616325, 1045909164,  1040265012,  -1105908906, 1043087089,
        -1120777575, -1100227717, -1113954394, -1102298582, -1105565786, -1104371391, 1044862457,  1043112257,
        1045185066,  1033529254,  1047255931,  1026706073,  1046109321,  1048323170,  -1103590253, 1025839317,
        -1099685197, -1115521290, 1047798451,  -1113996295, 1044573937,  1033487353,  1041320821,  1038525941,
        -1104867115, 1040705834,  -1106258528, 1035529750,  -1106777814, 1046611597,  1031962358,  1027066098,
        -1111953898, 1048025409,  1041225120,  -1101574484, 1033736209,  1036741028,  1040741391,  1039183452,
        -1108300196, 1042728637,  1045458842,  -1103637825, -1105503258, 1037178220,  -1114966767, -1103064157,
        1026945044,  1032516881,  1041980390,  1020401004,  -1108680330, 1038803318,  -1106742257, 1042124819,
        -1100291722, 1037707761,  1040861532,  -1108088287, -1117068938, -1104961676, 1027105232,  1039395361,
        1032206257,  -1112839656, -1106622116, 1037111764,  -1120378416, 1041144620,  -1106162827, 1032601480,
        -1110371884, 1042793887,  1040990090,  -1123141070, -1100053055, -1112657613, -1103354327, -1105263658,
        -1105006305, 1047430593,  1024342578,  1034826035,  1044562103,  1048276159,  1042477343,  1015729334,
        -1099207490, 1029404199,  -1102921545, -1115265945, -1106171648, 1048276158,  -1115665893, -1111048506,
        1041312000,  -1107828485, 1031817755,  1044641574,  1036435142,  -1131754314, 1041198743,  1039655163,
        -1112932734, -1103651492, -1104314396, -1104033601, 1043832156,  1034550914,  1042219990,  1041104269,
        -1106767279, 1027054940,  1043450047,  1033358158,  -1108723402, 1046181415,  1024729804,  -1114125490,
        -1120428708, 1038760246,  1040716369,  1036582321,  -1110439006, -1110742620, 1040301367,  1040634928,
        -1110901327, 1040307663,  1044970929,  -1113683144, -1108800346, -1105624472, -1120538604, -1104187273,
        -1110469339, 1036529947,  -1127246555, 1020237093,  1041859176,  1038683302,  1032191606,  1033800504,
        1039506804,  1040797072,  1033502001,  -1110384577, -1110305428, 1008528110,  -1110023184, -1106686576,
        -1107976844, 1047053868,  1034955574,  -1113981647, 1032217703,  1041755992,  1047879056,  1037460464,
        1037014309,  -1106848720, 1045738872,  1041685208,  1040536197,  1040413989,  1024641143,  -1108121212,
        -1118193945, 1029289703,  1045780299,  1022729588,  -1110133384, 1044980683,  -1106947451, 1039673612,
        -1116317617, 1024231610,  1036756794,  -1110726854, 1039362436,  -1101703349, 1034690127,  1037099071,
        1044129321,  1046900546,  1018800867,  -1112793521, 1037044642,  -1107182281, 1035593916,  1038857223,
        -1110953701, 1047943247,  -1111889732, -1107810036, 1031166031,  -1123252038, -1099403657, 1015316271,
        -1129200804, -1107069659, 1035060060,  1041567508,  -1106284905, 1040536199,  1042652924,  -1088421888,
        -1107296256, -1094713344, -1079508992, -1083179008, 1074528256,  1078530143,  1095307227,  -1146890486,
        -1147964228, 1859432,     1048576000,  1061158912,  1065877504,  286331153,   1067520273,  0,
        0,           1065353216,  0,           0,           1065353216,  -1,          -2,          -3,
        8,           8,           8,           0,           1065353216,  1065353216,  1065353216,  0,
        1065353216,  1059481190,  1059481190,  1036831949,  1183365120,  1,           1,           1,
        1,           4,           4,           1024,        16,          1062836634,  1187205120,  1135542272,
        -1110651699, 0,           0,           1,           1,           -1150984126, -1150984126, -1150984126,
        -1150984126,
    };

    // 0x104232940, 64 bytes, __bss; zero-initialised
    MAYA_ANIM_INVERT_MATRIX;

    // 0x104232980, 16 bytes, __bss; zero-initialised
    WORLD_ORTHOGONAL;

    // 0x100888750, 96 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init
    void ___cxx_global_var_init() {
        undefined1 local_50[40];
        Vector3T<int> local_28[16];

        math::Matrix33Scaling<float>((math*)local_50, 1.0, 1.0, -1.0);
        math::Vector3T<int>::Vector3T(local_28);
        new (&MAYA_ANIM_INVERT_MATRIX) math::Matrix44T<float>(local_50, local_28);
    }

    // 0x1008887b0, 32 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.109
    void ___cxx_global_var_init_109() {
        new (&WORLD_ORTHOGONAL) math::ColourHSL(-1.5707964, -1.5707964, 0.0);
    }

    // 0x1008887d0, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.110
    void ___cxx_global_var_init_110() {
        char* pcVar1;
        Random* this;
        undefined1* puVar2;

        pcVar1 = (char*)(**(code**)PTR_g_moduleRng_100f4e548)();
        if (*pcVar1 == '\0') {
            this = (Random*)(**(code**)PTR_g_moduleRng_100f4e550)();
            math::Random::Random(this, 123456789, 31415821);
            puVar2 = (undefined1*)(**(code**)PTR_g_moduleRng_100f4e548)();
            *puVar2 = 1;
            return;
        }
    }

    // 0x100888810, 96 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.111
    void ___cxx_global_var_init_111() {
        if (*PTR_VIEWRT_LUMINANCE_ADAPTED_100ee4048 == '\0') {
            if (___cxa_guard_acquire(PTR_VIEWRT_LUMINANCE_ADAPTED_100ee4048) != 0) {
                new (PTR_VIEWRT_LUMINANCE_ADAPTED_100ee5578) HashedString("LUMINANCE_ADAPTED");
                ___cxa_guard_release(PTR_VIEWRT_LUMINANCE_ADAPTED_100ee4048);
            }
        }
    }

    // 0x100888870, 96 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.113
    void ___cxx_global_var_init_113() {
        if (*PTR_VIEWRT_LUMINANCE_ADAPTED_PREVIOUS_100ee4058 == '\0') {
            if (___cxa_guard_acquire(PTR_VIEWRT_LUMINANCE_ADAPTED_PREVIOUS_100ee4058) != 0) {
                new (PTR_VIEWRT_LUMINANCE_ADAPTED_PREVIOUS_100ee5588) HashedString("LUMINANCE_ADAPTED_PREVIOUS");
                ___cxa_guard_release(PTR_VIEWRT_LUMINANCE_ADAPTED_PREVIOUS_100ee4058);
            }
        }
    }

    // 0x1008888d0, 96 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.115
    void ___cxx_global_var_init_115() {
        if (*PTR_VIEWRT_LUMINANCE_AVERAGE_100ee4050 == '\0') {
            if (___cxa_guard_acquire(PTR_VIEWRT_LUMINANCE_AVERAGE_100ee4050) != 0) {
                new (PTR_VIEWRT_LUMINANCE_AVERAGE_100ee5580) HashedString("VIEWRT_LUMINANCE_AVERAGE");
                ___cxa_guard_release(PTR_VIEWRT_LUMINANCE_AVERAGE_100ee4050);
            }
        }
    }

    // 0x100889330, 32 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.120
    void ___cxx_global_var_init_120() {
        ___cxa_atexit(PTR__mutex_100ee6ef8, &TextureAtlas::m_clearDataMutex, 4294967296);
    }

    // 0x100889350, 48 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.177
    void ___cxx_global_var_init_177() {
        undefined8 uVar1;

        uVar1 = (*(code*)TextureAtlasManager::m_virtualAtlases)();
        __tlv_atexit(PTR__array_100ee6ee8, uVar1, 4294967296);
    }

    // 0x100889440, 32 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.194
    /* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

    void ___cxx_global_var_init_194() {
        _DEBUG_ATLAS_BACKGROUND_COLOUR = *(undefined8*)PTR_ZERO_100ee6708;
        uRam0000000103bbdf08 = *(undefined8*)(PTR_ZERO_100ee6708 + 8);
    }

    // 0x1008894e0, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.241
    void ___cxx_global_var_init_241() {
        undefined* puVar1;

        puVar1 = PTR_LOOK_100ee47d8;
        if (*PTR_LOOK_100ee47d8 == '\0') {
            new (PTR_LOOK_100ee66e0) math::ColourHSL(0.0, 0.0, 1.0);
            *puVar1 = 1;
        }
    }

    // 0x100889520, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.242
    void ___cxx_global_var_init_242() {
        undefined* puVar1;

        puVar1 = PTR_UP_100ee47c8;
        if (*PTR_UP_100ee47c8 == '\0') {
            new (PTR_UP_100ee66d0) math::ColourHSL(0.0, 1.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x100889560, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.243
    void ___cxx_global_var_init_243() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee4298;
        if (*PTR_m_pSingleton_100ee4298 == '\0') {
            ___cxa_atexit(std::unique_ptr<ThreadPoolSingleton, std::default_delete<ThreadPoolSingleton>>::~unique_ptr,
                          PTR_m_pSingleton_100ee5948, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1008895a0, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.244
    void ___cxx_global_var_init_244() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee42a0;
        if (*PTR_m_pSingleton_100ee42a0 == '\0') {
            ___cxa_atexit(
                std::unique_ptr<ShaderThreadPoolSingleton, std::default_delete<ShaderThreadPoolSingleton>>::~unique_ptr,
                PTR_m_pSingleton_100ee5950, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1008895e0, 48 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.245
    void ___cxx_global_var_init_245() {
        undefined* puVar1;

        puVar1 = PTR_ZERO_100ee4790;
        if (*PTR_ZERO_100ee4790 == '\0') {
            new (PTR_ZERO_100ee6698) math::Point<float>(0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x100889610, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.246
    void ___cxx_global_var_init_246() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee4518;
        if (*PTR_m_mutex_100ee4518 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5df0, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100889650, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.247
    void ___cxx_global_var_init_247() {
        undefined* puVar1;

        puVar1 = PTR_ZERO_100ee4800;
        if (*PTR_ZERO_100ee4800 == '\0') {
            new (PTR_ZERO_100ee6708) ImVec4(0.0, 0.0, 0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x100889690, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.248
    void ___cxx_global_var_init_248() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee49c8;
        if (*PTR_m_pSingleton_100ee49c8 == '\0') {
            ___cxa_atexit(std::unique_ptr<render::ShaderProgramManager,
                                          std::default_delete<render::ShaderProgramManager>>::~unique_ptr,
                          PTR_m_pSingleton_100ee6c38, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1008896d0, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.249
    void ___cxx_global_var_init_249() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee49d0;
        if (*PTR_m_pSingleton_100ee49d0 == '\0') {
            ___cxa_atexit(std::unique_ptr<render::VertexDeclarationManager,
                                          std::default_delete<render::VertexDeclarationManager>>::~unique_ptr,
                          PTR_m_pSingleton_100ee6c40, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100889710, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.250
    void ___cxx_global_var_init_250() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee49a0;
        if (*PTR_m_pSingleton_100ee49a0 == '\0') {
            ___cxa_atexit(std::unique_ptr<render::RenderDevice, std::default_delete<render::RenderDevice>>::~unique_ptr,
                          PTR_m_pSingleton_100ee6c10, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100889750, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.251
    void ___cxx_global_var_init_251() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee45b0;
        if (*PTR_m_mutex_100ee45b0 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5f20, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100889790, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.252
    void ___cxx_global_var_init_252() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee4520;
        if (*PTR_m_mutex_100ee4520 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5e00, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1008897d0, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.253
    void ___cxx_global_var_init_253() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee49d8;
        if (*PTR_m_pSingleton_100ee49d8 == '\0') {
            ___cxa_atexit(std::unique_ptr<AnimationManager, std::default_delete<AnimationManager>>::~unique_ptr,
                          PTR_m_pSingleton_100ee6c48, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100889810, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.254
    void ___cxx_global_var_init_254() {
        undefined* puVar1;

        puVar1 = PTR_ZERO_100ee47e0;
        if (*PTR_ZERO_100ee47e0 == '\0') {
            new (PTR_ZERO_100ee66e8) math::ColourHSL(0.0, 0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x100889850, 96 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.255
    void ___cxx_global_var_init_255() {
        undefined* puVar1;

        puVar1 = PTR_ZERO_100ee4820;
        if (*PTR_ZERO_100ee4820 == '\0') {
            new (PTR_ZERO_100ee6728)
                math::Matrix44T<float>(0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x1008898b0, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.256
    void ___cxx_global_var_init_256() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee45d8;
        if (*PTR_m_mutex_100ee45d8 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5f70, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1008898f0, 96 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.257
    void ___cxx_global_var_init_257() {
        undefined* puVar1;

        puVar1 = PTR_IDENTITY_100ee4828;
        if (*PTR_IDENTITY_100ee4828 == '\0') {
            new (PTR_IDENTITY_100ee6730)
                math::Matrix44T<float>(1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0);
            *puVar1 = 1;
        }
    }

    // 0x100889950, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.258
    void ___cxx_global_var_init_258() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee4590;
        if (*PTR_m_mutex_100ee4590 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5ee0, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100889990, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.259
    void ___cxx_global_var_init_259() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee4290;
        if (*PTR_m_pSingleton_100ee4290 == '\0') {
            ___cxa_atexit(std::unique_ptr<graphicutils::BatchDestroyManager,
                                          std::default_delete<graphicutils::BatchDestroyManager>>::~unique_ptr,
                          PTR_m_pSingleton_100ee5940, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1008899d0, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.260
    void ___cxx_global_var_init_260() {
        undefined* puVar1;

        puVar1 = PTR_RIGHT_100ee47e8;
        if (*PTR_RIGHT_100ee47e8 == '\0') {
            new (PTR_RIGHT_100ee66f0) math::ColourHSL(1.0, 0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x100889a10, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.261
    void ___cxx_global_var_init_261() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee49a8;
        if (*PTR_m_pSingleton_100ee49a8 == '\0') {
            ___cxa_atexit(
                std::unique_ptr<render::BuiltinStates, std::default_delete<render::BuiltinStates>>::~unique_ptr,
                PTR_m_pSingleton_100ee6c18, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100889a50, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.262
    void ___cxx_global_var_init_262() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee4568;
        if (*PTR_m_mutex_100ee4568 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5e90, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100889a90, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.263
    void ___cxx_global_var_init_263() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee4638;
        if (*PTR_m_mutex_100ee4638 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee6030, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100889ad0, 84 bytes, placed by nothing (unplaced)
    // __GLOBAL__sub_I_unity_8_cxx.cxx
    void __GLOBAL__sub_I_unity_8_cxx_cxx() {
        undefined8 uVar1;

        uVar1 = _objc_autoreleasePoolPush();
        ___cxx_global_var_init();
        ___cxx_global_var_init_109();
        ___cxx_global_var_init_117();
        ___cxx_global_var_init_119();
        ___cxx_global_var_init_120();
        ___cxx_global_var_init_188();
        ___cxx_global_var_init_189();
        ___cxx_global_var_init_190();
        ___cxx_global_var_init_194();
        ___cxx_global_var_init_228();
        ___cxx_global_var_init_229();
        _objc_autoreleasePoolPop(uVar1);
    }

} // namespace jag::graphics
