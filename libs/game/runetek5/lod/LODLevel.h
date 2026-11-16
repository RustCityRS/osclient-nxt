// libs/game/runetek5/lod/LODLevel.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::game {
    // 0x1003d1f10
    OpObjValue::OpObjValue() {
        Dummy local_10;

        variant<OpObjValue::Dummy, 0, 0, 0, OpObjValue::Dummy, 6ul, 0>(local_10);
    }

    // 0x1003d1ff0
    OpObjValue::~OpObjValue() {
        Dummy local_18;

        operator=(&local_18);
    }

} // namespace jag::game
