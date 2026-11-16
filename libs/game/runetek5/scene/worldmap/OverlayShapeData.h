// libs/game/runetek5/scene/worldmap/OverlayShapeData.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.game.runetek5

namespace jag::game {
    class OverlayShapeData {
    public:
        OverlayShapeData();
        void Generate();
        void GetShapeData(unsigned int, unsigned int, unsigned int) const;
        ~OverlayShapeData();

        // data members, from how the methods use this: 1 bytes
        char _unknown_0[1];
    };

    // 0x1003c6d30, 16 bytes, complete-object destructor, inline, placed by class name and debug map
    // OverlayShapeData::~OverlayShapeData(): jumps straight to the base-object destructor

    // 0x1003d1c30, 16 bytes, base-object destructor, inline, placed by class name
    // OverlayShapeData::~OverlayShapeData()
    void OverlayShapeData::~OverlayShapeData() {
        ~array();
    }

} // namespace jag::game

// 0x1003cbc70, 16 bytes, placed by debug map only (low confidence)
// ceil(float)
void ceil(float param_1) {
    _ceilf();
}
