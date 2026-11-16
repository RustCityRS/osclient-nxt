// libs/game/runetek5/network/pow/HashCashSolver.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::game {
    class HashCashSolver {
    public:
        // virtual methods in vtable order
        virtual void SolveChallenge(PacketT<Array<unsigned char, eastl::allocator>>&,
                                    PacketT<Array<unsigned char, eastl::allocator>>&);
        virtual SolveChallenge(PacketT<Array<unsigned char, eastl::allocator>>&);
        virtual ~HashCashSolver();
        HashCashSolver();

        // data members, from how the methods use this: 8 bytes
        undefined** field_0; // offset 0, vtable pointer
    };

    // 0x1004a1370, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // HashCashSolver::HashCashSolver(): jumps straight to the base-object constructor

    // 0x1004a1390, 32 bytes, base-object constructor, inline, placed by class name and debug map
    // HashCashSolver::HashCashSolver()
    void HashCashSolver::HashCashSolver() {
        new (this) ProofOfWorkSolver();
        field_0 = &PTR_SolveChallenge_100f015f8;
    }

} // namespace jag::game
