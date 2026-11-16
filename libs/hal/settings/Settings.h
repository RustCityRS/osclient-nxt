// libs/hal/settings/Settings.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag {
    class Settings {
    public:
        bool GetValue<int>(int& arg1, const char* str);
        bool SetValue<int>(const char* str, int arg2);
        int GetValueWithDefault<int>(const char* str, const int& arg2);
        bool GetValue<eastl::string>(eastl::string& str1, const char* str2);
        bool GetValue<eastl::string>(eastl::string& str1, const char* str2);
        bool SetValue<char>(const char* str1, const eastl::string& str2);
        Settings(const SystemSettings* systemSettings, Scope scope, const char* str);
        Settings(const char* str1, const char* str2, const char* str3, Scope scope, const char* str4, bool arg6);
        Settings(const SystemSettings* systemSettings, Scope scope, const char* str,
                 std::function<void(Settings*)> const& callback);
        Settings(const char* str1, const char* str2, const char* str3, Scope scope, const char* str4,
                 std::function<void(Settings*)> const& callback, bool arg7);
        void StartLoadingSettings();
        ~Settings();
        void WaitForSettingsToBeReadyImpl() const;
        void SaveSetting(const char* str);
        uint8_t SetIntegerImpl(const char* str, int arg2);
        void SetInteger64Impl(const char* str, long long arg2);
        void WaitForSettingsToBeReady() const;
        void SetDoubleImpl(const char* str, double arg2);
        uint64_t SetStringImpl(const char* str1, const char* str2, unsigned long arg3);
        void GetIntegerImpl(int& arg1, const char* str);
        uint32_t GetInteger64Impl(long long& arg1, const char* str);
        uint32_t GetDoubleImpl(double& arg1, const char* str);
        uint64_t GetStringSize(const char* str) const;
        uint64_t GetStringImpl(char* str1, unsigned long& arg2, const char* str2);

    private:
        Scope field_0;
        uint8_t _unknown_4[124];
        uint8_t field_128;
        uint8_t _unknown_129[23];
    };

    // 0x1005f88f0
    bool Settings::GetValue<int>(int& arg1, const char* str) {
        return (bool)GetIntegerImpl(arg1, str);
    }

    // 0x1005f8940
    bool Settings::SetValue<int>(const char* str, int arg2) {
        return (bool)SetInteger64Impl(str, (long)arg2);
    }

    // 0x1005fbd50
    int Settings::GetValueWithDefault<int>(const char* str, const int& arg2) {
        int local_1c;

        if (GetIntegerImpl(local_1c, str) != '\0') {
            arg2 = &local_1c;
        }
        return arg2;
    }

    // 0x1006e0c30
    bool Settings::GetValue<eastl::basic_string<char, BucketAllocatorEASTL>>(
        eastl::basic_string<char, BucketAllocatorEASTL>& str1, const char* str2) {
        uint8_t uVar1;

        unsigned long local_28 = GetStringSize(str2);
        if (local_28 == 0) {
            str1.clear();
            uVar1 = 0;
        } else {
            str1.resize(local_28);
            local_28 = local_28 + 1;
            uVar1 = GetStringImpl((char*)str1[0], local_28, str2);
        }
        return (bool)uVar1;
    }

    // 0x100b05f70
    bool Settings::GetValue<eastl::string>(eastl::string& str1, const char* str2) {
        uint8_t uVar1;

        unsigned long local_28 = GetStringSize(str2);
        if (local_28 == 0) {
            str1.clear();
            uVar1 = 0;
        } else {
            str1.resize(local_28);
            local_28 = local_28 + 1;
            uVar1 = GetStringImpl((char*)str1[0], local_28, str2);
        }
        return (bool)uVar1;
    }

    // 0x100b05fe0
    bool Settings::SetValue<char>(const char* str1, const eastl::string& str2) {
        char* str2_00 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        unsigned long arg3 = str2.size();
        return (bool)SetStringImpl(str1, str2_00, arg3);
    }

    // 0x100b17e70
    void Settings::WaitForSettingsToBeReady() const {
        if (field_128 == '\0') {
            WaitForSettingsToBeReadyImpl();
            return;
        }
    }

    // 0x100b19cb0
    void Settings::StartLoadingSettings()::$_0::operator()(const Filename& filename,
                                                           const Array<unsigned char>& arg2) const {
        void result;
        char* pcVar2;
        ReturnValue result;
        char* str2;
        basic_string<char, BucketAllocatorEASTL> local_50;
        eastl local_38;

        __0 settings = *this;
        if (!(filename == "--end--")) {
            if (!(this_thread::IsMainThread())) {
                LogAssert("this_thread::IsMainThread()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/settings/"
                          "file_based/Settings_FileBased.cpp",
                          96, nullptr);
            }
            pcVar2 = filename.GetName();
            eastl::destruct<oldscape::highlight::NpcUID*>(&local_38);
            local_50 = eastl::basic_string<char, BucketAllocatorEASTL>(pcVar2, &local_38);
            &result = (ReturnValue*)(*((hash_map<eastl::basic_string<char, BucketAllocatorEASTL>,
                                                 eastl::basic_string<char, BucketAllocatorEASTL>,
                                                 eastl::hash<eastl::basic_string<char, BucketAllocatorEASTL>>,
                                                 eastl::equal_to<eastl::basic_string<char, BucketAllocatorEASTL>>,
                                                 BucketAllocatorEASTL>*)((long)settings + 80)))[local_50];
            pcVar2 = (char*)arg2.data();
            str2 = (char*)arg2.end();
            eastl::basic_string<char, BucketAllocatorEASTL>::assign(&result, pcVar2, str2);
        } else {
            *(uint8_t*)((long)settings + 128) = 1;
            if ((((long)settings + 144))->operator_cast_to_bool()) {
                std::function<void(Settings*)>::operator()((function<void(Settings*)>*)((long)settings + 144),
                                                           (Settings*)settings);
            }
        }
    }

    // 0x100b1a7b0
    void Settings::StartLoadingSettings()::$_1::operator()(const Filename& filename, int arg2,
                                                           const eastl::string& str) const {
        Settings* settings = field_0;
        settings->field_128 = 1;
        if ((&settings->field_144)->operator_cast_to_bool() != '\0') {
            std::function<void(Settings*)>::operator()((function<void(Settings*)>*)&settings->field_144, settings);
        }
    }

    // 0x100b1ba10
    void Settings::SaveSetting(char const*)::$_3::operator()(const Filename& filename, int arg2,
                                                             const eastl::string& str) const {
        uint32_t in_register_00000014;

        auto this_00 = logger::default_logger();
        uint64_t uVar1 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        auto pcVar2 = filename.GetName();
        uint64_t uVar3 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        this_00->Log(false, 3,
                     "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/settings/file_based/"
                     "Settings_FileBased.cpp",
                     150, "Failed to save %s settings to %s (%d: %s)", uVar1, pcVar2,
                     (((uint64_t)in_register_00000014 << 32) | (uint32_t)arg2), uVar3);
    }

} // namespace jag

namespace jag::tweak {
    class Settings : public Container // base inferred from shared vtable slots
    {
    public:
        // virtual methods in vtable order
        virtual ~Settings();
        virtual void SetTweaky(weak_ptr<Tweaky> tweaky);
        void SetCheckbox(bool arg1);
        Settings(const eastl::string& str, ContainerGroup& containerGroup);
        void Initialise(weak_ptr<Tweaky> tweaky);
        void SavePage(const PageInfo& pageInfo);
        void WriteSettingsFile();
        void SetLoadPageOnLaunch(PageInfo& pageInfo, bool arg2);
        void LoadPage(PageInfo& pageInfo);
        void LoadOnLaunch();
        void ParseFile();
        auto SerializeNode(TweakSettingsValue tweakSettingsValue);

    private:
        uint8_t _unknown_301[19];
        TweakSettingsValue field_320;
        uint8_t _unknown_408[8];
    };

    // 0x100a52ca0
    Settings::~Settings() {
        field_408.~basic_string();
        field_320->~TweakSettingsValue();
        field_304.~shared_ptr();
    }

    // 0x100a61450
    void Settings::Initialise(weak_ptr<Tweaky>)::$_17::operator()(const Event& event) const {
        Settings* this_00;
        PageInfo* pageInfo;

        if (event.field_16 == 2) {
            this_00 = *(Settings**)this;
            pageInfo = this_00->field_296->GetCurrentPage();
            SavePage(this_00, pageInfo);
        }
    }

    // 0x100a61d90
    void Settings::Initialise(weak_ptr<Tweaky>)::$_18::operator()(const Event& event) const {
        Settings* this_00;
        PageInfo* pageInfo;

        if (event.field_16 == 2) {
            this_00 = *(Settings**)this;
            pageInfo = this_00->field_296->GetCurrentPage();
            SavePage(this_00, pageInfo);
        }
    }

    // 0x100a62750
    void Settings::Initialise(weak_ptr<Tweaky>)::$_19::operator()(const Event& event) const {
        bool arg2;
        PageInfo* pageInfo;

        Settings* this_00 = *(Settings**)this;
        auto plVar1 = event.end();
        if (event.field_16 == 3) {
            pageInfo = this_00->field_296->GetCurrentPage();
            arg2 = (bool)(**(void (**)(...))(*plVar1 + 120))(plVar1);
            SetLoadPageOnLaunch(this_00, pageInfo, arg2);
        }
    }

} // namespace jag::tweak
