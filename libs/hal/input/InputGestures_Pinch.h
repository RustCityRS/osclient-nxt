// libs/hal/input/InputGestures_Pinch.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.hal.input

namespace jag::input::gesture {
    class GestureEvent_Pinch {
    public:
        GestureEvent_Pinch();

    private:
        uint8_t _unknown_0[24];
        TouchPoint field_24;
        TouchPoint field_48;
        TouchPoint field_72;
    };

    class GesturePinch : public ui::ComponentValueMixin // base inferred from shared vtable slots
    {
    public:
        // virtual methods in vtable order
        virtual ~GesturePinch();
        virtual uint64_t OnTouchDown(GestureManager* gestureManager, unsigned long arg2, float arg3, float arg4);
        virtual bool OnTouchUp(GestureManager* gestureManager, unsigned long arg2, float arg3, float arg4);
        virtual uint64_t OnTouchMove(GestureManager* gestureManager, unsigned long arg2, float arg3, float arg4);

    private:
        uint8_t _unknown_8[104];
        long field_112;
        float field_120;
        float field_124;
        uint64_t field_128;
        long field_136;
        float field_144;
        float field_148;
        uint64_t field_152;
        uint64_t field_160;
        uint64_t field_168;
        uint64_t field_176;
        uint64_t field_184;
        uint64_t field_192;
        uint64_t field_200;
    };

    // 0x100ca07a0
    void Gesture<GestureEvent_Pinch>::RunEvent(const GestureEvent_Pinch& gestureEvent_Pinch) {
        EventListeners<std::function<bool(GestureEvent_Pinch const&)>>::CallListeners<
            Gesture<GestureEvent_Pinch>::RunEvent(GestureEvent_Pinch const&)::_lambda(
                std::function<bool(GestureEvent_Pinch const&)> const&) _1_>(
            (EventListeners<std::function<bool(GestureEvent_Pinch const&)>>*)(this + 2),
            (_lambda_std__function<bool_(GestureEvent_Pinch const&)> _const___1_*)gestureEvent_Pinch);
    }

    // 0x100ca07f0
    uint64_t GesturePinch::OnTouchMove(GestureManager* gestureManager, unsigned long arg2, float arg3, float arg4) {
        int iVar1;
        float local_30;
        float local_2c;

        if (((field_112 == 4294967295) || (field_136 == 4294967295)) ||
            (local_30 = arg4, local_2c = arg3, iVar1 = gestureManager->GetX(), iVar1 != 2)) {
            return 0;
        }
        if (field_112 == arg2) {
            local_98 = TouchPoint(arg2, local_2c - field_120, local_30 - field_124);
            field_176 = local_98._16_8_;
            field_160 = local_98._0_8_;
            field_168 = local_98._8_8_;
        } else {
            local_98 = TouchPoint(arg2, local_2c - field_144, local_30 - field_148);
            field_200 = local_98._16_8_;
            field_184 = local_98._0_8_;
            field_192 = local_98._8_8_;
        }
        GestureEvent_Pinch local_98;
        local_98._16_8_ = field_128;
        local_98._0_8_ = field_112;
        local_98._8_4_ = field_120;
        local_98._12_4_ = field_124;
        local_98.field_24._16_8_ = field_176;
        local_98.field_24._0_8_ = field_160;
        local_98.field_24._8_8_ = field_168;
        local_98.field_48._0_8_ = field_136;
        local_98.field_48._8_4_ = field_144;
        local_98.field_48._12_4_ = field_148;
        local_98.field_48._16_8_ = field_152;
        local_98.field_72._16_8_ = field_200;
        local_98.field_72._0_8_ = field_184;
        local_98.field_72._8_8_ = field_192;
        RunEvent(local_98);
        return 1;
    }

    // 0x100ca0940
    bool GesturePinch::OnTouchUp(GestureManager* gestureManager, unsigned long arg2, float arg3, float arg4) {
        long* plVar2;

        int iVar1 = gestureManager->GetX();
        if (1 < iVar1)
            goto LAB_100ca09ae;
        if (field_112 == arg2) {
            plVar2 = &field_112;
        LAB_100ca097f:
            local_80 = TouchPoint();
            plVar2[2] = local_80._16_8_;
            *plVar2 = local_80._0_8_;
            plVar2[1] = local_80._8_8_;
        } else if (field_136 == arg2) {
            plVar2 = &field_136;
            goto LAB_100ca097f;
        }
        GestureEvent_Pinch local_80;
        RunEvent(local_80);
    LAB_100ca09ae:
        return iVar1 < 2;
    }

} // namespace jag::input::gesture
