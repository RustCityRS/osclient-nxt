// libs/hal/time/frametime/FPSCounter.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.hal.time

#include "FPSCounter.h"
#include "libs/core/utils/Hash.h"

namespace jag {
    // 0x100051680: the linker folded this into math::Range<float>::GetMin() const, which has identical code
    float FPSCounter::GetFPS() const;

    // 0x100051690: the linker folded this into math::Range<float>::GetMax() const, which has identical code
    float FPSCounter::GetLPS() const;

    // 0x100066b70: the linker folded this into oldscape::widgets::Widget::GetTextColour() const, which has identical code
    uint FPSCounter::GetWorstFPS() const;

    // 0x1000e5d50: the linker folded this into oldscape::rs2lib::CoordZoneSource::GetRotation() const, which has identical code
    int FPSCounter::GetRollingMeanFPS() const;

    // 0x1001117e0: the linker folded this into oldscape::jagex3::Js5::GetIndexCrc() const, which has identical code
    uint FPSCounter::GetBestFPS() const;

    // 0x100c9b6b0, 320 bytes, base-object constructor, placed by class name and debug map
    // FPSCounter::FPSCounter()
    void FPSCounter::FPSCounter() {
        m_rollingMeanFPS = 0;
        m_worstFPS = 0;
        m_bestFPS = 0;
        field_24 = 0;
        m_fPS = 0.0;
        m_lPS = 0.0;
        field_8 = 0;
        m_rollingMeanFPS = 0;
        new (&field_32) eastl::vector<unsigned long long, eastl::allocator>();
        new (&field_64) eastl::vector<unsigned long long, eastl::allocator>();
        new (&field_96) eastl::vector<unsigned long long, eastl::allocator>();
        new (&field_128) eastl::vector<unsigned int, eastl::allocator>();
        new (&field_160) eastl::fixed_list<float, 4096ul, true, eastl::allocator>();
        m_rollingMeanSampleDurationMS = 5000;
        field_98572 = 0;
        field_98576 = 0;
        field_98580 = 15;
        field_98584 = 0.0;
        field_98588 = 0;
        field_98592 = 0;
        field_98600 = 0;
        field_98608 = 0;
        field_98616 = 0;
        field_98632 = 0;
        m_lastFrameDurationNS = 0;
        field_98648 = 0;
        eastl::vector<unsigned long long, eastl::allocator>::resize((ulong)&field_32);
        eastl::vector<unsigned long long, eastl::allocator>::resize((ulong)&field_64);
        eastl::vector<unsigned long long, eastl::allocator>::resize((ulong)&field_96);
        eastl::vector<unsigned int, eastl::allocator>::resize((ulong)&field_128);
        field_98648 = this_thread::GetThreadID();
    }

    // 0x100c9b870, 16 bytes, complete-object constructor, placed by class name and debug map
    // FPSCounter::FPSCounter(): jumps straight to the base-object constructor

    // 0x100c9b880, 112 bytes, placed by class name and debug map
    // FPSCounter::RecordDrawStartTime(unsigned long long)
    void FPSCounter::RecordDrawStartTime(ulonglong param_1) {
        ulonglong uVar1;

        if (this_thread::GetThreadID() != field_98648) {
            /* WARNING: Subroutine does not return */
            LogAssert("this_thread::GetThreadID() == m_threadID",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/time/frametime/"
                      "FPSCounter.cpp",
                      21, (char*)0);
        }
        uVar1 = field_98592;
        field_98632 = uVar1;
        field_98592 = param_1;
        m_lastFrameDurationNS = param_1 - uVar1;
        field_98616 = param_1 - field_98600;
    }

    // 0x100c9b8f0, 96 bytes, placed by class name and debug map
    // FPSCounter::RecordDrawEndTime(unsigned long long)
    void FPSCounter::RecordDrawEndTime(ulonglong param_1) {
        if (this_thread::GetThreadID() != field_98648) {
            /* WARNING: Subroutine does not return */
            LogAssert("this_thread::GetThreadID() == m_threadID",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/time/frametime/"
                      "FPSCounter.cpp",
                      33, (char*)0);
        }
        field_98600 = param_1;
        field_98608 = param_1 - field_98592;
    }

    // 0x100c9b950, 112 bytes, placed by class name and debug map
    // FPSCounter::Reset()
    void FPSCounter::Reset() {
        if (this_thread::GetThreadID() != field_98648) {
            /* WARNING: Subroutine does not return */
            LogAssert("this_thread::GetThreadID() == m_threadID",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/time/frametime/"
                      "FPSCounter.cpp",
                      43, (char*)0);
        }
        field_98584 = 0.0;
        field_98588 = 0;
        m_bestFPS = 0;
        field_8 = 0;
        m_rollingMeanFPS = 0;
        (&field_160)->clear();
        m_worstFPS = 2147483647;
    }

    // 0x100c9b9c0, 672 bytes, placed by class name and debug map
    // FPSCounter::SetFPSSampleCount(unsigned int)
    void FPSCounter::SetFPSSampleCount(uint param_1) {
        undefined1* this_00;
        ulong uVar2;
        int* piVar3;
        int* piVar4;
        ulong uVar5;
        ulong* puVar6;
        undefined4* puVar7;
        uint* puVar8;
        uint uVar9;
        ulong uVar10;
        ulong uVar11;
        float fVar12;
        float fVar13;
        float fVar14;
        float local_34;

        if (param_1 == 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("count > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/time/frametime/"
                      "FPSCounter.cpp",
                      57, (char*)0);
        }
        if (this_thread::GetThreadID() != field_98648) {
            /* WARNING: Subroutine does not return */
            LogAssert("this_thread::GetThreadID() == m_threadID",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/time/frametime/"
                      "FPSCounter.cpp",
                      59, (char*)0);
        }
        if (0.0 <= m_fPS) {
            fVar12 = 1e+09 / m_fPS;
            uVar2 = (ulong)fVar12;
            uVar2 = (long)(fVar12 - 9.223372e+18) & (long)uVar2 >> 63 | uVar2;
        } else {
            uVar2 = 0;
        }
        local_34 = 0.0;
        fVar14 = m_avgFrameDurationMS * 1e+06;
        fVar12 = m_avgStarvationDurationMS * 1e+06;
        this_00 = &field_128;
        piVar3 = (int*)this_00->HeapBeginPtr();
        piVar4 = (int*)this_00->end();
        if (piVar3 != piVar4) {
            uVar9 = 0;
            do {
                uVar9 = uVar9 + *piVar3;
                piVar3 = piVar3 + 1;
            } while (piVar3 != piVar4);
            local_34 = (float)uVar9;
        }
        uVar9 = field_98580;
        eastl::vector<unsigned long long, eastl::allocator>::resize_uninitialized((ulong)&field_32);
        eastl::vector<unsigned long long, eastl::allocator>::resize_uninitialized((ulong)&field_64);
        eastl::vector<unsigned long long, eastl::allocator>::resize_uninitialized((ulong)&field_96);
        eastl::vector<unsigned int, eastl::allocator>::resize_uninitialized((ulong)this_00);
        field_98572 = 0;
        field_98576 = 0;
        if (param_1 != 0) {
            uVar5 = (ulong)fVar14;
            uVar10 = (ulong)fVar12;
            fVar13 = 0.0;
            uVar11 = 0;
            do {
                fVar13 = fVar13 + local_34 / (float)uVar9;
                puVar6 = (ulong*)eastl::vector<unsigned long long, eastl::allocator>::operator[](
                    (vector<unsigned long long, eastl::allocator>*)&field_32, uVar11);
                *puVar6 = uVar2;
                puVar6 = (ulong*)eastl::vector<unsigned long long, eastl::allocator>::operator[](
                    (vector<unsigned long long, eastl::allocator>*)&field_64, uVar11);
                *puVar6 = (long)(fVar14 - 9.223372e+18) & (long)uVar5 >> 63 | uVar5;
                puVar6 = (ulong*)eastl::vector<unsigned long long, eastl::allocator>::operator[](
                    (vector<unsigned long long, eastl::allocator>*)&field_96, uVar11);
                *puVar6 = (long)(fVar12 - 9.223372e+18) & (long)uVar10 >> 63 | uVar10;
                puVar7 = (undefined4*)eastl::vector<unsigned int, eastl::allocator>::operator[](
                    (vector<unsigned int, eastl::allocator>*)this_00, uVar11);
                *puVar7 = (int)(long)fVar13;
                puVar8 = (uint*)eastl::vector<unsigned int, eastl::allocator>::operator[](
                    (vector<unsigned int, eastl::allocator>*)this_00, uVar11);
                fVar13 = fVar13 - (float)*puVar8;
                uVar11 = uVar11 + 1;
            } while (param_1 != uVar11);
        }
        field_98580 = param_1;
    }

    // 0x100c9bd40, 1120 bytes, placed by class name and debug map
    // FPSCounter::UpdateFPSCounter()
    void FPSCounter::UpdateFPSCounter() {
        undefined1* puVar1;
        undefined1* this_00;
        uint uVar2;
        ulonglong uVar3;
        Layout* this_01;
        bool bVar4;
        char cVar5;
        uint uVar6;
        ulonglong* puVar8;
        long* plVar9;
        long* plVar10;
        ulong uVar11;
        ulong uVar12;
        float* pfVar13;
        undefined8 uVar14;
        ulong uVar15;
        ulong uVar16;
        ulong uVar17;
        float fVar18;
        undefined1 auVar19[16];
        undefined8 local_68;
        vector<eastl::pair<int, int>, eastl::allocator>* local_60;
        vector<eastl::pair<int, int>, eastl::allocator>* local_58;
        list<console::Line, eastl::allocator> local_50[12];
        float local_44;
        undefined8 local_40;
        Layout* local_38;

        if (this_thread::GetThreadID() != field_98648) {
            /* WARNING: Subroutine does not return */
            LogAssert("this_thread::GetThreadID() == m_threadID",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/time/frametime/"
                      "FPSCounter.cpp",
                      106, (char*)0);
        }
        uVar3 = m_lastFrameDurationNS;
        puVar1 = &field_32;
        puVar8 = (ulonglong*)eastl::vector<unsigned long long, eastl::allocator>::operator[](
            (vector<unsigned long long, eastl::allocator>*)puVar1, (ulong)field_98572);
        *puVar8 = uVar3;
        uVar3 = field_98608;
        local_38 = (Layout*)&field_64;
        puVar8 = (ulonglong*)eastl::vector<unsigned long long, eastl::allocator>::operator[](
            (vector<unsigned long long, eastl::allocator>*)local_38, (ulong)field_98572);
        *puVar8 = uVar3;
        uVar3 = field_98616;
        this_00 = &field_96;
        puVar8 = (ulonglong*)eastl::vector<unsigned long long, eastl::allocator>::operator[](
            (vector<unsigned long long, eastl::allocator>*)this_00, (ulong)field_98572);
        *puVar8 = uVar3;
        uVar16 = 0;
        field_98572 = (field_98572 + 1) % field_98580;
        plVar9 = (long*)puVar1->HeapBeginPtr();
        local_58 = (vector<eastl::pair<int, int>, eastl::allocator>*)puVar1;
        plVar10 = (long*)puVar1->end();
        this_01 = local_38;
        if (plVar9 != plVar10) {
            uVar16 = 0;
            do {
                uVar16 = uVar16 + *plVar9;
                plVar9 = plVar9 + 1;
            } while (plVar9 != plVar10);
        }
        plVar9 = (long*)
            eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                    eastl::allocator>>::Layout::HeapBeginPtr(local_38);
        plVar10 = (long*)this_01->end();
        uVar17 = 0;
        for (; plVar9 != plVar10; plVar9 = plVar9 + 1) {
            uVar17 = uVar17 + *plVar9;
        }
        plVar9 = (long*)this_00->HeapBeginPtr();
        local_60 = (vector<eastl::pair<int, int>, eastl::allocator>*)this_00;
        plVar10 = (long*)this_00->end();
        uVar15 = 0;
        for (; plVar9 != plVar10; plVar9 = plVar9 + 1) {
            uVar15 = uVar15 + *plVar9;
        }
        uVar11 = eastl::vector<eastl::pair<int, int>, eastl::allocator>::size(local_58);
        uVar12 = local_38->size();
        m_avgFrameDurationMS = (float)(uVar17 / uVar12) * 1e-06;
        uVar17 = eastl::vector<eastl::pair<int, int>, eastl::allocator>::size(local_60);
        m_avgStarvationDurationMS = (float)(uVar15 / uVar17) * 1e-06;
        fVar18 = (float)m_worstFPS;
        if (uVar11 <= uVar16) {
            fVar18 = 1e+09 / (float)(uVar16 / uVar11);
            m_fPS = fVar18;
        }
        if ((float)m_bestFPS < fVar18) {
            m_bestFPS = (uint)(long)m_fPS;
        }
        if (fVar18 < (float)m_worstFPS) {
            m_worstFPS = (uint)(long)m_fPS;
        }
        uVar2 = field_98588;
        local_44 = (float)m_lastFrameDurationNS * 1e-06;
        uVar6 = uVar2 + 1;
        field_98588 = uVar6;
        fVar18 = (local_44 + (float)uVar2 * field_98584) / (float)uVar6;
        field_98584 = fVar18;
        if (1.0 <= fVar18) {
            field_8 = (int)(1000.0 / fVar18);
        }
        puVar1 = &field_160;
        puVar1->push_front(&local_44);
        eastl::list<console::Line, eastl::allocator>::begin(local_50);
        auVar19 = eastl::list<console::Line, eastl::allocator>::end();
        local_40 = auVar19._0_8_;
        bVar4 = eastl::operator!=((eastl*)local_50, (hashtable_iterator_base*)&local_40, auVar19._8_8_);
        fVar18 = 0.0;
        if (bVar4) {
            fVar18 = 0.0;
            do {
                local_38 = (Layout*)CONCAT44(local_38._4_4_, fVar18);
                if ((float)m_rollingMeanSampleDurationMS < fVar18) {
                    new (&local_68)
                        eastl::ListIterator<shared_ptr<oldscape::rs2lib::worldmap::MapElement>,
                                            shared_ptr<oldscape::rs2lib::worldmap::MapElement> const*,
                                            shared_ptr<oldscape::rs2lib::worldmap::MapElement> const&>(local_50);
                    uVar14 = eastl::list<console::Line, eastl::allocator>::end();
                    eastl::list<float, eastl::fixed_node_allocator<24ul, 4096ul, 8ul, 0ul, true, eastl::allocator>>::
                        erase(&local_40, puVar1, local_68, uVar14);
                    fVar18 = local_38._0_4_;
                    break;
                }
                pfVar13 = (float*)eastl::ListIterator<console::Line, console::Line*, console::Line&>::operator*(
                    (ListIterator<console::Line, console::Line*, console::Line&>*)local_50);
                local_38 = (Layout*)CONCAT44(local_38._4_4_, local_38._0_4_ + *pfVar13);
                eastl::ListIterator<console::Line, console::Line*, console::Line&>::operator++(
                    (ListIterator<console::Line, console::Line*, console::Line&>*)local_50);
                auVar19 = eastl::list<console::Line, eastl::allocator>::end();
                local_40 = auVar19._0_8_;
                bVar4 = eastl::operator!=((eastl*)local_50, (hashtable_iterator_base*)&local_40, auVar19._8_8_);
                fVar18 = local_38._0_4_;
            } while (bVar4);
        }
        local_38 = (Layout*)CONCAT44(local_38._4_4_, fVar18);
        cVar5 = puVar1->empty();
        if (cVar5 == '\0') {
            uVar16 = puVar1->size();
            if (1.0 <= local_38._0_4_ / (float)uVar16) {
                fVar18 = (float)round(1000.0 / (local_38._0_4_ / (float)uVar16));
                m_rollingMeanFPS = (int)(long)fVar18;
            }
        }
    }

    // 0x100c9c1e0, 352 bytes, placed by class name and debug map
    // FPSCounter::UpdateLPSCounter()
    void FPSCounter::UpdateLPSCounter() {
        undefined1* this_00;
        int iVar1;
        int* piVar3;
        uint* puVar4;
        uint* puVar5;
        long* plVar6;
        long* plVar7;
        ulong uVar8;
        float fVar9;
        float fVar10;

        if (this_thread::GetThreadID() != field_98648) {
            /* WARNING: Subroutine does not return */
            LogAssert("this_thread::GetThreadID() == m_threadID",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/time/frametime/"
                      "FPSCounter.cpp",
                      201, (char*)0);
        }
        iVar1 = field_24;
        this_00 = &field_128;
        piVar3 = (int*)eastl::vector<unsigned int, eastl::allocator>::operator[](
            (vector<unsigned int, eastl::allocator>*)this_00, (ulong)field_98576);
        *piVar3 = iVar1;
        field_98576 = (field_98576 + 1) % field_98580;
        field_24 = 0;
        puVar4 = (uint*)this_00->HeapBeginPtr();
        puVar5 = (uint*)this_00->end();
        fVar9 = 0.0;
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
        plVar6 = (long*)(&field_32)->HeapBeginPtr();
        plVar7 = (long*)(&field_32)->end();
        fVar10 = 0.0;
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

    // 0x100c9c340, 48 bytes, placed by class name and debug map
    // FPSCounter::GetImmediateFPS() const
    undefined1[16] FPSCounter::GetImmediateFPS() {
        uint uVar1;
        undefined1 auVar2[16];

        uVar1 = 1;
        if (m_lastFrameDurationNS != 0) {
            uVar1 = (uint)m_lastFrameDurationNS;
        }
        auVar2._8_8_ = 1000000000 % (ulong)uVar1;
        auVar2._0_8_ = 1000000000 / (ulong)uVar1;
        return auVar2;
    }

} // namespace jag

namespace jag::game {
    // 0x100051680: the linker folded this into math::Range<float>::GetMin() const, which has identical code
    float EnvBloomSettings::GetWhitepoint() const;

    // 0x100051680: the linker folded this into math::Range<float>::GetMin() const, which has identical code
    float EnvLightProbeSettings::GetOverbright() const;

} // namespace jag::game

// 0x100c9c1d0, 16 bytes, placed by neighbouring functions
// round(float)
void round(float param_1) {
    _roundf();
}
