// libs/game/runetek5/clientoptions/options/ClientOptions_GameRenderScale.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.game.runetek5

#include "ClientOptions_GameRenderScale.h"

namespace jag::game::option {
    // 0x100306e40: the linker folded this into eastl::fixed_vector<shared_ptr<oldscape::dash3d::Sprite>, 100ul, true, eastl::allocator>::max_size() const, which has identical code
    GameRenderScale::GetDefault();

    // 0x1005ffa80, 96 bytes, base-object constructor, placed by class name and debug map
    // GameRenderScale::GameRenderScale(graphics::RT7Core&, Settings&, char const*)
    void GameRenderScale::GameRenderScale(RT7Core* param_1, Settings* param_2, char* param_3) {
        undefined1 local_30[8];

        new (local_30) oldscape::sidebars::SideBarData(30, 200);
        new (this) Option<unsigned int>(param_1, param_2, param_3, local_30);
        field_0 = &PTR__GameRenderScale_100f0a050;
    }

    // 0x1005ffb70, 16 bytes, complete-object constructor, placed by class name and debug map
    // GameRenderScale::GameRenderScale(graphics::RT7Core&, Settings&, char const*): jumps straight to the base-object constructor

    // 0x1005ffb80, 64 bytes, placed by class name and debug map
    // GameRenderScale::ApplySettingImpl(graphics::RT7Core&, graphics::EffectManager&, unsigned int)
    void GameRenderScale::ApplySettingImpl(RT7Core* param_1, EffectManager* param_2, uint param_3) {
        uint uVar1;
        ScaleManager* this_00;

        this_00 = (ScaleManager*)param_1->GetScaleManager();
        uVar1 = GetValue();
        this_00->SetGameScale((float)uVar1 * 0.01);
    }

    // 0x100609190: the linker folded this into InterfaceScale::~InterfaceScale(), which has identical code
    GameRenderScale::~GameRenderScale();

    // 0x100611170: the linker folded this into InterfaceScale::~InterfaceScale(), which has identical code
    GameRenderScale::~GameRenderScale();

} // namespace jag::game::option
