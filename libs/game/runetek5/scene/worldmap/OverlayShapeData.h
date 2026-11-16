// libs/game/runetek5/scene/worldmap/OverlayShapeData.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.game.runetek5

namespace jag::game {
    class OverlayShapeData {
    public:
        OverlayShapeData();
        void Generate();
        void GetShapeData(unsigned int arg1, unsigned int arg2, unsigned int arg3) const;
        ~OverlayShapeData();

        uint8_t _unknown_0[1];
    };

    // 0x1003d1c30
    OverlayShapeData::~OverlayShapeData() {}

} // namespace jag::game

// 0x1003cbc70
void ceil(float arg1) {
    _ceilf();
}
