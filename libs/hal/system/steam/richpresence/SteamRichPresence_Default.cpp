// libs/hal/system/steam/richpresence/SteamRichPresence_Default.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.hal.system.steam

namespace jag {
    class SteamRichPresence {
    public:
        SteamRichPresence();
        ~SteamRichPresence();
        uint8_t SetRichPresenceStatus(SteamRichDisplay steamRichDisplay1, SteamRichDisplay steamRichDisplay2) const;
        uint8_t SetRichPresenceStatusCustom(SteamRichDisplay steamRichDisplay, const char* str) const;
        void ClearRichPresenceStatus() const;

        uint8_t _unknown_0[1];
    };

    // 0x1003ac0a0
    SteamRichPresence::SteamRichPresence() {}

    // 0x1003ac0c0
    SteamRichPresence::~SteamRichPresence() {}

    // 0x1003ac0e0
    uint8_t SteamRichPresence::SetRichPresenceStatus(SteamRichDisplay steamRichDisplay1,
                                                     SteamRichDisplay steamRichDisplay2) const {
        return 1;
    }

    // 0x1003ac0f0
    uint8_t SteamRichPresence::SetRichPresenceStatusCustom(SteamRichDisplay steamRichDisplay, const char* str) const {
        return 1;
    }

    // 0x1003ac100
    void SteamRichPresence::ClearRichPresenceStatus() const {}

} // namespace jag
