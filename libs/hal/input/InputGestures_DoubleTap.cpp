// libs/hal/input/InputGestures_DoubleTap.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.hal.input

#include "InputGestures_DoubleTap.h"

namespace jag::input::gesture {
    // 0x100c9fcc0, 176 bytes, placed by debug map only (low confidence)
    // GestureDoubleTap::OnTouchUp(GestureManager*, unsigned long, float, float)
    undefined8 GestureDoubleTap::OnTouchUp(GestureManager* param_1, ulong param_2, float param_3, float param_4) {
        ulong* puVar2;
        ulonglong uVar3;
        float fVar4;

        if ((((param_1->GetX() < 2) && (puVar2 = (ulong*)param_1->GetLastTouch(param_2), *puVar2 == param_2)) &&
             (uVar3 = SystemTimer::GetTimeMS<std::chrono::steady_clock>((SystemTimer*)param_1),
              uVar3 - puVar2[2] < 181)) &&
            (fVar4 = param_4 - *(float*)((long)puVar2 + 12),
             fVar4 * fVar4 + (param_3 - *(float*)(puVar2 + 1)) * (param_3 - *(float*)(puVar2 + 1)) < 64.0)) {
            Tapped((TouchPoint*)this, (ulong)puVar2, param_3, param_4);
            return 1;
        }
        return 0;
    }

    // 0x100c9fd80, 160 bytes, placed by debug map only (low confidence)
    // GestureDoubleTap::Tapped(TouchPoint const&, unsigned long, float, float)
    void GestureDoubleTap::Tapped(TouchPoint* param_1, ulong param_2, float param_3, float param_4) {
        undefined8 uVar1;
        float fVar3;
        float fVar4;
        TouchPoint local_40;

        if (SystemTimer::GetTimeMS<std::chrono::steady_clock>((SystemTimer*)param_1) - *(long*)&param_1[5].field_8 <
            300) {
            fVar4 = param_3 - *(float*)(param_2 + 8);
            fVar3 = param_4 - *(float*)(param_2 + 12);
            if (fVar3 * fVar3 + fVar4 * fVar4 < 10000.0) {
                Gesture<TouchPoint>::RunEvent(param_1);
            }
            new (&local_40) TouchPoint();
            param_1[5].field_8 = (float)(undefined4)local_40.field_16;
            param_1[5].field_12 = (float)local_40.field_16._4_4_;
        } else {
            uVar1 = *(undefined8*)(param_2 + 16);
            param_1[5].field_8 = (float)(int)uVar1;
            param_1[5].field_12 = (float)(int)((ulong)uVar1 >> 32);
            local_40.field_0._0_4_ = *(undefined4*)param_2;
            local_40.field_0._4_4_ = *(undefined4*)(param_2 + 4);
            local_40.field_8 = *(float*)(param_2 + 8);
            local_40.field_12 = *(float*)(param_2 + 12);
        }
        *(undefined4*)&param_1[4].field_16 = (undefined4)local_40.field_0;
        *(undefined4*)((long)&param_1[4].field_16 + 4) = local_40.field_0._4_4_;
        *(float*)&param_1[5].field_0 = local_40.field_8;
        *(float*)((long)&param_1[5].field_0 + 4) = local_40.field_12;
    }

} // namespace jag::input::gesture
