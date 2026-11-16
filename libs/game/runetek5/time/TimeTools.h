// libs/game/runetek5/time/TimeTools.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::game {
    class TimeTools {
    public:
        TimeTools* FormatRuneDay(int, Language const*);
        long TimeFromRuneDay(int);
        long ActualTimeInMillis();
        void RuneDay();
        int RuneDay(long);
        long FormatDate(long, eastl::basic_string<char, BucketAllocatorEASTL> const&);
        TimeTools* FormatDurationSeconds(unsigned long long);
        TimeTools* FormatRealDate(long, Language const*);
        FormatRealDateShort(long);
        TimeTools* FormatRealDateTime(long, Language const*);
        FormatRealDateTimeShort(long);
        FormatRealTimeSeconds(long);
        FormatRealDateLogFileName(long);
        bool IsLeapYear(int);
        int DateMinutes(long long);
        void TimeFromDate(int, int, int, int, int, int);
        bool GetDateParts(long, int&, int&, int&);
        int DayDeltaDueToTimezone(tm&, tm&);
        TimeTools* InitialiseTM(int, int, int, int, int, int, int, int, int);

        // data members, from how the methods use this: 40 bytes
        int field_0;  // offset 0
        int field_4;  // offset 4
        int field_8;  // offset 8
        int field_12; // offset 12
        int field_16; // offset 16
        int field_20; // offset 20
        int field_24; // offset 24
        int field_28; // offset 28
        int field_32; // offset 32
        char _unknown_36[4];
    };

    // 0x100165890, 48 bytes, inline, placed by class name and debug map
    // TimeTools::FormatRuneDay(int, Language const*)
    TimeTools* TimeTools::FormatRuneDay(int param_1, Language* param_2) {
        long lVar1;

        lVar1 = TimeFromRuneDay(param_1);
        FormatRealDate(this, lVar1, param_2);
        return this;
    }

    // 0x10016ef30, 32 bytes, inline, placed by class name
    // TimeTools::TimeFromRuneDay(int)
    long TimeTools::TimeFromRuneDay(int param_1) {
        return (long)(param_1 + 11745) * 86400;
    }

    // 0x100183700, 32 bytes, inline, placed by class name
    // TimeTools::ActualTimeInMillis()
    long TimeTools::ActualTimeInMillis() {
        return _time((time_t*)0) * 1000;
    }

    // 0x10025df50, 32 bytes, inline, placed by class name
    // TimeTools::RuneDay()
    void TimeTools::RuneDay() {
        time_t tVar1;

        tVar1 = _time((time_t*)0);
        RuneDay(tVar1);
    }

    // 0x100269d60, 48 bytes, inline, placed by class name
    // TimeTools::RuneDay(long)
    int TimeTools::RuneDay(long param_1) {
        return ((int)(SUB168(SEXT816(param_1) * SEXT816(1749024623285053783), 8) >> 13) -
                (SUB164(SEXT816(param_1) * SEXT816(1749024623285053783), 12) >> 31)) +
               -11745;
    }

} // namespace jag::game
