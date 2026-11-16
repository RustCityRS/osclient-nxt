// libs/game/runetek5/clientoptions/options/ClientOptions_Volume.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::game::option {
    class Volume {
    public:
        // virtual methods in vtable order
        virtual ~Volume();
        virtual uint GetDefault();
        virtual void ApplySettingImpl(graphics::RT7Core&, graphics::EffectManager&, int);
        Volume(graphics::RT7Core&, Settings&, char const*, SoundVolumeClass);

        // data members, from how the methods use this: 208 bytes
        undefined** field_0; // offset 0, vtable pointer
        undefined8 field_8;  // offset 8
        undefined8 field_16; // offset 16
        undefined1 field_24; // offset 24
        char _unknown_25[3];
        undefined1 field_28[8]; // offset 28
        undefined4 field_36;    // offset 36
        char _unknown_40[160];
        undefined4 field_200; // offset 200
        char _unknown_204[4];
    };

    // 0x1005f9c50, 16 bytes, complete-object destructor, inline, placed by class name and debug map
    // Volume::~Volume(): jumps straight to the base-object destructor

    // 0x1005f9c60, 32 bytes, deleting destructor, inline, placed by class name and debug map
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // Volume::~Volume()
    /* MaxForegroundFps::~MaxForegroundFps() */

    void MaxForegroundFps::~MaxForegroundFps() {
        ~MaxBackgroundFps();
        operator_delete(this);
    }

    // 0x1005f9ec0, 32 bytes, inline, placed by class name and debug map
    // Volume::GetDefault()
    uint Volume::GetDefault() {
        return (uint)(field_200 == 0) << 7 | 127;
    }

    // 0x1005fa6d0, 16 bytes, base-object destructor, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // Volume::~Volume()
    /* Option<int>::~Option() */

    void Option<int>::~Option() {
        ~Option(this);
    }

} // namespace jag::game::option
