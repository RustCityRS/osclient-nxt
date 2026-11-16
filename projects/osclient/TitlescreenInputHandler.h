// projects/osclient/TitlescreenInputHandler.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::oldscape {
    class TitlescreenInputHandler {
    public:
        // virtual methods in vtable order
        virtual void KeyPressed(int, unsigned long long);
        virtual KeyRepeat(int, unsigned long long);
        virtual KeyReleased(int, unsigned long long);
        virtual KeyTyped(char16_t, unsigned long long);
        virtual PointerPress(int, int, int, int, unsigned long long);
        virtual PointerRelease(int, int, int, int, unsigned long long);
        virtual PointerDrag(int, int, int, unsigned long long);
        virtual MouseMove(int, int, unsigned long long);
        virtual PointerCancel(int, int, unsigned long long);
        virtual WheelScroll(int, unsigned long long);
        virtual KeyboardInputFocusChange(int, unsigned long long);
        virtual OnLowLevelMouseDown(int, int, int, int);
        virtual void ResetState();
        TextCommandReceived(int, unsigned long long);
        void ResetInteractionState();
        void RegisterPointerClick(int, CoordType<UICoordSpecializer>, CoordType<UICoordSpecializer>);
        void UpdateLastPointerPosition(CoordType<UICoordSpecializer>, CoordType<UICoordSpecializer>);
        TitlescreenInputHandler();
        TitlescreenInputHandler(TitlescreenInputHandler const&);

        // data members, from how the methods use this: 35 bytes
        undefined** field_0; // offset 0, vtable pointer
        undefined1 field_8;  // offset 8
        undefined3 field_9;  // offset 9
        int field_12;        // offset 12
        undefined4 field_16; // offset 16
        undefined4 field_20; // offset 20
        undefined1 field_24; // offset 24
        undefined1 field_25; // offset 25
        undefined1 field_26; // offset 26
        undefined1 field_27; // offset 27
        undefined1 field_28; // offset 28
        undefined1 field_29; // offset 29
        undefined1 field_30; // offset 30
        char field_31;       // offset 31
        undefined1 field_32; // offset 32
        undefined1 field_33; // offset 33
        undefined1 field_34; // offset 34
    };

    // 0x100123e50, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // TitlescreenInputHandler::TitlescreenInputHandler(): jumps straight to the base-object constructor

    // 0x100131d00, 96 bytes, base-object constructor, inline, placed by class name
    // TitlescreenInputHandler::TitlescreenInputHandler()
    void TitlescreenInputHandler::TitlescreenInputHandler() {
        NpcUID* extraout_RDX;
        NpcUID* extraout_RDX_00;
        InputHandler* in_RSI;

        new (this) input::InputHandler(in_RSI);
        field_0 = &PTR_KeyPressed_100ef4238;
        field_8 = 1;
        field_12 = 0;
        eastl::destruct<highlight::NpcUID*>((eastl*)&field_16, (NpcUID*)in_RSI, extraout_RDX);
        eastl::destruct<highlight::NpcUID*>((eastl*)&field_20, (NpcUID*)in_RSI, extraout_RDX_00);
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

    // 0x10019a250, 16 bytes, complete-object constructor, inline, placed by class name
    // TitlescreenInputHandler::TitlescreenInputHandler(TitlescreenInputHandler const&): jumps straight to the base-object constructor

    // 0x10019a260, 64 bytes, base-object constructor, inline, placed by class name
    // TitlescreenInputHandler::TitlescreenInputHandler(TitlescreenInputHandler const&)
    void TitlescreenInputHandler::TitlescreenInputHandler(TitlescreenInputHandler* param_1) {
        undefined8 uVar1;
        undefined3 uVar2;
        int iVar3;
        undefined4 uVar4;
        undefined4 uVar5;
        undefined1 uVar6;
        undefined1 uVar7;
        undefined1 uVar8;
        undefined1 uVar9;
        char cVar10;
        undefined1 uVar11;
        undefined1 uVar12;
        undefined1 uVar13;

        new (this) input::InputHandler(param_1);
        field_0 = &PTR_KeyPressed_100ef4238;
        uVar2 = param_1->field_9;
        iVar3 = param_1->field_12;
        uVar4 = param_1->field_16;
        uVar5 = param_1->field_20;
        uVar1 = *(undefined8*)((long)&param_1->field_16 + 3);
        uVar6 = param_1->field_27;
        uVar7 = param_1->field_28;
        uVar8 = param_1->field_29;
        uVar9 = param_1->field_30;
        cVar10 = param_1->field_31;
        uVar11 = param_1->field_32;
        uVar12 = param_1->field_33;
        uVar13 = param_1->field_34;
        field_8 = param_1->field_8;
        field_9 = uVar2;
        field_12 = iVar3;
        field_16 = uVar4;
        field_20 = uVar5;
        *(undefined8*)((long)&field_16 + 3) = uVar1;
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
