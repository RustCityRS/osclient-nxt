// libs/game/runetek5/clientoptions/options/ClientOptions_DrawDistance.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.runetek5

namespace jag::game::option {
    class DrawDistance {
    public:
        // virtual methods in vtable order
        virtual ~DrawDistance();
        virtual uint64_t GetDefault();
        virtual uint8_t DetermineBestSetting(const perf::PerfModuleReporter& perfModuleReporter) const;
        DrawDistance(graphics::RT7Core& rt7Core, Settings& settings, const char* str);

    private:
        Settings* field_8;
        char* field_16;
        uint32_t field_24;
        Range<graphics::GraphicsQuality>* field_28;
        uint32_t field_36;
        uint8_t _unknown_40[153];
    };

    // 0x100269960: DrawDistance::GetDefault() has the same machine code as oldscape::rs2lib::social::ClanChannelDelta::AddUser::GetID() const

    // 0x100601d50
    DrawDistance::DrawDistance(graphics::RT7Core& rt7Core, Settings& settings, const char* str) {
        Range<graphics::GraphicsQuality>* local_30;

        new (&local_30) oldscape::sidebars::SideBarData(0, 3);
        new (this) Option<graphics::GraphicsQuality>(rt7Core, settings, str, local_30);
    }

    // 0x100601dc0
    uint8_t DrawDistance::DetermineBestSetting(const perf::PerfModuleReporter& perfModuleReporter) const {
        uint64_t uStack_20 = 1116691497219;
        int iVar2 = perfModuleReporter.GetSummedResults((1120986464512).data(), 4);
        (logger::default_logger())
            ->Log(false, 7,
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/clientoptions/"
                  "options/ClientOptions_DrawDistance.cpp",
                  38, "DrawDistance::DetermineBestSetting Result: %d", iVar2);
        uint8_t uVar1 = 3;
        if ((iVar2 < 1001) && (uVar1 = 2, iVar2 < 451)) {
            uVar1 = 300 < iVar2;
        }
        return uVar1;
    }

    // 0x100610f30: DrawDistance::~DrawDistance() has the same machine code as CustomPlayerModelCount::~CustomPlayerModelCount()

} // namespace jag::game::option
