// projects/osclient/debug/OSClientConsole.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: osclient

#include "OSClientConsole.h"

namespace jag::oldscape {
    // 0x10005cf60
    void OSClientConsole::AddPendingCommandFromInput() {
        auto str1 = m_commandLineObject->GetText();
        if ((str1 != nullptr) && (*str1 != '\0')) {
            QueueCommand(str1, "", -1, true);
            m_commandLineObject->Reset();
        }
    }

    // 0x10005d220
    void OSClientConsole::PasteFromClipboard() {
        char* pcVar2;
        long lVar3;
        long lVar4;
        int arg3;
        fixed_vector<eastl::fixed_string<char, 64>, 8ul> local_3a0;

        Clipboard local_3a8;
        eastl::string local_3c8;
        if (local_3a8.GetText(local_3c8) != '\0') {
            pcVar2 = local_3c8.back();
            if (*pcVar2 == '\n') {
                lVar3 = local_3c8.size();
                local_3c8.resize(lVar3 - 1);
            }
            pcVar2 = local_3c8.back();
            if (*pcVar2 == '\r') {
                lVar3 = local_3c8.size();
                local_3c8.resize(lVar3 - 1);
            }
            lVar3 = local_3c8.find_first_of("\r\n", 0);
            if (lVar3 == -1) {
                m_commandLineObject->Insert<eastl::string>(local_3c8);
            } else {
                local_3a0 = eastl::fixed_vector<eastl::fixed_string<char, 64>, 8ul>();
                tokenize<eastl::fixed_vector<eastl::fixed_string<char, 64>, 8ul>, eastl::fixed_string<char, 2048>>(
                    &local_3a0, &local_3c8, "\r\n", -1);
                lVar3 = local_3a0.HeapBeginPtr();
                lVar4 = local_3a0.end();
                if (lVar3 != lVar4) {
                    arg3 = 1;
                    do {
                        pcVar2 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                        QueueCommand(pcVar2, "Clipboard", arg3, true);
                        arg3 = arg3 + 1;
                        lVar3 = lVar3 + 104;
                    } while (lVar3 != lVar4);
                }
            }
        }
    }

    // 0x10005d420
    void OSClientConsole::SetCommandLineToPrevious() {
        uint8_t local_40[16];
        StringView local_30;

        local_30.StringView<1ul>("");
        local_40->GetPreviousCommandFromHistory(this);
        SetCommandLinePos(*local_40);
    }

    // 0x10005d470
    void OSClientConsole::SetCommandLineToNext() {
        uint8_t local_40[16];
        StringView local_30;

        local_30.StringView<1ul>("");
        local_40->GetNextCommandFromHistory(this);
        SetCommandLinePos(*local_40);
    }

    // 0x10005d4d0
    void OSClientConsole::Focus(bool arg1) {
        if (field_746[0] != arg1) {
            field_746[0] = arg1;
            OnFocusChanged();
        }
    }

    // 0x10005d710
    void OSClientConsole::ToggleConsole() {
        uint8_t bVar1 = m_open;
        m_open = bVar1 ^ 1;
        if (bVar1 == 0) {
            OnShow();
            return;
        }
        OnHide();
    }

    // 0x10005df10
    OSClientConsole::OSClientConsole(Client& client) : console::Console(), m_pClient(client) {
        HistoryListener* historyListener;

        field_584.unique_ptr<true, void>();
        unique_ptr<OSClientConsoleUI>* local_38 = (unique_ptr<OSClientConsoleUI>*)&field_592;
        local_38->unique_ptr<true, void>();
        uint8_t* local_58 = &field_584;
        new (&field_600) ConsoleInputHandler(*this);
        m_open = 0;
        field_745 = 1;
        field_746[0] = 0;
        uint8_t* local_50 = &field_600;
        new (&field_752) eastl::fixed_string<char, 40>();
        uint8_t* local_48 = &field_752;
        new (m_commandLineObject) game::console::CommandLine();
        m_commandLineObject[320] = 0;
        uint8_t* local_40 = &field_1160;
        new (local_40) Filename("");
        new (&field_1464) Filename("");
        field_1768 = 100;
        auto local_60 =
            std::make_unique<OSClientConsoleUI, Client&, game::console::CommandLine&>(*m_pClient, *m_commandLineObject);
        unique_ptr<OSClientConsoleUI>* this_00 = local_38;
        *local_38 = local_60;
        historyListener = (HistoryListener*)this_00->get();
        AttachHistoryListener(historyListener);
        Reset();
    }

    // 0x10005e1a0
    void OSClientConsole::Reset() {

        auto local_58 = std::make_unique<ConsoleCommands, OSClientConsole&>(*this);
        field_584 = local_58;
        std::function<void(StringView, bool, bool)>::function<OSClientConsole::Reset()::__0, void>(
            (function<void(StringView, bool, bool)>*)&local_58, (__0*)this);
        SetServerCommandHandler(local_58);
    }

    // 0x10005e270
    OSClientConsole::~OSClientConsole() {
        HistoryListener* historyListener;

        historyListener = (HistoryListener*)field_592.get();
        DetachHistoryListener(historyListener);
        field_592.reset(nullptr);
        field_1464.~pair();
        field_1160.~pair();
        m_commandLineObject->~CommandLine();
        field_752.~fixed_string();
    }

    // 0x10005e4a0
    void OSClientConsole::OnFocusChanged() {
        __1 local_d0;
        function<void(BaseApp*), 128ul, 16ul, (fixedfunction::Methods)0> local_c8[168];
        long local_20;

        auto this_00 = field_592.operator->();
        this_00->SetOpacity((bool)field_746[0]);
        m_commandLineObject->SetCursorShown((bool)field_746[0]);
        auto this_01 = GraphicsApp::Instance();
        local_d0[0] = (__1)field_746[0];
        fixedfunction::function<void(BaseApp*), 128ul, 16ul, (fixedfunction::Methods)0>::function<
            OSClientConsole::OnFocusChanged()::__1, void>(local_c8, &local_d0);
        this_01->QueueMainThreadEvent(*local_c8);
    }

    // 0x10005e5d0
    void OSClientConsole::OnShow() {
        OSClientConsoleUI* this_00;
        shared_ptr<jstring::PixfontGeneric>* pixfontGeneric;
        char* str;
        fixed_string<char, _40>* str2;
        eastl::string local_e0;
        value_type local_c0;
        uint32_t local_70[20];

        if (field_745 != '\0') {
            field_745 = 0;
            this_00 = (OSClientConsoleUI*)field_592.operator->();
            local_70[0] = 3;
            pixfontGeneric = (shared_ptr<jstring::PixfontGeneric>*)m_pClient->field_19128[*local_70];
            this_00->SetFont(*pixfontGeneric);
            new (local_70) eastl::allocator("EASTL basic_string");
            local_e0 = eastl::string("* OldSchool RuneScape Debug Console", local_70);
            if (field_752.empty() == '\0') {
                local_c0 + (*((fixed_string<char, _40>*)" ["));
                *local_70 + local_c0;
                eastl::operator+=(&local_e0, (eastl::string*)local_70, str2);
            }
            str = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            AddMessage(1, str);
            AddMessage(1, "* Enter <col=FFFFFF>?</col> for the usage guide.");
            AddMessage(1, " ");
        }
        Focus(true);
    }

    // 0x10005e8b0
    void OSClientConsole::OnHide() {
        Focus(false);
        SaveCommandHistoryAndVars();
    }

    // 0x10005e8d0
    bool OSClientConsole::PrintCommandHelp(const char* str) {
        basic_string<char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true>>* pbVar2;
        char* pcVar3;

        auto this_00 = field_584.operator->();
        auto this_01 = this_00->GetCommandHelp(str);
        if (this_01 != nullptr) {
            pbVar2 =
                (basic_string<char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true>>*)this_01->SSOBeginPtr();
            if (!(pbVar2->empty())) {
                this_01->SSOBeginPtr();
                pcVar3 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                AddMessage(2, pcVar3);
            }
            pbVar2 = (basic_string<char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true>>*)
                         this_01->GetDefaultValue();
            if (!(pbVar2->empty())) {
                this_01->GetDefaultValue();
                pcVar3 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                AddMessage(2, pcVar3);
            }
        }
        return this_01 != nullptr;
    }

    // 0x10005e9e0
    void OSClientConsole::SetCommandLinePos(const StringView& stringView) {

        auto local_40 = stringView.to_owned_string<eastl::string>();
        m_commandLineObject->SetText<eastl::string>(local_40);
        m_commandLineObject->SetPos(stringView.HeapBeginPtr());
    }

    // 0x10005eaf0
    void OSClientConsole::MainLogic(float arg1) {
        RunPendingCommands(arg1);
    }

    // 0x10005eb00
    void OSClientConsole::Clear() {
        auto plVar1 = field_592.operator->();
        (**(void (**)(...))(*plVar1 + 24))(plVar1);
        ((OSClientConsoleUI*)field_592.operator->())->SetLayoutDirty();
    }

    // 0x10005eb50
    unsigned int OSClientConsole::LoadCommandHistoryAndVars() {
        unsigned int uVar2;
        Logger* this_00;
        char* pcVar3;
        uint64_t uVar4;
        int iVar5;
        ReturnValue local_300;
        StringVector local_2e0;
        uint8_t local_2a8[320];
        ReturnValue local_168;

        if (!(field_1160 == "")) {
            if (!(field_1464 == "")) {
                local_168 = field_1160 / &field_1464;
                new (local_2a8) callstack::Callstack();
                new ((local_2a8 + 8)) File(&local_168, 2, local_2a8);
                uVar2 = local_2a8->IsValid();
                if ((char)uVar2 == '\0') {
                    ((local_2a8 + 8))->seek(0, 0, nullptr);
                    local_2e0 = eastl::ring_buffer<eastl::string, eastl::vector<eastl::string>>(128);
                    if (0 < field_1768) {
                        iVar5 = 0;
                        do {
                            local_300 = ((local_2a8 + 8))->readline();
                            if (local_300.empty()) {
                                break;
                            }
                            eastl::ring_buffer<eastl::string, eastl::vector<eastl::string>>::push_back(local_2e0);
                            iVar5 = iVar5 + 1;
                        } while (iVar5 < field_1768);
                    }
                    SetCommandHistory(local_2e0);
                } else {
                    this_00 = logger::default_logger();
                    pcVar3 = local_168.GetName();
                    local_2e0 = local_2a8->GetErrorString();
                    uVar4 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                    this_00->Log(false, 2,
                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                                 "debug/OSClientConsole.cpp",
                                 226, "Error opening command history file %s: %s", pcVar3, uVar4);
                }
                uVar2 = uVar2 ^ 1;
                ((local_2a8 + 8))->~File();
                local_168.~pair();
                goto LAB_10005ed4c;
            }
        }
        uVar2 = 0;
    LAB_10005ed4c:
        return uVar2;
    }

    // 0x10005ede0
    unsigned int OSClientConsole::SaveCommandHistoryAndVars() {
        eastl::string* str;
        unsigned int uVar2;
        long lVar3;
        Logger* pLVar4;
        char* pcVar5;
        uint64_t uVar6;
        int* piVar7;
        value_type* value_type;
        int local_2ac;
        uint8_t local_2a8[312];
        Callstack local_170;

        auto this_01 = GetOrigin();
        uint8_t* this_00 = &field_1160;
        if (!(*this_00 == "")) {
            if (!(field_1464 == "")) {
                lVar3 = this_01->GetAuthWrapper();
                if (lVar3 != 0) {
                    if (!(this_00->Exists())) {
                        local_170 = callstack::Callstack();
                        this_00->CreateDirectories(&local_170);
                        if (local_170.IsValid()) {
                            pLVar4 = logger::default_logger();
                            pcVar5 = this_00->GetName();
                            uVar2 = 0;
                            pLVar4->Log(false, 2,
                                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/"
                                        "osclient/debug/OSClientConsole.cpp",
                                        261, "Error creating command history directory at %s", pcVar5);
                            goto LAB_10005eecd;
                        }
                    }
                    new (local_2a8) callstack::Callstack();
                    *((local_2a8 + 8)) = *this_00 / &field_1464;
                    local_170 = File((local_2a8 + 8), 1538, local_2a8);
                    ((local_2a8 + 8))->~pair();
                    uVar2 = local_2a8->IsValid();
                    if ((char)uVar2 == '\0') {
                        local_2ac = this_01->GetAuthWrapper();
                        piVar7 = std::min<int>(local_2ac, field_1768);
                        if (0 < (long)*piVar7) {
                            lVar3 = (long)*piVar7 + 1;
                            str = (eastl::string*)(local_2a8 + 8);
                            do {
                                value_type = (value_type*)(*this_01)[lVar3 - 2];
                                *str + *value_type;
                                local_170.write(str, nullptr);
                                str->~basic_string();
                                lVar3 = lVar3 - 1;
                            } while (1 < lVar3);
                        }
                        local_170.close(nullptr);
                    } else {
                        pLVar4 = logger::default_logger();
                        pcVar5 = this_00->GetName();
                        *((local_2a8 + 8)) = local_2a8->GetErrorString();
                        uVar6 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                        pLVar4->Log(false, 2,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/"
                                    "osclient/debug/OSClientConsole.cpp",
                                    270, "Error creating command history file %s: %s", pcVar5, uVar6);
                        ((local_2a8 + 8))->~basic_string();
                    }
                    uVar2 = uVar2 ^ 1;
                    goto LAB_10005eecd;
                }
            }
        }
        uVar2 = 0;
    LAB_10005eecd:
        return uVar2;
    }

    // 0x10005f0d0
    void OSClientConsole::Draw() {
        if (m_open != 0) {
            ((OSClientConsoleUI*)field_592.operator->())->Draw((bool)field_746[0]);
        }
    }

    // 0x10007e0f0
    void OSClientConsole::Reset()::$_0::operator()(StringView stringView, bool arg2, bool arg3) const {
        Client* this_00 = *(Client**)(field_0 + 576);
        auto local_38 = stringView->to_owned_string<eastl::string>();
        this_00->SendCheatToServer(local_38);
    }

    // 0x10007e260
    void OSClientConsole::OnFocusChanged()::$_1::operator()(BaseApp* baseApp) const {
        uint64_t extraout_var;
        basic_string<char, BucketAllocatorEASTL> local_40;
        eastl local_28;

        uint8_t uVar1 = baseApp->GetInputHAL();
        bool cVar2 = ((Input*)(((uint64_t)extraout_var << 8) | (uint8_t)uVar1))->IsOnScreenKeyboardVisible();
        if (cVar2) {
            if (*this == (__1)0) {
                jag::input::Input::HideOnScreenKeyboard();
                return;
            }
            if (cVar2) {
                return;
            }
        }
        if (*this != (__1)0) {
            eastl::destruct<highlight::NpcUID*>(&local_28);
            local_40 = eastl::basic_string<char, BucketAllocatorEASTL>("", &local_28);
            ((Input*)(((uint64_t)extraout_var << 8) | (uint8_t)uVar1))->ShowOnScreenKeyboard(0, &local_40, -1, false);
        }
    }

} // namespace jag::oldscape
