// libs/hal/input/InputGestures_Pinch.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.hal.input

#include "InputGestures_Pinch.h"

namespace jag::input::gesture {
    // 0x100ca0570, 544 bytes, placed by debug map only (low confidence)
    // GesturePinch::OnTouchDown(GestureManager*, unsigned long, float, float)
    undefined8 GesturePinch::OnTouchDown(GestureManager* param_1, ulong param_2, float param_3, float param_4) {
        long lVar1;
        int iVar2;
        long* plVar3;
        GestureEvent_Pinch local_88;

        iVar2 = param_1->GetX();
        if (iVar2 == 1) {
            plVar3 = (long*)param_1->GetLastTouch(param_2);
            lVar1 = plVar3[1];
            field_112 = *plVar3;
            field_120 = (float)(int)lVar1;
            field_124 = (float)(int)((ulong)lVar1 >> 32);
            field_128 = plVar3[2];
        } else {
            iVar2 = param_1->GetX();
            if (iVar2 == 2) {
                plVar3 = (long*)param_1->GetLastTouch(param_2);
                lVar1 = plVar3[1];
                field_136 = *plVar3;
                field_144 = (float)(int)lVar1;
                field_148 = (float)(int)((ulong)lVar1 >> 32);
                field_152 = plVar3[2];
                new (&local_88) TouchPoint();
                field_200 = local_88._16_8_;
                field_184 = local_88._0_8_;
                field_192 = local_88._8_8_;
                field_160 = local_88._0_8_;
                field_168 = local_88._8_8_;
                field_176 = local_88._16_8_;
                new (&local_88) GestureEvent_Pinch();
                local_88._16_8_ = field_128;
                local_88._0_8_ = field_112;
                local_88._8_4_ = field_120;
                local_88._12_4_ = field_124;
                local_88.field_24._16_8_ = field_176;
                local_88.field_24._0_8_ = field_160;
                local_88.field_24._8_8_ = field_168;
                local_88.field_48._0_8_ = field_136;
                local_88.field_48._8_4_ = field_144;
                local_88.field_48._12_4_ = field_148;
                local_88.field_48._16_8_ = field_152;
                local_88.field_72._16_8_ = field_200;
                local_88.field_72._0_8_ = field_184;
                local_88.field_72._8_8_ = field_192;
                Gesture<GestureEvent_Pinch>::RunEvent((GestureEvent_Pinch*)this);
                return 1;
            }
            if ((field_112 != 4294967295) || (field_136 != 4294967295)) {
                new (&local_88) TouchPoint();
                field_200 = local_88._16_8_;
                field_184 = local_88._0_8_;
                field_192 = local_88._8_8_;
                field_176 = local_88._16_8_;
                field_160 = local_88._0_8_;
                field_168 = local_88._8_8_;
                field_152 = local_88._16_8_;
                field_136 = local_88._0_8_;
                field_144 = (float)local_88._8_4_;
                field_148 = (float)local_88._12_4_;
                field_112 = local_88._0_8_;
                field_120 = (float)local_88._8_4_;
                field_124 = (float)local_88._12_4_;
                field_128 = local_88._16_8_;
                new (&local_88) GestureEvent_Pinch();
                local_88._16_8_ = field_128;
                local_88._0_8_ = field_112;
                local_88._8_4_ = field_120;
                local_88._12_4_ = field_124;
                local_88.field_24._16_8_ = field_176;
                local_88.field_24._0_8_ = field_160;
                local_88.field_24._8_8_ = field_168;
                local_88.field_48._0_8_ = field_136;
                local_88.field_48._8_4_ = field_144;
                local_88.field_48._12_4_ = field_148;
                local_88.field_48._16_8_ = field_152;
                local_88.field_72._16_8_ = field_200;
                local_88.field_72._0_8_ = field_184;
                local_88.field_72._8_8_ = field_192;
                Gesture<GestureEvent_Pinch>::RunEvent((GestureEvent_Pinch*)this);
            }
        }
        return 0;
    }

} // namespace jag::input::gesture
