// libs/graphics/runetek7/terrain/TerrainVertex.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::oldscape::rseven {
    class TerrainVertex {
    public:
        TerrainVertex* operator=(const TerrainVertex& terrainVertex);
        TerrainVertex();

    private:
        uint32_t field_0;
        uint32_t field_4;
        uint32_t field_8;
        uint64_t field_12;
        uint32_t field_20;
        uint32_t field_24;
    };

    // 0x1001c7220
    TerrainVertex* TerrainVertex::operator=(const TerrainVertex& terrainVertex) {
        *this = terrainVertex;
        uint32_t uVar1 = terrainVertex.field_20;
        uint32_t uVar2 = terrainVertex.field_24;
        field_12 = terrainVertex.field_12;
        field_20 = uVar1;
        field_24 = uVar2;
        return this;
    }

    // 0x1001dc6d0
    TerrainVertex::TerrainVertex() : jag::math::Vector3T(), field_24(4294967295) {}

} // namespace jag::oldscape::rseven

namespace jag::graphics {
    class TerrainVertex {
    public:
        TerrainVertex();

    private:
        uint32_t field_0;
        uint16_t field_4;
        uint8_t _unknown_6[2];
        uint32_t field_8;
        uint64_t field_12;
        uint64_t field_20;
        uint8_t field_28;
        uint8_t _unknown_29[3];
        uint64_t field_32;
        uint8_t _unknown_40[20];
    };

    // 0x1007bcce0
    TerrainVertex::TerrainVertex() : TerrainBaseData() {}

} // namespace jag::graphics
