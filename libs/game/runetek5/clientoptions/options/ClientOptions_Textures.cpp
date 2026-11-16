// libs/game/runetek5/clientoptions/options/ClientOptions_Textures.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.game.runetek5

#include "ClientOptions_Textures.h"

namespace jag::game::option {
    // 0x1005f7cf0, 224 bytes, base-object constructor, placed by class name and debug map
    // Textures::Textures(graphics::RT7Core&, Settings&, char const*, GroundBlending*)
    void Textures::Textures(RT7Core* param_1, Settings* param_2, char* param_3, GroundBlending* param_4) {
        char cVar1;
        undefined4 uVar2;
        MapArea* this_00;
        RenderDeviceCaps* this_01;
        RenderDevice* this_02;
        SideBarData local_40;
        int local_34;

        local_34 = 0;
        new (&local_40) oldscape::sidebars::SideBarData(0, 2);
        new (this) Option<EnumTextureMode>(param_1, param_2, param_3, local_40._0_8_);
        field_0 = &PTR__Textures_100f09650;
        field_200 = param_4;
        this_00 = (MapArea*)((Textures*)this)->Instance();
        this_01 = (RenderDeviceCaps*)this_00->GetOrigin();
        if (this_01->field_177 != false || this_01->field_174 != false) {
            cVar1 = this_01->GetCompressedTextures();
            if (cVar1 == '\0') {
                return;
            }
            this_02 = (RenderDevice*)this_01->Instance();
            uVar2 = this_02->GetGpuMemoryProfile();
            cVar1 = render::operator<(uVar2, 3);
            local_34 = 1;
            if (cVar1 == '\0') {
                return;
            }
        }
        (field_28, local_34)->SetZ();
    }

    // 0x1005f7ec0, 16 bytes, complete-object constructor, placed by class name
    // Textures::Textures(graphics::RT7Core&, Settings&, char const*, GroundBlending*): jumps straight to the base-object constructor

    // 0x1005f7ed0, 384 bytes, placed by class name
    // Textures::ApplySettingImpl(graphics::RT7Core&, graphics::EffectManager&, EnumTextureMode)
    void Textures::ApplySettingImpl(RT7Core* param_1, EffectManager* param_2) {
        int iVar1;
        SunlightDirectLighting* this_00;
        ViewportMapManager* pVVar2;
        TextureManager* this_01;
        TextureAtlasManager* this_02;
        undefined8 uVar3;
        uint uVar4;
        undefined8 uVar5;

        this_00 = graphics::EffectManager::GetEffect<graphics::SunlightDirectLighting>(param_2, 54);
        pVVar2 = (ViewportMapManager*)this_00->GetDefaultValue();
        iVar1 = GetValue();
        if (iVar1 == 2) {
            param_2->EnableEffect(27, 1);
            param_2->DisableEffect(68);
            uVar4 = 128;
            uVar5 = 2;
            uVar3 = 2;
        } else if (iVar1 == 1) {
            uVar5 = 1;
            param_2->EnableEffect(27, 1);
            param_2->EnableEffect(68, 1);
            uVar4 = 128;
            uVar3 = 1;
        } else {
            if (iVar1 != 0)
                goto LAB_1005f8009;
            param_2->DisableEffect(27);
            uVar3 = 1;
            param_2->EnableEffect(68, 1);
            uVar5 = 0;
            uVar4 = 0;
        }
        graphics::TextureAtlasManager::SetTargetTextureMode(uVar5);
        pVVar2->SetTextureMode(uVar3);
        this_01 = (TextureManager*)param_1->GetTextureManager();
        this_02 = (TextureAtlasManager*)this_01->GetTextureAtlasManager();
        this_02->SetNumLoadingTexturesHeavyThreshold(uVar4);
    LAB_1005f8009:
        param_2->DisableEffect(69);
        iVar1 = GetValue();
        if (iVar1 != 0) {
            (field_200, 1, param_1, param_2, 0)->SetValue();
        }
    }

    // 0x1005f8180, 128 bytes, placed by class name
    // Textures::DetermineBestSetting(perf::PerfModuleReporter const&) const
    bool Textures::DetermineBestSetting(PerfModuleReporter* param_1) {
        int iVar1;
        int* piVar2;
        undefined8 uVar3;
        undefined8 local_18;

        local_18 = 1116691497221;
        piVar2 = (int*)local_18.data();
        iVar1 = param_1->GetSummedResults(piVar2, 2);
        uVar3 = logger::default_logger();
        logger::Logger::Log(uVar3, 0, 7,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                            "clientoptions/options/ClientOptions_Textures.cpp",
                            121, "Textures::DetermineBestSetting Result: %d", iVar1);
        return 99 < iVar1;
    }

    // 0x1005fa470: the linker folded this into Option<EnumTextureMode>::~Option(), which has identical code
    Textures::~Textures();

} // namespace jag::game::option
