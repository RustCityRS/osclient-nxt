// libs/graphics/runetek7/terrain/GridMap.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

#include "GridMap.h"

namespace jag::graphics {
    // 0x1007b3240, 80 bytes, base-object constructor, placed by debug map only (low confidence)
    // GridTile::GridTile()
    void GridTile::GridTile() {
        new (this) TerrainBaseData();
        field_40 = 0;
        field_44 = 18446744073709551615;
        field_64 = 18446744069414584320;
        field_52 = 0;
        field_60 = 0;
        field_72 = 0;
    }

    // 0x1007b3290, 48 bytes, base-object constructor, placed by debug map only (low confidence)
    // TerrainBaseData::TerrainBaseData()
    void TerrainBaseData::TerrainBaseData() {
        field_0 = 4294967295;
        field_4 = 0;
        field_8 = 1065353216;
        field_12 = 0;
        field_20 = 0;
        field_28 = 1;
        field_32 = 0;
    }

    // 0x1007b32c0, 16 bytes, complete-object constructor, placed by debug map only (low confidence)
    // GridTile::GridTile(): jumps straight to the base-object constructor

} // namespace jag::graphics
