// libs/game/runetek5/clientoptions/options/ClientOptions_Bloom.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.game.runetek5

#include "ClientOptions_Bloom.h"

namespace jag::game::option {
    // 0x100269960: the linker folded this into oldscape::rs2lib::social::ClanChannelDelta::AddUser::GetID() const, which has identical code
    Bloom::GetDefault();

    // 0x1006044b0, 192 bytes, base-object constructor, placed by class name and debug map
    // Bloom::Bloom(graphics::RT7Core&, Settings&, char const*)
    void Bloom::Bloom(RT7Core* param_1, Settings* param_2, char* param_3) {
        undefined4 uVar2;
        MapArea* this_00;
        long lVar3;
        RenderDevice* this_01;
        undefined1 local_30[8];

        new (local_30) oldscape::sidebars::SideBarData(0, 3);
        new (this) Option<EnumBloom>(param_1, param_2, param_3, local_30);
        field_0 = &PTR__Bloom_100f0aa28;
        this_00 = (MapArea*)((Bloom*)this)->Instance();
        lVar3 = this_00->GetOrigin();
        if (((*(char*)(lVar3 + 159) != '\0') || (*(char*)(lVar3 + 158) != '\0')) || (*(char*)(lVar3 + 157) != '\0')) {
            this_01 = (RenderDevice*)this_00->Instance();
            uVar2 = this_01->GetGpuMemoryProfile();
            if (render::operator<(uVar2) == '\0') {
                return;
            }
        }
        (field_28, 0)->SetZ();
    }

    // 0x100604600, 16 bytes, complete-object constructor, placed by class name and debug map
    // Bloom::Bloom(graphics::RT7Core&, Settings&, char const*): jumps straight to the base-object constructor

    // 0x100604610, 96 bytes, placed by class name and debug map
    // Bloom::ApplySettingImpl(graphics::RT7Core&, graphics::EffectManager&, EnumBloom)
    void Bloom::ApplySettingImpl(RT7Core* param_1) {
        int iVar1;
        PostProcessController* this_00;
        long lVar2;

        this_00 = (PostProcessController*)param_1->GetPostProcessController();
        lVar2 = this_00->GetCurrentConfig();
        iVar1 = GetValue();
        *(bool*)(lVar2 + 468) = iVar1 != 0;
        iVar1 = GetValue();
        if (iVar1 - 1U < 3) {
            ((lVar2 + 208))->SetBloomQuality(iVar1 - 1U);
        }
    }

    // 0x100604670, 144 bytes, placed by class name and debug map
    // Bloom::DetermineBestSetting(perf::PerfModuleReporter const&) const
    undefined1 Bloom::DetermineBestSetting(PerfModuleReporter* param_1) {
        undefined1 uVar1;
        int iVar2;
        int* piVar3;
        undefined8 uVar4;
        undefined8 local_18;

        local_18 = 1120986464512;
        piVar3 = (int*)local_18.data();
        iVar2 = param_1->GetSummedResults(piVar3, 2);
        uVar4 = logger::default_logger();
        logger::Logger::Log(uVar4, 0, 7,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                            "clientoptions/options/ClientOptions_Bloom.cpp",
                            58, "Bloom::DetermineBestSetting Result: %d", iVar2);
        uVar1 = 3;
        if ((iVar2 < 751) && (uVar1 = 2, iVar2 < 201)) {
            uVar1 = 120 < iVar2;
        }
        return uVar1;
    }

} // namespace jag::game::option
