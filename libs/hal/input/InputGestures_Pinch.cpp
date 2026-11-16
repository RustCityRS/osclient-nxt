// libs/hal/input/InputGestures_Pinch.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.hal.input

#include "InputGestures_Pinch.h"

namespace jag::input::gesture {
    // 0x100ca0570
    uint64_t GesturePinch::OnTouchDown(GestureManager* gestureManager, unsigned long arg2, float arg3, float arg4) {
        long lVar1;
        long* plVar3;
        GestureEvent_Pinch local_88;

        int iVar2 = gestureManager->GetX();
        if (iVar2 == 1) {
            plVar3 = (long*)gestureManager->GetLastTouch(arg2);
            lVar1 = plVar3[1];
            field_112 = *plVar3;
            field_120 = (float)(int)lVar1;
            field_124 = (float)(int)((unsigned long)lVar1 >> 32);
            field_128 = plVar3[2];
        } else {
            iVar2 = gestureManager->GetX();
            if (iVar2 == 2) {
                plVar3 = (long*)gestureManager->GetLastTouch(arg2);
                lVar1 = plVar3[1];
                field_136 = *plVar3;
                field_144 = (float)(int)lVar1;
                field_148 = (float)(int)((unsigned long)lVar1 >> 32);
                field_152 = plVar3[2];
                local_88 = TouchPoint();
                field_200 = local_88._16_8_;
                field_184 = local_88._0_8_;
                field_192 = local_88._8_8_;
                field_160 = local_88._0_8_;
                field_168 = local_88._8_8_;
                field_176 = local_88._16_8_;
                local_88 = GestureEvent_Pinch();
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
                RunEvent(local_88);
                return 1;
            }
            if ((field_112 != 4294967295) || (field_136 != 4294967295)) {
                local_88 = TouchPoint();
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
                local_88 = GestureEvent_Pinch();
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
                RunEvent(local_88);
            }
        }
        return 0;
    }

} // namespace jag::input::gesture
