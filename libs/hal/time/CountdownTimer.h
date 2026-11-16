// libs/hal/time/CountdownTimer.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag {
    template <typename...> // 1 instantiations, e.g. <std::chrono::steady_clock>
    class CountdownTimerT {
    public:
        CountdownTimerT();
        void IsDisabled() const;
        void SetDisabled();
        void IsExpired() const;
        auto ResetToMillisecond(unsigned long long arg1);
    };

    // 0x1008c8fb0
    void CountdownTimerT<std::chrono::steady_clock>::IsDisabled() const {
        uint64_t local_18 =
            std::chrono::time_point<std::chrono::steady_clock,
                                    std::chrono::duration<long long, std::ratio<1l, 1000000000l>>>::min();
        *this == local_18;
    }

    // 0x1008c9bd0
    void CountdownTimerT<std::chrono::steady_clock>::SetDisabled() {
        uint64_t uVar1 = std::chrono::time_point<std::chrono::steady_clock,
                                                 std::chrono::duration<long long, std::ratio<1l, 1000000000l>>>::min();
        *(uint64_t*)this = uVar1;
    }

    // 0x1008c9bf0
    void CountdownTimerT<std::chrono::steady_clock>::IsExpired() const {
        std::chrono::steady_clock::now() > *this;
    }

    // 0x1008c9c20
    auto CountdownTimerT<std::chrono::steady_clock>::ResetToMillisecond(unsigned long long arg1) {
        type* arg2;
        uint8_t auVar1[16];
        duration<long long, std::ratio<1l, 1000000000l>> local_38;
        duration<long long, std::ratio<1l, 1000l>> local_30;

        auVar1 = std::chrono::steady_clock::now();
        auto result = auVar1._0_8_;
        if (arg1 != 0) {
            local_30.duration<unsigned long long>(arg1, auVar1._8_8_);
            local_38.duration<long long, std::ratio<1l, 1000l>>(local_30, arg2);
            result += local_38;
        }
        return result;
    }

} // namespace jag

namespace jag::graphics {
    // 0x1008c90f0
    SpriteAtlasMapping* SpriteAtlasMapping::operator=(const SpriteAtlasMapping& spriteAtlasMapping) {
        field_0 = spriteAtlasMapping.field_0;
        field_8 = spriteAtlasMapping.field_8;
        field_64 = spriteAtlasMapping.field_64;
        field_72 = spriteAtlasMapping.field_72;
        field_88 = spriteAtlasMapping.field_88;
        field_104 = spriteAtlasMapping.field_104;
        return this;
    }

    // 0x1008c98d0
    void SpriteAtlasUsageMap::AddPermanentRectIDs(unsigned long arg1) {
        field_48.push_back(arg1);
    }

    // 0x1008c98f0
    void SpriteAtlasUsageMap::AddFilledRectIDs(unsigned long arg1) {
        field_24.push_back(arg1);
    }

    // 0x1008c9910
    void SpriteAtlasUsageMap::AddPendingRectIDs(unsigned long arg1) {
        push_back(arg1);
    }

    // 0x1008c9930
    void SpriteAtlasUsageMap::UpdateUsageMap<BucketAllocatorEASTL>(
        const math::RectanglePacker<int, BucketAllocatorEASTL>& rectanglePacker) {
        RectanglePacker<int, BucketAllocatorEASTL> local_38;

        local_38.getAvailableUsageRectangles();
        field_72 = local_38;
        local_38.getFilledUsageRectanglesByID(rectanglePacker);
        field_96 = local_38;
        local_38.getFilledUsageRectanglesByID(rectanglePacker);
        field_144 = local_38;
        local_38.getFilledUsageRectanglesByID(rectanglePacker);
        field_120 = local_38;
    }

} // namespace jag::graphics
