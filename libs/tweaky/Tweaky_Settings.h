// libs/tweaky/Tweaky_Settings.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::tweak {
    class TweakSettingsValue {
    public:
        TweakSettingsValue();
        ~TweakSettingsValue();
        TweakSettingsValue(TweakSettingsValue const&);

        // data members, from how the methods use this: 88 bytes
        char _unknown_0[80];
        undefined8 field_80; // offset 80
    };

    // 0x100a4c080, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // TweakSettingsValue::TweakSettingsValue(): jumps straight to the base-object constructor

    // 0x100a4c090, 16 bytes, complete-object destructor, inline, placed by debug map only (low confidence)
    // TweakSettingsValue::~TweakSettingsValue(): jumps straight to the base-object destructor

    // 0x100a4cd90, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // TweakSettingsValue::TweakSettingsValue(TweakSettingsValue const&): jumps straight to the base-object constructor

} // namespace jag::tweak

namespace jag {
    // 0x100a4c240, 160 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<tweak::CheckBox>::type make_shared<tweak::CheckBox, char const (&) [15]>(char const (&) [15])
    jag* make_shared<tweak::CheckBox, char const (&)[15]>(char* param_1) {
        void* pvVar1;
        ref_counter_base* prVar2;
        int local_34;
        CheckBox* local_30[2];

        pvVar1 = (void*)aligned_alloc(256, 16);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(16);
        } else {
            local_30[0] = placement_new<tweak::CheckBox, char const(&)[15]>((void*)((long)pvVar1 + 32), param_1);
            local_34 = 1;
            prVar2 = (ref_counter_base*)placement_new<ref_counter_shared<tweak::CheckBox>, int, tweak::CheckBox*&>(
                pvVar1, &local_34, local_30);
            shared_ptr_do_enable_shared_from_this<tweak::CheckBox>(prVar2, local_30[0], (enable_shared_type*)0);
            prVar2->~AutoSingleton(local_30[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_30[0]);
        }
        return this;
    }

} // namespace jag
