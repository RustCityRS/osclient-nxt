// libs/hal/hardware/apple/osx/HardwareInfo_OSX.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.hal.hardware

#include "libs/hal/hardware/HardwareInfo.h"

namespace jag::hardware {
    // 0x100c5ffa0, 368 bytes, base-object constructor, placed by class name and neighbouring functions
    // HardwareInfo::HardwareInfo()
    void HardwareInfo::HardwareInfo() {
        uint local_3c[3];

        new (this) Singleton<HardwareInfo>();
        new (this) eastl::string();
        new (&field_32) eastl::string();
        field_64 = 1;
        field_68 = 1;
        field_72 = 0;
        field_88 = 0;
        new (&field_96) eastl::string();
        new (&field_128) eastl::string();
        m_gPUDriverDate = 0;
        field_160 = 0;
        field_164 = 0;
        field_168 = 0;
        m_legacyOSVersion = 0;
        *(undefined8*)((long)&m_legacyOSVersion + 1) = 0;
        new (&field_192) eastl::string();
        new (&field_224) eastl::string();
        field_256 = 0;
        field_260 = 0;
        m_dPI = 0;
        new (&field_268, (Point*)PTR_ZERO_100ee6698) math::Point<float>();
        field_276 = 0;
        local_3c[0] = 0;
        (&field_76, local_3c)->fill();
        Init(this);
    }

    // 0x100c60180, 880 bytes, placed by class name and debug map
    // HardwareInfo::Init()
    void HardwareInfo::Init() {
        undefined1* puVar1;
        uint uVar2;
        undefined4 uVar3;
        undefined4* puVar5;
        uint* puVar6;
        char* pcVar7;
        undefined4 local_b8;
        undefined4 local_b4;
        int local_b0;
        undefined4 uStack_ac;
        int local_a4;
        size_t local_a0;
        uint local_98[2];
        undefined4 local_90;
        undefined4 local_8c;
        char local_88[16];
        undefined8 local_78;
        undefined8 uStack_70;
        undefined8 local_68;
        undefined8 uStack_60;
        undefined8 local_58;
        undefined8 uStack_50;
        undefined8 local_48;
        undefined8 uStack_40;
        long local_30;

        local_30 = *(long*)PTR____stack_chk_guard_100ee9d98;
        local_a0 = 4;
        _sysctlbyname("hw.physicalcpu", &local_a4, &local_a0, (void*)0, 0);
        local_a0 = 4;
        _sysctlbyname("hw.ncpu", &local_b8, &local_a0, (void*)0, 0);
        local_48 = 0;
        uStack_40 = 0;
        local_58 = 0;
        uStack_50 = 0;
        local_68 = 0;
        uStack_60 = 0;
        local_78 = 0;
        uStack_70 = 0;
        local_a0 = 64;
        _sysctlbyname("machdep.cpu.brand_string", &local_78, &local_a0, (void*)0, 0);
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
        _sysctlbyname("machdep.cpu.vendor", local_88, &local_a0, (void*)0, 0);
        local_a0 = 4;
        _sysctlbyname("machdep.cpu.signature", &local_b4, &local_a0, (void*)0, 0);
        local_a0 = 8;
        _sysctlbyname("machdep.cpu.feature_bits", &local_90, &local_a0, (void*)0, 0);
        local_a0 = 8;
        _sysctlbyname("machdep.cpu.extfeature_bits", local_98, &local_a0, (void*)0, 0);
        local_a0 = 8;
        _sysctlbyname("hw.memsize", &local_b0, &local_a0, (void*)0, 0);
        field_88 = local_b4;
        puVar1 = &field_76;
        puVar5 = (undefined4*)std::array<unsigned int, 3ul>::operator[]((array<unsigned int, 3ul>*)puVar1, 0);
        uVar3 = local_90;
        *puVar5 = local_8c;
        puVar5 = (undefined4*)std::array<unsigned int, 3ul>::operator[]((array<unsigned int, 3ul>*)puVar1, 1);
        uVar2 = local_98[0];
        *puVar5 = uVar3;
        puVar6 = (uint*)std::array<unsigned int, 3ul>::operator[]((array<unsigned int, 3ul>*)puVar1, 2);
        *puVar6 = uVar2;
        assign((char*)&local_78);
        trim();
        puVar1 = &field_32;
        pcVar7 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        if (*pcVar7 == '\0') {
            if (ProcessIsTranslated() == 1) {
                puVar1->assign("M1");
                goto LAB_100c60397;
            }
        }
        puVar1->assign(local_88);
        puVar1->trim();
    LAB_100c60397:
        field_64 = local_a4;
        field_68 = local_b8;
        field_72 = (int)(CONCAT44(uStack_ac, local_b0) >> 20);
        (&field_96, "NXT-OSX")->assign();
        local_a0 = 16;
        _sysctlbyname("kern.ostype", &local_78, &local_a0, (void*)0, 0);
        local_a0 = 16;
        _sysctlbyname("kern.osrelease", local_88, &local_a0, (void*)0, 0);
        local_a0 = 4;
        _sysctlbyname("kern.osrevision", &local_90, &local_a0, (void*)0, 0);
        _sscanf(local_88, "%d.%d.%d", (int*)local_98, &local_b0, &local_a4);
        field_160 = 2;
        field_164 = local_98[0];
        field_168 = local_b0;
        field_176 = local_90;
        field_180 = 1;
        if ((local_98[0] & 4294967288) == 8) {
            m_legacyOSVersion = local_98[0] + 12;
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_30) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100c604f0, 16 bytes, complete-object constructor, placed by class name and debug map
    // HardwareInfo::HardwareInfo(): jumps straight to the base-object constructor

    // 0x100c60500, 48 bytes, placed by class name and debug map
    // HardwareInfo::GetGPUDriverYear() const
    int HardwareInfo::GetGPUDriverYear() {
        tm* ptVar1;

        ptVar1 = _localtime(&m_gPUDriverDate);
        if (ptVar1 == (tm*)0) {
            return 0;
        }
        return ptVar1->tm_year + 1900;
    }

    // 0x100c60540, 96 bytes, placed by class name and debug map
    // HardwareInfo::ProcessIsTranslated()
    int HardwareInfo::ProcessIsTranslated() {
        int* piVar2;
        size_t local_18;
        int local_c;

        local_c = 0;
        local_18 = 4;
        if (_sysctlbyname("sysctl.proc_translated", &local_c, &local_18, (void*)0, 0) == -1) {
            piVar2 = ___error();
            local_c = -(uint)(*piVar2 != 2);
        }
        return local_c;
    }

    // 0x100c605a0, 32 bytes, placed by class name and debug map
    // HardwareInfo::GetProcessMemoryBytes(unsigned long long&, unsigned long long&, unsigned long long)
    undefined8 HardwareInfo::GetProcessMemoryBytes(ulonglong* param_1, ulonglong* param_2, ulonglong param_3) {
        *param_2 = 0;
        *(undefined8*)param_3 = 0;
        return 0;
    }

    // 0x100c605c0, 32 bytes, placed by class name and debug map
    // HardwareInfo::GetCPUUsage(int&, int&)
    undefined8 HardwareInfo::GetCPUUsage(int* param_1, int* param_2) {
        *param_2 = 0;
        *param_1 = 0;
        return 0;
    }

    // 0x100c605e0, 16 bytes, placed by class name and debug map
    // HardwareInfo::GetRefreshRate() const
    undefined8 HardwareInfo::GetRefreshRate() {
        return 60;
    }

    // 0x100c605f0, 16 bytes, placed by class name and debug map
    // HardwareInfo::IsGPUDriverOutOfDate() const
    undefined8 HardwareInfo::IsGPUDriverOutOfDate() {
        return 0;
    }

    // 0x100c60600, 16 bytes, placed by neighbouring functions
    // CheckDLLInjection()
    void CheckDLLInjection() {}

    // 0x100c60610, 16 bytes, placed by class name and debug map
    // HardwareInfo::InitPost()
    void HardwareInfo::InitPost() {
        field_276 = 1;
    }

    // 0x100c60620, 16 bytes, placed by class name and debug map
    // HardwareInfo::IsBatteryCharging() const
    undefined8 HardwareInfo::IsBatteryCharging() {
        return 0;
    }

    // 0x100c60630, 16 bytes, placed by class name and debug map
    // HardwareInfo::GetBatteryPercent() const
    undefined8 HardwareInfo::GetBatteryPercent() {
        return 100;
    }

    // 0x100c60640, 144 bytes, placed by class name and neighbouring functions
    // HardwareInfo::GetMemoryStatistics()
    HardwareInfo* HardwareInfo::GetMemoryStatistics() {
        rusage local_a8;
        size_t local_18;

        field_0 = 0;
        *(undefined8*)&field_8 = 0;
        *(undefined8*)&field_16 = 0;
        new (this) oldscape::dash3d::ModelLit::AABB();
        local_18 = 8;
        _sysctlbyname("vm.swapusage", &field_8, &local_18, (void*)0, 0);
        if (_getrusage(0, &local_a8) == 0) {
            field_0 = local_a8.ru_maxrss << 10;
        }
        _sysctlbyname("hw.memsize", &field_16, &local_18, (void*)0, 0);
        return this;
    }

} // namespace jag::hardware
