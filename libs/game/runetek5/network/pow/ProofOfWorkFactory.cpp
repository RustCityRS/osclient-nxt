// libs/game/runetek5/network/pow/ProofOfWorkFactory.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.game.runetek5

namespace jag::game {
    class ProofOfWorkFactory {
    public:
        ProofOfWorkFactory* GetProofOfWorkSolver(ProofOfWorkChallenge);

        // data members, from how the methods use this: 1 bytes
        char _unknown_0[1];
    };

    // 0x1004a0190, 128 bytes, placed by class name and debug map
    // ProofOfWorkFactory::GetProofOfWorkSolver(ProofOfWorkChallenge)
    ProofOfWorkFactory* ProofOfWorkFactory::GetProofOfWorkSolver(int param_2) {
        undefined8 uVar1;
        unique_ptr local_20[8];

        if (param_2 == 0) {
            std::make_unique<HashCashSolver>();
            std::unique_ptr<ProofOfWorkSolver, std::default_delete<ProofOfWorkSolver>>::unique_ptr<
                HashCashSolver, std::default_delete<HashCashSolver>, void, void>(
                (unique_ptr<ProofOfWorkSolver, std::default_delete<ProofOfWorkSolver>>*)this, local_20);
            local_20->~unique_ptr();
        } else {
            uVar1 = logger::default_logger();
            logger::Logger::Log(uVar1, 0, 2,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                "network/pow/ProofOfWorkFactory.cpp",
                                18, "Don\'t recognize proof of work challenge %i", param_2);
            std::unique_ptr<ProofOfWorkSolver, std::default_delete<ProofOfWorkSolver>>::unique_ptr<true, void>(
                (_func_decltype_nullptr*)this);
        }
        return this;
    }

} // namespace jag::game
