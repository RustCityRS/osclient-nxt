// libs/hal/time/DateTools.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.hal.time

namespace jag::datetools {
    // 0x100c9b4c0
    time_t GetCompilationDate() {
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
        local_58.tm_zone = nullptr;
        int iVar1 = _sscanf("Aug  4 2023", "%s %d %d", local_14, &local_58.tm_mday, &local_58.tm_year);
        if (iVar1 != 3) {
            LogAssertAlways(
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/time/DateTools.cpp", 15,
                nullptr);
        }
        long lVar2 = __ZL6strstrUa9enable_ifIXLb1EEEPKcS0_(local_14);
        local_58.tm_year = local_58.tm_year - 1900;
        local_58.tm_mon = (int)((lVar2 - 4309248384) / 3);
        iVar1 = _sscanf("19:00:15", "%d:%d:%d", &local_58.tm_hour, &local_58.tm_min, &local_58.tm_sec);
        if (iVar1 != 3) {
            LogAssertAlways(
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/time/DateTools.cpp", 23,
                nullptr);
        }
        return _mktime(&local_58);
    }

    // 0x100c9b5c0
    auto GetLocalDateAndTimeWithDashes() {
        uint64_t local_48[5];

        local_48[0] = std::chrono::system_clock::now();
        time_t local_50 = std::chrono::system_clock::to_time_t((time_point*)local_48);
        auto ptVar1 = _localtime(&local_50);
        _strftime((char*)local_48, 30, "%F_%T", ptVar1);
        long lVar2 = 0;
        do {
            if (*(char*)((long)local_48 + lVar2) == ':') {
                *(uint8_t*)((long)local_48 + lVar2) = 45;
            }
            lVar2 = lVar2 + 1;
        } while (lVar2 != 30);
        return auto(local_48);
    }

    // 0x100c9b680
    int GetCurrentMonth() {
        int iVar2 = 0;
        time_t local_18 = _time(nullptr);
        auto ptVar1 = _gmtime(&local_18);
        if (ptVar1 != nullptr) {
            iVar2 = ptVar1->tm_mon;
        }
        return iVar2;
    }

} // namespace jag::datetools

// 0x100c9b5b0
void __ZL6strstrUa9enable_ifIXLb1EEEPKcS0_(char* param_1, char* param_2) {
    __libcpp_strstr(param_1, param_2);
}
