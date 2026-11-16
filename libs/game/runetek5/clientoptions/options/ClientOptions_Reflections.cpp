// libs/game/runetek5/clientoptions/options/ClientOptions_Reflections.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.game.runetek5

#include "ClientOptions_Reflections.h"

namespace jag::game::option {
    // 0x100269960: the linker folded this into oldscape::rs2lib::social::ClanChannelDelta::AddUser::GetID() const, which has identical code
    Reflections::GetDefault();

    // 0x1005fd930, 208 bytes, base-object constructor, placed by class name and debug map
    // Reflections::Reflections(graphics::RT7Core&, Settings&, char const*)
    void Reflections::Reflections(RT7Core* param_1, Settings* param_2, char* param_3) {
        char cVar1;
        EffectManager* pEVar2;
        SunlightDirectLighting* this_00;
        OcclusionManager* this_01;
        long lVar3;
        undefined1 local_30[8];

        new (local_30) oldscape::sidebars::SideBarData(0, 3);
        new (this) Option<graphics::GraphicsQuality>(param_1, param_2, param_3, local_30);
        field_0 = &PTR__Reflections_100f09db0;
        pEVar2 = (EffectManager*)param_1->GetEffectManager();
        this_00 = graphics::EffectManager::GetEffect<graphics::SunlightDirectLighting>(pEVar2);
        cVar1 = (*(code*)this_00->field_0[5])();
        if (cVar1 == '\0') {
            this_00 = (SunlightDirectLighting*)field_28;
            this_00->SetZ(2);
        }
        this_01 = (OcclusionManager*)this_00->Instance();
        lVar3 = this_01->GetOrigin();
        if ((*(char*)(lVar3 + 145) == '\0') || (cVar1 = this_01->GetGPUCullingSupported(), cVar1 == '\0')) {
            (field_28, 0)->SetZ();
            return;
        }
    }

    // 0x1005fda00, 16 bytes, complete-object constructor, placed by class name and debug map
    // Reflections::Reflections(graphics::RT7Core&, Settings&, char const*): jumps straight to the base-object constructor

    // 0x1005fda10, 896 bytes, placed by class name and debug map
    // Reflections::ApplySettingImpl(graphics::RT7Core&, graphics::EffectManager&, graphics::GraphicsQuality)
    void Reflections::ApplySettingImpl(RT7Core* param_1, EffectManager* param_2) {
        undefined1 uVar1;
        undefined4 uVar2;
        EffectManager* pEVar3;
        SunlightDirectLighting* pSVar4;
        undefined8 uVar5;
        undefined8 uVar6;

        pEVar3 = (EffectManager*)param_1->GetEffectManager();
        pSVar4 = graphics::EffectManager::GetEffect<graphics::SunlightDirectLighting>(pEVar3, 108);
        uVar1 = (*(code*)pSVar4->field_0[5])(pSVar4);
        uVar2 = GetValue();
        switch (uVar2) {
        case 0:
            param_2->DisableEffect(107);
            param_2->DisableEffect(108);
            param_2->DisableEffect(44);
            param_2->DisableEffect(100);
            param_2->DisableEffect(101);
            param_2->SetEffectQuality(107, 4294967295);
            param_2->SetEffectQuality(44, 4294967295);
            param_2->EnableEffect(99, 1);
            param_2->SetEffectQuality(99, 0);
            param_2->EnableEffect(102, 1);
            uVar6 = 102;
            uVar5 = 0;
            break;
        case 1:
            param_2->EnableEffect(108, uVar1);
            param_2->DisableEffect(44);
            param_2->EnableEffect(100, 1);
            param_2->EnableEffect(101, 1);
            param_2->SetEffectQuality(44, 4294967295);
            param_2->EnableEffect(99, 1);
            param_2->SetEffectQuality(99, 1);
            param_2->EnableEffect(102, 1);
            param_2->SetEffectQuality(102, 1);
            param_2->EnableEffect(107, 1);
            uVar6 = 107;
            uVar5 = 1;
            break;
        case 2:
            param_2->EnableEffect(107, 1);
            param_2->EnableEffect(108, uVar1);
            param_2->EnableEffect(100, 1);
            param_2->EnableEffect(101, 1);
            param_2->EnableEffect(99, 1);
            param_2->SetEffectQuality(99, 2);
            param_2->EnableEffect(102, 1);
            param_2->SetEffectQuality(102, 2);
            param_2->SetEffectQuality(44, 4294967295);
            param_2->EnableEffect(44, 1);
            param_2->SetEffectQuality(107, 2);
            uVar6 = 44;
            uVar5 = 2;
            break;
        case 3:
            param_2->EnableEffect(107, 1);
            param_2->EnableEffect(108, uVar1);
            param_2->EnableEffect(100, 1);
            param_2->EnableEffect(101, 1);
            param_2->EnableEffect(99, 1);
            param_2->SetEffectQuality(99, 3);
            param_2->EnableEffect(102, 1);
            param_2->SetEffectQuality(102, 3);
            param_2->EnableEffect(44, 1);
            param_2->SetEffectQuality(107, 3);
            uVar6 = 44;
            uVar5 = 3;
            break;
        default:
            goto switchD_1005fda62_default;
        }
        param_2->SetEffectQuality(uVar6, uVar5);
    switchD_1005fda62_default:
    }

    // 0x1005fdd90, 144 bytes, placed by class name and debug map
    // Reflections::DetermineBestSetting(perf::PerfModuleReporter const&) const
    undefined1 Reflections::DetermineBestSetting(PerfModuleReporter* param_1) {
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
                            "clientoptions/options/ClientOptions_Reflections.cpp",
                            155, "Reflections::DetermineBestSetting Result: %d", iVar2);
        uVar1 = 3;
        if ((iVar2 < 651) && (uVar1 = 2, iVar2 < 401)) {
            uVar1 = 110 < iVar2;
        }
        return uVar1;
    }

    // 0x100609150: the linker folded this into CustomPlayerModelCount::~CustomPlayerModelCount(), which has identical code
    Reflections::~Reflections();

    // 0x100610f30: the linker folded this into CustomPlayerModelCount::~CustomPlayerModelCount(), which has identical code
    Reflections::~Reflections();

} // namespace jag::game::option
