// libs/oldscape/clientlib/input/InputEventQueue.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::oldscape::input {
    class InputEventQueue {
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
        virtual TextCommandReceived(int, unsigned long long);
        virtual ResetState();
        virtual OnLowLevelMouseDown(int, int, int, int);
        ~InputEventQueue();
        InputEventQueue();
        void RegisterDispatchHandler(InputHandler*, unsigned char);
        void UnregisterDispatchHandler(unsigned char);
        bool Dispatch();
        void SwapQueues();
        void AddEventToQueue(InputEvent const&);

        // data members, from how the methods use this: 6780 bytes
        undefined** field_0; // offset 0, vtable pointer
        char _unknown_8[6760];
        uint field_6768; // offset 6768
        uint field_6772; // offset 6772
        char _unknown_6776[4];
    };

    // 0x1001268a0, 16 bytes, complete-object destructor, inline, placed by class name and debug map
    // InputEventQueue::~InputEventQueue(): jumps straight to the base-object destructor

    // 0x100127880, 64 bytes, base-object destructor, inline, placed by class name
    // InputEventQueue::~InputEventQueue()
    void InputEventQueue::~InputEventQueue() {
        field_0 = &PTR_KeyPressed_100efd5e8;
        (&field_6704)->~mutex();
        (&field_8)->~fixed_map();
    }

} // namespace jag::oldscape::input
