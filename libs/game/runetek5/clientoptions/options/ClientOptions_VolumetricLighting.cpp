// libs/game/runetek5/clientoptions/options/ClientOptions_VolumetricLighting.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.runetek5

#include "ClientOptions_VolumetricLighting.h"

namespace jag::game::option {
    // 0x100029ea0: VolumetricLighting::GetDefault() has the same machine code as oldscape::InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long)

    // 0x1005f8390
    VolumetricLighting::VolumetricLighting(graphics::RT7Core& rt7Core, Settings& settings, const char* str) {
        Range<EnumVolumetricLighting>* local_30;

        new (&local_30) oldscape::sidebars::SideBarData(0, 4);
        new (this) Option<EnumVolumetricLighting>(rt7Core, settings, str, local_30);
        if (rt7Core.GetEffectManager()->GetEffect<graphics::SunlightDirectLighting>(50)->IsValidValue() == '\0') {
            field_28->SetZ(0);
        }
    }

    // 0x1005f8530
    void VolumetricLighting::ApplySettingImpl(graphics::RT7Core& rt7Core, graphics::EffectManager& effectManager,
                                              EnumVolumetricLighting enumVolumetricLighting) {
        int iVar1 = GetValue();
        GraphicsQuality GVar3 = iVar1 - 1;
        effectManager.EnableEffect(50, iVar1 != 0);
        auto pFVar2 = effectManager.GetEffect<graphics::SunlightDirectLighting>(50);
        GraphicsQuality graphicsQuality = 4294967295;
        if (GVar3 < 4) {
            *(uint32_t*)&pFVar2->field_32 = *(uint32_t*)(&DAT_100d43110 + (long)(int)GVar3 * 4);
            graphicsQuality = GVar3;
        }
        effectManager.SetEffectQuality(50, graphicsQuality);
    }

    // 0x1005f85a0
    uint8_t VolumetricLighting::DetermineBestSetting(const perf::PerfModuleReporter& perfModuleReporter) const {
        uint64_t uStack_20 = 1116691497219;
        int iVar2 = perfModuleReporter.GetSummedResults((1120986464512).data(), 4);
        (logger::default_logger())
            ->Log(false, 7,
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/clientoptions/"
                  "options/ClientOptions_VolumetricLighting.cpp",
                  80, "VolumetricLighting::DetermineBestSetting Result: %d", iVar2);
        uint8_t uVar1 = 4;
        if (((iVar2 < 2001) && (uVar1 = 3, iVar2 < 1001)) && (uVar1 = 2, iVar2 < 801)) {
            uVar1 = 500 < iVar2;
        }
        return uVar1;
    }

    // 0x1005fa540: VolumetricLighting::~VolumetricLighting() has the same machine code as Option<EnumVolumetricLighting>::~Option()

} // namespace jag::game::option
