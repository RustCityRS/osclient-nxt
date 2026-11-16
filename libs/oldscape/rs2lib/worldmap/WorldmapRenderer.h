// libs/oldscape/rs2lib/worldmap/WorldmapRenderer.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::oldscape::rs2lib::worldmap {
    class WorldmapRenderer {
    public:
        IsValid() const;
        ~WorldmapRenderer();
        WorldmapRenderer(shared_ptr<Array<graphics::Pix8, eastl::allocator>>&,
                         eastl::hash_map<int, shared_ptr<jstring::PixfontGeneric>, eastl::hash<int>,
                                         eastl::equal_to<int>, eastl::allocator, false>&,
                         jagex3::Js5*, jagex3::Js5*);
        void ExtractData(jagex3::Js5&, eastl::string, bool);
        void Reset();
        void RenderMap(int, int, int, int, int, int, int, int, graphics::Pix2D&);
        GetRenderBounds(int, int, int, int);
        void GetFloatStride(int, int);
        void RenderMapElements(int, int, int, int, int, int, int, int,
                               eastl::hash_set<int, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>&,
                               eastl::hash_set<int, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>&,
                               int, int, bool, graphics::Pix2D&);
        void RenderOverview(int, int, int, int,
                            eastl::hash_set<int, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>&, int,
                            int, graphics::Pix2D&);
        void CollateMapElements();
        list<shared_ptr<MapElement>, BucketAllocatorEASTL>* GetMapElementsAtScreenCoord(int, int, int, int, int, int,
                                                                                        int, int, int, int);
        GetMapElements();
        static /* 8 bytes */ m_js5Time;
        static /* 8 bytes */ m_wmaTime;
        static /* 8 bytes */ m_prepSquareTime;
        static /* 16 bytes */ m_comptexTime;

        // data members, from how the methods use this: 296 bytes
        int field_0;        // offset 0
        float field_4;      // offset 4
        undefined1 m_valid; // offset 8
        undefined1 field_9; // offset 9
        char _unknown_10[182];
        Js5* field_192; // offset 192
        Js5* field_200; // offset 200
        char _unknown_208[56];
        int field_264; // offset 264
        int field_268; // offset 268
        int field_272; // offset 272
        int field_276; // offset 276
        char _unknown_280[16];
    };

    // 0x10012bcd0, 16 bytes, complete-object destructor, inline, placed by class name and debug map
    // WorldmapRenderer::~WorldmapRenderer(): jumps straight to the base-object destructor

    // 0x10012bce0, 96 bytes, base-object destructor, inline, placed by class name and debug map
    // WorldmapRenderer::~WorldmapRenderer()
    void WorldmapRenderer::~WorldmapRenderer() {
        (&field_208)->~hash_map();
        (&field_176)->~shared_ptr();
        (&field_120)->~hash_map();
        (&field_96)->~Array();
        (&field_40)->~hash_map();
        (&field_24)->~shared_ptr();
        (&field_16)->~unique_ptr();
    }

} // namespace jag::oldscape::rs2lib::worldmap
