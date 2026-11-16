// libs/hal/system/discord/DiscordMain_Default.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.hal.system.discord

namespace jag {
    class DiscordMain {
    public:
        DiscordMain();
        ~DiscordMain();
        uint64_t Init(long long arg1);
        void MainLogic(const int& arg1);
        void IsDiscordRunning();
        unique_ptr<DiscordRichPresence, std::default_delete<DiscordRichPresence> _>* GetDiscordRichPresenceModule();
        void GetIsDiscordInitialized();
        uint64_t InitDiscordCore(long long arg1);
        static int64_t DISCORD_APP_ID_OSRS_BETA;     // = 0
        static int32_t DISCORD_APP_ID_OSRS_LIVE[70]; // initialised in its definition

    private:
        uint8_t field_0;
        uint8_t _unknown_1[7];
        uint64_t field_8;
        uint8_t _unknown_16[8];
    };

    // 0x100d3d980
    int64_t DiscordMain::DISCORD_APP_ID_OSRS_BETA = 0;

    // 0x100d3d988
    int32_t DiscordMain::DISCORD_APP_ID_OSRS_LIVE[70] = {
        0,           0,          1053294592, 1024416809, 1174405120, 994643931,   -1152839717, 1179648000, 1123942400,
        1058642330,  1050253722, 1103626240, 1112014848, 1155186688, 1151090688,  -1063256064, 1095237632, 1045220557,
        994643944,   925353388,  1183365120, 1060320051, 1020054733, -1082969293, 1202590843,  1072724705, 0,
        -1067016192, 1202590843, 1050966753, 858993459,  1065431859, -137438953,  1073800019,  0,          63,
        0,           63,         1159479296, 1148846080, 1176051712, 1175232512,  1168891904,  1048576000, 1058642330,
        1065353216,  1065353216, 1,          1,          0,          1065353216,  1036831949,  0,          1061997773,
        1073741824,  1063675494, 1098907648, 981668463,  1065353216, 1061997773,  1061997773,  1109393408, 56,
        44100,       4096,       1024,       0,          0,          0,           999,
    };

    // 0x1001b7810
    DiscordMain::DiscordMain() : field_0(0), field_8(0) {
        field_16.unique_ptr<true, void>();
    }

    // 0x1001b7850
    DiscordMain::~DiscordMain() {
        field_16.~unique_ptr();
    }

    // 0x1001b7880
    uint64_t DiscordMain::Init(long long arg1) {
        return 0;
    }

    // 0x1001b7890
    void DiscordMain::MainLogic(const int& arg1) {}

    // 0x1001b78a0
    void DiscordMain::IsDiscordRunning() {
        return 0;
    }

    // 0x1001b78b0
    unique_ptr<DiscordRichPresence, std::default_delete<DiscordRichPresence> _>*
    DiscordMain::GetDiscordRichPresenceModule() {
        return (unique_ptr<DiscordRichPresence, std::default_delete<DiscordRichPresence> _>*)&field_16;
    }

    // 0x1001b78c0
    void DiscordMain::GetIsDiscordInitialized() {
        return 0;
    }

    // 0x1001b78d0
    uint64_t DiscordMain::InitDiscordCore(long long arg1) {
        return 0;
    }

} // namespace jag
