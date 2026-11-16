// projects/osclient/debug/ConsoleInputHandler.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: osclient

namespace jag::oldscape {
    class ConsoleInputHandler : public TitlescreenInputHandler // base inferred from shared vtable slots
    {
    public:
        // virtual methods in vtable order
        virtual KeyPressed(int, unsigned long long);
        virtual KeyRepeat(int, unsigned long long);
        virtual KeyReleased(int, unsigned long long);
        virtual ulong KeyTyped(char16_t, unsigned long long);
        virtual ulong PointerPress(int, int, int, int, unsigned long long);
        virtual PointerRelease(int, int, int, int, unsigned long long);
        virtual bool PointerDrag(int, int, int, unsigned long long);
        virtual MouseMove(int, int, unsigned long long);
        virtual PointerCancel(int, int, unsigned long long);
        virtual WheelScroll(int, unsigned long long);
        virtual void ResetState();
        virtual ~ConsoleInputHandler();
        OnLowLevelMouseDown(int, int, int, int);
        TextCommandReceived(int, unsigned long long);
        KeyboardInputFocusChange(int, unsigned long long);
        ConsoleInputHandler(OSClientConsole&);
        HandleKeyDown(int);
        GetUIScaledPoint(int, int) const;
        void GetUIScale() const;

        // data members, from how the methods use this: 44 bytes, the first 35 are TitlescreenInputHandler
        char _unknown_35[9];
    };

    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    ConsoleInputHandler::~ConsoleInputHandler();

    // 0x100029ea0: the linker folded this into InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long), which has identical code
    ConsoleInputHandler::PointerCancel(int, int, unsigned long long);

    // 0x100029ea0: the linker folded this into InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long), which has identical code
    ConsoleInputHandler::OnLowLevelMouseDown(int, int, int, int);

    // 0x100029ea0: the linker folded this into InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long), which has identical code
    ConsoleInputHandler::TextCommandReceived(int, unsigned long long);

    // 0x100029ea0: the linker folded this into InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long), which has identical code
    ConsoleInputHandler::KeyboardInputFocusChange(int, unsigned long long);

    // 0x10002a770: the linker folded this into void eastl::destruct<rs2lib::CoordMapSquare*>(rs2lib::CoordMapSquare*, rs2lib::CoordMapSquare*), which has identical code
    ConsoleInputHandler::~ConsoleInputHandler();

    // 0x10004af40: the linker folded this into std::__function::__func<std::__bind<void (Client::*)(), Client*&>, std::allocator<std::__bind<void (Client::*)(), Client*&> >, void (ClientWindowMode)>::~__func(), which has identical code
    ConsoleInputHandler::~ConsoleInputHandler();

    // 0x10005cae0, 96 bytes, base-object constructor, placed by class name
    // ConsoleInputHandler::ConsoleInputHandler(OSClientConsole&)
    void ConsoleInputHandler::ConsoleInputHandler(OSClientConsole* param_1) {
        bool local_19;

        new (this) input::InputHandler(param_1);
        field_0 = &PTR_KeyPressed_100ef2698;
        field_8 = param_1;
        field_16 = 0;
        field_17 = '\0';
        new (&field_20) jag::math::Vector2T<int>();
        field_28 = 0;
        field_32 = 0;
        local_19 = false;
        (&field_36, &local_19)->fill();
    }

    // 0x10005cb70, 16 bytes, complete-object constructor, placed by class name
    // ConsoleInputHandler::ConsoleInputHandler(OSClientConsole&): jumps straight to the base-object constructor

    // 0x10005cb80, 976 bytes, placed by class name
    // ConsoleInputHandler::HandleKeyDown(int)
    undefined8 ConsoleInputHandler::HandleKeyDown(int param_1) {
        char cVar1;
        CommandLine* this_00;
        OSClientConsoleUI* pOVar2;
        undefined8 uVar3;

        this_00 = (CommandLine*)field_8->GetLightOrthProjMax();
        uVar3 = 0;
        switch (param_1) {
        case 13:
            cVar1 = field_8->HasFocus();
            uVar3 = 1;
            if (cVar1 != '\0') {
                (field_8, false)->Focus();
            }
            break;
        case 48:
            uVar3 = 1;
            if (field_17 != '\0') {
                this_00->SelectAll();
            }
            break;
        case 65:
            uVar3 = 1;
            if (field_17 != '\0') {
                this_00->ClipboardCut();
            }
            break;
        case 66:
            uVar3 = 1;
            if (field_17 != '\0') {
                cVar1 = this_00->IsEmpty();
                if (cVar1 == '\0') {
                    this_00->ClipboardCopy();
                } else {
                    pOVar2 = (OSClientConsoleUI*)field_8->GetConsoleUI();
                    pOVar2->CopyEntireBufferToClipboard();
                }
            }
            break;
        case 67:
            uVar3 = 1;
            if (field_17 != '\0') {
                field_8->PasteFromClipboard();
            }
            break;
        case 84:
            field_8->AddPendingCommandFromInput();
            uVar3 = 1;
            break;
        case 85:
            if (field_17 == '\0') {
                this_00->Backspace();
                uVar3 = 1;
            } else {
                this_00->DelWordLeft();
                uVar3 = 1;
            }
            break;
        case 96:
            if (field_17 == '\0') {
                this_00->Left();
                uVar3 = 1;
            } else {
                this_00->WordLeft();
                uVar3 = 1;
            }
            break;
        case 97:
            if (field_17 == '\0') {
                this_00->Right();
                uVar3 = 1;
            } else {
                this_00->WordRight();
                uVar3 = 1;
            }
            break;
        case 98:
            field_8->SetCommandLineToPrevious();
            uVar3 = 1;
            break;
        case 99:
            field_8->SetCommandLineToNext();
            uVar3 = 1;
            break;
        case 101:
            if (field_17 == '\0') {
                this_00->Delete();
                uVar3 = 1;
            } else {
                this_00->DelWordRight();
                uVar3 = 1;
            }
            break;
        case 102:
            this_00->Home();
            uVar3 = 1;
            break;
        case 103:
            this_00->End();
            uVar3 = 1;
            break;
        case 104:
            cVar1 = field_17;
            pOVar2 = (OSClientConsoleUI*)field_8->GetConsoleUI();
            if (cVar1 == '\0') {
                pOVar2->PageUp();
                uVar3 = 1;
            } else {
                pOVar2->Home();
                uVar3 = 1;
            }
            break;
        case 105:
            cVar1 = field_17;
            pOVar2 = (OSClientConsoleUI*)field_8->GetConsoleUI();
            if (cVar1 == '\0') {
                pOVar2->PageDown();
                uVar3 = 1;
            } else {
                pOVar2->End();
                uVar3 = 1;
            }
        }
        return uVar3;
    }

    // 0x10005d4f0, 160 bytes, placed by class name
    // ConsoleInputHandler::KeyPressed(int, unsigned long long)
    undefined8 ConsoleInputHandler::KeyPressed(int param_1, ulonglong param_2) {
        char cVar1;
        int iVar2;
        Model* this_00;
        undefined1* puVar3;

        if (param_1 == 81) {
            this_00 = (Model*)field_8->GetLightOrthProjMax();
            this_00->SetSelecting(true);
            iVar2 = this_00->GetLevel();
            if (iVar2 == -1) {
                iVar2 = this_00->GetPos();
                this_00->SetSelectionStart(iVar2);
            }
        } else {
            if (param_1 == 82) {
                field_17 = '\x01';
            } else if (param_1 == 86) {
                field_16 = 1;
            }
            cVar1 = field_8->IsOpen();
            if ((cVar1 != '\0') && (cVar1 = field_8->HasFocus(), cVar1 != '\0')) {
                puVar3 =
                    (undefined1*)std::array<bool, 108ul>::operator[]((array<bool, 108ul>*)&field_36, (long)param_1);
                *puVar3 = 1;
                return HandleKeyDown(this, param_1);
            }
        }
        return 0;
    }

    // 0x10005d5c0, 64 bytes, placed by class name
    // ConsoleInputHandler::KeyRepeat(int, unsigned long long)
    undefined8 ConsoleInputHandler::KeyRepeat(int param_1, ulonglong param_2) {
        char cVar1;

        cVar1 = field_8->IsOpen();
        if ((cVar1 == '\0') || (cVar1 = field_8->HasFocus(), cVar1 == '\0')) {
            return 0;
        }
        return HandleKeyDown(this, param_1);
    }

    // 0x10005d600, 112 bytes, placed by class name
    // ConsoleInputHandler::KeyReleased(int, unsigned long long)
    undefined8 ConsoleInputHandler::KeyReleased(int param_1, ulonglong param_2) {
        CommandLine* this_00;
        undefined1* puVar2;

        if (param_1 == 81) {
            this_00 = (CommandLine*)field_8->GetLightOrthProjMax();
            this_00->SetSelecting(false);
        } else if (param_1 == 82) {
            field_17 = '\0';
        } else if (param_1 == 86) {
            field_16 = 0;
        }
        if (field_8->IsOpen() != '\0') {
            puVar2 = (undefined1*)std::array<bool, 108ul>::operator[]((array<bool, 108ul>*)&field_36, (long)param_1);
            *puVar2 = 0;
        }
        return 0;
    }

    // 0x10005d670, 160 bytes, placed by class name
    // ConsoleInputHandler::KeyTyped(char16_t, unsigned long long)
    ulong ConsoleInputHandler::KeyTyped(wchar16 param_1, ulonglong param_2) {
        char cVar1;
        CommandLine* this_00;
        undefined8 unaff_R14;
        undefined7 uVar3;
        ulong uVar2;

        uVar3 = (undefined7)((ulong)unaff_R14 >> 8);
        if ((param_1 == L'`') && (field_16 != '\0')) {
            field_8->ToggleConsole();
            uVar2 = CONCAT71(uVar3, 1);
        } else {
            cVar1 = field_8->IsOpen();
            if (cVar1 != '\0') {
                cVar1 = field_8->HasFocus();
                if (cVar1 != '\0') {
                    uVar2 = CONCAT71(uVar3, 1);
                    if ((param_1 != L'\x80') && ((ushort)(param_1 + L'￠') < 160)) {
                        this_00 = (CommandLine*)field_8->GetLightOrthProjMax();
                        cVar1 = stringtools::WideToCP1252(param_1);
                        this_00->Insert(cVar1);
                    }
                    goto LAB_10005d6f9;
                }
            }
            uVar2 = 0;
        }
    LAB_10005d6f9:
        return uVar2 & 4294967295;
    }

    // 0x10005d740, 272 bytes, placed by class name
    // ConsoleInputHandler::PointerPress(int, int, int, int, unsigned long long)
    ulong ConsoleInputHandler::PointerPress(int param_1, int param_2, int param_3, int param_4, ulonglong param_5) {
        int iVar1;
        int iVar3;
        MapArea* this_00;
        CoordMapSquare* this_01;
        vector* pvVar4;
        int* piVar5;
        ulong uVar6;
        Point<int> local_38[8];
        Layout local_30[8];

        if (param_1 == 0) {
            if (field_8->IsOpen() != '\0') {
                GetUIScaledPoint((ConsoleInputHandler*)local_30, (int)this, param_3);
                this_00 = (MapArea*)field_8->GetConsoleUI();
                this_01 = (CoordMapSquare*)this_00->GetOrigin();
                pvVar4 = eastl::string::Layout::SSOBeginPtr(local_30, (type*)(ConsoleInputHandler*)this);
                iVar1 = *(int*)pvVar4;
                iVar3 = this_01->GetX();
                if (iVar3 <= iVar1) {
                    pvVar4 = eastl::string::Layout::SSOBeginPtr(local_30, (type*)(ConsoleInputHandler*)this);
                    iVar1 = *(int*)pvVar4;
                    iVar3 = this_01->Right();
                    if (iVar1 <= iVar3) {
                        piVar5 = (int*)local_30->y();
                        iVar1 = *piVar5;
                        iVar3 = this_01->GetZ();
                        if (iVar3 <= iVar1) {
                            piVar5 = (int*)local_30->y();
                            iVar1 = *piVar5;
                            iVar3 = this_01->MaxZ();
                            if (iVar1 <= iVar3) {
                                jag::math::Point<int>::Point(local_38, (Point*)local_30);
                                jag::math::Point<int>::operator=((Point<int>*)&field_20, local_38);
                                (field_8, true)->Focus();
                                uVar6 = CONCAT71((int7)((ulong)local_38 >> 8), 1);
                                goto LAB_10005d804;
                            }
                        }
                    }
                }
                uVar6 = 0;
                (field_8, false)->Focus();
                goto LAB_10005d804;
            }
        }
        uVar6 = 0;
    LAB_10005d804:
        return uVar6 & 4294967295;
    }

    // 0x10005d850, 112 bytes, placed by class name
    // ConsoleInputHandler::GetUIScaledPoint(int, int) const
    ConsoleInputHandler* ConsoleInputHandler::GetUIScaledPoint(int param_1, int param_2) {
        int iVar1;
        int iVar2;
        int in_ECX;
        undefined4 in_register_00000034;
        float fVar3;

        fVar3 = (float)GetUIScale((ConsoleInputHandler*)CONCAT44(in_register_00000034, param_1));
        iVar1 = jag::math::RoundFloatToInt((float)param_2 * (1.0 / fVar3));
        iVar2 = jag::math::RoundFloatToInt((float)in_ECX * (1.0 / fVar3));
        new (this) sidebars::SideBarData(iVar1, iVar2);
        return this;
    }

    // 0x10005d8f0, 48 bytes, placed by class name
    // ConsoleInputHandler::PointerRelease(int, int, int, int, unsigned long long)
    undefined8 ConsoleInputHandler::PointerRelease(int param_1, int param_2, int param_3, int param_4,
                                                   ulonglong param_5) {
        if (param_1 == 0) {
            field_28 = 0;
            field_32 = 0;
        } else if (param_1 == 3) {
            field_8->ToggleConsole();
        }
        return 0;
    }

    // 0x10005d920, 240 bytes, placed by class name
    // ConsoleInputHandler::PointerDrag(int, int, int, unsigned long long)
    bool ConsoleInputHandler::PointerDrag(int param_1, int param_2, int param_3, ulonglong param_4) {
        undefined1* this_00;
        int iVar1;
        int iVar2;
        int iVar3;
        int iVar5;
        OSClientConsoleUI* pOVar6;
        vector* pvVar7;
        int* piVar8;
        ConsoleInputHandler* pCVar9;
        Point<int> local_48[8];
        undefined1 local_40[16];

        if (param_1 != 0) {
            return false;
        }
        pCVar9 = this;
        GetUIScaledPoint((ConsoleInputHandler*)(local_40 + 8), (int)this, param_2);
        if (field_28 == '\0') {
            if (field_8->IsOpen() != '\0') {
                pOVar6 = (OSClientConsoleUI*)field_8->GetConsoleUI();
                pCVar9 = (ConsoleInputHandler*)(local_40 + 8);
                iVar5 = pOVar6->GetDragTypeAtPosition(pCVar9);
                field_32 = iVar5;
                field_28 = 1;
            }
        }
        iVar5 = field_32;
        if (iVar5 != 0) {
            pvVar7 = ((local_40 + 8))->SSOBeginPtr(pCVar9);
            iVar1 = *(int*)pvVar7;
            this_00 = &field_20;
            pvVar7 = this_00->SSOBeginPtr(pCVar9);
            iVar2 = *(int*)pvVar7;
            piVar8 = (int*)((local_40 + 8))->y();
            iVar3 = *piVar8;
            piVar8 = (int*)this_00->y();
            new (local_40) sidebars::SideBarData(iVar1 - iVar2, iVar3 - *piVar8);
            pOVar6 = (OSClientConsoleUI*)field_8->GetConsoleUI();
            pOVar6->HandlePointerDrag(field_32, local_40);
            jag::math::Point<int>::Point(local_48, (Point*)(local_40 + 8));
            jag::math::Point<int>::operator=((Point<int>*)this_00, local_48);
        }
        return iVar5 != 0;
    }

    // 0x10005ddf0, 64 bytes, placed by class name
    // ConsoleInputHandler::MouseMove(int, int, unsigned long long)
    undefined8 ConsoleInputHandler::MouseMove(int param_1, int param_2, ulonglong param_3) {
        undefined1 local_20[8];

        GetUIScaledPoint((ConsoleInputHandler*)local_20, (int)this, param_1);
        jag::math::Point<int>::operator=((Point<int>*)&field_20, (ConsoleInputHandler*)local_20);
        return 0;
    }

    // 0x10005de30, 48 bytes, placed by class name
    // ConsoleInputHandler::WheelScroll(int, unsigned long long)
    undefined1 ConsoleInputHandler::WheelScroll(int param_1, ulonglong param_2) {
        OSClientConsoleUI* this_00;

        this_00 = (OSClientConsoleUI*)field_8->GetConsoleUI();
        this_00->ScrollLines(param_1);
        return 1;
    }

    // 0x10005dea0, 64 bytes, placed by class name
    // ConsoleInputHandler::ResetState()
    void ConsoleInputHandler::ResetState() {
        undefined1 local_20[8];

        new (local_20) sidebars::SideBarData(-1, -1);
        jag::math::Point<int>::operator=((Point<int>*)&field_20, (SideBarData*)local_20);
    }

    // 0x10005dee0, 48 bytes, placed by class name
    // ConsoleInputHandler::GetUIScale() const
    void ConsoleInputHandler::GetUIScale() {
        Js5ResourceProvider* this_00;
        NXTPixToolkit* this_01;
        SoundInstance* this_02;

        this_00 = (Js5ResourceProvider*)field_8->GetClient();
        this_01 = (NXTPixToolkit*)this_00->GetMemoryCache();
        this_02 = (SoundInstance*)this_01->GetScreen();
        this_02->GetSoundSpatialSizeMax();
    }

} // namespace jag::oldscape
