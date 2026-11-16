// libs/game/runetek5/clientoptions/options/ClientOptions_AmbientOcclusion.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.game.runetek5

#include "ClientOptions_AmbientOcclusion.h"

namespace jag::game::option {
    // 0x1006039e0, 176 bytes, base-object constructor, placed by class name and debug map
    // AmbientOcclusion::AmbientOcclusion(graphics::RT7Core&, Settings&, char const*)
    void AmbientOcclusion::AmbientOcclusion(RT7Core* param_1, Settings* param_2, char* param_3) {
        int iVar2;
        undefined8 in_RAX;
        EffectManager* pEVar3;
        SunlightDirectLighting* this_00;
        undefined1 local_38[8];

        iVar2 = 0;
        local_38 = (undefined1[8])in_RAX;
        new (local_38) oldscape::sidebars::SideBarData(0, 2);
        new (this) Option<graphics::SSAOPass::Mode>(param_1, param_2, param_3, local_38);
        field_0 = &PTR__AmbientOcclusion_100f0a788;
        pEVar3 = (EffectManager*)param_1->GetEffectManager();
        this_00 = graphics::EffectManager::GetEffect<graphics::SunlightDirectLighting>(pEVar3, 110);
        if ((*(code*)this_00->field_0[5])() != '\0') {
            iVar2 = this_00->GetHighestSupporedMode();
        }
        (field_28, iVar2)->SetZ();
    }

    // 0x100603b20, 16 bytes, complete-object constructor, placed by class name and debug map
    // AmbientOcclusion::AmbientOcclusion(graphics::RT7Core&, Settings&, char const*): jumps straight to the base-object constructor

    // 0x100603b30, 64 bytes, placed by class name and debug map
    // AmbientOcclusion::ApplySettingImpl(graphics::RT7Core&, graphics::EffectManager&, graphics::SSAOPass::Mode)
    void AmbientOcclusion::ApplySettingImpl(undefined8 param_2_00, EffectManager* param_2) {
        int iVar1;

        iVar1 = GetValue();
        param_2->EnableEffect(110, iVar1 != 0);
        graphics::SSAOPass::m_SSAOMode = field_24;
    }

    // 0x100603b70, 32 bytes, placed by class name and debug map
    // AmbientOcclusion::IsModifiable(graphics::RT7Core const*) const
    bool AmbientOcclusion::IsModifiable(RT7Core* param_1) {
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_00;
        long lVar1;

        this_00 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)param_1->GetGBufferRT();
        lVar1 = eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(this_00);
        return lVar1 != 0;
    }

    // 0x100603b90, 128 bytes, placed by class name and debug map
    // AmbientOcclusion::DetermineBestSetting(perf::PerfModuleReporter const&) const
    char AmbientOcclusion::DetermineBestSetting(PerfModuleReporter* param_1) {
        int iVar1;
        int* piVar2;
        undefined8 uVar3;
        undefined8 local_28;
        undefined8 uStack_20;

        local_28 = 1120986464512;
        uStack_20 = 1116691497219;
        piVar2 = (int*)local_28.data();
        iVar1 = param_1->GetSummedResults(piVar2, 4);
        uVar3 = logger::default_logger();
        logger::Logger::Log(uVar3, 0, 7,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                            "clientoptions/options/ClientOptions_AmbientOcclusion.cpp",
                            48, "AmbientOcclusion::DetermineBestSetting Result: %d", iVar1);
        return (2000 < iVar1) * '\x02';
    }

} // namespace jag::game::option
