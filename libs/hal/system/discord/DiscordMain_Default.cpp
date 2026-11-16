// libs/hal/system/discord/DiscordMain_Default.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.hal.system.discord

namespace jag {
    class DiscordMain {
    public:
        DiscordMain();
        ~DiscordMain();
        Init(long long);
        void MainLogic(int const&);
        IsDiscordRunning();
        GetDiscordRichPresenceModule();
        GetIsDiscordInitialized();
        InitDiscordCore(long long);
        static /* 8 bytes */ DISCORD_APP_ID_OSRS_BETA;   // = 0
        static /* 280 bytes */ DISCORD_APP_ID_OSRS_LIVE; // initialised in its definition

        // data members, from how the methods use this: 24 bytes
        undefined1 field_0; // offset 0
        char _unknown_1[7];
        undefined8 field_8; // offset 8
        char _unknown_16[8];
    };

    // 0x100d3d980, 8 bytes, __const
    DiscordMain::DISCORD_APP_ID_OSRS_BETA = 0;

    // 0x100d3d988, 280 bytes, __const
    DiscordMain::DISCORD_APP_ID_OSRS_LIVE = {
        0,           0,          1053294592, 1024416809, 1174405120, 994643931,   -1152839717, 1179648000, 1123942400,
        1058642330,  1050253722, 1103626240, 1112014848, 1155186688, 1151090688,  -1063256064, 1095237632, 1045220557,
        994643944,   925353388,  1183365120, 1060320051, 1020054733, -1082969293, 1202590843,  1072724705, 0,
        -1067016192, 1202590843, 1050966753, 858993459,  1065431859, -137438953,  1073800019,  0,          63,
        0,           63,         1159479296, 1148846080, 1176051712, 1175232512,  1168891904,  1048576000, 1058642330,
        1065353216,  1065353216, 1,          1,          0,          1065353216,  1036831949,  0,          1061997773,
        1073741824,  1063675494, 1098907648, 981668463,  1065353216, 1061997773,  1061997773,  1109393408, 56,
        44100,       4096,       1024,       0,          0,          0,           999,
    };

    // 0x1001b7810, 32 bytes, base-object constructor, placed by class name and debug map
    // DiscordMain::DiscordMain()
    void DiscordMain::DiscordMain() {
        field_0 = 0;
        field_8 = 0;
        std::unique_ptr<DiscordRichPresence, std::default_delete<DiscordRichPresence>>::unique_ptr<true, void>(
            (unique_ptr<DiscordRichPresence, std::default_delete<DiscordRichPresence>>*)&field_16);
    }

    // 0x1001b7840, 16 bytes, complete-object constructor, placed by class name and debug map
    // DiscordMain::DiscordMain(): jumps straight to the base-object constructor

    // 0x1001b7850, 16 bytes, base-object destructor, placed by class name and debug map
    // DiscordMain::~DiscordMain()
    void DiscordMain::~DiscordMain() {
        (&field_16)->~unique_ptr();
    }

    // 0x1001b7870, 16 bytes, complete-object destructor, placed by class name and debug map
    // DiscordMain::~DiscordMain(): jumps straight to the base-object destructor

    // 0x1001b7880, 16 bytes, placed by class name and debug map
    // DiscordMain::Init(long long)
    undefined8 DiscordMain::Init(longlong param_1) {
        return 0;
    }

    // 0x1001b7890, 16 bytes, placed by class name and debug map
    // DiscordMain::MainLogic(int const&)
    void DiscordMain::MainLogic(int* param_1) {}

    // 0x1001b78a0, 16 bytes, placed by class name and debug map
    // DiscordMain::IsDiscordRunning()
    undefined8 DiscordMain::IsDiscordRunning() {
        return 0;
    }

    // 0x1001b78b0, 16 bytes, placed by class name and debug map
    // DiscordMain::GetDiscordRichPresenceModule()
    undefined1* DiscordMain::GetDiscordRichPresenceModule() {
        return &field_16;
    }

    // 0x1001b78c0, 16 bytes, placed by class name and debug map
    // DiscordMain::GetIsDiscordInitialized()
    undefined8 DiscordMain::GetIsDiscordInitialized() {
        return 0;
    }

    // 0x1001b78d0, 16 bytes, placed by class name and debug map
    // DiscordMain::InitDiscordCore(long long)
    undefined8 DiscordMain::InitDiscordCore(longlong param_1) {
        return 0;
    }

} // namespace jag
