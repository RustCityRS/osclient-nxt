// libs/hal/time/SystemTimer.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag {
    class SystemTimer {
    public:
        std::chrono::time_point<std::chrono::steady_clock,
                                std::chrono::duration<long long, std::ratio<1l, 1000000000l>>>
        GetTimePoint<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1l, 1000000000l>>>();
        unsigned long long GetEpochTimeSecs<std::chrono::system_clock>();
        std::chrono::time_point<std::chrono::system_clock, std::chrono::duration<long long, std::ratio<1l, 1l>>>
        GetTimePoint<std::chrono::system_clock, std::chrono::duration<long long, std::ratio<1l, 1l>>>();
        unsigned long long GetTimeMS<std::chrono::steady_clock>();
        unsigned long long GetTimeNS<std::chrono::steady_clock>();
        std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1l, 1000l>>>
        GetTimePoint<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1l, 1000l>>>();
        unsigned long ConvertNStoSecondsApprox(unsigned long long arg1);
        long ConvertMStoNS(unsigned long long arg1);
        unsigned long ConvertNStoMS(unsigned long long arg1);

        uint8_t _unknown_0[1];
    };

    // 0x10000b600
    std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1l, 1000000000l>>>
    SystemTimer::GetTimePoint<std::chrono::steady_clock,
                              std::chrono::duration<long long, std::ratio<1l, 1000000000l>>>() {
        uint64_t local_10 = std::chrono::steady_clock::now();
        std::chrono::time_point_cast<std::chrono::duration<long long, std::ratio<1l, 1000000000l>>,
                                     std::chrono::steady_clock,
                                     std::chrono::duration<long long, std::ratio<1l, 1000000000l>>>(local_10);
    }

    // 0x10001db80
    unsigned long long SystemTimer::GetEpochTimeSecs<std::chrono::system_clock>() {
        uint64_t local_10 =
            GetTimePoint<std::chrono::system_clock, std::chrono::duration<long long, std::ratio<1l, 1l>>>();
        return (local_10.time_since_epoch()).count();
    }

    // 0x1000460e0
    std::chrono::time_point<std::chrono::system_clock, std::chrono::duration<long long, std::ratio<1l, 1l>>>
    SystemTimer::GetTimePoint<std::chrono::system_clock, std::chrono::duration<long long, std::ratio<1l, 1l>>>() {
        uint64_t local_10 = std::chrono::system_clock::now();
        std::chrono::time_point_cast<std::chrono::duration<long long, std::ratio<1l, 1l>>, std::chrono::system_clock,
                                     std::chrono::duration<long long, std::ratio<1l, 1000000l>>>(local_10);
    }

    // 0x10017f120
    unsigned long long SystemTimer::GetTimeMS<std::chrono::steady_clock>() {
        uint64_t local_10 =
            GetTimePoint<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1l, 1000l>>>();
        return (local_10.time_since_epoch()).count();
    }

    // 0x10019a310
    unsigned long long SystemTimer::GetTimeNS<std::chrono::steady_clock>() {
        uint64_t local_10 =
            GetTimePoint<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1l, 1000000000l>>>();
        return (local_10.time_since_epoch()).count();
    }

    // 0x1001a50a0
    std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1l, 1000l>>>
    SystemTimer::GetTimePoint<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1l, 1000l>>>() {
        uint64_t local_10 = std::chrono::steady_clock::now();
        std::chrono::time_point_cast<std::chrono::duration<long long, std::ratio<1l, 1000l>>, std::chrono::steady_clock,
                                     std::chrono::duration<long long, std::ratio<1l, 1000000000l>>>(local_10);
    }

    // 0x1009f5d60
    unsigned long SystemTimer::ConvertNStoSecondsApprox(unsigned long long arg1) {
        uint8_t auVar2[16];

        auVar2._8_4_ = (int)(arg1 >> 32);
        auVar2._0_8_ = arg1;
        auVar2._12_4_ = 1160773632;
        double dVar3 = ((auVar2._8_8_ - 1.9342813113834067e+25) +
                        ((double)(((uint64_t)1127219200 << 32) | (uint32_t)((int)arg1)) - 4503599627370496.0)) *
                       1e-09;
        unsigned long uVar1 = (unsigned long)dVar3;
        return (long)(dVar3 - 9.223372036854776e+18) & (long)uVar1 >> 63 | uVar1;
    }

    // 0x100afcd40
    long SystemTimer::ConvertMStoNS(unsigned long long arg1) {
        return arg1 * 1000000;
    }

    // 0x100b06090
    unsigned long SystemTimer::ConvertNStoMS(unsigned long long arg1) {
        return arg1 / 1000000;
    }

} // namespace jag
