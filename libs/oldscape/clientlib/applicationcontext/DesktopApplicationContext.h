// libs/oldscape/clientlib/applicationcontext/DesktopApplicationContext.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::oldscape {
    class DesktopApplicationContext : public ApplicationContext // base inferred from shared vtable slots
    {
    public:
        // virtual methods in vtable order
        virtual DesktopApplicationContext* GetHomeDirectory();
        virtual void InitAuthLibWrapper(eastl::string const&, eastl::string const&, eastl::string const&,
                                        eastl::string const&, eastl::string const&);
        virtual GetLocalStoragePath();
        virtual CreateInputForm(input::InputForm::InputFormType);
        virtual OpenURL(eastl::string const&, bool);
        DesktopApplicationContext(std::unique_ptr<Steam, std::default_delete<Steam>>&);
        ~DesktopApplicationContext();

        // data members, from how the methods use this: 96 bytes, the first 49 are ApplicationContext
        char _unknown_49[39];
        unique_ptr* field_88; // offset 88
    };

    // 0x10014cd40, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // DesktopApplicationContext::DesktopApplicationContext(std::unique_ptr<Steam, std::default_delete<Steam> >&): jumps straight to the base-object constructor

    // 0x10014cd50, 80 bytes, base-object constructor, inline, placed by class name and debug map
    // DesktopApplicationContext::DesktopApplicationContext(std::unique_ptr<Steam, std::default_delete<Steam> >&)
    /* DesktopApplicationContext::DesktopApplicationContext(std::unique_ptr<Steam,
   std::default_delete<Steam> >&) */

    void DesktopApplicationContext::DesktopApplicationContext(unique_ptr* param_1) {
        new (this) ApplicationContext();
        field_0 = PTR_vtable_100ee8918 + 16;
        new (&field_56) eastl::string();
        field_88 = param_1;
    }

    // 0x10014ce80, 48 bytes, inline, placed by class name and debug map
    // DesktopApplicationContext::GetHomeDirectory()
    DesktopApplicationContext* DesktopApplicationContext::GetHomeDirectory() {
        Filename* pFVar1;

        pFVar1 = (Filename*)GetUserFolder();
        new (this) Filename(pFVar1);
        return this;
    }

    // 0x10014d150, 224 bytes, inline, placed by class name
    // DesktopApplicationContext::InitAuthLibWrapper(eastl::string const&, eastl::string const&, eastl::string const&, eastl::string const&, eastl::string const&)
    void DesktopApplicationContext::InitAuthLibWrapper(basic_string* param_1, basic_string* param_2,
                                                       basic_string* param_3, basic_string* param_4,
                                                       basic_string* param_5) {
        unique_ptr* this_00;
        SteamAuthLibWrapper* this_01;

        this_00 = field_88;
        if (std::operator!=(this_00, (_func_decltype_nullptr*)param_1)) {
            std::unique_ptr<Steam, std::default_delete<Steam>>::operator->(
                (unique_ptr<Steam, std::default_delete<Steam>>*)this_00);
            if (Steam::IsSteamClient() != '\0') {
                this_01 = operator_new(232);
                auth::SteamAuthLibWrapper::SteamAuthLibWrapper(this_01, (ApplicationContext*)this, param_3, param_2,
                                                               param_4, param_5, field_88);
                goto LAB_10014d1ef;
            }
        }
        this_01 = operator_new(232);
        new (this_01) auth::DesktopAuthLibWrapper(this, param_1, param_2, param_4, param_5);
    LAB_10014d1ef:
        (&field_24, (AuthLibWrapper*)this_01)->reset();
    }

    // 0x10014d240, 64 bytes, inline, placed by class name
    // DesktopApplicationContext::GetLocalStoragePath()
    undefined1* DesktopApplicationContext::GetLocalStoragePath() {
        Filename* this_00;
        undefined1* puVar2;
        SystemPaths* this_01;

        puVar2 = &field_56;
        this_01 = (SystemPaths*)puVar2;
        if (eastl::basic_string<char,
                                eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::empty() !=
            '\0') {
            this_00 = (Filename*)this_01->GetCacheFolder();
            this_00->GetName(puVar2);
        }
        return puVar2;
    }

    // 0x10014d290, 96 bytes, inline, placed by class name
    // DesktopApplicationContext::CreateInputForm(input::InputForm::InputFormType)
    undefined1* DesktopApplicationContext::CreateInputForm(undefined4 param_2) {
        InputForm* pIVar1;

        pIVar1 = operator_new(16);
        input::InputForm::InputForm(pIVar1, param_2, this);
        shared_ptr<input::InputForm>::reset<input::InputForm, void>((shared_ptr<input::InputForm>*)&field_8, pIVar1);
        return &field_8;
    }

    // 0x10014d330, 176 bytes, inline, placed by class name
    // DesktopApplicationContext::OpenURL(eastl::string const&, bool)
    undefined1 DesktopApplicationContext::OpenURL(basic_string* param_1, bool param_2) {
        unique_ptr* this_00;
        Steam* this_01;
        unique_ptr<SteamOverlay, std::default_delete<SteamOverlay>>* this_02;
        undefined8 uVar1;
        undefined3 in_register_00000011;
        eastl::string local_48[32];

        if (CONCAT31(in_register_00000011, param_2) == 0) {
            this_00 = field_88;
            if (std::operator!=(this_00, (_func_decltype_nullptr*)param_1)) {
                std::unique_ptr<Steam, std::default_delete<Steam>>::operator->(
                    (unique_ptr<Steam, std::default_delete<Steam>>*)this_00);
                if (Steam::IsSteamClient() != '\0') {
                    this_01 = (Steam*)std::unique_ptr<Steam, std::default_delete<Steam>>::operator->(
                        (unique_ptr<Steam, std::default_delete<Steam>>*)field_88);
                    this_02 =
                        (unique_ptr<SteamOverlay, std::default_delete<SteamOverlay>>*)this_01->GetSteamOverlayModule();
                    uVar1 = std::unique_ptr<SteamOverlay, std::default_delete<SteamOverlay>>::operator->(this_02);
                    eastl::string::basic_string(local_48, param_1);
                    SteamOverlay::OpenBrowser(uVar1, local_48);
                    eastl::string::~basic_string(local_48);
                    return 1;
                }
            }
        }
        return Web::OpenURL(param_1, param_2);
    }

    // 0x10014df30, 16 bytes, complete-object destructor, inline, placed by class name
    // DesktopApplicationContext::~DesktopApplicationContext(): jumps straight to the base-object destructor

    // 0x10014df40, 48 bytes, base-object destructor, inline, placed by class name
    // DesktopApplicationContext::~DesktopApplicationContext()
    void DesktopApplicationContext::~DesktopApplicationContext() {
        field_0 = PTR_vtable_100ee8918 + 16;
        (&field_56)->~basic_string();
        ~ApplicationContext();
    }

} // namespace jag::oldscape
