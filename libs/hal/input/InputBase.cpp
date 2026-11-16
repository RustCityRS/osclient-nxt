// libs/hal/input/InputBase.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.hal.input

#include "libs/oldscape/clientlib/input/InputHandler.h"

namespace jag::input {
    // 0x100c9d430, 1664 bytes, base-object destructor, placed by debug map only (low confidence)
    // InputHandler::~InputHandler()
    void InputHandler::~InputHandler() {
        char cVar1;

        cVar1 = EventListeners<std::function<bool(float, float, float, float)>>::empty(
            (EventListeners<std::function<bool(float, float, float, float)>>*)&field_8);
        if (cVar1 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("lMouseDown.empty()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/input/InputBase.cpp",
                      42, (char*)0);
        }
        cVar1 = EventListeners<std::function<bool(float, float, float, float)>>::empty(
            (EventListeners<std::function<bool(float, float, float, float)>>*)&field_104);
        if (cVar1 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("lMouseUp.empty()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/input/InputBase.cpp",
                      43, (char*)0);
        }
        cVar1 = EventListeners<std::function<bool(float, float, float, float)>>::empty(
            (EventListeners<std::function<bool(float, float, float, float)>>*)&field_392);
        if (cVar1 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("rMouseDown.empty()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/input/InputBase.cpp",
                      44, (char*)0);
        }
        cVar1 = EventListeners<std::function<bool(float, float, float, float)>>::empty(
            (EventListeners<std::function<bool(float, float, float, float)>>*)&field_488);
        if (cVar1 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("rMouseUp.empty()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/input/InputBase.cpp",
                      45, (char*)0);
        }
        cVar1 = EventListeners<std::function<bool(float, float, float, float)>>::empty(
            (EventListeners<std::function<bool(float, float, float, float)>>*)&field_200);
        if (cVar1 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("mMouseDown.empty()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/input/InputBase.cpp",
                      46, (char*)0);
        }
        cVar1 = EventListeners<std::function<bool(float, float, float, float)>>::empty(
            (EventListeners<std::function<bool(float, float, float, float)>>*)&field_296);
        if (cVar1 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("mMouseUp.empty()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/input/InputBase.cpp",
                      47, (char*)0);
        }
        cVar1 = EventListeners<std::function<bool(float, float, float, float)>>::empty(
            (EventListeners<std::function<bool(float, float, float, float)>>*)&field_584);
        if (cVar1 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("mouseMove.empty()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/input/InputBase.cpp",
                      48, (char*)0);
        }
        cVar1 = EventListeners<std::function<bool(float, float, float, float)>>::empty(
            (EventListeners<std::function<bool(float, float, float, float)>>*)&field_680);
        if (cVar1 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("mouseWheel.empty()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/input/InputBase.cpp",
                      49, (char*)0);
        }
        cVar1 = EventListeners<std::function<bool(float, float, float, float)>>::empty(
            (EventListeners<std::function<bool(float, float, float, float)>>*)&field_776);
        if (cVar1 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("keyDown.empty()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/input/InputBase.cpp",
                      50, (char*)0);
        }
        cVar1 = EventListeners<std::function<bool(float, float, float, float)>>::empty(
            (EventListeners<std::function<bool(float, float, float, float)>>*)&field_872);
        if (cVar1 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("keyUp.empty()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/input/InputBase.cpp",
                      51, (char*)0);
        }
        cVar1 = EventListeners<std::function<bool(float, float, float, float)>>::empty(
            (EventListeners<std::function<bool(float, float, float, float)>>*)&field_968);
        if (cVar1 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("keyChar.empty()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/input/InputBase.cpp",
                      52, (char*)0);
        }
        cVar1 = EventListeners<std::function<bool(float, float, float, float)>>::empty(
            (EventListeners<std::function<bool(float, float, float, float)>>*)&field_1160);
        if (cVar1 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("touchDown.empty()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/input/InputBase.cpp",
                      53, (char*)0);
        }
        cVar1 = EventListeners<std::function<bool(float, float, float, float)>>::empty(
            (EventListeners<std::function<bool(float, float, float, float)>>*)&field_1256);
        if (cVar1 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("touchMove.empty()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/input/InputBase.cpp",
                      54, (char*)0);
        }
        cVar1 = EventListeners<std::function<bool(float, float, float, float)>>::empty(
            (EventListeners<std::function<bool(float, float, float, float)>>*)&field_1352);
        if (cVar1 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("touchUp.empty()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/input/InputBase.cpp",
                      55, (char*)0);
        }
        cVar1 = EventListeners<std::function<bool(float, float, float, float)>>::empty(
            (EventListeners<std::function<bool(float, float, float, float)>>*)&field_1448);
        if (cVar1 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("touchCanceled.empty()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/input/InputBase.cpp",
                      56, (char*)0);
        }
        cVar1 = EventListeners<std::function<bool(float, float, float, float)>>::empty(
            (EventListeners<std::function<bool(float, float, float, float)>>*)&field_1544);
        if (cVar1 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("gamePadButton.empty()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/input/InputBase.cpp",
                      57, (char*)0);
        }
        cVar1 = EventListeners<std::function<bool(float, float, float, float)>>::empty(
            (EventListeners<std::function<bool(float, float, float, float)>>*)&field_1640);
        if (cVar1 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("gamePadAxis.empty()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/input/InputBase.cpp",
                      58, (char*)0);
        }
        cVar1 = EventListeners<std::function<bool(float, float, float, float)>>::empty(
            (EventListeners<std::function<bool(float, float, float, float)>>*)&field_1736);
        if (cVar1 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("gamePadTrigger.empty()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/input/InputBase.cpp",
                      59, (char*)0);
        }
        cVar1 = EventListeners<std::function<bool(float, float, float, float)>>::empty(
            (EventListeners<std::function<bool(float, float, float, float)>>*)&field_1832);
        if (cVar1 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("genericDeviceArrival.empty()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/input/InputBase.cpp",
                      60, (char*)0);
        }
        cVar1 = EventListeners<std::function<bool(float, float, float, float)>>::empty(
            (EventListeners<std::function<bool(float, float, float, float)>>*)&field_1928);
        if (cVar1 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("m_lowLevelMouseDown.empty()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/input/InputBase.cpp",
                      61, (char*)0);
        }
        cVar1 = EventListeners<std::function<bool(float, float, float, float)>>::empty(
            (EventListeners<std::function<bool(float, float, float, float)>>*)&field_2024);
        if (cVar1 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("m_lowLevelMouseMove.empty()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/input/InputBase.cpp",
                      62, (char*)0);
        }
        (&field_2304)->~weak_ptr();
        (&field_2216)->~GestureManager();
        EventListeners<std::function<bool(TextCommand)>>::~EventListeners(
            (EventListeners<std::function<bool(TextCommand)>>*)&field_2120);
        EventListeners<std::function<bool(int, int, int, int)>>::~EventListeners(
            (EventListeners<std::function<bool(int, int, int, int)>>*)&field_2024);
        EventListeners<std::function<bool(int, int, int, int)>>::~EventListeners(
            (EventListeners<std::function<bool(int, int, int, int)>>*)&field_1928);
        EventListeners<std::function<bool()>>::~EventListeners((EventListeners<std::function<bool()>>*)&field_1832);
        EventListeners<std::function<bool(unsigned int, GamepadTrigger, unsigned char)>>::~EventListeners(
            (EventListeners<std::function<bool(unsigned int, GamepadTrigger, unsigned char)>>*)&field_1736);
        EventListeners<std::function<bool(unsigned int, GamepadAxis, short)>>::~EventListeners(
            (EventListeners<std::function<bool(unsigned int, GamepadAxis, short)>>*)&field_1640);
        EventListeners<std::function<bool(unsigned int, GamepadButton, bool)>>::~EventListeners(
            (EventListeners<std::function<bool(unsigned int, GamepadButton, bool)>>*)&field_1544);
        EventListeners<std::function<bool(unsigned long, float, float)>>::~EventListeners(
            (EventListeners<std::function<bool(unsigned long, float, float)>>*)&field_1448);
        EventListeners<std::function<bool(unsigned long, float, float)>>::~EventListeners(
            (EventListeners<std::function<bool(unsigned long, float, float)>>*)&field_1352);
        EventListeners<std::function<bool(unsigned long, float, float)>>::~EventListeners(
            (EventListeners<std::function<bool(unsigned long, float, float)>>*)&field_1256);
        EventListeners<std::function<bool(unsigned long, float, float)>>::~EventListeners(
            (EventListeners<std::function<bool(unsigned long, float, float)>>*)&field_1160);
        EventListeners<std::function<bool(unsigned long, float, float)>>::~EventListeners(
            (EventListeners<std::function<bool(unsigned long, float, float)>>*)&field_1064);
        EventListeners<std::function<bool(int)>>::~EventListeners(
            (EventListeners<std::function<bool(int)>>*)&field_968);
        EventListeners<std::function<bool(int)>>::~EventListeners(
            (EventListeners<std::function<bool(int)>>*)&field_872);
        EventListeners<std::function<bool(int)>>::~EventListeners(
            (EventListeners<std::function<bool(int)>>*)&field_776);
        EventListeners<std::function<bool(float, float, float, float)>>::~EventListeners(
            (EventListeners<std::function<bool(float, float, float, float)>>*)&field_680);
        EventListeners<std::function<bool(float, float)>>::~EventListeners(
            (EventListeners<std::function<bool(float, float)>>*)&field_584);
        EventListeners<std::function<bool(float, float)>>::~EventListeners(
            (EventListeners<std::function<bool(float, float)>>*)&field_488);
        EventListeners<std::function<bool(float, float)>>::~EventListeners(
            (EventListeners<std::function<bool(float, float)>>*)&field_392);
        EventListeners<std::function<bool(float, float)>>::~EventListeners(
            (EventListeners<std::function<bool(float, float)>>*)&field_296);
        EventListeners<std::function<bool(float, float)>>::~EventListeners(
            (EventListeners<std::function<bool(float, float)>>*)&field_200);
        EventListeners<std::function<bool(float, float)>>::~EventListeners(
            (EventListeners<std::function<bool(float, float)>>*)&field_104);
        EventListeners<std::function<bool(float, float)>>::~EventListeners(
            (EventListeners<std::function<bool(float, float)>>*)&field_8);
    }

    // 0x100c9daf0, 16 bytes, complete-object destructor, placed by debug map only (low confidence)
    // InputHandler::~InputHandler(): jumps straight to the base-object destructor

    // 0x100c9db00, 288 bytes, placed by debug map only (low confidence)
    // InputHandler::Reset()
    void InputHandler::Reset() {
        EventListeners<std::function<bool(float, float, float, float)>>::Reset(
            (EventListeners<std::function<bool(float, float, float, float)>>*)&field_8);
        EventListeners<std::function<bool(float, float, float, float)>>::Reset(
            (EventListeners<std::function<bool(float, float, float, float)>>*)&field_104);
        EventListeners<std::function<bool(float, float, float, float)>>::Reset(
            (EventListeners<std::function<bool(float, float, float, float)>>*)&field_392);
        EventListeners<std::function<bool(float, float, float, float)>>::Reset(
            (EventListeners<std::function<bool(float, float, float, float)>>*)&field_488);
        EventListeners<std::function<bool(float, float, float, float)>>::Reset(
            (EventListeners<std::function<bool(float, float, float, float)>>*)&field_200);
        EventListeners<std::function<bool(float, float, float, float)>>::Reset(
            (EventListeners<std::function<bool(float, float, float, float)>>*)&field_296);
        EventListeners<std::function<bool(float, float, float, float)>>::Reset(
            (EventListeners<std::function<bool(float, float, float, float)>>*)&field_584);
        EventListeners<std::function<bool(float, float, float, float)>>::Reset(
            (EventListeners<std::function<bool(float, float, float, float)>>*)&field_680);
        EventListeners<std::function<bool(float, float, float, float)>>::Reset(
            (EventListeners<std::function<bool(float, float, float, float)>>*)&field_776);
        EventListeners<std::function<bool(float, float, float, float)>>::Reset(
            (EventListeners<std::function<bool(float, float, float, float)>>*)&field_872);
        EventListeners<std::function<bool(float, float, float, float)>>::Reset(
            (EventListeners<std::function<bool(float, float, float, float)>>*)&field_968);
        EventListeners<std::function<bool(float, float, float, float)>>::Reset(
            (EventListeners<std::function<bool(float, float, float, float)>>*)&field_1160);
        EventListeners<std::function<bool(float, float, float, float)>>::Reset(
            (EventListeners<std::function<bool(float, float, float, float)>>*)&field_1256);
        EventListeners<std::function<bool(float, float, float, float)>>::Reset(
            (EventListeners<std::function<bool(float, float, float, float)>>*)&field_1352);
        EventListeners<std::function<bool(float, float, float, float)>>::Reset(
            (EventListeners<std::function<bool(float, float, float, float)>>*)&field_1448);
        EventListeners<std::function<bool(float, float, float, float)>>::Reset(
            (EventListeners<std::function<bool(float, float, float, float)>>*)&field_1544);
        EventListeners<std::function<bool(float, float, float, float)>>::Reset(
            (EventListeners<std::function<bool(float, float, float, float)>>*)&field_1640);
        EventListeners<std::function<bool(float, float, float, float)>>::Reset(
            (EventListeners<std::function<bool(float, float, float, float)>>*)&field_1736);
        EventListeners<std::function<bool(float, float, float, float)>>::Reset(
            (EventListeners<std::function<bool(float, float, float, float)>>*)&field_1832);
        EventListeners<std::function<bool(float, float, float, float)>>::Reset(
            (EventListeners<std::function<bool(float, float, float, float)>>*)&field_1928);
        EventListeners<std::function<bool(float, float, float, float)>>::Reset(
            (EventListeners<std::function<bool(float, float, float, float)>>*)&field_2024);
        (&field_2216)->Reset();
    }

    // 0x100c9dc80, 144 bytes, base-object constructor, placed by debug map only (low confidence)
    // Input::Input()
    void Input::Input() {
        allocator local_28[8];

        field_0 = &PTR__Input_100f29d60;
        field_8 = (InputHandler*)0;
        m_pDefaultInputHandler = (InputHandler*)0;
        new (&field_24) std::recursive_mutex();
        eastl::allocator::allocator(local_28, "EASTL map");
        eastl::map<eastl::string, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>,
                   eastl::less<eastl::string>, eastl::allocator>::map((allocator*)&field_88);
        new (&field_136) eastl::list<eastl::string, eastl::allocator>();
        m_mouseX = 0.0;
        m_mouseY = 0.0;
    }

    // 0x100c9dd20, 16 bytes, complete-object constructor, placed by debug map only (low confidence)
    // Input::Input(): jumps straight to the base-object constructor

    // 0x100c9dd30, 64 bytes, base-object destructor, placed by debug map only (low confidence)
    // Input::~Input()
    void Input::~Input() {
        field_0 = &PTR__Input_100f29d60;
        (&field_136)->~list();
        (&field_88)->~map();
        (&field_24)->~recursive_mutex();
    }

    // 0x100c9dd80, 16 bytes, complete-object destructor, placed by debug map only (low confidence)
    // Input::~Input(): jumps straight to the base-object destructor

    // 0x100c9dd90, 32 bytes, deleting destructor, placed by debug map only (low confidence)
    // Input::~Input()
    void Input::~Input() {
        ~Input(this);
        operator_delete(this);
    }

    // 0x100c9ddb0, 16 bytes, placed by debug map only (low confidence)
    // Input::Init()
    undefined1 Input::Init() {
        return 1;
    }

    // 0x100c9ddc0, 16 bytes, placed by debug map only (low confidence)
    // Input::Shutdown()
    void Input::Shutdown() {
        field_8 = (InputHandler*)0;
    }

    // 0x100c9ddd0, 32 bytes, placed by debug map only (low confidence)
    // Input::SetDefaultInputHandler(InputHandler*)
    void Input::SetDefaultInputHandler(InputHandler* param_1) {
        m_pDefaultInputHandler = param_1;
        *(Input**)param_1 = this;
        if (field_8 == (InputHandler*)0) {
            field_8 = param_1;
            *(Input**)param_1 = this;
            return;
        }
    }

    // 0x100c9ddf0, 160 bytes, placed by debug map only (low confidence)
    // Input::RegisterInputHandler(char const*, InputHandler*)
    void Input::RegisterInputHandler(char* param_1, InputHandler* param_2) {
        undefined8* puVar1;
        eastl::string local_50[32];
        allocator local_30[8];
        scoped_lock<std::recursive_mutex> local_28[8];

        *(Input**)param_2 = this;
        std::scoped_lock<std::recursive_mutex>::scoped_lock(local_28, (recursive_mutex*)&field_24);
        eastl::allocator::allocator(local_30, "EASTL basic_string");
        eastl::string::basic_string(local_50, param_1, local_30);
        puVar1 = (undefined8*)
            eastl::map<eastl::string, InputHandler*, eastl::less<eastl::string>, eastl::allocator>::operator[](
                (map<eastl::string, InputHandler*, eastl::less<eastl::string>, eastl::allocator>*)&field_88,
                (basic_string*)local_50);
        *puVar1 = param_2;
        eastl::string::~basic_string(local_50);
        std::scoped_lock<std::recursive_mutex>::~scoped_lock(local_28);
    }

    // 0x100c9df50, 144 bytes, placed by debug map only (low confidence)
    // Input::UnregisterInputHandler(char const*)
    void Input::UnregisterInputHandler(char* param_1) {
        eastl::string local_48[32];
        allocator local_28[8];
        scoped_lock<std::recursive_mutex> local_20[8];

        std::scoped_lock<std::recursive_mutex>::scoped_lock(local_20, (recursive_mutex*)&field_24);
        eastl::allocator::allocator(local_28, "EASTL basic_string");
        eastl::string::basic_string(local_48, param_1, local_28);
        eastl::map<eastl::string, InputHandler*, eastl::less<eastl::string>, eastl::allocator>::erase(
            (basic_string*)&field_88);
        eastl::string::~basic_string(local_48);
        std::scoped_lock<std::recursive_mutex>::~scoped_lock(local_20);
    }

    // 0x100c9e060, 336 bytes, placed by debug map only (low confidence)
    // Input::SelectInputHandler(char const*)
    void Input::SelectInputHandler(char* param_1) {
        InputHandler* pIVar1;
        bool bVar2;
        long lVar3;
        hashtable_iterator_base* extraout_RDX;
        eastl::string local_60[32];
        basic_string local_40[8];
        scoped_lock<std::recursive_mutex> local_38[8];
        allocator local_30[8];

        if (param_1 != (char*)0) {
            std::scoped_lock<std::recursive_mutex>::scoped_lock(local_38, (recursive_mutex*)&field_24);
            eastl::allocator::allocator(local_30, "EASTL basic_string");
            eastl::string::basic_string(local_60, param_1, local_30);
            eastl::rbtree<eastl::string, eastl::pair<eastl::stringconst, InputHandler*>, eastl::less<eastl::string>,
                          eastl::allocator, eastl::use_first<eastl::pair<eastl::stringconst, InputHandler*>>, true,
                          true>::find(local_40);
            eastl::string::~basic_string(local_60);
            eastl::rbtree<
                unsigned int,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                eastl::less<unsigned int>, eastl::allocator,
                eastl::use_first<
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>>,
                true, true>::end();
            bVar2 = eastl::operator!=((eastl*)local_40, (hashtable_iterator_base*)local_60, extraout_RDX);
            if (bVar2) {
                lVar3 = eastl::rbtree_iterator<
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
                operator*(
                    (rbtree_iterator<
                        eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                        eastl::pair<unsigned int const,
                                    eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                        eastl::pair<unsigned int const,
                                    eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>*)local_40);
                pIVar1 = *(InputHandler**)(lVar3 + 32);
                if (pIVar1 != field_8) {
                    field_8 = pIVar1;
                    *(Input**)pIVar1 = this;
                    eastl::allocator::allocator(local_30, "EASTL basic_string");
                    eastl::string::basic_string(local_60, param_1, local_30);
                    (&field_136, (basic_string*)local_60)->push_back();
                    eastl::string::~basic_string(local_60);
                }
                std::scoped_lock<std::recursive_mutex>::~scoped_lock(local_38);
                if (bVar2) {
                    return;
                }
            } else {
                std::scoped_lock<std::recursive_mutex>::~scoped_lock(local_38);
            }
        }
        pIVar1 = m_pDefaultInputHandler;
        if (field_8 != pIVar1) {
            field_8 = pIVar1;
            *(Input**)pIVar1 = this;
        }
    }

    // 0x100c9e2f0, 352 bytes, placed by debug map only (low confidence)
    // Input::DeselectInputHandler(char const*)
    void Input::DeselectInputHandler(char* param_1) {
        undefined1* this_00;
        InputHandler* pIVar1;
        char cVar2;
        bool bVar3;
        long lVar4;
        hashtable_iterator_base* extraout_RDX;
        undefined1 auVar5[16];
        reverse_iterator local_50[8];
        list<eastl::string, eastl::allocator> local_48[8];
        scoped_lock<std::recursive_mutex> local_40[8];
        list<eastl::string, eastl::allocator> local_38[8];

        if (param_1 != (char*)0) {
            std::scoped_lock<std::recursive_mutex>::scoped_lock(local_40, (recursive_mutex*)&field_24);
            this_00 = &field_136;
            cVar2 = this_00->empty();
            if (cVar2 == '\0') {
                eastl::list<eastl::string, eastl::allocator>::rbegin(local_38);
                while (true) {
                    eastl::list<eastl::string, eastl::allocator>::rend(local_48);
                    bVar3 = eastl::operator!=((reverse_iterator*)local_38, (reverse_iterator*)local_48);
                    if (!bVar3)
                        break;
                    auVar5 = eastl::
                        reverse_iterator<eastl::ListIterator<eastl::string, eastl::string*, eastl::string&>>::operator*(
                            (reverse_iterator<eastl::ListIterator<eastl::string, eastl::string*, eastl::string&>>*)
                                local_38);
                    bVar3 = eastl::operator==(auVar5._0_8_, (basic_string*)param_1, auVar5._8_8_);
                    if (bVar3) {
                        eastl::reverse_iterator<
                            eastl::ListIterator<eastl::string, eastl::stringconst*, eastl::stringconst&>>::
                            reverse_iterator<eastl::ListIterator<eastl::string, eastl::string*, eastl::string&>>(
                                local_50);
                        eastl::list<eastl::string, eastl::allocator>::erase(local_48, this_00, local_50);
                        break;
                    }
                    eastl::reverse_iterator<eastl::ListIterator<eastl::string, eastl::string*, eastl::string&>>::
                    operator++((
                        reverse_iterator<eastl::ListIterator<eastl::string, eastl::string*, eastl::string&>>*)local_38);
                }
            }
            cVar2 = this_00->empty();
            if (cVar2 == '\0') {
                eastl::list<eastl::string, eastl::allocator>::back();
                eastl::rbtree<eastl::string, eastl::pair<eastl::stringconst, InputHandler*>, eastl::less<eastl::string>,
                              eastl::allocator, eastl::use_first<eastl::pair<eastl::stringconst, InputHandler*>>, true,
                              true>::find((basic_string*)local_38);
                eastl::rbtree<
                    unsigned int,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                    eastl::less<unsigned int>, eastl::allocator,
                    eastl::use_first<eastl::pair<unsigned int const,
                                                 eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>>,
                    true, true>::end();
                bVar3 = eastl::operator!=((eastl*)local_38, (hashtable_iterator_base*)local_48, extraout_RDX);
                if (bVar3) {
                    lVar4 = eastl::rbtree_iterator<
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
                    pIVar1 = *(InputHandler**)(lVar4 + 32);
                    field_8 = pIVar1;
                    *(Input**)pIVar1 = this;
                    std::scoped_lock<std::recursive_mutex>::~scoped_lock(local_40);
                    return;
                }
            }
            std::scoped_lock<std::recursive_mutex>::~scoped_lock(local_40);
        }
        field_8 = m_pDefaultInputHandler;
        *(Input**)m_pDefaultInputHandler = this;
    }

    // 0x100c9e500, 240 bytes, placed by debug map only (low confidence)
    // Input::OnLMouseDown(float, float)
    void Input::OnLMouseDown(float param_1, float param_2) {
        long lVar1;
        bool bVar2;
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base* phVar4;
        hashtable_iterator_base* extraout_RDX_00;
        eastl local_48[8];
        hashtable_iterator_base local_40[8];
        scoped_lock<std::recursive_mutex> local_38[8];

        InputState::OnMouseDown(0);
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
            LAB_100c9e59e:
                if (field_8 != (InputHandler*)0) {
                    (field_8, param_1, param_2)->OnLMouseDown();
                }
            LAB_100c9e5b6:
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
            if ((*(InputHandler**)(lVar1 + 32))->OnLMouseDown(param_1, param_2) != '\0') {
                if (bVar2)
                    goto LAB_100c9e5b6;
                goto LAB_100c9e59e;
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

} // namespace jag::input

namespace jag::input::gesture {
    // 0x100c9dc60, 32 bytes, placed by debug map only (low confidence)
    // GestureManager::Reset()
    void GestureManager::Reset() {
        ResetTouches(this);
        ResetGestures(this);
    }

} // namespace jag::input::gesture
