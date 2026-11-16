// libs/oldscape/rs2lib/constants/LocShape.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.oldscape.rs2lib

#include "LocShape.h"

namespace jag::oldscape::constants {
    // 0x100d40008, 56 bytes, __const
    LocShape::m_shapes = {
        0, 0, 16843009, 16843009, 131329, 67240962, 33686018, 33686018, 33686018, 50463490, 50463490, 1283, 0, 0,
    };

    // 0x1002644a0, 80 bytes, placed by class name and debug map
    // LocShape::IsWallShape(int)
    bool LocShape::IsWallShape(int param_1) {
        long lVar1;

        if (22 < (uint)param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("shape >= 0 && shape < (int)LocShapeID::NUM_SHAPES",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/rs2lib/constants/"
                      "LocShape.cpp",
                      15, (char*)0);
        }
        lVar1 = std::array<LocShapeProperties, 23ul>::operator[]((long)param_1);
        return *(char*)(lVar1 + 1) == '\0';
    }

    // 0x100264510, 80 bytes, placed by class name and debug map
    // LocShape::IsWallDecorShape(int)
    bool LocShape::IsWallDecorShape(int param_1) {
        long lVar1;

        if (22 < (uint)param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("shape >= 0 && shape < (int)LocShapeID::NUM_SHAPES",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/rs2lib/constants/"
                      "LocShape.cpp",
                      21, (char*)0);
        }
        lVar1 = std::array<LocShapeProperties, 23ul>::operator[]((long)param_1);
        return *(char*)(lVar1 + 1) == '\x01';
    }

    // 0x100264560, 80 bytes, placed by class name and debug map
    // LocShape::IsRoofShape(int)
    bool LocShape::IsRoofShape(int param_1) {
        long lVar1;

        if (22 < (uint)param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("shape >= 0 && shape < (int)LocShapeID::NUM_SHAPES",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/rs2lib/constants/"
                      "LocShape.cpp",
                      27, (char*)0);
        }
        lVar1 = std::array<LocShapeProperties, 23ul>::operator[]((long)param_1);
        return *(char*)(lVar1 + 1) == '\x02';
    }

    // 0x1002645b0, 80 bytes, placed by class name and debug map
    // LocShape::IsRoofEdgeShape(int)
    bool LocShape::IsRoofEdgeShape(int param_1) {
        long lVar1;

        if (22 < (uint)param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("shape >= 0 && shape < (int)LocShapeID::NUM_SHAPES",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/rs2lib/constants/"
                      "LocShape.cpp",
                      33, (char*)0);
        }
        lVar1 = std::array<LocShapeProperties, 23ul>::operator[]((long)param_1);
        return *(char*)(lVar1 + 1) == '\x03';
    }

    // 0x100264600, 80 bytes, placed by class name and debug map
    // LocShape::IsCentrePieceShape(int)
    bool LocShape::IsCentrePieceShape(int param_1) {
        long lVar1;

        if (22 < (uint)param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("shape >= 0 && shape < (int)LocShapeID::NUM_SHAPES",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/rs2lib/constants/"
                      "LocShape.cpp",
                      39, (char*)0);
        }
        lVar1 = std::array<LocShapeProperties, 23ul>::operator[]((long)param_1);
        return *(char*)(lVar1 + 1) == '\x04';
    }

    // 0x100264650, 80 bytes, placed by class name and debug map
    // LocShape::IsGroundDecorShape(int)
    bool LocShape::IsGroundDecorShape(int param_1) {
        long lVar1;

        if (22 < (uint)param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("shape >= 0 && shape < (int)LocShapeID::NUM_SHAPES",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/rs2lib/constants/"
                      "LocShape.cpp",
                      45, (char*)0);
        }
        lVar1 = std::array<LocShapeProperties, 23ul>::operator[]((long)param_1);
        return *(char*)(lVar1 + 1) == '\x05';
    }

    // 0x1002646a0, 64 bytes, placed by class name and debug map
    // LocShape::ToLayer(int)
    undefined1 LocShape::ToLayer(int param_1) {
        undefined1* puVar1;

        if (22 < (uint)param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("shape >= 0 && shape < (int)LocShapeID::NUM_SHAPES",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/rs2lib/constants/"
                      "LocShape.cpp",
                      51, (char*)0);
        }
        puVar1 = (undefined1*)std::array<LocShapeProperties, 23ul>::operator[]((long)param_1);
        return *puVar1;
    }

} // namespace jag::oldscape::constants
