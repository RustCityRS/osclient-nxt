// libs/game/runetek5/clientoptions/options/ClientOptions_EntityHighlights.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.runetek5

namespace jag::game::option {
    class EntityHighlights : public CanopyCutout // base inferred from shared vtable slots
    {
    public:
        // virtual methods in vtable order
        virtual ~EntityHighlights();
        virtual uint64_t GetDefault();
        virtual bool DetermineBestSetting(const perf::PerfModuleReporter& perfModuleReporter) const;
        virtual void ApplySettingImpl(graphics::RT7Core& rt7Core, graphics::EffectManager& effectManager,
                                      EnumOptionToggle enumOptionToggle);
        EntityHighlights(graphics::RT7Core& rt7Core, Settings& settings, const char* str);
    };

    // 0x100269960: EntityHighlights::GetDefault() has the same machine code as oldscape::rs2lib::social::ClanChannelDelta::AddUser::GetID() const

    // 0x100601e60
    EntityHighlights::EntityHighlights(graphics::RT7Core& rt7Core, Settings& settings, const char* str) {
        Range<EnumOptionToggle>* local_30;

        new (&local_30) oldscape::sidebars::SideBarData(0, 1);
        new (this) Option<EnumOptionToggle>(rt7Core, settings, str, local_30);
    }

    // 0x100601ed0
    void EntityHighlights::ApplySettingImpl(graphics::RT7Core& rt7Core, graphics::EffectManager& effectManager,
                                            EnumOptionToggle enumOptionToggle) {
        ((ObjectHighlightPass*)rt7Core.GetObjectHighlightPass())->SetEnabled(GetValue() == 1);
    }

    // 0x100601f20
    bool EntityHighlights::DetermineBestSetting(const perf::PerfModuleReporter& perfModuleReporter) const {
        uint64_t in_RAX;
        int iVar2;

        uint32_t uVar3 = (uint32_t)((unsigned long)in_RAX >> 32);
        long lVar1 = perfModuleReporter.FindResult(256);
        if (lVar1 == 0) {
            iVar2 = 0;
        } else {
            iVar2 = *(int*)(lVar1 + 20);
        }
        (logger::default_logger())
            ->Log(false, 7,
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/clientoptions/"
                  "options/ClientOptions_EntityHighlights.cpp",
                  34, "EntityHighlights::DetermineBestSetting Result: %d", (((uint64_t)uVar3 << 32) | (uint32_t)iVar2));
        return 49 < iVar2;
    }

    // 0x10060f700: EntityHighlights::~EntityHighlights() has the same machine code as Option<EnumOptionToggle>::~Option()

} // namespace jag::game::option
