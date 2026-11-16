// libs/game/runetek5/clientoptions/options/ClientOptions_Lighting.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.game.runetek5

namespace jag::game::option {
    class LightingQuality {
    public:
        // virtual methods in vtable order
        virtual ~LightingQuality();
        virtual GetDefault();
        virtual DetermineBestSetting(perf::PerfModuleReporter const&) const;
        virtual void ApplySettingImpl(graphics::RT7Core&, graphics::EffectManager&, graphics::GraphicsQuality);
        LightingQuality(graphics::RT7Core&, Settings&, char const*);

        // data members, from how the methods use this: 193 bytes
        undefined** field_0;    // offset 0, vtable pointer
        undefined8 field_8;     // offset 8
        undefined8 field_16;    // offset 16
        undefined4 field_24;    // offset 24
        MinimenuEntry field_28; // offset 28
        char _unknown_144[49];
    };

    // 0x1005ffe00, 144 bytes, base-object constructor, placed by debug map only (low confidence)
    // LightingQuality::LightingQuality(graphics::RT7Core&, Settings&, char const*)
    void LightingQuality::LightingQuality(RT7Core* param_1, Settings* param_2, char* param_3) {
        MapArea* this_00;
        long lVar1;
        undefined1 local_30[8];

        new (local_30) oldscape::sidebars::SideBarData(0, 3);
        new (this) Option<graphics::GraphicsQuality>(param_1, param_2, param_3, local_30);
        field_0 = &PTR__Reflections_100f0a2f0;
        this_00 = (MapArea*)((LightingQuality*)this)->Instance();
        lVar1 = this_00->GetOrigin();
        if (*(char*)(lVar1 + 173) == '\0') {
            (field_28, 0)->SetZ();
        }
    }

    // 0x1005ffe90, 16 bytes, complete-object constructor, placed by debug map only (low confidence)
    // LightingQuality::LightingQuality(graphics::RT7Core&, Settings&, char const*): jumps straight to the base-object constructor

    // 0x1005ffea0, 592 bytes, placed by debug map only (low confidence)
    // LightingQuality::ApplySettingImpl(graphics::RT7Core&, graphics::EffectManager&, graphics::GraphicsQuality)
    void LightingQuality::ApplySettingImpl(undefined8 param_2_00, EffectManager* param_2) {
        undefined4 uVar1;

        uVar1 = GetValue();
        switch (uVar1) {
        case 0:
            param_2->EnableEffect(57, 1);
            param_2->EnableEffect(26, 1);
            param_2->DisableEffect(24);
            param_2->DisableEffect(48);
            param_2->DisableEffect(49);
            param_2->DisableEffect(61);
            param_2->DisableEffect(56);
            param_2->DisableEffect(109);
            break;
        case 1:
            param_2->EnableEffect(57, 1);
            param_2->EnableEffect(24, 1);
            param_2->EnableEffect(48, 1);
            param_2->EnableEffect(49, 1);
            param_2->EnableEffect(26, 1);
            param_2->EnableEffect(61, 1);
            param_2->DisableEffect(109);
            param_2->DisableEffect(56);
            break;
        case 2:
            param_2->EnableEffect(57, 1);
            param_2->EnableEffect(24, 1);
            param_2->EnableEffect(48, 1);
            param_2->EnableEffect(49, 1);
            param_2->EnableEffect(26, 1);
            param_2->EnableEffect(61, 1);
            param_2->DisableEffect(56);
            goto LAB_1006000c4;
        case 3:
            param_2->EnableEffect(57, 1);
            param_2->EnableEffect(24, 1);
            param_2->EnableEffect(48, 1);
            param_2->EnableEffect(49, 1);
            param_2->EnableEffect(26, 1);
            param_2->EnableEffect(61, 1);
            param_2->EnableEffect(56, 1);
        LAB_1006000c4:
            param_2->EnableEffect(109, 1);
        }
    }

    // 0x1006000f0, 144 bytes, placed by debug map only (low confidence)
    // LightingQuality::DetermineBestSetting(perf::PerfModuleReporter const&) const
    undefined1 LightingQuality::DetermineBestSetting(PerfModuleReporter* param_1) {
        undefined1 uVar1;
        int iVar2;
        int* piVar3;
        undefined8 uVar4;
        undefined8 local_18;

        local_18 = 1116691497216;
        piVar3 = (int*)local_18.data();
        iVar2 = param_1->GetSummedResults(piVar3, 2);
        uVar4 = logger::default_logger();
        logger::Logger::Log(uVar4, 0, 7,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                            "clientoptions/options/ClientOptions_Lighting.cpp",
                            109, "LightingQuality::DetermineBestSetting Result: %d", iVar2);
        uVar1 = 3;
        if ((iVar2 < 651) && (uVar1 = 2, iVar2 < 351)) {
            uVar1 = 150 < iVar2;
        }
        return uVar1;
    }

} // namespace jag::game::option
