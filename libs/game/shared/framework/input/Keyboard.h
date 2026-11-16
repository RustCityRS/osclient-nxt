// libs/game/shared/framework/input/Keyboard.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.game.shared

namespace jag::game {
    class KeyEvent {
    public:
        KeyEvent();

    private:
        uint64_t field_0;
        uint8_t _unknown_8[8];
        uint32_t field_16;
        uint8_t _unknown_20[4];
        uint64_t field_24;
    };

    class Keyboard {
    public:
        Keyboard(input::InputHandler& inputHandler, bool arg2);
        void InitJagexKeycodes();
        uint64_t OnKeyDown(int arg1);
        uint64_t OnKeyUp(int arg1);
        uint64_t OnKeyChar(int arg1);
        uint64_t GetOldestKeyDown() const;
        void RemoveOldestKeyDown();
        uint64_t GetOldestKeyTyped() const;
        void RemoveOldestKeyTyped();
        void UpdatePressedState();
        bool IsKeyDown(int arg1) const;
        void IsMetaDown() const;
        bool IsModifierDown(input::KeyModifier keyModifier) const;
        static eastl::hash_map<int, unsigned int> JAGEXKEYCODE_FROM_KEYCODE;

    private:
        InputHandler* field_0;
        uint8_t _unknown_8[152];
        bool field_160;
        uint8_t _unknown_161[3];
        int field_164;
        int field_168;
        int field_172;
        uint8_t field_176;
        uint8_t _unknown_177[511];
        uint8_t field_688;
        uint8_t _unknown_689[511];
        unsigned int field_1200;
        unsigned int field_1204;
        uint8_t _unknown_1208[8160];
        unsigned int field_9368;
        unsigned int field_9372;
        uint8_t _unknown_9376[8160];
        unsigned int field_17536;
        unsigned int field_17540;
        uint8_t _unknown_17544[4];
    };

    // 0x1039bd090
    eastl::hash_map<int, unsigned int> Keyboard::JAGEXKEYCODE_FROM_KEYCODE;

    // 0x1006e2760
    Keyboard::Keyboard(input::InputHandler& inputHandler, bool arg2) : field_0(inputHandler) {
        uint8_t* this_00 = &field_16;
        new (this_00) std::function<bool(int)>();
        uint8_t* this_01 = &field_64;
        new (this_01) std::function<bool(int)>();
        uint8_t* this_02 = &field_112;
        new (this_02) std::function<bool(int)>();
        field_160 = arg2;
        field_164 = 0;
        field_168 = 0;
        field_1200 = 0;
        field_1204 = 0;
        new (&field_1208) std::array<KeyEvent, 255ul>();
        field_9368 = 0;
        field_9372 = 0;
        new (&field_9376) std::array<KeyEvent, 255ul>();
        field_17536 = 0;
        field_17540 = 0;
        if (JAGEXKEYCODE_FROM_KEYCODE.empty() != '\0') {
            InitJagexKeycodes();
        }
        bool* arg1 = (bool*)std::array<bool, 512ul>::begin();
        bool* arg2_00 = (bool*)std::array<bool, 512ul>::end();
        local_58.field_0 = (Keyboard*)((unsigned long)local_58.field_0 & 18446744073709551360);
        std::fill<bool*, bool>(arg1, arg2_00, local_58);
        KeyEvent* pKVar2 = std::array<KeyEvent, 255ul>::begin();
        KeyEvent* pKVar3 = std::array<KeyEvent, 255ul>::end();
        local_58.field_16 = 0;
        local_58._20_4_ = 0;
        local_58.field_24 = 0;
        local_58.field_0 = nullptr;
        local_58._8_8_ = 0;
        KeyEvent local_58;
        std::fill<KeyEvent*, KeyEvent>(pKVar2, pKVar3, local_58);
        pKVar2 = std::array<KeyEvent, 255ul>::begin();
        pKVar3 = std::array<KeyEvent, 255ul>::end();
        local_58.field_16 = 0;
        local_58._20_4_ = 0;
        local_58.field_24 = 0;
        local_58.field_0 = nullptr;
        local_58._8_8_ = 0;
        local_58 = KeyEvent();
        std::fill<KeyEvent*, KeyEvent>(pKVar2, pKVar3, local_58);
        local_58.field_0 = this;
        ((function<bool(int)>*)this_00)->operator=(&local_58);
        field_0->RegisterKeyDown(this_00);
        local_58.field_0 = this;
        ((function<bool(int)>*)this_01)->operator=(&local_58);
        field_0->RegisterKeyUp(this_01);
        local_58.field_0 = this;
        ((function<bool(int)>*)this_02)->operator=(&local_58);
        field_0->RegisterKeyChar(this_02);
    }

    // 0x1006e2960
    void Keyboard::InitJagexKeycodes() {
        uint32_t* puVar1 = &JAGEXKEYCODE_FROM_KEYCODE[*(&input::KEY_BACKSPACE)];
        *puVar1 = 85;
        puVar1 = &JAGEXKEYCODE_FROM_KEYCODE[*(&input::KEY_TAB)];
        *puVar1 = 80;
        puVar1 = &JAGEXKEYCODE_FROM_KEYCODE[*(&input::KEY_CLEAR)];
        *puVar1 = 91;
        puVar1 = &JAGEXKEYCODE_FROM_KEYCODE[*(&input::KEY_RETURN)];
        *puVar1 = 84;
        puVar1 = &JAGEXKEYCODE_FROM_KEYCODE[*(&input::KEY_NUMPAD_ENTER)];
        *puVar1 = 84;
        puVar1 = &JAGEXKEYCODE_FROM_KEYCODE[*(&input::KEY_SHIFT_LEFT)];
        *puVar1 = 81;
        puVar1 = &JAGEXKEYCODE_FROM_KEYCODE[*(&input::KEY_CONTROL_LEFT)];
        *puVar1 = 82;
        puVar1 = &JAGEXKEYCODE_FROM_KEYCODE[*(&input::KEY_ALT_LEFT)];
        *puVar1 = 86;
        puVar1 = &JAGEXKEYCODE_FROM_KEYCODE[*(&input::KEY_ESCAPE)];
        *puVar1 = 13;
        puVar1 = &JAGEXKEYCODE_FROM_KEYCODE[*(&input::KEY_SPACE)];
        *puVar1 = 83;
        puVar1 = &JAGEXKEYCODE_FROM_KEYCODE[*(&input::KEY_PAGE_UP)];
        *puVar1 = 104;
        puVar1 = &JAGEXKEYCODE_FROM_KEYCODE[*(&input::KEY_PAGE_DOWN)];
        *puVar1 = 105;
        puVar1 = &JAGEXKEYCODE_FROM_KEYCODE[*(&input::KEY_END)];
        *puVar1 = 103;
        puVar1 = &JAGEXKEYCODE_FROM_KEYCODE[*(&input::KEY_HOME)];
        *puVar1 = 102;
        puVar1 = &JAGEXKEYCODE_FROM_KEYCODE[*(&input::KEY_LEFT)];
        *puVar1 = 96;
        puVar1 = &JAGEXKEYCODE_FROM_KEYCODE[*(&input::KEY_UP)];
        *puVar1 = 98;
        puVar1 = &JAGEXKEYCODE_FROM_KEYCODE[*(&input::KEY_RIGHT)];
        *puVar1 = 97;
        puVar1 = &JAGEXKEYCODE_FROM_KEYCODE[*(&input::KEY_DOWN)];
        *puVar1 = 99;
        puVar1 = &JAGEXKEYCODE_FROM_KEYCODE[*(&input::KEY_INSERT)];
        *puVar1 = 100;
        puVar1 = &JAGEXKEYCODE_FROM_KEYCODE[*(&input::KEY_DEL)];
        *puVar1 = 101;
        puVar1 = &JAGEXKEYCODE_FROM_KEYCODE[*(&input::KEY_0)];
        *puVar1 = 25;
        puVar1 = &JAGEXKEYCODE_FROM_KEYCODE[*(&input::KEY_1)];
        *puVar1 = 16;
        puVar1 = &JAGEXKEYCODE_FROM_KEYCODE[*(&input::KEY_2)];
        *puVar1 = 17;
        puVar1 = &JAGEXKEYCODE_FROM_KEYCODE[*(&input::KEY_3)];
        *puVar1 = 18;
        puVar1 = &JAGEXKEYCODE_FROM_KEYCODE[*(&input::KEY_4)];
        *puVar1 = 19;
        puVar1 = &JAGEXKEYCODE_FROM_KEYCODE[*(&input::KEY_5)];
        *puVar1 = 20;
        puVar1 = &JAGEXKEYCODE_FROM_KEYCODE[*(&input::KEY_6)];
        *puVar1 = 21;
        puVar1 = &JAGEXKEYCODE_FROM_KEYCODE[*(&input::KEY_7)];
        *puVar1 = 22;
        puVar1 = &JAGEXKEYCODE_FROM_KEYCODE[*(&input::KEY_8)];
        *puVar1 = 23;
        puVar1 = &JAGEXKEYCODE_FROM_KEYCODE[*(&input::KEY_9)];
        *puVar1 = 24;
        puVar1 = &JAGEXKEYCODE_FROM_KEYCODE[*(&input::KEY_A)];
        *puVar1 = 48;
        puVar1 = &JAGEXKEYCODE_FROM_KEYCODE[*(&input::KEY_B)];
        *puVar1 = 68;
        puVar1 = &JAGEXKEYCODE_FROM_KEYCODE[*(&input::KEY_C)];
        *puVar1 = 66;
        puVar1 = &JAGEXKEYCODE_FROM_KEYCODE[*(&input::KEY_D)];
        *puVar1 = 50;
        puVar1 = &JAGEXKEYCODE_FROM_KEYCODE[*(&input::KEY_E)];
        *puVar1 = 34;
        puVar1 = &JAGEXKEYCODE_FROM_KEYCODE[*(&input::KEY_F)];
        *puVar1 = 51;
        puVar1 = &JAGEXKEYCODE_FROM_KEYCODE[*(&input::KEY_G)];
        *puVar1 = 52;
        puVar1 = &JAGEXKEYCODE_FROM_KEYCODE[*(&input::KEY_H)];
        *puVar1 = 53;
        puVar1 = &JAGEXKEYCODE_FROM_KEYCODE[*(&input::KEY_I)];
        *puVar1 = 39;
        puVar1 = &JAGEXKEYCODE_FROM_KEYCODE[*(&input::KEY_J)];
        *puVar1 = 54;
        puVar1 = &JAGEXKEYCODE_FROM_KEYCODE[*(&input::KEY_K)];
        *puVar1 = 55;
        puVar1 = &JAGEXKEYCODE_FROM_KEYCODE[*(&input::KEY_L)];
        *puVar1 = 56;
        puVar1 = &JAGEXKEYCODE_FROM_KEYCODE[*(&input::KEY_M)];
        *puVar1 = 70;
        puVar1 = &JAGEXKEYCODE_FROM_KEYCODE[*(&input::KEY_N)];
        *puVar1 = 69;
        puVar1 = &JAGEXKEYCODE_FROM_KEYCODE[*(&input::KEY_O)];
        *puVar1 = 40;
        puVar1 = &JAGEXKEYCODE_FROM_KEYCODE[*(&input::KEY_P)];
        *puVar1 = 41;
        puVar1 = &JAGEXKEYCODE_FROM_KEYCODE[*(&input::KEY_Q)];
        *puVar1 = 32;
        puVar1 = &JAGEXKEYCODE_FROM_KEYCODE[*(&input::KEY_R)];
        *puVar1 = 35;
        puVar1 = &JAGEXKEYCODE_FROM_KEYCODE[*(&input::KEY_S)];
        *puVar1 = 49;
        puVar1 = &JAGEXKEYCODE_FROM_KEYCODE[*(&input::KEY_T)];
        *puVar1 = 36;
        puVar1 = &JAGEXKEYCODE_FROM_KEYCODE[*(&input::KEY_U)];
        *puVar1 = 38;
        puVar1 = &JAGEXKEYCODE_FROM_KEYCODE[*(&input::KEY_V)];
        *puVar1 = 67;
        puVar1 = &JAGEXKEYCODE_FROM_KEYCODE[*(&input::KEY_W)];
        *puVar1 = 33;
        puVar1 = &JAGEXKEYCODE_FROM_KEYCODE[*(&input::KEY_X)];
        *puVar1 = 65;
        puVar1 = &JAGEXKEYCODE_FROM_KEYCODE[*(&input::KEY_Y)];
        *puVar1 = 37;
        puVar1 = &JAGEXKEYCODE_FROM_KEYCODE[*(&input::KEY_Z)];
        *puVar1 = 64;
        puVar1 = &JAGEXKEYCODE_FROM_KEYCODE[*(&input::KEY_NUMPAD0)];
        *puVar1 = 25;
        puVar1 = &JAGEXKEYCODE_FROM_KEYCODE[*(&input::KEY_NUMPAD1)];
        *puVar1 = 16;
        puVar1 = &JAGEXKEYCODE_FROM_KEYCODE[*(&input::KEY_NUMPAD2)];
        *puVar1 = 17;
        puVar1 = &JAGEXKEYCODE_FROM_KEYCODE[*(&input::KEY_NUMPAD3)];
        *puVar1 = 18;
        puVar1 = &JAGEXKEYCODE_FROM_KEYCODE[*(&input::KEY_NUMPAD4)];
        *puVar1 = 19;
        puVar1 = &JAGEXKEYCODE_FROM_KEYCODE[*(&input::KEY_NUMPAD5)];
        *puVar1 = 20;
        puVar1 = &JAGEXKEYCODE_FROM_KEYCODE[*(&input::KEY_NUMPAD6)];
        *puVar1 = 21;
        puVar1 = &JAGEXKEYCODE_FROM_KEYCODE[*(&input::KEY_NUMPAD7)];
        *puVar1 = 22;
        puVar1 = &JAGEXKEYCODE_FROM_KEYCODE[*(&input::KEY_NUMPAD8)];
        *puVar1 = 23;
        puVar1 = &JAGEXKEYCODE_FROM_KEYCODE[*(&input::KEY_NUMPAD9)];
        *puVar1 = 24;
        puVar1 = &JAGEXKEYCODE_FROM_KEYCODE[*(&input::KEY_NUMPAD_MULTIPLY)];
        *puVar1 = 89;
        puVar1 = &JAGEXKEYCODE_FROM_KEYCODE[*(&input::KEY_NUMPAD_ADD)];
        *puVar1 = 87;
        puVar1 = &JAGEXKEYCODE_FROM_KEYCODE[*(&input::KEY_NUMPAD_SUBTRACT)];
        *puVar1 = 88;
        puVar1 = &JAGEXKEYCODE_FROM_KEYCODE[*(&input::KEY_NUMPAD_DECIMAL)];
        *puVar1 = 101;
        puVar1 = &JAGEXKEYCODE_FROM_KEYCODE[*(&input::KEY_NUMPAD_DIVIDE)];
        *puVar1 = 90;
        puVar1 = &JAGEXKEYCODE_FROM_KEYCODE[*(&input::KEY_F1)];
        *puVar1 = 1;
        puVar1 = &JAGEXKEYCODE_FROM_KEYCODE[*(&input::KEY_F2)];
        *puVar1 = 2;
        puVar1 = &JAGEXKEYCODE_FROM_KEYCODE[*(&input::KEY_F3)];
        *puVar1 = 3;
        puVar1 = &JAGEXKEYCODE_FROM_KEYCODE[*(&input::KEY_F4)];
        *puVar1 = 4;
        puVar1 = &JAGEXKEYCODE_FROM_KEYCODE[*(&input::KEY_F5)];
        *puVar1 = 5;
        puVar1 = &JAGEXKEYCODE_FROM_KEYCODE[*(&input::KEY_F6)];
        *puVar1 = 6;
        puVar1 = &JAGEXKEYCODE_FROM_KEYCODE[*(&input::KEY_F7)];
        *puVar1 = 7;
        puVar1 = &JAGEXKEYCODE_FROM_KEYCODE[*(&input::KEY_F8)];
        *puVar1 = 8;
        puVar1 = &JAGEXKEYCODE_FROM_KEYCODE[*(&input::KEY_F9)];
        *puVar1 = 9;
        puVar1 = &JAGEXKEYCODE_FROM_KEYCODE[*(&input::KEY_F10)];
        *puVar1 = 10;
        puVar1 = &JAGEXKEYCODE_FROM_KEYCODE[*(&input::KEY_F11)];
        *puVar1 = 11;
        puVar1 = &JAGEXKEYCODE_FROM_KEYCODE[*(&input::KEY_F12)];
        *puVar1 = 12;
        puVar1 = &JAGEXKEYCODE_FROM_KEYCODE[*(&input::KEY_SEMICOLON)];
        *puVar1 = 57;
        puVar1 = &JAGEXKEYCODE_FROM_KEYCODE[*(&input::KEY_EQUALS)];
        *puVar1 = 27;
        puVar1 = &JAGEXKEYCODE_FROM_KEYCODE[*(&input::KEY_COMMA)];
        *puVar1 = 71;
        puVar1 = &JAGEXKEYCODE_FROM_KEYCODE[*(&input::KEY_MINUS)];
        *puVar1 = 26;
        puVar1 = &JAGEXKEYCODE_FROM_KEYCODE[*(&input::KEY_PERIOD)];
        *puVar1 = 72;
        puVar1 = &JAGEXKEYCODE_FROM_KEYCODE[*(&input::KEY_SLASH)];
        *puVar1 = 73;
        puVar1 = &JAGEXKEYCODE_FROM_KEYCODE[*(&input::KEY_LEFT_BRACKET)];
        *puVar1 = 42;
        puVar1 = &JAGEXKEYCODE_FROM_KEYCODE[*(&input::KEY_BACKSLASH)];
        *puVar1 = 74;
        puVar1 = &JAGEXKEYCODE_FROM_KEYCODE[*(&input::KEY_RIGHT_BRACKET)];
        *puVar1 = 43;
        puVar1 = &JAGEXKEYCODE_FROM_KEYCODE[*(&input::KEY_APOSTROPHE)];
        *puVar1 = 58;
        puVar1 = &JAGEXKEYCODE_FROM_KEYCODE[*(&input::KEY_HASH)];
        *puVar1 = 59;
        puVar1 = &JAGEXKEYCODE_FROM_KEYCODE[*((int*)&input::KEY_CONSOLE)];
        *puVar1 = 28;
    }

    // 0x1006e32f0
    uint64_t Keyboard::OnKeyDown(int arg1) {
        bool cVar1;
        long lVar2;
        char* pcVar3;
        char* pcVar4;
        int* piVar5;
        uint64_t uVar6;
        int iVar7;
        uint32_t in_register_00000034;
        unsigned int uVar9;
        bool bVar10;
        ReturnValue local_60;
        ReturnValue local_50;

        uint64_t local_40 = (((uint64_t)in_register_00000034 << 32) | (uint32_t)arg1);
        unsigned int uVar8 = field_1200;
        if ((arg1 & 4294967291U) == 56) {
            uVar9 = uVar8 | 1;
        } else {
            switch (arg1) {
            case 58:
            case 61:
                uVar9 = uVar8 | 2;
                break;
            case 59:
            case 62:
                uVar9 = uVar8 | 4;
                break;
            default:
                uVar9 = uVar8 | 8;
                if ((arg1 & 4294967294U) != 54) {
                    uVar9 = uVar8;
                }
            }
        }
        field_1200 = uVar9;
        field_1204 = field_1204 | uVar9;
        int local_34 = arg1;
        if (field_160 != false) {
            local_34 = arg1;
            local_50 = JAGEXKEYCODE_FROM_KEYCODE.find(local_34);
            local_60 = JAGEXKEYCODE_FROM_KEYCODE.end();
            cVar1 = local_50 != local_60;
            iVar7 = 0;
            if (cVar1) {
                lVar2 = local_50.HeapBeginPtr();
                iVar7 = *(int*)(lVar2 + 4);
            }
            local_34 = iVar7;
        }
        iVar7 = local_34;
        unsigned long arg1_00 = (unsigned long)local_34;
        if (arg1_00 != 0) {
            pcVar3 = &field_176[arg1_00];
            if (*pcVar3 == '\0') {
                field_164 = field_164 + 1;
                bVar10 = false;
            } else {
                bVar10 = uVar8 == uVar9 && field_172 == iVar7;
            }
            pcVar4 = &field_688[arg1_00];
            if (*pcVar4 == '\0') {
                field_168 = field_168 + 1;
                *pcVar4 = '\x01';
            }
            field_172 = iVar7;
            *pcVar3 = '\x01';
            piVar5 = &field_1208[(unsigned long)field_9372];
            *piVar5 = iVar7;
            piVar5[2] = (int)local_40;
            piVar5[1] = 0;
            *(bool*)(piVar5 + 3) = bVar10;
            piVar5[4] = field_1200;
            uVar6 = FrameTime::GetCurrentTimeMS();
            uVar8 = field_9372;
            lVar2 = field_1208[(unsigned long)uVar8];
            uVar8 = uVar8 + 1;
            if (254 < uVar8) {
                uVar8 = 0;
            }
            *(uint64_t*)(lVar2 + 24) = uVar6;
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

    // 0x1006e3500
    uint64_t Keyboard::OnKeyUp(int arg1) {
        bool cVar1;
        int* piVar3;
        char* pcVar4;

        unsigned int uVar2 = 4294967294;
        if ((arg1 & 4294967291U) != 56) {
            uVar2 = arg1 - 58;
            if ((uVar2 < 5) && ((27U >> (uVar2 & 31) & 1) != 0)) {
                uVar2 = *(unsigned int*)(&DAT_100d43604 + (long)(int)uVar2 * 4);
            } else {
                uVar2 = 4294967287;
                if ((arg1 & 4294967294U) != 54) {
                    cVar1 = field_160;
                    goto joined_r0x0001006e359e;
                }
            }
        }
        field_1200 = field_1200 & uVar2;
        cVar1 = field_160;
    joined_r0x0001006e359e:
        int local_14 = arg1;
        if (cVar1) {
            piVar3 = &JAGEXKEYCODE_FROM_KEYCODE[local_14];
            local_14 = *piVar3;
        }
        if ((long)local_14 != 0) {
            pcVar4 = &field_176[(long)local_14];
            if (*pcVar4 != '\0') {
                field_164 = field_164 - 1;
            }
            *pcVar4 = '\0';
        }
        return 0;
    }

    // 0x1006e35b0
    uint64_t Keyboard::OnKeyChar(int arg1) {
        uint32_t* puVar1 = &field_9376[(unsigned long)field_17540];
        *puVar1 = 4294967295;
        puVar1[2] = 4294967295;
        puVar1[1] = arg1;
        *(uint8_t*)(puVar1 + 3) = 0;
        puVar1[4] = field_1200 & 7;
        uint64_t uVar2 = FrameTime::GetCurrentTimeMS();
        unsigned int uVar4 = field_17540;
        long lVar3 = field_9376[(unsigned long)uVar4];
        uVar4 = uVar4 + 1;
        if (254 < uVar4) {
            uVar4 = 0;
        }
        *(uint64_t*)(lVar3 + 24) = uVar2;
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

    // 0x1006e3660
    uint64_t Keyboard::GetOldestKeyDown() const {
        if (field_9368 == field_9372) {
            return 0;
        }
        return field_1208[(unsigned long)field_9368];
    }

    // 0x1006e36a0
    void Keyboard::RemoveOldestKeyDown() {
        unsigned int uVar1;
        unsigned int uVar2;

        if (field_9368 != field_9372) {
            uVar1 = field_9368 + 1;
            uVar2 = 0;
            if (uVar1 < 255) {
                uVar2 = uVar1;
            }
            field_9368 = uVar2;
        }
    }

    // 0x1006e36d0
    uint64_t Keyboard::GetOldestKeyTyped() const {
        if (field_17536 == field_17540) {
            return 0;
        }
        return field_9376[(unsigned long)field_17536];
    }

    // 0x1006e3700
    void Keyboard::RemoveOldestKeyTyped() {
        unsigned int uVar1;
        unsigned int uVar2;

        if (field_17536 != field_17540) {
            uVar1 = field_17536 + 1;
            uVar2 = 0;
            if (uVar1 < 255) {
                uVar2 = uVar1;
            }
            field_17536 = uVar2;
        }
    }

    // 0x1006e3730
    void Keyboard::UpdatePressedState() {
        _memcpy(&field_688, &field_176, 512);
        field_168 = field_164;
        field_1204 = field_1200;
    }

    // 0x1006e4640
    bool Keyboard::IsKeyDown(int arg1) const {
        uint8_t* puVar1 = &field_176[(long)arg1];
        return *puVar1;
    }

    // 0x1006e49c0
    void Keyboard::IsMetaDown() const {
        IsModifierDown(8);
    }

    // 0x1006e99a0
    bool Keyboard::IsModifierDown(input::KeyModifier keyModifier) const {
        return (field_1200 & keyModifier) != 0;
    }

    // 0x100718e10
    void Keyboard::Keyboard(input::InputHandler&, bool)::$_43::operator()(int arg1) const {
        OnKeyDown(field_0, arg1);
    }

    // 0x1007198d0
    void Keyboard::Keyboard(input::InputHandler&, bool)::$_44::operator()(int arg1) const {
        OnKeyUp(field_0, arg1);
    }

    // 0x10071a1f0
    void Keyboard::Keyboard(input::InputHandler&, bool)::$_45::operator()(int arg1) const {
        OnKeyChar(field_0, arg1);
    }

} // namespace jag::game
