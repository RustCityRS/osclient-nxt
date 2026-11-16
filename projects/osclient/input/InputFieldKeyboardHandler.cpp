// projects/osclient/input/InputFieldKeyboardHandler.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: osclient

#include "InputFieldKeyboardHandler.h"

namespace jag::oldscape {
    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    InputFieldKeyboardHandler::ResetState();

    // 0x100017c60, 64 bytes, base-object constructor, placed by class name
    // InputFieldKeyboardHandler::InputFieldKeyboardHandler()
    void InputFieldKeyboardHandler::InputFieldKeyboardHandler() {
        InputHandler* in_RSI;

        new (this) input::InputHandler(in_RSI);
        field_0 = &PTR_KeyPressed_100ef0d90;
        new (&field_8, (_func_decltype_nullptr*)in_RSI) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>();
        field_24 = false;
        field_25 = 0;
        field_26 = 0;
    }

    // 0x100017cb0, 16 bytes, complete-object constructor, placed by class name
    // InputFieldKeyboardHandler::InputFieldKeyboardHandler(): jumps straight to the base-object constructor

    // 0x100017cc0, 240 bytes, placed by class name
    // InputFieldKeyboardHandler::SetFocusedComponent(shared_ptr<rs2lib::IfType>)
    void InputFieldKeyboardHandler::SetFocusedComponent(shared_ptr param_1) {
        char cVar2;
        IfType* this_00;
        InputField* this_01;
        Client* this_02;
        list<HookReq, eastl::allocator>* this_03;
        shared_ptr* in_RSI;
        undefined1 local_98[128];

        ClearFocusedComponent(this);
        if (shared_ptr::operator_cast_to_bool(in_RSI)) {
            weak_ptr<rs2lib::IfType>::operator=((weak_ptr<rs2lib::IfType>*)&field_8, in_RSI);
            this_00 = (IfType*)shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)in_RSI);
            this_01 = (InputField*)this_00->GetInputFieldWrapper();
            if (this_01 != (InputField*)0) {
                this_01->SetFocus(true);
                cVar2 = this_01[5].field_32.empty();
                if (cVar2 == '\0') {
                    new (local_98) HookReq();
                    shared_ptr<rs2lib::IfType>::operator=((shared_ptr<rs2lib::IfType>*)(local_98 + 32), in_RSI);
                    Array<HookArg, eastl::allocator>::operator=((Array<HookArg, eastl::allocator>*)local_98,
                                                                (Array*)&this_01[5].field_32);
                    this_02 = (Client*)Client::Instance();
                    this_03 = (list<HookReq, eastl::allocator>*)this_02->GetHookQueue();
                    eastl::list<HookReq, eastl::allocator>::push_back(this_03, (HookReq*)local_98);
                    local_98->~HookReq();
                }
            }
        }
    }

    // 0x100017db0, 256 bytes, placed by class name
    // InputFieldKeyboardHandler::ClearFocusedComponent()
    void InputFieldKeyboardHandler::ClearFocusedComponent() {
        IfType* this_00;
        Client* this_01;
        list<HookReq, eastl::allocator>* this_02;
        char cVar2;
        InputField* this_03;
        undefined1 local_a0[128];
        shared_ptr local_20;

        weak_ptr<rs2lib::IfType>::lock();
        weak_ptr<rs2lib::IfType>::reset();
        if (shared_ptr::operator_cast_to_bool(&local_20)) {
            this_00 = (IfType*)shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)&local_20);
            this_03 = (InputField*)this_00->GetInputFieldWrapper();
            if (this_03 != (InputField*)0) {
                this_03->SetFocus(false);
                cVar2 = this_03[5].field_32.empty();
                if (cVar2 == '\0') {
                    new (local_a0) HookReq();
                    shared_ptr<rs2lib::IfType>::operator=((shared_ptr<rs2lib::IfType>*)(local_a0 + 32), &local_20);
                    Array<HookArg, eastl::allocator>::operator=((Array<HookArg, eastl::allocator>*)local_a0,
                                                                (Array*)&this_03[5].field_32);
                    this_01 = (Client*)Client::Instance();
                    this_02 = (list<HookReq, eastl::allocator>*)this_01->GetHookQueue();
                    eastl::list<HookReq, eastl::allocator>::push_back(this_02, (HookReq*)local_a0);
                    local_a0->~HookReq();
                }
            }
        }
        local_20.~shared_ptr();
    }

    // 0x100017f30, 1280 bytes, placed by class name
    // InputFieldKeyboardHandler::HandleKeyDown(int)
    ulong InputFieldKeyboardHandler::HandleKeyDown(int param_1) {
        char cVar2;
        IfType* pIVar4;
        InputField* this_00;
        long lVar5;
        Client* this_01;
        list<HookReq, eastl::allocator>* this_02;
        shared_ptr* this_03;
        undefined1 local_b8[128];
        shared_ptr local_38;

        this_03 = &local_38;
        weak_ptr<rs2lib::IfType>::lock();
        if (!shared_ptr::operator_cast_to_bool(this_03)) {
        LAB_100017fce:
            this_03 = (shared_ptr*)0;
            goto switchD_100018005_caseD_e;
        }
        pIVar4 = (IfType*)shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)&local_38);
        this_00 = (InputField*)pIVar4->GetInputField();
        if ((this_00 == (InputField*)0) || (cVar2 = this_00->Is64BitOS(), cVar2 == '\0'))
            goto LAB_100017fce;
        cVar2 = this_00->HasFocus();
        if (cVar2 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("inputField->HasFocus()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/input/"
                      "InputFieldKeyboardHandler.cpp",
                      73, "The InputField referenced by the InputFieldKeyboardHandler does not know it is in focus");
        }
        cVar2 = HandleArrowKeyDown(this, this_00, param_1);
        if (cVar2 != '\0')
            goto LAB_100017fca;
        this_03 = (shared_ptr*)0;
        switch (param_1) {
        case 13:
            ClearFocusedComponent(this);
            this_03 = (shared_ptr*)&DAT_00000001;
            break;
        case 48:
            cVar2 = KeysModified(this);
            if (cVar2 != '\0') {
                this_00->SelectAll();
                this_03 = (shared_ptr*)&DAT_00000001;
                break;
            }
            goto LAB_100017fca;
        case 65:
            cVar2 = KeysModified(this);
            if (cVar2 != '\0') {
                this_00->CutSelection();
                this_03 = (shared_ptr*)&DAT_00000001;
                break;
            }
            goto LAB_100017fca;
        case 66:
            cVar2 = KeysModified(this);
            if (cVar2 != '\0') {
                this_00->CopySelection();
                this_03 = (shared_ptr*)&DAT_00000001;
                break;
            }
            goto LAB_100017fca;
        case 67:
            cVar2 = KeysModified(this);
            if (cVar2 != '\0') {
                this_00->PasteFromClipboard();
                this_03 = (shared_ptr*)&DAT_00000001;
                break;
            }
        LAB_100017fca:
            this_03 = (shared_ptr*)CONCAT71((int7)((ulong)this_03 >> 8), 1);
            break;
        case 84:
            if (this_00->GetMaxLevels() == 0) {
                this_00->TypeCharacter(10);
                this_03 = (shared_ptr*)&DAT_00000001;
            } else if ((field_24 == false) || (cVar2 = this_00->IsMultiline(), cVar2 == '\0')) {
                pIVar4 = (IfType*)shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)&local_38);
                lVar5 = pIVar4->GetInputFieldWrapper();
                if (lVar5 != 0) {
                    new (local_b8) HookReq();
                    shared_ptr<rs2lib::IfType>::operator=((shared_ptr<rs2lib::IfType>*)(local_b8 + 32), &local_38);
                    this_03 = (shared_ptr*)(lVar5 + 1640);
                    Array<HookArg, eastl::allocator>::operator=((Array<HookArg, eastl::allocator>*)local_b8,
                                                                (Array*)this_03);
                    this_01 = (Client*)Client::Instance();
                    this_02 = (list<HookReq, eastl::allocator>*)this_01->GetHookQueue();
                    eastl::list<HookReq, eastl::allocator>::push_back(this_02, (HookReq*)local_b8);
                    local_b8->~HookReq();
                }
                ClearFocusedComponent(this);
                this_03 = (shared_ptr*)CONCAT71((int7)((ulong)this_03 >> 8), 1);
            } else {
                this_00->TypeCharacter(10);
                this_03 = (shared_ptr*)&DAT_00000001;
            }
            break;
        case 85:
            cVar2 = KeysModified(this);
            if (cVar2 == '\0') {
                this_00->Backspace();
                this_03 = (shared_ptr*)&DAT_00000001;
            } else {
                this_00->BackspaceWord();
                this_03 = (shared_ptr*)&DAT_00000001;
            }
            break;
        case 101:
            cVar2 = KeysModified(this);
            if (cVar2 == '\0') {
                this_00->Delete();
                this_03 = (shared_ptr*)&DAT_00000001;
            } else {
                this_00->DeleteWord();
                this_03 = (shared_ptr*)&DAT_00000001;
            }
            break;
        case 102:
            cVar2 = KeysModified(this);
            if (cVar2 == '\0') {
                this_00->LineHome(field_24);
                this_03 = (shared_ptr*)&DAT_00000001;
            } else {
                this_00->FullHome(field_24);
                this_03 = (shared_ptr*)&DAT_00000001;
            }
            break;
        case 103:
            cVar2 = KeysModified(this);
            if (cVar2 == '\0') {
                this_00->LineEnd(field_24);
                this_03 = (shared_ptr*)&DAT_00000001;
            } else {
                this_00->FullEnd(field_24);
                this_03 = (shared_ptr*)&DAT_00000001;
            }
            break;
        case 104:
            cVar2 = KeysModified(this);
            if (cVar2 == '\0') {
                this_00->PageUp(field_24);
                this_03 = (shared_ptr*)&DAT_00000001;
            } else {
                this_00->PageUpNoScroll(field_24);
                this_03 = (shared_ptr*)&DAT_00000001;
            }
            break;
        case 105:
            cVar2 = KeysModified(this);
            if (cVar2 == '\0') {
                this_00->PageDown(field_24);
                this_03 = (shared_ptr*)&DAT_00000001;
            } else {
                this_00->PageDownNoScroll(field_24);
                this_03 = (shared_ptr*)&DAT_00000001;
            }
        }
    switchD_100018005_caseD_e:
        local_38.~shared_ptr();
        return (ulong)this_03 & 4294967295;
    }

    // 0x1000186d0, 32 bytes, placed by class name
    // InputFieldKeyboardHandler::ModifierKeyPressed(int)
    undefined8 InputFieldKeyboardHandler::ModifierKeyPressed(int param_1) {
        if (param_1 == 86) {
            field_26 = 1;
        } else {
            if (param_1 != 107) {
                return 0;
            }
            field_25 = 1;
        }
        return 1;
    }

    // 0x100018740, 16 bytes, placed by class name
    // InputFieldKeyboardHandler::KeyRepeat(int, unsigned long long)
    void InputFieldKeyboardHandler::KeyRepeat(int param_1, ulonglong param_2) {
        (*(code*)*field_0)();
    }

    // 0x100018750, 48 bytes, placed by class name
    // InputFieldKeyboardHandler::KeyReleased(int, unsigned long long)
    undefined8 InputFieldKeyboardHandler::KeyReleased(int param_1, ulonglong param_2) {
        if ((ModifierKeyReleased(this, param_1) == '\0') && (param_1 == 81)) {
            field_24 = false;
        }
        return 0;
    }

    // 0x100018780, 32 bytes, placed by class name
    // InputFieldKeyboardHandler::ModifierKeyReleased(int)
    undefined8 InputFieldKeyboardHandler::ModifierKeyReleased(int param_1) {
        if (param_1 == 86) {
            field_26 = 0;
        } else {
            if (param_1 != 107) {
                return 0;
            }
            field_25 = 0;
        }
        return 1;
    }

    // 0x1000187a0, 240 bytes, placed by class name
    // InputFieldKeyboardHandler::KeyTyped(char16_t, unsigned long long)
    undefined4 InputFieldKeyboardHandler::KeyTyped(wchar16 param_1, ulonglong param_2) {
        char cVar2;
        byte bVar3;
        undefined4 uVar4;
        IfType* pIVar5;
        InputField* this_00;
        KeyConsumptionMap* this_01;
        Client* this_02;
        shared_ptr local_30;

        weak_ptr<rs2lib::IfType>::lock();
        if (shared_ptr::operator_cast_to_bool(&local_30)) {
            pIVar5 = (IfType*)shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)&local_30);
            this_00 = (InputField*)pIVar5->GetInputField();
            if (this_00 != (InputField*)0) {
                cVar2 = this_00->Is64BitOS();
                if (cVar2 != '\0') {
                    pIVar5 = (IfType*)shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)&local_30);
                    this_01 = (KeyConsumptionMap*)pIVar5->GetInputFieldKeyMap();
                    if (this_01 != (KeyConsumptionMap*)0) {
                        cVar2 = this_01->UseChar(param_1);
                        if (cVar2 != '\0') {
                            bVar3 = stringtools::WideToCP1252(param_1);
                            cVar2 = this_00->TypeCharacter((uint)bVar3);
                            if (cVar2 != '\0') {
                                this_02 = (Client*)Client::Instance();
                                this_02->ComponentUpdated(&local_30);
                            }
                        }
                        uVar4 = this_01->ConsumeChar(param_1);
                        goto LAB_10001885a;
                    }
                }
            }
        }
        uVar4 = 0;
    LAB_10001885a:
        local_30.~shared_ptr();
        return uVar4;
    }

    // 0x1000188f0, 304 bytes, placed by class name
    // InputFieldKeyboardHandler::TextCommandReceived(int, unsigned long long)
    ulong InputFieldKeyboardHandler::TextCommandReceived(int param_1, ulonglong param_2) {
        char cVar2;
        IfType* this_00;
        InputField* this_01;
        undefined7 uVar4;
        ulong uVar3;
        shared_ptr local_30;

        weak_ptr<rs2lib::IfType>::lock();
        if (shared_ptr::operator_cast_to_bool(&local_30)) {
            this_00 = (IfType*)shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)&local_30);
            this_01 = (InputField*)this_00->GetInputField();
            if ((this_01 != (InputField*)0) && (cVar2 = this_01->Is64BitOS(), cVar2 != '\0')) {
                cVar2 = this_01->HasFocus();
                if (cVar2 == '\0') {
                    /* WARNING: Subroutine does not return */
                    LogAssert(
                        "inputField->HasFocus()",
                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/input/"
                        "InputFieldKeyboardHandler.cpp",
                        272, "The InputField referenced by the InputFieldKeyboardHandler does not know it is in focus");
                }
                uVar4 = (undefined7)((ulong)&local_30 >> 8);
                switch (param_1) {
                case 0:
                    uVar3 = CONCAT71(uVar4, 1);
                    this_01->CopySelection();
                    break;
                case 1:
                    uVar3 = CONCAT71(uVar4, 1);
                    this_01->CutSelection();
                    break;
                case 2:
                    uVar3 = CONCAT71(uVar4, 1);
                    this_01->PasteFromClipboard();
                    break;
                case 3:
                    this_01->SelectWord();
                    uVar3 = CONCAT71(uVar4, 1);
                    this_01->ShowEditMenu();
                    break;
                case 4:
                    this_01->SelectAll();
                    uVar3 = CONCAT71(uVar4, 1);
                    this_01->ShowEditMenu();
                    break;
                default:
                    goto switchD_100018987_default;
                }
                goto LAB_100018997;
            }
        }
    switchD_100018987_default:
        uVar3 = 0;
    LAB_100018997:
        local_30.~shared_ptr();
        return uVar3 & 4294967295;
    }

    // 0x100029ea0: the linker folded this into InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long), which has identical code
    InputFieldKeyboardHandler::PointerDrag(int, int, int, unsigned long long);

    // 0x100029ea0: the linker folded this into InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long), which has identical code
    InputFieldKeyboardHandler::WheelScroll(int, unsigned long long);

    // 0x100029ea0: the linker folded this into InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long), which has identical code
    InputFieldKeyboardHandler::PointerCancel(int, int, unsigned long long);

    // 0x100029ea0: the linker folded this into InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long), which has identical code
    InputFieldKeyboardHandler::PointerRelease(int, int, int, int, unsigned long long);

    // 0x100029ea0: the linker folded this into InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long), which has identical code
    InputFieldKeyboardHandler::OnLowLevelMouseDown(int, int, int, int);

    // 0x100029ea0: the linker folded this into InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long), which has identical code
    InputFieldKeyboardHandler::KeyboardInputFocusChange(int, unsigned long long);

    // 0x100029ea0: the linker folded this into InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long), which has identical code
    InputFieldKeyboardHandler::MouseMove(int, int, unsigned long long);

} // namespace jag::oldscape
