// libs/jtl/EventListeners.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag {
    template <
        typename...> // 14 instantiations, e.g. <std::function<bool ()> >, <std::function<bool (float, float)> >, <std::function<bool (float, float, float, float)> >
    class EventListeners {
    public:
        EventListeners();
        ~EventListeners();
        void Register(std::function<bool(int)>* callback);
        void Register(std::function<bool(input::TextCommand)>* callback);
        void Unregister(std::function<bool(int)>* callback);
        void Register(std::function<bool(float, float, float, float)>* callback);
        void Register(std::function<bool(int, int, int, int)>* callback);
        void Register(std::function<bool(unsigned long, float, float)>* callback);
        void Unregister(std::function<bool(float, float, float, float)>* callback);
        void Unregister(std::function<bool(int, int, int, int)>* callback);
        void Unregister(std::function<bool(unsigned long, float, float)>* callback);
        void Register(std::function<bool(float, float)>* callback);
        void Unregister(std::function<bool(float, float)>* callback);
        bool CallListeners<Window::SetSize(float, float)::$_0>(Window::SetSize(float, float)::$_0 arg1) const;
        void Register(std::function<bool()>* callback);
        void Unregister(std::function<bool()>* callback);
        bool CallListeners<Window::Update()::$_1>(Window::Update()::$_1 arg1) const;
        bool CallListeners < Window::OnClose()::$_3::operator()(BaseApp*) const ::{
            lambda(std::function<bool()>&) #1
        }
        > (Window::OnClose()::$_3::operator()(BaseApp*) const ::{ lambda(std::function<bool()>&) #1 } arg1) const;
        void Register(std::function<bool(input::gesture::GestureEvent_Swipe const&)>* callback);
        void Register(std::function<bool(unsigned int, input::GamepadAxis, short)>* callback);
        void Register(std::function<bool(unsigned int, input::GamepadButton, bool)>* callback);
        void Register(std::function<bool(unsigned int, input::GamepadTrigger, unsigned char)>* callback);
        uint32_t empty() const;
        void Reset();
        bool CallListeners < input::InputHandler::OnLMouseDown(float, float)::{
            lambda(std::function<bool(float, float)>&) #1
        }
        > (input::InputHandler::OnLMouseDown(float, float)::{
            lambda(std::function<bool(float, float)>&) #1
        } arg1) const;
        bool CallListeners < input::InputHandler::OnLMouseUp(float, float)::{
            lambda(std::function<bool(float, float)> const&) #1
        }
        > (input::InputHandler::OnLMouseUp(float, float)::{
            lambda(std::function<bool(float, float)> const&) #1
        } arg1) const;
        bool CallListeners < input::InputHandler::OnMMouseDown(float, float)::{
            lambda(std::function<bool(float, float)>&) #1
        }
        > (input::InputHandler::OnMMouseDown(float, float)::{
            lambda(std::function<bool(float, float)>&) #1
        } arg1) const;
        bool CallListeners < input::InputHandler::OnMMouseUp(float, float)::{
            lambda(std::function<bool(float, float)> const&) #1
        }
        > (input::InputHandler::OnMMouseUp(float, float)::{
            lambda(std::function<bool(float, float)> const&) #1
        } arg1) const;
        bool CallListeners < input::InputHandler::OnRMouseDown(float, float)::{
            lambda(std::function<bool(float, float)> const&) #1
        }
        > (input::InputHandler::OnRMouseDown(float, float)::{
            lambda(std::function<bool(float, float)> const&) #1
        } arg1) const;
        bool CallListeners < input::InputHandler::OnRMouseUp(float, float)::{
            lambda(std::function<bool(float, float)> const&) #1
        }
        > (input::InputHandler::OnRMouseUp(float, float)::{
            lambda(std::function<bool(float, float)> const&) #1
        } arg1) const;
        bool CallListeners < input::InputHandler::OnMouseMove(float, float)::{
            lambda(std::function<bool(float, float)> const&) #1
        }
        > (input::InputHandler::OnMouseMove(float, float)::{
            lambda(std::function<bool(float, float)> const&) #1
        } arg1) const;
        bool CallListeners < input::InputHandler::OnMouseWheel(float, float, float, float)::{
            lambda(std::function<bool(float, float, float, float)> const&) #1
        }
        > (input::InputHandler::OnMouseWheel(float, float, float, float)::{
            lambda(std::function<bool(float, float, float, float)> const&) #1
        } arg1) const;
        bool CallListeners < input::InputHandler::OnLowLevelMouseDown(int, int, int, int)::{
            lambda(std::function<bool(int, int, int, int)>&) #1
        }
        > (input::InputHandler::OnLowLevelMouseDown(int, int, int, int)::{
            lambda(std::function<bool(int, int, int, int)>&) #1
        } arg1) const;
        bool CallListeners < input::InputHandler::OnLowLevelMouseMove(int, int, int, int)::{
            lambda(std::function<bool(int, int, int, int)>&) #1
        }
        > (input::InputHandler::OnLowLevelMouseMove(int, int, int, int)::{
            lambda(std::function<bool(int, int, int, int)>&) #1
        } arg1) const;
        bool CallListeners < input::InputHandler::OnKeyDown(int)::{
            lambda(std::function<bool(int)> const&) #1
        }
        > (input::InputHandler::OnKeyDown(int)::{ lambda(std::function<bool(int)> const&) #1 } arg1) const;
        bool CallListeners < input::InputHandler::OnKeyUp(int)::{
            lambda(std::function<bool(int)> const&) #1
        }
        > (input::InputHandler::OnKeyUp(int)::{ lambda(std::function<bool(int)> const&) #1 } arg1) const;
        bool CallListeners < input::InputHandler::OnKeyChar(int)::{
            lambda(std::function<bool(int)> const&) #1
        }
        > (input::InputHandler::OnKeyChar(int)::{ lambda(std::function<bool(int)> const&) #1 } arg1) const;
        bool CallListeners < input::InputHandler::OnFirstTouchDown(unsigned long, float, float)::{
            lambda(std::function<bool(unsigned long, float, float)> const&) #1
        }
        > (input::InputHandler::OnFirstTouchDown(unsigned long, float, float)::{
            lambda(std::function<bool(unsigned long, float, float)> const&) #1
        } arg1) const;
        bool CallListeners < input::InputHandler::OnTouchDown(unsigned long, float, float)::{
            lambda(std::function<bool(unsigned long, float, float)> const&) #1
        }
        > (input::InputHandler::OnTouchDown(unsigned long, float, float)::{
            lambda(std::function<bool(unsigned long, float, float)> const&) #1
        } arg1) const;
        bool CallListeners < input::InputHandler::OnTouchMove(unsigned long, float, float)::{
            lambda(std::function<bool(unsigned long, float, float)> const&) #1
        }
        > (input::InputHandler::OnTouchMove(unsigned long, float, float)::{
            lambda(std::function<bool(unsigned long, float, float)> const&) #1
        } arg1) const;
        bool CallListeners < input::InputHandler::OnTouchUp(unsigned long, float, float)::{
            lambda(std::function<bool(unsigned long, float, float)> const&) #1
        }
        > (input::InputHandler::OnTouchUp(unsigned long, float, float)::{
            lambda(std::function<bool(unsigned long, float, float)> const&) #1
        } arg1) const;
        bool CallListeners < input::InputHandler::OnTouchCanceled(unsigned long, float, float)::{
            lambda(std::function<bool(unsigned long, float, float)> const&) #1
        }
        > (input::InputHandler::OnTouchCanceled(unsigned long, float, float)::{
            lambda(std::function<bool(unsigned long, float, float)> const&) #1
        } arg1) const;
        bool CallListeners < input::InputHandler::OnTextCommand(input::TextCommand)::{
            lambda(std::function<bool(input::TextCommand)>&) #1
        }
        > (input::InputHandler::OnTextCommand(input::TextCommand)::{
            lambda(std::function<bool(input::TextCommand)>&) #1
        } arg1) const;
        bool CallListeners <
            input::gesture::Gesture<input::gesture::TouchPoint>::RunEvent(input::gesture::TouchPoint const&)::{
            lambda(std::function<bool(input::gesture::TouchPoint const&)> const&) #1
        }
        > (input::gesture::Gesture<input::gesture::TouchPoint>::RunEvent(input::gesture::TouchPoint const&)::{
            lambda(std::function<bool(input::gesture::TouchPoint const&)> const&) #1
        } arg1) const;
        bool CallListeners < input::gesture::Gesture<input::gesture::GestureEvent_Pinch>::RunEvent(
                                 input::gesture::GestureEvent_Pinch const&)::{
            lambda(std::function<bool(input::gesture::GestureEvent_Pinch const&)> const&) #1
        }
        > (input::gesture::Gesture<input::gesture::GestureEvent_Pinch>::RunEvent(
              input::gesture::GestureEvent_Pinch const&)::{
            lambda(std::function<bool(input::gesture::GestureEvent_Pinch const&)> const&) #1
        } arg1) const;
        bool CallListeners<input::gesture::Gesture<input::gesture::GestureEvent_Swipe>::RunEvent(
            input::gesture::GestureEvent_Swipe const&)::{
            lambda(std::function<bool(input::gesture::GestureEvent_Swipe const&)> const&) #1}>(
            input::gesture::Gesture<input::gesture::GestureEvent_Swipe>::RunEvent(
                input::gesture::GestureEvent_Swipe const&)::{
                lambda(std::function<bool(input::gesture::GestureEvent_Swipe const&)> const&) #1} arg1) const;
    };

    // 0x100199460
    EventListeners<std::function<bool(float, float, float, float)>>::EventListeners()
        : eastl::vector<std::function<bool(float, float, float, float)>*>() {
        new ((this + 32)) std::mutex();
    }

    // 0x100199500
    EventListeners<std::function<bool(int)>>::EventListeners() : eastl::vector<std::function<bool(int)>*>() {
        new ((this + 32)) std::mutex();
    }

    // 0x1001995a0
    EventListeners<std::function<bool(unsigned long, float, float)>>::EventListeners()
        : eastl::vector<std::function<bool(unsigned long, float, float)>*>() {
        new ((this + 32)) std::mutex();
    }

    // 0x100199640
    EventListeners<std::function<bool(unsigned int, input::GamepadButton, bool)>>::EventListeners()
        : eastl::vector<std::function<bool(unsigned int, input::GamepadButton, bool)>*>() {
        new ((this + 32)) std::mutex();
    }

    // 0x1001996e0
    EventListeners<std::function<bool(unsigned int, input::GamepadAxis, short)>>::EventListeners()
        : eastl::vector<std::function<bool(unsigned int, input::GamepadAxis, short)>*>() {
        new ((this + 32)) std::mutex();
    }

    // 0x100199780
    EventListeners<std::function<bool(unsigned int, input::GamepadTrigger, unsigned char)>>::EventListeners()
        : eastl::vector<std::function<bool(unsigned int, input::GamepadTrigger, unsigned char)>*>() {
        new ((this + 32)) std::mutex();
    }

    // 0x100199820
    EventListeners<std::function<bool(int, int, int, int)>>::EventListeners()
        : eastl::vector<std::function<bool(int, int, int, int)>*>() {
        new ((this + 32)) std::mutex();
    }

    // 0x1001998c0
    EventListeners<std::function<bool(input::TextCommand)>>::EventListeners()
        : eastl::vector<std::function<bool(input::TextCommand)>*>() {
        new ((this + 32)) std::mutex();
    }

    // 0x100199ca0
    EventListeners<std::function<bool(input::TextCommand)>>::~EventListeners() {
        ((this + 32))->~mutex();
    }

    // 0x100199d20
    EventListeners<std::function<bool(int, int, int, int)>>::~EventListeners() {
        ((this + 32))->~mutex();
    }

    // 0x100199da0
    EventListeners<std::function<bool(unsigned int, input::GamepadTrigger, unsigned char)>>::~EventListeners() {
        ((this + 32))->~mutex();
    }

    // 0x100199e20
    EventListeners<std::function<bool(unsigned int, input::GamepadAxis, short)>>::~EventListeners() {
        ((this + 32))->~mutex();
    }

    // 0x100199ea0
    EventListeners<std::function<bool(unsigned int, input::GamepadButton, bool)>>::~EventListeners() {
        ((this + 32))->~mutex();
    }

    // 0x100199f20
    EventListeners<std::function<bool(unsigned long, float, float)>>::~EventListeners() {
        ((this + 32))->~mutex();
    }

    // 0x100199fa0
    EventListeners<std::function<bool(int)>>::~EventListeners() {
        ((this + 32))->~mutex();
    }

    // 0x10019a020
    EventListeners<std::function<bool(float, float, float, float)>>::~EventListeners() {
        ((this + 32))->~mutex();
    }

    // 0x100396f30
    void EventListeners<std::function<bool(int)>>::Register(std::function<bool(int)>* callback) {
        function<bool_(int, int, int, int)>** ppfVar1;
        function<bool_(int, int, int, int)>** ppfVar2;
        Logger* this_00;
        function<bool_(int)>* local_28;

        local_28 = callback;
        scoped_lock<std::mutex> local_20(*((this + 32)));
        ppfVar1 = (function<bool_(int, int, int, int)>**)HeapBeginPtr();
        ppfVar2 = (function<bool_(int, int, int, int)>**)end();
        ppfVar1 = eastl::find<std::function<bool(input::TextCommand)>**, std::function<bool(input::TextCommand)>*>(
            ppfVar1, ppfVar2, local_28);
        ppfVar2 = (function<bool_(int, int, int, int)>**)end();
        if (ppfVar1 == ppfVar2) {
            push_back(local_28);
        } else {
            this_00 = logger::default_logger();
            this_00->Log(false, 3,
                         "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/EventListeners.h",
                         23, "Attempting to register the same event listener multiple times");
        }
    }

    // 0x100397170
    void EventListeners<std::function<bool(input::TextCommand)>>::Register(
        std::function<bool(input::TextCommand)>* callback) {
        function<bool_(int, int, int, int)>** ppfVar1;
        function<bool_(int, int, int, int)>** ppfVar2;
        Logger* this_00;
        function<bool_(input::TextCommand)>* local_28;

        local_28 = callback;
        scoped_lock<std::mutex> local_20(*((this + 32)));
        ppfVar1 = (function<bool_(int, int, int, int)>**)HeapBeginPtr();
        ppfVar2 = (function<bool_(int, int, int, int)>**)end();
        ppfVar1 = eastl::find<std::function<bool(input::TextCommand)>**, std::function<bool(input::TextCommand)>*>(
            ppfVar1, ppfVar2, local_28);
        ppfVar2 = (function<bool_(int, int, int, int)>**)end();
        if (ppfVar1 == ppfVar2) {
            push_back(local_28);
        } else {
            this_00 = logger::default_logger();
            this_00->Log(false, 3,
                         "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/EventListeners.h",
                         23, "Attempting to register the same event listener multiple times");
        }
    }

    // 0x1003973a0
    void EventListeners<std::function<bool(int)>>::Unregister(std::function<bool(int)>* callback) {
        function<bool_(int, int, int, int)>** ppfVar1;
        function<bool_(int, int, int, int)>** ppfVar2;
        function<bool_(int)>* local_28;

        local_28 = callback;
        scoped_lock<std::mutex> local_20(*((this + 32)));
        ppfVar1 = (function<bool_(int, int, int, int)>**)HeapBeginPtr();
        ppfVar2 = (function<bool_(int, int, int, int)>**)end();
        ppfVar1 = eastl::find<std::function<bool(input::TextCommand)>**, std::function<bool(input::TextCommand)>*>(
            ppfVar1, ppfVar2, local_28);
        ppfVar2 = (function<bool_(int, int, int, int)>**)end();
        if (ppfVar1 != ppfVar2) {
            erase(ppfVar1);
        }
    }

    // 0x100397480
    void EventListeners<std::function<bool(float, float, float, float)>>::Register(
        std::function<bool(float, float, float, float)>* callback) {
        function<bool_(int, int, int, int)>** ppfVar1;
        function<bool_(int, int, int, int)>** ppfVar2;
        Logger* this_00;
        function<bool_(float, float, float, float)>* local_28;

        local_28 = callback;
        scoped_lock<std::mutex> local_20(*((this + 32)));
        ppfVar1 = (function<bool_(int, int, int, int)>**)HeapBeginPtr();
        ppfVar2 = (function<bool_(int, int, int, int)>**)end();
        ppfVar1 = eastl::find<std::function<bool(input::TextCommand)>**, std::function<bool(input::TextCommand)>*>(
            ppfVar1, ppfVar2, local_28);
        ppfVar2 = (function<bool_(int, int, int, int)>**)end();
        if (ppfVar1 == ppfVar2) {
            push_back(local_28);
        } else {
            this_00 = logger::default_logger();
            this_00->Log(false, 3,
                         "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/EventListeners.h",
                         23, "Attempting to register the same event listener multiple times");
        }
    }

    // 0x1003976a0
    void EventListeners<std::function<bool(int, int, int, int)>>::Register(
        std::function<bool(int, int, int, int)>* callback) {
        function<bool_(int, int, int, int)>** ppfVar1;
        function<bool_(int, int, int, int)>** ppfVar2;
        Logger* this_00;
        function<bool_(int, int, int, int)>* local_28;

        local_28 = callback;
        scoped_lock<std::mutex> local_20(*((this + 32)));
        ppfVar1 = (function<bool_(int, int, int, int)>**)HeapBeginPtr();
        ppfVar2 = (function<bool_(int, int, int, int)>**)end();
        ppfVar1 = eastl::find<std::function<bool(input::TextCommand)>**, std::function<bool(input::TextCommand)>*>(
            ppfVar1, ppfVar2, local_28);
        ppfVar2 = (function<bool_(int, int, int, int)>**)end();
        if (ppfVar1 == ppfVar2) {
            push_back(local_28);
        } else {
            this_00 = logger::default_logger();
            this_00->Log(false, 3,
                         "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/EventListeners.h",
                         23, "Attempting to register the same event listener multiple times");
        }
    }

    // 0x1003978c0
    void EventListeners<std::function<bool(unsigned long, float, float)>>::Register(
        std::function<bool(unsigned long, float, float)>* callback) {
        function<bool_(int, int, int, int)>** ppfVar1;
        function<bool_(int, int, int, int)>** ppfVar2;
        Logger* this_00;
        function<bool_(unsigned long, float, float)>* local_28;

        local_28 = callback;
        scoped_lock<std::mutex> local_20(*((this + 32)));
        ppfVar1 = (function<bool_(int, int, int, int)>**)HeapBeginPtr();
        ppfVar2 = (function<bool_(int, int, int, int)>**)end();
        ppfVar1 = eastl::find<std::function<bool(input::TextCommand)>**, std::function<bool(input::TextCommand)>*>(
            ppfVar1, ppfVar2, local_28);
        ppfVar2 = (function<bool_(int, int, int, int)>**)end();
        if (ppfVar1 == ppfVar2) {
            push_back(local_28);
        } else {
            this_00 = logger::default_logger();
            this_00->Log(false, 3,
                         "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/EventListeners.h",
                         23, "Attempting to register the same event listener multiple times");
        }
    }

    // 0x100397ae0
    void EventListeners<std::function<bool(float, float, float, float)>>::Unregister(
        std::function<bool(float, float, float, float)>* callback) {
        function<bool_(int, int, int, int)>** ppfVar1;
        function<bool_(int, int, int, int)>** ppfVar2;
        function<bool_(float, float, float, float)>* local_28;

        local_28 = callback;
        scoped_lock<std::mutex> local_20(*((this + 32)));
        ppfVar1 = (function<bool_(int, int, int, int)>**)HeapBeginPtr();
        ppfVar2 = (function<bool_(int, int, int, int)>**)end();
        ppfVar1 = eastl::find<std::function<bool(input::TextCommand)>**, std::function<bool(input::TextCommand)>*>(
            ppfVar1, ppfVar2, local_28);
        ppfVar2 = (function<bool_(int, int, int, int)>**)end();
        if (ppfVar1 != ppfVar2) {
            erase(ppfVar1);
        }
    }

    // 0x100397bc0
    void EventListeners<std::function<bool(int, int, int, int)>>::Unregister(
        std::function<bool(int, int, int, int)>* callback) {
        function<bool_(int, int, int, int)>** ppfVar1;
        function<bool_(int, int, int, int)>** ppfVar2;
        function<bool_(int, int, int, int)>* local_28;

        local_28 = callback;
        scoped_lock<std::mutex> local_20(*((this + 32)));
        ppfVar1 = (function<bool_(int, int, int, int)>**)HeapBeginPtr();
        ppfVar2 = (function<bool_(int, int, int, int)>**)end();
        ppfVar1 = eastl::find<std::function<bool(input::TextCommand)>**, std::function<bool(input::TextCommand)>*>(
            ppfVar1, ppfVar2, local_28);
        ppfVar2 = (function<bool_(int, int, int, int)>**)end();
        if (ppfVar1 != ppfVar2) {
            erase(ppfVar1);
        }
    }

    // 0x100397ca0
    void EventListeners<std::function<bool(unsigned long, float, float)>>::Unregister(
        std::function<bool(unsigned long, float, float)>* callback) {
        function<bool_(int, int, int, int)>** ppfVar1;
        function<bool_(int, int, int, int)>** ppfVar2;
        function<bool_(unsigned long, float, float)>* local_28;

        local_28 = callback;
        scoped_lock<std::mutex> local_20(*((this + 32)));
        ppfVar1 = (function<bool_(int, int, int, int)>**)HeapBeginPtr();
        ppfVar2 = (function<bool_(int, int, int, int)>**)end();
        ppfVar1 = eastl::find<std::function<bool(input::TextCommand)>**, std::function<bool(input::TextCommand)>*>(
            ppfVar1, ppfVar2, local_28);
        ppfVar2 = (function<bool_(int, int, int, int)>**)end();
        if (ppfVar1 != ppfVar2) {
            erase(ppfVar1);
        }
    }

    // 0x1003a16f0
    void EventListeners<std::function<bool(float, float)>>::Register(std::function<bool(float, float)>* callback) {
        function<bool_(int, int, int, int)>** ppfVar1;
        function<bool_(int, int, int, int)>** ppfVar2;
        Logger* this_00;
        function<bool_(float, float)>* local_28;

        local_28 = callback;
        scoped_lock<std::mutex> local_20(*((this + 32)));
        ppfVar1 = (function<bool_(int, int, int, int)>**)HeapBeginPtr();
        ppfVar2 = (function<bool_(int, int, int, int)>**)end();
        ppfVar1 = eastl::find<std::function<bool(input::TextCommand)>**, std::function<bool(input::TextCommand)>*>(
            ppfVar1, ppfVar2, local_28);
        ppfVar2 = (function<bool_(int, int, int, int)>**)end();
        if (ppfVar1 == ppfVar2) {
            push_back(local_28);
        } else {
            this_00 = logger::default_logger();
            this_00->Log(false, 3,
                         "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/EventListeners.h",
                         23, "Attempting to register the same event listener multiple times");
        }
    }

    // 0x1003a17b0
    void EventListeners<std::function<bool(float, float)>>::Unregister(std::function<bool(float, float)>* callback) {
        function<bool_(int, int, int, int)>** ppfVar1;
        function<bool_(int, int, int, int)>** ppfVar2;
        function<bool_(float, float)>* local_28;

        local_28 = callback;
        scoped_lock<std::mutex> local_20(*((this + 32)));
        ppfVar1 = (function<bool_(int, int, int, int)>**)HeapBeginPtr();
        ppfVar2 = (function<bool_(int, int, int, int)>**)end();
        ppfVar1 = eastl::find<std::function<bool(input::TextCommand)>**, std::function<bool(input::TextCommand)>*>(
            ppfVar1, ppfVar2, local_28);
        ppfVar2 = (function<bool_(int, int, int, int)>**)end();
        if (ppfVar1 != ppfVar2) {
            erase(ppfVar1);
        }
    }

    // 0x1003a1970
    bool EventListeners<std::function<bool(float, float)>>::CallListeners<Window::SetSize(float, float)::$_0>(
        Window::SetSize(float, float)::$_0 arg1) const {
        __0 local_38;

        scoped_lock<std::mutex> local_30(*((this + 32)));
        auto puVar2 = HeapBeginPtr();
        auto puVar3 = end();
        bool bVar4 = puVar2 == puVar3;
        if (!bVar4) {
            do {
                if ((function<bool_(float, float)>*)*puVar2 != (function<bool_(float, float)>*)0) {
                    if (float->SetSize(float)::$_0::operator()(&local_38, (function<bool_(float, float)>*)*puVar2) !=
                        '\0')
                        break;
                }
                puVar2 = puVar2 + 1;
                bVar4 = puVar2 == puVar3;
            } while (!bVar4);
        }
        return (bool)(~bVar4 & 1);
    }

    // 0x1003a1a30
    void EventListeners<std::function<bool()>>::Register(std::function<bool()>* callback) {
        function<bool_(int, int, int, int)>** ppfVar1;
        function<bool_(int, int, int, int)>** ppfVar2;
        Logger* this_00;
        function<bool_()>* local_28;

        local_28 = callback;
        scoped_lock<std::mutex> local_20(*((this + 32)));
        ppfVar1 = (function<bool_(int, int, int, int)>**)HeapBeginPtr();
        ppfVar2 = (function<bool_(int, int, int, int)>**)end();
        ppfVar1 = eastl::find<std::function<bool(input::TextCommand)>**, std::function<bool(input::TextCommand)>*>(
            ppfVar1, ppfVar2, local_28);
        ppfVar2 = (function<bool_(int, int, int, int)>**)end();
        if (ppfVar1 == ppfVar2) {
            push_back(local_28);
        } else {
            this_00 = logger::default_logger();
            this_00->Log(false, 3,
                         "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/EventListeners.h",
                         23, "Attempting to register the same event listener multiple times");
        }
    }

    // 0x1003a1af0
    void EventListeners<std::function<bool()>>::Unregister(std::function<bool()>* callback) {
        function<bool_(int, int, int, int)>** ppfVar1;
        function<bool_(int, int, int, int)>** ppfVar2;
        function<bool_()>* local_28;

        local_28 = callback;
        scoped_lock<std::mutex> local_20(*((this + 32)));
        ppfVar1 = (function<bool_(int, int, int, int)>**)HeapBeginPtr();
        ppfVar2 = (function<bool_(int, int, int, int)>**)end();
        ppfVar1 = eastl::find<std::function<bool(input::TextCommand)>**, std::function<bool(input::TextCommand)>*>(
            ppfVar1, ppfVar2, local_28);
        ppfVar2 = (function<bool_(int, int, int, int)>**)end();
        if (ppfVar1 != ppfVar2) {
            erase(ppfVar1);
        }
    }

    // 0x1003a1de0
    bool EventListeners<std::function<bool(float, float)>>::CallListeners<Window::Update()::$_1>(
        Window::Update()::$_1 arg1) const {
        bool cVar1;
        bool extraout_AL;
        __1 local_30;

        scoped_lock<std::mutex> local_28(*((this + 32)));
        auto puVar3 = HeapBeginPtr();
        auto puVar2 = end();
        if (puVar3 != puVar2) {
            do {
                while ((function<bool_(float, float)>*)*puVar3 != (function<bool_(float, float)>*)0) {
                    cVar1 = Window::Update()::$_1::operator()(&local_30, (function<bool_(float, float)>*)*puVar3);
                    puVar3 = puVar3 + 1;
                    if (cVar1 || puVar3 == puVar2)
                        goto LAB_1003a1e57;
                }
                puVar3 = puVar3 + 1;
            } while (puVar3 != puVar2);
        }
    LAB_1003a1e57:
        return extraout_AL;
    }

    // 0x1003a6bf0
    EventListeners<std::function<bool(float, float)>>::EventListeners()
        : eastl::vector<std::function<bool(float, float)>*>() {
        new ((this + 32)) std::mutex();
    }

    // 0x1003a6c90
    EventListeners<std::function<bool()>>::EventListeners() : eastl::vector<std::function<bool()>*>() {
        new ((this + 32)) std::mutex();
    }

    // 0x1003a7320
    EventListeners<std::function<bool()>>::~EventListeners() {
        ((this + 32))->~mutex();
    }

    // 0x1003a73a0
    EventListeners<std::function<bool(float, float)>>::~EventListeners() {
        ((this + 32))->~mutex();
    }

    // 0x1003a9c60
    bool EventListeners<std::function<bool()>>::CallListeners < Window::OnClose()::$_3::operator()(BaseApp*) const ::{
        lambda(std::function<bool()>&) #1
    }
    > (Window::OnClose()::$_3::operator()(BaseApp*) const ::{ lambda(std::function<bool()>&) #1 } arg1) const {
        bool cVar1;
        mutex* mutex;

        mutex = (mutex*)(this + 32);
        scoped_lock<std::mutex> local_28(*mutex);
        auto puVar2 = HeapBeginPtr();
        auto puVar3 = end();
        while ((
            puVar2 != puVar3 &&
            (((_lambda_std__function<bool()> ___1_*)*puVar2 == (_lambda_std__function<bool()> ___1_*)0 ||
              (cVar1 = const ::{ lambda(std::function<bool()>&) #1 } ::operator()((_lambda_std__function<bool()> ___1_*)*puVar2, (function<bool_()>*)mutex), !cVar1))))) {
            puVar2 = puVar2 + 1;
        }
        return (bool)(~(puVar2 == puVar3) & 1);
    }

    // 0x1006ae5d0
    EventListeners<std::function<bool(input::gesture::GestureEvent_Swipe const&)>>::EventListeners()
        : eastl::vector<std::function<bool(input::gesture::GestureEvent_Swipe const&)>*>() {
        new ((this + 32)) std::mutex();
    }

    // 0x1006bc6b0
    void EventListeners<std::function<bool(input::gesture::GestureEvent_Swipe const&)>>::Register(
        std::function<bool(input::gesture::GestureEvent_Swipe const&)>* callback) {
        function<bool_(int, int, int, int)>** ppfVar1;
        function<bool_(int, int, int, int)>** ppfVar2;
        Logger* this_00;
        function<bool_(input::gesture::GestureEvent_Swipe const&)>* local_28;

        local_28 = callback;
        scoped_lock<std::mutex> local_20(*((this + 32)));
        ppfVar1 = (function<bool_(int, int, int, int)>**)HeapBeginPtr();
        ppfVar2 = (function<bool_(int, int, int, int)>**)end();
        ppfVar1 = eastl::find<std::function<bool(input::TextCommand)>**, std::function<bool(input::TextCommand)>*>(
            ppfVar1, ppfVar2, local_28);
        ppfVar2 = (function<bool_(int, int, int, int)>**)end();
        if (ppfVar1 == ppfVar2) {
            push_back(local_28);
        } else {
            this_00 = logger::default_logger();
            this_00->Log(false, 3,
                         "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/EventListeners.h",
                         23, "Attempting to register the same event listener multiple times");
        }
    }

    // 0x1006e9200
    void EventListeners<std::function<bool(unsigned int, input::GamepadAxis, short)>>::Register(
        std::function<bool(unsigned int, input::GamepadAxis, short)>* callback) {
        function<bool_(int, int, int, int)>** ppfVar1;
        function<bool_(int, int, int, int)>** ppfVar2;
        Logger* this_00;
        function<bool_(unsigned int, input::GamepadAxis, short)>* local_28;

        local_28 = callback;
        scoped_lock<std::mutex> local_20(*((this + 32)));
        ppfVar1 = (function<bool_(int, int, int, int)>**)HeapBeginPtr();
        ppfVar2 = (function<bool_(int, int, int, int)>**)end();
        ppfVar1 = eastl::find<std::function<bool(input::TextCommand)>**, std::function<bool(input::TextCommand)>*>(
            ppfVar1, ppfVar2, local_28);
        ppfVar2 = (function<bool_(int, int, int, int)>**)end();
        if (ppfVar1 == ppfVar2) {
            push_back(local_28);
        } else {
            this_00 = logger::default_logger();
            this_00->Log(false, 3,
                         "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/EventListeners.h",
                         23, "Attempting to register the same event listener multiple times");
        }
    }

    // 0x1006e9420
    void EventListeners<std::function<bool(unsigned int, input::GamepadButton, bool)>>::Register(
        std::function<bool(unsigned int, input::GamepadButton, bool)>* callback) {
        function<bool_(int, int, int, int)>** ppfVar1;
        function<bool_(int, int, int, int)>** ppfVar2;
        Logger* this_00;
        function<bool_(unsigned int, input::GamepadButton, bool)>* local_28;

        local_28 = callback;
        scoped_lock<std::mutex> local_20(*((this + 32)));
        ppfVar1 = (function<bool_(int, int, int, int)>**)HeapBeginPtr();
        ppfVar2 = (function<bool_(int, int, int, int)>**)end();
        ppfVar1 = eastl::find<std::function<bool(input::TextCommand)>**, std::function<bool(input::TextCommand)>*>(
            ppfVar1, ppfVar2, local_28);
        ppfVar2 = (function<bool_(int, int, int, int)>**)end();
        if (ppfVar1 == ppfVar2) {
            push_back(local_28);
        } else {
            this_00 = logger::default_logger();
            this_00->Log(false, 3,
                         "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/EventListeners.h",
                         23, "Attempting to register the same event listener multiple times");
        }
    }

    // 0x1006e9640
    void EventListeners<std::function<bool(unsigned int, input::GamepadTrigger, unsigned char)>>::Register(
        std::function<bool(unsigned int, input::GamepadTrigger, unsigned char)>* callback) {
        function<bool_(int, int, int, int)>** ppfVar1;
        function<bool_(int, int, int, int)>** ppfVar2;
        Logger* this_00;
        function<bool_(unsigned int, input::GamepadTrigger, unsigned char)>* local_28;

        local_28 = callback;
        scoped_lock<std::mutex> local_20(*((this + 32)));
        ppfVar1 = (function<bool_(int, int, int, int)>**)HeapBeginPtr();
        ppfVar2 = (function<bool_(int, int, int, int)>**)end();
        ppfVar1 = eastl::find<std::function<bool(input::TextCommand)>**, std::function<bool(input::TextCommand)>*>(
            ppfVar1, ppfVar2, local_28);
        ppfVar2 = (function<bool_(int, int, int, int)>**)end();
        if (ppfVar1 == ppfVar2) {
            push_back(local_28);
        } else {
            this_00 = logger::default_logger();
            this_00->Log(false, 3,
                         "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/EventListeners.h",
                         23, "Attempting to register the same event listener multiple times");
        }
    }

    // 0x100c9dab0
    uint32_t EventListeners<std::function<bool(float, float)>>::empty() const {
        scoped_lock<std::mutex> local_20(*((this + 32)));
        uint32_t uVar1 = empty();
        return uVar1;
    }

    // 0x100c9dc20
    void EventListeners<std::function<bool(float, float)>>::Reset() {

        scoped_lock<std::mutex> local_20(*((this + 32)));
        clear();
    }

    // 0x100ca21a0
    bool EventListeners<std::function<bool(float, float)>>::CallListeners <
        input::InputHandler::OnLMouseDown(float, float)::{
        lambda(std::function<bool(float, float)>&) #1
    }
    > (input::InputHandler::OnLMouseDown(float, float)::{ lambda(std::function<bool(float, float)>&) #1 } arg1) const {
        bool cVar1;
        _lambda_std__function<bool(float, float)> const___1_ local_38[8];

        scoped_lock<std::mutex> local_30(*((this + 32)));
        auto puVar2 = HeapBeginPtr();
        auto puVar3 = end();
        bool bVar4 = puVar2 == puVar3;
        if (!bVar4) {
            do {
                if ((function<bool_(float, float)>*)*puVar2 != (function<bool_(float, float)>*)0) {
                    cVar1 = float->OnLMouseUp(float)::{
                        lambda(std::function<bool(float, float)> const&) #1
                    }
                    ::operator()(local_38, (function<bool_(float, float)>*)*puVar2);
                    if (cVar1)
                        break;
                }
                puVar2 = puVar2 + 1;
                bVar4 = puVar2 == puVar3;
            } while (!bVar4);
        }
        return (bool)(~bVar4 & 1);
    }

    // 0x100ca22a0
    bool EventListeners<std::function<bool(float, float)>>::CallListeners <
        input::InputHandler::OnLMouseUp(float, float)::{
        lambda(std::function<bool(float, float)> const&) #1
    }
    > (input::InputHandler::OnLMouseUp(float, float)::{
        lambda(std::function<bool(float, float)> const&) #1
    } arg1) const {
        bool cVar1;
        _lambda_std__function<bool(float, float)> const___1_ local_38[8];

        scoped_lock<std::mutex> local_30(*((this + 32)));
        auto puVar2 = HeapBeginPtr();
        auto puVar3 = end();
        bool bVar4 = puVar2 == puVar3;
        if (!bVar4) {
            do {
                if ((function<bool_(float, float)>*)*puVar2 != (function<bool_(float, float)>*)0) {
                    cVar1 = float->OnLMouseUp(float)::{
                        lambda(std::function<bool(float, float)> const&) #1
                    }
                    ::operator()(local_38, (function<bool_(float, float)>*)*puVar2);
                    if (cVar1)
                        break;
                }
                puVar2 = puVar2 + 1;
                bVar4 = puVar2 == puVar3;
            } while (!bVar4);
        }
        return (bool)(~bVar4 & 1);
    }

    // 0x100ca2350
    bool EventListeners<std::function<bool(float, float)>>::CallListeners <
        input::InputHandler::OnMMouseDown(float, float)::{
        lambda(std::function<bool(float, float)>&) #1
    }
    > (input::InputHandler::OnMMouseDown(float, float)::{ lambda(std::function<bool(float, float)>&) #1 } arg1) const {
        bool cVar1;
        _lambda_std__function<bool(float, float)> const___1_ local_38[8];

        scoped_lock<std::mutex> local_30(*((this + 32)));
        auto puVar2 = HeapBeginPtr();
        auto puVar3 = end();
        bool bVar4 = puVar2 == puVar3;
        if (!bVar4) {
            do {
                if ((function<bool_(float, float)>*)*puVar2 != (function<bool_(float, float)>*)0) {
                    cVar1 = float->OnLMouseUp(float)::{
                        lambda(std::function<bool(float, float)> const&) #1
                    }
                    ::operator()(local_38, (function<bool_(float, float)>*)*puVar2);
                    if (cVar1)
                        break;
                }
                puVar2 = puVar2 + 1;
                bVar4 = puVar2 == puVar3;
            } while (!bVar4);
        }
        return (bool)(~bVar4 & 1);
    }

    // 0x100ca2400
    bool EventListeners<std::function<bool(float, float)>>::CallListeners <
        input::InputHandler::OnMMouseUp(float, float)::{
        lambda(std::function<bool(float, float)> const&) #1
    }
    > (input::InputHandler::OnMMouseUp(float, float)::{
        lambda(std::function<bool(float, float)> const&) #1
    } arg1) const {
        bool cVar1;
        _lambda_std__function<bool(float, float)> const___1_ local_38[8];

        scoped_lock<std::mutex> local_30(*((this + 32)));
        auto puVar2 = HeapBeginPtr();
        auto puVar3 = end();
        bool bVar4 = puVar2 == puVar3;
        if (!bVar4) {
            do {
                if ((function<bool_(float, float)>*)*puVar2 != (function<bool_(float, float)>*)0) {
                    cVar1 = float->OnLMouseUp(float)::{
                        lambda(std::function<bool(float, float)> const&) #1
                    }
                    ::operator()(local_38, (function<bool_(float, float)>*)*puVar2);
                    if (cVar1)
                        break;
                }
                puVar2 = puVar2 + 1;
                bVar4 = puVar2 == puVar3;
            } while (!bVar4);
        }
        return (bool)(~bVar4 & 1);
    }

    // 0x100ca24b0
    bool EventListeners<std::function<bool(float, float)>>::CallListeners <
        input::InputHandler::OnRMouseDown(float, float)::{
        lambda(std::function<bool(float, float)> const&) #1
    }
    > (input::InputHandler::OnRMouseDown(float, float)::{
        lambda(std::function<bool(float, float)> const&) #1
    } arg1) const {
        bool cVar1;
        _lambda_std__function<bool(float, float)> const___1_ local_38[8];

        scoped_lock<std::mutex> local_30(*((this + 32)));
        auto puVar2 = HeapBeginPtr();
        auto puVar3 = end();
        bool bVar4 = puVar2 == puVar3;
        if (!bVar4) {
            do {
                if ((function<bool_(float, float)>*)*puVar2 != (function<bool_(float, float)>*)0) {
                    cVar1 = float->OnLMouseUp(float)::{
                        lambda(std::function<bool(float, float)> const&) #1
                    }
                    ::operator()(local_38, (function<bool_(float, float)>*)*puVar2);
                    if (cVar1)
                        break;
                }
                puVar2 = puVar2 + 1;
                bVar4 = puVar2 == puVar3;
            } while (!bVar4);
        }
        return (bool)(~bVar4 & 1);
    }

    // 0x100ca2560
    bool EventListeners<std::function<bool(float, float)>>::CallListeners <
        input::InputHandler::OnRMouseUp(float, float)::{
        lambda(std::function<bool(float, float)> const&) #1
    }
    > (input::InputHandler::OnRMouseUp(float, float)::{
        lambda(std::function<bool(float, float)> const&) #1
    } arg1) const {
        bool cVar1;
        _lambda_std__function<bool(float, float)> const___1_ local_38[8];

        scoped_lock<std::mutex> local_30(*((this + 32)));
        auto puVar2 = HeapBeginPtr();
        auto puVar3 = end();
        bool bVar4 = puVar2 == puVar3;
        if (!bVar4) {
            do {
                if ((function<bool_(float, float)>*)*puVar2 != (function<bool_(float, float)>*)0) {
                    cVar1 = float->OnLMouseUp(float)::{
                        lambda(std::function<bool(float, float)> const&) #1
                    }
                    ::operator()(local_38, (function<bool_(float, float)>*)*puVar2);
                    if (cVar1)
                        break;
                }
                puVar2 = puVar2 + 1;
                bVar4 = puVar2 == puVar3;
            } while (!bVar4);
        }
        return (bool)(~bVar4 & 1);
    }

    // 0x100ca2610
    bool EventListeners<std::function<bool(float, float)>>::CallListeners <
        input::InputHandler::OnMouseMove(float, float)::{
        lambda(std::function<bool(float, float)> const&) #1
    }
    > (input::InputHandler::OnMouseMove(float, float)::{
        lambda(std::function<bool(float, float)> const&) #1
    } arg1) const {
        bool cVar1;
        _lambda_std__function<bool(float, float)> const___1_ local_38[8];

        scoped_lock<std::mutex> local_30(*((this + 32)));
        auto puVar2 = HeapBeginPtr();
        auto puVar3 = end();
        bool bVar4 = puVar2 == puVar3;
        if (!bVar4) {
            do {
                if ((function<bool_(float, float)>*)*puVar2 != (function<bool_(float, float)>*)0) {
                    cVar1 = float->OnLMouseUp(float)::{
                        lambda(std::function<bool(float, float)> const&) #1
                    }
                    ::operator()(local_38, (function<bool_(float, float)>*)*puVar2);
                    if (cVar1)
                        break;
                }
                puVar2 = puVar2 + 1;
                bVar4 = puVar2 == puVar3;
            } while (!bVar4);
        }
        return (bool)(~bVar4 & 1);
    }

    // 0x100ca26c0
    bool EventListeners<std::function<bool(float, float, float, float)>>::CallListeners <
        input::InputHandler::OnMouseWheel(float, float, float, float)::{
        lambda(std::function<bool(float, float, float, float)> const&) #1
    }
    > (input::InputHandler::OnMouseWheel(float, float, float, float)::{
        lambda(std::function<bool(float, float, float, float)> const&) #1
    } arg1) const {
        bool cVar1;
        _lambda_std__function<bool(float, float, float, float)> const___1_ local_40[16];

        scoped_lock<std::mutex> local_30(*((this + 32)));
        auto puVar2 = HeapBeginPtr();
        auto puVar3 = end();
        bool bVar4 = puVar2 == puVar3;
        if (!bVar4) {
            do {
                if ((function<bool_(float, float, float, float)>*)*puVar2 !=
                    (function<bool_(float, float, float, float)>*)0) {
                    cVar1 = float->OnMouseWheel(float, float, float)::{
                        lambda(std::function<bool(float, float, float, float)> const&) #1
                    }
                    ::operator()(local_40, (function<bool_(float, float, float, float)>*)*puVar2);
                    if (cVar1)
                        break;
                }
                puVar2 = puVar2 + 1;
                bVar4 = puVar2 == puVar3;
            } while (!bVar4);
        }
        return (bool)(~bVar4 & 1);
    }

    // 0x100ca2800
    bool EventListeners<std::function<bool(int, int, int, int)>>::CallListeners <
        input::InputHandler::OnLowLevelMouseDown(int, int, int, int)::{
        lambda(std::function<bool(int, int, int, int)>&) #1
    }
    > (input::InputHandler::OnLowLevelMouseDown(int, int, int, int)::{
        lambda(std::function<bool(int, int, int, int)>&) #1
    } arg1) const {
        bool cVar1;
        _lambda_std__function<bool_(int, int, int, int)> ___1_* local_40[2];

        local_40[0] = arg1;
        scoped_lock<std::mutex> local_30(*((this + 32)));
        auto puVar2 = HeapBeginPtr();
        auto puVar3 = end();
        bool bVar4 = puVar2 == puVar3;
        if (!bVar4) {
            do {
                if ((function<bool_(int, int, int, int)>*)*puVar2 != (function<bool_(int, int, int, int)>*)0) {
                    cVar1 = int->OnLowLevelMouseMove(int, int, int)::{
                        lambda(std::function<bool(int, int, int, int)>&) #1
                    }
                    ::operator()((_lambda_std__function<bool(int, int, int, int)> ___1_*)local_40,
                                 (function<bool_(int, int, int, int)>*)*puVar2);
                    if (cVar1)
                        break;
                }
                puVar2 = puVar2 + 1;
                bVar4 = puVar2 == puVar3;
            } while (!bVar4);
        }
        return (bool)(~bVar4 & 1);
    }

    // 0x100ca2920
    bool EventListeners<std::function<bool(int, int, int, int)>>::CallListeners <
        input::InputHandler::OnLowLevelMouseMove(int, int, int, int)::{
        lambda(std::function<bool(int, int, int, int)>&) #1
    }
    > (input::InputHandler::OnLowLevelMouseMove(int, int, int, int)::{
        lambda(std::function<bool(int, int, int, int)>&) #1
    } arg1) const {
        bool cVar1;
        _lambda_std__function<bool_(int, int, int, int)> ___1_* local_40[2];

        local_40[0] = arg1;
        scoped_lock<std::mutex> local_30(*((this + 32)));
        auto puVar2 = HeapBeginPtr();
        auto puVar3 = end();
        bool bVar4 = puVar2 == puVar3;
        if (!bVar4) {
            do {
                if ((function<bool_(int, int, int, int)>*)*puVar2 != (function<bool_(int, int, int, int)>*)0) {
                    cVar1 = int->OnLowLevelMouseMove(int, int, int)::{
                        lambda(std::function<bool(int, int, int, int)>&) #1
                    }
                    ::operator()((_lambda_std__function<bool(int, int, int, int)> ___1_*)local_40,
                                 (function<bool_(int, int, int, int)>*)*puVar2);
                    if (cVar1)
                        break;
                }
                puVar2 = puVar2 + 1;
                bVar4 = puVar2 == puVar3;
            } while (!bVar4);
        }
        return (bool)(~bVar4 & 1);
    }

    // 0x100ca29d0
    bool EventListeners<std::function<bool(int)>>::CallListeners < input::InputHandler::OnKeyDown(int)::{
        lambda(std::function<bool(int)> const&) #1
    }
    > (input::InputHandler::OnKeyDown(int)::{ lambda(std::function<bool(int)> const&) #1 } arg1) const {
        uint32_t local_30[2];

        local_30[0] = (uint32_t)arg1;
        scoped_lock<std::mutex> local_38(*((this + 32)));
        auto puVar2 = HeapBeginPtr();
        auto puVar3 = end();
        bool bVar4 = puVar2 == puVar3;
        if (!bVar4) {
            do {
                if ((function<bool_(int)>*)*puVar2 != (function<bool_(int)>*)0) {
                    if (int->OnKeyUp()::{lambda(std::function<bool(int)> const&) #1} ::operator()(
                            (_lambda_std__function<bool(int)> const___1_*)local_30, (function<bool_(int)>*)*puVar2) !=
                        '\0')
                        break;
                }
                puVar2 = puVar2 + 1;
                bVar4 = puVar2 == puVar3;
            } while (!bVar4);
        }
        return (bool)(~bVar4 & 1);
    }

    // 0x100ca2ae0
    bool EventListeners<std::function<bool(int)>>::CallListeners < input::InputHandler::OnKeyUp(int)::{
        lambda(std::function<bool(int)> const&) #1
    }
    > (input::InputHandler::OnKeyUp(int)::{ lambda(std::function<bool(int)> const&) #1 } arg1) const {
        uint32_t local_30[2];

        local_30[0] = (uint32_t)arg1;
        scoped_lock<std::mutex> local_38(*((this + 32)));
        auto puVar2 = HeapBeginPtr();
        auto puVar3 = end();
        bool bVar4 = puVar2 == puVar3;
        if (!bVar4) {
            do {
                if ((function<bool_(int)>*)*puVar2 != (function<bool_(int)>*)0) {
                    if (int->OnKeyUp()::{lambda(std::function<bool(int)> const&) #1} ::operator()(
                            (_lambda_std__function<bool(int)> const___1_*)local_30, (function<bool_(int)>*)*puVar2) !=
                        '\0')
                        break;
                }
                puVar2 = puVar2 + 1;
                bVar4 = puVar2 == puVar3;
            } while (!bVar4);
        }
        return (bool)(~bVar4 & 1);
    }

    // 0x100ca2b90
    bool EventListeners<std::function<bool(int)>>::CallListeners < input::InputHandler::OnKeyChar(int)::{
        lambda(std::function<bool(int)> const&) #1
    }
    > (input::InputHandler::OnKeyChar(int)::{ lambda(std::function<bool(int)> const&) #1 } arg1) const {
        uint32_t local_30[2];

        local_30[0] = (uint32_t)arg1;
        scoped_lock<std::mutex> local_38(*((this + 32)));
        auto puVar2 = HeapBeginPtr();
        auto puVar3 = end();
        bool bVar4 = puVar2 == puVar3;
        if (!bVar4) {
            do {
                if ((function<bool_(int)>*)*puVar2 != (function<bool_(int)>*)0) {
                    if (int->OnKeyUp()::{lambda(std::function<bool(int)> const&) #1} ::operator()(
                            (_lambda_std__function<bool(int)> const___1_*)local_30, (function<bool_(int)>*)*puVar2) !=
                        '\0')
                        break;
                }
                puVar2 = puVar2 + 1;
                bVar4 = puVar2 == puVar3;
            } while (!bVar4);
        }
        return (bool)(~bVar4 & 1);
    }

    // 0x100ca2c40
    bool EventListeners<std::function<bool(unsigned long, float, float)>>::CallListeners <
        input::InputHandler::OnFirstTouchDown(unsigned long, float, float)::{
        lambda(std::function<bool(unsigned long, float, float)> const&) #1
    }
    > (input::InputHandler::OnFirstTouchDown(unsigned long, float, float)::{
        lambda(std::function<bool(unsigned long, float, float)> const&) #1
    } arg1) const {
        bool cVar1;
        _lambda_std__function<bool_(unsigned long, float, float)> _const___1_* local_40[2];

        local_40[0] = arg1;
        scoped_lock<std::mutex> local_30(*((this + 32)));
        auto puVar2 = HeapBeginPtr();
        auto puVar3 = end();
        bool bVar4 = puVar2 == puVar3;
        if (!bVar4) {
            do {
                if ((function<bool_(unsigned long, float, float)>*)*puVar2 !=
                    (function<bool_(unsigned long, float, float)>*)0) {
                    cVar1 = unsigned long->OnTouchDown(float, float)::{
                        lambda(std::function<bool(unsigned long, float, float)> const&) #1
                    }
                    ::operator()((_lambda_std__function<bool(unsigned long, float, float)> const___1_*)local_40,
                                 (function<bool_(unsigned long, float, float)>*)*puVar2);
                    if (cVar1)
                        break;
                }
                puVar2 = puVar2 + 1;
                bVar4 = puVar2 == puVar3;
            } while (!bVar4);
        }
        return (bool)(~bVar4 & 1);
    }

    // 0x100ca2d60
    bool EventListeners<std::function<bool(unsigned long, float, float)>>::CallListeners <
        input::InputHandler::OnTouchDown(unsigned long, float, float)::{
        lambda(std::function<bool(unsigned long, float, float)> const&) #1
    }
    > (input::InputHandler::OnTouchDown(unsigned long, float, float)::{
        lambda(std::function<bool(unsigned long, float, float)> const&) #1
    } arg1) const {
        bool cVar1;
        _lambda_std__function<bool_(unsigned long, float, float)> _const___1_* local_40[2];

        local_40[0] = arg1;
        scoped_lock<std::mutex> local_30(*((this + 32)));
        auto puVar2 = HeapBeginPtr();
        auto puVar3 = end();
        bool bVar4 = puVar2 == puVar3;
        if (!bVar4) {
            do {
                if ((function<bool_(unsigned long, float, float)>*)*puVar2 !=
                    (function<bool_(unsigned long, float, float)>*)0) {
                    cVar1 = unsigned long->OnTouchDown(float, float)::{
                        lambda(std::function<bool(unsigned long, float, float)> const&) #1
                    }
                    ::operator()((_lambda_std__function<bool(unsigned long, float, float)> const___1_*)local_40,
                                 (function<bool_(unsigned long, float, float)>*)*puVar2);
                    if (cVar1)
                        break;
                }
                puVar2 = puVar2 + 1;
                bVar4 = puVar2 == puVar3;
            } while (!bVar4);
        }
        return (bool)(~bVar4 & 1);
    }

    // 0x100ca2e10
    bool EventListeners<std::function<bool(unsigned long, float, float)>>::CallListeners <
        input::InputHandler::OnTouchMove(unsigned long, float, float)::{
        lambda(std::function<bool(unsigned long, float, float)> const&) #1
    }
    > (input::InputHandler::OnTouchMove(unsigned long, float, float)::{
        lambda(std::function<bool(unsigned long, float, float)> const&) #1
    } arg1) const {
        bool cVar1;
        _lambda_std__function<bool_(unsigned long, float, float)> _const___1_* local_40[2];

        local_40[0] = arg1;
        scoped_lock<std::mutex> local_30(*((this + 32)));
        auto puVar2 = HeapBeginPtr();
        auto puVar3 = end();
        bool bVar4 = puVar2 == puVar3;
        if (!bVar4) {
            do {
                if ((function<bool_(unsigned long, float, float)>*)*puVar2 !=
                    (function<bool_(unsigned long, float, float)>*)0) {
                    cVar1 = unsigned long->OnTouchDown(float, float)::{
                        lambda(std::function<bool(unsigned long, float, float)> const&) #1
                    }
                    ::operator()((_lambda_std__function<bool(unsigned long, float, float)> const___1_*)local_40,
                                 (function<bool_(unsigned long, float, float)>*)*puVar2);
                    if (cVar1)
                        break;
                }
                puVar2 = puVar2 + 1;
                bVar4 = puVar2 == puVar3;
            } while (!bVar4);
        }
        return (bool)(~bVar4 & 1);
    }

    // 0x100ca2ec0
    bool EventListeners<std::function<bool(unsigned long, float, float)>>::CallListeners <
        input::InputHandler::OnTouchUp(unsigned long, float, float)::{
        lambda(std::function<bool(unsigned long, float, float)> const&) #1
    }
    > (input::InputHandler::OnTouchUp(unsigned long, float, float)::{
        lambda(std::function<bool(unsigned long, float, float)> const&) #1
    } arg1) const {
        bool cVar1;
        _lambda_std__function<bool_(unsigned long, float, float)> _const___1_* local_40[2];

        local_40[0] = arg1;
        scoped_lock<std::mutex> local_30(*((this + 32)));
        auto puVar2 = HeapBeginPtr();
        auto puVar3 = end();
        bool bVar4 = puVar2 == puVar3;
        if (!bVar4) {
            do {
                if ((function<bool_(unsigned long, float, float)>*)*puVar2 !=
                    (function<bool_(unsigned long, float, float)>*)0) {
                    cVar1 = unsigned long->OnTouchDown(float, float)::{
                        lambda(std::function<bool(unsigned long, float, float)> const&) #1
                    }
                    ::operator()((_lambda_std__function<bool(unsigned long, float, float)> const___1_*)local_40,
                                 (function<bool_(unsigned long, float, float)>*)*puVar2);
                    if (cVar1)
                        break;
                }
                puVar2 = puVar2 + 1;
                bVar4 = puVar2 == puVar3;
            } while (!bVar4);
        }
        return (bool)(~bVar4 & 1);
    }

    // 0x100ca2f70
    bool EventListeners<std::function<bool(unsigned long, float, float)>>::CallListeners <
        input::InputHandler::OnTouchCanceled(unsigned long, float, float)::{
        lambda(std::function<bool(unsigned long, float, float)> const&) #1
    }
    > (input::InputHandler::OnTouchCanceled(unsigned long, float, float)::{
        lambda(std::function<bool(unsigned long, float, float)> const&) #1
    } arg1) const {
        bool cVar1;
        _lambda_std__function<bool_(unsigned long, float, float)> _const___1_* local_40[2];

        local_40[0] = arg1;
        scoped_lock<std::mutex> local_30(*((this + 32)));
        auto puVar2 = HeapBeginPtr();
        auto puVar3 = end();
        bool bVar4 = puVar2 == puVar3;
        if (!bVar4) {
            do {
                if ((function<bool_(unsigned long, float, float)>*)*puVar2 !=
                    (function<bool_(unsigned long, float, float)>*)0) {
                    cVar1 = unsigned long->OnTouchDown(float, float)::{
                        lambda(std::function<bool(unsigned long, float, float)> const&) #1
                    }
                    ::operator()((_lambda_std__function<bool(unsigned long, float, float)> const___1_*)local_40,
                                 (function<bool_(unsigned long, float, float)>*)*puVar2);
                    if (cVar1)
                        break;
                }
                puVar2 = puVar2 + 1;
                bVar4 = puVar2 == puVar3;
            } while (!bVar4);
        }
        return (bool)(~bVar4 & 1);
    }

    // 0x100ca3020
    bool EventListeners<std::function<bool(input::TextCommand)>>::CallListeners <
        input::InputHandler::OnTextCommand(input::TextCommand)::{
        lambda(std::function<bool(input::TextCommand)>&) #1
    }
    > (input::InputHandler::OnTextCommand(input::TextCommand)::{
        lambda(std::function<bool(input::TextCommand)>&) #1
    } arg1) const {
        uint32_t local_30[2];

        local_30[0] = (uint32_t)arg1;
        scoped_lock<std::mutex> local_38(*((this + 32)));
        auto puVar2 = HeapBeginPtr();
        auto puVar3 = end();
        bool bVar4 = puVar2 == puVar3;
        if (!bVar4) {
            do {
                if ((function<bool_(input::TextCommand)>*)*puVar2 != (function<bool_(input::TextCommand)>*)0) {
                    if ((input::TextCommand)
                            ->OnTextCommand()::{lambda(std::function<bool(input::TextCommand)>&) #1} ::operator()(
                                (_lambda_std__function<bool(input::TextCommand)> ___1_*)local_30,
                                (function<bool_(input::TextCommand)>*)*puVar2) != '\0')
                        break;
                }
                puVar2 = puVar2 + 1;
                bVar4 = puVar2 == puVar3;
            } while (!bVar4);
        }
        return (bool)(~bVar4 & 1);
    }

    // 0x100ca3e20
    EventListeners<std::function<bool(input::gesture::TouchPoint const&)>>::~EventListeners() {
        ((this + 32))->~mutex();
    }

    // 0x100ca3f70
    EventListeners<std::function<bool(input::gesture::GestureEvent_EmulateMouse const&)>>::~EventListeners() {
        ((this + 32))->~mutex();
    }

    // 0x100ca4040
    EventListeners<std::function<bool(input::gesture::GestureEvent_Pinch const&)>>::~EventListeners() {
        ((this + 32))->~mutex();
    }

    // 0x100ca4190
    EventListeners<std::function<bool(input::gesture::GestureEvent_Swipe const&)>>::~EventListeners() {
        ((this + 32))->~mutex();
    }

    // 0x100ca50c0
    bool EventListeners<std::function<bool(input::gesture::TouchPoint const&)>>::CallListeners <
        input::gesture::Gesture<input::gesture::TouchPoint>::RunEvent(input::gesture::TouchPoint const&)::{
        lambda(std::function<bool(input::gesture::TouchPoint const&)> const&) #1
    }
    > (input::gesture::Gesture<input::gesture::TouchPoint>::RunEvent(input::gesture::TouchPoint const&)::{
        lambda(std::function<bool(input::gesture::TouchPoint const&)> const&) #1
    } arg1) const {
        bool cVar1;
        _lambda_std__function<bool(input::gesture::TouchPoint const&)> const___1_ _Stack0000000000000008;

        scoped_lock<std::mutex> local_30(*((this + 32)));
        auto puVar2 = HeapBeginPtr();
        auto puVar3 = end();
        bool bVar4 = puVar2 == puVar3;
        if (!bVar4) {
            do {
                if ((function<bool_(input::gesture::TouchPoint const&)>*)*puVar2 !=
                    (function<bool_(input::gesture::TouchPoint const&)>*)0) {
                    cVar1 = (input::gesture::TouchPoint const&)->RunEvent()::{
                        lambda(std::function<bool(input::gesture::TouchPoint const&)> const&) #1
                    }
                    ::operator()(&_Stack0000000000000008, (function<bool_(input::gesture::TouchPoint const&)>*)*puVar2);
                    if (cVar1)
                        break;
                }
                puVar2 = puVar2 + 1;
                bVar4 = puVar2 == puVar3;
            } while (!bVar4);
        }
        return (bool)(~bVar4 & 1);
    }

    // 0x100ca56e0
    bool EventListeners<std::function<bool(input::gesture::GestureEvent_Pinch const&)>>::CallListeners <
        input::gesture::Gesture<input::gesture::GestureEvent_Pinch>::RunEvent(
            input::gesture::GestureEvent_Pinch const&)::{
        lambda(std::function<bool(input::gesture::GestureEvent_Pinch const&)> const&) #1
    }
    > (input::gesture::Gesture<input::gesture::GestureEvent_Pinch>::RunEvent(
          input::gesture::GestureEvent_Pinch const&)::{
        lambda(std::function<bool(input::gesture::GestureEvent_Pinch const&)> const&) #1
    } arg1) const {
        bool cVar1;
        _lambda_std__function<bool(input::gesture::GestureEvent_Pinch const&)> const___1_ _Stack0000000000000008;

        scoped_lock<std::mutex> local_30(*((this + 32)));
        auto puVar2 = HeapBeginPtr();
        auto puVar3 = end();
        bool bVar4 = puVar2 == puVar3;
        if (!bVar4) {
            do {
                if ((function<bool_(input::gesture::GestureEvent_Pinch const&)>*)*puVar2 !=
                    (function<bool_(input::gesture::GestureEvent_Pinch const&)>*)0) {
                    cVar1 = (input::gesture::GestureEvent_Pinch const&)->RunEvent()::{
                        lambda(std::function<bool(input::gesture::GestureEvent_Pinch const&)> const&) #1
                    }
                    ::operator()(&_Stack0000000000000008,
                                 (function<bool_(input::gesture::GestureEvent_Pinch const&)>*)*puVar2);
                    if (cVar1)
                        break;
                }
                puVar2 = puVar2 + 1;
                bVar4 = puVar2 == puVar3;
            } while (!bVar4);
        }
        return (bool)(~bVar4 & 1);
    }

    // 0x100ca5d00
    bool EventListeners<std::function<bool(input::gesture::GestureEvent_Swipe const&)>>::CallListeners <
        input::gesture::Gesture<input::gesture::GestureEvent_Swipe>::RunEvent(
            input::gesture::GestureEvent_Swipe const&)::{
        lambda(std::function<bool(input::gesture::GestureEvent_Swipe const&)> const&) #1
    }
    > (input::gesture::Gesture<input::gesture::GestureEvent_Swipe>::RunEvent(
          input::gesture::GestureEvent_Swipe const&)::{
        lambda(std::function<bool(input::gesture::GestureEvent_Swipe const&)> const&) #1
    } arg1) const {
        bool cVar1;
        _lambda_std__function<bool(input::gesture::GestureEvent_Swipe const&)> const___1_ _Stack0000000000000008;

        scoped_lock<std::mutex> local_30(*((this + 32)));
        auto puVar2 = HeapBeginPtr();
        auto puVar3 = end();
        bool bVar4 = puVar2 == puVar3;
        if (!bVar4) {
            do {
                if ((function<bool_(input::gesture::GestureEvent_Swipe const&)>*)*puVar2 !=
                    (function<bool_(input::gesture::GestureEvent_Swipe const&)>*)0) {
                    cVar1 = (input::gesture::GestureEvent_Swipe const&)->RunEvent()::{
                        lambda(std::function<bool(input::gesture::GestureEvent_Swipe const&)> const&) #1
                    }
                    ::operator()(&_Stack0000000000000008,
                                 (function<bool_(input::gesture::GestureEvent_Swipe const&)>*)*puVar2);
                    if (cVar1)
                        break;
                }
                puVar2 = puVar2 + 1;
                bVar4 = puVar2 == puVar3;
            } while (!bVar4);
        }
        return (bool)(~bVar4 & 1);
    }

} // namespace jag
