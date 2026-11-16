// libs/game/runetek5/config/meltype/Triangulate.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::game {
    class Triangulate {
    public:
        class SourcePoint;
        ConvertPolygon(eastl::vector<int, eastl::allocator>&, eastl::vector<math::Point<int>, eastl::allocator> const&);
        bool TestPolygonWinding(eastl::vector<SourcePoint, BucketAllocatorEASTL> const&);
        uint ProcessPolygonList(eastl::vector<int, eastl::allocator>&,
                                eastl::vector<SourcePoint, BucketAllocatorEASTL>&, bool);
        long Cross(eastl::vector<SourcePoint, BucketAllocatorEASTL> const&, int, int, int);
        PointInTriangle(eastl::vector<SourcePoint, BucketAllocatorEASTL> const&, int, int, int, int);
    };

    class Triangulate::SourcePoint {
    public:
        int GetIndex() const;
        SourcePoint(math::Point<int> const&, int);
        SourcePoint(SourcePoint&&);
        SourcePoint* operator=(SourcePoint&&);

        // data members, from how the methods use this: 16 bytes
        undefined4 field_0; // offset 0
        undefined4 field_4; // offset 4
        int m_index;        // offset 8
        char _unknown_12[4];
    };

    // 0x100517bb0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // Triangulate::SourcePoint::SourcePoint(math::Point<int> const&, int): jumps straight to the base-object constructor

} // namespace jag::game
