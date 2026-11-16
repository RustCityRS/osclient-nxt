// libs/hal/time/SystemTimer.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

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
        ulong ConvertNStoSecondsApprox(unsigned long long);
        long ConvertMStoNS(unsigned long long);
        ulong ConvertNStoMS(unsigned long long);

        // data members, from how the methods use this: 1 bytes
        char _unknown_0[1];
    };

    // 0x10000b600, 32 bytes, inline, placed by class name and debug map
    // std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1l, 1000000000l> > > SystemTimer::GetTimePoint<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1l, 1000000000l> > >()
    /* std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long,
   std::ratio<1l, 1000000000l> > > SystemTimer::GetTimePoint<std::chrono::steady_clock,
   std::chrono::duration<long long, std::ratio<1l, 1000000000l> > >() */

    void SystemTimer::GetTimePoint<std::chrono::steady_clock,
                                   std::chrono::duration<long long, std::ratio<1l, 1000000000l>>>() {
        time_point* in_RSI;
        undefined8 local_10;

        local_10 = std::chrono::steady_clock::now();
        std::chrono::time_point_cast<std::chrono::duration<long long, std::ratio<1l, 1000000000l>>,
                                     std::chrono::steady_clock,
                                     std::chrono::duration<long long, std::ratio<1l, 1000000000l>>>((chrono*)&local_10,
                                                                                                    in_RSI);
    }

    // 0x10001db80, 48 bytes, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // unsigned long long SystemTimer::GetEpochTimeSecs<std::chrono::system_clock>()
    /* unsigned long long SystemTimer::GetTimeSecs<std::chrono::system_clock>() */

    ulonglong SystemTimer::GetTimeSecs<std::chrono::system_clock>() {
        ulonglong uVar1;
        undefined8 local_18;
        undefined8 local_10;

        local_10 = GetTimePoint<std::chrono::system_clock, std::chrono::duration<long long, std::ratio<1l, 1l>>>(this);
        local_18 = local_10.time_since_epoch();
        uVar1 = local_18.count();
        return uVar1;
    }

    // 0x1000460e0, 32 bytes, inline, placed by class name
    // std::chrono::time_point<std::chrono::system_clock, std::chrono::duration<long long, std::ratio<1l, 1l> > > SystemTimer::GetTimePoint<std::chrono::system_clock, std::chrono::duration<long long, std::ratio<1l, 1l> > >()
    /* std::chrono::time_point<std::chrono::system_clock, std::chrono::duration<long long,
   std::ratio<1l, 1l> > > SystemTimer::GetTimePoint<std::chrono::system_clock,
   std::chrono::duration<long long, std::ratio<1l, 1l> > >() */

    void SystemTimer::GetTimePoint<std::chrono::system_clock, std::chrono::duration<long long, std::ratio<1l, 1l>>>() {
        time_point* in_RSI;
        undefined8 local_10;

        local_10 = std::chrono::system_clock::now();
        std::chrono::time_point_cast<std::chrono::duration<long long, std::ratio<1l, 1l>>, std::chrono::system_clock,
                                     std::chrono::duration<long long, std::ratio<1l, 1000000l>>>((chrono*)&local_10,
                                                                                                 in_RSI);
    }

    // 0x10017f120, 48 bytes, inline, placed by class name
    // unsigned long long SystemTimer::GetTimeMS<std::chrono::steady_clock>()
    /* unsigned long long SystemTimer::GetTimeMS<std::chrono::steady_clock>() */

    ulonglong SystemTimer::GetTimeMS<std::chrono::steady_clock>() {
        ulonglong uVar1;
        undefined8 local_18;
        undefined8 local_10;

        local_10 =
            GetTimePoint<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1l, 1000l>>>(this);
        local_18 = local_10.time_since_epoch();
        uVar1 = local_18.count();
        return uVar1;
    }

    // 0x10019a310, 48 bytes, inline, placed by class name
    // unsigned long long SystemTimer::GetTimeNS<std::chrono::steady_clock>()
    /* unsigned long long SystemTimer::GetTimeNS<std::chrono::steady_clock>() */

    ulonglong SystemTimer::GetTimeNS<std::chrono::steady_clock>() {
        ulonglong uVar1;
        undefined8 local_18;
        undefined8 local_10;

        local_10 =
            GetTimePoint<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1l, 1000000000l>>>(
                this);
        local_18 = local_10.time_since_epoch();
        uVar1 = local_18.count();
        return uVar1;
    }

    // 0x1001a50a0, 32 bytes, inline, placed by class name
    // std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1l, 1000l> > > SystemTimer::GetTimePoint<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1l, 1000l> > >()
    /* std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long,
   std::ratio<1l, 1000l> > > SystemTimer::GetTimePoint<std::chrono::steady_clock,
   std::chrono::duration<long long, std::ratio<1l, 1000l> > >() */

    void
    SystemTimer::GetTimePoint<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1l, 1000l>>>() {
        time_point* in_RSI;
        undefined8 local_10;

        local_10 = std::chrono::steady_clock::now();
        std::chrono::time_point_cast<std::chrono::duration<long long, std::ratio<1l, 1000l>>, std::chrono::steady_clock,
                                     std::chrono::duration<long long, std::ratio<1l, 1000000000l>>>((chrono*)&local_10,
                                                                                                    in_RSI);
    }

    // 0x1009f5d60, 80 bytes, inline, placed by class name
    // SystemTimer::ConvertNStoSecondsApprox(unsigned long long)
    ulong SystemTimer::ConvertNStoSecondsApprox(ulonglong param_1) {
        ulong uVar1;
        undefined1 auVar2[16];
        double dVar3;

        auVar2._8_4_ = (int)(param_1 >> 32);
        auVar2._0_8_ = param_1;
        auVar2._12_4_ = 1160773632;
        dVar3 = ((auVar2._8_8_ - 1.9342813113834067e+25) +
                 ((double)CONCAT44(1127219200, (int)param_1) - 4503599627370496.0)) *
                1e-09;
        uVar1 = (ulong)dVar3;
        return (long)(dVar3 - 9.223372036854776e+18) & (long)uVar1 >> 63 | uVar1;
    }

    // 0x100afcd40, 16 bytes, inline, placed by class name
    // SystemTimer::ConvertMStoNS(unsigned long long)
    long SystemTimer::ConvertMStoNS(ulonglong param_1) {
        return param_1 * 1000000;
    }

    // 0x100b06090, 32 bytes, inline, placed by class name
    // SystemTimer::ConvertNStoMS(unsigned long long)
    ulong SystemTimer::ConvertNStoMS(ulonglong param_1) {
        return param_1 / 1000000;
    }

} // namespace jag
