// libs/game/runetek5/clientoptions/options/ClientOptions_AmbientOcclusion.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.runetek5

#include "ClientOptions_AmbientOcclusion.h"

namespace jag::game::option {
    // 0x1006039e0
    AmbientOcclusion::AmbientOcclusion(graphics::RT7Core& rt7Core, Settings& settings, const char* str) {
        Range<graphics::SSAOPass::Mode>* in_RAX;

        int arg1 = 0;
        Range<graphics::SSAOPass::Mode>* local_38 = in_RAX;
        new (&local_38) oldscape::sidebars::SideBarData(0, 2);
        new (this) Option<graphics::SSAOPass::Mode>(rt7Core, settings, str, local_38);
        FogEffect* this_01 = rt7Core.GetEffectManager()->GetEffect<graphics::SunlightDirectLighting>(110);
        if (this_01->IsValidValue() != '\0') {
            arg1 = this_01->GetHighestSupporedMode();
        }
        field_28->SetZ(arg1);
    }

    // 0x100603b30
    void AmbientOcclusion::ApplySettingImpl(graphics::RT7Core& arg1, graphics::EffectManager& effectManager,
                                            graphics::SSAOPass::Mode arg3) {
        int iVar1 = GetValue();
        effectManager.EnableEffect(110, iVar1 != 0);
        graphics::SSAOPass::m_SSAOMode = field_24;
    }

    // 0x100603b70
    bool AmbientOcclusion::IsModifiable(const graphics::RT7Core* rt7Core) const {
        return rt7Core->GetGBufferRT()->end() != 0;
    }

    // 0x100603b90
    char AmbientOcclusion::DetermineBestSetting(const perf::PerfModuleReporter& perfModuleReporter) const {
        uint64_t uStack_20 = 1116691497219;
        int iVar1 = perfModuleReporter.GetSummedResults((1120986464512).data(), 4);
        (logger::default_logger())
            ->Log(false, 7,
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/clientoptions/"
                  "options/ClientOptions_AmbientOcclusion.cpp",
                  48, "AmbientOcclusion::DetermineBestSetting Result: %d", iVar1);
        return (2000 < iVar1) * '\x02';
    }

} // namespace jag::game::option
