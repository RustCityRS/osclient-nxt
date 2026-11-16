// libs/game/runetek5/clientoptions/options/ClientOptions_Lighting.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.runetek5

namespace jag::game::option {
    class LightingQuality {
    public:
        // virtual methods in vtable order
        virtual ~LightingQuality();
        virtual uint64_t GetDefault();
        virtual uint8_t DetermineBestSetting(const perf::PerfModuleReporter& perfModuleReporter) const;
        virtual void ApplySettingImpl(graphics::RT7Core& rt7Core, graphics::EffectManager& effectManager,
                                      graphics::GraphicsQuality graphicsQuality);
        LightingQuality(graphics::RT7Core& rt7Core, Settings& settings, const char* str);

    private:
        Settings* field_8;
        char* field_16;
        uint32_t field_24;
        MinimenuEntry field_28;
        uint8_t _unknown_144[49];
    };

    // 0x1005ffe00
    LightingQuality::LightingQuality(graphics::RT7Core& rt7Core, Settings& settings, const char* str) {
        Range<graphics::GraphicsQuality>* local_30;

        new (&local_30) oldscape::sidebars::SideBarData(0, 3);
        new (this) Option<graphics::GraphicsQuality>(rt7Core, settings, str, local_30);
        long lVar1 = ((MapArea*)Instance())->GetOrigin();
        if (*(char*)(lVar1 + 173) == '\0') {
            field_28->SetZ(0);
        }
    }

    // 0x1005ffea0
    void LightingQuality::ApplySettingImpl(graphics::RT7Core& rt7Core, graphics::EffectManager& effectManager,
                                           graphics::GraphicsQuality graphicsQuality) {
        switch (GetValue()) {
        case 0:
            effectManager.EnableEffect(57, true);
            effectManager.EnableEffect(26, true);
            effectManager.DisableEffect(24);
            effectManager.DisableEffect(48);
            effectManager.DisableEffect(49);
            effectManager.DisableEffect(61);
            effectManager.DisableEffect(56);
            effectManager.DisableEffect(109);
            break;
        case 1:
            effectManager.EnableEffect(57, true);
            effectManager.EnableEffect(24, true);
            effectManager.EnableEffect(48, true);
            effectManager.EnableEffect(49, true);
            effectManager.EnableEffect(26, true);
            effectManager.EnableEffect(61, true);
            effectManager.DisableEffect(109);
            effectManager.DisableEffect(56);
            break;
        case 2:
            effectManager.EnableEffect(57, true);
            effectManager.EnableEffect(24, true);
            effectManager.EnableEffect(48, true);
            effectManager.EnableEffect(49, true);
            effectManager.EnableEffect(26, true);
            effectManager.EnableEffect(61, true);
            effectManager.DisableEffect(56);
            goto LAB_1006000c4;
        case 3:
            effectManager.EnableEffect(57, true);
            effectManager.EnableEffect(24, true);
            effectManager.EnableEffect(48, true);
            effectManager.EnableEffect(49, true);
            effectManager.EnableEffect(26, true);
            effectManager.EnableEffect(61, true);
            effectManager.EnableEffect(56, true);
        LAB_1006000c4:
            effectManager.EnableEffect(109, true);
        }
    }

    // 0x1006000f0
    uint8_t LightingQuality::DetermineBestSetting(const perf::PerfModuleReporter& perfModuleReporter) const {
        int iVar2 = perfModuleReporter.GetSummedResults((1116691497216).data(), 2);
        (logger::default_logger())
            ->Log(false, 7,
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/clientoptions/"
                  "options/ClientOptions_Lighting.cpp",
                  109, "LightingQuality::DetermineBestSetting Result: %d", iVar2);
        uint8_t uVar1 = 3;
        if ((iVar2 < 651) && (uVar1 = 2, iVar2 < 351)) {
            uVar1 = 150 < iVar2;
        }
        return uVar1;
    }

} // namespace jag::game::option
