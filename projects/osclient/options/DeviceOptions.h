// projects/osclient/options/DeviceOptions.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::oldscape::option {
    class DeviceOptions {
    public:
        // virtual methods in vtable order
        virtual ~DeviceOptions();
        virtual void MainLogic();
        virtual void OnOptionValueChanged(IOption*);
        virtual void ValidateOptionLoaded(IOption const*);
        DeviceOptions();
        DeviceOptions(bool);
        InitFromFile(File&);
        InitFromLegacyFormat(PacketJ<Array<unsigned char, eastl::allocator>>&&);
        SaveToFile();
        void BindHandlers();
        void IsStartupOption(eastl::string const&);
        void GetScriptOption(DeviceOptionScriptID);
        GetAntialiasingSampleLevel() const;
        void SetAntialiasingSampleLevel(int);
        void SetDisplayFps(bool);
        void SetHapticFeedbackStrength(hal::Haptics::ImpactStrength);
        void ToggleDisplayFps();
        void ToggleDisplayBuildInfo();
        GetDisplayBuildInfo() const;
        GetDrawDistance() const;
        float GetGamma() const;
        GetLastWorldId() const;
        GetDefaultWorldId() const;
        void SetLastWorldId(int);
        void SetWindowWidth(int, bool);
        void SetSideBarsWidth(int);
        GetSideBarsWidth() const;
        GetWindowWidth() const;
        GetUIQuality() const;
        void SetUIQuality(ScaledUIQuality);
        GetWindowHeight() const;
        void GetWindowSavedPosition() const;
        GetWindowTopmost() const;
        GetWindowMode() const;
        void SetWindowHeight(int, bool);
        float GetMasterVolume() const;
        GetHapticFeedbackStrength() const;
        void SetScreenshotPath(eastl::fixed_string<char, 256, true, eastl::allocator> const&);
        void SetDrawDistance(int);
        void SetWindowSavedPosition(WindowSavedPosition&&);
        GetTermsAndPrivacyVersion() const;
        void SetTermsAndPrivacyVersion(int);
        GetDisplayFps() const;
        void SetBrightness(int);
        void SetCachedUserName(eastl::fixed_string<char, 256, true, eastl::allocator> const&);
        GetMuteTitleScreen() const;
        GetTitleVolume() const;
        void ToggleFullscreen();
        GetFullscreen() const;
        void ToggleHideUserName();
        GetHideUserName() const;
        GetCachedUserName() const;
        void ToggleMuteTitleScreen();
        void SetTitleVolume(int);
        void SetDefaultWorldId(int);
        GetBrightness() const;
        void SetFpsLimit(int);
        void SetHideUserName(bool);
        void SetMuteTitleScreen(bool);
        bool IsSettingExposed(DeviceOptionScriptID);
        void SetWindowMode(ClientWindowMode);
        void SetWindowTopmost(bool);
        GetScreenshotPath() const;

        // data members, from how the methods use this: 5112 bytes
        undefined** field_0; // offset 0, vtable pointer
        char _unknown_8[384];
        undefined1 field_392; // offset 392
        char field_393;       // offset 393
        char _unknown_394[6];
        undefined1 field_400; // offset 400
        char _unknown_401[4711];
    };

    // 0x100023300, 128 bytes, inline, placed by class name
    // DeviceOptions::IsStartupOption(eastl::string const&)
    void DeviceOptions::IsStartupOption(basic_string* param_1) {
        undefined8 uVar1;
        undefined8 uVar2;
        undefined8 extraout_RDX;
        undefined8 extraout_RDX_00;
        undefined8 extraout_RDX_01;
        hashtable_iterator_base* extraout_RDX_02;
        undefined8 local_48;
        undefined8 local_40;
        undefined8 local_38;
        hashtable_iterator_base* local_30;

        uVar1 = eastl::hashtable<eastl::string, eastl::string, eastl::allocator, eastl::use_self<eastl::string>,
                                 eastl::equal_to<eastl::string>, eastl::hash<eastl::string>, eastl::mod_range_hashing,
                                 eastl::default_ranged_hash, eastl::prime_rehash_policy, false, false, true>::cbegin();
        uVar2 = (&field_400)->end();
        local_48 = eastl::find<eastl::hashtable_iterator<eastl::string, true, false>, eastl::string>(
            uVar1, extraout_RDX, uVar2, extraout_RDX_00, param_1);
        local_40 = extraout_RDX_01;
        local_38 = (&field_400)->end();
        local_30 = extraout_RDX_02;
        eastl::operator!=((eastl*)&local_48, (hashtable_iterator_base*)&local_38, extraout_RDX_02);
    }

    // 0x100029f00, 16 bytes, complete-object destructor, inline, placed by class name
    // DeviceOptions::~DeviceOptions(): jumps straight to the base-object destructor

    // 0x100029f10, 32 bytes, deleting destructor, inline, placed by class name
    // DeviceOptions::~DeviceOptions()
    void DeviceOptions::~DeviceOptions() {
        ~DeviceOptions(this);
        operator_delete(this);
    }

    // 0x100029f30, 192 bytes, inline, placed by class name
    // DeviceOptions::ValidateOptionLoaded(IOption const*)
    void DeviceOptions::ValidateOptionLoaded(IOption* param_1) {
        char cVar1;
        char cVar2;
        char* pcVar3;
        eastl::string local_58[32];
        allocator local_38[8];

        cVar1 = field_393;
        if (cVar1 == '\0') {
            cVar2 = '\x01';
        } else {
            pcVar3 = (char*)param_1->data();
            eastl::allocator::allocator(local_38, "EASTL basic_string");
            eastl::string::basic_string(local_58, pcVar3, local_38);
            cVar2 = IsStartupOption(this, (basic_string*)local_58);
            if (cVar1 != '\0') {
                eastl::string::~basic_string(local_58);
            }
        }
        if (cVar2 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("!m_isStartup || IsStartupOption(pOption->GetName())",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/highlighting/"
                      "../options/DeviceOptions.h",
                      216, (char*)0);
        }
    }

    // 0x10002f350, 528 bytes, base-object destructor, inline, placed by class name
    // DeviceOptions::~DeviceOptions()
    void DeviceOptions::~DeviceOptions() {
        pair* in_RSI;

        field_0 = &PTR__DeviceOptions_100ef0e20;
        this[1].field_456.~ScriptOption(in_RSI);
        this[1].field_432.~ScriptOption(in_RSI);
        this[1].field_408.~ScriptOption(in_RSI);
        this[1].field_384.~ScriptOption(in_RSI);
        this[1].field_360.~ScriptOption(in_RSI);
        this[1].field_336.~ScriptOption(in_RSI);
        this[1].field_312.~ScriptOption(in_RSI);
        this[1].field_288.~ScriptOption(in_RSI);
        this[1].field_264.~ScriptOption(in_RSI);
        this[1].field_240.~ScriptOption(in_RSI);
        this[1].field_216.~ScriptOption(in_RSI);
        this[1].field_192.~ScriptOption(in_RSI);
        this[1].field_168.~ScriptOption(in_RSI);
        this[1].field_144.~ScriptOption(in_RSI);
        this[1].field_120.~ScriptOption(in_RSI);
        (&field_5104)->~RangeOption();
        (&field_4976)->~Option();
        (&field_4848)->~RangeOption();
        (&field_4720)->~RangeOption();
        (&field_4608)->~Option();
        (&field_4480)->~RangeOption();
        (&field_4368)->~Option();
        (&field_4240)->~RangeOption();
        (&field_4048)->~Option();
        (&field_3920)->~RangeOption();
        (&field_3808)->~Option();
        (&field_3680)->~RangeOption();
        (&field_3552)->~RangeOption();
        (&field_3424)->~RangeOption();
        (&field_3296)->~RangeOption();
        (&field_2304)->~Option();
        (&field_1312)->~Option();
        (&field_1184)->~RangeOption();
        (&field_1056)->~RangeOption();
        (&field_944)->~Option();
        (&field_832)->~Option();
        (&field_704)->~Option();
        (&field_576)->~Option();
        (&field_464)->~Option();
        (&field_400)->~hash_set();
        (&field_88)->~pair();
        ~OptionStore();
    }

    // 0x100062650, 32 bytes, inline, placed by class name and debug map
    // DeviceOptions::GetAntialiasingSampleLevel() const
    undefined4 DeviceOptions::GetAntialiasingSampleLevel() {
        undefined4* puVar1;

        puVar1 = (undefined4*)(&field_4848)->GetValue();
        return *puVar1;
    }

    // 0x1000629d0, 32 bytes, inline, placed by class name and debug map
    // DeviceOptions::SetAntialiasingSampleLevel(int)
    void DeviceOptions::SetAntialiasingSampleLevel(int param_1) {
        (&field_4848, param_1, true)->SetValue();
    }

    // 0x100086eb0, 32 bytes, inline, placed by class name
    // DeviceOptions::SetDisplayFps(bool)
    void DeviceOptions::SetDisplayFps(bool param_1) {
        (&field_944, param_1, true)->SetValue();
    }

    // 0x10008ca20, 32 bytes, inline, placed by class name
    // DeviceOptions::SetHapticFeedbackStrength(hal::Haptics::ImpactStrength)
    void DeviceOptions::SetHapticFeedbackStrength(int param_2) {
        (&field_4976, param_2, true)->SetValue();
    }

    // 0x1000a4e50, 64 bytes, inline, placed by class name
    // DeviceOptions::ToggleDisplayFps()
    void DeviceOptions::ToggleDisplayFps() {
        char* pcVar1;

        pcVar1 = (char*)(&field_944)->GetValue();
        (&field_944, *pcVar1 == '\0', true)->SetValue();
    }

    // 0x1000a6b90, 64 bytes, inline, placed by class name
    // DeviceOptions::ToggleDisplayBuildInfo()
    void DeviceOptions::ToggleDisplayBuildInfo() {
        char* pcVar1;

        pcVar1 = (char*)(&field_4368)->GetValue();
        (&field_4368, *pcVar1 == '\0', true)->SetValue();
    }

    // 0x1000d6f10, 32 bytes, inline, placed by class name and debug map
    // DeviceOptions::GetDisplayBuildInfo() const
    undefined1 DeviceOptions::GetDisplayBuildInfo() {
        undefined1* puVar1;

        puVar1 = (undefined1*)(&field_4368)->GetValue();
        return *puVar1;
    }

    // 0x1000d9890, 32 bytes, inline, placed by class name and debug map
    // DeviceOptions::GetDrawDistance() const
    undefined4 DeviceOptions::GetDrawDistance() {
        undefined4* puVar1;

        puVar1 = (undefined4*)(&field_3920)->GetValue();
        return *puVar1;
    }

    // 0x1000da840, 80 bytes, inline, placed by class name
    // DeviceOptions::GetGamma() const
    float DeviceOptions::GetGamma() {
        int iVar1;
        int iVar2;
        long lVar3;

        iVar1 = GetBrightness(this);
        lVar3 = Client::Instance();
        iVar2 = iVar1 + 10;
        if (*(char*)(lVar3 + 8425) == '\0') {
            iVar2 = iVar1;
        }
        return (float)(100 - iVar2) * 0.005 + 0.5;
    }

    // 0x1000dac80, 32 bytes, inline, placed by class name
    // DeviceOptions::GetLastWorldId() const
    undefined4 DeviceOptions::GetLastWorldId() {
        undefined4* puVar1;

        puVar1 = (undefined4*)(&field_3296)->GetValue();
        return *puVar1;
    }

    // 0x1000daf90, 32 bytes, inline, placed by class name
    // DeviceOptions::GetDefaultWorldId() const
    undefined4 DeviceOptions::GetDefaultWorldId() {
        undefined4* puVar1;

        puVar1 = (undefined4*)(&field_3424)->GetValue();
        return *puVar1;
    }

    // 0x1000dbb70, 32 bytes, inline, placed by class name
    // DeviceOptions::SetLastWorldId(int)
    void DeviceOptions::SetLastWorldId(int param_1) {
        (&field_3296, param_1, true)->SetValue();
    }

    // 0x1000dc990, 32 bytes, inline, placed by class name
    // DeviceOptions::SetWindowWidth(int, bool)
    void DeviceOptions::SetWindowWidth(int param_1, bool param_2) {
        (&field_3552, param_1, param_2)->SetValue();
    }

    // 0x1000dc9b0, 32 bytes, inline, placed by class name
    // DeviceOptions::SetSideBarsWidth(int)
    void DeviceOptions::SetSideBarsWidth(int param_1) {
        (&field_4480, param_1, true)->SetValue();
    }

    // 0x1000dcd90, 32 bytes, inline, placed by class name
    // DeviceOptions::GetSideBarsWidth() const
    undefined4 DeviceOptions::GetSideBarsWidth() {
        undefined4* puVar1;

        puVar1 = (undefined4*)(&field_4480)->GetValue();
        return *puVar1;
    }

    // 0x1000dcdb0, 32 bytes, inline, placed by class name
    // DeviceOptions::GetWindowWidth() const
    undefined4 DeviceOptions::GetWindowWidth() {
        undefined4* puVar1;

        puVar1 = (undefined4*)(&field_3552)->GetValue();
        return *puVar1;
    }

    // 0x1000dfbf0, 32 bytes, inline, placed by class name
    // DeviceOptions::GetUIQuality() const
    undefined4 DeviceOptions::GetUIQuality() {
        undefined4* puVar1;

        puVar1 = (undefined4*)(&field_704)->GetValue();
        return *puVar1;
    }

    // 0x1000dfc10, 32 bytes, inline, placed by class name
    // DeviceOptions::SetUIQuality(ScaledUIQuality)
    void DeviceOptions::SetUIQuality(int param_2) {
        (&field_704, param_2, true)->SetValue();
    }

    // 0x1000dfd40, 32 bytes, inline, placed by class name
    // DeviceOptions::GetWindowHeight() const
    undefined4 DeviceOptions::GetWindowHeight() {
        undefined4* puVar1;

        puVar1 = (undefined4*)(&field_3680)->GetValue();
        return *puVar1;
    }

    // 0x1000e2d80, 32 bytes, inline, placed by class name
    // DeviceOptions::GetWindowSavedPosition() const
    void DeviceOptions::GetWindowSavedPosition() {
        (&field_4048)->GetValue();
    }

    // 0x1000e3900, 32 bytes, inline, placed by class name
    // DeviceOptions::GetWindowTopmost() const
    undefined1 DeviceOptions::GetWindowTopmost() {
        undefined1* puVar1;

        puVar1 = (undefined1*)(&field_3808)->GetValue();
        return *puVar1;
    }

    // 0x1000e3920, 32 bytes, inline, placed by class name
    // DeviceOptions::GetWindowMode() const
    undefined4 DeviceOptions::GetWindowMode() {
        undefined4* puVar1;

        puVar1 = (undefined4*)(&field_576)->GetValue();
        return *puVar1;
    }

    // 0x1000e3cc0, 32 bytes, inline, placed by class name
    // DeviceOptions::SetWindowHeight(int, bool)
    void DeviceOptions::SetWindowHeight(int param_1, bool param_2) {
        (&field_3680, param_1, param_2)->SetValue();
    }

    // 0x1000e7a50, 32 bytes, inline, placed by class name
    // DeviceOptions::GetMasterVolume() const
    float DeviceOptions::GetMasterVolume() {
        int* piVar1;

        piVar1 = (int*)(&field_5104)->GetValue();
        return (float)*piVar1 * 0.01;
    }

    // 0x1000e82c0, 32 bytes, inline, placed by class name
    // DeviceOptions::GetHapticFeedbackStrength() const
    undefined4 DeviceOptions::GetHapticFeedbackStrength() {
        undefined4* puVar1;

        puVar1 = (undefined4*)(&field_4976)->GetValue();
        return *puVar1;
    }

    // 0x1000f3550, 144 bytes, inline, placed by class name
    // DeviceOptions::SetScreenshotPath(eastl::fixed_string<char, 256, true, eastl::allocator> const&)
    void DeviceOptions::SetScreenshotPath(fixed_string* param_1) {
        fixed_string<char, 256, true, eastl::allocator> local_148[296];
        undefined8 local_20;

        local_20 = *(undefined8*)PTR____stack_chk_guard_100ee9d98;
        eastl::fixed_string<char, 256, true, eastl::allocator>::fixed_string(local_148, param_1);
        (&field_1312, local_148, 1)->SetValue();
        /* WARNING: Subroutine does not return */
        local_148->~fixed_string();
    }

    // 0x1000fc900, 32 bytes, inline, placed by class name
    // DeviceOptions::SetDrawDistance(int)
    void DeviceOptions::SetDrawDistance(int param_1) {
        (&field_3920, param_1, true)->SetValue();
    }

    // 0x1000fcff0, 96 bytes, inline, placed by class name
    // DeviceOptions::SetWindowSavedPosition(WindowSavedPosition&&)
    void DeviceOptions::SetWindowSavedPosition(WindowSavedPosition* param_1) {
        WindowSavedPosition aWStackY_1038[128];
        WindowSavedPosition in_stack_ffffffffffffffc8;

        WindowSavedPosition::WindowSavedPosition(aWStackY_1038 + 128, (PacketT*)param_1);
        (&field_4048, in_stack_ffffffffffffffc8, (longlong)(aWStackY_1038 + 128), true)->SetValueDeferred();
        (aWStackY_1038 + 128)->~WindowSavedPosition();
    }

    // 0x1000fd050, 32 bytes, inline, placed by class name
    // DeviceOptions::GetTermsAndPrivacyVersion() const
    undefined4 DeviceOptions::GetTermsAndPrivacyVersion() {
        undefined4* puVar1;

        puVar1 = (undefined4*)(&field_4240)->GetValue();
        return *puVar1;
    }

    // 0x1000fd0c0, 32 bytes, inline, placed by class name
    // DeviceOptions::SetTermsAndPrivacyVersion(int)
    void DeviceOptions::SetTermsAndPrivacyVersion(int param_1) {
        (&field_4240, param_1, true)->SetValue();
    }

    // 0x1001016c0, 32 bytes, inline, placed by class name
    // DeviceOptions::GetDisplayFps() const
    undefined1 DeviceOptions::GetDisplayFps() {
        undefined1* puVar1;

        puVar1 = (undefined1*)(&field_944)->GetValue();
        return *puVar1;
    }

    // 0x10010c900, 32 bytes, inline, placed by class name
    // DeviceOptions::SetBrightness(int)
    void DeviceOptions::SetBrightness(int param_1) {
        (&field_1184, param_1, true)->SetValue();
    }

    // 0x1001117f0, 144 bytes, inline, placed by class name
    // DeviceOptions::SetCachedUserName(eastl::fixed_string<char, 256, true, eastl::allocator> const&)
    void DeviceOptions::SetCachedUserName(fixed_string* param_1) {
        fixed_string<char, 256, true, eastl::allocator> local_148[296];
        undefined8 local_20;

        local_20 = *(undefined8*)PTR____stack_chk_guard_100ee9d98;
        eastl::fixed_string<char, 256, true, eastl::allocator>::fixed_string(local_148, param_1);
        (&field_2304, local_148, 1)->SetValue();
        /* WARNING: Subroutine does not return */
        local_148->~fixed_string();
    }

    // 0x10011f820, 32 bytes, inline, placed by class name
    // DeviceOptions::GetMuteTitleScreen() const
    undefined1 DeviceOptions::GetMuteTitleScreen() {
        undefined1* puVar1;

        puVar1 = (undefined1*)(&field_832)->GetValue();
        return *puVar1;
    }

    // 0x10011f840, 32 bytes, inline, placed by class name
    // DeviceOptions::GetTitleVolume() const
    undefined4 DeviceOptions::GetTitleVolume() {
        undefined4* puVar1;

        puVar1 = (undefined4*)(&field_4720)->GetValue();
        return *puVar1;
    }

    // 0x1001203e0, 64 bytes, inline, placed by class name
    // DeviceOptions::ToggleFullscreen()
    void DeviceOptions::ToggleFullscreen() {
        char* pcVar1;

        pcVar1 = (char*)(&field_4608)->GetValue();
        (&field_4608, *pcVar1 == '\0', true)->SetValue();
    }

    // 0x100120770, 32 bytes, inline, placed by class name
    // DeviceOptions::GetFullscreen() const
    undefined1 DeviceOptions::GetFullscreen() {
        undefined1* puVar1;

        puVar1 = (undefined1*)(&field_4608)->GetValue();
        return *puVar1;
    }

    // 0x100121110, 64 bytes, inline, placed by class name
    // DeviceOptions::ToggleHideUserName()
    void DeviceOptions::ToggleHideUserName() {
        char* pcVar1;

        pcVar1 = (char*)(&field_464)->GetValue();
        (&field_464, *pcVar1 == '\0', true)->SetValue();
    }

    // 0x100121150, 32 bytes, inline, placed by class name
    // DeviceOptions::GetHideUserName() const
    undefined1 DeviceOptions::GetHideUserName() {
        undefined1* puVar1;

        puVar1 = (undefined1*)(&field_464)->GetValue();
        return *puVar1;
    }

    // 0x100123520, 48 bytes, inline, placed by class name
    // DeviceOptions::GetCachedUserName() const
    DeviceOptions* DeviceOptions::GetCachedUserName() {
        fixed_string* pfVar1;
        long in_RSI;

        pfVar1 = (fixed_string*)((in_RSI + 2304))->GetValue();
        new (this) eastl::fixed_string<char, 256, true, eastl::allocator>(pfVar1);
        return this;
    }

    // 0x100123b40, 64 bytes, inline, placed by class name
    // DeviceOptions::ToggleMuteTitleScreen()
    void DeviceOptions::ToggleMuteTitleScreen() {
        char* pcVar1;

        pcVar1 = (char*)(&field_832)->GetValue();
        (&field_832, *pcVar1 == '\0', true)->SetValue();
    }

    // 0x100123b80, 32 bytes, inline, placed by class name
    // DeviceOptions::SetTitleVolume(int)
    void DeviceOptions::SetTitleVolume(int param_1) {
        (&field_4720, param_1, true)->SetValue();
    }

    // 0x100123ba0, 32 bytes, inline, placed by class name
    // DeviceOptions::SetDefaultWorldId(int)
    void DeviceOptions::SetDefaultWorldId(int param_1) {
        (&field_3424, param_1, true)->SetValue();
    }

    // 0x10012b0e0, 32 bytes, inline, placed by class name
    // DeviceOptions::GetBrightness() const
    undefined4 DeviceOptions::GetBrightness() {
        undefined4* puVar1;

        puVar1 = (undefined4*)(&field_1184)->GetValue();
        return *puVar1;
    }

    // 0x10015dbd0, 32 bytes, inline, placed by class name
    // DeviceOptions::SetFpsLimit(int)
    void DeviceOptions::SetFpsLimit(int param_1) {
        (&field_1056, param_1, true)->SetValue();
    }

    // 0x10015dbf0, 32 bytes, inline, placed by class name
    // DeviceOptions::SetHideUserName(bool)
    void DeviceOptions::SetHideUserName(bool param_1) {
        (&field_464, param_1, true)->SetValue();
    }

    // 0x10015dc10, 32 bytes, inline, placed by class name
    // DeviceOptions::SetMuteTitleScreen(bool)
    void DeviceOptions::SetMuteTitleScreen(bool param_1) {
        (&field_832, param_1, true)->SetValue();
    }

    // 0x10015e600, 32 bytes, inline, placed by class name
    // DeviceOptions::IsSettingExposed(DeviceOptionScriptID)
    bool DeviceOptions::IsSettingExposed() {
        return GetScriptOption() != 0;
    }

    // 0x1001683a0, 32 bytes, inline, placed by class name
    // DeviceOptions::SetWindowMode(ClientWindowMode)
    void DeviceOptions::SetWindowMode(int param_2) {
        (&field_576, param_2, true)->SetValue();
    }

    // 0x1001683d0, 32 bytes, inline, placed by class name
    // DeviceOptions::SetWindowTopmost(bool)
    void DeviceOptions::SetWindowTopmost(bool param_1) {
        (&field_3808, param_1, true)->SetValue();
    }

    // 0x1001683f0, 48 bytes, inline, placed by class name
    // DeviceOptions::GetScreenshotPath() const
    DeviceOptions* DeviceOptions::GetScreenshotPath() {
        fixed_string* pfVar1;
        long in_RSI;

        pfVar1 = (fixed_string*)((in_RSI + 1312))->GetValue();
        new (this) eastl::fixed_string<char, 256, true, eastl::allocator>(pfVar1);
        return this;
    }

} // namespace jag::oldscape::option

namespace jag {
    // 0x1000d9d00, 144 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<oldscape::sound::Mixer>::type make_shared<oldscape::sound::Mixer>()
    jag* make_shared<oldscape::sound::Mixer>() {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_2c;
        Mixer* local_28[2];

        pvVar1 = (void*)aligned_alloc(184, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_28[0] = placement_new<oldscape::sound::Mixer>((void*)((long)pvVar1 + 32));
            local_2c = 1;
            prVar2 = placement_new<ref_counter_shared<oldscape::sound::Mixer>, int, oldscape::sound::Mixer*&>(
                pvVar1, &local_2c, local_28);
            prVar2->~AutoSingleton(local_28[0]);
            prVar2->~AutoSingleton(local_28[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_28[0]);
        }
        return this;
    }

    // 0x1000d9de0, 144 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<oldscape::midi2::MidiPlayer>::type make_shared<oldscape::midi2::MidiPlayer>()
    jag* make_shared<oldscape::midi2::MidiPlayer>() {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_2c;
        MidiPlayer* local_28[2];

        pvVar1 = (void*)aligned_alloc(67312, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_28[0] = placement_new<oldscape::midi2::MidiPlayer>((void*)((long)pvVar1 + 32));
            local_2c = 1;
            prVar2 = placement_new<ref_counter_shared<oldscape::midi2::MidiPlayer>, int, oldscape::midi2::MidiPlayer*&>(
                pvVar1, &local_2c, local_28);
            prVar2->~AutoSingleton(local_28[0]);
            prVar2->~AutoSingleton(local_28[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_28[0]);
        }
        return this;
    }

    // 0x1000d9ec0, 176 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<oldscape::sound::Decimator>::type make_shared<oldscape::sound::Decimator, int, int&>(int&&, int&)
    jag* make_shared<oldscape::sound::Decimator, int, int&>(int* param_1, int* param_2) {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_3c;
        Decimator* local_38[2];

        pvVar1 = (void*)aligned_alloc(64, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_38[0] =
                placement_new<oldscape::sound::Decimator, int, int&>((void*)((long)pvVar1 + 32), param_1, param_2);
            local_3c = 1;
            prVar2 = placement_new<ref_counter_shared<oldscape::sound::Decimator>, int, oldscape::sound::Decimator*&>(
                pvVar1, &local_3c, local_38);
            prVar2->~AutoSingleton(local_38[0]);
            prVar2->~AutoSingleton(local_38[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_38[0]);
        }
        return this;
    }

    // 0x1000da360, 192 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<oldscape::configdecoder::OldscapeVarTypeList>::type make_shared<oldscape::configdecoder::OldscapeVarTypeList, ModeGame const*&, game::Js5ConfigGroup const*&, Language const*&, Js5ResourceProvider&, oldscape::jagex3::Js5*&>(ModeGame const*&, game::Js5ConfigGroup const*&, Language const*&, Js5ResourceProvider&, oldscape::jagex3::Js5*&)
    jag* jag::make_shared<oldscape::configdecoder::OldscapeVarTypeList, ModeGame_const*&, game::Js5ConfigGroup_const*&,
                          Language_const*&, Js5ResourceProvider&, oldscape::jagex3::Js5*&>(
        ModeGame** param_1, Js5ConfigGroup** param_2, Language** param_3, Js5ResourceProvider* param_4, Js5** param_5) {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_44;
        OldscapeVarTypeList* local_40[2];

        pvVar1 = (void*)aligned_alloc(160, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_40[0] = placement_new<oldscape::configdecoder::OldscapeVarTypeList, ModeGame_const*&,
                                        game::Js5ConfigGroup_const*&, Language_const*&, Js5ResourceProvider&,
                                        oldscape::jagex3::Js5*&>((void*)((long)pvVar1 + 32), param_1, param_2, param_3,
                                                                 param_4, param_5);
            local_44 = 1;
            prVar2 = placement_new<ref_counter_shared<oldscape::configdecoder::OldscapeVarTypeList>, int,
                                   oldscape::configdecoder::OldscapeVarTypeList*&>(pvVar1, &local_44, local_40);
            prVar2->~AutoSingleton(local_40[0]);
            prVar2->~AutoSingleton(local_40[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_40[0]);
        }
        return this;
    }

    // 0x1000da500, 160 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<Array<oldscape::graphics::Pix8, eastl::allocator> >::type make_shared<Array<oldscape::graphics::Pix8, eastl::allocator>, Array<oldscape::graphics::Pix8, eastl::allocator> >(Array<oldscape::graphics::Pix8, eastl::allocator>&&)
    jag* jag::make_shared<Array<oldscape::graphics::Pix8, eastl::allocator>,
                          Array<oldscape::graphics::Pix8, eastl::allocator>>(Array* param_1) {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_34;
        Array* local_30[2];

        pvVar1 = (void*)aligned_alloc(56, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_30[0] =
                placement_new<Array<oldscape::graphics::Pix8, eastl::allocator>,
                              Array<oldscape::graphics::Pix8, eastl::allocator>>((void*)((long)pvVar1 + 32), param_1);
            local_34 = 1;
            prVar2 = placement_new<ref_counter_shared<Array<oldscape::graphics::Pix8, eastl::allocator>>, int,
                                   Array<oldscape::graphics::Pix8, eastl::allocator>*&>(pvVar1, &local_34, local_30);
            prVar2->~AutoSingleton(local_30[0]);
            prVar2->~AutoSingleton(local_30[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_30[0]);
        }
        return this;
    }

    // 0x1000da620, 160 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<Array<oldscape::graphics::Pix32, eastl::allocator> >::type make_shared<Array<oldscape::graphics::Pix32, eastl::allocator>, Array<oldscape::graphics::Pix32, eastl::allocator> >(Array<oldscape::graphics::Pix32, eastl::allocator>&&)
    jag* jag::make_shared<Array<oldscape::graphics::Pix32, eastl::allocator>,
                          Array<oldscape::graphics::Pix32, eastl::allocator>>(Array* param_1) {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_34;
        Array* local_30[2];

        pvVar1 = (void*)aligned_alloc(56, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_30[0] =
                placement_new<Array<oldscape::graphics::Pix32, eastl::allocator>,
                              Array<oldscape::graphics::Pix32, eastl::allocator>>((void*)((long)pvVar1 + 32), param_1);
            local_34 = 1;
            prVar2 = placement_new<ref_counter_shared<Array<oldscape::graphics::Pix32, eastl::allocator>>, int,
                                   Array<oldscape::graphics::Pix32, eastl::allocator>*&>(pvVar1, &local_34, local_30);
            prVar2->~AutoSingleton(local_30[0]);
            prVar2->~AutoSingleton(local_30[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_30[0]);
        }
        return this;
    }

} // namespace jag
