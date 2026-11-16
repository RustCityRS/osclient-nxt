// libs/game/runetek5/clientoptions/options/ClientOptions_ShadowQuality.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.game.runetek5

namespace jag::game::option {
    class ShadowQuality {
    public:
        // virtual methods in vtable order
        virtual ~ShadowQuality();
        virtual GetDefault();
        virtual DetermineBestSetting(perf::PerfModuleReporter const&) const;
        virtual void ApplySettingImpl(graphics::RT7Core&, graphics::EffectManager&, graphics::GraphicsQuality);
        ShadowQuality(graphics::RT7Core&, Settings&, char const*);

        // data members, from how the methods use this: 193 bytes
        undefined** field_0;    // offset 0, vtable pointer
        undefined8 field_8;     // offset 8
        undefined8 field_16;    // offset 16
        undefined4 field_24;    // offset 24
        undefined1 field_28[8]; // offset 28
        undefined4 field_36;    // offset 36
        char _unknown_40[153];
    };

    // 0x100269960: the linker folded this into oldscape::rs2lib::social::ClanChannelDelta::AddUser::GetID() const, which has identical code
    ShadowQuality::GetDefault();

    // 0x1005fdea0, 96 bytes, base-object constructor, placed by class name and debug map
    // ShadowQuality::ShadowQuality(graphics::RT7Core&, Settings&, char const*)
    void ShadowQuality::ShadowQuality(RT7Core* param_1, Settings* param_2, char* param_3) {
        undefined1 local_30[8];

        new (local_30) oldscape::sidebars::SideBarData(0, 3);
        new (this) Option<graphics::GraphicsQuality>(param_1, param_2, param_3, local_30);
        field_0 = &PTR__Reflections_100f09e58;
    }

    // 0x1005fdf00, 16 bytes, complete-object constructor, placed by class name and debug map
    // ShadowQuality::ShadowQuality(graphics::RT7Core&, Settings&, char const*): jumps straight to the base-object constructor

    // 0x1005fdf10, 96 bytes, placed by class name and debug map
    // ShadowQuality::ApplySettingImpl(graphics::RT7Core&, graphics::EffectManager&, graphics::GraphicsQuality)
    void ShadowQuality::ApplySettingImpl(undefined8 param_2_00, EffectManager* param_2) {
        int iVar1;

        iVar1 = GetValue();
        param_2->SetEffectQuality(35, iVar1);
        param_2->SetEffectQuality(30, iVar1);
        param_2->EnableEffect(37, 1 < iVar1);
        SetShadowQualityEffect(param_2, iVar1);
    }

    // 0x1005fdf70, 160 bytes, placed by class name and debug map
    // ShadowQuality::DetermineBestSetting(perf::PerfModuleReporter const&) const
    undefined1 ShadowQuality::DetermineBestSetting(PerfModuleReporter* param_1) {
        undefined1 uVar1;
        int iVar2;
        int* piVar3;
        undefined8 uVar4;
        undefined8 local_20;
        undefined4 local_18;

        local_18 = 260;
        local_20 = 1120986464512;
        piVar3 = (int*)local_20.data();
        iVar2 = param_1->GetSummedResults(piVar3, 3);
        uVar4 = logger::default_logger();
        logger::Logger::Log(uVar4, 0, 7,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                            "clientoptions/options/ClientOptions_ShadowQuality.cpp",
                            81, "ShadowQuality::DetermineBestSetting Result: %d", iVar2);
        uVar1 = 3;
        if ((iVar2 < 2001) && (uVar1 = 2, iVar2 < 851)) {
            uVar1 = 500 < iVar2;
        }
        return uVar1;
    }

    // 0x1005fe370: the linker folded this into Reflections::~Reflections(), which has identical code
    ShadowQuality::~ShadowQuality();

    // 0x100609150: the linker folded this into CustomPlayerModelCount::~CustomPlayerModelCount(), which has identical code
    ShadowQuality::~ShadowQuality();

    // 0x100610f30: the linker folded this into CustomPlayerModelCount::~CustomPlayerModelCount(), which has identical code
    ShadowQuality::~ShadowQuality();

} // namespace jag::game::option
