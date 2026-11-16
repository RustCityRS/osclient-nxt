// libs/hal/hardware/HardwareInfo.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: osclient

namespace jag::hardware {
    class HardwareInfo {
    public:
        void GetCPUBrand() const;
        Option<float>* GetCPUVendor() const;
        int GetCPUSignature() const;
        bool Is64BitOS() const;
        int GetSystemMemoryMB() const;
        void GetOSVersionAndBuild(OperatingSystem& operatingSystem, int& arg2, int& arg3, int& arg4) const;
        void GetOSVersion(OperatingSystem& operatingSystem, int& arg2, int& arg3) const;
        ~HardwareInfo();
        uint8_t* GetClientType() const;
        unsigned int GetNumLogicalProcessors() const;
        int GetNumPhyscicalProcessors() const;
        uint64_t* GetCPUFeatureFlags() const;
        uint8_t* GetDeviceFullName() const;
        unsigned int GetLegacyOSVersion() const;
        uint64_t GetGPUDriverDate() const;
        uint32_t GetDPI() const;
        auto GetPhysicalScreenSize() const;
        uint32_t GetGpuMemoryMB() const;
        HardwareInfo();
        void Init();
        int GetGPUDriverYear() const;
        int ProcessIsTranslated();
        void GetProcessMemoryBytes(unsigned long long& arg1, unsigned long long& arg2, unsigned long long arg3);
        uint64_t GetCPUUsage(int& arg1, int& arg2);
        uint64_t GetRefreshRate() const;
        bool IsGPUDriverOutOfDate() const;
        void InitPost();
        bool IsBatteryCharging() const;
        uint64_t GetBatteryPercent() const;
        oldscape::dash3d::ModelLit::AABB GetMemoryStatistics();

    private:
        uint8_t _unknown_0[64];
        int m_numPhyscicalProcessors;
        unsigned int m_numLogicalProcessors;
        int m_systemMemoryMB;
        uint8_t _unknown_76[12];
        int m_cPUSignature;
        uint8_t _unknown_92[68];
        uint32_t field_160;
        unsigned int field_164;
        int field_168;
        unsigned int m_legacyOSVersion;
        uint32_t field_176;
        uint8_t field_180;
        uint8_t _unknown_181[3];
        uint64_t m_gPUDriverDate;
        uint8_t _unknown_192[64];
        uint32_t m_gpuMemoryMB;
        uint8_t field_260;
        uint8_t _unknown_261[3];
        uint32_t m_dPI;
        uint8_t _unknown_268[8];
        uint8_t field_276;
        uint8_t _unknown_277[3];
    };

    // 0x100009ca0: HardwareInfo::GetCPUBrand() const has the same machine code as eastl::compressed_pair_imp<eastl::string::Layout, eastl::allocator, 0>::first()

    // 0x10002d850: HardwareInfo::GetCPUVendor() const has the same machine code as oldscape::option::Option<int>::GetDefaultValue() const

    // 0x1000b7900: HardwareInfo::GetCPUSignature() const has the same machine code as oldscape::minimenu::MinimenuEntry::GetSubjectType() const

    // 0x100102f00: HardwareInfo::Is64BitOS() const has the same machine code as oldscape::rs2lib::InputField::HasFont() const

    // 0x10012dc00: HardwareInfo::GetSystemMemoryMB() const has the same machine code as oldscape::graphics::NXTPixScreen::GetViewportX()

    // 0x100146270
    void HardwareInfo::GetOSVersionAndBuild(OperatingSystem& operatingSystem, int& arg2, int& arg3, int& arg4) const {
        GetOSVersion(operatingSystem, arg2, arg3);
        arg4 = field_176;
    }

    // 0x1001462d0
    void HardwareInfo::GetOSVersion(OperatingSystem& operatingSystem, int& arg2, int& arg3) const {
        if (field_276 == '\0') {
            LogAssert(
                "m_initComplete",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/hardware/HardwareInfo.h",
                107, nullptr);
        }
        *(uint32_t*)operatingSystem = field_160;
        arg2 = field_164;
        arg3 = field_168;
    }

    // 0x1001a48d0
    HardwareInfo::~HardwareInfo() {
        field_224.~basic_string();
        field_192.~basic_string();
        field_128.~basic_string();
        field_96.~basic_string();
        field_32.~basic_string();
    }

    // 0x1001cd990: HardwareInfo::GetClientType() const has the same machine code as graphics::PointLightIndicesEffect::GetVisiblePointLights()

    // 0x1003f65a0: HardwareInfo::GetNumLogicalProcessors() const has the same machine code as EntityRoute::GetStalledTickCount() const

    // 0x100429b10: HardwareInfo::GetNumPhyscicalProcessors() const has the same machine code as game::StaticPointLight::GetRGB() const

    // 0x100443d40: HardwareInfo::GetCPUFeatureFlags() const has the same machine code as game::Entity::GetBoundingCapsule() const

    // 0x1004abeb0: HardwareInfo::GetDeviceFullName() const has the same machine code as game::EnvironmentOverride::GetBloomOverrides() const

    // 0x1006e4cf0
    unsigned int HardwareInfo::GetLegacyOSVersion() const {
        if (field_276 == '\0') {
            LogAssert(
                "m_initComplete",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/hardware/HardwareInfo.h",
                121, nullptr);
        }
        return m_legacyOSVersion;
    }

    // 0x1006e4d30
    uint64_t HardwareInfo::GetGPUDriverDate() const {
        return m_gPUDriverDate;
    }

    // 0x1008f3e90
    uint32_t HardwareInfo::GetDPI() const {
        if (field_276 == '\0') {
            LogAssert(
                "m_initComplete",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/hardware/HardwareInfo.h",
                160, nullptr);
        }
        return m_dPI;
    }

    // 0x1008f3ed0
    auto HardwareInfo::GetPhysicalScreenSize() const {
        if (field_276 == '\0') {
            LogAssert(
                "m_initComplete",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/hardware/HardwareInfo.h",
                162, nullptr);
        }
        return auto(field_268);
    }

    // 0x100930be0: HardwareInfo::GetGpuMemoryMB() const has the same machine code as graphics::LightProbeRenderer::GetProbeEnvMapRes() const

} // namespace jag::hardware

namespace jag {
    // 0x1001472f0
    void PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p4_alt3(int arg1) {
        long lVar1 = *(long*)(this + 24);
        unsigned long uVar2 = end();
        if (uVar2 < lVar1 + 4U) {
            LogAssert("m_pos + 4 <= m_data.size()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/bytepacking/Packet.inl",
                      793, nullptr);
        }
        uVar2 = *(unsigned long*)(this + 24);
        *(unsigned long*)(this + 24) = uVar2 + 1;
        uint8_t* puVar3 = (uint8_t*)(*this)[uVar2];
        *puVar3 = (char)((unsigned int)arg1 >> 16);
        uVar2 = *(unsigned long*)(this + 24);
        *(unsigned long*)(this + 24) = uVar2 + 1;
        puVar3 = (uint8_t*)(*this)[uVar2];
        *puVar3 = (char)((unsigned int)arg1 >> 24);
        uVar2 = *(unsigned long*)(this + 24);
        *(unsigned long*)(this + 24) = uVar2 + 1;
        puVar3 = (uint8_t*)(*this)[uVar2];
        *puVar3 = (char)arg1;
        uVar2 = *(unsigned long*)(this + 24);
        *(unsigned long*)(this + 24) = uVar2 + 1;
        puVar3 = (uint8_t*)(*this)[uVar2];
        *puVar3 = (char)((unsigned int)arg1 >> 8);
    }

    // 0x100147430
    oldscape::midi2::MidiRequest*
    placement_new<oldscape::midi2::MidiRequest, oldscape::jagex3::Js5*, int&, int, int, bool>(
        void* arg1, oldscape::jagex3::Js5*&& arg2, int& arg3, int&& arg4, int&& arg5, bool&& arg6) {
        new (arg1) oldscape::midi2::MidiRequest(arg2, arg3, arg4, arg5, arg6);
        return arg1;
    }

    // 0x100147460
    ref_counter_shared<oldscape::midi2::MidiRequest>*
    placement_new<ref_counter_shared<oldscape::midi2::MidiRequest>, int, oldscape::midi2::MidiRequest*&>(
        void* arg1, int&& arg2, oldscape::midi2::MidiRequest*& arg3) {
        new (arg1) ref_counter_shared<oldscape::midi2::MidiRequest>((long)*arg2, arg3);
        return arg1;
    }

} // namespace jag
