// libs/hal/settings/file_based/Settings_FileBased.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.hal.settings

#include "libs/hal/settings/Settings.h"

namespace jag {
    // 0x100b16cf0
    Settings::Settings(const SystemSettings* systemSettings, Settings::Scope scope, const char* str) {
        systemSettings->GetSoftwareName();
        char* str1 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        long lVar1 = systemSettings->GetSpritesArchive();
        char* str2 = *(char**)(lVar1 + 16);
        ((Layout*)systemSettings->GetSpritesArchive())->HeapBeginPtr();
        bool arg6 = (bool)systemSettings->GetSoftwareNameAsSettingPath();
        Settings(str1, str2, str, scope, str, arg6);
    }

    // 0x100b16db0
    Settings::Settings(const char* str1, const char* str2, const char* str3, Settings::Scope scope, const char* str4,
                       bool arg6)
        : field_0(scope) {
        uint8_t* local_180 = &field_8;
        new (local_180) eastl::fixed_string<char, 16>(str4);
        uint8_t* this_00 = &field_64;
        new (this_00) shared_ptr();
        eastl::destruct<oldscape::highlight::NpcUID*>(&local_168);
        uint8_t* local_178 = &field_80;
        new (local_178)
            eastl::hash_map<eastl::basic_string<char, BucketAllocatorEASTL>,
                            eastl::basic_string<char, BucketAllocatorEASTL>,
                            eastl::hash<eastl::basic_string<char, BucketAllocatorEASTL>>,
                            eastl::equal_to<eastl::basic_string<char, BucketAllocatorEASTL>>, BucketAllocatorEASTL>(
                local_168);
        field_128 = 0;
        uint8_t* local_170 = &field_144;
        new (local_170) std::function<void(Settings*)>();
        size_t sVar2 = _strlen(str4);
        if (15 < sVar2) {
            LogAssert("strlen(storageKey) <= 15",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/settings/file_based/"
                      "Settings_FileBased.cpp",
                      32, nullptr);
        }
        char* str = "GlobalSettings";
        if (field_0 == 1) {
            str = "Settings";
        }
        eastl local_168(str);
        if (arg6) {
            local_168 += "-";
            local_168 += str1;
        }
        auto local_190 = FileSystem::NewFileSystem(local_168, (unsigned int)(field_0 == 1), str2, true);
        *this_00 = local_190;
        if (((FileSystem*)(*this_00).operator->())->IsSettingsStyle() == '\0') {
            LogAssert("m_pFileSystem->IsSettingsStyle()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/settings/file_based/"
                      "Settings_FileBased.cpp",
                      45, nullptr);
        }
        StartLoadingSettings();
    }

    // 0x100b17070
    Settings::Settings(const SystemSettings* systemSettings, Settings::Scope scope, const char* str,
                       std::function<void(Settings*)> const& callback) {
        char* str3 = str;
        systemSettings->GetSoftwareName();
        char* str1 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        long lVar1 = systemSettings->GetSpritesArchive();
        char* str2 = *(char**)(lVar1 + 16);
        ((Layout*)systemSettings->GetSpritesArchive())->HeapBeginPtr();
        bool arg7 = (bool)systemSettings->GetSoftwareNameAsSettingPath();
        Settings(str1, str2, str3, scope, str, callback, arg7);
    }

    // 0x100b17100
    Settings::Settings(const char* str1, const char* str2, const char* str3, Settings::Scope scope, const char* str4,
                       std::function<void(Settings*)> const& callback, bool arg7)
        : field_0(scope) {
        uint8_t* local_180 = &field_8;
        new (local_180) eastl::fixed_string<char, 16>(str4);
        uint8_t* this_00 = &field_64;
        new (this_00) shared_ptr();
        eastl::destruct<oldscape::highlight::NpcUID*>(&local_168);
        uint8_t* local_178 = &field_80;
        new (local_178)
            eastl::hash_map<eastl::basic_string<char, BucketAllocatorEASTL>,
                            eastl::basic_string<char, BucketAllocatorEASTL>,
                            eastl::hash<eastl::basic_string<char, BucketAllocatorEASTL>>,
                            eastl::equal_to<eastl::basic_string<char, BucketAllocatorEASTL>>, BucketAllocatorEASTL>(
                local_168);
        field_128 = 0;
        uint8_t* local_170 = &field_144;
        new (local_170) std::function<void(Settings*)>(callback);
        size_t sVar2 = _strlen(str4);
        if (15 < sVar2) {
            LogAssert("strlen(storageKey) <= 15",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/settings/file_based/"
                      "Settings_FileBased.cpp",
                      55, nullptr);
        }
        char* str = "GlobalSettings";
        if (field_0 == 1) {
            str = "Settings";
        }
        eastl local_168(str);
        if (arg7) {
            local_168 += "-";
            local_168 += str1;
        }
        auto local_190 = FileSystem::NewFileSystem(local_168, (unsigned int)(field_0 == 1), str2, true);
        *this_00 = local_190;
        if (((FileSystem*)(*this_00).operator->())->IsSettingsStyle() == '\0') {
            LogAssert("m_pFileSystem->IsSettingsStyle()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/settings/file_based/"
                      "Settings_FileBased.cpp",
                      68, nullptr);
        }
        StartLoadingSettings();
    }

    // 0x100b17470
    void Settings::StartLoadingSettings() {
        function<void(Filename const&, int, eastl::stringconst&)> afStackY_378[128];
        __0 in_stack_fffffffffffffd08;
        function<void(Filename const&, Array<unsigned char> const&)> local_2c8[56];
        long local_30;

        auto this_00 = field_64.operator->();
        Filename local_290(&field_8);
        Filename local_160 = local_290 / "*";
        std::function<void(Filename const&, Array<unsigned char> const&)>::function<
            Settings::StartLoadingSettings()::__0, void>(local_2c8, in_stack_fffffffffffffd08);
        std::function<void(Filename const&, int, eastl::stringconst&)>::function<Settings::StartLoadingSettings()::__1,
                                                                                 void>(afStackY_378 + 128, (__1*)this);
        this_00->ReadFile(local_160, *local_2c8, *((afStackY_378 + 128)));
        (afStackY_378 + 128)->~function();
    }

    // 0x100b175c0
    Settings::~Settings() {
        if (field_128 == '\0') {
            if ((&field_144)->operator_cast_to_bool() != '\0') {
                LogAssert("m_SettingsRead || !m_OnReady",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/settings/"
                          "file_based/Settings_FileBased.cpp",
                          76, "Settings called with OnReady function, but is exiting scope before ready");
            }
        }
        field_64.reset();
        field_144.~function();
        field_80.~hash_map();
        field_64.~shared_ptr();
        field_8.~fixed_string();
    }

    // 0x100b17710
    void Settings::WaitForSettingsToBeReadyImpl() const {
        unsigned long uVar1;
        unsigned long long uVar4;
        unsigned long long uVar5;
        Logger* this_00;
        uint64_t uVar6;

        if (field_128 != '\0') {
            LogAssert("!m_SettingsRead",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/settings/file_based/"
                      "Settings_FileBased.cpp",
                      112, nullptr);
        }
        if (this_thread::IsMainThread() == '\0') {
            LogAssert("this_thread::IsMainThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/settings/file_based/"
                      "Settings_FileBased.cpp",
                      113, nullptr);
        }
        unsigned long long uVar3 = SystemTimer::GetTimeMS<std::chrono::steady_clock>();
        if (field_128 == '\0') {
            uVar1 = uVar3 + 3000;
            uVar4 = SystemTimer::GetTimeMS<std::chrono::steady_clock>();
            if (uVar4 < uVar1) {
                do {
                    FileSystem::Service();
                    if (field_128 != '\0')
                        goto LAB_100b177be;
                    uVar5 = SystemTimer::GetTimeMS<std::chrono::steady_clock>();
                } while (uVar5 < uVar1);
                if (uVar4 < uVar1) {
                LAB_100b177be:
                    this_00 = logger::default_logger();
                    uVar4 = SystemTimer::GetTimeMS<std::chrono::steady_clock>();
                    uVar6 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                    this_00->Log(false, 3,
                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/settings/"
                                 "file_based/Settings_FileBased.cpp",
                                 128, "Settings: Main thread waited for %llums for %s", uVar4 - uVar3, uVar6);
                }
            }
        }
    }

    // 0x100b17820
    void Settings::SaveSetting(const char* str) {
        unsigned char* arg1;
        unsigned char* arg2;
        FileSystem* pFVar2;
        char* str_00;
        _lambda_jag__Filename_const___int__eastl__eastl::string_const___1_* arg1_00;
        Array<unsigned char, SafeBucketAllocatorEASTL> local_320;
        function<void(Filename const&, int, eastl::stringconst&)> local_2f8[48];
        eastl local_2c8;
        long local_30;

        if (!(this_thread::IsMainThread())) {
            LogAssert("this_thread::IsMainThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/settings/file_based/"
                      "Settings_FileBased.cpp",
                      134, nullptr);
        }
        Filename local_160(&field_8);
        local_160 /= str;
        eastl::destruct<oldscape::highlight::NpcUID*>(&local_2c8);
        eastl::basic_string<char, BucketAllocatorEASTL> local_290(str, &local_2c8);
        auto local_308 = field_80.find(local_290);
        local_290 = field_80.end();
        if (!(local_308 != local_290)) {
            pFVar2 = (FileSystem*)field_64.operator->();
            arg1_00 = (_lambda_jag__Filename_const___int__eastl__eastl::string_const___1_*)local_160.GetName();
            local_290 = Filename(arg1_00);
            std::function<void(Filename const&)>::function<Settings::SaveSetting(char const*)::__4, void>(
                (function<void(Filename const&)>*)&local_2c8, (__4)arg1_00);
            std::function<void(Filename const&, int, eastl::stringconst&)>::function<
                FileSystem::DeleteFile(Filename const&, std::function<void(Filename const&)> const&,
                                       std::function<void(Filename const&, int, eastl::stringconst&)> const&)::
                    _default_arg_1_::_lambda(Filename const&, int, eastl::stringconst&) _1_,
                void>(local_2f8, arg1_00);
            pFVar2->DeleteFile(local_290, local_2c8, *local_2f8);
        } else {
            local_308.HeapBeginPtr();
            arg1 = (unsigned char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            local_308.HeapBeginPtr();
            arg2 = (unsigned char*)eastl::basic_string<char, BucketAllocatorEASTL>::end();
            local_320 = Array<unsigned char, SafeBucketAllocatorEASTL>(arg1, arg2);
            pFVar2 = (FileSystem*)field_64.operator->();
            str_00 = local_160.GetName();
            local_290 = Filename(str_00);
            std::function<void(Filename const&)>::function<Settings::SaveSetting(char const*)::__2, void>(
                (function<void(Filename const&)>*)&local_2c8, (__2)str_00);
            std::function<void(Filename const&, int, eastl::stringconst&)>::function<
                Settings::SaveSetting(char const*)::__3, void>(local_2f8, (__3*)this);
            pFVar2->WriteFile(local_290, local_320, false, local_2c8, *local_2f8);
        }
    }

    // 0x100b17c00
    uint8_t Settings::SetIntegerImpl(const char* str, int arg2) {
        SetInteger64Impl(str, (long)arg2);
        return 1;
    }

    // 0x100b17c10
    void Settings::SetInteger64Impl(const char* str, long long arg2) {
        long lVar3;
        char* pcVar4;
        basic_string<char, BucketAllocatorEASTL>* this_01;
        eastl local_88;

        fixed_string<char, 32> local_80;
        ToText<32, true>(&local_80, arg2, 10);
        WaitForSettingsToBeReady();
        eastl::destruct<oldscape::highlight::NpcUID*>(&local_88);
        eastl::basic_string<char, BucketAllocatorEASTL> local_a0(str, &local_88);
        uint8_t* this_00 = &field_80;
        auto local_b0 = this_00->find(local_a0);
        local_a0 = this_00->end();
        if (local_b0 != local_a0 == '\0') {
            pcVar4 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            eastl::destruct<oldscape::highlight::NpcUID*>(&local_88);
            local_a0 = eastl::basic_string<char, BucketAllocatorEASTL>(str, &local_88);
            this_01 = (basic_string<char, BucketAllocatorEASTL>*)(*this_00)[local_a0];
            *this_01 = pcVar4;
        } else {
            lVar3 = local_b0.HeapBeginPtr();
            pcVar4 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            if (((lVar3 + 24))->compare(pcVar4) == 0)
                goto LAB_100b17d7f;
            pcVar4 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            lVar3 = local_b0.HeapBeginPtr();
            (*((lVar3 + 24))) = pcVar4;
        }
        SaveSetting(str);
    LAB_100b17d7f:
    }

    // 0x100b17ed0
    void Settings::SetDoubleImpl(const char* str, double arg2) {
        long lVar3;
        char* pcVar4;
        basic_string<char, BucketAllocatorEASTL>* this_01;
        eastl local_88;

        fixed_string<char, 32> local_80;
        ToText<32, true>(&local_80, arg2);
        WaitForSettingsToBeReady();
        eastl::destruct<oldscape::highlight::NpcUID*>(&local_88);
        eastl::basic_string<char, BucketAllocatorEASTL> local_a0(str, &local_88);
        uint8_t* this_00 = &field_80;
        auto local_b8 = this_00->find(local_a0);
        local_a0 = this_00->end();
        if (local_b8 != local_a0 == '\0') {
            pcVar4 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            eastl::destruct<oldscape::highlight::NpcUID*>(&local_88);
            local_a0 = eastl::basic_string<char, BucketAllocatorEASTL>(str, &local_88);
            this_01 = (basic_string<char, BucketAllocatorEASTL>*)(*this_00)[local_a0];
            *this_01 = pcVar4;
        } else {
            lVar3 = local_b8.HeapBeginPtr();
            pcVar4 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            if (((lVar3 + 24))->compare(pcVar4) == 0)
                goto LAB_100b18044;
            pcVar4 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            lVar3 = local_b8.HeapBeginPtr();
            (*((lVar3 + 24))) = pcVar4;
        }
        SaveSetting(str);
    LAB_100b18044:
    }

    // 0x100b18100
    uint64_t Settings::SetStringImpl(const char* str1, const char* str2, unsigned long arg3) {
        int iVar2;
        char* pcVar3;
        char* str2_00;
        long lVar4;
        basic_string<char, BucketAllocatorEASTL>* this_01;
        eastl local_38;

        WaitForSettingsToBeReady();
        uint8_t* this_00 = &field_80;
        eastl::destruct<oldscape::highlight::NpcUID*>(&local_38);
        eastl::basic_string<char, BucketAllocatorEASTL> local_68(str1, &local_38);
        auto local_78 = this_00->find(local_68);
        local_68 = this_00->end();
        if (local_78 != local_68 == '\0') {
            eastl::destruct<oldscape::highlight::NpcUID*>(&local_38);
            pcVar3 = str1;
            local_68 = eastl::basic_string<char, BucketAllocatorEASTL>(str1, &local_38);
            this_01 = (basic_string<char, BucketAllocatorEASTL>*)(*this_00)[local_68];
            eastl::basic_string<char, BucketAllocatorEASTL>::assign(this_01, str2, arg3);
        } else {
            local_78.HeapBeginPtr();
            pcVar3 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            str2_00 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::end();
            iVar2 = eastl::string::compare(pcVar3, str2_00, str2, str2 + arg3);
            pcVar3 = str1;
            if (iVar2 == 0) {
                return 1;
            }
            lVar4 = local_78.HeapBeginPtr();
            ((lVar4 + 24))->assign(str2, arg3);
        }
        SaveSetting(pcVar3);
        return 1;
    }

    // 0x100b18270
    void Settings::GetIntegerImpl(int& arg1, const char* str) {
        uint8_t in_AL;
        uint64_t in_register_00000001;
        int local_18[2];

        local_18[0] = (int)(((uint64_t)in_register_00000001 << 8) | (uint8_t)in_AL);
        if (GetInteger64Impl(*local_18, str) != '\0') {
            arg1 = local_18[0];
        }
    }

    // 0x100b182a0
    uint32_t Settings::GetInteger64Impl(long long& arg1, const char* str) {
        long lVar2;
        eastl local_38;

        WaitForSettingsToBeReady();
        eastl::destruct<oldscape::highlight::NpcUID*>(&local_38);
        eastl::basic_string<char, BucketAllocatorEASTL> local_60(str, &local_38);
        auto local_48 = field_80.find(local_60);
        local_60 = field_80.end();
        uint32_t uVar1 = local_48 != local_60;
        if ((char)uVar1 != '\0') {
            lVar2 = local_48.HeapBeginPtr();
            FromString<eastl::basic_string<char, BucketAllocatorEASTL>, long long>(
                (basic_string<char, BucketAllocatorEASTL>*)(lVar2 + 24), arg1, 10);
        }
        return uVar1;
    }

    // 0x100b18390
    uint32_t Settings::GetDoubleImpl(double& arg1, const char* str) {
        long lVar2;
        eastl local_38;

        WaitForSettingsToBeReady();
        eastl::destruct<oldscape::highlight::NpcUID*>(&local_38);
        eastl::basic_string<char, BucketAllocatorEASTL> local_60(str, &local_38);
        auto local_48 = field_80.find(local_60);
        local_60 = field_80.end();
        uint32_t uVar1 = local_48 != local_60;
        if ((char)uVar1 != '\0') {
            lVar2 = local_48.HeapBeginPtr();
            FromString<eastl::basic_string<char, BucketAllocatorEASTL>, double>(
                (basic_string<char, BucketAllocatorEASTL>*)(lVar2 + 24), arg1, 10);
        }
        return uVar1;
    }

    // 0x100b18480
    uint64_t Settings::GetStringSize(const char* str) const {
        long lVar2;
        uint64_t uVar3;
        eastl local_58;
        eastl local_30;

        WaitForSettingsToBeReady();
        eastl::destruct<oldscape::highlight::NpcUID*>(&local_30);
        basic_string<char, BucketAllocatorEASTL> local_48(str, &local_30);
        &local_58 = (eastl[16])field_80.find(local_48);
        local_48._0_16_ = field_80.end();
        if (local_58 != local_48 == '\0') {
            uVar3 = 0;
        } else {
            lVar2 = local_58.HeapBeginPtr();
            uVar3 = ((lVar2 + 24))->size();
        }
        return uVar3;
    }

    // 0x100b18600
    uint64_t Settings::GetStringImpl(char* str1, unsigned long& arg2, const char* str2) {
        unsigned long uVar1;
        long lVar4;
        unsigned long uVar5;
        void* pvVar6;
        size_t sVar7;
        basic_string<char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true>>* this_00;
        eastl local_38;

        WaitForSettingsToBeReady();
        eastl::destruct<oldscape::highlight::NpcUID*>(&local_38);
        eastl::basic_string<char, BucketAllocatorEASTL> local_68(str2, &local_38);
        auto local_50 = field_80.find(local_68);
        local_68 = field_80.end();
        if (local_50 != local_68 == '\0') {
            arg2 = 0;
        } else {
            lVar4 = local_50.HeapBeginPtr();
            this_00 = (basic_string<char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true>>*)(lVar4 + 24);
            uVar1 = arg2;
            uVar5 = this_00->size();
            arg2 = uVar5;
            uVar5 = this_00->size();
            if (uVar5 < uVar1) {
                pvVar6 = (void*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                sVar7 = this_00->size();
                _memcpy(str1, pvVar6, sVar7);
                lVar4 = this_00->size();
                str1[lVar4] = '\0';
                return 1;
            }
        }
        return 0;
    }

} // namespace jag
