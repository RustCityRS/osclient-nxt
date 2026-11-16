// libs/oldscape/rs2lib/worldmap/RenderedMapSquare.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::oldscape::rs2lib::worldmap {
    class RenderedMapSquare {
    public:
        ~RenderedMapSquare();
        MapTextLabel* CreateMapTextLabelForMapElement(const configdecoder::MapElementType& mapElementType) const;
        void ResetCaches();
        void CleanCaches();
        void RemoveCacheSoftReferences();
        RenderedMapSquare(int arg1, int arg2, int arg3,
                          const eastl::hash_map<int, shared_ptr<jstring::PixfontGeneric>>& arg4);
        void RenderToScreen(int arg1, int arg2, int arg3, graphics::Pix2D& pix2D);
        void GetCachedRenderedMapSquareSprite(int arg1, int arg2, int arg3);
        void ExtractSquareData(const shared_ptr<MapSquareData>& mapSquareData,
                               eastl::list<shared_ptr<StaticMapElement>>& staticMapElements);
        void ExtractStaticMapElements(eastl::list<shared_ptr<StaticMapElement>>& staticMapElements);
        void ExtractZoneData(eastl::list<shared_ptr<MapZoneData>>& mapZoneDatas,
                             eastl::list<shared_ptr<StaticMapElement>>& staticMapElements);
        void RederiveMapElements();
        void PrerenderSquare(int arg1, std::unique_ptr<OverlayShapes>& overlayShapes,
                             shared_ptr<Array<graphics::Pix8>>& pix8s, jagex3::Js5& js51, jagex3::Js5& js52);
        unsigned long UnpackAreaGeography(jagex3::Js5& js5, ErrorCapture& errorCapture);
        void RenderSquare(const std::unique_ptr<OverlayShapes>& overlayShapes, Array<graphics::Pix8>& pix8s,
                          BlendedGround& blendedGround);
        void RenderZones(const std::unique_ptr<OverlayShapes>& overlayShapes, Array<graphics::Pix8>& pix8s,
                         BlendedGround& blendedGround);
        void CacheRenderedMapSquareSprite(const shared_ptr<graphics::Pix32>& pix32, int arg2, int arg3, int arg4);
        void ResetAreaGeography();
        void RenderMapElements(int arg1, int arg2, int arg3, eastl::hash_set<int>& hash_set, graphics::Pix2D& pix2D);
        void RenderLocMapElements(int arg1, int arg2, const eastl::hash_set<int>& hash_set, int arg4,
                                  graphics::Pix2D& pix2D);
        void RenderStaticMapElements(int arg1, int arg2, const eastl::hash_set<int>& hash_set, int arg4,
                                     graphics::Pix2D& pix2D);
        void RenderMapElementHighlights(const eastl::hash_set<int>& hash_set, int arg2, int arg3,
                                        graphics::Pix2D& pix2D);
        void RenderHighlight(const configdecoder::MapElementType& mapElementType, int arg2, int arg3, int arg4,
                             int arg5, graphics::Pix2D& pix2D);
        void RenderStaticMapElementHighlights(const eastl::hash_set<int>& hash_set, int arg2, int arg3,
                                              graphics::Pix2D& pix2D);
        RenderedMapSquare* GetMapElementsAtScreenCoord(int arg1, int arg2, int arg3, int arg4, int arg5);
        auto GetAllMapElements();
        uint64_t GetFluId(int arg1, int arg2);
        long GetMapSquarePixelStrideHash(int arg1, int arg2, int arg3);
        void ExtractLocMapElements(int arg1, int arg2, int arg3, int arg4, PackableArea& packableArea);
        void HasMeltype(const shared_ptr<configdecoder::LocType>& locType);
        void AddMapElementForLoc(const shared_ptr<configdecoder::LocType>& locType, int arg2, int arg3, int arg4,
                                 PackableArea& packableArea);
        void CreateMapTextLabelForMapElement(int arg1) const;
        void RenderGround(int arg1, int arg2, PackableArea& packableArea,
                          const std::unique_ptr<OverlayShapes>& overlayShapes, BlendedGround& blendedGround);
        void RenderAdditionalOverlays(int arg1, int arg2, PackableArea& packableArea,
                                      const std::unique_ptr<OverlayShapes>& overlayShapes);
        void RenderTile(int arg1, int arg2, PackableArea& packableArea,
                        const std::unique_ptr<OverlayShapes>& overlayShapes, Array<graphics::Pix8>& pix8s);
        void RenderWall(int arg1, int arg2, PackableArea& packableArea);
        void RenderMsi(int arg1, int arg2, PackableArea& packableArea, Array<graphics::Pix8>& pix8s);
        unsigned long GetBlendedGroundColour(int arg1, int arg2, PackableArea& packableArea,
                                             BlendedGround& blendedGround);
        void RenderOrthogonalWall(int arg1, int arg2, int arg3, int arg4);
        void RenderMapElement(MapElement& mapElement, int arg2, int arg3, float arg4, graphics::Pix2D& pix2D);
        void RenderMapElementSprite(const configdecoder::MapElementType& mapElementType, int arg2, int arg3,
                                    graphics::Pix2D& pix2D);
        void RenderMapElementTextLabel(MapElement& mapElement, const configdecoder::MapElementType& mapElementType,
                                       int arg3, int arg4, float arg5, graphics::Pix2D& pix2D);
        int GetHorizontalOffset(graphics::Pix32& pix32, game::MapElementHorizontalAlign mapElementHorizontalAlign);
        int GetVerticalOffset(graphics::Pix32& pix32, game::MapElementVerticalAlign mapElementVerticalAlign);
        MapElementType* GetMeltype(const shared_ptr<configdecoder::LocType>& locType);
        static LRUCache<graphics::Pix32>
            m_renderedMapSquareSpriteCache; // = LRUCache<graphics::Pix32>(37748736, "mapsqLRU")
        static int64_t m_toolkit;           // = this
        static uint8_t m_toolkit2D[16];     // = (**(code **)*m_toolkit)()

    private:
        unsigned int field_0;
        int field_4;
        uint8_t _unknown_8[48];
        unsigned int field_56;
        int field_60;
        uint8_t _unknown_64[88];
        hash_map<int, shared_ptr<jstring::PixfontGeneric>>* field_152;
    };

    // 0x10012c1c0
    RenderedMapSquare::~RenderedMapSquare() {
        field_96.~hash_map();
        field_64.~list();
        field_24.~list();
        field_8.~shared_ptr();
    }

} // namespace jag::oldscape::rs2lib::worldmap
