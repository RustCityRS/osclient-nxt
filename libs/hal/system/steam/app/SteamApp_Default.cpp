// libs/hal/system/steam/app/SteamApp_Default.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.hal.system.steam

namespace jag {
    class SteamApp {
    public:
        ~SteamApp();
        SteamApp(int);
        SteamApp* GetCommandLineArgs();
        GetAppInstallDirectory();
        char* GetLanguageCode();

        // data members, from how the methods use this: 72 bytes
        char _unknown_0[64];
        int field_64; // offset 64
        char _unknown_68[4];
    };

    // 0x1003ac140, 144 bytes, base-object constructor, placed by class name and debug map
    // SteamApp::SteamApp(int)
    void SteamApp::SteamApp(int param_1) {
        allocator local_30[8];

        eastl::allocator::allocator(local_30, "EASTL basic_string");
        new (this) eastl::string("", local_30);
        eastl::allocator::allocator(local_30, "EASTL basic_string");
        new (&field_32, "", local_30) eastl::string();
        field_64 = param_1;
    }

    // 0x1003ac1d0, 16 bytes, complete-object constructor, placed by class name and debug map
    // SteamApp::SteamApp(int): jumps straight to the base-object constructor

    // 0x1003ac1e0, 16 bytes, placed by class name and debug map
    // SteamApp::GetCommandLineArgs()
    SteamApp* SteamApp::GetCommandLineArgs() {
        return this;
    }

    // 0x1003ac1f0, 16 bytes, placed by class name and debug map
    // SteamApp::GetAppInstallDirectory()
    undefined1* SteamApp::GetAppInstallDirectory() {
        return &field_32;
    }

    // 0x1003ac200, 16 bytes, placed by class name and debug map
    // SteamApp::GetLanguageCode()
    char* SteamApp::GetLanguageCode() {
        return "";
    }

} // namespace jag
