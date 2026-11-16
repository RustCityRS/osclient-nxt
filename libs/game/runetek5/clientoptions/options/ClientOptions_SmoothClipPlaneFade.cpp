// libs/game/runetek5/clientoptions/options/ClientOptions_SmoothClipPlaneFade.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.runetek5

namespace jag::game::option {
    class SmoothClipPlaneFade {
    public:
        // virtual methods in vtable order
        virtual ~SmoothClipPlaneFade();
        virtual bool DetermineBestSetting(const perf::PerfModuleReporter& perfModuleReporter) const;
        virtual void ApplySettingImpl(graphics::RT7Core& rt7Core, graphics::EffectManager& effectManager,
                                      EnumOptionToggle enumOptionToggle);
        SmoothClipPlaneFade(graphics::RT7Core& rt7Core, Settings& settings, const char* str);

    private:
        Settings* field_8;
        char* field_16;
        uint32_t field_24;
        MinimenuEntry field_28;
        uint8_t _unknown_144[49];
    };

    // 0x1005fe1f0
    SmoothClipPlaneFade::SmoothClipPlaneFade(graphics::RT7Core& rt7Core, Settings& settings, const char* str) {
        Range<EnumOptionToggle>* local_30;

        new (&local_30) oldscape::sidebars::SideBarData(0, 1);
        new (this) Option<EnumOptionToggle>(rt7Core, settings, str, local_30);
        GpuMemoryProfile gpuMemoryProfile1 = ((RenderDevice*)Instance())->GetGpuMemoryProfile();
        if (render::operator<(gpuMemoryProfile1, 1) != '\0') {
            field_28->SetZ(0);
        }
    }

    // 0x1005fe2a0
    void SmoothClipPlaneFade::ApplySettingImpl(graphics::RT7Core& rt7Core, graphics::EffectManager& effectManager,
                                               EnumOptionToggle enumOptionToggle) {
        int iVar1 = GetValue();
        effectManager.EnableEffect(116, iVar1 == 1);
    }

    // 0x1005fe2d0
    bool SmoothClipPlaneFade::DetermineBestSetting(const perf::PerfModuleReporter& perfModuleReporter) const {
        int iVar1 = perfModuleReporter.GetSummedResults((1116691497216).data(), 2);
        (logger::default_logger())
            ->Log(false, 7,
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/clientoptions/"
                  "options/ClientOptions_SmoothClipPlaneFade.cpp",
                  46, "SmoothClipPlaneFade::DetermineBestSetting Result: %d", iVar1);
        return 139 < iVar1;
    }

    // 0x10060f700: SmoothClipPlaneFade::~SmoothClipPlaneFade() has the same machine code as Option<EnumOptionToggle>::~Option()

} // namespace jag::game::option
