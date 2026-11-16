// libs/graphics/runetek7/particles/modules/Module.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.graphics

namespace jag::graphics::particlemodules {
    class Module {
    public:
        // virtual methods in vtable order
        virtual ~Module();
        virtual void __pure_slot_2() = 0;
        virtual void __pure_slot_3() = 0;
        RenderDebug(math::Matrix44T<float> const&, float) const;
        Module();
        static /* 24 bytes */ g_moduleRng; // = { 0, 0, 0, 0, 16, 0 }
        static /* 11 bytes */ m_debugDisabled;
        static /* 12 bytes */ m_debugRender;

        // data members, from how the methods use this: 8 bytes
        undefined* field_0; // offset 0, vtable pointer
    };

    // 0x100f4e0c8, 24 bytes, __thread_vars
    Module::g_moduleRng = {0, 0, 0, 0, 16, 0};

    // 0x1039bd379, 11 bytes, __common; zero-initialised
    Module::m_debugDisabled;

    // 0x1039bd384, 12 bytes, __common; zero-initialised
    Module::m_debugRender;

    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    Module::~Module();

    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    Module::RenderDebug(math::Matrix44T<float> const&, float) const;

    // 0x1007c8ef0, 64 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.2
    void ___cxx_global_var_init_2() {
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

    // 0x1007c8f30, 96 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.3
    void ___cxx_global_var_init_3() {
        if (*PTR_VIEWRT_LUMINANCE_ADAPTED_100ee4048 == '\0') {
            if (___cxa_guard_acquire(PTR_VIEWRT_LUMINANCE_ADAPTED_100ee4048) != 0) {
                new (PTR_VIEWRT_LUMINANCE_ADAPTED_100ee5578) HashedString("LUMINANCE_ADAPTED");
                ___cxa_guard_release(PTR_VIEWRT_LUMINANCE_ADAPTED_100ee4048);
            }
        }
    }

    // 0x1007c8f90, 96 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.4
    void ___cxx_global_var_init_4() {
        if (*PTR_VIEWRT_LUMINANCE_ADAPTED_PREVIOUS_100ee4058 == '\0') {
            if (___cxa_guard_acquire(PTR_VIEWRT_LUMINANCE_ADAPTED_PREVIOUS_100ee4058) != 0) {
                new (PTR_VIEWRT_LUMINANCE_ADAPTED_PREVIOUS_100ee5588) HashedString("LUMINANCE_ADAPTED_PREVIOUS");
                ___cxa_guard_release(PTR_VIEWRT_LUMINANCE_ADAPTED_PREVIOUS_100ee4058);
            }
        }
    }

    // 0x1007c8ff0, 96 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.6
    void ___cxx_global_var_init_6() {
        if (*PTR_VIEWRT_LUMINANCE_AVERAGE_100ee4050 == '\0') {
            if (___cxa_guard_acquire(PTR_VIEWRT_LUMINANCE_AVERAGE_100ee4050) != 0) {
                new (PTR_VIEWRT_LUMINANCE_AVERAGE_100ee5580) HashedString("VIEWRT_LUMINANCE_AVERAGE");
                ___cxa_guard_release(PTR_VIEWRT_LUMINANCE_AVERAGE_100ee4050);
            }
        }
    }

    // 0x1007c9210, 64 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.141
    void ___cxx_global_var_init_141() {
        PlainTerrainOverlayShape* pPVar1;

        pPVar1 = (PlainTerrainOverlayShape*)(*(code*)PLAIN_SHAPE)();
        PlainTerrainOverlayShape::PlainTerrainOverlayShape(pPVar1, 0);
        __tlv_atexit(PlainTerrainOverlayShape::~PlainTerrainOverlayShape, pPVar1, 4294967296);
    }

    // 0x1007c9250, 64 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.142
    void ___cxx_global_var_init_142() {
        PlainTerrainOverlayShape* pPVar1;

        pPVar1 = (PlainTerrainOverlayShape*)(*(code*)DIAGONAL_SHAPE)();
        PlainTerrainOverlayShape::PlainTerrainOverlayShape(pPVar1, 1);
        __tlv_atexit(PlainTerrainOverlayShape::~PlainTerrainOverlayShape, pPVar1, 4294967296);
    }

    // 0x1007c9290, 96 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.143
    void ___cxx_global_var_init_143() {
        undefined8 uVar1;

        uVar1 = (*(code*)LEFT_SEMI_DIAGONAL_SMALL_SHAPE)();
        new (0) BasicTerrainOverlayShape(1065353216, uVar1, 2, 0, 1, 1, 2);
        __tlv_atexit(BasicTerrainOverlayShape::~BasicTerrainOverlayShape, uVar1, 4294967296);
    }

    // 0x1007c92f0, 96 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.144
    void ___cxx_global_var_init_144() {
        undefined8 uVar1;

        uVar1 = (*(code*)RIGHT_SEMI_DIAGONAL_SMALL_SHAPE)();
        new (0) BasicTerrainOverlayShape(1065353216, uVar1, 3, 0, 1, 2, 1);
        __tlv_atexit(BasicTerrainOverlayShape::~BasicTerrainOverlayShape, uVar1, 4294967296);
    }

    // 0x1007c9350, 96 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.145
    void ___cxx_global_var_init_145() {
        undefined8 uVar1;

        uVar1 = (*(code*)LEFT_SEMI_DIAGONAL_BIG_SHAPE)();
        new (0) BasicTerrainOverlayShape(1065353216, uVar1, 4, 0, 2, 2, 1);
        __tlv_atexit(BasicTerrainOverlayShape::~BasicTerrainOverlayShape, uVar1, 4294967296);
    }

    // 0x1007c93b0, 96 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.146
    void ___cxx_global_var_init_146() {
        undefined8 uVar1;

        uVar1 = (*(code*)RIGHT_SEMI_DIAGONAL_BIG_SHAPE)();
        new (0) BasicTerrainOverlayShape(1065353216, uVar1, 5, 0, 2, 1, 2);
        __tlv_atexit(BasicTerrainOverlayShape::~BasicTerrainOverlayShape, uVar1, 4294967296);
    }

    // 0x1007c9410, 64 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.147
    void ___cxx_global_var_init_147() {
        HalfSquareTerrainOverlayShape* pHVar1;

        pHVar1 = (HalfSquareTerrainOverlayShape*)(*(code*)HALF_SQUARE_SHAPE)();
        HalfSquareTerrainOverlayShape::HalfSquareTerrainOverlayShape(pHVar1, 6);
        __tlv_atexit(HalfSquareTerrainOverlayShape::~HalfSquareTerrainOverlayShape, pHVar1, 4294967296);
    }

    // 0x1007c9450, 80 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.148
    void ___cxx_global_var_init_148() {
        CornerTriTerrainOverlayShape* pCVar1;

        pCVar1 = (CornerTriTerrainOverlayShape*)(*(code*)CORNER_SMALL_SHAPE)();
        CornerTriTerrainOverlayShape::CornerTriTerrainOverlayShape(pCVar1, 7, 1);
        __tlv_atexit(CornerTriTerrainOverlayShape::~CornerTriTerrainOverlayShape, pCVar1, 4294967296);
    }

    // 0x1007c94a0, 64 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.149
    void ___cxx_global_var_init_149() {
        CornerTriTerrainOverlayShape* pCVar1;

        pCVar1 = (CornerTriTerrainOverlayShape*)(*(code*)CORNER_BIG_SHAPE)();
        CornerTriTerrainOverlayShape::CornerTriTerrainOverlayShape(pCVar1, 8, 0);
        __tlv_atexit(CornerTriTerrainOverlayShape::~CornerTriTerrainOverlayShape, pCVar1, 4294967296);
    }

    // 0x1007c94e0, 112 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.150
    void ___cxx_global_var_init_150() {
        undefined8 uVar1;

        uVar1 = (*(code*)FAN_SMALL_SHAPE)();
        new (3204448256) BasicTerrainOverlayShape(1056964608, uVar1, 9, 2, 1, 1, 2);
        __tlv_atexit(BasicTerrainOverlayShape::~BasicTerrainOverlayShape, uVar1, 4294967296);
    }

    // 0x1007c9550, 112 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.151
    void ___cxx_global_var_init_151() {
        undefined8 uVar1;

        uVar1 = (*(code*)FAN_BIG_SHAPE)();
        new (3204448256) BasicTerrainOverlayShape(1056964608, uVar1, 10, 1, 2, 2, 1);
        __tlv_atexit(BasicTerrainOverlayShape::~BasicTerrainOverlayShape, uVar1, 4294967296);
    }

    // 0x1007c95c0, 96 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.152
    void ___cxx_global_var_init_152() {
        undefined8 uVar1;

        uVar1 = (*(code*)TRAPEZIUM_SHAPE)();
        new (0) BasicTerrainOverlayShape(0, uVar1, 11, 1, 2, 1, 1);
        __tlv_atexit(BasicTerrainOverlayShape::~BasicTerrainOverlayShape, uVar1, 4294967296);
    }

    // 0x1007c96e0, 64 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.189
    void ___cxx_global_var_init_189() {
        undefined* puVar1;

        puVar1 = PTR_LOOK_100ee47d8;
        if (*PTR_LOOK_100ee47d8 == '\0') {
            new (PTR_LOOK_100ee66e0) math::ColourHSL(0.0, 0.0, 1.0);
            *puVar1 = 1;
        }
    }

    // 0x1007c9720, 64 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.190
    void ___cxx_global_var_init_190() {
        undefined* puVar1;

        puVar1 = PTR_UP_100ee47c8;
        if (*PTR_UP_100ee47c8 == '\0') {
            new (PTR_UP_100ee66d0) math::ColourHSL(0.0, 1.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x1007c9760, 64 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.191
    void ___cxx_global_var_init_191() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee4298;
        if (*PTR_m_pSingleton_100ee4298 == '\0') {
            ___cxa_atexit(std::unique_ptr<ThreadPoolSingleton, std::default_delete<ThreadPoolSingleton>>::~unique_ptr,
                          PTR_m_pSingleton_100ee5948, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1007c97a0, 64 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.192
    void ___cxx_global_var_init_192() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee42a0;
        if (*PTR_m_pSingleton_100ee42a0 == '\0') {
            ___cxa_atexit(
                std::unique_ptr<ShaderThreadPoolSingleton, std::default_delete<ShaderThreadPoolSingleton>>::~unique_ptr,
                PTR_m_pSingleton_100ee5950, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1007c97e0, 48 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.193
    void ___cxx_global_var_init_193() {
        undefined* puVar1;

        puVar1 = PTR_ZERO_100ee4790;
        if (*PTR_ZERO_100ee4790 == '\0') {
            new (PTR_ZERO_100ee6698) math::Point<float>(0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x1007c9810, 64 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.194
    void ___cxx_global_var_init_194() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee4518;
        if (*PTR_m_mutex_100ee4518 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5df0, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1007c9850, 64 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.195
    void ___cxx_global_var_init_195() {
        undefined* puVar1;

        puVar1 = PTR_ZERO_100ee4800;
        if (*PTR_ZERO_100ee4800 == '\0') {
            new (PTR_ZERO_100ee6708) ImVec4(0.0, 0.0, 0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x1007c9890, 64 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.196
    void ___cxx_global_var_init_196() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee49c8;
        if (*PTR_m_pSingleton_100ee49c8 == '\0') {
            ___cxa_atexit(std::unique_ptr<render::ShaderProgramManager,
                                          std::default_delete<render::ShaderProgramManager>>::~unique_ptr,
                          PTR_m_pSingleton_100ee6c38, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1007c98d0, 64 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.197
    void ___cxx_global_var_init_197() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee49d0;
        if (*PTR_m_pSingleton_100ee49d0 == '\0') {
            ___cxa_atexit(std::unique_ptr<render::VertexDeclarationManager,
                                          std::default_delete<render::VertexDeclarationManager>>::~unique_ptr,
                          PTR_m_pSingleton_100ee6c40, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1007c9910, 64 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.198
    void ___cxx_global_var_init_198() {
        undefined* puVar1;

        puVar1 = PTR_ONE_100ee4798;
        if (*PTR_ONE_100ee4798 == '\0') {
            new (PTR_ONE_100ee66a0) math::Point<float>(1.0, 1.0);
            *puVar1 = 1;
        }
    }

    // 0x1007c9950, 48 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.199
    void ___cxx_global_var_init_199() {
        undefined* puVar1;

        puVar1 = PTR_ZERO_100ee47a0;
        if (*PTR_ZERO_100ee47a0 == '\0') {
            new (PTR_ZERO_100ee66a8) math::Point<float>(0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x1007c9980, 64 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.200
    void ___cxx_global_var_init_200() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee49d8;
        if (*PTR_m_pSingleton_100ee49d8 == '\0') {
            ___cxa_atexit(std::unique_ptr<AnimationManager, std::default_delete<AnimationManager>>::~unique_ptr,
                          PTR_m_pSingleton_100ee6c48, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1007c99c0, 64 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.201
    void ___cxx_global_var_init_201() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee49a0;
        if (*PTR_m_pSingleton_100ee49a0 == '\0') {
            ___cxa_atexit(std::unique_ptr<render::RenderDevice, std::default_delete<render::RenderDevice>>::~unique_ptr,
                          PTR_m_pSingleton_100ee6c10, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1007c9a00, 64 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.202
    void ___cxx_global_var_init_202() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee45b0;
        if (*PTR_m_mutex_100ee45b0 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5f20, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1007c9a40, 64 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.203
    void ___cxx_global_var_init_203() {
        undefined* puVar1;

        puVar1 = PTR_ZERO_100ee47e0;
        if (*PTR_ZERO_100ee47e0 == '\0') {
            new (PTR_ZERO_100ee66e8) math::ColourHSL(0.0, 0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x1007c9a80, 96 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.204
    void ___cxx_global_var_init_204() {
        undefined* puVar1;

        puVar1 = PTR_ZERO_100ee4820;
        if (*PTR_ZERO_100ee4820 == '\0') {
            new (PTR_ZERO_100ee6728)
                math::Matrix44T<float>(0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x1007c9ae0, 64 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.205
    void ___cxx_global_var_init_205() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee45d8;
        if (*PTR_m_mutex_100ee45d8 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5f70, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1007c9b20, 96 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.206
    void ___cxx_global_var_init_206() {
        undefined* puVar1;

        puVar1 = PTR_IDENTITY_100ee4828;
        if (*PTR_IDENTITY_100ee4828 == '\0') {
            new (PTR_IDENTITY_100ee6730)
                math::Matrix44T<float>(1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0);
            *puVar1 = 1;
        }
    }

    // 0x1007c9b80, 64 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.207
    void ___cxx_global_var_init_207() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee4590;
        if (*PTR_m_mutex_100ee4590 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5ee0, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1007c9bc0, 64 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.208
    void ___cxx_global_var_init_208() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee4290;
        if (*PTR_m_pSingleton_100ee4290 == '\0') {
            ___cxa_atexit(std::unique_ptr<graphicutils::BatchDestroyManager,
                                          std::default_delete<graphicutils::BatchDestroyManager>>::~unique_ptr,
                          PTR_m_pSingleton_100ee5940, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1007c9c00, 64 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.209
    void ___cxx_global_var_init_209() {
        undefined* puVar1;

        puVar1 = PTR_RIGHT_100ee47e8;
        if (*PTR_RIGHT_100ee47e8 == '\0') {
            new (PTR_RIGHT_100ee66f0) math::ColourHSL(1.0, 0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x1007c9c40, 64 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.210
    void ___cxx_global_var_init_210() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee49a8;
        if (*PTR_m_pSingleton_100ee49a8 == '\0') {
            ___cxa_atexit(
                std::unique_ptr<render::BuiltinStates, std::default_delete<render::BuiltinStates>>::~unique_ptr,
                PTR_m_pSingleton_100ee6c18, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1007c9c80, 64 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.211
    void ___cxx_global_var_init_211() {
        undefined* puVar1;

        puVar1 = PTR_IDENTITY_100ee4778;
        if (*PTR_IDENTITY_100ee4778 == '\0') {
            new (PTR_IDENTITY_100ee6678) math::QuaternionT<float>(0.0, 0.0, 0.0, 1.0);
            *puVar1 = 1;
        }
    }

    // 0x1007c9cc0, 64 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.212
    void ___cxx_global_var_init_212() {
        undefined* puVar1;

        puVar1 = PTR_ONE_100ee47f8;
        if (*PTR_ONE_100ee47f8 == '\0') {
            new (PTR_ONE_100ee6700) ImVec4(1.0, 1.0, 1.0, 1.0);
            *puVar1 = 1;
        }
    }

    // 0x1007c9d00, 64 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.213
    void ___cxx_global_var_init_213() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee4538;
        if (*PTR_m_mutex_100ee4538 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5e30, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1007c9d40, 79 bytes, placed by debug map only (low confidence)
    // __GLOBAL__sub_I_unity_11_cxx.cxx
    void __GLOBAL__sub_I_unity_11_cxx_cxx() {
        undefined8 uVar1;

        uVar1 = _objc_autoreleasePoolPush();
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

    // 0x10082ef80, 32 bytes, base-object constructor, inline, placed by class name
    // Module::Module()
    void Module::Module() {
        field_0 = PTR_vtable_100ee8790 + 16;
    }

    // 0x100c92b50: the linker folded this into InlineFatalBreak(), which has identical code
    Module::~Module();

    // 0x100c92b50: the linker folded this into InlineFatalBreak(), which has identical code
    Module::~Module();

} // namespace jag::graphics::particlemodules
