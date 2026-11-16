// libs/hal/input/InputGestures_DoubleTap.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.hal.input

#include "InputGestures_DoubleTap.h"

namespace jag::input::gesture {
    // 0x100c9fcc0
    uint64_t GestureDoubleTap::OnTouchUp(GestureManager* gestureManager, unsigned long arg2, float arg3, float arg4) {
        unsigned long* arg2_00;
        unsigned long long uVar2;
        float fVar3;

        if ((((gestureManager->GetX() < 2) &&
              (arg2_00 = (unsigned long*)gestureManager->GetLastTouch(arg2), *arg2_00 == arg2)) &&
             (uVar2 = SystemTimer::GetTimeMS<std::chrono::steady_clock>(), uVar2 - arg2_00[2] < 181)) &&
            (fVar3 = arg4 - *(float*)((long)arg2_00 + 12),
             fVar3 * fVar3 + (arg3 - *(float*)(arg2_00 + 1)) * (arg3 - *(float*)(arg2_00 + 1)) < 64.0)) {
            Tapped((TouchPoint*)this, (unsigned long)arg2_00, arg3, arg4);
            return 1;
        }
        return 0;
    }

    // 0x100c9fd80
    void GestureDoubleTap::Tapped(const TouchPoint& touchPoint, unsigned long arg2, float arg3, float arg4) {
        uint64_t uVar1;
        float fVar3;
        float fVar4;
        TouchPoint local_40;

        if (SystemTimer::GetTimeMS<std::chrono::steady_clock>() - *(long*)&touchPoint[5].field_8 < 300) {
            fVar4 = arg3 - *(float*)(arg2 + 8);
            fVar3 = arg4 - *(float*)(arg2 + 12);
            if (fVar3 * fVar3 + fVar4 * fVar4 < 10000.0) {
                touchPoint.RunEvent(touchPoint[4].field_16);
            }
            local_40 = TouchPoint();
            touchPoint[5].field_8 = (float)(uint32_t)local_40.field_16;
            touchPoint[5].field_12 = (float)local_40.field_16._4_4_;
        } else {
            uVar1 = *(uint64_t*)(arg2 + 16);
            touchPoint[5].field_8 = (float)(int)uVar1;
            touchPoint[5].field_12 = (float)(int)((unsigned long)uVar1 >> 32);
            local_40.field_0._0_4_ = *(uint32_t*)arg2;
            local_40.field_0._4_4_ = *(uint32_t*)(arg2 + 4);
            local_40.field_8 = *(float*)(arg2 + 8);
            local_40.field_12 = *(float*)(arg2 + 12);
        }
        *(uint32_t*)&touchPoint[4].field_16 = (uint32_t)local_40.field_0;
        *(uint32_t*)((long)&touchPoint[4].field_16 + 4) = local_40.field_0._4_4_;
        *(float*)&touchPoint[5].field_0 = local_40.field_8;
        *(float*)((long)&touchPoint[5].field_0 + 4) = local_40.field_12;
    }

} // namespace jag::input::gesture
