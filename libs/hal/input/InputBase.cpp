// libs/hal/input/InputBase.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.hal.input

#include "libs/oldscape/clientlib/input/InputHandler.h"

namespace jag::input {
    // 0x100c9d430
    InputHandler::~InputHandler() {

        if (!(field_8.empty())) {
            LogAssert("lMouseDown.empty()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/input/InputBase.cpp",
                      42, nullptr);
        }
        if (!(field_104.empty())) {
            LogAssert("lMouseUp.empty()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/input/InputBase.cpp",
                      43, nullptr);
        }
        if (!(field_392.empty())) {
            LogAssert("rMouseDown.empty()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/input/InputBase.cpp",
                      44, nullptr);
        }
        if (!(field_488.empty())) {
            LogAssert("rMouseUp.empty()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/input/InputBase.cpp",
                      45, nullptr);
        }
        if (!(field_200.empty())) {
            LogAssert("mMouseDown.empty()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/input/InputBase.cpp",
                      46, nullptr);
        }
        if (!(field_296.empty())) {
            LogAssert("mMouseUp.empty()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/input/InputBase.cpp",
                      47, nullptr);
        }
        if (!(field_584.empty())) {
            LogAssert("mouseMove.empty()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/input/InputBase.cpp",
                      48, nullptr);
        }
        if (!(field_680.empty())) {
            LogAssert("mouseWheel.empty()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/input/InputBase.cpp",
                      49, nullptr);
        }
        if (!(field_776.empty())) {
            LogAssert("keyDown.empty()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/input/InputBase.cpp",
                      50, nullptr);
        }
        if (!(field_872.empty())) {
            LogAssert("keyUp.empty()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/input/InputBase.cpp",
                      51, nullptr);
        }
        if (!(field_968.empty())) {
            LogAssert("keyChar.empty()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/input/InputBase.cpp",
                      52, nullptr);
        }
        if (!(field_1160.empty())) {
            LogAssert("touchDown.empty()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/input/InputBase.cpp",
                      53, nullptr);
        }
        if (!(field_1256.empty())) {
            LogAssert("touchMove.empty()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/input/InputBase.cpp",
                      54, nullptr);
        }
        if (!(field_1352.empty())) {
            LogAssert("touchUp.empty()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/input/InputBase.cpp",
                      55, nullptr);
        }
        if (!(field_1448.empty())) {
            LogAssert("touchCanceled.empty()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/input/InputBase.cpp",
                      56, nullptr);
        }
        if (!(field_1544.empty())) {
            LogAssert("gamePadButton.empty()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/input/InputBase.cpp",
                      57, nullptr);
        }
        if (!(field_1640.empty())) {
            LogAssert("gamePadAxis.empty()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/input/InputBase.cpp",
                      58, nullptr);
        }
        if (!(field_1736.empty())) {
            LogAssert("gamePadTrigger.empty()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/input/InputBase.cpp",
                      59, nullptr);
        }
        if (!(field_1832.empty())) {
            LogAssert("genericDeviceArrival.empty()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/input/InputBase.cpp",
                      60, nullptr);
        }
        if (!(field_1928.empty())) {
            LogAssert("m_lowLevelMouseDown.empty()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/input/InputBase.cpp",
                      61, nullptr);
        }
        if (!(field_2024.empty())) {
            LogAssert("m_lowLevelMouseMove.empty()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/input/InputBase.cpp",
                      62, nullptr);
        }
        field_2304.~weak_ptr();
        field_2216.~GestureManager();
        field_2120.~EventListeners();
        field_2024.~EventListeners();
        field_1928.~EventListeners();
        field_1832.~EventListeners();
        field_1736.~EventListeners();
        field_1640.~EventListeners();
        field_1544.~EventListeners();
        field_1448.~EventListeners();
        field_1352.~EventListeners();
        field_1256.~EventListeners();
        field_1160.~EventListeners();
        field_1064.~EventListeners();
        field_968.~EventListeners();
        field_872.~EventListeners();
        field_776.~EventListeners();
        field_680.~EventListeners();
        field_584.~EventListeners();
        field_488.~EventListeners();
        field_392.~EventListeners();
        field_296.~EventListeners();
        field_200.~EventListeners();
        field_104.~EventListeners();
        field_8.~EventListeners();
    }

    // 0x100c9db00
    void InputHandler::Reset() {
        field_8.Reset();
        field_104.Reset();
        field_392.Reset();
        field_488.Reset();
        field_200.Reset();
        field_296.Reset();
        field_584.Reset();
        field_680.Reset();
        field_776.Reset();
        field_872.Reset();
        field_968.Reset();
        field_1160.Reset();
        field_1256.Reset();
        field_1352.Reset();
        field_1448.Reset();
        field_1544.Reset();
        field_1640.Reset();
        field_1736.Reset();
        field_1832.Reset();
        field_1928.Reset();
        field_2024.Reset();
        field_2216.Reset();
    }

    // 0x100c9dc80
    Input::Input() : field_8(nullptr), field_16(nullptr) {

        new (&field_88) eastl::map(local_28);
        new (&field_136) eastl::list<eastl::string>();
        m_mouseX = 0.0;
        m_mouseY = 0.0;
    }

    // 0x100c9dd30
    Input::~Input() {
        field_136.~list();
        field_88.~map();
        (&field_24)->~recursive_mutex();
    }

    // 0x100c9ddb0
    void Input::Init() {
        return 1;
    }

    // 0x100c9ddc0
    void Input::Shutdown() {
        field_8 = nullptr;
    }

    // 0x100c9ddd0
    void Input::SetDefaultInputHandler(InputHandler* inputHandler) {
        field_16 = inputHandler;
        *(Input**)inputHandler = this;
        if (field_8 == nullptr) {
            field_8 = inputHandler;
            *(Input**)inputHandler = this;
            return;
        }
    }

    // 0x100c9ddf0
    void Input::RegisterInputHandler(const char* str, InputHandler* inputHandler) {
        scoped_lock<std::recursive_mutex> local_28;

        *(Input**)inputHandler = this;
        new (&local_28) std::scoped_lock(field_24);
        eastl::string local_50(str);
        uint64_t* puVar1 = &field_88[local_50];
        *puVar1 = inputHandler;
    }

    // 0x100c9df50
    void Input::UnregisterInputHandler(const char* str) {
        scoped_lock<std::recursive_mutex> local_20;

        new (&local_20) std::scoped_lock(field_24);
        eastl::string local_48(str);
        field_88.erase(local_48);
    }

    // 0x100c9e060
    void Input::SelectInputHandler(const char* str) {
        InputHandler* pIVar1;
        bool cVar2;
        long lVar3;
        eastl::string local_60;
        ReturnValue local_40;
        scoped_lock<std::recursive_mutex> local_38;

        if (str != nullptr) {
            local_38 = std::scoped_lock(field_24);
            local_60 = eastl::string(str);
            local_40 = field_88.find(local_60);
            local_60.end();
            cVar2 = local_40 != local_60;
            if (!cVar2) {
            } else {
                lVar3 = *local_40;
                pIVar1 = *(InputHandler**)(lVar3 + 32);
                if (pIVar1 != field_8) {
                    field_8 = pIVar1;
                    *(Input**)pIVar1 = this;
                    local_60 = eastl::string(str);
                    field_136.push_back(local_60);
                }
                if (cVar2) {
                    return;
                }
            }
        }
        pIVar1 = field_16;
        if (field_8 != pIVar1) {
            field_8 = pIVar1;
            *(Input**)pIVar1 = this;
        }
    }

    // 0x100c9e2f0
    void Input::DeselectInputHandler(const char* str) {
        uint8_t* this_00;
        InputHandler* pIVar1;
        eastl* this_01;
        eastl::string* str_00;
        long lVar4;
        reverse_iterator<eastl::ListIterator<eastl::string, eastl::stringconst*, eastl::stringconst&>> local_50[8];
        ReturnValue local_48;
        scoped_lock<std::recursive_mutex> local_40;
        ReturnValue local_38;

        if (str != nullptr) {
            local_40 = std::scoped_lock(field_24);
            this_00 = &field_136;
            if (!(this_00->empty())) {
                local_38 = this_00->rbegin();
                while (true) {
                    local_48 = this_00->rend();
                    if (!local_38 != local_48)
                        break;
                    this_01 = (eastl*)*local_38;
                    if (*this_01 == *str) {
                        eastl::reverse_iterator<
                            eastl::ListIterator<eastl::string, eastl::stringconst*, eastl::stringconst&>>::
                            reverse_iterator<eastl::ListIterator<eastl::string, eastl::string*, eastl::string&>>(
                                local_50,
                                (reverse_iterator<
                                    eastl::ListIterator<eastl::string, eastl::string*, eastl::string&> _>*)&local_38);
                        local_48 = this_00->erase(local_50);
                        break;
                    }
                    ++local_38;
                }
            }
            if (!(this_00->empty())) {
                str_00 = (eastl::string*)this_00->back();
                local_38 = field_88.find(*str_00);
                local_48.end();
                if (local_38 != local_48) {
                    lVar4 = *local_38;
                    pIVar1 = *(InputHandler**)(lVar4 + 32);
                    field_8 = pIVar1;
                    *(Input**)pIVar1 = this;
                    return;
                }
            }
        }
        field_8 = field_16;
        *(Input**)field_16 = this;
    }

    // 0x100c9e500
    void Input::OnLMouseDown(float arg1, float arg2) {
        bool cVar1;
        long lVar3;
        MouseButton in_ESI;
        rbtree<unsigned int, eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>,
               eastl::less<unsigned int>, eastl::allocator,
               eastl::use_first<eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>>, true,
               true>
            local_40;
        scoped_lock<std::recursive_mutex> local_38;

        nullptr->OnMouseDown(in_ESI, arg1, arg2);
        new (&local_38) std::scoped_lock(field_24);
        auto local_48 = field_88.rbegin();
        local_40.end();
        do {
            cVar1 = local_48 != local_40;
            if (!cVar1) {
            LAB_100c9e59e:
                if (field_8 != nullptr) {
                    field_8->OnLMouseDown(arg1, arg2);
                }
            LAB_100c9e5b6:
                return;
            }
            lVar3 = *local_48;
            if ((*(InputHandler**)(lVar3 + 32))->OnLMouseDown(arg1, arg2) != '\0') {
                if (cVar1)
                    goto LAB_100c9e5b6;
                goto LAB_100c9e59e;
            }
            ++local_48;
        } while (true);
    }

} // namespace jag::input

namespace jag::input::gesture {
    // 0x100c9dc60
    void GestureManager::Reset() {
        ResetTouches();
        ResetGestures();
    }

} // namespace jag::input::gesture
