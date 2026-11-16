// libs/oldscape/clientlib/input/keyboard/ClientKeyboardListener.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::oldscape::input {
    class ClientKeyboardListener {
    public:
        ClientKeyboardListener();
        ~ClientKeyboardListener();
        void Init(jag::input::InputHandler* inputHandler);
        uint64_t HandleKeyUp(int arg1);
        uint32_t HandleKeyDown(int arg1);
        uint32_t HandleKeyChar(int arg1);
        uint8_t HandleTextCommand(jag::input::TextCommand textCommand);
        void Destroy();
        bool IsAltDown();
        bool IsCtrlDown();
        bool IsShiftDown();
        uint32_t GetClientKeyCode(int arg1) const;
        void PressKeyCode(int arg1);
        void ReleaseKeyCode(int arg1);
        bool IsForceCrashDown();
        void ReleaseAllKeys();
        static eastl::hash_map<int, int> m_keycodeMap;

    private:
        uint8_t** field_0;
        uint8_t _unknown_8[200];
        InputHandler* field_208;
        uint64_t field_216;
        uint64_t field_224;
        uint64_t field_232;
        uint64_t field_240;
        uint64_t field_248;
        uint64_t field_256;
        uint64_t field_264;
        uint64_t field_272;
        uint64_t field_280;
        uint64_t field_288;
        uint64_t field_296;
        uint64_t field_304;
        uint8_t _unknown_312[4];
        uint64_t field_316;
        uint8_t m_forceCrashDown;
    };

    // 0x1001268b0
    ClientKeyboardListener::ClientKeyboardListener() : InputListener(), field_208(nullptr), m_forceCrashDown(0) {}

    // 0x100127780
    ClientKeyboardListener::~ClientKeyboardListener() {
        field_160.~function();
        field_112.~function();
        field_64.~function();
        field_16.~function();
    }

} // namespace jag::oldscape::input
