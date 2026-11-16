// libs/oldscape/clientlib/applicationcontext/ApplicationContext.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: osclient

namespace jag::oldscape {
    class ApplicationContext : public javapal::DirectoryLocator // base inferred from shared vtable slots
    {
    public:
        // virtual methods in vtable order
        virtual GetCacheLocation(eastl::string const&, eastl::string const&, int);
        virtual ApplicationContext* GetUIDLocation(int);
        virtual void __pure_slot_6() = 0;
        virtual SuspendApplication();
        virtual void __pure_slot_8() = 0;
        virtual void GetAuthLibWrapper() const;
        virtual void __pure_slot_10() = 0;
        virtual GetOSVersion();
        virtual GetScreenRatio();
        virtual KeepScreenOn(bool);
        virtual LoadPreferenceFromDevice(eastl::string const&, bool);
        virtual LoadPreferenceFromDevice(eastl::string const&, eastl::string const&);
        virtual int LoadPreferenceFromDevice(eastl::string const&, int);
        GetInputForm();
        OpenStorePage();
        ShowSystemDialog(eastl::string const&, eastl::string const&);
        StorePreferenceOnDevice(eastl::string const&, eastl::string const&);
        StorePreferenceOnDevice(eastl::string const&, bool);
        StorePreferenceOnDevice(eastl::string const&, int);
        AcceptDataDownloadPrompt();
        RemovePreferenceFromDevice(eastl::string const&);
        Minimise();
        HasAcceptedDataDownloadPrompt();
        void InitServices();
        IsApplicationSuspended();
        void SendAttributionEvent(eastl::string const&);
        void SendAnalyticsEvent(eastl::string const&);
        void HasInputForm();
        LoadPreferenceFromDevice(eastl::string const&, char const*);
        ApplicationContext();
        ~ApplicationContext();
        GetHomeDirectory();
        void GetBatteryLevelPercent();
        void IsBatteryCharging();
        void IsWifiAvailable();
        void ResumeApplication();
        void CloseActiveInputForm();
        void ShowSoftwareLicence();
        ConfigureJavUrl(eastl::string const&);
        GetScreenRenderOffset();
        void ShowReviewPrompt();
        static /* 32 bytes */ DEFAULT_RENDER_OFFSET;                           // = { 0, 0, 0, 1, 2, 3, 4, 5 }
        static eastl::string /* 32 bytes */ MEMBERS_PREFERENCE_KEY;            // = "fhtagn"
        static eastl::string /* 32 bytes */ DISPLAYNAME_KEY;                   // = "name"
        static eastl::string /* 32 bytes */ AUTHENTICATOR_HASH;                // = "wgahnagl"
        static eastl::string /* 32 bytes */ IOS_DATA_DOWNLOAD_PROMPT_ACCEPTED; // = "phnglui"
        static eastl::string /* 32 bytes */ UIDFileName;                       // = "random.dat"

        // data members, from how the methods use this: 49 bytes
        undefined* field_0; // offset 0, vtable pointer
        shared_ptr field_8; // offset 8
        char _unknown_24[24];
        undefined1 m_applicationSuspended; // offset 48
    };

    // 0x1000c5f20, 96 bytes, inline, placed by class name and debug map
    // ApplicationContext::InitServices()
    void ApplicationContext::InitServices() {
        long* plVar2;
        undefined1* this_00;

        this_00 = &field_24;
        if (this_00->operator_cast_to_bool()) {
            plVar2 =
                (long*)std::unique_ptr<auth::AuthLibWrapper, std::default_delete<auth::AuthLibWrapper>>::operator->(
                    (unique_ptr<auth::AuthLibWrapper, std::default_delete<auth::AuthLibWrapper>>*)this_00);
            (**(code**)(*plVar2 + 168))(plVar2);
            plVar2 =
                (long*)std::unique_ptr<auth::AuthLibWrapper, std::default_delete<auth::AuthLibWrapper>>::operator->(
                    (unique_ptr<auth::AuthLibWrapper, std::default_delete<auth::AuthLibWrapper>>*)this_00);
            (**(code**)(*plVar2 + 176))(plVar2);
            plVar2 =
                (long*)std::unique_ptr<auth::AuthLibWrapper, std::default_delete<auth::AuthLibWrapper>>::operator->(
                    (unique_ptr<auth::AuthLibWrapper, std::default_delete<auth::AuthLibWrapper>>*)this_00);
            (**(code**)(*plVar2 + 184))(plVar2);
        }
    }

    // 0x1000d2730, 16 bytes, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // ApplicationContext::IsApplicationSuspended()
    /* dash3d::ShareLightBuffer::IsPrepared() const */

    undefined1 dash3d::ShareLightBuffer::IsPrepared() {
        return m_prepared;
    }

    // 0x100120ae0, 64 bytes, inline, placed by class name
    // ApplicationContext::SendAttributionEvent(eastl::string const&)
    void ApplicationContext::SendAttributionEvent(basic_string* param_1) {
        long* plVar2;

        if (std::operator!=((unique_ptr*)&field_24, (_func_decltype_nullptr*)param_1)) {
            plVar2 =
                (long*)std::unique_ptr<auth::AuthLibWrapper, std::default_delete<auth::AuthLibWrapper>>::operator->(
                    (unique_ptr<auth::AuthLibWrapper, std::default_delete<auth::AuthLibWrapper>>*)&field_24);
            (**(code**)(*plVar2 + 232))(plVar2, param_1);
        }
    }

    // 0x100120b20, 64 bytes, inline, placed by class name
    // ApplicationContext::SendAnalyticsEvent(eastl::string const&)
    void ApplicationContext::SendAnalyticsEvent(basic_string* param_1) {
        long* plVar2;

        if (std::operator!=((unique_ptr*)&field_24, (_func_decltype_nullptr*)param_1)) {
            plVar2 =
                (long*)std::unique_ptr<auth::AuthLibWrapper, std::default_delete<auth::AuthLibWrapper>>::operator->(
                    (unique_ptr<auth::AuthLibWrapper, std::default_delete<auth::AuthLibWrapper>>*)&field_24);
            (**(code**)(*plVar2 + 224))(plVar2, param_1);
        }
    }

    // 0x1001236d0, 32 bytes, inline, placed by class name
    // ApplicationContext::HasInputForm()
    void ApplicationContext::HasInputForm() {
        operator!=((shared_ptr*)field_8, (_func_decltype_nullptr*)0);
    }

    // 0x1001237e0, 144 bytes, inline, placed by class name
    // ApplicationContext::LoadPreferenceFromDevice(eastl::string const&, char const*)
    ApplicationContext* ApplicationContext::LoadPreferenceFromDevice(basic_string* param_1, char* param_2) {
        char* in_RCX;
        eastl::string local_58[32];
        allocator local_38[8];

        eastl::allocator::allocator(local_38, "EASTL basic_string");
        eastl::string::basic_string(local_58, in_RCX, local_38);
        (**(code**)(*(long*)param_1 + 160))(this, param_1, param_2, local_58);
        eastl::string::~basic_string(local_58);
        return this;
    }

    // 0x10014cda0, 112 bytes, base-object constructor, inline, placed by class name
    // ApplicationContext::ApplicationContext()
    void ApplicationContext::ApplicationContext() {
        new (this) jagex3::PathProvider();
        field_0 = PTR_vtable_100ee88e8 + 16;
        new (field_8, (_func_decltype_nullptr*)0) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>();
        std::unique_ptr<auth::AuthLibWrapper, std::default_delete<auth::AuthLibWrapper>>::unique_ptr<true, void>(
            (unique_ptr<auth::AuthLibWrapper, std::default_delete<auth::AuthLibWrapper>>*)&field_24);
        new (&field_32) graphics::Margin();
        m_applicationSuspended = 0;
    }

    // 0x10014ce10, 64 bytes, base-object destructor, inline, placed by class name
    // ApplicationContext::~ApplicationContext()
    void ApplicationContext::~ApplicationContext() {
        field_0 = PTR_vtable_100ee88e8 + 16;
        (&field_24)->~unique_ptr();
        field_8->~shared_ptr();
    }

    // 0x10014ce50, 48 bytes, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // ApplicationContext::GetCacheLocation(eastl::string const&, eastl::string const&, int)
    /* ApplicationContext::GetHomeDirectory() */

    ApplicationContext* ApplicationContext::GetHomeDirectory() {
        basic_string* pbVar1;
        long* in_RSI;

        pbVar1 = (basic_string*)(**(code**)(*in_RSI + 64))();
        new (this) Filename(pbVar1);
        return this;
    }

    // 0x10014ceb0, 160 bytes, inline, placed by class name
    // ApplicationContext::GetUIDLocation(int)
    ApplicationContext* ApplicationContext::GetUIDLocation(int param_1) {
        basic_string* pbVar1;
        undefined4 in_register_00000034;
        Filename local_150[19];
        long local_20;

        local_20 = *(long*)PTR____stack_chk_guard_100ee9d98;
        pbVar1 = (basic_string*)(**(code**)(*(long*)CONCAT44(in_register_00000034, param_1) + 64))(
            (long*)CONCAT44(in_register_00000034, param_1));
        Filename::Filename(local_150, pbVar1);
        Filename::operator/((Filename*)this, local_150, (fixed_string*)&UIDFileName);
        local_150->~pair();
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_20) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return this;
    }

    // 0x10014d230, 16 bytes, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // ApplicationContext::SuspendApplication()
    /* dash3d::ShareLightBuffer::Prepare() */

    void dash3d::ShareLightBuffer::Prepare() {
        m_prepared = 1;
    }

    // 0x10014d280, 16 bytes, inline, placed by class name
    // ApplicationContext::GetAuthLibWrapper() const
    void ApplicationContext::GetAuthLibWrapper() {
        (&field_24)->get();
    }

    // 0x10014d2f0, 16 bytes, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // ApplicationContext::GetScreenRatio()
    /* jag::graphics::GraphEntity::GetLoadImportance() const */

    undefined8 jag::graphics::GraphEntity::GetLoadImportance() {
        return 0;
    }

    // 0x10014d300, 32 bytes, inline, placed by class name
    // ApplicationContext::LoadPreferenceFromDevice(eastl::string const&, eastl::string const&)
    ApplicationContext* ApplicationContext::LoadPreferenceFromDevice(basic_string* param_1, basic_string* param_2) {
        basic_string* in_RCX;

        new (this) eastl::string(in_RCX);
        return this;
    }

    // 0x10014d320, 16 bytes, inline, placed by class name
    // ApplicationContext::LoadPreferenceFromDevice(eastl::string const&, int)
    int ApplicationContext::LoadPreferenceFromDevice(basic_string* param_1, int param_2) {
        return param_2;
    }

    // 0x100169fc0, 32 bytes, inline, placed by class name
    // ApplicationContext::GetBatteryLevelPercent()
    void ApplicationContext::GetBatteryLevelPercent() {
        HardwareInfo* this_00;

        this_00 = (HardwareInfo*)Instance();
        this_00->GetBatteryPercent();
    }

    // 0x100169fe0, 32 bytes, inline, placed by class name
    // ApplicationContext::IsBatteryCharging()
    void ApplicationContext::IsBatteryCharging() {
        HardwareInfo* this_00;

        this_00 = (HardwareInfo*)Instance();
        this_00->IsBatteryCharging();
    }

    // 0x10016a000, 16 bytes, inline, placed by class name
    // ApplicationContext::IsWifiAvailable()
    void ApplicationContext::IsWifiAvailable() {
        network::Connectivity::HasWifiConnection();
    }

    // 0x100189270, 16 bytes, inline, placed by class name
    // ApplicationContext::ResumeApplication()
    void ApplicationContext::ResumeApplication() {
        m_applicationSuspended = 0;
    }

} // namespace jag::oldscape

namespace jag::oldscape::dash3d {
    // 0x1000d2730: the linker folded this into ApplicationContext::IsApplicationSuspended(), which has identical code
    ShareLightBuffer::IsPrepared() const;

    // 0x10014d230: the linker folded this into ApplicationContext::SuspendApplication(), which has identical code
    ShareLightBuffer::Prepare();

} // namespace jag::oldscape::dash3d

namespace jag::fixedfunction {
    // 0x1000c6d20, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // function<void (BaseApp*), 128ul, 16ul, (Methods)0>::function<oldscape::Client::MainLoop()::$_2, void>(oldscape::Client::MainLoop()::$_2&&): jumps straight to the base-object constructor

} // namespace jag::fixedfunction
