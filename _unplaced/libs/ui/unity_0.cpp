// _unplaced/libs/ui/unity_0.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.ui

#include "libs/jtl/multibuffer/MultiBuffer.h"
#include "libs/tweaky/Tweaky.h"

namespace jag::graphics {
    // 0x10422b7d0
    uint8_t MAYA_ANIM_INVERT_MATRIX[64];

    // 0x10422b810
    uint8_t WORLD_ORTHOGONAL[16];

    // 0x1006db6a0
    void ___cxx_global_var_init(void) {
        Matrix33T<float> local_50;

        math::Matrix33Scaling<float>(1.0, 1.0, -1.0);
        Vector3T<int> local_28;
        new ((Matrix44T<float>*)&MAYA_ANIM_INVERT_MATRIX) math::Matrix44T<float>(local_50, local_28);
    }

    // 0x1006db700
    void ___cxx_global_var_init_1(void) {
        new ((ColourHSL*)&WORLD_ORTHOGONAL) math::ColourHSL(-1.5707964, -1.5707964, 0.0);
    }

    // 0x1006db720
    void ___cxx_global_var_init_3(void) {
        if (*PTR_VIEWRT_LUMINANCE_ADAPTED_100ee4048 == '\0') {
            if (___cxa_guard_acquire(PTR_VIEWRT_LUMINANCE_ADAPTED_100ee4048) != 0) {
                new (PTR_VIEWRT_LUMINANCE_ADAPTED_100ee5578) HashedString("LUMINANCE_ADAPTED");
                ___cxa_guard_release(PTR_VIEWRT_LUMINANCE_ADAPTED_100ee4048);
            }
        }
    }

    // 0x1006db780
    void ___cxx_global_var_init_4(void) {
        if (*PTR_VIEWRT_LUMINANCE_ADAPTED_PREVIOUS_100ee4058 == '\0') {
            if (___cxa_guard_acquire(PTR_VIEWRT_LUMINANCE_ADAPTED_PREVIOUS_100ee4058) != 0) {
                new (PTR_VIEWRT_LUMINANCE_ADAPTED_PREVIOUS_100ee5588) HashedString("LUMINANCE_ADAPTED_PREVIOUS");
                ___cxa_guard_release(PTR_VIEWRT_LUMINANCE_ADAPTED_PREVIOUS_100ee4058);
            }
        }
    }

    // 0x1006db7e0
    void ___cxx_global_var_init_6(void) {
        if (*PTR_VIEWRT_LUMINANCE_AVERAGE_100ee4050 == '\0') {
            if (___cxa_guard_acquire(PTR_VIEWRT_LUMINANCE_AVERAGE_100ee4050) != 0) {
                new (PTR_VIEWRT_LUMINANCE_AVERAGE_100ee5580) HashedString("VIEWRT_LUMINANCE_AVERAGE");
                ___cxa_guard_release(PTR_VIEWRT_LUMINANCE_AVERAGE_100ee4050);
            }
        }
    }

    // 0x1006db840
    void ___cxx_global_var_init_38(void) {
        if (*PTR_DEFAULT_SERVER_ACTIVE_PROPERTIES_100ee4658 == '\0') {
            if (___cxa_guard_acquire(PTR_DEFAULT_SERVER_ACTIVE_PROPERTIES_100ee4658) != 0) {
                new (PTR_DEFAULT_SERVER_ACTIVE_PROPERTIES_100ee6450) oldscape::sidebars::SideBarData(0, -1);
                ___cxa_guard_release(PTR_DEFAULT_SERVER_ACTIVE_PROPERTIES_100ee4658);
            }
        }
    }

    // 0x1006db8a0
    void ___cxx_global_var_init_39(void) {
        if (*PTR_NullComponentShared_100ee4660 == '\0') {
            if (___cxa_guard_acquire(PTR_NullComponentShared_100ee4660) != 0) {
                new (PTR_NullComponentShared_100ee6498) shared_ptr();
                ___cxa_atexit(PTR__shared_ptr_100ee5178, PTR_NullComponentShared_100ee6498, 4294967296);
                ___cxa_guard_release(PTR_NullComponentShared_100ee4660);
            }
        }
    }

    // 0x1006db920
    void ___cxx_global_var_init_40(void) {
        if (*PTR_NullInterfaceShared_100ee4668 == '\0') {
            if (___cxa_guard_acquire(PTR_NullInterfaceShared_100ee4668) != 0) {
                new (PTR_NullInterfaceShared_100ee64a0) shared_ptr();
                ___cxa_atexit(PTR__shared_ptr_100ee5180, PTR_NullInterfaceShared_100ee64a0, 4294967296);
                ___cxa_guard_release(PTR_NullInterfaceShared_100ee4668);
            }
        }
    }

    // 0x1006db9a0
    void ___cxx_global_var_init_43(void) {
        if (*PTR_m_defaultBaseURL_100ee4650 == '\0') {
            if (___cxa_guard_acquire(PTR_m_defaultBaseURL_100ee4650) != 0) {
                new (PTR_m_defaultBaseURL_100ee6410) eastl::fixed_string<char, 512>();
                ___cxa_atexit(PTR__fixed_string_100ee6c98, PTR_m_defaultBaseURL_100ee6410, 4294967296);
                ___cxa_guard_release(PTR_m_defaultBaseURL_100ee4650);
            }
        }
    }

    // 0x1006dba20
    void ___cxx_global_var_init_190(void) {
        uint8_t* puVar1 = PTR_LOOK_100ee47d8;
        if (*PTR_LOOK_100ee47d8 == '\0') {
            new (PTR_LOOK_100ee66e0) math::ColourHSL(0.0, 0.0, 1.0);
            *puVar1 = 1;
        }
    }

    // 0x1006dba60
    void ___cxx_global_var_init_191(void) {
        uint8_t* puVar1 = PTR_UP_100ee47c8;
        if (*PTR_UP_100ee47c8 == '\0') {
            new (PTR_UP_100ee66d0) math::ColourHSL(0.0, 1.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x1006dbaa0
    void ___cxx_global_var_init_192(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee4298;
        if (*PTR_m_pSingleton_100ee4298 == '\0') {
            ___cxa_atexit(std::unique_ptr<ThreadPoolSingleton>::~unique_ptr, PTR_m_pSingleton_100ee5948, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1006dbae0
    void ___cxx_global_var_init_193(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee42a0;
        if (*PTR_m_pSingleton_100ee42a0 == '\0') {
            ___cxa_atexit(std::unique_ptr<ShaderThreadPoolSingleton>::~unique_ptr, PTR_m_pSingleton_100ee5950,
                          4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1006dbb20
    void ___cxx_global_var_init_194(void) {
        uint8_t* puVar1 = PTR_ZERO_100ee4790;
        if (*PTR_ZERO_100ee4790 == '\0') {
            new (PTR_ZERO_100ee6698) math::Point(0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x1006dbb50
    void ___cxx_global_var_init_195(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee4518;
        if (*PTR_m_mutex_100ee4518 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5df0, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1006dbb90
    void ___cxx_global_var_init_196(void) {
        uint8_t* puVar1 = PTR_ZERO_100ee4800;
        if (*PTR_ZERO_100ee4800 == '\0') {
            new (PTR_ZERO_100ee6708) ImVec4(0.0, 0.0, 0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x1006dbbd0
    void ___cxx_global_var_init_197(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee49c8;
        if (*PTR_m_pSingleton_100ee49c8 == '\0') {
            ___cxa_atexit(std::unique_ptr<render::ShaderProgramManager>::~unique_ptr, PTR_m_pSingleton_100ee6c38,
                          4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1006dbc10
    void ___cxx_global_var_init_198(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee49d0;
        if (*PTR_m_pSingleton_100ee49d0 == '\0') {
            ___cxa_atexit(std::unique_ptr<render::VertexDeclarationManager>::~unique_ptr, PTR_m_pSingleton_100ee6c40,
                          4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1006dbc50
    void ___cxx_global_var_init_199(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee49d8;
        if (*PTR_m_pSingleton_100ee49d8 == '\0') {
            ___cxa_atexit(std::unique_ptr<AnimationManager>::~unique_ptr, PTR_m_pSingleton_100ee6c48, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1006dbc90
    void ___cxx_global_var_init_200(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee49a0;
        if (*PTR_m_pSingleton_100ee49a0 == '\0') {
            ___cxa_atexit(std::unique_ptr<render::RenderDevice>::~unique_ptr, PTR_m_pSingleton_100ee6c10, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1006dbcd0
    void ___cxx_global_var_init_201(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee45b0;
        if (*PTR_m_mutex_100ee45b0 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5f20, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1006dbd10
    void ___cxx_global_var_init_202(void) {
        uint8_t* puVar1 = PTR_ZERO_100ee47e0;
        if (*PTR_ZERO_100ee47e0 == '\0') {
            new (PTR_ZERO_100ee66e8) math::ColourHSL(0.0, 0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x1006dbd50
    void ___cxx_global_var_init_203(void) {
        uint8_t* puVar1 = PTR_ZERO_100ee4820;
        if (*PTR_ZERO_100ee4820 == '\0') {
            new (PTR_ZERO_100ee6728)
                math::Matrix44T<float>(0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x1006dbdb0
    void ___cxx_global_var_init_204(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee45d8;
        if (*PTR_m_mutex_100ee45d8 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5f70, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1006dbdf0
    void ___cxx_global_var_init_205(void) {
        uint8_t* puVar1 = PTR_IDENTITY_100ee4828;
        if (*PTR_IDENTITY_100ee4828 == '\0') {
            new (PTR_IDENTITY_100ee6730)
                math::Matrix44T<float>(1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0);
            *puVar1 = 1;
        }
    }

    // 0x1006dbe50
    void ___cxx_global_var_init_206(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee4590;
        if (*PTR_m_mutex_100ee4590 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5ee0, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1006dbe90
    void ___cxx_global_var_init_207(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee4290;
        if (*PTR_m_pSingleton_100ee4290 == '\0') {
            ___cxa_atexit(std::unique_ptr<graphicutils::BatchDestroyManager>::~unique_ptr, PTR_m_pSingleton_100ee5940,
                          4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1006dbed0
    void ___cxx_global_var_init_208(void) {
        uint8_t* puVar1 = PTR_RIGHT_100ee47e8;
        if (*PTR_RIGHT_100ee47e8 == '\0') {
            new (PTR_RIGHT_100ee66f0) math::ColourHSL(1.0, 0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x1006dbf10
    void ___cxx_global_var_init_209(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee42b0;
        if (*PTR_m_pSingleton_100ee42b0 == '\0') {
            ___cxa_atexit(std::unique_ptr<debug::DebugUIManager>::~unique_ptr, PTR_m_pSingleton_100ee5960, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1006dbf50
    void ___cxx_global_var_init_210(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee4338;
        if (*PTR_m_mutex_100ee4338 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5a40, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1006dbf90
    void ___cxx_global_var_init_211(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee4320;
        if (*PTR_m_mutex_100ee4320 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5a18, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1006dbfd0
    void ___cxx_global_var_init_212(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee42e8;
        if (*PTR_m_mutex_100ee42e8 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee59b8, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1006dc010
    void ___cxx_global_var_init_213(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee4300;
        if (*PTR_m_mutex_100ee4300 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee59e0, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1006dc050
    void ___cxx_global_var_init_214(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee4340;
        if (*PTR_m_mutex_100ee4340 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5a50, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1006dc090
    void ___cxx_global_var_init_215(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee42f0;
        if (*PTR_m_mutex_100ee42f0 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee59c8, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1006dc0d0
    void ___cxx_global_var_init_216(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee4328;
        if (*PTR_m_mutex_100ee4328 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5a20, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1006dc110
    void ___cxx_global_var_init_217(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee4310;
        if (*PTR_m_mutex_100ee4310 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee59f8, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1006dc150
    void ___cxx_global_var_init_218(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee4318;
        if (*PTR_m_mutex_100ee4318 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5a08, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1006dc190
    void ___cxx_global_var_init_219(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee4308;
        if (*PTR_m_mutex_100ee4308 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee59f0, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1006dc1d0
    void ___cxx_global_var_init_220(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee42f8;
        if (*PTR_m_mutex_100ee42f8 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee59d8, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1006dc210
    void ___cxx_global_var_init_221(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee4350;
        if (*PTR_m_mutex_100ee4350 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5a68, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1006dc250
    void ___cxx_global_var_init_222(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee4330;
        if (*PTR_m_mutex_100ee4330 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5a30, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1006dc290
    void __GLOBAL__sub_I_unity_0_cxx_cxx(void) {
        uint64_t uVar1 = _objc_autoreleasePoolPush();
        ___cxx_global_var_init();
        ___cxx_global_var_init_1();
        _objc_autoreleasePoolPop(uVar1);
    }

} // namespace jag::graphics

namespace jag::tweak {
    // 0x1006d0d10: Event::Event(Event&&) has the same machine code as eastl::pair<shared_ptr<ui::Component>, int>::pair(eastl::pair<shared_ptr<ui::Component>, int>&&)

    // 0x1006d1010: Event::Event(Event&&) has the same machine code as eastl::pair<shared_ptr<ui::Component>, int>::pair(eastl::pair<shared_ptr<ui::Component>, int>&&)

} // namespace jag::tweak

namespace jag::render {
    // 0x1006d0d10: KeepAliveSharedPtrAndOwner::KeepAliveSharedPtrAndOwner(KeepAliveSharedPtrAndOwner&&) has the same machine code as eastl::pair<shared_ptr<ui::Component>, int>::pair(eastl::pair<shared_ptr<ui::Component>, int>&&)

    // 0x1006d1010: KeepAliveSharedPtrAndOwner::KeepAliveSharedPtrAndOwner(KeepAliveSharedPtrAndOwner&&) has the same machine code as eastl::pair<shared_ptr<ui::Component>, int>::pair(eastl::pair<shared_ptr<ui::Component>, int>&&)

} // namespace jag::render
