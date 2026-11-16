// libs/hal/time/DateTools.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.hal.time

namespace jag::datetools {
    // 0x100c9b4c0, 240 bytes, placed by class name and debug map
    // GetCompilationDate()
    time_t GetCompilationDate() {
        int iVar1;
        long lVar2;
        tm local_58;
        char local_14[4];

        local_58.tm_isdst = 0;
        local_58._36_4_ = 0;
        local_58.tm_gmtoff = 0;
        local_58.tm_mon = 0;
        local_58.tm_year = 0;
        local_58.tm_wday = 0;
        local_58.tm_yday = 0;
        local_58.tm_sec = 0;
        local_58.tm_min = 0;
        local_58.tm_hour = 0;
        local_58.tm_mday = 0;
        local_58.tm_zone = (char*)0;
        iVar1 = _sscanf("Aug  4 2023", "%s %d %d", local_14, &local_58.tm_mday, &local_58.tm_year);
        if (iVar1 != 3) {
            /* WARNING: Subroutine does not return */
            LogAssertAlways(
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/time/DateTools.cpp", 15,
                (char*)0);
        }
        lVar2 = __ZL6strstrUa9enable_ifIXLb1EEEPKcS0_(local_14);
        local_58.tm_year = local_58.tm_year + -1900;
        local_58.tm_mon = (int)((lVar2 + -4309248384) / 3);
        iVar1 = _sscanf("19:00:15", "%d:%d:%d", &local_58.tm_hour, &local_58.tm_min, &local_58.tm_sec);
        if (iVar1 != 3) {
            /* WARNING: Subroutine does not return */
            LogAssertAlways(
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/time/DateTools.cpp", 23,
                (char*)0);
        }
        return _mktime(&local_58);
    }

    // 0x100c9b5c0, 192 bytes, placed by class name and debug map
    // GetLocalDateAndTimeWithDashes()
    datetools* GetLocalDateAndTimeWithDashes() {
        tm* ptVar1;
        long lVar2;
        allocator local_58[8];
        time_t local_50;
        undefined8 local_48[5];
        long local_20;

        local_20 = *(long*)PTR____stack_chk_guard_100ee9d98;
        local_48[0] = std::chrono::system_clock::now();
        local_50 = std::chrono::system_clock::to_time_t((time_point*)local_48);
        ptVar1 = _localtime(&local_50);
        _strftime((char*)local_48, 30, "%F_%T", ptVar1);
        lVar2 = 0;
        do {
            if (*(char*)((long)local_48 + lVar2) == ':') {
                *(undefined1*)((long)local_48 + lVar2) = 45;
            }
            lVar2 = lVar2 + 1;
        } while (lVar2 != 30);
        eastl::allocator::allocator(local_58, "EASTL basic_string");
        new (this) eastl::string(local_48, local_58);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_20) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return this;
    }

    // 0x100c9b680, 48 bytes, placed by class name and debug map
    // GetCurrentMonth()
    int GetCurrentMonth() {
        tm* ptVar1;
        int iVar2;
        time_t local_18;

        iVar2 = 0;
        local_18 = _time((time_t*)0);
        ptVar1 = _gmtime(&local_18);
        if (ptVar1 != (tm*)0) {
            iVar2 = ptVar1->tm_mon;
        }
        return iVar2;
    }

} // namespace jag::datetools

// 0x100c9b5b0, 16 bytes, placed by neighbouring functions
// _ZL6strstrUa9enable_ifIXLb1EEEPKcS0_
void __ZL6strstrUa9enable_ifIXLb1EEEPKcS0_(char* param_1, char* param_2) {
    __libcpp_strstr(param_1, param_2);
}
