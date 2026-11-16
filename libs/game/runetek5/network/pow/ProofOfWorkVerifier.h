// libs/game/runetek5/network/pow/ProofOfWorkVerifier.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::game {
    class ProofOfWorkVerifier {
    public:
        ProofOfWorkVerifier();

        // data members, from how the methods use this: 8 bytes
        undefined* field_0; // offset 0, vtable pointer
    };

    // 0x1004a0a10, 32 bytes, base-object constructor, inline, placed by class name and debug map
    // ProofOfWorkVerifier::ProofOfWorkVerifier()
    void ProofOfWorkVerifier::ProofOfWorkVerifier() {
        field_0 = PTR_vtable_100ee7fe0 + 16;
    }

} // namespace jag::game
