// libs/jtl/EventListeners.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag {
    template <
        typename...> // 14 instantiations, e.g. <std::function<bool ()> >, <std::function<bool (float, float)> >, <std::function<bool (float, float, float, float)> >
    class EventListeners {
    public:
        EventListeners();
        ~EventListeners();
        void Register(std::function<bool(int)>*);
        void Register(std::function<bool(input::TextCommand)>*);
        void Unregister(std::function<bool(int)>*);
        void Register(std::function<bool(float, float, float, float)>*);
        void Register(std::function<bool(int, int, int, int)>*);
        void Register(std::function<bool(unsigned long, float, float)>*);
        void Unregister(std::function<bool(float, float, float, float)>*);
        void Unregister(std::function<bool(int, int, int, int)>*);
        void Unregister(std::function<bool(unsigned long, float, float)>*);
        void Register(std::function<bool(float, float)>*);
        void Unregister(std::function<bool(float, float)>*);
        bool CallListeners<Window::SetSize(float, float)::$_0>(Window::SetSize(float, float)::$_0) const;
        void Register(std::function<bool()>*);
        void Unregister(std::function<bool()>*);
        bool CallListeners<Window::Update()::$_1>(Window::Update()::$_1) const;
        bool CallListeners < Window::OnClose()::$_3::operator()(BaseApp*) const ::{
            lambda(std::function<bool()>&) #1
        }
        > (Window::OnClose()::$_3::operator()(BaseApp*) const ::{ lambda(std::function<bool()>&) #1 }) const;
        void Register(std::function<bool(input::gesture::GestureEvent_Swipe const&)>*);
        void Register(std::function<bool(unsigned int, input::GamepadAxis, short)>*);
        void Register(std::function<bool(unsigned int, input::GamepadButton, bool)>*);
        void Register(std::function<bool(unsigned int, input::GamepadTrigger, unsigned char)>*);
        empty() const;
        void Reset();
        bool CallListeners < input::InputHandler::OnLMouseDown(float, float)::{
            lambda(std::function<bool(float, float)>&) #1
        }
        > (input::InputHandler::OnLMouseDown(float, float)::{ lambda(std::function<bool(float, float)>&) #1 }) const;
        bool CallListeners < input::InputHandler::OnLMouseUp(float, float)::{
            lambda(std::function<bool(float, float)> const&) #1
        }
        > (input::InputHandler::OnLMouseUp(float, float)::{
            lambda(std::function<bool(float, float)> const&) #1
        }) const;
        bool CallListeners < input::InputHandler::OnMMouseDown(float, float)::{
            lambda(std::function<bool(float, float)>&) #1
        }
        > (input::InputHandler::OnMMouseDown(float, float)::{ lambda(std::function<bool(float, float)>&) #1 }) const;
        bool CallListeners < input::InputHandler::OnMMouseUp(float, float)::{
            lambda(std::function<bool(float, float)> const&) #1
        }
        > (input::InputHandler::OnMMouseUp(float, float)::{
            lambda(std::function<bool(float, float)> const&) #1
        }) const;
        bool CallListeners < input::InputHandler::OnRMouseDown(float, float)::{
            lambda(std::function<bool(float, float)> const&) #1
        }
        > (input::InputHandler::OnRMouseDown(float, float)::{
            lambda(std::function<bool(float, float)> const&) #1
        }) const;
        bool CallListeners < input::InputHandler::OnRMouseUp(float, float)::{
            lambda(std::function<bool(float, float)> const&) #1
        }
        > (input::InputHandler::OnRMouseUp(float, float)::{
            lambda(std::function<bool(float, float)> const&) #1
        }) const;
        bool CallListeners < input::InputHandler::OnMouseMove(float, float)::{
            lambda(std::function<bool(float, float)> const&) #1
        }
        > (input::InputHandler::OnMouseMove(float, float)::{
            lambda(std::function<bool(float, float)> const&) #1
        }) const;
        bool CallListeners < input::InputHandler::OnMouseWheel(float, float, float, float)::{
            lambda(std::function<bool(float, float, float, float)> const&) #1
        }
        > (input::InputHandler::OnMouseWheel(float, float, float, float)::{
            lambda(std::function<bool(float, float, float, float)> const&) #1
        }) const;
        bool CallListeners < input::InputHandler::OnLowLevelMouseDown(int, int, int, int)::{
            lambda(std::function<bool(int, int, int, int)>&) #1
        }
        > (input::InputHandler::OnLowLevelMouseDown(int, int, int, int)::{
            lambda(std::function<bool(int, int, int, int)>&) #1
        }) const;
        bool CallListeners < input::InputHandler::OnLowLevelMouseMove(int, int, int, int)::{
            lambda(std::function<bool(int, int, int, int)>&) #1
        }
        > (input::InputHandler::OnLowLevelMouseMove(int, int, int, int)::{
            lambda(std::function<bool(int, int, int, int)>&) #1
        }) const;
        bool CallListeners < input::InputHandler::OnKeyDown(int)::{
            lambda(std::function<bool(int)> const&) #1
        }
        > (input::InputHandler::OnKeyDown(int)::{ lambda(std::function<bool(int)> const&) #1 }) const;
        bool CallListeners < input::InputHandler::OnKeyUp(int)::{
            lambda(std::function<bool(int)> const&) #1
        }
        > (input::InputHandler::OnKeyUp(int)::{ lambda(std::function<bool(int)> const&) #1 }) const;
        bool CallListeners < input::InputHandler::OnKeyChar(int)::{
            lambda(std::function<bool(int)> const&) #1
        }
        > (input::InputHandler::OnKeyChar(int)::{ lambda(std::function<bool(int)> const&) #1 }) const;
        bool CallListeners < input::InputHandler::OnFirstTouchDown(unsigned long, float, float)::{
            lambda(std::function<bool(unsigned long, float, float)> const&) #1
        }
        > (input::InputHandler::OnFirstTouchDown(unsigned long, float, float)::{
            lambda(std::function<bool(unsigned long, float, float)> const&) #1
        }) const;
        bool CallListeners < input::InputHandler::OnTouchDown(unsigned long, float, float)::{
            lambda(std::function<bool(unsigned long, float, float)> const&) #1
        }
        > (input::InputHandler::OnTouchDown(unsigned long, float, float)::{
            lambda(std::function<bool(unsigned long, float, float)> const&) #1
        }) const;
        bool CallListeners < input::InputHandler::OnTouchMove(unsigned long, float, float)::{
            lambda(std::function<bool(unsigned long, float, float)> const&) #1
        }
        > (input::InputHandler::OnTouchMove(unsigned long, float, float)::{
            lambda(std::function<bool(unsigned long, float, float)> const&) #1
        }) const;
        bool CallListeners < input::InputHandler::OnTouchUp(unsigned long, float, float)::{
            lambda(std::function<bool(unsigned long, float, float)> const&) #1
        }
        > (input::InputHandler::OnTouchUp(unsigned long, float, float)::{
            lambda(std::function<bool(unsigned long, float, float)> const&) #1
        }) const;
        bool CallListeners < input::InputHandler::OnTouchCanceled(unsigned long, float, float)::{
            lambda(std::function<bool(unsigned long, float, float)> const&) #1
        }
        > (input::InputHandler::OnTouchCanceled(unsigned long, float, float)::{
            lambda(std::function<bool(unsigned long, float, float)> const&) #1
        }) const;
        bool CallListeners < input::InputHandler::OnTextCommand(input::TextCommand)::{
            lambda(std::function<bool(input::TextCommand)>&) #1
        }
        > (input::InputHandler::OnTextCommand(input::TextCommand)::{
            lambda(std::function<bool(input::TextCommand)>&) #1
        }) const;
        bool CallListeners <
            input::gesture::Gesture<input::gesture::TouchPoint>::RunEvent(input::gesture::TouchPoint const&)::{
            lambda(std::function<bool(input::gesture::TouchPoint const&)> const&) #1
        }
        > (input::gesture::Gesture<input::gesture::TouchPoint>::RunEvent(input::gesture::TouchPoint const&)::{
            lambda(std::function<bool(input::gesture::TouchPoint const&)> const&) #1
        }) const;
        bool CallListeners < input::gesture::Gesture<input::gesture::GestureEvent_Pinch>::RunEvent(
                                 input::gesture::GestureEvent_Pinch const&)::{
            lambda(std::function<bool(input::gesture::GestureEvent_Pinch const&)> const&) #1
        }
        > (input::gesture::Gesture<input::gesture::GestureEvent_Pinch>::RunEvent(
              input::gesture::GestureEvent_Pinch const&)::{
            lambda(std::function<bool(input::gesture::GestureEvent_Pinch const&)> const&) #1
        }) const;
        bool CallListeners<input::gesture::Gesture<input::gesture::GestureEvent_Swipe>::RunEvent(
            input::gesture::GestureEvent_Swipe const&)::{
            lambda(std::function<bool(input::gesture::GestureEvent_Swipe const&)> const&) #1}>(
            input::gesture::Gesture<input::gesture::GestureEvent_Swipe>::RunEvent(
                input::gesture::GestureEvent_Swipe const&)::{
                lambda(std::function<bool(input::gesture::GestureEvent_Swipe const&)> const&) #1}) const;
    };

    // 0x100199300, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // EventListeners<std::function<bool (float, float, float, float)> >::EventListeners(): jumps straight to the base-object constructor

    // 0x100199310, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // EventListeners<std::function<bool (int)> >::EventListeners(): jumps straight to the base-object constructor

    // 0x100199320, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // EventListeners<std::function<bool (unsigned long, float, float)> >::EventListeners(): jumps straight to the base-object constructor

    // 0x100199330, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // EventListeners<std::function<bool (unsigned int, input::GamepadButton, bool)> >::EventListeners(): jumps straight to the base-object constructor

    // 0x100199340, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // EventListeners<std::function<bool (unsigned int, input::GamepadAxis, short)> >::EventListeners(): jumps straight to the base-object constructor

    // 0x100199350, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // EventListeners<std::function<bool (unsigned int, input::GamepadTrigger, unsigned char)> >::EventListeners(): jumps straight to the base-object constructor

    // 0x100199360, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // EventListeners<std::function<bool (int, int, int, int)> >::EventListeners(): jumps straight to the base-object constructor

    // 0x100199370, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // EventListeners<std::function<bool (input::TextCommand)> >::EventListeners(): jumps straight to the base-object constructor

    // 0x1001993a0, 16 bytes, complete-object destructor, inline, placed by class name
    // EventListeners<std::function<bool (input::TextCommand)> >::~EventListeners(): jumps straight to the base-object destructor

    // 0x1001993b0, 16 bytes, complete-object destructor, inline, placed by class name
    // EventListeners<std::function<bool (int, int, int, int)> >::~EventListeners(): jumps straight to the base-object destructor

    // 0x1001993c0, 16 bytes, complete-object destructor, inline, placed by class name
    // EventListeners<std::function<bool (unsigned int, input::GamepadTrigger, unsigned char)> >::~EventListeners(): jumps straight to the base-object destructor

    // 0x1001993d0, 16 bytes, complete-object destructor, inline, placed by class name
    // EventListeners<std::function<bool (unsigned int, input::GamepadAxis, short)> >::~EventListeners(): jumps straight to the base-object destructor

    // 0x1001993e0, 16 bytes, complete-object destructor, inline, placed by class name
    // EventListeners<std::function<bool (unsigned int, input::GamepadButton, bool)> >::~EventListeners(): jumps straight to the base-object destructor

    // 0x1001993f0, 16 bytes, complete-object destructor, inline, placed by class name
    // EventListeners<std::function<bool (unsigned long, float, float)> >::~EventListeners(): jumps straight to the base-object destructor

    // 0x100199400, 16 bytes, complete-object destructor, inline, placed by class name
    // EventListeners<std::function<bool (int)> >::~EventListeners(): jumps straight to the base-object destructor

    // 0x100199410, 16 bytes, complete-object destructor, inline, placed by class name
    // EventListeners<std::function<bool (float, float, float, float)> >::~EventListeners(): jumps straight to the base-object destructor

    // 0x100199460, 48 bytes, base-object constructor, inline, placed by class name
    // EventListeners<std::function<bool (float, float, float, float)> >::EventListeners()
    /* EventListeners<std::function<bool (float, float, float, float)> >::EventListeners() */

    void EventListeners<std::function<bool(float, float, float, float)>>::EventListeners(
        EventListeners<std::function<bool(float, float, float, float)>>* this) {
        eastl::vector<std::function<bool(float, float, float, float)>*, eastl::allocator>::vector(
            (vector<std::function<bool(float, float, float, float)>*, eastl::allocator>*)this);
        new ((this + 32)) std::mutex();
    }

    // 0x100199500, 48 bytes, base-object constructor, inline, placed by class name
    // EventListeners<std::function<bool (int)> >::EventListeners()
    /* EventListeners<std::function<bool (int)> >::EventListeners() */

    void EventListeners<std::function<bool(int)>>::EventListeners(EventListeners<std::function<bool(int)>>* this) {
        eastl::vector<std::function<bool(int)>*, eastl::allocator>::vector(
            (vector<std::function<bool(int)>*, eastl::allocator>*)this);
        new ((this + 32)) std::mutex();
    }

    // 0x1001995a0, 48 bytes, base-object constructor, inline, placed by class name
    // EventListeners<std::function<bool (unsigned long, float, float)> >::EventListeners()
    /* EventListeners<std::function<bool (unsigned long, float, float)> >::EventListeners() */

    void EventListeners<std::function<bool(unsigned long, float, float)>>::EventListeners(
        EventListeners<std::function<bool(unsigned long, float, float)>>* this) {
        eastl::vector<std::function<bool(unsigned long, float, float)>*, eastl::allocator>::vector(
            (vector<std::function<bool(unsigned long, float, float)>*, eastl::allocator>*)this);
        new ((this + 32)) std::mutex();
    }

    // 0x100199640, 48 bytes, base-object constructor, inline, placed by class name
    // EventListeners<std::function<bool (unsigned int, input::GamepadButton, bool)> >::EventListeners()
    /* EventListeners<std::function<bool (unsigned int, input::GamepadButton, bool)>
   >::EventListeners() */

    void EventListeners<std::function<bool(unsigned int, input::GamepadButton, bool)>>::EventListeners(
        EventListeners<std::function<bool(unsigned int, input::GamepadButton, bool)>>* this) {
        eastl::vector<std::function<bool(unsigned int, input::GamepadButton, bool)>*, eastl::allocator>::vector(
            (vector<std::function<bool(unsigned int, input::GamepadButton, bool)>*, eastl::allocator>*)this);
        new ((this + 32)) std::mutex();
    }

    // 0x1001996e0, 48 bytes, base-object constructor, inline, placed by class name
    // EventListeners<std::function<bool (unsigned int, input::GamepadAxis, short)> >::EventListeners()
    /* EventListeners<std::function<bool (unsigned int, input::GamepadAxis, short)>
   >::EventListeners() */

    void EventListeners<std::function<bool(unsigned int, input::GamepadAxis, short)>>::EventListeners(
        EventListeners<std::function<bool(unsigned int, input::GamepadAxis, short)>>* this) {
        eastl::vector<std::function<bool(unsigned int, input::GamepadAxis, short)>*, eastl::allocator>::vector(
            (vector<std::function<bool(unsigned int, input::GamepadAxis, short)>*, eastl::allocator>*)this);
        new ((this + 32)) std::mutex();
    }

    // 0x100199780, 48 bytes, base-object constructor, inline, placed by class name
    // EventListeners<std::function<bool (unsigned int, input::GamepadTrigger, unsigned char)> >::EventListeners()
    /* EventListeners<std::function<bool (unsigned int, input::GamepadTrigger, unsigned char)>
   >::EventListeners() */

    void EventListeners<std::function<bool(unsigned int, input::GamepadTrigger, unsigned char)>>::EventListeners(
        EventListeners<std::function<bool(unsigned int, input::GamepadTrigger, unsigned char)>>* this) {
        eastl::vector<std::function<bool(unsigned int, input::GamepadTrigger, unsigned char)>*, eastl::allocator>::
            vector((vector<std::function<bool(unsigned int, input::GamepadTrigger, unsigned char)>*,
                           eastl::allocator>*)this);
        new ((this + 32)) std::mutex();
    }

    // 0x100199820, 48 bytes, base-object constructor, inline, placed by class name
    // EventListeners<std::function<bool (int, int, int, int)> >::EventListeners()
    /* EventListeners<std::function<bool (int, int, int, int)> >::EventListeners() */

    void EventListeners<std::function<bool(int, int, int, int)>>::EventListeners(
        EventListeners<std::function<bool(int, int, int, int)>>* this) {
        eastl::vector<std::function<bool(int, int, int, int)>*, eastl::allocator>::vector(
            (vector<std::function<bool(int, int, int, int)>*, eastl::allocator>*)this);
        new ((this + 32)) std::mutex();
    }

    // 0x1001998c0, 48 bytes, base-object constructor, inline, placed by class name
    // EventListeners<std::function<bool (input::TextCommand)> >::EventListeners()
    /* EventListeners<std::function<bool (input::TextCommand)> >::EventListeners() */

    void EventListeners<std::function<bool(input::TextCommand)>>::EventListeners(
        EventListeners<std::function<bool(input::TextCommand)>>* this) {
        eastl::vector<std::function<bool(input::TextCommand)>*, eastl::allocator>::vector(
            (vector<std::function<bool(input::TextCommand)>*, eastl::allocator>*)this);
        new ((this + 32)) std::mutex();
    }

    // 0x100199ca0, 48 bytes, base-object destructor, inline, placed by class name
    // EventListeners<std::function<bool (input::TextCommand)> >::~EventListeners()
    /* EventListeners<std::function<bool (input::TextCommand)> >::~EventListeners() */

    void EventListeners<std::function<bool(input::TextCommand)>>::~EventListeners(
        EventListeners<std::function<bool(input::TextCommand)>>* this) {
        ((this + 32))->~mutex();
        eastl::vector<std::function<bool(input::TextCommand)>*, eastl::allocator>::~vector(
            (vector<std::function<bool(input::TextCommand)>*, eastl::allocator>*)this);
    }

    // 0x100199d20, 48 bytes, base-object destructor, inline, placed by class name
    // EventListeners<std::function<bool (int, int, int, int)> >::~EventListeners()
    /* EventListeners<std::function<bool (int, int, int, int)> >::~EventListeners() */

    void EventListeners<std::function<bool(int, int, int, int)>>::~EventListeners(
        EventListeners<std::function<bool(int, int, int, int)>>* this) {
        ((this + 32))->~mutex();
        eastl::vector<std::function<bool(int, int, int, int)>*, eastl::allocator>::~vector(
            (vector<std::function<bool(int, int, int, int)>*, eastl::allocator>*)this);
    }

    // 0x100199da0, 48 bytes, base-object destructor, inline, placed by class name
    // EventListeners<std::function<bool (unsigned int, input::GamepadTrigger, unsigned char)> >::~EventListeners()
    /* EventListeners<std::function<bool (unsigned int, input::GamepadTrigger, unsigned char)>
   >::~EventListeners() */

    void EventListeners<std::function<bool(unsigned int, input::GamepadTrigger, unsigned char)>>::~EventListeners(
        EventListeners<std::function<bool(unsigned int, input::GamepadTrigger, unsigned char)>>* this) {
        ((this + 32))->~mutex();
        eastl::vector<std::function<bool(unsigned int, input::GamepadTrigger, unsigned char)>*, eastl::allocator>::
            ~vector((vector<std::function<bool(unsigned int, input::GamepadTrigger, unsigned char)>*,
                            eastl::allocator>*)this);
    }

    // 0x100199e20, 48 bytes, base-object destructor, inline, placed by class name
    // EventListeners<std::function<bool (unsigned int, input::GamepadAxis, short)> >::~EventListeners()
    /* EventListeners<std::function<bool (unsigned int, input::GamepadAxis, short)>
   >::~EventListeners() */

    void EventListeners<std::function<bool(unsigned int, input::GamepadAxis, short)>>::~EventListeners(
        EventListeners<std::function<bool(unsigned int, input::GamepadAxis, short)>>* this) {
        ((this + 32))->~mutex();
        eastl::vector<std::function<bool(unsigned int, input::GamepadAxis, short)>*, eastl::allocator>::~vector(
            (vector<std::function<bool(unsigned int, input::GamepadAxis, short)>*, eastl::allocator>*)this);
    }

    // 0x100199ea0, 48 bytes, base-object destructor, inline, placed by class name
    // EventListeners<std::function<bool (unsigned int, input::GamepadButton, bool)> >::~EventListeners()
    /* EventListeners<std::function<bool (unsigned int, input::GamepadButton, bool)>
   >::~EventListeners() */

    void EventListeners<std::function<bool(unsigned int, input::GamepadButton, bool)>>::~EventListeners(
        EventListeners<std::function<bool(unsigned int, input::GamepadButton, bool)>>* this) {
        ((this + 32))->~mutex();
        eastl::vector<std::function<bool(unsigned int, input::GamepadButton, bool)>*, eastl::allocator>::~vector(
            (vector<std::function<bool(unsigned int, input::GamepadButton, bool)>*, eastl::allocator>*)this);
    }

    // 0x100199f20, 48 bytes, base-object destructor, inline, placed by class name
    // EventListeners<std::function<bool (unsigned long, float, float)> >::~EventListeners()
    /* EventListeners<std::function<bool (unsigned long, float, float)> >::~EventListeners() */

    void EventListeners<std::function<bool(unsigned long, float, float)>>::~EventListeners(
        EventListeners<std::function<bool(unsigned long, float, float)>>* this) {
        ((this + 32))->~mutex();
        eastl::vector<std::function<bool(unsigned long, float, float)>*, eastl::allocator>::~vector(
            (vector<std::function<bool(unsigned long, float, float)>*, eastl::allocator>*)this);
    }

    // 0x100199fa0, 48 bytes, base-object destructor, inline, placed by class name
    // EventListeners<std::function<bool (int)> >::~EventListeners()
    /* EventListeners<std::function<bool (int)> >::~EventListeners() */

    void EventListeners<std::function<bool(int)>>::~EventListeners(EventListeners<std::function<bool(int)>>* this) {
        ((this + 32))->~mutex();
        eastl::vector<std::function<bool(int)>*, eastl::allocator>::~vector(
            (vector<std::function<bool(int)>*, eastl::allocator>*)this);
    }

    // 0x10019a020, 48 bytes, base-object destructor, inline, placed by class name
    // EventListeners<std::function<bool (float, float, float, float)> >::~EventListeners()
    /* EventListeners<std::function<bool (float, float, float, float)> >::~EventListeners() */

    void EventListeners<std::function<bool(float, float, float, float)>>::~EventListeners(
        EventListeners<std::function<bool(float, float, float, float)>>* this) {
        ((this + 32))->~mutex();
        eastl::vector<std::function<bool(float, float, float, float)>*, eastl::allocator>::~vector(
            (vector<std::function<bool(float, float, float, float)>*, eastl::allocator>*)this);
    }

    // 0x100396f30, 176 bytes, inline, placed by class name
    // EventListeners<std::function<bool (int)> >::Register(std::function<bool (int)>*)
    /* EventListeners<std::function<bool (int)> >::Register(std::function<bool (int)>*) */

    void EventListeners<std::function<bool(int)>>::Register(EventListeners<std::function<bool(int)>>* this,
                                                            function* param_1) {
        function** ppfVar1;
        function** ppfVar2;
        undefined8 uVar3;
        function* local_28;
        scoped_lock<std::mutex> local_20[8];

        local_28 = param_1;
        std::scoped_lock<std::mutex>::scoped_lock(local_20, (mutex*)(this + 32));
        ppfVar1 = (function**)HeapBeginPtr();
        ppfVar2 = (function**)end();
        ppfVar1 = eastl::find<std::function<bool(input::TextCommand)>**, std::function<bool(input::TextCommand)>*>(
            ppfVar1, ppfVar2, &local_28);
        ppfVar2 = (function**)end();
        if (ppfVar1 == ppfVar2) {
            eastl::vector<std::function<bool(int)>*, eastl::allocator>::push_back(
                (vector<std::function<bool(int)>*, eastl::allocator>*)this, &local_28);
        } else {
            uVar3 = logger::default_logger();
            logger::Logger::Log(
                uVar3, 0, 3,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/EventListeners.h", 23,
                "Attempting to register the same event listener multiple times");
        }
        std::scoped_lock<std::mutex>::~scoped_lock(local_20);
    }

    // 0x100397170, 176 bytes, inline, placed by class name
    // EventListeners<std::function<bool (input::TextCommand)> >::Register(std::function<bool (input::TextCommand)>*)
    /* EventListeners<std::function<bool (input::TextCommand)> >::Register(std::function<bool
   (input::TextCommand)>*) */

    void EventListeners<std::function<bool(input::TextCommand)>>::Register(
        EventListeners<std::function<bool(input::TextCommand)>>* this, function* param_1) {
        function** ppfVar1;
        function** ppfVar2;
        undefined8 uVar3;
        function* local_28;
        scoped_lock<std::mutex> local_20[8];

        local_28 = param_1;
        std::scoped_lock<std::mutex>::scoped_lock(local_20, (mutex*)(this + 32));
        ppfVar1 = (function**)HeapBeginPtr();
        ppfVar2 = (function**)end();
        ppfVar1 = eastl::find<std::function<bool(input::TextCommand)>**, std::function<bool(input::TextCommand)>*>(
            ppfVar1, ppfVar2, &local_28);
        ppfVar2 = (function**)end();
        if (ppfVar1 == ppfVar2) {
            eastl::vector<std::function<bool(input::TextCommand)>*, eastl::allocator>::push_back(
                (vector<std::function<bool(input::TextCommand)>*, eastl::allocator>*)this, &local_28);
        } else {
            uVar3 = logger::default_logger();
            logger::Logger::Log(
                uVar3, 0, 3,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/EventListeners.h", 23,
                "Attempting to register the same event listener multiple times");
        }
        std::scoped_lock<std::mutex>::~scoped_lock(local_20);
    }

    // 0x1003973a0, 144 bytes, inline, placed by class name
    // EventListeners<std::function<bool (int)> >::Unregister(std::function<bool (int)>*)
    /* EventListeners<std::function<bool (int)> >::Unregister(std::function<bool (int)>*) */

    void EventListeners<std::function<bool(int)>>::Unregister(EventListeners<std::function<bool(int)>>* this,
                                                              function* param_1) {
        function** ppfVar1;
        function** ppfVar2;
        function* local_28;
        scoped_lock<std::mutex> local_20[8];

        local_28 = param_1;
        std::scoped_lock<std::mutex>::scoped_lock(local_20, (mutex*)(this + 32));
        ppfVar1 = (function**)HeapBeginPtr();
        ppfVar2 = (function**)end();
        ppfVar1 = eastl::find<std::function<bool(input::TextCommand)>**, std::function<bool(input::TextCommand)>*>(
            ppfVar1, ppfVar2, &local_28);
        ppfVar2 = (function**)end();
        if (ppfVar1 != ppfVar2) {
            eastl::vector<std::function<bool(int)>*, eastl::allocator>::erase(
                (vector<std::function<bool(int)>*, eastl::allocator>*)this, ppfVar1);
        }
        std::scoped_lock<std::mutex>::~scoped_lock(local_20);
    }

    // 0x100397480, 176 bytes, inline, placed by class name
    // EventListeners<std::function<bool (float, float, float, float)> >::Register(std::function<bool (float, float, float, float)>*)
    /* EventListeners<std::function<bool (float, float, float, float)>
   >::Register(std::function<bool (float, float, float, float)>*) */

    void EventListeners<std::function<bool(float, float, float, float)>>::Register(
        EventListeners<std::function<bool(float, float, float, float)>>* this, function* param_1) {
        function** ppfVar1;
        function** ppfVar2;
        undefined8 uVar3;
        function* local_28;
        scoped_lock<std::mutex> local_20[8];

        local_28 = param_1;
        std::scoped_lock<std::mutex>::scoped_lock(local_20, (mutex*)(this + 32));
        ppfVar1 = (function**)HeapBeginPtr();
        ppfVar2 = (function**)end();
        ppfVar1 = eastl::find<std::function<bool(input::TextCommand)>**, std::function<bool(input::TextCommand)>*>(
            ppfVar1, ppfVar2, &local_28);
        ppfVar2 = (function**)end();
        if (ppfVar1 == ppfVar2) {
            eastl::vector<std::function<bool(float, float, float, float)>*, eastl::allocator>::push_back(
                (vector<std::function<bool(float, float, float, float)>*, eastl::allocator>*)this, &local_28);
        } else {
            uVar3 = logger::default_logger();
            logger::Logger::Log(
                uVar3, 0, 3,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/EventListeners.h", 23,
                "Attempting to register the same event listener multiple times");
        }
        std::scoped_lock<std::mutex>::~scoped_lock(local_20);
    }

    // 0x1003976a0, 176 bytes, inline, placed by class name
    // EventListeners<std::function<bool (int, int, int, int)> >::Register(std::function<bool (int, int, int, int)>*)
    /* EventListeners<std::function<bool (int, int, int, int)> >::Register(std::function<bool (int,
   int, int, int)>*) */

    void EventListeners<std::function<bool(int, int, int, int)>>::Register(
        EventListeners<std::function<bool(int, int, int, int)>>* this, function* param_1) {
        function** ppfVar1;
        function** ppfVar2;
        undefined8 uVar3;
        function* local_28;
        scoped_lock<std::mutex> local_20[8];

        local_28 = param_1;
        std::scoped_lock<std::mutex>::scoped_lock(local_20, (mutex*)(this + 32));
        ppfVar1 = (function**)HeapBeginPtr();
        ppfVar2 = (function**)end();
        ppfVar1 = eastl::find<std::function<bool(input::TextCommand)>**, std::function<bool(input::TextCommand)>*>(
            ppfVar1, ppfVar2, &local_28);
        ppfVar2 = (function**)end();
        if (ppfVar1 == ppfVar2) {
            eastl::vector<std::function<bool(int, int, int, int)>*, eastl::allocator>::push_back(
                (vector<std::function<bool(int, int, int, int)>*, eastl::allocator>*)this, &local_28);
        } else {
            uVar3 = logger::default_logger();
            logger::Logger::Log(
                uVar3, 0, 3,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/EventListeners.h", 23,
                "Attempting to register the same event listener multiple times");
        }
        std::scoped_lock<std::mutex>::~scoped_lock(local_20);
    }

    // 0x1003978c0, 176 bytes, inline, placed by class name
    // EventListeners<std::function<bool (unsigned long, float, float)> >::Register(std::function<bool (unsigned long, float, float)>*)
    /* EventListeners<std::function<bool (unsigned long, float, float)>
   >::Register(std::function<bool (unsigned long, float, float)>*) */

    void EventListeners<std::function<bool(unsigned long, float, float)>>::Register(
        EventListeners<std::function<bool(unsigned long, float, float)>>* this, function* param_1) {
        function** ppfVar1;
        function** ppfVar2;
        undefined8 uVar3;
        function* local_28;
        scoped_lock<std::mutex> local_20[8];

        local_28 = param_1;
        std::scoped_lock<std::mutex>::scoped_lock(local_20, (mutex*)(this + 32));
        ppfVar1 = (function**)HeapBeginPtr();
        ppfVar2 = (function**)end();
        ppfVar1 = eastl::find<std::function<bool(input::TextCommand)>**, std::function<bool(input::TextCommand)>*>(
            ppfVar1, ppfVar2, &local_28);
        ppfVar2 = (function**)end();
        if (ppfVar1 == ppfVar2) {
            eastl::vector<std::function<bool(unsigned long, float, float)>*, eastl::allocator>::push_back(
                (vector<std::function<bool(unsigned long, float, float)>*, eastl::allocator>*)this, &local_28);
        } else {
            uVar3 = logger::default_logger();
            logger::Logger::Log(
                uVar3, 0, 3,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/EventListeners.h", 23,
                "Attempting to register the same event listener multiple times");
        }
        std::scoped_lock<std::mutex>::~scoped_lock(local_20);
    }

    // 0x100397ae0, 144 bytes, inline, placed by class name
    // EventListeners<std::function<bool (float, float, float, float)> >::Unregister(std::function<bool (float, float, float, float)>*)
    /* EventListeners<std::function<bool (float, float, float, float)>
   >::Unregister(std::function<bool (float, float, float, float)>*) */

    void EventListeners<std::function<bool(float, float, float, float)>>::Unregister(
        EventListeners<std::function<bool(float, float, float, float)>>* this, function* param_1) {
        function** ppfVar1;
        function** ppfVar2;
        function* local_28;
        scoped_lock<std::mutex> local_20[8];

        local_28 = param_1;
        std::scoped_lock<std::mutex>::scoped_lock(local_20, (mutex*)(this + 32));
        ppfVar1 = (function**)HeapBeginPtr();
        ppfVar2 = (function**)end();
        ppfVar1 = eastl::find<std::function<bool(input::TextCommand)>**, std::function<bool(input::TextCommand)>*>(
            ppfVar1, ppfVar2, &local_28);
        ppfVar2 = (function**)end();
        if (ppfVar1 != ppfVar2) {
            eastl::vector<std::function<bool(float, float, float, float)>*, eastl::allocator>::erase(
                (vector<std::function<bool(float, float, float, float)>*, eastl::allocator>*)this, ppfVar1);
        }
        std::scoped_lock<std::mutex>::~scoped_lock(local_20);
    }

    // 0x100397bc0, 144 bytes, inline, placed by class name
    // EventListeners<std::function<bool (int, int, int, int)> >::Unregister(std::function<bool (int, int, int, int)>*)
    /* EventListeners<std::function<bool (int, int, int, int)> >::Unregister(std::function<bool
   (int, int, int, int)>*) */

    void EventListeners<std::function<bool(int, int, int, int)>>::Unregister(
        EventListeners<std::function<bool(int, int, int, int)>>* this, function* param_1) {
        function** ppfVar1;
        function** ppfVar2;
        function* local_28;
        scoped_lock<std::mutex> local_20[8];

        local_28 = param_1;
        std::scoped_lock<std::mutex>::scoped_lock(local_20, (mutex*)(this + 32));
        ppfVar1 = (function**)HeapBeginPtr();
        ppfVar2 = (function**)end();
        ppfVar1 = eastl::find<std::function<bool(input::TextCommand)>**, std::function<bool(input::TextCommand)>*>(
            ppfVar1, ppfVar2, &local_28);
        ppfVar2 = (function**)end();
        if (ppfVar1 != ppfVar2) {
            eastl::vector<std::function<bool(int, int, int, int)>*, eastl::allocator>::erase(
                (vector<std::function<bool(int, int, int, int)>*, eastl::allocator>*)this, ppfVar1);
        }
        std::scoped_lock<std::mutex>::~scoped_lock(local_20);
    }

    // 0x100397ca0, 144 bytes, inline, placed by class name
    // EventListeners<std::function<bool (unsigned long, float, float)> >::Unregister(std::function<bool (unsigned long, float, float)>*)
    /* EventListeners<std::function<bool (unsigned long, float, float)>
   >::Unregister(std::function<bool (unsigned long, float, float)>*) */

    void EventListeners<std::function<bool(unsigned long, float, float)>>::Unregister(
        EventListeners<std::function<bool(unsigned long, float, float)>>* this, function* param_1) {
        function** ppfVar1;
        function** ppfVar2;
        function* local_28;
        scoped_lock<std::mutex> local_20[8];

        local_28 = param_1;
        std::scoped_lock<std::mutex>::scoped_lock(local_20, (mutex*)(this + 32));
        ppfVar1 = (function**)HeapBeginPtr();
        ppfVar2 = (function**)end();
        ppfVar1 = eastl::find<std::function<bool(input::TextCommand)>**, std::function<bool(input::TextCommand)>*>(
            ppfVar1, ppfVar2, &local_28);
        ppfVar2 = (function**)end();
        if (ppfVar1 != ppfVar2) {
            eastl::vector<std::function<bool(unsigned long, float, float)>*, eastl::allocator>::erase(
                (vector<std::function<bool(unsigned long, float, float)>*, eastl::allocator>*)this, ppfVar1);
        }
        std::scoped_lock<std::mutex>::~scoped_lock(local_20);
    }

    // 0x1003a16f0, 176 bytes, inline, placed by class name
    // EventListeners<std::function<bool (float, float)> >::Register(std::function<bool (float, float)>*)
    /* EventListeners<std::function<bool (float, float)> >::Register(std::function<bool (float,
   float)>*) */

    void
    EventListeners<std::function<bool(float, float)>>::Register(EventListeners<std::function<bool(float, float)>>* this,
                                                                function* param_1) {
        function** ppfVar1;
        function** ppfVar2;
        undefined8 uVar3;
        function* local_28;
        scoped_lock<std::mutex> local_20[8];

        local_28 = param_1;
        std::scoped_lock<std::mutex>::scoped_lock(local_20, (mutex*)(this + 32));
        ppfVar1 = (function**)HeapBeginPtr();
        ppfVar2 = (function**)end();
        ppfVar1 = eastl::find<std::function<bool(input::TextCommand)>**, std::function<bool(input::TextCommand)>*>(
            ppfVar1, ppfVar2, &local_28);
        ppfVar2 = (function**)end();
        if (ppfVar1 == ppfVar2) {
            eastl::vector<std::function<bool(float, float)>*, eastl::allocator>::push_back(
                (vector<std::function<bool(float, float)>*, eastl::allocator>*)this, &local_28);
        } else {
            uVar3 = logger::default_logger();
            logger::Logger::Log(
                uVar3, 0, 3,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/EventListeners.h", 23,
                "Attempting to register the same event listener multiple times");
        }
        std::scoped_lock<std::mutex>::~scoped_lock(local_20);
    }

    // 0x1003a17b0, 144 bytes, inline, placed by class name
    // EventListeners<std::function<bool (float, float)> >::Unregister(std::function<bool (float, float)>*)
    /* EventListeners<std::function<bool (float, float)> >::Unregister(std::function<bool (float,
   float)>*) */

    void EventListeners<std::function<bool(float, float)>>::Unregister(
        EventListeners<std::function<bool(float, float)>>* this, function* param_1) {
        function** ppfVar1;
        function** ppfVar2;
        function* local_28;
        scoped_lock<std::mutex> local_20[8];

        local_28 = param_1;
        std::scoped_lock<std::mutex>::scoped_lock(local_20, (mutex*)(this + 32));
        ppfVar1 = (function**)HeapBeginPtr();
        ppfVar2 = (function**)end();
        ppfVar1 = eastl::find<std::function<bool(input::TextCommand)>**, std::function<bool(input::TextCommand)>*>(
            ppfVar1, ppfVar2, &local_28);
        ppfVar2 = (function**)end();
        if (ppfVar1 != ppfVar2) {
            eastl::vector<std::function<bool(float, float)>*, eastl::allocator>::erase(
                (vector<std::function<bool(float, float)>*, eastl::allocator>*)this, ppfVar1);
        }
        std::scoped_lock<std::mutex>::~scoped_lock(local_20);
    }

    // 0x1003a1970, 176 bytes, inline, placed by class name
    // bool EventListeners<std::function<bool (float, float)> >::CallListeners<Window::SetSize(float, float)::$_0>(Window::SetSize(float, float)::$_0) const
    /* bool EventListeners<std::function<bool (float, float)>
   >::CallListeners<Window::SetSize(float, float)::$_0>(Window::SetSize(float,
   float)::$_0) const */

    bool EventListeners<std::function<bool(float, float)>>::CallListeners<Window::SetSize(float, float)::__0>(
        undefined8 param_1, EventListeners<std::function<bool(float, float)>>* this) {
        undefined8* puVar2;
        undefined8* puVar3;
        bool bVar4;
        undefined8 local_38;
        scoped_lock<std::mutex> local_30[8];

        local_38 = param_1;
        std::scoped_lock<std::mutex>::scoped_lock(local_30, (mutex*)(this + 32));
        puVar2 = (undefined8*)HeapBeginPtr();
        puVar3 = (undefined8*)end();
        bVar4 = puVar2 == puVar3;
        if (!bVar4) {
            do {
                if ((function*)*puVar2 != (function*)0) {
                    if (float->SetSize(float)::$_0::operator()((__0*)&local_38, (function*)*puVar2) != '\0')
                        break;
                }
                puVar2 = puVar2 + 1;
                bVar4 = puVar2 == puVar3;
            } while (!bVar4);
        }
        std::scoped_lock<std::mutex>::~scoped_lock(local_30);
        return (bool)(~bVar4 & 1);
    }

    // 0x1003a1a30, 176 bytes, inline, placed by class name
    // EventListeners<std::function<bool ()> >::Register(std::function<bool ()>*)
    /* EventListeners<std::function<bool ()> >::Register(std::function<bool ()>*) */

    void EventListeners<std::function<bool()>>::Register(EventListeners<std::function<bool()>>* this,
                                                         function* param_1) {
        function** ppfVar1;
        function** ppfVar2;
        undefined8 uVar3;
        function* local_28;
        scoped_lock<std::mutex> local_20[8];

        local_28 = param_1;
        std::scoped_lock<std::mutex>::scoped_lock(local_20, (mutex*)(this + 32));
        ppfVar1 = (function**)HeapBeginPtr();
        ppfVar2 = (function**)end();
        ppfVar1 = eastl::find<std::function<bool(input::TextCommand)>**, std::function<bool(input::TextCommand)>*>(
            ppfVar1, ppfVar2, &local_28);
        ppfVar2 = (function**)end();
        if (ppfVar1 == ppfVar2) {
            eastl::vector<std::function<bool()>*, eastl::allocator>::push_back(
                (vector<std::function<bool()>*, eastl::allocator>*)this, &local_28);
        } else {
            uVar3 = logger::default_logger();
            logger::Logger::Log(
                uVar3, 0, 3,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/EventListeners.h", 23,
                "Attempting to register the same event listener multiple times");
        }
        std::scoped_lock<std::mutex>::~scoped_lock(local_20);
    }

    // 0x1003a1af0, 144 bytes, inline, placed by class name
    // EventListeners<std::function<bool ()> >::Unregister(std::function<bool ()>*)
    /* EventListeners<std::function<bool ()> >::Unregister(std::function<bool ()>*) */

    void EventListeners<std::function<bool()>>::Unregister(EventListeners<std::function<bool()>>* this,
                                                           function* param_1) {
        function** ppfVar1;
        function** ppfVar2;
        function* local_28;
        scoped_lock<std::mutex> local_20[8];

        local_28 = param_1;
        std::scoped_lock<std::mutex>::scoped_lock(local_20, (mutex*)(this + 32));
        ppfVar1 = (function**)HeapBeginPtr();
        ppfVar2 = (function**)end();
        ppfVar1 = eastl::find<std::function<bool(input::TextCommand)>**, std::function<bool(input::TextCommand)>*>(
            ppfVar1, ppfVar2, &local_28);
        ppfVar2 = (function**)end();
        if (ppfVar1 != ppfVar2) {
            eastl::vector<std::function<bool()>*, eastl::allocator>::erase(
                (vector<std::function<bool()>*, eastl::allocator>*)this, ppfVar1);
        }
        std::scoped_lock<std::mutex>::~scoped_lock(local_20);
    }

    // 0x1003a1de0, 160 bytes, inline, placed by class name
    // bool EventListeners<std::function<bool (float, float)> >::CallListeners<Window::Update()::$_1>(Window::Update()::$_1) const
    /* bool EventListeners<std::function<bool (float, float)>
   >::CallListeners<Window::Update()::$_1>(Window::Update()::$_1) const */

    bool EventListeners<std::function<bool(float, float)>>::CallListeners<Window::Update()::__1>(
        undefined8 param_1, EventListeners<std::function<bool(float, float)>>* this) {
        char cVar1;
        undefined8* puVar3;
        undefined8* puVar4;
        undefined8 local_30;
        scoped_lock<std::mutex> local_28[8];

        local_30 = param_1;
        std::scoped_lock<std::mutex>::scoped_lock(local_28, (mutex*)(this + 32));
        puVar4 = (undefined8*)HeapBeginPtr();
        puVar3 = (undefined8*)end();
        if (puVar4 != puVar3) {
            do {
                while ((function*)*puVar4 != (function*)0) {
                    cVar1 = Window::Update()::$_1::operator()((__1*)&local_30, (function*)*puVar4);
                    puVar4 = puVar4 + 1;
                    if (cVar1 != '\0' || puVar4 == puVar3)
                        goto LAB_1003a1e57;
                }
                puVar4 = puVar4 + 1;
            } while (puVar4 != puVar3);
        }
    LAB_1003a1e57:
        return (bool)std::scoped_lock<std::mutex>::~scoped_lock(local_28);
    }

    // 0x1003a4f40, 16 bytes, complete-object constructor, inline, placed by class name
    // EventListeners<std::function<bool (float, float)> >::EventListeners(): jumps straight to the base-object constructor

    // 0x1003a4f50, 16 bytes, complete-object constructor, inline, placed by class name
    // EventListeners<std::function<bool ()> >::EventListeners(): jumps straight to the base-object constructor

    // 0x1003a5950, 16 bytes, complete-object destructor, inline, placed by class name
    // EventListeners<std::function<bool ()> >::~EventListeners(): jumps straight to the base-object destructor

    // 0x1003a5960, 16 bytes, complete-object destructor, inline, placed by class name
    // EventListeners<std::function<bool (float, float)> >::~EventListeners(): jumps straight to the base-object destructor

    // 0x1003a6bf0, 48 bytes, base-object constructor, inline, placed by class name
    // EventListeners<std::function<bool (float, float)> >::EventListeners()
    /* EventListeners<std::function<bool (float, float)> >::EventListeners() */

    void EventListeners<std::function<bool(float, float)>>::EventListeners(
        EventListeners<std::function<bool(float, float)>>* this) {
        eastl::vector<std::function<bool(float, float)>*, eastl::allocator>::vector(
            (vector<std::function<bool(float, float)>*, eastl::allocator>*)this);
        new ((this + 32)) std::mutex();
    }

    // 0x1003a6c90, 48 bytes, base-object constructor, inline, placed by class name
    // EventListeners<std::function<bool ()> >::EventListeners()
    /* EventListeners<std::function<bool ()> >::EventListeners() */

    void EventListeners<std::function<bool()>>::EventListeners(EventListeners<std::function<bool()>>* this) {
        eastl::vector<std::function<bool()>*, eastl::allocator>::vector(
            (vector<std::function<bool()>*, eastl::allocator>*)this);
        new ((this + 32)) std::mutex();
    }

    // 0x1003a7320, 48 bytes, base-object destructor, inline, placed by class name
    // EventListeners<std::function<bool ()> >::~EventListeners()
    /* EventListeners<std::function<bool ()> >::~EventListeners() */

    void EventListeners<std::function<bool()>>::~EventListeners(EventListeners<std::function<bool()>>* this) {
        ((this + 32))->~mutex();
        eastl::vector<std::function<bool()>*, eastl::allocator>::~vector(
            (vector<std::function<bool()>*, eastl::allocator>*)this);
    }

    // 0x1003a73a0, 48 bytes, base-object destructor, inline, placed by class name
    // EventListeners<std::function<bool (float, float)> >::~EventListeners()
    /* EventListeners<std::function<bool (float, float)> >::~EventListeners() */

    void EventListeners<std::function<bool(float, float)>>::~EventListeners(
        EventListeners<std::function<bool(float, float)>>* this) {
        ((this + 32))->~mutex();
        eastl::vector<std::function<bool(float, float)>*, eastl::allocator>::~vector(
            (vector<std::function<bool(float, float)>*, eastl::allocator>*)this);
    }

    // 0x1003a9c60, 144 bytes, inline, placed by class name
    // bool EventListeners<std::function<bool ()> >::CallListeners<Window::OnClose()::$_3::operator()(BaseApp*) const::{lambda(std::function<bool ()>&)#1}>(Window::OnClose()::$_3::operator()(BaseApp*) const::{lambda(std::function<bool ()>&)#1}) const
    /* bool EventListeners<std::function<bool ()>
   >::CallListeners<Window::OnClose()::$_3::TEMPNAMEPLACEHOLDERVALUE(BaseApp*)
   const::{lambda(std::function<bool
   ()>&)#1}>(Window::OnClose()::$_3::TEMPNAMEPLACEHOLDERVALUE(BaseApp*)
   const::{lambda(std::function<bool ()>&)#1}) const */

    bool EventListeners<std::function<bool()>>::operator()(EventListeners<std::function<bool()>>* this) {
        undefined8* puVar1;
        undefined8* puVar2;
        _func_TEMPNAMEPLACEHOLDERVALUE_BaseApp_ptr* p_Var3;
        mutex* pmVar4;
        scoped_lock<std::mutex> local_28[8];

        pmVar4 = (mutex*)(this + 32);
        std::scoped_lock<std::mutex>::scoped_lock(local_28, pmVar4);
        puVar1 = (undefined8*)HeapBeginPtr();
        puVar2 = (undefined8*)end();
        while ((
            puVar1 != puVar2 &&
            (((_lambda_std__function<bool()> ___1_*)*puVar1 == (_lambda_std__function<bool()> ___1_*)0 ||
              (p_Var3 = const ::{ lambda(std::function<bool()>&) #1 } ::operator()((_lambda_std__function<bool()> ___1_*)*puVar1, (function*)pmVar4), (char)p_Var3 == '\0'))))) {
            puVar1 = puVar1 + 1;
        }
        std::scoped_lock<std::mutex>::~scoped_lock(local_28);
        return (bool)(~(puVar1 == puVar2) & 1);
    }

    // 0x1006ae5c0, 16 bytes, complete-object constructor, inline, placed by class name
    // EventListeners<std::function<bool (input::gesture::GestureEvent_Swipe const&)> >::EventListeners(): jumps straight to the base-object constructor

    // 0x1006ae5d0, 48 bytes, base-object constructor, inline, placed by class name
    // EventListeners<std::function<bool (input::gesture::GestureEvent_Swipe const&)> >::EventListeners()
    /* EventListeners<std::function<bool (input::gesture::GestureEvent_Swipe const&)>
   >::EventListeners() */

    void EventListeners<std::function<bool(input::gesture::GestureEvent_Swipe_const&)>>::EventListeners(
        EventListeners<std::function<bool(input::gesture::GestureEvent_Swipe_const&)>>* this) {
        eastl::vector<std::function<bool(input::gesture::GestureEvent_Swipe_const&)>*, eastl::allocator>::vector(
            (vector<std::function<bool(input::gesture::GestureEvent_Swipe_const&)>*, eastl::allocator>*)this);
        new ((this + 32)) std::mutex();
    }

    // 0x1006bc6b0, 176 bytes, inline, placed by class name
    // EventListeners<std::function<bool (input::gesture::GestureEvent_Swipe const&)> >::Register(std::function<bool (input::gesture::GestureEvent_Swipe const&)>*)
    /* EventListeners<std::function<bool (input::gesture::GestureEvent_Swipe const&)>
   >::Register(std::function<bool (input::gesture::GestureEvent_Swipe const&)>*) */

    void EventListeners<std::function<bool(input::gesture::GestureEvent_Swipe_const&)>>::Register(
        EventListeners<std::function<bool(input::gesture::GestureEvent_Swipe_const&)>>* this, function* param_1) {
        function** ppfVar1;
        function** ppfVar2;
        undefined8 uVar3;
        function* local_28;
        scoped_lock<std::mutex> local_20[8];

        local_28 = param_1;
        std::scoped_lock<std::mutex>::scoped_lock(local_20, (mutex*)(this + 32));
        ppfVar1 = (function**)HeapBeginPtr();
        ppfVar2 = (function**)end();
        ppfVar1 = eastl::find<std::function<bool(input::TextCommand)>**, std::function<bool(input::TextCommand)>*>(
            ppfVar1, ppfVar2, &local_28);
        ppfVar2 = (function**)end();
        if (ppfVar1 == ppfVar2) {
            eastl::vector<std::function<bool(input::gesture::GestureEvent_Swipe_const&)>*, eastl::allocator>::push_back(
                (vector<std::function<bool(input::gesture::GestureEvent_Swipe_const&)>*, eastl::allocator>*)this,
                &local_28);
        } else {
            uVar3 = logger::default_logger();
            logger::Logger::Log(
                uVar3, 0, 3,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/EventListeners.h", 23,
                "Attempting to register the same event listener multiple times");
        }
        std::scoped_lock<std::mutex>::~scoped_lock(local_20);
    }

    // 0x1006e9200, 176 bytes, inline, placed by class name
    // EventListeners<std::function<bool (unsigned int, input::GamepadAxis, short)> >::Register(std::function<bool (unsigned int, input::GamepadAxis, short)>*)
    /* EventListeners<std::function<bool (unsigned int, input::GamepadAxis, short)>
   >::Register(std::function<bool (unsigned int, input::GamepadAxis, short)>*) */

    void EventListeners<std::function<bool(unsigned int, input::GamepadAxis, short)>>::Register(
        EventListeners<std::function<bool(unsigned int, input::GamepadAxis, short)>>* this, function* param_1) {
        function** ppfVar1;
        function** ppfVar2;
        undefined8 uVar3;
        function* local_28;
        scoped_lock<std::mutex> local_20[8];

        local_28 = param_1;
        std::scoped_lock<std::mutex>::scoped_lock(local_20, (mutex*)(this + 32));
        ppfVar1 = (function**)HeapBeginPtr();
        ppfVar2 = (function**)end();
        ppfVar1 = eastl::find<std::function<bool(input::TextCommand)>**, std::function<bool(input::TextCommand)>*>(
            ppfVar1, ppfVar2, &local_28);
        ppfVar2 = (function**)end();
        if (ppfVar1 == ppfVar2) {
            eastl::vector<std::function<bool(unsigned int, input::GamepadAxis, short)>*, eastl::allocator>::push_back(
                (vector<std::function<bool(unsigned int, input::GamepadAxis, short)>*, eastl::allocator>*)this,
                &local_28);
        } else {
            uVar3 = logger::default_logger();
            logger::Logger::Log(
                uVar3, 0, 3,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/EventListeners.h", 23,
                "Attempting to register the same event listener multiple times");
        }
        std::scoped_lock<std::mutex>::~scoped_lock(local_20);
    }

    // 0x1006e9420, 176 bytes, inline, placed by class name
    // EventListeners<std::function<bool (unsigned int, input::GamepadButton, bool)> >::Register(std::function<bool (unsigned int, input::GamepadButton, bool)>*)
    /* EventListeners<std::function<bool (unsigned int, input::GamepadButton, bool)>
   >::Register(std::function<bool (unsigned int, input::GamepadButton, bool)>*) */

    void EventListeners<std::function<bool(unsigned int, input::GamepadButton, bool)>>::Register(
        EventListeners<std::function<bool(unsigned int, input::GamepadButton, bool)>>* this, function* param_1) {
        function** ppfVar1;
        function** ppfVar2;
        undefined8 uVar3;
        function* local_28;
        scoped_lock<std::mutex> local_20[8];

        local_28 = param_1;
        std::scoped_lock<std::mutex>::scoped_lock(local_20, (mutex*)(this + 32));
        ppfVar1 = (function**)HeapBeginPtr();
        ppfVar2 = (function**)end();
        ppfVar1 = eastl::find<std::function<bool(input::TextCommand)>**, std::function<bool(input::TextCommand)>*>(
            ppfVar1, ppfVar2, &local_28);
        ppfVar2 = (function**)end();
        if (ppfVar1 == ppfVar2) {
            eastl::vector<std::function<bool(unsigned int, input::GamepadButton, bool)>*, eastl::allocator>::push_back(
                (vector<std::function<bool(unsigned int, input::GamepadButton, bool)>*, eastl::allocator>*)this,
                &local_28);
        } else {
            uVar3 = logger::default_logger();
            logger::Logger::Log(
                uVar3, 0, 3,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/EventListeners.h", 23,
                "Attempting to register the same event listener multiple times");
        }
        std::scoped_lock<std::mutex>::~scoped_lock(local_20);
    }

    // 0x1006e9640, 176 bytes, inline, placed by class name
    // EventListeners<std::function<bool (unsigned int, input::GamepadTrigger, unsigned char)> >::Register(std::function<bool (unsigned int, input::GamepadTrigger, unsigned char)>*)
    /* EventListeners<std::function<bool (unsigned int, input::GamepadTrigger, unsigned char)>
   >::Register(std::function<bool (unsigned int, input::GamepadTrigger, unsigned char)>*) */

    void EventListeners<std::function<bool(unsigned int, input::GamepadTrigger, unsigned char)>>::Register(
        EventListeners<std::function<bool(unsigned int, input::GamepadTrigger, unsigned char)>>* this,
        function* param_1) {
        function** ppfVar1;
        function** ppfVar2;
        undefined8 uVar3;
        function* local_28;
        scoped_lock<std::mutex> local_20[8];

        local_28 = param_1;
        std::scoped_lock<std::mutex>::scoped_lock(local_20, (mutex*)(this + 32));
        ppfVar1 = (function**)HeapBeginPtr();
        ppfVar2 = (function**)end();
        ppfVar1 = eastl::find<std::function<bool(input::TextCommand)>**, std::function<bool(input::TextCommand)>*>(
            ppfVar1, ppfVar2, &local_28);
        ppfVar2 = (function**)end();
        if (ppfVar1 == ppfVar2) {
            eastl::vector<std::function<bool(unsigned int, input::GamepadTrigger, unsigned char)>*, eastl::allocator>::
                push_back((vector<std::function<bool(unsigned int, input::GamepadTrigger, unsigned char)>*,
                                  eastl::allocator>*)this,
                          &local_28);
        } else {
            uVar3 = logger::default_logger();
            logger::Logger::Log(
                uVar3, 0, 3,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/EventListeners.h", 23,
                "Attempting to register the same event listener multiple times");
        }
        std::scoped_lock<std::mutex>::~scoped_lock(local_20);
    }

    // 0x100c9dab0, 64 bytes, inline, placed by class name
    // EventListeners<std::function<bool (float, float)> >::empty() const
    /* EventListeners<std::function<bool (float, float, float, float)> >::empty() const */

    undefined4 EventListeners<std::function<bool(float, float, float, float)>>::empty(
        EventListeners<std::function<bool(float, float, float, float)>>* this) {
        undefined4 uVar1;
        scoped_lock<std::mutex> local_20[8];

        std::scoped_lock<std::mutex>::scoped_lock(local_20, (mutex*)(this + 32));
        uVar1 = empty();
        std::scoped_lock<std::mutex>::~scoped_lock(local_20);
        return uVar1;
    }

    // 0x100c9dc20, 64 bytes, inline, placed by class name
    // EventListeners<std::function<bool (float, float)> >::Reset()
    /* EventListeners<std::function<bool (float, float, float, float)> >::Reset() */

    void EventListeners<std::function<bool(float, float, float, float)>>::Reset(
        EventListeners<std::function<bool(float, float, float, float)>>* this) {
        scoped_lock<std::mutex> local_20[8];

        std::scoped_lock<std::mutex>::scoped_lock(local_20, (mutex*)(this + 32));
        eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
        std::scoped_lock<std::mutex>::~scoped_lock(local_20);
    }

    // 0x100ca21a0, 176 bytes, inline, placed by class name
    // bool EventListeners<std::function<bool (float, float)> >::CallListeners<input::InputHandler::OnLMouseDown(float, float)::{lambda(std::function<bool (float, float)>&)#1}>(input::InputHandler::OnLMouseDown(float, float)::{lambda(std::function<bool (float, float)>&)#1}) const
    /* bool EventListeners<std::function<bool (float, float)>
   >::CallListeners<input::InputHandler::OnLMouseDown(float, float)::{lambda(std::function<bool
   (float, float)>&)#1}>(input::InputHandler::OnLMouseDown(float,
   float)::{lambda(std::function<bool (float, float)>&)#1}) const */

    bool EventListeners<std::function<bool(float, float)>>::CallListeners<
        input::InputHandler::OnLMouseDown(float, float)::_lambda(std::function<bool(float, float)>&) _1_>(
        undefined8 param_1, EventListeners<std::function<bool(float, float)>>* this) {
        char cVar1;
        undefined8* puVar2;
        undefined8* puVar3;
        bool bVar4;
        undefined8 local_38;
        scoped_lock<std::mutex> local_30[8];

        local_38 = param_1;
        std::scoped_lock<std::mutex>::scoped_lock(local_30, (mutex*)(this + 32));
        puVar2 = (undefined8*)HeapBeginPtr();
        puVar3 = (undefined8*)end();
        bVar4 = puVar2 == puVar3;
        if (!bVar4) {
            do {
                if ((function*)*puVar2 != (function*)0) {
                    cVar1 = float->OnLMouseUp(float)::{
                        lambda(std::function<bool(float, float)> const&) #1
                    }
                    ::operator()((_lambda_std__function<bool(float, float)> const___1_*)&local_38, (function*)*puVar2);
                    if (cVar1 != '\0')
                        break;
                }
                puVar2 = puVar2 + 1;
                bVar4 = puVar2 == puVar3;
            } while (!bVar4);
        }
        std::scoped_lock<std::mutex>::~scoped_lock(local_30);
        return (bool)(~bVar4 & 1);
    }

    // 0x100ca22a0, 176 bytes, inline, placed by class name
    // bool EventListeners<std::function<bool (float, float)> >::CallListeners<input::InputHandler::OnLMouseUp(float, float)::{lambda(std::function<bool (float, float)> const&)#1}>(input::InputHandler::OnLMouseUp(float, float)::{lambda(std::function<bool (float, float)> const&)#1}) const
    /* bool EventListeners<std::function<bool (float, float)>
   >::CallListeners<input::InputHandler::OnLMouseUp(float, float)::{lambda(std::function<bool
   (float, float)> const&)#1}>(input::InputHandler::OnLMouseUp(float,
   float)::{lambda(std::function<bool (float, float)> const&)#1}) const */

    bool EventListeners<std::function<bool(float, float)>>::CallListeners<
        input::InputHandler::OnLMouseUp(float, float)::_lambda(std::function<bool(float, float)> const&) _1_>(
        undefined8 param_1, EventListeners<std::function<bool(float, float)>>* this) {
        char cVar1;
        undefined8* puVar2;
        undefined8* puVar3;
        bool bVar4;
        undefined8 local_38;
        scoped_lock<std::mutex> local_30[8];

        local_38 = param_1;
        std::scoped_lock<std::mutex>::scoped_lock(local_30, (mutex*)(this + 32));
        puVar2 = (undefined8*)HeapBeginPtr();
        puVar3 = (undefined8*)end();
        bVar4 = puVar2 == puVar3;
        if (!bVar4) {
            do {
                if ((function*)*puVar2 != (function*)0) {
                    cVar1 = float->OnLMouseUp(float)::{
                        lambda(std::function<bool(float, float)> const&) #1
                    }
                    ::operator()((_lambda_std__function<bool(float, float)> const___1_*)&local_38, (function*)*puVar2);
                    if (cVar1 != '\0')
                        break;
                }
                puVar2 = puVar2 + 1;
                bVar4 = puVar2 == puVar3;
            } while (!bVar4);
        }
        std::scoped_lock<std::mutex>::~scoped_lock(local_30);
        return (bool)(~bVar4 & 1);
    }

    // 0x100ca2350, 176 bytes, inline, placed by class name
    // bool EventListeners<std::function<bool (float, float)> >::CallListeners<input::InputHandler::OnMMouseDown(float, float)::{lambda(std::function<bool (float, float)>&)#1}>(input::InputHandler::OnMMouseDown(float, float)::{lambda(std::function<bool (float, float)>&)#1}) const
    /* bool EventListeners<std::function<bool (float, float)>
   >::CallListeners<input::InputHandler::OnMMouseDown(float, float)::{lambda(std::function<bool
   (float, float)>&)#1}>(input::InputHandler::OnMMouseDown(float,
   float)::{lambda(std::function<bool (float, float)>&)#1}) const */

    bool EventListeners<std::function<bool(float, float)>>::CallListeners<
        input::InputHandler::OnMMouseDown(float, float)::_lambda(std::function<bool(float, float)>&) _1_>(
        undefined8 param_1, EventListeners<std::function<bool(float, float)>>* this) {
        char cVar1;
        undefined8* puVar2;
        undefined8* puVar3;
        bool bVar4;
        undefined8 local_38;
        scoped_lock<std::mutex> local_30[8];

        local_38 = param_1;
        std::scoped_lock<std::mutex>::scoped_lock(local_30, (mutex*)(this + 32));
        puVar2 = (undefined8*)HeapBeginPtr();
        puVar3 = (undefined8*)end();
        bVar4 = puVar2 == puVar3;
        if (!bVar4) {
            do {
                if ((function*)*puVar2 != (function*)0) {
                    cVar1 = float->OnLMouseUp(float)::{
                        lambda(std::function<bool(float, float)> const&) #1
                    }
                    ::operator()((_lambda_std__function<bool(float, float)> const___1_*)&local_38, (function*)*puVar2);
                    if (cVar1 != '\0')
                        break;
                }
                puVar2 = puVar2 + 1;
                bVar4 = puVar2 == puVar3;
            } while (!bVar4);
        }
        std::scoped_lock<std::mutex>::~scoped_lock(local_30);
        return (bool)(~bVar4 & 1);
    }

    // 0x100ca2400, 176 bytes, inline, placed by class name
    // bool EventListeners<std::function<bool (float, float)> >::CallListeners<input::InputHandler::OnMMouseUp(float, float)::{lambda(std::function<bool (float, float)> const&)#1}>(input::InputHandler::OnMMouseUp(float, float)::{lambda(std::function<bool (float, float)> const&)#1}) const
    /* bool EventListeners<std::function<bool (float, float)>
   >::CallListeners<input::InputHandler::OnMMouseUp(float, float)::{lambda(std::function<bool
   (float, float)> const&)#1}>(input::InputHandler::OnMMouseUp(float,
   float)::{lambda(std::function<bool (float, float)> const&)#1}) const */

    bool EventListeners<std::function<bool(float, float)>>::CallListeners<
        input::InputHandler::OnMMouseUp(float, float)::_lambda(std::function<bool(float, float)> const&) _1_>(
        undefined8 param_1, EventListeners<std::function<bool(float, float)>>* this) {
        char cVar1;
        undefined8* puVar2;
        undefined8* puVar3;
        bool bVar4;
        undefined8 local_38;
        scoped_lock<std::mutex> local_30[8];

        local_38 = param_1;
        std::scoped_lock<std::mutex>::scoped_lock(local_30, (mutex*)(this + 32));
        puVar2 = (undefined8*)HeapBeginPtr();
        puVar3 = (undefined8*)end();
        bVar4 = puVar2 == puVar3;
        if (!bVar4) {
            do {
                if ((function*)*puVar2 != (function*)0) {
                    cVar1 = float->OnLMouseUp(float)::{
                        lambda(std::function<bool(float, float)> const&) #1
                    }
                    ::operator()((_lambda_std__function<bool(float, float)> const___1_*)&local_38, (function*)*puVar2);
                    if (cVar1 != '\0')
                        break;
                }
                puVar2 = puVar2 + 1;
                bVar4 = puVar2 == puVar3;
            } while (!bVar4);
        }
        std::scoped_lock<std::mutex>::~scoped_lock(local_30);
        return (bool)(~bVar4 & 1);
    }

    // 0x100ca24b0, 176 bytes, inline, placed by class name
    // bool EventListeners<std::function<bool (float, float)> >::CallListeners<input::InputHandler::OnRMouseDown(float, float)::{lambda(std::function<bool (float, float)> const&)#1}>(input::InputHandler::OnRMouseDown(float, float)::{lambda(std::function<bool (float, float)> const&)#1}) const
    /* bool EventListeners<std::function<bool (float, float)>
   >::CallListeners<input::InputHandler::OnRMouseDown(float, float)::{lambda(std::function<bool
   (float, float)> const&)#1}>(input::InputHandler::OnRMouseDown(float,
   float)::{lambda(std::function<bool (float, float)> const&)#1}) const */

    bool EventListeners<std::function<bool(float, float)>>::CallListeners<
        input::InputHandler::OnRMouseDown(float, float)::_lambda(std::function<bool(float, float)> const&) _1_>(
        undefined8 param_1, EventListeners<std::function<bool(float, float)>>* this) {
        char cVar1;
        undefined8* puVar2;
        undefined8* puVar3;
        bool bVar4;
        undefined8 local_38;
        scoped_lock<std::mutex> local_30[8];

        local_38 = param_1;
        std::scoped_lock<std::mutex>::scoped_lock(local_30, (mutex*)(this + 32));
        puVar2 = (undefined8*)HeapBeginPtr();
        puVar3 = (undefined8*)end();
        bVar4 = puVar2 == puVar3;
        if (!bVar4) {
            do {
                if ((function*)*puVar2 != (function*)0) {
                    cVar1 = float->OnLMouseUp(float)::{
                        lambda(std::function<bool(float, float)> const&) #1
                    }
                    ::operator()((_lambda_std__function<bool(float, float)> const___1_*)&local_38, (function*)*puVar2);
                    if (cVar1 != '\0')
                        break;
                }
                puVar2 = puVar2 + 1;
                bVar4 = puVar2 == puVar3;
            } while (!bVar4);
        }
        std::scoped_lock<std::mutex>::~scoped_lock(local_30);
        return (bool)(~bVar4 & 1);
    }

    // 0x100ca2560, 176 bytes, inline, placed by class name
    // bool EventListeners<std::function<bool (float, float)> >::CallListeners<input::InputHandler::OnRMouseUp(float, float)::{lambda(std::function<bool (float, float)> const&)#1}>(input::InputHandler::OnRMouseUp(float, float)::{lambda(std::function<bool (float, float)> const&)#1}) const
    /* bool EventListeners<std::function<bool (float, float)>
   >::CallListeners<input::InputHandler::OnRMouseUp(float, float)::{lambda(std::function<bool
   (float, float)> const&)#1}>(input::InputHandler::OnRMouseUp(float,
   float)::{lambda(std::function<bool (float, float)> const&)#1}) const */

    bool EventListeners<std::function<bool(float, float)>>::CallListeners<
        input::InputHandler::OnRMouseUp(float, float)::_lambda(std::function<bool(float, float)> const&) _1_>(
        undefined8 param_1, EventListeners<std::function<bool(float, float)>>* this) {
        char cVar1;
        undefined8* puVar2;
        undefined8* puVar3;
        bool bVar4;
        undefined8 local_38;
        scoped_lock<std::mutex> local_30[8];

        local_38 = param_1;
        std::scoped_lock<std::mutex>::scoped_lock(local_30, (mutex*)(this + 32));
        puVar2 = (undefined8*)HeapBeginPtr();
        puVar3 = (undefined8*)end();
        bVar4 = puVar2 == puVar3;
        if (!bVar4) {
            do {
                if ((function*)*puVar2 != (function*)0) {
                    cVar1 = float->OnLMouseUp(float)::{
                        lambda(std::function<bool(float, float)> const&) #1
                    }
                    ::operator()((_lambda_std__function<bool(float, float)> const___1_*)&local_38, (function*)*puVar2);
                    if (cVar1 != '\0')
                        break;
                }
                puVar2 = puVar2 + 1;
                bVar4 = puVar2 == puVar3;
            } while (!bVar4);
        }
        std::scoped_lock<std::mutex>::~scoped_lock(local_30);
        return (bool)(~bVar4 & 1);
    }

    // 0x100ca2610, 176 bytes, inline, placed by class name
    // bool EventListeners<std::function<bool (float, float)> >::CallListeners<input::InputHandler::OnMouseMove(float, float)::{lambda(std::function<bool (float, float)> const&)#1}>(input::InputHandler::OnMouseMove(float, float)::{lambda(std::function<bool (float, float)> const&)#1}) const
    /* bool EventListeners<std::function<bool (float, float)>
   >::CallListeners<input::InputHandler::OnMouseMove(float, float)::{lambda(std::function<bool
   (float, float)> const&)#1}>(input::InputHandler::OnMouseMove(float,
   float)::{lambda(std::function<bool (float, float)> const&)#1}) const */

    bool EventListeners<std::function<bool(float, float)>>::CallListeners<
        input::InputHandler::OnMouseMove(float, float)::_lambda(std::function<bool(float, float)> const&) _1_>(
        undefined8 param_1, EventListeners<std::function<bool(float, float)>>* this) {
        char cVar1;
        undefined8* puVar2;
        undefined8* puVar3;
        bool bVar4;
        undefined8 local_38;
        scoped_lock<std::mutex> local_30[8];

        local_38 = param_1;
        std::scoped_lock<std::mutex>::scoped_lock(local_30, (mutex*)(this + 32));
        puVar2 = (undefined8*)HeapBeginPtr();
        puVar3 = (undefined8*)end();
        bVar4 = puVar2 == puVar3;
        if (!bVar4) {
            do {
                if ((function*)*puVar2 != (function*)0) {
                    cVar1 = float->OnLMouseUp(float)::{
                        lambda(std::function<bool(float, float)> const&) #1
                    }
                    ::operator()((_lambda_std__function<bool(float, float)> const___1_*)&local_38, (function*)*puVar2);
                    if (cVar1 != '\0')
                        break;
                }
                puVar2 = puVar2 + 1;
                bVar4 = puVar2 == puVar3;
            } while (!bVar4);
        }
        std::scoped_lock<std::mutex>::~scoped_lock(local_30);
        return (bool)(~bVar4 & 1);
    }

    // 0x100ca26c0, 176 bytes, inline, placed by class name
    // bool EventListeners<std::function<bool (float, float, float, float)> >::CallListeners<input::InputHandler::OnMouseWheel(float, float, float, float)::{lambda(std::function<bool (float, float, float, float)> const&)#1}>(input::InputHandler::OnMouseWheel(float, float, float, float)::{lambda(std::function<bool (float, float, float, float)> const&)#1}) const
    /* bool EventListeners<std::function<bool (float, float, float, float)>
   >::CallListeners<input::InputHandler::OnMouseWheel(float, float, float,
   float)::{lambda(std::function<bool (float, float, float, float)>
   const&)#1}>(input::InputHandler::OnMouseWheel(float, float, float,
   float)::{lambda(std::function<bool (float, float, float, float)> const&)#1}) const */

    bool
    EventListeners<std::function<bool(float, float, float, float)>>::CallListeners<input::InputHandler::OnMouseWheel(
        float, float, float, float)::_lambda(std::function<bool(float, float, float, float)> const&) _1_>(
        undefined8 param_1, undefined8 param_2, EventListeners<std::function<bool(float, float, float, float)>>* this) {
        char cVar1;
        undefined8* puVar2;
        undefined8* puVar3;
        bool bVar4;
        undefined8 local_40;
        undefined8 uStack_38;
        scoped_lock<std::mutex> local_30[8];

        local_40 = param_1;
        uStack_38 = param_2;
        std::scoped_lock<std::mutex>::scoped_lock(local_30, (mutex*)(this + 32));
        puVar2 = (undefined8*)HeapBeginPtr();
        puVar3 = (undefined8*)end();
        bVar4 = puVar2 == puVar3;
        if (!bVar4) {
            do {
                if ((function*)*puVar2 != (function*)0) {
                    cVar1 = float->OnMouseWheel(float, float, float)::{
                        lambda(std::function<bool(float, float, float, float)> const&) #1
                    }
                    ::operator()((_lambda_std__function<bool(float, float, float, float)> const___1_*)&local_40,
                                 (function*)*puVar2);
                    if (cVar1 != '\0')
                        break;
                }
                puVar2 = puVar2 + 1;
                bVar4 = puVar2 == puVar3;
            } while (!bVar4);
        }
        std::scoped_lock<std::mutex>::~scoped_lock(local_30);
        return (bool)(~bVar4 & 1);
    }

    // 0x100ca2800, 176 bytes, inline, placed by class name
    // bool EventListeners<std::function<bool (int, int, int, int)> >::CallListeners<input::InputHandler::OnLowLevelMouseDown(int, int, int, int)::{lambda(std::function<bool (int, int, int, int)>&)#1}>(input::InputHandler::OnLowLevelMouseDown(int, int, int, int)::{lambda(std::function<bool (int, int, int, int)>&)#1}) const
    /* bool EventListeners<std::function<bool (int, int, int, int)>
   >::CallListeners<input::InputHandler::OnLowLevelMouseDown(int, int, int,
   int)::{lambda(std::function<bool (int, int, int,
   int)>&)#1}>(input::InputHandler::OnLowLevelMouseDown(int, int, int,
   int)::{lambda(std::function<bool (int, int, int, int)>&)#1}) const */

    bool
    EventListeners<std::function<bool(int, int, int, int)>>::CallListeners<input::InputHandler::OnLowLevelMouseDown(
        int, int, int, int)::_lambda(std::function<bool(int, int, int, int)>&) _1_>(
        EventListeners<std::function<bool(int, int, int, int)>>* this, undefined8 param_2, undefined8 param_3) {
        char cVar1;
        undefined8* puVar2;
        undefined8* puVar3;
        bool bVar4;
        undefined8 local_40;
        undefined8 local_38;
        scoped_lock<std::mutex> local_30[8];

        local_40 = param_2;
        local_38 = param_3;
        std::scoped_lock<std::mutex>::scoped_lock(local_30, (mutex*)(this + 32));
        puVar2 = (undefined8*)HeapBeginPtr();
        puVar3 = (undefined8*)end();
        bVar4 = puVar2 == puVar3;
        if (!bVar4) {
            do {
                if ((function*)*puVar2 != (function*)0) {
                    cVar1 = int->OnLowLevelMouseMove(int, int, int)::{
                        lambda(std::function<bool(int, int, int, int)>&) #1
                    }
                    ::operator()((_lambda_std__function<bool(int, int, int, int)> ___1_*)&local_40, (function*)*puVar2);
                    if (cVar1 != '\0')
                        break;
                }
                puVar2 = puVar2 + 1;
                bVar4 = puVar2 == puVar3;
            } while (!bVar4);
        }
        std::scoped_lock<std::mutex>::~scoped_lock(local_30);
        return (bool)(~bVar4 & 1);
    }

    // 0x100ca2920, 176 bytes, inline, placed by class name
    // bool EventListeners<std::function<bool (int, int, int, int)> >::CallListeners<input::InputHandler::OnLowLevelMouseMove(int, int, int, int)::{lambda(std::function<bool (int, int, int, int)>&)#1}>(input::InputHandler::OnLowLevelMouseMove(int, int, int, int)::{lambda(std::function<bool (int, int, int, int)>&)#1}) const
    /* bool EventListeners<std::function<bool (int, int, int, int)>
   >::CallListeners<input::InputHandler::OnLowLevelMouseMove(int, int, int,
   int)::{lambda(std::function<bool (int, int, int,
   int)>&)#1}>(input::InputHandler::OnLowLevelMouseMove(int, int, int,
   int)::{lambda(std::function<bool (int, int, int, int)>&)#1}) const */

    bool
    EventListeners<std::function<bool(int, int, int, int)>>::CallListeners<input::InputHandler::OnLowLevelMouseMove(
        int, int, int, int)::_lambda(std::function<bool(int, int, int, int)>&) _1_>(
        EventListeners<std::function<bool(int, int, int, int)>>* this, undefined8 param_2, undefined8 param_3) {
        char cVar1;
        undefined8* puVar2;
        undefined8* puVar3;
        bool bVar4;
        undefined8 local_40;
        undefined8 local_38;
        scoped_lock<std::mutex> local_30[8];

        local_40 = param_2;
        local_38 = param_3;
        std::scoped_lock<std::mutex>::scoped_lock(local_30, (mutex*)(this + 32));
        puVar2 = (undefined8*)HeapBeginPtr();
        puVar3 = (undefined8*)end();
        bVar4 = puVar2 == puVar3;
        if (!bVar4) {
            do {
                if ((function*)*puVar2 != (function*)0) {
                    cVar1 = int->OnLowLevelMouseMove(int, int, int)::{
                        lambda(std::function<bool(int, int, int, int)>&) #1
                    }
                    ::operator()((_lambda_std__function<bool(int, int, int, int)> ___1_*)&local_40, (function*)*puVar2);
                    if (cVar1 != '\0')
                        break;
                }
                puVar2 = puVar2 + 1;
                bVar4 = puVar2 == puVar3;
            } while (!bVar4);
        }
        std::scoped_lock<std::mutex>::~scoped_lock(local_30);
        return (bool)(~bVar4 & 1);
    }

    // 0x100ca29d0, 176 bytes, inline, placed by class name
    // bool EventListeners<std::function<bool (int)> >::CallListeners<input::InputHandler::OnKeyDown(int)::{lambda(std::function<bool (int)> const&)#1}>(input::InputHandler::OnKeyDown(int)::{lambda(std::function<bool (int)> const&)#1}) const
    /* bool EventListeners<std::function<bool (int)>
   >::CallListeners<input::InputHandler::OnKeyDown(int)::{lambda(std::function<bool (int)>
   const&)#1}>(input::InputHandler::OnKeyDown(int)::{lambda(std::function<bool (int)>
   const&)#1}) const */

    bool EventListeners<std::function<bool(int)>>::CallListeners<input::InputHandler::OnKeyDown(int)::_lambda(
        std::function<bool(int)> const&) _1_>(EventListeners<std::function<bool(int)>>* this, undefined4 param_2) {
        char cVar1;
        undefined8* puVar2;
        undefined8* puVar3;
        bool bVar4;
        scoped_lock<std::mutex> local_38[8];
        undefined4 local_30[2];

        local_30[0] = param_2;
        std::scoped_lock<std::mutex>::scoped_lock(local_38, (mutex*)(this + 32));
        puVar2 = (undefined8*)HeapBeginPtr();
        puVar3 = (undefined8*)end();
        bVar4 = puVar2 == puVar3;
        if (!bVar4) {
            do {
                if ((function*)*puVar2 != (function*)0) {
                    cVar1 = input::InputHandler::OnKeyUp(int)::{
                        lambda(std::function<bool(int)> const&) #1
                    }
                    ::operator()((_lambda_std__function<bool(int)> const___1_*)local_30, (function*)*puVar2);
                    if (cVar1 != '\0')
                        break;
                }
                puVar2 = puVar2 + 1;
                bVar4 = puVar2 == puVar3;
            } while (!bVar4);
        }
        std::scoped_lock<std::mutex>::~scoped_lock(local_38);
        return (bool)(~bVar4 & 1);
    }

    // 0x100ca2ae0, 176 bytes, inline, placed by class name
    // bool EventListeners<std::function<bool (int)> >::CallListeners<input::InputHandler::OnKeyUp(int)::{lambda(std::function<bool (int)> const&)#1}>(input::InputHandler::OnKeyUp(int)::{lambda(std::function<bool (int)> const&)#1}) const
    /* bool EventListeners<std::function<bool (int)>
   >::CallListeners<input::InputHandler::OnKeyUp(int)::{lambda(std::function<bool (int)>
   const&)#1}>(input::InputHandler::OnKeyUp(int)::{lambda(std::function<bool (int)> const&)#1})
   const */

    bool EventListeners<std::function<bool(int)>>::CallListeners<input::InputHandler::OnKeyUp(int)::_lambda(
        std::function<bool(int)> const&) _1_>(EventListeners<std::function<bool(int)>>* this, undefined4 param_2) {
        char cVar1;
        undefined8* puVar2;
        undefined8* puVar3;
        bool bVar4;
        scoped_lock<std::mutex> local_38[8];
        undefined4 local_30[2];

        local_30[0] = param_2;
        std::scoped_lock<std::mutex>::scoped_lock(local_38, (mutex*)(this + 32));
        puVar2 = (undefined8*)HeapBeginPtr();
        puVar3 = (undefined8*)end();
        bVar4 = puVar2 == puVar3;
        if (!bVar4) {
            do {
                if ((function*)*puVar2 != (function*)0) {
                    cVar1 = input::InputHandler::OnKeyUp(int)::{
                        lambda(std::function<bool(int)> const&) #1
                    }
                    ::operator()((_lambda_std__function<bool(int)> const___1_*)local_30, (function*)*puVar2);
                    if (cVar1 != '\0')
                        break;
                }
                puVar2 = puVar2 + 1;
                bVar4 = puVar2 == puVar3;
            } while (!bVar4);
        }
        std::scoped_lock<std::mutex>::~scoped_lock(local_38);
        return (bool)(~bVar4 & 1);
    }

    // 0x100ca2b90, 176 bytes, inline, placed by class name
    // bool EventListeners<std::function<bool (int)> >::CallListeners<input::InputHandler::OnKeyChar(int)::{lambda(std::function<bool (int)> const&)#1}>(input::InputHandler::OnKeyChar(int)::{lambda(std::function<bool (int)> const&)#1}) const
    /* bool EventListeners<std::function<bool (int)>
   >::CallListeners<input::InputHandler::OnKeyChar(int)::{lambda(std::function<bool (int)>
   const&)#1}>(input::InputHandler::OnKeyChar(int)::{lambda(std::function<bool (int)>
   const&)#1}) const */

    bool EventListeners<std::function<bool(int)>>::CallListeners<input::InputHandler::OnKeyChar(int)::_lambda(
        std::function<bool(int)> const&) _1_>(EventListeners<std::function<bool(int)>>* this, undefined4 param_2) {
        char cVar1;
        undefined8* puVar2;
        undefined8* puVar3;
        bool bVar4;
        scoped_lock<std::mutex> local_38[8];
        undefined4 local_30[2];

        local_30[0] = param_2;
        std::scoped_lock<std::mutex>::scoped_lock(local_38, (mutex*)(this + 32));
        puVar2 = (undefined8*)HeapBeginPtr();
        puVar3 = (undefined8*)end();
        bVar4 = puVar2 == puVar3;
        if (!bVar4) {
            do {
                if ((function*)*puVar2 != (function*)0) {
                    cVar1 = input::InputHandler::OnKeyUp(int)::{
                        lambda(std::function<bool(int)> const&) #1
                    }
                    ::operator()((_lambda_std__function<bool(int)> const___1_*)local_30, (function*)*puVar2);
                    if (cVar1 != '\0')
                        break;
                }
                puVar2 = puVar2 + 1;
                bVar4 = puVar2 == puVar3;
            } while (!bVar4);
        }
        std::scoped_lock<std::mutex>::~scoped_lock(local_38);
        return (bool)(~bVar4 & 1);
    }

    // 0x100ca2c40, 176 bytes, inline, placed by class name
    // bool EventListeners<std::function<bool (unsigned long, float, float)> >::CallListeners<input::InputHandler::OnFirstTouchDown(unsigned long, float, float)::{lambda(std::function<bool (unsigned long, float, float)> const&)#1}>(input::InputHandler::OnFirstTouchDown(unsigned long, float, float)::{lambda(std::function<bool (unsigned long, float, float)> const&)#1}) const
    /* bool EventListeners<std::function<bool (unsigned long, float, float)>
   >::CallListeners<input::InputHandler::OnFirstTouchDown(unsigned long, float,
   float)::{lambda(std::function<bool (unsigned long, float, float)>
   const&)#1}>(input::InputHandler::OnFirstTouchDown(unsigned long, float,
   float)::{lambda(std::function<bool (unsigned long, float, float)> const&)#1}) const */

    bool EventListeners<std::function<bool(unsigned long, float, float)>>::CallListeners<
        input::InputHandler::OnFirstTouchDown(unsigned long, float, float)::_lambda(
            std::function<bool(unsigned long, float, float)> const&) _1_>(
        undefined8 param_1, EventListeners<std::function<bool(unsigned long, float, float)>>* this,
        undefined8 param_3) {
        char cVar1;
        undefined8* puVar2;
        undefined8* puVar3;
        bool bVar4;
        undefined8 local_40;
        undefined8 local_38;
        scoped_lock<std::mutex> local_30[8];

        local_40 = param_3;
        local_38 = param_1;
        std::scoped_lock<std::mutex>::scoped_lock(local_30, (mutex*)(this + 32));
        puVar2 = (undefined8*)HeapBeginPtr();
        puVar3 = (undefined8*)end();
        bVar4 = puVar2 == puVar3;
        if (!bVar4) {
            do {
                if ((function*)*puVar2 != (function*)0) {
                    cVar1 = unsigned long->OnTouchDown(float, float)::{
                        lambda(std::function<bool(unsigned long, float, float)> const&) #1
                    }
                    ::operator()((_lambda_std__function<bool(unsigned long, float, float)> const___1_*)&local_40,
                                 (function*)*puVar2);
                    if (cVar1 != '\0')
                        break;
                }
                puVar2 = puVar2 + 1;
                bVar4 = puVar2 == puVar3;
            } while (!bVar4);
        }
        std::scoped_lock<std::mutex>::~scoped_lock(local_30);
        return (bool)(~bVar4 & 1);
    }

    // 0x100ca2d60, 176 bytes, inline, placed by class name
    // bool EventListeners<std::function<bool (unsigned long, float, float)> >::CallListeners<input::InputHandler::OnTouchDown(unsigned long, float, float)::{lambda(std::function<bool (unsigned long, float, float)> const&)#1}>(input::InputHandler::OnTouchDown(unsigned long, float, float)::{lambda(std::function<bool (unsigned long, float, float)> const&)#1}) const
    /* bool EventListeners<std::function<bool (unsigned long, float, float)>
   >::CallListeners<input::InputHandler::OnTouchDown(unsigned long, float,
   float)::{lambda(std::function<bool (unsigned long, float, float)>
   const&)#1}>(input::InputHandler::OnTouchDown(unsigned long, float,
   float)::{lambda(std::function<bool (unsigned long, float, float)> const&)#1}) const */

    bool
    EventListeners<std::function<bool(unsigned long, float, float)>>::CallListeners<input::InputHandler::OnTouchDown(
        unsigned long, float, float)::_lambda(std::function<bool(unsigned long, float, float)> const&) _1_>(
        undefined8 param_1, EventListeners<std::function<bool(unsigned long, float, float)>>* this,
        undefined8 param_3) {
        char cVar1;
        undefined8* puVar2;
        undefined8* puVar3;
        bool bVar4;
        undefined8 local_40;
        undefined8 local_38;
        scoped_lock<std::mutex> local_30[8];

        local_40 = param_3;
        local_38 = param_1;
        std::scoped_lock<std::mutex>::scoped_lock(local_30, (mutex*)(this + 32));
        puVar2 = (undefined8*)HeapBeginPtr();
        puVar3 = (undefined8*)end();
        bVar4 = puVar2 == puVar3;
        if (!bVar4) {
            do {
                if ((function*)*puVar2 != (function*)0) {
                    cVar1 = unsigned long->OnTouchDown(float, float)::{
                        lambda(std::function<bool(unsigned long, float, float)> const&) #1
                    }
                    ::operator()((_lambda_std__function<bool(unsigned long, float, float)> const___1_*)&local_40,
                                 (function*)*puVar2);
                    if (cVar1 != '\0')
                        break;
                }
                puVar2 = puVar2 + 1;
                bVar4 = puVar2 == puVar3;
            } while (!bVar4);
        }
        std::scoped_lock<std::mutex>::~scoped_lock(local_30);
        return (bool)(~bVar4 & 1);
    }

    // 0x100ca2e10, 176 bytes, inline, placed by class name
    // bool EventListeners<std::function<bool (unsigned long, float, float)> >::CallListeners<input::InputHandler::OnTouchMove(unsigned long, float, float)::{lambda(std::function<bool (unsigned long, float, float)> const&)#1}>(input::InputHandler::OnTouchMove(unsigned long, float, float)::{lambda(std::function<bool (unsigned long, float, float)> const&)#1}) const
    /* bool EventListeners<std::function<bool (unsigned long, float, float)>
   >::CallListeners<input::InputHandler::OnTouchMove(unsigned long, float,
   float)::{lambda(std::function<bool (unsigned long, float, float)>
   const&)#1}>(input::InputHandler::OnTouchMove(unsigned long, float,
   float)::{lambda(std::function<bool (unsigned long, float, float)> const&)#1}) const */

    bool
    EventListeners<std::function<bool(unsigned long, float, float)>>::CallListeners<input::InputHandler::OnTouchMove(
        unsigned long, float, float)::_lambda(std::function<bool(unsigned long, float, float)> const&) _1_>(
        undefined8 param_1, EventListeners<std::function<bool(unsigned long, float, float)>>* this,
        undefined8 param_3) {
        char cVar1;
        undefined8* puVar2;
        undefined8* puVar3;
        bool bVar4;
        undefined8 local_40;
        undefined8 local_38;
        scoped_lock<std::mutex> local_30[8];

        local_40 = param_3;
        local_38 = param_1;
        std::scoped_lock<std::mutex>::scoped_lock(local_30, (mutex*)(this + 32));
        puVar2 = (undefined8*)HeapBeginPtr();
        puVar3 = (undefined8*)end();
        bVar4 = puVar2 == puVar3;
        if (!bVar4) {
            do {
                if ((function*)*puVar2 != (function*)0) {
                    cVar1 = unsigned long->OnTouchDown(float, float)::{
                        lambda(std::function<bool(unsigned long, float, float)> const&) #1
                    }
                    ::operator()((_lambda_std__function<bool(unsigned long, float, float)> const___1_*)&local_40,
                                 (function*)*puVar2);
                    if (cVar1 != '\0')
                        break;
                }
                puVar2 = puVar2 + 1;
                bVar4 = puVar2 == puVar3;
            } while (!bVar4);
        }
        std::scoped_lock<std::mutex>::~scoped_lock(local_30);
        return (bool)(~bVar4 & 1);
    }

    // 0x100ca2ec0, 176 bytes, inline, placed by class name
    // bool EventListeners<std::function<bool (unsigned long, float, float)> >::CallListeners<input::InputHandler::OnTouchUp(unsigned long, float, float)::{lambda(std::function<bool (unsigned long, float, float)> const&)#1}>(input::InputHandler::OnTouchUp(unsigned long, float, float)::{lambda(std::function<bool (unsigned long, float, float)> const&)#1}) const
    /* bool EventListeners<std::function<bool (unsigned long, float, float)>
   >::CallListeners<input::InputHandler::OnTouchUp(unsigned long, float,
   float)::{lambda(std::function<bool (unsigned long, float, float)>
   const&)#1}>(input::InputHandler::OnTouchUp(unsigned long, float,
   float)::{lambda(std::function<bool (unsigned long, float, float)> const&)#1}) const */

    bool EventListeners<std::function<bool(unsigned long, float, float)>>::CallListeners<input::InputHandler::OnTouchUp(
        unsigned long, float, float)::_lambda(std::function<bool(unsigned long, float, float)> const&) _1_>(
        undefined8 param_1, EventListeners<std::function<bool(unsigned long, float, float)>>* this,
        undefined8 param_3) {
        char cVar1;
        undefined8* puVar2;
        undefined8* puVar3;
        bool bVar4;
        undefined8 local_40;
        undefined8 local_38;
        scoped_lock<std::mutex> local_30[8];

        local_40 = param_3;
        local_38 = param_1;
        std::scoped_lock<std::mutex>::scoped_lock(local_30, (mutex*)(this + 32));
        puVar2 = (undefined8*)HeapBeginPtr();
        puVar3 = (undefined8*)end();
        bVar4 = puVar2 == puVar3;
        if (!bVar4) {
            do {
                if ((function*)*puVar2 != (function*)0) {
                    cVar1 = unsigned long->OnTouchDown(float, float)::{
                        lambda(std::function<bool(unsigned long, float, float)> const&) #1
                    }
                    ::operator()((_lambda_std__function<bool(unsigned long, float, float)> const___1_*)&local_40,
                                 (function*)*puVar2);
                    if (cVar1 != '\0')
                        break;
                }
                puVar2 = puVar2 + 1;
                bVar4 = puVar2 == puVar3;
            } while (!bVar4);
        }
        std::scoped_lock<std::mutex>::~scoped_lock(local_30);
        return (bool)(~bVar4 & 1);
    }

    // 0x100ca2f70, 176 bytes, inline, placed by class name
    // bool EventListeners<std::function<bool (unsigned long, float, float)> >::CallListeners<input::InputHandler::OnTouchCanceled(unsigned long, float, float)::{lambda(std::function<bool (unsigned long, float, float)> const&)#1}>(input::InputHandler::OnTouchCanceled(unsigned long, float, float)::{lambda(std::function<bool (unsigned long, float, float)> const&)#1}) const
    /* bool EventListeners<std::function<bool (unsigned long, float, float)>
   >::CallListeners<input::InputHandler::OnTouchCanceled(unsigned long, float,
   float)::{lambda(std::function<bool (unsigned long, float, float)>
   const&)#1}>(input::InputHandler::OnTouchCanceled(unsigned long, float,
   float)::{lambda(std::function<bool (unsigned long, float, float)> const&)#1}) const */

    bool EventListeners<std::function<bool(unsigned long, float, float)>>::CallListeners<
        input::InputHandler::OnTouchCanceled(unsigned long, float, float)::_lambda(
            std::function<bool(unsigned long, float, float)> const&) _1_>(
        undefined8 param_1, EventListeners<std::function<bool(unsigned long, float, float)>>* this,
        undefined8 param_3) {
        char cVar1;
        undefined8* puVar2;
        undefined8* puVar3;
        bool bVar4;
        undefined8 local_40;
        undefined8 local_38;
        scoped_lock<std::mutex> local_30[8];

        local_40 = param_3;
        local_38 = param_1;
        std::scoped_lock<std::mutex>::scoped_lock(local_30, (mutex*)(this + 32));
        puVar2 = (undefined8*)HeapBeginPtr();
        puVar3 = (undefined8*)end();
        bVar4 = puVar2 == puVar3;
        if (!bVar4) {
            do {
                if ((function*)*puVar2 != (function*)0) {
                    cVar1 = unsigned long->OnTouchDown(float, float)::{
                        lambda(std::function<bool(unsigned long, float, float)> const&) #1
                    }
                    ::operator()((_lambda_std__function<bool(unsigned long, float, float)> const___1_*)&local_40,
                                 (function*)*puVar2);
                    if (cVar1 != '\0')
                        break;
                }
                puVar2 = puVar2 + 1;
                bVar4 = puVar2 == puVar3;
            } while (!bVar4);
        }
        std::scoped_lock<std::mutex>::~scoped_lock(local_30);
        return (bool)(~bVar4 & 1);
    }

    // 0x100ca3020, 176 bytes, inline, placed by class name
    // bool EventListeners<std::function<bool (input::TextCommand)> >::CallListeners<input::InputHandler::OnTextCommand(input::TextCommand)::{lambda(std::function<bool (input::TextCommand)>&)#1}>(input::InputHandler::OnTextCommand(input::TextCommand)::{lambda(std::function<bool (input::TextCommand)>&)#1}) const
    /* bool EventListeners<std::function<bool (input::TextCommand)>
   >::CallListeners<input::InputHandler::OnTextCommand(input::TextCommand)::{lambda(std::function<bool
   (input::TextCommand)>&)#1}>(input::InputHandler::OnTextCommand(input::TextCommand)::{lambda(std::function<bool
   (input::TextCommand)>&)#1}) const */

    bool EventListeners<std::function<bool(input::TextCommand)>>::CallListeners<
        input::InputHandler::OnTextCommand(input::TextCommand)::_lambda(std::function<bool(input::TextCommand)>&) _1_>(
        EventListeners<std::function<bool(input::TextCommand)>>* this, undefined4 param_2) {
        char cVar1;
        undefined8* puVar2;
        undefined8* puVar3;
        bool bVar4;
        scoped_lock<std::mutex> local_38[8];
        undefined4 local_30[2];

        local_30[0] = param_2;
        std::scoped_lock<std::mutex>::scoped_lock(local_38, (mutex*)(this + 32));
        puVar2 = (undefined8*)HeapBeginPtr();
        puVar3 = (undefined8*)end();
        bVar4 = puVar2 == puVar3;
        if (!bVar4) {
            do {
                if ((function*)*puVar2 != (function*)0) {
                    cVar1 = input::InputHandler::OnTextCommand(input::TextCommand)::{
                        lambda(std::function<bool(input::TextCommand)>&) #1
                    }
                    ::operator()((_lambda_std__function<bool(input::TextCommand)> ___1_*)local_30, (function*)*puVar2);
                    if (cVar1 != '\0')
                        break;
                }
                puVar2 = puVar2 + 1;
                bVar4 = puVar2 == puVar3;
            } while (!bVar4);
        }
        std::scoped_lock<std::mutex>::~scoped_lock(local_38);
        return (bool)(~bVar4 & 1);
    }

    // 0x100ca3e10, 16 bytes, complete-object destructor, inline, placed by class name
    // EventListeners<std::function<bool (input::gesture::TouchPoint const&)> >::~EventListeners(): jumps straight to the base-object destructor

    // 0x100ca3e20, 48 bytes, base-object destructor, inline, placed by class name
    // EventListeners<std::function<bool (input::gesture::TouchPoint const&)> >::~EventListeners()
    /* EventListeners<std::function<bool (input::gesture::TouchPoint const&)>
   >::~EventListeners() */

    void EventListeners<std::function<bool(input::gesture::TouchPoint_const&)>>::~EventListeners(
        EventListeners<std::function<bool(input::gesture::TouchPoint_const&)>>* this) {
        ((this + 32))->~mutex();
        eastl::vector<std::function<bool(input::gesture::TouchPoint_const&)>*, eastl::allocator>::~vector(
            (vector<std::function<bool(input::gesture::TouchPoint_const&)>*, eastl::allocator>*)this);
    }

    // 0x100ca3f60, 16 bytes, complete-object destructor, inline, placed by class name
    // EventListeners<std::function<bool (input::gesture::GestureEvent_EmulateMouse const&)> >::~EventListeners(): jumps straight to the base-object destructor

    // 0x100ca3f70, 48 bytes, base-object destructor, inline, placed by class name
    // EventListeners<std::function<bool (input::gesture::GestureEvent_EmulateMouse const&)> >::~EventListeners()
    /* EventListeners<std::function<bool (input::gesture::GestureEvent_EmulateMouse const&)>
   >::~EventListeners() */

    void EventListeners<std::function<bool(input::gesture::GestureEvent_EmulateMouse_const&)>>::~EventListeners(
        EventListeners<std::function<bool(input::gesture::GestureEvent_EmulateMouse_const&)>>* this) {
        ((this + 32))->~mutex();
        eastl::vector<std::function<bool(input::gesture::GestureEvent_EmulateMouse_const&)>*, eastl::allocator>::
            ~vector((
                vector<std::function<bool(input::gesture::GestureEvent_EmulateMouse_const&)>*, eastl::allocator>*)this);
    }

    // 0x100ca4030, 16 bytes, complete-object destructor, inline, placed by class name
    // EventListeners<std::function<bool (input::gesture::GestureEvent_Pinch const&)> >::~EventListeners(): jumps straight to the base-object destructor

    // 0x100ca4040, 48 bytes, base-object destructor, inline, placed by class name
    // EventListeners<std::function<bool (input::gesture::GestureEvent_Pinch const&)> >::~EventListeners()
    /* EventListeners<std::function<bool (input::gesture::GestureEvent_Pinch const&)>
   >::~EventListeners() */

    void EventListeners<std::function<bool(input::gesture::GestureEvent_Pinch_const&)>>::~EventListeners(
        EventListeners<std::function<bool(input::gesture::GestureEvent_Pinch_const&)>>* this) {
        ((this + 32))->~mutex();
        eastl::vector<std::function<bool(input::gesture::GestureEvent_Pinch_const&)>*, eastl::allocator>::~vector(
            (vector<std::function<bool(input::gesture::GestureEvent_Pinch_const&)>*, eastl::allocator>*)this);
    }

    // 0x100ca4180, 16 bytes, complete-object destructor, inline, placed by class name
    // EventListeners<std::function<bool (input::gesture::GestureEvent_Swipe const&)> >::~EventListeners(): jumps straight to the base-object destructor

    // 0x100ca4190, 48 bytes, base-object destructor, inline, placed by class name
    // EventListeners<std::function<bool (input::gesture::GestureEvent_Swipe const&)> >::~EventListeners()
    /* EventListeners<std::function<bool (input::gesture::GestureEvent_Swipe const&)>
   >::~EventListeners() */

    void EventListeners<std::function<bool(input::gesture::GestureEvent_Swipe_const&)>>::~EventListeners(
        EventListeners<std::function<bool(input::gesture::GestureEvent_Swipe_const&)>>* this) {
        ((this + 32))->~mutex();
        eastl::vector<std::function<bool(input::gesture::GestureEvent_Swipe_const&)>*, eastl::allocator>::~vector(
            (vector<std::function<bool(input::gesture::GestureEvent_Swipe_const&)>*, eastl::allocator>*)this);
    }

    // 0x100ca50c0, 176 bytes, inline, placed by class name
    // bool EventListeners<std::function<bool (input::gesture::TouchPoint const&)> >::CallListeners<input::gesture::Gesture<input::gesture::TouchPoint>::RunEvent(input::gesture::TouchPoint const&)::{lambda(std::function<bool (input::gesture::TouchPoint const&)> const&)#1}>(input::gesture::Gesture<input::gesture::TouchPoint>::RunEvent(input::gesture::TouchPoint const&)::{lambda(std::function<bool (input::gesture::TouchPoint const&)> const&)#1}) const
    /* bool EventListeners<std::function<bool (input::gesture::TouchPoint const&)>
   >::CallListeners<input::gesture::Gesture<input::gesture::TouchPoint>::RunEvent(input::gesture::TouchPoint
   const&)::{lambda(std::function<bool (input::gesture::TouchPoint const&)>
   const&)#1}>(input::gesture::Gesture<input::gesture::TouchPoint>::RunEvent(input::gesture::TouchPoint
   const&)::{lambda(std::function<bool (input::gesture::TouchPoint const&)> const&)#1}) const
    */

    bool EventListeners<std::function<bool(input::gesture::TouchPoint_const&)>>::CallListeners<
        input::gesture::Gesture<input::gesture::TouchPoint>::RunEvent(input::gesture::TouchPoint_const&)::_lambda(
            std::function<bool(input::gesture::TouchPoint_const&)> const&) _1_>(
        EventListeners<std::function<bool(input::gesture::TouchPoint_const&)>>* this) {
        char cVar1;
        undefined8* puVar2;
        undefined8* puVar3;
        bool bVar4;
        _lambda_std__function<bool(input::gesture::TouchPoint_const&)> const___1_ _Stack0000000000000008;
        scoped_lock<std::mutex> local_30[8];

        std::scoped_lock<std::mutex>::scoped_lock(local_30, (mutex*)(this + 32));
        puVar2 = (undefined8*)HeapBeginPtr();
        puVar3 = (undefined8*)end();
        bVar4 = puVar2 == puVar3;
        if (!bVar4) {
            do {
                if ((function*)*puVar2 != (function*)0) {
                    cVar1 = input::gesture::Gesture<input::gesture::TouchPoint>::RunEvent(
                        input::gesture::TouchPoint_const&)::{
                        lambda(std::function<bool(input::gesture::TouchPoint_const&)> const&) #1
                    }
                    ::operator()(&_Stack0000000000000008, (function*)*puVar2);
                    if (cVar1 != '\0')
                        break;
                }
                puVar2 = puVar2 + 1;
                bVar4 = puVar2 == puVar3;
            } while (!bVar4);
        }
        std::scoped_lock<std::mutex>::~scoped_lock(local_30);
        return (bool)(~bVar4 & 1);
    }

    // 0x100ca56e0, 176 bytes, inline, placed by class name
    // bool EventListeners<std::function<bool (input::gesture::GestureEvent_Pinch const&)> >::CallListeners<input::gesture::Gesture<input::gesture::GestureEvent_Pinch>::RunEvent(input::gesture::GestureEvent_Pinch const&)::{lambda(std::function<bool (input::gesture::GestureEvent_Pinch const&)> const&)#1}>(input::gesture::Gesture<input::gesture::GestureEvent_Pinch>::RunEvent(input::gesture::GestureEvent_Pinch const&)::{lambda(std::function<bool (input::gesture::GestureEvent_Pinch const&)> const&)#1}) const
    /* bool EventListeners<std::function<bool (input::gesture::GestureEvent_Pinch const&)>
   >::CallListeners<input::gesture::Gesture<input::gesture::GestureEvent_Pinch>::RunEvent(input::gesture::GestureEvent_Pinch
   const&)::{lambda(std::function<bool (input::gesture::GestureEvent_Pinch const&)>
   const&)#1}>(input::gesture::Gesture<input::gesture::GestureEvent_Pinch>::RunEvent(input::gesture::GestureEvent_Pinch
   const&)::{lambda(std::function<bool (input::gesture::GestureEvent_Pinch const&)> const&)#1})
   const */

    bool EventListeners<std::function<bool(input::gesture::GestureEvent_Pinch_const&)>>::CallListeners<
        input::gesture::Gesture<input::gesture::GestureEvent_Pinch>::
            RunEvent(input::gesture::GestureEvent_Pinch_const&)::_lambda(
                std::function<bool(input::gesture::GestureEvent_Pinch_const&)> const&) _1_>(
        EventListeners<std::function<bool(input::gesture::GestureEvent_Pinch_const&)>>* this) {
        char cVar1;
        undefined8* puVar2;
        undefined8* puVar3;
        bool bVar4;
        _lambda_std__function<bool(input::gesture::GestureEvent_Pinch_const&)> const___1_ _Stack0000000000000008;
        scoped_lock<std::mutex> local_30[8];

        std::scoped_lock<std::mutex>::scoped_lock(local_30, (mutex*)(this + 32));
        puVar2 = (undefined8*)HeapBeginPtr();
        puVar3 = (undefined8*)end();
        bVar4 = puVar2 == puVar3;
        if (!bVar4) {
            do {
                if ((function*)*puVar2 != (function*)0) {
                    cVar1 = input::gesture::Gesture<input::gesture::GestureEvent_Pinch>::RunEvent(
                        input::gesture::GestureEvent_Pinch_const&)::{
                        lambda(std::function<bool(input::gesture::GestureEvent_Pinch_const&)> const&) #1
                    }
                    ::operator()(&_Stack0000000000000008, (function*)*puVar2);
                    if (cVar1 != '\0')
                        break;
                }
                puVar2 = puVar2 + 1;
                bVar4 = puVar2 == puVar3;
            } while (!bVar4);
        }
        std::scoped_lock<std::mutex>::~scoped_lock(local_30);
        return (bool)(~bVar4 & 1);
    }

    // 0x100ca5d00, 176 bytes, inline, placed by class name
    // bool EventListeners<std::function<bool (input::gesture::GestureEvent_Swipe const&)> >::CallListeners<input::gesture::Gesture<input::gesture::GestureEvent_Swipe>::RunEvent(input::gesture::GestureEvent_Swipe const&)::{lambda(std::function<bool (input::gesture::GestureEvent_Swipe const&)> const&)#1}>(input::gesture::Gesture<input::gesture::GestureEvent_Swipe>::RunEvent(input::gesture::GestureEvent_Swipe const&)::{lambda(std::function<bool (input::gesture::GestureEvent_Swipe const&)> const&)#1}) const
    /* bool EventListeners<std::function<bool (input::gesture::GestureEvent_Swipe const&)>
   >::CallListeners<input::gesture::Gesture<input::gesture::GestureEvent_Swipe>::RunEvent(input::gesture::GestureEvent_Swipe
   const&)::{lambda(std::function<bool (input::gesture::GestureEvent_Swipe const&)>
   const&)#1}>(input::gesture::Gesture<input::gesture::GestureEvent_Swipe>::RunEvent(input::gesture::GestureEvent_Swipe
   const&)::{lambda(std::function<bool (input::gesture::GestureEvent_Swipe const&)> const&)#1})
   const */

    bool EventListeners<std::function<bool(input::gesture::GestureEvent_Swipe_const&)>>::CallListeners<
        input::gesture::Gesture<input::gesture::GestureEvent_Swipe>::
            RunEvent(input::gesture::GestureEvent_Swipe_const&)::_lambda(
                std::function<bool(input::gesture::GestureEvent_Swipe_const&)> const&) _1_>(
        EventListeners<std::function<bool(input::gesture::GestureEvent_Swipe_const&)>>* this) {
        char cVar1;
        undefined8* puVar2;
        undefined8* puVar3;
        bool bVar4;
        _lambda_std__function<bool(input::gesture::GestureEvent_Swipe_const&)> const___1_ _Stack0000000000000008;
        scoped_lock<std::mutex> local_30[8];

        std::scoped_lock<std::mutex>::scoped_lock(local_30, (mutex*)(this + 32));
        puVar2 = (undefined8*)HeapBeginPtr();
        puVar3 = (undefined8*)end();
        bVar4 = puVar2 == puVar3;
        if (!bVar4) {
            do {
                if ((function*)*puVar2 != (function*)0) {
                    cVar1 = input::gesture::Gesture<input::gesture::GestureEvent_Swipe>::RunEvent(
                        input::gesture::GestureEvent_Swipe_const&)::{
                        lambda(std::function<bool(input::gesture::GestureEvent_Swipe_const&)> const&) #1
                    }
                    ::operator()(&_Stack0000000000000008, (function*)*puVar2);
                    if (cVar1 != '\0')
                        break;
                }
                puVar2 = puVar2 + 1;
                bVar4 = puVar2 == puVar3;
            } while (!bVar4);
        }
        std::scoped_lock<std::mutex>::~scoped_lock(local_30);
        return (bool)(~bVar4 & 1);
    }

} // namespace jag
