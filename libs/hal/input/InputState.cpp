// libs/hal/input/InputState.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.hal.input

namespace jag::input {
    class Input {
    public:
        // virtual methods in vtable order
        virtual ~Input();
        virtual void OnKeyDown(int);
        virtual void OnKeyUp(int);
        virtual void OnKeyChar(int);
        float GetMouseX() const;
        float Update(float);
        IsOnScreenKeyboardVisible() const;
        void ShowOnScreenKeyboard(SoftKeyboardType, eastl::basic_string<char, BucketAllocatorEASTL>, int, bool, bool);
        void HideOnScreenKeyboard();
        void SetOnScreenKeyboardText(eastl::basic_string<char, BucketAllocatorEASTL>, int, bool);
        void SetOnScreenKeyboardSelection(int, int);
        void ShowEditMenu();
        void HideEditMenu();
        Input();
        Init();
        void Shutdown();
        void SetDefaultInputHandler(InputHandler*);
        void RegisterInputHandler(char const*, InputHandler*);
        void UnregisterInputHandler(char const*);
        void SelectInputHandler(char const*);
        void DeselectInputHandler(char const*);
        void OnLMouseDown(float, float);
        void OnLMouseUp(float, float);
        void OnMMouseDown(float, float);
        void OnMMouseUp(float, float);
        void OnRMouseDown(float, float);
        void OnRMouseUp(float, float);
        void OnMouseMove(float, float);
        void OnMouseWheel(float, float);
        void OnLowLevelMouseDown(int, int, int, int);
        void OnLowLevelMouseMove(int, int, int, int);
        void OnFirstTouchDown(unsigned long, float, float);
        void OnTouchDown(unsigned long, float, float);
        void OnTouchMove(unsigned long, float, float);
        void OnTouchUp(unsigned long, float, float);
        void OnTouchCanceled(unsigned long, float, float);
        void OnTextCommand(TextCommand);
        GetNumTouches() const;
        OnText(eastl::string, int);
        void ShowOnScreenKeyboard();
        void ShowOnScreenKeyboard(SoftKeyboardType, eastl::basic_string<char, BucketAllocatorEASTL>, int, bool);
        float GetMouseY() const;

        // data members, from how the methods use this: 180 bytes
        undefined** field_0;                  // offset 0, vtable pointer
        InputHandler* field_8;                // offset 8
        InputHandler* m_pDefaultInputHandler; // offset 16
        char _unknown_24[112];
        undefined1 field_136; // offset 136
        char _unknown_137[31];
        float m_mouseX; // offset 168
        float m_mouseY; // offset 172
        char _unknown_176[4];
    };

    class InputState {
    public:
        void OnMouseDown(MouseButton, float, float);
        void OnMouseUp(MouseButton, float, float);
        void OnMouseMove(float, float);
        void OnKeyDown(int);
        void OnKeyUp(int);
        void UpdateTouch(unsigned long, bool, float, float);
        bool IsKeyDown(int);
        ulong IsAnyKeyDown();
        IsMouseDown(MouseButton);
        void GetMousePosition(float&, float&);
        void OnAxis(unsigned int, GamepadAxis, short);
        void OnTrigger(unsigned int, GamepadTrigger, unsigned char);
        void OnGamepadButton(unsigned int, GamepadButton, bool);
        IsButtonDown(unsigned int, GamepadButton);
        void GetAxis(unsigned int, GamepadAxis, short&);
        void GetTrigger(unsigned int, GamepadTrigger, unsigned char&);
        GetGamepadConnectState(unsigned int);
        void SetGamepadConnectState(unsigned int, bool);
        void OnKillFocus(Input*);
        static eastl::fixed_map<int, bool, 512ul, true, eastl::less<int>, eastl::allocator> /* 20616 bytes */
            m_keyStates; // = fixed_map<int,bool,512ul,true,eastl::less<int>,eastl::allocator>()
        static /* 4 bytes */ m_mouseStates;
        static /* 120 bytes */ m_touchStates;
        static /* 4 bytes */ m_mousePositionX;
        static /* 4 bytes */ m_mousePositionY;
    };

    // 0x103bdd3c8, 20616 bytes, __common; set at startup by ___cxx_global_var_init.31
    eastl::fixed_map<int, bool, 512ul, true, eastl::less<int>, eastl::allocator> InputState::m_keyStates =
        fixed_map<int, bool, 512ul, true, eastl::less<int>, eastl::allocator>();

    // 0x103be2450, 4 bytes, __common; zero-initialised
    InputState::m_mouseStates;

    // 0x103be2454, 120 bytes, __common; zero-initialised
    InputState::m_touchStates;

    // 0x103be24cc, 4 bytes, __common; zero-initialised
    InputState::m_mousePositionX;

    // 0x103be24d0, 4 bytes, __common; zero-initialised
    InputState::m_mousePositionY;

    // 0x100c9e5f0, 64 bytes, placed by class name and debug map
    // InputState::OnMouseDown(MouseButton, float, float)
    void InputState::OnMouseDown(undefined4 param_1, undefined4 param_2, int param_3) {
        undefined1* puVar1;

        puVar1 = (undefined1*)std::array<bool, 3ul>::operator[]((long)param_3);
        *puVar1 = 1;
        m_mousePositionX = param_1;
        m_mousePositionY = param_2;
    }

    // 0x100c9e650, 240 bytes, placed by neighbouring functions
    // Input::OnLMouseUp(float, float)
    void Input::OnLMouseUp(float param_1, float param_2) {
        long lVar1;
        bool bVar2;
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base* phVar4;
        hashtable_iterator_base* extraout_RDX_00;
        eastl local_48[8];
        hashtable_iterator_base local_40[8];
        scoped_lock<std::recursive_mutex> local_38[8];

        InputState::OnMouseUp(0);
        std::scoped_lock<std::recursive_mutex>::scoped_lock(local_38, (recursive_mutex*)&field_24);
        eastl::vector<unsigned long,
                      eastl::fixed_vector_allocator<8ul, 64ul, 8ul, 0ul, true, eastl::allocator>>::rbegin();
        eastl::rbtree<unsigned int,
                      eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                      eastl::less<unsigned int>, eastl::allocator,
                      eastl::use_first<eastl::pair<unsigned int const,
                                                   eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>>,
                      true, true>::end();
        phVar4 = extraout_RDX;
        do {
            bVar2 = eastl::operator!=(local_48, local_40, phVar4);
            if (!bVar2) {
            LAB_100c9e6ee:
                if (field_8 != (InputHandler*)0) {
                    (field_8, param_1, param_2)->OnLMouseUp();
                }
            LAB_100c9e706:
                std::scoped_lock<std::recursive_mutex>::~scoped_lock(local_38);
                return;
            }
            lVar1 = eastl::rbtree_iterator<
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
            operator*(
                (rbtree_iterator<
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>*)
                    local_48);
            if ((*(InputHandler**)(lVar1 + 32))->OnLMouseUp(param_1, param_2) != '\0') {
                if (bVar2)
                    goto LAB_100c9e706;
                goto LAB_100c9e6ee;
            }
            eastl::rbtree_iterator<
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
            operator++(
                (rbtree_iterator<
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>*)
                    local_48);
            phVar4 = extraout_RDX_00;
        } while (true);
    }

    // 0x100c9e740, 64 bytes, placed by class name and debug map
    // InputState::OnMouseUp(MouseButton, float, float)
    void InputState::OnMouseUp(undefined4 param_1, undefined4 param_2, int param_3) {
        undefined1* puVar1;

        puVar1 = (undefined1*)std::array<bool, 3ul>::operator[]((long)param_3);
        *puVar1 = 0;
        m_mousePositionX = param_1;
        m_mousePositionY = param_2;
    }

    // 0x100c9e7a0, 64 bytes, placed by neighbouring functions
    // Input::OnMMouseDown(float, float)
    void Input::OnMMouseDown(float param_1, float param_2) {
        InputState::OnMouseDown(1);
        if (field_8 != (InputHandler*)0) {
            (field_8, param_1, param_2)->OnMMouseDown();
        }
    }

    // 0x100c9e800, 64 bytes, placed by neighbouring functions
    // Input::OnMMouseUp(float, float)
    void Input::OnMMouseUp(float param_1, float param_2) {
        InputState::OnMouseUp(1);
        if (field_8 != (InputHandler*)0) {
            (field_8, param_1, param_2)->OnMMouseUp();
        }
    }

    // 0x100c9e860, 64 bytes, placed by neighbouring functions
    // Input::OnRMouseDown(float, float)
    void Input::OnRMouseDown(float param_1, float param_2) {
        InputState::OnMouseDown(2);
        if (field_8 != (InputHandler*)0) {
            (field_8, param_1, param_2)->OnRMouseDown();
        }
    }

    // 0x100c9e8c0, 64 bytes, placed by neighbouring functions
    // Input::OnRMouseUp(float, float)
    void Input::OnRMouseUp(float param_1, float param_2) {
        InputState::OnMouseUp(2);
        if (field_8 != (InputHandler*)0) {
            (field_8, param_1, param_2)->OnRMouseUp();
        }
    }

    // 0x100c9e920, 256 bytes, placed by neighbouring functions
    // Input::OnMouseMove(float, float)
    void Input::OnMouseMove(float param_1, float param_2) {
        long lVar1;
        bool bVar2;
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base* phVar4;
        hashtable_iterator_base* extraout_RDX_00;
        eastl local_48[8];
        hashtable_iterator_base local_40[8];
        scoped_lock<std::recursive_mutex> local_38[8];

        m_mouseX = param_1;
        m_mouseY = param_2;
        std::scoped_lock<std::recursive_mutex>::scoped_lock(local_38, (recursive_mutex*)&field_24);
        eastl::vector<unsigned long,
                      eastl::fixed_vector_allocator<8ul, 64ul, 8ul, 0ul, true, eastl::allocator>>::rbegin();
        eastl::rbtree<unsigned int,
                      eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                      eastl::less<unsigned int>, eastl::allocator,
                      eastl::use_first<eastl::pair<unsigned int const,
                                                   eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>>,
                      true, true>::end();
        phVar4 = extraout_RDX;
        do {
            bVar2 = eastl::operator!=(local_48, local_40, phVar4);
            if (!bVar2) {
            LAB_100c9e9be:
                if (field_8 != (InputHandler*)0) {
                    (field_8, param_1, param_2)->OnMouseMove();
                }
                InputState::OnMouseMove(param_1, param_2);
            LAB_100c9e9ef:
                std::scoped_lock<std::recursive_mutex>::~scoped_lock(local_38);
                return;
            }
            lVar1 = eastl::rbtree_iterator<
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
            operator*(
                (rbtree_iterator<
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>*)
                    local_48);
            if ((*(InputHandler**)(lVar1 + 32))->OnMouseMove(param_1, param_2) != '\0') {
                if (bVar2)
                    goto LAB_100c9e9ef;
                goto LAB_100c9e9be;
            }
            eastl::rbtree_iterator<
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
            operator++(
                (rbtree_iterator<
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>*)
                    local_48);
            phVar4 = extraout_RDX_00;
        } while (true);
    }

    // 0x100c9ea40, 32 bytes, placed by class name and debug map
    // InputState::OnMouseMove(float, float)
    void InputState::OnMouseMove(float param_1, float param_2) {
        m_mousePositionX = param_1;
        m_mousePositionY = param_2;
    }

    // 0x100c9ea60, 256 bytes, placed by neighbouring functions
    // Input::OnMouseWheel(float, float)
    void Input::OnMouseWheel(float param_1, float param_2) {
        long lVar1;
        bool bVar2;
        char cVar3;
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base* phVar4;
        hashtable_iterator_base* extraout_RDX_00;
        eastl local_48[8];
        hashtable_iterator_base local_40[8];
        scoped_lock<std::recursive_mutex> local_38[8];

        std::scoped_lock<std::recursive_mutex>::scoped_lock(local_38, (recursive_mutex*)&field_24);
        eastl::vector<unsigned long,
                      eastl::fixed_vector_allocator<8ul, 64ul, 8ul, 0ul, true, eastl::allocator>>::rbegin();
        eastl::rbtree<unsigned int,
                      eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                      eastl::less<unsigned int>, eastl::allocator,
                      eastl::use_first<eastl::pair<unsigned int const,
                                                   eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>>,
                      true, true>::end();
        phVar4 = extraout_RDX;
        do {
            bVar2 = eastl::operator!=(local_48, local_40, phVar4);
            if (!bVar2) {
            LAB_100c9eb02:
                if (field_8 != (InputHandler*)0) {
                    (field_8, m_mouseX, m_mouseY, param_1, param_2)->OnMouseWheel();
                }
            LAB_100c9eb2f:
                std::scoped_lock<std::recursive_mutex>::~scoped_lock(local_38);
                return;
            }
            lVar1 = eastl::rbtree_iterator<
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
            operator*(
                (rbtree_iterator<
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>*)
                    local_48);
            cVar3 = (*(InputHandler**)(lVar1 + 32))->OnMouseWheel(m_mouseX, m_mouseY, param_1, param_2);
            if (cVar3 != '\0') {
                if (bVar2)
                    goto LAB_100c9eb2f;
                goto LAB_100c9eb02;
            }
            eastl::rbtree_iterator<
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
            operator++(
                (rbtree_iterator<
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>*)
                    local_48);
            phVar4 = extraout_RDX_00;
        } while (true);
    }

    // 0x100c9eb80, 240 bytes, placed by neighbouring functions
    // Input::OnLowLevelMouseDown(int, int, int, int)
    void Input::OnLowLevelMouseDown(int param_1, int param_2, int param_3, int param_4) {
        bool bVar1;
        char cVar2;
        long lVar3;
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base* phVar4;
        hashtable_iterator_base* extraout_RDX_00;
        eastl local_58[8];
        hashtable_iterator_base local_50[8];
        scoped_lock<std::recursive_mutex> local_40[12];

        std::scoped_lock<std::recursive_mutex>::scoped_lock(local_40, (recursive_mutex*)&field_24);
        eastl::vector<unsigned long,
                      eastl::fixed_vector_allocator<8ul, 64ul, 8ul, 0ul, true, eastl::allocator>>::rbegin();
        eastl::rbtree<unsigned int,
                      eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                      eastl::less<unsigned int>, eastl::allocator,
                      eastl::use_first<eastl::pair<unsigned int const,
                                                   eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>>,
                      true, true>::end();
        phVar4 = extraout_RDX;
        do {
            bVar1 = eastl::operator!=(local_58, local_50, phVar4);
            if (!bVar1) {
            LAB_100c9ec13:
                if (((Input*)this)->field_8 != (InputHandler*)0) {
                    (((Input*)this)->field_8, param_1, param_2, param_3, param_4)->OnLowLevelMouseDown();
                }
            LAB_100c9ec31:
                std::scoped_lock<std::recursive_mutex>::~scoped_lock(local_40);
                return;
            }
            lVar3 = eastl::rbtree_iterator<
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
            operator*(
                (rbtree_iterator<
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>*)
                    local_58);
            cVar2 = (*(InputHandler**)(lVar3 + 32))->OnLowLevelMouseDown(param_1, param_2, param_3, param_4);
            if (cVar2 != '\0') {
                if (bVar1)
                    goto LAB_100c9ec31;
                goto LAB_100c9ec13;
            }
            eastl::rbtree_iterator<
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
            operator++(
                (rbtree_iterator<
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>*)
                    local_58);
            phVar4 = extraout_RDX_00;
        } while (true);
    }

    // 0x100c9eca0, 240 bytes, placed by neighbouring functions
    // Input::OnLowLevelMouseMove(int, int, int, int)
    void Input::OnLowLevelMouseMove(int param_1, int param_2, int param_3, int param_4) {
        bool bVar1;
        char cVar2;
        long lVar3;
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base* phVar4;
        hashtable_iterator_base* extraout_RDX_00;
        eastl local_58[8];
        hashtable_iterator_base local_50[8];
        scoped_lock<std::recursive_mutex> local_40[12];

        std::scoped_lock<std::recursive_mutex>::scoped_lock(local_40, (recursive_mutex*)&field_24);
        eastl::vector<unsigned long,
                      eastl::fixed_vector_allocator<8ul, 64ul, 8ul, 0ul, true, eastl::allocator>>::rbegin();
        eastl::rbtree<unsigned int,
                      eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                      eastl::less<unsigned int>, eastl::allocator,
                      eastl::use_first<eastl::pair<unsigned int const,
                                                   eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>>,
                      true, true>::end();
        phVar4 = extraout_RDX;
        do {
            bVar1 = eastl::operator!=(local_58, local_50, phVar4);
            if (!bVar1) {
            LAB_100c9ed33:
                if (((Input*)this)->field_8 != (InputHandler*)0) {
                    (((Input*)this)->field_8, param_1, param_2, param_3, param_4)->OnLowLevelMouseMove();
                }
            LAB_100c9ed51:
                std::scoped_lock<std::recursive_mutex>::~scoped_lock(local_40);
                return;
            }
            lVar3 = eastl::rbtree_iterator<
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
            operator*(
                (rbtree_iterator<
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>*)
                    local_58);
            cVar2 = (*(InputHandler**)(lVar3 + 32))->OnLowLevelMouseMove(param_1, param_2, param_3, param_4);
            if (cVar2 != '\0') {
                if (bVar1)
                    goto LAB_100c9ed51;
                goto LAB_100c9ed33;
            }
            eastl::rbtree_iterator<
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
            operator++(
                (rbtree_iterator<
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>*)
                    local_58);
            phVar4 = extraout_RDX_00;
        } while (true);
    }

    // 0x100c9edc0, 208 bytes, placed by neighbouring functions
    // Input::OnKeyDown(int)
    void Input::OnKeyDown(int param_1) {
        long lVar1;
        bool bVar2;
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base* phVar4;
        hashtable_iterator_base* extraout_RDX_00;
        eastl local_48[8];
        hashtable_iterator_base local_40[8];
        scoped_lock<std::recursive_mutex> local_38[8];

        std::scoped_lock<std::recursive_mutex>::scoped_lock(local_38, (recursive_mutex*)&field_24);
        eastl::vector<unsigned long,
                      eastl::fixed_vector_allocator<8ul, 64ul, 8ul, 0ul, true, eastl::allocator>>::rbegin();
        eastl::rbtree<unsigned int,
                      eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                      eastl::less<unsigned int>, eastl::allocator,
                      eastl::use_first<eastl::pair<unsigned int const,
                                                   eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>>,
                      true, true>::end();
        phVar4 = extraout_RDX;
        do {
            bVar2 = eastl::operator!=(local_48, local_40, phVar4);
            if (!bVar2) {
            LAB_100c9ee47:
                if (field_8 != (InputHandler*)0) {
                    InputHandler::OnKeyDown((int)field_8);
                }
                InputState::OnKeyDown(param_1);
            LAB_100c9ee60:
                std::scoped_lock<std::recursive_mutex>::~scoped_lock(local_38);
                return;
            }
            lVar1 = eastl::rbtree_iterator<
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
            operator*(
                (rbtree_iterator<
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>*)
                    local_48);
            if (InputHandler::OnKeyDown((int)*(undefined8*)(lVar1 + 32)) != '\0') {
                if (bVar2)
                    goto LAB_100c9ee60;
                goto LAB_100c9ee47;
            }
            eastl::rbtree_iterator<
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
            operator++(
                (rbtree_iterator<
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>*)
                    local_48);
            phVar4 = extraout_RDX_00;
        } while (true);
    }

    // 0x100c9eeb0, 48 bytes, placed by class name and debug map
    // InputState::OnKeyDown(int)
    void InputState::OnKeyDown(int param_1) {
        undefined1* puVar1;
        int local_c;

        local_c = param_1;
        puVar1 = (undefined1*)eastl::map<int, bool, eastl::less<int>,
                                         eastl::fixed_node_allocator<40ul, 512ul, 4ul, 0ul, true, eastl::allocator>>::
        operator[]((map<int, bool, eastl::less<int>,
                        eastl::fixed_node_allocator<40ul, 512ul, 4ul, 0ul, true, eastl::allocator>>*)&m_keyStates,
                   &local_c);
        *puVar1 = 1;
    }

    // 0x100c9eee0, 208 bytes, placed by neighbouring functions
    // Input::OnKeyUp(int)
    void Input::OnKeyUp(int param_1) {
        long lVar1;
        bool bVar2;
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base* phVar4;
        hashtable_iterator_base* extraout_RDX_00;
        eastl local_48[8];
        hashtable_iterator_base local_40[8];
        scoped_lock<std::recursive_mutex> local_38[8];

        InputState::OnKeyUp(param_1);
        std::scoped_lock<std::recursive_mutex>::scoped_lock(local_38, (recursive_mutex*)&field_24);
        eastl::vector<unsigned long,
                      eastl::fixed_vector_allocator<8ul, 64ul, 8ul, 0ul, true, eastl::allocator>>::rbegin();
        eastl::rbtree<unsigned int,
                      eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                      eastl::less<unsigned int>, eastl::allocator,
                      eastl::use_first<eastl::pair<unsigned int const,
                                                   eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>>,
                      true, true>::end();
        phVar4 = extraout_RDX;
        do {
            bVar2 = eastl::operator!=(local_48, local_40, phVar4);
            if (!bVar2) {
            LAB_100c9ef67:
                if (field_8 != (InputHandler*)0) {
                    InputHandler::OnKeyUp((int)field_8);
                }
            LAB_100c9ef78:
                std::scoped_lock<std::recursive_mutex>::~scoped_lock(local_38);
                return;
            }
            lVar1 = eastl::rbtree_iterator<
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
            operator*(
                (rbtree_iterator<
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>*)
                    local_48);
            if (InputHandler::OnKeyUp((int)*(undefined8*)(lVar1 + 32)) != '\0') {
                if (bVar2)
                    goto LAB_100c9ef78;
                goto LAB_100c9ef67;
            }
            eastl::rbtree_iterator<
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
            operator++(
                (rbtree_iterator<
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>*)
                    local_48);
            phVar4 = extraout_RDX_00;
        } while (true);
    }

    // 0x100c9efb0, 48 bytes, placed by class name and debug map
    // InputState::OnKeyUp(int)
    void InputState::OnKeyUp(int param_1) {
        undefined1* puVar1;
        int local_c;

        local_c = param_1;
        puVar1 = (undefined1*)eastl::map<int, bool, eastl::less<int>,
                                         eastl::fixed_node_allocator<40ul, 512ul, 4ul, 0ul, true, eastl::allocator>>::
        operator[]((map<int, bool, eastl::less<int>,
                        eastl::fixed_node_allocator<40ul, 512ul, 4ul, 0ul, true, eastl::allocator>>*)&m_keyStates,
                   &local_c);
        *puVar1 = 0;
    }

    // 0x100c9f000, 208 bytes, placed by neighbouring functions
    // Input::OnKeyChar(int)
    void Input::OnKeyChar(int param_1) {
        long lVar1;
        bool bVar2;
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base* phVar4;
        hashtable_iterator_base* extraout_RDX_00;
        eastl local_48[8];
        hashtable_iterator_base local_40[8];
        scoped_lock<std::recursive_mutex> local_38[8];

        std::scoped_lock<std::recursive_mutex>::scoped_lock(local_38, (recursive_mutex*)&field_24);
        eastl::vector<unsigned long,
                      eastl::fixed_vector_allocator<8ul, 64ul, 8ul, 0ul, true, eastl::allocator>>::rbegin();
        eastl::rbtree<unsigned int,
                      eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                      eastl::less<unsigned int>, eastl::allocator,
                      eastl::use_first<eastl::pair<unsigned int const,
                                                   eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>>,
                      true, true>::end();
        phVar4 = extraout_RDX;
        do {
            bVar2 = eastl::operator!=(local_48, local_40, phVar4);
            if (!bVar2) {
            LAB_100c9f087:
                if (field_8 != (InputHandler*)0) {
                    InputHandler::OnKeyChar((int)field_8);
                }
            LAB_100c9f098:
                std::scoped_lock<std::recursive_mutex>::~scoped_lock(local_38);
                return;
            }
            lVar1 = eastl::rbtree_iterator<
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
            operator*(
                (rbtree_iterator<
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>*)
                    local_48);
            if (InputHandler::OnKeyChar((int)*(undefined8*)(lVar1 + 32)) != '\0') {
                if (bVar2)
                    goto LAB_100c9f098;
                goto LAB_100c9f087;
            }
            eastl::rbtree_iterator<
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
            operator++(
                (rbtree_iterator<
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>*)
                    local_48);
            phVar4 = extraout_RDX_00;
        } while (true);
    }

    // 0x100c9f0f0, 224 bytes, placed by neighbouring functions
    // Input::OnFirstTouchDown(unsigned long, float, float)
    void Input::OnFirstTouchDown(ulong param_1, float param_2, float param_3) {
        long lVar1;
        bool bVar2;
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base* phVar4;
        hashtable_iterator_base* extraout_RDX_00;
        eastl local_50[8];
        hashtable_iterator_base local_48[8];
        scoped_lock<std::recursive_mutex> local_40[8];

        std::scoped_lock<std::recursive_mutex>::scoped_lock(local_40, (recursive_mutex*)(param_1 + 24));
        eastl::vector<unsigned long,
                      eastl::fixed_vector_allocator<8ul, 64ul, 8ul, 0ul, true, eastl::allocator>>::rbegin();
        eastl::rbtree<unsigned int,
                      eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                      eastl::less<unsigned int>, eastl::allocator,
                      eastl::use_first<eastl::pair<unsigned int const,
                                                   eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>>,
                      true, true>::end();
        phVar4 = extraout_RDX;
        do {
            bVar2 = eastl::operator!=(local_50, local_48, phVar4);
            if (!bVar2) {
            LAB_100c9f181:
                if (*(ulong*)(param_1 + 8) != 0) {
                    InputHandler::OnFirstTouchDown(*(ulong*)(param_1 + 8), param_2, param_3);
                }
            LAB_100c9f19c:
                std::scoped_lock<std::recursive_mutex>::~scoped_lock(local_40);
                return;
            }
            lVar1 = eastl::rbtree_iterator<
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
            operator*(
                (rbtree_iterator<
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>*)
                    local_50);
            if (InputHandler::OnFirstTouchDown(*(ulong*)(lVar1 + 32), param_2, param_3) != '\0') {
                if (bVar2)
                    goto LAB_100c9f19c;
                goto LAB_100c9f181;
            }
            eastl::rbtree_iterator<
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
            operator++(
                (rbtree_iterator<
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>*)
                    local_50);
            phVar4 = extraout_RDX_00;
        } while (true);
    }

    // 0x100c9f1f0, 240 bytes, placed by neighbouring functions
    // Input::OnTouchDown(unsigned long, float, float)
    void Input::OnTouchDown(ulong param_1, float param_2, float param_3) {
        long lVar1;
        bool bVar2;
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base* phVar4;
        hashtable_iterator_base* extraout_RDX_00;
        eastl local_50[8];
        hashtable_iterator_base local_48[8];
        scoped_lock<std::recursive_mutex> local_40[8];

        InputState::UpdateTouch(param_1, true, param_2, param_3);
        std::scoped_lock<std::recursive_mutex>::scoped_lock(local_40, (recursive_mutex*)&field_24);
        eastl::vector<unsigned long,
                      eastl::fixed_vector_allocator<8ul, 64ul, 8ul, 0ul, true, eastl::allocator>>::rbegin();
        eastl::rbtree<unsigned int,
                      eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                      eastl::less<unsigned int>, eastl::allocator,
                      eastl::use_first<eastl::pair<unsigned int const,
                                                   eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>>,
                      true, true>::end();
        phVar4 = extraout_RDX;
        do {
            bVar2 = eastl::operator!=(local_50, local_48, phVar4);
            if (!bVar2) {
            LAB_100c9f291:
                if (field_8 != (InputHandler*)0) {
                    (field_8, param_1, param_2, param_3)->OnTouchDown();
                }
            LAB_100c9f2ac:
                std::scoped_lock<std::recursive_mutex>::~scoped_lock(local_40);
                return;
            }
            lVar1 = eastl::rbtree_iterator<
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
            operator*(
                (rbtree_iterator<
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>*)
                    local_50);
            if ((*(InputHandler**)(lVar1 + 32))->OnTouchDown(param_1, param_2, param_3) != '\0') {
                if (bVar2)
                    goto LAB_100c9f2ac;
                goto LAB_100c9f291;
            }
            eastl::rbtree_iterator<
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
            operator++(
                (rbtree_iterator<
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>*)
                    local_50);
            phVar4 = extraout_RDX_00;
        } while (true);
    }

    // 0x100c9f2e0, 64 bytes, placed by class name and debug map
    // InputState::UpdateTouch(unsigned long, bool, float, float)
    void InputState::UpdateTouch(ulong param_1, bool param_2, float param_3, float param_4) {
        long lVar1;

        if (param_1 < 10) {
            lVar1 = std::array<InputState::TouchState, 10ul>::operator[](param_1);
            *(bool*)lVar1 = param_2;
            *(float*)(lVar1 + 4) = param_3;
            *(float*)(lVar1 + 8) = param_4;
        }
    }

    // 0x100c9f370, 240 bytes, placed by debug map only (low confidence)
    // Input::OnTouchMove(unsigned long, float, float)
    void Input::OnTouchMove(ulong param_1, float param_2, float param_3) {
        long lVar1;
        bool bVar2;
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base* phVar4;
        hashtable_iterator_base* extraout_RDX_00;
        eastl local_50[8];
        hashtable_iterator_base local_48[8];
        scoped_lock<std::recursive_mutex> local_40[8];

        InputState::UpdateTouch(param_1, true, param_2, param_3);
        std::scoped_lock<std::recursive_mutex>::scoped_lock(local_40, (recursive_mutex*)&field_24);
        eastl::vector<unsigned long,
                      eastl::fixed_vector_allocator<8ul, 64ul, 8ul, 0ul, true, eastl::allocator>>::rbegin();
        eastl::rbtree<unsigned int,
                      eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                      eastl::less<unsigned int>, eastl::allocator,
                      eastl::use_first<eastl::pair<unsigned int const,
                                                   eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>>,
                      true, true>::end();
        phVar4 = extraout_RDX;
        do {
            bVar2 = eastl::operator!=(local_50, local_48, phVar4);
            if (!bVar2) {
            LAB_100c9f411:
                if (field_8 != (InputHandler*)0) {
                    (field_8, param_1, param_2, param_3)->OnTouchMove();
                }
            LAB_100c9f42c:
                std::scoped_lock<std::recursive_mutex>::~scoped_lock(local_40);
                return;
            }
            lVar1 = eastl::rbtree_iterator<
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
            operator*(
                (rbtree_iterator<
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>*)
                    local_50);
            if ((*(InputHandler**)(lVar1 + 32))->OnTouchMove(param_1, param_2, param_3) != '\0') {
                if (bVar2)
                    goto LAB_100c9f42c;
                goto LAB_100c9f411;
            }
            eastl::rbtree_iterator<
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
            operator++(
                (rbtree_iterator<
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>*)
                    local_50);
            phVar4 = extraout_RDX_00;
        } while (true);
    }

    // 0x100c9f4b0, 240 bytes, placed by debug map only (low confidence)
    // Input::OnTouchUp(unsigned long, float, float)
    void Input::OnTouchUp(ulong param_1, float param_2, float param_3) {
        long lVar1;
        bool bVar2;
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base* phVar4;
        hashtable_iterator_base* extraout_RDX_00;
        eastl local_50[8];
        hashtable_iterator_base local_48[8];
        scoped_lock<std::recursive_mutex> local_40[8];

        InputState::UpdateTouch(param_1, false, param_2, param_3);
        std::scoped_lock<std::recursive_mutex>::scoped_lock(local_40, (recursive_mutex*)&field_24);
        eastl::vector<unsigned long,
                      eastl::fixed_vector_allocator<8ul, 64ul, 8ul, 0ul, true, eastl::allocator>>::rbegin();
        eastl::rbtree<unsigned int,
                      eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                      eastl::less<unsigned int>, eastl::allocator,
                      eastl::use_first<eastl::pair<unsigned int const,
                                                   eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>>,
                      true, true>::end();
        phVar4 = extraout_RDX;
        do {
            bVar2 = eastl::operator!=(local_50, local_48, phVar4);
            if (!bVar2) {
            LAB_100c9f551:
                if (field_8 != (InputHandler*)0) {
                    (field_8, param_1, param_2, param_3)->OnTouchUp();
                }
            LAB_100c9f56c:
                std::scoped_lock<std::recursive_mutex>::~scoped_lock(local_40);
                return;
            }
            lVar1 = eastl::rbtree_iterator<
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
            operator*(
                (rbtree_iterator<
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>*)
                    local_50);
            if ((*(InputHandler**)(lVar1 + 32))->OnTouchUp(param_1, param_2, param_3) != '\0') {
                if (bVar2)
                    goto LAB_100c9f56c;
                goto LAB_100c9f551;
            }
            eastl::rbtree_iterator<
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
            operator++(
                (rbtree_iterator<
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>*)
                    local_50);
            phVar4 = extraout_RDX_00;
        } while (true);
    }

    // 0x100c9f5f0, 224 bytes, placed by debug map only (low confidence)
    // Input::OnTouchCanceled(unsigned long, float, float)
    void Input::OnTouchCanceled(ulong param_1, float param_2, float param_3) {
        long lVar1;
        bool bVar2;
        char cVar3;
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base* phVar4;
        hashtable_iterator_base* extraout_RDX_00;
        eastl local_50[8];
        hashtable_iterator_base local_48[8];
        scoped_lock<std::recursive_mutex> local_40[8];

        std::scoped_lock<std::recursive_mutex>::scoped_lock(local_40, (recursive_mutex*)&field_24);
        eastl::vector<unsigned long,
                      eastl::fixed_vector_allocator<8ul, 64ul, 8ul, 0ul, true, eastl::allocator>>::rbegin();
        eastl::rbtree<unsigned int,
                      eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                      eastl::less<unsigned int>, eastl::allocator,
                      eastl::use_first<eastl::pair<unsigned int const,
                                                   eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>>,
                      true, true>::end();
        phVar4 = extraout_RDX;
        do {
            bVar2 = eastl::operator!=(local_50, local_48, phVar4);
            if (!bVar2) {
            LAB_100c9f681:
                if (field_8 != (InputHandler*)0) {
                    (field_8, param_1, param_2, param_3)->OnTouchCanceled();
                }
            LAB_100c9f69c:
                std::scoped_lock<std::recursive_mutex>::~scoped_lock(local_40);
                return;
            }
            lVar1 = eastl::rbtree_iterator<
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
            operator*(
                (rbtree_iterator<
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>*)
                    local_50);
            cVar3 = (*(InputHandler**)(lVar1 + 32))->OnTouchCanceled(param_1, param_2, param_3);
            if (cVar3 != '\0') {
                if (bVar2)
                    goto LAB_100c9f69c;
                goto LAB_100c9f681;
            }
            eastl::rbtree_iterator<
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
            operator++(
                (rbtree_iterator<
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>*)
                    local_50);
            phVar4 = extraout_RDX_00;
        } while (true);
    }

    // 0x100c9f720, 32 bytes, placed by debug map only (low confidence)
    // Input::OnTextCommand(TextCommand)
    void Input::OnTextCommand(long param_1) {
        if (*(long*)(param_1 + 8) != 0) {
            InputHandler::OnTextCommand();
        }
    }

    // 0x100c9f760, 32 bytes, placed by debug map only (low confidence)
    // Input::GetNumTouches() const
    undefined8 Input::GetNumTouches() {
        if (field_8 == (InputHandler*)0) {
            return 0;
        }
        return (&field_8->field_2216)->GetX();
    }

    // 0x100c9f780, 112 bytes, placed by debug map only (low confidence)
    // Input::OnText(eastl::string, int)
    undefined4 Input::OnText(basic_string* param_2, undefined4 param_3) {
        InputHandler* pIVar1;
        undefined4 uVar2;
        eastl::string local_40[32];

        pIVar1 = field_8;
        if (pIVar1 == (InputHandler*)0) {
            uVar2 = 0;
        } else {
            eastl::string::basic_string(local_40, param_2);
            uVar2 = pIVar1->OnText(local_40, param_3);
            eastl::string::~basic_string(local_40);
        }
        return uVar2;
    }

    // 0x100c9f8a0, 112 bytes, placed by debug map only (low confidence)
    // Input::ShowOnScreenKeyboard()
    void Input::ShowOnScreenKeyboard() {
        NpcUID* in_RDX;
        basic_string<char, BucketAllocatorEASTL> local_38[24];
        eastl local_20[8];

        eastl::destruct<oldscape::highlight::NpcUID*>(local_20, (NpcUID*)"EASTL basic_string", in_RDX);
        eastl::basic_string<char, BucketAllocatorEASTL>::basic_string((char*)local_38, (BucketAllocatorEASTL*)"");
        ShowOnScreenKeyboard();
        eastl::basic_string<char, BucketAllocatorEASTL>::~basic_string(local_38);
    }

    // 0x100c9f910, 48 bytes, placed by debug map only (low confidence)
    // Input::ShowOnScreenKeyboard(SoftKeyboardType, eastl::basic_string<char, BucketAllocatorEASTL>, int, bool)
    void Input::ShowOnScreenKeyboard() {
        basic_string local_28[24];

        eastl::basic_string<char, BucketAllocatorEASTL>::basic_string(local_28);
        local_28->~basic_string();
    }

    // 0x100ca15a0, 112 bytes, placed by class name
    // InputState::IsKeyDown(int)
    bool InputState::IsKeyDown(int param_1) {
        bool bVar1;
        long lVar2;
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base local_38[8];
        eastl local_30[12];
        int local_24;

        local_24 = param_1;
        eastl::rbtree<int, eastl::pair<int const, bool>, eastl::less<int>,
                      eastl::fixed_node_allocator<40ul, 512ul, 4ul, 0ul, true, eastl::allocator>,
                      eastl::use_first<eastl::pair<int const, bool>>, true, true>::find((int*)local_30);
        eastl::rbtree<unsigned int,
                      eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                      eastl::less<unsigned int>, eastl::allocator,
                      eastl::use_first<eastl::pair<unsigned int const,
                                                   eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>>,
                      true, true>::end();
        bVar1 = eastl::operator==(local_30, local_38, extraout_RDX);
        if (bVar1) {
            bVar1 = false;
        } else {
            lVar2 = eastl::rbtree_iterator<
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
            operator*(
                (rbtree_iterator<
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>*)
                    local_30);
            bVar1 = *(char*)(lVar2 + 4) != '\0';
        }
        return bVar1;
    }

    // 0x100ca16f0, 160 bytes, placed by class name
    // InputState::IsAnyKeyDown()
    ulong InputState::IsAnyKeyDown() {
        bool bVar1;
        undefined7 extraout_var;
        long lVar2;
        undefined7 extraout_var_00;
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base* extraout_RDX_00;
        ulong uVar3;
        hashtable_iterator_base local_30[8];
        eastl local_28[8];

        eastl::vector<unsigned long,
                      eastl::fixed_vector_allocator<8ul, 64ul, 8ul, 0ul, true, eastl::allocator>>::rbegin();
        eastl::rbtree<unsigned int,
                      eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                      eastl::less<unsigned int>, eastl::allocator,
                      eastl::use_first<eastl::pair<unsigned int const,
                                                   eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>>,
                      true, true>::end();
        bVar1 = eastl::operator!=(local_28, local_30, extraout_RDX);
        uVar3 = CONCAT71(extraout_var, bVar1) & 4294967295;
        if ((bVar1) &&
            (lVar2 = eastl::rbtree_iterator<
                 eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                 eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                 eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
             operator*(
                 (rbtree_iterator<
                     eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                     eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                     eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>*)
                     local_28),
             *(char*)(lVar2 + 4) == '\0')) {
            do {
                eastl::rbtree_iterator<
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
                operator++(
                    (rbtree_iterator<
                        eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                        eastl::pair<unsigned int const,
                                    eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                        eastl::pair<unsigned int const,
                                    eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>*)local_28);
                bVar1 = eastl::operator!=(local_28, local_30, extraout_RDX_00);
                uVar3 = CONCAT71(extraout_var_00, bVar1) & 4294967295;
                if (!bVar1) {
                    return uVar3;
                }
                lVar2 = eastl::rbtree_iterator<
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
                operator*(
                    (rbtree_iterator<
                        eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                        eastl::pair<unsigned int const,
                                    eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                        eastl::pair<unsigned int const,
                                    eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>*)local_28);
            } while (*(char*)(lVar2 + 4) == '\0');
        }
        return uVar3;
    }

    // 0x100ca1840, 16 bytes, placed by class name
    // InputState::IsMouseDown(MouseButton)
    undefined1 InputState::IsMouseDown(int param_1) {
        undefined1* puVar1;

        puVar1 = (undefined1*)std::array<bool, 3ul>::operator[]((long)param_1);
        return *puVar1;
    }

    // 0x100ca1860, 32 bytes, placed by class name
    // InputState::GetMousePosition(float&, float&)
    void InputState::GetMousePosition(float* param_1, float* param_2) {
        *param_1 = m_mousePositionX;
        *param_2 = m_mousePositionY;
    }

    // 0x100ca1880, 48 bytes, placed by class name
    // InputState::OnAxis(unsigned int, GamepadAxis, short)
    void InputState::OnAxis(uint param_1, int param_2, undefined2 param_3) {
        array<short, 4ul>* this;
        undefined2* puVar1;

        this = (array<short, 4ul>*)std::array<std::array<short, 4ul>, 4ul>::operator[]((ulong)param_1);
        puVar1 = (undefined2*)std::array<short, 4ul>::operator[](this, (long)param_2);
        *puVar1 = param_3;
    }

    // 0x100ca18e0, 48 bytes, placed by class name
    // InputState::OnTrigger(unsigned int, GamepadTrigger, unsigned char)
    void InputState::OnTrigger(uint param_1, int param_2, undefined1 param_3) {
        array<unsigned char, 2ul>* this;
        undefined1* puVar1;

        this = (array<unsigned char, 2ul>*)std::array<std::array<unsigned char, 2ul>, 4ul>::operator[]((ulong)param_1);
        puVar1 = (undefined1*)std::array<unsigned char, 2ul>::operator[](this, (long)param_2);
        *puVar1 = param_3;
    }

    // 0x100ca1960, 48 bytes, placed by class name
    // InputState::OnGamepadButton(unsigned int, GamepadButton, bool)
    void InputState::OnGamepadButton(uint param_1, int param_2, undefined1 param_3) {
        array<bool, 16ul>* this;
        undefined1* puVar1;

        this = (array<bool, 16ul>*)std::array<std::array<bool, 16ul>, 4ul>::operator[]((ulong)param_1);
        puVar1 = (undefined1*)std::array<bool, 16ul>::operator[](this, (long)param_2);
        *puVar1 = param_3;
    }

    // 0x100ca19c0, 48 bytes, placed by class name
    // InputState::IsButtonDown(unsigned int, GamepadButton)
    undefined1 InputState::IsButtonDown(uint param_1, int param_2) {
        array<bool, 16ul>* this;
        undefined1* puVar1;

        this = (array<bool, 16ul>*)std::array<std::array<bool, 16ul>, 4ul>::operator[]((ulong)param_1);
        puVar1 = (undefined1*)std::array<bool, 16ul>::operator[](this, (long)param_2);
        return *puVar1;
    }

    // 0x100ca19f0, 48 bytes, placed by class name
    // InputState::GetAxis(unsigned int, GamepadAxis, short&)
    void InputState::GetAxis(uint param_1, int param_2, undefined2* param_3) {
        array<short, 4ul>* this;
        undefined2* puVar1;

        this = (array<short, 4ul>*)std::array<std::array<short, 4ul>, 4ul>::operator[]((ulong)param_1);
        puVar1 = (undefined2*)std::array<short, 4ul>::operator[](this, (long)param_2);
        *param_3 = *puVar1;
    }

    // 0x100ca1a20, 48 bytes, placed by class name
    // InputState::GetTrigger(unsigned int, GamepadTrigger, unsigned char&)
    void InputState::GetTrigger(uint param_1, int param_2, undefined1* param_3) {
        array<unsigned char, 2ul>* this;
        undefined1* puVar1;

        this = (array<unsigned char, 2ul>*)std::array<std::array<unsigned char, 2ul>, 4ul>::operator[]((ulong)param_1);
        puVar1 = (undefined1*)std::array<unsigned char, 2ul>::operator[](this, (long)param_2);
        *param_3 = *puVar1;
    }

    // 0x100ca1a50, 16 bytes, placed by class name
    // InputState::GetGamepadConnectState(unsigned int)
    undefined1 InputState::GetGamepadConnectState(uint param_1) {
        undefined1* puVar1;

        puVar1 = (undefined1*)std::array<bool, 4ul>::operator[]((ulong)param_1);
        return *puVar1;
    }

    // 0x100ca1a70, 32 bytes, placed by class name
    // InputState::SetGamepadConnectState(unsigned int, bool)
    void InputState::SetGamepadConnectState(uint param_1, bool param_2) {
        undefined8 uVar1;

        uVar1 = std::array<bool, 4ul>::operator[]((ulong)param_1);
        *(bool*)uVar1 = param_2;
    }

    // 0x100ca1a90, 416 bytes, placed by class name
    // InputState::OnKillFocus(Input*)
    void InputState::OnKillFocus(Input* param_1) {
        bool bVar1;
        undefined4* puVar2;
        char* pcVar3;
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base* extraout_RDX_00;
        ulong uVar4;
        float fVar5;
        hashtable_iterator_base local_40[8];
        eastl local_38[12];
        float local_2c;

        if (param_1 != (Input*)0) {
            eastl::vector<unsigned long,
                          eastl::fixed_vector_allocator<8ul, 64ul, 8ul, 0ul, true, eastl::allocator>>::rbegin();
            eastl::rbtree<
                unsigned int,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                eastl::less<unsigned int>, eastl::allocator,
                eastl::use_first<
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>>,
                true, true>::end();
            bVar1 = eastl::operator!=(local_38, local_40, extraout_RDX);
            if (bVar1) {
                do {
                    puVar2 = (undefined4*)eastl::rbtree_iterator<
                        eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                        eastl::pair<unsigned int const,
                                    eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                        eastl::pair<unsigned int const,
                                    eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
                    operator*(
                        (rbtree_iterator<eastl::pair<unsigned int const,
                                                     eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                                         eastl::pair<unsigned int const,
                                                     eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                                         eastl::pair<unsigned int const,
                                                     eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>*)
                            local_38);
                    if (*(char*)(puVar2 + 1) != '\0') {
                        (*(code*)param_1->field_0[3])(param_1, *puVar2);
                    }
                    eastl::rbtree_iterator<
                        eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                        eastl::pair<unsigned int const,
                                    eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                        eastl::pair<unsigned int const,
                                    eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
                    operator++(
                        (rbtree_iterator<eastl::pair<unsigned int const,
                                                     eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                                         eastl::pair<unsigned int const,
                                                     eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                                         eastl::pair<unsigned int const,
                                                     eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>*)
                            local_38);
                    bVar1 = eastl::operator!=(local_38, local_40, extraout_RDX_00);
                } while (bVar1);
            }
            m_keyStates.clear();
            pcVar3 = (char*)std::array<bool, 3ul>::operator[](0);
            if (*pcVar3 != '\0') {
                local_2c = (float)param_1->GetMouseX();
                fVar5 = (float)param_1->GetMouseY();
                param_1->OnLMouseUp(local_2c, fVar5);
            }
            pcVar3 = (char*)std::array<bool, 3ul>::operator[](1);
            if (*pcVar3 != '\0') {
                local_2c = (float)param_1->GetMouseX();
                fVar5 = (float)param_1->GetMouseY();
                param_1->OnMMouseUp(local_2c, fVar5);
            }
            pcVar3 = (char*)std::array<bool, 3ul>::operator[](2);
            if (*pcVar3 != '\0') {
                local_2c = (float)param_1->GetMouseX();
                fVar5 = (float)param_1->GetMouseY();
                param_1->OnRMouseUp(local_2c, fVar5);
            }
            local_38[0] = (eastl)0;
            std::array<bool, 3ul>::fill((bool*)local_38);
            uVar4 = 0;
            do {
                pcVar3 = (char*)std::array<InputState::TouchState, 10ul>::operator[](uVar4);
                if (*pcVar3 != '\0') {
                    *pcVar3 = '\0';
                    param_1->OnTouchUp(uVar4, *(float*)(pcVar3 + 4), *(float*)(pcVar3 + 8));
                }
                uVar4 = uVar4 + 1;
            } while (uVar4 != 10);
        }
        m_keyStates.clear();
    }

    // 0x100ca1c30, 16 bytes, inline, placed by class header (inline)
    // Input::GetMouseY() const
    float Input::GetMouseY() {
        return m_mouseY;
    }

    // 0x100ca6890, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.31
    void ___cxx_global_var_init_31() {
        new (&InputState::m_keyStates) eastl::fixed_map<int, bool, 512ul, true, eastl::less<int>, eastl::allocator>();
        ___cxa_atexit(PTR__fixed_map_100ee6e30, &InputState::m_keyStates, 4294967296);
    }

} // namespace jag::input

namespace jag::input::gesture {
    class GestureManager {
    public:
        GetNumTouches() const;
        GestureManager();
        ~GestureManager();
        void AddGesture(GestureBase*);
        void Update();
        void Reset();
        OnTouchDown(unsigned long, float, float);
        OnTouchMove(unsigned long, float, float);
        OnTouchUp(unsigned long, float, float);
        void ResetTouches();
        void ResetGestures();
        void GetLastTouch(unsigned long) const;

        // data members, from how the methods use this: 48 bytes
        int field_0; // offset 0
        char _unknown_4[44];
    };

    class TouchPoint {
    public:
        TouchPoint();
        void Reset();
        TouchPoint(unsigned long, float, float);
        TouchPoint* operator+=(TouchPoint const&);
        TouchPoint* operator/=(int);

        // data members, from how the methods use this: 24 bytes
        ulong field_0;      // offset 0
        float field_8;      // offset 8
        float field_12;     // offset 12
        ulonglong field_16; // offset 16
    };

    // 0x100c9f940, 48 bytes, base-object constructor, placed by debug map only (low confidence)
    // TouchPoint::TouchPoint(unsigned long, float, float)
    void TouchPoint::TouchPoint(ulong param_1, float param_2, float param_3) {
        field_0 = param_1;
        field_8 = param_2;
        field_12 = param_3;
        field_16 = SystemTimer::GetTimeMS<std::chrono::steady_clock>((SystemTimer*)this);
    }

    // 0x100c9f970, 16 bytes, complete-object constructor, placed by debug map only (low confidence)
    // TouchPoint::TouchPoint(unsigned long, float, float): jumps straight to the base-object constructor

    // 0x100c9f980, 208 bytes, placed by debug map only (low confidence)
    // GestureManager::OnTouchDown(unsigned long, float, float)
    undefined8 GestureManager::OnTouchDown(ulong param_1, float param_2, float param_3) {
        bool bVar1;
        ulong* puVar2;
        undefined8* puVar3;
        hashtable_iterator_base* extraout_RDX;
        undefined1 auVar4[16];
        TouchPoint local_50;
        undefined8 local_38;

        field_0 = field_0 + 1;
        new (&local_50) TouchPoint(param_1, param_2, param_3);
        puVar2 = (ulong*)eastl::vector<TouchPoint, eastl::allocator>::operator[](
            (vector<TouchPoint, eastl::allocator>*)&field_8, param_1);
        *puVar2 = local_50.field_0;
        puVar2[1] = local_50._8_8_;
        puVar2[2] = local_50.field_16;
        local_50.field_0 =
            eastl::rbtree<eastl::string, eastl::pair<eastl::stringconst, bool>, eastl::less<eastl::string>,
                          eastl::allocator, eastl::use_first<eastl::pair<eastl::stringconst, bool>>, true, true>::end();
        auVar4 = eastl::rbtree<eastl::string, eastl::pair<eastl::stringconst, bool>, eastl::less<eastl::string>,
                               eastl::allocator, eastl::use_first<eastl::pair<eastl::stringconst, bool>>, true,
                               true>::begin();
        local_38 = auVar4._0_8_;
        bVar1 = eastl::operator!=((eastl*)&local_38, (hashtable_iterator_base*)&local_50, auVar4._8_8_);
        if (bVar1) {
            do {
                puVar3 = (undefined8*)eastl::rbtree_iterator<
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
                operator*(
                    (rbtree_iterator<
                        eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                        eastl::pair<unsigned int const,
                                    eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                        eastl::pair<unsigned int const,
                                    eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>*)&local_38);
                (**(code**)(*(long*)*puVar3 + 16))(param_2, param_3, (long*)*puVar3, this, param_1);
                eastl::rbtree_iterator<
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
                operator++(
                    (rbtree_iterator<
                        eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                        eastl::pair<unsigned int const,
                                    eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                        eastl::pair<unsigned int const,
                                    eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>*)&local_38);
                bVar1 = eastl::operator!=((eastl*)&local_38, (hashtable_iterator_base*)&local_50, extraout_RDX);
            } while (bVar1);
        }
        return 0;
    }

    // 0x100c9faa0, 192 bytes, placed by debug map only (low confidence)
    // GestureManager::OnTouchMove(unsigned long, float, float)
    undefined8 GestureManager::OnTouchMove(ulong param_1, float param_2, float param_3) {
        bool bVar1;
        long* plVar2;
        undefined8* puVar3;
        hashtable_iterator_base* extraout_RDX;
        undefined1 auVar4[16];
        undefined8 local_40;
        undefined8 local_38;

        plVar2 = (long*)eastl::vector<TouchPoint, eastl::allocator>::operator[](
            (vector<TouchPoint, eastl::allocator>*)&field_8, param_1);
        if (*plVar2 != 4294967295) {
            local_40 = eastl::rbtree<eastl::string, eastl::pair<eastl::stringconst, bool>, eastl::less<eastl::string>,
                                     eastl::allocator, eastl::use_first<eastl::pair<eastl::stringconst, bool>>, true,
                                     true>::end();
            auVar4 = eastl::rbtree<eastl::string, eastl::pair<eastl::stringconst, bool>, eastl::less<eastl::string>,
                                   eastl::allocator, eastl::use_first<eastl::pair<eastl::stringconst, bool>>, true,
                                   true>::begin();
            local_38 = auVar4._0_8_;
            bVar1 = eastl::operator!=((eastl*)&local_38, (hashtable_iterator_base*)&local_40, auVar4._8_8_);
            if (bVar1) {
                do {
                    puVar3 = (undefined8*)eastl::rbtree_iterator<
                        eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                        eastl::pair<unsigned int const,
                                    eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                        eastl::pair<unsigned int const,
                                    eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
                    operator*(
                        (rbtree_iterator<eastl::pair<unsigned int const,
                                                     eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                                         eastl::pair<unsigned int const,
                                                     eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                                         eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe,
                                                                                       eastl::allocator>>&>*)&local_38);
                    (**(code**)(*(long*)*puVar3 + 32))(param_2, param_3, (long*)*puVar3, this, param_1);
                    eastl::rbtree_iterator<
                        eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                        eastl::pair<unsigned int const,
                                    eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                        eastl::pair<unsigned int const,
                                    eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
                    operator++(
                        (rbtree_iterator<eastl::pair<unsigned int const,
                                                     eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                                         eastl::pair<unsigned int const,
                                                     eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                                         eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe,
                                                                                       eastl::allocator>>&>*)&local_38);
                    bVar1 = eastl::operator!=((eastl*)&local_38, (hashtable_iterator_base*)&local_40, extraout_RDX);
                } while (bVar1);
            }
        }
        return 0;
    }

    // 0x100c9fb60, 240 bytes, placed by debug map only (low confidence)
    // GestureManager::OnTouchUp(unsigned long, float, float)
    undefined8 GestureManager::OnTouchUp(ulong param_1, float param_2, float param_3) {
        bool bVar1;
        int* piVar2;
        undefined8* puVar3;
        ulong* puVar4;
        hashtable_iterator_base* extraout_RDX;
        undefined1 auVar5[16];
        TouchPoint local_50;
        ulong local_30;

        local_50.field_0 = CONCAT44(local_50.field_0._4_4_, field_0 + -1);
        local_30 = local_30 & 18446744069414584320;
        piVar2 = std::max<int>((int*)&local_50, (int*)&local_30);
        field_0 = *piVar2;
        local_30 =
            eastl::rbtree<eastl::string, eastl::pair<eastl::stringconst, bool>, eastl::less<eastl::string>,
                          eastl::allocator, eastl::use_first<eastl::pair<eastl::stringconst, bool>>, true, true>::end();
        auVar5 = eastl::rbtree<eastl::string, eastl::pair<eastl::stringconst, bool>, eastl::less<eastl::string>,
                               eastl::allocator, eastl::use_first<eastl::pair<eastl::stringconst, bool>>, true,
                               true>::begin();
        local_50.field_0 = auVar5._0_8_;
        bVar1 = eastl::operator!=((eastl*)&local_50, (hashtable_iterator_base*)&local_30, auVar5._8_8_);
        if (bVar1) {
            do {
                puVar3 = (undefined8*)eastl::rbtree_iterator<
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
                operator*(
                    (rbtree_iterator<
                        eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                        eastl::pair<unsigned int const,
                                    eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                        eastl::pair<unsigned int const,
                                    eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>*)&local_50);
                (**(code**)(*(long*)*puVar3 + 24))(param_2, param_3, (long*)*puVar3, this, param_1);
                eastl::rbtree_iterator<
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
                operator++(
                    (rbtree_iterator<
                        eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                        eastl::pair<unsigned int const,
                                    eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                        eastl::pair<unsigned int const,
                                    eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>*)&local_50);
                bVar1 = eastl::operator!=((eastl*)&local_50, (hashtable_iterator_base*)&local_30, extraout_RDX);
            } while (bVar1);
        }
        new (&local_50) TouchPoint();
        puVar4 = (ulong*)eastl::vector<TouchPoint, eastl::allocator>::operator[](
            (vector<TouchPoint, eastl::allocator>*)&field_8, param_1);
        *puVar4 = local_50.field_0;
        puVar4[1] = local_50._8_8_;
        puVar4[2] = local_50.field_16;
        return 0;
    }

    // 0x100c9fc60, 80 bytes, placed by debug map only (low confidence)
    // GestureManager::ResetTouches()
    void GestureManager::ResetTouches() {
        TouchPoint* this_00;
        TouchPoint* pTVar1;

        field_0 = 0;
        this_00 = (TouchPoint*)(&field_8)->HeapBeginPtr();
        pTVar1 = (TouchPoint*)(&field_8)->end();
        for (; this_00 != pTVar1; this_00 = this_00 + 1) {
            this_00->Reset();
        }
    }

    // 0x100c9fcb0, 16 bytes, placed by debug map only (low confidence)
    // GestureManager::ResetGestures()
    void GestureManager::ResetGestures() {
        (&field_40)->clear();
    }

    // 0x100c9fd70, 16 bytes, inline, placed by class header (inline)
    // GestureManager::GetLastTouch(unsigned long) const
    void GestureManager::GetLastTouch(ulong param_1) {
        eastl::vector<TouchPoint, eastl::allocator>::operator[]((vector<TouchPoint, eastl::allocator>*)&field_8,
                                                                param_1);
    }

    // 0x100ca1220, 48 bytes, inline, placed by class header (inline)
    // TouchPoint::operator+=(TouchPoint const&)
    /* TouchPoint::TEMPNAMEPLACEHOLDERVALUE(TouchPoint const&)
    */

    TouchPoint* TouchPoint::operator+=(TouchPoint* param_1) {
        field_8 = field_8 + param_1->field_8;
        field_12 = field_12 + param_1->field_12;
        field_16 = field_16 + param_1->field_16;
        return this;
    }

    // 0x100ca12c0, 80 bytes, inline, placed by class header (inline)
    // TouchPoint::operator/=(int)
    /* TouchPoint::TEMPNAMEPLACEHOLDERVALUE(int) */

    TouchPoint* TouchPoint::operator/=(int param_1) {
        field_8 = field_8 * (1.0 / (float)param_1);
        field_12 = (1.0 / (float)param_1) * field_12;
        field_16 = field_16 / (ulong)(long)param_1;
        return this;
    }

} // namespace jag::input::gesture
