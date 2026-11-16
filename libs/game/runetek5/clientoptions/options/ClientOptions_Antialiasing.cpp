// libs/game/runetek5/clientoptions/options/ClientOptions_Antialiasing.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.game.runetek5

#include "ClientOptions_Antialiasing.h"

namespace jag::game::option {
    // 0x100603ea0, 192 bytes, base-object constructor, placed by debug map only (low confidence)
    // AntialiasingMode::AntialiasingMode(graphics::RT7Core&, Settings&, char const*, AntialiasingQuality*)
    void AntialiasingMode::AntialiasingMode(RT7Core* param_1, Settings* param_2, char* param_3,
                                            AntialiasingQuality* param_4) {
        undefined8 in_RAX;
        MapArea* this_00;
        long lVar1;
        int* piVar2;
        undefined1 local_38[8];

        local_38 = (undefined1[8])in_RAX;
        new (local_38) oldscape::sidebars::SideBarData(0, 3);
        new (this) Option<EnumAntialiasingMode>(param_1, param_2, param_3, local_38);
        field_0 = &PTR__AntialiasingMode_100f0a8d8;
        field_200 = param_4;
        this_00 = (MapArea*)((AntialiasingMode*)this)->Instance();
        lVar1 = this_00->GetOrigin();
        piVar2 = std::min<int>((int*)(lVar1 + 88), (int*)(lVar1 + 92));
        if ((*(char*)(lVar1 + 167) == '\0') || (*piVar2 < 2)) {
            (field_28, 1)->SetZ();
        }
    }

    // 0x100604000, 16 bytes, complete-object constructor, placed by debug map only (low confidence)
    // AntialiasingMode::AntialiasingMode(graphics::RT7Core&, Settings&, char const*, AntialiasingQuality*): jumps straight to the base-object constructor

    // 0x100604010, 336 bytes, placed by debug map only (low confidence)
    // AntialiasingMode::ApplySettingImpl(graphics::RT7Core&, graphics::EffectManager&, EnumAntialiasingMode)
    void AntialiasingMode::ApplySettingImpl(RT7Core* param_1, undefined8 param_2) {
        AntialiasingQuality* this_00;
        undefined4 uVar1;
        PostProcessController* this_01;
        long lVar2;
        MapArea* pMVar3;
        long lVar4;

        this_01 = (PostProcessController*)param_1->GetPostProcessController();
        lVar2 = this_01->GetCurrentConfig();
        param_1->DestroyRenderTargets();
        uVar1 = GetValue();
        switch (uVar1) {
        case 0:
            param_1->InitRenderTargets(1);
            *(undefined1*)(lVar2 + 528) = 0;
            break;
        case 1:
            *(undefined1*)(lVar2 + 528) = 1;
            param_1->InitRenderTargets(1);
            break;
        case 2:
            pMVar3 = (MapArea*)((AntialiasingMode*)this)->Instance();
            lVar4 = pMVar3->GetOrigin();
            if (*(char*)(lVar4 + 167) == '\0') {
                /* WARNING: Subroutine does not return */
                LogAssert("render::RenderDevice::Instance().GetDeviceCaps().m_MultisampleTextures",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                          "clientoptions/options/ClientOptions_Antialiasing.cpp",
                          57, (char*)0);
            }
            *(undefined1*)(lVar2 + 528) = 0;
            break;
        case 3:
            pMVar3 = (MapArea*)((AntialiasingMode*)this)->Instance();
            lVar4 = pMVar3->GetOrigin();
            if (*(char*)(lVar4 + 167) == '\0') {
                /* WARNING: Subroutine does not return */
                LogAssert("render::RenderDevice::Instance().GetDeviceCaps().m_MultisampleTextures",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                          "clientoptions/options/ClientOptions_Antialiasing.cpp",
                          66, (char*)0);
            }
            *(undefined1*)(lVar2 + 528) = 1;
        }
        this_00 = field_200;
        uVar1 = this_00->GetValue();
        this_00->ApplySetting(param_1, param_2, uVar1);
    }

    // 0x100604160, 128 bytes, placed by debug map only (low confidence)
    // AntialiasingMode::DetermineBestSetting(perf::PerfModuleReporter const&) const
    undefined1 AntialiasingMode::DetermineBestSetting(PerfModuleReporter* param_1) {
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
                            "clientoptions/options/ClientOptions_Antialiasing.cpp",
                            84, "AntialiasingMode::DetermineBestSetting Result: %d", iVar2);
        uVar1 = 2;
        if (iVar2 < 251) {
            uVar1 = 100 < iVar2;
        }
        return uVar1;
    }

    // 0x1006041e0, 160 bytes, base-object constructor, placed by debug map only (low confidence)
    // AntialiasingQuality::AntialiasingQuality(graphics::RT7Core&, Settings&, char const*, AntialiasingMode const*)
    void AntialiasingQuality::AntialiasingQuality(RT7Core* param_1, Settings* param_2, char* param_3,
                                                  AntialiasingMode* param_4) {
        undefined8 in_RAX;
        undefined1 local_38[8];

        local_38 = (undefined1[8])in_RAX;
        new (local_38) oldscape::sidebars::SideBarData(0, 3);
        new (this) Option<graphics::GraphicsQuality>(param_1, param_2, param_3, local_38);
        field_0 = &PTR__Reflections_100f0a980;
        field_200 = param_4;
        if (param_4 == (AntialiasingMode*)0) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_pAntialiasingMode != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                      "clientoptions/options/ClientOptions_Antialiasing.cpp",
                      123, (char*)0);
        }
    }

    // 0x100604280, 16 bytes, complete-object constructor, placed by neighbouring functions
    // AntialiasingQuality::AntialiasingQuality(graphics::RT7Core&, Settings&, char const*, AntialiasingMode const*): jumps straight to the base-object constructor

    // 0x100604290, 352 bytes, placed by debug map only (low confidence)
    // AntialiasingQuality::ApplySettingImpl(graphics::RT7Core&, graphics::EffectManager&, graphics::GraphicsQuality)
    void AntialiasingQuality::ApplySettingImpl(RT7Core* param_1) {
        int iVar2;
        uint uVar3;
        long lVar4;
        MapArea* this_00;
        int* piVar5;
        undefined8 uVar6;
        uint uVar7;
        int local_34[3];

        if (field_200 == (AntialiasingMode*)0) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_pAntialiasingMode != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                      "clientoptions/options/ClientOptions_Antialiasing.cpp",
                      130, (char*)0);
        }
        if (field_200 != (AntialiasingMode*)0) {
            iVar2 = field_200->GetValue();
            uVar3 = GetValue();
            uVar7 = iVar2 - 1;
            if ((uVar7 < 3) && ((uVar7 & 1) == 0)) {
                this = (AntialiasingQuality*)param_1->GetPostProcessController();
                lVar4 = GetCurrentConfig();
                *(uint*)(lVar4 + 532) = uVar3;
            }
            if ((6U >> ((byte)uVar7 & 7) & 1) != 0 && uVar7 < 3) {
                this_00 = (MapArea*)Instance();
                lVar4 = this_00->GetOrigin();
                piVar5 = std::min<int>((int*)(lVar4 + 88), (int*)(lVar4 + 92));
                local_34[2] = *piVar5;
                param_1->DestroyRenderTargets();
                if (uVar3 < 2) {
                    iVar2 = 2;
                } else {
                    if (uVar3 == 2) {
                        local_34[0] = 4;
                        piVar5 = local_34;
                    } else {
                        if (uVar3 != 3) {
                            return;
                        }
                        local_34[1] = 8;
                        piVar5 = local_34 + 1;
                    }
                    piVar5 = std::min<int>(piVar5, local_34 + 2);
                    iVar2 = *piVar5;
                }
                if (param_1->InitRenderTargets(iVar2) == '\0') {
                    param_1->InitRenderTargets(1);
                    uVar6 = logger::default_logger();
                    logger::Logger::Log(uVar6, 0, 3,
                                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/"
                                        "runetek5/clientoptions/options/ClientOptions_Antialiasing.cpp",
                                        200, "Unable to create MSAA render targets");
                }
            }
        }
    }

    // 0x1006043f0, 192 bytes, placed by debug map only (low confidence)
    // AntialiasingQuality::DetermineBestSetting(perf::PerfModuleReporter const&) const
    undefined1 AntialiasingQuality::DetermineBestSetting(PerfModuleReporter* param_1) {
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
                            "clientoptions/options/ClientOptions_Antialiasing.cpp",
                            212, "AntialiasingQuality::DetermineBestSetting Result: %d", iVar2);
        uVar1 = 3;
        if ((((iVar2 < 2001) && (uVar1 = 2, iVar2 < 801)) && (uVar1 = 1, iVar2 < 451)) &&
            (((uVar1 = 0, iVar2 < 251 && (uVar1 = 3, iVar2 < 221)) && (uVar1 = 2, iVar2 < 191)))) {
            uVar1 = 150 < iVar2;
        }
        return uVar1;
    }

} // namespace jag::game::option
