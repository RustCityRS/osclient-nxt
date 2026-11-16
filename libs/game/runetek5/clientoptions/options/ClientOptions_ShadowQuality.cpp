// libs/game/runetek5/clientoptions/options/ClientOptions_ShadowQuality.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.runetek5

namespace jag::game::option {
    class ShadowQuality {
    public:
        // virtual methods in vtable order
        virtual ~ShadowQuality();
        virtual uint64_t GetDefault();
        virtual uint8_t DetermineBestSetting(const perf::PerfModuleReporter& perfModuleReporter) const;
        virtual void ApplySettingImpl(graphics::RT7Core& rt7Core, graphics::EffectManager& effectManager,
                                      graphics::GraphicsQuality graphicsQuality);
        ShadowQuality(graphics::RT7Core& rt7Core, Settings& settings, const char* str);

    private:
        Settings* field_8;
        char* field_16;
        uint32_t field_24;
        Range<graphics::GraphicsQuality>* field_28;
        uint32_t field_36;
        uint8_t _unknown_40[153];
    };

    // 0x100269960: ShadowQuality::GetDefault() has the same machine code as oldscape::rs2lib::social::ClanChannelDelta::AddUser::GetID() const

    // 0x1005fdea0
    ShadowQuality::ShadowQuality(graphics::RT7Core& rt7Core, Settings& settings, const char* str) {
        Range<graphics::GraphicsQuality>* local_30;

        new (&local_30) oldscape::sidebars::SideBarData(0, 3);
        new (this) Option<graphics::GraphicsQuality>(rt7Core, settings, str, local_30);
    }

    // 0x1005fdf10
    void ShadowQuality::ApplySettingImpl(graphics::RT7Core& rt7Core, graphics::EffectManager& effectManager,
                                         graphics::GraphicsQuality graphicsQuality) {
        auto graphicsQuality_00 = GetValue();
        effectManager.SetEffectQuality(35, graphicsQuality_00);
        effectManager.SetEffectQuality(30, graphicsQuality_00);
        effectManager.EnableEffect(37, 1 < (int)graphicsQuality_00);
        SetShadowQualityEffect(effectManager, graphicsQuality_00);
    }

    // 0x1005fdf70
    uint8_t ShadowQuality::DetermineBestSetting(const perf::PerfModuleReporter& perfModuleReporter) const {
        uint32_t local_18 = 260;
        int iVar2 = perfModuleReporter.GetSummedResults((1120986464512).data(), 3);
        (logger::default_logger())
            ->Log(false, 7,
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/clientoptions/"
                  "options/ClientOptions_ShadowQuality.cpp",
                  81, "ShadowQuality::DetermineBestSetting Result: %d", iVar2);
        uint8_t uVar1 = 3;
        if ((iVar2 < 2001) && (uVar1 = 2, iVar2 < 851)) {
            uVar1 = 500 < iVar2;
        }
        return uVar1;
    }

    // 0x100610f30: ShadowQuality::~ShadowQuality() has the same machine code as CustomPlayerModelCount::~CustomPlayerModelCount()

} // namespace jag::game::option
