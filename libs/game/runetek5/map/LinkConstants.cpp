// libs/game/runetek5/map/LinkConstants.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.game.runetek5

namespace jag::game {
    class LinkConstants {
    public:
        bool IsAffectedByMaxRenderLevel(int, int, int);
    };

    // 0x1004ac5e0, 32 bytes, placed by class name and debug map
    // LinkConstants::IsAffectedByMaxRenderLevel(int, int, int)
    bool LinkConstants::IsAffectedByMaxRenderLevel(int param_1, int param_2, int param_3) {
        if (param_2 == -1) {
            return false;
        }
        return param_3 < param_1 && param_3 <= param_2;
    }

} // namespace jag::game
