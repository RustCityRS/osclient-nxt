// libs/game/runetek5/clientoptions/options/ClientOptions_VolumetricLighting.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.game.runetek5

#include "ClientOptions_VolumetricLighting.h"

namespace jag::game::option {
    // 0x100029ea0: the linker folded this into oldscape::InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long), which has identical code
    VolumetricLighting::GetDefault();

    // 0x1005f8390, 160 bytes, base-object constructor, placed by class name and debug map
    // VolumetricLighting::VolumetricLighting(graphics::RT7Core&, Settings&, char const*)
    void VolumetricLighting::VolumetricLighting(RT7Core* param_1, Settings* param_2, char* param_3) {
        EffectManager* pEVar2;
        SunlightDirectLighting* pSVar3;
        undefined1 local_30[8];

        new (local_30) oldscape::sidebars::SideBarData(0, 4);
        new (this) Option<EnumVolumetricLighting>(param_1, param_2, param_3, local_30);
        field_0 = &PTR__VolumetricLighting_100f097a0;
        pEVar2 = (EffectManager*)param_1->GetEffectManager();
        pSVar3 = graphics::EffectManager::GetEffect<graphics::SunlightDirectLighting>(pEVar2);
        if ((*(code*)pSVar3->field_0[5])(pSVar3) == '\0') {
            (field_28, 0)->SetZ();
        }
    }

    // 0x1005f8520, 16 bytes, complete-object constructor, placed by class name and debug map
    // VolumetricLighting::VolumetricLighting(graphics::RT7Core&, Settings&, char const*): jumps straight to the base-object constructor

    // 0x1005f8530, 112 bytes, placed by class name and debug map
    // VolumetricLighting::ApplySettingImpl(graphics::RT7Core&, graphics::EffectManager&, EnumVolumetricLighting)
    void VolumetricLighting::ApplySettingImpl(undefined8 param_2_00, EffectManager* param_2) {
        int iVar1;
        SunlightDirectLighting* pSVar2;
        uint uVar3;
        uint uVar4;

        iVar1 = GetValue();
        uVar4 = iVar1 - 1;
        param_2->EnableEffect(50, iVar1 != 0);
        pSVar2 = graphics::EffectManager::GetEffect<graphics::SunlightDirectLighting>(param_2, 50);
        uVar3 = 4294967295;
        if (uVar4 < 4) {
            *(undefined4*)&pSVar2->field_32 = *(undefined4*)(&DAT_100d43110 + (long)(int)uVar4 * 4);
            uVar3 = uVar4;
        }
        param_2->SetEffectQuality(50, uVar3);
    }

    // 0x1005f85a0, 160 bytes, placed by class name and debug map
    // VolumetricLighting::DetermineBestSetting(perf::PerfModuleReporter const&) const
    undefined1 VolumetricLighting::DetermineBestSetting(PerfModuleReporter* param_1) {
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
                            "clientoptions/options/ClientOptions_VolumetricLighting.cpp",
                            80, "VolumetricLighting::DetermineBestSetting Result: %d", iVar2);
        uVar1 = 4;
        if (((iVar2 < 2001) && (uVar1 = 3, iVar2 < 1001)) && (uVar1 = 2, iVar2 < 801)) {
            uVar1 = 500 < iVar2;
        }
        return uVar1;
    }

    // 0x1005fa540: the linker folded this into Option<EnumVolumetricLighting>::~Option(), which has identical code
    VolumetricLighting::~VolumetricLighting();

} // namespace jag::game::option
