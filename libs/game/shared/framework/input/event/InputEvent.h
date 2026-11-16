// libs/game/shared/framework/input/event/InputEvent.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.systemheap

namespace jag::game {
    class InputEvent {
    public:
        // virtual methods in vtable order
        virtual ~InputEvent();
        InputEvent();

        // data members, from how the methods use this: 8 bytes
        undefined* field_0; // offset 0, vtable pointer
    };

    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    InputEvent::~InputEvent();

    // 0x1006e4720, 32 bytes, base-object constructor, inline, placed by class name and debug map
    // InputEvent::InputEvent()
    void InputEvent::InputEvent() {
        field_0 = PTR_vtable_100ee7eb0 + 16;
    }

    // 0x100c92b50: the linker folded this into InlineFatalBreak(), which has identical code
    InputEvent::~InputEvent();

    // 0x100c92b50: the linker folded this into InlineFatalBreak(), which has identical code
    InputEvent::~InputEvent();

} // namespace jag::game
