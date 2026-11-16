// libs/hal/time/frametime/FrameTime.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag {
    class FrameTime {
    public:
        void GetFrameDelta();
        void GetFrameDeltaD();
        void GetCurrentTimeMS();
        void GetCurrentTimeNS();
        void GetSecondsSinceProgramStart();
        void NewFrame();
        static int64_t m_currentTimeMS;
        static int64_t m_startTimeMS;
        static int64_t m_frameDeltaSecs;
        static int64_t m_currentTimeNS;
        static int64_t m_startTimeNS;
        static int64_t m_frameDeltaNS;
        static int64_t m_secondsSinceStart;

        uint8_t _unknown_0[1];
    };

    // 0x1000dd4d0
    void FrameTime::GetFrameDelta() {
        return (((uint64_t)((int)((unsigned long)m_frameDeltaSecs >> 32)) << 32) | (uint32_t)((float)m_frameDeltaSecs));
    }

    // 0x1006169e0
    void FrameTime::GetFrameDeltaD() {
        return m_frameDeltaSecs;
    }

    // 0x1009e9240
    void FrameTime::GetCurrentTimeMS() {
        return m_currentTimeMS;
    }

    // 0x100b04f10
    void FrameTime::GetCurrentTimeNS() {
        return m_currentTimeNS;
    }

    // 0x100c27700
    void FrameTime::GetSecondsSinceProgramStart() {
        return m_secondsSinceStart;
    }

} // namespace jag
