// libs/hal/hardware/HardwareInfo.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: osclient

namespace jag::hardware {
    class HardwareInfo {
    public:
        GetCPUBrand() const;
        GetCPUVendor() const;
        int GetCPUSignature() const;
        Is64BitOS() const;
        int GetSystemMemoryMB() const;
        void GetOSVersionAndBuild(OperatingSystem&, int&, int&, int&) const;
        void GetOSVersion(OperatingSystem&, int&, int&) const;
        ~HardwareInfo();
        GetClientType() const;
        uint GetNumLogicalProcessors() const;
        int GetNumPhyscicalProcessors() const;
        GetCPUFeatureFlags() const;
        GetDeviceFullName() const;
        uint GetLegacyOSVersion() const;
        GetGPUDriverDate() const;
        GetDPI() const;
        GetPhysicalScreenSize() const;
        GetGpuMemoryMB() const;
        HardwareInfo();
        void Init();
        int GetGPUDriverYear() const;
        int ProcessIsTranslated();
        GetProcessMemoryBytes(unsigned long long&, unsigned long long&, unsigned long long);
        GetCPUUsage(int&, int&);
        GetRefreshRate() const;
        IsGPUDriverOutOfDate() const;
        void InitPost();
        IsBatteryCharging() const;
        GetBatteryPercent() const;
        HardwareInfo* GetMemoryStatistics();

        // data members, from how the methods use this: 280 bytes
        long field_0;       // offset 0
        undefined1 field_8; // offset 8
        char _unknown_9[7];
        undefined1 field_16; // offset 16
        char _unknown_17[47];
        int m_numPhyscicalProcessors; // offset 64
        uint m_numLogicalProcessors;  // offset 68
        int m_systemMemoryMB;         // offset 72
        char _unknown_76[12];
        int m_cPUSignature; // offset 88
        char _unknown_92[68];
        undefined4 field_160;   // offset 160
        uint field_164;         // offset 164
        int field_168;          // offset 168
        uint m_legacyOSVersion; // offset 172
        undefined4 field_176;   // offset 176
        undefined1 field_180;   // offset 180
        char _unknown_181[3];
        undefined8 m_gPUDriverDate; // offset 184
        char _unknown_192[64];
        undefined4 m_gpuMemoryMB; // offset 256
        undefined1 field_260;     // offset 260
        char _unknown_261[3];
        undefined4 m_dPI; // offset 264
        char _unknown_268[8];
        undefined1 field_276; // offset 276
        char _unknown_277[3];
    };

    // 0x100009ca0: the linker folded this into eastl::compressed_pair_imp<eastl::string::Layout, eastl::allocator, 0>::first(), which has identical code
    HardwareInfo::GetCPUBrand() const;

    // 0x10002d850: the linker folded this into oldscape::option::Option<int>::GetDefaultValue() const, which has identical code
    HardwareInfo::GetCPUVendor() const;

    // 0x1000b7900: the linker folded this into oldscape::minimenu::MinimenuEntry::GetSubjectType() const, which has identical code
    int HardwareInfo::GetCPUSignature() const;

    // 0x100102f00: the linker folded this into oldscape::rs2lib::InputField::HasFont() const, which has identical code
    HardwareInfo::Is64BitOS() const;

    // 0x10012dc00: the linker folded this into oldscape::graphics::NXTPixScreen::GetViewportX(), which has identical code
    int HardwareInfo::GetSystemMemoryMB() const;

    // 0x100146270, 32 bytes, inline, placed by class name and debug map
    // HardwareInfo::GetOSVersionAndBuild(OperatingSystem&, int&, int&, int&) const
    void HardwareInfo::GetOSVersionAndBuild(OperatingSystem* param_1, int* param_2, int* param_3, int* param_4) {
        GetOSVersion(this, param_1, param_2, param_3);
        *param_4 = field_176;
    }

    // 0x1001462d0, 112 bytes, inline, placed by class name and debug map
    // HardwareInfo::GetOSVersion(OperatingSystem&, int&, int&) const
    void HardwareInfo::GetOSVersion(OperatingSystem* param_1, int* param_2, int* param_3) {
        if (field_276 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert(
                "m_initComplete",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/hardware/HardwareInfo.h",
                107, (char*)0);
        }
        *(undefined4*)param_1 = field_160;
        *param_2 = field_164;
        *param_3 = field_168;
    }

    // 0x1001a48c0, 16 bytes, complete-object destructor, inline, placed by class name
    // HardwareInfo::~HardwareInfo(): jumps straight to the base-object destructor

    // 0x1001a48d0, 96 bytes, base-object destructor, inline, placed by class name
    // HardwareInfo::~HardwareInfo()
    void HardwareInfo::~HardwareInfo() {
        (&field_224)->~basic_string();
        (&field_192)->~basic_string();
        (&field_128)->~basic_string();
        (&field_96)->~basic_string();
        (&field_32)->~basic_string();
        ~basic_string();
        ~AutoSingleton();
    }

    // 0x1001cd990: the linker folded this into graphics::PointLightIndicesEffect::GetVisiblePointLights(), which has identical code
    HardwareInfo::GetClientType() const;

    // 0x1003f65a0: the linker folded this into EntityRoute::GetStalledTickCount() const, which has identical code
    uint HardwareInfo::GetNumLogicalProcessors() const;

    // 0x100429b10: the linker folded this into game::StaticPointLight::GetRGB() const, which has identical code
    int HardwareInfo::GetNumPhyscicalProcessors() const;

    // 0x100443d40: the linker folded this into game::Entity::GetBoundingCapsule() const, which has identical code
    HardwareInfo::GetCPUFeatureFlags() const;

    // 0x1004abeb0: the linker folded this into game::EnvironmentOverride::GetBloomOverrides() const, which has identical code
    HardwareInfo::GetDeviceFullName() const;

    // 0x1006e4cf0, 64 bytes, inline, placed by class name
    // HardwareInfo::GetLegacyOSVersion() const
    uint HardwareInfo::GetLegacyOSVersion() {
        if (field_276 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert(
                "m_initComplete",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/hardware/HardwareInfo.h",
                121, (char*)0);
        }
        return m_legacyOSVersion;
    }

    // 0x1006e4d30, 16 bytes, inline, placed by class name
    // HardwareInfo::GetGPUDriverDate() const
    undefined8 HardwareInfo::GetGPUDriverDate() {
        return m_gPUDriverDate;
    }

    // 0x1008f3e90, 64 bytes, inline, placed by class name
    // HardwareInfo::GetDPI() const
    undefined4 HardwareInfo::GetDPI() {
        if (field_276 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert(
                "m_initComplete",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/hardware/HardwareInfo.h",
                160, (char*)0);
        }
        return m_dPI;
    }

    // 0x1008f3ed0, 80 bytes, inline, placed by class name
    // HardwareInfo::GetPhysicalScreenSize() const
    HardwareInfo* HardwareInfo::GetPhysicalScreenSize() {
        long in_RSI;

        if (*(char*)(in_RSI + 276) == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert(
                "m_initComplete",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/hardware/HardwareInfo.h",
                162, (char*)0);
        }
        new (this) math::Point<float>((Point*)(in_RSI + 268));
        return this;
    }

    // 0x100930be0: the linker folded this into graphics::LightProbeRenderer::GetProbeEnvMapRes() const, which has identical code
    HardwareInfo::GetGpuMemoryMB() const;

} // namespace jag::hardware

namespace jag {
    // 0x1001472f0, 192 bytes, inline, placed by debug map only (low confidence)
    // PacketT<Array<unsigned char, BucketAllocatorEASTL> >::p4_alt3(int)
    void PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p4_alt3(
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>* this, int param_1) {
        long lVar1;
        ulong uVar2;
        undefined1* puVar3;

        lVar1 = *(long*)(this + 24);
        uVar2 = end();
        if (uVar2 < lVar1 + 4U) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_pos + 4 <= m_data.size()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/bytepacking/Packet.inl",
                      793, (char*)0);
        }
        uVar2 = *(ulong*)(this + 24);
        *(ulong*)(this + 24) = uVar2 + 1;
        puVar3 = (undefined1*)Array<unsigned char, BucketAllocatorEASTL>::operator[](
            (Array<unsigned char, BucketAllocatorEASTL>*)this, uVar2);
        *puVar3 = (char)((uint)param_1 >> 16);
        uVar2 = *(ulong*)(this + 24);
        *(ulong*)(this + 24) = uVar2 + 1;
        puVar3 = (undefined1*)Array<unsigned char, BucketAllocatorEASTL>::operator[](
            (Array<unsigned char, BucketAllocatorEASTL>*)this, uVar2);
        *puVar3 = (char)((uint)param_1 >> 24);
        uVar2 = *(ulong*)(this + 24);
        *(ulong*)(this + 24) = uVar2 + 1;
        puVar3 = (undefined1*)Array<unsigned char, BucketAllocatorEASTL>::operator[](
            (Array<unsigned char, BucketAllocatorEASTL>*)this, uVar2);
        *puVar3 = (char)param_1;
        uVar2 = *(ulong*)(this + 24);
        *(ulong*)(this + 24) = uVar2 + 1;
        puVar3 = (undefined1*)Array<unsigned char, BucketAllocatorEASTL>::operator[](
            (Array<unsigned char, BucketAllocatorEASTL>*)this, uVar2);
        *puVar3 = (char)((uint)param_1 >> 8);
    }

    // 0x100147430, 48 bytes, inline, placed by debug map only (low confidence)
    // oldscape::midi2::MidiRequest* placement_new<oldscape::midi2::MidiRequest, oldscape::jagex3::Js5*, int&, int, int, bool>(void*, oldscape::jagex3::Js5*&&, int&, int&&, int&&, bool&&)
    /* oldscape::midi2::MidiRequest* placement_new<oldscape::midi2::MidiRequest,
   oldscape::jagex3::Js5*, int const&, int, int, bool>(void*, oldscape::jagex3::Js5*&&,
   int const&, int&&, int&&, bool&&) */

    MidiRequest* jag::placement_new<oldscape::midi2::MidiRequest, oldscape::jagex3::Js5*, int const&, int, int, bool>(
        void* param_1, Js5** param_2, int* param_3, int* param_4, int* param_5, bool* param_6) {
        oldscape::midi2::MidiRequest::MidiRequest(param_1, *param_2, *param_3, *param_4, *param_5, *param_6);
        return param_1;
    }

    // 0x100147460, 32 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::midi2::MidiRequest>* placement_new<ref_counter_shared<oldscape::midi2::MidiRequest>, int, oldscape::midi2::MidiRequest*&>(void*, int&&, oldscape::midi2::MidiRequest*&)
    ref_counter_shared*
    jag::placement_new<ref_counter_shared<oldscape::midi2::MidiRequest>, int, oldscape::midi2::MidiRequest*&>(
        void* param_1, int* param_2, MidiRequest** param_3) {
        ref_counter_shared<oldscape::midi2::MidiRequest>::ref_counter_shared(param_1, (long)*param_2, *param_3);
        return param_1;
    }

} // namespace jag
