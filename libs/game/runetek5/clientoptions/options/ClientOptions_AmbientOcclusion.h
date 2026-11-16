// libs/game/runetek5/clientoptions/options/ClientOptions_AmbientOcclusion.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::game::option {
    class AmbientOcclusion {
    public:
        // virtual methods in vtable order
        virtual ~AmbientOcclusion();
        virtual bool IsModifiable(graphics::RT7Core const*) const;
        virtual GetDefault();
        virtual char DetermineBestSetting(perf::PerfModuleReporter const&) const;
        virtual void ApplySettingImpl(graphics::RT7Core&, graphics::EffectManager&, graphics::SSAOPass::Mode);
        AmbientOcclusion(graphics::RT7Core&, Settings&, char const*);

        // data members, from how the methods use this: 193 bytes
        undefined** field_0;    // offset 0, vtable pointer
        undefined8 field_8;     // offset 8
        undefined8 field_16;    // offset 16
        undefined4 field_24;    // offset 24
        MinimenuEntry field_28; // offset 28
        char _unknown_144[49];
    };

} // namespace jag::game::option

namespace jag::graphics {
    class AmbientOcclusion {
    public:
        AmbientOcclusion* BuildUniforms();

        // data members, from how the methods use this: 1 bytes
        char _unknown_0[1];
    };

} // namespace jag::graphics
