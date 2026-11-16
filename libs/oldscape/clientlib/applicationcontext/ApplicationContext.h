// libs/oldscape/clientlib/applicationcontext/ApplicationContext.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: osclient

namespace jag::oldscape {
    class ApplicationContext : public javapal::DirectoryLocator // base inferred from shared vtable slots
    {
    public:
        // virtual methods in vtable order
        virtual Filename GetCacheLocation(const eastl::string& arg1, const eastl::string& arg2, int arg3);
        virtual ApplicationContext* GetUIDLocation(int arg1);
        virtual void __pure_slot_6() = 0;
        virtual void SuspendApplication();
        virtual void __pure_slot_8() = 0;
        virtual void GetAuthLibWrapper() const;
        virtual void __pure_slot_10() = 0;
        virtual uint64_t GetOSVersion();
        virtual uint64_t GetScreenRatio();
        virtual void KeepScreenOn(bool arg1);
        virtual uint64_t LoadPreferenceFromDevice(const eastl::string& arg1, bool arg2);
        virtual auto LoadPreferenceFromDevice(const eastl::string& str1, const eastl::string& str2);
        virtual int LoadPreferenceFromDevice(const eastl::string& str, int arg2);
        void GetInputForm();
        void OpenStorePage();
        void ShowSystemDialog(const eastl::string& arg1, const eastl::string& arg2);
        void StorePreferenceOnDevice(const eastl::string& arg1, const eastl::string& arg2);
        void StorePreferenceOnDevice(const eastl::string& arg1, bool arg2);
        void StorePreferenceOnDevice(const eastl::string& arg1, int arg2);
        void AcceptDataDownloadPrompt();
        void RemovePreferenceFromDevice(const eastl::string& arg1);
        void Minimise();
        bool HasAcceptedDataDownloadPrompt();
        void InitServices();
        bool IsApplicationSuspended();
        void SendAttributionEvent(const eastl::string& str);
        void SendAnalyticsEvent(const eastl::string& str);
        void HasInputForm();
        auto LoadPreferenceFromDevice(const eastl::string& str1, const char* str2);
        ApplicationContext();
        ~ApplicationContext();
        Filename GetHomeDirectory();
        void GetBatteryLevelPercent();
        void IsBatteryCharging();
        void IsWifiAvailable();
        void ResumeApplication();
        void CloseActiveInputForm();
        void ShowSoftwareLicence();
        auto ConfigureJavUrl(const eastl::string& str);
        void GetScreenRenderOffset();
        void ShowReviewPrompt();
        static int32_t DEFAULT_RENDER_OFFSET[8];                // = { 0, 0, 0, 1, 2, 3, 4, 5 }
        static eastl::string MEMBERS_PREFERENCE_KEY;            // = "fhtagn"
        static eastl::string DISPLAYNAME_KEY;                   // = "name"
        static eastl::string AUTHENTICATOR_HASH;                // = "wgahnagl"
        static eastl::string IOS_DATA_DOWNLOAD_PROMPT_ACCEPTED; // = "phnglui"
        static eastl::string UIDFileName;                       // = "random.dat"

    private:
        uint8_t _unknown_8[40];
        uint8_t m_applicationSuspended;
    };

    // 0x1000c5f20
    void ApplicationContext::InitServices() {
        long* plVar2;

        uint8_t* this_00 = &field_24;
        if (this_00->operator_cast_to_bool() != '\0') {
            plVar2 = (long*)(*this_00).operator->();
            (**(void (**)(...))(*plVar2 + 168))(plVar2);
            plVar2 = (long*)(*this_00).operator->();
            (**(void (**)(...))(*plVar2 + 176))(plVar2);
            plVar2 = (long*)(*this_00).operator->();
            (**(void (**)(...))(*plVar2 + 184))(plVar2);
        }
    }

    // 0x1000d2730
    bool ApplicationContext::IsApplicationSuspended() {
        return m_prepared;
    }

    // 0x100120ae0
    void ApplicationContext::SendAttributionEvent(const eastl::string& str) {
        long* plVar2;

        if (&field_24 != str) {
            plVar2 = (long*)field_24.operator->();
            (**(void (**)(...))(*plVar2 + 232))(plVar2, str);
        }
    }

    // 0x100120b20
    void ApplicationContext::SendAnalyticsEvent(const eastl::string& str) {
        long* plVar2;

        if (&field_24 != str) {
            plVar2 = (long*)field_24.operator->();
            (**(void (**)(...))(*plVar2 + 224))(plVar2, str);
        }
    }

    // 0x1001236d0
    void ApplicationContext::HasInputForm() {
        field_8 != nullptr;
    }

    // 0x1001237e0
    auto ApplicationContext::LoadPreferenceFromDevice(const eastl::string& str1, const char* str2) {
        auto result;

        eastl::string local_58(str2);
        LoadPreferenceFromDevice(&result, this, str1, &local_58);
        return result;
    }

    // 0x10014cda0
    ApplicationContext::ApplicationContext() : jagex3::PathProvider() {
        field_24.unique_ptr<true, void>();
        new (&field_32) graphics::Margin();
        m_applicationSuspended = 0;
    }

    // 0x10014ce10
    ApplicationContext::~ApplicationContext() {
        field_24.~unique_ptr();
        field_8.~shared_ptr();
    }

    // 0x10014ce50
    Filename ApplicationContext::GetCacheLocation(const eastl::string& arg1, const eastl::string& arg2, int arg3) {
        auto str = slot8();
        return Filename(str);
    }

    // 0x10014ceb0
    ApplicationContext* ApplicationContext::GetUIDLocation(int arg1) {
        uint32_t in_register_00000034;

        fixed_string<char, _24>* str = (fixed_string<char, _24>*)(**(void (**)(...))(
            *(long*)(((uint64_t)in_register_00000034 << 32) | (uint32_t)arg1) + 64))(
            (long*)(((uint64_t)in_register_00000034 << 32) | (uint32_t)arg1));
        Filename local_150(str);
        *this = local_150 / &UIDFileName;
        return this;
    }

    // 0x10014d230
    void ApplicationContext::SuspendApplication() {
        m_prepared = 1;
    }

    // 0x10014d280
    void ApplicationContext::GetAuthLibWrapper() const {
        field_24.get();
    }

    // 0x10014d2f0
    uint64_t ApplicationContext::GetScreenRatio() {
        return 0;
    }

    // 0x10014d300
    auto ApplicationContext::LoadPreferenceFromDevice(const eastl::string& str1, const eastl::string& str2) {
        return auto(str2);
    }

    // 0x10014d320
    int ApplicationContext::LoadPreferenceFromDevice(const eastl::string& str, int arg2) {
        return arg2;
    }

    // 0x100169fc0
    void ApplicationContext::GetBatteryLevelPercent() {
        ((HardwareInfo*)Instance())->GetBatteryPercent();
    }

    // 0x100169fe0
    void ApplicationContext::IsBatteryCharging() {
        ((HardwareInfo*)Instance())->IsBatteryCharging();
    }

    // 0x10016a000
    void ApplicationContext::IsWifiAvailable() {
        network::Connectivity::HasWifiConnection();
    }

    // 0x100189270
    void ApplicationContext::ResumeApplication() {
        m_applicationSuspended = 0;
    }

} // namespace jag::oldscape

namespace jag::oldscape::dash3d {
    // 0x1000d2730: ShareLightBuffer::IsPrepared() const has the same machine code as ApplicationContext::IsApplicationSuspended()

    // 0x10014d230: ShareLightBuffer::Prepare() has the same machine code as ApplicationContext::SuspendApplication()

} // namespace jag::oldscape::dash3d
