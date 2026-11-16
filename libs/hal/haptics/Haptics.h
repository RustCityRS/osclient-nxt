// libs/hal/haptics/Haptics.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: osclient

namespace jag::hal {
    class Haptics {
    public:
        GetEnabled() const;
        SetEnabled(bool);
        Haptics();
        ~Haptics();
        void Prepare();
        void Vibrate(Preset);

        // data members, from how the methods use this: 12 bytes
        undefined1 m_enabled; // offset 0
        char _unknown_1[3];
        undefined4 field_4; // offset 4
        char _unknown_8[4];
    };

    // 0x100023af0, 16 bytes, inline, placed by class name and debug map
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // Haptics::GetEnabled() const
    /* oldscape::Skybox::ShowSkybox() const */

    undefined1 oldscape::Skybox::ShowSkybox() {
        return field_0;
    }

    // 0x100023b60, 16 bytes, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // Haptics::SetEnabled(bool)
    /* std::__cxx_atomic_base_impl<bool>::__cxx_atomic_base_impl(bool) */

    void std::__cxx_atomic_base_impl<bool>::__cxx_atomic_base_impl(bool param_1) {
        *this = (__cxx_atomic_base_impl<bool>)param_1;
    }

} // namespace jag::hal

namespace jag::game {
    // 0x100023af0: the linker folded this into hal::Haptics::GetEnabled() const, which has identical code
    EnvironmentOverrideParam<bool> EnvToneMapSettings::GetToneMappingEnabled() const;

    // 0x100023af0: the linker folded this into hal::Haptics::GetEnabled() const, which has identical code
    GlobalCutscene2DResources::GetSubtitlesEnabled() const;

} // namespace jag::game

namespace jag {
    // 0x100023af0: the linker folded this into hal::Haptics::GetEnabled() const, which has identical code
    ZoneBuiltArea::AllowStacking() const;

} // namespace jag
