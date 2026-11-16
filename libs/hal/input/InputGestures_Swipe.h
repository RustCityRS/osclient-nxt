// libs/hal/input/InputGestures_Swipe.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::input::gesture {
    class GestureEvent_Swipe {
    public:
        GestureEvent_Swipe();

    private:
        uint8_t _unknown_0[24];
        TouchPoint field_24;
    };

    class GestureSwipe : public ui::ComponentValueMixin // base inferred from shared vtable slots
    {
    public:
        class RunningTouch;
        // virtual methods in vtable order
        virtual ~GestureSwipe();
        virtual uint8_t OnTouchDown(GestureManager* gestureManager, unsigned long arg2, float arg3, float arg4);
        virtual uint64_t OnTouchUp(GestureManager* gestureManager, unsigned long arg2, float arg3, float arg4);
        virtual uint8_t OnTouchMove(GestureManager* gestureManager, unsigned long arg2, float arg3, float arg4);
        GestureSwipe();

    private:
        uint8_t _unknown_8[168];
    };

    class GestureSwipe::RunningTouch {
    public:
        RunningTouch(unsigned long arg1, float arg2, float arg3);
        RunningTouch* operator=(const RunningTouch& runningTouch);
        ~RunningTouch();
        void AddPoint(unsigned long arg1, float arg2, float arg3);
        RunningTouch();
        void swap(RunningTouch& runningTouch);
        RunningTouch* operator=(RunningTouch&& runningTouch);
        bool IsHorizontal(bool& arg1);
        bool IsVertical(bool& arg1);

    private:
        Pix32* field_0;
        uint8_t _unknown_8[64];
        int field_72;
        uint8_t _unknown_76[4];
    };

    // 0x1006839f0
    void Gesture<GestureEvent_Swipe>::AddHandler(std::function<bool(GestureEvent_Swipe const&)>* callback) {
        ((this + 2))->Register(callback);
    }

    // 0x100ca0a60
    RunningTouch* GestureSwipe::RunningTouch::operator=(const GestureSwipe::RunningTouch& runningTouch) {
        field_0 = runningTouch.field_0;
        field_8 = runningTouch.field_8;
        field_40 = runningTouch.field_40;
        field_72 = runningTouch.field_72;
        return this;
    }

    // 0x100ca0f00
    void GestureSwipe::RunningTouch::swap(GestureSwipe::RunningTouch& runningTouch) {
        eastl::swap<oldscape::graphics::Pix8*>(field_0, runningTouch.field_0);
        field_8.swap(runningTouch.field_8);
        field_40.swap(runningTouch.field_40);
        eastl::swap<unsigned int>(field_72, runningTouch.field_72);
    }

    // 0x100ca1020
    RunningTouch* GestureSwipe::RunningTouch::operator=(GestureSwipe::RunningTouch&& runningTouch) {
        field_0 = runningTouch.field_0;
        field_8 = runningTouch.field_8;
        field_40 = runningTouch.field_40;
        field_72 = runningTouch.field_72;
        return this;
    }

} // namespace jag::input::gesture
