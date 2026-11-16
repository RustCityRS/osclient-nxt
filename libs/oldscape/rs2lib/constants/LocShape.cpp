// libs/oldscape/rs2lib/constants/LocShape.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.oldscape.rs2lib

#include "LocShape.h"

namespace jag::oldscape::constants {
    // 0x100d40008
    int32_t LocShape::m_shapes[14] = {
        0, 0, 16843009, 16843009, 131329, 67240962, 33686018, 33686018, 33686018, 50463490, 50463490, 1283, 0, 0,
    };

    // 0x1002644a0
    bool LocShape::IsWallShape(int arg1) {
        uint32_t in_register_00000034;

        if (22 < (unsigned int)this) {
            LogAssert("shape >= 0 && shape < (int)LocShapeID::NUM_SHAPES",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/rs2lib/constants/"
                      "LocShape.cpp",
                      15, nullptr);
        }
        long lVar1 = (*((array<LocShapeProperties, 23ul>*)(long)(int)(unsigned int)this))[(
            ((uint64_t)in_register_00000034 << 32) | (uint32_t)arg1)];
        return *(char*)(lVar1 + 1) == '\0';
    }

    // 0x100264510
    bool LocShape::IsWallDecorShape(int arg1) {
        uint32_t in_register_00000034;

        if (22 < (unsigned int)this) {
            LogAssert("shape >= 0 && shape < (int)LocShapeID::NUM_SHAPES",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/rs2lib/constants/"
                      "LocShape.cpp",
                      21, nullptr);
        }
        long lVar1 = (*((array<LocShapeProperties, 23ul>*)(long)(int)(unsigned int)this))[(
            ((uint64_t)in_register_00000034 << 32) | (uint32_t)arg1)];
        return *(char*)(lVar1 + 1) == '\x01';
    }

    // 0x100264560
    bool LocShape::IsRoofShape(int arg1) {
        uint32_t in_register_00000034;

        if (22 < (unsigned int)this) {
            LogAssert("shape >= 0 && shape < (int)LocShapeID::NUM_SHAPES",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/rs2lib/constants/"
                      "LocShape.cpp",
                      27, nullptr);
        }
        long lVar1 = (*((array<LocShapeProperties, 23ul>*)(long)(int)(unsigned int)this))[(
            ((uint64_t)in_register_00000034 << 32) | (uint32_t)arg1)];
        return *(char*)(lVar1 + 1) == '\x02';
    }

    // 0x1002645b0
    bool LocShape::IsRoofEdgeShape(int arg1) {
        uint32_t in_register_00000034;

        if (22 < (unsigned int)this) {
            LogAssert("shape >= 0 && shape < (int)LocShapeID::NUM_SHAPES",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/rs2lib/constants/"
                      "LocShape.cpp",
                      33, nullptr);
        }
        long lVar1 = (*((array<LocShapeProperties, 23ul>*)(long)(int)(unsigned int)this))[(
            ((uint64_t)in_register_00000034 << 32) | (uint32_t)arg1)];
        return *(char*)(lVar1 + 1) == '\x03';
    }

    // 0x100264600
    bool LocShape::IsCentrePieceShape(int arg1) {
        uint32_t in_register_00000034;

        if (22 < (unsigned int)this) {
            LogAssert("shape >= 0 && shape < (int)LocShapeID::NUM_SHAPES",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/rs2lib/constants/"
                      "LocShape.cpp",
                      39, nullptr);
        }
        long lVar1 = (*((array<LocShapeProperties, 23ul>*)(long)(int)(unsigned int)this))[(
            ((uint64_t)in_register_00000034 << 32) | (uint32_t)arg1)];
        return *(char*)(lVar1 + 1) == '\x04';
    }

    // 0x100264650
    bool LocShape::IsGroundDecorShape(int arg1) {
        uint32_t in_register_00000034;

        if (22 < (unsigned int)this) {
            LogAssert("shape >= 0 && shape < (int)LocShapeID::NUM_SHAPES",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/rs2lib/constants/"
                      "LocShape.cpp",
                      45, nullptr);
        }
        long lVar1 = (*((array<LocShapeProperties, 23ul>*)(long)(int)(unsigned int)this))[(
            ((uint64_t)in_register_00000034 << 32) | (uint32_t)arg1)];
        return *(char*)(lVar1 + 1) == '\x05';
    }

    // 0x1002646a0
    uint8_t LocShape::ToLayer(int arg1) {
        uint32_t in_register_00000034;

        if (22 < (unsigned int)this) {
            LogAssert("shape >= 0 && shape < (int)LocShapeID::NUM_SHAPES",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/rs2lib/constants/"
                      "LocShape.cpp",
                      51, nullptr);
        }
        uint8_t* puVar1 = (uint8_t*)(*((array<LocShapeProperties, 23ul>*)(long)(int)(unsigned int)this))[(
            ((uint64_t)in_register_00000034 << 32) | (uint32_t)arg1)];
        return *puVar1;
    }

} // namespace jag::oldscape::constants
