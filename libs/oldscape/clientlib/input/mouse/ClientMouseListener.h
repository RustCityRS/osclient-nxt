// libs/oldscape/clientlib/input/mouse/ClientMouseListener.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::oldscape::input {
    class ClientMouseListener {
    public:
        ClientMouseListener();
        ~ClientMouseListener();
        void Init(jag::input::InputHandler* inputHandler, ClientKeyboardListener* clientKeyboardListener);
        uint8_t MouseReleased(int arg1, float arg2, float arg3);
        uint64_t MousePressed(int arg1, float arg2, float arg3);
        uint8_t MouseMoved(float arg1, float arg2);
        uint8_t MouseWheel(float arg1, float arg2, float arg3, float arg4);
        uint64_t LowLevelMouseDown(int arg1, int arg2, int arg3, int arg4);
        uint64_t OnFirstTouchDown(unsigned long arg1, float arg2, float arg3);
        uint8_t OnTouchDown(unsigned long arg1, float arg2, float arg3);
        uint8_t OnTouchMove(unsigned long arg1, float arg2, float arg3);
        uint8_t OnTouchUp(unsigned long arg1, float arg2, float arg3);
        void Destroy();
        void MouseDragged(float arg1, float arg2);
        uint64_t GetTranslatedButton(int arg1);
        void ReleaseTranslatedButton(int arg1, int arg2, int arg3);
        int GetAndResetWheelRotation();

    private:
        uint8_t** field_0;
        ClientKeyboardListener* field_8;
        InputHandler* field_16;
        uint8_t _unknown_24[12];
        unsigned int field_36;
        uint8_t _unknown_40[640];
    };

    // 0x100126980
    ClientMouseListener::ClientMouseListener()
        : InputListener(), field_36(0), field_8(nullptr), field_16(nullptr), field_40(0) {}

    // 0x100127560
    ClientMouseListener::~ClientMouseListener() {
        field_672.~function();
        field_624.~function();
        field_576.~function();
        field_528.~function();
        field_480.~function();
        field_432.~function();
        field_384.~function();
        field_336.~function();
        field_288.~function();
        field_240.~function();
        field_192.~function();
        field_144.~function();
        field_96.~function();
        field_48.~function();
    }

} // namespace jag::oldscape::input
