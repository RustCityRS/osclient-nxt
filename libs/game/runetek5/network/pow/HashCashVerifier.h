// libs/game/runetek5/network/pow/HashCashVerifier.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::game {
    class HashCashVerifier {
    public:
        // virtual methods in vtable order
        virtual VerifyAnswer(PacketT<Array<unsigned char, eastl::allocator>>&);
        HashCashVerifier(HashCashChallenge&);
        bool VerifyAnswer(int, char const*, long long);
        HashCashVerifier* GenerateHash(char const*, long long);
        int CountLeadingZeros(Array<signed char, eastl::allocator> const&);
        int CountLeadingZeros(signed char);

        // data members, from how the methods use this: 24 bytes
        undefined** field_0;        // offset 0, vtable pointer
        HashCashChallenge* field_8; // offset 8
        undefined8 field_16;        // offset 16
    };

    // 0x10049ff10, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // HashCashVerifier::HashCashVerifier(HashCashChallenge&): jumps straight to the base-object constructor

    // 0x1004a09e0, 48 bytes, base-object constructor, inline, placed by class name
    // HashCashVerifier::HashCashVerifier(HashCashChallenge&)
    void HashCashVerifier::HashCashVerifier(HashCashChallenge* param_1) {
        new (this) ProofOfWorkVerifier();
        field_0 = &PTR_VerifyAnswer_100f015e0;
        field_8 = param_1;
    }

} // namespace jag::game
