// libs/game/runetek5/network/pow/ProofOfWorkSolver.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.systemheap

namespace jag::game {
    class ProofOfWorkSolver {
    public:
        // virtual methods in vtable order
        virtual void __pure_slot_0() = 0;
        virtual void __pure_slot_1() = 0;
        virtual ~ProofOfWorkSolver();
        ProofOfWorkSolver();
    };

    // 0x100009e70: ProofOfWorkSolver::~ProofOfWorkSolver() has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

    // 0x1004a13b0
    ProofOfWorkSolver::ProofOfWorkSolver() {}

} // namespace jag::game
