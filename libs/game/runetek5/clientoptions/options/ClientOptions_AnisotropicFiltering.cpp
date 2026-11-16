// libs/game/runetek5/clientoptions/options/ClientOptions_AnisotropicFiltering.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.game.runetek5

#include "ClientOptions_AnisotropicFiltering.h"

namespace jag::game::option {
    // 0x100029ea0: the linker folded this into oldscape::InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long), which has identical code
    AnisotropicFiltering::GetDefault();

    // 0x100603c20, 160 bytes, base-object constructor, placed by class name and debug map
    // AnisotropicFiltering::AnisotropicFiltering(graphics::RT7Core&, Settings&, char const*)
    void AnisotropicFiltering::AnisotropicFiltering(RT7Core* param_1, Settings* param_2, char* param_3) {
        MapArea* this_00;
        long lVar1;
        undefined1 local_30[8];

        new (local_30) oldscape::sidebars::SideBarData(0, 4);
        new (this) Option<EnumAnisotropicFiltering>(param_1, param_2, param_3, local_30);
        field_0 = &PTR__AnisotropicFiltering_100f0a830;
        this_00 = (MapArea*)((AnisotropicFiltering*)this)->Instance();
        lVar1 = this_00->GetOrigin();
        if ((*(char*)(lVar1 + 166) == '\0') || (*(char*)(lVar1 + 177) == '\0')) {
            (field_28, 0)->SetZ();
        }
    }

    // 0x100603d50, 16 bytes, complete-object constructor, placed by class name and debug map
    // AnisotropicFiltering::AnisotropicFiltering(graphics::RT7Core&, Settings&, char const*): jumps straight to the base-object constructor

    // 0x100603d60, 112 bytes, placed by class name and debug map
    // AnisotropicFiltering::ApplySettingImpl(graphics::RT7Core&, graphics::EffectManager&, EnumAnisotropicFiltering)
    void AnisotropicFiltering::ApplySettingImpl(RT7Core* param_1) {
        BuiltinStates* this_00;
        TextureManager* pTVar1;
        TextureAtlasManager* pTVar2;
        float fVar3;

        this_00 = (BuiltinStates*)Instance();
        fVar3 = (float)GetAnisotropyValue(this);
        this_00->SetAnisotropy(fVar3);
        pTVar1 = (TextureManager*)param_1->GetTextureManager();
        pTVar2 = (TextureAtlasManager*)pTVar1->GetTextureAtlasManager();
        pTVar2->DestroyRenderingResources();
        pTVar1 = (TextureManager*)param_1->GetTextureManager();
        pTVar2 = (TextureAtlasManager*)pTVar1->GetTextureAtlasManager();
        pTVar2->CreateRenderingResources();
    }

    // 0x100603dd0, 48 bytes, placed by class name and debug map
    // AnisotropicFiltering::GetAnisotropyValue() const
    undefined4 AnisotropicFiltering::GetAnisotropyValue() {
        int iVar1;

        iVar1 = GetValue();
        if (iVar1 - 1U < 4) {
            return *(undefined4*)(&DAT_100d43160 + (long)(int)(iVar1 - 1U) * 4);
        }
        return 1065353216;
    }

    // 0x100603e00, 144 bytes, placed by class name and debug map
    // AnisotropicFiltering::DetermineBestSetting(perf::PerfModuleReporter const&) const
    undefined1 AnisotropicFiltering::DetermineBestSetting(PerfModuleReporter* param_1) {
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
                            "clientoptions/options/ClientOptions_AnisotropicFiltering.cpp",
                            53, "AnisotropicFiltering::DetermineBestSetting Result: %d", iVar2);
        uVar1 = 3;
        if ((iVar2 < 1001) && (uVar1 = 2, iVar2 < 651)) {
            uVar1 = 300 < iVar2;
        }
        return uVar1;
    }

} // namespace jag::game::option
