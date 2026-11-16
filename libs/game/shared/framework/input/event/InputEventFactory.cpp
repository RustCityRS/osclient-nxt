// libs/game/shared/framework/input/event/InputEventFactory.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.game.shared

namespace jag::game {
    class InputEventFactory {
    public:
        MouseInputEvent* NewInputEventUnpacked(PacketT<Array<unsigned char, eastl::allocator>>&);
        void PackInputEvent(InputEvent const&, PacketT<Array<unsigned char, eastl::allocator>>&);
    };

    // 0x1006e44c0, 144 bytes, placed by class name and debug map
    // InputEventFactory::NewInputEventUnpacked(PacketT<Array<unsigned char, eastl::allocator> >&)
    MouseInputEvent* InputEventFactory::NewInputEventUnpacked(PacketT* param_1) {
        char cVar1;
        MouseInputEvent* this;

        cVar1 = param_1->g1();
        if (cVar1 == '\x02') {
            this = operator_new(32);
            new (this) KeyHeldInputEvent(param_1);
        } else if (cVar1 == '\x01') {
            this = operator_new(16);
            new (this) KeyPressInputEvent(param_1);
        } else if (cVar1 == '\0') {
            this = operator_new(40);
            MouseInputEvent::MouseInputEvent(this, param_1);
        } else {
            this = (MouseInputEvent*)0;
        }
        return this;
    }

    // 0x1006e4580, 48 bytes, placed by class name
    // InputEventFactory::PackInputEvent(InputEvent const&, PacketT<Array<unsigned char, eastl::allocator> >&)
    void InputEventFactory::PackInputEvent(InputEvent* param_1, PacketT* param_2) {
        uint uVar1;

        uVar1 = (**(code**)(param_1->field_0 + 40))();
        PacketT<Array<unsigned char, eastl::allocator>>::p1<unsigned long>(
            (PacketT<Array<unsigned char, eastl::allocator>>*)param_2, (ulong)uVar1);
        (**(code**)(param_1->field_0 + 24))(param_1, param_2);
    }

} // namespace jag::game
