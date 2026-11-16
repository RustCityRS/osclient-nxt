// libs/game/runetek5/player/PlayerModelModelSet.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.runetek5

#include "PlayerModelModelSet.h"

namespace jag::game {
    // 0x1039b5058, set at startup by ___cxx_global_var_init.19
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> PlayerModelModelSet::NullPlayerModelSet =
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();

    // 0x100009ca0: PlayerModelModelSet::GetModel() has the same machine code as eastl::compressed_pair_imp<eastl::string::Layout, eastl::allocator, 0>::first()

    // 0x100497cf0
    PlayerModelModelSet::PlayerModelModelSet(const BuildRequest<graphics::Model, BuildModelMain>& buildRequest)
        : MakeSharedPool<PlayerModelModelSet, 256>(), BuildRequest<graphics::Model, BuildModelMain>(buildRequest) {}

} // namespace jag::game
