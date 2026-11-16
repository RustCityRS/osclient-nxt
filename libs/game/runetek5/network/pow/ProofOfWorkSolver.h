// libs/game/runetek5/network/pow/ProofOfWorkSolver.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

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

        // data members, from how the methods use this: 8 bytes
        undefined* field_0; // offset 0, vtable pointer
    };

    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    ProofOfWorkSolver::~ProofOfWorkSolver();

    // 0x1004a13b0, 32 bytes, base-object constructor, inline, placed by class name and debug map
    // ProofOfWorkSolver::ProofOfWorkSolver()
    void ProofOfWorkSolver::ProofOfWorkSolver() {
        field_0 = PTR_vtable_100ee7fb8 + 16;
    }

    // 0x100c92b50: the linker folded this into InlineFatalBreak(), which has identical code
    ProofOfWorkSolver::~ProofOfWorkSolver();

    // 0x100c92b50: the linker folded this into InlineFatalBreak(), which has identical code
    ProofOfWorkSolver::~ProofOfWorkSolver();

} // namespace jag::game
