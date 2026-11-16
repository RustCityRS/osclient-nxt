// libs/game/runetek5/clientoptions/options/ClientOptions_Shadows.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::game::option {
    class Shadows : public SmoothClipPlaneFade // base inferred from shared vtable slots
    {
    public:
        // virtual methods in vtable order
        virtual ~Shadows();
        virtual bool DetermineBestSetting(perf::PerfModuleReporter const&) const;
        virtual void ApplySettingImpl(graphics::RT7Core&, graphics::EffectManager&, EnumOptionToggle);
        Shadows(graphics::RT7Core&, Settings&, char const*, ShadowQuality*);

        // data members, from how the methods use this: 208 bytes, the first 193 are SmoothClipPlaneFade
        char _unknown_193[7];
        ShadowQuality* field_200; // offset 200
    };

    // 0x1005fe390, 32 bytes, deleting destructor, inline, placed by class name and debug map
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // Shadows::~Shadows()
    /* SmoothClipPlaneFade::~SmoothClipPlaneFade() */

    void SmoothClipPlaneFade::~SmoothClipPlaneFade() {
        ~HapticFeedback();
        operator_delete(this);
    }

} // namespace jag::game::option
