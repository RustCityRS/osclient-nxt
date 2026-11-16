// libs/game/runetek5/clientoptions/options/ClientOptions_Antialiasing.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.runetek5

#include "ClientOptions_Antialiasing.h"

namespace jag::game::option {
    // 0x100603ea0
    AntialiasingMode::AntialiasingMode(graphics::RT7Core& rt7Core, Settings& settings, const char* str,
                                       AntialiasingQuality* antialiasingQuality) {
        Range<EnumAntialiasingMode>* in_RAX;

        Range<EnumAntialiasingMode>* local_38 = in_RAX;
        new (&local_38) oldscape::sidebars::SideBarData(0, 3);
        new (this) Option<EnumAntialiasingMode>(rt7Core, settings, str, local_38);
        field_200 = antialiasingQuality;
        long lVar1 = ((MapArea*)Instance())->GetOrigin();
        auto piVar2 = std::min<int>(*((lVar1 + 88)), *((lVar1 + 92)));
        if ((*(char*)(lVar1 + 167) == '\0') || (*piVar2 < 2)) {
            field_28->SetZ(1);
        }
    }

    // 0x100604010
    void AntialiasingMode::ApplySettingImpl(graphics::RT7Core& rt7Core, graphics::EffectManager& effectManager,
                                            EnumAntialiasingMode enumAntialiasingMode) {
        MapArea* pMVar3;
        long lVar4;

        long lVar2 = rt7Core.GetPostProcessController()->GetCurrentConfig();
        rt7Core.DestroyRenderTargets();
        switch (GetValue()) {
        case 0:
            rt7Core.InitRenderTargets(1);
            *(uint8_t*)(lVar2 + 528) = 0;
            break;
        case 1:
            *(uint8_t*)(lVar2 + 528) = 1;
            rt7Core.InitRenderTargets(1);
            break;
        case 2:
            pMVar3 = (MapArea*)Instance();
            lVar4 = pMVar3->GetOrigin();
            if (*(char*)(lVar4 + 167) == '\0') {
                LogAssert("render::RenderDevice::Instance().GetDeviceCaps().m_MultisampleTextures",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                          "clientoptions/options/ClientOptions_Antialiasing.cpp",
                          57, nullptr);
            }
            *(uint8_t*)(lVar2 + 528) = 0;
            break;
        case 3:
            pMVar3 = (MapArea*)Instance();
            lVar4 = pMVar3->GetOrigin();
            if (*(char*)(lVar4 + 167) == '\0') {
                LogAssert("render::RenderDevice::Instance().GetDeviceCaps().m_MultisampleTextures",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                          "clientoptions/options/ClientOptions_Antialiasing.cpp",
                          66, nullptr);
            }
            *(uint8_t*)(lVar2 + 528) = 1;
        }
        AntialiasingQuality* this_00 = field_200;
        auto graphicsQuality = this_00->GetValue();
        this_00->ApplySetting(rt7Core, effectManager, graphicsQuality);
    }

    // 0x100604160
    uint8_t AntialiasingMode::DetermineBestSetting(const perf::PerfModuleReporter& perfModuleReporter) const {
        int iVar2 = perfModuleReporter.GetSummedResults((1120986464512).data(), 2);
        (logger::default_logger())
            ->Log(false, 7,
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/clientoptions/"
                  "options/ClientOptions_Antialiasing.cpp",
                  84, "AntialiasingMode::DetermineBestSetting Result: %d", iVar2);
        uint8_t uVar1 = 2;
        if (iVar2 < 251) {
            uVar1 = 100 < iVar2;
        }
        return uVar1;
    }

    // 0x1006041e0
    AntialiasingQuality::AntialiasingQuality(graphics::RT7Core& rt7Core, Settings& settings, const char* str,
                                             const AntialiasingMode* antialiasingMode) {
        Range<graphics::GraphicsQuality>* in_RAX;

        Range<graphics::GraphicsQuality>* local_38 = in_RAX;
        new (&local_38) oldscape::sidebars::SideBarData(0, 3);
        new (this) Option<graphics::GraphicsQuality>(rt7Core, settings, str, local_38);
        field_200 = antialiasingMode;
        if (antialiasingMode == nullptr) {
            LogAssert("m_pAntialiasingMode != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                      "clientoptions/options/ClientOptions_Antialiasing.cpp",
                      123, nullptr);
        }
    }

    // 0x100604290
    void AntialiasingQuality::ApplySettingImpl(graphics::RT7Core& rt7Core, graphics::EffectManager& effectManager,
                                               graphics::GraphicsQuality graphicsQuality) {
        int iVar2;
        unsigned int uVar3;
        long lVar4;
        int* piVar5;
        unsigned int uVar6;
        int local_34[3];

        if (field_200 == nullptr) {
            LogAssert("m_pAntialiasingMode != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                      "clientoptions/options/ClientOptions_Antialiasing.cpp",
                      130, nullptr);
        }
        if (field_200 != nullptr) {
            iVar2 = field_200->GetValue();
            uVar3 = GetValue();
            uVar6 = iVar2 - 1;
            if ((uVar6 < 3) && ((uVar6 & 1) == 0)) {
                this = (AntialiasingQuality*)rt7Core.GetPostProcessController();
                lVar4 = GetCurrentConfig();
                *(unsigned int*)(lVar4 + 532) = uVar3;
            }
            if ((6U >> ((uint8_t)uVar6 & 7) & 1) != 0 && uVar6 < 3) {
                lVar4 = ((MapArea*)Instance())->GetOrigin();
                piVar5 = std::min<int>(*((lVar4 + 88)), *((lVar4 + 92)));
                local_34[2] = *piVar5;
                rt7Core.DestroyRenderTargets();
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
                    piVar5 = std::min<int>(*piVar5, *(local_34 + 2));
                    iVar2 = *piVar5;
                }
                if (rt7Core.InitRenderTargets(iVar2) == '\0') {
                    rt7Core.InitRenderTargets(1);
                    (logger::default_logger())
                        ->Log(false, 3,
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                              "clientoptions/options/ClientOptions_Antialiasing.cpp",
                              200, "Unable to create MSAA render targets");
                }
            }
        }
    }

    // 0x1006043f0
    uint8_t AntialiasingQuality::DetermineBestSetting(const perf::PerfModuleReporter& perfModuleReporter) const {
        int iVar2 = perfModuleReporter.GetSummedResults((1120986464512).data(), 2);
        (logger::default_logger())
            ->Log(false, 7,
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/clientoptions/"
                  "options/ClientOptions_Antialiasing.cpp",
                  212, "AntialiasingQuality::DetermineBestSetting Result: %d", iVar2);
        uint8_t uVar1 = 3;
        if ((((iVar2 < 2001) && (uVar1 = 2, iVar2 < 801)) && (uVar1 = 1, iVar2 < 451)) &&
            (((uVar1 = 0, iVar2 < 251 && (uVar1 = 3, iVar2 < 221)) && (uVar1 = 2, iVar2 < 191)))) {
            uVar1 = 150 < iVar2;
        }
        return uVar1;
    }

} // namespace jag::game::option
