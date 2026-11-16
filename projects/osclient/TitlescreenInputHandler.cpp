// projects/osclient/TitlescreenInputHandler.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: osclient

#include "TitlescreenInputHandler.h"

namespace jag::oldscape {
    // 0x100029ea0: the linker folded this into InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long), which has identical code
    TitlescreenInputHandler::OnLowLevelMouseDown(int, int, int, int);

    // 0x100029ea0: the linker folded this into InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long), which has identical code
    TitlescreenInputHandler::TextCommandReceived(int, unsigned long long);

    // 0x1000bf300, 32 bytes, placed by class name and debug map
    // TitlescreenInputHandler::ResetInteractionState()
    void TitlescreenInputHandler::ResetInteractionState() {
        field_27 = 0;
        field_28 = 0;
        field_29 = 0;
        field_30 = 0;
        field_24 = 0;
        field_25 = 0;
        field_26 = 0;
        field_27 = 0;
        field_31 = -1;
    }

    // 0x1000bf320, 208 bytes, placed by class name and debug map
    // TitlescreenInputHandler::KeyPressed(int, unsigned long long)
    void TitlescreenInputHandler::KeyPressed(int param_1, ulonglong param_2) {
        switch (param_1) {
        case 80:
            field_28 = 1;
            break;
        case 81:
            field_33 = 1;
            break;
        case 82:
        case 83:
        case 87:
        case 88:
        case 89:
        case 90:
        case 91:
        case 92:
        case 93:
        case 94:
        case 95:
        case 98:
        case 99:
        case 100:
        case 101:
        case 102:
        case 103:
        case 104:
        case 105:
            break;
        case 84:
            field_25 = 1;
            break;
        case 85:
            field_26 = 1;
            break;
        case 86:
            field_32 = 1;
            break;
        case 96:
            field_29 = 1;
            break;
        case 97:
            field_30 = 1;
            break;
        case 106:
            field_34 = 1;
            break;
        default:
            if (param_1 == 13) {
                field_27 = 1;
            }
        }
        (*(code*)field_0[1])();
    }

    // 0x1000bf3f0, 32 bytes, placed by class name and debug map
    // TitlescreenInputHandler::KeyRepeat(int, unsigned long long)
    undefined1 TitlescreenInputHandler::KeyRepeat(int param_1, ulonglong param_2) {
        if (param_1 == 85) {
            TitleScreen::DeleteCharacter();
        }
        return 1;
    }

    // 0x1000bf610, 304 bytes, placed by class name
    // TitlescreenInputHandler::KeyReleased(int, unsigned long long)
    undefined1[16] TitlescreenInputHandler::KeyReleased(int param_1, ulonglong param_2) {
        uint uVar1;
        ulong uVar2;
        undefined1 auVar3[16];

        uVar1 = param_1 - 80;
        uVar2 = (ulong)uVar1;
        if (uVar1 < 27) {
            param_2 = (long)&switchD_1000bf62a::switchdataD_1000bf684 +
                      (long)(int)(&switchD_1000bf62a::switchdataD_1000bf684)[uVar2];
            switch (uVar2) {
            case 0:
                goto switchD_1000bf62a_caseD_0;
            case 1:
                field_33 = 0;
                if (17 < uVar1)
                    goto switchD_1000bf62a_default;
                goto LAB_1000bf640;
            default:
                goto switchD_1000bf62a_caseD_2;
            case 4:
                goto switchD_1000bf62a_caseD_4;
            case 5:
                goto switchD_1000bf62a_caseD_5;
            case 6:
                field_32 = 0;
                break;
            case 16:
                goto switchD_1000bf62a_caseD_10;
            case 17:
                goto switchD_1000bf62a_caseD_11;
            case 26:
                field_34 = 0;
            }
            if (uVar1 < 18) {
            LAB_1000bf640:
                uVar2 = (long)&switchD_1000bf64e::switchdataD_1000bf6f0 +
                        (long)(int)(&switchD_1000bf64e::switchdataD_1000bf6f0)[uVar2];
                switch (uVar2) {
                case 4295751248:
                switchD_1000bf62a_caseD_0:
                    field_28 = 0;
                    break;
                case 4295751254:
                switchD_1000bf62a_caseD_4:
                    field_25 = 0;
                    break;
                case 4295751260:
                switchD_1000bf62a_caseD_5:
                    field_26 = 0;
                    break;
                case 4295751266:
                switchD_1000bf62a_caseD_10:
                    field_29 = 0;
                    break;
                case 4295751272:
                switchD_1000bf62a_caseD_11:
                    field_30 = 0;
                }
                goto switchD_1000bf62a_caseD_2;
            }
        }
    switchD_1000bf62a_default:
        if (param_1 == 13) {
            field_27 = 0;
        }
    switchD_1000bf62a_caseD_2:
        auVar3._1_7_ = (undefined7)(uVar2 >> 8);
        auVar3[0] = 1;
        auVar3._8_8_ = param_2;
        return auVar3;
    }

    // 0x1000bf740, 32 bytes, placed by class name
    // TitlescreenInputHandler::KeyTyped(char16_t, unsigned long long)
    undefined8 TitlescreenInputHandler::KeyTyped(wchar16 param_1, ulonglong param_2) {
        if ((ushort)(param_1 + L'￐') < 10) {
            field_31 = (char)param_1;
        }
        TitleScreen::TypeCharacter(param_1);
        return 1;
    }

    // 0x1000bf8c0, 160 bytes, placed by class name
    // TitlescreenInputHandler::PointerPress(int, int, int, int, unsigned long long)
    undefined1 TitlescreenInputHandler::PointerPress(int param_1, int param_2, int param_3, int param_4,
                                                     ulonglong param_5) {
        Js5ResourceProvider* this_00;
        NXTPixToolkit* this_01;
        NXTPixScreen* this_02;
        undefined4 in_register_00000014;
        NpcUID* extraout_RDX;
        undefined4 in_register_00000034;
        NpcUID* pNVar1;
        undefined4 local_40[2];
        undefined4 local_38[2];

        pNVar1 = (NpcUID*)CONCAT44(in_register_00000034, param_1);
        eastl::destruct<highlight::NpcUID*>((eastl*)local_38, pNVar1, (NpcUID*)CONCAT44(in_register_00000014, param_2));
        eastl::destruct<highlight::NpcUID*>((eastl*)local_40, pNVar1, extraout_RDX);
        this_00 = (Js5ResourceProvider*)Client::Instance();
        this_01 = (NXTPixToolkit*)this_00->GetMemoryCache();
        this_02 = (NXTPixScreen*)this_01->GetScreen();
        this_02->UICoordFromWindowCoord(param_3, param_4, local_38, local_40);
        if (field_8 == '\0') {
            field_12 = param_1 + 1;
        } else if (param_1 == 0) {
            RegisterPointerClick(this, param_2, local_38[0], local_40[0]);
        }
        return 1;
    }

    // 0x1000bf960, 96 bytes, placed by class name
    // TitlescreenInputHandler::RegisterPointerClick(int, CoordType<UICoordSpecializer>, CoordType<UICoordSpecializer>)
    void TitlescreenInputHandler::RegisterPointerClick(uint param_1, undefined4 param_3, undefined4 param_4) {
        long lVar1;

        if (field_24 == '\0') {
            if (1 < param_1) {
                lVar1 = Client::Instance();
                if (*(char*)(lVar1 + 19105) != '\0') {
                    return;
                }
                if (param_1 != 4) {
                    return;
                }
            }
            UpdateLastPointerPosition(this, param_3, param_4);
            field_24 = 1;
        }
    }

    // 0x1000bf9c0, 144 bytes, placed by class name
    // TitlescreenInputHandler::PointerRelease(int, int, int, int, unsigned long long)
    undefined1 TitlescreenInputHandler::PointerRelease(int param_1, int param_2, int param_3, int param_4,
                                                       ulonglong param_5) {
        Js5ResourceProvider* this_00;
        NXTPixToolkit* this_01;
        NXTPixScreen* this_02;
        undefined4 in_register_00000014;
        NpcUID* extraout_RDX;
        undefined4 in_register_00000034;
        NpcUID* pNVar1;
        undefined4 local_40[2];
        undefined4 local_38[2];

        pNVar1 = (NpcUID*)CONCAT44(in_register_00000034, param_1);
        eastl::destruct<highlight::NpcUID*>((eastl*)local_40, pNVar1, (NpcUID*)CONCAT44(in_register_00000014, param_2));
        eastl::destruct<highlight::NpcUID*>((eastl*)local_38, pNVar1, extraout_RDX);
        this_00 = (Js5ResourceProvider*)Client::Instance();
        this_01 = (NXTPixToolkit*)this_00->GetMemoryCache();
        this_02 = (NXTPixScreen*)this_01->GetScreen();
        this_02->UICoordFromWindowCoord(param_3, param_4, local_40, local_38);
        if ((field_8 == '\0') && (field_12 == 1)) {
            RegisterPointerClick(this, param_2, local_40[0], local_38[0]);
        }
        return 1;
    }

    // 0x1000bfa50, 16 bytes, placed by class name
    // TitlescreenInputHandler::PointerDrag(int, int, int, unsigned long long)
    undefined1 TitlescreenInputHandler::PointerDrag(int param_1, int param_2, int param_3, ulonglong param_4) {
        return 1;
    }

    // 0x1000bfa60, 128 bytes, placed by class name
    // TitlescreenInputHandler::MouseMove(int, int, unsigned long long)
    undefined1 TitlescreenInputHandler::MouseMove(int param_1, int param_2, ulonglong param_3) {
        Js5ResourceProvider* this_00;
        NXTPixToolkit* this_01;
        NXTPixScreen* this_02;
        undefined4 in_register_00000014;
        NpcUID* extraout_RDX;
        undefined4 in_register_00000034;
        NpcUID* pNVar1;
        undefined4 local_40[2];
        undefined4 local_38[2];

        pNVar1 = (NpcUID*)CONCAT44(in_register_00000034, param_1);
        eastl::destruct<highlight::NpcUID*>((eastl*)local_40, pNVar1, (NpcUID*)CONCAT44(in_register_00000014, param_2));
        eastl::destruct<highlight::NpcUID*>((eastl*)local_38, pNVar1, extraout_RDX);
        this_00 = (Js5ResourceProvider*)Client::Instance();
        this_01 = (NXTPixToolkit*)this_00->GetMemoryCache();
        this_02 = (NXTPixScreen*)this_01->GetScreen();
        this_02->UICoordFromWindowCoord(param_1, param_2, local_40, local_38);
        if (field_24 == '\0') {
            UpdateLastPointerPosition(this, local_40[0], local_38[0]);
        }
        return 1;
    }

    // 0x1000bfae0, 16 bytes, placed by class name
    // TitlescreenInputHandler::UpdateLastPointerPosition(CoordType<UICoordSpecializer>, CoordType<UICoordSpecializer>)
    void TitlescreenInputHandler::UpdateLastPointerPosition(undefined4 param_2, undefined4 param_3) {
        field_16 = param_2;
        field_20 = param_3;
    }

    // 0x1000bfaf0, 16 bytes, placed by class name
    // TitlescreenInputHandler::PointerCancel(int, int, unsigned long long)
    undefined1 TitlescreenInputHandler::PointerCancel(int param_1, int param_2, ulonglong param_3) {
        return 1;
    }

    // 0x1000bfb00, 16 bytes, placed by class name
    // TitlescreenInputHandler::WheelScroll(int, unsigned long long)
    undefined1 TitlescreenInputHandler::WheelScroll(int param_1, ulonglong param_2) {
        return 1;
    }

    // 0x1000bfb10, 16 bytes, placed by class name
    // TitlescreenInputHandler::KeyboardInputFocusChange(int, unsigned long long)
    undefined1 TitlescreenInputHandler::KeyboardInputFocusChange(int param_1, ulonglong param_2) {
        TitleScreen::SetLoginSelect(param_1);
        return 1;
    }

    // 0x1000bfb40, 32 bytes, placed by class name
    // TitlescreenInputHandler::ResetState()
    void TitlescreenInputHandler::ResetState() {
        field_8 = 0;
        field_12 = 0;
    }

} // namespace jag::oldscape
