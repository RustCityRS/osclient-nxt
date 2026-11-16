// _unplaced/classes/jag/oldscape/input/DefaultInputHandler.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::oldscape::input {
    class DefaultInputHandler {
    public:
        // virtual methods in vtable order
        virtual KeyPressed(int, unsigned long long);
        virtual ResetState();
        KeyReleased(int, unsigned long long);
        PointerDrag(int, int, int, unsigned long long);
        WheelScroll(int, unsigned long long);
        PointerPress(int, int, int, int, unsigned long long);
        PointerCancel(int, int, unsigned long long);
        PointerRelease(int, int, int, int, unsigned long long);
        OnLowLevelMouseDown(int, int, int, int);
        TextCommandReceived(int, unsigned long long);
        KeyboardInputFocusChange(int, unsigned long long);
        KeyTyped(char16_t, unsigned long long);
        KeyRepeat(int, unsigned long long);
        MouseMove(int, int, unsigned long long);
    };

} // namespace jag::oldscape::input
