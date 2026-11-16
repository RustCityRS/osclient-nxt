// libs/game/shared/framework/input/event/KeyHeldInputEvent.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::game {
    class KeyHeldInputEvent {
    public:
        // virtual methods in vtable order
        virtual ~KeyHeldInputEvent();
        virtual ulong EventOccurred(MouseEvent const*, eastl::vector<KeyEvent, eastl::allocator> const&, unsigned int,
                                    Keyboard&) const;
        virtual void Pack(PacketT<Array<unsigned char, eastl::allocator>>&) const;
        virtual int GetPackLength() const;
        virtual GetEventType() const;
        KeyHeldInputEvent(PacketT<Array<unsigned char, eastl::allocator>>&);

        // data members, from how the methods use this: 32 bytes
        undefined** field_0; // offset 0, vtable pointer
        char _unknown_8[24];
    };

    // 0x1006e6850, 16 bytes, complete-object destructor, inline, placed by class name and debug map
    // KeyHeldInputEvent::~KeyHeldInputEvent(): jumps straight to the base-object destructor

    // 0x1006e6860, 32 bytes, deleting destructor, inline, placed by class name and debug map
    // KeyHeldInputEvent::~KeyHeldInputEvent()
    void KeyHeldInputEvent::~KeyHeldInputEvent() {
        ~KeyHeldInputEvent(this);
        operator_delete(this);
    }

    // 0x1006e6880, 32 bytes, inline, placed by class name and debug map
    // KeyHeldInputEvent::GetPackLength() const
    int KeyHeldInputEvent::GetPackLength() {
        int iVar1;

        iVar1 = (&field_8)->end();
        return iVar1 + 1;
    }

    // 0x1006e9ae0, 48 bytes, base-object destructor, inline, placed by class name
    // KeyHeldInputEvent::~KeyHeldInputEvent()
    void KeyHeldInputEvent::~KeyHeldInputEvent() {
        field_0 = &PTR__KeyHeldInputEvent_100f11660;
        (&field_8)->~Array();
        ~AutoSingleton();
    }

} // namespace jag::game
