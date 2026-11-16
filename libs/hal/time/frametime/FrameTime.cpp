// libs/hal/time/frametime/FrameTime.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.hal.time

#include "FrameTime.h"

namespace jag {
    // 0x103bdd270, 8 bytes, __common; zero-initialised
    FrameTime::m_currentTimeMS;

    // 0x103bdd278, 8 bytes, __common; zero-initialised
    FrameTime::m_startTimeMS;

    // 0x103bdd280, 8 bytes, __common; zero-initialised
    FrameTime::m_frameDeltaSecs;

    // 0x103bdd288, 8 bytes, __common; zero-initialised
    FrameTime::m_currentTimeNS;

    // 0x103bdd290, 8 bytes, __common; zero-initialised
    FrameTime::m_startTimeNS;

    // 0x103bdd298, 8 bytes, __common; zero-initialised
    FrameTime::m_frameDeltaNS;

    // 0x103bdd2a0, 8 bytes, __common; zero-initialised
    FrameTime::m_secondsSinceStart;

    // 0x100c9c370, 272 bytes, placed by class name and debug map
    // FrameTime::NewFrame()
    /* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
    /* FrameTime::NewFrame() */

    void FrameTime::NewFrame() {
        ulonglong uVar1;
        long lVar2;
        undefined1 auVar3[16];

        uVar1 = SystemTimer::GetTimeNS<std::chrono::steady_clock>((SystemTimer*)this);
        if (m_currentTimeMS != 0) {
            lVar2 = uVar1 - m_currentTimeNS;
            if (m_currentTimeNS <= uVar1) {
                m_frameDeltaSecs =
                    (double)(_DAT_100d9e940 *
                             ((longdouble)lVar2 + (longdouble) * (float*)(&DAT_100d9e968 + (ulong)(lVar2 < 0) * 4)));
                if (lVar2 == 0) {
                    m_frameDeltaSecs = 1e-06;
                }
                m_frameDeltaNS = lVar2;
                goto LAB_100c9c426;
            }
        }
        m_frameDeltaSecs = 1e-06;
        m_startTimeMS = uVar1 / 1000000;
        m_startTimeNS = uVar1;
    LAB_100c9c426:
        lVar2 = uVar1 - m_startTimeNS;
        auVar3._8_4_ = (int)((ulong)lVar2 >> 32);
        auVar3._0_8_ = lVar2;
        auVar3._12_4_ = 1160773632;
        m_secondsSinceStart = (float)(((auVar3._8_8_ - 1.9342813113834067e+25) +
                                       ((double)CONCAT44(1127219200, (int)lVar2) - 4503599627370496.0)) *
                                      1e-09);
        m_currentTimeMS = uVar1 / 1000000;
        m_currentTimeNS = uVar1;
    }

} // namespace jag

// 0x100c9c4a0, 32 bytes, placed by debug map only (low confidence)
// __libcpp_strstr(char const*, char const*)
void __libcpp_strstr(char* param_1, char* param_2) {
    _strstr("JanFebMarAprMayJunJulAugSepOctNovDec", param_1);
}
