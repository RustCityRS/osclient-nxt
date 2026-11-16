// libs/hal/hardware/apple/osx/HardwareInfo_OSX.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.hal.hardware

#include "libs/hal/hardware/HardwareInfo.h"

namespace jag::hardware {
    // 0x100c5ffa0
    HardwareInfo::HardwareInfo()
        : Singleton<HardwareInfo>(), eastl::string(), m_numPhyscicalProcessors(1), m_numLogicalProcessors(1),
          m_systemMemoryMB(0), m_cPUSignature(0), m_gPUDriverDate(0), field_160(0), field_164(0), field_168(0),
          m_legacyOSVersion(0) {
        unsigned int local_3c[3];

        *(uint64_t*)((long)&m_legacyOSVersion + 1) = 0;
        new (&field_192) eastl::string();
        new (&field_224) eastl::string();
        m_gpuMemoryMB = 0;
        field_260 = 0;
        m_dPI = 0;
        new (&field_268) math::Point(*PTR_ZERO_100ee6698);
        field_276 = 0;
        local_3c[0] = 0;
        field_76.fill(*local_3c);
        Init();
    }

    // 0x100c60180
    void HardwareInfo::Init() {
        unsigned int local_b8;
        int local_b4;
        int local_b0;
        uint32_t uStack_ac;
        int local_a4;
        unsigned int local_98[2];
        uint32_t local_90;
        uint32_t local_8c;
        char local_88[16];

        size_t local_a0 = 4;
        _sysctlbyname("hw.physicalcpu", &local_a4, &local_a0, nullptr, 0);
        local_a0 = 4;
        _sysctlbyname("hw.ncpu", &local_b8, &local_a0, nullptr, 0);
        uint64_t local_48 = 0;
        uint64_t uStack_40 = 0;
        uint64_t local_58 = 0;
        uint64_t uStack_50 = 0;
        uint64_t local_68 = 0;
        uint64_t uStack_60 = 0;
        uint64_t local_78 = 0;
        uint64_t uStack_70 = 0;
        local_a0 = 64;
        _sysctlbyname("machdep.cpu.brand_string", &local_78, &local_a0, nullptr, 0);
        local_88[0] = '\0';
        local_88[1] = '\0';
        local_88[2] = '\0';
        local_88[3] = '\0';
        local_88[4] = '\0';
        local_88[5] = '\0';
        local_88[6] = '\0';
        local_88[7] = '\0';
        local_88[8] = '\0';
        local_88[9] = '\0';
        local_88[10] = '\0';
        local_88[11] = '\0';
        local_88[12] = '\0';
        local_88[13] = '\0';
        local_88[14] = '\0';
        local_88[15] = '\0';
        local_a0 = 16;
        _sysctlbyname("machdep.cpu.vendor", local_88, &local_a0, nullptr, 0);
        local_a0 = 4;
        _sysctlbyname("machdep.cpu.signature", &local_b4, &local_a0, nullptr, 0);
        local_a0 = 8;
        _sysctlbyname("machdep.cpu.feature_bits", &local_90, &local_a0, nullptr, 0);
        local_a0 = 8;
        _sysctlbyname("machdep.cpu.extfeature_bits", local_98, &local_a0, nullptr, 0);
        local_a0 = 8;
        _sysctlbyname("hw.memsize", &local_b0, &local_a0, nullptr, 0);
        m_cPUSignature = local_b4;
        uint8_t* puVar1 = &field_76;
        uint32_t* puVar5 = (uint32_t*)(*puVar1)[0];
        uint32_t uVar3 = local_90;
        *puVar5 = local_8c;
        puVar5 = (uint32_t*)(*puVar1)[1];
        unsigned int uVar2 = local_98[0];
        *puVar5 = uVar3;
        unsigned int* puVar6 = (unsigned int*)(*puVar1)[2];
        *puVar6 = uVar2;
        assign(&local_78);
        trim();
        puVar1 = &field_32;
        char* pcVar7 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        if (*pcVar7 == '\0') {
            if (ProcessIsTranslated() == 1) {
                puVar1->assign("M1");
                goto LAB_100c60397;
            }
        }
        puVar1->assign(local_88);
        puVar1->trim();
    LAB_100c60397:
        m_numPhyscicalProcessors = local_a4;
        m_numLogicalProcessors = local_b8;
        m_systemMemoryMB = (int)((((uint64_t)uStack_ac << 32) | (uint32_t)local_b0) >> 20);
        (&field_96)->assign("NXT-OSX");
        local_a0 = 16;
        _sysctlbyname("kern.ostype", &local_78, &local_a0, nullptr, 0);
        local_a0 = 16;
        _sysctlbyname("kern.osrelease", local_88, &local_a0, nullptr, 0);
        local_a0 = 4;
        _sysctlbyname("kern.osrevision", &local_90, &local_a0, nullptr, 0);
        _sscanf(local_88, "%d.%d.%d", (int*)local_98, &local_b0, &local_a4);
        field_160 = 2;
        field_164 = local_98[0];
        field_168 = local_b0;
        field_176 = local_90;
        field_180 = 1;
        if ((local_98[0] & 4294967288) == 8) {
            m_legacyOSVersion = local_98[0] + 12;
        }
    }

    // 0x100c60500
    int HardwareInfo::GetGPUDriverYear() const {
        auto ptVar1 = _localtime(&m_gPUDriverDate);
        if (ptVar1 == nullptr) {
            return 0;
        }
        return ptVar1->tm_year + 1900;
    }

    // 0x100c60540
    int HardwareInfo::ProcessIsTranslated() {
        int* piVar2;

        return local_c = 0;
        size_t local_18 = 4;
        if (_sysctlbyname("sysctl.proc_translated", &local_c, &local_18, nullptr, 0) == -1) {
            piVar2 = ___error();
            local_c = -(unsigned int)(*piVar2 != 2);
        }
        return local_c;
    }

    // 0x100c605a0
    void HardwareInfo::GetProcessMemoryBytes(unsigned long long& arg1, unsigned long long& arg2,
                                             unsigned long long arg3) {
        arg2 = 0;
        *(uint64_t*)arg3 = 0;
        return 0;
    }

    // 0x100c605c0
    uint64_t HardwareInfo::GetCPUUsage(int& arg1, int& arg2) {
        arg2 = 0;
        arg1 = 0;
        return 0;
    }

    // 0x100c605e0
    uint64_t HardwareInfo::GetRefreshRate() const {
        return 60;
    }

    // 0x100c605f0
    bool HardwareInfo::IsGPUDriverOutOfDate() const {
        return 0;
    }

    // 0x100c60600
    void CheckDLLInjection() {}

    // 0x100c60610
    void HardwareInfo::InitPost() {
        field_276 = 1;
    }

    // 0x100c60620
    bool HardwareInfo::IsBatteryCharging() const {
        return 0;
    }

    // 0x100c60630
    uint64_t HardwareInfo::GetBatteryPercent() const {
        return 100;
    }

    // 0x100c60640
    oldscape::dash3d::ModelLit::AABB HardwareInfo::GetMemoryStatistics() {
        rusage local_a8;

        result = (ReturnValue)0;
        &result[1] = (ReturnValue)0;
        &result[2] = (ReturnValue)0;
        oldscape::dash3d::ModelLit::AABB result;
        size_t local_18 = 8;
        _sysctlbyname("vm.swapusage", &result + 1, &local_18, nullptr, 0);
        if (_getrusage(0, &local_a8) == 0) {
            result = (ReturnValue)(local_a8.ru_maxrss << 10);
        }
        _sysctlbyname("hw.memsize", &result + 2, &local_18, nullptr, 0);
        return result;
    }

} // namespace jag::hardware
