// libs/game/runetek5/clientoptions/options/ClientOptions_SmoothClipPlaneFade.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.game.runetek5

namespace jag::game::option {
    class SmoothClipPlaneFade {
    public:
        // virtual methods in vtable order
        virtual ~SmoothClipPlaneFade();
        virtual bool DetermineBestSetting(perf::PerfModuleReporter const&) const;
        virtual void ApplySettingImpl(graphics::RT7Core&, graphics::EffectManager&, EnumOptionToggle);
        SmoothClipPlaneFade(graphics::RT7Core&, Settings&, char const*);

        // data members, from how the methods use this: 193 bytes
        undefined** field_0;    // offset 0, vtable pointer
        undefined8 field_8;     // offset 8
        undefined8 field_16;    // offset 16
        undefined4 field_24;    // offset 24
        MinimenuEntry field_28; // offset 28
        char _unknown_144[49];
    };

    // 0x1005fe1f0, 160 bytes, base-object constructor, placed by class name and debug map
    // SmoothClipPlaneFade::SmoothClipPlaneFade(graphics::RT7Core&, Settings&, char const*)
    void SmoothClipPlaneFade::SmoothClipPlaneFade(RT7Core* param_1, Settings* param_2, char* param_3) {
        undefined4 uVar2;
        RenderDevice* this_00;
        undefined1 local_30[8];

        new (local_30) oldscape::sidebars::SideBarData(0, 1);
        new (this) Option<EnumOptionToggle>(param_1, param_2, param_3, local_30);
        field_0 = &PTR__HapticFeedback_100f09fa8;
        this_00 = (RenderDevice*)((SmoothClipPlaneFade*)this)->Instance();
        uVar2 = this_00->GetGpuMemoryProfile();
        if (render::operator<(uVar2) != '\0') {
            (field_28, 0)->SetZ();
        }
    }

    // 0x1005fe290, 16 bytes, complete-object constructor, placed by class name and debug map
    // SmoothClipPlaneFade::SmoothClipPlaneFade(graphics::RT7Core&, Settings&, char const*): jumps straight to the base-object constructor

    // 0x1005fe2a0, 48 bytes, placed by class name and debug map
    // SmoothClipPlaneFade::ApplySettingImpl(graphics::RT7Core&, graphics::EffectManager&, EnumOptionToggle)
    void SmoothClipPlaneFade::ApplySettingImpl(undefined8 param_2_00, EffectManager* param_2) {
        int iVar1;

        iVar1 = GetValue();
        param_2->EnableEffect(116, iVar1 == 1);
    }

    // 0x1005fe2d0, 128 bytes, placed by class name and debug map
    // SmoothClipPlaneFade::DetermineBestSetting(perf::PerfModuleReporter const&) const
    bool SmoothClipPlaneFade::DetermineBestSetting(PerfModuleReporter* param_1) {
        int iVar1;
        int* piVar2;
        undefined8 uVar3;
        undefined8 local_18;

        local_18 = 1116691497216;
        piVar2 = (int*)local_18.data();
        iVar1 = param_1->GetSummedResults(piVar2, 2);
        uVar3 = logger::default_logger();
        logger::Logger::Log(uVar3, 0, 7,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                            "clientoptions/options/ClientOptions_SmoothClipPlaneFade.cpp",
                            46, "SmoothClipPlaneFade::DetermineBestSetting Result: %d", iVar1);
        return 139 < iVar1;
    }

    // 0x1005fe390: the linker folded this into Shadows::~Shadows(), which has identical code
    SmoothClipPlaneFade::~SmoothClipPlaneFade();

    // 0x100609140: the linker folded this into CutsceneSubtitles::~CutsceneSubtitles(), which has identical code
    SmoothClipPlaneFade::~SmoothClipPlaneFade();

    // 0x10060f700: the linker folded this into Option<EnumOptionToggle>::~Option(), which has identical code
    SmoothClipPlaneFade::~SmoothClipPlaneFade();

} // namespace jag::game::option
