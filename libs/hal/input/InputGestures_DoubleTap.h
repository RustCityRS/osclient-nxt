// libs/hal/input/InputGestures_DoubleTap.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.hal.input

namespace jag::input::gesture {
    template <
        typename...> // 4 instantiations, e.g. <GestureEvent_EmulateMouse>, <GestureEvent_Pinch>, <GestureEvent_Swipe>
    class Gesture {
    public:
        void AddHandler(std::function<bool(GestureEvent_Swipe const&)>*);
        Gesture(char const*);
        void RunEvent(TouchPoint const&);
        void RunEvent(GestureEvent_Pinch const&);
        void RunEvent(GestureEvent_Swipe const&);
        ~Gesture();
    };

    class GestureDoubleTap : public graphics::particlemodules::Module // base inferred from shared vtable slots
    {
    public:
        // virtual methods in vtable order
        virtual ~GestureDoubleTap();
        virtual OnTouchDown(GestureManager*, unsigned long, float, float);
        virtual OnTouchUp(GestureManager*, unsigned long, float, float);
        OnTouchMove(GestureManager*, unsigned long, float, float);
        void Tapped(TouchPoint const&, unsigned long, float, float);

        // data members, from how the methods use this: 136 bytes, the first 8 are Module
        char _unknown_8[104];
        undefined4 field_112; // offset 112
        undefined4 field_116; // offset 116
        float field_120;      // offset 120
        float field_124;      // offset 124
        long field_128;       // offset 128
    };

    // 0x100c9fe20, 48 bytes, inline, placed by class header (inline)
    // Gesture<TouchPoint>::RunEvent(TouchPoint const&)
    void Gesture<TouchPoint>::RunEvent(TouchPoint* param_1) {
        EventListeners<std::function<bool(TouchPoint_const&)>>::CallListeners<Gesture<TouchPoint>::RunEvent(
            TouchPoint_const&)::_lambda(std::function<bool(TouchPoint_const&)> const&) _1_>(
            (EventListeners<std::function<bool(TouchPoint_const&)>>*)&param_1->field_16);
    }

    // 0x100ca1320, 64 bytes, inline, placed by class header (inline)
    // Gesture<GestureEvent_Swipe>::RunEvent(GestureEvent_Swipe const&)
    void Gesture<GestureEvent_Swipe>::RunEvent(GestureEvent_Swipe* param_1) {
        EventListeners<std::function<bool(GestureEvent_Swipe_const&)>>::CallListeners<
            Gesture<GestureEvent_Swipe>::RunEvent(GestureEvent_Swipe_const&)::_lambda(
                std::function<bool(GestureEvent_Swipe_const&)> const&) _1_>(
            (EventListeners<std::function<bool(GestureEvent_Swipe_const&)>>*)&param_1->field_16);
    }

    // 0x100ca1c50, 16 bytes, complete-object destructor, inline, placed by debug map only (low confidence)
    // GestureDoubleTap::~GestureDoubleTap(): jumps straight to the base-object destructor

    // 0x100ca1c50: the linker folded this into GestureDoubleTap::~GestureDoubleTap(), which has identical code
    GestureTap::~GestureTap();

    // 0x100ca1c60, 32 bytes, deleting destructor, inline, placed by debug map only (low confidence)
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // GestureDoubleTap::~GestureDoubleTap()
    /* GestureTap::~GestureTap() */

    void GestureTap::~GestureTap() {
        ~GestureTap(this);
        operator_delete(this);
    }

    // 0x100ca1c60: the linker folded this into GestureDoubleTap::~GestureDoubleTap(), which has identical code
    GestureTap::~GestureTap();

    // 0x100ca1c80, 16 bytes, complete-object destructor, inline, placed by debug map only (low confidence)
    // GestureEmulateMouse::~GestureEmulateMouse(): jumps straight to the base-object destructor

    // 0x100ca1c90, 32 bytes, deleting destructor, inline, placed by debug map only (low confidence)
    // GestureEmulateMouse::~GestureEmulateMouse()
    void GestureEmulateMouse::~GestureEmulateMouse() {
        ~GestureEmulateMouse(this);
        operator_delete(this);
    }

    // 0x100ca1cb0, 16 bytes, complete-object destructor, inline, placed by debug map only (low confidence)
    // GesturePinch::~GesturePinch(): jumps straight to the base-object destructor

    // 0x100ca1cc0, 32 bytes, deleting destructor, inline, placed by debug map only (low confidence)
    // GesturePinch::~GesturePinch()
    void GesturePinch::~GesturePinch() {
        ~GesturePinch(this);
        operator_delete(this);
    }

    // 0x100ca1ce0, 16 bytes, complete-object destructor, inline, placed by debug map only (low confidence)
    // GestureSwipe::~GestureSwipe(): jumps straight to the base-object destructor

    // 0x100ca1cf0, 32 bytes, deleting destructor, inline, placed by debug map only (low confidence)
    // GestureSwipe::~GestureSwipe()
    void GestureSwipe::~GestureSwipe() {
        ~GestureSwipe(this);
        operator_delete(this);
    }

    // 0x100ca3280, 48 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // GestureEmulateMouse::RunningTouch::RunningTouch()
    void GestureEmulateMouse::RunningTouch::RunningTouch() {
        field_0 = (Pix8*)4294967295;
        new (field_8) TouchPoint();
        new (field_32) TouchPoint();
    }

    // 0x100ca3310, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // GestureEvent_Pinch::GestureEvent_Pinch()
    void GestureEvent_Pinch::GestureEvent_Pinch() {
        new (this) TouchPoint();
        new (field_24) TouchPoint();
        new (field_48) TouchPoint();
        new (field_72) TouchPoint();
    }

    // 0x100ca3aa0, 48 bytes, base-object destructor, inline, placed by debug map only (low confidence)
    // GestureSwipe::RunningTouch::~RunningTouch()
    void GestureSwipe::RunningTouch::~RunningTouch() {
        (&field_40)->~vector();
        (&field_8)->~list();
    }

    // 0x100ca3ad0, 80 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // GestureSwipe::RunningTouch::RunningTouch()
    void GestureSwipe::RunningTouch::RunningTouch() {
        field_0 = (Pix8*)4294967295;
        new (&field_8) eastl::list<TouchPoint, eastl::allocator>();
        new (&field_40) eastl::vector<float, eastl::allocator>();
        field_72 = 0;
    }

    // 0x100ca3d90, 48 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // GestureEvent_Swipe::GestureEvent_Swipe()
    void GestureEvent_Swipe::GestureEvent_Swipe() {
        new (this) TouchPoint();
        new (field_24) TouchPoint();
    }

    // 0x100ca3dd0, 16 bytes, base-object destructor, inline, placed by debug map only (low confidence)
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // GestureDoubleTap::~GestureDoubleTap()
    /* GestureTap::~GestureTap() */

    void GestureTap::~GestureTap() {
        ~Gesture();
    }

    // 0x100ca3dd0: the linker folded this into GestureDoubleTap::~GestureDoubleTap(), which has identical code
    GestureTap::~GestureTap();

    // 0x100ca3de0, 48 bytes, base-object destructor, inline, placed by debug map only (low confidence)
    // Gesture<TouchPoint>::~Gesture()
    void Gesture<TouchPoint>::~Gesture() {
        *(undefined**)this = PTR_vtable_100ee8628 + 16;
        EventListeners<std::function<bool(TouchPoint_const&)>>::~EventListeners(
            (EventListeners<std::function<bool(TouchPoint_const&)>>*)(this + 16));
        ~AutoSingleton();
    }

    // 0x100ca3ea0, 48 bytes, base-object destructor, inline, placed by debug map only (low confidence)
    // GestureEmulateMouse::~GestureEmulateMouse()
    void GestureEmulateMouse::~GestureEmulateMouse() {
        field_0 = &PTR__GestureEmulateMouse_100f29dd8;
        (&field_120)->~fixed_hash_map();
        ~Gesture();
    }

    // 0x100ca3ee0, 48 bytes, base-object destructor, inline, placed by debug map only (low confidence)
    // Gesture<GestureEvent_EmulateMouse>::~Gesture()
    void Gesture<GestureEvent_EmulateMouse>::~Gesture() {
        *(undefined**)this = PTR_vtable_100ee8640 + 16;
        EventListeners<std::function<bool(GestureEvent_EmulateMouse_const&)>>::~EventListeners(
            (EventListeners<std::function<bool(GestureEvent_EmulateMouse_const&)>>*)(this + 16));
        ~AutoSingleton();
    }

    // 0x100ca3ff0, 16 bytes, base-object destructor, inline, placed by debug map only (low confidence)
    // GesturePinch::~GesturePinch()
    void GesturePinch::~GesturePinch() {
        ~Gesture();
    }

    // 0x100ca4000, 48 bytes, base-object destructor, inline, placed by debug map only (low confidence)
    // Gesture<GestureEvent_Pinch>::~Gesture()
    void Gesture<GestureEvent_Pinch>::~Gesture() {
        *(undefined**)this = PTR_vtable_100ee8630 + 16;
        EventListeners<std::function<bool(GestureEvent_Pinch_const&)>>::~EventListeners(
            (EventListeners<std::function<bool(GestureEvent_Pinch_const&)>>*)(this + 16));
        ~AutoSingleton();
    }

    // 0x100ca40c0, 64 bytes, base-object destructor, inline, placed by debug map only (low confidence)
    // GestureSwipe::~GestureSwipe()
    void GestureSwipe::~GestureSwipe() {
        field_0 = &PTR__GestureSwipe_100f29e58;
        (&field_168)->~hash_map();
        (&field_112)->~hash_map();
        ~Gesture();
    }

    // 0x100ca4110, 48 bytes, base-object destructor, inline, placed by debug map only (low confidence)
    // Gesture<GestureEvent_Swipe>::~Gesture()
    void Gesture<GestureEvent_Swipe>::~Gesture() {
        *(undefined**)this = PTR_vtable_100ee8638 + 16;
        EventListeners<std::function<bool(GestureEvent_Swipe_const&)>>::~EventListeners(
            (EventListeners<std::function<bool(GestureEvent_Swipe_const&)>>*)(this + 16));
        ~AutoSingleton();
    }

    // 0x100ca5170, 32 bytes, inline, placed by debug map only (low confidence)
    // Gesture<TouchPoint>::RunEvent(TouchPoint const&)::{lambda(std::function<bool (TouchPoint const&)> const&)#1}::operator()(std::function<bool (TouchPoint const&)> const&) const
    /* Gesture<TouchPoint>::RunEvent(TouchPoint
   const&)::{lambda(std::function<bool (TouchPoint const&)>
   const&)#1}::TEMPNAMEPLACEHOLDERVALUE(std::function<bool (TouchPoint const&)>
   const&) const */

    void Gesture<TouchPoint>::RunEvent(TouchPoint_const&)::{
        lambda(std::function<bool(TouchPoint_const&)> const&) #1
    }
    ::operator()(_lambda_std__function<bool(TouchPoint_const&)> const___1_* this, function * param_1)

    {
        std::function<bool(TouchPoint_const&)>::operator()((function<bool(TouchPoint_const&)>*)param_1,
                                                           (TouchPoint*)this);
    }

    // 0x100ca5790, 32 bytes, inline, placed by debug map only (low confidence)
    // Gesture<GestureEvent_Pinch>::RunEvent(GestureEvent_Pinch const&)::{lambda(std::function<bool (GestureEvent_Pinch const&)> const&)#1}::operator()(std::function<bool (GestureEvent_Pinch const&)> const&) const
    /* Gesture<GestureEvent_Pinch>::RunEvent(GestureEvent_Pinch
   const&)::{lambda(std::function<bool (GestureEvent_Pinch const&)>
   const&)#1}::TEMPNAMEPLACEHOLDERVALUE(std::function<bool (GestureEvent_Pinch
   const&)> const&) const */

    void Gesture<GestureEvent_Pinch>::RunEvent(GestureEvent_Pinch_const&)::{
        lambda(std::function<bool(GestureEvent_Pinch_const&)> const&) #1
    }
    ::operator()(_lambda_std__function<bool(GestureEvent_Pinch_const&)> const___1_* this, function * param_1)

    {
        std::function<bool(GestureEvent_Pinch_const&)>::operator()((function<bool(GestureEvent_Pinch_const&)>*)param_1,
                                                                   (GestureEvent_Pinch*)this);
    }

    // 0x100ca5db0, 32 bytes, inline, placed by debug map only (low confidence)
    // Gesture<GestureEvent_Swipe>::RunEvent(GestureEvent_Swipe const&)::{lambda(std::function<bool (GestureEvent_Swipe const&)> const&)#1}::operator()(std::function<bool (GestureEvent_Swipe const&)> const&) const
    /* Gesture<GestureEvent_Swipe>::RunEvent(GestureEvent_Swipe
   const&)::{lambda(std::function<bool (GestureEvent_Swipe const&)>
   const&)#1}::TEMPNAMEPLACEHOLDERVALUE(std::function<bool (GestureEvent_Swipe
   const&)> const&) const */

    void Gesture<GestureEvent_Swipe>::RunEvent(GestureEvent_Swipe_const&)::{
        lambda(std::function<bool(GestureEvent_Swipe_const&)> const&) #1
    }
    ::operator()(_lambda_std__function<bool(GestureEvent_Swipe_const&)> const___1_* this, function * param_1)

    {
        std::function<bool(GestureEvent_Swipe_const&)>::operator()((function<bool(GestureEvent_Swipe_const&)>*)param_1,
                                                                   (GestureEvent_Swipe*)this);
    }

} // namespace jag::input::gesture

namespace jag::logger {
    // 0x100ca1d30, 256 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // LogStream::LogStream(eastl::fixed_string<char, 32, true, eastl::allocator>, eastl::fixed_string<char, 32, true, eastl::allocator>, LogLevel)
    void LogStream::LogStream(fixed_string* param_2, fixed_string* param_3, undefined4 param_4) {
        Logger* pLVar1;
        fixed_string<char, 32, true, eastl::allocator> local_c8[72];
        fixed_string<char, 32, true, eastl::allocator> local_80[72];
        undefined8 local_38;

        local_38 = *(undefined8*)PTR____stack_chk_guard_100ee9d98;
        new (this) eastl::fixed_string<char, 32, true, eastl::allocator>(param_2);
        new (&field_72, param_3) eastl::fixed_string<char, 32, true, eastl::allocator>();
        pLVar1 = (Logger*)default_logger();
        eastl::fixed_string<char, 32, true, eastl::allocator>::fixed_string(local_80, param_2);
        eastl::fixed_string<char, 32, true, eastl::allocator>::fixed_string(local_c8, param_3);
        pLVar1->RegisterStream(local_80, local_c8, param_4);
        /* WARNING: Subroutine does not return */
        local_c8->~fixed_string();
    }

    // 0x100ca20b0, 48 bytes, base-object destructor, inline, placed by debug map only (low confidence)
    // LogStream::~LogStream()
    void LogStream::~LogStream() {
        /* WARNING: Subroutine does not return */
        (&field_72)->~fixed_string();
    }

} // namespace jag::logger
