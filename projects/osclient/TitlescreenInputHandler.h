// projects/osclient/TitlescreenInputHandler.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::oldscape {
    class TitlescreenInputHandler {
    public:
        // virtual methods in vtable order
        virtual void KeyPressed(int arg1, unsigned long long arg2);
        virtual uint8_t KeyRepeat(int arg1, unsigned long long arg2);
        virtual uint8_t[16] KeyReleased(int arg1, unsigned long long arg2);
        virtual uint64_t KeyTyped(char16_t arg1, unsigned long long arg2);
        virtual uint64_t PointerPress(int arg1, int arg2, int arg3, int arg4, unsigned long long arg5);
        virtual uint64_t PointerRelease(int arg1, int arg2, int arg3, int arg4, unsigned long long arg5);
        virtual uint8_t PointerDrag(int arg1, int arg2, int arg3, unsigned long long arg4);
        virtual uint64_t MouseMove(int arg1, int arg2, unsigned long long arg3);
        virtual uint8_t PointerCancel(int arg1, int arg2, unsigned long long arg3);
        virtual uint8_t WheelScroll(int arg1, unsigned long long arg2);
        virtual uint8_t KeyboardInputFocusChange(int arg1, unsigned long long arg2);
        virtual uint64_t OnLowLevelMouseDown(int arg1, int arg2, int arg3, int arg4);
        virtual void ResetState();
        uint64_t TextCommandReceived(int arg1, unsigned long long arg2);
        void ResetInteractionState();
        void RegisterPointerClick(int arg1, CoordType<UICoordSpecializer> coordType1,
                                  CoordType<UICoordSpecializer> coordType2);
        void UpdateLastPointerPosition(CoordType<UICoordSpecializer> coordType1,
                                       CoordType<UICoordSpecializer> coordType2);
        TitlescreenInputHandler();
        TitlescreenInputHandler(const TitlescreenInputHandler& titlescreenInputHandler);

    private:
        uint8_t field_8;
        uint8_t field_9[3];
        int field_12;
        int field_16;
        int field_20;
        uint8_t field_24;
        uint8_t field_25;
        uint8_t field_26;
        uint8_t field_27;
        uint8_t field_28;
        uint8_t field_29;
        uint8_t field_30;
        char field_31;
        uint8_t field_32;
        uint8_t field_33;
        uint8_t field_34;
    };

    // 0x100131d00
    TitlescreenInputHandler::TitlescreenInputHandler() : oldscape::input::InputHandler(), field_8(1), field_12(0) {
        (&field_16)->destruct<highlight::NpcUID*>();
        (&field_20)->destruct<highlight::NpcUID*>();
        field_27 = 0;
        field_28 = 0;
        field_29 = 0;
        field_30 = 0;
        field_31 = -1;
        field_32 = 0;
        field_33 = 0;
        field_34 = 0;
        field_24 = 0;
        field_25 = 0;
        field_26 = 0;
        field_27 = 0;
    }

    // 0x10019a260
    TitlescreenInputHandler::TitlescreenInputHandler(const TitlescreenInputHandler& titlescreenInputHandler)
        : oldscape::input::InputHandler() {
        uint32_t uVar2 = titlescreenInputHandler.field_9;
        int iVar3 = titlescreenInputHandler.field_12;
        int iVar4 = titlescreenInputHandler.field_16;
        int iVar5 = titlescreenInputHandler.field_20;
        uint64_t uVar1 = *(uint64_t*)((long)&titlescreenInputHandler.field_16 + 3);
        uint8_t uVar6 = titlescreenInputHandler.field_27;
        uint8_t uVar7 = titlescreenInputHandler.field_28;
        uint8_t uVar8 = titlescreenInputHandler.field_29;
        uint8_t uVar9 = titlescreenInputHandler.field_30;
        bool cVar10 = titlescreenInputHandler.field_31;
        uint8_t uVar11 = titlescreenInputHandler.field_32;
        uint8_t uVar12 = titlescreenInputHandler.field_33;
        uint8_t uVar13 = titlescreenInputHandler.field_34;
        field_8 = titlescreenInputHandler.field_8;
        field_9 = uVar2;
        field_12 = iVar3;
        field_16 = iVar4;
        field_20 = iVar5;
        *(uint64_t*)((long)&field_16 + 3) = uVar1;
        field_27 = uVar6;
        field_28 = uVar7;
        field_29 = uVar8;
        field_30 = uVar9;
        field_31 = cVar10;
        field_32 = uVar11;
        field_33 = uVar12;
        field_34 = uVar13;
    }

} // namespace jag::oldscape
