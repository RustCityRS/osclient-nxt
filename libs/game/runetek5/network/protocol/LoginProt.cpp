// libs/game/runetek5/network/protocol/LoginProt.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.runetek5

#include "LoginProt.h"

namespace jag::oldscape::shared {
    // 0x100d402e0
    int32_t LoginProt::PROPS[12] = {14, 0, 15, 4, 16, -2, 18, -2, 19, -2, 27, 0};

    // 0x1004a62d0
    void ___cxx_global_var_init_280(void) {
        hash<int> local_20;
        equal_to<int> local_18;

        new ((fixed_hash_map<int, jag::LoginProt const*, 12ul, 13ul, true, eastl::hash<int>, eastl::equal_to<int>,
                             false>*)&jag::LoginProt::m_typeLookup)
            eastl::fixed_hash_map<int, jag::LoginProt const*, 12ul, 13ul, true, eastl::hash<int>, eastl::equal_to<int>,
                                  false>(local_20, local_18);
        ___cxa_atexit(PTR__fixed_hash_map_100ee6cf8, &jag::LoginProt::m_typeLookup, 4294967296);
    }

} // namespace jag::oldscape::shared
