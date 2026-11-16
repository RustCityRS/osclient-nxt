// libs/game/runetek5/clientoptions/options/ClientOptions_ParticleQuality.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.runetek5

#include "ClientOptions_ParticleQuality.h"

namespace jag::game::option {
    // 0x100269960: ParticleQuality::GetDefault() has the same machine code as oldscape::rs2lib::social::ClanChannelDelta::AddUser::GetID() const

    // 0x1005fd720
    ParticleQuality::ParticleQuality(graphics::RT7Core& rt7Core, Settings& settings, const char* str) {
        Range<EnumParticleQualityLevel>* local_30;

        new (&local_30) oldscape::sidebars::SideBarData(0, 3);
        new (this) Option<EnumParticleQualityLevel>(rt7Core, settings, str, local_30);
    }

    // 0x1005fd820
    uint8_t ParticleQuality::DetermineBestSetting(const perf::PerfModuleReporter& perfModuleReporter) const {
        uint64_t uStack_20 = 1116691497219;
        int iVar2 = perfModuleReporter.GetSummedResults((1120986464512).data(), 4);
        (logger::default_logger())
            ->Log(false, 7,
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/clientoptions/"
                  "options/ClientOptions_ParticleQuality.cpp",
                  40, "ParticleQuality::DetermineBestSetting Result: %d", iVar2);
        uint8_t uVar1 = 3;
        if ((iVar2 < 601) && (uVar1 = 2, iVar2 < 401)) {
            uVar1 = 200 < iVar2;
        }
        return uVar1;
    }

    // 0x1005fd8c0
    void ParticleQuality::ApplySettingImpl(graphics::RT7Core& rt7Core, graphics::EffectManager& effectManager,
                                           EnumParticleQualityLevel enumParticleQualityLevel) {
        int iVar1 = GetValue();
        *(uint32_t*)PTR_m_particleCountMultiplier_100ee69d8 =
            *(uint32_t*)(&DAT_100d43120 + (unsigned long)(0 < iVar1) * 4);
        iVar1 = GetValue();
        effectManager.EnableEffect(105, 2 < iVar1);
        iVar1 = GetValue();
        effectManager.EnableEffect(104, 1 < iVar1);
    }

} // namespace jag::game::option
