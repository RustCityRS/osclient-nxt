// libs/game/runetek5/clientoptions/options/ClientOptions_Textures.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.runetek5

#include "ClientOptions_Textures.h"

namespace jag::game::option {
    // 0x1005f7cf0
    Textures::Textures(graphics::RT7Core& rt7Core, Settings& settings, const char* str,
                       GroundBlending* groundBlending) {
        bool cVar1;
        GpuMemoryProfile gpuMemoryProfile1;
        Range<EnumTextureMode>* local_40;

        int local_34 = 0;
        new (&local_40) oldscape::sidebars::SideBarData(0, 2);
        new (this) Option<EnumTextureMode>(rt7Core, settings, str, local_40);
        field_200 = groundBlending;
        auto this_00 = Instance();
        auto this_01 = this_00->GetOrigin();
        if (this_01->field_177 != false || this_01->field_174 != false) {
            cVar1 = this_01->GetCompressedTextures();
            if (!cVar1) {
                return;
            }
            gpuMemoryProfile1 = ((RenderDevice*)this_01->Instance())->GetGpuMemoryProfile();
            cVar1 = render::operator<(gpuMemoryProfile1, 3);
            local_34 = 1;
            if (!cVar1) {
                return;
            }
        }
        field_28->SetZ(local_34);
    }

    // 0x1005f7ed0
    void Textures::ApplySettingImpl(graphics::RT7Core& rt7Core, graphics::EffectManager& effectManager,
                                    EnumTextureMode enumTextureMode) {
        TextureMode textureMode;
        unsigned int arg1;
        TextureMode textureMode_00;

        auto this_00 = effectManager.GetEffect<graphics::SunlightDirectLighting>(54);
        auto this_01 = this_00->GetDefaultValue();
        int iVar1 = GetValue();
        if (iVar1 == 2) {
            effectManager.EnableEffect(27, true);
            effectManager.DisableEffect(68);
            arg1 = 128;
            textureMode_00 = 2;
            textureMode = 2;
        } else if (iVar1 == 1) {
            textureMode_00 = 1;
            effectManager.EnableEffect(27, true);
            effectManager.EnableEffect(68, true);
            arg1 = 128;
            textureMode = 1;
        } else {
            if (iVar1 != 0)
                goto LAB_1005f8009;
            effectManager.DisableEffect(27);
            textureMode = 1;
            effectManager.EnableEffect(68, true);
            textureMode_00 = 0;
            arg1 = 0;
        }
        graphics::TextureAtlasManager::SetTargetTextureMode(textureMode_00);
        this_01->SetTextureMode(textureMode);
        auto this_02 = rt7Core.GetTextureManager();
        ((TextureAtlasManager*)this_02->GetTextureAtlasManager())->SetNumLoadingTexturesHeavyThreshold(arg1);
    LAB_1005f8009:
        effectManager.DisableEffect(69);
        iVar1 = GetValue();
        if (iVar1 != 0) {
            field_200->SetValue(1, rt7Core, effectManager, false);
        }
    }

    // 0x1005f8180
    bool Textures::DetermineBestSetting(const perf::PerfModuleReporter& perfModuleReporter) const {
        int iVar1 = perfModuleReporter.GetSummedResults((1116691497221).data(), 2);
        (logger::default_logger())
            ->Log(false, 7,
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/clientoptions/"
                  "options/ClientOptions_Textures.cpp",
                  121, "Textures::DetermineBestSetting Result: %d", iVar1);
        return 99 < iVar1;
    }

    // 0x1005fa470: Textures::~Textures() has the same machine code as Option<EnumTextureMode>::~Option()

} // namespace jag::game::option
