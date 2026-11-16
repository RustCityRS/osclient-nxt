// libs/hal/input/InputGestures_Swipe.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.hal.input

#include "InputGestures_Swipe.h"

namespace jag::input::gesture {
    // 0x100ca09c0
    uint8_t GestureSwipe::OnTouchDown(GestureManager* gestureManager, unsigned long arg2, float arg3, float arg4) {
        RunningTouch local_68(arg2, arg3, arg4);
        RunningTouch* this_00 = &field_112[arg2];
        *this_00 = local_68;
        return 1;
    }

    // 0x100ca0ab0
    uint8_t GestureSwipe::OnTouchMove(GestureManager* gestureManager, unsigned long arg2, float arg3, float arg4) {
        ((RunningTouch*)field_112[arg2])->AddPoint(arg2, arg3, arg4);
        return 1;
    }

    // 0x100ca0b00
    void GestureSwipe::RunningTouch::AddPoint(unsigned long arg1, float arg2, float arg3) {
        float local_30;
        float local_2c;

        if (field_0 != (Pix32*)arg1) {
            local_30 = arg3;
            local_2c = arg2;
            LogAssert("touchId == m_touchID",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/input/"
                      "InputGestures_Swipe.cpp",
                      157, nullptr);
        }
        TouchPoint local_48(arg1, arg2, arg3);
        field_8.push_back(local_48);
        field_72 = field_72 + 1;
    }

    // 0x100ca0b80
    uint64_t GestureSwipe::OnTouchUp(GestureManager* gestureManager, unsigned long arg2, float arg3, float arg4) {
        TouchPoint* pTVar3;
        long lVar4;
        int iVar5;
        int iVar6;
        bool local_32;
        bool local_31;

        RunningTouch local_e8;
        uint8_t* this_00 = &field_112;
        RunningTouch* pRVar2 = (RunningTouch*)(*this_00)[arg2];
        pRVar2->swap(local_e8);
        this_00->erase(arg2);
        uint8_t* this_01 = &field_168;
        pRVar2 = (RunningTouch*)(*this_01)[arg2];
        *pRVar2 = local_e8;
        bool cVar1 = this_00->empty();
        if (!cVar1) {
            return 0;
        }
        TouchPoint local_90;
        TouchPoint local_78;
        auto local_f8 = this_01->end();
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* local_60 =
            (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                       eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                       eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                       eastl::prime_rehash_policy, false, true, true>*)this_01;
        local_e8 = this_01->begin();
        cVar1 = local_e8 != local_f8;
        int iVar7 = 0;
        unsigned long local_40 = 0;
        unsigned long local_48 = 0;
        int iVar8 = 0;
        if (cVar1) {
            iVar8 = 0;
            local_48 = 0;
            local_40 = 0;
            iVar7 = 0;
            do {
                lVar4 = local_e8.HeapBeginPtr();
                cVar1 = ((lVar4 + 8))->IsHorizontal(local_32);
                if (cVar1) {
                    iVar7 = iVar7 + 1;
                    local_48 = (unsigned long)(((int)local_48 + (unsigned int)local_32 * 2) - 1);
                }
                cVar1 = ((lVar4 + 8))->IsVertical(local_31);
                if (cVar1) {
                    iVar8 = iVar8 + 1;
                    local_40 = (unsigned long)(((int)local_40 + (unsigned int)local_31 * 2) - 1);
                }
                pTVar3 = (TouchPoint*)((lVar4 + 16))->front();
                local_90 += *pTVar3;
                pTVar3 = (TouchPoint*)((lVar4 + 16))->back();
                local_78 += *pTVar3;
                ++local_e8;
                cVar1 = local_e8 != local_f8;
            } while (cVar1);
        }
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* this_02 = local_60;
        if ((iVar7 == 0) && (0 < iVar8)) {
            iVar5 = (int)local_40;
            iVar7 = -iVar5;
            if (-iVar5 < 0) {
                iVar7 = iVar5;
            }
            if (iVar8 != iVar7)
                goto LAB_100ca0eb3;
            iVar7 = local_60->size();
            local_90 /= iVar7;
            iVar7 = this_02->size();
            local_78 /= iVar7;
            local_e8 = GestureEvent_Swipe();
            local_e8._16_8_ = local_90.field_16;
            local_e8.field_0 = (Pix32*)local_90.field_0;
            local_e8._8_4_ = local_90.field_8;
            local_e8._12_4_ = local_90.field_12;
            local_e8._24_8_ = local_78.field_0;
            local_e8._32_4_ = local_78.field_8;
            local_e8._36_4_ = local_78.field_12;
            local_e8._40_8_ = local_78.field_16;
            local_e8._48_4_ = 2 - (unsigned int)(iVar5 < 1);
            local_e8._52_4_ = iVar8;
        } else {
            iVar6 = (int)local_48;
            iVar5 = -iVar6;
            if (-iVar6 < 0) {
                iVar5 = iVar6;
            }
            if (((iVar8 != 0) || (iVar7 < 1)) || (iVar7 != iVar5))
                goto LAB_100ca0eb3;
            iVar8 = local_60->size();
            local_90 /= iVar8;
            iVar8 = this_02->size();
            local_78 /= iVar8;
            local_e8 = GestureEvent_Swipe();
            local_e8._16_8_ = local_90.field_16;
            local_e8.field_0 = (Pix32*)local_90.field_0;
            local_e8._8_4_ = local_90.field_8;
            local_e8._12_4_ = local_90.field_12;
            local_e8._24_8_ = local_78.field_0;
            local_e8._32_4_ = local_78.field_8;
            local_e8._36_4_ = local_78.field_12;
            local_e8._40_8_ = local_78.field_16;
            local_e8._48_4_ = (0 < iVar6) + 3;
            local_e8._52_4_ = iVar7;
        }
        RunEvent(local_e8);
    LAB_100ca0eb3:
        this_02->clear();
        return 0;
    }

    // 0x100ca1060
    bool GestureSwipe::RunningTouch::IsHorizontal(bool& arg1) {
        uint8_t* this_00 = &field_8;
        long lVar2 = this_00->front();
        long lVar3 = this_00->back();
        float fVar5 = *(float*)(lVar3 + 12);
        float fVar1 = *(float*)(lVar2 + 12);
        float fVar4 = (float)::abs(*(float*)(lVar3 + 8) - *(float*)(lVar2 + 8));
        fVar5 = (float)::abs(fVar5 - fVar1);
        if (fVar5 + fVar5 <= fVar4) {
            lVar2 = this_00->front();
            fVar1 = *(float*)(lVar2 + 8);
            lVar2 = this_00->back();
            arg1 = fVar1 < *(float*)(lVar2 + 8);
        }
        return fVar5 + fVar5 <= fVar4;
    }

    // 0x100ca1120
    bool GestureSwipe::RunningTouch::IsVertical(bool& arg1) {
        uint8_t* this_00 = &field_8;
        long lVar2 = this_00->front();
        long lVar3 = this_00->back();
        float fVar5 = *(float*)(lVar3 + 12);
        float fVar1 = *(float*)(lVar2 + 12);
        float fVar4 = (float)::abs(*(float*)(lVar3 + 8) - *(float*)(lVar2 + 8));
        fVar5 = (float)::abs(fVar5 - fVar1);
        if (fVar4 + fVar4 <= fVar5) {
            lVar2 = this_00->front();
            fVar1 = *(float*)(lVar2 + 12);
            lVar2 = this_00->back();
            arg1 = fVar1 < *(float*)(lVar2 + 12);
        }
        return fVar4 + fVar4 <= fVar5;
    }

    // 0x100ca13a0
    GestureSwipe::RunningTouch::RunningTouch(unsigned long arg1, float arg2, float arg3) {

        field_0 = (Pix32*)arg1;
        new (&field_8) eastl::list<TouchPoint>();
        new (&field_40) eastl::vector<float>();
        field_72 = 0;
        TouchPoint local_48(arg1, arg2, arg3);
        field_8.push_back(local_48);
    }

} // namespace jag::input::gesture

// 0x100ca1390
unsigned long abs(float arg1) {
    uint32_t in_XMM0_Db;

    return (((uint64_t)in_XMM0_Db << 32) | (uint32_t)arg1) & 9223372034707292159;
}
