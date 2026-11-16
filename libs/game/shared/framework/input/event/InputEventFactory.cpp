// libs/game/shared/framework/input/event/InputEventFactory.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.shared

namespace jag::game {
    class InputEventFactory {
    public:
        InputEvent* NewInputEventUnpacked(PacketT<Array<unsigned char>>& arg1);
        void PackInputEvent(const InputEvent& inputEvent, PacketT<Array<unsigned char>>& arg2);
    };

    // 0x1006e44c0
    InputEvent* InputEventFactory::NewInputEventUnpacked(PacketT<Array<unsigned char>>& arg1) {
        MouseInputEvent* mouseInputEvent;

        char cVar1 = arg1.g1();
        if (cVar1 == '\x02') {
            mouseInputEvent = (MouseInputEvent*)operator new(32);
            new (mouseInputEvent) KeyHeldInputEvent(arg1);
        } else if (cVar1 == '\x01') {
            mouseInputEvent = (MouseInputEvent*)operator new(16);
            new (mouseInputEvent) KeyPressInputEvent(arg1);
        } else if (!cVar1) {
            mouseInputEvent = (MouseInputEvent*)operator new(40);
            new (mouseInputEvent) MouseInputEvent(arg1);
        } else {
            mouseInputEvent = nullptr;
        }
        return (InputEvent*)mouseInputEvent;
    }

    // 0x1006e4580
    void InputEventFactory::PackInputEvent(const InputEvent& inputEvent, PacketT<Array<unsigned char>>& arg2) {
        (inputEvent._vptr[2]._x7e___2)();
    }

} // namespace jag::game
