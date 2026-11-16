// libs/game/shared/framework/input/Gamepad.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.game.shared

namespace jag::game {
    class Gamepad {
    public:
        Gamepad(input::InputHandler& inputHandler);
        void OnGamepadButton(unsigned int arg1, input::GamepadButton gamepadButton, bool arg3);
        uint64_t GetOldestButtonEvent() const;
        void RemoveOldestButtonEvent();
        void OnGamepadAxis(unsigned int arg1, input::GamepadAxis arg2, short arg3);
        void OnGamepadTrigger(unsigned int arg1, input::GamepadTrigger arg2, unsigned char arg3);

    private:
        InputHandler* field_0;
        uint8_t _unknown_8[152];
        int field_160;
        uint8_t _unknown_164[144];
        unsigned int field_308;
        unsigned int field_312;
        uint8_t _unknown_316[16];
    };

    class GamepadEvent {
    public:
        GamepadEvent();

    private:
        uint32_t field_0;
        uint8_t field_4;
    };

    // 0x1006e21c0
    Gamepad::Gamepad(input::InputHandler& inputHandler) : field_0(inputHandler) {
        uint8_t* this_02 = &field_16;
        new (this_02) std::function<bool(unsigned int, input::GamepadAxis, short)>();
        uint8_t* this_00 = &field_64;
        new (this_00) std::function<bool(unsigned int, input::GamepadButton, bool)>();
        uint8_t* this_01 = &field_112;
        new (this_01) std::function<bool(unsigned int, input::GamepadTrigger, unsigned char)>();
        field_160 = 0;
        new (&field_180) std::array<GamepadEvent, 16ul>();
        field_308 = 0;
        field_312 = 0;
        GamepadEvent* gamepadEvent1 = (GamepadEvent*)std::array<GamepadEvent, 16ul>::begin();
        GamepadEvent* gamepadEvent2 = (GamepadEvent*)std::array<GamepadEvent, 16ul>::end();
        local_38.field_0 = nullptr;
        __40 local_38;
        std::fill<GamepadEvent*, GamepadEvent>(gamepadEvent1, gamepadEvent2, local_38);
        bool* arg1 = (bool*)std::array<bool, 16ul>::begin();
        bool* arg2 = (bool*)std::array<bool, 16ul>::end();
        local_38.field_0 = (Gamepad*)((unsigned long)local_38.field_0 & 18446744073709551360);
        std::fill<bool*, bool>(arg1, arg2, local_38);
        short* arg1_00 = (short*)std::array<short, 4ul>::begin();
        short* arg2_00 = (short*)std::array<short, 4ul>::end();
        local_38.field_0 = (Gamepad*)((unsigned long)local_38.field_0 & 18446744073709486080);
        std::fill<short*, short>(arg1_00, arg2_00, local_38);
        unsigned char* arg1_01 = (unsigned char*)std::array<unsigned char, 2ul>::begin();
        unsigned char* arg2_01 = (unsigned char*)std::array<unsigned char, 2ul>::end();
        local_38.field_0 = (Gamepad*)((unsigned long)local_38.field_0 & 18446744073709551360);
        std::fill<unsigned char*, unsigned char>(arg1_01, arg2_01, local_38);
        local_38.field_0 = this;
        ((function<bool(unsigned int, input::GamepadAxis, short)>*)this_02)->operator=(&local_38);
        field_0->RegisterGamepadAxis(this_02);
        local_38.field_0 = this;
        ((function<bool(unsigned int, input::GamepadButton, bool)>*)this_00)->operator=(&local_38);
        field_0->RegisterGamepadButton(this_00);
        local_38.field_0 = this;
        ((function<bool(unsigned int, input::GamepadTrigger, unsigned char)>*)this_01)->operator=(&local_38);
        field_0->RegisterGamepadTrigger(this_01);
    }

    // 0x1006e2640
    void Gamepad::OnGamepadButton(unsigned int arg1, input::GamepadButton gamepadButton, bool arg3) {
        uint64_t in_register_00000009;

        field_160 = field_160 - 1 + (int)(((uint64_t)in_register_00000009 << 8) | (uint8_t)arg3) * 2;
        uint64_t uVar1 = field_164[(long)(int)gamepadButton];
        *(bool*)uVar1 = arg3;
        unsigned int uVar3 = field_312;
        GamepadButton* pGVar2 = &field_180[(unsigned long)uVar3];
        *pGVar2 = gamepadButton;
        uVar3 = uVar3 + 1;
        if (15 < uVar3) {
            uVar3 = 0;
        }
        *(bool*)(pGVar2 + 1) = arg3;
        field_312 = uVar3;
        if (uVar3 == field_308) {
            uVar3 = field_308 + 1;
            if (15 < uVar3) {
                uVar3 = 0;
            }
            field_308 = uVar3;
        }
    }

    // 0x1006e26f0
    uint64_t Gamepad::GetOldestButtonEvent() const {
        if (field_308 == field_312) {
            return 0;
        }
        return field_180[(unsigned long)field_308];
    }

    // 0x1006e2730
    void Gamepad::RemoveOldestButtonEvent() {
        unsigned int uVar1;
        unsigned int uVar2;

        if (field_308 != field_312) {
            uVar1 = field_308 + 1;
            uVar2 = 0;
            if (uVar1 < 16) {
                uVar2 = uVar1;
            }
            field_308 = uVar2;
        }
    }

    // 0x100716b50
    void Gamepad::Gamepad(input::InputHandler&)::$_40::operator()(unsigned int arg1, input::GamepadAxis arg2,
                                                                  short arg3) const {
        OnGamepadAxis(field_0);
    }

    // 0x100716b60
    void Gamepad::OnGamepadAxis(unsigned int arg1, input::GamepadAxis arg2, short arg3) {
        uint16_t* puVar1 = &field_316[(long)param_3];
        *puVar1 = param_4;
    }

    // 0x1007176d0
    void Gamepad::Gamepad(input::InputHandler&)::$_41::operator()(unsigned int arg1, input::GamepadButton gamepadButton,
                                                                  bool arg3) const {
        OnGamepadButton(field_0, arg1, gamepadButton, arg3);
    }

    // 0x100718210
    void Gamepad::Gamepad(input::InputHandler&)::$_42::operator()(unsigned int arg1, input::GamepadTrigger arg2,
                                                                  unsigned char arg3) const {
        OnGamepadTrigger(field_0);
    }

    // 0x100718220
    void Gamepad::OnGamepadTrigger(unsigned int arg1, input::GamepadTrigger arg2, unsigned char arg3) {
        uint8_t* puVar1 = &field_324[(long)param_3];
        *puVar1 = param_4;
    }

} // namespace jag::game
