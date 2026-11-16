// libs/framework/graphicsapp/MainLoopFrameTimer.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: osclient

namespace jag {
    class MainLoopFrameTimer {
    public:
        int GetLogicTick() const;
        void GetFastUpdateLoopEnabled() const;
        int GetFrameCount() const;
        int GetMainLoopRate() const;
        unsigned int GetMainLoopInterval() const;
        long GetUniqueLoopID() const;
        uint8_t* GetFPSCounter();
        void SetFastUpdateLoopEnabled(bool arg1);
        MainLoopFrameTimer();
        void SetMainLoopInterval(unsigned int arg1);
        ~MainLoopFrameTimer();
        void MainInit();
        unsigned int Update(unsigned long long arg1);
        bool IsRenderingDisabled();
        void MainLogic();
        void PostFrameUpdate();
        unsigned long long WaitUntilMaxFPS(unsigned long long arg1, unsigned long long arg2, unsigned long long arg3);
        void WaitUntilMaxFPS(unsigned long long arg1);

    private:
        unsigned int m_mainLoopInterval;
        int m_mainLoopRate;
        int m_logicTick;
        int field_12;
        int m_frameCount;
        uint8_t _unknown_20[4];
        unsigned long long field_24;
        uint8_t m_fastUpdateLoopEnabled;
        uint8_t _unknown_33[7];
        long m_uniqueLoopID;
        uint8_t _unknown_48[98656];
        unsigned long long field_98704;
        uint8_t m_renderingDisabled;
        uint8_t _unknown_98713[15];
    };

    // 0x1001a3c10
    uint8_t* MainLoopFrameTimer::GetFPSCounter() {
        return m_material;
    }

    // 0x1001a3d00
    void MainLoopFrameTimer::SetFastUpdateLoopEnabled(bool arg1) {
        m_alphaTestThreshold = arg1;
    }

    // 0x100b04d60
    bool MainLoopFrameTimer::IsRenderingDisabled() {
        return m_renderingDisabled;
    }

    // 0x100b061a0
    MainLoopFrameTimer::MainLoopFrameTimer()
        : m_mainLoopInterval(20), m_mainLoopRate(50), m_logicTick(1), field_12(1), m_frameCount(1), field_24(0),
          m_fastUpdateLoopEnabled(0), m_uniqueLoopID(0), field_98704(0), m_renderingDisabled(0) {}

    // 0x100b06530
    MainLoopFrameTimer::~MainLoopFrameTimer() {
        field_48.~FPSCounter();
    }

} // namespace jag

namespace jag::graphics {
    // 0x1001a3c10: TextureAtlasUsageMap::GetMaterialUsageSlots() has the same machine code as MainLoopFrameTimer::GetFPSCounter()

    // 0x1001a3c10: ModularParticleSystemTemplate::GetEmitterTemplates() const has the same machine code as MainLoopFrameTimer::GetFPSCounter()

} // namespace jag::graphics

namespace jag::graphicutils {
    // 0x1001a3d00: Screengrabber::SetScreenshotSaveMode(unsigned char) has the same machine code as MainLoopFrameTimer::SetFastUpdateLoopEnabled(bool)

} // namespace jag::graphicutils
