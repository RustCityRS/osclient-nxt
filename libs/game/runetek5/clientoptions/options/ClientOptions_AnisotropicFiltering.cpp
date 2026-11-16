// libs/game/runetek5/clientoptions/options/ClientOptions_AnisotropicFiltering.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.runetek5

#include "ClientOptions_AnisotropicFiltering.h"

namespace jag::game::option {
    // 0x100029ea0: AnisotropicFiltering::GetDefault() has the same machine code as oldscape::InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long)

    // 0x100603c20
    AnisotropicFiltering::AnisotropicFiltering(graphics::RT7Core& rt7Core, Settings& settings, const char* str) {
        Range<EnumAnisotropicFiltering>* local_30;

        new (&local_30) oldscape::sidebars::SideBarData(0, 4);
        new (this) Option<EnumAnisotropicFiltering>(rt7Core, settings, str, local_30);
        long lVar1 = ((MapArea*)Instance())->GetOrigin();
        if ((*(char*)(lVar1 + 166) == '\0') || (*(char*)(lVar1 + 177) == '\0')) {
            field_28->SetZ(0);
        }
    }

    // 0x100603d60
    void AnisotropicFiltering::ApplySettingImpl(graphics::RT7Core& rt7Core, graphics::EffectManager& effectManager,
                                                EnumAnisotropicFiltering enumAnisotropicFiltering) {
        ((BuiltinStates*)Instance())->SetAnisotropy((float)GetAnisotropyValue());
        auto pTVar1 = rt7Core.GetTextureManager();
        auto pTVar2 = pTVar1->GetTextureAtlasManager();
        pTVar2->DestroyRenderingResources();
        pTVar1 = rt7Core.GetTextureManager();
        pTVar2 = (TextureAtlasManager*)pTVar1->GetTextureAtlasManager();
        pTVar2->CreateRenderingResources();
    }

    // 0x100603dd0
    uint32_t AnisotropicFiltering::GetAnisotropyValue() const {
        int iVar1 = GetValue();
        if (iVar1 - 1U < 4) {
            return *(uint32_t*)(&DAT_100d43160 + (long)(int)(iVar1 - 1U) * 4);
        }
        return 1065353216;
    }

    // 0x100603e00
    uint8_t AnisotropicFiltering::DetermineBestSetting(const perf::PerfModuleReporter& perfModuleReporter) const {
        int iVar2 = perfModuleReporter.GetSummedResults((1120986464512).data(), 2);
        (logger::default_logger())
            ->Log(false, 7,
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/clientoptions/"
                  "options/ClientOptions_AnisotropicFiltering.cpp",
                  53, "AnisotropicFiltering::DetermineBestSetting Result: %d", iVar2);
        uint8_t uVar1 = 3;
        if ((iVar2 < 1001) && (uVar1 = 2, iVar2 < 651)) {
            uVar1 = 300 < iVar2;
        }
        return uVar1;
    }

} // namespace jag::game::option
