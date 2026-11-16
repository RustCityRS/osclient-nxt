// libs/game/runetek5/time/TimeTools.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.game.runetek5

#include "TimeTools.h"

namespace jag::game {
    // 0x1003b4e40, 208 bytes, placed by class name and debug map
    // TimeTools::FormatDate(long, eastl::basic_string<char, BucketAllocatorEASTL> const&)
    long TimeTools::FormatDate(long param_1, basic_string* param_2) {
        tm* ptVar1;
        char* pcVar2;
        NpcUID* extraout_RDX;
        NpcUID* extraout_RDX_00;
        char* pcVar3;
        basic_string* local_138;
        eastl local_130[8];
        BucketAllocatorEASTL local_128[256];
        long local_28;

        local_28 = *(long*)PTR____stack_chk_guard_100ee9d98;
        local_138 = param_2;
        ptVar1 = _localtime((time_t*)&local_138);
        if (ptVar1 == (tm*)0) {
            eastl::destruct<oldscape::highlight::NpcUID*>((eastl*)local_128, (NpcUID*)"EASTL basic_string",
                                                          extraout_RDX);
            pcVar3 = "";
        } else {
            pcVar2 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            pcVar3 = (char*)local_128;
            _strftime(pcVar3, 256, pcVar2, ptVar1);
            eastl::destruct<oldscape::highlight::NpcUID*>(local_130, (NpcUID*)"EASTL basic_string", extraout_RDX_00);
        }
        eastl::basic_string<char, BucketAllocatorEASTL>::basic_string((char*)param_1, (BucketAllocatorEASTL*)pcVar3);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_28) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return param_1;
    }

    // 0x1003b4f10, 288 bytes, placed by class name and debug map
    // TimeTools::FormatDurationSeconds(unsigned long long)
    TimeTools* TimeTools::FormatDurationSeconds(ulonglong param_1) {
        ulong uVar1;
        char* pcVar2;
        ulong uVar3;
        int iVar4;
        ulong uVar5;

        iVar4 = (int)(param_1 / 86400000);
        uVar1 = (long)iVar4 * -86400000 + param_1;
        uVar5 = uVar1 / 3600000;
        uVar1 = (long)(int)uVar5 * -3600000 + uVar1;
        uVar3 = uVar1 / 60000;
        eastl::basic_string<char, BucketAllocatorEASTL>::basic_string();
        if (0 < iVar4) {
            pcVar2 = "s";
            if (iVar4 == 1) {
                pcVar2 = "";
            }
            eastl::basic_string<char, BucketAllocatorEASTL>::sprintf((char*)this, "%d Day%s ",
                                                                     param_1 / 86400000 & 4294967295, pcVar2);
        }
        eastl::basic_string<char, BucketAllocatorEASTL>::append_sprintf(
            (char*)this, "%02d:%02d.%02d", uVar5 & 4294967295, uVar3 & 4294967295,
            ((long)(int)uVar3 * -60000 + uVar1) / 1000 & 4294967295);
        return this;
    }

    // 0x1003b5030, 160 bytes, placed by class name and debug map
    // TimeTools::FormatRealDate(long, Language const*)
    TimeTools* TimeTools::FormatRealDate(long param_1, Language* param_2) {
        basic_string<char, BucketAllocatorEASTL> local_48[24];
        eastl local_30[8];

        if ((Language*)Language::PT == param_2) {
            FormatRealDateShort(this, param_1);
        } else {
            eastl::destruct<oldscape::highlight::NpcUID*>(local_30, (NpcUID*)"EASTL basic_string", (NpcUID*)param_2);
            eastl::basic_string<char, BucketAllocatorEASTL>::basic_string((char*)local_48,
                                                                          (BucketAllocatorEASTL*)"%d-%b-%Y");
            FormatDate((long)this, (basic_string*)param_1);
            eastl::basic_string<char, BucketAllocatorEASTL>::~basic_string(local_48);
        }
        return this;
    }

    // 0x1003b50d0, 128 bytes, placed by class name and debug map
    // TimeTools::FormatRealDateShort(long)
    TimeTools* TimeTools::FormatRealDateShort(long param_1) {
        NpcUID* in_RDX;
        basic_string<char, BucketAllocatorEASTL> local_48[24];
        eastl local_30[8];

        eastl::destruct<oldscape::highlight::NpcUID*>(local_30, (NpcUID*)"EASTL basic_string", in_RDX);
        eastl::basic_string<char, BucketAllocatorEASTL>::basic_string((char*)local_48,
                                                                      (BucketAllocatorEASTL*)"%d/%m/%y");
        FormatDate((long)this, (basic_string*)param_1);
        eastl::basic_string<char, BucketAllocatorEASTL>::~basic_string(local_48);
        return this;
    }

    // 0x1003b5150, 160 bytes, placed by class name and debug map
    // TimeTools::FormatRealDateTime(long, Language const*)
    TimeTools* TimeTools::FormatRealDateTime(long param_1, Language* param_2) {
        basic_string<char, BucketAllocatorEASTL> local_48[24];
        eastl local_30[8];

        if ((Language*)Language::PT == param_2) {
            FormatRealDateTimeShort(this, param_1);
        } else {
            eastl::destruct<oldscape::highlight::NpcUID*>(local_30, (NpcUID*)"EASTL basic_string", (NpcUID*)param_2);
            eastl::basic_string<char, BucketAllocatorEASTL>::basic_string((char*)local_48,
                                                                          (BucketAllocatorEASTL*)"%d-%b-%Y %H:%M");
            FormatDate((long)this, (basic_string*)param_1);
            eastl::basic_string<char, BucketAllocatorEASTL>::~basic_string(local_48);
        }
        return this;
    }

    // 0x1003b51f0, 128 bytes, placed by class name and debug map
    // TimeTools::FormatRealDateTimeShort(long)
    TimeTools* TimeTools::FormatRealDateTimeShort(long param_1) {
        NpcUID* in_RDX;
        basic_string<char, BucketAllocatorEASTL> local_48[24];
        eastl local_30[8];

        eastl::destruct<oldscape::highlight::NpcUID*>(local_30, (NpcUID*)"EASTL basic_string", in_RDX);
        eastl::basic_string<char, BucketAllocatorEASTL>::basic_string((char*)local_48,
                                                                      (BucketAllocatorEASTL*)"%d/%m/%y %H:%M");
        FormatDate((long)this, (basic_string*)param_1);
        eastl::basic_string<char, BucketAllocatorEASTL>::~basic_string(local_48);
        return this;
    }

    // 0x1003b5270, 128 bytes, placed by class name and debug map
    // TimeTools::FormatRealTimeSeconds(long)
    TimeTools* TimeTools::FormatRealTimeSeconds(long param_1) {
        NpcUID* in_RDX;
        basic_string<char, BucketAllocatorEASTL> local_48[24];
        eastl local_30[8];

        eastl::destruct<oldscape::highlight::NpcUID*>(local_30, (NpcUID*)"EASTL basic_string", in_RDX);
        eastl::basic_string<char, BucketAllocatorEASTL>::basic_string((char*)local_48,
                                                                      (BucketAllocatorEASTL*)"%H:%M:%S");
        FormatDate((long)this, (basic_string*)param_1);
        eastl::basic_string<char, BucketAllocatorEASTL>::~basic_string(local_48);
        return this;
    }

    // 0x1003b52f0, 128 bytes, placed by class name and debug map
    // TimeTools::FormatRealDateLogFileName(long)
    TimeTools* TimeTools::FormatRealDateLogFileName(long param_1) {
        NpcUID* in_RDX;
        basic_string<char, BucketAllocatorEASTL> local_48[24];
        eastl local_30[8];

        eastl::destruct<oldscape::highlight::NpcUID*>(local_30, (NpcUID*)"EASTL basic_string", in_RDX);
        eastl::basic_string<char, BucketAllocatorEASTL>::basic_string((char*)local_48,
                                                                      (BucketAllocatorEASTL*)"%Y-%m-%d-%H-%M-%S");
        FormatDate((long)this, (basic_string*)param_1);
        eastl::basic_string<char, BucketAllocatorEASTL>::~basic_string(local_48);
        return this;
    }

    // 0x1003b5370, 96 bytes, placed by class name and debug map
    // TimeTools::IsLeapYear(int)
    bool TimeTools::IsLeapYear(int param_1) {
        bool bVar1;
        uint uVar2;

        if (param_1 < 0) {
            return (param_1 + 1U & 3) == 0;
        }
        bVar1 = (param_1 & 3U) == 0 && param_1 < 1582;
        if ((1581 < param_1) && ((param_1 & 3U) == 0)) {
            uVar2 = param_1 * -1030792151 + 85899344;
            bVar1 = (uVar2 >> 4 | param_1 * -1879048192) < 10737419 || 42949672 < (uVar2 >> 2 | param_1 * 1073741824);
        }
        return bVar1;
    }

    // 0x1003b53d0, 64 bytes, placed by class name and debug map
    // TimeTools::DateMinutes(long long)
    int TimeTools::DateMinutes(longlong param_1) {
        undefined1 auVar1[16];
        time_t tVar2;

        tVar2 = _time((time_t*)0);
        auVar1 = SEXT816(tVar2 + param_1) * ZEXT816(9838263505978427529);
        return (int)(auVar1._8_8_ >> 5) - (auVar1._12_4_ >> 31);
    }

    // 0x1003b5410, 80 bytes, placed by class name and debug map
    // TimeTools::TimeFromDate(int, int, int, int, int, int)
    void TimeTools::TimeFromDate(int param_1, int param_2, int param_3, int param_4, int param_5, int param_6) {
        tm local_48;

        local_48.tm_wday = 0;
        local_48.tm_yday = 0;
        local_48.tm_isdst = 0;
        local_48._36_4_ = 0;
        local_48.tm_gmtoff = 0;
        local_48.tm_zone = (char*)0;
        local_48.tm_min = param_2;
        local_48.tm_sec = param_1;
        local_48.tm_mday = param_4;
        local_48.tm_hour = param_3;
        local_48.tm_year = param_6 + -1900;
        local_48.tm_mon = param_5;
        _mktime(&local_48);
    }

    // 0x1003b5460, 80 bytes, placed by class name and debug map
    // TimeTools::GetDateParts(long, int&, int&, int&)
    bool TimeTools::GetDateParts(long param_1, int* param_2, int* param_3, int* param_4) {
        tm* ptVar1;
        long local_28;

        local_28 = param_1;
        ptVar1 = _gmtime(&local_28);
        if (ptVar1 != (tm*)0) {
            *param_2 = ptVar1->tm_year + 1900;
            *param_3 = ptVar1->tm_mon;
            *param_4 = ptVar1->tm_mday;
        }
        return ptVar1 != (tm*)0;
    }

    // 0x1003b54b0, 64 bytes, placed by class name and debug map
    // TimeTools::DayDeltaDueToTimezone(tm&, tm&)
    int TimeTools::DayDeltaDueToTimezone(tm* param_1, tm* param_2) {
        if (param_1->tm_mday == param_2->tm_mday) {
            return 0;
        }
        return (uint)(param_1->tm_year - param_2->tm_year == 1 ||
                      (param_1->tm_mon - param_2->tm_mon == 1 || param_1->tm_mday - param_2->tm_mday == 1)) *
                   2 +
               -1;
    }

    // 0x1003b54f0, 384 bytes, placed by class name and debug map
    // TimeTools::InitialiseTM(int, int, int, int, int, int, int, int, int)
    TimeTools* TimeTools::InitialiseTM(int param_1, int param_2, int param_3, int param_4, int param_5, int param_6,
                                       int param_7, int param_8, int param_9) {
        if (61 < (uint)param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("sec >= 0 && sec <= 61",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/time/"
                      "TimeTools.cpp",
                      164, (char*)0);
        }
        field_0 = param_1;
        if (59 < (uint)param_2) {
            /* WARNING: Subroutine does not return */
            LogAssert("min >= 0 && min <= 59",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/time/"
                      "TimeTools.cpp",
                      168, (char*)0);
        }
        field_4 = param_2;
        if (23 < (uint)param_3) {
            /* WARNING: Subroutine does not return */
            LogAssert("hour >= 0 && hour <= 23",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/time/"
                      "TimeTools.cpp",
                      172, (char*)0);
        }
        field_8 = param_3;
        if (30 < param_4 - 1U) {
            /* WARNING: Subroutine does not return */
            LogAssert("day >= 1 && day <= 31",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/time/"
                      "TimeTools.cpp",
                      176, (char*)0);
        }
        field_12 = param_4;
        if (11 < (uint)param_5) {
            /* WARNING: Subroutine does not return */
            LogAssert("month >= 0 && month <= 11",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/time/"
                      "TimeTools.cpp",
                      180, (char*)0);
        }
        field_16 = param_5;
        field_20 = param_6 + -1900;
        if (6 < (uint)param_7) {
            /* WARNING: Subroutine does not return */
            LogAssert("weekDay >= 0 && weekDay <= 6",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/time/"
                      "TimeTools.cpp",
                      187, (char*)0);
        }
        field_24 = param_7;
        if (365 < (uint)param_8) {
            /* WARNING: Subroutine does not return */
            LogAssert("yearDay >= 0 && yearDay <= 365",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/time/"
                      "TimeTools.cpp",
                      192, (char*)0);
        }
        field_28 = param_8;
        field_32 = param_9;
        return this;
    }

} // namespace jag::game
