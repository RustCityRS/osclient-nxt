// libs/game/runetek5/time/TimeTools.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.runetek5

#include "TimeTools.h"

namespace jag::game {
    // 0x1003b4e40
    auto TimeTools::FormatDate(long arg1, const eastl::basic_string<char, BucketAllocatorEASTL>& str) {
        char* pcVar2;
        eastl* eastl;
        char* str_00;
        eastl local_130;
        eastl local_128;

        long local_138 = arg1;
        auto ptVar1 = _localtime(&local_138);
        if (ptVar1 == nullptr) {
            eastl = &local_128;
            eastl::destruct<oldscape::highlight::NpcUID*>(eastl);
            str_00 = "";
        } else {
            pcVar2 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            str_00 = &local_128;
            _strftime(str_00, 256, pcVar2, ptVar1);
            eastl = &local_130;
            eastl::destruct<oldscape::highlight::NpcUID*>(eastl);
        }
        return auto(str_00, eastl);
    }

    // 0x1003b4f10
    auto TimeTools::FormatDurationSeconds(unsigned long long arg1) {
        char* pcVar2;

        int iVar4 = (int)(arg1 / 86400000);
        unsigned long uVar1 = (long)iVar4 * -86400000 + arg1;
        unsigned long uVar5 = uVar1 / 3600000;
        uVar1 = (long)(int)uVar5 * -3600000 + uVar1;
        unsigned long uVar3 = uVar1 / 60000;
        auto result;
        if (0 < iVar4) {
            pcVar2 = "s";
            if (iVar4 == 1) {
                pcVar2 = "";
            }
            result.sprintf("%d Day%s ", arg1 / 86400000 & 4294967295, pcVar2);
        }
        result.append_sprintf("%02d:%02d.%02d", uVar5 & 4294967295, uVar3 & 4294967295,
                              ((long)(int)uVar3 * -60000 + uVar1) / 1000 & 4294967295);
        return result;
    }

    // 0x1003b5030
    auto TimeTools::FormatRealDate(long arg1, const Language* language) {
        auto result;
        basic_string<char, BucketAllocatorEASTL> local_48;
        eastl local_30;

        if ((Language*)Language::PT == language) {
            FormatRealDateShort(&result, arg1);
        } else {
            eastl::destruct<oldscape::highlight::NpcUID*>(&local_30);
            local_48 = eastl::basic_string<char, BucketAllocatorEASTL>("%d-%b-%Y", &local_30);
            FormatDate(&result, arg1, &local_48);
        }
        return result;
    }

    // 0x1003b50d0
    auto TimeTools::FormatRealDateShort(long arg1) {
        auto result;
        eastl local_30;

        eastl::destruct<oldscape::highlight::NpcUID*>(&local_30);
        basic_string<char, BucketAllocatorEASTL> local_48("%d/%m/%y", &local_30);
        FormatDate(&result, arg1, &local_48);
        return result;
    }

    // 0x1003b5150
    auto TimeTools::FormatRealDateTime(long arg1, const Language* language) {
        auto result;
        basic_string<char, BucketAllocatorEASTL> local_48;
        eastl local_30;

        if ((Language*)Language::PT == language) {
            FormatRealDateTimeShort(&result, arg1);
        } else {
            eastl::destruct<oldscape::highlight::NpcUID*>(&local_30);
            local_48 = eastl::basic_string<char, BucketAllocatorEASTL>("%d-%b-%Y %H:%M", &local_30);
            FormatDate(&result, arg1, &local_48);
        }
        return result;
    }

    // 0x1003b51f0
    auto TimeTools::FormatRealDateTimeShort(long arg1) {
        auto result;
        eastl local_30;

        eastl::destruct<oldscape::highlight::NpcUID*>(&local_30);
        basic_string<char, BucketAllocatorEASTL> local_48("%d/%m/%y %H:%M", &local_30);
        FormatDate(&result, arg1, &local_48);
        return result;
    }

    // 0x1003b5270
    auto TimeTools::FormatRealTimeSeconds(long arg1) {
        auto result;
        eastl local_30;

        eastl::destruct<oldscape::highlight::NpcUID*>(&local_30);
        basic_string<char, BucketAllocatorEASTL> local_48("%H:%M:%S", &local_30);
        FormatDate(&result, arg1, &local_48);
        return result;
    }

    // 0x1003b52f0
    auto TimeTools::FormatRealDateLogFileName(long arg1) {
        auto result;
        eastl local_30;

        eastl::destruct<oldscape::highlight::NpcUID*>(&local_30);
        basic_string<char, BucketAllocatorEASTL> local_48("%Y-%m-%d-%H-%M-%S", &local_30);
        FormatDate(&result, arg1, &local_48);
        return result;
    }

    // 0x1003b5370
    bool TimeTools::IsLeapYear(int arg1) {
        unsigned int uVar2;

        if (arg1 < 0) {
            return (arg1 + 1U & 3) == 0;
        }
        bool bVar1 = (arg1 & 3U) == 0 && arg1 < 1582;
        if ((1581 < arg1) && ((arg1 & 3U) == 0)) {
            uVar2 = arg1 * -1030792151 + 85899344;
            bVar1 = (uVar2 >> 4 | arg1 * -1879048192) < 10737419 || 42949672 < (uVar2 >> 2 | arg1 * 1073741824);
        }
        return bVar1;
    }

    // 0x1003b53d0
    int TimeTools::DateMinutes(long long arg1) {
        uint8_t auVar1[16];

        auto tVar2 = _time(nullptr);
        auVar1 = (__int128)(tVar2 + arg1) * (unsigned __int128)9838263505978427529;
        return (int)(auVar1._8_8_ >> 5) - (auVar1._12_4_ >> 31);
    }

    // 0x1003b5410
    void TimeTools::TimeFromDate(int arg1, int arg2, int arg3, int arg4, int arg5, int arg6) {
        tm local_48;

        local_48.tm_wday = 0;
        local_48.tm_yday = 0;
        local_48.tm_isdst = 0;
        local_48._36_4_ = 0;
        local_48.tm_gmtoff = 0;
        local_48.tm_zone = nullptr;
        local_48.tm_min = arg2;
        local_48.tm_sec = arg1;
        local_48.tm_mday = arg4;
        local_48.tm_hour = arg3;
        local_48.tm_year = arg6 - 1900;
        local_48.tm_mon = arg5;
        _mktime(&local_48);
    }

    // 0x1003b5460
    bool TimeTools::GetDateParts(long arg1, int& arg2, int& arg3, int& arg4) {
        long local_28 = arg1;
        auto ptVar1 = _gmtime(&local_28);
        if (ptVar1 != nullptr) {
            arg2 = ptVar1->tm_year + 1900;
            arg3 = ptVar1->tm_mon;
            arg4 = ptVar1->tm_mday;
        }
        return ptVar1 != nullptr;
    }

    // 0x1003b54b0
    int TimeTools::DayDeltaDueToTimezone(tm& tm1, tm& tm2) {
        if (*(int*)(tm1 + 12) == *(int*)(tm2 + 12)) {
            return 0;
        }
        return (unsigned int)(*(int*)(tm1 + 20) - *(int*)(tm2 + 20) == 1 ||
                              (*(int*)(tm1 + 16) - *(int*)(tm2 + 16) == 1 ||
                               *(int*)(tm1 + 12) - *(int*)(tm2 + 12) == 1)) *
                   2 -
               1;
    }

    // 0x1003b54f0
    TimeTools* TimeTools::InitialiseTM(int arg1, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7, int arg8,
                                       int arg9) {
        if (61 < (unsigned int)arg1) {
            LogAssert("sec >= 0 && sec <= 61",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/time/"
                      "TimeTools.cpp",
                      164, nullptr);
        }
        field_0 = arg1;
        if (59 < (unsigned int)arg2) {
            LogAssert("min >= 0 && min <= 59",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/time/"
                      "TimeTools.cpp",
                      168, nullptr);
        }
        field_4 = arg2;
        if (23 < (unsigned int)arg3) {
            LogAssert("hour >= 0 && hour <= 23",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/time/"
                      "TimeTools.cpp",
                      172, nullptr);
        }
        field_8 = arg3;
        if (30 < arg4 - 1U) {
            LogAssert("day >= 1 && day <= 31",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/time/"
                      "TimeTools.cpp",
                      176, nullptr);
        }
        field_12 = arg4;
        if (11 < (unsigned int)arg5) {
            LogAssert("month >= 0 && month <= 11",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/time/"
                      "TimeTools.cpp",
                      180, nullptr);
        }
        field_16 = arg5;
        field_20 = arg6 - 1900;
        if (6 < (unsigned int)arg7) {
            LogAssert("weekDay >= 0 && weekDay <= 6",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/time/"
                      "TimeTools.cpp",
                      187, nullptr);
        }
        field_24 = arg7;
        if (365 < (unsigned int)arg8) {
            LogAssert("yearDay >= 0 && yearDay <= 365",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/time/"
                      "TimeTools.cpp",
                      192, nullptr);
        }
        field_28 = arg8;
        field_32 = arg9;
        return this;
    }

} // namespace jag::game
