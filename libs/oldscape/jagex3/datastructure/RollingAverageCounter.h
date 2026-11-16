// libs/oldscape/jagex3/datastructure/RollingAverageCounter.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::oldscape::datastructure {
    class RollingAverageCounter {
    public:
        RollingAverageCounter(int arg1);
        ~RollingAverageCounter();
        long GetAverage();
        void Reset();
        unsigned long AddSample(long long arg1);

    private:
        eastl* field_0;
        unsigned long field_8;
        uint8_t _unknown_16[16];
        int field_32;
        uint8_t _unknown_36[4];
        long field_40;
        int field_48;
        uint8_t _unknown_52[4];
    };

    // 0x100128330
    RollingAverageCounter::RollingAverageCounter(int arg1)
        : eastl::vector<long long>(), field_32(0), field_40(0), field_48(0) {
        clear();
        resize((long)arg1);
    }

    // 0x10012a100
    RollingAverageCounter::~RollingAverageCounter() {}

    // 0x10017eb70
    long RollingAverageCounter::GetAverage() {
        if ((long)field_48 == 0) {
            return 0;
        }
        return field_40 / (long)field_48;
    }

    // 0x10017eb90
    void RollingAverageCounter::Reset() {
        field_40 = 0;
        field_48 = 0;
        field_32 = 0;
    }

    // 0x10017fdb0
    unsigned long RollingAverageCounter::AddSample(long long arg1) {
        long* plVar3;

        int iVar1 = field_48;
        int iVar2 = size();
        if (iVar1 < iVar2) {
            field_48 = field_48 + 1;
        } else {
            plVar3 = (long*)(*this)[(long)field_32];
            field_40 = field_40 - *plVar3;
        }
        field_40 = field_40 + arg1;
        long long* plVar4 = (long long*)(*this)[(long)field_32];
        *plVar4 = arg1;
        unsigned long uVar6 = (long)field_32 + 1;
        unsigned long uVar5 = size();
        field_32 = (int)(uVar6 % uVar5);
        return uVar6 / uVar5;
    }

} // namespace jag::oldscape::datastructure
