// libs/hal/input/InputGestures_DoubleTap.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.hal.input

namespace jag::input::gesture {
    template <
        typename...> // 4 instantiations, e.g. <GestureEvent_EmulateMouse>, <GestureEvent_Pinch>, <GestureEvent_Swipe>
    class Gesture {
    public:
        void AddHandler(std::function<bool(GestureEvent_Swipe const&)>* callback);
        Gesture(const char* str);
        void RunEvent(const TouchPoint& touchPoint);
        void RunEvent(const GestureEvent_Pinch& gestureEvent_Pinch);
        void RunEvent(const GestureEvent_Swipe& gestureEvent_Swipe);
        ~Gesture();
    };

    class GestureDoubleTap : public graphics::particlemodules::Module // base inferred from shared vtable slots
    {
    public:
        // virtual methods in vtable order
        virtual ~GestureDoubleTap();
        virtual uint64_t OnTouchDown(GestureManager* arg1, unsigned long arg2, float arg3, float arg4);
        virtual uint64_t OnTouchUp(GestureManager* gestureManager, unsigned long arg2, float arg3, float arg4);
        uint64_t OnTouchMove(GestureManager* arg1, unsigned long arg2, float arg3, float arg4);
        void Tapped(const TouchPoint& touchPoint, unsigned long arg2, float arg3, float arg4);

    private:
        uint8_t _unknown_8[104];
        uint32_t field_112;
        uint32_t field_116;
        float field_120;
        float field_124;
        long field_128;
    };

    // 0x100c9fe20
    void Gesture<TouchPoint>::RunEvent(const TouchPoint& touchPoint) {
        EventListeners<std::function<bool(TouchPoint const&)>>::CallListeners<Gesture<TouchPoint>::RunEvent(
            TouchPoint const&)::_lambda(std::function<bool(TouchPoint const&)> const&) _1_>(
            (EventListeners<std::function<bool(TouchPoint const&)>>*)(this + 2),
            (_lambda_std__function<bool_(TouchPoint const&)> _const___1_*)touchPoint);
    }

    // 0x100ca1320
    void Gesture<GestureEvent_Swipe>::RunEvent(const GestureEvent_Swipe& gestureEvent_Swipe) {
        EventListeners<std::function<bool(GestureEvent_Swipe const&)>>::CallListeners<
            Gesture<GestureEvent_Swipe>::RunEvent(GestureEvent_Swipe const&)::_lambda(
                std::function<bool(GestureEvent_Swipe const&)> const&) _1_>(
            (EventListeners<std::function<bool(GestureEvent_Swipe const&)>>*)(this + 2),
            (_lambda_std__function<bool_(GestureEvent_Swipe const&)> _const___1_*)gestureEvent_Swipe);
    }

    // 0x100ca3280
    GestureEmulateMouse::RunningTouch::RunningTouch() {
        field_0 = (Pix32*)4294967295;
        new (field_8) TouchPoint();
        new (field_32) TouchPoint();
    }

    // 0x100ca3310
    GestureEvent_Pinch::GestureEvent_Pinch() : TouchPoint() {}

    // 0x100ca3aa0
    GestureSwipe::RunningTouch::~RunningTouch() {
        field_40.~vector();
        field_8.~list();
    }

    // 0x100ca3ad0
    GestureSwipe::RunningTouch::RunningTouch() {
        field_0 = (Pix32*)4294967295;
        new (&field_8) eastl::list<TouchPoint>();
        new (&field_40) eastl::vector<float>();
        field_72 = 0;
    }

    // 0x100ca3d90
    GestureEvent_Swipe::GestureEvent_Swipe() : TouchPoint() {}

    // 0x100ca3dd0
    GestureDoubleTap::~GestureDoubleTap() {}

    // 0x100ca3dd0: GestureTap::~GestureTap() has the same machine code as GestureDoubleTap::~GestureDoubleTap()

    // 0x100ca3de0
    Gesture<TouchPoint>::~Gesture() {
        ((this + 2))->~EventListeners();
    }

    // 0x100ca3ea0
    GestureEmulateMouse::~GestureEmulateMouse() {
        field_120.~fixed_hash_map();
    }

    // 0x100ca3ee0
    Gesture<GestureEvent_EmulateMouse>::~Gesture() {
        ((this + 2))->~EventListeners();
    }

    // 0x100ca3ff0
    GesturePinch::~GesturePinch() {}

    // 0x100ca4000
    Gesture<GestureEvent_Pinch>::~Gesture() {
        ((this + 2))->~EventListeners();
    }

    // 0x100ca40c0
    GestureSwipe::~GestureSwipe() {
        field_168.~hash_map();
        field_112.~hash_map();
    }

    // 0x100ca4110
    Gesture<GestureEvent_Swipe>::~Gesture() {
        ((this + 2))->~EventListeners();
    }

    // 0x100ca5170
    void Gesture<TouchPoint>::RunEvent(TouchPoint const&)::{
        lambda(std::function<bool(TouchPoint const&)> const&) #1
    }
    ::operator()(std::function<bool(TouchPoint const&)> const& arg1) const {
        lambda(std::function<bool(TouchPoint const&)> const&) #1
    }
    ::operator()(_lambda_std__function<bool(TouchPoint const&)> const___1_* this,
                 function<bool_(TouchPoint const&)>* callback) {
        std::function<bool(TouchPoint const&)>::operator()((function<bool(TouchPoint const&)>*)callback,
                                                           (TouchPoint*)this);
        return;
    }

    // 0x100ca5790
    void Gesture<GestureEvent_Pinch>::RunEvent(GestureEvent_Pinch const&)::{
        lambda(std::function<bool(GestureEvent_Pinch const&)> const&) #1
    }
    ::operator()(std::function<bool(GestureEvent_Pinch const&)> const& arg1) const {
        lambda(std::function<bool(GestureEvent_Pinch const&)> const&) #1
    }
    ::operator()(_lambda_std__function<bool(GestureEvent_Pinch const&)> const___1_* this,
                 function<bool_(GestureEvent_Pinch const&)>* callback) {
        std::function<bool(GestureEvent_Pinch const&)>::operator()((function<bool(GestureEvent_Pinch const&)>*)callback,
                                                                   (GestureEvent_Pinch*)this);
        return;
    }

    // 0x100ca5db0
    void Gesture<GestureEvent_Swipe>::RunEvent(GestureEvent_Swipe const&)::{
        lambda(std::function<bool(GestureEvent_Swipe const&)> const&) #1
    }
    ::operator()(std::function<bool(GestureEvent_Swipe const&)> const& arg1) const {
        lambda(std::function<bool(GestureEvent_Swipe const&)> const&) #1
    }
    ::operator()(_lambda_std__function<bool(GestureEvent_Swipe const&)> const___1_* this,
                 function<bool_(GestureEvent_Swipe const&)>* callback) {
        std::function<bool(GestureEvent_Swipe const&)>::operator()((function<bool(GestureEvent_Swipe const&)>*)callback,
                                                                   (GestureEvent_Swipe*)this);
        return;
    }

} // namespace jag::input::gesture

namespace jag::logger {
    // 0x100ca1d30
    LogStream::LogStream(eastl::fixed_string<char, 32> str1, eastl::fixed_string<char, 32> str2, LogLevel logLevel)
        : eastl::fixed_string<char, 32>(str1), field_72(str2) {
        auto this_00 = default_logger();
        fixed_string<char, 32> local_80(str1);
        fixed_string<char, 32> local_c8(str2);
        this_00->RegisterStream(&local_80, &local_c8, logLevel);
    }

    // 0x100ca20b0
    LogStream::~LogStream() {
        field_72.~fixed_string();
    }

} // namespace jag::logger
