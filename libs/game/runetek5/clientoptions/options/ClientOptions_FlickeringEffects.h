// libs/game/runetek5/clientoptions/options/ClientOptions_FlickeringEffects.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::game::option {
    class FlickeringEffects {
    public:
        // virtual methods in vtable order
        virtual ~FlickeringEffects();
        virtual GetDefault();
        virtual void ApplySettingImpl(graphics::RT7Core&, graphics::EffectManager&, EnumOptionToggle);
        FlickeringEffects(graphics::RT7Core&, Settings&, char const*);

        // data members, from how the methods use this: 193 bytes
        undefined** field_0;    // offset 0, vtable pointer
        undefined8 field_8;     // offset 8
        undefined8 field_16;    // offset 16
        undefined4 field_24;    // offset 24
        undefined1 field_28[8]; // offset 28
        undefined4 field_36;    // offset 36
        char _unknown_40[153];
    };

    // 0x100608a50, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // FlickeringEffects::FlickeringEffects(graphics::RT7Core&, Settings&, char const*): jumps straight to the base-object constructor

    // 0x10060f600, 96 bytes, base-object constructor, inline, placed by class name
    // FlickeringEffects::FlickeringEffects(graphics::RT7Core&, Settings&, char const*)
    void FlickeringEffects::FlickeringEffects(RT7Core* param_1, Settings* param_2, char* param_3) {
        undefined1 local_30[8];

        new (local_30) oldscape::sidebars::SideBarData(0, 1);
        new (this) Option<EnumOptionToggle>(param_1, param_2, param_3, local_30);
        field_0 = &PTR__HapticFeedback_100f0a6e0;
    }

} // namespace jag::game::option
