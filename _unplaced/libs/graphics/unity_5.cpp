// _unplaced/libs/graphics/unity_5.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

namespace jag::graphics {
    // 0x103bc03e8, set at startup by ___cxx_global_var_init.167
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> NullSpriteAtlas =
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();

    // 0x104232a60
    uint8_t MAYA_ANIM_INVERT_MATRIX[64];

    // 0x104232aa0
    uint8_t WORLD_ORTHOGONAL[16];

    // 0x104232ab0
    uint8_t fExtraNormFac[24];

    // 0x104232ac8, set at startup by ___cxx_global_var_init.147
    int32_t ComputeCapInt_t1 = sqrt(3.141593);

    // 0x104232acc, set at startup by ___cxx_global_var_init.148
    int32_t ComputeCapInt_t5 = sqrt(3.0);

    // 0x104232ad0, set at startup by ___cxx_global_var_init.149
    int32_t ComputeCapInt_t11 = sqrt(5.0);

    // 0x104232ad4, set at startup by ___cxx_global_var_init.150
    int32_t ComputeCapInt_t18 = sqrt(7.0);

    // 0x104232ad8, set at startup by ___cxx_global_var_init.151
    int32_t ComputeCapInt_t32 = sqrt(11.0);

    // 0x104232adc, set at startup by ___cxx_global_var_init.152
    int32_t SHEvalHemisphereLight_fSqrtPi = sqrt(3.1415927);

    // 0x104232ae0, set at startup by ___cxx_global_var_init.153
    int32_t SHEvalHemisphereLight_fSqrtPi3 = sqrt(1.0471976);

    // 0x104232ae4, set at startup by ___cxx_global_var_init.246
    int32_t fx_2_001 = 1065353216;

    // 0x104232ae8, set at startup by ___cxx_global_var_init.247
    int32_t fx_2_002 = 3212836864;

    // 0x104232aec, set at startup by ___cxx_global_var_init.248
    int32_t fx_2_003 = 3204448256;

    // 0x104232af0, set at startup by ___cxx_global_var_init.249
    int32_t fx_2_004 = 3210589143;

    // 0x104232af4, set at startup by ___cxx_global_var_init.250
    int32_t fx_2_005 = 1056964608;

    // 0x104232af8, set at startup by ___cxx_global_var_init.251
    int32_t fx_3_001 = 3209323202;

    // 0x104232afc, set at startup by ___cxx_global_var_init.252
    int32_t fx_3_002 = 1058849905;

    // 0x104232b00, set at startup by ___cxx_global_var_init.253
    int32_t fx_3_003 = 3212836864;

    // 0x104232b04, set at startup by ___cxx_global_var_init.254
    int32_t fx_3_004 = 3206333553;

    // 0x104232b08, set at startup by ___cxx_global_var_init.255
    int32_t fx_3_008 = 1061839554;

    // 0x104232b0c, set at startup by ___cxx_global_var_init.256
    int32_t fx_3_005 = 3196059648;

    // 0x104232b10, set at startup by ___cxx_global_var_init.257
    int32_t fx_3_006 = 3212304118;

    // 0x104232b14, set at startup by ___cxx_global_var_init.258
    int32_t fx_3_007 = 1048576000;

    // 0x104232b18, set at startup by ___cxx_global_var_init.259
    int32_t fx_4_001 = 3211753297;

    // 0x104232b1c, set at startup by ___cxx_global_var_init.260
    int32_t fx_4_002 = 1052050675;

    // 0x104232b20, set at startup by ___cxx_global_var_init.261
    int32_t fx_4_003 = 3208642560;

    // 0x104232b24, set at startup by ___cxx_global_var_init.262
    int32_t fx_4_004 = 1059673085;

    // 0x104232b28, set at startup by ___cxx_global_var_init.263
    int32_t fx_4_005 = 3199534323;

    // 0x104232b2c, set at startup by ___cxx_global_var_init.264
    int32_t fx_4_006 = 1061158912;

    // 0x104232b30, set at startup by ___cxx_global_var_init.265
    int32_t fx_4_007 = 1052770304;

    // 0x104232b34, set at startup by ___cxx_global_var_init.266
    int32_t fx_4_008 = 1057954749;

    // 0x104232b38, set at startup by ___cxx_global_var_init.267
    int32_t fx_4_009 = 1060982919;

    // 0x104232b3c, set at startup by ___cxx_global_var_init.268
    int32_t fx_4_013 = 1064269649;

    // 0x104232b40, set at startup by ___cxx_global_var_init.269
    int32_t fx_4_010 = 1056964608;

    // 0x104232b44, set at startup by ___cxx_global_var_init.270
    int32_t fx_4_011 = 3207156733;

    // 0x104232b48, set at startup by ___cxx_global_var_init.271
    int32_t fx_4_012 = 1040187392;

    // 0x104232b4c, set at startup by ___cxx_global_var_init.272
    int32_t fx_5_001 = 1060346236;

    // 0x104232b50, set at startup by ___cxx_global_var_init.273
    int32_t fx_5_002 = 3207546223;

    // 0x104232b54, set at startup by ___cxx_global_var_init.274
    int32_t fx_5_003 = 1045062338;

    // 0x104232b58, set at startup by ___cxx_global_var_init.275
    int32_t fx_5_004 = 3204448256;

    // 0x104232b5c, set at startup by ___cxx_global_var_init.276
    int32_t fx_5_005 = 1063105495;

    // 0x104232b60, set at startup by ___cxx_global_var_init.277
    int32_t fx_5_006 = 1057349016;

    // 0x104232b64, set at startup by ___cxx_global_var_init.278
    int32_t fx_5_007 = 1050461297;

    // 0x104232b68, set at startup by ___cxx_global_var_init.279
    int32_t fx_5_008 = 3209405842;

    // 0x104232b6c, set at startup by ___cxx_global_var_init.280
    int32_t fx_5_009 = 1056964608;

    // 0x104232b70, set at startup by ___cxx_global_var_init.281
    int32_t fx_5_010 = 1056431862;

    // 0x104232b74, set at startup by ___cxx_global_var_init.282
    int32_t fx_5_011 = 1059673085;

    // 0x104232b78, set at startup by ___cxx_global_var_init.283
    int32_t fx_5_012 = 1058186358;

    // 0x104232b7c, set at startup by ___cxx_global_var_init.284
    int32_t fx_5_019 = 3207829884;

    // 0x104232b80, set at startup by ___cxx_global_var_init.285
    int32_t fx_5_022 = 3204832664;

    // 0x104232b84, set at startup by ___cxx_global_var_init.286
    int32_t fx_5_023 = 3203915510;

    // 0x104232b88, set at startup by ___cxx_global_var_init.287
    int32_t fx_5_013 = 1040187392;

    // 0x104232b8c, set at startup by ___cxx_global_var_init.288
    int32_t fx_5_014 = 1053778490;

    // 0x104232b90, set at startup by ___cxx_global_var_init.289
    int32_t fx_5_015 = 1063771310;

    // 0x104232b94, set at startup by ___cxx_global_var_init.290
    int32_t fx_5_020 = 1060062575;

    // 0x104232b98, set at startup by ___cxx_global_var_init.291
    int32_t fx_5_016 = 1062207488;

    // 0x104232b9c, set at startup by ___cxx_global_var_init.292
    int32_t fx_5_017 = 3201739163;

    // 0x104232ba0, set at startup by ___cxx_global_var_init.293
    int32_t fx_5_021 = 3192545986;

    // 0x104232ba4
    uint8_t fx_5_018[12];

    // 0x1008ddee0
    void ___cxx_global_var_init(void) {
        Matrix33T<float> local_50;

        math::Matrix33Scaling<float>(1.0, 1.0, -1.0);
        Vector3T<int> local_28;
        new ((Matrix44T<float>*)&MAYA_ANIM_INVERT_MATRIX) math::Matrix44T<float>(local_50, local_28);
    }

    // 0x1008ddf40
    void ___cxx_global_var_init_1(void) {
        new ((ColourHSL*)&WORLD_ORTHOGONAL) math::ColourHSL(-1.5707964, -1.5707964, 0.0);
    }

    // 0x1008ddf60
    void ___cxx_global_var_init_3(void) {
        if (*PTR_VIEWRT_LUMINANCE_ADAPTED_100ee4048 == '\0') {
            if (___cxa_guard_acquire(PTR_VIEWRT_LUMINANCE_ADAPTED_100ee4048) != 0) {
                new (PTR_VIEWRT_LUMINANCE_ADAPTED_100ee5578) HashedString("LUMINANCE_ADAPTED");
                ___cxa_guard_release(PTR_VIEWRT_LUMINANCE_ADAPTED_100ee4048);
            }
        }
    }

    // 0x1008ddfc0
    void ___cxx_global_var_init_4(void) {
        if (*PTR_VIEWRT_LUMINANCE_ADAPTED_PREVIOUS_100ee4058 == '\0') {
            if (___cxa_guard_acquire(PTR_VIEWRT_LUMINANCE_ADAPTED_PREVIOUS_100ee4058) != 0) {
                new (PTR_VIEWRT_LUMINANCE_ADAPTED_PREVIOUS_100ee5588) HashedString("LUMINANCE_ADAPTED_PREVIOUS");
                ___cxa_guard_release(PTR_VIEWRT_LUMINANCE_ADAPTED_PREVIOUS_100ee4058);
            }
        }
    }

    // 0x1008de020
    void ___cxx_global_var_init_6(void) {
        if (*PTR_VIEWRT_LUMINANCE_AVERAGE_100ee4050 == '\0') {
            if (___cxa_guard_acquire(PTR_VIEWRT_LUMINANCE_AVERAGE_100ee4050) != 0) {
                new (PTR_VIEWRT_LUMINANCE_AVERAGE_100ee5580) HashedString("VIEWRT_LUMINANCE_AVERAGE");
                ___cxa_guard_release(PTR_VIEWRT_LUMINANCE_AVERAGE_100ee4050);
            }
        }
    }

    // 0x1008de0c0
    void ___cxx_global_var_init_146(void) {
        float fVar1 = (float)sqrt(3.1415927f);
        fExtraNormFac = fVar1 + fVar1;
        DAT_104232ab4 = (float)sqrt(9.424778f) * 0.6666667f;
        _DAT_104232ab8 = (float)sqrt(15.707964f);
        _DAT_104232ab8 = _DAT_104232ab8 * 0.4;
        _DAT_104232abc = (float)sqrt(21.99115f);
        _DAT_104232abc = _DAT_104232abc * 0.2857143f;
        _DAT_104232ac0 = fVar1 * 0.6666667f;
        fVar1 = (float)sqrt(34.55752f);
        _DAT_104232ac4 = fVar1 * 0.18181819f;
    }

    // 0x1008de2a0
    void ___cxx_global_var_init_201(void) {
        uint8_t* puVar1 = PTR_LOOK_100ee47d8;
        if (*PTR_LOOK_100ee47d8 == '\0') {
            new (PTR_LOOK_100ee66e0) math::ColourHSL(0.0, 0.0, 1.0);
            *puVar1 = 1;
        }
    }

    // 0x1008de2e0
    void ___cxx_global_var_init_202(void) {
        uint8_t* puVar1 = PTR_UP_100ee47c8;
        if (*PTR_UP_100ee47c8 == '\0') {
            new (PTR_UP_100ee66d0) math::ColourHSL(0.0, 1.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x1008de320
    void ___cxx_global_var_init_203(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee4298;
        if (*PTR_m_pSingleton_100ee4298 == '\0') {
            ___cxa_atexit(std::unique_ptr<ThreadPoolSingleton>::~unique_ptr, PTR_m_pSingleton_100ee5948, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1008de360
    void ___cxx_global_var_init_204(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee42a0;
        if (*PTR_m_pSingleton_100ee42a0 == '\0') {
            ___cxa_atexit(std::unique_ptr<ShaderThreadPoolSingleton>::~unique_ptr, PTR_m_pSingleton_100ee5950,
                          4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1008de3a0
    void ___cxx_global_var_init_205(void) {
        uint8_t* puVar1 = PTR_ZERO_100ee4790;
        if (*PTR_ZERO_100ee4790 == '\0') {
            new (PTR_ZERO_100ee6698) math::Point(0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x1008de3d0
    void ___cxx_global_var_init_206(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee4518;
        if (*PTR_m_mutex_100ee4518 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5df0, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1008de410
    void ___cxx_global_var_init_207(void) {
        uint8_t* puVar1 = PTR_ZERO_100ee4800;
        if (*PTR_ZERO_100ee4800 == '\0') {
            new (PTR_ZERO_100ee6708) ImVec4(0.0, 0.0, 0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x1008de450
    void ___cxx_global_var_init_208(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee49c8;
        if (*PTR_m_pSingleton_100ee49c8 == '\0') {
            ___cxa_atexit(std::unique_ptr<render::ShaderProgramManager>::~unique_ptr, PTR_m_pSingleton_100ee6c38,
                          4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1008de490
    void ___cxx_global_var_init_209(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee49d0;
        if (*PTR_m_pSingleton_100ee49d0 == '\0') {
            ___cxa_atexit(std::unique_ptr<render::VertexDeclarationManager>::~unique_ptr, PTR_m_pSingleton_100ee6c40,
                          4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1008de4d0
    void ___cxx_global_var_init_210(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee49a0;
        if (*PTR_m_pSingleton_100ee49a0 == '\0') {
            ___cxa_atexit(std::unique_ptr<render::RenderDevice>::~unique_ptr, PTR_m_pSingleton_100ee6c10, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1008de510
    void ___cxx_global_var_init_211(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee49d8;
        if (*PTR_m_pSingleton_100ee49d8 == '\0') {
            ___cxa_atexit(std::unique_ptr<AnimationManager>::~unique_ptr, PTR_m_pSingleton_100ee6c48, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1008de550
    void ___cxx_global_var_init_212(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee45b0;
        if (*PTR_m_mutex_100ee45b0 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5f20, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1008de590
    void ___cxx_global_var_init_213(void) {
        uint8_t* puVar1 = PTR_ZERO_100ee47e0;
        if (*PTR_ZERO_100ee47e0 == '\0') {
            new (PTR_ZERO_100ee66e8) math::ColourHSL(0.0, 0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x1008de5d0
    void ___cxx_global_var_init_214(void) {
        uint8_t* puVar1 = PTR_ZERO_100ee4820;
        if (*PTR_ZERO_100ee4820 == '\0') {
            new (PTR_ZERO_100ee6728)
                math::Matrix44T<float>(0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x1008de630
    void ___cxx_global_var_init_215(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee45d8;
        if (*PTR_m_mutex_100ee45d8 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5f70, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1008de670
    void ___cxx_global_var_init_216(void) {
        uint8_t* puVar1 = PTR_IDENTITY_100ee4828;
        if (*PTR_IDENTITY_100ee4828 == '\0') {
            new (PTR_IDENTITY_100ee6730)
                math::Matrix44T<float>(1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0);
            *puVar1 = 1;
        }
    }

    // 0x1008de6d0
    void ___cxx_global_var_init_217(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee4590;
        if (*PTR_m_mutex_100ee4590 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5ee0, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1008de710
    void ___cxx_global_var_init_218(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee4290;
        if (*PTR_m_pSingleton_100ee4290 == '\0') {
            ___cxa_atexit(std::unique_ptr<graphicutils::BatchDestroyManager>::~unique_ptr, PTR_m_pSingleton_100ee5940,
                          4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1008de750
    void ___cxx_global_var_init_219(void) {
        uint8_t* puVar1 = PTR_RIGHT_100ee47e8;
        if (*PTR_RIGHT_100ee47e8 == '\0') {
            new (PTR_RIGHT_100ee66f0) math::ColourHSL(1.0, 0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x1008de790
    void ___cxx_global_var_init_220(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee49f0;
        if (*PTR_m_pSingleton_100ee49f0 == '\0') {
            ___cxa_atexit(std::unique_ptr<hardware::HardwareInfo>::~unique_ptr, PTR_m_pSingleton_100ee6c60, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1008de7d0
    void ___cxx_global_var_init_221(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee4520;
        if (*PTR_m_mutex_100ee4520 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5e00, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1008de810
    void ___cxx_global_var_init_222(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee49b8;
        if (*PTR_m_pSingleton_100ee49b8 == '\0') {
            ___cxa_atexit(std::unique_ptr<render::ShaderManager<render::VertexShader>>::~unique_ptr,
                          PTR_m_pSingleton_100ee6c28, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1008de850
    void ___cxx_global_var_init_223(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee49b0;
        if (*PTR_m_pSingleton_100ee49b0 == '\0') {
            ___cxa_atexit(std::unique_ptr<render::ShaderManager<render::PixelShader>>::~unique_ptr,
                          PTR_m_pSingleton_100ee6c20, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1008de890
    void ___cxx_global_var_init_224(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee49a8;
        if (*PTR_m_pSingleton_100ee49a8 == '\0') {
            ___cxa_atexit(std::unique_ptr<render::BuiltinStates>::~unique_ptr, PTR_m_pSingleton_100ee6c18, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1008de8d0
    void ___cxx_global_var_init_225(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee45b8;
        if (*PTR_m_mutex_100ee45b8 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5f30, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1008de910
    void ___cxx_global_var_init_226(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee4978;
        if (*PTR_m_pSingleton_100ee4978 == '\0') {
            ___cxa_atexit(std::unique_ptr<PrimitiveShaderFamily>::~unique_ptr, PTR_m_pSingleton_100ee6be8, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1008de950
    void ___cxx_global_var_init_227(void) {
        uint8_t* puVar1 = PTR_UP_100ee47a8;
        if (*PTR_UP_100ee47a8 == '\0') {
            new (PTR_UP_100ee66b0) math::Vector3T(0.0, 1.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x1008de990
    void ___cxx_global_var_init_228(void) {
        uint8_t* puVar1 = PTR_RIGHT_100ee47c0;
        if (*PTR_RIGHT_100ee47c0 == '\0') {
            new (PTR_RIGHT_100ee66c8) math::Vector3T(1.0, 0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x1008de9d0
    void ___cxx_global_var_init_229(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee4548;
        if (*PTR_m_mutex_100ee4548 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5e50, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1008dea10
    void ___cxx_global_var_init_230(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee45a8;
        if (*PTR_m_mutex_100ee45a8 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5f10, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1008ded50
    void ___cxx_global_var_init_294(void) {
        fx_5_018 = 1031798784;
    }

    // 0x1008ded60
    void __GLOBAL__sub_I_unity_5_cxx_cxx(void) {
        uint64_t uVar1 = _objc_autoreleasePoolPush();
        ___cxx_global_var_init();
        ___cxx_global_var_init_1();
        ___cxx_global_var_init_142();
        ___cxx_global_var_init_146();
        ___cxx_global_var_init_147();
        ___cxx_global_var_init_148();
        ___cxx_global_var_init_149();
        ___cxx_global_var_init_150();
        ___cxx_global_var_init_151();
        ___cxx_global_var_init_152();
        ___cxx_global_var_init_153();
        ___cxx_global_var_init_246();
        ___cxx_global_var_init_247();
        ___cxx_global_var_init_248();
        ___cxx_global_var_init_249();
        ___cxx_global_var_init_250();
        ___cxx_global_var_init_251();
        ___cxx_global_var_init_252();
        ___cxx_global_var_init_253();
        ___cxx_global_var_init_254();
        ___cxx_global_var_init_256();
        ___cxx_global_var_init_257();
        ___cxx_global_var_init_258();
        ___cxx_global_var_init_255();
        ___cxx_global_var_init_259();
        ___cxx_global_var_init_260();
        ___cxx_global_var_init_261();
        ___cxx_global_var_init_262();
        ___cxx_global_var_init_263();
        ___cxx_global_var_init_264();
        ___cxx_global_var_init_265();
        ___cxx_global_var_init_266();
        ___cxx_global_var_init_267();
        ___cxx_global_var_init_269();
        ___cxx_global_var_init_270();
        ___cxx_global_var_init_271();
        ___cxx_global_var_init_268();
        ___cxx_global_var_init_272();
        ___cxx_global_var_init_273();
        ___cxx_global_var_init_274();
        ___cxx_global_var_init_275();
        ___cxx_global_var_init_276();
        ___cxx_global_var_init_277();
        ___cxx_global_var_init_278();
        ___cxx_global_var_init_279();
        ___cxx_global_var_init_280();
        ___cxx_global_var_init_281();
        ___cxx_global_var_init_282();
        ___cxx_global_var_init_283();
        ___cxx_global_var_init_287();
        ___cxx_global_var_init_288();
        ___cxx_global_var_init_289();
        ___cxx_global_var_init_291();
        ___cxx_global_var_init_292();
        ___cxx_global_var_init_294();
        ___cxx_global_var_init_284();
        ___cxx_global_var_init_290();
        ___cxx_global_var_init_293();
        ___cxx_global_var_init_285();
        ___cxx_global_var_init_286();
        ___cxx_global_var_init_167();
        _objc_autoreleasePoolPop(uVar1);
    }

} // namespace jag::graphics

namespace jag::constants {
    // 0x100d4b7c0
    int32_t LightConstants::ATTENUATIONFALLOFF_MIN = 1036831949;

    // 0x100d4b7c4
    float LightConstants::ATTENUATIONFALLOFF_MAX = 10.0f;

    // 0x100d4b7c8
    int32_t LightConstants::BACKLIGHTRATIO_MIN = 0;

    // 0x100d4b7cc
    float LightConstants::BACKLIGHTRATIO_MAX = 1.0f;

} // namespace jag::constants

namespace jag {
    // 0x100d4b7d0
    int32_t MAX_SHADOW_MAP_CASCADE_RES = 8192;

    // 0x100d4b7d4
    int32_t MAX_ATLAS_CASCADES[61] = {
        4,           1036831949,  1167867904,  -948049920,  973279855,  1142292480, 1145569280,  1049774373,
        1226581760,  1114636288,  1132396544,  1084227584,  1198153728, 1065353214, -1073741824, -1077936128,
        -1054867456, 1101499702,  -1045160396, -1045983946, 1101004800, 1105159924, -1049065233, 1052389004,
        1089601536,  -1082893033, 1065091072,  981467136,   0,          0,          0,           1065353216,
        1065353216,  1065353216,  1065353216,  60,          10,         1,          1,           0,
        0,           0,           -1,          1,           0,          0,          0,           0,
        1057727209,  1062302813,  1064590615,  0,           1061158912, 1064304640, 1065091072,  0,
        1,           2,           0,           2,           3,
    };

    // 0x100f44170
    int32_t gOrthoFrustumFitNames__[12] = {0, 0, 14734339, 1, 1, 0, 14734356, 1, 2, 0, 14734376, 1};

    // 0x103bc03d8, set at startup by ___cxx_global_var_init.142
    StringEnum gOrthoFrustumFitNames = StringEnum((StringEnumEntry*)&gOrthoFrustumFitNames__, 3);

} // namespace jag
