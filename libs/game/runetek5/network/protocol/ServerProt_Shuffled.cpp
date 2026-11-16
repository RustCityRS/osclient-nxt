// libs/game/runetek5/network/protocol/ServerProt_Shuffled.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.game.runetek5

// 0x1004aa360, 64 bytes, placed by debug map only (low confidence)
// ___cxx_global_var_init.694
void ___cxx_global_var_init_694() {
    undefined* puVar1;

    puVar1 = PTR_LOOK_100ee47d8;
    if (*PTR_LOOK_100ee47d8 == '\0') {
        new (PTR_LOOK_100ee66e0) jag::math::ColourHSL(0.0, 0.0, 1.0);
        *puVar1 = 1;
    }
}

// 0x1004aa3a0, 64 bytes, placed by debug map only (low confidence)
// ___cxx_global_var_init.695
void ___cxx_global_var_init_695() {
    undefined* puVar1;

    puVar1 = PTR_UP_100ee47c8;
    if (*PTR_UP_100ee47c8 == '\0') {
        new (PTR_UP_100ee66d0) jag::math::ColourHSL(0.0, 1.0, 0.0);
        *puVar1 = 1;
    }
}

// 0x1004aa3e0, 64 bytes, placed by debug map only (low confidence)
// ___cxx_global_var_init.696
void ___cxx_global_var_init_696() {
    undefined* puVar1;

    puVar1 = PTR_m_pSingleton_100ee4298;
    if (*PTR_m_pSingleton_100ee4298 == '\0') {
        ___cxa_atexit(
            std::unique_ptr<jag::ThreadPoolSingleton, std::default_delete<jag::ThreadPoolSingleton>>::~unique_ptr,
            PTR_m_pSingleton_100ee5948, 4294967296);
        *puVar1 = 1;
    }
}

// 0x1004aa420, 64 bytes, placed by debug map only (low confidence)
// ___cxx_global_var_init.697
void ___cxx_global_var_init_697() {
    undefined* puVar1;

    puVar1 = PTR_m_pSingleton_100ee42a0;
    if (*PTR_m_pSingleton_100ee42a0 == '\0') {
        ___cxa_atexit(std::unique_ptr<jag::ShaderThreadPoolSingleton,
                                      std::default_delete<jag::ShaderThreadPoolSingleton>>::~unique_ptr,
                      PTR_m_pSingleton_100ee5950, 4294967296);
        *puVar1 = 1;
    }
}

// 0x1004aa460, 48 bytes, placed by debug map only (low confidence)
// ___cxx_global_var_init.698
void ___cxx_global_var_init_698() {
    undefined* puVar1;

    puVar1 = PTR_ZERO_100ee4790;
    if (*PTR_ZERO_100ee4790 == '\0') {
        new (PTR_ZERO_100ee6698) jag::math::Point<float>(0.0, 0.0);
        *puVar1 = 1;
    }
}

// 0x1004aa490, 64 bytes, placed by debug map only (low confidence)
// ___cxx_global_var_init.699
void ___cxx_global_var_init_699() {
    undefined* puVar1;

    puVar1 = PTR_m_mutex_100ee4518;
    if (*PTR_m_mutex_100ee4518 == '\0') {
        ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5df0, 4294967296);
        *puVar1 = 1;
    }
}

// 0x1004aa4d0, 64 bytes, placed by debug map only (low confidence)
// ___cxx_global_var_init.700
void ___cxx_global_var_init_700() {
    undefined* puVar1;

    puVar1 = PTR_ZERO_100ee4800;
    if (*PTR_ZERO_100ee4800 == '\0') {
        new (PTR_ZERO_100ee6708) ImVec4(0.0, 0.0, 0.0, 0.0);
        *puVar1 = 1;
    }
}

// 0x1004aa510, 64 bytes, placed by debug map only (low confidence)
// ___cxx_global_var_init.701
void ___cxx_global_var_init_701() {
    undefined* puVar1;

    puVar1 = PTR_m_pSingleton_100ee49c8;
    if (*PTR_m_pSingleton_100ee49c8 == '\0') {
        ___cxa_atexit(std::unique_ptr<jag::render::ShaderProgramManager,
                                      std::default_delete<jag::render::ShaderProgramManager>>::~unique_ptr,
                      PTR_m_pSingleton_100ee6c38, 4294967296);
        *puVar1 = 1;
    }
}

// 0x1004aa550, 64 bytes, placed by debug map only (low confidence)
// ___cxx_global_var_init.702
void ___cxx_global_var_init_702() {
    undefined* puVar1;

    puVar1 = PTR_m_pSingleton_100ee49d0;
    if (*PTR_m_pSingleton_100ee49d0 == '\0') {
        ___cxa_atexit(std::unique_ptr<jag::render::VertexDeclarationManager,
                                      std::default_delete<jag::render::VertexDeclarationManager>>::~unique_ptr,
                      PTR_m_pSingleton_100ee6c40, 4294967296);
        *puVar1 = 1;
    }
}

// 0x1004aa590, 1784 bytes, placed by debug map only (low confidence)
// __GLOBAL__sub_I_unity_32_cxx.cxx
void __GLOBAL__sub_I_unity_32_cxx_cxx() {
    undefined8 uVar1;

    uVar1 = _objc_autoreleasePoolPush();
    ___cxx_global_var_init();
    ___cxx_global_var_init_8();
    ___cxx_global_var_init_19();
    ___cxx_global_var_init_20();
    ___cxx_global_var_init_22();
    ___cxx_global_var_init_24();
    ___cxx_global_var_init_26();
    ___cxx_global_var_init_28();
    ___cxx_global_var_init_30();
    ___cxx_global_var_init_32();
    ___cxx_global_var_init_34();
    ___cxx_global_var_init_36();
    ___cxx_global_var_init_38();
    ___cxx_global_var_init_40();
    ___cxx_global_var_init_42();
    ___cxx_global_var_init_44();
    ___cxx_global_var_init_46();
    ___cxx_global_var_init_48();
    ___cxx_global_var_init_50();
    ___cxx_global_var_init_52();
    ___cxx_global_var_init_54();
    ___cxx_global_var_init_56();
    ___cxx_global_var_init_58();
    ___cxx_global_var_init_60();
    ___cxx_global_var_init_62();
    ___cxx_global_var_init_64();
    ___cxx_global_var_init_66();
    ___cxx_global_var_init_68();
    ___cxx_global_var_init_70();
    ___cxx_global_var_init_72();
    ___cxx_global_var_init_74();
    ___cxx_global_var_init_76();
    ___cxx_global_var_init_78();
    ___cxx_global_var_init_80();
    ___cxx_global_var_init_82();
    ___cxx_global_var_init_84();
    ___cxx_global_var_init_86();
    ___cxx_global_var_init_88();
    ___cxx_global_var_init_90();
    ___cxx_global_var_init_92();
    ___cxx_global_var_init_94();
    ___cxx_global_var_init_96();
    ___cxx_global_var_init_98();
    ___cxx_global_var_init_100();
    ___cxx_global_var_init_102();
    ___cxx_global_var_init_104();
    ___cxx_global_var_init_106();
    ___cxx_global_var_init_108();
    ___cxx_global_var_init_110();
    ___cxx_global_var_init_112();
    ___cxx_global_var_init_114();
    ___cxx_global_var_init_116();
    ___cxx_global_var_init_118();
    ___cxx_global_var_init_120();
    ___cxx_global_var_init_122();
    ___cxx_global_var_init_124();
    ___cxx_global_var_init_126();
    ___cxx_global_var_init_128();
    ___cxx_global_var_init_130();
    ___cxx_global_var_init_132();
    ___cxx_global_var_init_134();
    ___cxx_global_var_init_136();
    ___cxx_global_var_init_138();
    ___cxx_global_var_init_140();
    ___cxx_global_var_init_142();
    ___cxx_global_var_init_144();
    ___cxx_global_var_init_146();
    ___cxx_global_var_init_148();
    ___cxx_global_var_init_150();
    ___cxx_global_var_init_152();
    ___cxx_global_var_init_154();
    ___cxx_global_var_init_156();
    ___cxx_global_var_init_158();
    ___cxx_global_var_init_160();
    ___cxx_global_var_init_162();
    ___cxx_global_var_init_164();
    ___cxx_global_var_init_166();
    ___cxx_global_var_init_168();
    ___cxx_global_var_init_170();
    ___cxx_global_var_init_172();
    ___cxx_global_var_init_174();
    ___cxx_global_var_init_176();
    ___cxx_global_var_init_178();
    ___cxx_global_var_init_180();
    ___cxx_global_var_init_182();
    ___cxx_global_var_init_184();
    ___cxx_global_var_init_186();
    ___cxx_global_var_init_188();
    ___cxx_global_var_init_190();
    ___cxx_global_var_init_192();
    ___cxx_global_var_init_194();
    ___cxx_global_var_init_196();
    ___cxx_global_var_init_198();
    ___cxx_global_var_init_200();
    ___cxx_global_var_init_202();
    ___cxx_global_var_init_204();
    ___cxx_global_var_init_206();
    ___cxx_global_var_init_208();
    ___cxx_global_var_init_210();
    ___cxx_global_var_init_212();
    ___cxx_global_var_init_214();
    ___cxx_global_var_init_216();
    ___cxx_global_var_init_218();
    ___cxx_global_var_init_220();
    ___cxx_global_var_init_222();
    ___cxx_global_var_init_224();
    ___cxx_global_var_init_226();
    ___cxx_global_var_init_228();
    ___cxx_global_var_init_230();
    ___cxx_global_var_init_232();
    ___cxx_global_var_init_234();
    ___cxx_global_var_init_236();
    ___cxx_global_var_init_238();
    ___cxx_global_var_init_240();
    ___cxx_global_var_init_242();
    ___cxx_global_var_init_244();
    ___cxx_global_var_init_246();
    ___cxx_global_var_init_248();
    ___cxx_global_var_init_250();
    ___cxx_global_var_init_252();
    ___cxx_global_var_init_254();
    ___cxx_global_var_init_256();
    ___cxx_global_var_init_258();
    ___cxx_global_var_init_260();
    ___cxx_global_var_init_262();
    ___cxx_global_var_init_264();
    ___cxx_global_var_init_266();
    ___cxx_global_var_init_268();
    ___cxx_global_var_init_270();
    ___cxx_global_var_init_272();
    ___cxx_global_var_init_274();
    ___cxx_global_var_init_276();
    ___cxx_global_var_init_278();
    ___cxx_global_var_init_280();
    ___cxx_global_var_init_281();
    ___cxx_global_var_init_282();
    ___cxx_global_var_init_283();
    ___cxx_global_var_init_284();
    ___cxx_global_var_init_285();
    ___cxx_global_var_init_286();
    ___cxx_global_var_init_287();
    ___cxx_global_var_init_288();
    ___cxx_global_var_init_289();
    ___cxx_global_var_init_290();
    ___cxx_global_var_init_291();
    ___cxx_global_var_init_292();
    ___cxx_global_var_init_293();
    ___cxx_global_var_init_294();
    ___cxx_global_var_init_295();
    ___cxx_global_var_init_296();
    ___cxx_global_var_init_297();
    ___cxx_global_var_init_298();
    ___cxx_global_var_init_300();
    ___cxx_global_var_init_302();
    ___cxx_global_var_init_304();
    ___cxx_global_var_init_306();
    ___cxx_global_var_init_308();
    ___cxx_global_var_init_310();
    ___cxx_global_var_init_312();
    ___cxx_global_var_init_314();
    ___cxx_global_var_init_316();
    ___cxx_global_var_init_318();
    ___cxx_global_var_init_320();
    ___cxx_global_var_init_322();
    ___cxx_global_var_init_324();
    ___cxx_global_var_init_326();
    ___cxx_global_var_init_328();
    ___cxx_global_var_init_330();
    ___cxx_global_var_init_332();
    ___cxx_global_var_init_334();
    ___cxx_global_var_init_336();
    ___cxx_global_var_init_338();
    ___cxx_global_var_init_340();
    ___cxx_global_var_init_342();
    ___cxx_global_var_init_344();
    ___cxx_global_var_init_346();
    ___cxx_global_var_init_348();
    ___cxx_global_var_init_350();
    ___cxx_global_var_init_352();
    ___cxx_global_var_init_354();
    ___cxx_global_var_init_356();
    ___cxx_global_var_init_358();
    ___cxx_global_var_init_360();
    ___cxx_global_var_init_362();
    ___cxx_global_var_init_364();
    ___cxx_global_var_init_366();
    ___cxx_global_var_init_368();
    ___cxx_global_var_init_370();
    ___cxx_global_var_init_372();
    ___cxx_global_var_init_374();
    ___cxx_global_var_init_376();
    ___cxx_global_var_init_378();
    ___cxx_global_var_init_380();
    ___cxx_global_var_init_382();
    ___cxx_global_var_init_384();
    ___cxx_global_var_init_386();
    ___cxx_global_var_init_388();
    ___cxx_global_var_init_390();
    ___cxx_global_var_init_392();
    ___cxx_global_var_init_394();
    ___cxx_global_var_init_396();
    ___cxx_global_var_init_398();
    ___cxx_global_var_init_400();
    ___cxx_global_var_init_402();
    ___cxx_global_var_init_404();
    ___cxx_global_var_init_406();
    ___cxx_global_var_init_408();
    ___cxx_global_var_init_410();
    ___cxx_global_var_init_412();
    ___cxx_global_var_init_414();
    ___cxx_global_var_init_416();
    ___cxx_global_var_init_418();
    ___cxx_global_var_init_420();
    ___cxx_global_var_init_422();
    ___cxx_global_var_init_424();
    ___cxx_global_var_init_426();
    ___cxx_global_var_init_428();
    ___cxx_global_var_init_430();
    ___cxx_global_var_init_432();
    ___cxx_global_var_init_434();
    ___cxx_global_var_init_436();
    ___cxx_global_var_init_438();
    ___cxx_global_var_init_439();
    ___cxx_global_var_init_441();
    ___cxx_global_var_init_443();
    ___cxx_global_var_init_445();
    ___cxx_global_var_init_446();
    ___cxx_global_var_init_448();
    ___cxx_global_var_init_450();
    ___cxx_global_var_init_452();
    ___cxx_global_var_init_454();
    ___cxx_global_var_init_456();
    ___cxx_global_var_init_458();
    ___cxx_global_var_init_460();
    ___cxx_global_var_init_462();
    ___cxx_global_var_init_464();
    ___cxx_global_var_init_466();
    ___cxx_global_var_init_468();
    ___cxx_global_var_init_470();
    ___cxx_global_var_init_472();
    ___cxx_global_var_init_474();
    ___cxx_global_var_init_476();
    ___cxx_global_var_init_478();
    ___cxx_global_var_init_480();
    ___cxx_global_var_init_482();
    ___cxx_global_var_init_484();
    ___cxx_global_var_init_486();
    ___cxx_global_var_init_488();
    ___cxx_global_var_init_490();
    ___cxx_global_var_init_492();
    ___cxx_global_var_init_494();
    ___cxx_global_var_init_496();
    ___cxx_global_var_init_498();
    ___cxx_global_var_init_500();
    ___cxx_global_var_init_502();
    ___cxx_global_var_init_504();
    ___cxx_global_var_init_506();
    ___cxx_global_var_init_508();
    ___cxx_global_var_init_510();
    ___cxx_global_var_init_512();
    ___cxx_global_var_init_514();
    ___cxx_global_var_init_516();
    ___cxx_global_var_init_518();
    ___cxx_global_var_init_520();
    ___cxx_global_var_init_522();
    ___cxx_global_var_init_524();
    ___cxx_global_var_init_526();
    ___cxx_global_var_init_528();
    ___cxx_global_var_init_530();
    ___cxx_global_var_init_531();
    ___cxx_global_var_init_533();
    ___cxx_global_var_init_535();
    ___cxx_global_var_init_537();
    ___cxx_global_var_init_539();
    ___cxx_global_var_init_541();
    ___cxx_global_var_init_543();
    ___cxx_global_var_init_545();
    ___cxx_global_var_init_547();
    ___cxx_global_var_init_549();
    ___cxx_global_var_init_551();
    ___cxx_global_var_init_553();
    ___cxx_global_var_init_555();
    ___cxx_global_var_init_557();
    ___cxx_global_var_init_559();
    ___cxx_global_var_init_561();
    ___cxx_global_var_init_563();
    ___cxx_global_var_init_564();
    ___cxx_global_var_init_566();
    ___cxx_global_var_init_568();
    ___cxx_global_var_init_570();
    ___cxx_global_var_init_572();
    ___cxx_global_var_init_574();
    ___cxx_global_var_init_576();
    ___cxx_global_var_init_578();
    ___cxx_global_var_init_580();
    ___cxx_global_var_init_582();
    ___cxx_global_var_init_584();
    ___cxx_global_var_init_586();
    ___cxx_global_var_init_588();
    ___cxx_global_var_init_590();
    ___cxx_global_var_init_592();
    ___cxx_global_var_init_594();
    ___cxx_global_var_init_596();
    ___cxx_global_var_init_598();
    ___cxx_global_var_init_600();
    ___cxx_global_var_init_602();
    ___cxx_global_var_init_604();
    ___cxx_global_var_init_606();
    ___cxx_global_var_init_608();
    ___cxx_global_var_init_610();
    ___cxx_global_var_init_612();
    ___cxx_global_var_init_614();
    ___cxx_global_var_init_616();
    ___cxx_global_var_init_618();
    ___cxx_global_var_init_620();
    ___cxx_global_var_init_622();
    ___cxx_global_var_init_624();
    ___cxx_global_var_init_626();
    ___cxx_global_var_init_628();
    ___cxx_global_var_init_630();
    ___cxx_global_var_init_632();
    ___cxx_global_var_init_634();
    ___cxx_global_var_init_636();
    ___cxx_global_var_init_638();
    ___cxx_global_var_init_640();
    ___cxx_global_var_init_642();
    ___cxx_global_var_init_644();
    ___cxx_global_var_init_646();
    ___cxx_global_var_init_648();
    ___cxx_global_var_init_650();
    ___cxx_global_var_init_652();
    ___cxx_global_var_init_654();
    ___cxx_global_var_init_656();
    ___cxx_global_var_init_658();
    ___cxx_global_var_init_660();
    ___cxx_global_var_init_662();
    ___cxx_global_var_init_664();
    ___cxx_global_var_init_666();
    ___cxx_global_var_init_668();
    ___cxx_global_var_init_670();
    ___cxx_global_var_init_672();
    ___cxx_global_var_init_674();
    ___cxx_global_var_init_676();
    ___cxx_global_var_init_678();
    ___cxx_global_var_init_680();
    ___cxx_global_var_init_682();
    ___cxx_global_var_init_684();
    ___cxx_global_var_init_686();
    ___cxx_global_var_init_688();
    ___cxx_global_var_init_690();
    ___cxx_global_var_init_692();
    _objc_autoreleasePoolPop(uVar1);
}
