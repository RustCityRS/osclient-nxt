// libs/game/runetek5/player/PlayerModelModelSet.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.game.runetek5

#include "PlayerModelModelSet.h"

namespace jag::game {
    // 0x1039b5058, 16 bytes, __common; set at startup by ___cxx_global_var_init.19
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> PlayerModelModelSet::NullPlayerModelSet;

    // 0x100009ca0: the linker folded this into eastl::compressed_pair_imp<eastl::string::Layout, eastl::allocator, 0>::first(), which has identical code
    PlayerModelModelSet::GetModel();

    // 0x100497cf0, 48 bytes, base-object constructor, placed by class name and debug map
    // PlayerModelModelSet::PlayerModelModelSet(BuildRequest<graphics::Model, BuildModelMain> const&)
    void PlayerModelModelSet::PlayerModelModelSet(BuildRequest* param_1) {
        new (this) MakeSharedPool<PlayerModelModelSet, 256>();
        new (this) BuildRequest<graphics::Model, BuildModelMain>(param_1);
    }

    // 0x100497d80, 16 bytes, complete-object constructor, placed by class name and debug map
    // PlayerModelModelSet::PlayerModelModelSet(BuildRequest<graphics::Model, BuildModelMain> const&): jumps straight to the base-object constructor

    // 0x10049ee10, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.19
    void ___cxx_global_var_init_19(undefined8 param_1, _func_decltype_nullptr* param_2) {
        new (&PlayerModelModelSet::NullPlayerModelSet)
            shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_2);
        ___cxa_atexit(PTR__shared_ptr_100ee5228, &PlayerModelModelSet::NullPlayerModelSet, 4294967296);
    }

} // namespace jag::game
