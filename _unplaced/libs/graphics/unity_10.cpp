// _unplaced/libs/graphics/unity_10.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

namespace jag::graphics {
    // 0x100d4abfc
    int32_t DEF_RS_MIN_BLACK_LUM = 1008981770;

    // 0x100d4ac00
    float DEF_RS_MAX_WHITE_LUM = 1.5f;

    // 0x100d4ac04
    int32_t DEF_RS_EXPOSURE_KEY = 1057803469;

    // 0x100d4ac08
    float DEF_RS_MAX_AUTO_EXPOSURE = 3.0f;

    // 0x104232520
    uint8_t MAYA_ANIM_INVERT_MATRIX[64];

    // 0x104232560
    uint8_t WORLD_ORTHOGONAL[16];

    // 0x1008042d0
    void ___cxx_global_var_init(void) {
        uint8_t* puVar2;

        char* pcVar1 = (char*)(**(void (**)(...))PTR_g_moduleRng_100f4e548)();
        if (*pcVar1 == '\0') {
            new ((Random*)(**(void (**)(...))PTR_g_moduleRng_100f4e550)()) math::Random(123456789, 31415821);
            puVar2 = (uint8_t*)(**(void (**)(...))PTR_g_moduleRng_100f4e548)();
            *puVar2 = 1;
            return;
        }
    }

    // 0x100804310
    void ___cxx_global_var_init_2(void) {
        Matrix33T<float> local_50;

        math::Matrix33Scaling<float>(1.0, 1.0, -1.0);
        Vector3T<int> local_28;
        new ((Matrix44T<float>*)&MAYA_ANIM_INVERT_MATRIX) math::Matrix44T<float>(local_50, local_28);
    }

    // 0x100804370
    void ___cxx_global_var_init_3(void) {
        new ((ColourHSL*)&WORLD_ORTHOGONAL) math::ColourHSL(-1.5707964, -1.5707964, 0.0);
    }

    // 0x100804390
    void ___cxx_global_var_init_4(void) {
        if (*PTR_VIEWRT_LUMINANCE_ADAPTED_100ee4048 == '\0') {
            if (___cxa_guard_acquire(PTR_VIEWRT_LUMINANCE_ADAPTED_100ee4048) != 0) {
                new (PTR_VIEWRT_LUMINANCE_ADAPTED_100ee5578) HashedString("LUMINANCE_ADAPTED");
                ___cxa_guard_release(PTR_VIEWRT_LUMINANCE_ADAPTED_100ee4048);
            }
        }
    }

    // 0x1008043f0
    void ___cxx_global_var_init_6(void) {
        if (*PTR_VIEWRT_LUMINANCE_ADAPTED_PREVIOUS_100ee4058 == '\0') {
            if (___cxa_guard_acquire(PTR_VIEWRT_LUMINANCE_ADAPTED_PREVIOUS_100ee4058) != 0) {
                new (PTR_VIEWRT_LUMINANCE_ADAPTED_PREVIOUS_100ee5588) HashedString("LUMINANCE_ADAPTED_PREVIOUS");
                ___cxa_guard_release(PTR_VIEWRT_LUMINANCE_ADAPTED_PREVIOUS_100ee4058);
            }
        }
    }

    // 0x100804450
    void ___cxx_global_var_init_8(void) {
        if (*PTR_VIEWRT_LUMINANCE_AVERAGE_100ee4050 == '\0') {
            if (___cxa_guard_acquire(PTR_VIEWRT_LUMINANCE_AVERAGE_100ee4050) != 0) {
                new (PTR_VIEWRT_LUMINANCE_AVERAGE_100ee5580) HashedString("VIEWRT_LUMINANCE_AVERAGE");
                ___cxa_guard_release(PTR_VIEWRT_LUMINANCE_AVERAGE_100ee4050);
            }
        }
    }

    // 0x1008046b0
    void ___cxx_global_var_init_256(void) {
        uint8_t* puVar1 = PTR_LOOK_100ee47d8;
        if (*PTR_LOOK_100ee47d8 == '\0') {
            new (PTR_LOOK_100ee66e0) math::ColourHSL(0.0, 0.0, 1.0);
            *puVar1 = 1;
        }
    }

    // 0x1008046f0
    void ___cxx_global_var_init_257(void) {
        uint8_t* puVar1 = PTR_UP_100ee47c8;
        if (*PTR_UP_100ee47c8 == '\0') {
            new (PTR_UP_100ee66d0) math::ColourHSL(0.0, 1.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x100804730
    void ___cxx_global_var_init_258(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee4298;
        if (*PTR_m_pSingleton_100ee4298 == '\0') {
            ___cxa_atexit(std::unique_ptr<ThreadPoolSingleton>::~unique_ptr, PTR_m_pSingleton_100ee5948, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100804770
    void ___cxx_global_var_init_259(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee42a0;
        if (*PTR_m_pSingleton_100ee42a0 == '\0') {
            ___cxa_atexit(std::unique_ptr<ShaderThreadPoolSingleton>::~unique_ptr, PTR_m_pSingleton_100ee5950,
                          4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1008047b0
    void ___cxx_global_var_init_260(void) {
        uint8_t* puVar1 = PTR_ZERO_100ee4790;
        if (*PTR_ZERO_100ee4790 == '\0') {
            new (PTR_ZERO_100ee6698) math::Point(0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x1008047e0
    void ___cxx_global_var_init_261(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee4518;
        if (*PTR_m_mutex_100ee4518 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5df0, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100804820
    void ___cxx_global_var_init_262(void) {
        uint8_t* puVar1 = PTR_ZERO_100ee4800;
        if (*PTR_ZERO_100ee4800 == '\0') {
            new (PTR_ZERO_100ee6708) ImVec4(0.0, 0.0, 0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x100804860
    void ___cxx_global_var_init_263(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee49c8;
        if (*PTR_m_pSingleton_100ee49c8 == '\0') {
            ___cxa_atexit(std::unique_ptr<render::ShaderProgramManager>::~unique_ptr, PTR_m_pSingleton_100ee6c38,
                          4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1008048a0
    void ___cxx_global_var_init_264(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee49d0;
        if (*PTR_m_pSingleton_100ee49d0 == '\0') {
            ___cxa_atexit(std::unique_ptr<render::VertexDeclarationManager>::~unique_ptr, PTR_m_pSingleton_100ee6c40,
                          4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1008048e0
    void ___cxx_global_var_init_265(void) {
        uint8_t* puVar1 = PTR_IDENTITY_100ee4828;
        if (*PTR_IDENTITY_100ee4828 == '\0') {
            new (PTR_IDENTITY_100ee6730)
                math::Matrix44T<float>(1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0);
            *puVar1 = 1;
        }
    }

    // 0x100804940
    void ___cxx_global_var_init_266(void) {
        uint8_t* puVar1 = PTR_ZERO_100ee47e0;
        if (*PTR_ZERO_100ee47e0 == '\0') {
            new (PTR_ZERO_100ee66e8) math::ColourHSL(0.0, 0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x100804980
    void ___cxx_global_var_init_267(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee4590;
        if (*PTR_m_mutex_100ee4590 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5ee0, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1008049c0
    void ___cxx_global_var_init_268(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee49d8;
        if (*PTR_m_pSingleton_100ee49d8 == '\0') {
            ___cxa_atexit(std::unique_ptr<AnimationManager>::~unique_ptr, PTR_m_pSingleton_100ee6c48, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100804a00
    void ___cxx_global_var_init_269(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee49a0;
        if (*PTR_m_pSingleton_100ee49a0 == '\0') {
            ___cxa_atexit(std::unique_ptr<render::RenderDevice>::~unique_ptr, PTR_m_pSingleton_100ee6c10, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100804a40
    void ___cxx_global_var_init_270(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee45b0;
        if (*PTR_m_mutex_100ee45b0 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5f20, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100804a80
    void ___cxx_global_var_init_271(void) {
        uint8_t* puVar1 = PTR_ZERO_100ee4820;
        if (*PTR_ZERO_100ee4820 == '\0') {
            new (PTR_ZERO_100ee6728)
                math::Matrix44T<float>(0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x100804ae0
    void ___cxx_global_var_init_272(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee45d8;
        if (*PTR_m_mutex_100ee45d8 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5f70, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100804b20
    void ___cxx_global_var_init_273(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee4290;
        if (*PTR_m_pSingleton_100ee4290 == '\0') {
            ___cxa_atexit(std::unique_ptr<graphicutils::BatchDestroyManager>::~unique_ptr, PTR_m_pSingleton_100ee5940,
                          4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100804b60
    void ___cxx_global_var_init_274(void) {
        uint8_t* puVar1 = PTR_RIGHT_100ee47e8;
        if (*PTR_RIGHT_100ee47e8 == '\0') {
            new (PTR_RIGHT_100ee66f0) math::ColourHSL(1.0, 0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x100804ba0
    void ___cxx_global_var_init_275(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee4520;
        if (*PTR_m_mutex_100ee4520 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5e00, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100804be0
    void ___cxx_global_var_init_276(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee4570;
        if (*PTR_m_mutex_100ee4570 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5ea0, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100804c20
    void ___cxx_global_var_init_277(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee49a8;
        if (*PTR_m_pSingleton_100ee49a8 == '\0') {
            ___cxa_atexit(std::unique_ptr<render::BuiltinStates>::~unique_ptr, PTR_m_pSingleton_100ee6c18, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100804c60
    void __GLOBAL__sub_I_unity_10_cxx_cxx(void) {
        uint64_t uVar1 = _objc_autoreleasePoolPush();
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
    // 0x100d4ac0c
    int32_t DEF_MIN_BLACK_LUM = 0;

    // 0x100d4ac10
    float DEF_MAX_WHITE_LUM = 5.25f;

    // 0x100d4ac14
    float DEF_EXPOSURE_KEY = 2.75f;

    // 0x100d4ac18
    int32_t DEF_MIN_AUTO_EXPOSURE = 0;

    // 0x100d4ac1c
    float DEF_MAX_AUTO_EXPOSURE = 5.0f;

    // 0x100d4ac20
    int32_t DEF_EXPOSURE_SPEED_MUL[64] = {
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
    // 0x100f14bd8
    const void* ModuleTypeIdNames[11] = {
        "FLOW",  "COLOUR", "GRAVITY",  "TRIGGERPLANE", "ATTRACTOR", "ROTATION",
        "SCALE", "NOISE",  "FLIPBOOK", "ACCELERATION", "LIGHTING",
    };

} // namespace jag::graphics::particlemodules

namespace jag::math {
    // 0x1007fb3f0
    QuaternionT<float> QuaternionSLerp<float>(const QuaternionT<float>& quaternion1,
                                              const QuaternionT<float>& quaternion2, float arg3) {
        QuaternionT<float>* in_RDX;
        float fVar1;
        float local_58[4];
        float local_48[4];

        float local_38 = QuaternionDot<float>(quaternion2, in_RDX);
        local_58[0] = -1.0;
        local_48[0] = 1.0;
        Clamp<float>(&local_38, local_58, local_48);
        float local_34 = (float)acos(local_38);
        float local_30 = (float)::sin(local_34);
        if (1e-05 <= local_30) {
            local_30 = 1.0 / local_30;
            fVar1 = (float)::sin((1.0 - arg3) * local_34);
            local_58*(fVar1 * local_30);
            fVar1 = (float)::sin(local_34 * arg3);
            local_48*(fVar1 * local_30);
            quaternion1 + *local_58;
        } else {
            Lerp<QuaternionT<float>, float>(quaternion1, quaternion2, arg3);
        }
        return quaternion1;
    }

} // namespace jag::math
