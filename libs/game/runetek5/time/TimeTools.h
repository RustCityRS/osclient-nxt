// libs/game/runetek5/time/TimeTools.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::game {
    class TimeTools {
    public:
        auto FormatRuneDay(int arg1, const Language* language);
        long TimeFromRuneDay(int arg1);
        long ActualTimeInMillis();
        void RuneDay();
        int RuneDay(long arg1);
        auto FormatDate(long arg1, const eastl::string& str);
        auto FormatDurationSeconds(unsigned long long arg1);
        auto FormatRealDate(long arg1, const Language* language);
        auto FormatRealDateShort(long arg1);
        auto FormatRealDateTime(long arg1, const Language* language);
        auto FormatRealDateTimeShort(long arg1);
        auto FormatRealTimeSeconds(long arg1);
        auto FormatRealDateLogFileName(long arg1);
        bool IsLeapYear(int arg1);
        int DateMinutes(long long arg1);
        void TimeFromDate(int arg1, int arg2, int arg3, int arg4, int arg5, int arg6);
        bool GetDateParts(long arg1, int& arg2, int& arg3, int& arg4);
        int DayDeltaDueToTimezone(tm& tm1, tm& tm2);
        TimeTools* InitialiseTM(int arg1, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7, int arg8,
                                int arg9);

    private:
        int field_0;
        int field_4;
        int field_8;
        int field_12;
        int field_16;
        int field_20;
        int field_24;
        int field_28;
        int field_32;
        uint8_t _unknown_36[4];
    };

    // 0x100165890
    auto TimeTools::FormatRuneDay(int arg1, const Language* language) {
        auto result;

        long arg1_00 = TimeFromRuneDay(arg1);
        FormatRealDate(&result, arg1_00, language);
        return result;
    }

    // 0x10016ef30
    long TimeTools::TimeFromRuneDay(int arg1) {
        return (long)(arg1 + 11745) * 86400;
    }

    // 0x100183700
    long TimeTools::ActualTimeInMillis() {
        return _time(nullptr) * 1000;
    }

    // 0x10025df50
    void TimeTools::RuneDay() {
        RuneDay(_time(nullptr));
    }

    // 0x100269d60
    int TimeTools::RuneDay(long arg1) {
        return ((int)((uint64_t)(((__int128)arg1 * (__int128)1749024623285053783) >> 64) >> 13) -
                ((uint64_t)(((__int128)arg1 * (__int128)1749024623285053783) >> 96) >> 31)) -
               11745;
    }

} // namespace jag::game
