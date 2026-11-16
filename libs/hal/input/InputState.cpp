// libs/hal/input/InputState.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.hal.input

namespace jag::input {
    class Input {
    public:
        // virtual methods in vtable order
        virtual ~Input();
        virtual void OnKeyDown(int arg1);
        virtual void OnKeyUp(int arg1);
        virtual void OnKeyChar(int arg1);
        float GetMouseX() const;
        float Update(float arg1);
        bool IsOnScreenKeyboardVisible() const;
        void ShowOnScreenKeyboard(SoftKeyboardType softKeyboardType, eastl::string str, int arg3, bool arg4, bool arg5);
        void HideOnScreenKeyboard();
        void SetOnScreenKeyboardText(eastl::string str, int arg2, bool arg3);
        void SetOnScreenKeyboardSelection(int arg1, int arg2);
        void ShowEditMenu();
        void HideEditMenu();
        Input();
        void Init();
        void Shutdown();
        void SetDefaultInputHandler(InputHandler* inputHandler);
        void RegisterInputHandler(const char* str, InputHandler* inputHandler);
        void UnregisterInputHandler(const char* str);
        void SelectInputHandler(const char* str);
        void DeselectInputHandler(const char* str);
        void OnLMouseDown(float arg1, float arg2);
        void OnLMouseUp(float arg1, float arg2);
        void OnMMouseDown(float arg1, float arg2);
        void OnMMouseUp(float arg1, float arg2);
        void OnRMouseDown(float arg1, float arg2);
        void OnRMouseUp(float arg1, float arg2);
        void OnMouseMove(float arg1, float arg2);
        void OnMouseWheel(float arg1, float arg2);
        void OnLowLevelMouseDown(int arg1, int arg2, int arg3, int arg4);
        void OnLowLevelMouseMove(int arg1, int arg2, int arg3, int arg4);
        void OnFirstTouchDown(unsigned long arg1, float arg2, float arg3);
        void OnTouchDown(unsigned long arg1, float arg2, float arg3);
        void OnTouchMove(unsigned long arg1, float arg2, float arg3);
        void OnTouchUp(unsigned long arg1, float arg2, float arg3);
        void OnTouchCanceled(unsigned long arg1, float arg2, float arg3);
        void OnTextCommand(TextCommand textCommand);
        uint64_t GetNumTouches() const;
        uint32_t OnText(eastl::string str, int arg2);
        void ShowOnScreenKeyboard();
        void ShowOnScreenKeyboard(SoftKeyboardType softKeyboardType, eastl::string str, int arg3, bool arg4);
        float GetMouseY() const;

    private:
        InputHandler* field_8;
        InputHandler* field_16;
        uint8_t _unknown_24[144];
        float m_mouseX;
        float m_mouseY;
        uint8_t _unknown_176[4];
    };

    class InputState {
    public:
        void OnMouseDown(MouseButton mouseButton, float arg2, float arg3);
        void OnMouseUp(MouseButton mouseButton, float arg2, float arg3);
        void OnMouseMove(float arg1, float arg2);
        void OnKeyDown(int arg1);
        void OnKeyUp(int arg1);
        void UpdateTouch(unsigned long arg1, bool arg2, float arg3, float arg4);
        bool IsKeyDown(int arg1);
        void IsAnyKeyDown();
        bool IsMouseDown(MouseButton mouseButton);
        void GetMousePosition(float& arg1, float& arg2);
        void OnAxis(unsigned int arg1, GamepadAxis arg2, short arg3);
        void OnTrigger(unsigned int arg1, GamepadTrigger arg2, unsigned char arg3);
        void OnGamepadButton(unsigned int arg1, GamepadButton gamepadButton, bool arg3);
        void IsButtonDown(unsigned int arg1, GamepadButton gamepadButton);
        void GetAxis(unsigned int arg1, GamepadAxis arg2, short& arg3);
        void GetTrigger(unsigned int arg1, GamepadTrigger arg2, unsigned char& arg3);
        uint8_t GetGamepadConnectState(unsigned int arg1);
        void SetGamepadConnectState(unsigned int arg1, bool arg2);
        void OnKillFocus(Input* input);
        static eastl::fixed_map<int, bool, 512ul> m_keyStates; // = fixed_map<int, bool, 512ul>()
        static int32_t m_mouseStates;
        static uint8_t m_touchStates[120];
        static int32_t m_mousePositionX;
        static int32_t m_mousePositionY;

        uint8_t _unknown_0[1];
    };

    // 0x103bdd3c8, set at startup by ___cxx_global_var_init.31
    eastl::fixed_map<int, bool, 512ul> InputState::m_keyStates = fixed_map<int, bool, 512ul>();

    // 0x103be2450
    int32_t InputState::m_mouseStates;

    // 0x103be2454
    uint8_t InputState::m_touchStates[120];

    // 0x103be24cc
    int32_t InputState::m_mousePositionX;

    // 0x103be24d0
    int32_t InputState::m_mousePositionY;

    // 0x100c9e5f0
    void InputState::OnMouseDown(MouseButton mouseButton, float arg2, float arg3) {
        uint8_t* extraout_RAX;
        uint32_t in_register_00000034;

        (*((array<bool, 3ul>*)(long)(int)this))[(((uint64_t)in_register_00000034 << 32) | (uint32_t)mouseButton)];
        *extraout_RAX = 1;
        m_mousePositionX = arg2;
        m_mousePositionY = arg3;
    }

    // 0x100c9e650
    void Input::OnLMouseUp(float arg1, float arg2) {
        bool cVar1;
        long lVar3;
        MouseButton in_ESI;
        rbtree<unsigned int, eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>,
               eastl::less<unsigned int>, eastl::allocator,
               eastl::use_first<eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>>, true,
               true>
            local_40;
        scoped_lock<std::recursive_mutex> local_38;

        nullptr->OnMouseUp(in_ESI, arg1, arg2);
        new (&local_38) std::scoped_lock(field_24);
        auto local_48 = field_88.rbegin();
        local_40.end();
        do {
            cVar1 = local_48 != local_40;
            if (!cVar1) {
            LAB_100c9e6ee:
                if (field_8 != nullptr) {
                    field_8->OnLMouseUp(arg1, arg2);
                }
            LAB_100c9e706:
                return;
            }
            lVar3 = *local_48;
            if ((*(InputHandler**)(lVar3 + 32))->OnLMouseUp(arg1, arg2) != '\0') {
                if (cVar1)
                    goto LAB_100c9e706;
                goto LAB_100c9e6ee;
            }
            ++local_48;
        } while (true);
    }

    // 0x100c9e740
    void InputState::OnMouseUp(MouseButton mouseButton, float arg2, float arg3) {
        uint8_t* extraout_RAX;
        uint32_t in_register_00000034;

        (*((array<bool, 3ul>*)(long)(int)this))[(((uint64_t)in_register_00000034 << 32) | (uint32_t)mouseButton)];
        *extraout_RAX = 0;
        m_mousePositionX = arg2;
        m_mousePositionY = arg3;
    }

    // 0x100c9e7a0
    void Input::OnMMouseDown(float arg1, float arg2) {
        MouseButton in_ESI;

        DAT_00000001.OnMouseDown(in_ESI, arg1, arg2);
        if (field_8 != nullptr) {
            field_8->OnMMouseDown(arg1, arg2);
        }
    }

    // 0x100c9e800
    void Input::OnMMouseUp(float arg1, float arg2) {
        MouseButton in_ESI;

        DAT_00000001.OnMouseUp(in_ESI, arg1, arg2);
        if (field_8 != nullptr) {
            field_8->OnMMouseUp(arg1, arg2);
        }
    }

    // 0x100c9e860
    void Input::OnRMouseDown(float arg1, float arg2) {
        MouseButton in_ESI;

        2->OnMouseDown(in_ESI, arg1, arg2);
        if (field_8 != nullptr) {
            field_8->OnRMouseDown(arg1, arg2);
        }
    }

    // 0x100c9e8c0
    void Input::OnRMouseUp(float arg1, float arg2) {
        MouseButton in_ESI;

        2->OnMouseUp(in_ESI, arg1, arg2);
        if (field_8 != nullptr) {
            field_8->OnRMouseUp(arg1, arg2);
        }
    }

    // 0x100c9e920
    void Input::OnMouseMove(float arg1, float arg2) {
        bool cVar1;
        long lVar3;
        rbtree<unsigned int, eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>,
               eastl::less<unsigned int>, eastl::allocator,
               eastl::use_first<eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>>, true,
               true>
            local_40;
        scoped_lock<std::recursive_mutex> local_38;

        m_mouseX = arg1;
        m_mouseY = arg2;
        new (&local_38) std::scoped_lock(field_24);
        auto local_48 = field_88.rbegin();
        local_40.end();
        do {
            cVar1 = local_48 != local_40;
            if (!cVar1) {
            LAB_100c9e9be:
                if (field_8 != nullptr) {
                    field_8->OnMouseMove(arg1, arg2);
                }
                InputState::OnMouseMove(arg1, arg2);
            LAB_100c9e9ef:
                return;
            }
            lVar3 = *local_48;
            if ((*(InputHandler**)(lVar3 + 32))->OnMouseMove(arg1, arg2) != '\0') {
                if (cVar1)
                    goto LAB_100c9e9ef;
                goto LAB_100c9e9be;
            }
            ++local_48;
        } while (true);
    }

    // 0x100c9ea40
    void InputState::OnMouseMove(float arg1, float arg2) {
        m_mousePositionX = arg1;
        m_mousePositionY = arg2;
    }

    // 0x100c9ea60
    void Input::OnMouseWheel(float arg1, float arg2) {
        bool cVar1;
        long lVar3;
        rbtree<unsigned int, eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>,
               eastl::less<unsigned int>, eastl::allocator,
               eastl::use_first<eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>>, true,
               true>
            local_40;
        scoped_lock<std::recursive_mutex> local_38;

        new (&local_38) std::scoped_lock(field_24);
        auto local_48 = field_88.rbegin();
        local_40.end();
        do {
            cVar1 = local_48 != local_40;
            if (!cVar1) {
            LAB_100c9eb02:
                if (field_8 != nullptr) {
                    field_8->OnMouseWheel(m_mouseX, m_mouseY, arg1, arg2);
                }
            LAB_100c9eb2f:
                return;
            }
            lVar3 = *local_48;
            if ((*(InputHandler**)(lVar3 + 32))->OnMouseWheel(m_mouseX, m_mouseY, arg1, arg2) != '\0') {
                if (cVar1)
                    goto LAB_100c9eb2f;
                goto LAB_100c9eb02;
            }
            ++local_48;
        } while (true);
    }

    // 0x100c9eb80
    void Input::OnLowLevelMouseDown(int arg1, int arg2, int arg3, int arg4) {
        bool cVar1;
        long lVar3;
        rbtree<unsigned int, eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>,
               eastl::less<unsigned int>, eastl::allocator,
               eastl::use_first<eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>>, true,
               true>
            local_50;
        scoped_lock<std::recursive_mutex> local_40;

        new (&local_40) std::scoped_lock(field_24);
        auto local_58 = field_88.rbegin();
        local_50.end();
        do {
            cVar1 = local_58 != local_50;
            if (!cVar1) {
            LAB_100c9ec13:
                if (field_8 != nullptr) {
                    field_8->OnLowLevelMouseDown(arg1, arg2, arg3, arg4);
                }
            LAB_100c9ec31:
                return;
            }
            lVar3 = *local_58;
            if ((*(InputHandler**)(lVar3 + 32))->OnLowLevelMouseDown(arg1, arg2, arg3, arg4) != '\0') {
                if (cVar1)
                    goto LAB_100c9ec31;
                goto LAB_100c9ec13;
            }
            ++local_58;
        } while (true);
    }

    // 0x100c9eca0
    void Input::OnLowLevelMouseMove(int arg1, int arg2, int arg3, int arg4) {
        bool cVar1;
        long lVar3;
        rbtree<unsigned int, eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>,
               eastl::less<unsigned int>, eastl::allocator,
               eastl::use_first<eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>>, true,
               true>
            local_50;
        scoped_lock<std::recursive_mutex> local_40;

        new (&local_40) std::scoped_lock(field_24);
        auto local_58 = field_88.rbegin();
        local_50.end();
        do {
            cVar1 = local_58 != local_50;
            if (!cVar1) {
            LAB_100c9ed33:
                if (field_8 != nullptr) {
                    field_8->OnLowLevelMouseMove(arg1, arg2, arg3, arg4);
                }
            LAB_100c9ed51:
                return;
            }
            lVar3 = *local_58;
            if ((*(InputHandler**)(lVar3 + 32))->OnLowLevelMouseMove(arg1, arg2, arg3, arg4) != '\0') {
                if (cVar1)
                    goto LAB_100c9ed51;
                goto LAB_100c9ed33;
            }
            ++local_58;
        } while (true);
    }

    // 0x100c9edc0
    void Input::OnKeyDown(int arg1) {
        bool cVar1;
        long lVar3;
        rbtree<unsigned int, eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>,
               eastl::less<unsigned int>, eastl::allocator,
               eastl::use_first<eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>>, true,
               true>
            local_40;
        scoped_lock<std::recursive_mutex> local_38;

        new (&local_38) std::scoped_lock(field_24);
        auto local_48 = field_88.rbegin();
        local_40.end();
        do {
            cVar1 = local_48 != local_40;
            if (!cVar1) {
            LAB_100c9ee47:
                if (field_8 != nullptr) {
                    field_8->OnKeyDown(arg1);
                }
                InputState::OnKeyDown(arg1);
            LAB_100c9ee60:
                return;
            }
            lVar3 = *local_48;
            if ((*(InputHandler**)(lVar3 + 32))->OnKeyDown(arg1) != '\0') {
                if (cVar1)
                    goto LAB_100c9ee60;
                goto LAB_100c9ee47;
            }
            ++local_48;
        } while (true);
    }

    // 0x100c9eeb0
    void InputState::OnKeyDown(int arg1) {
        uint8_t* puVar1 = &m_keyStates[arg1];
        *puVar1 = 1;
    }

    // 0x100c9eee0
    void Input::OnKeyUp(int arg1) {
        bool cVar1;
        long lVar3;
        rbtree<unsigned int, eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>,
               eastl::less<unsigned int>, eastl::allocator,
               eastl::use_first<eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>>, true,
               true>
            local_40;
        scoped_lock<std::recursive_mutex> local_38;

        InputState::OnKeyUp(arg1);
        new (&local_38) std::scoped_lock(field_24);
        auto local_48 = field_88.rbegin();
        local_40.end();
        do {
            cVar1 = local_48 != local_40;
            if (!cVar1) {
            LAB_100c9ef67:
                if (field_8 != nullptr) {
                    field_8->OnKeyUp(arg1);
                }
            LAB_100c9ef78:
                return;
            }
            lVar3 = *local_48;
            if ((*(InputHandler**)(lVar3 + 32))->OnKeyUp(arg1) != '\0') {
                if (cVar1)
                    goto LAB_100c9ef78;
                goto LAB_100c9ef67;
            }
            ++local_48;
        } while (true);
    }

    // 0x100c9efb0
    void InputState::OnKeyUp(int arg1) {
        uint8_t* puVar1 = &m_keyStates[arg1];
        *puVar1 = 0;
    }

    // 0x100c9f000
    void Input::OnKeyChar(int arg1) {
        bool cVar1;
        long lVar3;
        rbtree<unsigned int, eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>,
               eastl::less<unsigned int>, eastl::allocator,
               eastl::use_first<eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>>, true,
               true>
            local_40;
        scoped_lock<std::recursive_mutex> local_38;

        new (&local_38) std::scoped_lock(field_24);
        auto local_48 = field_88.rbegin();
        local_40.end();
        do {
            cVar1 = local_48 != local_40;
            if (!cVar1) {
            LAB_100c9f087:
                if (field_8 != nullptr) {
                    field_8->OnKeyChar(arg1);
                }
            LAB_100c9f098:
                return;
            }
            lVar3 = *local_48;
            if ((*(InputHandler**)(lVar3 + 32))->OnKeyChar(arg1) != '\0') {
                if (cVar1)
                    goto LAB_100c9f098;
                goto LAB_100c9f087;
            }
            ++local_48;
        } while (true);
    }

    // 0x100c9f0f0
    void Input::OnFirstTouchDown(unsigned long arg1, float arg2, float arg3) {
        bool cVar1;
        long lVar3;
        rbtree<unsigned int, eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>,
               eastl::less<unsigned int>, eastl::allocator,
               eastl::use_first<eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>>, true,
               true>
            local_48;
        scoped_lock<std::recursive_mutex> local_40;

        new (&local_40) std::scoped_lock(field_24);
        auto local_50 = field_88.rbegin();
        local_48.end();
        do {
            cVar1 = local_50 != local_48;
            if (!cVar1) {
            LAB_100c9f181:
                if (field_8 != nullptr) {
                    field_8->OnFirstTouchDown(arg1, arg2, arg3);
                }
            LAB_100c9f19c:
                return;
            }
            lVar3 = *local_50;
            if ((*(InputHandler**)(lVar3 + 32))->OnFirstTouchDown(arg1, arg2, arg3) != '\0') {
                if (cVar1)
                    goto LAB_100c9f19c;
                goto LAB_100c9f181;
            }
            ++local_50;
        } while (true);
    }

    // 0x100c9f1f0
    void Input::OnTouchDown(unsigned long arg1, float arg2, float arg3) {
        bool cVar1;
        long lVar3;
        rbtree<unsigned int, eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>,
               eastl::less<unsigned int>, eastl::allocator,
               eastl::use_first<eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>>, true,
               true>
            local_48;
        scoped_lock<std::recursive_mutex> local_40;

        InputState::UpdateTouch(arg1, true, arg2, arg3);
        new (&local_40) std::scoped_lock(field_24);
        auto local_50 = field_88.rbegin();
        local_48.end();
        do {
            cVar1 = local_50 != local_48;
            if (!cVar1) {
            LAB_100c9f291:
                if (field_8 != nullptr) {
                    field_8->OnTouchDown(arg1, arg2, arg3);
                }
            LAB_100c9f2ac:
                return;
            }
            lVar3 = *local_50;
            if ((*(InputHandler**)(lVar3 + 32))->OnTouchDown(arg1, arg2, arg3) != '\0') {
                if (cVar1)
                    goto LAB_100c9f2ac;
                goto LAB_100c9f291;
            }
            ++local_50;
        } while (true);
    }

    // 0x100c9f2e0
    void InputState::UpdateTouch(unsigned long arg1, bool arg2, float arg3, float arg4) {
        long extraout_RAX;
        uint32_t in_register_00000031;
        uint32_t in_register_00000034;

        if (arg1 < 10) {
            (*arg1)[(((uint64_t)in_register_00000034 << 32) |
                     (uint32_t)((((uint32_t)in_register_00000031 << 8) | (uint8_t)arg2)))];
            *(bool*)extraout_RAX = arg2;
            *(float*)(extraout_RAX + 4) = arg3;
            *(float*)(extraout_RAX + 8) = arg4;
        }
    }

    // 0x100c9f370
    void Input::OnTouchMove(unsigned long arg1, float arg2, float arg3) {
        bool cVar1;
        long lVar3;
        rbtree<unsigned int, eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>,
               eastl::less<unsigned int>, eastl::allocator,
               eastl::use_first<eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>>, true,
               true>
            local_48;
        scoped_lock<std::recursive_mutex> local_40;

        InputState::UpdateTouch(arg1, true, arg2, arg3);
        new (&local_40) std::scoped_lock(field_24);
        auto local_50 = field_88.rbegin();
        local_48.end();
        do {
            cVar1 = local_50 != local_48;
            if (!cVar1) {
            LAB_100c9f411:
                if (field_8 != nullptr) {
                    field_8->OnTouchMove(arg1, arg2, arg3);
                }
            LAB_100c9f42c:
                return;
            }
            lVar3 = *local_50;
            if ((*(InputHandler**)(lVar3 + 32))->OnTouchMove(arg1, arg2, arg3) != '\0') {
                if (cVar1)
                    goto LAB_100c9f42c;
                goto LAB_100c9f411;
            }
            ++local_50;
        } while (true);
    }

    // 0x100c9f4b0
    void Input::OnTouchUp(unsigned long arg1, float arg2, float arg3) {
        bool cVar1;
        long lVar3;
        rbtree<unsigned int, eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>,
               eastl::less<unsigned int>, eastl::allocator,
               eastl::use_first<eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>>, true,
               true>
            local_48;
        scoped_lock<std::recursive_mutex> local_40;

        InputState::UpdateTouch(arg1, false, arg2, arg3);
        new (&local_40) std::scoped_lock(field_24);
        auto local_50 = field_88.rbegin();
        local_48.end();
        do {
            cVar1 = local_50 != local_48;
            if (!cVar1) {
            LAB_100c9f551:
                if (field_8 != nullptr) {
                    field_8->OnTouchUp(arg1, arg2, arg3);
                }
            LAB_100c9f56c:
                return;
            }
            lVar3 = *local_50;
            if ((*(InputHandler**)(lVar3 + 32))->OnTouchUp(arg1, arg2, arg3) != '\0') {
                if (cVar1)
                    goto LAB_100c9f56c;
                goto LAB_100c9f551;
            }
            ++local_50;
        } while (true);
    }

    // 0x100c9f5f0
    void Input::OnTouchCanceled(unsigned long arg1, float arg2, float arg3) {
        bool cVar1;
        long lVar3;
        rbtree<unsigned int, eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>,
               eastl::less<unsigned int>, eastl::allocator,
               eastl::use_first<eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>>, true,
               true>
            local_48;
        scoped_lock<std::recursive_mutex> local_40;

        new (&local_40) std::scoped_lock(field_24);
        auto local_50 = field_88.rbegin();
        local_48.end();
        do {
            cVar1 = local_50 != local_48;
            if (!cVar1) {
            LAB_100c9f681:
                if (field_8 != nullptr) {
                    field_8->OnTouchCanceled(arg1, arg2, arg3);
                }
            LAB_100c9f69c:
                return;
            }
            lVar3 = *local_50;
            if ((*(InputHandler**)(lVar3 + 32))->OnTouchCanceled(arg1, arg2, arg3) != '\0') {
                if (cVar1)
                    goto LAB_100c9f69c;
                goto LAB_100c9f681;
            }
            ++local_50;
        } while (true);
    }

    // 0x100c9f720
    void Input::OnTextCommand(TextCommand textCommand) {
        if (field_8 != nullptr) {
            field_8->OnTextCommand(textCommand);
        }
    }

    // 0x100c9f760
    uint64_t Input::GetNumTouches() const {
        if (field_8 == nullptr) {
            return 0;
        }
        return field_8->field_2216.GetX();
    }

    // 0x100c9f780
    uint32_t Input::OnText(eastl::string str, int arg2) {
        uint32_t uVar1;
        eastl::string local_40;

        InputHandler* this_00 = field_8;
        if (this_00 == nullptr) {
            uVar1 = 0;
        } else {
            local_40 = eastl::string(*str);
            uVar1 = this_00->OnText(&local_40, arg2);
        }
        return uVar1;
    }

    // 0x100c9f8a0
    void Input::ShowOnScreenKeyboard() {
        int in_ECX;
        eastl local_20;

        eastl::destruct<oldscape::highlight::NpcUID*>(&local_20);
        basic_string<char, BucketAllocatorEASTL> local_38("", &local_20);
        ShowOnScreenKeyboard(&local_38, 0, &local_38, in_ECX, false);
    }

    // 0x100c9f910
    void Input::ShowOnScreenKeyboard(SoftKeyboardType softKeyboardType,
                                     eastl::basic_string<char, BucketAllocatorEASTL> str, int arg3, bool arg4) {

        basic_string<char, BucketAllocatorEASTL> local_28(*str);
    }

    // 0x100ca15a0
    bool InputState::IsKeyDown(int arg1) {
        long lVar2;
        bool bVar3;
        rbtree<unsigned int, eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>,
               eastl::less<unsigned int>, eastl::allocator,
               eastl::use_first<eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>>, true,
               true>
            local_38;

        auto local_30 = m_keyStates.find(arg1);
        local_38.end();
        if (local_30 == local_38 == '\0') {
            lVar2 = *local_30;
            bVar3 = *(char*)(lVar2 + 4) != '\0';
        } else {
            bVar3 = false;
        }
        return bVar3;
    }

    // 0x100ca16f0
    void InputState::IsAnyKeyDown() {
        long lVar2;
        rbtree<unsigned int, eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>,
               eastl::less<unsigned int>, eastl::allocator,
               eastl::use_first<eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>>, true,
               true>
            local_30;

        auto local_28 = m_keyStates.rbegin();
        local_30.end();
        uint32_t uVar1 = local_28 != local_30;
        if (((char)uVar1 != '\0') && (lVar2 = *local_28, *(char*)(lVar2 + 4) == '\0')) {
            do {
                ++local_28;
                uVar1 = local_28 != local_30;
                if ((char)uVar1 == '\0') {
                    return uVar1;
                }
                lVar2 = *local_28;
            } while (*(char*)(lVar2 + 4) == '\0');
        }
        return uVar1;
    }

    // 0x100ca1840
    bool InputState::IsMouseDown(MouseButton mouseButton) {
        uint8_t extraout_AL;
        uint64_t extraout_var;
        uint32_t in_register_00000034;

        (*((array<bool, 3ul>*)(long)(int)this))[(((uint64_t)in_register_00000034 << 32) | (uint32_t)mouseButton)];
        return *(uint8_t*)(((uint64_t)extraout_var << 8) | (uint8_t)extraout_AL);
    }

    // 0x100ca1860
    void InputState::GetMousePosition(float& arg1, float& arg2) {
        arg1 = m_mousePositionX;
        arg2 = m_mousePositionY;
    }

    // 0x100ca1880
    void InputState::OnAxis(unsigned int arg1, GamepadAxis arg2, short arg3) {
        array<short, 4ul>* array;

        array = (array<short, 4ul>*)(*((array<std::array<short, 4ul>, 4ul>*)(unsigned long)arg1))[param_2];
        uint16_t* puVar1 = (uint16_t*)(*array)[(long)(int)param_2];
        *puVar1 = param_3;
    }

    // 0x100ca18e0
    void InputState::OnTrigger(unsigned int arg1, GamepadTrigger arg2, unsigned char arg3) {
        array<unsigned char, 2ul>* array;

        array =
            (array<unsigned char, 2ul>*)(*((array<std::array<unsigned char, 2ul>, 4ul>*)(unsigned long)arg1))[param_2];
        uint8_t* puVar1 = (uint8_t*)(*array)[(long)(int)param_2];
        *puVar1 = param_3;
    }

    // 0x100ca1960
    void InputState::OnGamepadButton(unsigned int arg1, GamepadButton gamepadButton, bool arg3) {
        array<bool, 16ul>* array;
        uint32_t in_register_00000034;

        array = (array<bool, 16ul>*)(*((array<std::array<bool, 16ul>, 4ul>*)(unsigned long)
                                           arg1))[(((uint64_t)in_register_00000034 << 32) | (uint32_t)gamepadButton)];
        uint64_t uVar1 = (*array)[(long)(int)gamepadButton];
        *(bool*)uVar1 = arg3;
    }

    // 0x100ca19c0
    void InputState::IsButtonDown(unsigned int arg1, GamepadButton gamepadButton) {
        array<bool, 16ul>* array;
        uint32_t in_register_00000034;

        array = (array<bool, 16ul>*)(*((array<std::array<bool, 16ul>, 4ul>*)(unsigned long)
                                           arg1))[(((uint64_t)in_register_00000034 << 32) | (uint32_t)gamepadButton)];
        uint8_t* puVar1 = (uint8_t*)(*array)[(long)(int)gamepadButton];
        return *puVar1;
    }

    // 0x100ca19f0
    void InputState::GetAxis(unsigned int arg1, GamepadAxis arg2, short& arg3) {
        array<short, 4ul>* array;

        array = (array<short, 4ul>*)(*((array<std::array<short, 4ul>, 4ul>*)(unsigned long)arg1))[param_2];
        uint16_t* puVar1 = (uint16_t*)(*array)[(long)(int)param_2];
        *param_3 = *puVar1;
    }

    // 0x100ca1a20
    void InputState::GetTrigger(unsigned int arg1, GamepadTrigger arg2, unsigned char& arg3) {
        array<unsigned char, 2ul>* array;

        array =
            (array<unsigned char, 2ul>*)(*((array<std::array<unsigned char, 2ul>, 4ul>*)(unsigned long)arg1))[param_2];
        uint8_t* puVar1 = (uint8_t*)(*array)[(long)(int)param_2];
        *param_3 = *puVar1;
    }

    // 0x100ca1a50
    uint8_t InputState::GetGamepadConnectState(unsigned int arg1) {
        uint8_t extraout_AL;
        uint64_t extraout_var;
        uint32_t in_register_00000034;

        (*((array<bool, 4ul>*)((unsigned long)this &
                               4294967295)))[(((uint64_t)in_register_00000034 << 32) | (uint32_t)arg1)];
        return *(uint8_t*)(((uint64_t)extraout_var << 8) | (uint8_t)extraout_AL);
    }

    // 0x100ca1a70
    void InputState::SetGamepadConnectState(unsigned int arg1, bool arg2) {
        uint64_t extraout_RAX;
        uint32_t in_register_00000031;
        uint32_t in_register_00000034;

        (*((array<bool, 4ul>*)(unsigned long)
               arg1))[(((uint64_t)in_register_00000034 << 32) |
                       (uint32_t)((((uint32_t)in_register_00000031 << 8) | (uint8_t)arg2)))];
        *(bool*)extraout_RAX = arg2;
    }

    // 0x100ca1a90
    void InputState::OnKillFocus(Input* input) {
        bool cVar1;
        long lVar2;
        char* pcVar3;
        array<InputState::TouchState, 10ul>* array;
        rbtree<unsigned int, eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>,
               eastl::less<unsigned int>, eastl::allocator,
               eastl::use_first<eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>>, true,
               true>* this_00;
        float fVar4;
        rbtree<unsigned int, eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>,
               eastl::less<unsigned int>, eastl::allocator,
               eastl::use_first<eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>>, true,
               true>
            local_40;
        ReturnValue local_38;
        float local_2c;

        if (input != nullptr) {
            local_38 = m_keyStates.rbegin();
            this_00 = &local_40;
            this_00->end();
            cVar1 = local_38 != *this_00;
            if (cVar1) {
                do {
                    lVar2 = *local_38;
                    if (*(char*)(lVar2 + 4) != '\0') {
                        input->OnKeyUp((int)input);
                    }
                    ++local_38;
                    this_00 = &local_40;
                    cVar1 = local_38 != local_40;
                } while (cVar1);
            }
            m_keyStates.clear();
            pcVar3 = &nullptr[(unsigned long)this_00];
            if (*pcVar3 != '\0') {
                local_2c = (float)input->GetMouseX();
                fVar4 = (float)input->GetMouseY();
                input->OnLMouseUp(local_2c, fVar4);
            }
            pcVar3 = &DAT_00000001[(unsigned long)this_00];
            if (*pcVar3 != '\0') {
                local_2c = (float)input->GetMouseX();
                fVar4 = (float)input->GetMouseY();
                input->OnMMouseUp(local_2c, fVar4);
            }
            pcVar3 = (char*)(*2)[(unsigned long)this_00];
            if (*pcVar3 != '\0') {
                local_2c = (float)input->GetMouseX();
                fVar4 = (float)input->GetMouseY();
                input->OnRMouseUp(local_2c, fVar4);
            }
            local_38._0_1_ = 0;
            local_38.fill(*this_00);
            array = nullptr;
            do {
                pcVar3 = (char*)(*array)[(unsigned long)this_00];
                if (*pcVar3 != '\0') {
                    *pcVar3 = '\0';
                    this_00 =
                        (rbtree<unsigned int,
                                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>,
                                eastl::less<unsigned int>, eastl::allocator,
                                eastl::use_first<
                                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>>,
                                true, true>*)array;
                    input->OnTouchUp((unsigned long)array, *(float*)(pcVar3 + 4), *(float*)(pcVar3 + 8));
                }
                array = array + 1;
            } while (array != (array<InputState::TouchState, 10ul>*)10);
        }
        m_keyStates.clear();
    }

    // 0x100ca1c30
    float Input::GetMouseY() const {
        return m_mouseY;
    }

} // namespace jag::input

namespace jag::input::gesture {
    class GestureManager {
    public:
        int GetNumTouches() const;
        GestureManager();
        ~GestureManager();
        void AddGesture(GestureBase* gestureBase);
        void Update();
        void Reset();
        uint64_t OnTouchDown(unsigned long arg1, float arg2, float arg3);
        uint64_t OnTouchMove(unsigned long arg1, float arg2, float arg3);
        uint64_t OnTouchUp(unsigned long arg1, float arg2, float arg3);
        void ResetTouches();
        void ResetGestures();
        void GetLastTouch(unsigned long arg1) const;

    private:
        int m_numTouches;
        uint8_t _unknown_4[44];
    };

    class TouchPoint {
    public:
        TouchPoint();
        void Reset();
        TouchPoint(unsigned long arg1, float arg2, float arg3);
        TouchPoint* operator+=(const TouchPoint& touchPoint);
        TouchPoint* operator/=(int arg1);

    private:
        unsigned long field_0;
        float field_8;
        float field_12;
        unsigned long long field_16;
    };

    // 0x100c9f940
    TouchPoint::TouchPoint(unsigned long arg1, float arg2, float arg3) : field_0(arg1), field_8(arg2), field_12(arg3) {
        field_16 = SystemTimer::GetTimeMS<std::chrono::steady_clock>();
    }

    // 0x100c9f980
    uint64_t GestureManager::OnTouchDown(unsigned long arg1, float arg2, float arg3) {
        uint64_t* puVar3;

        m_numTouches = m_numTouches + 1;
        TouchPoint local_50(arg1, arg2, arg3);
        unsigned long* puVar2 = &field_8[arg1];
        *puVar2 = local_50.field_0;
        puVar2[1] = local_50._8_8_;
        puVar2[2] = local_50.field_16;
        local_50.field_0 = field_40.end();
        uint64_t local_38 = field_40.begin();
        bool cVar1 = local_38 != local_50;
        if (cVar1) {
            do {
                puVar3 = (uint64_t*)*local_38;
                (**(void (**)(...))(*(long*)*puVar3 + 16))(arg2, arg3, (long*)*puVar3, this, arg1);
                ++local_38;
                cVar1 = local_38 != local_50;
            } while (cVar1);
        }
        return 0;
    }

    // 0x100c9faa0
    uint64_t GestureManager::OnTouchMove(unsigned long arg1, float arg2, float arg3) {
        bool cVar1;
        uint64_t* puVar3;
        uint64_t local_40;
        uint64_t local_38;

        long* plVar2 = &field_8[arg1];
        if (*plVar2 != 4294967295) {
            local_40 = field_40.end();
            local_38 = field_40.begin();
            cVar1 = local_38 != local_40;
            if (cVar1) {
                do {
                    puVar3 = (uint64_t*)*local_38;
                    (**(void (**)(...))(*(long*)*puVar3 + 32))(arg2, arg3, (long*)*puVar3, this, arg1);
                    ++local_38;
                    cVar1 = local_38 != local_40;
                } while (cVar1);
            }
        }
        return 0;
    }

    // 0x100c9fb60
    uint64_t GestureManager::OnTouchUp(unsigned long arg1, float arg2, float arg3) {
        uint64_t* puVar3;
        unsigned long local_30;

        local_50.field_0 = (((uint64_t)local_50.field_0._4_4_ << 32) | (uint32_t)(m_numTouches - 1));
        local_30 = local_30 & 18446744069414584320;
        auto piVar2 = std::max<int>(local_50, local_30);
        m_numTouches = *piVar2;
        local_30 = field_40.end();
        local_50.field_0 = field_40.begin();
        bool cVar1 = local_50 != local_30;
        if (cVar1) {
            do {
                puVar3 = (uint64_t*)*local_50;
                (**(void (**)(...))(*(long*)*puVar3 + 24))(arg2, arg3, (long*)*puVar3, this, arg1);
                ++local_50;
                cVar1 = local_50 != local_30;
            } while (cVar1);
        }
        TouchPoint local_50;
        unsigned long* puVar4 = &field_8[arg1];
        *puVar4 = local_50.field_0;
        puVar4[1] = local_50._8_8_;
        puVar4[2] = local_50.field_16;
        return 0;
    }

    // 0x100c9fc60
    void GestureManager::ResetTouches() {
        m_numTouches = 0;
        auto this_00 = field_8.HeapBeginPtr();
        auto pTVar1 = field_8.end();
        for (; this_00 != pTVar1; this_00 = this_00 + 1) {
            this_00->Reset();
        }
    }

    // 0x100c9fcb0
    void GestureManager::ResetGestures() {
        field_40.clear();
    }

    // 0x100c9fd70
    void GestureManager::GetLastTouch(unsigned long arg1) const {
        field_8[arg1];
    }

    // 0x100ca1220
    TouchPoint* TouchPoint::operator+=(const TouchPoint& touchPoint) {
        field_8 = field_8 + touchPoint.field_8;
        field_12 = field_12 + touchPoint.field_12;
        field_16 = field_16 + touchPoint.field_16;
        return this;
    }

    // 0x100ca12c0
    TouchPoint* TouchPoint::operator/=(int arg1) {
        field_8 = field_8 * (1.0 / (float)arg1);
        field_12 = (1.0 / (float)arg1) * field_12;
        field_16 = field_16 / (unsigned long)(long)arg1;
        return this;
    }

} // namespace jag::input::gesture
