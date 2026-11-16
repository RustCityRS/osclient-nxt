// projects/osclient/TitlescreenInputHandler.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: osclient

#include "TitlescreenInputHandler.h"

namespace jag::oldscape {
    // 0x100029ea0: TitlescreenInputHandler::OnLowLevelMouseDown(int, int, int, int) has the same machine code as InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long)

    // 0x100029ea0: TitlescreenInputHandler::TextCommandReceived(int, unsigned long long) has the same machine code as InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long)

    // 0x1000bf300
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

    // 0x1000bf320
    void TitlescreenInputHandler::KeyPressed(int arg1, unsigned long long arg2) {
        uint32_t in_register_00000034;

        switch (arg1) {
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
            if (arg1 == 13) {
                field_27 = 1;
            }
        }
        KeyRepeat((int)this, (((uint64_t)in_register_00000034 << 32) | (uint32_t)arg1));
    }

    // 0x1000bf3f0
    uint8_t TitlescreenInputHandler::KeyRepeat(int arg1, unsigned long long arg2) {
        if (arg1 == 85) {
            TitleScreen::DeleteCharacter();
        }
        return 1;
    }

    // 0x1000bf610
    uint8_t[16] TitlescreenInputHandler::KeyReleased(int arg1, unsigned long long arg2) {
        uint8_t auVar3[16];

        unsigned int uVar1 = arg1 - 80;
        unsigned long uVar2 = (unsigned long)uVar1;
        if (uVar1 < 27) {
            arg2 = (long)&switchD_1000bf62a::switchdataD_1000bf684 +
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
        if (arg1 == 13) {
            field_27 = 0;
        }
    switchD_1000bf62a_caseD_2:
        auVar3._1_7_ = (uint64_t)(uVar2 >> 8);
        auVar3[0] = 1;
        auVar3._8_8_ = arg2;
        return auVar3;
    }

    // 0x1000bf740
    uint64_t TitlescreenInputHandler::KeyTyped(char16_t arg1, unsigned long long arg2) {
        if ((unsigned short)(arg1 + L'￐') < 10) {
            field_31 = (char)arg1;
        }
        ((TitleScreen*)(unsigned long)(unsigned short)arg1)->TypeCharacter(arg1);
        return 1;
    }

    // 0x1000bf8c0
    uint64_t TitlescreenInputHandler::PointerPress(int arg1, int arg2, int arg3, int arg4, unsigned long long arg5) {
        unsigned int local_40[2];
        unsigned int local_38[2];

        local_38->destruct<highlight::NpcUID*>();
        local_40->destruct<highlight::NpcUID*>();
        auto this_00 = Client::Instance();
        auto this_01 = this_00->GetMemoryCache();
        ((NXTPixScreen*)this_01->GetScreen())->UICoordFromWindowCoord(arg3, arg4, *local_38, *local_40);
        if (field_8 == '\0') {
            field_12 = arg1 + 1;
        } else if (arg1 == 0) {
            RegisterPointerClick(arg2, (CoordType<UICoordSpecializer>*)(unsigned long)local_38[0],
                                 (CoordType<UICoordSpecializer>*)(unsigned long)local_40[0]);
        }
        return 1;
    }

    // 0x1000bf960
    void TitlescreenInputHandler::RegisterPointerClick(int arg1, CoordType<UICoordSpecializer> coordType1,
                                                       CoordType<UICoordSpecializer> coordType2) {
        if (field_24 == '\0') {
            if (1 < (unsigned int)arg1) {
                if (Client::Instance()->field_19105 != '\0') {
                    return;
                }
                if (arg1 != 4) {
                    return;
                }
            }
            UpdateLastPointerPosition((CoordType<UICoordSpecializer>*)((unsigned long)coordType1 & 4294967295),
                                      (CoordType<UICoordSpecializer>*)((unsigned long)coordType2 & 4294967295));
            field_24 = 1;
        }
    }

    // 0x1000bf9c0
    uint64_t TitlescreenInputHandler::PointerRelease(int arg1, int arg2, int arg3, int arg4, unsigned long long arg5) {
        unsigned int local_40[2];
        unsigned int local_38[2];

        local_40->destruct<highlight::NpcUID*>();
        local_38->destruct<highlight::NpcUID*>();
        auto this_00 = Client::Instance();
        auto this_01 = this_00->GetMemoryCache();
        ((NXTPixScreen*)this_01->GetScreen())->UICoordFromWindowCoord(arg3, arg4, *local_40, *local_38);
        if ((field_8 == '\0') && (field_12 == 1)) {
            RegisterPointerClick(arg2, (CoordType<UICoordSpecializer>*)(unsigned long)local_40[0],
                                 (CoordType<UICoordSpecializer>*)(unsigned long)local_38[0]);
        }
        return 1;
    }

    // 0x1000bfa50
    uint8_t TitlescreenInputHandler::PointerDrag(int arg1, int arg2, int arg3, unsigned long long arg4) {
        return 1;
    }

    // 0x1000bfa60
    uint64_t TitlescreenInputHandler::MouseMove(int arg1, int arg2, unsigned long long arg3) {
        unsigned int local_40[2];
        unsigned int local_38[2];

        local_40->destruct<highlight::NpcUID*>();
        local_38->destruct<highlight::NpcUID*>();
        auto this_00 = Client::Instance();
        auto this_01 = this_00->GetMemoryCache();
        ((NXTPixScreen*)this_01->GetScreen())->UICoordFromWindowCoord(arg1, arg2, *local_40, *local_38);
        if (field_24 == '\0') {
            UpdateLastPointerPosition((CoordType<UICoordSpecializer>*)(unsigned long)local_40[0],
                                      (CoordType<UICoordSpecializer>*)(unsigned long)local_38[0]);
        }
        return 1;
    }

    // 0x1000bfae0
    void TitlescreenInputHandler::UpdateLastPointerPosition(CoordType<UICoordSpecializer> coordType1,
                                                            CoordType<UICoordSpecializer> coordType2) {
        field_16 = (int)coordType1;
        field_20 = (int)coordType2;
    }

    // 0x1000bfaf0
    uint8_t TitlescreenInputHandler::PointerCancel(int arg1, int arg2, unsigned long long arg3) {
        return 1;
    }

    // 0x1000bfb00
    uint8_t TitlescreenInputHandler::WheelScroll(int arg1, unsigned long long arg2) {
        return 1;
    }

    // 0x1000bfb10
    uint8_t TitlescreenInputHandler::KeyboardInputFocusChange(int arg1, unsigned long long arg2) {
        TitleScreen::SetLoginSelect(arg1);
        return 1;
    }

    // 0x1000bfb40
    void TitlescreenInputHandler::ResetState() {
        field_8 = 0;
        field_12 = 0;
    }

} // namespace jag::oldscape
