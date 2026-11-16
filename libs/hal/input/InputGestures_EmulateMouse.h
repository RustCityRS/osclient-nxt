// libs/hal/input/InputGestures_EmulateMouse.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.hal.input

namespace jag::input::gesture {
    class GestureEmulateMouse : public ui::ComponentValueMixin // base inferred from shared vtable slots
    {
    public:
        class RunningTouch;
        // virtual methods in vtable order
        virtual ~GestureEmulateMouse();
        virtual uint64_t OnTouchDown(GestureManager* gestureManager, unsigned long arg2, float arg3, float arg4);
        virtual uint64_t OnTouchUp(GestureManager* gestureManager, unsigned long arg2, float arg3, float arg4);
        virtual uint64_t OnTouchMove(GestureManager* gestureManager, unsigned long arg2, float arg3, float arg4);
        virtual uint64_t OnTouchUpdate();
        void Reset();
        static int64_t m_touchMovementThresholdInches; // = 1024416809
        static int64_t m_rightClickTime;               // = 600

    private:
        uint8_t _unknown_8[104];
        Input* field_112;
        uint8_t _unknown_120[1000];
        unsigned long field_1120;
        int field_1128;
        uint8_t _unknown_1132[4];
        unsigned long long field_1136;
        uint32_t field_1144;
        uint8_t field_1148;
        char field_1149;
        char field_1150;
        uint8_t field_1151;
        uint8_t _unknown_1152[6];
    };

    class GestureEmulateMouse::RunningTouch {
    public:
        RunningTouch(unsigned long arg1, float arg2, float arg3);
        RunningTouch();
        void swap(RunningTouch& runningTouch);

    private:
        Pix32* field_0;
        TouchPoint field_8;
        TouchPoint field_32;
    };

    // 0x100ca0300
    void GestureEmulateMouse::RunningTouch::swap(GestureEmulateMouse::RunningTouch& runningTouch) {
        eastl::swap<oldscape::graphics::Pix8*>(field_0, runningTouch.field_0);
        eastl::swap<TouchPoint>(*field_8, runningTouch.field_8);
    }

    // 0x100ca0400
    uint64_t GestureEmulateMouse::OnTouchUpdate() {
        unsigned long long uVar2;
        long lVar3;

        if (field_1151 != '\0') {
            if (field_120.empty() == '\0') {
                uVar2 = SystemTimer::GetTimeMS<std::chrono::steady_clock>();
                if (m_rightClickTime < uVar2 - field_1136) {
                    lVar3 = (field_120.begin()).HeapBeginPtr();
                    field_112->OnRMouseDown(*(float*)(lVar3 + 24), *(float*)(lVar3 + 28));
                    field_1149 = '\x01';
                    field_112->OnRMouseUp(*(float*)(lVar3 + 24), *(float*)(lVar3 + 28));
                    field_1150 = '\x01';
                    field_1151 = 0;
                }
            }
        }
        return 1;
    }

    // 0x100ca04a0
    void GestureEmulateMouse::Reset() {
        field_120.clear();
        field_1151 = 0;
        field_1149 = '\0';
        field_1150 = '\0';
        field_1120 = 4294967295;
    }

    // 0x100ca0510
    GestureEmulateMouse::RunningTouch::RunningTouch(unsigned long arg1, float arg2, float arg3) {
        field_0 = (Pix32*)arg1;
        new (field_8) TouchPoint();
        new (field_32) TouchPoint();
        *(unsigned long*)field_8 = arg1;
        *(float*)(field_8 + 8) = arg2;
        *(float*)(field_8 + 12) = arg3;
        *(float*)(field_32 + 8) = arg2;
        *(float*)(field_32 + 12) = arg3;
    }

} // namespace jag::input::gesture
