// libs/hal/time/frametime/FPSCounter.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag {
    class FPSCounter {
    public:
        GetFPS() const;
        GetLPS() const;
        GetWorstFPS() const;
        GetRollingMeanFPS() const;
        GetBestFPS() const;
        ulonglong GetLastFrameDurationNS() const;
        float GetAvgFrameDurationMS() const;
        float GetAvgStarvationDurationMS() const;
        void GetFPSSampleCount() const;
        uint GetRollingMeanSampleDurationMS() const;
        void SetRollingMeanDurationMS(unsigned int);
        void RecordLogicLoop();
        ~FPSCounter();
        FPSCounter();
        void RecordDrawStartTime(unsigned long long);
        void RecordDrawEndTime(unsigned long long);
        void Reset();
        void SetFPSSampleCount(unsigned int);
        void UpdateFPSCounter();
        void UpdateLPSCounter();
        GetImmediateFPS() const;

        // data members, from how the methods use this: 98656 bytes
        float field_0; // offset 0
        float field_4; // offset 4
        int field_8;   // offset 8
        int field_12;  // offset 12
        uint field_16; // offset 16
        uint field_20; // offset 20
        int field_24;  // offset 24
        char _unknown_28[4];
        undefined1 field_32; // offset 32
        char _unknown_33[31];
        undefined1 field_64; // offset 64
        char _unknown_65[31];
        undefined1 field_96; // offset 96
        char _unknown_97[31];
        undefined1 field_128; // offset 128
        char _unknown_129[31];
        undefined1 field_160; // offset 160
        char _unknown_161[98407];
        uint m_rollingMeanSampleDurationMS; // offset 98568
        uint field_98572;                   // offset 98572
        uint field_98576;                   // offset 98576
        uint field_98580;                   // offset 98580
        float field_98584;                  // offset 98584
        uint field_98588;                   // offset 98588
        ulonglong field_98592;              // offset 98592
        ulonglong field_98600;              // offset 98600
        ulonglong field_98608;              // offset 98608
        ulonglong field_98616;              // offset 98616
        float m_avgFrameDurationMS;         // offset 98624
        float m_avgStarvationDurationMS;    // offset 98628
        long field_98632;                   // offset 98632
        ulonglong m_lastFrameDurationNS;    // offset 98640
        undefined8 field_98648;             // offset 98648
    };

    // 0x1008fd1f0, 16 bytes, inline, placed by class name and debug map
    // FPSCounter::GetLastFrameDurationNS() const
    ulonglong FPSCounter::GetLastFrameDurationNS() {
        return m_lastFrameDurationNS;
    }

    // 0x1008fd200, 16 bytes, inline, placed by class name and debug map
    // FPSCounter::GetAvgFrameDurationMS() const
    float FPSCounter::GetAvgFrameDurationMS() {
        return m_avgFrameDurationMS;
    }

    // 0x1008fd210, 16 bytes, inline, placed by class name and debug map
    // FPSCounter::GetAvgStarvationDurationMS() const
    float FPSCounter::GetAvgStarvationDurationMS() {
        return m_avgStarvationDurationMS;
    }

    // 0x100914980, 16 bytes, inline, placed by class name
    // FPSCounter::GetFPSSampleCount() const
    void FPSCounter::GetFPSSampleCount() {
        (&field_32)->size();
    }

    // 0x1009153b0, 16 bytes, inline, placed by class name
    // FPSCounter::GetRollingMeanSampleDurationMS() const
    uint FPSCounter::GetRollingMeanSampleDurationMS() {
        return m_rollingMeanSampleDurationMS;
    }

    // 0x1009153c0, 16 bytes, inline, placed by class name
    // FPSCounter::SetRollingMeanDurationMS(unsigned int)
    void FPSCounter::SetRollingMeanDurationMS(uint param_1) {
        m_rollingMeanSampleDurationMS = param_1;
    }

    // 0x100b060b0, 16 bytes, inline, placed by class name
    // FPSCounter::RecordLogicLoop()
    void FPSCounter::RecordLogicLoop() {
        field_24 = field_24 + 1;
    }

    // 0x100c3e5c0, 16 bytes, complete-object destructor, inline, placed by class name
    // FPSCounter::~FPSCounter(): jumps straight to the base-object destructor

    // 0x100c3e5d0, 80 bytes, base-object destructor, inline, placed by class name
    // FPSCounter::~FPSCounter()
    void FPSCounter::~FPSCounter() {
        (&field_160)->~fixed_list();
        (&field_128)->~vector();
        (&field_96)->~vector();
        (&field_64)->~vector();
        (&field_32)->~vector();
    }

} // namespace jag
