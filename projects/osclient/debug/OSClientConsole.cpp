// projects/osclient/debug/OSClientConsole.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: osclient

#include "OSClientConsole.h"

namespace jag::oldscape {
    // 0x10005cf60, 80 bytes, placed by class name and debug map
    // OSClientConsole::AddPendingCommandFromInput()
    void OSClientConsole::AddPendingCommandFromInput() {
        char* pcVar1;

        pcVar1 = (char*)field_832->GetText();
        if ((pcVar1 != (char*)0) && (*pcVar1 != '\0')) {
            QueueCommand(pcVar1, "", -1, true);
            field_832->Reset();
        }
    }

    // 0x10005d220, 512 bytes, placed by class name
    // OSClientConsole::PasteFromClipboard()
    void OSClientConsole::PasteFromClipboard() {
        char cVar1;
        char* pcVar2;
        long lVar3;
        long lVar4;
        int iVar5;
        eastl::string local_3c8[32];
        Clipboard local_3a8[8];
        fixed_vector<eastl::fixed_string<char, 64, true, eastl::allocator>, 8ul, true, eastl::allocator> local_3a0[872];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        Clipboard::Clipboard(local_3a8);
        eastl::string::basic_string(local_3c8);
        cVar1 = local_3a8->GetText(local_3c8);
        if (cVar1 != '\0') {
            pcVar2 = (char*)eastl::string::back();
            if (*pcVar2 == '\n') {
                lVar3 = eastl::basic_string<
                    char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
                eastl::string::resize(local_3c8, lVar3 - 1);
            }
            pcVar2 = (char*)eastl::string::back();
            if (*pcVar2 == '\r') {
                lVar3 = eastl::basic_string<
                    char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
                eastl::string::resize(local_3c8, lVar3 - 1);
            }
            lVar3 = local_3c8->find_first_of("\r\n", 0);
            if (lVar3 == -1) {
                game::console::CommandLine::Insert<eastl::string>((basic_string*)field_832);
            } else {
                eastl::fixed_vector<eastl::fixed_string<char, 64, true, eastl::allocator>, 8ul, true,
                                    eastl::allocator>::fixed_vector(local_3a0);
                tokenize<eastl::fixed_vector<eastl::fixed_string<char, 64, true, eastl::allocator>, 8ul, true,
                                             eastl::allocator>,
                         eastl::fixed_string<char, 2048, true, eastl::allocator>>((fixed_vector*)local_3a0,
                                                                                  (fixed_string*)local_3c8, "\r\n", -1);
                lVar3 = local_3a0->HeapBeginPtr();
                lVar4 = local_3a0->end();
                if (lVar3 != lVar4) {
                    iVar5 = 1;
                    do {
                        pcVar2 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                        QueueCommand(pcVar2, "Clipboard", iVar5, true);
                        iVar5 = iVar5 + 1;
                        lVar3 = lVar3 + 104;
                    } while (lVar3 != lVar4);
                }
                eastl::fixed_vector<eastl::fixed_string<char, 64, true, eastl::allocator>, 8ul, true,
                                    eastl::allocator>::~fixed_vector(local_3a0);
            }
        }
        eastl::string::~basic_string(local_3c8);
        local_3a8->~Clipboard();
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x10005d420, 80 bytes, placed by class name
    // OSClientConsole::SetCommandLineToPrevious()
    void OSClientConsole::SetCommandLineToPrevious() {
        StringView SVar1;
        StringView local_40;
        StringView local_30;

        StringView::StringView<1ul>(&local_30, "");
        SVar1.field_8 = (uchar*)this;
        SVar1.field_0 = (ulong)&local_40;
        console::Console::GetPreviousCommandFromHistory(SVar1);
        SetCommandLinePos(this, &local_40);
    }

    // 0x10005d470, 80 bytes, placed by class name
    // OSClientConsole::SetCommandLineToNext()
    void OSClientConsole::SetCommandLineToNext() {
        StringView SVar1;
        StringView local_40;
        StringView local_30;

        StringView::StringView<1ul>(&local_30, "");
        SVar1.field_8 = (uchar*)this;
        SVar1.field_0 = (ulong)&local_40;
        console::Console::GetNextCommandFromHistory(SVar1);
        SetCommandLinePos(this, &local_40);
    }

    // 0x10005d4d0, 32 bytes, placed by class name
    // OSClientConsole::Focus(bool)
    void OSClientConsole::Focus(bool param_1) {
        if ((bool)field_746[0] != param_1) {
            field_746[0] = param_1;
            OnFocusChanged(this);
        }
    }

    // 0x10005d710, 48 bytes, placed by class name
    // OSClientConsole::ToggleConsole()
    void OSClientConsole::ToggleConsole() {
        byte bVar1;

        bVar1 = m_open;
        m_open = bVar1 ^ 1;
        if (bVar1 == 0) {
            OnShow(this);
            return;
        }
        OnHide(this);
    }

    // 0x10005df10, 416 bytes, base-object constructor, placed by class name
    // OSClientConsole::OSClientConsole(Client&)
    void OSClientConsole::OSClientConsole(Client* param_1) {
        unique_ptr<OSClientConsoleUI, std::default_delete<OSClientConsoleUI>>* this_00;
        HistoryListener* pHVar1;
        unique_ptr local_60[8];
        undefined1* local_58;
        undefined1* local_50;
        undefined1* local_48;
        undefined1* local_40;
        unique_ptr<OSClientConsoleUI, std::default_delete<OSClientConsoleUI>>* local_38;

        new (this) console::Console();
        field_0 = &PTR__OSClientConsole_100ef2728;
        m_pClient = param_1;
        std::unique_ptr<ConsoleCommands, std::default_delete<ConsoleCommands>>::unique_ptr<true, void>(
            (unique_ptr<ConsoleCommands, std::default_delete<ConsoleCommands>>*)&field_584);
        local_38 = (unique_ptr<OSClientConsoleUI, std::default_delete<OSClientConsoleUI>>*)&field_592;
        std::unique_ptr<OSClientConsoleUI, std::default_delete<OSClientConsoleUI>>::unique_ptr<true, void>(local_38);
        local_58 = &field_584;
        new (&field_600, this) ConsoleInputHandler();
        m_open = 0;
        field_745 = 1;
        field_746[0] = 0;
        local_50 = &field_600;
        new (&field_752) eastl::fixed_string<char, 40, true, eastl::allocator>();
        local_48 = &field_752;
        new (field_832) game::console::CommandLine();
        field_832[320] = 0;
        local_40 = field_1160;
        new (local_40) Filename("");
        new (field_1464, "") Filename();
        field_1768 = 100;
        std::make_unique<OSClientConsoleUI, Client&, game::console::CommandLine&>((Client*)local_60,
                                                                                  (CommandLine*)m_pClient);
        this_00 = local_38;
        std::unique_ptr<OSClientConsoleUI, std::default_delete<OSClientConsoleUI>>::operator=(local_38, local_60);
        local_60->~unique_ptr();
        pHVar1 =
            (HistoryListener*)std::unique_ptr<OSClientConsoleUI, std::default_delete<OSClientConsoleUI>>::get(this_00);
        AttachHistoryListener(pHVar1);
        Reset(this);
    }

    // 0x10005e1a0, 160 bytes, placed by class name
    // OSClientConsole::Reset()
    void OSClientConsole::Reset() {
        function local_58[56];
        long local_20;

        local_20 = *(long*)PTR____stack_chk_guard_100ee9d98;
        std::make_unique<ConsoleCommands, OSClientConsole&>((OSClientConsole*)local_58);
        std::unique_ptr<ConsoleCommands, std::default_delete<ConsoleCommands>>::operator=(
            (unique_ptr<ConsoleCommands, std::default_delete<ConsoleCommands>>*)&field_584, (unique_ptr*)local_58);
        local_58->~unique_ptr();
        std::function<void(StringView, bool, bool)>::function<OSClientConsole::Reset()::__0, void>(local_58, this);
        SetServerCommandHandler(local_58);
        std::function<void(StringView, bool, bool)>::~function((function<void(StringView, bool, bool)>*)local_58);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_20) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x10005e260, 16 bytes, complete-object constructor, placed by class name
    // OSClientConsole::OSClientConsole(Client&): jumps straight to the base-object constructor

    // 0x10005e270, 272 bytes, base-object destructor, placed by class name
    // OSClientConsole::~OSClientConsole()
    void OSClientConsole::~OSClientConsole() {
        field_0 = &PTR__OSClientConsole_100ef2728;
        (&field_592)->get();
        console::Console::DetachHistoryListener((HistoryListener*)this);
        (&field_592, (OSClientConsoleUI*)0)->reset();
        field_1464->~pair();
        field_1160->~pair();
        field_832->~CommandLine();
        /* WARNING: Subroutine does not return */
        (&field_752)->~fixed_string();
    }

    // 0x10005e3b0, 16 bytes, complete-object destructor, placed by class name
    // OSClientConsole::~OSClientConsole(): jumps straight to the base-object destructor

    // 0x10005e3c0, 32 bytes, deleting destructor, placed by class name
    // OSClientConsole::~OSClientConsole()
    void OSClientConsole::~OSClientConsole() {
        ~OSClientConsole(this);
        operator_delete(this);
    }

    // 0x10005e4a0, 208 bytes, placed by class name
    // OSClientConsole::OnFocusChanged()
    void OSClientConsole::OnFocusChanged() {
        OSClientConsoleUI* this_00;
        BaseApp* this_01;
        GraphicsApp* this_02;
        __1 local_d0[8];
        function local_c8;
        long local_20;

        local_20 = *(long*)PTR____stack_chk_guard_100ee9d98;
        this_00 =
            (OSClientConsoleUI*)std::unique_ptr<OSClientConsoleUI, std::default_delete<OSClientConsoleUI>>::operator->(
                (unique_ptr<OSClientConsoleUI, std::default_delete<OSClientConsoleUI>>*)&field_592);
        this_00->SetOpacity((bool)field_746[0]);
        this_02 = (GraphicsApp*)field_832;
        this_02->SetCursorShown((bool)field_746[0]);
        this_01 = (BaseApp*)this_02->Instance();
        local_d0[0] = (__1)field_746[0];
        fixedfunction::function<void(BaseApp*), 128ul, 16ul, (fixedfunction::Methods)0>::function<
            OSClientConsole::OnFocusChanged()::__1, void>(
            (function<void(BaseApp*), 128ul, 16ul, (fixedfunction::Methods)0>*)&local_c8, local_d0);
        this_01->QueueMainThreadEvent(&local_c8);
        fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>::~function(
            (function<void(render::RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>*)&local_c8);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_20) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x10005e5d0, 448 bytes, placed by class name
    // OSClientConsole::OnShow()
    void OSClientConsole::OnShow() {
        OSClientConsoleUI* this_00;
        shared_ptr* psVar2;
        undefined8 uVar3;
        eastl::string local_e0[32];
        value_type local_c0[80];
        undefined4 local_70[20];
        long local_20;

        local_20 = *(long*)PTR____stack_chk_guard_100ee9d98;
        if (field_745 != '\0') {
            field_745 = 0;
            this_00 = (OSClientConsoleUI*)
                          std::unique_ptr<OSClientConsoleUI, std::default_delete<OSClientConsoleUI>>::operator->(
                              (unique_ptr<OSClientConsoleUI, std::default_delete<OSClientConsoleUI>>*)&field_592);
            local_70[0] = 3;
            psVar2 = (shared_ptr*)eastl::hash_map<
                Font, shared_ptr<jstring::PixfontGeneric>, FontHash, eastl::equal_to<Font>, eastl::allocator,
                false>::operator[]((hash_map<Font, shared_ptr<jstring::PixfontGeneric>, FontHash, eastl::equal_to<Font>,
                                             eastl::allocator, false>*)m_pClient->field_19128,
                                   (Font*)local_70);
            this_00->SetFont(psVar2);
            new (local_70) eastl::allocator("EASTL basic_string");
            eastl::string::basic_string(local_e0, "* OldSchool RuneScape Debug Console", (allocator*)local_70);
            if (eastl::basic_string<
                    char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::empty() ==
                '\0') {
                eastl::operator+(local_c0, (fixed_string*)" [");
                eastl::operator+((eastl*)local_70, (fixed_string*)local_c0, (value_type*)"]");
                eastl::operator+=((basic_string*)local_e0, (fixed_string*)local_70);
                /* WARNING: Subroutine does not return */
                local_70->~fixed_string();
            }
            uVar3 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            console::Console::AddMessage(this, 1, uVar3);
            console::Console::AddMessage(this, 1, "* Enter <col=FFFFFF>?</col> for the usage guide.");
            console::Console::AddMessage(this, 1, &DAT_100e35840);
            eastl::string::~basic_string(local_e0);
        }
        Focus(this, true);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_20) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x10005e8b0, 32 bytes, placed by class name
    // OSClientConsole::OnHide()
    void OSClientConsole::OnHide() {
        Focus(this, false);
        (*(code*)field_0[3])(this);
    }

    // 0x10005e8d0, 176 bytes, placed by class name
    // OSClientConsole::PrintCommandHelp(char const*)
    bool OSClientConsole::PrintCommandHelp(char* param_1) {
        char cVar1;
        ConsoleCommands* this_00;
        Layout* this_01;
        undefined8 uVar2;

        this_00 = (ConsoleCommands*)std::unique_ptr<ConsoleCommands, std::default_delete<ConsoleCommands>>::operator->(
            (unique_ptr<ConsoleCommands, std::default_delete<ConsoleCommands>>*)&field_584);
        this_01 = (Layout*)this_00->GetCommandHelp(param_1);
        if (this_01 != (Layout*)0) {
            eastl::string::Layout::SSOBeginPtr(this_01, (type*)param_1);
            cVar1 = eastl::basic_string<
                char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::empty();
            if (cVar1 == '\0') {
                eastl::string::Layout::SSOBeginPtr(this_01, (type*)param_1);
                uVar2 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                console::Console::AddMessage(this, 2, uVar2);
            }
            this_01->GetDefaultValue();
            cVar1 = eastl::basic_string<
                char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::empty();
            if (cVar1 == '\0') {
                this_01->GetDefaultValue();
                uVar2 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                console::Console::AddMessage(this, 2, uVar2);
            }
        }
        return this_01 != (Layout*)0;
    }

    // 0x10005e9e0, 112 bytes, placed by class name
    // OSClientConsole::SetCommandLinePos(StringView const&)
    void OSClientConsole::SetCommandLinePos(StringView* param_1) {
        int iVar1;
        StringView local_40[2];

        StringView::to_owned_string<eastl::string>(local_40);
        game::console::CommandLine::SetText<eastl::string>((basic_string*)field_832);
        local_40->~basic_string();
        iVar1 = param_1->HeapBeginPtr();
        (field_832, iVar1)->SetPos();
    }

    // 0x10005eaf0, 16 bytes, placed by class name
    // OSClientConsole::MainLogic(float)
    void OSClientConsole::MainLogic(float param_1) {
        RunPendingCommands(param_1);
    }

    // 0x10005eb00, 64 bytes, placed by class name
    // OSClientConsole::Clear()
    void OSClientConsole::Clear() {
        long* plVar1;
        OSClientConsoleUI* this_00;

        plVar1 = (long*)std::unique_ptr<OSClientConsoleUI, std::default_delete<OSClientConsoleUI>>::operator->(
            (unique_ptr<OSClientConsoleUI, std::default_delete<OSClientConsoleUI>>*)&field_592);
        (**(code**)(*plVar1 + 24))(plVar1);
        this_00 =
            (OSClientConsoleUI*)std::unique_ptr<OSClientConsoleUI, std::default_delete<OSClientConsoleUI>>::operator->(
                (unique_ptr<OSClientConsoleUI, std::default_delete<OSClientConsoleUI>>*)&field_592);
        this_00->SetLayoutDirty();
    }

    // 0x10005eb50, 656 bytes, placed by class name
    // OSClientConsole::LoadCommandHistoryAndVars()
    uint OSClientConsole::LoadCommandHistoryAndVars() {
        bool bVar1;
        uint uVar3;
        undefined8 uVar4;
        undefined8 uVar5;
        undefined8 uVar6;
        char* in_RDX;
        char* extraout_RDX;
        int iVar7;
        File local_300;
        StringVector local_2e0;
        undefined1 local_2a8[320];
        Filename local_168[19];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        bVar1 = eastl::operator==((eastl*)field_1160, (basic_string*)"", in_RDX);
        if ((bVar1) || (bVar1 = eastl::operator==((eastl*)field_1464, (basic_string*)"", extraout_RDX), bVar1)) {
            uVar3 = 0;
        } else {
            Filename::operator/(local_168, (Filename*)field_1160);
            new (local_2a8) callstack::Callstack();
            new ((local_2a8 + 8)) File(local_168, 2, local_2a8);
            uVar3 = local_2a8->IsValid();
            if ((char)uVar3 == '\0') {
                ((local_2a8 + 8))->seek(0, 0, 0);
                new (&local_2e0)
                    eastl::ring_buffer<eastl::string, eastl::vector<eastl::string, eastl::allocator>, eastl::allocator>(
                        128);
                if (0 < field_1768) {
                    iVar7 = 0;
                    do {
                        local_300.readline();
                        if (eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true,
                                                                                    eastl::allocator>>::empty() !=
                            '\0') {
                            local_300.~basic_string();
                            break;
                        }
                        local_2e0.push_back((basic_string*)&local_300);
                        local_300.~basic_string();
                        iVar7 = iVar7 + 1;
                    } while (iVar7 < field_1768);
                }
                SetCommandHistory((ring_buffer*)&local_2e0);
                local_2e0.~StringVector();
            } else {
                uVar4 = logger::default_logger();
                uVar5 = local_168->GetName();
                local_2e0.GetErrorString();
                uVar6 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                logger::Logger::Log(uVar4, 0, 2,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/"
                                    "osclient/debug/OSClientConsole.cpp",
                                    226, "Error opening command history file %s: %s", uVar5, uVar6);
                local_2e0.~basic_string();
            }
            uVar3 = uVar3 ^ 1;
            ((local_2a8 + 8))->~File();
            local_168->~pair();
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return uVar3;
    }

    // 0x10005ede0, 736 bytes, placed by class name
    // OSClientConsole::SaveCommandHistoryAndVars()
    uint OSClientConsole::SaveCommandHistoryAndVars() {
        undefined1* this_00;
        eastl* this_01;
        bool bVar1;
        char cVar2;
        uint uVar3;
        LoginManager* this_02;
        long lVar4;
        undefined8 uVar5;
        undefined8 uVar6;
        undefined8 uVar7;
        int* piVar8;
        basic_string* pbVar9;
        char* extraout_RDX;
        undefined1 auVar10[16];
        int local_2ac;
        undefined1 local_2a8[8];
        Filename local_2a0[19];
        File local_170[13];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        auVar10 = GetOrigin();
        this_02 = auVar10._0_8_;
        this_00 = field_1160;
        bVar1 = eastl::operator==((eastl*)this_00, (basic_string*)"", auVar10._8_8_);
        if (!bVar1) {
            bVar1 = eastl::operator==((eastl*)field_1464, (basic_string*)"", extraout_RDX);
            if (!bVar1) {
                lVar4 = this_02->GetAuthWrapper();
                if (lVar4 != 0) {
                    cVar2 = this_00->Exists();
                    if (cVar2 == '\0') {
                        new (local_170) callstack::Callstack();
                        this_00->CreateDirectories(local_170);
                        cVar2 = local_170->IsValid();
                        if (cVar2 != '\0') {
                            uVar5 = logger::default_logger();
                            uVar6 = this_00->GetName();
                            uVar3 = 0;
                            logger::Logger::Log(uVar5, 0, 2,
                                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/"
                                                "projects/osclient/debug/OSClientConsole.cpp",
                                                261, "Error creating command history directory at %s", uVar6);
                            goto LAB_10005eecd;
                        }
                    }
                    new (local_2a8) callstack::Callstack();
                    Filename::operator/((Filename*)(local_2a8 + 8), (Filename*)this_00);
                    File::File(local_170, (Filename*)(local_2a8 + 8), 1538, (Error*)local_2a8);
                    ((local_2a8 + 8))->~pair();
                    uVar3 = local_2a8->IsValid();
                    if ((char)uVar3 == '\0') {
                        local_2ac = this_02->GetAuthWrapper();
                        piVar8 = std::min<int>(&local_2ac, &field_1768);
                        if (0 < (long)*piVar8) {
                            lVar4 = (long)*piVar8 + 1;
                            this_01 = (eastl*)(local_2a8 + 8);
                            do {
                                pbVar9 = (basic_string*)eastl::ring_buffer<
                                    eastl::string, eastl::vector<eastl::string, eastl::allocator>, eastl::allocator>::
                                operator[]((ring_buffer<eastl::string, eastl::vector<eastl::string, eastl::allocator>,
                                                        eastl::allocator>*)this_02,
                                           lVar4 - 2);
                                eastl::operator+(this_01, pbVar9, (value_type*)&DAT_100e3824c);
                                local_170->write(this_01, 0);
                                this_01->~basic_string();
                                lVar4 = lVar4 + -1;
                            } while (1 < lVar4);
                        }
                        local_170->close(0);
                    } else {
                        uVar5 = logger::default_logger();
                        uVar6 = this_00->GetName();
                        ((local_2a8 + 8))->GetErrorString();
                        uVar7 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                        logger::Logger::Log(uVar5, 0, 2,
                                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/"
                                            "osclient/debug/OSClientConsole.cpp",
                                            270, "Error creating command history file %s: %s", uVar6, uVar7);
                        ((local_2a8 + 8))->~basic_string();
                    }
                    uVar3 = uVar3 ^ 1;
                    local_170->~File();
                    goto LAB_10005eecd;
                }
            }
        }
        uVar3 = 0;
    LAB_10005eecd:
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return uVar3;
    }

    // 0x10005f0d0, 64 bytes, placed by class name
    // OSClientConsole::Draw()
    void OSClientConsole::Draw() {
        OSClientConsoleUI* this_00;

        if (m_open != 0) {
            this_00 = (OSClientConsoleUI*)
                          std::unique_ptr<OSClientConsoleUI, std::default_delete<OSClientConsoleUI>>::operator->(
                              (unique_ptr<OSClientConsoleUI, std::default_delete<OSClientConsoleUI>>*)&field_592);
            this_00->Draw((bool)field_746[0]);
        }
    }

    // 0x10007e0f0, 96 bytes, placed by class name
    // OSClientConsole::Reset()::$_0::operator()(StringView, bool, bool) const
    /* OSClientConsole::Reset()::$_0::TEMPNAMEPLACEHOLDERVALUE(StringView, bool,
   bool) const */

    void OSClientConsole::Reset()::$_0::operator()(StringView param_1, bool param_2, bool param_3) {
        Client* this;
        StringView local_38[2];

        this = *(Client**)(*(long*)param_1.field_0 + 576);
        StringView::to_owned_string<eastl::string>(local_38);
        SendCheatToServer(local_38);
        local_38->~basic_string();
    }

    // 0x10007e260, 176 bytes, placed by class name
    // OSClientConsole::OnFocusChanged()::$_1::operator()(BaseApp*) const
    /* OSClientConsole::OnFocusChanged()::$_1::TEMPNAMEPLACEHOLDERVALUE(BaseApp*)
   const */

    void OSClientConsole::OnFocusChanged()::$_1::operator()(BaseApp* param_1) {
        char cVar1;
        Input* this_00;
        NpcUID* extraout_RDX;
        basic_string<char, BucketAllocatorEASTL> local_40[24];
        eastl local_28[8];

        this_00 = (Input*)(*(code*)param_1->field_0[11])(param_1);
        cVar1 = this_00->IsOnScreenKeyboardVisible();
        if (cVar1 != '\0') {
            if (*this == (__1)0) {
                jag::input::Input::HideOnScreenKeyboard();
                return;
            }
            if (cVar1 != '\0') {
                return;
            }
        }
        if (*this != (__1)0) {
            eastl::destruct<highlight::NpcUID*>(local_28, (NpcUID*)"EASTL basic_string", extraout_RDX);
            eastl::basic_string<char, BucketAllocatorEASTL>::basic_string((char*)local_40, (BucketAllocatorEASTL*)"");
            this_00->ShowOnScreenKeyboard(0, local_40, 4294967295, 0);
            eastl::basic_string<char, BucketAllocatorEASTL>::~basic_string(local_40);
        }
    }

} // namespace jag::oldscape
