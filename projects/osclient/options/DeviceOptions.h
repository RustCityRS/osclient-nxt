// projects/osclient/options/DeviceOptions.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::oldscape::option {
    class DeviceOptions {
    public:
        // virtual methods in vtable order
        virtual ~DeviceOptions();
        virtual void MainLogic();
        virtual void OnOptionValueChanged(IOption* iOption);
        virtual void ValidateOptionLoaded(const IOption* iOption);
        DeviceOptions();
        DeviceOptions(bool arg1);
        uint64_t InitFromFile(File& file);
        uint32_t InitFromLegacyFormat(PacketJ<Array<unsigned char>>&& packetJ);
        uint64_t SaveToFile();
        void BindHandlers();
        void IsStartupOption(const eastl::string& str);
        long* GetScriptOption(DeviceOptionScriptID deviceOptionScriptID);
        uint32_t GetAntialiasingSampleLevel() const;
        void SetAntialiasingSampleLevel(int arg1);
        void SetDisplayFps(bool arg1);
        void SetHapticFeedbackStrength(hal::Haptics::ImpactStrength impactStrength);
        void ToggleDisplayFps();
        void ToggleDisplayBuildInfo();
        uint8_t GetDisplayBuildInfo() const;
        uint32_t GetDrawDistance() const;
        float GetGamma() const;
        uint32_t GetLastWorldId() const;
        uint32_t GetDefaultWorldId() const;
        void SetLastWorldId(int arg1);
        void SetWindowWidth(int arg1, bool arg2);
        void SetSideBarsWidth(int arg1);
        uint32_t GetSideBarsWidth() const;
        uint32_t GetWindowWidth() const;
        uint32_t GetUIQuality() const;
        void SetUIQuality(ScaledUIQuality scaledUIQuality);
        uint32_t GetWindowHeight() const;
        void GetWindowSavedPosition() const;
        uint8_t GetWindowTopmost() const;
        uint32_t GetWindowMode() const;
        void SetWindowHeight(int arg1, bool arg2);
        float GetMasterVolume() const;
        uint32_t GetHapticFeedbackStrength() const;
        void SetScreenshotPath(const eastl::fixed_string<char, 256>& str);
        void SetDrawDistance(int arg1);
        void SetWindowSavedPosition(WindowSavedPosition&& windowSavedPosition);
        uint32_t GetTermsAndPrivacyVersion() const;
        void SetTermsAndPrivacyVersion(int arg1);
        uint8_t GetDisplayFps() const;
        void SetBrightness(int arg1);
        void SetCachedUserName(const eastl::fixed_string<char, 256>& str);
        uint8_t GetMuteTitleScreen() const;
        uint32_t GetTitleVolume() const;
        void ToggleFullscreen();
        uint8_t GetFullscreen() const;
        void ToggleHideUserName();
        uint8_t GetHideUserName() const;
        auto GetCachedUserName() const;
        void ToggleMuteTitleScreen();
        void SetTitleVolume(int arg1);
        void SetDefaultWorldId(int arg1);
        uint32_t GetBrightness() const;
        void SetFpsLimit(int arg1);
        void SetHideUserName(bool arg1);
        void SetMuteTitleScreen(bool arg1);
        bool IsSettingExposed(DeviceOptionScriptID deviceOptionScriptID);
        void SetWindowMode(ClientWindowMode clientWindowMode);
        void SetWindowTopmost(bool arg1);
        auto GetScreenshotPath() const;

    private:
        uint8_t _unknown_8[40];
        int field_48;
        uint8_t _unknown_52[340];
        uint8_t field_392;
        char field_393;
        uint8_t _unknown_394[4718];
    };

    // 0x100023300
    void DeviceOptions::IsStartupOption(const eastl::string& str) {
        uint8_t auVar1[16];
        eastl local_48;
        obj_iterator local_38;

        uint8_t* this_00 = &field_400;
        auVar1 = this_00->cbegin();
        auto str_00 = this_00->end();
        &local_48 = (eastl[16])eastl::find<eastl::hashtable_iterator<eastl::string, true, false>, eastl::string>(
            auVar1._0_8_, auVar1._8_8_, *str_00);
        &local_38 = (obj_iterator[16])this_00->end();
        local_48 != local_38;
    }

    // 0x100029f30
    void DeviceOptions::ValidateOptionLoaded(const IOption* iOption) {
        char cVar2;
        char* str;
        eastl::string local_58;

        bool cVar1 = field_393;
        if (!cVar1) {
            cVar2 = '\x01';
        } else {
            str = (char*)iOption->data();
            local_58 = eastl::string(str);
            cVar2 = IsStartupOption(local_58);
            if (cVar1) {
            }
        }
        if (!cVar2) {
            LogAssert("!m_isStartup || IsStartupOption(pOption->GetName())",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/highlighting/"
                      "../options/DeviceOptions.h",
                      216, nullptr);
        }
    }

    // 0x10002f350
    DeviceOptions::~DeviceOptions() {
        this[1].field_456.~ScriptOption();
        this[1].field_432.~ScriptOption();
        this[1].field_408.~ScriptOption();
        this[1].field_384.~ScriptOption();
        this[1].field_360.~ScriptOption();
        this[1].field_336.~ScriptOption();
        this[1].field_312.~ScriptOption();
        this[1].field_288.~ScriptOption();
        this[1].field_264.~ScriptOption();
        this[1].field_240.~ScriptOption();
        this[1].field_216.~ScriptOption();
        this[1].field_192.~ScriptOption();
        this[1].field_168.~ScriptOption();
        this[1].field_144.~ScriptOption();
        this[1].field_120.~ScriptOption();
        field_5104.~RangeOption();
        field_4976.~Option();
        field_4848.~RangeOption();
        field_4720.~RangeOption();
        field_4608.~Option();
        field_4480.~RangeOption();
        field_4368.~Option();
        field_4240.~RangeOption();
        field_4048.~Option();
        field_3920.~RangeOption();
        field_3808.~Option();
        field_3680.~RangeOption();
        field_3552.~RangeOption();
        field_3424.~RangeOption();
        field_3296.~RangeOption();
        field_2304.~Option();
        field_1312.~Option();
        field_1184.~RangeOption();
        field_1056.~RangeOption();
        field_944.~Option();
        field_832.~Option();
        field_704.~Option();
        field_576.~Option();
        field_464.~Option();
        field_400.~hash_set();
        field_88.~pair();
    }

    // 0x100062650
    uint32_t DeviceOptions::GetAntialiasingSampleLevel() const {
        auto puVar1 = field_4848.GetValue();
        return *puVar1;
    }

    // 0x1000629d0
    void DeviceOptions::SetAntialiasingSampleLevel(int arg1) {
        field_4848.SetValue(arg1, true);
    }

    // 0x100086eb0
    void DeviceOptions::SetDisplayFps(bool arg1) {
        field_944.SetValue(arg1, true);
    }

    // 0x10008ca20
    void DeviceOptions::SetHapticFeedbackStrength(hal::Haptics::ImpactStrength impactStrength) {
        field_4976.SetValue(impactStrength, true);
    }

    // 0x1000a4e50
    void DeviceOptions::ToggleDisplayFps() {
        auto pcVar1 = field_944.GetValue();
        field_944.SetValue(*pcVar1 == '\0', true);
    }

    // 0x1000a6b90
    void DeviceOptions::ToggleDisplayBuildInfo() {
        auto pcVar1 = field_4368.GetValue();
        field_4368.SetValue(*pcVar1 == '\0', true);
    }

    // 0x1000d6f10
    uint8_t DeviceOptions::GetDisplayBuildInfo() const {
        auto puVar1 = field_4368.GetValue();
        return *puVar1;
    }

    // 0x1000d9890
    uint32_t DeviceOptions::GetDrawDistance() const {
        auto puVar1 = field_3920.GetValue();
        return *puVar1;
    }

    // 0x1000da840
    float DeviceOptions::GetGamma() const {
        int iVar1 = GetBrightness();
        auto pCVar3 = Client::Instance();
        int iVar2 = iVar1 + 10;
        if (pCVar3->field_8425 == false) {
            iVar2 = iVar1;
        }
        return (float)(100 - iVar2) * 0.005 + 0.5;
    }

    // 0x1000dac80
    uint32_t DeviceOptions::GetLastWorldId() const {
        auto puVar1 = field_3296.GetValue();
        return *puVar1;
    }

    // 0x1000daf90
    uint32_t DeviceOptions::GetDefaultWorldId() const {
        auto puVar1 = field_3424.GetValue();
        return *puVar1;
    }

    // 0x1000dbb70
    void DeviceOptions::SetLastWorldId(int arg1) {
        field_3296.SetValue(arg1, true);
    }

    // 0x1000dc990
    void DeviceOptions::SetWindowWidth(int arg1, bool arg2) {
        field_3552.SetValue(arg1, arg2);
    }

    // 0x1000dc9b0
    void DeviceOptions::SetSideBarsWidth(int arg1) {
        field_4480.SetValue(arg1, true);
    }

    // 0x1000dcd90
    uint32_t DeviceOptions::GetSideBarsWidth() const {
        auto puVar1 = field_4480.GetValue();
        return *puVar1;
    }

    // 0x1000dcdb0
    uint32_t DeviceOptions::GetWindowWidth() const {
        auto puVar1 = field_3552.GetValue();
        return *puVar1;
    }

    // 0x1000dfbf0
    uint32_t DeviceOptions::GetUIQuality() const {
        auto puVar1 = field_704.GetValue();
        return *puVar1;
    }

    // 0x1000dfc10
    void DeviceOptions::SetUIQuality(ScaledUIQuality scaledUIQuality) {
        field_704.SetValue(scaledUIQuality, true);
    }

    // 0x1000dfd40
    uint32_t DeviceOptions::GetWindowHeight() const {
        auto puVar1 = field_3680.GetValue();
        return *puVar1;
    }

    // 0x1000e2d80
    void DeviceOptions::GetWindowSavedPosition() const {
        field_4048.GetValue();
    }

    // 0x1000e3900
    uint8_t DeviceOptions::GetWindowTopmost() const {
        auto puVar1 = field_3808.GetValue();
        return *puVar1;
    }

    // 0x1000e3920
    uint32_t DeviceOptions::GetWindowMode() const {
        auto puVar1 = field_576.GetValue();
        return *puVar1;
    }

    // 0x1000e3cc0
    void DeviceOptions::SetWindowHeight(int arg1, bool arg2) {
        field_3680.SetValue(arg1, arg2);
    }

    // 0x1000e7a50
    float DeviceOptions::GetMasterVolume() const {
        auto piVar1 = field_5104.GetValue();
        return (float)*piVar1 * 0.01;
    }

    // 0x1000e82c0
    uint32_t DeviceOptions::GetHapticFeedbackStrength() const {
        auto puVar1 = field_4976.GetValue();
        return *puVar1;
    }

    // 0x1000f3550
    void DeviceOptions::SetScreenshotPath(const eastl::fixed_string<char, 256>& str) {

        fixed_string<char, 256> local_148(str);
        field_1312.SetValue(&local_148, true);
    }

    // 0x1000fc900
    void DeviceOptions::SetDrawDistance(int arg1) {
        field_3920.SetValue(arg1, true);
    }

    // 0x1000fcff0
    void DeviceOptions::SetWindowSavedPosition(WindowSavedPosition&& windowSavedPosition) {

        WindowSavedPosition local_38(windowSavedPosition);
        field_4048.SetValueDeferred(&local_38, 500, true);
    }

    // 0x1000fd050
    uint32_t DeviceOptions::GetTermsAndPrivacyVersion() const {
        auto puVar1 = field_4240.GetValue();
        return *puVar1;
    }

    // 0x1000fd0c0
    void DeviceOptions::SetTermsAndPrivacyVersion(int arg1) {
        field_4240.SetValue(arg1, true);
    }

    // 0x1001016c0
    uint8_t DeviceOptions::GetDisplayFps() const {
        auto puVar1 = field_944.GetValue();
        return *puVar1;
    }

    // 0x10010c900
    void DeviceOptions::SetBrightness(int arg1) {
        field_1184.SetValue(arg1, true);
    }

    // 0x1001117f0
    void DeviceOptions::SetCachedUserName(const eastl::fixed_string<char, 256>& str) {

        fixed_string<char, 256> local_148(str);
        field_2304.SetValue(&local_148, true);
    }

    // 0x10011f820
    uint8_t DeviceOptions::GetMuteTitleScreen() const {
        auto puVar1 = field_832.GetValue();
        return *puVar1;
    }

    // 0x10011f840
    uint32_t DeviceOptions::GetTitleVolume() const {
        auto puVar1 = field_4720.GetValue();
        return *puVar1;
    }

    // 0x1001203e0
    void DeviceOptions::ToggleFullscreen() {
        auto pcVar1 = field_4608.GetValue();
        field_4608.SetValue(*pcVar1 == '\0', true);
    }

    // 0x100120770
    uint8_t DeviceOptions::GetFullscreen() const {
        auto puVar1 = field_4608.GetValue();
        return *puVar1;
    }

    // 0x100121110
    void DeviceOptions::ToggleHideUserName() {
        auto pcVar1 = field_464.GetValue();
        field_464.SetValue(*pcVar1 == '\0', true);
    }

    // 0x100121150
    uint8_t DeviceOptions::GetHideUserName() const {
        auto puVar1 = field_464.GetValue();
        return *puVar1;
    }

    // 0x100123520
    auto DeviceOptions::GetCachedUserName() const {
        auto str = field_2304.GetValue();
        return auto(str);
    }

    // 0x100123b40
    void DeviceOptions::ToggleMuteTitleScreen() {
        auto pcVar1 = field_832.GetValue();
        field_832.SetValue(*pcVar1 == '\0', true);
    }

    // 0x100123b80
    void DeviceOptions::SetTitleVolume(int arg1) {
        field_4720.SetValue(arg1, true);
    }

    // 0x100123ba0
    void DeviceOptions::SetDefaultWorldId(int arg1) {
        field_3424.SetValue(arg1, true);
    }

    // 0x10012b0e0
    uint32_t DeviceOptions::GetBrightness() const {
        auto puVar1 = field_1184.GetValue();
        return *puVar1;
    }

    // 0x10015dbd0
    void DeviceOptions::SetFpsLimit(int arg1) {
        field_1056.SetValue(arg1, true);
    }

    // 0x10015dbf0
    void DeviceOptions::SetHideUserName(bool arg1) {
        field_464.SetValue(arg1, true);
    }

    // 0x10015dc10
    void DeviceOptions::SetMuteTitleScreen(bool arg1) {
        field_832.SetValue(arg1, true);
    }

    // 0x10015e600
    bool DeviceOptions::IsSettingExposed(DeviceOptionScriptID deviceOptionScriptID) {
        return GetScriptOption(deviceOptionScriptID) != nullptr;
    }

    // 0x1001683a0
    void DeviceOptions::SetWindowMode(ClientWindowMode clientWindowMode) {
        field_576.SetValue(clientWindowMode, true);
    }

    // 0x1001683d0
    void DeviceOptions::SetWindowTopmost(bool arg1) {
        field_3808.SetValue(arg1, true);
    }

    // 0x1001683f0
    auto DeviceOptions::GetScreenshotPath() const {
        auto str = field_1312.GetValue();
        return auto(str);
    }

} // namespace jag::oldscape::option

namespace jag {
    // 0x1000d9d00
    shared_ptr_if_not_array<oldscape::sound::Mixer>::type make_shared<oldscape::sound::Mixer>() {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_2c;
        Mixer* local_28[2];

        auto arg1 = aligned_alloc(184, 8);
        if (arg1 == nullptr) {
            shared_ptr_if_not_array<oldscape::sound::Mixer>::type result;
        } else {
            local_28[0] = placement_new<oldscape::sound::Mixer>((void*)((long)arg1 + 32));
            local_2c = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared<oldscape::sound::Mixer>, int, oldscape::sound::Mixer*&>(
                    arg1, &local_2c, local_28);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_28[0]);
        }
        return result;
    }

    // 0x1000d9de0
    shared_ptr_if_not_array<oldscape::midi2::MidiPlayer>::type make_shared<oldscape::midi2::MidiPlayer>() {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_2c;
        MidiPlayer* local_28[2];

        auto arg1 = aligned_alloc(67312, 8);
        if (arg1 == nullptr) {
            shared_ptr_if_not_array<oldscape::midi2::MidiPlayer>::type result;
        } else {
            local_28[0] = placement_new<oldscape::midi2::MidiPlayer>((void*)((long)arg1 + 32));
            local_2c = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared<oldscape::midi2::MidiPlayer>, int, oldscape::midi2::MidiPlayer*&>(
                    arg1, &local_2c, local_28);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_28[0]);
        }
        return result;
    }

    // 0x1000d9ec0
    shared_ptr_if_not_array<oldscape::sound::Decimator>::type
    make_shared<oldscape::sound::Decimator, int, int&>(int&& arg1, int& arg2) {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_3c;
        Decimator* local_38[2];

        auto arg1_00 = aligned_alloc(64, 8);
        if (arg1_00 == nullptr) {
            shared_ptr_if_not_array<oldscape::sound::Decimator>::type result;
        } else {
            local_38[0] = placement_new<oldscape::sound::Decimator, int, int&>((void*)((long)arg1_00 + 32), arg1, arg2);
            local_3c = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared<oldscape::sound::Decimator>, int, oldscape::sound::Decimator*&>(
                    arg1_00, &local_3c, local_38);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_38[0]);
        }
        return result;
    }

    // 0x1000da360
    shared_ptr_if_not_array<oldscape::configdecoder::OldscapeVarTypeList>::type
    make_shared<oldscape::configdecoder::OldscapeVarTypeList, ModeGame const*&, game::Js5ConfigGroup const*&,
                Language const*&, Js5ResourceProvider&, oldscape::jagex3::Js5*&>(
        const ModeGame*& arg1, const game::Js5ConfigGroup*& arg2, const Language*& arg3,
        Js5ResourceProvider& js5ResourceProvider, oldscape::jagex3::Js5*& arg5) {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_44;
        OldscapeVarTypeList* local_40[2];

        auto arg1_00 = aligned_alloc(160, 8);
        if (arg1_00 == nullptr) {
            shared_ptr_if_not_array<oldscape::configdecoder::OldscapeVarTypeList>::type result;
        } else {
            local_40[0] = placement_new<oldscape::configdecoder::OldscapeVarTypeList, ModeGame const*&,
                                        game::Js5ConfigGroup const*&, Language const*&, Js5ResourceProvider&,
                                        oldscape::jagex3::Js5*&>((void*)((long)arg1_00 + 32), arg1, arg2, arg3,
                                                                 js5ResourceProvider, arg5);
            local_44 = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared<oldscape::configdecoder::OldscapeVarTypeList>, int,
                              oldscape::configdecoder::OldscapeVarTypeList*&>(arg1_00, &local_44, local_40);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_40[0]);
        }
        return result;
    }

    // 0x1000da500
    shared_ptr_if_not_array<Array<oldscape::graphics::Pix8>>::type
    make_shared<Array<oldscape::graphics::Pix8>, Array<oldscape::graphics::Pix8>>(
        Array<oldscape::graphics::Pix8>&& pix8s) {
        ref_counter_shared<Array<oldscape::graphics::Pix8> _>* ref_counter_shared;
        int local_34;
        Array<oldscape::graphics::Pix8>* local_30[2];

        auto arg1 = aligned_alloc(56, 8);
        if (arg1 == nullptr) {
            shared_ptr_if_not_array<Array<oldscape::graphics::Pix8>>::type result;
        } else {
            local_30[0] = placement_new<Array<oldscape::graphics::Pix8>, Array<oldscape::graphics::Pix8>>(
                (void*)((long)arg1 + 32), pix8s);
            local_34 = 1;
            ref_counter_shared = placement_new<ref_counter_shared<Array<oldscape::graphics::Pix8>>, int,
                                               Array<oldscape::graphics::Pix8>*&>(arg1, &local_34, local_30);
            ref_counter_shared->~AutoSingleton();
            ref_counter_shared->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(ref_counter_shared, (unsigned long)local_30[0]);
        }
        return result;
    }

    // 0x1000da620
    shared_ptr_if_not_array<Array<oldscape::graphics::Pix32>>::type
    make_shared<Array<oldscape::graphics::Pix32>, Array<oldscape::graphics::Pix32>>(
        Array<oldscape::graphics::Pix32>&& pix32s) {
        ref_counter_shared<Array<oldscape::graphics::Pix32> _>* ref_counter_shared;
        int local_34;
        Array<oldscape::graphics::Pix32>* local_30[2];

        auto arg1 = aligned_alloc(56, 8);
        if (arg1 == nullptr) {
            shared_ptr_if_not_array<Array<oldscape::graphics::Pix32>>::type result;
        } else {
            local_30[0] = placement_new<Array<oldscape::graphics::Pix32>, Array<oldscape::graphics::Pix32>>(
                (void*)((long)arg1 + 32), pix32s);
            local_34 = 1;
            ref_counter_shared = placement_new<ref_counter_shared<Array<oldscape::graphics::Pix32>>, int,
                                               Array<oldscape::graphics::Pix32>*&>(arg1, &local_34, local_30);
            ref_counter_shared->~AutoSingleton();
            ref_counter_shared->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(ref_counter_shared, (unsigned long)local_30[0]);
        }
        return result;
    }

} // namespace jag
