// libs/hal/settings/Settings.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag {
    class Settings {
    public:
        bool GetValue<int>(int&, char const*);
        bool SetValue<int>(char const*, int);
        int GetValueWithDefault<int>(char const*, int const&);
        bool GetValue<eastl::basic_string<char, BucketAllocatorEASTL>>(eastl::basic_string<char, BucketAllocatorEASTL>&,
                                                                       char const*);
        bool GetValue<eastl::string>(eastl::string&, char const*);
        bool SetValue<char, eastl::allocator>(char const*, eastl::string const&);
        Settings(SystemSettings const*, Scope, char const*);
        Settings(char const*, char const*, char const*, Scope, char const*, bool);
        Settings(SystemSettings const*, Scope, char const*, std::function<void(Settings*)> const&);
        Settings(char const*, char const*, char const*, Scope, char const*, std::function<void(Settings*)> const&,
                 bool);
        void StartLoadingSettings();
        ~Settings();
        void WaitForSettingsToBeReadyImpl() const;
        void SaveSetting(char const*);
        SetIntegerImpl(char const*, int);
        void SetInteger64Impl(char const*, long long);
        void WaitForSettingsToBeReady() const;
        void SetDoubleImpl(char const*, double);
        SetStringImpl(char const*, char const*, unsigned long);
        void GetIntegerImpl(int&, char const*);
        ulong GetInteger64Impl(long long&, char const*);
        ulong GetDoubleImpl(double&, char const*);
        GetStringSize(char const*) const;
        GetStringImpl(char*, unsigned long&, char const*);

        // data members, from how the methods use this: 152 bytes
        int field_0; // offset 0
        char _unknown_4[124];
        undefined1 field_128; // offset 128
        char _unknown_129[23];
    };

    // 0x1005f88f0, 16 bytes, inline, placed by class name and debug map
    // bool Settings::GetValue<int>(int&, char const*)
    bool Settings::GetValue<int>(int* param_1, char* param_2) {
        return (bool)GetIntegerImpl(this, param_1, param_2);
    }

    // 0x1005f8940, 16 bytes, inline, placed by class name and debug map
    // bool Settings::SetValue<int>(char const*, int)
    bool Settings::SetValue<int>(char* param_1, int param_2) {
        return (bool)SetInteger64Impl(this, param_1, (long)param_2);
    }

    // 0x1005fbd50, 48 bytes, inline, placed by class name
    // int Settings::GetValueWithDefault<int>(char const*, int const&)
    int Settings::GetValueWithDefault<int>(char* param_1, int* param_2) {
        int local_1c;

        if (GetIntegerImpl(this, &local_1c, param_1) != '\0') {
            param_2 = &local_1c;
        }
        return *param_2;
    }

    // 0x1006e0c30, 112 bytes, inline, placed by class name
    // bool Settings::GetValue<eastl::basic_string<char, BucketAllocatorEASTL> >(eastl::basic_string<char, BucketAllocatorEASTL>&, char const*)
    bool Settings::GetValue<eastl::basic_string<char, BucketAllocatorEASTL>>(basic_string* param_1, char* param_2) {
        undefined1 uVar1;
        char* pcVar2;
        ulong local_28;

        local_28 = GetStringSize(this, param_2);
        if (local_28 == 0) {
            eastl::string::clear();
            uVar1 = 0;
        } else {
            param_1->resize(local_28);
            local_28 = local_28 + 1;
            pcVar2 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::operator[](
                (basic_string<char, BucketAllocatorEASTL>*)param_1, 0);
            uVar1 = GetStringImpl(this, pcVar2, &local_28, param_2);
        }
        return (bool)uVar1;
    }

    // 0x100b05f70, 112 bytes, inline, placed by class name
    // bool Settings::GetValue<eastl::string >(eastl::string&, char const*)
    bool Settings::GetValue<eastl::string>(basic_string* param_1, char* param_2) {
        undefined1 uVar1;
        char* pcVar2;
        ulong local_28;

        local_28 = GetStringSize(this, param_2);
        if (local_28 == 0) {
            eastl::string::clear();
            uVar1 = 0;
        } else {
            param_1->resize(local_28);
            local_28 = local_28 + 1;
            pcVar2 = (char*)eastl::string::operator[]((eastl::string*)param_1, 0);
            uVar1 = GetStringImpl(this, pcVar2, &local_28, param_2);
        }
        return (bool)uVar1;
    }

    // 0x100b05fe0, 80 bytes, inline, placed by class name
    // bool Settings::SetValue<char, eastl::allocator>(char const*, eastl::string const&)
    bool Settings::SetValue<char, eastl::allocator>(char* param_1, basic_string* param_2) {
        char* pcVar1;
        ulong uVar2;

        pcVar1 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        uVar2 = eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
        return (bool)SetStringImpl((Settings*)param_1, (char*)param_2, pcVar1, uVar2);
    }

    // 0x100b17e70, 32 bytes, inline, placed by class name
    // Settings::WaitForSettingsToBeReady() const
    void Settings::WaitForSettingsToBeReady() {
        if (field_128 == '\0') {
            WaitForSettingsToBeReadyImpl(this);
            return;
        }
    }

    // 0x100b19cb0, 288 bytes, inline, placed by class name
    // Settings::StartLoadingSettings()::$_0::operator()(Filename const&, Array<unsigned char, eastl::allocator> const&) const
    /* Settings::StartLoadingSettings()::$_0::TEMPNAMEPLACEHOLDERVALUE(Filename const&,
   Array<unsigned char, eastl::allocator> const&) const */

    void Settings::StartLoadingSettings()::$_0::operator()(Filename* param_1, Array* param_2) {
        Settings* pSVar1;
        bool bVar2;
        basic_string<char, BucketAllocatorEASTL>* this_00;
        char* pcVar4;
        char* pcVar5;
        undefined1 auVar6[16];
        basic_string local_50[24];
        eastl local_38[8];

        pSVar1 = field_0;
        bVar2 = eastl::operator==((eastl*)param_1, (basic_string*)"--end--", (char*)param_2);
        if (bVar2) {
            pSVar1->field_128 = 1;
            bVar2 = (&pSVar1->field_144)->operator_cast_to_bool();
            if (bVar2) {
                std::function<void(Settings*)>::operator()((function<void(Settings*)>*)&pSVar1->field_144, pSVar1);
            }
        } else {
            if (this_thread::IsMainThread() == '\0') {
                /* WARNING: Subroutine does not return */
                LogAssert("this_thread::IsMainThread()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/settings/"
                          "file_based/Settings_FileBased.cpp",
                          96, (char*)0);
            }
            auVar6 = param_1->GetName();
            eastl::destruct<oldscape::highlight::NpcUID*>(local_38, (NpcUID*)"EASTL basic_string", auVar6._8_8_);
            eastl::basic_string<char, BucketAllocatorEASTL>::basic_string((char*)local_50, auVar6._0_8_);
            this_00 = (basic_string<char, BucketAllocatorEASTL>*)eastl::hash_map<
                eastl::basic_string<char, BucketAllocatorEASTL>, eastl::basic_string<char, BucketAllocatorEASTL>,
                eastl::hash<eastl::basic_string<char, BucketAllocatorEASTL>>,
                eastl::equal_to<eastl::basic_string<char, BucketAllocatorEASTL>>, BucketAllocatorEASTL,
                false>::operator[]((hash_map<eastl::basic_string<char, BucketAllocatorEASTL>,
                                             eastl::basic_string<char, BucketAllocatorEASTL>,
                                             eastl::hash<eastl::basic_string<char, BucketAllocatorEASTL>>,
                                             eastl::equal_to<eastl::basic_string<char, BucketAllocatorEASTL>>,
                                             BucketAllocatorEASTL, false>*)&pSVar1->field_80,
                                   local_50);
            pcVar4 = (char*)param_2->data();
            pcVar5 = (char*)param_2->end();
            eastl::basic_string<char, BucketAllocatorEASTL>::assign(this_00, pcVar4, pcVar5);
            local_50->~basic_string();
        }
    }

    // 0x100b1a7b0, 64 bytes, inline, placed by class name
    // Settings::StartLoadingSettings()::$_1::operator()(Filename const&, int, eastl::string const&) const
    /* Settings::StartLoadingSettings()::$_1::TEMPNAMEPLACEHOLDERVALUE(Filename const&, int,
   eastl::string const&) const */

    void Settings::StartLoadingSettings()::$_1::operator()(Filename* param_1, int param_2, basic_string* param_3) {
        Settings* pSVar1;

        pSVar1 = *(Settings**)param_1;
        pSVar1->field_128 = 1;
        if ((&pSVar1->field_144)->operator_cast_to_bool()) {
            std::function<void(Settings*)>::operator()((function<void(Settings*)>*)&pSVar1->field_144, pSVar1);
        }
    }

    // 0x100b1ba10, 144 bytes, inline, placed by class name
    // Settings::SaveSetting(char const*)::$_3::operator()(Filename const&, int, eastl::string const&) const
    /* Settings::SaveSetting(char const*)::$_3::TEMPNAMEPLACEHOLDERVALUE(Filename const&, int,
   eastl::string const&) const */

    void Settings::SaveSetting(char const*)::$_3::operator()(Filename* param_1, int param_2, basic_string* param_3) {
        undefined8 uVar1;
        undefined8 uVar2;
        undefined8 uVar3;
        undefined8 uVar4;
        undefined4 in_register_00000034;

        uVar1 = logger::default_logger();
        uVar2 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        uVar3 = (CONCAT44(in_register_00000034, param_2))->GetName();
        uVar4 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        logger::Logger::Log(uVar1, 0, 3,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/settings/"
                            "file_based/Settings_FileBased.cpp",
                            150, "Failed to save %s settings to %s (%d: %s)", uVar2, uVar3, param_3, uVar4);
    }

} // namespace jag

namespace jag::tweak {
    class Settings : public Container // base inferred from shared vtable slots
    {
    public:
        // virtual methods in vtable order
        virtual ~Settings();
        virtual void SetTweaky(weak_ptr<Tweaky>);
        void SetCheckbox(bool);
        Settings(eastl::string const&, ContainerGroup&);
        void Initialise(weak_ptr<Tweaky>);
        void SavePage(PageInfo const&);
        void WriteSettingsFile();
        void SetLoadPageOnLaunch(PageInfo&, bool);
        void LoadPage(PageInfo&);
        void LoadOnLaunch();
        void ParseFile();
        eastl::string* SerializeNode(TweakSettingsValue);

        // data members, from how the methods use this: 416 bytes, the first 301 are Container
        char _unknown_301[19];
        TweakSettingsValue field_320; // offset 320
        char _unknown_408[8];
    };

    // 0x100a51880, 16 bytes, complete-object destructor, inline, placed by class name
    // Settings::~Settings(): jumps straight to the base-object destructor

    // 0x100a51890, 32 bytes, deleting destructor, inline, placed by class name
    // Settings::~Settings()
    void Settings::~Settings() {
        ~Settings(this);
        operator_delete(this);
    }

    // 0x100a52ca0, 80 bytes, base-object destructor, inline, placed by class name
    // Settings::~Settings()
    void Settings::~Settings() {
        field_0 = &PTR__Settings_100f1d5d0;
        (&field_408)->~basic_string();
        field_320->~TweakSettingsValue();
        (&field_304)->~shared_ptr();
        ~Container();
    }

    // 0x100a61450, 48 bytes, inline, placed by class name
    // Settings::Initialise(weak_ptr<Tweaky>)::$_17::operator()(Event const&) const
    /* Settings::Initialise(weak_ptr<Tweaky>)::$_17::TEMPNAMEPLACEHOLDERVALUE(Event
   const&) const */

    void Settings::Initialise(weak_ptr<Tweaky>)::$_17::operator()(Event* param_1) {
        Settings* this_00;
        PageInfo* pPVar1;

        if (param_1->field_16 == 2) {
            this_00 = *(Settings**)this;
            pPVar1 = (PageInfo*)this_00->field_296->GetCurrentPage();
            SavePage(this_00, pPVar1);
        }
    }

    // 0x100a61d90, 48 bytes, inline, placed by class name
    // Settings::Initialise(weak_ptr<Tweaky>)::$_18::operator()(Event const&) const
    /* Settings::Initialise(weak_ptr<Tweaky>)::$_18::TEMPNAMEPLACEHOLDERVALUE(Event
   const&) const */

    void Settings::Initialise(weak_ptr<Tweaky>)::$_18::operator()(Event* param_1) {
        Settings* this_00;
        PageInfo* pPVar1;

        if (param_1->field_16 == 2) {
            this_00 = *(Settings**)this;
            pPVar1 = (PageInfo*)this_00->field_296->GetCurrentPage();
            SavePage(this_00, pPVar1);
        }
    }

    // 0x100a62750, 96 bytes, inline, placed by class name
    // Settings::Initialise(weak_ptr<Tweaky>)::$_19::operator()(Event const&) const
    /* Settings::Initialise(weak_ptr<Tweaky>)::$_19::TEMPNAMEPLACEHOLDERVALUE(Event
   const&) const */

    void Settings::Initialise(weak_ptr<Tweaky>)::$_19::operator()(Event* param_1) {
        Settings* this_00;
        bool bVar1;
        long* plVar2;
        PageInfo* pPVar3;

        this_00 = *(Settings**)this;
        plVar2 = (long*)param_1->end();
        if (param_1->field_16 == 3) {
            pPVar3 = (PageInfo*)this_00->field_296->GetCurrentPage();
            bVar1 = (bool)(**(code**)(*plVar2 + 120))(plVar2);
            SetLoadPageOnLaunch(this_00, pPVar3, bVar1);
        }
    }

} // namespace jag::tweak
