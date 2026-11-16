// libs/hal/system/steam/richpresence/SteamRichPresence_Default.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.hal.system.steam

namespace jag {
    class SteamRichPresence {
    public:
        SteamRichPresence();
        ~SteamRichPresence();
        SetRichPresenceStatus(SteamRichDisplay, SteamRichDisplay) const;
        SetRichPresenceStatusCustom(SteamRichDisplay, char const*) const;
        void ClearRichPresenceStatus() const;

        // data members, from how the methods use this: 1 bytes
        char _unknown_0[1];
    };

    // 0x1003ac0a0, 16 bytes, base-object constructor, placed by class name and debug map
    // SteamRichPresence::SteamRichPresence()
    void SteamRichPresence::SteamRichPresence() {}

    // 0x1003ac0b0, 16 bytes, complete-object constructor, placed by class name and debug map
    // SteamRichPresence::SteamRichPresence(): jumps straight to the base-object constructor

    // 0x1003ac0c0, 16 bytes, base-object destructor, placed by class name and debug map
    // SteamRichPresence::~SteamRichPresence()
    void SteamRichPresence::~SteamRichPresence() {}

    // 0x1003ac0d0, 16 bytes, complete-object destructor, placed by class name and debug map
    // SteamRichPresence::~SteamRichPresence(): jumps straight to the base-object destructor

    // 0x1003ac0e0, 16 bytes, placed by class name and debug map
    // SteamRichPresence::SetRichPresenceStatus(SteamRichDisplay, SteamRichDisplay) const
    undefined1 SteamRichPresence::SetRichPresenceStatus() {
        return 1;
    }

    // 0x1003ac0f0, 16 bytes, placed by class name and debug map
    // SteamRichPresence::SetRichPresenceStatusCustom(SteamRichDisplay, char const*) const
    undefined1 SteamRichPresence::SetRichPresenceStatusCustom() {
        return 1;
    }

    // 0x1003ac100, 16 bytes, placed by class name and debug map
    // SteamRichPresence::ClearRichPresenceStatus() const
    void SteamRichPresence::ClearRichPresenceStatus() {}

} // namespace jag
