// libs/game/runetek5/config/loctype/LocShapes.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::game {
    class LocShapes {
    public:
        bool IsWallDecorShapeWithOffset(LocShape);
        IsWallShape(LocShape);
        IsWallDecorShape(LocShape);
        bool IsRoofEdgeShape(LocShape);
        bool IsRoofShape(LocShape);
        bool IsCentrePieceShape(LocShape);
        int GetLayer(LocShape);
        bool IsAlternativePieceShape(LocShape);
        GetShapeDescription(LocShape);
        void GetShapeOffsetAndRotation(float&, int&, int&, LocShape, Rotation90, int, bool,
                                       math::Vector3T<float> const&);
        bool IsDiagonalWallDecorShape(LocShape);
        static /* 16 bytes */ WALL_DECOR_STRAIGHT_XOFFSET; // = { 1, 0, -1, 0 }
        static /* 16 bytes */ WALL_DECOR_STRAIGHT_ZOFFSET; // = { 0, -1, 0, 1 }
        static /* 16 bytes */ WALL_DECOR_DIAGONAL_XOFFSET; // = { 1, -1, -1, 1 }
        static /* 48 bytes */ WALL_DECOR_DIAGONAL_ZOFFSET; // = { -1, -1, 1, 1, 1066024305, 0, 0, 0, -1, -1, 1, 1 }
    };

    // 0x1003dd040, 32 bytes, inline, placed by class name and debug map
    // LocShapes::IsWallDecorShapeWithOffset(LocShape)
    bool LocShapes::IsWallDecorShapeWithOffset(char param_1) {
        return (byte)(param_1 - 5U) < 2;
    }

    // 0x10040ca70, 32 bytes, inline, placed by class name
    // LocShapes::IsWallShape(LocShape)
    undefined8 LocShapes::IsWallShape(uint param_1) {
        return CONCAT71(32770, (8389135U >> (param_1 & 31) & 1) != 0 && (byte)param_1 < 24);
    }

    // 0x10040ca90, 32 bytes, inline, placed by class name
    // LocShapes::IsWallDecorShape(LocShape)
    undefined4 LocShapes::IsWallDecorShape(int param_1) {
        return CONCAT31((int3)((uint)(param_1 + -4) >> 8), (char)param_1 == '\x18' || (byte)(param_1 + -4) < 5);
    }

    // 0x10040cab0, 32 bytes, inline, placed by class name
    // LocShapes::IsRoofEdgeShape(LocShape)
    bool LocShapes::IsRoofEdgeShape(char param_1) {
        return (byte)(param_1 - 18U) < 4;
    }

    // 0x10040cad0, 32 bytes, inline, placed by class name
    // LocShapes::IsRoofShape(LocShape)
    bool LocShapes::IsRoofShape(char param_1) {
        return (byte)(param_1 - 12U) < 10;
    }

    // 0x100431e90, 32 bytes, inline, placed by class name
    // LocShapes::IsCentrePieceShape(LocShape)
    bool LocShapes::IsCentrePieceShape(byte param_1) {
        return (param_1 & 254) == 10;
    }

    // 0x100446a60, 64 bytes, inline, placed by class name
    // LocShapes::GetLayer(LocShape)
    int LocShapes::GetLayer(byte param_1) {
        int iVar1;

        iVar1 = 0;
        if ((((param_1 < 4) || (param_1 == 23)) || (iVar1 = 1, param_1 < 9)) || (param_1 == 24)) {
            return iVar1;
        }
        return 3 - (uint)(param_1 < 22);
    }

    // 0x100446aa0, 32 bytes, inline, placed by class name
    // LocShapes::IsAlternativePieceShape(LocShape)
    bool LocShapes::IsAlternativePieceShape(char param_1) {
        return (byte)(param_1 - 23U) < 2;
    }

    // 0x100525360, 48 bytes, inline, placed by class name
    // LocShapes::IsDiagonalWallDecorShape(LocShape)
    bool LocShapes::IsDiagonalWallDecorShape(char param_1) {
        return (262151U >> ((byte)(param_1 - 6U) & 31) & 1) != 0 && (byte)(param_1 - 6U) < 19;
    }

} // namespace jag::game
