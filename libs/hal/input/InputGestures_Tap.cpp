// libs/hal/input/InputGestures_Tap.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.hal.input

namespace jag::input::gesture {
    class GestureTap : public graphics::particlemodules::Module // base inferred from shared vtable slots
    {
    public:
        // virtual methods in vtable order
        virtual ~GestureTap();
        virtual uint64_t OnTouchDown(GestureManager* arg1, unsigned long arg2, float arg3, float arg4);
        virtual uint64_t OnTouchUp(GestureManager* gestureManager, unsigned long arg2, float arg3, float arg4);
        uint64_t OnTouchMove(GestureManager* arg1, unsigned long arg2, float arg3, float arg4);

    private:
        uint8_t _unknown_8[9];
    };

    // 0x100ca14d0
    uint64_t GestureTap::OnTouchUp(GestureManager* gestureManager, unsigned long arg2, float arg3, float arg4) {
        TouchPoint* touchPoint;
        unsigned long long uVar2;
        float fVar3;
        float fVar4;

        if ((((gestureManager->GetX() < 2) &&
              (touchPoint = (TouchPoint*)gestureManager->GetLastTouch(arg2), touchPoint->field_0 == arg2)) &&
             (uVar2 = SystemTimer::GetTimeMS<std::chrono::steady_clock>(), uVar2 - touchPoint->field_16 < 181)) &&
            (fVar4 = arg3 - touchPoint->field_8, fVar3 = arg4 - touchPoint->field_12,
             fVar3 * fVar3 + fVar4 * fVar4 < 64.0)) {
            RunEvent(*touchPoint);
            return 1;
        }
        return 0;
    }

} // namespace jag::input::gesture
