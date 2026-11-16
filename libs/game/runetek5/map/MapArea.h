// libs/game/runetek5/map/MapArea.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::game {
    class MapArea {
    public:
        class CompositeTextureMeta;
        class SubArea;
        int GetMapID() const;
        uint64_t* GetOrigin() const;
        uint8_t* GetUniqueName() const;
        uint32_t GetAdvisedZoom() const;
        void GetStaticMapElements() const;
        GridRect GetTargetBounds() const;
        bool AreStaticMapElementsLoaded() const;
        uint32_t GetBackgroundRGBA() const;
        ~MapArea();
        MapArea(Js5ResourceProvider* js5ResourceProvider, int arg2, PacketT<Array<unsigned char>>& arg3,
                PacketT<Array<unsigned char>>& arg4);
        void CalculateBounds();
        MapArea(Js5ResourceProvider* js5ResourceProvider, int arg2, int arg3, int arg4);
        uint8_t* GetCompositeTextureMeta(CompositeTextureMeta& compositeTextureMeta);
        void ReleaseCompositeTextureMeta();
        void GetCompositeMap();
        unsigned long ContainsSource(const CoordGrid& coordGrid) const;
        unsigned long GetTargetCoord(CoordGrid& coordGrid1, const CoordGrid& coordGrid2) const;
        unsigned long GetSourceCoord(CoordGrid& coordGrid1, const CoordGrid& coordGrid2) const;
        uint8_t LoadStaticMapElements();
        void GetValidZones(Array<bool>& arg1, int arg2, int arg3, int arg4, int arg5) const;
        MapArea* operator=(MapArea&& mapArea);
        bool ShouldAutoFind() const;
        MapArea(MapArea&& mapArea);
        MapArea();
        static shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>
            NullMapArea; // = shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>()

    private:
        Js5ResourceProvider* field_0;
        int m_mapID;
        uint8_t _unknown_12[92];
        uint64_t m_origin;
        uint32_t field_112;
        uint32_t m_backgroundRGBA;
        uint8_t field_120;
        uint8_t field_121[3];
        uint32_t m_advisedZoom;
        uint8_t _unknown_128[48];
        shared_ptr field_176;
        shared_ptr field_192;
        float field_208;
        float field_212;
        int field_216;
        int field_220;
        uint8_t _unknown_224[16];
        GridRect field_240;
        uint8_t _unknown_260[44];
        GridRect m_targetBounds;
        uint8_t _unknown_324[4];
        uint32_t field_328;
        uint8_t _unknown_332[4];
    };

    class MapArea::CompositeTextureMeta {
    public:
        CompositeTextureMeta();
        ~CompositeTextureMeta();
        CompositeTextureMeta(CompositeTextureMeta&& mapSquareStatus);
        CompositeTextureMeta* operator=(const CompositeTextureMeta& compositeTextureMeta);
        CompositeTextureMeta* operator=(CompositeTextureMeta&& compositeTextureMeta);

    private:
        uint8_t _unknown_0[16];
        uint64_t field_16;
    };

    class MapArea::SubArea {
    public:
        SubArea(SubArea&& subArea);
        SubArea();

    private:
        uint32_t field_0;
        uint8_t _unknown_4[24];
    };

    // 0x1003c0980
    void MapArea::GetStaticMapElements() const {
        if (field_240[16] == '\0') {
            LogAssert(
                "m_staticMapElementsLoaded",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/map/MapArea.h",
                153, nullptr);
        }
        return (Array<std::unique_ptr<LoadingScreenScript::AnimLayer,
                                      std::default_delete<LoadingScreenScript::AnimLayer> _>>*)&field_264;
    }

    // 0x1003c9110
    GridRect MapArea::GetTargetBounds() const {
        return m_defaultMaterial;
    }

    // 0x1003caa10
    bool MapArea::AreStaticMapElementsLoaded() const {
        return field_240[16];
    }

    // 0x1003cbc60
    uint32_t MapArea::GetBackgroundRGBA() const {
        return m_pickingPrepassType;
    }

    // 0x10046b340
    MapArea::~MapArea() {
        field_264.~Array();
        field_192->~LRUHashCacheWrapper();
        field_176->~shared_ptr();
        field_152.~Array();
        field_128.~Array();
        field_80.~Array();
        field_48.~basic_string();
        field_16.~basic_string();
    }

    // 0x1004adad0
    CompositeTextureMeta*
    MapArea::CompositeTextureMeta::operator=(const MapArea::CompositeTextureMeta& compositeTextureMeta) {
        *this = compositeTextureMeta;
        field_16 = compositeTextureMeta.field_16;
        return this;
    }

    // 0x1004af110
    MapArea* MapArea::operator=(MapArea&& mapArea) {
        m_mapID = mapArea.m_mapID;
        field_0 = mapArea.field_0;
        field_16 = &mapArea.field_16;
        field_48 = &mapArea.field_48;
        field_80 = mapArea.field_80;
        uint32_t uVar1 = mapArea.field_112;
        uint32_t uVar2 = mapArea.m_backgroundRGBA;
        m_origin = mapArea.m_origin;
        field_112 = uVar1;
        m_backgroundRGBA = uVar2;
        uint32_t uVar3 = mapArea.field_121;
        uVar1 = mapArea.m_advisedZoom;
        field_120 = mapArea.field_120;
        field_121 = uVar3;
        m_advisedZoom = uVar1;
        field_128 = mapArea.field_128;
        field_152 = mapArea.field_152;
        *field_176 = mapArea.field_176;
        *field_192 = mapArea.field_192;
        int iVar4 = mapArea.field_220;
        field_216 = mapArea.field_216;
        field_220 = iVar4;
        field_224 = mapArea.field_224;
        *field_240 = mapArea.field_240;
        field_240[16] = mapArea.field_240[16];
        field_264 = mapArea.field_264;
        field_288 = mapArea.field_288;
        *m_targetBounds = mapArea.m_targetBounds;
        *(uint64_t*)(m_targetBounds + 16) = *(uint64_t*)(mapArea.m_targetBounds + 16);
        field_328 = mapArea.field_328;
        return this;
    }

    // 0x1004af330
    bool MapArea::ShouldAutoFind() const {
        return m_membersServer;
    }

    // 0x1004b0600
    CompositeTextureMeta*
    MapArea::CompositeTextureMeta::operator=(MapArea::CompositeTextureMeta&& compositeTextureMeta) {
        *this = compositeTextureMeta;
        field_16 = compositeTextureMeta.field_16;
        return this;
    }

    // 0x1004b1d80
    MapArea::SubArea::SubArea() {
        new (&field_4) shared_ptr();
        new (&field_20) shared_ptr();
    }

    // 0x1004b1db0
    MapArea::SubArea::SubArea(MapArea::SubArea&& subArea)
        : field_0(subArea.field_0), field_4(subArea.field_4), field_20(subArea.field_20) {}

    // 0x1004b2460
    MapArea::MapArea()
        : field_0(nullptr), m_mapID(-1), m_backgroundRGBA(255), field_120(1), m_advisedZoom(4294967295), field_216(1),
          field_220(1) {
        new (&field_224) shared_ptr();
        new (field_240) shared_ptr();
        field_240[16] = 0;
        new (&field_264) Array<StaticMapElement>();
        new (&field_288) shared_ptr();
        new (m_targetBounds) shared_ptr();
        new ((m_targetBounds + 16)) game::CoordGrid();
    }

    // 0x1004b2600
    MapArea::MapArea(MapArea&& mapArea)
        : m_mapID(mapArea.m_mapID), field_0(mapArea.field_0), field_16(mapArea.field_16), field_48(mapArea.field_48),
          field_80(mapArea.field_80) {
        uint32_t uVar1 = mapArea.field_121;
        uint32_t uVar2 = mapArea.m_advisedZoom;
        field_120 = mapArea.field_120;
        field_121 = uVar1;
        m_advisedZoom = uVar2;
        uVar2 = mapArea.field_112;
        uint32_t uVar3 = mapArea.m_backgroundRGBA;
        m_origin = mapArea.m_origin;
        field_112 = uVar2;
        m_backgroundRGBA = uVar3;
        new (&field_128) Array<MapArea::CompositeSquare>(mapArea.field_128);
        new (&field_152) Array<MapArea::CompositeZone>(mapArea.field_152);
        field_176->shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(mapArea.field_176);
        new (field_192) CompositeTextureMeta(mapArea.field_192);
        int iVar4 = mapArea.field_220;
        field_216 = mapArea.field_216;
        field_220 = iVar4;
        new (&field_224) math::Rect(mapArea.field_224);
        new (field_240) math::Rect(mapArea.field_240);
        field_240[16] = mapArea.field_240[16];
        new (&field_264) Array<StaticMapElement>(mapArea.field_264);
        new (&field_288) math::Rect(mapArea.field_288);
        new (m_targetBounds) math::Rect(mapArea.m_targetBounds);
        field_328 = mapArea.field_328;
        *(uint64_t*)(m_targetBounds + 16) = *(uint64_t*)(mapArea.m_targetBounds + 16);
    }

} // namespace jag::game
