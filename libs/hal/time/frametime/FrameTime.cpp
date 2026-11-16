// libs/hal/time/frametime/FrameTime.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.hal.time

#include "FrameTime.h"

namespace jag {
    // 0x103bdd270
    int64_t FrameTime::m_currentTimeMS;

    // 0x103bdd278
    int64_t FrameTime::m_startTimeMS;

    // 0x103bdd280
    int64_t FrameTime::m_frameDeltaSecs;

    // 0x103bdd288
    int64_t FrameTime::m_currentTimeNS;

    // 0x103bdd290
    int64_t FrameTime::m_startTimeNS;

    // 0x103bdd298
    int64_t FrameTime::m_frameDeltaNS;

    // 0x103bdd2a0
    int64_t FrameTime::m_secondsSinceStart;

    // 0x100c9c370
    void FrameTime::NewFrame() {
        long lVar2;
        uint8_t auVar3[16];

        unsigned long long uVar1 = SystemTimer::GetTimeNS<std::chrono::steady_clock>();
        if (m_currentTimeMS != 0) {
            lVar2 = uVar1 - m_currentTimeNS;
            if (m_currentTimeNS <= uVar1) {
                m_frameDeltaSecs = (double)(_DAT_100d9e940 *
                                            ((longdouble)lVar2 +
                                             (longdouble) * (float*)(&DAT_100d9e968 + (unsigned long)(lVar2 < 0) * 4)));
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
        auVar3._8_4_ = (int)((unsigned long)lVar2 >> 32);
        auVar3._0_8_ = lVar2;
        auVar3._12_4_ = 1160773632;
        m_secondsSinceStart =
            (float)(((auVar3._8_8_ - 1.9342813113834067e+25) +
                     ((double)(((uint64_t)1127219200 << 32) | (uint32_t)((int)lVar2)) - 4503599627370496.0)) *
                    1e-09);
        m_currentTimeMS = uVar1 / 1000000;
        m_currentTimeNS = uVar1;
    }

} // namespace jag

// 0x100c9c4a0
void __libcpp_strstr(const char* str1, const char* str2) {
    _strstr("JanFebMarAprMayJunJulAugSepOctNovDec", str1);
}
