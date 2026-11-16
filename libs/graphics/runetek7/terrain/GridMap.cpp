// libs/graphics/runetek7/terrain/GridMap.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

#include "GridMap.h"

namespace jag::graphics {
    // 0x1007b3240
    GridTile::GridTile()
        : TerrainBaseData(), field_40(0), field_44(18446744073709551615), field_64(18446744069414584320), field_52(0),
          field_60(0), field_72(0) {}

    // 0x1007b3290
    TerrainBaseData::TerrainBaseData()
        : field_0(4294967295), field_4(0), field_8(1065353216), field_12(0), field_20(0), field_28(1), field_32(0) {}

} // namespace jag::graphics
