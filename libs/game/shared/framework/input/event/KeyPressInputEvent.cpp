// libs/game/shared/framework/input/event/KeyPressInputEvent.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.game.shared

namespace jag::game {
    class KeyPressInputEvent {
    public:
        // virtual methods in vtable order
        virtual ~KeyPressInputEvent();
        virtual EventOccurred(MouseEvent const*, eastl::vector<KeyEvent, eastl::allocator> const&, unsigned int,
                              Keyboard&) const;
        virtual void Pack(PacketT<Array<unsigned char, eastl::allocator>>&) const;
        virtual GetPackLength() const;
        virtual GetEventType() const;
        KeyPressInputEvent(PacketT<Array<unsigned char, eastl::allocator>>&);

        // data members, from how the methods use this: 20 bytes
        undefined** field_0; // offset 0, vtable pointer
        uint field_8;        // offset 8
        uint field_12;       // offset 12
        char _unknown_16[4];
    };

    // 0x100022b10: the linker folded this into oldscape::option::ScriptOption<int, oldscape::option::DeviceOptionScriptID>::~ScriptOption(), which has identical code
    KeyPressInputEvent::~KeyPressInputEvent();

    // 0x10002a770: the linker folded this into void eastl::destruct<oldscape::rs2lib::CoordMapSquare*>(oldscape::rs2lib::CoordMapSquare*, oldscape::rs2lib::CoordMapSquare*), which has identical code
    KeyPressInputEvent::~KeyPressInputEvent();

    // 0x10004a690: the linker folded this into oldscape::option::ScriptOption<bool, oldscape::option::DeviceOptionScriptID>::~ScriptOption(), which has identical code
    KeyPressInputEvent::~KeyPressInputEvent();

    // 0x100269960: the linker folded this into oldscape::rs2lib::social::ClanChannelDelta::AddUser::GetID() const, which has identical code
    KeyPressInputEvent::GetEventType() const;

    // 0x1002699e0: the linker folded this into oldscape::rs2lib::social::ClanChannelDelta::UpdateUserDetails::GetID() const, which has identical code
    KeyPressInputEvent::GetPackLength() const;

    // 0x1006e4560, 16 bytes, complete-object constructor, placed by class name and debug map
    // KeyPressInputEvent::KeyPressInputEvent(PacketT<Array<unsigned char, eastl::allocator> >&): jumps straight to the base-object constructor

    // 0x1006e47c0, 112 bytes, placed by class name
    // KeyPressInputEvent::EventOccurred(MouseEvent const*, eastl::vector<KeyEvent, eastl::allocator> const&, unsigned int, Keyboard&) const
    undefined8 KeyPressInputEvent::EventOccurred(MouseEvent* param_1, vector* param_2, uint param_3,
                                                 Keyboard* param_4) {
        ulong uVar1;
        uint* puVar2;
        uint uVar3;
        ulong uVar4;

        uVar4 = 0;
        if (param_3 != 0) {
            do {
                uVar1 = param_2->size();
                if (uVar1 <= uVar4) {
                    return 0;
                }
                puVar2 = (uint*)eastl::vector<KeyEvent, eastl::allocator>::operator[](
                    (vector<KeyEvent, eastl::allocator>*)param_2, uVar4);
                if ((*puVar2 == field_8) && (puVar2[4] == field_12)) {
                    return CONCAT71((int7)(uVar4 >> 8), 1);
                }
                uVar3 = (int)uVar4 + 1;
                uVar4 = (ulong)uVar3;
            } while (param_3 != uVar3);
        }
        return 0;
    }

    // 0x1006e4870, 80 bytes, base-object constructor, placed by class name
    // KeyPressInputEvent::KeyPressInputEvent(PacketT<Array<unsigned char, eastl::allocator> >&)
    void KeyPressInputEvent::KeyPressInputEvent(PacketT* param_1) {
        byte bVar1;

        new (this) InputEvent();
        field_0 = &PTR__ScriptOption_100f116a0;
        bVar1 = param_1->g1();
        field_8 = (uint)bVar1;
        bVar1 = param_1->g1();
        field_12 = (uint)bVar1;
    }

    // 0x1006e48c0, 48 bytes, placed by class name
    // KeyPressInputEvent::Pack(PacketT<Array<unsigned char, eastl::allocator> >&) const
    void KeyPressInputEvent::Pack(PacketT* param_1) {
        PacketT<Array<unsigned char, eastl::allocator>>::p1<unsigned long>(
            (PacketT<Array<unsigned char, eastl::allocator>>*)param_1, (ulong)field_8);
        PacketT<Array<unsigned char, eastl::allocator>>::p1<unsigned long>(
            (PacketT<Array<unsigned char, eastl::allocator>>*)param_1, (ulong)field_12);
    }

} // namespace jag::game
