// libs/hal/time/frametime/FrameTime.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag {
    class FrameTime {
    public:
        GetFrameDelta();
        GetFrameDeltaD();
        GetCurrentTimeMS();
        GetCurrentTimeNS();
        GetSecondsSinceProgramStart();
        void NewFrame();
        static /* 8 bytes */ m_currentTimeMS;
        static /* 8 bytes */ m_startTimeMS;
        static /* 8 bytes */ m_frameDeltaSecs;
        static /* 8 bytes */ m_currentTimeNS;
        static /* 8 bytes */ m_startTimeNS;
        static /* 8 bytes */ m_frameDeltaNS;
        static /* 8 bytes */ m_secondsSinceStart;

        // data members, from how the methods use this: 1 bytes
        char _unknown_0[1];
    };

    // 0x1000dd4d0, 32 bytes, inline, placed by class name and debug map
    // FrameTime::GetFrameDelta()
    undefined8 FrameTime::GetFrameDelta() {
        return CONCAT44((int)((ulong)m_frameDeltaSecs >> 32), (float)m_frameDeltaSecs);
    }

    // 0x1006169e0, 32 bytes, inline, placed by class name
    // FrameTime::GetFrameDeltaD()
    undefined8 FrameTime::GetFrameDeltaD() {
        return m_frameDeltaSecs;
    }

    // 0x1009e9240, 16 bytes, inline, placed by class name
    // FrameTime::GetCurrentTimeMS()
    undefined8 FrameTime::GetCurrentTimeMS() {
        return m_currentTimeMS;
    }

    // 0x100b04f10, 16 bytes, inline, placed by class name
    // FrameTime::GetCurrentTimeNS()
    undefined8 FrameTime::GetCurrentTimeNS() {
        return m_currentTimeNS;
    }

    // 0x100c27700, 32 bytes, inline, placed by class name
    // FrameTime::GetSecondsSinceProgramStart()
    undefined4 FrameTime::GetSecondsSinceProgramStart() {
        return m_secondsSinceStart;
    }

} // namespace jag
