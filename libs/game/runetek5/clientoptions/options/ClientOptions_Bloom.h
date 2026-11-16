// libs/game/runetek5/clientoptions/options/ClientOptions_Bloom.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::game::option {
    class Bloom {
    public:
        // virtual methods in vtable order
        virtual ~Bloom();
        virtual GetDefault();
        virtual DetermineBestSetting(perf::PerfModuleReporter const&) const;
        virtual void ApplySettingImpl(graphics::RT7Core&, graphics::EffectManager&, EnumBloom);
        Bloom(graphics::RT7Core&, Settings&, char const*);

        // data members, from how the methods use this: 193 bytes
        undefined** field_0;    // offset 0, vtable pointer
        undefined8 field_8;     // offset 8
        undefined8 field_16;    // offset 16
        undefined4 field_24;    // offset 24
        MinimenuEntry field_28; // offset 28
        char _unknown_144[49];
    };

    // 0x1006048e0, 32 bytes, deleting destructor, inline, placed by class name and debug map
    // Bloom::~Bloom()
    void Bloom::~Bloom() {
        ~Bloom(this);
        operator_delete(this);
    }

    // 0x1006091e0, 16 bytes, complete-object destructor, inline, placed by class name
    // Bloom::~Bloom(): jumps straight to the base-object destructor

    // 0x1006114f0, 16 bytes, base-object destructor, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // Bloom::~Bloom()
    /* Option<EnumBloom>::~Option() */

    void Option<EnumBloom>::~Option() {
        ~Option(this);
    }

} // namespace jag::game::option
