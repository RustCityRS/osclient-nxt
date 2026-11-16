// projects/osclient/input/osx/InputFieldKeyboardHandler_OSX.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: osclient

#include "projects/osclient/input/InputFieldKeyboardHandler.h"

namespace jag::oldscape {
    // 0x100018430
    uint64_t InputFieldKeyboardHandler::HandleArrowKeyDown(rs2lib::InputField* inputField, int arg2) {

        switch (arg2) {
        case 96:
            if (!(KeysModified())) {
                if (field_26 == '\0') {
                    inputField->Left(field_24);
                } else {
                    inputField->WordLeft(field_24);
                }
            } else {
                inputField->LineHome(field_24);
            }
            break;
        case 97:
            if (!(KeysModified())) {
                if (field_26 == '\0') {
                    inputField->Right(field_24);
                } else {
                    inputField->WordRight(field_24);
                }
            } else {
                inputField->LineEnd(field_24);
            }
            break;
        case 98:
            if (!(KeysModified())) {
                inputField->Up(field_24);
            } else {
                inputField->FullHome(field_24);
            }
            break;
        case 99:
            if (!(KeysModified())) {
                inputField->Down(field_24);
            } else {
                inputField->FullEnd(field_24);
            }
            break;
        default:
            return 0;
        }
        return 1;
    }

    // 0x100018530
    uint8_t InputFieldKeyboardHandler::KeysModified() {
        return field_25;
    }

    // 0x100018540
    uint32_t InputFieldKeyboardHandler::KeyPressed(int arg1, unsigned long long arg2) {
        uint32_t uVar2;
        KeyConsumptionMap* this_02;
        Client* this_03;
        ReturnValue local_40;

        uint8_t* this_00 = &field_8;
        bool cVar1 = this_00->expired();
        if (cVar1) {
            return 0;
        }
        shared_ptr local_50 = this_00->lock();
        cVar1 = shared_ptr::operator_cast_to_bool(&local_50);
        if (cVar1) {
            this_02 = ((IfType*)local_50.operator->())->GetInputFieldKeyMap();
            if (this_02 != nullptr) {
                cVar1 = this_02->UseKey(arg1);
                if ((cVar1) && (cVar1 = ModifierKeyPressed(arg1), !cVar1)) {
                    if (arg1 == 81) {
                        field_24 = true;
                    } else {
                        cVar1 = HandleKeyDown(arg1);
                        if (cVar1) {
                            this_03 = Client::Instance();
                            local_40 = this_00->lock();
                            this_03->ComponentUpdated(local_40);
                        }
                    }
                }
                uVar2 = this_02->ConsumeKey(arg1);
                goto LAB_100018617;
            }
        }
        uVar2 = 0;
    LAB_100018617:
        return uVar2;
    }

} // namespace jag::oldscape
