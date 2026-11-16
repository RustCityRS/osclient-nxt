// libs/game/runetek5/clientoptions/options/ClientOptions_Antialiasing.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::game::option {
    class AntialiasingMode {
    public:
        // virtual methods in vtable order
        virtual ~AntialiasingMode();
        virtual GetDefault();
        virtual DetermineBestSetting(perf::PerfModuleReporter const&) const;
        virtual void ApplySettingImpl(graphics::RT7Core&, graphics::EffectManager&, EnumAntialiasingMode);
        AntialiasingMode(graphics::RT7Core&, Settings&, char const*, AntialiasingQuality*);

        // data members, from how the methods use this: 208 bytes
        undefined** field_0;    // offset 0, vtable pointer
        undefined8 field_8;     // offset 8
        undefined8 field_16;    // offset 16
        undefined4 field_24;    // offset 24
        MinimenuEntry field_28; // offset 28
        char _unknown_144[56];
        AntialiasingQuality* field_200; // offset 200
    };

    class AntialiasingQuality {
    public:
        // virtual methods in vtable order
        virtual ~AntialiasingQuality();
        virtual GetDefault();
        virtual DetermineBestSetting(perf::PerfModuleReporter const&) const;
        virtual void ApplySettingImpl(graphics::RT7Core&, graphics::EffectManager&, graphics::GraphicsQuality);
        AntialiasingQuality(graphics::RT7Core&, Settings&, char const*, AntialiasingMode const*);

        // data members, from how the methods use this: 208 bytes
        undefined** field_0;    // offset 0, vtable pointer
        undefined8 field_8;     // offset 8
        undefined8 field_16;    // offset 16
        undefined4 field_24;    // offset 24
        undefined1 field_28[8]; // offset 28
        undefined4 field_36;    // offset 36
        char _unknown_40[160];
        AntialiasingMode* field_200; // offset 200
    };

    // 0x1006048c0, 32 bytes, deleting destructor, inline, placed by debug map only (low confidence)
    // AntialiasingMode::~AntialiasingMode()
    void AntialiasingMode::~AntialiasingMode() {
        ~AntialiasingMode(this);
        operator_delete(this);
    }

} // namespace jag::game::option
