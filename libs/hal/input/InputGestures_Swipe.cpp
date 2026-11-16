// libs/hal/input/InputGestures_Swipe.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.hal.input

#include "InputGestures_Swipe.h"

namespace jag::input::gesture {
    // 0x100ca09c0, 96 bytes, placed by debug map only (low confidence)
    // GestureSwipe::OnTouchDown(GestureManager*, unsigned long, float, float)
    undefined1 GestureSwipe::OnTouchDown(GestureManager* param_1, ulong param_2, float param_3, float param_4) {
        RunningTouch* this_00;
        RunningTouch local_68;
        ulong local_18;

        local_18 = param_2;
        new (&local_68) RunningTouch(param_2, param_3, param_4);
        this_00 = (RunningTouch*)eastl::hash_map<unsigned long, GestureSwipe::RunningTouch, eastl::hash<unsigned long>,
                                                 eastl::equal_to<unsigned long>, eastl::allocator, false>::
        operator[]((hash_map<unsigned long, GestureSwipe::RunningTouch, eastl::hash<unsigned long>,
                             eastl::equal_to<unsigned long>, eastl::allocator, false>*)&field_112,
                   &local_18);
        RunningTouch::operator=(this_00, &local_68);
        local_68.~RunningTouch();
        return 1;
    }

    // 0x100ca0a20, 16 bytes, complete-object constructor, placed by debug map only (low confidence)
    // GestureSwipe::RunningTouch::RunningTouch(unsigned long, float, float): jumps straight to the base-object constructor

    // 0x100ca0ab0, 80 bytes, placed by debug map only (low confidence)
    // GestureSwipe::OnTouchMove(GestureManager*, unsigned long, float, float)
    undefined1 GestureSwipe::OnTouchMove(GestureManager* param_1, ulong param_2, float param_3, float param_4) {
        RunningTouch* this_00;
        ulong local_18;

        local_18 = param_2;
        this_00 = (RunningTouch*)eastl::hash_map<unsigned long, GestureSwipe::RunningTouch, eastl::hash<unsigned long>,
                                                 eastl::equal_to<unsigned long>, eastl::allocator, false>::
        operator[]((hash_map<unsigned long, GestureSwipe::RunningTouch, eastl::hash<unsigned long>,
                             eastl::equal_to<unsigned long>, eastl::allocator, false>*)&field_112,
                   &local_18);
        this_00->AddPoint(local_18, param_3, param_4);
        return 1;
    }

    // 0x100ca0b00, 128 bytes, placed by debug map only (low confidence)
    // GestureSwipe::RunningTouch::AddPoint(unsigned long, float, float)
    void GestureSwipe::RunningTouch::AddPoint(ulong param_1, float param_2, float param_3) {
        TouchPoint local_48;
        float local_30;
        float local_2c;

        if (field_0 != (Pix8*)param_1) {
            local_30 = param_3;
            local_2c = param_2;
            /* WARNING: Subroutine does not return */
            LogAssert("touchId == m_touchID",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/input/"
                      "InputGestures_Swipe.cpp",
                      157, (char*)0);
        }
        new (&local_48) TouchPoint(param_1, param_2, param_3);
        (&field_8, &local_48)->push_back();
        field_72 = field_72 + 1;
    }

    // 0x100ca0b80, 880 bytes, placed by debug map only (low confidence)
    // GestureSwipe::OnTouchUp(GestureManager*, unsigned long, float, float)
    undefined8 GestureSwipe::OnTouchUp(GestureManager* param_1, ulong param_2, float param_3, float param_4) {
        undefined1* this_00;
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* this_01;
        char cVar1;
        bool bVar2;
        RunningTouch* pRVar3;
        TouchPoint* pTVar4;
        long lVar5;
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base* extraout_RDX_00;
        int iVar6;
        int iVar7;
        int iVar8;
        int iVar9;
        hashtable_iterator_base local_f8[16];
        RunningTouch local_e8;
        TouchPoint local_90;
        TouchPoint local_78;
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* local_60;
        GestureSwipe* local_58;
        ulong local_50;
        ulong local_48;
        ulong local_40;
        bool local_32;
        bool local_31;

        local_50 = param_2;
        new (&local_e8) RunningTouch();
        this_00 = &field_112;
        pRVar3 = (RunningTouch*)eastl::hash_map<unsigned long, GestureSwipe::RunningTouch, eastl::hash<unsigned long>,
                                                eastl::equal_to<unsigned long>, eastl::allocator, false>::
        operator[]((hash_map<unsigned long, GestureSwipe::RunningTouch, eastl::hash<unsigned long>,
                             eastl::equal_to<unsigned long>, eastl::allocator, false>*)this_00,
                   &local_50);
        pRVar3->swap(&local_e8);
        this_00->erase(&local_50);
        pRVar3 = (RunningTouch*)eastl::hash_map<unsigned long, GestureSwipe::RunningTouch, eastl::hash<unsigned long>,
                                                eastl::equal_to<unsigned long>, eastl::allocator, false>::
        operator[]((hash_map<unsigned long, GestureSwipe::RunningTouch, eastl::hash<unsigned long>,
                             eastl::equal_to<unsigned long>, eastl::allocator, false>*)&field_168,
                   &local_50);
        RunningTouch::operator=(pRVar3, &local_e8);
        local_e8.~RunningTouch();
        cVar1 = this_00->empty();
        if (cVar1 == '\0') {
            return 0;
        }
        local_58 = this;
        new (&local_90) TouchPoint();
        new (&local_78) TouchPoint();
        eastl::hashtable<int, eastl::pair<int const, oldscape::highlight::HighlightedGroup>, eastl::allocator,
                         eastl::use_first<eastl::pair<int const, oldscape::highlight::HighlightedGroup>>,
                         eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                         eastl::prime_rehash_policy, false, true, true>::end();
        local_60 = (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                              eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                              eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                              eastl::prime_rehash_policy, false, true, true>*)&field_168;
        eastl::hashtable<eastl::string, eastl::pair<eastl::stringconst, unsigned int>, eastl::allocator,
                         eastl::use_first<eastl::pair<eastl::stringconst, unsigned int>>,
                         eastl::equal_to<eastl::string>, eastl::hash<eastl::string>, eastl::mod_range_hashing,
                         eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::begin();
        bVar2 = eastl::operator!=((eastl*)&local_e8, local_f8, extraout_RDX);
        iVar8 = 0;
        local_40 = 0;
        local_48 = 0;
        iVar9 = 0;
        if (bVar2) {
            iVar9 = 0;
            local_48 = 0;
            local_40 = 0;
            iVar8 = 0;
            do {
                lVar5 = local_e8.HeapBeginPtr();
                cVar1 = ((lVar5 + 8))->IsHorizontal(&local_32);
                if (cVar1 != '\0') {
                    iVar8 = iVar8 + 1;
                    local_48 = (ulong)(((int)local_48 + (uint)local_32 * 2) - 1);
                }
                cVar1 = ((lVar5 + 8))->IsVertical(&local_31);
                if (cVar1 != '\0') {
                    iVar9 = iVar9 + 1;
                    local_40 = (ulong)(((int)local_40 + (uint)local_31 * 2) - 1);
                }
                pTVar4 = (TouchPoint*)eastl::list<TouchPoint, eastl::allocator>::front();
                TouchPoint::operator+=(&local_90, pTVar4);
                pTVar4 = (TouchPoint*)eastl::list<TouchPoint, eastl::allocator>::back();
                TouchPoint::operator+=(&local_78, pTVar4);
                eastl::hashtable_iterator<eastl::pair<unsigned long const, GestureSwipe::RunningTouch>, false, false>::
                operator++((hashtable_iterator<eastl::pair<unsigned long const, GestureSwipe::RunningTouch>, false,
                                               false>*)&local_e8);
                bVar2 = eastl::operator!=((eastl*)&local_e8, local_f8, extraout_RDX_00);
            } while (bVar2);
        }
        this_01 = local_60;
        if ((iVar8 == 0) && (0 < iVar9)) {
            iVar6 = (int)local_40;
            iVar8 = -iVar6;
            if (-iVar6 < 0) {
                iVar8 = iVar6;
            }
            if (iVar9 != iVar8)
                goto LAB_100ca0eb3;
            iVar8 = eastl::hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                                     eastl::use_first<eastl::pair<long long const, unsigned int>>,
                                     eastl::equal_to<long long>, eastl::hash<long long>, eastl::mod_range_hashing,
                                     eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
                                     true>::size(local_60);
            TouchPoint::operator/=(&local_90, iVar8);
            iVar8 = eastl::hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                                     eastl::use_first<eastl::pair<long long const, unsigned int>>,
                                     eastl::equal_to<long long>, eastl::hash<long long>, eastl::mod_range_hashing,
                                     eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
                                     true>::size(this_01);
            TouchPoint::operator/=(&local_78, iVar8);
            new (&local_e8) GestureEvent_Swipe();
            local_e8._16_8_ = local_90.field_16;
            local_e8.field_0 = (Pix8*)local_90.field_0;
            local_e8._8_4_ = local_90.field_8;
            local_e8._12_4_ = local_90.field_12;
            local_e8._24_8_ = local_78.field_0;
            local_e8._32_4_ = local_78.field_8;
            local_e8._36_4_ = local_78.field_12;
            local_e8._40_8_ = local_78.field_16;
            local_e8._48_4_ = 2 - (uint)(iVar6 < 1);
            local_e8._52_4_ = iVar9;
        } else {
            iVar7 = (int)local_48;
            iVar6 = -iVar7;
            if (-iVar7 < 0) {
                iVar6 = iVar7;
            }
            if (((iVar9 != 0) || (iVar8 < 1)) || (iVar8 != iVar6))
                goto LAB_100ca0eb3;
            iVar9 = eastl::hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                                     eastl::use_first<eastl::pair<long long const, unsigned int>>,
                                     eastl::equal_to<long long>, eastl::hash<long long>, eastl::mod_range_hashing,
                                     eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
                                     true>::size(local_60);
            TouchPoint::operator/=(&local_90, iVar9);
            iVar9 = eastl::hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                                     eastl::use_first<eastl::pair<long long const, unsigned int>>,
                                     eastl::equal_to<long long>, eastl::hash<long long>, eastl::mod_range_hashing,
                                     eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
                                     true>::size(this_01);
            TouchPoint::operator/=(&local_78, iVar9);
            new (&local_e8) GestureEvent_Swipe();
            local_e8._16_8_ = local_90.field_16;
            local_e8.field_0 = (Pix8*)local_90.field_0;
            local_e8._8_4_ = local_90.field_8;
            local_e8._12_4_ = local_90.field_12;
            local_e8._24_8_ = local_78.field_0;
            local_e8._32_4_ = local_78.field_8;
            local_e8._36_4_ = local_78.field_12;
            local_e8._40_8_ = local_78.field_16;
            local_e8._48_4_ = (0 < iVar7) + 3;
            local_e8._52_4_ = iVar8;
        }
        Gesture<GestureEvent_Swipe>::RunEvent((GestureEvent_Swipe*)local_58);
    LAB_100ca0eb3:
        this_01->clear();
        return 0;
    }

    // 0x100ca1060, 192 bytes, placed by debug map only (low confidence)
    // GestureSwipe::RunningTouch::IsHorizontal(bool&)
    bool GestureSwipe::RunningTouch::IsHorizontal(bool* param_1) {
        float fVar1;
        long lVar2;
        long lVar3;
        float fVar4;
        float fVar5;

        lVar2 = eastl::list<TouchPoint, eastl::allocator>::front();
        lVar3 = eastl::list<TouchPoint, eastl::allocator>::back();
        fVar5 = *(float*)(lVar3 + 12);
        fVar1 = *(float*)(lVar2 + 12);
        fVar4 = (float)::abs(*(float*)(lVar3 + 8) - *(float*)(lVar2 + 8));
        fVar5 = (float)::abs(fVar5 - fVar1);
        if (fVar5 + fVar5 <= fVar4) {
            lVar2 = eastl::list<TouchPoint, eastl::allocator>::front();
            fVar1 = *(float*)(lVar2 + 8);
            lVar2 = eastl::list<TouchPoint, eastl::allocator>::back();
            *param_1 = fVar1 < *(float*)(lVar2 + 8);
        }
        return fVar5 + fVar5 <= fVar4;
    }

    // 0x100ca1120, 176 bytes, placed by debug map only (low confidence)
    // GestureSwipe::RunningTouch::IsVertical(bool&)
    bool GestureSwipe::RunningTouch::IsVertical(bool* param_1) {
        float fVar1;
        long lVar2;
        long lVar3;
        float fVar4;
        float fVar5;

        lVar2 = eastl::list<TouchPoint, eastl::allocator>::front();
        lVar3 = eastl::list<TouchPoint, eastl::allocator>::back();
        fVar5 = *(float*)(lVar3 + 12);
        fVar1 = *(float*)(lVar2 + 12);
        fVar4 = (float)::abs(*(float*)(lVar3 + 8) - *(float*)(lVar2 + 8));
        fVar5 = (float)::abs(fVar5 - fVar1);
        if (fVar4 + fVar4 <= fVar5) {
            lVar2 = eastl::list<TouchPoint, eastl::allocator>::front();
            fVar1 = *(float*)(lVar2 + 12);
            lVar2 = eastl::list<TouchPoint, eastl::allocator>::back();
            *param_1 = fVar1 < *(float*)(lVar2 + 12);
        }
        return fVar4 + fVar4 <= fVar5;
    }

    // 0x100ca13a0, 144 bytes, base-object constructor, placed by debug map only (low confidence)
    // GestureSwipe::RunningTouch::RunningTouch(unsigned long, float, float)
    void GestureSwipe::RunningTouch::RunningTouch(ulong param_1, float param_2, float param_3) {
        TouchPoint local_48;

        field_0 = (Pix8*)param_1;
        new (&field_8) eastl::list<TouchPoint, eastl::allocator>();
        new (&field_40) eastl::vector<float, eastl::allocator>();
        field_72 = 0;
        new (&local_48) TouchPoint(param_1, param_2, param_3);
        (&field_8, &local_48)->push_back();
    }

} // namespace jag::input::gesture

// 0x100ca1390, 16 bytes, placed by debug map only (low confidence)
// abs(float)
ulong abs(float param_1) {
    undefined4 in_XMM0_Db;

    return CONCAT44(in_XMM0_Db, param_1) & 9223372034707292159;
}
