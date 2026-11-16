// libs/oldscape/clientlib/input/mouse/ClientMouseListener.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::oldscape::input {
    class ClientMouseListener {
    public:
        ClientMouseListener();
        ~ClientMouseListener();
        void Init(jag::input::InputHandler*, ClientKeyboardListener*);
        MouseReleased(int, float, float);
        MousePressed(int, float, float);
        MouseMoved(float, float);
        MouseWheel(float, float, float, float);
        LowLevelMouseDown(int, int, int, int);
        OnFirstTouchDown(unsigned long, float, float);
        OnTouchDown(unsigned long, float, float);
        OnTouchMove(unsigned long, float, float);
        OnTouchUp(unsigned long, float, float);
        void Destroy();
        void MouseDragged(float, float);
        GetTranslatedButton(int);
        void ReleaseTranslatedButton(int, int, int);
        int GetAndResetWheelRotation();

        // data members, from how the methods use this: 680 bytes
        undefined** field_0;             // offset 0
        ClientKeyboardListener* field_8; // offset 8
        InputHandler* field_16;          // offset 16
        char _unknown_24[12];
        uint field_36;       // offset 36
        undefined1 field_40; // offset 40
        char _unknown_41[639];
    };

    // 0x1001267c0, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // ClientMouseListener::ClientMouseListener(): jumps straight to the base-object constructor

    // 0x100126880, 16 bytes, complete-object destructor, inline, placed by class name and debug map
    // ClientMouseListener::~ClientMouseListener(): jumps straight to the base-object destructor

    // 0x100126980, 224 bytes, base-object constructor, inline, placed by class name
    // ClientMouseListener::ClientMouseListener()
    void ClientMouseListener::ClientMouseListener() {
        new (this) InputListener();
        field_36 = 0;
        field_8 = (ClientKeyboardListener*)0;
        field_16 = (InputHandler*)0;
        std::atomic<int>::atomic((int)this + 40);
        std::function<bool(float, float)>::function((function<bool(float, float)>*)&field_48);
        std::function<bool(float, float)>::function((function<bool(float, float)>*)&field_96);
        std::function<bool(float, float)>::function((function<bool(float, float)>*)&field_144);
        std::function<bool(float, float)>::function((function<bool(float, float)>*)&field_192);
        std::function<bool(float, float)>::function((function<bool(float, float)>*)&field_240);
        std::function<bool(float, float)>::function((function<bool(float, float)>*)&field_288);
        std::function<bool(float, float)>::function((function<bool(float, float)>*)&field_336);
        std::function<bool(float, float, float, float)>::function(
            (function<bool(float, float, float, float)>*)&field_384);
        std::function<bool(int, int, int, int)>::function((function<bool(int, int, int, int)>*)&field_432);
        std::function<bool(unsigned long, float, float)>::function(
            (function<bool(unsigned long, float, float)>*)&field_480);
        std::function<bool(unsigned long, float, float)>::function(
            (function<bool(unsigned long, float, float)>*)&field_528);
        std::function<bool(unsigned long, float, float)>::function(
            (function<bool(unsigned long, float, float)>*)&field_576);
        std::function<bool(unsigned long, float, float)>::function(
            (function<bool(unsigned long, float, float)>*)&field_624);
        std::function<bool(unsigned long, float, float)>::function(
            (function<bool(unsigned long, float, float)>*)&field_672);
    }

    // 0x100127560, 192 bytes, base-object destructor, inline, placed by class name
    // ClientMouseListener::~ClientMouseListener()
    void ClientMouseListener::~ClientMouseListener() {
        std::function<bool(unsigned long, float, float)>::~function(
            (function<bool(unsigned long, float, float)>*)&field_672);
        std::function<bool(unsigned long, float, float)>::~function(
            (function<bool(unsigned long, float, float)>*)&field_624);
        std::function<bool(unsigned long, float, float)>::~function(
            (function<bool(unsigned long, float, float)>*)&field_576);
        std::function<bool(unsigned long, float, float)>::~function(
            (function<bool(unsigned long, float, float)>*)&field_528);
        std::function<bool(unsigned long, float, float)>::~function(
            (function<bool(unsigned long, float, float)>*)&field_480);
        std::function<bool(int, int, int, int)>::~function((function<bool(int, int, int, int)>*)&field_432);
        std::function<bool(float, float, float, float)>::~function(
            (function<bool(float, float, float, float)>*)&field_384);
        std::function<bool(float, float)>::~function((function<bool(float, float)>*)&field_336);
        std::function<bool(float, float)>::~function((function<bool(float, float)>*)&field_288);
        std::function<bool(float, float)>::~function((function<bool(float, float)>*)&field_240);
        std::function<bool(float, float)>::~function((function<bool(float, float)>*)&field_192);
        std::function<bool(float, float)>::~function((function<bool(float, float)>*)&field_144);
        std::function<bool(float, float)>::~function((function<bool(float, float)>*)&field_96);
        std::function<bool(float, float)>::~function((function<bool(float, float)>*)&field_48);
    }

} // namespace jag::oldscape::input
