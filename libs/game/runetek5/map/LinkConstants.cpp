// libs/game/runetek5/map/LinkConstants.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.runetek5

namespace jag::game {
    class LinkConstants {
    public:
        bool IsAffectedByMaxRenderLevel(int arg1, int arg2, int arg3);
    };

    // 0x1004ac5e0
    bool LinkConstants::IsAffectedByMaxRenderLevel(int arg1, int arg2, int arg3) {
        if (arg2 == -1) {
            return false;
        }
        return arg3 < arg1 && arg3 <= arg2;
    }

} // namespace jag::game
