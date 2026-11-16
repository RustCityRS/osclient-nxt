// libs/hal/input/InputGestures_Swipe.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::input::gesture {
    class GestureEvent_Swipe {
    public:
        GestureEvent_Swipe();

        // data members, from how the methods use this: 48 bytes
        char _unknown_0[24];
        TouchPoint field_24; // offset 24
    };

    class GestureSwipe : public ui::ComponentValueMixin // base inferred from shared vtable slots
    {
    public:
        class RunningTouch;
        // virtual methods in vtable order
        virtual ~GestureSwipe();
        virtual OnTouchDown(GestureManager*, unsigned long, float, float);
        virtual OnTouchUp(GestureManager*, unsigned long, float, float);
        virtual OnTouchMove(GestureManager*, unsigned long, float, float);
        GestureSwipe();

        // data members, from how the methods use this: 176 bytes, the first 8 are ComponentValueMixin
        char _unknown_8[168];
    };

    class GestureSwipe::RunningTouch {
    public:
        RunningTouch(unsigned long, float, float);
        RunningTouch* operator=(RunningTouch const&);
        ~RunningTouch();
        void AddPoint(unsigned long, float, float);
        RunningTouch();
        void swap(RunningTouch&);
        RunningTouch* operator=(RunningTouch&&);
        bool IsHorizontal(bool&);
        bool IsVertical(bool&);

        // data members, from how the methods use this: 80 bytes
        Pix8* field_0; // offset 0
        char _unknown_8[64];
        uint field_72; // offset 72
        char _unknown_76[4];
    };

    // 0x100683490, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // GestureSwipe::GestureSwipe(): jumps straight to the base-object constructor

    // 0x1006839f0, 16 bytes, inline, placed by debug map only (low confidence)
    // Gesture<GestureEvent_Swipe>::AddHandler(std::function<bool (GestureEvent_Swipe const&)>*)
    /* Gesture<GestureEvent_Swipe>::AddHandler(std::function<bool
   (GestureEvent_Swipe const&)>*) */

    void Gesture<GestureEvent_Swipe>::AddHandler(function* param_1) {
        EventListeners<std::function<bool(GestureEvent_Swipe_const&)>>::Register(
            (EventListeners<std::function<bool(GestureEvent_Swipe_const&)>>*)(this + 16), param_1);
    }

    // 0x100ca0a60, 64 bytes, inline, placed by class header (inline)
    // GestureSwipe::RunningTouch::operator=(GestureSwipe::RunningTouch const&)
    /* GestureSwipe::RunningTouch::TEMPNAMEPLACEHOLDERVALUE(GestureSwipe::RunningTouch
   const&) */

    RunningTouch* GestureSwipe::RunningTouch::operator=(RunningTouch* param_1) {
        field_0 = param_1->field_0;
        eastl::list<TouchPoint, eastl::allocator>::operator=((list<TouchPoint, eastl::allocator>*)&field_8,
                                                             (list*)&param_1->field_8);
        eastl::vector<float, eastl::allocator>::operator=((vector<float, eastl::allocator>*)&field_40,
                                                          (vector*)&param_1->field_40);
        field_72 = param_1->field_72;
        return this;
    }

    // 0x100ca0aa0, 16 bytes, complete-object destructor, inline, placed by class header (inline)
    // GestureSwipe::RunningTouch::~RunningTouch(): jumps straight to the base-object destructor

    // 0x100ca0ef0, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // GestureSwipe::RunningTouch::RunningTouch(): jumps straight to the base-object constructor

    // 0x100ca0f00, 80 bytes, inline, placed by class header (inline)
    // GestureSwipe::RunningTouch::swap(GestureSwipe::RunningTouch&)
    void GestureSwipe::RunningTouch::swap(RunningTouch* param_1) {
        eastl::swap<oldscape::graphics::Pix8*>(&field_0, &param_1->field_0);
        (&field_8, (list*)&param_1->field_8)->swap();
        (&field_40, (vector*)&param_1->field_40)->swap();
        eastl::swap<unsigned int>(&field_72, &param_1->field_72);
    }

    // 0x100ca1020, 64 bytes, inline, placed by class header (inline)
    // GestureSwipe::RunningTouch::operator=(GestureSwipe::RunningTouch&&)
    /* GestureSwipe::RunningTouch::TEMPNAMEPLACEHOLDERVALUE(GestureSwipe::RunningTouch&&)
    */

    RunningTouch* GestureSwipe::RunningTouch::operator=(RunningTouch* param_1) {
        field_0 = param_1->field_0;
        eastl::list<TouchPoint, eastl::allocator>::operator=((list<TouchPoint, eastl::allocator>*)&field_8,
                                                             (list*)&param_1->field_8);
        eastl::vector<float, eastl::allocator>::operator=((vector<float, eastl::allocator>*)&field_40,
                                                          (vector*)&param_1->field_40);
        field_72 = param_1->field_72;
        return this;
    }

    // 0x100ca1310, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // GestureEvent_Swipe::GestureEvent_Swipe(): jumps straight to the base-object constructor

} // namespace jag::input::gesture
