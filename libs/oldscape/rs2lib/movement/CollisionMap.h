// libs/oldscape/rs2lib/movement/CollisionMap.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::oldscape::movement {
    class CollisionMap {
    public:
        ~CollisionMap();
        CollisionMap* operator=(CollisionMap const&);
        CollisionMap(CollisionMap const&);
        CollisionMap(int, int, int, int);
        void Reset();
        CollisionMap(int, int);
        void BlockAll();
        void AddWall(int, int, int, int, bool);
        void AddCMap(int, int, int);
        void AddLoc(int, int, int, int, int, bool);
        void AddLoc(int, int, int, int, bool);
        void BlockGround(int, int);
        void BlockGroundDecor(int, int);
        void RoofGround(int, int);
        void MultiwayGround(int, int);
        void FreemapGround(int, int);
        void DelWall(int, int, int, int, bool);
        void RemCMap(int, int, int);
        void DelLoc(int, int, int, int, int, bool);
        void UnblockGroundDecor(int, int);
        ulong TestWall(int, int, int, int, int, int, int);
        TestWDecor(int, int, int, int, int, int, int);
        ulong TestLoc(int, int, int, int, int, int, int, int);
        TestOverlap(int, int, int, int, int, int, int, int);
        TestAdjacentEdge(int, int, int, int, int, int, int, int, int);
        TestLarge(int, int, int, int, int, int);
        TestSquare(int, int, int, int);
        TestRange(int, int, int, int, int, int, int, int, int);
        bool TestRange(int, int, int, int, int, int, int);
        int GetRange(int, int, int, int, int, int, int, int);
        int GetRange1D(int, int, int, int);
        void LineOfSightPoint2Square(int, int, int, int, int);
        void LineOfSightPoint2Point(int, int, int, int);
        void LineOfSightPoint2Rect(int, int, int, int, int, int, int);
        LineOfSightPoint2Point(int, int, int, int, bool);
        void LineOfWalkPoint2Square(int, int, int, int, int);
        bool LineOfWalkPoint2Point(int, int, int, int);

        // data members, from how the methods use this: 24 bytes
        int field_0;   // offset 0
        int field_4;   // offset 4
        int field_8;   // offset 8
        uint field_12; // offset 12
        char _unknown_16[8];
    };

    // 0x1000c45c0, 16 bytes, complete-object destructor, inline, placed by class name and debug map
    // CollisionMap::~CollisionMap(): jumps straight to the base-object destructor

    // 0x1001290f0, 16 bytes, base-object destructor, inline, placed by class name
    // CollisionMap::~CollisionMap()
    void CollisionMap::~CollisionMap() {
        (&field_16)->~Array();
    }

    // 0x100133800, 48 bytes, inline, placed by class name
    // CollisionMap::operator=(CollisionMap const&)
    /* CollisionMap::TEMPNAMEPLACEHOLDERVALUE(CollisionMap
   const&) */

    CollisionMap* CollisionMap::operator=(CollisionMap* param_1) {
        int iVar1;
        int iVar2;
        uint uVar3;

        iVar1 = param_1->field_4;
        iVar2 = param_1->field_8;
        uVar3 = param_1->field_12;
        field_0 = param_1->field_0;
        field_4 = iVar1;
        field_8 = iVar2;
        field_12 = uVar3;
        Array<Array<int, eastl::allocator>, eastl::allocator>::operator=(
            (Array<Array<int, eastl::allocator>, eastl::allocator>*)&field_16, (Array*)&param_1->field_16);
        return this;
    }

    // 0x100133cd0, 16 bytes, complete-object constructor, inline, placed by class name
    // CollisionMap::CollisionMap(CollisionMap const&): jumps straight to the base-object constructor

    // 0x100133ce0, 32 bytes, base-object constructor, inline, placed by class name
    // CollisionMap::CollisionMap(CollisionMap const&)
    void CollisionMap::CollisionMap(CollisionMap* param_1) {
        int iVar1;
        int iVar2;
        uint uVar3;

        iVar1 = param_1->field_4;
        iVar2 = param_1->field_8;
        uVar3 = param_1->field_12;
        field_0 = param_1->field_0;
        field_4 = iVar1;
        field_8 = iVar2;
        field_12 = uVar3;
        new (&field_16, (Array*)&param_1->field_16) Array<Array<int, eastl::allocator>, eastl::allocator>();
    }

} // namespace jag::oldscape::movement
