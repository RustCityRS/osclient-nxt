// libs/game/runetek5/clientoptions/options/ClientOptions_CanopyCutout.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.runetek5

namespace jag::game::option {
    class CanopyCutout {
    public:
        // virtual methods in vtable order
        virtual ~CanopyCutout();
        virtual uint64_t GetDefault();
        virtual bool DetermineBestSetting(const perf::PerfModuleReporter& perfModuleReporter) const;
        virtual void ApplySettingImpl(graphics::RT7Core& rt7Core, graphics::EffectManager& effectManager,
                                      EnumOptionToggle enumOptionToggle);
        CanopyCutout(graphics::RT7Core& rt7Core, Settings& settings, const char* str);

    private:
        Settings* field_8;
        char* field_16;
        uint32_t field_24;
        MinimenuEntry field_28;
        uint8_t _unknown_144[49];
    };

    // 0x100269960: CanopyCutout::GetDefault() has the same machine code as oldscape::rs2lib::social::ClanChannelDelta::AddUser::GetID() const

    // 0x100604700
    CanopyCutout::CanopyCutout(graphics::RT7Core& rt7Core, Settings& settings, const char* str) {
        GpuMemoryProfile gpuMemoryProfile1;
        Range<EnumOptionToggle>* local_30;

        new (&local_30) oldscape::sidebars::SideBarData(0, 1);
        new (this) Option<EnumOptionToggle>(rt7Core, settings, str, local_30);
        auto this_00 = Instance();
        long lVar2 = this_00->GetOrigin();
        if (*(char*)(lVar2 + 171) != '\0') {
            gpuMemoryProfile1 = ((RenderDevice*)this_00->Instance())->GetGpuMemoryProfile();
            if (render::operator<(gpuMemoryProfile1, 1) == '\0') {
                return;
            }
        }
        field_28->SetZ(0);
    }

    // 0x1006047c0
    void CanopyCutout::ApplySettingImpl(graphics::RT7Core& rt7Core, graphics::EffectManager& effectManager,
                                        EnumOptionToggle enumOptionToggle) {
        int iVar1 = GetValue();
        effectManager.EnableEffect(117, iVar1 == 1);
    }

    // 0x1006047f0
    bool CanopyCutout::DetermineBestSetting(const perf::PerfModuleReporter& perfModuleReporter) const {
        uint32_t local_18 = 260;
        int iVar1 = perfModuleReporter.GetSummedResults((1112396529920).data(), 3);
        (logger::default_logger())
            ->Log(false, 7,
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/clientoptions/"
                  "options/ClientOptions_CanopyCutout.cpp",
                  49, "CanopyCutout::DetermineBestSetting Result: %d", iVar1);
        return 259 < iVar1;
    }

    // 0x10060f700: CanopyCutout::~CanopyCutout() has the same machine code as Option<EnumOptionToggle>::~Option()

} // namespace jag::game::option
