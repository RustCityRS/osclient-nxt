// libs/hal/system/steam/achievements/SteamAchievements_Default.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.hal.system.steam

namespace jag {
    class SteamAchievements {
    public:
        SteamAchievements();
        ~SteamAchievements();
        uint64_t SetAchievementLockState(const char* str, bool arg2, bool arg3) const;
        uint64_t GetAchievementLockState(const char* str);
        uint64_t SetAchievementStatProgress(const char* str, int arg2, bool arg3) const;
        uint64_t GetAchievementStatProgress(const char* str);
        uint64_t UploadAchivements() const;

        uint8_t _unknown_0[1];
    };

    // 0x1003ac210
    SteamAchievements::SteamAchievements() {}

    // 0x1003ac230
    SteamAchievements::~SteamAchievements() {}

    // 0x1003ac250
    uint64_t SteamAchievements::SetAchievementLockState(const char* str, bool arg2, bool arg3) const {
        return 0;
    }

    // 0x1003ac260
    uint64_t SteamAchievements::GetAchievementLockState(const char* str) {
        return 0;
    }

    // 0x1003ac270
    uint64_t SteamAchievements::SetAchievementStatProgress(const char* str, int arg2, bool arg3) const {
        return 0;
    }

    // 0x1003ac280
    uint64_t SteamAchievements::GetAchievementStatProgress(const char* str) {
        return 0;
    }

    // 0x1003ac290
    uint64_t SteamAchievements::UploadAchivements() const {
        return 0;
    }

} // namespace jag
