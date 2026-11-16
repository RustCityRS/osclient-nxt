// projects/osclient/worldmap/Worldmap.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::oldscape::worldmap {
    class Worldmap {
    public:
        void Init(jagex3::Js5* js51, jagex3::Js5* js52, jagex3::Js5* js53,
                  shared_ptr<jstring::PixfontGeneric> pixfontGeneric,
                  eastl::hash_map<Font, shared_ptr<jstring::PixfontGeneric>, FontHash>& arg5,
                  shared_ptr<Array<graphics::Pix8>>& pix8s);
        void SwitchToMap(const shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>& worldmapAreaMetadata);
        uint32_t PrefetchDefaultMapAreaData();
        void Service();
        void LogicLoop(CoordType<UICoordSpecializer> coordType1, CoordType<UICoordSpecializer> coordType2, bool arg3,
                       int arg4, int arg5, int arg6, int arg7);
        void Zoom();
        void Move();
        bool Moving();
        void HandleMouse(CoordType<UICoordSpecializer> coordType1, CoordType<UICoordSpecializer> coordType2, bool arg3,
                         bool arg4);
        void HandleClickLogic(CoordType<UICoordSpecializer> coordType1, CoordType<UICoordSpecializer> coordType2,
                              bool arg3, long long arg4);
        void UpdateTile(int arg1, int arg2, bool arg3);
        void ResetDrag();
        Worldmap* FindMapareaForSourceTile(int arg1, int arg2, int arg3);
        void UpdateMaparea(int arg1, int arg2, int arg3, bool arg4);
        void Reset(int arg1, int arg2, int arg3);
        void SwitchToMap(int arg1);
        Worldmap* GetMapareaById(int arg1);
        uint64_t GetCurrentMapareaId();
        auto GetCurrentMaparea();
        void SwitchToMap(const shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>& worldmapAreaMetadata,
                         rs2lib::CoordGrid& coordGrid1, rs2lib::CoordGrid& coordGrid2, bool arg4);
        void MapSwitch(const shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>& worldmapAreaMetadata);
        void RenderWorldmap(int arg1, int arg2, int arg3, int arg4, int arg5, graphics::Pix2D& pix2D);
        void RenderProgressBar(int arg1, int arg2, int arg3, int arg4, int arg5, graphics::Pix2D& pix2D);
        void RenderHeatmap(int arg1, int arg2, int arg3, int arg4, int arg5, int arg6, graphics::Pix2D& pix2D);
        void RenderOverview(int arg1, int arg2, int arg3, int arg4, graphics::Pix2D& pix2D);
        void SetZoomPercent(int arg1);
        uint64_t ZoomPercentToScale(int arg1);
        uint64_t GetZoomPercent();
        auto GetCurrentMapAreaName();
        void Load();
        void JumpToTargetTile(int arg1, int arg2);
        void JumpToTargetTileInstant(int arg1, int arg2);
        void JumpToSourceTile(int arg1, int arg2, int arg3);
        void JumpToSourceTileInstant(int arg1, int arg2, int arg3);
        int GetAbsoluteTileX() const;
        int GetAbsoluteTileZ() const;
        CoordGrid GetSourcePosition() const;
        void SetFlashCount(int arg1);
        void SetFlashCountDefault();
        void SetFlashTics(int arg1);
        void SetFlashTicsDefault();
        void SetPerpetualFlash(bool arg1);
        void FlashElement(int arg1);
        void FlashElementCategory(int arg1);
        void StopCurrentFlashes();
        void SetAllMapElementsVisibility(bool arg1);
        void SetMapElementVisibility(int arg1, bool arg2);
        void RederiveExcludedMapElements();
        void SetMapElementCategoryVisibility(int arg1, bool arg2);
        bool GetAllMapElementsVisibility();
        void IsMapElementVisible(int arg1);
        void IsMapElementCategoryVisible(int arg1);
        void BuildMinimenu(int arg1, int arg2, int arg3, int arg4, int arg5, int arg6);
        CoordGrid FindNearestMapElement(int arg1, rs2lib::CoordGrid& coordGrid);
        void OpMapElement(int arg1, int arg2, rs2lib::CoordGrid& coordGrid1, rs2lib::CoordGrid& coordGrid2);
        uint64_t IterateMapElementsStart();
        uint64_t IterateMapElementsNext();
        bool NeedNewHeatmapSprite(int arg1, int arg2, int arg3, int arg4, int arg5, int arg6);
        Worldmap();
        uint32_t GetTileHeight() const;
        void IsLoaded() const;
        uint32_t GetTileWidth() const;
        static float SCALE_UPDATE_FACTOR; // = 30.0f

    private:
        uint8_t field_0;
        uint8_t _unknown_1[3];
        uint32_t field_4;
        Js5* field_8;
        Js5* field_16;
        Js5* field_24;
        uint8_t _unknown_32[208];
        int field_240;
        int field_244;
        int field_248;
        int field_252;
        int field_256;
        int field_260;
        float field_264;
        float field_268;
        float field_272;
        uint8_t _unknown_276[4];
        int field_280;
        uint8_t _unknown_284[4];
        uint32_t m_tileWidth;
        uint32_t m_tileHeight;
        uint8_t _unknown_296[8];
        int field_304;
        int field_308;
        bool m_perpetualFlash;
        uint8_t _unknown_313[63];
        uint32_t field_376;
        uint32_t field_380;
        int field_384;
        int field_388;
        long long field_392;
        unsigned int field_400;
        unsigned int field_404;
        uint8_t field_408;
        uint8_t _unknown_409[231];
        bool field_640;
        uint8_t _unknown_641[3];
        uint32_t field_644;
        uint64_t field_648;
        uint64_t field_656;
        uint32_t field_664;
        uint8_t _unknown_668[36];
        ReturnValue field_704;
        uint8_t _unknown_712[92];
        uint32_t field_804;
        uint8_t _unknown_808[284];
    };

    // 0x10012b190
    Worldmap::Worldmap() : field_0(0), field_4(8) {

        new (&field_32) shared_ptr();
        new (&field_48) eastl::hash_map<int, shared_ptr<jstring::PixfontGeneric>>(local_38);
        new (&field_104) shared_ptr();
        new (&field_120) eastl::hash_map<eastl::string, shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>>(local_38);
        new (&field_176) shared_ptr();
        new (&field_192) shared_ptr();
        new (&field_208) shared_ptr();
        field_224.unique_ptr<true, void>();
        field_232.unique_ptr<true, void>();
        m_tileWidth = 4294967295;
        m_tileHeight = 4294967295;
        field_248 = -1;
        field_252 = -1;
        field_256 = -1;
        field_260 = -1;
        field_296.XPlotBlender<int>(4294967295);
        field_300.XPlotBlender<int>(4294967295);
        field_304 = 3;
        field_308 = 50;
        m_perpetualFlash = false;
        new (&field_320) eastl::hash_set(local_38);
        field_376 = 4294967295;
        field_380 = 4294967295;
        field_384 = -1;
        field_388 = -1;
        (&field_400)->destruct<highlight::NpcUID*>();
        (&field_404)->destruct<highlight::NpcUID*>();
        field_408 = 1;
        new (&field_416) eastl::hash_set(local_38);
        new (&field_472) eastl::hash_set(local_38);
        new (&field_528) eastl::hash_set(local_38);
        new (&field_584) eastl::hash_set(local_38);
        field_640 = false;
        field_644 = 0;
        field_648 = 4333622002672;
        field_656 = 4342211937266;
        field_664 = 1012;
        new (&field_672) eastl::list<shared_ptr<rs2lib::worldmap::MapElement>>();
        new (field_704) jag::math::Vector2T();
        new (&field_712) eastl::hash_map<int, shared_ptr<rs2lib::worldmap::MapElement>>(local_38);
        new (&field_768) rs2lib::CoordGrid((CoordGrid*)&rs2lib::CoordGrid::CoordGridNull);
        new (&field_784) shared_ptr();
        field_804 = 4294967295;
    }

    // 0x10016b470
    void Worldmap::IsLoaded() const {
        ((WorldmapLoader*)field_232.operator->())->IsLoadComplete();
    }

    // 0x10016b5e0
    uint32_t Worldmap::GetTileWidth() const {
        return m_spriteModIconsID;
    }

} // namespace jag::oldscape::worldmap
