// libs/game/runetek5/clientoptions/options/ClientOptions_ParticleQuality.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.game.runetek5

#include "ClientOptions_ParticleQuality.h"

namespace jag::game::option {
    // 0x100269960: the linker folded this into oldscape::rs2lib::social::ClanChannelDelta::AddUser::GetID() const, which has identical code
    ParticleQuality::GetDefault();

    // 0x1005fd720, 96 bytes, base-object constructor, placed by class name and debug map
    // ParticleQuality::ParticleQuality(graphics::RT7Core&, Settings&, char const*)
    void ParticleQuality::ParticleQuality(RT7Core* param_1, Settings* param_2, char* param_3) {
        undefined1 local_30[8];

        new (local_30) oldscape::sidebars::SideBarData(0, 3);
        new (this) Option<EnumParticleQualityLevel>(param_1, param_2, param_3, local_30);
        field_0 = &PTR__ParticleQuality_100f09d08;
    }

    // 0x1005fd810, 16 bytes, complete-object constructor, placed by class name and debug map
    // ParticleQuality::ParticleQuality(graphics::RT7Core&, Settings&, char const*): jumps straight to the base-object constructor

    // 0x1005fd820, 144 bytes, placed by class name and debug map
    // ParticleQuality::DetermineBestSetting(perf::PerfModuleReporter const&) const
    undefined1 ParticleQuality::DetermineBestSetting(PerfModuleReporter* param_1) {
        undefined1 uVar1;
        int iVar2;
        int* piVar3;
        undefined8 uVar4;
        undefined8 local_28;
        undefined8 uStack_20;

        local_28 = 1120986464512;
        uStack_20 = 1116691497219;
        piVar3 = (int*)local_28.data();
        iVar2 = param_1->GetSummedResults(piVar3, 4);
        uVar4 = logger::default_logger();
        logger::Logger::Log(uVar4, 0, 7,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                            "clientoptions/options/ClientOptions_ParticleQuality.cpp",
                            40, "ParticleQuality::DetermineBestSetting Result: %d", iVar2);
        uVar1 = 3;
        if ((iVar2 < 601) && (uVar1 = 2, iVar2 < 401)) {
            uVar1 = 200 < iVar2;
        }
        return uVar1;
    }

    // 0x1005fd8c0, 112 bytes, placed by class name and debug map
    // ParticleQuality::ApplySettingImpl(graphics::RT7Core&, graphics::EffectManager&, EnumParticleQualityLevel)
    void ParticleQuality::ApplySettingImpl(undefined8 param_2_00, EffectManager* param_2) {
        int iVar1;

        iVar1 = GetValue();
        *(undefined4*)PTR_m_particleCountMultiplier_100ee69d8 = *(undefined4*)(&DAT_100d43120 + (ulong)(0 < iVar1) * 4);
        iVar1 = GetValue();
        param_2->EnableEffect(105, 2 < iVar1);
        iVar1 = GetValue();
        param_2->EnableEffect(104, 1 < iVar1);
    }

} // namespace jag::game::option
