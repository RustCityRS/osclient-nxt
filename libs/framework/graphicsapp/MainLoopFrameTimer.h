// libs/framework/graphicsapp/MainLoopFrameTimer.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: osclient

namespace jag {
    class MainLoopFrameTimer {
    public:
        GetLogicTick() const;
        GetFastUpdateLoopEnabled() const;
        GetFrameCount() const;
        GetMainLoopRate() const;
        GetMainLoopInterval() const;
        GetUniqueLoopID() const;
        GetFPSCounter();
        SetFastUpdateLoopEnabled(bool);
        MainLoopFrameTimer();
        void SetMainLoopInterval(unsigned int);
        ~MainLoopFrameTimer();
        void MainInit();
        uint Update(unsigned long long);
        IsRenderingDisabled();
        void MainLogic();
        void PostFrameUpdate();
        ulonglong WaitUntilMaxFPS(unsigned long long, unsigned long long, unsigned long long);
        void WaitUntilMaxFPS(unsigned long long);

        // data members, from how the methods use this: 98728 bytes
        uint m_mainLoopInterval; // offset 0
        int field_4;             // offset 4
        int field_8;             // offset 8
        int field_12;            // offset 12
        int field_16;            // offset 16
        char _unknown_20[4];
        ulonglong field_24;           // offset 24
        bool m_fastUpdateLoopEnabled; // offset 32
        char _unknown_33[7];
        long field_40; // offset 40
        char _unknown_48[98656];
        ulonglong field_98704;          // offset 98704
        undefined1 m_renderingDisabled; // offset 98712
        char _unknown_98713[15];
    };

    // 0x1001a3c10, 16 bytes, inline, placed by class name and debug map
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // MainLoopFrameTimer::GetFPSCounter()
    /* graphics::GeometryBatchInstance::GetMaterial() */

    undefined1* graphics::GeometryBatchInstance::GetMaterial() {
        return m_material;
    }

    // 0x1001a3d00, 16 bytes, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // MainLoopFrameTimer::SetFastUpdateLoopEnabled(bool)
    /* graphics::RenderMaterial::SetAlphaTestThreshold(unsigned char) */

    void graphics::RenderMaterial::SetAlphaTestThreshold(uchar param_1) {
        m_alphaTestThreshold = param_1;
    }

    // 0x100b03890, 16 bytes, complete-object constructor, inline, placed by class name
    // MainLoopFrameTimer::MainLoopFrameTimer(): jumps straight to the base-object constructor

    // 0x100b03b60, 16 bytes, complete-object destructor, inline, placed by class name
    // MainLoopFrameTimer::~MainLoopFrameTimer(): jumps straight to the base-object destructor

    // 0x100b04d60, 16 bytes, inline, placed by class name
    // MainLoopFrameTimer::IsRenderingDisabled()
    undefined1 MainLoopFrameTimer::IsRenderingDisabled() {
        return m_renderingDisabled;
    }

    // 0x100b061a0, 128 bytes, base-object constructor, inline, placed by class name
    // MainLoopFrameTimer::MainLoopFrameTimer()
    void MainLoopFrameTimer::MainLoopFrameTimer() {
        m_mainLoopInterval = 20;
        field_4 = 50;
        field_8 = 1;
        field_12 = 1;
        field_16 = 1;
        field_24 = 0;
        m_fastUpdateLoopEnabled = false;
        field_40 = 0;
        new (&field_48) FPSCounter();
        field_98704 = 0;
        m_renderingDisabled = 0;
        new (&field_98720) TimerT<std::chrono::steady_clock>();
    }

    // 0x100b06530, 16 bytes, base-object destructor, inline, placed by class name
    // MainLoopFrameTimer::~MainLoopFrameTimer()
    void MainLoopFrameTimer::~MainLoopFrameTimer() {
        (&field_48)->~FPSCounter();
    }

} // namespace jag

namespace jag::graphics {
    // 0x1001a3c10: the linker folded this into MainLoopFrameTimer::GetFPSCounter(), which has identical code
    TextureAtlasUsageMap::GetMaterialUsageSlots();

    // 0x1001a3c10: the linker folded this into MainLoopFrameTimer::GetFPSCounter(), which has identical code
    ModularParticleSystemTemplate::GetEmitterTemplates() const;

} // namespace jag::graphics

namespace jag::graphicutils {
    // 0x1001a3d00: the linker folded this into MainLoopFrameTimer::SetFastUpdateLoopEnabled(bool), which has identical code
    Screengrabber::SetScreenshotSaveMode(unsigned char);

} // namespace jag::graphicutils
