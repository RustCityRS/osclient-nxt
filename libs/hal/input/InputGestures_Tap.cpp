// libs/hal/input/InputGestures_Tap.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.hal.input

namespace jag::input::gesture {
    class GestureTap : public graphics::particlemodules::Module // base inferred from shared vtable slots
    {
    public:
        // virtual methods in vtable order
        virtual ~GestureTap();
        virtual OnTouchDown(GestureManager*, unsigned long, float, float);
        virtual OnTouchUp(GestureManager*, unsigned long, float, float);
        OnTouchMove(GestureManager*, unsigned long, float, float);

        // data members, from how the methods use this: 17 bytes, the first 8 are Module
        char _unknown_8[9];
    };

    // 0x100ca14d0, 160 bytes, placed by debug map only (low confidence)
    // GestureTap::OnTouchUp(GestureManager*, unsigned long, float, float)
    undefined8 GestureTap::OnTouchUp(GestureManager* param_1, ulong param_2, float param_3, float param_4) {
        ulong* puVar2;
        ulonglong uVar3;
        float fVar4;

        if ((((param_1->GetX() < 2) && (puVar2 = (ulong*)param_1->GetLastTouch(param_2), *puVar2 == param_2)) &&
             (uVar3 = SystemTimer::GetTimeMS<std::chrono::steady_clock>((SystemTimer*)param_1),
              uVar3 - puVar2[2] < 181)) &&
            (fVar4 = param_4 - *(float*)((long)puVar2 + 12),
             fVar4 * fVar4 + (param_3 - *(float*)(puVar2 + 1)) * (param_3 - *(float*)(puVar2 + 1)) < 64.0)) {
            Gesture<TouchPoint>::RunEvent((TouchPoint*)this);
            return 1;
        }
        return 0;
    }

} // namespace jag::input::gesture
