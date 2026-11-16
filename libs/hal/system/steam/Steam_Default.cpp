// libs/hal/system/steam/Steam_Default.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.hal.system.steam

namespace jag {
    class Steam {
    public:
        GetAppID() const;
        Steam();
        ~Steam();
        ValidateSteamAPIExists();
        Init(int, bool);
        IsSteamClient();
        void MainLogic();
        GetSteamOverlayModule();
        GetSteamAuthModule();
        GetSteamAppModule();
        GetSteamRichPresenceModule();
        GetSteamAchievementsModule();
        static /* 4 bytes */ STEAM_APP_ID_RS3;  // = 0
        static /* 4 bytes */ STEAM_APP_ID_OSRS; // = 0
        static /* 8 bytes */ STEAM_API_NAME;    // = ""
        static /* 8 bytes */ STEAM_PARAM;       // = "xxx"

        // data members, from how the methods use this: 48 bytes
        undefined1 field_0; // offset 0
        char _unknown_1[3];
        undefined4 field_4; // offset 4
        char _unknown_8[40];
    };

    // 0x100d42b50, 4 bytes, __const
    Steam::STEAM_APP_ID_RS3 = 0;

    // 0x100d42b54, 4 bytes, __const
    Steam::STEAM_APP_ID_OSRS = 0;

    // 0x100f38158, 8 bytes, __data
    Steam::STEAM_API_NAME = "";

    // 0x100f38160, 8 bytes, __data
    Steam::STEAM_PARAM = "xxx";

    // 0x1003abe20, 80 bytes, base-object constructor, placed by class name and debug map
    // Steam::Steam()
    void Steam::Steam() {
        field_0 = 0;
        field_4 = 0;
        std::unique_ptr<SteamOverlay, std::default_delete<SteamOverlay>>::unique_ptr<true, void>(
            (unique_ptr<SteamOverlay, std::default_delete<SteamOverlay>>*)&field_8);
        std::unique_ptr<SteamAuth, std::default_delete<SteamAuth>>::unique_ptr<true, void>(
            (unique_ptr<SteamAuth, std::default_delete<SteamAuth>>*)&field_16);
        std::unique_ptr<SteamApp, std::default_delete<SteamApp>>::unique_ptr<true, void>(
            (unique_ptr<SteamApp, std::default_delete<SteamApp>>*)&field_24);
        std::unique_ptr<SteamRichPresence, std::default_delete<SteamRichPresence>>::unique_ptr<true, void>(
            (unique_ptr<SteamRichPresence, std::default_delete<SteamRichPresence>>*)&field_32);
        std::unique_ptr<SteamAchievements, std::default_delete<SteamAchievements>>::unique_ptr<true, void>(
            (unique_ptr<SteamAchievements, std::default_delete<SteamAchievements>>*)&field_40);
    }

    // 0x1003abec0, 16 bytes, complete-object constructor, placed by class name and debug map
    // Steam::Steam(): jumps straight to the base-object constructor

    // 0x1003abed0, 64 bytes, base-object destructor, placed by class name and debug map
    // Steam::~Steam()
    void Steam::~Steam() {
        (&field_40)->~unique_ptr();
        (&field_32)->~unique_ptr();
        (&field_24)->~unique_ptr();
        (&field_16)->~unique_ptr();
        (&field_8)->~unique_ptr();
    }

    // 0x1003abf60, 16 bytes, complete-object destructor, placed by class name and debug map
    // Steam::~Steam(): jumps straight to the base-object destructor

    // 0x1003abf70, 16 bytes, placed by class name and debug map
    // Steam::ValidateSteamAPIExists()
    undefined8 Steam::ValidateSteamAPIExists() {
        return 0;
    }

    // 0x1003abf80, 16 bytes, placed by class name and debug map
    // Steam::Init(int, bool)
    undefined1 Steam::Init(int param_1, bool param_2) {
        return 1;
    }

    // 0x1003abf90, 16 bytes, placed by class name and debug map
    // Steam::IsSteamClient()
    undefined8 Steam::IsSteamClient() {
        return 0;
    }

    // 0x1003abfa0, 16 bytes, placed by class name and debug map
    // Steam::MainLogic()
    void Steam::MainLogic() {}

    // 0x1003abfb0, 16 bytes, placed by class name and debug map
    // Steam::GetSteamOverlayModule()
    undefined1* Steam::GetSteamOverlayModule() {
        return &field_8;
    }

    // 0x1003abfc0, 16 bytes, placed by class name and debug map
    // Steam::GetSteamAuthModule()
    undefined1* Steam::GetSteamAuthModule() {
        return &field_16;
    }

    // 0x1003abfd0, 16 bytes, placed by class name and debug map
    // Steam::GetSteamAppModule()
    undefined1* Steam::GetSteamAppModule() {
        return &field_24;
    }

    // 0x1003abfe0, 16 bytes, placed by class name and debug map
    // Steam::GetSteamRichPresenceModule()
    undefined1* Steam::GetSteamRichPresenceModule() {
        return &field_32;
    }

    // 0x1003abff0, 16 bytes, placed by class name and debug map
    // Steam::GetSteamAchievementsModule()
    undefined1* Steam::GetSteamAchievementsModule() {
        return &field_40;
    }

} // namespace jag
