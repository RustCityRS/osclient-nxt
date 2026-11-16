// projects/osclient/debug/ConsoleInputHandler.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: osclient

namespace jag::oldscape {
    class ConsoleInputHandler : public TitlescreenInputHandler // base inferred from shared vtable slots
    {
    public:
        // virtual methods in vtable order
        virtual uint64_t KeyPressed(int arg1, unsigned long long arg2);
        virtual uint64_t KeyRepeat(int arg1, unsigned long long arg2);
        virtual uint64_t KeyReleased(int arg1, unsigned long long arg2);
        virtual unsigned long KeyTyped(char16_t arg1, unsigned long long arg2);
        virtual unsigned long PointerPress(int arg1, int arg2, int arg3, int arg4, unsigned long long arg5);
        virtual uint64_t PointerRelease(int arg1, int arg2, int arg3, int arg4, unsigned long long arg5);
        virtual bool PointerDrag(int arg1, int arg2, int arg3, unsigned long long arg4);
        virtual uint64_t MouseMove(int arg1, int arg2, unsigned long long arg3);
        virtual uint64_t PointerCancel(int arg1, int arg2, unsigned long long arg3);
        virtual uint64_t WheelScroll(int arg1, unsigned long long arg2);
        virtual void ResetState();
        virtual ~ConsoleInputHandler();
        uint64_t OnLowLevelMouseDown(int arg1, int arg2, int arg3, int arg4);
        uint64_t TextCommandReceived(int arg1, unsigned long long arg2);
        uint64_t KeyboardInputFocusChange(int arg1, unsigned long long arg2);
        ConsoleInputHandler(OSClientConsole& osClientConsole);
        uint64_t HandleKeyDown(int arg1);
        ConsoleInputHandler* GetUIScaledPoint(int arg1, int arg2) const;
        void GetUIScale() const;

    private:
        uint8_t _unknown_35[9];
    };

    // 0x100009e70: ConsoleInputHandler::~ConsoleInputHandler() has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

    // 0x100029ea0: ConsoleInputHandler::PointerCancel(int, int, unsigned long long) has the same machine code as InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long)

    // 0x100029ea0: ConsoleInputHandler::OnLowLevelMouseDown(int, int, int, int) has the same machine code as InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long)

    // 0x100029ea0: ConsoleInputHandler::TextCommandReceived(int, unsigned long long) has the same machine code as InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long)

    // 0x100029ea0: ConsoleInputHandler::KeyboardInputFocusChange(int, unsigned long long) has the same machine code as InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long)

    // 0x10005cae0
    ConsoleInputHandler::ConsoleInputHandler(OSClientConsole& osClientConsole)
        : oldscape::input::InputHandler(), field_8(osClientConsole), field_16(0) {
        field_17 = '\0';
        new (&field_20) jag::math::Vector2T();
        field_28 = 0;
        field_32 = 0;
        field_36.fill(false);
    }

    // 0x10005cb80
    uint64_t ConsoleInputHandler::HandleKeyDown(int arg1) {
        bool cVar1;
        OSClientConsoleUI* pOVar2;

        auto this_00 = field_8->GetLightOrthProjMax();
        uint64_t uVar3 = 0;
        switch (arg1) {
        case 13:
            cVar1 = field_8->HasFocus();
            uVar3 = 1;
            if (cVar1) {
                field_8->Focus(false);
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
                if (!cVar1) {
                    this_00->ClipboardCopy();
                } else {
                    pOVar2 = field_8->GetConsoleUI();
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
            pOVar2 = field_8->GetConsoleUI();
            if (!cVar1) {
                pOVar2->PageUp();
                uVar3 = 1;
            } else {
                pOVar2->Home();
                uVar3 = 1;
            }
            break;
        case 105:
            cVar1 = field_17;
            pOVar2 = field_8->GetConsoleUI();
            if (!cVar1) {
                pOVar2->PageDown();
                uVar3 = 1;
            } else {
                pOVar2->End();
                uVar3 = 1;
            }
        }
        return uVar3;
    }

    // 0x10005d4f0
    uint64_t ConsoleInputHandler::KeyPressed(int arg1, unsigned long long arg2) {
        bool cVar1;
        int iVar2;
        Model* this_00;
        uint8_t* puVar3;

        if (arg1 == 81) {
            this_00 = (Model*)field_8->GetLightOrthProjMax();
            this_00->SetSelecting(true);
            iVar2 = this_00->GetLevel();
            if (iVar2 == -1) {
                iVar2 = this_00->GetPos();
                this_00->SetSelectionStart(iVar2);
            }
        } else {
            if (arg1 == 82) {
                field_17 = '\x01';
            } else if (arg1 == 86) {
                field_16 = 1;
            }
            cVar1 = field_8->IsOpen();
            if ((cVar1) && (cVar1 = field_8->HasFocus(), cVar1)) {
                puVar3 = (uint8_t*)field_36[(long)arg1];
                *puVar3 = 1;
                return HandleKeyDown(arg1);
            }
        }
        return 0;
    }

    // 0x10005d5c0
    uint64_t ConsoleInputHandler::KeyRepeat(int arg1, unsigned long long arg2) {
        bool cVar1 = field_8->IsOpen();
        if ((!cVar1) || (cVar1 = field_8->HasFocus(), !cVar1)) {
            return 0;
        }
        return HandleKeyDown(arg1);
    }

    // 0x10005d600
    uint64_t ConsoleInputHandler::KeyReleased(int arg1, unsigned long long arg2) {
        uint8_t* puVar2;

        if (arg1 == 81) {
            ((CommandLine*)field_8->GetLightOrthProjMax())->SetSelecting(false);
        } else if (arg1 == 82) {
            field_17 = '\0';
        } else if (arg1 == 86) {
            field_16 = 0;
        }
        if (field_8->IsOpen() != '\0') {
            puVar2 = &field_36[(long)arg1];
            *puVar2 = 0;
        }
        return 0;
    }

    // 0x10005d670
    unsigned long ConsoleInputHandler::KeyTyped(char16_t arg1, unsigned long long arg2) {
        bool cVar1;
        CommandLine* this_00;
        uint64_t unaff_R14;
        unsigned long uVar2;

        uint64_t uVar3 = (uint64_t)((unsigned long)unaff_R14 >> 8);
        if ((arg1 == L'`') && (field_16 != '\0')) {
            field_8->ToggleConsole();
            uVar2 = (((uint64_t)uVar3 << 8) | (uint8_t)1);
        } else {
            cVar1 = field_8->IsOpen();
            if (cVar1) {
                cVar1 = field_8->HasFocus();
                if (cVar1) {
                    uVar2 = (((uint64_t)uVar3 << 8) | (uint8_t)1);
                    if ((arg1 != L'\x80') && ((unsigned short)(arg1 + L'￠') < 160)) {
                        this_00 = (CommandLine*)field_8->GetLightOrthProjMax();
                        cVar1 = stringtools::WideToCP1252(arg1);
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

    // 0x10005d740
    unsigned long ConsoleInputHandler::PointerPress(int arg1, int arg2, int arg3, int arg4, unsigned long long arg5) {
        int iVar1;
        int iVar3;
        MapArea* this_00;
        CoordMapSquare* this_01;
        int* piVar4;
        unsigned long uVar5;
        Point<int> local_38;
        Layout local_30;

        if (arg1 == 0) {
            if (field_8->IsOpen() != '\0') {
                GetUIScaledPoint(&local_30, (int)this, arg3);
                this_00 = (MapArea*)field_8->GetConsoleUI();
                this_01 = (CoordMapSquare*)this_00->GetOrigin();
                piVar4 = (int*)local_30.SSOBeginPtr();
                iVar1 = *piVar4;
                iVar3 = this_01->GetX();
                if (iVar3 <= iVar1) {
                    piVar4 = (int*)local_30.SSOBeginPtr();
                    iVar1 = *piVar4;
                    iVar3 = this_01->Right();
                    if (iVar1 <= iVar3) {
                        piVar4 = (int*)local_30.y();
                        iVar1 = *piVar4;
                        iVar3 = this_01->GetZ();
                        if (iVar3 <= iVar1) {
                            piVar4 = (int*)local_30.y();
                            iVar1 = *piVar4;
                            iVar3 = this_01->MaxZ();
                            if (iVar1 <= iVar3) {
                                local_38 = jag::math::Point(local_30);
                                field_20 = &local_38;
                                field_8->Focus(true);
                                uVar5 = (((uint64_t)((int64_t)((unsigned long)&local_38 >> 8)) << 8) | (uint8_t)1);
                                goto LAB_10005d804;
                            }
                        }
                    }
                }
                uVar5 = 0;
                field_8->Focus(false);
                goto LAB_10005d804;
            }
        }
        uVar5 = 0;
    LAB_10005d804:
        return uVar5 & 4294967295;
    }

    // 0x10005d850
    ConsoleInputHandler* ConsoleInputHandler::GetUIScaledPoint(int arg1, int arg2) const {
        int in_ECX;
        uint32_t in_register_00000034;

        float fVar1 =
            (float)GetUIScale((ConsoleInputHandler*)(((uint64_t)in_register_00000034 << 32) | (uint32_t)arg1));
        int arg1_00 = jag::math::RoundFloatToInt((float)arg2 * (1.0 / fVar1));
        int arg2_00 = jag::math::RoundFloatToInt((float)in_ECX * (1.0 / fVar1));
        new (this) sidebars::SideBarData(arg1_00, arg2_00);
        return this;
    }

    // 0x10005d8f0
    uint64_t ConsoleInputHandler::PointerRelease(int arg1, int arg2, int arg3, int arg4, unsigned long long arg5) {
        if (arg1 == 0) {
            field_28 = 0;
            field_32 = 0;
        } else if (arg1 == 3) {
            field_8->ToggleConsole();
        }
        return 0;
    }

    // 0x10005d920
    bool ConsoleInputHandler::PointerDrag(int arg1, int arg2, int arg3, unsigned long long arg4) {
        uint8_t* this_00;
        int iVar1;
        int iVar2;
        int iVar3;
        int iVar5;
        OSClientConsoleUI* pOVar6;
        int* piVar7;
        Point<int> local_48;
        uint8_t local_40[16];

        if (arg1 != 0) {
            return false;
        }
        GetUIScaledPoint((ConsoleInputHandler*)(local_40 + 8), (int)this, arg2);
        if (field_28 == '\0') {
            if (field_8->IsOpen() != '\0') {
                pOVar6 = field_8->GetConsoleUI();
                iVar5 = pOVar6->GetDragTypeAtPosition(*((local_40 + 8)));
                field_32 = iVar5;
                field_28 = 1;
            }
        }
        iVar5 = field_32;
        if (iVar5 != 0) {
            piVar7 = (int*)((local_40 + 8))->SSOBeginPtr();
            iVar1 = *piVar7;
            this_00 = &field_20;
            piVar7 = (int*)this_00->SSOBeginPtr();
            iVar2 = *piVar7;
            piVar7 = (int*)((local_40 + 8))->y();
            iVar3 = *piVar7;
            piVar7 = (int*)this_00->y();
            new (local_40) sidebars::SideBarData(iVar1 - iVar2, iVar3 - *piVar7);
            pOVar6 = field_8->GetConsoleUI();
            pOVar6->HandlePointerDrag(field_32, *local_40);
            local_48 = jag::math::Point(*((local_40 + 8)));
            *this_00 = &local_48;
        }
        return iVar5 != 0;
    }

    // 0x10005ddf0
    uint64_t ConsoleInputHandler::MouseMove(int arg1, int arg2, unsigned long long arg3) {
        uint8_t local_20[8];

        GetUIScaledPoint((ConsoleInputHandler*)local_20, (int)this, arg1);
        field_20 = local_20;
        return 0;
    }

    // 0x10005de30
    uint64_t ConsoleInputHandler::WheelScroll(int arg1, unsigned long long arg2) {
        field_8->GetConsoleUI()->ScrollLines(arg1);
        return 1;
    }

    // 0x10005dea0
    void ConsoleInputHandler::ResetState() {
        uint8_t local_20[8];

        new (local_20) sidebars::SideBarData(-1, -1);
        field_20 = local_20;
    }

    // 0x10005dee0
    void ConsoleInputHandler::GetUIScale() const {
        auto this_00 = field_8->GetClient();
        auto this_01 = this_00->GetMemoryCache();
        ((SoundInstance*)this_01->GetScreen())->GetSoundSpatialSizeMax();
    }

} // namespace jag::oldscape
