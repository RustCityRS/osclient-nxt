// libs/hal/time/frametime/FPSCounter.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag {
    class FPSCounter {
    public:
        float GetFPS() const;
        float GetLPS() const;
        unsigned int GetWorstFPS() const;
        int GetRollingMeanFPS() const;
        unsigned int GetBestFPS() const;
        unsigned long long GetLastFrameDurationNS() const;
        float GetAvgFrameDurationMS() const;
        float GetAvgStarvationDurationMS() const;
        void GetFPSSampleCount() const;
        unsigned int GetRollingMeanSampleDurationMS() const;
        void SetRollingMeanDurationMS(unsigned int arg1);
        void RecordLogicLoop();
        ~FPSCounter();
        FPSCounter();
        void RecordDrawStartTime(unsigned long long arg1);
        void RecordDrawEndTime(unsigned long long arg1);
        void Reset();
        void SetFPSSampleCount(unsigned int arg1);
        void UpdateFPSCounter();
        void UpdateLPSCounter();
        uint8_t[16] GetImmediateFPS() const;

    private:
        float m_fPS;
        float m_lPS;
        int field_8;
        int m_rollingMeanFPS;
        unsigned int m_worstFPS;
        unsigned int m_bestFPS;
        int field_24;
        uint8_t _unknown_28[98540];
        unsigned int m_rollingMeanSampleDurationMS;
        unsigned int field_98572;
        unsigned int field_98576;
        unsigned int field_98580;
        float field_98584;
        unsigned int field_98588;
        unsigned long long field_98592;
        unsigned long long field_98600;
        unsigned long long field_98608;
        unsigned long long field_98616;
        float m_avgFrameDurationMS;
        float m_avgStarvationDurationMS;
        long field_98632;
        unsigned long long m_lastFrameDurationNS;
        uint64_t field_98648;
    };

    // 0x1008fd1f0
    unsigned long long FPSCounter::GetLastFrameDurationNS() const {
        return m_lastFrameDurationNS;
    }

    // 0x1008fd200
    float FPSCounter::GetAvgFrameDurationMS() const {
        return m_avgFrameDurationMS;
    }

    // 0x1008fd210
    float FPSCounter::GetAvgStarvationDurationMS() const {
        return m_avgStarvationDurationMS;
    }

    // 0x100914980
    void FPSCounter::GetFPSSampleCount() const {
        field_32.size();
    }

    // 0x1009153b0
    unsigned int FPSCounter::GetRollingMeanSampleDurationMS() const {
        return m_rollingMeanSampleDurationMS;
    }

    // 0x1009153c0
    void FPSCounter::SetRollingMeanDurationMS(unsigned int arg1) {
        m_rollingMeanSampleDurationMS = arg1;
    }

    // 0x100b060b0
    void FPSCounter::RecordLogicLoop() {
        field_24 = field_24 + 1;
    }

    // 0x100c3e5d0
    FPSCounter::~FPSCounter() {
        field_160.~fixed_list();
        field_128.~vector();
        field_96.~vector();
        field_64.~vector();
        field_32.~vector();
    }

} // namespace jag
