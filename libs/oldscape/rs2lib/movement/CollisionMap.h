// libs/oldscape/rs2lib/movement/CollisionMap.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::oldscape::movement {
    class CollisionMap {
    public:
        ~CollisionMap();
        CollisionMap* operator=(const CollisionMap& collisionMap);
        CollisionMap(const CollisionMap& collisionMap);
        CollisionMap(int arg1, int arg2, int arg3, int arg4);
        void Reset();
        CollisionMap(int arg1, int arg2);
        void BlockAll();
        void AddWall(int arg1, int arg2, int arg3, int arg4, bool arg5);
        void AddCMap(int arg1, int arg2, int arg3);
        void AddLoc(int arg1, int arg2, int arg3, int arg4, int arg5, bool arg6);
        void AddLoc(int arg1, int arg2, int arg3, int arg4, bool arg5);
        void BlockGround(int arg1, int arg2);
        void BlockGroundDecor(int arg1, int arg2);
        void RoofGround(int arg1, int arg2);
        void MultiwayGround(int arg1, int arg2);
        void FreemapGround(int arg1, int arg2);
        void DelWall(int arg1, int arg2, int arg3, int arg4, bool arg5);
        void RemCMap(int arg1, int arg2, int arg3);
        void DelLoc(int arg1, int arg2, int arg3, int arg4, int arg5, bool arg6);
        void UnblockGroundDecor(int arg1, int arg2);
        unsigned long TestWall(int arg1, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7);
        uint64_t TestWDecor(int arg1, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7);
        unsigned long TestLoc(int arg1, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7, int arg8);
        uint32_t TestOverlap(int arg1, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7, int arg8);
        uint8_t TestAdjacentEdge(int arg1, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7, int arg8,
                                 int arg9);
        uint64_t TestLarge(int arg1, int arg2, int arg3, int arg4, int arg5, int arg6);
        uint64_t TestSquare(int arg1, int arg2, int arg3, int arg4);
        uint32_t TestRange(int arg1, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7, int arg8, int arg9);
        bool TestRange(int arg1, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7);
        int GetRange(int arg1, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7, int arg8);
        int GetRange1D(int arg1, int arg2, int arg3, int arg4);
        void LineOfSightPoint2Square(int arg1, int arg2, int arg3, int arg4, int arg5);
        void LineOfSightPoint2Point(int arg1, int arg2, int arg3, int arg4);
        void LineOfSightPoint2Rect(int arg1, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7);
        uint64_t LineOfSightPoint2Point(int arg1, int arg2, int arg3, int arg4, bool arg5);
        void LineOfWalkPoint2Square(int arg1, int arg2, int arg3, int arg4, int arg5);
        bool LineOfWalkPoint2Point(int arg1, int arg2, int arg3, int arg4);

    private:
        int field_0;
        int field_4;
        int field_8;
        unsigned int field_12;
        uint8_t _unknown_16[8];
    };

    // 0x1001290f0
    CollisionMap::~CollisionMap() {
        field_16.~Array();
    }

    // 0x100133800
    CollisionMap* CollisionMap::operator=(const CollisionMap& collisionMap) {
        int iVar1 = collisionMap.field_4;
        int iVar2 = collisionMap.field_8;
        unsigned int uVar3 = collisionMap.field_12;
        field_0 = collisionMap.field_0;
        field_4 = iVar1;
        field_8 = iVar2;
        field_12 = uVar3;
        field_16 = collisionMap.field_16;
        return this;
    }

    // 0x100133ce0
    CollisionMap::CollisionMap(const CollisionMap& collisionMap) {
        int iVar1 = collisionMap.field_4;
        int iVar2 = collisionMap.field_8;
        unsigned int uVar3 = collisionMap.field_12;
        field_0 = collisionMap.field_0;
        field_4 = iVar1;
        field_8 = iVar2;
        field_12 = uVar3;
        new (&field_16) Array<Array<int>>(&collisionMap.field_16);
    }

} // namespace jag::oldscape::movement
