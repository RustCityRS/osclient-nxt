// libs/hal/input/InputGestures_EmulateMouse.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.hal.input

#include "InputGestures_EmulateMouse.h"

namespace jag::input::gesture {
    // 0x100f489f8
    int64_t GestureEmulateMouse::m_touchMovementThresholdInches = 1024416809;

    // 0x100f48a00
    int64_t GestureEmulateMouse::m_rightClickTime = 600;

    // 0x100c9fe50
    uint64_t GestureEmulateMouse::OnTouchDown(GestureManager* gestureManager, unsigned long arg2, float arg3,
                                              float arg4) {
        field_1151 = 0;
        if (field_120.empty() != '\0') {
            field_1136 = SystemTimer::GetTimeMS<std::chrono::steady_clock>();
            field_1120 = arg2;
            field_1151 = 1;
            field_1149 = '\0';
            field_1150 = '\0';
            field_112->OnMouseMove(arg3, arg4);
            field_112->OnFirstTouchDown(arg2, arg3, arg4);
        }
        RunningTouch local_60(arg2, arg3, arg4);
        uint64_t* puVar3 = &field_120[arg2];
        *puVar3 = local_60.field_0;
        puVar3[1] = local_60.field_8._0_8_;
        puVar3[2] = local_60.field_8._8_8_;
        puVar3[3] = local_60.field_8._16_8_;
        puVar3[4] = local_60.field_32._0_8_;
        puVar3[5] = local_60.field_32._8_8_;
        puVar3[6] = local_60.field_32._16_8_;
        return 1;
    }

    // 0x100c9ff70
    uint64_t GestureEmulateMouse::OnTouchMove(GestureManager* gestureManager, unsigned long arg2, float arg3,
                                              float arg4) {
        unsigned long long uVar2;
        float fVar3;
        float fVar4;

        uint8_t* this_00 = &field_120;
        long lVar1 = (*this_00)[arg2];
        *(float*)(lVar1 + 40) = arg3;
        lVar1 = (*this_00)[arg2];
        *(float*)(lVar1 + 44) = arg4;
        if (arg2 == field_1120) {
            if (field_1149 == '\0') {
                lVar1 = (*this_00)[arg2];
                fVar3 = arg3 - *(float*)(lVar1 + 16);
                fVar4 = arg4 - *(float*)(lVar1 + 20);
                if (100.0 < fVar4 * fVar4 + fVar3 * fVar3) {
                    field_1151 = 0;
                    lVar1 = this_00->size();
                    if (lVar1 == 1) {
                        uVar2 = SystemTimer::GetTimeMS<std::chrono::steady_clock>();
                        if (uVar2 - field_1136 < m_rightClickTime) {
                            field_1128 = 0;
                        }
                    } else {
                        field_1149 = '\x01';
                        field_1150 = '\x01';
                    }
                    if (field_1149 == '\0') {
                        lVar1 = (*this_00)[arg2];
                        field_112->OnMouseMove(*(float*)(lVar1 + 16), *(float*)(lVar1 + 20));
                        if (field_1128 == 0) {
                            field_112->OnLMouseDown(*(float*)(lVar1 + 16), *(float*)(lVar1 + 20));
                        }
                        field_1149 = '\x01';
                    }
                }
            }
            field_112->OnMouseMove(arg3, arg4);
        } else {
            lVar1 = this_00->size();
            if (lVar1 == 3) {
                uVar2 = SystemTimer::GetTimeMS<std::chrono::steady_clock>();
                if (300 < uVar2 - field_1136) {
                    field_112->OnKeyDown((int)field_112);
                    field_112->OnKeyDown((int)field_112);
                    field_112->OnMouseMove(arg3, arg4);
                    field_112->OnLMouseDown(arg3, arg4);
                    field_112->OnLMouseUp(arg3, arg4);
                }
            }
        }
        return 1;
    }

    // 0x100ca0160
    uint64_t GestureEmulateMouse::OnTouchUp(GestureManager* gestureManager, unsigned long arg2, float arg3,
                                            float arg4) {
        bool cVar1;
        uint8_t local_70[20];
        float local_5c;

        field_1144 = 0;
        field_1148 = 0;
        uint8_t* this_00 = &field_120;
        long lVar2 = this_00->size();
        field_1151 = 0;
        if (lVar2 == 3) {
            field_112->OnKeyUp((int)field_112);
            field_112->OnKeyUp((int)field_112);
            field_1149 = '\x01';
            field_1150 = '\x01';
        }
        if (field_1149 == '\0') {
            if (lVar2 == 1) {
                if (SystemTimer::GetTimeMS<std::chrono::steady_clock>() - field_1136 <= m_rightClickTime) {
                    field_1128 = 0;
                }
            } else {
                field_1149 = '\x01';
                field_1150 = '\x01';
            }
        }
        new (local_70) RunningTouch();
        ((RunningTouch*)(*this_00)[arg2])->swap(*local_70);
        this_00->erase(arg2);
        if (field_1149 == '\0') {
            field_112->OnMouseMove((float)local_70._16_4_, local_5c);
            if (field_1128 == 0) {
                field_112->OnLMouseDown((float)local_70._16_4_, local_5c);
            }
            field_1149 = '\x01';
            cVar1 = field_1150;
        } else {
            cVar1 = field_1150;
        }
        if (!cVar1) {
            field_112->OnMouseMove(arg3, arg4);
            if (field_1128 == 0) {
                field_112->OnLMouseUp(arg3, arg4);
            }
            field_1120 = 4294967295;
            field_1150 = '\x01';
        }
        return 1;
    }

} // namespace jag::input::gesture
