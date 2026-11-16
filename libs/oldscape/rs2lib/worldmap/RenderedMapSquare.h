// libs/oldscape/rs2lib/worldmap/RenderedMapSquare.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::oldscape::rs2lib::worldmap {
    class RenderedMapSquare {
    public:
        ~RenderedMapSquare();
        MapTextLabel* CreateMapTextLabelForMapElement(configdecoder::MapElementType const&) const;
        void ResetCaches();
        void CleanCaches();
        void RemoveCacheSoftReferences();
        RenderedMapSquare(int, int, int,
                          eastl::hash_map<int, shared_ptr<jstring::PixfontGeneric>, eastl::hash<int>,
                                          eastl::equal_to<int>, eastl::allocator, false> const&);
        void RenderToScreen(int, int, int, graphics::Pix2D&);
        void GetCachedRenderedMapSquareSprite(int, int, int);
        void ExtractSquareData(shared_ptr<MapSquareData> const&,
                               eastl::list<shared_ptr<StaticMapElement>, eastl::allocator>&);
        void ExtractStaticMapElements(eastl::list<shared_ptr<StaticMapElement>, eastl::allocator>&);
        void ExtractZoneData(eastl::list<shared_ptr<MapZoneData>, eastl::allocator>&,
                             eastl::list<shared_ptr<StaticMapElement>, eastl::allocator>&);
        void RederiveMapElements();
        void PrerenderSquare(int, std::unique_ptr<OverlayShapes, std::default_delete<OverlayShapes>>&,
                             shared_ptr<Array<graphics::Pix8, eastl::allocator>>&, jagex3::Js5&, jagex3::Js5&);
        ulong UnpackAreaGeography(jagex3::Js5&, ErrorCapture&);
        void RenderSquare(std::unique_ptr<OverlayShapes, std::default_delete<OverlayShapes>> const&,
                          Array<graphics::Pix8, eastl::allocator>&, BlendedGround&);
        void RenderZones(std::unique_ptr<OverlayShapes, std::default_delete<OverlayShapes>> const&,
                         Array<graphics::Pix8, eastl::allocator>&, BlendedGround&);
        void CacheRenderedMapSquareSprite(shared_ptr<graphics::Pix32> const&, int, int, int);
        void ResetAreaGeography();
        void RenderMapElements(int, int, int,
                               eastl::hash_set<int, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>&,
                               graphics::Pix2D&);
        void RenderLocMapElements(
            int, int, eastl::hash_set<int, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false> const&, int,
            graphics::Pix2D&);
        void RenderStaticMapElements(
            int, int, eastl::hash_set<int, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false> const&, int,
            graphics::Pix2D&);
        void RenderMapElementHighlights(
            eastl::hash_set<int, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false> const&, int, int,
            graphics::Pix2D&);
        void RenderHighlight(configdecoder::MapElementType const&, int, int, int, int, graphics::Pix2D&);
        void RenderStaticMapElementHighlights(
            eastl::hash_set<int, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false> const&, int, int,
            graphics::Pix2D&);
        GetMapElementsAtScreenCoord(int, int, int, int, int);
        RenderedMapSquare* GetAllMapElements();
        GetFluId(int, int);
        long GetMapSquarePixelStrideHash(int, int, int);
        void ExtractLocMapElements(int, int, int, int, PackableArea&);
        HasMeltype(shared_ptr<configdecoder::LocType> const&);
        void AddMapElementForLoc(shared_ptr<configdecoder::LocType> const&, int, int, int, PackableArea&);
        void CreateMapTextLabelForMapElement(int) const;
        void RenderGround(int, int, PackableArea&,
                          std::unique_ptr<OverlayShapes, std::default_delete<OverlayShapes>> const&, BlendedGround&);
        void RenderAdditionalOverlays(int, int, PackableArea&,
                                      std::unique_ptr<OverlayShapes, std::default_delete<OverlayShapes>> const&);
        void RenderTile(int, int, PackableArea&,
                        std::unique_ptr<OverlayShapes, std::default_delete<OverlayShapes>> const&,
                        Array<graphics::Pix8, eastl::allocator>&);
        void RenderWall(int, int, PackableArea&);
        void RenderMsi(int, int, PackableArea&, Array<graphics::Pix8, eastl::allocator>&);
        ulong GetBlendedGroundColour(int, int, PackableArea&, BlendedGround&);
        void RenderOrthogonalWall(int, int, int, int);
        void RenderMapElement(MapElement&, int, int, float, graphics::Pix2D&);
        void RenderMapElementSprite(configdecoder::MapElementType const&, int, int, graphics::Pix2D&);
        void RenderMapElementTextLabel(MapElement&, configdecoder::MapElementType const&, int, int, float,
                                       graphics::Pix2D&);
        int GetHorizontalOffset(graphics::Pix32&, game::MapElementHorizontalAlign);
        int GetVerticalOffset(graphics::Pix32&, game::MapElementVerticalAlign);
        GetMeltype(shared_ptr<configdecoder::LocType> const&);
        static LRUCache<graphics::Pix32>    /* 3336 bytes */
            m_renderedMapSquareSpriteCache; // = LRUCache<graphics::Pix32>(37748736, "mapsqLRU")
        static /* 8 bytes */ m_toolkit;     // = this
        static /* 16 bytes */ m_toolkit2D;  // = (**(code **)*m_toolkit)()

        // data members, from how the methods use this: 160 bytes
        int field_0;        // offset 0
        int field_4;        // offset 4
        shared_ptr field_8; // offset 8
        char _unknown_24[32];
        uint field_56; // offset 56
        int field_60;  // offset 60
        char _unknown_64[88];
        hash_map* field_152; // offset 152
    };

    // 0x10012c1b0, 16 bytes, complete-object destructor, inline, placed by class name and debug map
    // RenderedMapSquare::~RenderedMapSquare(): jumps straight to the base-object destructor

    // 0x10012c1c0, 64 bytes, base-object destructor, inline, placed by class name and debug map
    // RenderedMapSquare::~RenderedMapSquare()
    void RenderedMapSquare::~RenderedMapSquare() {
        (&field_96)->~hash_map();
        (&field_64)->~list();
        (&field_24)->~list();
        field_8->~shared_ptr();
    }

} // namespace jag::oldscape::rs2lib::worldmap
