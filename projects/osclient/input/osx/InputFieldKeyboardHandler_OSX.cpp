// projects/osclient/input/osx/InputFieldKeyboardHandler_OSX.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: osclient

#include "projects/osclient/input/InputFieldKeyboardHandler.h"

namespace jag::oldscape {
    // 0x100018430, 256 bytes, placed by class name and debug map
    // InputFieldKeyboardHandler::HandleArrowKeyDown(rs2lib::InputField*, int)
    undefined8 InputFieldKeyboardHandler::HandleArrowKeyDown(InputField* param_1, int param_2) {
        char cVar1;

        switch (param_2) {
        case 96:
            cVar1 = KeysModified(this);
            if (cVar1 == '\0') {
                if (field_26 == '\0') {
                    param_1->Left(field_24);
                } else {
                    param_1->WordLeft(field_24);
                }
            } else {
                param_1->LineHome(field_24);
            }
            break;
        case 97:
            cVar1 = KeysModified(this);
            if (cVar1 == '\0') {
                if (field_26 == '\0') {
                    param_1->Right(field_24);
                } else {
                    param_1->WordRight(field_24);
                }
            } else {
                param_1->LineEnd(field_24);
            }
            break;
        case 98:
            cVar1 = KeysModified(this);
            if (cVar1 == '\0') {
                param_1->Up(field_24);
            } else {
                param_1->FullHome(field_24);
            }
            break;
        case 99:
            cVar1 = KeysModified(this);
            if (cVar1 == '\0') {
                param_1->Down(field_24);
            } else {
                param_1->FullEnd(field_24);
            }
            break;
        default:
            return 0;
        }
        return 1;
    }

    // 0x100018530, 16 bytes, placed by class name and debug map
    // InputFieldKeyboardHandler::KeysModified()
    undefined1 InputFieldKeyboardHandler::KeysModified() {
        return field_25;
    }

    // 0x100018540, 288 bytes, placed by class name and debug map
    // InputFieldKeyboardHandler::KeyPressed(int, unsigned long long)
    undefined4 InputFieldKeyboardHandler::KeyPressed(int param_1, ulonglong param_2) {
        char cVar1;
        undefined4 uVar3;
        IfType* this_00;
        KeyConsumptionMap* this_01;
        Client* this_02;
        shared_ptr local_50;
        shared_ptr local_40;

        cVar1 = (&field_8)->expired();
        if (cVar1 != '\0') {
            return 0;
        }
        weak_ptr<rs2lib::IfType>::lock();
        if (shared_ptr::operator_cast_to_bool(&local_50)) {
            this_00 = (IfType*)shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)&local_50);
            this_01 = (KeyConsumptionMap*)this_00->GetInputFieldKeyMap();
            if (this_01 != (KeyConsumptionMap*)0) {
                cVar1 = this_01->UseKey(param_1);
                if ((cVar1 != '\0') && (cVar1 = ModifierKeyPressed(this, param_1), cVar1 == '\0')) {
                    if (param_1 == 81) {
                        field_24 = true;
                    } else {
                        cVar1 = HandleKeyDown(this, param_1);
                        if (cVar1 != '\0') {
                            this_02 = (Client*)Client::Instance();
                            weak_ptr<rs2lib::IfType>::lock();
                            this_02->ComponentUpdated(&local_40);
                            local_40.~shared_ptr();
                        }
                    }
                }
                uVar3 = this_01->ConsumeKey(param_1);
                goto LAB_100018617;
            }
        }
        uVar3 = 0;
    LAB_100018617:
        local_50.~shared_ptr();
        return uVar3;
    }

} // namespace jag::oldscape
