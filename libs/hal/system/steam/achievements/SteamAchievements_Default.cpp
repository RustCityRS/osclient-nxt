// libs/hal/system/steam/achievements/SteamAchievements_Default.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.hal.system.steam

namespace jag {
    class SteamAchievements {
    public:
        SteamAchievements();
        ~SteamAchievements();
        SetAchievementLockState(char const*, bool, bool) const;
        GetAchievementLockState(char const*);
        SetAchievementStatProgress(char const*, int, bool) const;
        GetAchievementStatProgress(char const*);
        UploadAchivements() const;

        // data members, from how the methods use this: 1 bytes
        char _unknown_0[1];
    };

    // 0x1003ac210, 16 bytes, base-object constructor, placed by class name and debug map
    // SteamAchievements::SteamAchievements()
    void SteamAchievements::SteamAchievements() {}

    // 0x1003ac220, 16 bytes, complete-object constructor, placed by class name and debug map
    // SteamAchievements::SteamAchievements(): jumps straight to the base-object constructor

    // 0x1003ac230, 16 bytes, base-object destructor, placed by class name and debug map
    // SteamAchievements::~SteamAchievements()
    void SteamAchievements::~SteamAchievements() {}

    // 0x1003ac240, 16 bytes, complete-object destructor, placed by class name and debug map
    // SteamAchievements::~SteamAchievements(): jumps straight to the base-object destructor

    // 0x1003ac250, 16 bytes, placed by class name and debug map
    // SteamAchievements::SetAchievementLockState(char const*, bool, bool) const
    undefined8 SteamAchievements::SetAchievementLockState(char* param_1, bool param_2, bool param_3) {
        return 0;
    }

    // 0x1003ac260, 16 bytes, placed by class name and debug map
    // SteamAchievements::GetAchievementLockState(char const*)
    undefined8 SteamAchievements::GetAchievementLockState(char* param_1) {
        return 0;
    }

    // 0x1003ac270, 16 bytes, placed by class name and debug map
    // SteamAchievements::SetAchievementStatProgress(char const*, int, bool) const
    undefined8 SteamAchievements::SetAchievementStatProgress(char* param_1, int param_2, bool param_3) {
        return 0;
    }

    // 0x1003ac280, 16 bytes, placed by class name and debug map
    // SteamAchievements::GetAchievementStatProgress(char const*)
    undefined8 SteamAchievements::GetAchievementStatProgress(char* param_1) {
        return 0;
    }

    // 0x1003ac290, 16 bytes, placed by class name and debug map
    // SteamAchievements::UploadAchivements() const
    undefined8 SteamAchievements::UploadAchivements() {
        return 0;
    }

} // namespace jag
