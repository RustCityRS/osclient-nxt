// libs/hal/input/InputGestures_EmulateMouse.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.hal.input

#include "InputGestures_EmulateMouse.h"

namespace jag::input::gesture {
    // 0x100f489f8, 8 bytes, __data
    GestureEmulateMouse::m_touchMovementThresholdInches = 1024416809;

    // 0x100f48a00, 8 bytes, __data
    GestureEmulateMouse::m_rightClickTime = 600;

    // 0x100c9fe50, 224 bytes, placed by debug map only (low confidence)
    // GestureEmulateMouse::OnTouchDown(GestureManager*, unsigned long, float, float)
    undefined8 GestureEmulateMouse::OnTouchDown(GestureManager* param_1, ulong param_2, float param_3, float param_4) {
        undefined1* this_00;
        char cVar1;
        undefined8* puVar3;
        SystemTimer* this_01;
        RunningTouch local_60;
        ulong local_28;

        field_1151 = 0;
        this_00 = &field_120;
        this_01 = (SystemTimer*)this_00;
        local_28 = param_2;
        cVar1 = this_00->empty();
        if (cVar1 != '\0') {
            field_1136 = SystemTimer::GetTimeMS<std::chrono::steady_clock>(this_01);
            field_1120 = local_28;
            field_1151 = 1;
            field_1149 = '\0';
            field_1150 = '\0';
            (field_112, param_3, param_4)->OnMouseMove();
            Input::OnFirstTouchDown((ulong)field_112, param_3, param_4);
        }
        new (&local_60) RunningTouch(local_28, param_3, param_4);
        puVar3 = (undefined8*)eastl::hash_map<
            unsigned long, GestureEmulateMouse::RunningTouch, eastl::hash<unsigned long>,
            eastl::equal_to<unsigned long>,
            eastl::fixed_hashtable_allocator<12ul, 72ul, 10ul, 8ul, 0ul, true, eastl::allocator>, false>::
        operator[](
            (hash_map<unsigned long, GestureEmulateMouse::RunningTouch, eastl::hash<unsigned long>,
                      eastl::equal_to<unsigned long>,
                      eastl::fixed_hashtable_allocator<12ul, 72ul, 10ul, 8ul, 0ul, true, eastl::allocator>, false>*)
                this_00,
            &local_28);
        *puVar3 = local_60.field_0;
        puVar3[1] = local_60.field_8._0_8_;
        puVar3[2] = local_60.field_8._8_8_;
        puVar3[3] = local_60.field_8._16_8_;
        puVar3[4] = local_60.field_32._0_8_;
        puVar3[5] = local_60.field_32._8_8_;
        puVar3[6] = local_60.field_32._16_8_;
        return 1;
    }

    // 0x100c9ff30, 16 bytes, complete-object constructor, placed by debug map only (low confidence)
    // GestureEmulateMouse::RunningTouch::RunningTouch(unsigned long, float, float): jumps straight to the base-object constructor

    // 0x100c9ff70, 496 bytes, placed by debug map only (low confidence)
    // GestureEmulateMouse::OnTouchMove(GestureManager*, unsigned long, float, float)
    undefined8 GestureEmulateMouse::OnTouchMove(GestureManager* param_1, ulong param_2, float param_3, float param_4) {
        long lVar1;
        ulonglong uVar2;
        SystemTimer* this_00;
        SystemTimer* this_01;
        float fVar3;
        float fVar4;
        ulong local_30;

        this_01 = (SystemTimer*)&field_120;
        local_30 = param_2;
        lVar1 = eastl::hash_map<unsigned long, GestureEmulateMouse::RunningTouch, eastl::hash<unsigned long>,
                                eastl::equal_to<unsigned long>,
                                eastl::fixed_hashtable_allocator<12ul, 72ul, 10ul, 8ul, 0ul, true, eastl::allocator>,
                                false>::
        operator[](
            (hash_map<unsigned long, GestureEmulateMouse::RunningTouch, eastl::hash<unsigned long>,
                      eastl::equal_to<unsigned long>,
                      eastl::fixed_hashtable_allocator<12ul, 72ul, 10ul, 8ul, 0ul, true, eastl::allocator>, false>*)
                this_01,
            &local_30);
        *(float*)(lVar1 + 40) = param_3;
        lVar1 = eastl::hash_map<unsigned long, GestureEmulateMouse::RunningTouch, eastl::hash<unsigned long>,
                                eastl::equal_to<unsigned long>,
                                eastl::fixed_hashtable_allocator<12ul, 72ul, 10ul, 8ul, 0ul, true, eastl::allocator>,
                                false>::
        operator[](
            (hash_map<unsigned long, GestureEmulateMouse::RunningTouch, eastl::hash<unsigned long>,
                      eastl::equal_to<unsigned long>,
                      eastl::fixed_hashtable_allocator<12ul, 72ul, 10ul, 8ul, 0ul, true, eastl::allocator>, false>*)
                this_01,
            &local_30);
        *(float*)(lVar1 + 44) = param_4;
        if (local_30 == field_1120) {
            if (field_1149 == '\0') {
                lVar1 = eastl::hash_map<
                    unsigned long, GestureEmulateMouse::RunningTouch, eastl::hash<unsigned long>,
                    eastl::equal_to<unsigned long>,
                    eastl::fixed_hashtable_allocator<12ul, 72ul, 10ul, 8ul, 0ul, true, eastl::allocator>, false>::
                operator[](
                    (hash_map<unsigned long, GestureEmulateMouse::RunningTouch, eastl::hash<unsigned long>,
                              eastl::equal_to<unsigned long>,
                              eastl::fixed_hashtable_allocator<12ul, 72ul, 10ul, 8ul, 0ul, true, eastl::allocator>,
                              false>*)this_01,
                    &local_30);
                fVar3 = param_3 - *(float*)(lVar1 + 16);
                fVar4 = param_4 - *(float*)(lVar1 + 20);
                if (100.0 < fVar4 * fVar4 + fVar3 * fVar3) {
                    field_1151 = 0;
                    this_00 = this_01;
                    lVar1 = this_01->size();
                    if (lVar1 == 1) {
                        uVar2 = SystemTimer::GetTimeMS<std::chrono::steady_clock>(this_00);
                        if (uVar2 - field_1136 < m_rightClickTime) {
                            field_1128 = 0;
                        }
                    } else {
                        field_1149 = '\x01';
                        field_1150 = '\x01';
                    }
                    if (field_1149 == '\0') {
                        lVar1 = eastl::hash_map<
                            unsigned long, GestureEmulateMouse::RunningTouch, eastl::hash<unsigned long>,
                            eastl::equal_to<unsigned long>,
                            eastl::fixed_hashtable_allocator<12ul, 72ul, 10ul, 8ul, 0ul, true, eastl::allocator>,
                            false>::operator[]((hash_map<unsigned long, GestureEmulateMouse::RunningTouch,
                                                         eastl::hash<unsigned long>, eastl::equal_to<unsigned long>,
                                                         eastl::fixed_hashtable_allocator<12ul, 72ul, 10ul, 8ul, 0ul,
                                                                                          true, eastl::allocator>,
                                                         false>*)this_01,
                                               &local_30);
                        (field_112, *(float*)(lVar1 + 16), *(float*)(lVar1 + 20))->OnMouseMove();
                        if (field_1128 == 0) {
                            (field_112, *(float*)(lVar1 + 16), *(float*)(lVar1 + 20))->OnLMouseDown();
                        }
                        field_1149 = '\x01';
                    }
                }
            }
            (field_112, param_3, param_4)->OnMouseMove();
        } else {
            lVar1 = this_01->size();
            if (lVar1 == 3) {
                uVar2 = SystemTimer::GetTimeMS<std::chrono::steady_clock>(this_01);
                if (300 < uVar2 - field_1136) {
                    (*(code*)field_112->field_0[2])(field_112, 56);
                    (*(code*)field_112->field_0[2])(field_112, 59);
                    (field_112, param_3, param_4)->OnMouseMove();
                    (field_112, param_3, param_4)->OnLMouseDown();
                    (field_112, param_3, param_4)->OnLMouseUp();
                }
            }
        }
        return 1;
    }

    // 0x100ca0160, 400 bytes, placed by debug map only (low confidence)
    // GestureEmulateMouse::OnTouchUp(GestureManager*, unsigned long, float, float)
    undefined8 GestureEmulateMouse::OnTouchUp(GestureManager* param_1, ulong param_2, float param_3, float param_4) {
        undefined1* this_00;
        char cVar1;
        long lVar2;
        RunningTouch* this_01;
        Input* this_02;
        undefined1 local_70[20];
        float local_5c;
        ulong local_38;

        field_1144 = 0;
        field_1148 = 0;
        this_00 = &field_120;
        this_02 = (Input*)this_00;
        local_38 = param_2;
        lVar2 = this_00->size();
        field_1151 = 0;
        if (lVar2 == 3) {
            (*(code*)field_112->field_0[3])(field_112, 59);
            this_02 = field_112;
            (*(code*)this_02->field_0[3])(this_02, 56);
            field_1149 = '\x01';
            field_1150 = '\x01';
        }
        if (field_1149 == '\0') {
            if (lVar2 == 1) {
                if (SystemTimer::GetTimeMS<std::chrono::steady_clock>((SystemTimer*)this_02) - field_1136 <=
                    m_rightClickTime) {
                    field_1128 = 0;
                }
            } else {
                field_1149 = '\x01';
                field_1150 = '\x01';
            }
        }
        new (local_70) RunningTouch();
        this_01 = (RunningTouch*)eastl::hash_map<
            unsigned long, GestureEmulateMouse::RunningTouch, eastl::hash<unsigned long>,
            eastl::equal_to<unsigned long>,
            eastl::fixed_hashtable_allocator<12ul, 72ul, 10ul, 8ul, 0ul, true, eastl::allocator>, false>::
        operator[](
            (hash_map<unsigned long, GestureEmulateMouse::RunningTouch, eastl::hash<unsigned long>,
                      eastl::equal_to<unsigned long>,
                      eastl::fixed_hashtable_allocator<12ul, 72ul, 10ul, 8ul, 0ul, true, eastl::allocator>, false>*)
                this_00,
            &local_38);
        this_01->swap(local_70);
        this_00->erase(&local_38);
        if (field_1149 == '\0') {
            (field_112, (float)local_70._16_4_, local_5c)->OnMouseMove();
            if (field_1128 == 0) {
                (field_112, (float)local_70._16_4_, local_5c)->OnLMouseDown();
            }
            field_1149 = '\x01';
            cVar1 = field_1150;
        } else {
            cVar1 = field_1150;
        }
        if (cVar1 == '\0') {
            (field_112, param_3, param_4)->OnMouseMove();
            if (field_1128 == 0) {
                (field_112, param_3, param_4)->OnLMouseUp();
            }
            field_1120 = 4294967295;
            field_1150 = '\x01';
        }
        return 1;
    }

} // namespace jag::input::gesture
