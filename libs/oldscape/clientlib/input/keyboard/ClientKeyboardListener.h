// libs/oldscape/clientlib/input/keyboard/ClientKeyboardListener.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::oldscape::input {
    class ClientKeyboardListener {
    public:
        ClientKeyboardListener();
        ~ClientKeyboardListener();
        void Init(jag::input::InputHandler*);
        HandleKeyUp(int);
        HandleKeyDown(int);
        HandleKeyChar(int);
        HandleTextCommand(jag::input::TextCommand);
        void Destroy();
        IsAltDown();
        IsCtrlDown();
        IsShiftDown();
        GetClientKeyCode(int) const;
        void PressKeyCode(int);
        void ReleaseKeyCode(int);
        IsForceCrashDown();
        void ReleaseAllKeys();
        static eastl::hash_map<int, int, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false> /* 56 bytes */
            m_keycodeMap;

        // data members, from how the methods use this: 325 bytes
        undefined** field_0; // offset 0
        char _unknown_8[200];
        InputHandler* field_208; // offset 208
        undefined8 field_216;    // offset 216
        undefined8 field_224;    // offset 224
        undefined8 field_232;    // offset 232
        undefined8 field_240;    // offset 240
        undefined8 field_248;    // offset 248
        undefined8 field_256;    // offset 256
        undefined8 field_264;    // offset 264
        undefined8 field_272;    // offset 272
        undefined8 field_280;    // offset 280
        undefined8 field_288;    // offset 288
        undefined8 field_296;    // offset 296
        undefined8 field_304;    // offset 304
        char _unknown_312[4];
        undefined8 field_316;        // offset 316
        undefined1 m_forceCrashDown; // offset 324
    };

    // 0x1001267b0, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // ClientKeyboardListener::ClientKeyboardListener(): jumps straight to the base-object constructor

    // 0x100126890, 16 bytes, complete-object destructor, inline, placed by class name
    // ClientKeyboardListener::~ClientKeyboardListener(): jumps straight to the base-object destructor

    // 0x1001268b0, 80 bytes, base-object constructor, inline, placed by class name
    // ClientKeyboardListener::ClientKeyboardListener()
    void ClientKeyboardListener::ClientKeyboardListener() {
        new (this) InputListener();
        std::function<bool(int)>::function((function<bool(int)>*)&field_16);
        std::function<bool(int)>::function((function<bool(int)>*)&field_64);
        std::function<bool(int)>::function((function<bool(int)>*)&field_112);
        std::function<bool(jag::input::TextCommand)>::function((function<bool(jag::input::TextCommand)>*)&field_160);
        field_208 = (InputHandler*)0;
        m_forceCrashDown = 0;
    }

    // 0x100127780, 64 bytes, base-object destructor, inline, placed by class name
    // ClientKeyboardListener::~ClientKeyboardListener()
    void ClientKeyboardListener::~ClientKeyboardListener() {
        std::function<bool(jag::input::TextCommand)>::~function((function<bool(jag::input::TextCommand)>*)&field_160);
        std::function<bool(int)>::~function((function<bool(int)>*)&field_112);
        std::function<bool(int)>::~function((function<bool(int)>*)&field_64);
        std::function<bool(int)>::~function((function<bool(int)>*)&field_16);
    }

} // namespace jag::oldscape::input
