// _unplaced/libs/ui/unity_0.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.ui

#include "libs/jtl/multibuffer/MultiBuffer.h"
#include "libs/tweaky/Tweaky.h"

namespace jag::graphics {
    // 0x10422b7d0, 64 bytes, __bss; zero-initialised
    MAYA_ANIM_INVERT_MATRIX;

    // 0x10422b810, 16 bytes, __bss; zero-initialised
    WORLD_ORTHOGONAL;

    // 0x1006db6a0, 96 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init
    void ___cxx_global_var_init() {
        undefined1 local_50[40];
        Vector3T<int> local_28[16];

        math::Matrix33Scaling<float>((math*)local_50, 1.0, 1.0, -1.0);
        math::Vector3T<int>::Vector3T(local_28);
        new (&MAYA_ANIM_INVERT_MATRIX) math::Matrix44T<float>(local_50, local_28);
    }

    // 0x1006db700, 32 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.1
    void ___cxx_global_var_init_1() {
        new (&WORLD_ORTHOGONAL) math::ColourHSL(-1.5707964, -1.5707964, 0.0);
    }

    // 0x1006db720, 96 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.3
    void ___cxx_global_var_init_3() {
        if (*PTR_VIEWRT_LUMINANCE_ADAPTED_100ee4048 == '\0') {
            if (___cxa_guard_acquire(PTR_VIEWRT_LUMINANCE_ADAPTED_100ee4048) != 0) {
                new (PTR_VIEWRT_LUMINANCE_ADAPTED_100ee5578) HashedString("LUMINANCE_ADAPTED");
                ___cxa_guard_release(PTR_VIEWRT_LUMINANCE_ADAPTED_100ee4048);
            }
        }
    }

    // 0x1006db780, 96 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.4
    void ___cxx_global_var_init_4() {
        if (*PTR_VIEWRT_LUMINANCE_ADAPTED_PREVIOUS_100ee4058 == '\0') {
            if (___cxa_guard_acquire(PTR_VIEWRT_LUMINANCE_ADAPTED_PREVIOUS_100ee4058) != 0) {
                new (PTR_VIEWRT_LUMINANCE_ADAPTED_PREVIOUS_100ee5588) HashedString("LUMINANCE_ADAPTED_PREVIOUS");
                ___cxa_guard_release(PTR_VIEWRT_LUMINANCE_ADAPTED_PREVIOUS_100ee4058);
            }
        }
    }

    // 0x1006db7e0, 96 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.6
    void ___cxx_global_var_init_6() {
        if (*PTR_VIEWRT_LUMINANCE_AVERAGE_100ee4050 == '\0') {
            if (___cxa_guard_acquire(PTR_VIEWRT_LUMINANCE_AVERAGE_100ee4050) != 0) {
                new (PTR_VIEWRT_LUMINANCE_AVERAGE_100ee5580) HashedString("VIEWRT_LUMINANCE_AVERAGE");
                ___cxa_guard_release(PTR_VIEWRT_LUMINANCE_AVERAGE_100ee4050);
            }
        }
    }

    // 0x1006db840, 96 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.38
    void ___cxx_global_var_init_38() {
        if (*PTR_DEFAULT_SERVER_ACTIVE_PROPERTIES_100ee4658 == '\0') {
            if (___cxa_guard_acquire(PTR_DEFAULT_SERVER_ACTIVE_PROPERTIES_100ee4658) != 0) {
                new (PTR_DEFAULT_SERVER_ACTIVE_PROPERTIES_100ee6450) oldscape::sidebars::SideBarData(0, -1);
                ___cxa_guard_release(PTR_DEFAULT_SERVER_ACTIVE_PROPERTIES_100ee4658);
            }
        }
    }

    // 0x1006db8a0, 128 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.39
    void ___cxx_global_var_init_39(undefined8 param_1, _func_decltype_nullptr* param_2) {
        if (*PTR_NullComponentShared_100ee4660 == '\0') {
            if (___cxa_guard_acquire(PTR_NullComponentShared_100ee4660) != 0) {
                new (PTR_NullComponentShared_100ee6498)
                    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_2);
                ___cxa_atexit(PTR__shared_ptr_100ee5178, PTR_NullComponentShared_100ee6498, 4294967296);
                ___cxa_guard_release(PTR_NullComponentShared_100ee4660);
            }
        }
    }

    // 0x1006db920, 128 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.40
    void ___cxx_global_var_init_40(undefined8 param_1, _func_decltype_nullptr* param_2) {
        if (*PTR_NullInterfaceShared_100ee4668 == '\0') {
            if (___cxa_guard_acquire(PTR_NullInterfaceShared_100ee4668) != 0) {
                new (PTR_NullInterfaceShared_100ee64a0)
                    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_2);
                ___cxa_atexit(PTR__shared_ptr_100ee5180, PTR_NullInterfaceShared_100ee64a0, 4294967296);
                ___cxa_guard_release(PTR_NullInterfaceShared_100ee4668);
            }
        }
    }

    // 0x1006db9a0, 128 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.43
    void ___cxx_global_var_init_43() {
        if (*PTR_m_defaultBaseURL_100ee4650 == '\0') {
            if (___cxa_guard_acquire(PTR_m_defaultBaseURL_100ee4650) != 0) {
                new (PTR_m_defaultBaseURL_100ee6410) eastl::fixed_string<char, 512, true, eastl::allocator>();
                ___cxa_atexit(PTR__fixed_string_100ee6c98, PTR_m_defaultBaseURL_100ee6410, 4294967296);
                ___cxa_guard_release(PTR_m_defaultBaseURL_100ee4650);
            }
        }
    }

    // 0x1006dba20, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.190
    void ___cxx_global_var_init_190() {
        undefined* puVar1;

        puVar1 = PTR_LOOK_100ee47d8;
        if (*PTR_LOOK_100ee47d8 == '\0') {
            new (PTR_LOOK_100ee66e0) math::ColourHSL(0.0, 0.0, 1.0);
            *puVar1 = 1;
        }
    }

    // 0x1006dba60, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.191
    void ___cxx_global_var_init_191() {
        undefined* puVar1;

        puVar1 = PTR_UP_100ee47c8;
        if (*PTR_UP_100ee47c8 == '\0') {
            new (PTR_UP_100ee66d0) math::ColourHSL(0.0, 1.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x1006dbaa0, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.192
    void ___cxx_global_var_init_192() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee4298;
        if (*PTR_m_pSingleton_100ee4298 == '\0') {
            ___cxa_atexit(std::unique_ptr<ThreadPoolSingleton, std::default_delete<ThreadPoolSingleton>>::~unique_ptr,
                          PTR_m_pSingleton_100ee5948, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1006dbae0, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.193
    void ___cxx_global_var_init_193() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee42a0;
        if (*PTR_m_pSingleton_100ee42a0 == '\0') {
            ___cxa_atexit(
                std::unique_ptr<ShaderThreadPoolSingleton, std::default_delete<ShaderThreadPoolSingleton>>::~unique_ptr,
                PTR_m_pSingleton_100ee5950, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1006dbb20, 48 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.194
    void ___cxx_global_var_init_194() {
        undefined* puVar1;

        puVar1 = PTR_ZERO_100ee4790;
        if (*PTR_ZERO_100ee4790 == '\0') {
            new (PTR_ZERO_100ee6698) math::Point<float>(0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x1006dbb50, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.195
    void ___cxx_global_var_init_195() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee4518;
        if (*PTR_m_mutex_100ee4518 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5df0, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1006dbb90, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.196
    void ___cxx_global_var_init_196() {
        undefined* puVar1;

        puVar1 = PTR_ZERO_100ee4800;
        if (*PTR_ZERO_100ee4800 == '\0') {
            new (PTR_ZERO_100ee6708) ImVec4(0.0, 0.0, 0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x1006dbbd0, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.197
    void ___cxx_global_var_init_197() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee49c8;
        if (*PTR_m_pSingleton_100ee49c8 == '\0') {
            ___cxa_atexit(std::unique_ptr<render::ShaderProgramManager,
                                          std::default_delete<render::ShaderProgramManager>>::~unique_ptr,
                          PTR_m_pSingleton_100ee6c38, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1006dbc10, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.198
    void ___cxx_global_var_init_198() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee49d0;
        if (*PTR_m_pSingleton_100ee49d0 == '\0') {
            ___cxa_atexit(std::unique_ptr<render::VertexDeclarationManager,
                                          std::default_delete<render::VertexDeclarationManager>>::~unique_ptr,
                          PTR_m_pSingleton_100ee6c40, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1006dbc50, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.199
    void ___cxx_global_var_init_199() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee49d8;
        if (*PTR_m_pSingleton_100ee49d8 == '\0') {
            ___cxa_atexit(std::unique_ptr<AnimationManager, std::default_delete<AnimationManager>>::~unique_ptr,
                          PTR_m_pSingleton_100ee6c48, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1006dbc90, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.200
    void ___cxx_global_var_init_200() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee49a0;
        if (*PTR_m_pSingleton_100ee49a0 == '\0') {
            ___cxa_atexit(std::unique_ptr<render::RenderDevice, std::default_delete<render::RenderDevice>>::~unique_ptr,
                          PTR_m_pSingleton_100ee6c10, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1006dbcd0, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.201
    void ___cxx_global_var_init_201() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee45b0;
        if (*PTR_m_mutex_100ee45b0 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5f20, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1006dbd10, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.202
    void ___cxx_global_var_init_202() {
        undefined* puVar1;

        puVar1 = PTR_ZERO_100ee47e0;
        if (*PTR_ZERO_100ee47e0 == '\0') {
            new (PTR_ZERO_100ee66e8) math::ColourHSL(0.0, 0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x1006dbd50, 96 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.203
    void ___cxx_global_var_init_203() {
        undefined* puVar1;

        puVar1 = PTR_ZERO_100ee4820;
        if (*PTR_ZERO_100ee4820 == '\0') {
            new (PTR_ZERO_100ee6728)
                math::Matrix44T<float>(0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x1006dbdb0, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.204
    void ___cxx_global_var_init_204() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee45d8;
        if (*PTR_m_mutex_100ee45d8 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5f70, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1006dbdf0, 96 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.205
    void ___cxx_global_var_init_205() {
        undefined* puVar1;

        puVar1 = PTR_IDENTITY_100ee4828;
        if (*PTR_IDENTITY_100ee4828 == '\0') {
            new (PTR_IDENTITY_100ee6730)
                math::Matrix44T<float>(1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0);
            *puVar1 = 1;
        }
    }

    // 0x1006dbe50, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.206
    void ___cxx_global_var_init_206() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee4590;
        if (*PTR_m_mutex_100ee4590 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5ee0, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1006dbe90, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.207
    void ___cxx_global_var_init_207() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee4290;
        if (*PTR_m_pSingleton_100ee4290 == '\0') {
            ___cxa_atexit(std::unique_ptr<graphicutils::BatchDestroyManager,
                                          std::default_delete<graphicutils::BatchDestroyManager>>::~unique_ptr,
                          PTR_m_pSingleton_100ee5940, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1006dbed0, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.208
    void ___cxx_global_var_init_208() {
        undefined* puVar1;

        puVar1 = PTR_RIGHT_100ee47e8;
        if (*PTR_RIGHT_100ee47e8 == '\0') {
            new (PTR_RIGHT_100ee66f0) math::ColourHSL(1.0, 0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x1006dbf10, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.209
    void ___cxx_global_var_init_209() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee42b0;
        if (*PTR_m_pSingleton_100ee42b0 == '\0') {
            ___cxa_atexit(
                std::unique_ptr<debug::DebugUIManager, std::default_delete<debug::DebugUIManager>>::~unique_ptr,
                PTR_m_pSingleton_100ee5960, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1006dbf50, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.210
    void ___cxx_global_var_init_210() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee4338;
        if (*PTR_m_mutex_100ee4338 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5a40, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1006dbf90, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.211
    void ___cxx_global_var_init_211() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee4320;
        if (*PTR_m_mutex_100ee4320 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5a18, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1006dbfd0, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.212
    void ___cxx_global_var_init_212() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee42e8;
        if (*PTR_m_mutex_100ee42e8 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee59b8, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1006dc010, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.213
    void ___cxx_global_var_init_213() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee4300;
        if (*PTR_m_mutex_100ee4300 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee59e0, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1006dc050, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.214
    void ___cxx_global_var_init_214() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee4340;
        if (*PTR_m_mutex_100ee4340 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5a50, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1006dc090, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.215
    void ___cxx_global_var_init_215() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee42f0;
        if (*PTR_m_mutex_100ee42f0 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee59c8, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1006dc0d0, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.216
    void ___cxx_global_var_init_216() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee4328;
        if (*PTR_m_mutex_100ee4328 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5a20, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1006dc110, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.217
    void ___cxx_global_var_init_217() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee4310;
        if (*PTR_m_mutex_100ee4310 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee59f8, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1006dc150, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.218
    void ___cxx_global_var_init_218() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee4318;
        if (*PTR_m_mutex_100ee4318 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5a08, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1006dc190, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.219
    void ___cxx_global_var_init_219() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee4308;
        if (*PTR_m_mutex_100ee4308 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee59f0, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1006dc1d0, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.220
    void ___cxx_global_var_init_220() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee42f8;
        if (*PTR_m_mutex_100ee42f8 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee59d8, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1006dc210, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.221
    void ___cxx_global_var_init_221() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee4350;
        if (*PTR_m_mutex_100ee4350 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5a68, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1006dc250, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.222
    void ___cxx_global_var_init_222() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee4330;
        if (*PTR_m_mutex_100ee4330 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5a30, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1006dc290, 39 bytes, placed by nothing (unplaced)
    // __GLOBAL__sub_I_unity_0_cxx.cxx
    void __GLOBAL__sub_I_unity_0_cxx_cxx() {
        undefined8 uVar1;

        uVar1 = _objc_autoreleasePoolPush();
        ___cxx_global_var_init();
        ___cxx_global_var_init_1();
        _objc_autoreleasePoolPop(uVar1);
    }

} // namespace jag::graphics

namespace jag::tweak {
    // 0x1006d0d10: the linker folded this into eastl::pair<shared_ptr<ui::Component>, int>::pair(eastl::pair<shared_ptr<ui::Component>, int>&&), which has identical code
    Event::Event(Event&&);

    // 0x1006d1010: the linker folded this into eastl::pair<shared_ptr<ui::Component>, int>::pair(eastl::pair<shared_ptr<ui::Component>, int>&&), which has identical code
    Event::Event(Event&&);

} // namespace jag::tweak

namespace jag::render {
    // 0x1006d0d10: the linker folded this into eastl::pair<shared_ptr<ui::Component>, int>::pair(eastl::pair<shared_ptr<ui::Component>, int>&&), which has identical code
    KeepAliveSharedPtrAndOwner::KeepAliveSharedPtrAndOwner(KeepAliveSharedPtrAndOwner&&);

    // 0x1006d1010: the linker folded this into eastl::pair<shared_ptr<ui::Component>, int>::pair(eastl::pair<shared_ptr<ui::Component>, int>&&), which has identical code
    KeepAliveSharedPtrAndOwner::KeepAliveSharedPtrAndOwner(KeepAliveSharedPtrAndOwner&&);

} // namespace jag::render
