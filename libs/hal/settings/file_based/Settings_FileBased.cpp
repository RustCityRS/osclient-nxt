// libs/hal/settings/file_based/Settings_FileBased.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.hal.settings

#include "libs/hal/settings/Settings.h"

namespace jag {
    // 0x100b16cf0, 128 bytes, base-object constructor, placed by class name and debug map
    // Settings::Settings(SystemSettings const*, Settings::Scope, char const*)
    void Settings::Settings(SystemSettings* param_1) {
        undefined8 uVar1;
        undefined8 uVar2;
        long lVar3;
        Layout* this_00;

        param_1->GetSoftwareName();
        uVar2 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        lVar3 = param_1->GetSpritesArchive();
        uVar1 = *(undefined8*)(lVar3 + 16);
        this_00 = (Layout*)param_1->GetSpritesArchive();
        eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                eastl::allocator>>::Layout::HeapBeginPtr(this_00);
        param_1->GetSoftwareNameAsSettingPath();
        Settings(this, uVar2, uVar1);
    }

    // 0x100b16db0, 544 bytes, base-object constructor, placed by __FILE__ string
    // Settings::Settings(char const*, char const*, char const*, Settings::Scope, char const*, bool)
    void Settings::Settings(char* param_1, undefined8 param_2, undefined8 param_4, int param_5,
                            _func_decltype_nullptr* param_6, char param_7) {
        undefined1* this_00;
        size_t sVar2;
        FileSystem* this_01;
        NpcUID* extraout_RDX;
        char* pcVar4;
        shared_ptr local_190;
        undefined1* local_180;
        undefined1* local_178;
        undefined1* local_170;
        Filename local_168[19];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        field_0 = param_5;
        local_180 = &field_8;
        new (local_180) eastl::fixed_string<char, 16, true, eastl::allocator>(param_6);
        this_00 = &field_64;
        new (this_00) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_6);
        eastl::destruct<oldscape::highlight::NpcUID*>((eastl*)local_168, (NpcUID*)"EASTL hash_map", extraout_RDX);
        local_178 = &field_80;
        eastl::hash_map<eastl::basic_string<char, BucketAllocatorEASTL>,
                        eastl::basic_string<char, BucketAllocatorEASTL>,
                        eastl::hash<eastl::basic_string<char, BucketAllocatorEASTL>>,
                        eastl::equal_to<eastl::basic_string<char, BucketAllocatorEASTL>>, BucketAllocatorEASTL,
                        false>::hash_map((BucketAllocatorEASTL*)local_178);
        field_128 = 0;
        local_170 = &field_144;
        std::function<void(Settings*)>::function((function<void(Settings*)>*)local_170);
        sVar2 = _strlen((char*)param_6);
        if (15 < sVar2) {
            /* WARNING: Subroutine does not return */
            LogAssert("strlen(storageKey) <= 15",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/settings/file_based/"
                      "Settings_FileBased.cpp",
                      32, (char*)0);
        }
        pcVar4 = "GlobalSettings";
        if (field_0 == 1) {
            pcVar4 = "Settings";
        }
        Filename::Filename(local_168, pcVar4);
        if (param_7 != '\0') {
            Filename::operator+=(local_168, "-");
            Filename::operator+=(local_168, param_1);
        }
        local_190.NewFileSystem(local_168, field_0 == 1, param_2, 1);
        shared_ptr<FileSystem>::operator=((shared_ptr<FileSystem>*)this_00, &local_190);
        local_190.~shared_ptr();
        this_01 = (FileSystem*)shared_ptr<FileSystem>::operator->((shared_ptr<FileSystem>*)this_00);
        if (this_01->IsSettingsStyle() == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("m_pFileSystem->IsSettingsStyle()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/settings/file_based/"
                      "Settings_FileBased.cpp",
                      45, (char*)0);
        }
        StartLoadingSettings(this);
        local_168->~pair();
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100b16fd0, 128 bytes, complete-object constructor, placed by class name and neighbouring functions
    // Settings::Settings(SystemSettings const*, Settings::Scope, char const*)
    void Settings::Settings(SystemSettings* param_1) {
        undefined8 uVar1;
        undefined8 uVar2;
        long lVar3;
        Layout* this_00;

        param_1->GetSoftwareName();
        uVar2 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        lVar3 = param_1->GetSpritesArchive();
        uVar1 = *(undefined8*)(lVar3 + 16);
        this_00 = (Layout*)param_1->GetSpritesArchive();
        eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                eastl::allocator>>::Layout::HeapBeginPtr(this_00);
        param_1->GetSoftwareNameAsSettingPath();
        Settings(this, uVar2, uVar1);
    }

    // 0x100b17050, 32 bytes, complete-object constructor, placed by class name and neighbouring functions
    // Settings::Settings(char const*, char const*, char const*, Settings::Scope, char const*, bool)
    void Settings::Settings() {
        Settings();
    }

    // 0x100b17070, 144 bytes, base-object constructor, placed by class name and neighbouring functions
    // Settings::Settings(SystemSettings const*, Settings::Scope, char const*, std::function<void (Settings*)> const&)
    /* Settings::Settings(SystemSettings const*, Settings::Scope, char const*,
   std::function<void (Settings*)> const&) */

    void Settings::Settings(SystemSettings* param_1) {
        undefined8 uVar1;
        undefined8 uVar2;
        long lVar3;
        Layout* this_00;

        param_1->GetSoftwareName();
        uVar2 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        lVar3 = param_1->GetSpritesArchive();
        uVar1 = *(undefined8*)(lVar3 + 16);
        this_00 = (Layout*)param_1->GetSpritesArchive();
        eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                eastl::allocator>>::Layout::HeapBeginPtr(this_00);
        param_1->GetSoftwareNameAsSettingPath();
        Settings(this, uVar2, uVar1);
    }

    // 0x100b17100, 560 bytes, base-object constructor, placed by __FILE__ string
    // Settings::Settings(char const*, char const*, char const*, Settings::Scope, char const*, std::function<void (Settings*)> const&, bool)
    /* Settings::Settings(char const*, char const*, char const*, Settings::Scope, char const*,
   std::function<void (Settings*)> const&, bool) */

    void Settings::Settings(char* param_1, undefined8 param_2, undefined8 param_4, int param_5,
                            _func_decltype_nullptr* param_6, function* param_7, char param_8) {
        undefined1* this_00;
        size_t sVar2;
        FileSystem* this_01;
        NpcUID* extraout_RDX;
        char* pcVar4;
        shared_ptr local_190;
        undefined1* local_180;
        undefined1* local_178;
        undefined1* local_170;
        Filename local_168[19];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        field_0 = param_5;
        local_180 = &field_8;
        new (local_180) eastl::fixed_string<char, 16, true, eastl::allocator>(param_6);
        this_00 = &field_64;
        new (this_00) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_6);
        eastl::destruct<oldscape::highlight::NpcUID*>((eastl*)local_168, (NpcUID*)"EASTL hash_map", extraout_RDX);
        local_178 = &field_80;
        eastl::hash_map<eastl::basic_string<char, BucketAllocatorEASTL>,
                        eastl::basic_string<char, BucketAllocatorEASTL>,
                        eastl::hash<eastl::basic_string<char, BucketAllocatorEASTL>>,
                        eastl::equal_to<eastl::basic_string<char, BucketAllocatorEASTL>>, BucketAllocatorEASTL,
                        false>::hash_map((BucketAllocatorEASTL*)local_178);
        field_128 = 0;
        local_170 = &field_144;
        std::function<void(Settings*)>::function((function<void(Settings*)>*)local_170, param_7);
        sVar2 = _strlen((char*)param_6);
        if (15 < sVar2) {
            /* WARNING: Subroutine does not return */
            LogAssert("strlen(storageKey) <= 15",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/settings/file_based/"
                      "Settings_FileBased.cpp",
                      55, (char*)0);
        }
        pcVar4 = "GlobalSettings";
        if (field_0 == 1) {
            pcVar4 = "Settings";
        }
        Filename::Filename(local_168, pcVar4);
        if (param_8 != '\0') {
            Filename::operator+=(local_168, "-");
            Filename::operator+=(local_168, param_1);
        }
        local_190.NewFileSystem(local_168, field_0 == 1, param_2, 1);
        shared_ptr<FileSystem>::operator=((shared_ptr<FileSystem>*)this_00, &local_190);
        local_190.~shared_ptr();
        this_01 = (FileSystem*)shared_ptr<FileSystem>::operator->((shared_ptr<FileSystem>*)this_00);
        if (this_01->IsSettingsStyle() == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("m_pFileSystem->IsSettingsStyle()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/settings/file_based/"
                      "Settings_FileBased.cpp",
                      68, (char*)0);
        }
        StartLoadingSettings(this);
        local_168->~pair();
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100b17330, 144 bytes, complete-object constructor, placed by class name and neighbouring functions
    // Settings::Settings(SystemSettings const*, Settings::Scope, char const*, std::function<void (Settings*)> const&)
    /* Settings::Settings(SystemSettings const*, Settings::Scope, char const*,
   std::function<void (Settings*)> const&) */

    void Settings::Settings(SystemSettings* param_1) {
        undefined8 uVar1;
        undefined8 uVar2;
        long lVar3;
        Layout* this_00;

        param_1->GetSoftwareName();
        uVar2 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        lVar3 = param_1->GetSpritesArchive();
        uVar1 = *(undefined8*)(lVar3 + 16);
        this_00 = (Layout*)param_1->GetSpritesArchive();
        eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                eastl::allocator>>::Layout::HeapBeginPtr(this_00);
        param_1->GetSoftwareNameAsSettingPath();
        Settings(this, uVar2, uVar1);
    }

    // 0x100b173c0, 32 bytes, complete-object constructor, placed by class name and neighbouring functions
    // Settings::Settings(char const*, char const*, char const*, Settings::Scope, char const*, std::function<void (Settings*)> const&, bool)
    /* Settings::Settings(char const*, char const*, char const*, Settings::Scope, char const*,
   std::function<void (Settings*)> const&, bool) */

    void Settings::Settings() {
        Settings();
    }

    // 0x100b17470, 304 bytes, placed by class name and neighbouring functions
    // Settings::StartLoadingSettings()
    void Settings::StartLoadingSettings() {
        FileSystem* this_00;
        function local_2f8[48];
        function local_2c8[56];
        Filename local_290[19];
        Filename local_160[19];
        long local_30;

        local_30 = *(long*)PTR____stack_chk_guard_100ee9d98;
        this_00 = (FileSystem*)shared_ptr<FileSystem>::operator->((shared_ptr<FileSystem>*)&field_64);
        Filename::Filename(local_290, (basic_string*)&field_8);
        Filename::operator/(local_160, (char*)local_290);
        std::function<void(Filename_const&, Array<unsigned char, eastl::allocator> const&)>::function<
            Settings::StartLoadingSettings()::__0, void>(local_2c8, this);
        std::function<void(Filename_const&, int, eastl::stringconst&)>::function<Settings::StartLoadingSettings()::__1,
                                                                                 void>(local_2f8, this);
        this_00->ReadFile(local_160, local_2c8, local_2f8);
        std::function<void(Filename_const&, int, eastl::stringconst&)>::~function(
            (function<void(Filename_const&, int, eastl::stringconst&)>*)local_2f8);
        std::function<void(Filename_const&, Array<unsigned char, eastl::allocator> const&)>::~function(
            (function<void(Filename_const&, Array<unsigned char, eastl::allocator> const&)>*)local_2c8);
        local_160->~pair();
        local_290->~pair();
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_30) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100b175c0, 192 bytes, base-object destructor, placed by __FILE__ string
    // Settings::~Settings()
    void Settings::~Settings() {
        if (field_128 == '\0') {
            if ((&field_144)->operator_cast_to_bool()) {
                /* WARNING: Subroutine does not return */
                LogAssert("m_SettingsRead || !m_OnReady",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/settings/"
                          "file_based/Settings_FileBased.cpp",
                          76, "Settings called with OnReady function, but is exiting scope before ready");
            }
        }
        shared_ptr<FileSystem>::reset();
        std::function<void(Settings*)>::~function((function<void(Settings*)>*)&field_144);
        (&field_80)->~hash_map();
        (&field_64)->~shared_ptr();
        /* WARNING: Subroutine does not return */
        (&field_8)->~fixed_string();
    }

    // 0x100b176e0, 16 bytes, complete-object destructor, placed by class name and neighbouring functions
    // Settings::~Settings(): jumps straight to the base-object destructor

    // 0x100b17710, 272 bytes, placed by __FILE__ string
    // Settings::WaitForSettingsToBeReadyImpl() const
    void Settings::WaitForSettingsToBeReadyImpl() {
        ulong uVar1;
        ulonglong uVar3;
        ulonglong uVar4;
        ulonglong uVar5;
        undefined8 uVar6;
        undefined8 uVar7;

        if (field_128 != '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("!m_SettingsRead",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/settings/file_based/"
                      "Settings_FileBased.cpp",
                      112, (char*)0);
        }
        if (this_thread::IsMainThread() == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("this_thread::IsMainThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/settings/file_based/"
                      "Settings_FileBased.cpp",
                      113, (char*)0);
        }
        uVar3 = SystemTimer::GetTimeMS<std::chrono::steady_clock>((SystemTimer*)(Settings*)this);
        if (field_128 == '\0') {
            uVar1 = uVar3 + 3000;
            uVar4 = SystemTimer::GetTimeMS<std::chrono::steady_clock>((SystemTimer*)(Settings*)this);
            if (uVar4 < uVar1) {
                do {
                    FileSystem::Service();
                    if (field_128 != '\0')
                        goto LAB_100b177be;
                    uVar5 = SystemTimer::GetTimeMS<std::chrono::steady_clock>((SystemTimer*)(Settings*)this);
                } while (uVar5 < uVar1);
                if (uVar4 < uVar1) {
                LAB_100b177be:
                    uVar6 = logger::default_logger();
                    uVar4 = SystemTimer::GetTimeMS<std::chrono::steady_clock>((SystemTimer*)(Settings*)this);
                    uVar7 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                    logger::Logger::Log(uVar6, 0, 3,
                                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/"
                                        "settings/file_based/Settings_FileBased.cpp",
                                        128, "Settings: Main thread waited for %llums for %s", uVar4 - uVar3, uVar7);
                }
            }
        }
    }

    // 0x100b17820, 784 bytes, placed by __FILE__ string
    // Settings::SaveSetting(char const*)
    void Settings::SaveSetting(char* param_1) {
        bool bVar2;
        uchar* puVar3;
        uchar* puVar4;
        FileSystem* pFVar5;
        char* pcVar6;
        NpcUID* extraout_RDX;
        hashtable_iterator_base* extraout_RDX_00;
        Array<unsigned char, SafeBucketAllocatorEASTL> local_320[24];
        basic_string local_308[16];
        function local_2f8[48];
        eastl local_2c8[56];
        Filename local_290[19];
        Filename local_160[19];
        long local_30;

        local_30 = *(long*)PTR____stack_chk_guard_100ee9d98;
        if (this_thread::IsMainThread() == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("this_thread::IsMainThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/settings/file_based/"
                      "Settings_FileBased.cpp",
                      134, (char*)0);
        }
        Filename::Filename(local_160, (basic_string*)&field_8);
        Filename::operator/=(local_160, param_1);
        eastl::destruct<oldscape::highlight::NpcUID*>(local_2c8, (NpcUID*)"EASTL basic_string", extraout_RDX);
        eastl::basic_string<char, BucketAllocatorEASTL>::basic_string((char*)local_290, (BucketAllocatorEASTL*)param_1);
        eastl::hashtable<eastl::basic_string<char, BucketAllocatorEASTL>,
                         eastl::pair<eastl::basic_string<char, BucketAllocatorEASTL> const,
                                     eastl::basic_string<char, BucketAllocatorEASTL>>,
                         BucketAllocatorEASTL,
                         eastl::use_first<eastl::pair<eastl::basic_string<char, BucketAllocatorEASTL> const,
                                                      eastl::basic_string<char, BucketAllocatorEASTL>>>,
                         eastl::equal_to<eastl::basic_string<char, BucketAllocatorEASTL>>,
                         eastl::hash<eastl::basic_string<char, BucketAllocatorEASTL>>, eastl::mod_range_hashing,
                         eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::find(local_308);
        local_290->~basic_string();
        eastl::hashtable<int, eastl::pair<int const, oldscape::highlight::HighlightedGroup>, eastl::allocator,
                         eastl::use_first<eastl::pair<int const, oldscape::highlight::HighlightedGroup>>,
                         eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                         eastl::prime_rehash_policy, false, true, true>::end();
        bVar2 = eastl::operator!=((eastl*)local_308, (hashtable_iterator_base*)local_290, extraout_RDX_00);
        if (bVar2) {
            local_308->HeapBeginPtr();
            puVar3 = (uchar*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            local_308->HeapBeginPtr();
            puVar4 = (uchar*)eastl::basic_string<char, BucketAllocatorEASTL>::end();
            Array<unsigned char, SafeBucketAllocatorEASTL>::Array(local_320, puVar3, puVar4);
            pFVar5 = (FileSystem*)shared_ptr<FileSystem>::operator->((shared_ptr<FileSystem>*)&field_64);
            pcVar6 = (char*)local_160->GetName();
            Filename::Filename(local_290, pcVar6);
            std::function<void(Filename_const&)>::function<Settings::SaveSetting(char const*)::__2, void>(
                (function*)local_2c8);
            std::function<void(Filename_const&, int,
                               eastl::stringconst&)>::function<Settings::SaveSetting(char const*)::__3, void>(local_2f8,
                                                                                                              this);
            pFVar5->WriteFile(local_290, local_320, false, local_2c8, local_2f8);
            std::function<void(Filename_const&, int, eastl::stringconst&)>::~function(
                (function<void(Filename_const&, int, eastl::stringconst&)>*)local_2f8);
            std::function<void(Filename_const&)>::~function((function<void(Filename_const&)>*)local_2c8);
            local_290->~pair();
            local_320->~Array();
        } else {
            pFVar5 = (FileSystem*)shared_ptr<FileSystem>::operator->((shared_ptr<FileSystem>*)&field_64);
            pcVar6 = (char*)local_160->GetName();
            Filename::Filename(local_290, pcVar6);
            std::function<void(Filename_const&)>::function<Settings::SaveSetting(char const*)::__4, void>(local_2c8);
            std::function<void(Filename_const&, int, eastl::stringconst&)>::function<
                FileSystem::DeleteFile(Filename_const&, std::function<void(Filename_const&)> const&,
                                       std::function<void(Filename_const&, int, eastl::stringconst&)> const&)::
                    _default_arg_1_::_lambda(Filename_const&, int, eastl::stringconst&) _1_,
                void>(local_2f8);
            pFVar5->DeleteFile(local_290, local_2c8, local_2f8);
            std::function<void(Filename_const&, int, eastl::stringconst&)>::~function(
                (function<void(Filename_const&, int, eastl::stringconst&)>*)local_2f8);
            std::function<void(Filename_const&)>::~function((function<void(Filename_const&)>*)local_2c8);
            local_290->~pair();
        }
        local_160->~pair();
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_30) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100b17c00, 16 bytes, placed by class name and neighbouring functions
    // Settings::SetIntegerImpl(char const*, int)
    undefined1 Settings::SetIntegerImpl(char* param_1, int param_2) {
        SetInteger64Impl(this, param_1, (long)param_2);
        return 1;
    }

    // 0x100b17c10, 464 bytes, placed by class name and neighbouring functions
    // Settings::SetInteger64Impl(char const*, long long)
    void Settings::SetInteger64Impl(char* param_1, longlong param_2) {
        int iVar2;
        long lVar3;
        char* pcVar4;
        basic_string<char, BucketAllocatorEASTL>* this_00;
        NpcUID* extraout_RDX;
        hashtable_iterator_base* extraout_RDX_00;
        undefined1 auVar5[16];
        basic_string local_b0[16];
        basic_string<char, BucketAllocatorEASTL> local_a0[24];
        eastl local_88[8];
        fixed_string<char, 32, true, eastl::allocator> local_80[72];
        undefined8 local_38;

        local_38 = *(undefined8*)PTR____stack_chk_guard_100ee9d98;
        eastl::fixed_string<char, 32, true, eastl::allocator>::fixed_string(local_80);
        ToText<32, true>((fixed_string*)local_80, param_2, 10);
        WaitForSettingsToBeReady(this);
        eastl::destruct<oldscape::highlight::NpcUID*>(local_88, (NpcUID*)"EASTL basic_string", extraout_RDX);
        eastl::basic_string<char, BucketAllocatorEASTL>::basic_string((char*)local_a0, (BucketAllocatorEASTL*)param_1);
        eastl::hashtable<eastl::basic_string<char, BucketAllocatorEASTL>,
                         eastl::pair<eastl::basic_string<char, BucketAllocatorEASTL> const,
                                     eastl::basic_string<char, BucketAllocatorEASTL>>,
                         BucketAllocatorEASTL,
                         eastl::use_first<eastl::pair<eastl::basic_string<char, BucketAllocatorEASTL> const,
                                                      eastl::basic_string<char, BucketAllocatorEASTL>>>,
                         eastl::equal_to<eastl::basic_string<char, BucketAllocatorEASTL>>,
                         eastl::hash<eastl::basic_string<char, BucketAllocatorEASTL>>, eastl::mod_range_hashing,
                         eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::find(local_b0);
        eastl::basic_string<char, BucketAllocatorEASTL>::~basic_string(local_a0);
        eastl::hashtable<int, eastl::pair<int const, oldscape::highlight::HighlightedGroup>, eastl::allocator,
                         eastl::use_first<eastl::pair<int const, oldscape::highlight::HighlightedGroup>>,
                         eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                         eastl::prime_rehash_policy, false, true, true>::end();
        if (eastl::operator!=((eastl*)local_b0, (hashtable_iterator_base*)local_a0, extraout_RDX_00)) {
            lVar3 = local_b0->HeapBeginPtr();
            pcVar4 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            iVar2 = ((lVar3 + 24))->compare(pcVar4);
            if (iVar2 == 0)
                goto LAB_100b17d7f;
            pcVar4 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            lVar3 = local_b0->HeapBeginPtr();
            eastl::basic_string<char, BucketAllocatorEASTL>::operator=(
                (basic_string<char, BucketAllocatorEASTL>*)(lVar3 + 24), pcVar4);
        } else {
            auVar5 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            eastl::destruct<oldscape::highlight::NpcUID*>(local_88, (NpcUID*)"EASTL basic_string", auVar5._8_8_);
            eastl::basic_string<char, BucketAllocatorEASTL>::basic_string((char*)local_a0,
                                                                          (BucketAllocatorEASTL*)param_1);
            this_00 = (basic_string<char, BucketAllocatorEASTL>*)eastl::hash_map<
                eastl::basic_string<char, BucketAllocatorEASTL>, eastl::basic_string<char, BucketAllocatorEASTL>,
                eastl::hash<eastl::basic_string<char, BucketAllocatorEASTL>>,
                eastl::equal_to<eastl::basic_string<char, BucketAllocatorEASTL>>, BucketAllocatorEASTL,
                false>::operator[]((hash_map<eastl::basic_string<char, BucketAllocatorEASTL>,
                                             eastl::basic_string<char, BucketAllocatorEASTL>,
                                             eastl::hash<eastl::basic_string<char, BucketAllocatorEASTL>>,
                                             eastl::equal_to<eastl::basic_string<char, BucketAllocatorEASTL>>,
                                             BucketAllocatorEASTL, false>*)&field_80,
                                   (basic_string*)local_a0);
            eastl::basic_string<char, BucketAllocatorEASTL>::operator=(this_00, auVar5._0_8_);
            eastl::basic_string<char, BucketAllocatorEASTL>::~basic_string(local_a0);
        }
        SaveSetting(this, param_1);
    LAB_100b17d7f:
        /* WARNING: Subroutine does not return */
        local_80->~fixed_string();
    }

    // 0x100b17ed0, 480 bytes, placed by class name and neighbouring functions
    // Settings::SetDoubleImpl(char const*, double)
    void Settings::SetDoubleImpl(char* param_1, double param_2) {
        int iVar2;
        long lVar3;
        char* pcVar4;
        basic_string<char, BucketAllocatorEASTL>* this_00;
        NpcUID* extraout_RDX;
        hashtable_iterator_base* extraout_RDX_00;
        undefined1 auVar5[16];
        basic_string local_b8[16];
        basic_string<char, BucketAllocatorEASTL> local_a0[24];
        eastl local_88[8];
        fixed_string<char, 32, true, eastl::allocator> local_80[72];
        undefined8 local_38;

        local_38 = *(undefined8*)PTR____stack_chk_guard_100ee9d98;
        eastl::fixed_string<char, 32, true, eastl::allocator>::fixed_string(local_80);
        ToText<32, true>((fixed_string*)local_80, param_2);
        WaitForSettingsToBeReady(this);
        eastl::destruct<oldscape::highlight::NpcUID*>(local_88, (NpcUID*)"EASTL basic_string", extraout_RDX);
        eastl::basic_string<char, BucketAllocatorEASTL>::basic_string((char*)local_a0, (BucketAllocatorEASTL*)param_1);
        eastl::hashtable<eastl::basic_string<char, BucketAllocatorEASTL>,
                         eastl::pair<eastl::basic_string<char, BucketAllocatorEASTL> const,
                                     eastl::basic_string<char, BucketAllocatorEASTL>>,
                         BucketAllocatorEASTL,
                         eastl::use_first<eastl::pair<eastl::basic_string<char, BucketAllocatorEASTL> const,
                                                      eastl::basic_string<char, BucketAllocatorEASTL>>>,
                         eastl::equal_to<eastl::basic_string<char, BucketAllocatorEASTL>>,
                         eastl::hash<eastl::basic_string<char, BucketAllocatorEASTL>>, eastl::mod_range_hashing,
                         eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::find(local_b8);
        eastl::basic_string<char, BucketAllocatorEASTL>::~basic_string(local_a0);
        eastl::hashtable<int, eastl::pair<int const, oldscape::highlight::HighlightedGroup>, eastl::allocator,
                         eastl::use_first<eastl::pair<int const, oldscape::highlight::HighlightedGroup>>,
                         eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                         eastl::prime_rehash_policy, false, true, true>::end();
        if (eastl::operator!=((eastl*)local_b8, (hashtable_iterator_base*)local_a0, extraout_RDX_00)) {
            lVar3 = local_b8->HeapBeginPtr();
            pcVar4 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            iVar2 = ((lVar3 + 24))->compare(pcVar4);
            if (iVar2 == 0)
                goto LAB_100b18044;
            pcVar4 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            lVar3 = local_b8->HeapBeginPtr();
            eastl::basic_string<char, BucketAllocatorEASTL>::operator=(
                (basic_string<char, BucketAllocatorEASTL>*)(lVar3 + 24), pcVar4);
        } else {
            auVar5 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            eastl::destruct<oldscape::highlight::NpcUID*>(local_88, (NpcUID*)"EASTL basic_string", auVar5._8_8_);
            eastl::basic_string<char, BucketAllocatorEASTL>::basic_string((char*)local_a0,
                                                                          (BucketAllocatorEASTL*)param_1);
            this_00 = (basic_string<char, BucketAllocatorEASTL>*)eastl::hash_map<
                eastl::basic_string<char, BucketAllocatorEASTL>, eastl::basic_string<char, BucketAllocatorEASTL>,
                eastl::hash<eastl::basic_string<char, BucketAllocatorEASTL>>,
                eastl::equal_to<eastl::basic_string<char, BucketAllocatorEASTL>>, BucketAllocatorEASTL,
                false>::operator[]((hash_map<eastl::basic_string<char, BucketAllocatorEASTL>,
                                             eastl::basic_string<char, BucketAllocatorEASTL>,
                                             eastl::hash<eastl::basic_string<char, BucketAllocatorEASTL>>,
                                             eastl::equal_to<eastl::basic_string<char, BucketAllocatorEASTL>>,
                                             BucketAllocatorEASTL, false>*)&field_80,
                                   (basic_string*)local_a0);
            eastl::basic_string<char, BucketAllocatorEASTL>::operator=(this_00, auVar5._0_8_);
            eastl::basic_string<char, BucketAllocatorEASTL>::~basic_string(local_a0);
        }
        SaveSetting(this, param_1);
    LAB_100b18044:
        /* WARNING: Subroutine does not return */
        local_80->~fixed_string();
    }

    // 0x100b18100, 368 bytes, placed by class name and neighbouring functions
    // Settings::SetStringImpl(char const*, char const*, unsigned long)
    undefined4 Settings::SetStringImpl(char* param_1, char* param_2, ulong param_3) {
        char* pcVar1;
        char* pcVar2;
        long lVar3;
        basic_string<char, BucketAllocatorEASTL>* this_00;
        int iVar7;
        NpcUID* extraout_RDX;
        hashtable_iterator_base* extraout_RDX_00;
        NpcUID* extraout_RDX_01;
        BucketAllocatorEASTL* pBVar8;
        basic_string local_78[16];
        basic_string<char, BucketAllocatorEASTL> local_68[24];
        eastl local_38[8];

        WaitForSettingsToBeReady(this);
        eastl::destruct<oldscape::highlight::NpcUID*>(local_38, (NpcUID*)"EASTL basic_string", extraout_RDX);
        eastl::basic_string<char, BucketAllocatorEASTL>::basic_string((char*)local_68, (BucketAllocatorEASTL*)param_1);
        eastl::hashtable<eastl::basic_string<char, BucketAllocatorEASTL>,
                         eastl::pair<eastl::basic_string<char, BucketAllocatorEASTL> const,
                                     eastl::basic_string<char, BucketAllocatorEASTL>>,
                         BucketAllocatorEASTL,
                         eastl::use_first<eastl::pair<eastl::basic_string<char, BucketAllocatorEASTL> const,
                                                      eastl::basic_string<char, BucketAllocatorEASTL>>>,
                         eastl::equal_to<eastl::basic_string<char, BucketAllocatorEASTL>>,
                         eastl::hash<eastl::basic_string<char, BucketAllocatorEASTL>>, eastl::mod_range_hashing,
                         eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::find(local_78);
        eastl::basic_string<char, BucketAllocatorEASTL>::~basic_string(local_68);
        eastl::hashtable<int, eastl::pair<int const, oldscape::highlight::HighlightedGroup>, eastl::allocator,
                         eastl::use_first<eastl::pair<int const, oldscape::highlight::HighlightedGroup>>,
                         eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                         eastl::prime_rehash_policy, false, true, true>::end();
        if (eastl::operator!=((eastl*)local_78, (hashtable_iterator_base*)local_68, extraout_RDX_00)) {
            local_78->HeapBeginPtr();
            pcVar1 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            pcVar2 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::end();
            iVar7 = eastl::string::compare(pcVar1, pcVar2, param_2, param_2 + param_3);
            pBVar8 = (BucketAllocatorEASTL*)param_1;
            if (iVar7 == 0) {
                return 1;
            }
            lVar3 = local_78->HeapBeginPtr();
            ((lVar3 + 24))->assign(param_2, param_3);
        } else {
            eastl::destruct<oldscape::highlight::NpcUID*>(local_38, (NpcUID*)"EASTL basic_string", extraout_RDX_01);
            pBVar8 = (BucketAllocatorEASTL*)param_1;
            eastl::basic_string<char, BucketAllocatorEASTL>::basic_string((char*)local_68,
                                                                          (BucketAllocatorEASTL*)param_1);
            this_00 = (basic_string<char, BucketAllocatorEASTL>*)eastl::hash_map<
                eastl::basic_string<char, BucketAllocatorEASTL>, eastl::basic_string<char, BucketAllocatorEASTL>,
                eastl::hash<eastl::basic_string<char, BucketAllocatorEASTL>>,
                eastl::equal_to<eastl::basic_string<char, BucketAllocatorEASTL>>, BucketAllocatorEASTL,
                false>::operator[]((hash_map<eastl::basic_string<char, BucketAllocatorEASTL>,
                                             eastl::basic_string<char, BucketAllocatorEASTL>,
                                             eastl::hash<eastl::basic_string<char, BucketAllocatorEASTL>>,
                                             eastl::equal_to<eastl::basic_string<char, BucketAllocatorEASTL>>,
                                             BucketAllocatorEASTL, false>*)&field_80,
                                   (basic_string*)local_68);
            eastl::basic_string<char, BucketAllocatorEASTL>::assign(this_00, param_2, param_3);
            eastl::basic_string<char, BucketAllocatorEASTL>::~basic_string(local_68);
        }
        SaveSetting(this, (char*)pBVar8);
        return 1;
    }

    // 0x100b18270, 48 bytes, placed by class name and neighbouring functions
    // Settings::GetIntegerImpl(int&, char const*)
    void Settings::GetIntegerImpl(int* param_1, char* param_2) {
        undefined1 in_AL;
        undefined7 in_register_00000001;
        int local_18[2];

        local_18[0] = (int)CONCAT71(in_register_00000001, in_AL);
        if (GetInteger64Impl(this, (longlong*)local_18, param_2) != '\0') {
            *param_1 = local_18[0];
        }
    }

    // 0x100b182a0, 192 bytes, placed by class name and neighbouring functions
    // Settings::GetInteger64Impl(long long&, char const*)
    ulong Settings::GetInteger64Impl(longlong* param_1, char* param_2) {
        bool bVar1;
        undefined7 extraout_var;
        long lVar2;
        NpcUID* extraout_RDX;
        hashtable_iterator_base* extraout_RDX_00;
        basic_string<char, BucketAllocatorEASTL> local_60[24];
        basic_string local_48[16];
        eastl local_38[8];

        WaitForSettingsToBeReady(this);
        eastl::destruct<oldscape::highlight::NpcUID*>(local_38, (NpcUID*)"EASTL basic_string", extraout_RDX);
        eastl::basic_string<char, BucketAllocatorEASTL>::basic_string((char*)local_60, (BucketAllocatorEASTL*)param_2);
        eastl::hashtable<eastl::basic_string<char, BucketAllocatorEASTL>,
                         eastl::pair<eastl::basic_string<char, BucketAllocatorEASTL> const,
                                     eastl::basic_string<char, BucketAllocatorEASTL>>,
                         BucketAllocatorEASTL,
                         eastl::use_first<eastl::pair<eastl::basic_string<char, BucketAllocatorEASTL> const,
                                                      eastl::basic_string<char, BucketAllocatorEASTL>>>,
                         eastl::equal_to<eastl::basic_string<char, BucketAllocatorEASTL>>,
                         eastl::hash<eastl::basic_string<char, BucketAllocatorEASTL>>, eastl::mod_range_hashing,
                         eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::find(local_48);
        eastl::basic_string<char, BucketAllocatorEASTL>::~basic_string(local_60);
        eastl::hashtable<int, eastl::pair<int const, oldscape::highlight::HighlightedGroup>, eastl::allocator,
                         eastl::use_first<eastl::pair<int const, oldscape::highlight::HighlightedGroup>>,
                         eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                         eastl::prime_rehash_policy, false, true, true>::end();
        bVar1 = eastl::operator!=((eastl*)local_48, (hashtable_iterator_base*)local_60, extraout_RDX_00);
        if (bVar1) {
            lVar2 = local_48->HeapBeginPtr();
            FromString<eastl::basic_string<char, BucketAllocatorEASTL>, long long>((basic_string*)(lVar2 + 24), param_1,
                                                                                   10);
        }
        return CONCAT71(extraout_var, bVar1) & 4294967295;
    }

    // 0x100b18390, 192 bytes, placed by class name and neighbouring functions
    // Settings::GetDoubleImpl(double&, char const*)
    ulong Settings::GetDoubleImpl(double* param_1, char* param_2) {
        bool bVar1;
        undefined7 extraout_var;
        long lVar2;
        NpcUID* extraout_RDX;
        hashtable_iterator_base* extraout_RDX_00;
        basic_string<char, BucketAllocatorEASTL> local_60[24];
        basic_string local_48[16];
        eastl local_38[8];

        WaitForSettingsToBeReady(this);
        eastl::destruct<oldscape::highlight::NpcUID*>(local_38, (NpcUID*)"EASTL basic_string", extraout_RDX);
        eastl::basic_string<char, BucketAllocatorEASTL>::basic_string((char*)local_60, (BucketAllocatorEASTL*)param_2);
        eastl::hashtable<eastl::basic_string<char, BucketAllocatorEASTL>,
                         eastl::pair<eastl::basic_string<char, BucketAllocatorEASTL> const,
                                     eastl::basic_string<char, BucketAllocatorEASTL>>,
                         BucketAllocatorEASTL,
                         eastl::use_first<eastl::pair<eastl::basic_string<char, BucketAllocatorEASTL> const,
                                                      eastl::basic_string<char, BucketAllocatorEASTL>>>,
                         eastl::equal_to<eastl::basic_string<char, BucketAllocatorEASTL>>,
                         eastl::hash<eastl::basic_string<char, BucketAllocatorEASTL>>, eastl::mod_range_hashing,
                         eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::find(local_48);
        eastl::basic_string<char, BucketAllocatorEASTL>::~basic_string(local_60);
        eastl::hashtable<int, eastl::pair<int const, oldscape::highlight::HighlightedGroup>, eastl::allocator,
                         eastl::use_first<eastl::pair<int const, oldscape::highlight::HighlightedGroup>>,
                         eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                         eastl::prime_rehash_policy, false, true, true>::end();
        bVar1 = eastl::operator!=((eastl*)local_48, (hashtable_iterator_base*)local_60, extraout_RDX_00);
        if (bVar1) {
            lVar2 = local_48->HeapBeginPtr();
            FromString<eastl::basic_string<char, BucketAllocatorEASTL>, double>((basic_string*)(lVar2 + 24), param_1,
                                                                                10);
        }
        return CONCAT71(extraout_var, bVar1) & 4294967295;
    }

    // 0x100b18480, 192 bytes, placed by class name and neighbouring functions
    // Settings::GetStringSize(char const*) const
    undefined8 Settings::GetStringSize(char* param_1) {
        undefined8 uVar2;
        NpcUID* extraout_RDX;
        eastl local_58[16];
        basic_string local_48[24];
        eastl local_30[8];

        WaitForSettingsToBeReady(this);
        eastl::destruct<oldscape::highlight::NpcUID*>(local_30, (NpcUID*)"EASTL basic_string", extraout_RDX);
        eastl::basic_string<char, BucketAllocatorEASTL>::basic_string((char*)local_48, (BucketAllocatorEASTL*)param_1);
        local_58 = (eastl[16])(&field_80, local_48)->find();
        local_48->~basic_string();
        local_48._0_16_ = (&field_80)->end();
        if (eastl::operator!=(local_58, (hashtable_iterator_base*)local_48, local_48._8_8_)) {
            local_58->HeapBeginPtr();
            uVar2 =
                eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
        } else {
            uVar2 = 0;
        }
        return uVar2;
    }

    // 0x100b18600, 272 bytes, placed by class name and neighbouring functions
    // Settings::GetStringImpl(char*, unsigned long&, char const*)
    undefined8 Settings::GetStringImpl(char* param_1, ulong* param_2, char* param_3) {
        ulong uVar1;
        ulong uVar4;
        void* pvVar5;
        size_t sVar6;
        long lVar7;
        NpcUID* extraout_RDX;
        hashtable_iterator_base* extraout_RDX_00;
        basic_string<char, BucketAllocatorEASTL> local_68[24];
        basic_string local_50[16];
        eastl local_38[8];

        WaitForSettingsToBeReady(this);
        eastl::destruct<oldscape::highlight::NpcUID*>(local_38, (NpcUID*)"EASTL basic_string", extraout_RDX);
        eastl::basic_string<char, BucketAllocatorEASTL>::basic_string((char*)local_68, (BucketAllocatorEASTL*)param_3);
        eastl::hashtable<eastl::basic_string<char, BucketAllocatorEASTL>,
                         eastl::pair<eastl::basic_string<char, BucketAllocatorEASTL> const,
                                     eastl::basic_string<char, BucketAllocatorEASTL>>,
                         BucketAllocatorEASTL,
                         eastl::use_first<eastl::pair<eastl::basic_string<char, BucketAllocatorEASTL> const,
                                                      eastl::basic_string<char, BucketAllocatorEASTL>>>,
                         eastl::equal_to<eastl::basic_string<char, BucketAllocatorEASTL>>,
                         eastl::hash<eastl::basic_string<char, BucketAllocatorEASTL>>, eastl::mod_range_hashing,
                         eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::find(local_50);
        eastl::basic_string<char, BucketAllocatorEASTL>::~basic_string(local_68);
        eastl::hashtable<int, eastl::pair<int const, oldscape::highlight::HighlightedGroup>, eastl::allocator,
                         eastl::use_first<eastl::pair<int const, oldscape::highlight::HighlightedGroup>>,
                         eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                         eastl::prime_rehash_policy, false, true, true>::end();
        if (eastl::operator!=((eastl*)local_50, (hashtable_iterator_base*)local_68, extraout_RDX_00)) {
            local_50->HeapBeginPtr();
            uVar1 = *param_2;
            uVar4 =
                eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
            *param_2 = uVar4;
            uVar4 =
                eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
            if (uVar4 < uVar1) {
                pvVar5 = (void*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                sVar6 = eastl::basic_string<
                    char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
                _memcpy(param_1, pvVar5, sVar6);
                lVar7 = eastl::basic_string<
                    char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
                param_1[lVar7] = '\0';
                return 1;
            }
        } else {
            *param_2 = 0;
        }
        return 0;
    }

} // namespace jag
