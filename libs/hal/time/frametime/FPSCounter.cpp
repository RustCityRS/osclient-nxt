// libs/hal/time/frametime/FPSCounter.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.hal.time

#include "FPSCounter.h"
#include "libs/core/utils/Hash.h"

namespace jag {
    // 0x100051680: FPSCounter::GetFPS() const has the same machine code as math::Range<float>::GetMin() const

    // 0x100051690: FPSCounter::GetLPS() const has the same machine code as math::Range<float>::GetMax() const

    // 0x100066b70: FPSCounter::GetWorstFPS() const has the same machine code as oldscape::widgets::Widget::GetTextColour() const

    // 0x1000e5d50: FPSCounter::GetRollingMeanFPS() const has the same machine code as oldscape::rs2lib::CoordZoneSource::GetRotation() const

    // 0x1001117e0: FPSCounter::GetBestFPS() const has the same machine code as oldscape::jagex3::Js5::GetIndexCrc() const

    // 0x100c9b6b0
    FPSCounter::FPSCounter()
        : m_rollingMeanFPS(0), m_worstFPS(0), m_bestFPS(0), field_24(0), m_fPS(0.0), m_lPS(0.0), field_8(0),
          m_rollingMeanFPS(0), m_rollingMeanSampleDurationMS(5000), field_98572(0), field_98576(0), field_98580(15),
          field_98584(0.0), field_98588(0), field_98592(0), field_98600(0), field_98608(0), field_98616(0),
          field_98632(0), m_lastFrameDurationNS(0), field_98648(0) {
        field_32.resize(15);
        field_64.resize(15);
        field_96.resize(15);
        field_128.resize(15);
        field_98648 = this_thread::GetThreadID();
    }

    // 0x100c9b880
    void FPSCounter::RecordDrawStartTime(unsigned long long arg1) {
        if (this_thread::GetThreadID() != field_98648) {
            LogAssert("this_thread::GetThreadID() == m_threadID",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/time/frametime/"
                      "FPSCounter.cpp",
                      21, nullptr);
        }
        unsigned long long uVar1 = field_98592;
        field_98632 = uVar1;
        field_98592 = arg1;
        m_lastFrameDurationNS = arg1 - uVar1;
        field_98616 = arg1 - field_98600;
    }

    // 0x100c9b8f0
    void FPSCounter::RecordDrawEndTime(unsigned long long arg1) {
        if (this_thread::GetThreadID() != field_98648) {
            LogAssert("this_thread::GetThreadID() == m_threadID",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/time/frametime/"
                      "FPSCounter.cpp",
                      33, nullptr);
        }
        field_98600 = arg1;
        field_98608 = arg1 - field_98592;
    }

    // 0x100c9b950
    void FPSCounter::Reset() {
        if (this_thread::GetThreadID() != field_98648) {
            LogAssert("this_thread::GetThreadID() == m_threadID",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/time/frametime/"
                      "FPSCounter.cpp",
                      43, nullptr);
        }
        field_98584 = 0.0;
        field_98588 = 0;
        m_bestFPS = 0;
        field_8 = 0;
        m_rollingMeanFPS = 0;
        field_160.clear();
        m_worstFPS = 2147483647;
    }

    // 0x100c9b9c0
    void FPSCounter::SetFPSSampleCount(unsigned int arg1) {
        unsigned long uVar2;
        unsigned long uVar5;
        unsigned long* puVar6;
        uint32_t* puVar7;
        unsigned int* puVar8;
        unsigned int uVar9;
        unsigned long uVar10;
        unsigned long arg1_01;
        float fVar11;
        float fVar12;

        if (arg1 == 0) {
            LogAssert("count > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/time/frametime/"
                      "FPSCounter.cpp",
                      57, nullptr);
        }
        if (this_thread::GetThreadID() != field_98648) {
            LogAssert("this_thread::GetThreadID() == m_threadID",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/time/frametime/"
                      "FPSCounter.cpp",
                      59, nullptr);
        }
        if (0.0 <= m_fPS) {
            fVar11 = 1e+09 / m_fPS;
            uVar2 = (unsigned long)fVar11;
            uVar2 = (long)(fVar11 - 9.223372e+18) & (long)uVar2 >> 63 | uVar2;
        } else {
            uVar2 = 0;
        }
        float local_34 = 0.0;
        float fVar13 = m_avgFrameDurationMS * 1e+06;
        fVar11 = m_avgStarvationDurationMS * 1e+06;
        uint8_t* this_00 = &field_128;
        auto piVar3 = this_00->HeapBeginPtr();
        auto piVar4 = this_00->end();
        if (piVar3 != piVar4) {
            uVar9 = 0;
            do {
                uVar9 = uVar9 + *piVar3;
                piVar3 = piVar3 + 1;
            } while (piVar3 != piVar4);
            local_34 = (float)uVar9;
        }
        uVar9 = field_98580;
        field_32.resize_uninitialized((unsigned long)arg1);
        field_64.resize_uninitialized((unsigned long)arg1);
        field_96.resize_uninitialized((unsigned long)arg1);
        this_00->resize_uninitialized((unsigned long)arg1);
        field_98572 = 0;
        field_98576 = 0;
        if (arg1 != 0) {
            uVar5 = (unsigned long)fVar13;
            uVar10 = (unsigned long)fVar11;
            fVar12 = 0.0;
            arg1_01 = 0;
            do {
                fVar12 = fVar12 + local_34 / (float)uVar9;
                puVar6 = &field_32[arg1_01];
                *puVar6 = uVar2;
                puVar6 = &field_64[arg1_01];
                *puVar6 = (long)(fVar13 - 9.223372e+18) & (long)uVar5 >> 63 | uVar5;
                puVar6 = &field_96[arg1_01];
                *puVar6 = (long)(fVar11 - 9.223372e+18) & (long)uVar10 >> 63 | uVar10;
                puVar7 = (uint32_t*)(*this_00)[arg1_01];
                *puVar7 = (int)(long)fVar12;
                puVar8 = (unsigned int*)(*this_00)[arg1_01];
                fVar12 = fVar12 - (float)*puVar8;
                arg1_01 = arg1_01 + 1;
            } while ((unsigned long)arg1 != arg1_01);
        }
        field_98580 = arg1;
    }

    // 0x100c9bd40
    void FPSCounter::UpdateFPSCounter() {
        float* pfVar12;
        ListIterator<game::MapSquare::MapSquarePos, game::MapSquare::MapSquarePos const*,
                     game::MapSquare::MapSquarePos const&>* local_68;

        if (this_thread::GetThreadID() != field_98648) {
            LogAssert("this_thread::GetThreadID() == m_threadID",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/time/frametime/"
                      "FPSCounter.cpp",
                      106, nullptr);
        }
        unsigned long long uVar3 = m_lastFrameDurationNS;
        uint8_t* puVar1 = &field_32;
        unsigned long long* puVar7 = (unsigned long long*)(*puVar1)[(unsigned long)field_98572];
        *puVar7 = uVar3;
        uVar3 = field_98608;
        Layout* local_38 = (Layout*)&field_64;
        puVar7 = (unsigned long long*)(*local_38)[(unsigned long)field_98572];
        *puVar7 = uVar3;
        uVar3 = field_98616;
        uint8_t* this_00 = &field_96;
        puVar7 = (unsigned long long*)(*this_00)[(unsigned long)field_98572];
        *puVar7 = uVar3;
        unsigned long uVar14 = 0;
        field_98572 = (field_98572 + 1) % field_98580;
        auto plVar8 = puVar1->HeapBeginPtr();
        vector<eastl::pair<int, int>>* local_58 = (vector<eastl::pair<int, int>>*)puVar1;
        auto plVar9 = puVar1->end();
        Layout* this_01 = local_38;
        if (plVar8 != plVar9) {
            uVar14 = 0;
            do {
                uVar14 = uVar14 + *plVar8;
                plVar8 = plVar8 + 1;
            } while (plVar8 != plVar9);
        }
        plVar8 = (long*)local_38->HeapBeginPtr();
        plVar9 = (long*)this_01->end();
        unsigned long uVar15 = 0;
        for (; plVar8 != plVar9; plVar8 = plVar8 + 1) {
            uVar15 = uVar15 + *plVar8;
        }
        plVar8 = (long*)this_00->HeapBeginPtr();
        vector<eastl::pair<int, int>>* local_60 = (vector<eastl::pair<int, int>>*)this_00;
        plVar9 = (long*)this_00->end();
        unsigned long uVar13 = 0;
        for (; plVar8 != plVar9; plVar8 = plVar8 + 1) {
            uVar13 = uVar13 + *plVar8;
        }
        unsigned long uVar10 = local_58->size();
        unsigned long uVar11 = local_38->size();
        m_avgFrameDurationMS = (float)(uVar15 / uVar11) * 1e-06;
        uVar15 = local_60->size();
        m_avgStarvationDurationMS = (float)(uVar13 / uVar15) * 1e-06;
        float fVar16 = (float)m_worstFPS;
        if (uVar10 <= uVar14) {
            fVar16 = 1e+09 / (float)(uVar14 / uVar10);
            m_fPS = fVar16;
        }
        if ((float)m_bestFPS < fVar16) {
            m_bestFPS = (unsigned int)(long)m_fPS;
        }
        if (fVar16 < (float)m_worstFPS) {
            m_worstFPS = (unsigned int)(long)m_fPS;
        }
        unsigned int uVar2 = field_98588;
        float local_44 = (float)m_lastFrameDurationNS * 1e-06;
        unsigned int uVar5 = uVar2 + 1;
        field_98588 = uVar5;
        fVar16 = (local_44 + (float)uVar2 * field_98584) / (float)uVar5;
        field_98584 = fVar16;
        if (1.0 <= fVar16) {
            field_8 = (int)(1000.0 / fVar16);
        }
        puVar1 = &field_160;
        puVar1->push_front(local_44);
        auto local_50 = puVar1->begin();
        uint64_t local_40 = puVar1->end();
        bool cVar4 = local_50 != local_40;
        fVar16 = 0.0;
        if (cVar4) {
            fVar16 = 0.0;
            do {
                local_38 = (Layout*)(((uint64_t)local_38._4_4_ << 32) | (uint32_t)fVar16);
                if ((float)m_rollingMeanSampleDurationMS < fVar16) {
                    new (&local_68) eastl::ListIterator(&local_50);
                    puVar1->end();
                    local_40.erase(puVar1, local_68);
                    fVar16 = local_38._0_4_;
                    break;
                }
                pfVar12 = (float*)*local_50;
                local_38 = (Layout*)(((uint64_t)local_38._4_4_ << 32) | (uint32_t)(local_38._0_4_ + *pfVar12));
                ++local_50;
                local_40 = puVar1->end();
                cVar4 = local_50 != local_40;
                fVar16 = local_38._0_4_;
            } while (cVar4);
        }
        local_38 = (Layout*)(((uint64_t)local_38._4_4_ << 32) | (uint32_t)fVar16);
        cVar4 = puVar1->empty();
        if (!cVar4) {
            uVar14 = puVar1->size();
            if (1.0 <= local_38._0_4_ / (float)uVar14) {
                fVar16 = (float)round(1000.0 / (local_38._0_4_ / (float)uVar14));
                m_rollingMeanFPS = (int)(long)fVar16;
            }
        }
    }

    // 0x100c9c1e0
    void FPSCounter::UpdateLPSCounter() {
        unsigned long uVar8;

        if (this_thread::GetThreadID() != field_98648) {
            LogAssert("this_thread::GetThreadID() == m_threadID",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/time/frametime/"
                      "FPSCounter.cpp",
                      201, nullptr);
        }
        int iVar1 = field_24;
        uint8_t* this_00 = &field_128;
        int* piVar3 = (int*)(*this_00)[(unsigned long)field_98576];
        *piVar3 = iVar1;
        field_98576 = (field_98576 + 1) % field_98580;
        field_24 = 0;
        auto puVar4 = this_00->HeapBeginPtr();
        auto puVar5 = this_00->end();
        float fVar9 = 0.0;
        if (puVar4 != puVar5) {
            uVar8 = 0;
            do {
                uVar8 = uVar8 + *puVar4;
                puVar4 = puVar4 + 1;
            } while (puVar4 != puVar5);
            if ((long)uVar8 < 0) {
                fVar9 = (float)uVar8;
            } else {
                fVar9 = (float)(long)uVar8;
            }
        }
        auto plVar6 = field_32.HeapBeginPtr();
        auto plVar7 = field_32.end();
        float fVar10 = 0.0;
        if (plVar6 != plVar7) {
            uVar8 = 0;
            do {
                uVar8 = uVar8 + *plVar6;
                plVar6 = plVar6 + 1;
            } while (plVar6 != plVar7);
            if ((long)uVar8 < 0) {
                fVar10 = (float)uVar8;
            } else {
                fVar10 = (float)(long)uVar8;
            }
        }
        if (1.0 <= fVar10 / fVar9) {
            m_lPS = 1e+09 / (fVar10 / fVar9);
        }
    }

    // 0x100c9c340
    uint8_t[16] FPSCounter::GetImmediateFPS() const {
        uint8_t auVar2[16];

        unsigned int uVar1 = 1;
        if (m_lastFrameDurationNS != 0) {
            uVar1 = (unsigned int)m_lastFrameDurationNS;
        }
        auVar2._8_8_ = 1000000000 % (unsigned long)uVar1;
        auVar2._0_8_ = 1000000000 / (unsigned long)uVar1;
        return auVar2;
    }

} // namespace jag

namespace jag::game {
    // 0x100051680: EnvBloomSettings::GetWhitepoint() const has the same machine code as math::Range<float>::GetMin() const

    // 0x100051680: EnvLightProbeSettings::GetOverbright() const has the same machine code as math::Range<float>::GetMin() const

} // namespace jag::game

// 0x100c9c1d0
void round(float arg1) {
    _roundf();
}
