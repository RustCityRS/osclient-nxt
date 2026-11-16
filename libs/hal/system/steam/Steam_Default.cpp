// libs/hal/system/steam/Steam_Default.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.hal.system.steam

namespace jag {
    class Steam {
    public:
        unsigned int GetAppID() const;
        Steam();
        ~Steam();
        void ValidateSteamAPIExists();
        uint8_t Init(int arg1, bool arg2);
        void IsSteamClient();
        void MainLogic();
        unique_ptr<SteamOverlay, std::default_delete<SteamOverlay> _>* GetSteamOverlayModule();
        unique_ptr<SteamAuth, std::default_delete<SteamAuth> _>* GetSteamAuthModule();
        uint8_t* GetSteamAppModule();
        uint8_t* GetSteamRichPresenceModule();
        unique_ptr<SteamAchievements, std::default_delete<SteamAchievements> _>* GetSteamAchievementsModule();
        static int32_t STEAM_APP_ID_RS3;   // = 0
        static int32_t STEAM_APP_ID_OSRS;  // = 0
        static const char* STEAM_API_NAME; // = ""
        static const char* STEAM_PARAM;    // = "xxx"

    private:
        uint8_t field_0;
        uint8_t _unknown_1[3];
        unsigned int m_appID;
        uint8_t _unknown_8[40];
    };

    // 0x100d42b50
    int32_t Steam::STEAM_APP_ID_RS3 = 0;

    // 0x100d42b54
    int32_t Steam::STEAM_APP_ID_OSRS = 0;

    // 0x100f38158
    const char* Steam::STEAM_API_NAME = "";

    // 0x100f38160
    const char* Steam::STEAM_PARAM = "xxx";

    // 0x1003abe20
    Steam::Steam() : field_0(0), m_appID(0) {
        field_8.unique_ptr<true, void>();
        field_16.unique_ptr<true, void>();
        field_24.unique_ptr<true, void>();
        field_32.unique_ptr<true, void>();
        field_40.unique_ptr<true, void>();
    }

    // 0x1003abed0
    Steam::~Steam() {
        field_40.~unique_ptr();
        field_32.~unique_ptr();
        field_24.~unique_ptr();
        field_16.~unique_ptr();
        field_8.~unique_ptr();
    }

    // 0x1003abf70
    void Steam::ValidateSteamAPIExists() {
        return 0;
    }

    // 0x1003abf80
    uint8_t Steam::Init(int arg1, bool arg2) {
        return 1;
    }

    // 0x1003abf90
    void Steam::IsSteamClient() {
        return 0;
    }

    // 0x1003abfa0
    void Steam::MainLogic() {}

    // 0x1003abfb0
    unique_ptr<SteamOverlay, std::default_delete<SteamOverlay> _>* Steam::GetSteamOverlayModule() {
        return (unique_ptr<SteamOverlay, std::default_delete<SteamOverlay> _>*)&field_8;
    }

    // 0x1003abfc0
    unique_ptr<SteamAuth, std::default_delete<SteamAuth> _>* Steam::GetSteamAuthModule() {
        return (unique_ptr<SteamAuth, std::default_delete<SteamAuth> _>*)&field_16;
    }

    // 0x1003abfd0
    uint8_t* Steam::GetSteamAppModule() {
        return &field_24;
    }

    // 0x1003abfe0
    uint8_t* Steam::GetSteamRichPresenceModule() {
        return &field_32;
    }

    // 0x1003abff0
    unique_ptr<SteamAchievements, std::default_delete<SteamAchievements> _>* Steam::GetSteamAchievementsModule() {
        return (unique_ptr<SteamAchievements, std::default_delete<SteamAchievements> _>*)&field_40;
    }

} // namespace jag
