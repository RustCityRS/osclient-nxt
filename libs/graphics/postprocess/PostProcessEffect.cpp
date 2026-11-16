// libs/graphics/postprocess/PostProcessEffect.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics.postprocess

#include "PostProcessEffect.h"

namespace jag::postprocess {
    // 0x103bc1668, set at startup by ___cxx_global_var_init
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> PostProcessEffect::NullPostProcessEffect =
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();

    // 0x1000096a0: PostProcessEffect::GetEnabled() const has the same machine code as BaseApp::GetExitAfterInit()

    // 0x100009e70: PostProcessEffect::RenderDebug(render::Viewport const&) has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

    // 0x100009e70: PostProcessEffect::Destroy() has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

    // 0x100009e70: PostProcessEffect::~PostProcessEffect() has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

    // 0x100029ea0: PostProcessEffect::Init() has the same machine code as oldscape::InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long)

    // 0x100029ea0: PostProcessEffect::GetRequirements() const has the same machine code as oldscape::InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long)

    // 0x100066b70: PostProcessEffect::GetPriority() const has the same machine code as oldscape::widgets::Widget::GetTextColour() const

    // 0x1000e5d50, the same machine code as oldscape::rs2lib::CoordZoneSource::GetRotation() const
    int PostProcessEffect::GetID() const {
        return m_enabled;
    }

    // 0x100664980: PostProcessEffect::SetEnabled(bool) has the same machine code as audio::SoundResource::SetStreamed(bool)

    // 0x1009be360
    void ___cxx_global_var_init_1(void) {
        if (*PTR_VIEWRT_LUMINANCE_ADAPTED_100ee4048 == '\0') {
            if (___cxa_guard_acquire(PTR_VIEWRT_LUMINANCE_ADAPTED_100ee4048) != 0) {
                new (PTR_VIEWRT_LUMINANCE_ADAPTED_100ee5578) HashedString("LUMINANCE_ADAPTED");
                ___cxa_guard_release(PTR_VIEWRT_LUMINANCE_ADAPTED_100ee4048);
            }
        }
    }

    // 0x1009be3c0
    void ___cxx_global_var_init_2(void) {
        if (*PTR_VIEWRT_LUMINANCE_ADAPTED_PREVIOUS_100ee4058 == '\0') {
            if (___cxa_guard_acquire(PTR_VIEWRT_LUMINANCE_ADAPTED_PREVIOUS_100ee4058) != 0) {
                new (PTR_VIEWRT_LUMINANCE_ADAPTED_PREVIOUS_100ee5588) HashedString("LUMINANCE_ADAPTED_PREVIOUS");
                ___cxa_guard_release(PTR_VIEWRT_LUMINANCE_ADAPTED_PREVIOUS_100ee4058);
            }
        }
    }

    // 0x1009be420
    void ___cxx_global_var_init_4(void) {
        if (*PTR_VIEWRT_LUMINANCE_AVERAGE_100ee4050 == '\0') {
            if (___cxa_guard_acquire(PTR_VIEWRT_LUMINANCE_AVERAGE_100ee4050) != 0) {
                new (PTR_VIEWRT_LUMINANCE_AVERAGE_100ee5580) HashedString("VIEWRT_LUMINANCE_AVERAGE");
                ___cxa_guard_release(PTR_VIEWRT_LUMINANCE_AVERAGE_100ee4050);
            }
        }
    }

    // 0x1009be510
    void ___cxx_global_var_init_220(void) {
        uint8_t* puVar1 = PTR_LOOK_100ee47d8;
        if (*PTR_LOOK_100ee47d8 == '\0') {
            new (PTR_LOOK_100ee66e0) math::ColourHSL(0.0, 0.0, 1.0);
            *puVar1 = 1;
        }
    }

    // 0x1009be550
    void ___cxx_global_var_init_221(void) {
        uint8_t* puVar1 = PTR_UP_100ee47c8;
        if (*PTR_UP_100ee47c8 == '\0') {
            new (PTR_UP_100ee66d0) math::ColourHSL(0.0, 1.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x1009be590
    void ___cxx_global_var_init_222(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee4298;
        if (*PTR_m_pSingleton_100ee4298 == '\0') {
            ___cxa_atexit(std::unique_ptr<ThreadPoolSingleton>::~unique_ptr, PTR_m_pSingleton_100ee5948, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1009be5d0
    void ___cxx_global_var_init_223(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee42a0;
        if (*PTR_m_pSingleton_100ee42a0 == '\0') {
            ___cxa_atexit(std::unique_ptr<ShaderThreadPoolSingleton>::~unique_ptr, PTR_m_pSingleton_100ee5950,
                          4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1009be610
    void ___cxx_global_var_init_224(void) {
        uint8_t* puVar1 = PTR_ZERO_100ee4790;
        if (*PTR_ZERO_100ee4790 == '\0') {
            new (PTR_ZERO_100ee6698) math::Point(0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x1009be640
    void ___cxx_global_var_init_225(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee4518;
        if (*PTR_m_mutex_100ee4518 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5df0, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1009be680
    void ___cxx_global_var_init_226(void) {
        uint8_t* puVar1 = PTR_ZERO_100ee4800;
        if (*PTR_ZERO_100ee4800 == '\0') {
            new (PTR_ZERO_100ee6708) ImVec4(0.0, 0.0, 0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x1009be6c0
    void ___cxx_global_var_init_227(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee49c8;
        if (*PTR_m_pSingleton_100ee49c8 == '\0') {
            ___cxa_atexit(std::unique_ptr<render::ShaderProgramManager>::~unique_ptr, PTR_m_pSingleton_100ee6c38,
                          4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1009be700
    void ___cxx_global_var_init_228(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee49d0;
        if (*PTR_m_pSingleton_100ee49d0 == '\0') {
            ___cxa_atexit(std::unique_ptr<render::VertexDeclarationManager>::~unique_ptr, PTR_m_pSingleton_100ee6c40,
                          4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1009be740
    void ___cxx_global_var_init_229(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee49a0;
        if (*PTR_m_pSingleton_100ee49a0 == '\0') {
            ___cxa_atexit(std::unique_ptr<render::RenderDevice>::~unique_ptr, PTR_m_pSingleton_100ee6c10, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1009be780
    void ___cxx_global_var_init_230(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee49a8;
        if (*PTR_m_pSingleton_100ee49a8 == '\0') {
            ___cxa_atexit(std::unique_ptr<render::BuiltinStates>::~unique_ptr, PTR_m_pSingleton_100ee6c18, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1009be7c0
    void __GLOBAL__sub_I_unity_0_cxx_cxx(void) {
        uint64_t uVar1 = _objc_autoreleasePoolPush();
        ___cxx_global_var_init();
        ___cxx_global_var_init_39();
        ___cxx_global_var_init_43();
        _objc_autoreleasePoolPop(uVar1);
    }

} // namespace jag::postprocess
