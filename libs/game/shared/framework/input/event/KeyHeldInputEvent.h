// libs/game/shared/framework/input/event/KeyHeldInputEvent.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::game {
    class KeyHeldInputEvent {
    public:
        // virtual methods in vtable order
        virtual ~KeyHeldInputEvent();
        virtual unsigned long EventOccurred(const MouseEvent* mouseEvent, const eastl::vector<KeyEvent>& keyEvents,
                                            unsigned int arg3, Keyboard& keyboard) const;
        virtual void Pack(PacketT<Array<unsigned char>>& arg1) const;
        virtual int GetPackLength() const;
        virtual uint64_t GetEventType() const;
        KeyHeldInputEvent(PacketT<Array<unsigned char>>& arg1);

    private:
        uint8_t _unknown_8[24];
    };

    // 0x1006e6880
    int KeyHeldInputEvent::GetPackLength() const {
        return field_8.end() + 1;
    }

    // 0x1006e9ae0
    KeyHeldInputEvent::~KeyHeldInputEvent() {
        field_8.~Array();
    }

} // namespace jag::game
