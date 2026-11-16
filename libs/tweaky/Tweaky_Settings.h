// libs/tweaky/Tweaky_Settings.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::tweak {
    class TweakSettingsValue {
    public:
        TweakSettingsValue();
        ~TweakSettingsValue();
        TweakSettingsValue(const TweakSettingsValue& tweakSettingsValue);

    private:
        uint8_t _unknown_0[80];
        uint64_t field_80;
    };

} // namespace jag::tweak

namespace jag {
    // 0x100a4c240
    shared_ptr_if_not_array<tweak::CheckBox>::type
    make_shared<tweak::CheckBox, char const (&)[15]>(char const (&arg1)[15]) {
        ref_counter_base* ref_counter_base;
        int local_34;
        CheckBox* local_30[2];

        auto arg1_00 = aligned_alloc(256, 16);
        if (arg1_00 == nullptr) {
            shared_ptr_if_not_array<tweak::CheckBox>::type result;
        } else {
            local_30[0] = placement_new<tweak::CheckBox, char const(&)[15]>((void*)((long)arg1_00 + 32), arg1);
            local_34 = 1;
            ref_counter_base =
                (ref_counter_base*)placement_new<ref_counter_shared<tweak::CheckBox>, int, tweak::CheckBox*&>(
                    arg1_00, &local_34, local_30);
            shared_ptr_do_enable_shared_from_this<tweak::CheckBox>(ref_counter_base, local_30[0], nullptr);
            ref_counter_base->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(ref_counter_base, (unsigned long)local_30[0]);
        }
        return result;
    }

} // namespace jag
