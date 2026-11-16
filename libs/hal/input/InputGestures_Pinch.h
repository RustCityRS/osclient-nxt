// libs/hal/input/InputGestures_Pinch.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.hal.input

namespace jag::input::gesture {
    class GestureEvent_Pinch {
    public:
        GestureEvent_Pinch();

        // data members, from how the methods use this: 96 bytes
        char _unknown_0[24];
        TouchPoint field_24; // offset 24
        TouchPoint field_48; // offset 48
        TouchPoint field_72; // offset 72
    };

    class GesturePinch : public ui::ComponentValueMixin // base inferred from shared vtable slots
    {
    public:
        // virtual methods in vtable order
        virtual ~GesturePinch();
        virtual OnTouchDown(GestureManager*, unsigned long, float, float);
        virtual bool OnTouchUp(GestureManager*, unsigned long, float, float);
        virtual OnTouchMove(GestureManager*, unsigned long, float, float);

        // data members, from how the methods use this: 208 bytes, the first 8 are ComponentValueMixin
        char _unknown_8[104];
        long field_112;       // offset 112
        float field_120;      // offset 120
        float field_124;      // offset 124
        undefined8 field_128; // offset 128
        long field_136;       // offset 136
        float field_144;      // offset 144
        float field_148;      // offset 148
        undefined8 field_152; // offset 152
        undefined8 field_160; // offset 160
        undefined8 field_168; // offset 168
        undefined8 field_176; // offset 176
        undefined8 field_184; // offset 184
        undefined8 field_192; // offset 192
        undefined8 field_200; // offset 200
    };

    // 0x100ca0790, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // GestureEvent_Pinch::GestureEvent_Pinch(): jumps straight to the base-object constructor

    // 0x100ca07a0, 80 bytes, inline, placed by debug map only (low confidence)
    // Gesture<GestureEvent_Pinch>::RunEvent(GestureEvent_Pinch const&)
    void Gesture<GestureEvent_Pinch>::RunEvent(GestureEvent_Pinch* param_1) {
        EventListeners<std::function<bool(GestureEvent_Pinch_const&)>>::CallListeners<
            Gesture<GestureEvent_Pinch>::RunEvent(GestureEvent_Pinch_const&)::_lambda(
                std::function<bool(GestureEvent_Pinch_const&)> const&) _1_>(
            (EventListeners<std::function<bool(GestureEvent_Pinch_const&)>>*)&param_1->field_16);
    }

    // 0x100ca07f0, 336 bytes, placed by debug map only (low confidence)
    // GesturePinch::OnTouchMove(GestureManager*, unsigned long, float, float)
    undefined8 GesturePinch::OnTouchMove(GestureManager* param_1, ulong param_2, float param_3, float param_4) {
        int iVar1;
        GestureEvent_Pinch local_98;
        float local_30;
        float local_2c;

        if (((field_112 == 4294967295) || (field_136 == 4294967295)) ||
            (local_30 = param_4, local_2c = param_3, iVar1 = param_1->GetX(), iVar1 != 2)) {
            return 0;
        }
        if (field_112 == param_2) {
            new (&local_98) TouchPoint(param_2, local_2c - field_120, local_30 - field_124);
            field_176 = local_98._16_8_;
            field_160 = local_98._0_8_;
            field_168 = local_98._8_8_;
        } else {
            new (&local_98) TouchPoint(param_2, local_2c - field_144, local_30 - field_148);
            field_200 = local_98._16_8_;
            field_184 = local_98._0_8_;
            field_192 = local_98._8_8_;
        }
        new (&local_98) GestureEvent_Pinch();
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
        Gesture<GestureEvent_Pinch>::RunEvent((GestureEvent_Pinch*)this);
        return 1;
    }

    // 0x100ca0940, 128 bytes, placed by debug map only (low confidence)
    // GesturePinch::OnTouchUp(GestureManager*, unsigned long, float, float)
    bool GesturePinch::OnTouchUp(GestureManager* param_1, ulong param_2, float param_3, float param_4) {
        int iVar1;
        long* plVar2;
        GestureEvent_Pinch local_80;

        iVar1 = param_1->GetX();
        if (1 < iVar1)
            goto LAB_100ca09ae;
        if (field_112 == param_2) {
            plVar2 = &field_112;
        LAB_100ca097f:
            new (&local_80) TouchPoint();
            plVar2[2] = local_80._16_8_;
            *plVar2 = local_80._0_8_;
            plVar2[1] = local_80._8_8_;
        } else if (field_136 == param_2) {
            plVar2 = &field_136;
            goto LAB_100ca097f;
        }
        new (&local_80) GestureEvent_Pinch();
        Gesture<GestureEvent_Pinch>::RunEvent((GestureEvent_Pinch*)this);
    LAB_100ca09ae:
        return iVar1 < 2;
    }

} // namespace jag::input::gesture
