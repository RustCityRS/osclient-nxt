// libs/hal/haptics/Haptics.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: osclient

namespace jag::hal {
    class Haptics {
    public:
        uint8_t GetEnabled() const;
        void SetEnabled(bool arg1);
        Haptics();
        ~Haptics();
        void Prepare();
        void Vibrate(Preset preset);

    private:
        uint8_t m_enabled;
        uint8_t _unknown_1[3];
        uint32_t field_4;
        uint8_t _unknown_8[4];
    };

    // 0x100023af0
    uint8_t Haptics::GetEnabled() const {
        return field_0;
    }

    // 0x100023b60
    void Haptics::SetEnabled(bool arg1) {
        *this = (__cxx_atomic_base_impl<bool>)arg1;
    }

} // namespace jag::hal

namespace jag::game {
    // 0x100023af0: EnvToneMapSettings::GetToneMappingEnabled() const has the same machine code as hal::Haptics::GetEnabled() const

    // 0x100023af0: GlobalCutscene2DResources::GetSubtitlesEnabled() const has the same machine code as hal::Haptics::GetEnabled() const

} // namespace jag::game

namespace jag {
    // 0x100023af0: ZoneBuiltArea::AllowStacking() const has the same machine code as hal::Haptics::GetEnabled() const

} // namespace jag
