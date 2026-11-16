// libs/audio/SoundResource.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.audio

#include "SoundResource.h"

namespace jag::audio {
    // 0x103bc2608, 16 bytes, __common; set at startup by ___cxx_global_var_init
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> SoundResource::NullSoundResourceData;

    // 0x1000096a0: the linker folded this into BaseApp::GetExitAfterInit(), which has identical code
    SoundResource::IsStreamed() const;

    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    SoundResource::~SoundResource();

    // 0x100029ea0: the linker folded this into oldscape::InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long), which has identical code
    SoundResource::HasFailed() const;

    // 0x100b8ae50, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init
    void ___cxx_global_var_init(undefined8 param_1, _func_decltype_nullptr* param_2) {
        new (&SoundResource::NullSoundResourceData)
            shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_2);
        ___cxa_atexit(PTR__shared_ptr_100ee5158, &SoundResource::NullSoundResourceData, 4294967296);
    }

    // 0x100b8ae90, 64 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.1
    void ___cxx_global_var_init_1() {
        undefined* puVar1;

        puVar1 = PTR_LOOK_100ee47d8;
        if (*PTR_LOOK_100ee47d8 == '\0') {
            new (PTR_LOOK_100ee66e0) math::ColourHSL(0.0, 0.0, 1.0);
            *puVar1 = 1;
        }
    }

    // 0x100b8aed0, 64 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.2
    void ___cxx_global_var_init_2() {
        undefined* puVar1;

        puVar1 = PTR_UP_100ee47c8;
        if (*PTR_UP_100ee47c8 == '\0') {
            new (PTR_UP_100ee66d0) math::ColourHSL(0.0, 1.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x100b8af10, 64 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.3
    void ___cxx_global_var_init_3() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee4298;
        if (*PTR_m_pSingleton_100ee4298 == '\0') {
            ___cxa_atexit(std::unique_ptr<ThreadPoolSingleton, std::default_delete<ThreadPoolSingleton>>::~unique_ptr,
                          PTR_m_pSingleton_100ee5948, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100b8af50, 64 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.4
    void ___cxx_global_var_init_4() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee42a0;
        if (*PTR_m_pSingleton_100ee42a0 == '\0') {
            ___cxa_atexit(
                std::unique_ptr<ShaderThreadPoolSingleton, std::default_delete<ShaderThreadPoolSingleton>>::~unique_ptr,
                PTR_m_pSingleton_100ee5950, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100b8af90, 34 bytes, placed by debug map only (low confidence)
    // __GLOBAL__sub_I_unity_0_cxx.cxx
    void __GLOBAL__sub_I_unity_0_cxx_cxx() {
        undefined8 uVar1;

        uVar1 = _objc_autoreleasePoolPush();
        ___cxx_global_var_init();
        _objc_autoreleasePoolPop(uVar1);
    }

    // 0x100c92b50: the linker folded this into InlineFatalBreak(), which has identical code
    SoundResource::~SoundResource();

    // 0x100c92b50: the linker folded this into InlineFatalBreak(), which has identical code
    SoundResource::~SoundResource();

} // namespace jag::audio
