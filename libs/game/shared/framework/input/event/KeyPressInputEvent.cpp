// libs/game/shared/framework/input/event/KeyPressInputEvent.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.shared

namespace jag::game {
    class KeyPressInputEvent {
    public:
        // virtual methods in vtable order
        virtual ~KeyPressInputEvent();
        virtual uint64_t EventOccurred(const MouseEvent* mouseEvent, const eastl::vector<KeyEvent>& keyEvents,
                                       unsigned int arg3, Keyboard& keyboard) const;
        virtual void Pack(PacketT<Array<unsigned char>>& arg1) const;
        virtual uint64_t GetPackLength() const;
        virtual uint64_t GetEventType() const;
        KeyPressInputEvent(PacketT<Array<unsigned char>>& arg1);

    private:
        unsigned int field_8;
        unsigned int field_12;
        uint8_t _unknown_16[4];
    };

    // 0x100022b10: KeyPressInputEvent::~KeyPressInputEvent() has the same machine code as oldscape::option::ScriptOption<int, oldscape::option::DeviceOptionScriptID>::~ScriptOption()

    // 0x10002a770: KeyPressInputEvent::~KeyPressInputEvent() has the same machine code as void eastl::destruct<oldscape::rs2lib::CoordMapSquare*>(oldscape::rs2lib::CoordMapSquare*, oldscape::rs2lib::CoordMapSquare*)

    // 0x100269960: KeyPressInputEvent::GetEventType() const has the same machine code as oldscape::rs2lib::social::ClanChannelDelta::AddUser::GetID() const

    // 0x1002699e0: KeyPressInputEvent::GetPackLength() const has the same machine code as oldscape::rs2lib::social::ClanChannelDelta::UpdateUserDetails::GetID() const

    // 0x1006e47c0
    uint64_t KeyPressInputEvent::EventOccurred(const MouseEvent* mouseEvent, const eastl::vector<KeyEvent>& keyEvents,
                                               unsigned int arg3, Keyboard& keyboard) const {
        unsigned int* puVar2;
        unsigned int uVar3;

        unsigned long arg1 = 0;
        if (arg3 != 0) {
            do {
                if (keyEvents.size() <= arg1) {
                    return 0;
                }
                puVar2 = &keyEvents[arg1];
                if ((*puVar2 == field_8) && (puVar2[4] == field_12)) {
                    return 1;
                }
                uVar3 = (int)arg1 + 1;
                arg1 = (unsigned long)uVar3;
            } while (arg3 != uVar3);
        }
        return 0;
    }

    // 0x1006e4870
    KeyPressInputEvent::KeyPressInputEvent(PacketT<Array<unsigned char>>& arg1) : InputEvent() {
        uint8_t bVar1 = arg1.g1();
        field_8 = (unsigned int)bVar1;
        bVar1 = arg1.g1();
        field_12 = (unsigned int)bVar1;
    }

    // 0x1006e48c0
    void KeyPressInputEvent::Pack(PacketT<Array<unsigned char>>& arg1) const {
        arg1.p1<unsigned long>(field_8);
        arg1.p1<unsigned long>(field_12);
    }

} // namespace jag::game
