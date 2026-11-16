// libs/game/runetek5/clientoptions/options/ClientOptions_AnisotropicFiltering.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::game::option {
    class AnisotropicFiltering {
    public:
        // virtual methods in vtable order
        virtual ~AnisotropicFiltering();
        virtual GetDefault();
        virtual DetermineBestSetting(perf::PerfModuleReporter const&) const;
        virtual void ApplySettingImpl(graphics::RT7Core&, graphics::EffectManager&, EnumAnisotropicFiltering);
        AnisotropicFiltering(graphics::RT7Core&, Settings&, char const*);
        GetAnisotropyValue() const;

        // data members, from how the methods use this: 193 bytes
        undefined** field_0;    // offset 0, vtable pointer
        undefined8 field_8;     // offset 8
        undefined8 field_16;    // offset 16
        undefined4 field_24;    // offset 24
        MinimenuEntry field_28; // offset 28
        char _unknown_144[49];
    };

    // 0x1006048a0, 32 bytes, deleting destructor, inline, placed by class name and debug map
    // AnisotropicFiltering::~AnisotropicFiltering()
    void AnisotropicFiltering::~AnisotropicFiltering() {
        ~AnisotropicFiltering(this);
        operator_delete(this);
    }

    // 0x100609200, 16 bytes, complete-object destructor, inline, placed by class name
    // AnisotropicFiltering::~AnisotropicFiltering(): jumps straight to the base-object destructor

    // 0x100611750, 16 bytes, base-object destructor, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // AnisotropicFiltering::~AnisotropicFiltering()
    /* Option<EnumAnisotropicFiltering>::~Option() */

    void Option<EnumAnisotropicFiltering>::~Option() {
        ~Option(this);
    }

} // namespace jag::game::option
