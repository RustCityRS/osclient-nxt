// libs/oldscape/clientlib/applicationcontext/DesktopApplicationContext.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::oldscape {
    class DesktopApplicationContext : public ApplicationContext // base inferred from shared vtable slots
    {
    public:
        // virtual methods in vtable order
        virtual DesktopApplicationContext* GetHomeDirectory();
        virtual void InitAuthLibWrapper(const eastl::string& str1, const eastl::string& str2, const eastl::string& str3,
                                        const eastl::string& str4, const eastl::string& str5);
        virtual uint8_t* GetLocalStoragePath();
        virtual uint8_t* CreateInputForm(input::InputForm::InputFormType inputFormType);
        virtual uint64_t OpenURL(const eastl::string& str, bool arg2);
        DesktopApplicationContext(std::unique_ptr<Steam>& steam);
        ~DesktopApplicationContext();

    private:
        uint8_t _unknown_49[39];
        unique_ptr<Steam>* field_88;
    };

    // 0x10014cd50
    DesktopApplicationContext::DesktopApplicationContext(std::unique_ptr<Steam>& steam)
        : ApplicationContext(), field_88(steam) {}

    // 0x10014ce80
    DesktopApplicationContext* DesktopApplicationContext::GetHomeDirectory() {
        auto filename = SystemPaths::GetUserFolder();
        new (this) Filename(filename);
        return this;
    }

    // 0x10014d150
    void DesktopApplicationContext::InitAuthLibWrapper(const eastl::string& str1, const eastl::string& str2,
                                                       const eastl::string& str3, const eastl::string& str4,
                                                       const eastl::string& str5) {
        DesktopAuthLibWrapper* this_00;

        unique_ptr<Steam, std::default_delete<Steam> _>* steam = field_88;
        if (steam != str1) {
            (*steam).operator->();
            if (Steam::IsSteamClient() != '\0') {
                this_00 = (DesktopAuthLibWrapper*)operator new(232);
                new (this_00) auth::SteamAuthLibWrapper(this, str3, str2, str4, str5, *field_88);
                goto LAB_10014d1ef;
            }
        }
        this_00 = (DesktopAuthLibWrapper*)operator new(232);
        new (this_00) auth::DesktopAuthLibWrapper(this, str1, str2, str4, str5);
    LAB_10014d1ef:
        ((field_8 + 16))->reset(this_00);
    }

    // 0x10014d240
    uint8_t* DesktopApplicationContext::GetLocalStoragePath() {
        uint8_t* this_01 = &field_56;
        if (this_01->empty() != '\0') {
            SystemPaths::GetCacheFolder()->GetName(*this_01);
        }
        return this_01;
    }

    // 0x10014d290
    uint8_t* DesktopApplicationContext::CreateInputForm(input::InputForm::InputFormType inputFormType) {
        InputForm* this_00 = (InputForm*)operator new(16);
        new (this_00) oldscape::input::InputForm(inputFormType, *this);
        field_8->reset<input::InputForm, void>(this_00);
        return field_8;
    }

    // 0x10014d330
    uint64_t DesktopApplicationContext::OpenURL(const eastl::string& str, bool arg2) {
        unique_ptr<Steam, std::default_delete<Steam> _>* steam;
        bool bVar1;
        bool cVar2;
        unique_ptr<SteamOverlay, std::default_delete<SteamOverlay> _>* this_01;
        SteamOverlay* this_02;
        uint32_t in_register_00000011;
        int extraout_EDX;
        int extraout_EDX_00;
        eastl::string local_48;

        int iVar4 = (((uint32_t)in_register_00000011 << 8) | (uint8_t)arg2);
        if (iVar4 == 0) {
            steam = field_88;
            bVar1 = steam != str;
            iVar4 = extraout_EDX;
            if (bVar1) {
                (*steam).operator->();
                cVar2 = Steam::IsSteamClient();
                iVar4 = extraout_EDX_00;
                if (cVar2) {
                    this_01 = ((Steam*)(*field_88).operator->())->GetSteamOverlayModule();
                    this_02 = (SteamOverlay*)(*this_01).operator->();
                    local_48 = eastl::string(str);
                    this_02->OpenBrowser(&local_48);
                    return 1;
                }
            }
        }
        return str.OpenURL(*((eastl::string*)(unsigned long)arg2), (uint8_t)iVar4);
    }

    // 0x10014df40
    DesktopApplicationContext::~DesktopApplicationContext() {
        field_56.~basic_string();
    }

} // namespace jag::oldscape
