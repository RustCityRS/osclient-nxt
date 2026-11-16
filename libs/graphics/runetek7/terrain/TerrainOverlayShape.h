// libs/graphics/runetek7/terrain/TerrainOverlayShape.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::graphics {
    class TerrainOverlayShape {
    public:
        // virtual methods in vtable order
        virtual ~TerrainOverlayShape();
        char GetID() const;
        TerrainOverlayShape(TerrainOverlayShapeType terrainOverlayShapeType);
        void GetShape(TerrainOverlayShapeType terrainOverlayShapeType);

    private:
        char m_iD;
        uint8_t _unknown_9[15];
    };

    // 0x10062dc60
    char TerrainOverlayShape::GetID() const {
        return m_horizontalAlignment;
    }

} // namespace jag::graphics
