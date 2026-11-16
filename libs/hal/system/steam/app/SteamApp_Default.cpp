// libs/hal/system/steam/app/SteamApp_Default.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.hal.system.steam

namespace jag {
    class SteamApp {
    public:
        ~SteamApp();
        SteamApp(int arg1);
        SteamApp* GetCommandLineArgs();
        uint8_t* GetAppInstallDirectory();
        char* GetLanguageCode();

    private:
        uint8_t _unknown_0[64];
        int field_64;
        uint8_t _unknown_68[4];
    };

    // 0x1003ac140
    SteamApp::SteamApp(int arg1) {

        new (this) eastl::string("");
        new (&field_32) eastl::string("");
        field_64 = arg1;
    }

    // 0x1003ac1e0
    SteamApp* SteamApp::GetCommandLineArgs() {
        return this;
    }

    // 0x1003ac1f0
    uint8_t* SteamApp::GetAppInstallDirectory() {
        return &field_32;
    }

    // 0x1003ac200
    char* SteamApp::GetLanguageCode() {
        return "";
    }

} // namespace jag
