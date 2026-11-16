// libs/graphics/runetek7/particles/modules/Module.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.graphics

namespace jag::graphics::particlemodules {
    class Module {
    public:
        // virtual methods in vtable order
        virtual ~Module();
        virtual void __pure_slot_2() = 0;
        virtual void __pure_slot_3() = 0;
        void RenderDebug(const math::Matrix44T<float>& arg1, float arg2) const;
        Module();
        static int32_t g_moduleRng[6]; // = { 0, 0, 0, 0, 16, 0 }
        static uint8_t m_debugDisabled[11];
        static uint8_t m_debugRender[12];
    };

    // 0x100f4e0c8
    int32_t Module::g_moduleRng[6] = {0, 0, 0, 0, 16, 0};

    // 0x1039bd379
    uint8_t Module::m_debugDisabled[11];

    // 0x1039bd384
    uint8_t Module::m_debugRender[12];

    // 0x100009e70: Module::~Module() has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

    // 0x100009e70: Module::RenderDebug(math::Matrix44T<float> const&, float) const has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

    // 0x1007c8ef0
    void ___cxx_global_var_init_2(void) {
        uint8_t* puVar2;

        char* pcVar1 = (char*)(**(void (**)(...))PTR_g_moduleRng_100f4e548)();
        if (*pcVar1 == '\0') {
            new ((Random*)(**(void (**)(...))PTR_g_moduleRng_100f4e550)()) math::Random(123456789, 31415821);
            puVar2 = (uint8_t*)(**(void (**)(...))PTR_g_moduleRng_100f4e548)();
            *puVar2 = 1;
            return;
        }
    }

    // 0x1007c8f30
    void ___cxx_global_var_init_3(void) {
        if (*PTR_VIEWRT_LUMINANCE_ADAPTED_100ee4048 == '\0') {
            if (___cxa_guard_acquire(PTR_VIEWRT_LUMINANCE_ADAPTED_100ee4048) != 0) {
                new (PTR_VIEWRT_LUMINANCE_ADAPTED_100ee5578) HashedString("LUMINANCE_ADAPTED");
                ___cxa_guard_release(PTR_VIEWRT_LUMINANCE_ADAPTED_100ee4048);
            }
        }
    }

    // 0x1007c8f90
    void ___cxx_global_var_init_4(void) {
        if (*PTR_VIEWRT_LUMINANCE_ADAPTED_PREVIOUS_100ee4058 == '\0') {
            if (___cxa_guard_acquire(PTR_VIEWRT_LUMINANCE_ADAPTED_PREVIOUS_100ee4058) != 0) {
                new (PTR_VIEWRT_LUMINANCE_ADAPTED_PREVIOUS_100ee5588) HashedString("LUMINANCE_ADAPTED_PREVIOUS");
                ___cxa_guard_release(PTR_VIEWRT_LUMINANCE_ADAPTED_PREVIOUS_100ee4058);
            }
        }
    }

    // 0x1007c8ff0
    void ___cxx_global_var_init_6(void) {
        if (*PTR_VIEWRT_LUMINANCE_AVERAGE_100ee4050 == '\0') {
            if (___cxa_guard_acquire(PTR_VIEWRT_LUMINANCE_AVERAGE_100ee4050) != 0) {
                new (PTR_VIEWRT_LUMINANCE_AVERAGE_100ee5580) HashedString("VIEWRT_LUMINANCE_AVERAGE");
                ___cxa_guard_release(PTR_VIEWRT_LUMINANCE_AVERAGE_100ee4050);
            }
        }
    }

    // 0x1007c9210
    void ___cxx_global_var_init_141(void) {
        PlainTerrainOverlayShape* plainTerrainOverlayShape = (PlainTerrainOverlayShape*)(*(void (*)(...))PLAIN_SHAPE)();
        new (plainTerrainOverlayShape) PlainTerrainOverlayShape(0);
        __tlv_atexit(PlainTerrainOverlayShape::~PlainTerrainOverlayShape, plainTerrainOverlayShape, 4294967296);
    }

    // 0x1007c9250
    void ___cxx_global_var_init_142(void) {
        PlainTerrainOverlayShape* plainTerrainOverlayShape =
            (PlainTerrainOverlayShape*)(*(void (*)(...))DIAGONAL_SHAPE)();
        new (plainTerrainOverlayShape) PlainTerrainOverlayShape(1);
        __tlv_atexit(PlainTerrainOverlayShape::~PlainTerrainOverlayShape, plainTerrainOverlayShape, 4294967296);
    }

    // 0x1007c9290
    void ___cxx_global_var_init_143(void) {
        BasicTerrainOverlayShape* basicTerrainOverlayShape =
            (BasicTerrainOverlayShape*)(*(void (*)(...))LEFT_SEMI_DIAGONAL_SMALL_SHAPE)();
        new (basicTerrainOverlayShape) BasicTerrainOverlayShape(2, 0, 1, 1, 2, 0.0, 1.0);
        __tlv_atexit(BasicTerrainOverlayShape::~BasicTerrainOverlayShape, basicTerrainOverlayShape, 4294967296);
    }

    // 0x1007c92f0
    void ___cxx_global_var_init_144(void) {
        BasicTerrainOverlayShape* basicTerrainOverlayShape =
            (BasicTerrainOverlayShape*)(*(void (*)(...))RIGHT_SEMI_DIAGONAL_SMALL_SHAPE)();
        new (basicTerrainOverlayShape) BasicTerrainOverlayShape(3, 0, 1, 2, 1, 0.0, 1.0);
        __tlv_atexit(BasicTerrainOverlayShape::~BasicTerrainOverlayShape, basicTerrainOverlayShape, 4294967296);
    }

    // 0x1007c9350
    void ___cxx_global_var_init_145(void) {
        BasicTerrainOverlayShape* basicTerrainOverlayShape =
            (BasicTerrainOverlayShape*)(*(void (*)(...))LEFT_SEMI_DIAGONAL_BIG_SHAPE)();
        new (basicTerrainOverlayShape) BasicTerrainOverlayShape(4, 0, 2, 2, 1, 0.0, 1.0);
        __tlv_atexit(BasicTerrainOverlayShape::~BasicTerrainOverlayShape, basicTerrainOverlayShape, 4294967296);
    }

    // 0x1007c93b0
    void ___cxx_global_var_init_146(void) {
        BasicTerrainOverlayShape* basicTerrainOverlayShape =
            (BasicTerrainOverlayShape*)(*(void (*)(...))RIGHT_SEMI_DIAGONAL_BIG_SHAPE)();
        new (basicTerrainOverlayShape) BasicTerrainOverlayShape(5, 0, 2, 1, 2, 0.0, 1.0);
        __tlv_atexit(BasicTerrainOverlayShape::~BasicTerrainOverlayShape, basicTerrainOverlayShape, 4294967296);
    }

    // 0x1007c9410
    void ___cxx_global_var_init_147(void) {
        HalfSquareTerrainOverlayShape* halfSquareTerrainOverlayShape =
            (HalfSquareTerrainOverlayShape*)(*(void (*)(...))HALF_SQUARE_SHAPE)();
        new (halfSquareTerrainOverlayShape) HalfSquareTerrainOverlayShape(6);
        __tlv_atexit(HalfSquareTerrainOverlayShape::~HalfSquareTerrainOverlayShape, halfSquareTerrainOverlayShape,
                     4294967296);
    }

    // 0x1007c9450
    void ___cxx_global_var_init_148(void) {
        CornerTriTerrainOverlayShape* cornerTriTerrainOverlayShape =
            (CornerTriTerrainOverlayShape*)(*(void (*)(...))CORNER_SMALL_SHAPE)();
        new (cornerTriTerrainOverlayShape) CornerTriTerrainOverlayShape(7, true);
        __tlv_atexit(CornerTriTerrainOverlayShape::~CornerTriTerrainOverlayShape, cornerTriTerrainOverlayShape,
                     4294967296);
    }

    // 0x1007c94a0
    void ___cxx_global_var_init_149(void) {
        CornerTriTerrainOverlayShape* cornerTriTerrainOverlayShape =
            (CornerTriTerrainOverlayShape*)(*(void (*)(...))CORNER_BIG_SHAPE)();
        new (cornerTriTerrainOverlayShape) CornerTriTerrainOverlayShape(8, false);
        __tlv_atexit(CornerTriTerrainOverlayShape::~CornerTriTerrainOverlayShape, cornerTriTerrainOverlayShape,
                     4294967296);
    }

    // 0x1007c94e0
    void ___cxx_global_var_init_150(void) {
        BasicTerrainOverlayShape* basicTerrainOverlayShape =
            (BasicTerrainOverlayShape*)(*(void (*)(...))FAN_SMALL_SHAPE)();
        new (basicTerrainOverlayShape) BasicTerrainOverlayShape(9, 2, 1, 1, 2, -0.5, 0.5);
        __tlv_atexit(BasicTerrainOverlayShape::~BasicTerrainOverlayShape, basicTerrainOverlayShape, 4294967296);
    }

    // 0x1007c9550
    void ___cxx_global_var_init_151(void) {
        BasicTerrainOverlayShape* basicTerrainOverlayShape =
            (BasicTerrainOverlayShape*)(*(void (*)(...))FAN_BIG_SHAPE)();
        new (basicTerrainOverlayShape) BasicTerrainOverlayShape(10, 1, 2, 2, 1, -0.5, 0.5);
        __tlv_atexit(BasicTerrainOverlayShape::~BasicTerrainOverlayShape, basicTerrainOverlayShape, 4294967296);
    }

    // 0x1007c95c0
    void ___cxx_global_var_init_152(void) {
        BasicTerrainOverlayShape* basicTerrainOverlayShape =
            (BasicTerrainOverlayShape*)(*(void (*)(...))TRAPEZIUM_SHAPE)();
        new (basicTerrainOverlayShape) BasicTerrainOverlayShape(11, 1, 2, 1, 1, 0.0, 0.0);
        __tlv_atexit(BasicTerrainOverlayShape::~BasicTerrainOverlayShape, basicTerrainOverlayShape, 4294967296);
    }

    // 0x1007c96e0
    void ___cxx_global_var_init_189(void) {
        uint8_t* puVar1 = PTR_LOOK_100ee47d8;
        if (*PTR_LOOK_100ee47d8 == '\0') {
            new (PTR_LOOK_100ee66e0) math::ColourHSL(0.0, 0.0, 1.0);
            *puVar1 = 1;
        }
    }

    // 0x1007c9720
    void ___cxx_global_var_init_190(void) {
        uint8_t* puVar1 = PTR_UP_100ee47c8;
        if (*PTR_UP_100ee47c8 == '\0') {
            new (PTR_UP_100ee66d0) math::ColourHSL(0.0, 1.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x1007c9760
    void ___cxx_global_var_init_191(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee4298;
        if (*PTR_m_pSingleton_100ee4298 == '\0') {
            ___cxa_atexit(std::unique_ptr<ThreadPoolSingleton>::~unique_ptr, PTR_m_pSingleton_100ee5948, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1007c97a0
    void ___cxx_global_var_init_192(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee42a0;
        if (*PTR_m_pSingleton_100ee42a0 == '\0') {
            ___cxa_atexit(std::unique_ptr<ShaderThreadPoolSingleton>::~unique_ptr, PTR_m_pSingleton_100ee5950,
                          4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1007c97e0
    void ___cxx_global_var_init_193(void) {
        uint8_t* puVar1 = PTR_ZERO_100ee4790;
        if (*PTR_ZERO_100ee4790 == '\0') {
            new (PTR_ZERO_100ee6698) math::Point(0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x1007c9810
    void ___cxx_global_var_init_194(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee4518;
        if (*PTR_m_mutex_100ee4518 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5df0, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1007c9850
    void ___cxx_global_var_init_195(void) {
        uint8_t* puVar1 = PTR_ZERO_100ee4800;
        if (*PTR_ZERO_100ee4800 == '\0') {
            new (PTR_ZERO_100ee6708) ImVec4(0.0, 0.0, 0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x1007c9890
    void ___cxx_global_var_init_196(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee49c8;
        if (*PTR_m_pSingleton_100ee49c8 == '\0') {
            ___cxa_atexit(std::unique_ptr<render::ShaderProgramManager>::~unique_ptr, PTR_m_pSingleton_100ee6c38,
                          4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1007c98d0
    void ___cxx_global_var_init_197(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee49d0;
        if (*PTR_m_pSingleton_100ee49d0 == '\0') {
            ___cxa_atexit(std::unique_ptr<render::VertexDeclarationManager>::~unique_ptr, PTR_m_pSingleton_100ee6c40,
                          4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1007c9910
    void ___cxx_global_var_init_198(void) {
        uint8_t* puVar1 = PTR_ONE_100ee4798;
        if (*PTR_ONE_100ee4798 == '\0') {
            new (PTR_ONE_100ee66a0) math::Point(1.0, 1.0);
            *puVar1 = 1;
        }
    }

    // 0x1007c9950
    void ___cxx_global_var_init_199(void) {
        uint8_t* puVar1 = PTR_ZERO_100ee47a0;
        if (*PTR_ZERO_100ee47a0 == '\0') {
            new (PTR_ZERO_100ee66a8) math::Point(0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x1007c9980
    void ___cxx_global_var_init_200(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee49d8;
        if (*PTR_m_pSingleton_100ee49d8 == '\0') {
            ___cxa_atexit(std::unique_ptr<AnimationManager>::~unique_ptr, PTR_m_pSingleton_100ee6c48, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1007c99c0
    void ___cxx_global_var_init_201(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee49a0;
        if (*PTR_m_pSingleton_100ee49a0 == '\0') {
            ___cxa_atexit(std::unique_ptr<render::RenderDevice>::~unique_ptr, PTR_m_pSingleton_100ee6c10, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1007c9a00
    void ___cxx_global_var_init_202(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee45b0;
        if (*PTR_m_mutex_100ee45b0 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5f20, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1007c9a40
    void ___cxx_global_var_init_203(void) {
        uint8_t* puVar1 = PTR_ZERO_100ee47e0;
        if (*PTR_ZERO_100ee47e0 == '\0') {
            new (PTR_ZERO_100ee66e8) math::ColourHSL(0.0, 0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x1007c9a80
    void ___cxx_global_var_init_204(void) {
        uint8_t* puVar1 = PTR_ZERO_100ee4820;
        if (*PTR_ZERO_100ee4820 == '\0') {
            new (PTR_ZERO_100ee6728)
                math::Matrix44T<float>(0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x1007c9ae0
    void ___cxx_global_var_init_205(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee45d8;
        if (*PTR_m_mutex_100ee45d8 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5f70, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1007c9b20
    void ___cxx_global_var_init_206(void) {
        uint8_t* puVar1 = PTR_IDENTITY_100ee4828;
        if (*PTR_IDENTITY_100ee4828 == '\0') {
            new (PTR_IDENTITY_100ee6730)
                math::Matrix44T<float>(1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0);
            *puVar1 = 1;
        }
    }

    // 0x1007c9b80
    void ___cxx_global_var_init_207(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee4590;
        if (*PTR_m_mutex_100ee4590 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5ee0, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1007c9bc0
    void ___cxx_global_var_init_208(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee4290;
        if (*PTR_m_pSingleton_100ee4290 == '\0') {
            ___cxa_atexit(std::unique_ptr<graphicutils::BatchDestroyManager>::~unique_ptr, PTR_m_pSingleton_100ee5940,
                          4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1007c9c00
    void ___cxx_global_var_init_209(void) {
        uint8_t* puVar1 = PTR_RIGHT_100ee47e8;
        if (*PTR_RIGHT_100ee47e8 == '\0') {
            new (PTR_RIGHT_100ee66f0) math::ColourHSL(1.0, 0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x1007c9c40
    void ___cxx_global_var_init_210(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee49a8;
        if (*PTR_m_pSingleton_100ee49a8 == '\0') {
            ___cxa_atexit(std::unique_ptr<render::BuiltinStates>::~unique_ptr, PTR_m_pSingleton_100ee6c18, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1007c9c80
    void ___cxx_global_var_init_211(void) {
        uint8_t* puVar1 = PTR_IDENTITY_100ee4778;
        if (*PTR_IDENTITY_100ee4778 == '\0') {
            new (PTR_IDENTITY_100ee6678) math::QuaternionT<float>(0.0, 0.0, 0.0, 1.0);
            *puVar1 = 1;
        }
    }

    // 0x1007c9cc0
    void ___cxx_global_var_init_212(void) {
        uint8_t* puVar1 = PTR_ONE_100ee47f8;
        if (*PTR_ONE_100ee47f8 == '\0') {
            new (PTR_ONE_100ee6700) ImVec4(1.0, 1.0, 1.0, 1.0);
            *puVar1 = 1;
        }
    }

    // 0x1007c9d00
    void ___cxx_global_var_init_213(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee4538;
        if (*PTR_m_mutex_100ee4538 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5e30, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1007c9d40
    void __GLOBAL__sub_I_unity_11_cxx_cxx(void) {
        uint64_t uVar1 = _objc_autoreleasePoolPush();
        ___cxx_global_var_init();
        ___cxx_global_var_init_1();
        ___cxx_global_var_init_81();
        ___cxx_global_var_init_93();
        ___cxx_global_var_init_137();
        ___cxx_global_var_init_138();
        ___cxx_global_var_init_139();
        ___cxx_global_var_init_164();
        ___cxx_global_var_init_165();
        ___cxx_global_var_init_183();
        _objc_autoreleasePoolPop(uVar1);
    }

    // 0x10082ef80
    Module::Module() {}

} // namespace jag::graphics::particlemodules
