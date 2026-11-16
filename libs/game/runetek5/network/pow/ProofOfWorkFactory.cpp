// libs/game/runetek5/network/pow/ProofOfWorkFactory.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.runetek5

namespace jag::game {
    class ProofOfWorkFactory {
    public:
        auto GetProofOfWorkSolver(ProofOfWorkChallenge proofOfWorkChallenge);
    };

    // 0x1004a0190
    auto ProofOfWorkFactory::GetProofOfWorkSolver(ProofOfWorkChallenge proofOfWorkChallenge) {
        auto result;
        Logger* logger;
        void* arg1;
        ReturnValue local_20;

        if (proofOfWorkChallenge == 0) {
            local_20 = std::make_unique<HashCashSolver>();
            result.unique_ptr<HashCashSolver, std::default_delete<HashCashSolver>, void, void>(local_20);
        } else {
            logger = logger::default_logger();
            arg1 = nullptr;
            logger->Log(false, 2,
                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/network/"
                        "pow/ProofOfWorkFactory.cpp",
                        18, "Don\'t recognize proof of work challenge %i", proofOfWorkChallenge);
            result.unique_ptr<true, void>(arg1);
        }
        return result;
    }

} // namespace jag::game
