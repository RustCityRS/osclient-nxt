// libs/game/shared/framework/input/Gamepad.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.game.shared

namespace jag::game {
    class Gamepad {
    public:
        Gamepad(input::InputHandler&);
        void OnGamepadButton(unsigned int, input::GamepadButton, bool);
        GetOldestButtonEvent() const;
        void RemoveOldestButtonEvent();
        void OnGamepadAxis(unsigned int, input::GamepadAxis, short);
        void OnGamepadTrigger(unsigned int, input::GamepadTrigger, unsigned char);

        // data members, from how the methods use this: 332 bytes
        InputHandler* field_0; // offset 0
        char _unknown_8[152];
        int field_160; // offset 160
        char _unknown_164[144];
        uint field_308; // offset 308
        uint field_312; // offset 312
        char _unknown_316[16];
    };

    class GamepadEvent {
    public:
        GamepadEvent();

        // data members, from how the methods use this: 5 bytes
        undefined4 field_0; // offset 0
        undefined1 field_4; // offset 4
    };

    // 0x1006e21c0, 448 bytes, base-object constructor, placed by class name
    // Gamepad::Gamepad(input::InputHandler&)
    void Gamepad::Gamepad(InputHandler* param_1) {
        undefined1* this_00;
        undefined1* this_01;
        undefined1* this_02;
        GamepadEvent* pGVar1;
        GamepadEvent* pGVar2;
        bool* pbVar3;
        bool* pbVar4;
        short* psVar5;
        short* psVar6;
        uchar* puVar7;
        uchar* puVar8;
        undefined1* this_03;
        Gamepad* local_38;

        field_0 = param_1;
        this_03 = &field_16;
        std::function<bool(unsigned int, input::GamepadAxis, short)>::function(
            (function<bool(unsigned int, input::GamepadAxis, short)>*)this_03);
        this_00 = &field_64;
        std::function<bool(unsigned int, input::GamepadButton, bool)>::function(
            (function<bool(unsigned int, input::GamepadButton, bool)>*)this_00);
        this_01 = &field_112;
        std::function<bool(unsigned int, input::GamepadTrigger, unsigned char)>::function(
            (function<bool(unsigned int, input::GamepadTrigger, unsigned char)>*)this_01);
        field_160 = 0;
        this_02 = &field_180;
        new (this_02) std::array<GamepadEvent, 16ul>();
        field_308 = 0;
        field_312 = 0;
        pGVar1 = (GamepadEvent*)this_02->begin();
        pGVar2 = (GamepadEvent*)this_02->end();
        local_38 = (Gamepad*)0;
        new (&local_38) GamepadEvent();
        std::fill<GamepadEvent*, GamepadEvent>(pGVar1, pGVar2, (GamepadEvent*)&local_38);
        pbVar3 = (bool*)(&field_164)->begin();
        pbVar4 = (bool*)(&field_164)->end();
        local_38 = (Gamepad*)((ulong)local_38 & 18446744073709551360);
        std::fill<bool*, bool>(pbVar3, pbVar4, (bool*)&local_38);
        psVar5 = (short*)(&field_316)->begin();
        psVar6 = (short*)(&field_316)->end();
        local_38 = (Gamepad*)((ulong)local_38 & 18446744073709486080);
        std::fill<short*, short>(psVar5, psVar6, (short*)&local_38);
        puVar7 = (uchar*)(&field_324)->begin();
        puVar8 = (uchar*)(&field_324)->end();
        local_38 = (Gamepad*)((ulong)local_38 & 18446744073709551360);
        std::fill<unsigned char*, unsigned char>(puVar7, puVar8, (uchar*)&local_38);
        local_38 = this;
        std::function<bool(unsigned int, input::GamepadAxis, short)>::operator=(
            (function<bool(unsigned int, input::GamepadAxis, short)>*)this_03, (__40*)&local_38);
        (field_0, (function*)this_03)->RegisterGamepadAxis();
        local_38 = this;
        std::function<bool(unsigned int, input::GamepadButton, bool)>::operator=(
            (function<bool(unsigned int, input::GamepadButton, bool)>*)this_00, (__41*)&local_38);
        (field_0, (function*)this_00)->RegisterGamepadButton();
        local_38 = this;
        std::function<bool(unsigned int, input::GamepadTrigger, unsigned char)>::operator=(
            (function<bool(unsigned int, input::GamepadTrigger, unsigned char)>*)this_01, (__42*)&local_38);
        (field_0, (function*)this_01)->RegisterGamepadTrigger();
    }

    // 0x1006e2630, 16 bytes, complete-object constructor, placed by class name
    // Gamepad::Gamepad(input::InputHandler&): jumps straight to the base-object constructor

    // 0x1006e2640, 144 bytes, placed by class name
    // Gamepad::OnGamepadButton(unsigned int, input::GamepadButton, bool)
    void Gamepad::OnGamepadButton(undefined8 param_2, int param_3, int param_4) {
        undefined1* puVar1;
        int* piVar2;
        uint uVar3;

        field_160 = field_160 + -1 + param_4 * 2;
        puVar1 = (undefined1*)std::array<bool, 16ul>::operator[]((array<bool, 16ul>*)&field_164, (long)param_3);
        *puVar1 = (char)param_4;
        uVar3 = field_312;
        piVar2 = (int*)std::array<GamepadEvent, 16ul>::operator[]((array<GamepadEvent, 16ul>*)&field_180, (ulong)uVar3);
        *piVar2 = param_3;
        uVar3 = uVar3 + 1;
        if (15 < uVar3) {
            uVar3 = 0;
        }
        *(char*)(piVar2 + 1) = (char)param_4;
        field_312 = uVar3;
        if (uVar3 == field_308) {
            uVar3 = field_308 + 1;
            if (15 < uVar3) {
                uVar3 = 0;
            }
            field_308 = uVar3;
        }
    }

    // 0x1006e26f0, 48 bytes, placed by class name
    // Gamepad::GetOldestButtonEvent() const
    undefined8 Gamepad::GetOldestButtonEvent() {
        undefined8 uVar1;

        if (field_308 == field_312) {
            return 0;
        }
        uVar1 = std::array<GamepadEvent, 16ul>::operator[]((array<GamepadEvent, 16ul>*)&field_180, (ulong)field_308);
        return uVar1;
    }

    // 0x1006e2730, 48 bytes, placed by class name
    // Gamepad::RemoveOldestButtonEvent()
    void Gamepad::RemoveOldestButtonEvent() {
        uint uVar1;
        uint uVar2;

        if (field_308 != field_312) {
            uVar1 = field_308 + 1;
            uVar2 = 0;
            if (uVar1 < 16) {
                uVar2 = uVar1;
            }
            field_308 = uVar2;
        }
    }

    // 0x100716b50, 16 bytes, placed by class name
    // Gamepad::Gamepad(input::InputHandler&)::$_40::operator()(unsigned int, input::GamepadAxis, short) const
    /* Gamepad::Gamepad(input::InputHandler&)::$_40::TEMPNAMEPLACEHOLDERVALUE(unsigned
   int, input::GamepadAxis, short) const */

    void Gamepad::Gamepad(input::InputHandler&)::$_40::operator()(undefined8* param_1) {
        OnGamepadAxis((Gamepad*)*param_1);
    }

    // 0x100716b60, 48 bytes, inline, placed by class name
    // Gamepad::OnGamepadAxis(unsigned int, input::GamepadAxis, short)
    void Gamepad::OnGamepadAxis(undefined8 param_2, int param_3, undefined2 param_4) {
        undefined2* puVar1;

        puVar1 = (undefined2*)std::array<short, 4ul>::operator[]((array<short, 4ul>*)&field_316, (long)param_3);
        *puVar1 = param_4;
    }

    // 0x1007176d0, 16 bytes, placed by class name
    // Gamepad::Gamepad(input::InputHandler&)::$_41::operator()(unsigned int, input::GamepadButton, bool) const
    /* Gamepad::Gamepad(input::InputHandler&)::$_41::TEMPNAMEPLACEHOLDERVALUE(unsigned
   int, input::GamepadButton, bool) const */

    void Gamepad::Gamepad(input::InputHandler&)::$_41::operator()(undefined8* param_1) {
        OnGamepadButton((Gamepad*)*param_1);
    }

    // 0x100718210, 16 bytes, placed by class name
    // Gamepad::Gamepad(input::InputHandler&)::$_42::operator()(unsigned int, input::GamepadTrigger, unsigned char) const
    /* Gamepad::Gamepad(input::InputHandler&)::$_42::TEMPNAMEPLACEHOLDERVALUE(unsigned
   int, input::GamepadTrigger, unsigned char) const */

    void Gamepad::Gamepad(input::InputHandler&)::$_42::operator()(undefined8* param_1) {
        OnGamepadTrigger((Gamepad*)*param_1);
    }

    // 0x100718220, 32 bytes, inline, placed by class name
    // Gamepad::OnGamepadTrigger(unsigned int, input::GamepadTrigger, unsigned char)
    void Gamepad::OnGamepadTrigger(undefined8 param_2, int param_3, undefined1 param_4) {
        undefined1* puVar1;

        puVar1 = (undefined1*)std::array<unsigned char, 2ul>::operator[]((array<unsigned char, 2ul>*)&field_324,
                                                                         (long)param_3);
        *puVar1 = param_4;
    }

} // namespace jag::game
