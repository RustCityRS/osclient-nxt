// libs/graphics/runetek7/terrain/TerrainOverlayShape.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

#include "TerrainOverlayShape.h"

namespace jag::graphics {
    // 0x1007b1600
    TerrainOverlayShape::TerrainOverlayShape(TerrainOverlayShapeType terrainOverlayShapeType) {
        m_iD = (char)terrainOverlayShapeType;
        new (&field_16) eastl::vector<TerrainVertex>();
    }

    // 0x1007b1640
    TerrainOverlayShape::~TerrainOverlayShape() {
        field_16.~vector();
    }

    // 0x1007b4290
    void TerrainOverlayShape::GetShape(TerrainOverlayShapeType terrainOverlayShapeType) {
        if (11 < (uint8_t)terrainOverlayShapeType) {
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                            "terrain/TerrainOverlayShape.cpp",
                            111, "TerrainOverlayShape: Shape not implemented!");
        }
        (*(void (*)(...))(&DAT_1007b4390 + *(int*)(&DAT_1007b4390 + (unsigned long)terrainOverlayShapeType * 4)))();
    }

} // namespace jag::graphics
