// libs/game/runetek5/clientoptions/options/ClientOptions_ParticleQuality.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::game::option {
    class ParticleQuality {
    public:
        // virtual methods in vtable order
        virtual ~ParticleQuality();
        virtual GetDefault();
        virtual DetermineBestSetting(perf::PerfModuleReporter const&) const;
        virtual void ApplySettingImpl(graphics::RT7Core&, graphics::EffectManager&, EnumParticleQualityLevel);
        ParticleQuality(graphics::RT7Core&, Settings&, char const*);

        // data members, from how the methods use this: 193 bytes
        undefined** field_0;    // offset 0, vtable pointer
        undefined8 field_8;     // offset 8
        undefined8 field_16;    // offset 16
        undefined4 field_24;    // offset 24
        undefined1 field_28[8]; // offset 28
        undefined4 field_36;    // offset 36
        char _unknown_40[153];
    };

    // 0x1005fe350, 32 bytes, deleting destructor, inline, placed by class name and debug map
    // ParticleQuality::~ParticleQuality()
    void ParticleQuality::~ParticleQuality() {
        ~ParticleQuality(this);
        operator_delete(this);
    }

    // 0x100609180, 16 bytes, complete-object destructor, inline, placed by class name
    // ParticleQuality::~ParticleQuality(): jumps straight to the base-object destructor

    // 0x100611040, 16 bytes, base-object destructor, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // ParticleQuality::~ParticleQuality()
    /* Option<EnumParticleQualityLevel>::~Option() */

    void Option<EnumParticleQualityLevel>::~Option() {
        ~Option(this);
    }

} // namespace jag::game::option
