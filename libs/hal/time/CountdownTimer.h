// libs/hal/time/CountdownTimer.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag {
    template <typename...> // 1 instantiations, e.g. <std::chrono::steady_clock>
    class CountdownTimerT {
    public:
        CountdownTimerT();
        void IsDisabled() const;
        SetDisabled();
        void IsExpired() const;
        CountdownTimerT<std::chrono::steady_clock>* ResetToMillisecond(unsigned long long);
    };

    // 0x1008c8370, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // CountdownTimerT<std::chrono::steady_clock>::CountdownTimerT(): jumps straight to the base-object constructor

    // 0x1008c8fb0, 48 bytes, inline, placed by debug map only (low confidence)
    // CountdownTimerT<std::chrono::steady_clock>::IsDisabled() const
    /* CountdownTimerT<std::chrono::steady_clock>::IsDisabled() const */

    void CountdownTimerT<std::chrono::steady_clock>::IsDisabled() {
        undefined8 local_18;

        local_18 = std::chrono::time_point<std::chrono::steady_clock,
                                           std::chrono::duration<long long, std::ratio<1l, 1000000000l>>>::min();
        std::chrono::operator==(this, (time_point*)&local_18);
    }

    // 0x1008c9bd0, 32 bytes, inline, placed by debug map only (low confidence)
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // CountdownTimerT<std::chrono::steady_clock>::SetDisabled()
    /* CountdownTimerT<std::chrono::steady_clock>::CountdownTimerT() */

    void CountdownTimerT<std::chrono::steady_clock>::CountdownTimerT() {
        undefined8 uVar1;

        uVar1 = std::chrono::time_point<std::chrono::steady_clock,
                                        std::chrono::duration<long long, std::ratio<1l, 1000000000l>>>::min();
        *(undefined8*)this = uVar1;
    }

    // 0x1008c9bf0, 48 bytes, inline, placed by debug map only (low confidence)
    // CountdownTimerT<std::chrono::steady_clock>::IsExpired() const
    /* CountdownTimerT<std::chrono::steady_clock>::IsExpired() const */

    void CountdownTimerT<std::chrono::steady_clock>::IsExpired() {
        undefined8 local_18;

        local_18 = std::chrono::steady_clock::now();
        std::chrono::operator>((time_point*)&local_18, this);
    }

    // 0x1008c9c20, 96 bytes, inline, placed by debug map only (low confidence)
    // CountdownTimerT<std::chrono::steady_clock>::ResetToMillisecond(unsigned long long)
    /* CountdownTimerT<std::chrono::steady_clock>::ResetToMillisecond(unsigned long long) */

    CountdownTimerT<std::chrono::steady_clock>*
    CountdownTimerT<std::chrono::steady_clock>::ResetToMillisecond(ulonglong param_1) {
        undefined8 uVar1;
        duration local_38[8];
        type local_30[8];
        ulonglong local_28;

        local_28 = param_1;
        uVar1 = std::chrono::steady_clock::now();
        *(undefined8*)this = uVar1;
        if (param_1 != 0) {
            std::chrono::duration<long long, std::ratio<1l, 1000l>>::duration<unsigned long long>((ulonglong*)local_30,
                                                                                                  (type*)&local_28);
            std::chrono::duration<long long, std::ratio<1l, 1000000000l>>::duration<long long, std::ratio<1l, 1000l>>(
                local_38, local_30);
            std::chrono::time_point<std::chrono::steady_clock,
                                    std::chrono::duration<long long, std::ratio<1l, 1000000000l>>>::
            operator+=((time_point<std::chrono::steady_clock,
                                   std::chrono::duration<long long, std::ratio<1l, 1000000000l>>>*)this,
                       local_38);
        }
        return this;
    }

} // namespace jag

namespace jag::graphics {
    // 0x1008c8480, 16 bytes, complete-object destructor, inline, placed by debug map only (low confidence)
    // SpriteAtlasMapping::~SpriteAtlasMapping(): jumps straight to the base-object destructor

    // 0x1008c90f0, 80 bytes, inline, placed by debug map only (low confidence)
    // SpriteAtlasMapping::operator=(SpriteAtlasMapping const&)
    /* SpriteAtlasMapping::TEMPNAMEPLACEHOLDERVALUE(SpriteAtlasMapping
   const&) */

    SpriteAtlasMapping* SpriteAtlasMapping::operator=(SpriteAtlasMapping* param_1) {
        field_0 = param_1->field_0;
        eastl::fixed_vector<int, 4ul, true, eastl::allocator>::operator=(
            (fixed_vector<int, 4ul, true, eastl::allocator>*)&field_8, (fixed_vector*)&param_1->field_8);
        field_64 = param_1->field_64;
        math::Rect<unsigned int>::operator=((Rect<unsigned int>*)&field_72, (Rect*)&param_1->field_72);
        math::Rect<float>::operator=((Rect<float>*)&field_88, (Rect*)&param_1->field_88);
        field_104 = param_1->field_104;
        return this;
    }

    // 0x1008c98d0, 32 bytes, inline, placed by debug map only (low confidence)
    // SpriteAtlasUsageMap::AddPermanentRectIDs(unsigned long)
    void SpriteAtlasUsageMap::AddPermanentRectIDs(ulong param_1) {
        ulong local_10;

        local_10 = param_1;
        (&field_48, &local_10)->push_back();
    }

    // 0x1008c98f0, 32 bytes, inline, placed by debug map only (low confidence)
    // SpriteAtlasUsageMap::AddFilledRectIDs(unsigned long)
    void SpriteAtlasUsageMap::AddFilledRectIDs(ulong param_1) {
        ulong local_10;

        local_10 = param_1;
        (&field_24, &local_10)->push_back();
    }

    // 0x1008c9910, 32 bytes, inline, placed by debug map only (low confidence)
    // SpriteAtlasUsageMap::AddPendingRectIDs(unsigned long)
    void SpriteAtlasUsageMap::AddPendingRectIDs(ulong param_1) {
        ulong local_10;

        local_10 = param_1;
        push_back(&local_10);
    }

    // 0x1008c9930, 224 bytes, inline, placed by debug map only (low confidence)
    // void SpriteAtlasUsageMap::UpdateUsageMap<BucketAllocatorEASTL>(math::RectanglePacker<int, BucketAllocatorEASTL> const&)
    void SpriteAtlasUsageMap::UpdateUsageMap<BucketAllocatorEASTL>(RectanglePacker* param_1) {
        vector* in_RSI;
        RectanglePacker<int, BucketAllocatorEASTL> local_38[24];

        local_38->getAvailableUsageRectangles();
        eastl::vector<math::Rect<float>, BucketAllocatorEASTL>::operator=(
            (vector<math::Rect<float>, BucketAllocatorEASTL>*)(param_1 + 72), (vector*)local_38);
        local_38->~vector();
        local_38->getFilledUsageRectanglesByID(in_RSI);
        eastl::vector<math::Rect<float>, BucketAllocatorEASTL>::operator=(
            (vector<math::Rect<float>, BucketAllocatorEASTL>*)(param_1 + 96), (vector*)local_38);
        local_38->~vector();
        local_38->getFilledUsageRectanglesByID(in_RSI);
        eastl::vector<math::Rect<float>, BucketAllocatorEASTL>::operator=(
            (vector<math::Rect<float>, BucketAllocatorEASTL>*)(param_1 + 144), (vector*)local_38);
        local_38->~vector();
        local_38->getFilledUsageRectanglesByID(in_RSI);
        eastl::vector<math::Rect<float>, BucketAllocatorEASTL>::operator=(
            (vector<math::Rect<float>, BucketAllocatorEASTL>*)(param_1 + 120), (vector*)local_38);
        local_38->~vector();
    }

} // namespace jag::graphics
