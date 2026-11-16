// projects/osclient/input/InputFieldKeyboardHandler.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: osclient

#include "InputFieldKeyboardHandler.h"

namespace jag::oldscape {
    // 0x100009e70: InputFieldKeyboardHandler::ResetState() has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

    // 0x100017c60
    InputFieldKeyboardHandler::InputFieldKeyboardHandler()
        : oldscape::input::InputHandler(), field_24(false), field_25(0), field_26(0) {}

    // 0x100017cc0
    void InputFieldKeyboardHandler::SetFocusedComponent(shared_ptr<rs2lib::IfType> ifType) {
        InputField* this_01;
        uint8_t local_98[128];

        ClearFocusedComponent();
        if (ifType->operator_cast_to_bool()) {
            field_8 = *ifType;
            this_01 = ((IfType*)(*ifType).operator->())->GetInputFieldWrapper();
            if (this_01 != nullptr) {
                this_01->SetFocus(true);
                if (!(this_01[5].field_32.empty())) {
                    new (local_98) HookReq();
                    (*((local_98 + 32))) = *ifType;
                    *local_98 = this_01[5].field_32;
                    Client::Instance()->GetHookQueue()->push_back(*local_98);
                }
            }
        }
    }

    // 0x100017db0
    void InputFieldKeyboardHandler::ClearFocusedComponent() {
        InputField* this_01;
        uint8_t local_a0[128];

        shared_ptr local_20 = field_8.lock();
        field_8.reset();
        if (shared_ptr::operator_cast_to_bool(&local_20)) {
            this_01 = ((IfType*)local_20.operator->())->GetInputFieldWrapper();
            if (this_01 != nullptr) {
                this_01->SetFocus(false);
                if (!(this_01[5].field_32.empty())) {
                    new (local_a0) HookReq();
                    (*((local_a0 + 32))) = local_20;
                    *local_a0 = this_01[5].field_32;
                    Client::Instance()->GetHookQueue()->push_back(*local_a0);
                }
            }
        }
    }

    // 0x100017f30
    unsigned long InputFieldKeyboardHandler::HandleKeyDown(int arg1) {
        uint8_t local_b8[128];
        shared_ptr local_38;

        shared_ptr* this_02 = &local_38;
        *this_02 = field_8.lock();
        bool cVar1 = shared_ptr::operator_cast_to_bool(this_02);
        if (!cVar1) {
        LAB_100017fce:
            this_02 = nullptr;
            goto switchD_100018005_caseD_e;
        }
        auto pIVar3 = local_38.operator->();
        auto pIVar4 = pIVar3->GetInputField();
        if ((pIVar4 == nullptr) || (cVar1 = pIVar4->Is64BitOS(), !cVar1))
            goto LAB_100017fce;
        cVar1 = pIVar4->HasFocus();
        if (!cVar1) {
            LogAssert("inputField->HasFocus()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/input/"
                      "InputFieldKeyboardHandler.cpp",
                      73, "The InputField referenced by the InputFieldKeyboardHandler does not know it is in focus");
        }
        cVar1 = HandleArrowKeyDown(pIVar4, arg1);
        if (cVar1)
            goto LAB_100017fca;
        this_02 = nullptr;
        switch (arg1) {
        case 13:
            ClearFocusedComponent();
            this_02 = (shared_ptr*)&DAT_00000001;
            break;
        case 48:
            cVar1 = KeysModified();
            if (cVar1) {
                pIVar4->SelectAll();
                this_02 = (shared_ptr*)&DAT_00000001;
                break;
            }
            goto LAB_100017fca;
        case 65:
            cVar1 = KeysModified();
            if (cVar1) {
                pIVar4->CutSelection();
                this_02 = (shared_ptr*)&DAT_00000001;
                break;
            }
            goto LAB_100017fca;
        case 66:
            cVar1 = KeysModified();
            if (cVar1) {
                pIVar4->CopySelection();
                this_02 = (shared_ptr*)&DAT_00000001;
                break;
            }
            goto LAB_100017fca;
        case 67:
            cVar1 = KeysModified();
            if (cVar1) {
                pIVar4->PasteFromClipboard();
                this_02 = (shared_ptr*)&DAT_00000001;
                break;
            }
        LAB_100017fca:
            this_02 = (shared_ptr*)(((uint64_t)((int64_t)((unsigned long)this_02 >> 8)) << 8) | (uint8_t)1);
            break;
        case 84:
            if (pIVar4->GetMaxLevels() == 0) {
                pIVar4->TypeCharacter(10);
                this_02 = (shared_ptr*)&DAT_00000001;
            } else if ((field_24 == false) || (cVar1 = pIVar4->IsMultiline(), !cVar1)) {
                pIVar3 = (IfType*)local_38.operator->();
                pIVar4 = pIVar3->GetInputFieldWrapper();
                if (pIVar4 != nullptr) {
                    new (local_b8) HookReq();
                    (*((local_b8 + 32))) = local_38;
                    this_02 = (shared_ptr*)pIVar4[5].m_placeholderContents;
                    *local_b8 = *this_02;
                    Client::Instance()->GetHookQueue()->push_back(*local_b8);
                }
                ClearFocusedComponent();
                this_02 = (shared_ptr*)(((uint64_t)((int64_t)((unsigned long)this_02 >> 8)) << 8) | (uint8_t)1);
            } else {
                pIVar4->TypeCharacter(10);
                this_02 = (shared_ptr*)&DAT_00000001;
            }
            break;
        case 85:
            cVar1 = KeysModified();
            if (!cVar1) {
                pIVar4->Backspace();
                this_02 = (shared_ptr*)&DAT_00000001;
            } else {
                pIVar4->BackspaceWord();
                this_02 = (shared_ptr*)&DAT_00000001;
            }
            break;
        case 101:
            cVar1 = KeysModified();
            if (!cVar1) {
                pIVar4->Delete();
                this_02 = (shared_ptr*)&DAT_00000001;
            } else {
                pIVar4->DeleteWord();
                this_02 = (shared_ptr*)&DAT_00000001;
            }
            break;
        case 102:
            cVar1 = KeysModified();
            if (!cVar1) {
                pIVar4->LineHome(field_24);
                this_02 = (shared_ptr*)&DAT_00000001;
            } else {
                pIVar4->FullHome(field_24);
                this_02 = (shared_ptr*)&DAT_00000001;
            }
            break;
        case 103:
            cVar1 = KeysModified();
            if (!cVar1) {
                pIVar4->LineEnd(field_24);
                this_02 = (shared_ptr*)&DAT_00000001;
            } else {
                pIVar4->FullEnd(field_24);
                this_02 = (shared_ptr*)&DAT_00000001;
            }
            break;
        case 104:
            cVar1 = KeysModified();
            if (!cVar1) {
                pIVar4->PageUp(field_24);
                this_02 = (shared_ptr*)&DAT_00000001;
            } else {
                pIVar4->PageUpNoScroll(field_24);
                this_02 = (shared_ptr*)&DAT_00000001;
            }
            break;
        case 105:
            cVar1 = KeysModified();
            if (!cVar1) {
                pIVar4->PageDown(field_24);
                this_02 = (shared_ptr*)&DAT_00000001;
            } else {
                pIVar4->PageDownNoScroll(field_24);
                this_02 = (shared_ptr*)&DAT_00000001;
            }
        }
    switchD_100018005_caseD_e:
        return (unsigned long)this_02 & 4294967295;
    }

    // 0x1000186d0
    uint64_t InputFieldKeyboardHandler::ModifierKeyPressed(int arg1) {
        if (arg1 == 86) {
            field_26 = 1;
        } else {
            if (arg1 != 107) {
                return 0;
            }
            field_25 = 1;
        }
        return 1;
    }

    // 0x100018740
    void InputFieldKeyboardHandler::KeyRepeat(int arg1, unsigned long long arg2) {
        uint32_t in_register_00000034;

        KeyPressed((int)this, (((uint64_t)in_register_00000034 << 32) | (uint32_t)arg1));
    }

    // 0x100018750
    uint64_t InputFieldKeyboardHandler::KeyReleased(int arg1, unsigned long long arg2) {
        if ((ModifierKeyReleased(arg1) == '\0') && (arg1 == 81)) {
            field_24 = false;
        }
        return 0;
    }

    // 0x100018780
    uint64_t InputFieldKeyboardHandler::ModifierKeyReleased(int arg1) {
        if (arg1 == 86) {
            field_26 = 0;
        } else {
            if (arg1 != 107) {
                return 0;
            }
            field_25 = 0;
        }
        return 1;
    }

    // 0x1000187a0
    uint32_t InputFieldKeyboardHandler::KeyTyped(char16_t arg1, unsigned long long arg2) {
        uint8_t bVar2;
        uint32_t uVar3;
        IfType* pIVar4;
        InputField* this_00;
        KeyConsumptionMap* this_01;

        shared_ptr local_30 = field_8.lock();
        if (shared_ptr::operator_cast_to_bool(&local_30)) {
            pIVar4 = (IfType*)local_30.operator->();
            this_00 = (InputField*)pIVar4->GetInputField();
            if (this_00 != nullptr) {
                if (this_00->Is64BitOS()) {
                    pIVar4 = (IfType*)local_30.operator->();
                    this_01 = pIVar4->GetInputFieldKeyMap();
                    if (this_01 != nullptr) {
                        if (this_01->UseChar(arg1)) {
                            bVar2 = stringtools::WideToCP1252(arg1);
                            if (this_00->TypeCharacter((unsigned int)bVar2)) {
                                Client::Instance()->ComponentUpdated(local_30);
                            }
                        }
                        uVar3 = this_01->ConsumeChar(arg1);
                        goto LAB_10001885a;
                    }
                }
            }
        }
        uVar3 = 0;
    LAB_10001885a:
        return uVar3;
    }

    // 0x1000188f0
    unsigned long InputFieldKeyboardHandler::TextCommandReceived(int arg1, unsigned long long arg2) {
        IfType* this_00;
        InputField* this_01;
        uint64_t uVar3;
        unsigned long uVar2;

        shared_ptr local_30 = field_8.lock();
        bool cVar1 = shared_ptr::operator_cast_to_bool(&local_30);
        if (cVar1) {
            this_00 = (IfType*)local_30.operator->();
            this_01 = (InputField*)this_00->GetInputField();
            if ((this_01 != nullptr) && (cVar1 = this_01->Is64BitOS(), cVar1)) {
                cVar1 = this_01->HasFocus();
                if (!cVar1) {
                    LogAssert(
                        "inputField->HasFocus()",
                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/input/"
                        "InputFieldKeyboardHandler.cpp",
                        272, "The InputField referenced by the InputFieldKeyboardHandler does not know it is in focus");
                }
                uVar3 = (uint64_t)((unsigned long)&local_30 >> 8);
                switch (arg1) {
                case 0:
                    uVar2 = (((uint64_t)uVar3 << 8) | (uint8_t)1);
                    this_01->CopySelection();
                    break;
                case 1:
                    uVar2 = (((uint64_t)uVar3 << 8) | (uint8_t)1);
                    this_01->CutSelection();
                    break;
                case 2:
                    uVar2 = (((uint64_t)uVar3 << 8) | (uint8_t)1);
                    this_01->PasteFromClipboard();
                    break;
                case 3:
                    this_01->SelectWord();
                    uVar2 = (((uint64_t)uVar3 << 8) | (uint8_t)1);
                    rs2lib::InputField::ShowEditMenu();
                    break;
                case 4:
                    this_01->SelectAll();
                    uVar2 = (((uint64_t)uVar3 << 8) | (uint8_t)1);
                    rs2lib::InputField::ShowEditMenu();
                    break;
                default:
                    goto switchD_100018987_default;
                }
                goto LAB_100018997;
            }
        }
    switchD_100018987_default:
        uVar2 = 0;
    LAB_100018997:
        return uVar2 & 4294967295;
    }

    // 0x100029ea0: InputFieldKeyboardHandler::PointerDrag(int, int, int, unsigned long long) has the same machine code as InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long)

    // 0x100029ea0: InputFieldKeyboardHandler::WheelScroll(int, unsigned long long) has the same machine code as InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long)

    // 0x100029ea0: InputFieldKeyboardHandler::PointerCancel(int, int, unsigned long long) has the same machine code as InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long)

    // 0x100029ea0: InputFieldKeyboardHandler::PointerRelease(int, int, int, int, unsigned long long) has the same machine code as InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long)

    // 0x100029ea0: InputFieldKeyboardHandler::OnLowLevelMouseDown(int, int, int, int) has the same machine code as InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long)

    // 0x100029ea0: InputFieldKeyboardHandler::KeyboardInputFocusChange(int, unsigned long long) has the same machine code as InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long)

    // 0x100029ea0: InputFieldKeyboardHandler::MouseMove(int, int, unsigned long long) has the same machine code as InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long)

} // namespace jag::oldscape
