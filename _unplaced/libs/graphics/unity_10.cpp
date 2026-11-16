// _unplaced/libs/graphics/unity_10.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

namespace jag::graphics {
    // 0x100d4abfc, 4 bytes, __const
    DEF_RS_MIN_BLACK_LUM = 1008981770;

    // 0x100d4ac00, 4 bytes, __const
    float DEF_RS_MAX_WHITE_LUM = 1.5f;

    // 0x100d4ac04, 4 bytes, __const
    DEF_RS_EXPOSURE_KEY = 1057803469;

    // 0x100d4ac08, 4 bytes, __const
    float DEF_RS_MAX_AUTO_EXPOSURE = 3.0f;

    // 0x104232520, 64 bytes, __bss; zero-initialised
    MAYA_ANIM_INVERT_MATRIX;

    // 0x104232560, 16 bytes, __bss; zero-initialised
    WORLD_ORTHOGONAL;

    // 0x1008042d0, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init
    void ___cxx_global_var_init() {
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

    // 0x100804310, 96 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.2
    void ___cxx_global_var_init_2() {
        undefined1 local_50[40];
        Vector3T<int> local_28[16];

        math::Matrix33Scaling<float>((math*)local_50, 1.0, 1.0, -1.0);
        math::Vector3T<int>::Vector3T(local_28);
        new (&MAYA_ANIM_INVERT_MATRIX) math::Matrix44T<float>(local_50, local_28);
    }

    // 0x100804370, 32 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.3
    void ___cxx_global_var_init_3() {
        new (&WORLD_ORTHOGONAL) math::ColourHSL(-1.5707964, -1.5707964, 0.0);
    }

    // 0x100804390, 96 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.4
    void ___cxx_global_var_init_4() {
        if (*PTR_VIEWRT_LUMINANCE_ADAPTED_100ee4048 == '\0') {
            if (___cxa_guard_acquire(PTR_VIEWRT_LUMINANCE_ADAPTED_100ee4048) != 0) {
                new (PTR_VIEWRT_LUMINANCE_ADAPTED_100ee5578) HashedString("LUMINANCE_ADAPTED");
                ___cxa_guard_release(PTR_VIEWRT_LUMINANCE_ADAPTED_100ee4048);
            }
        }
    }

    // 0x1008043f0, 96 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.6
    void ___cxx_global_var_init_6() {
        if (*PTR_VIEWRT_LUMINANCE_ADAPTED_PREVIOUS_100ee4058 == '\0') {
            if (___cxa_guard_acquire(PTR_VIEWRT_LUMINANCE_ADAPTED_PREVIOUS_100ee4058) != 0) {
                new (PTR_VIEWRT_LUMINANCE_ADAPTED_PREVIOUS_100ee5588) HashedString("LUMINANCE_ADAPTED_PREVIOUS");
                ___cxa_guard_release(PTR_VIEWRT_LUMINANCE_ADAPTED_PREVIOUS_100ee4058);
            }
        }
    }

    // 0x100804450, 96 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.8
    void ___cxx_global_var_init_8() {
        if (*PTR_VIEWRT_LUMINANCE_AVERAGE_100ee4050 == '\0') {
            if (___cxa_guard_acquire(PTR_VIEWRT_LUMINANCE_AVERAGE_100ee4050) != 0) {
                new (PTR_VIEWRT_LUMINANCE_AVERAGE_100ee5580) HashedString("VIEWRT_LUMINANCE_AVERAGE");
                ___cxa_guard_release(PTR_VIEWRT_LUMINANCE_AVERAGE_100ee4050);
            }
        }
    }

    // 0x1008046b0, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.256
    void ___cxx_global_var_init_256() {
        undefined* puVar1;

        puVar1 = PTR_LOOK_100ee47d8;
        if (*PTR_LOOK_100ee47d8 == '\0') {
            new (PTR_LOOK_100ee66e0) math::ColourHSL(0.0, 0.0, 1.0);
            *puVar1 = 1;
        }
    }

    // 0x1008046f0, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.257
    void ___cxx_global_var_init_257() {
        undefined* puVar1;

        puVar1 = PTR_UP_100ee47c8;
        if (*PTR_UP_100ee47c8 == '\0') {
            new (PTR_UP_100ee66d0) math::ColourHSL(0.0, 1.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x100804730, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.258
    void ___cxx_global_var_init_258() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee4298;
        if (*PTR_m_pSingleton_100ee4298 == '\0') {
            ___cxa_atexit(std::unique_ptr<ThreadPoolSingleton, std::default_delete<ThreadPoolSingleton>>::~unique_ptr,
                          PTR_m_pSingleton_100ee5948, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100804770, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.259
    void ___cxx_global_var_init_259() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee42a0;
        if (*PTR_m_pSingleton_100ee42a0 == '\0') {
            ___cxa_atexit(
                std::unique_ptr<ShaderThreadPoolSingleton, std::default_delete<ShaderThreadPoolSingleton>>::~unique_ptr,
                PTR_m_pSingleton_100ee5950, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1008047b0, 48 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.260
    void ___cxx_global_var_init_260() {
        undefined* puVar1;

        puVar1 = PTR_ZERO_100ee4790;
        if (*PTR_ZERO_100ee4790 == '\0') {
            new (PTR_ZERO_100ee6698) math::Point<float>(0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x1008047e0, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.261
    void ___cxx_global_var_init_261() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee4518;
        if (*PTR_m_mutex_100ee4518 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5df0, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100804820, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.262
    void ___cxx_global_var_init_262() {
        undefined* puVar1;

        puVar1 = PTR_ZERO_100ee4800;
        if (*PTR_ZERO_100ee4800 == '\0') {
            new (PTR_ZERO_100ee6708) ImVec4(0.0, 0.0, 0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x100804860, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.263
    void ___cxx_global_var_init_263() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee49c8;
        if (*PTR_m_pSingleton_100ee49c8 == '\0') {
            ___cxa_atexit(std::unique_ptr<render::ShaderProgramManager,
                                          std::default_delete<render::ShaderProgramManager>>::~unique_ptr,
                          PTR_m_pSingleton_100ee6c38, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1008048a0, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.264
    void ___cxx_global_var_init_264() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee49d0;
        if (*PTR_m_pSingleton_100ee49d0 == '\0') {
            ___cxa_atexit(std::unique_ptr<render::VertexDeclarationManager,
                                          std::default_delete<render::VertexDeclarationManager>>::~unique_ptr,
                          PTR_m_pSingleton_100ee6c40, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1008048e0, 96 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.265
    void ___cxx_global_var_init_265() {
        undefined* puVar1;

        puVar1 = PTR_IDENTITY_100ee4828;
        if (*PTR_IDENTITY_100ee4828 == '\0') {
            new (PTR_IDENTITY_100ee6730)
                math::Matrix44T<float>(1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0);
            *puVar1 = 1;
        }
    }

    // 0x100804940, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.266
    void ___cxx_global_var_init_266() {
        undefined* puVar1;

        puVar1 = PTR_ZERO_100ee47e0;
        if (*PTR_ZERO_100ee47e0 == '\0') {
            new (PTR_ZERO_100ee66e8) math::ColourHSL(0.0, 0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x100804980, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.267
    void ___cxx_global_var_init_267() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee4590;
        if (*PTR_m_mutex_100ee4590 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5ee0, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1008049c0, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.268
    void ___cxx_global_var_init_268() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee49d8;
        if (*PTR_m_pSingleton_100ee49d8 == '\0') {
            ___cxa_atexit(std::unique_ptr<AnimationManager, std::default_delete<AnimationManager>>::~unique_ptr,
                          PTR_m_pSingleton_100ee6c48, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100804a00, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.269
    void ___cxx_global_var_init_269() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee49a0;
        if (*PTR_m_pSingleton_100ee49a0 == '\0') {
            ___cxa_atexit(std::unique_ptr<render::RenderDevice, std::default_delete<render::RenderDevice>>::~unique_ptr,
                          PTR_m_pSingleton_100ee6c10, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100804a40, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.270
    void ___cxx_global_var_init_270() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee45b0;
        if (*PTR_m_mutex_100ee45b0 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5f20, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100804a80, 96 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.271
    void ___cxx_global_var_init_271() {
        undefined* puVar1;

        puVar1 = PTR_ZERO_100ee4820;
        if (*PTR_ZERO_100ee4820 == '\0') {
            new (PTR_ZERO_100ee6728)
                math::Matrix44T<float>(0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x100804ae0, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.272
    void ___cxx_global_var_init_272() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee45d8;
        if (*PTR_m_mutex_100ee45d8 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5f70, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100804b20, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.273
    void ___cxx_global_var_init_273() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee4290;
        if (*PTR_m_pSingleton_100ee4290 == '\0') {
            ___cxa_atexit(std::unique_ptr<graphicutils::BatchDestroyManager,
                                          std::default_delete<graphicutils::BatchDestroyManager>>::~unique_ptr,
                          PTR_m_pSingleton_100ee5940, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100804b60, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.274
    void ___cxx_global_var_init_274() {
        undefined* puVar1;

        puVar1 = PTR_RIGHT_100ee47e8;
        if (*PTR_RIGHT_100ee47e8 == '\0') {
            new (PTR_RIGHT_100ee66f0) math::ColourHSL(1.0, 0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x100804ba0, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.275
    void ___cxx_global_var_init_275() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee4520;
        if (*PTR_m_mutex_100ee4520 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5e00, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100804be0, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.276
    void ___cxx_global_var_init_276() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee4570;
        if (*PTR_m_mutex_100ee4570 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5ea0, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100804c20, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.277
    void ___cxx_global_var_init_277() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee49a8;
        if (*PTR_m_pSingleton_100ee49a8 == '\0') {
            ___cxa_atexit(
                std::unique_ptr<render::BuiltinStates, std::default_delete<render::BuiltinStates>>::~unique_ptr,
                PTR_m_pSingleton_100ee6c18, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100804c60, 79 bytes, placed by nothing (unplaced)
    // __GLOBAL__sub_I_unity_10_cxx.cxx
    void __GLOBAL__sub_I_unity_10_cxx_cxx() {
        undefined8 uVar1;

        uVar1 = _objc_autoreleasePoolPush();
        ___cxx_global_var_init_2();
        ___cxx_global_var_init_3();
        ___cxx_global_var_init_10();
        ___cxx_global_var_init_11();
        ___cxx_global_var_init_141();
        ___cxx_global_var_init_146();
        ___cxx_global_var_init_153();
        ___cxx_global_var_init_158();
        ___cxx_global_var_init_162();
        ___cxx_global_var_init_247();
        _objc_autoreleasePoolPop(uVar1);
    }

} // namespace jag::graphics

namespace jag::postprocess {
    // 0x100d4ac0c, 4 bytes, __const
    DEF_MIN_BLACK_LUM = 0;

    // 0x100d4ac10, 4 bytes, __const
    float DEF_MAX_WHITE_LUM = 5.25f;

    // 0x100d4ac14, 4 bytes, __const
    float DEF_EXPOSURE_KEY = 2.75f;

    // 0x100d4ac18, 4 bytes, __const
    DEF_MIN_AUTO_EXPOSURE = 0;

    // 0x100d4ac1c, 4 bytes, __const
    float DEF_MAX_AUTO_EXPOSURE = 5.0f;

    // 0x100d4ac20, 256 bytes, __const
    DEF_EXPOSURE_SPEED_MUL = {
        1056964608,  1,           2,           0,           0,          0,          -1,          2,
        3,           3,           1065017672,  1266679807,  1065355674, 1069715292, -1216282237, 1176697056,
        1284300428,  1267966026,  1285505015,  0,           -1,         1,          1,           0,
        998277249,   931201411,   998277249,   931201411,   -2,         -2,         -2,          -2,
        -1082130432, -1082130432, -1082130432, -1082130432, 1056964608, 1056964608, 1056964608,  1056964608,
        50462976,    117835012,   185207048,   252579084,   2014384656, 493506323,  387273297,   437852182,
        522074167,   589439264,   457120805,   842084417,   875772270,  1144859189, 791435840,   1950695020,
        6118471,     67305985,    185206790,   269356300,   491720978,  387338833,  457120024,   4537921,
    };

} // namespace jag::postprocess

namespace jag::graphics::particlemodules {
    // 0x100f14bd8, 88 bytes, __const
    ModuleTypeIdNames = {
        "FLOW",  "COLOUR", "GRAVITY",  "TRIGGERPLANE", "ATTRACTOR", "ROTATION",
        "SCALE", "NOISE",  "FLIPBOOK", "ACCELERATION", "LIGHTING",
    };

} // namespace jag::graphics::particlemodules

namespace jag::math {
    // 0x1007fb3f0, 256 bytes, inline, placed by nothing (unplaced)
    // QuaternionT<float> QuaternionSLerp<float>(QuaternionT<float> const&, QuaternionT<float> const&, float)
    math* QuaternionSLerp<float>(QuaternionT* param_1, QuaternionT* param_2, float param_3) {
        float fVar1;
        float local_58[4];
        float local_48[4];
        float local_38;
        float local_34;
        float local_30;

        local_38 = QuaternionDot<float>(param_1, param_2);
        local_58[0] = -1.0;
        local_48[0] = 1.0;
        Clamp<float>(&local_38, local_58, local_48);
        local_34 = (float)acos(local_38);
        local_30 = (float)::sin(local_34);
        if (1e-05 <= local_30) {
            local_30 = 1.0 / local_30;
            fVar1 = (float)::sin((1.0 - param_3) * local_34);
            operator*((math*)local_58, param_1, fVar1 * local_30);
            fVar1 = (float)::sin(local_34 * param_3);
            operator*((math*)local_48, param_2, fVar1 * local_30);
            operator+(this, (QuaternionT*)local_58, (QuaternionT*)local_48);
        } else {
            Lerp<QuaternionT<float>, float>(this, param_1, param_2, param_3);
        }
        return this;
    }

} // namespace jag::math
