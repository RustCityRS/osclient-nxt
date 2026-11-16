// libs/game/runetek5/network/protocol/LoginProt.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.game.runetek5

#include "LoginProt.h"

namespace jag::oldscape::shared {
    // 0x100d402e0, 48 bytes, __const
    LoginProt::PROPS = {14, 0, 15, 4, 16, -2, 18, -2, 19, -2, 27, 0};

    // 0x1004a62d0, 64 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.280
    void ___cxx_global_var_init_280() {
        hash local_20[8];
        equal_to local_18[8];

        new (&jag::LoginProt::m_typeLookup)
            eastl::fixed_hash_map<int, LoginProt_const*, 12ul, 13ul, true, eastl::hash<int>, eastl::equal_to<int>,
                                  false, eastl::allocator>(local_20, local_18);
        ___cxa_atexit(PTR__fixed_hash_map_100ee6cf8, &jag::LoginProt::m_typeLookup, 4294967296);
    }

} // namespace jag::oldscape::shared
