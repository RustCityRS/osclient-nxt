// libs/game/runetek5/config/loctype/LocShapes.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::game {
    class LocShapes {
    public:
        bool IsWallDecorShapeWithOffset(LocShape locShape);
        void IsWallShape(LocShape locShape);
        void IsWallDecorShape(LocShape locShape);
        bool IsRoofEdgeShape(LocShape locShape);
        bool IsRoofShape(LocShape locShape);
        bool IsCentrePieceShape(LocShape locShape);
        int GetLayer(LocShape locShape);
        bool IsAlternativePieceShape(LocShape locShape);
        void GetShapeDescription(LocShape locShape);
        void GetShapeOffsetAndRotation(float& arg1, int& arg2, int& arg3, LocShape locShape, Rotation90 rotation90,
                                       int arg6, bool arg7, const math::Vector3T<float>& vector3);
        bool IsDiagonalWallDecorShape(LocShape locShape);
        static int32_t WALL_DECOR_STRAIGHT_XOFFSET[4];  // = { 1, 0, -1, 0 }
        static int32_t WALL_DECOR_STRAIGHT_ZOFFSET[4];  // = { 0, -1, 0, 1 }
        static int32_t WALL_DECOR_DIAGONAL_XOFFSET[4];  // = { 1, -1, -1, 1 }
        static int32_t WALL_DECOR_DIAGONAL_ZOFFSET[12]; // = { -1, -1, 1, 1, 1066024305, 0, 0, 0, -1, -1, 1, 1 }

    private:
        float field_0;
    };

    // 0x1003dd040
    bool LocShapes::IsWallDecorShapeWithOffset(LocShape locShape) {
        return (uint8_t)((char)locShape - 5U) < 2;
    }

    // 0x10040ca70
    void LocShapes::IsWallShape(LocShape locShape) {
        return (8389135U >> (locShape & 31) & 1) != 0 && (uint8_t)locShape < 24;
    }

    // 0x10040ca90
    void LocShapes::IsWallDecorShape(LocShape locShape) {
        return (char)locShape == '\x18' || (uint8_t)(locShape - 4) < 5;
    }

    // 0x10040cab0
    bool LocShapes::IsRoofEdgeShape(LocShape locShape) {
        return (uint8_t)((char)locShape - 18U) < 4;
    }

    // 0x10040cad0
    bool LocShapes::IsRoofShape(LocShape locShape) {
        return (uint8_t)((char)locShape - 12U) < 10;
    }

    // 0x100431e90
    bool LocShapes::IsCentrePieceShape(LocShape locShape) {
        return ((uint8_t)locShape & 254) == 10;
    }

    // 0x100446a60
    int LocShapes::GetLayer(LocShape locShape) {
        int iVar1 = 0;
        if (((((uint8_t)locShape < 4) || ((uint8_t)locShape == 23)) || (iVar1 = 1, (uint8_t)locShape < 9)) ||
            ((uint8_t)locShape == 24)) {
            return iVar1;
        }
        return 3 - (unsigned int)((uint8_t)locShape < 22);
    }

    // 0x100446aa0
    bool LocShapes::IsAlternativePieceShape(LocShape locShape) {
        return (uint8_t)((char)locShape - 23U) < 2;
    }

    // 0x100525360
    bool LocShapes::IsDiagonalWallDecorShape(LocShape locShape) {
        uint8_t bVar1 = (char)locShape - 6;
        return (262151U >> (bVar1 & 31) & 1) != 0 && bVar1 < 19;
    }

} // namespace jag::game
