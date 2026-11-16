// libs/graphics/postprocess/PostProcessEffect.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics.postprocess

#include "PostProcessEffect.h"

namespace jag::postprocess {
    // 0x103bc1668, 16 bytes, __common; set at startup by ___cxx_global_var_init
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> PostProcessEffect::NullPostProcessEffect;

    // 0x1000096a0: the linker folded this into BaseApp::GetExitAfterInit(), which has identical code
    PostProcessEffect::GetEnabled() const;

    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    PostProcessEffect::RenderDebug(render::Viewport const&);

    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    PostProcessEffect::Destroy();

    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    PostProcessEffect::~PostProcessEffect();

    // 0x100029ea0: the linker folded this into oldscape::InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long), which has identical code
    PostProcessEffect::Init();

    // 0x100029ea0: the linker folded this into oldscape::InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long), which has identical code
    PostProcessEffect::GetRequirements() const;

    // 0x100066b70: the linker folded this into oldscape::widgets::Widget::GetTextColour() const, which has identical code
    int PostProcessEffect::GetPriority() const;

    // 0x1000e5d50: the linker folded this into oldscape::rs2lib::CoordZoneSource::GetRotation() const, which has identical code
    int PostProcessEffect::GetID() const;

    // 0x100664980: the linker folded this into audio::SoundResource::SetStreamed(bool), which has identical code
    PostProcessEffect::SetEnabled(bool);

    // 0x1009be320, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init
    void ___cxx_global_var_init(undefined8 param_1, _func_decltype_nullptr* param_2) {
        new (&PostProcessEffect::NullPostProcessEffect)
            shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_2);
        ___cxa_atexit(PTR__shared_ptr_100ee5168, &PostProcessEffect::NullPostProcessEffect, 4294967296);
    }

    // 0x1009be360, 96 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.1
    void ___cxx_global_var_init_1() {
        if (*PTR_VIEWRT_LUMINANCE_ADAPTED_100ee4048 == '\0') {
            if (___cxa_guard_acquire(PTR_VIEWRT_LUMINANCE_ADAPTED_100ee4048) != 0) {
                new (PTR_VIEWRT_LUMINANCE_ADAPTED_100ee5578) HashedString("LUMINANCE_ADAPTED");
                ___cxa_guard_release(PTR_VIEWRT_LUMINANCE_ADAPTED_100ee4048);
            }
        }
    }

    // 0x1009be3c0, 96 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.2
    void ___cxx_global_var_init_2() {
        if (*PTR_VIEWRT_LUMINANCE_ADAPTED_PREVIOUS_100ee4058 == '\0') {
            if (___cxa_guard_acquire(PTR_VIEWRT_LUMINANCE_ADAPTED_PREVIOUS_100ee4058) != 0) {
                new (PTR_VIEWRT_LUMINANCE_ADAPTED_PREVIOUS_100ee5588) HashedString("LUMINANCE_ADAPTED_PREVIOUS");
                ___cxa_guard_release(PTR_VIEWRT_LUMINANCE_ADAPTED_PREVIOUS_100ee4058);
            }
        }
    }

    // 0x1009be420, 96 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.4
    void ___cxx_global_var_init_4() {
        if (*PTR_VIEWRT_LUMINANCE_AVERAGE_100ee4050 == '\0') {
            if (___cxa_guard_acquire(PTR_VIEWRT_LUMINANCE_AVERAGE_100ee4050) != 0) {
                new (PTR_VIEWRT_LUMINANCE_AVERAGE_100ee5580) HashedString("VIEWRT_LUMINANCE_AVERAGE");
                ___cxa_guard_release(PTR_VIEWRT_LUMINANCE_AVERAGE_100ee4050);
            }
        }
    }

    // 0x1009be510, 64 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.220
    void ___cxx_global_var_init_220() {
        undefined* puVar1;

        puVar1 = PTR_LOOK_100ee47d8;
        if (*PTR_LOOK_100ee47d8 == '\0') {
            new (PTR_LOOK_100ee66e0) math::ColourHSL(0.0, 0.0, 1.0);
            *puVar1 = 1;
        }
    }

    // 0x1009be550, 64 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.221
    void ___cxx_global_var_init_221() {
        undefined* puVar1;

        puVar1 = PTR_UP_100ee47c8;
        if (*PTR_UP_100ee47c8 == '\0') {
            new (PTR_UP_100ee66d0) math::ColourHSL(0.0, 1.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x1009be590, 64 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.222
    void ___cxx_global_var_init_222() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee4298;
        if (*PTR_m_pSingleton_100ee4298 == '\0') {
            ___cxa_atexit(std::unique_ptr<ThreadPoolSingleton, std::default_delete<ThreadPoolSingleton>>::~unique_ptr,
                          PTR_m_pSingleton_100ee5948, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1009be5d0, 64 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.223
    void ___cxx_global_var_init_223() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee42a0;
        if (*PTR_m_pSingleton_100ee42a0 == '\0') {
            ___cxa_atexit(
                std::unique_ptr<ShaderThreadPoolSingleton, std::default_delete<ShaderThreadPoolSingleton>>::~unique_ptr,
                PTR_m_pSingleton_100ee5950, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1009be610, 48 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.224
    void ___cxx_global_var_init_224() {
        undefined* puVar1;

        puVar1 = PTR_ZERO_100ee4790;
        if (*PTR_ZERO_100ee4790 == '\0') {
            new (PTR_ZERO_100ee6698) math::Point<float>(0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x1009be640, 64 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.225
    void ___cxx_global_var_init_225() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee4518;
        if (*PTR_m_mutex_100ee4518 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5df0, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1009be680, 64 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.226
    void ___cxx_global_var_init_226() {
        undefined* puVar1;

        puVar1 = PTR_ZERO_100ee4800;
        if (*PTR_ZERO_100ee4800 == '\0') {
            new (PTR_ZERO_100ee6708) ImVec4(0.0, 0.0, 0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x1009be6c0, 64 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.227
    void ___cxx_global_var_init_227() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee49c8;
        if (*PTR_m_pSingleton_100ee49c8 == '\0') {
            ___cxa_atexit(std::unique_ptr<render::ShaderProgramManager,
                                          std::default_delete<render::ShaderProgramManager>>::~unique_ptr,
                          PTR_m_pSingleton_100ee6c38, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1009be700, 64 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.228
    void ___cxx_global_var_init_228() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee49d0;
        if (*PTR_m_pSingleton_100ee49d0 == '\0') {
            ___cxa_atexit(std::unique_ptr<render::VertexDeclarationManager,
                                          std::default_delete<render::VertexDeclarationManager>>::~unique_ptr,
                          PTR_m_pSingleton_100ee6c40, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1009be740, 64 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.229
    void ___cxx_global_var_init_229() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee49a0;
        if (*PTR_m_pSingleton_100ee49a0 == '\0') {
            ___cxa_atexit(std::unique_ptr<render::RenderDevice, std::default_delete<render::RenderDevice>>::~unique_ptr,
                          PTR_m_pSingleton_100ee6c10, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1009be780, 64 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.230
    void ___cxx_global_var_init_230() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee49a8;
        if (*PTR_m_pSingleton_100ee49a8 == '\0') {
            ___cxa_atexit(
                std::unique_ptr<render::BuiltinStates, std::default_delete<render::BuiltinStates>>::~unique_ptr,
                PTR_m_pSingleton_100ee6c18, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1009be7c0, 44 bytes, placed by debug map only (low confidence)
    // __GLOBAL__sub_I_unity_0_cxx.cxx
    void __GLOBAL__sub_I_unity_0_cxx_cxx() {
        undefined8 uVar1;

        uVar1 = _objc_autoreleasePoolPush();
        ___cxx_global_var_init();
        ___cxx_global_var_init_39();
        ___cxx_global_var_init_43();
        _objc_autoreleasePoolPop(uVar1);
    }

    // 0x100c92b50: the linker folded this into InlineFatalBreak(), which has identical code
    PostProcessEffect::~PostProcessEffect();

    // 0x100c92b50: the linker folded this into InlineFatalBreak(), which has identical code
    PostProcessEffect::~PostProcessEffect();

} // namespace jag::postprocess
