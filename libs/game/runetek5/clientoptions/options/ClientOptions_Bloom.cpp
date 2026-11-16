// libs/game/runetek5/clientoptions/options/ClientOptions_Bloom.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.runetek5

#include "ClientOptions_Bloom.h"

namespace jag::game::option {
    // 0x100269960: Bloom::GetDefault() has the same machine code as oldscape::rs2lib::social::ClanChannelDelta::AddUser::GetID() const

    // 0x1006044b0
    Bloom::Bloom(graphics::RT7Core& rt7Core, Settings& settings, const char* str) {
        GpuMemoryProfile gpuMemoryProfile1;
        Range<EnumBloom>* local_30;

        new (&local_30) oldscape::sidebars::SideBarData(0, 3);
        new (this) Option<EnumBloom>(rt7Core, settings, str, local_30);
        auto this_00 = Instance();
        long lVar2 = this_00->GetOrigin();
        if (((*(char*)(lVar2 + 159) != '\0') || (*(char*)(lVar2 + 158) != '\0')) || (*(char*)(lVar2 + 157) != '\0')) {
            gpuMemoryProfile1 = ((RenderDevice*)this_00->Instance())->GetGpuMemoryProfile();
            if (render::operator<(gpuMemoryProfile1, 1) == '\0') {
                return;
            }
        }
        field_28->SetZ(0);
    }

    // 0x100604610
    void Bloom::ApplySettingImpl(graphics::RT7Core& rt7Core, graphics::EffectManager& effectManager,
                                 EnumBloom enumBloom) {
        long lVar2 = rt7Core.GetPostProcessController()->GetCurrentConfig();
        int iVar1 = GetValue();
        *(bool*)(lVar2 + 468) = iVar1 != 0;
        iVar1 = GetValue();
        if (iVar1 - 1 < 3) {
            ((lVar2 + 208))->SetBloomQuality(iVar1 - 1);
        }
    }

    // 0x100604670
    uint8_t Bloom::DetermineBestSetting(const perf::PerfModuleReporter& perfModuleReporter) const {
        int iVar2 = perfModuleReporter.GetSummedResults((1120986464512).data(), 2);
        (logger::default_logger())
            ->Log(false, 7,
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/clientoptions/"
                  "options/ClientOptions_Bloom.cpp",
                  58, "Bloom::DetermineBestSetting Result: %d", iVar2);
        uint8_t uVar1 = 3;
        if ((iVar2 < 751) && (uVar1 = 2, iVar2 < 201)) {
            uVar1 = 120 < iVar2;
        }
        return uVar1;
    }

} // namespace jag::game::option
