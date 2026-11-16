// libs/game/runetek5/network/pow/HashCashSolver.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::game {
    class HashCashSolver {
    public:
        // virtual methods in vtable order
        virtual void SolveChallenge(PacketT<Array<unsigned char>>& arg1, PacketT<Array<unsigned char>>& arg2);
        virtual auto SolveChallenge(PacketT<Array<unsigned char>>& arg1);
        virtual ~HashCashSolver();
        HashCashSolver();
    };

    // 0x1004a1390
    HashCashSolver::HashCashSolver() : ProofOfWorkSolver() {}

} // namespace jag::game
