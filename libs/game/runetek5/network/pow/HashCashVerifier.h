// libs/game/runetek5/network/pow/HashCashVerifier.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::game {
    class HashCashVerifier {
    public:
        // virtual methods in vtable order
        virtual uint32_t VerifyAnswer(PacketT<Array<unsigned char>>& arg1);
        HashCashVerifier(HashCashChallenge& hashCashChallenge);
        unsigned long VerifyAnswer(int arg1, const char* str, long long arg3);
        auto GenerateHash(const char* str, long long arg2);
        int CountLeadingZeros(const Array<signed char>& arg1);
        int CountLeadingZeros(signed char arg1);

    private:
        HashCashChallenge* field_8;
    };

    // 0x1004a09e0
    HashCashVerifier::HashCashVerifier(HashCashChallenge& hashCashChallenge)
        : ProofOfWorkVerifier(), field_8(hashCashChallenge) {}

} // namespace jag::game
