// libs/game/runetek5/clientoptions/options/ClientOptions_CustomPlayerModelCount.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.game.runetek5

namespace jag::game::option {
    class CustomPlayerModelCount {
    public:
        // virtual methods in vtable order
        virtual ~CustomPlayerModelCount();
        virtual GetDefault();
        virtual void DetermineBestSetting(perf::PerfModuleReporter const&) const;
        virtual void ApplySettingImpl(graphics::RT7Core&, graphics::EffectManager&, graphics::GraphicsQuality);
        CustomPlayerModelCount(graphics::RT7Core&, Settings&, char const*);

        // data members, from how the methods use this: 193 bytes
        undefined** field_0;    // offset 0, vtable pointer
        undefined8 field_8;     // offset 8
        undefined8 field_16;    // offset 16
        undefined4 field_24;    // offset 24
        undefined1 field_28[8]; // offset 28
        undefined4 field_36;    // offset 36
        char _unknown_40[153];
    };

    // 0x100609150, 16 bytes, complete-object destructor, inline, placed by class name and debug map
    // CustomPlayerModelCount::~CustomPlayerModelCount(): jumps straight to the base-object destructor

    // 0x100609150: the linker folded this into CustomPlayerModelCount::~CustomPlayerModelCount(), which has identical code
    LightingQuality::~LightingQuality();

    // 0x100609150: the linker folded this into CustomPlayerModelCount::~CustomPlayerModelCount(), which has identical code
    AntialiasingQuality::~AntialiasingQuality();

    // 0x100610f30, 16 bytes, base-object destructor, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // CustomPlayerModelCount::~CustomPlayerModelCount()
    /* Option<graphics::GraphicsQuality>::~Option() */

    void Option<graphics::GraphicsQuality>::~Option() {
        ~Option(this);
    }

    // 0x100610f30: the linker folded this into CustomPlayerModelCount::~CustomPlayerModelCount(), which has identical code
    LightingQuality::~LightingQuality();

    // 0x100610f30: the linker folded this into CustomPlayerModelCount::~CustomPlayerModelCount(), which has identical code
    AntialiasingQuality::~AntialiasingQuality();

} // namespace jag::game::option
