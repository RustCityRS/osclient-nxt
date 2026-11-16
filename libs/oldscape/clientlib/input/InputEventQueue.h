// libs/oldscape/clientlib/input/InputEventQueue.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::oldscape::input {
    class InputEventQueue {
    public:
        // virtual methods in vtable order
        virtual void KeyPressed(int arg1, unsigned long long arg2);
        virtual uint8_t KeyRepeat(int arg1, unsigned long long arg2);
        virtual uint8_t KeyReleased(int arg1, unsigned long long arg2);
        virtual uint8_t KeyTyped(char16_t arg1, unsigned long long arg2);
        virtual uint64_t PointerPress(int arg1, int arg2, int arg3, int arg4, unsigned long long arg5);
        virtual uint64_t PointerRelease(int arg1, int arg2, int arg3, int arg4, unsigned long long arg5);
        virtual uint8_t PointerDrag(int arg1, int arg2, int arg3, unsigned long long arg4);
        virtual uint8_t MouseMove(int arg1, int arg2, unsigned long long arg3);
        virtual uint8_t PointerCancel(int arg1, int arg2, unsigned long long arg3);
        virtual uint8_t WheelScroll(int arg1, unsigned long long arg2);
        virtual uint8_t KeyboardInputFocusChange(int arg1, unsigned long long arg2);
        virtual uint8_t TextCommandReceived(int arg1, unsigned long long arg2);
        virtual void ResetState();
        virtual uint8_t OnLowLevelMouseDown(int arg1, int arg2, int arg3, int arg4);
        ~InputEventQueue();
        InputEventQueue();
        void RegisterDispatchHandler(InputHandler* inputHandler, unsigned char arg2);
        void UnregisterDispatchHandler(unsigned char arg1);
        bool Dispatch();
        void SwapQueues();
        void AddEventToQueue(const InputEvent& inputEvent);

    private:
        uint8_t _unknown_8[6760];
        unsigned int field_6768;
        unsigned int field_6772;
        uint8_t _unknown_6776[4];
    };

    // 0x100127880
    InputEventQueue::~InputEventQueue() {
        (&field_6704)->~mutex();
        field_8.~fixed_map();
    }

} // namespace jag::oldscape::input
