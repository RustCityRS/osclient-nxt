// libs/game/runetek5/clientoptions/options/ClientOptions_Reflections.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.game.runetek5

namespace jag::game::option {
    class Reflections {
    public:
        // virtual methods in vtable order
        virtual ~Reflections();
        virtual GetDefault();
        virtual DetermineBestSetting(perf::PerfModuleReporter const&) const;
        virtual void ApplySettingImpl(graphics::RT7Core&, graphics::EffectManager&, graphics::GraphicsQuality);
        Reflections(graphics::RT7Core&, Settings&, char const*);

        // data members, from how the methods use this: 193 bytes
        undefined** field_0;    // offset 0, vtable pointer
        undefined8 field_8;     // offset 8
        undefined8 field_16;    // offset 16
        undefined4 field_24;    // offset 24
        MinimenuEntry field_28; // offset 28
        char _unknown_144[49];
    };

    // 0x1005fe370, 32 bytes, deleting destructor, inline, placed by class name and debug map
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // Reflections::~Reflections()
    /* ShadowQuality::~ShadowQuality() */

    void ShadowQuality::~ShadowQuality() {
        ~Reflections();
        operator_delete(this);
    }

    // 0x1005fe370: the linker folded this into Reflections::~Reflections(), which has identical code
    LightingQuality::~LightingQuality();

    // 0x1005fe370: the linker folded this into Reflections::~Reflections(), which has identical code
    AntialiasingQuality::~AntialiasingQuality();

} // namespace jag::game::option
