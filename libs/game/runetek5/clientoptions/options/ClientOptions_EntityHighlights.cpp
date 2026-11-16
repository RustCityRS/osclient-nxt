// libs/game/runetek5/clientoptions/options/ClientOptions_EntityHighlights.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.game.runetek5

namespace jag::game::option {
    class EntityHighlights : public CanopyCutout // base inferred from shared vtable slots
    {
    public:
        // virtual methods in vtable order
        virtual ~EntityHighlights();
        virtual GetDefault();
        virtual bool DetermineBestSetting(perf::PerfModuleReporter const&) const;
        virtual void ApplySettingImpl(graphics::RT7Core&, graphics::EffectManager&, EnumOptionToggle);
        EntityHighlights(graphics::RT7Core&, Settings&, char const*);

        // data members, from how the methods use this: 193 bytes, the first 193 are CanopyCutout
    };

    // 0x100269960: the linker folded this into oldscape::rs2lib::social::ClanChannelDelta::AddUser::GetID() const, which has identical code
    EntityHighlights::GetDefault();

    // 0x1005fe390: the linker folded this into Shadows::~Shadows(), which has identical code
    EntityHighlights::~EntityHighlights();

    // 0x100601e60, 96 bytes, base-object constructor, placed by class name and debug map
    // EntityHighlights::EntityHighlights(graphics::RT7Core&, Settings&, char const*)
    void EntityHighlights::EntityHighlights(RT7Core* param_1, Settings* param_2, char* param_3) {
        undefined1 local_30[8];

        new (local_30) oldscape::sidebars::SideBarData(0, 1);
        new (this) Option<EnumOptionToggle>(param_1, param_2, param_3, local_30);
        field_0 = &PTR__HapticFeedback_100f0a638;
    }

    // 0x100601ec0, 16 bytes, complete-object constructor, placed by class name and debug map
    // EntityHighlights::EntityHighlights(graphics::RT7Core&, Settings&, char const*): jumps straight to the base-object constructor

    // 0x100601ed0, 64 bytes, placed by class name and debug map
    // EntityHighlights::ApplySettingImpl(graphics::RT7Core&, graphics::EffectManager&, EnumOptionToggle)
    void EntityHighlights::ApplySettingImpl(RT7Core* param_1) {
        ObjectHighlightPass* this_00;
        int iVar1;

        this_00 = (ObjectHighlightPass*)param_1->GetObjectHighlightPass();
        iVar1 = GetValue();
        this_00->SetEnabled(iVar1 == 1);
    }

    // 0x100601f20, 96 bytes, placed by class name
    // EntityHighlights::DetermineBestSetting(perf::PerfModuleReporter const&) const
    bool EntityHighlights::DetermineBestSetting(PerfModuleReporter* param_1) {
        undefined8 in_RAX;
        long lVar1;
        undefined8 uVar2;
        int iVar3;
        undefined4 uVar4;

        uVar4 = (undefined4)((ulong)in_RAX >> 32);
        lVar1 = param_1->FindResult(256);
        if (lVar1 == 0) {
            iVar3 = 0;
        } else {
            iVar3 = *(int*)(lVar1 + 20);
        }
        uVar2 = logger::default_logger();
        logger::Logger::Log(uVar2, 0, 7,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                            "clientoptions/options/ClientOptions_EntityHighlights.cpp",
                            34, "EntityHighlights::DetermineBestSetting Result: %d", CONCAT44(uVar4, iVar3));
        return 49 < iVar3;
    }

    // 0x100609140: the linker folded this into CutsceneSubtitles::~CutsceneSubtitles(), which has identical code
    EntityHighlights::~EntityHighlights();

    // 0x10060f700: the linker folded this into Option<EnumOptionToggle>::~Option(), which has identical code
    EntityHighlights::~EntityHighlights();

} // namespace jag::game::option
