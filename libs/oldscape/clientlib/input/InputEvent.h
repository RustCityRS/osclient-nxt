// libs/oldscape/clientlib/input/InputEvent.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::oldscape::input {
    class InputEvent {
    public:
        uint32_t DispatchToInputHandler(InputHandler* inputHandler);
        InputEvent();
        void Clear();

    private:
        uint32_t field_0;
        uint16_t field_4;
        uint8_t _unknown_6[2];
        uint32_t field_8;
        uint32_t field_12;
        uint32_t field_16;
        uint8_t _unknown_20[4];
        uint64_t field_24;
    };

    // 0x1003928c0
    uint32_t InputEvent::DispatchToInputHandler(InputHandler* inputHandler) {
        uint32_t uVar1;

        switch (field_0) {
        case 0:
            uVar1 = (**(void (**)(...))(inputHandler->field_0 + 56))(inputHandler, field_12, field_16, field_24);
            break;
        case 1:
            uVar1 = (**(void (**)(...))(inputHandler->field_0 + 64))(inputHandler, field_12, field_16, field_24);
            break;
        case 2:
            uVar1 = (**(void (**)(...))(inputHandler->field_0 + 72))(inputHandler, *(uint32_t*)&field_4, field_24);
            break;
        case 3:
            uVar1 = (**(void (**)(...))(inputHandler->field_0 + 32))(inputHandler, *(uint32_t*)&field_4, field_8,
                                                                     field_12, field_16, field_24);
            break;
        case 4:
            uVar1 = (**(void (**)(...))(inputHandler->field_0 + 40))(inputHandler, *(uint32_t*)&field_4, field_8,
                                                                     field_12, field_16, field_24);
            break;
        case 5:
            uVar1 = (**(void (**)(...))(inputHandler->field_0 + 48))(inputHandler, *(uint32_t*)&field_4, field_12,
                                                                     field_16, field_24);
            break;
        case 6:
            uVar1 = (**(void (**)(...))inputHandler->field_0)(inputHandler, *(uint32_t*)&field_4, field_24);
            break;
        case 7:
            uVar1 = (**(void (**)(...))(inputHandler->field_0 + 16))(inputHandler, *(uint32_t*)&field_4, field_24);
            break;
        case 8:
            uVar1 = (**(void (**)(...))(inputHandler->field_0 + 24))(inputHandler, field_4, field_24);
            break;
        case 9:
            uVar1 = (**(void (**)(...))(inputHandler->field_0 + 80))(inputHandler, *(uint32_t*)&field_4, field_24);
            break;
        case 10:
            uVar1 = (**(void (**)(...))(inputHandler->field_0 + 104))(inputHandler, field_12, field_16,
                                                                      *(uint32_t*)&field_4, field_8);
            break;
        case 11:
            uVar1 = (**(void (**)(...))(inputHandler->field_0 + 88))(inputHandler, *(uint32_t*)&field_4, field_24);
            break;
        case 4294967295:
            (logger::default_logger())
                ->Log(false, 8,
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/clientlib/input/"
                      "InputEvent.h",
                      78, "Trying to dispatch UNSET input event!");
            return 0;
        default:
            LogAndAbort("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/clientlib/"
                        "input/InputEvent.h",
                        82, "IllegalStateException: m_type %i");
            return 0;
        }
        return uVar1;
    }

    // 0x100396f10
    InputEvent::InputEvent() {
        SetDefaults();
    }

    // 0x100396f20
    void InputEvent::Clear() {
        m_skyBoxID = 4294967295;
    }

} // namespace jag::oldscape::input
