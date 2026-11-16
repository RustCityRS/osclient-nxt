// libs/game/shared/framework/input/Keyboard.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.game.shared

namespace jag::game {
    class KeyEvent {
    public:
        KeyEvent();

        // data members, from how the methods use this: 32 bytes
        undefined8 field_0; // offset 0
        char _unknown_8[8];
        undefined4 field_16; // offset 16
        char _unknown_20[4];
        undefined8 field_24; // offset 24
    };

    class Keyboard {
    public:
        Keyboard(input::InputHandler&, bool);
        void InitJagexKeycodes();
        OnKeyDown(int);
        OnKeyUp(int);
        OnKeyChar(int);
        GetOldestKeyDown() const;
        void RemoveOldestKeyDown();
        GetOldestKeyTyped() const;
        void RemoveOldestKeyTyped();
        void UpdatePressedState();
        IsKeyDown(int) const;
        void IsMetaDown() const;
        bool IsModifierDown(input::KeyModifier) const;
        static /* 56 bytes */ JAGEXKEYCODE_FROM_KEYCODE;

        // data members, from how the methods use this: 17548 bytes
        InputHandler* field_0; // offset 0
        char _unknown_8[152];
        bool field_160; // offset 160
        char _unknown_161[3];
        int field_164;        // offset 164
        int field_168;        // offset 168
        int field_172;        // offset 172
        undefined1 field_176; // offset 176
        char _unknown_177[511];
        undefined1 field_688; // offset 688
        char _unknown_689[511];
        uint field_1200; // offset 1200
        uint field_1204; // offset 1204
        char _unknown_1208[8160];
        uint field_9368; // offset 9368
        uint field_9372; // offset 9372
        char _unknown_9376[8160];
        uint field_17536; // offset 17536
        uint field_17540; // offset 17540
        char _unknown_17544[4];
    };

    // 0x1039bd090, 56 bytes, __common; zero-initialised
    Keyboard::JAGEXKEYCODE_FROM_KEYCODE;

    // 0x1006e2760, 480 bytes, base-object constructor, placed by class name
    // Keyboard::Keyboard(input::InputHandler&, bool)
    void Keyboard::Keyboard(InputHandler* param_1, bool param_2) {
        undefined1* this_00;
        undefined1* this_01;
        undefined1* this_02;
        undefined1* this_03;
        undefined1* this_04;
        char cVar1;
        bool* pbVar2;
        bool* pbVar3;
        KeyEvent* pKVar4;
        KeyEvent* pKVar5;
        KeyEvent local_58;

        field_0 = param_1;
        this_00 = &field_16;
        std::function<bool(int)>::function((function<bool(int)>*)this_00);
        this_01 = &field_64;
        std::function<bool(int)>::function((function<bool(int)>*)this_01);
        this_02 = &field_112;
        std::function<bool(int)>::function((function<bool(int)>*)this_02);
        field_160 = param_2;
        field_164 = 0;
        field_168 = 0;
        field_1200 = 0;
        field_1204 = 0;
        this_03 = &field_1208;
        new (this_03) std::array<KeyEvent, 255ul>();
        field_9368 = 0;
        field_9372 = 0;
        this_04 = &field_9376;
        new (this_04) std::array<KeyEvent, 255ul>();
        field_17536 = 0;
        field_17540 = 0;
        cVar1 = JAGEXKEYCODE_FROM_KEYCODE.empty();
        if (cVar1 != '\0') {
            InitJagexKeycodes();
        }
        pbVar2 = (bool*)(&field_176)->begin();
        pbVar3 = (bool*)(&field_176)->end();
        local_58.field_0 = (Keyboard*)((ulong)local_58.field_0 & 18446744073709551360);
        std::fill<bool*, bool>(pbVar2, pbVar3, (bool*)&local_58);
        pKVar4 = (KeyEvent*)this_03->begin();
        pKVar5 = (KeyEvent*)this_03->end();
        local_58.field_16 = 0;
        local_58._20_4_ = 0;
        local_58.field_24 = 0;
        local_58.field_0 = (Keyboard*)0;
        local_58._8_8_ = 0;
        new (&local_58) KeyEvent();
        std::fill<KeyEvent*, KeyEvent>(pKVar4, pKVar5, &local_58);
        pKVar4 = (KeyEvent*)this_04->begin();
        pKVar5 = (KeyEvent*)this_04->end();
        local_58.field_16 = 0;
        local_58._20_4_ = 0;
        local_58.field_24 = 0;
        local_58.field_0 = (Keyboard*)0;
        local_58._8_8_ = 0;
        new (&local_58) KeyEvent();
        std::fill<KeyEvent*, KeyEvent>(pKVar4, pKVar5, &local_58);
        local_58.field_0 = this;
        std::function<bool(int)>::operator=((function<bool(int)>*)this_00, (__43*)&local_58);
        (field_0, (function*)this_00)->RegisterKeyDown();
        local_58.field_0 = this;
        std::function<bool(int)>::operator=((function<bool(int)>*)this_01, (__44*)&local_58);
        (field_0, (function*)this_01)->RegisterKeyUp();
        local_58.field_0 = this;
        std::function<bool(int)>::operator=((function<bool(int)>*)this_02, (__45*)&local_58);
        (field_0, (function*)this_02)->RegisterKeyChar();
    }

    // 0x1006e2960, 2016 bytes, placed by class name
    // Keyboard::InitJagexKeycodes()
    void Keyboard::InitJagexKeycodes() {
        undefined4* puVar1;

        puVar1 = (undefined4*)
            eastl::hash_map<int, unsigned int, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator,
                            false>::operator[]((hash_map<int, unsigned int, eastl::hash<int>, eastl::equal_to<int>,
                                                         eastl::allocator, false>*)&JAGEXKEYCODE_FROM_KEYCODE,
                                               &input::KEY_BACKSPACE);
        *puVar1 = 85;
        puVar1 = (undefined4*)
            eastl::hash_map<int, unsigned int, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator,
                            false>::operator[]((hash_map<int, unsigned int, eastl::hash<int>, eastl::equal_to<int>,
                                                         eastl::allocator, false>*)&JAGEXKEYCODE_FROM_KEYCODE,
                                               &input::KEY_TAB);
        *puVar1 = 80;
        puVar1 = (undefined4*)
            eastl::hash_map<int, unsigned int, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator,
                            false>::operator[]((hash_map<int, unsigned int, eastl::hash<int>, eastl::equal_to<int>,
                                                         eastl::allocator, false>*)&JAGEXKEYCODE_FROM_KEYCODE,
                                               &input::KEY_CLEAR);
        *puVar1 = 91;
        puVar1 = (undefined4*)
            eastl::hash_map<int, unsigned int, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator,
                            false>::operator[]((hash_map<int, unsigned int, eastl::hash<int>, eastl::equal_to<int>,
                                                         eastl::allocator, false>*)&JAGEXKEYCODE_FROM_KEYCODE,
                                               &input::KEY_RETURN);
        *puVar1 = 84;
        puVar1 = (undefined4*)
            eastl::hash_map<int, unsigned int, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator,
                            false>::operator[]((hash_map<int, unsigned int, eastl::hash<int>, eastl::equal_to<int>,
                                                         eastl::allocator, false>*)&JAGEXKEYCODE_FROM_KEYCODE,
                                               &input::KEY_NUMPAD_ENTER);
        *puVar1 = 84;
        puVar1 = (undefined4*)
            eastl::hash_map<int, unsigned int, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator,
                            false>::operator[]((hash_map<int, unsigned int, eastl::hash<int>, eastl::equal_to<int>,
                                                         eastl::allocator, false>*)&JAGEXKEYCODE_FROM_KEYCODE,
                                               &input::KEY_SHIFT_LEFT);
        *puVar1 = 81;
        puVar1 = (undefined4*)
            eastl::hash_map<int, unsigned int, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator,
                            false>::operator[]((hash_map<int, unsigned int, eastl::hash<int>, eastl::equal_to<int>,
                                                         eastl::allocator, false>*)&JAGEXKEYCODE_FROM_KEYCODE,
                                               &input::KEY_CONTROL_LEFT);
        *puVar1 = 82;
        puVar1 = (undefined4*)
            eastl::hash_map<int, unsigned int, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator,
                            false>::operator[]((hash_map<int, unsigned int, eastl::hash<int>, eastl::equal_to<int>,
                                                         eastl::allocator, false>*)&JAGEXKEYCODE_FROM_KEYCODE,
                                               &input::KEY_ALT_LEFT);
        *puVar1 = 86;
        puVar1 = (undefined4*)
            eastl::hash_map<int, unsigned int, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator,
                            false>::operator[]((hash_map<int, unsigned int, eastl::hash<int>, eastl::equal_to<int>,
                                                         eastl::allocator, false>*)&JAGEXKEYCODE_FROM_KEYCODE,
                                               &input::KEY_ESCAPE);
        *puVar1 = 13;
        puVar1 = (undefined4*)
            eastl::hash_map<int, unsigned int, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator,
                            false>::operator[]((hash_map<int, unsigned int, eastl::hash<int>, eastl::equal_to<int>,
                                                         eastl::allocator, false>*)&JAGEXKEYCODE_FROM_KEYCODE,
                                               &input::KEY_SPACE);
        *puVar1 = 83;
        puVar1 = (undefined4*)
            eastl::hash_map<int, unsigned int, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator,
                            false>::operator[]((hash_map<int, unsigned int, eastl::hash<int>, eastl::equal_to<int>,
                                                         eastl::allocator, false>*)&JAGEXKEYCODE_FROM_KEYCODE,
                                               &input::KEY_PAGE_UP);
        *puVar1 = 104;
        puVar1 = (undefined4*)
            eastl::hash_map<int, unsigned int, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator,
                            false>::operator[]((hash_map<int, unsigned int, eastl::hash<int>, eastl::equal_to<int>,
                                                         eastl::allocator, false>*)&JAGEXKEYCODE_FROM_KEYCODE,
                                               &input::KEY_PAGE_DOWN);
        *puVar1 = 105;
        puVar1 = (undefined4*)
            eastl::hash_map<int, unsigned int, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator,
                            false>::operator[]((hash_map<int, unsigned int, eastl::hash<int>, eastl::equal_to<int>,
                                                         eastl::allocator, false>*)&JAGEXKEYCODE_FROM_KEYCODE,
                                               &input::KEY_END);
        *puVar1 = 103;
        puVar1 = (undefined4*)
            eastl::hash_map<int, unsigned int, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator,
                            false>::operator[]((hash_map<int, unsigned int, eastl::hash<int>, eastl::equal_to<int>,
                                                         eastl::allocator, false>*)&JAGEXKEYCODE_FROM_KEYCODE,
                                               &input::KEY_HOME);
        *puVar1 = 102;
        puVar1 = (undefined4*)
            eastl::hash_map<int, unsigned int, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator,
                            false>::operator[]((hash_map<int, unsigned int, eastl::hash<int>, eastl::equal_to<int>,
                                                         eastl::allocator, false>*)&JAGEXKEYCODE_FROM_KEYCODE,
                                               &input::KEY_LEFT);
        *puVar1 = 96;
        puVar1 = (undefined4*)
            eastl::hash_map<int, unsigned int, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator,
                            false>::operator[]((hash_map<int, unsigned int, eastl::hash<int>, eastl::equal_to<int>,
                                                         eastl::allocator, false>*)&JAGEXKEYCODE_FROM_KEYCODE,
                                               &input::KEY_UP);
        *puVar1 = 98;
        puVar1 = (undefined4*)
            eastl::hash_map<int, unsigned int, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator,
                            false>::operator[]((hash_map<int, unsigned int, eastl::hash<int>, eastl::equal_to<int>,
                                                         eastl::allocator, false>*)&JAGEXKEYCODE_FROM_KEYCODE,
                                               &input::KEY_RIGHT);
        *puVar1 = 97;
        puVar1 = (undefined4*)
            eastl::hash_map<int, unsigned int, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator,
                            false>::operator[]((hash_map<int, unsigned int, eastl::hash<int>, eastl::equal_to<int>,
                                                         eastl::allocator, false>*)&JAGEXKEYCODE_FROM_KEYCODE,
                                               &input::KEY_DOWN);
        *puVar1 = 99;
        puVar1 = (undefined4*)
            eastl::hash_map<int, unsigned int, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator,
                            false>::operator[]((hash_map<int, unsigned int, eastl::hash<int>, eastl::equal_to<int>,
                                                         eastl::allocator, false>*)&JAGEXKEYCODE_FROM_KEYCODE,
                                               &input::KEY_INSERT);
        *puVar1 = 100;
        puVar1 = (undefined4*)
            eastl::hash_map<int, unsigned int, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator,
                            false>::operator[]((hash_map<int, unsigned int, eastl::hash<int>, eastl::equal_to<int>,
                                                         eastl::allocator, false>*)&JAGEXKEYCODE_FROM_KEYCODE,
                                               &input::KEY_DEL);
        *puVar1 = 101;
        puVar1 = (undefined4*)
            eastl::hash_map<int, unsigned int, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator,
                            false>::operator[]((hash_map<int, unsigned int, eastl::hash<int>, eastl::equal_to<int>,
                                                         eastl::allocator, false>*)&JAGEXKEYCODE_FROM_KEYCODE,
                                               &input::KEY_0);
        *puVar1 = 25;
        puVar1 = (undefined4*)
            eastl::hash_map<int, unsigned int, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator,
                            false>::operator[]((hash_map<int, unsigned int, eastl::hash<int>, eastl::equal_to<int>,
                                                         eastl::allocator, false>*)&JAGEXKEYCODE_FROM_KEYCODE,
                                               &input::KEY_1);
        *puVar1 = 16;
        puVar1 = (undefined4*)
            eastl::hash_map<int, unsigned int, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator,
                            false>::operator[]((hash_map<int, unsigned int, eastl::hash<int>, eastl::equal_to<int>,
                                                         eastl::allocator, false>*)&JAGEXKEYCODE_FROM_KEYCODE,
                                               &input::KEY_2);
        *puVar1 = 17;
        puVar1 = (undefined4*)
            eastl::hash_map<int, unsigned int, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator,
                            false>::operator[]((hash_map<int, unsigned int, eastl::hash<int>, eastl::equal_to<int>,
                                                         eastl::allocator, false>*)&JAGEXKEYCODE_FROM_KEYCODE,
                                               &input::KEY_3);
        *puVar1 = 18;
        puVar1 = (undefined4*)
            eastl::hash_map<int, unsigned int, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator,
                            false>::operator[]((hash_map<int, unsigned int, eastl::hash<int>, eastl::equal_to<int>,
                                                         eastl::allocator, false>*)&JAGEXKEYCODE_FROM_KEYCODE,
                                               &input::KEY_4);
        *puVar1 = 19;
        puVar1 = (undefined4*)
            eastl::hash_map<int, unsigned int, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator,
                            false>::operator[]((hash_map<int, unsigned int, eastl::hash<int>, eastl::equal_to<int>,
                                                         eastl::allocator, false>*)&JAGEXKEYCODE_FROM_KEYCODE,
                                               &input::KEY_5);
        *puVar1 = 20;
        puVar1 = (undefined4*)
            eastl::hash_map<int, unsigned int, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator,
                            false>::operator[]((hash_map<int, unsigned int, eastl::hash<int>, eastl::equal_to<int>,
                                                         eastl::allocator, false>*)&JAGEXKEYCODE_FROM_KEYCODE,
                                               &input::KEY_6);
        *puVar1 = 21;
        puVar1 = (undefined4*)
            eastl::hash_map<int, unsigned int, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator,
                            false>::operator[]((hash_map<int, unsigned int, eastl::hash<int>, eastl::equal_to<int>,
                                                         eastl::allocator, false>*)&JAGEXKEYCODE_FROM_KEYCODE,
                                               &input::KEY_7);
        *puVar1 = 22;
        puVar1 = (undefined4*)
            eastl::hash_map<int, unsigned int, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator,
                            false>::operator[]((hash_map<int, unsigned int, eastl::hash<int>, eastl::equal_to<int>,
                                                         eastl::allocator, false>*)&JAGEXKEYCODE_FROM_KEYCODE,
                                               &input::KEY_8);
        *puVar1 = 23;
        puVar1 = (undefined4*)
            eastl::hash_map<int, unsigned int, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator,
                            false>::operator[]((hash_map<int, unsigned int, eastl::hash<int>, eastl::equal_to<int>,
                                                         eastl::allocator, false>*)&JAGEXKEYCODE_FROM_KEYCODE,
                                               &input::KEY_9);
        *puVar1 = 24;
        puVar1 = (undefined4*)
            eastl::hash_map<int, unsigned int, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator,
                            false>::operator[]((hash_map<int, unsigned int, eastl::hash<int>, eastl::equal_to<int>,
                                                         eastl::allocator, false>*)&JAGEXKEYCODE_FROM_KEYCODE,
                                               &input::KEY_A);
        *puVar1 = 48;
        puVar1 = (undefined4*)
            eastl::hash_map<int, unsigned int, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator,
                            false>::operator[]((hash_map<int, unsigned int, eastl::hash<int>, eastl::equal_to<int>,
                                                         eastl::allocator, false>*)&JAGEXKEYCODE_FROM_KEYCODE,
                                               &input::KEY_B);
        *puVar1 = 68;
        puVar1 = (undefined4*)
            eastl::hash_map<int, unsigned int, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator,
                            false>::operator[]((hash_map<int, unsigned int, eastl::hash<int>, eastl::equal_to<int>,
                                                         eastl::allocator, false>*)&JAGEXKEYCODE_FROM_KEYCODE,
                                               &input::KEY_C);
        *puVar1 = 66;
        puVar1 = (undefined4*)
            eastl::hash_map<int, unsigned int, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator,
                            false>::operator[]((hash_map<int, unsigned int, eastl::hash<int>, eastl::equal_to<int>,
                                                         eastl::allocator, false>*)&JAGEXKEYCODE_FROM_KEYCODE,
                                               &input::KEY_D);
        *puVar1 = 50;
        puVar1 = (undefined4*)
            eastl::hash_map<int, unsigned int, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator,
                            false>::operator[]((hash_map<int, unsigned int, eastl::hash<int>, eastl::equal_to<int>,
                                                         eastl::allocator, false>*)&JAGEXKEYCODE_FROM_KEYCODE,
                                               &input::KEY_E);
        *puVar1 = 34;
        puVar1 = (undefined4*)
            eastl::hash_map<int, unsigned int, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator,
                            false>::operator[]((hash_map<int, unsigned int, eastl::hash<int>, eastl::equal_to<int>,
                                                         eastl::allocator, false>*)&JAGEXKEYCODE_FROM_KEYCODE,
                                               &input::KEY_F);
        *puVar1 = 51;
        puVar1 = (undefined4*)
            eastl::hash_map<int, unsigned int, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator,
                            false>::operator[]((hash_map<int, unsigned int, eastl::hash<int>, eastl::equal_to<int>,
                                                         eastl::allocator, false>*)&JAGEXKEYCODE_FROM_KEYCODE,
                                               &input::KEY_G);
        *puVar1 = 52;
        puVar1 = (undefined4*)
            eastl::hash_map<int, unsigned int, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator,
                            false>::operator[]((hash_map<int, unsigned int, eastl::hash<int>, eastl::equal_to<int>,
                                                         eastl::allocator, false>*)&JAGEXKEYCODE_FROM_KEYCODE,
                                               &input::KEY_H);
        *puVar1 = 53;
        puVar1 = (undefined4*)
            eastl::hash_map<int, unsigned int, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator,
                            false>::operator[]((hash_map<int, unsigned int, eastl::hash<int>, eastl::equal_to<int>,
                                                         eastl::allocator, false>*)&JAGEXKEYCODE_FROM_KEYCODE,
                                               &input::KEY_I);
        *puVar1 = 39;
        puVar1 = (undefined4*)
            eastl::hash_map<int, unsigned int, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator,
                            false>::operator[]((hash_map<int, unsigned int, eastl::hash<int>, eastl::equal_to<int>,
                                                         eastl::allocator, false>*)&JAGEXKEYCODE_FROM_KEYCODE,
                                               &input::KEY_J);
        *puVar1 = 54;
        puVar1 = (undefined4*)
            eastl::hash_map<int, unsigned int, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator,
                            false>::operator[]((hash_map<int, unsigned int, eastl::hash<int>, eastl::equal_to<int>,
                                                         eastl::allocator, false>*)&JAGEXKEYCODE_FROM_KEYCODE,
                                               &input::KEY_K);
        *puVar1 = 55;
        puVar1 = (undefined4*)
            eastl::hash_map<int, unsigned int, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator,
                            false>::operator[]((hash_map<int, unsigned int, eastl::hash<int>, eastl::equal_to<int>,
                                                         eastl::allocator, false>*)&JAGEXKEYCODE_FROM_KEYCODE,
                                               &input::KEY_L);
        *puVar1 = 56;
        puVar1 = (undefined4*)
            eastl::hash_map<int, unsigned int, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator,
                            false>::operator[]((hash_map<int, unsigned int, eastl::hash<int>, eastl::equal_to<int>,
                                                         eastl::allocator, false>*)&JAGEXKEYCODE_FROM_KEYCODE,
                                               &input::KEY_M);
        *puVar1 = 70;
        puVar1 = (undefined4*)
            eastl::hash_map<int, unsigned int, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator,
                            false>::operator[]((hash_map<int, unsigned int, eastl::hash<int>, eastl::equal_to<int>,
                                                         eastl::allocator, false>*)&JAGEXKEYCODE_FROM_KEYCODE,
                                               &input::KEY_N);
        *puVar1 = 69;
        puVar1 = (undefined4*)
            eastl::hash_map<int, unsigned int, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator,
                            false>::operator[]((hash_map<int, unsigned int, eastl::hash<int>, eastl::equal_to<int>,
                                                         eastl::allocator, false>*)&JAGEXKEYCODE_FROM_KEYCODE,
                                               &input::KEY_O);
        *puVar1 = 40;
        puVar1 = (undefined4*)
            eastl::hash_map<int, unsigned int, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator,
                            false>::operator[]((hash_map<int, unsigned int, eastl::hash<int>, eastl::equal_to<int>,
                                                         eastl::allocator, false>*)&JAGEXKEYCODE_FROM_KEYCODE,
                                               &input::KEY_P);
        *puVar1 = 41;
        puVar1 = (undefined4*)
            eastl::hash_map<int, unsigned int, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator,
                            false>::operator[]((hash_map<int, unsigned int, eastl::hash<int>, eastl::equal_to<int>,
                                                         eastl::allocator, false>*)&JAGEXKEYCODE_FROM_KEYCODE,
                                               &input::KEY_Q);
        *puVar1 = 32;
        puVar1 = (undefined4*)
            eastl::hash_map<int, unsigned int, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator,
                            false>::operator[]((hash_map<int, unsigned int, eastl::hash<int>, eastl::equal_to<int>,
                                                         eastl::allocator, false>*)&JAGEXKEYCODE_FROM_KEYCODE,
                                               &input::KEY_R);
        *puVar1 = 35;
        puVar1 = (undefined4*)
            eastl::hash_map<int, unsigned int, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator,
                            false>::operator[]((hash_map<int, unsigned int, eastl::hash<int>, eastl::equal_to<int>,
                                                         eastl::allocator, false>*)&JAGEXKEYCODE_FROM_KEYCODE,
                                               &input::KEY_S);
        *puVar1 = 49;
        puVar1 = (undefined4*)
            eastl::hash_map<int, unsigned int, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator,
                            false>::operator[]((hash_map<int, unsigned int, eastl::hash<int>, eastl::equal_to<int>,
                                                         eastl::allocator, false>*)&JAGEXKEYCODE_FROM_KEYCODE,
                                               &input::KEY_T);
        *puVar1 = 36;
        puVar1 = (undefined4*)
            eastl::hash_map<int, unsigned int, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator,
                            false>::operator[]((hash_map<int, unsigned int, eastl::hash<int>, eastl::equal_to<int>,
                                                         eastl::allocator, false>*)&JAGEXKEYCODE_FROM_KEYCODE,
                                               &input::KEY_U);
        *puVar1 = 38;
        puVar1 = (undefined4*)
            eastl::hash_map<int, unsigned int, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator,
                            false>::operator[]((hash_map<int, unsigned int, eastl::hash<int>, eastl::equal_to<int>,
                                                         eastl::allocator, false>*)&JAGEXKEYCODE_FROM_KEYCODE,
                                               &input::KEY_V);
        *puVar1 = 67;
        puVar1 = (undefined4*)
            eastl::hash_map<int, unsigned int, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator,
                            false>::operator[]((hash_map<int, unsigned int, eastl::hash<int>, eastl::equal_to<int>,
                                                         eastl::allocator, false>*)&JAGEXKEYCODE_FROM_KEYCODE,
                                               &input::KEY_W);
        *puVar1 = 33;
        puVar1 = (undefined4*)
            eastl::hash_map<int, unsigned int, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator,
                            false>::operator[]((hash_map<int, unsigned int, eastl::hash<int>, eastl::equal_to<int>,
                                                         eastl::allocator, false>*)&JAGEXKEYCODE_FROM_KEYCODE,
                                               &input::KEY_X);
        *puVar1 = 65;
        puVar1 = (undefined4*)
            eastl::hash_map<int, unsigned int, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator,
                            false>::operator[]((hash_map<int, unsigned int, eastl::hash<int>, eastl::equal_to<int>,
                                                         eastl::allocator, false>*)&JAGEXKEYCODE_FROM_KEYCODE,
                                               &input::KEY_Y);
        *puVar1 = 37;
        puVar1 = (undefined4*)
            eastl::hash_map<int, unsigned int, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator,
                            false>::operator[]((hash_map<int, unsigned int, eastl::hash<int>, eastl::equal_to<int>,
                                                         eastl::allocator, false>*)&JAGEXKEYCODE_FROM_KEYCODE,
                                               &input::KEY_Z);
        *puVar1 = 64;
        puVar1 = (undefined4*)
            eastl::hash_map<int, unsigned int, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator,
                            false>::operator[]((hash_map<int, unsigned int, eastl::hash<int>, eastl::equal_to<int>,
                                                         eastl::allocator, false>*)&JAGEXKEYCODE_FROM_KEYCODE,
                                               &input::KEY_NUMPAD0);
        *puVar1 = 25;
        puVar1 = (undefined4*)
            eastl::hash_map<int, unsigned int, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator,
                            false>::operator[]((hash_map<int, unsigned int, eastl::hash<int>, eastl::equal_to<int>,
                                                         eastl::allocator, false>*)&JAGEXKEYCODE_FROM_KEYCODE,
                                               &input::KEY_NUMPAD1);
        *puVar1 = 16;
        puVar1 = (undefined4*)
            eastl::hash_map<int, unsigned int, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator,
                            false>::operator[]((hash_map<int, unsigned int, eastl::hash<int>, eastl::equal_to<int>,
                                                         eastl::allocator, false>*)&JAGEXKEYCODE_FROM_KEYCODE,
                                               &input::KEY_NUMPAD2);
        *puVar1 = 17;
        puVar1 = (undefined4*)
            eastl::hash_map<int, unsigned int, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator,
                            false>::operator[]((hash_map<int, unsigned int, eastl::hash<int>, eastl::equal_to<int>,
                                                         eastl::allocator, false>*)&JAGEXKEYCODE_FROM_KEYCODE,
                                               &input::KEY_NUMPAD3);
        *puVar1 = 18;
        puVar1 = (undefined4*)
            eastl::hash_map<int, unsigned int, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator,
                            false>::operator[]((hash_map<int, unsigned int, eastl::hash<int>, eastl::equal_to<int>,
                                                         eastl::allocator, false>*)&JAGEXKEYCODE_FROM_KEYCODE,
                                               &input::KEY_NUMPAD4);
        *puVar1 = 19;
        puVar1 = (undefined4*)
            eastl::hash_map<int, unsigned int, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator,
                            false>::operator[]((hash_map<int, unsigned int, eastl::hash<int>, eastl::equal_to<int>,
                                                         eastl::allocator, false>*)&JAGEXKEYCODE_FROM_KEYCODE,
                                               &input::KEY_NUMPAD5);
        *puVar1 = 20;
        puVar1 = (undefined4*)
            eastl::hash_map<int, unsigned int, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator,
                            false>::operator[]((hash_map<int, unsigned int, eastl::hash<int>, eastl::equal_to<int>,
                                                         eastl::allocator, false>*)&JAGEXKEYCODE_FROM_KEYCODE,
                                               &input::KEY_NUMPAD6);
        *puVar1 = 21;
        puVar1 = (undefined4*)
            eastl::hash_map<int, unsigned int, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator,
                            false>::operator[]((hash_map<int, unsigned int, eastl::hash<int>, eastl::equal_to<int>,
                                                         eastl::allocator, false>*)&JAGEXKEYCODE_FROM_KEYCODE,
                                               &input::KEY_NUMPAD7);
        *puVar1 = 22;
        puVar1 = (undefined4*)
            eastl::hash_map<int, unsigned int, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator,
                            false>::operator[]((hash_map<int, unsigned int, eastl::hash<int>, eastl::equal_to<int>,
                                                         eastl::allocator, false>*)&JAGEXKEYCODE_FROM_KEYCODE,
                                               &input::KEY_NUMPAD8);
        *puVar1 = 23;
        puVar1 = (undefined4*)
            eastl::hash_map<int, unsigned int, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator,
                            false>::operator[]((hash_map<int, unsigned int, eastl::hash<int>, eastl::equal_to<int>,
                                                         eastl::allocator, false>*)&JAGEXKEYCODE_FROM_KEYCODE,
                                               &input::KEY_NUMPAD9);
        *puVar1 = 24;
        puVar1 = (undefined4*)
            eastl::hash_map<int, unsigned int, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator,
                            false>::operator[]((hash_map<int, unsigned int, eastl::hash<int>, eastl::equal_to<int>,
                                                         eastl::allocator, false>*)&JAGEXKEYCODE_FROM_KEYCODE,
                                               &input::KEY_NUMPAD_MULTIPLY);
        *puVar1 = 89;
        puVar1 = (undefined4*)
            eastl::hash_map<int, unsigned int, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator,
                            false>::operator[]((hash_map<int, unsigned int, eastl::hash<int>, eastl::equal_to<int>,
                                                         eastl::allocator, false>*)&JAGEXKEYCODE_FROM_KEYCODE,
                                               &input::KEY_NUMPAD_ADD);
        *puVar1 = 87;
        puVar1 = (undefined4*)
            eastl::hash_map<int, unsigned int, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator,
                            false>::operator[]((hash_map<int, unsigned int, eastl::hash<int>, eastl::equal_to<int>,
                                                         eastl::allocator, false>*)&JAGEXKEYCODE_FROM_KEYCODE,
                                               &input::KEY_NUMPAD_SUBTRACT);
        *puVar1 = 88;
        puVar1 = (undefined4*)
            eastl::hash_map<int, unsigned int, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator,
                            false>::operator[]((hash_map<int, unsigned int, eastl::hash<int>, eastl::equal_to<int>,
                                                         eastl::allocator, false>*)&JAGEXKEYCODE_FROM_KEYCODE,
                                               &input::KEY_NUMPAD_DECIMAL);
        *puVar1 = 101;
        puVar1 = (undefined4*)
            eastl::hash_map<int, unsigned int, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator,
                            false>::operator[]((hash_map<int, unsigned int, eastl::hash<int>, eastl::equal_to<int>,
                                                         eastl::allocator, false>*)&JAGEXKEYCODE_FROM_KEYCODE,
                                               &input::KEY_NUMPAD_DIVIDE);
        *puVar1 = 90;
        puVar1 = (undefined4*)
            eastl::hash_map<int, unsigned int, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator,
                            false>::operator[]((hash_map<int, unsigned int, eastl::hash<int>, eastl::equal_to<int>,
                                                         eastl::allocator, false>*)&JAGEXKEYCODE_FROM_KEYCODE,
                                               &input::KEY_F1);
        *puVar1 = 1;
        puVar1 = (undefined4*)
            eastl::hash_map<int, unsigned int, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator,
                            false>::operator[]((hash_map<int, unsigned int, eastl::hash<int>, eastl::equal_to<int>,
                                                         eastl::allocator, false>*)&JAGEXKEYCODE_FROM_KEYCODE,
                                               &input::KEY_F2);
        *puVar1 = 2;
        puVar1 = (undefined4*)
            eastl::hash_map<int, unsigned int, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator,
                            false>::operator[]((hash_map<int, unsigned int, eastl::hash<int>, eastl::equal_to<int>,
                                                         eastl::allocator, false>*)&JAGEXKEYCODE_FROM_KEYCODE,
                                               &input::KEY_F3);
        *puVar1 = 3;
        puVar1 = (undefined4*)
            eastl::hash_map<int, unsigned int, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator,
                            false>::operator[]((hash_map<int, unsigned int, eastl::hash<int>, eastl::equal_to<int>,
                                                         eastl::allocator, false>*)&JAGEXKEYCODE_FROM_KEYCODE,
                                               &input::KEY_F4);
        *puVar1 = 4;
        puVar1 = (undefined4*)
            eastl::hash_map<int, unsigned int, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator,
                            false>::operator[]((hash_map<int, unsigned int, eastl::hash<int>, eastl::equal_to<int>,
                                                         eastl::allocator, false>*)&JAGEXKEYCODE_FROM_KEYCODE,
                                               &input::KEY_F5);
        *puVar1 = 5;
        puVar1 = (undefined4*)
            eastl::hash_map<int, unsigned int, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator,
                            false>::operator[]((hash_map<int, unsigned int, eastl::hash<int>, eastl::equal_to<int>,
                                                         eastl::allocator, false>*)&JAGEXKEYCODE_FROM_KEYCODE,
                                               &input::KEY_F6);
        *puVar1 = 6;
        puVar1 = (undefined4*)
            eastl::hash_map<int, unsigned int, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator,
                            false>::operator[]((hash_map<int, unsigned int, eastl::hash<int>, eastl::equal_to<int>,
                                                         eastl::allocator, false>*)&JAGEXKEYCODE_FROM_KEYCODE,
                                               &input::KEY_F7);
        *puVar1 = 7;
        puVar1 = (undefined4*)
            eastl::hash_map<int, unsigned int, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator,
                            false>::operator[]((hash_map<int, unsigned int, eastl::hash<int>, eastl::equal_to<int>,
                                                         eastl::allocator, false>*)&JAGEXKEYCODE_FROM_KEYCODE,
                                               &input::KEY_F8);
        *puVar1 = 8;
        puVar1 = (undefined4*)
            eastl::hash_map<int, unsigned int, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator,
                            false>::operator[]((hash_map<int, unsigned int, eastl::hash<int>, eastl::equal_to<int>,
                                                         eastl::allocator, false>*)&JAGEXKEYCODE_FROM_KEYCODE,
                                               &input::KEY_F9);
        *puVar1 = 9;
        puVar1 = (undefined4*)
            eastl::hash_map<int, unsigned int, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator,
                            false>::operator[]((hash_map<int, unsigned int, eastl::hash<int>, eastl::equal_to<int>,
                                                         eastl::allocator, false>*)&JAGEXKEYCODE_FROM_KEYCODE,
                                               &input::KEY_F10);
        *puVar1 = 10;
        puVar1 = (undefined4*)
            eastl::hash_map<int, unsigned int, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator,
                            false>::operator[]((hash_map<int, unsigned int, eastl::hash<int>, eastl::equal_to<int>,
                                                         eastl::allocator, false>*)&JAGEXKEYCODE_FROM_KEYCODE,
                                               &input::KEY_F11);
        *puVar1 = 11;
        puVar1 = (undefined4*)
            eastl::hash_map<int, unsigned int, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator,
                            false>::operator[]((hash_map<int, unsigned int, eastl::hash<int>, eastl::equal_to<int>,
                                                         eastl::allocator, false>*)&JAGEXKEYCODE_FROM_KEYCODE,
                                               &input::KEY_F12);
        *puVar1 = 12;
        puVar1 = (undefined4*)
            eastl::hash_map<int, unsigned int, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator,
                            false>::operator[]((hash_map<int, unsigned int, eastl::hash<int>, eastl::equal_to<int>,
                                                         eastl::allocator, false>*)&JAGEXKEYCODE_FROM_KEYCODE,
                                               &input::KEY_SEMICOLON);
        *puVar1 = 57;
        puVar1 = (undefined4*)
            eastl::hash_map<int, unsigned int, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator,
                            false>::operator[]((hash_map<int, unsigned int, eastl::hash<int>, eastl::equal_to<int>,
                                                         eastl::allocator, false>*)&JAGEXKEYCODE_FROM_KEYCODE,
                                               &input::KEY_EQUALS);
        *puVar1 = 27;
        puVar1 = (undefined4*)
            eastl::hash_map<int, unsigned int, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator,
                            false>::operator[]((hash_map<int, unsigned int, eastl::hash<int>, eastl::equal_to<int>,
                                                         eastl::allocator, false>*)&JAGEXKEYCODE_FROM_KEYCODE,
                                               &input::KEY_COMMA);
        *puVar1 = 71;
        puVar1 = (undefined4*)
            eastl::hash_map<int, unsigned int, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator,
                            false>::operator[]((hash_map<int, unsigned int, eastl::hash<int>, eastl::equal_to<int>,
                                                         eastl::allocator, false>*)&JAGEXKEYCODE_FROM_KEYCODE,
                                               &input::KEY_MINUS);
        *puVar1 = 26;
        puVar1 = (undefined4*)
            eastl::hash_map<int, unsigned int, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator,
                            false>::operator[]((hash_map<int, unsigned int, eastl::hash<int>, eastl::equal_to<int>,
                                                         eastl::allocator, false>*)&JAGEXKEYCODE_FROM_KEYCODE,
                                               &input::KEY_PERIOD);
        *puVar1 = 72;
        puVar1 = (undefined4*)
            eastl::hash_map<int, unsigned int, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator,
                            false>::operator[]((hash_map<int, unsigned int, eastl::hash<int>, eastl::equal_to<int>,
                                                         eastl::allocator, false>*)&JAGEXKEYCODE_FROM_KEYCODE,
                                               &input::KEY_SLASH);
        *puVar1 = 73;
        puVar1 = (undefined4*)
            eastl::hash_map<int, unsigned int, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator,
                            false>::operator[]((hash_map<int, unsigned int, eastl::hash<int>, eastl::equal_to<int>,
                                                         eastl::allocator, false>*)&JAGEXKEYCODE_FROM_KEYCODE,
                                               &input::KEY_LEFT_BRACKET);
        *puVar1 = 42;
        puVar1 = (undefined4*)
            eastl::hash_map<int, unsigned int, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator,
                            false>::operator[]((hash_map<int, unsigned int, eastl::hash<int>, eastl::equal_to<int>,
                                                         eastl::allocator, false>*)&JAGEXKEYCODE_FROM_KEYCODE,
                                               &input::KEY_BACKSLASH);
        *puVar1 = 74;
        puVar1 = (undefined4*)
            eastl::hash_map<int, unsigned int, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator,
                            false>::operator[]((hash_map<int, unsigned int, eastl::hash<int>, eastl::equal_to<int>,
                                                         eastl::allocator, false>*)&JAGEXKEYCODE_FROM_KEYCODE,
                                               &input::KEY_RIGHT_BRACKET);
        *puVar1 = 43;
        puVar1 = (undefined4*)
            eastl::hash_map<int, unsigned int, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator,
                            false>::operator[]((hash_map<int, unsigned int, eastl::hash<int>, eastl::equal_to<int>,
                                                         eastl::allocator, false>*)&JAGEXKEYCODE_FROM_KEYCODE,
                                               &input::KEY_APOSTROPHE);
        *puVar1 = 58;
        puVar1 = (undefined4*)
            eastl::hash_map<int, unsigned int, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator,
                            false>::operator[]((hash_map<int, unsigned int, eastl::hash<int>, eastl::equal_to<int>,
                                                         eastl::allocator, false>*)&JAGEXKEYCODE_FROM_KEYCODE,
                                               &input::KEY_HASH);
        *puVar1 = 59;
        puVar1 = (undefined4*)
            eastl::hash_map<int, unsigned int, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator,
                            false>::operator[]((hash_map<int, unsigned int, eastl::hash<int>, eastl::equal_to<int>,
                                                         eastl::allocator, false>*)&JAGEXKEYCODE_FROM_KEYCODE,
                                               (int*)&input::KEY_CONSOLE);
        *puVar1 = 28;
    }

    // 0x1006e31b0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // KeyEvent::KeyEvent(): jumps straight to the base-object constructor

    // 0x1006e32e0, 16 bytes, complete-object constructor, placed by class name
    // Keyboard::Keyboard(input::InputHandler&, bool): jumps straight to the base-object constructor

    // 0x1006e32f0, 496 bytes, placed by class name
    // Keyboard::OnKeyDown(int)
    undefined8 Keyboard::OnKeyDown(int param_1) {
        bool bVar1;
        long lVar2;
        char* pcVar3;
        char* pcVar4;
        int* piVar5;
        undefined8 uVar6;
        int iVar7;
        uint uVar8;
        hashtable_iterator_base* extraout_RDX;
        ulong uVar9;
        undefined4 in_register_00000034;
        uint uVar10;
        hashtable_iterator_base local_60[16];
        eastl local_50[16];
        undefined8 local_40;
        int local_34;

        local_40 = CONCAT44(in_register_00000034, param_1);
        uVar8 = field_1200;
        if ((param_1 & 4294967291U) == 56) {
            uVar10 = uVar8 | 1;
        } else {
            switch (param_1) {
            case 58:
            case 61:
                uVar10 = uVar8 | 2;
                break;
            case 59:
            case 62:
                uVar10 = uVar8 | 4;
                break;
            default:
                uVar10 = uVar8 | 8;
                if ((param_1 & 4294967294U) != 54) {
                    uVar10 = uVar8;
                }
            }
        }
        field_1200 = uVar10;
        field_1204 = field_1204 | uVar10;
        local_34 = param_1;
        if (field_160 != false) {
            local_34 = param_1;
            eastl::hashtable<int, eastl::pair<int const, int>, BucketAllocatorEASTL,
                             eastl::use_first<eastl::pair<int const, int>>, eastl::equal_to<int>, eastl::hash<int>,
                             eastl::mod_range_hashing, eastl::default_ranged_hash, eastl::prime_rehash_policy, false,
                             true, true>::find((int*)local_50);
            eastl::hashtable<int, eastl::pair<int const, oldscape::highlight::HighlightedGroup>, eastl::allocator,
                             eastl::use_first<eastl::pair<int const, oldscape::highlight::HighlightedGroup>>,
                             eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing,
                             eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::end();
            bVar1 = eastl::operator!=(local_50, local_60, extraout_RDX);
            iVar7 = 0;
            if (bVar1) {
                lVar2 = local_50->HeapBeginPtr();
                iVar7 = *(int*)(lVar2 + 4);
            }
            local_34 = iVar7;
        }
        iVar7 = local_34;
        uVar9 = (ulong)local_34;
        if (uVar9 != 0) {
            pcVar3 = (char*)std::array<bool, 512ul>::operator[]((array<bool, 512ul>*)&field_176, uVar9);
            if (*pcVar3 == '\0') {
                field_164 = field_164 + 1;
                bVar1 = false;
            } else {
                bVar1 = uVar8 == uVar10 && field_172 == iVar7;
            }
            pcVar4 = (char*)std::array<bool, 512ul>::operator[]((array<bool, 512ul>*)&field_688, uVar9);
            if (*pcVar4 == '\0') {
                field_168 = field_168 + 1;
                *pcVar4 = '\x01';
            }
            field_172 = iVar7;
            *pcVar3 = '\x01';
            piVar5 =
                (int*)std::array<KeyEvent, 255ul>::operator[]((array<KeyEvent, 255ul>*)&field_1208, (ulong)field_9372);
            *piVar5 = iVar7;
            piVar5[2] = (int)local_40;
            piVar5[1] = 0;
            *(bool*)(piVar5 + 3) = bVar1;
            piVar5[4] = field_1200;
            uVar6 = FrameTime::GetCurrentTimeMS();
            uVar8 = field_9372;
            lVar2 = std::array<KeyEvent, 255ul>::operator[]((array<KeyEvent, 255ul>*)&field_1208, (ulong)uVar8);
            uVar8 = uVar8 + 1;
            if (254 < uVar8) {
                uVar8 = 0;
            }
            *(undefined8*)(lVar2 + 24) = uVar6;
            field_9372 = uVar8;
            if (uVar8 == field_9368) {
                uVar8 = field_9368 + 1;
                if (254 < uVar8) {
                    uVar8 = 0;
                }
                field_9368 = uVar8;
            }
        }
        return 0;
    }

    // 0x1006e3500, 176 bytes, placed by class name
    // Keyboard::OnKeyUp(int)
    undefined8 Keyboard::OnKeyUp(int param_1) {
        char cVar1;
        uint uVar2;
        int* piVar3;
        char* pcVar4;
        int local_14;

        uVar2 = 4294967294;
        if ((param_1 & 4294967291U) != 56) {
            uVar2 = param_1 - 58;
            if ((uVar2 < 5) && ((27U >> (uVar2 & 31) & 1) != 0)) {
                uVar2 = *(uint*)(&DAT_100d43604 + (long)(int)uVar2 * 4);
            } else {
                uVar2 = 4294967287;
                if ((param_1 & 4294967294U) != 54) {
                    cVar1 = field_160;
                    goto joined_r0x0001006e359e;
                }
            }
        }
        field_1200 = field_1200 & uVar2;
        cVar1 = field_160;
    joined_r0x0001006e359e:
        local_14 = param_1;
        if (cVar1 != '\0') {
            piVar3 = (int*)
                eastl::hash_map<int, unsigned int, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator,
                                false>::operator[]((hash_map<int, unsigned int, eastl::hash<int>, eastl::equal_to<int>,
                                                             eastl::allocator, false>*)&JAGEXKEYCODE_FROM_KEYCODE,
                                                   &local_14);
            local_14 = *piVar3;
        }
        if ((long)local_14 != 0) {
            pcVar4 = (char*)std::array<bool, 512ul>::operator[]((array<bool, 512ul>*)&field_176, (long)local_14);
            if (*pcVar4 != '\0') {
                field_164 = field_164 + -1;
            }
            *pcVar4 = '\0';
        }
        return 0;
    }

    // 0x1006e35b0, 176 bytes, placed by class name
    // Keyboard::OnKeyChar(int)
    undefined8 Keyboard::OnKeyChar(int param_1) {
        undefined4* puVar1;
        undefined8 uVar2;
        long lVar3;
        uint uVar4;

        puVar1 = (undefined4*)std::array<KeyEvent, 255ul>::operator[]((array<KeyEvent, 255ul>*)&field_9376,
                                                                      (ulong)field_17540);
        *puVar1 = 4294967295;
        puVar1[2] = 4294967295;
        puVar1[1] = param_1;
        *(undefined1*)(puVar1 + 3) = 0;
        puVar1[4] = field_1200 & 7;
        uVar2 = FrameTime::GetCurrentTimeMS();
        uVar4 = field_17540;
        lVar3 = std::array<KeyEvent, 255ul>::operator[]((array<KeyEvent, 255ul>*)&field_9376, (ulong)uVar4);
        uVar4 = uVar4 + 1;
        if (254 < uVar4) {
            uVar4 = 0;
        }
        *(undefined8*)(lVar3 + 24) = uVar2;
        field_17540 = uVar4;
        if (uVar4 == field_17536) {
            uVar4 = field_17536 + 1;
            if (254 < uVar4) {
                uVar4 = 0;
            }
            field_17536 = uVar4;
        }
        return 0;
    }

    // 0x1006e3660, 48 bytes, placed by class name
    // Keyboard::GetOldestKeyDown() const
    undefined8 Keyboard::GetOldestKeyDown() {
        undefined8 uVar1;

        if (field_9368 == field_9372) {
            return 0;
        }
        uVar1 = std::array<KeyEvent, 255ul>::operator[]((array<KeyEvent, 255ul>*)&field_1208, (ulong)field_9368);
        return uVar1;
    }

    // 0x1006e36a0, 48 bytes, placed by class name
    // Keyboard::RemoveOldestKeyDown()
    void Keyboard::RemoveOldestKeyDown() {
        uint uVar1;
        uint uVar2;

        if (field_9368 != field_9372) {
            uVar1 = field_9368 + 1;
            uVar2 = 0;
            if (uVar1 < 255) {
                uVar2 = uVar1;
            }
            field_9368 = uVar2;
        }
    }

    // 0x1006e36d0, 48 bytes, placed by class name
    // Keyboard::GetOldestKeyTyped() const
    undefined8 Keyboard::GetOldestKeyTyped() {
        undefined8 uVar1;

        if (field_17536 == field_17540) {
            return 0;
        }
        uVar1 = std::array<KeyEvent, 255ul>::operator[]((array<KeyEvent, 255ul>*)&field_9376, (ulong)field_17536);
        return uVar1;
    }

    // 0x1006e3700, 48 bytes, placed by class name
    // Keyboard::RemoveOldestKeyTyped()
    void Keyboard::RemoveOldestKeyTyped() {
        uint uVar1;
        uint uVar2;

        if (field_17536 != field_17540) {
            uVar1 = field_17536 + 1;
            uVar2 = 0;
            if (uVar1 < 255) {
                uVar2 = uVar1;
            }
            field_17536 = uVar2;
        }
    }

    // 0x1006e3730, 64 bytes, placed by class name
    // Keyboard::UpdatePressedState()
    void Keyboard::UpdatePressedState() {
        _memcpy(&field_688, &field_176, 512);
        field_168 = field_164;
        field_1204 = field_1200;
    }

    // 0x1006e4640, 32 bytes, inline, placed by class name
    // Keyboard::IsKeyDown(int) const
    undefined1 Keyboard::IsKeyDown(int param_1) {
        undefined1* puVar1;

        puVar1 = (undefined1*)std::array<bool, 512ul>::operator[]((array<bool, 512ul>*)&field_176, (long)param_1);
        return *puVar1;
    }

    // 0x1006e49c0, 16 bytes, inline, placed by class name
    // Keyboard::IsMetaDown() const
    void Keyboard::IsMetaDown() {
        IsModifierDown(this, 8);
    }

    // 0x1006e99a0, 16 bytes, inline, placed by class name
    // Keyboard::IsModifierDown(input::KeyModifier) const
    bool Keyboard::IsModifierDown(uint param_2) {
        return (field_1200 & param_2) != 0;
    }

    // 0x100718e10, 16 bytes, placed by class name
    // Keyboard::Keyboard(input::InputHandler&, bool)::$_43::operator()(int) const
    /* Keyboard::Keyboard(input::InputHandler&,
   bool)::$_43::TEMPNAMEPLACEHOLDERVALUE(int) const */

    void Keyboard::Keyboard(input::InputHandler&, bool)::$_43::operator()(int param_1) {
        OnKeyDown(field_0, param_1);
    }

    // 0x1007198d0, 16 bytes, placed by class name
    // Keyboard::Keyboard(input::InputHandler&, bool)::$_44::operator()(int) const
    /* Keyboard::Keyboard(input::InputHandler&,
   bool)::$_44::TEMPNAMEPLACEHOLDERVALUE(int) const */

    void Keyboard::Keyboard(input::InputHandler&, bool)::$_44::operator()(int param_1) {
        OnKeyUp(field_0, param_1);
    }

    // 0x10071a1f0, 16 bytes, placed by class name
    // Keyboard::Keyboard(input::InputHandler&, bool)::$_45::operator()(int) const
    /* Keyboard::Keyboard(input::InputHandler&,
   bool)::$_45::TEMPNAMEPLACEHOLDERVALUE(int) const */

    void Keyboard::Keyboard(input::InputHandler&, bool)::$_45::operator()(int param_1) {
        OnKeyChar(field_0, param_1);
    }

} // namespace jag::game
