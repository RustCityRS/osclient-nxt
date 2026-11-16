// projects/osclient/worldmap/Worldmap.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::oldscape::worldmap {
    class Worldmap {
    public:
        void Init(jagex3::Js5*, jagex3::Js5*, jagex3::Js5*, shared_ptr<jstring::PixfontGeneric>,
                  eastl::hash_map<Font, shared_ptr<jstring::PixfontGeneric>, FontHash, eastl::equal_to<Font>,
                                  eastl::allocator, false>&,
                  shared_ptr<Array<graphics::Pix8, eastl::allocator>>&);
        void SwitchToMap(shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata> const&);
        PrefetchDefaultMapAreaData();
        void Service();
        void LogicLoop(CoordType<UICoordSpecializer>, CoordType<UICoordSpecializer>, bool, int, int, int, int);
        void Zoom();
        void Move();
        bool Moving();
        void HandleMouse(CoordType<UICoordSpecializer>, CoordType<UICoordSpecializer>, bool, bool);
        void HandleClickLogic(CoordType<UICoordSpecializer>, CoordType<UICoordSpecializer>, bool, long long);
        void UpdateTile(int, int, bool);
        void ResetDrag();
        FindMapareaForSourceTile(int, int, int);
        void UpdateMaparea(int, int, int, bool);
        void Reset(int, int, int);
        void SwitchToMap(int);
        GetMapareaById(int);
        GetCurrentMapareaId();
        GetCurrentMaparea();
        void SwitchToMap(shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata> const&, rs2lib::CoordGrid&,
                         rs2lib::CoordGrid&, bool);
        void MapSwitch(shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata> const&);
        void RenderWorldmap(int, int, int, int, int, graphics::Pix2D&);
        void RenderProgressBar(int, int, int, int, int, graphics::Pix2D&);
        void RenderHeatmap(int, int, int, int, int, int, graphics::Pix2D&);
        void RenderOverview(int, int, int, int, graphics::Pix2D&);
        void SetZoomPercent(int);
        ZoomPercentToScale(int);
        GetZoomPercent();
        GetCurrentMapAreaName();
        void Load();
        void JumpToTargetTile(int, int);
        void JumpToTargetTileInstant(int, int);
        void JumpToSourceTile(int, int, int);
        void JumpToSourceTileInstant(int, int, int);
        int GetAbsoluteTileX() const;
        int GetAbsoluteTileZ() const;
        GetSourcePosition() const;
        void SetFlashCount(int);
        void SetFlashCountDefault();
        void SetFlashTics(int);
        void SetFlashTicsDefault();
        void SetPerpetualFlash(bool);
        void FlashElement(int);
        void FlashElementCategory(int);
        void StopCurrentFlashes();
        void SetAllMapElementsVisibility(bool);
        void SetMapElementVisibility(int, bool);
        void RederiveExcludedMapElements();
        void SetMapElementCategoryVisibility(int, bool);
        bool GetAllMapElementsVisibility();
        void IsMapElementVisible(int);
        void IsMapElementCategoryVisible(int);
        void BuildMinimenu(int, int, int, int, int, int);
        FindNearestMapElement(int, rs2lib::CoordGrid&);
        void OpMapElement(int, int, rs2lib::CoordGrid&, rs2lib::CoordGrid&);
        IterateMapElementsStart();
        IterateMapElementsNext();
        bool NeedNewHeatmapSprite(int, int, int, int, int, int);
        Worldmap();
        GetTileHeight() const;
        void IsLoaded() const;
        GetTileWidth() const;
        static float /* 4 bytes */ SCALE_UPDATE_FACTOR; // = 30.0f

        // data members, from how the methods use this: 1092 bytes
        undefined1 field_0; // offset 0
        char _unknown_1[3];
        undefined4 field_4; // offset 4
        Js5* field_8;       // offset 8
        Js5* field_16;      // offset 16
        Js5* field_24;      // offset 24
        char _unknown_32[208];
        int field_240;   // offset 240
        int field_244;   // offset 244
        int field_248;   // offset 248
        int field_252;   // offset 252
        int field_256;   // offset 256
        int field_260;   // offset 260
        float field_264; // offset 264
        float field_268; // offset 268
        float field_272; // offset 272
        char _unknown_276[4];
        ulonglong field_280;     // offset 280
        undefined4 field_288;    // offset 288
        undefined4 m_tileHeight; // offset 292
        char _unknown_296[8];
        int m_flashCount;      // offset 304
        int m_flashTics;       // offset 308
        bool m_perpetualFlash; // offset 312
        char _unknown_313[63];
        undefined4 field_376; // offset 376
        undefined4 field_380; // offset 380
        int field_384;        // offset 384
        int field_388;        // offset 388
        long field_392;       // offset 392
        undefined4 field_400; // offset 400
        undefined4 field_404; // offset 404
        undefined1 field_408; // offset 408
        char _unknown_409[175];
        undefined1 field_584; // offset 584
        char _unknown_585[55];
        bool field_640; // offset 640
        char _unknown_641[3];
        undefined4 field_644; // offset 644
        undefined8 field_648; // offset 648
        undefined8 field_656; // offset 656
        undefined4 field_664; // offset 664
        char _unknown_668[4];
        undefined1 field_672; // offset 672
        char _unknown_673[127];
        int field_800; // offset 800
        int field_804; // offset 804
        char _unknown_808[284];
    };

    // 0x1000dac70, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // Worldmap::Worldmap(): jumps straight to the base-object constructor

    // 0x10012b190, 928 bytes, base-object constructor, inline, placed by class name
    // Worldmap::Worldmap()
    void Worldmap::Worldmap() {
        NpcUID* extraout_RDX;
        NpcUID* extraout_RDX_00;
        _func_decltype_nullptr* in_RSI;
        allocator* paVar1;
        _func_decltype_nullptr* p_Var2;
        allocator local_38[8];

        field_0 = 0;
        field_4 = 8;
        new (&field_32, in_RSI) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>();
        eastl::allocator::allocator(local_38, "EASTL hash_map");
        paVar1 = local_38;
        new (&field_48, paVar1) eastl::hash_map<int, shared_ptr<jstring::PixfontGeneric>, eastl::hash<int>,
                                                eastl::equal_to<int>, eastl::allocator, false>();
        new (&field_104, (_func_decltype_nullptr*)paVar1) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>();
        eastl::allocator::allocator(local_38, "EASTL hash_map");
        paVar1 = local_38;
        new (&field_120, paVar1)
            eastl::hash_map<eastl::string, shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>,
                            eastl::hash<eastl::string>, eastl::equal_to<eastl::string>, eastl::allocator, false>();
        new (&field_176, (_func_decltype_nullptr*)paVar1) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>();
        new (&field_192, (_func_decltype_nullptr*)paVar1) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>();
        new (&field_208, (_func_decltype_nullptr*)paVar1) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>();
        std::unique_ptr<rs2lib::worldmap::WorldmapRenderer, std::default_delete<rs2lib::worldmap::WorldmapRenderer>>::
            unique_ptr<true, void>((unique_ptr<rs2lib::worldmap::WorldmapRenderer,
                                               std::default_delete<rs2lib::worldmap::WorldmapRenderer>>*)&field_224);
        std::unique_ptr<WorldmapLoader, std::default_delete<WorldmapLoader>>::unique_ptr<true, void>(
            (unique_ptr<WorldmapLoader, std::default_delete<WorldmapLoader>>*)&field_232);
        field_288 = 4294967295;
        m_tileHeight = 4294967295;
        field_248 = -1;
        field_252 = -1;
        field_256 = -1;
        field_260 = -1;
        graphics::XPlotBlender<graphics::XPlot_NormalAlpha>::XPlotBlender<int>(
            (XPlotBlender<graphics::XPlot_NormalAlpha>*)&field_296, -1);
        graphics::XPlotBlender<graphics::XPlot_NormalAlpha>::XPlotBlender<int>(
            (XPlotBlender<graphics::XPlot_NormalAlpha>*)&field_300, -1);
        m_flashCount = 3;
        m_flashTics = 50;
        m_perpetualFlash = false;
        eastl::allocator::allocator(local_38, "EASTL hash_set");
        paVar1 = local_38;
        new (&field_320, paVar1)
            eastl::hash_set<int, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>();
        field_376 = 4294967295;
        field_380 = 4294967295;
        field_384 = -1;
        field_388 = -1;
        eastl::destruct<highlight::NpcUID*>((eastl*)&field_400, (NpcUID*)paVar1, extraout_RDX);
        eastl::destruct<highlight::NpcUID*>((eastl*)&field_404, (NpcUID*)paVar1, extraout_RDX_00);
        field_408 = 1;
        eastl::allocator::allocator(local_38, "EASTL hash_set");
        new (&field_416, local_38)
            eastl::hash_set<int, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>();
        eastl::allocator::allocator(local_38, "EASTL hash_set");
        new (&field_472, local_38)
            eastl::hash_set<int, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>();
        eastl::allocator::allocator(local_38, "EASTL hash_set");
        new (&field_528, local_38)
            eastl::hash_set<int, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>();
        eastl::allocator::allocator(local_38, "EASTL hash_set");
        new (&field_584, local_38)
            eastl::hash_set<int, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>();
        field_640 = false;
        field_644 = 0;
        field_648 = 4333622002672;
        field_656 = 4342211937266;
        field_664 = 1012;
        new (&field_672) eastl::list<shared_ptr<rs2lib::worldmap::MapElement>, eastl::allocator>();
        new (&field_704) jag::math::Vector2T<int>();
        eastl::allocator::allocator(local_38, "EASTL hash_map");
        new (&field_712, local_38) eastl::hash_map<int, shared_ptr<rs2lib::worldmap::MapElement>, eastl::hash<int>,
                                                   eastl::equal_to<int>, eastl::allocator, false>();
        p_Var2 = (_func_decltype_nullptr*)&rs2lib::CoordGrid::CoordGridNull;
        new (&field_768, (CoordGrid*)&rs2lib::CoordGrid::CoordGridNull) rs2lib::CoordGrid();
        new (&field_784, p_Var2) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>();
        field_804 = -1;
    }

    // 0x10016b470, 32 bytes, inline, placed by class name
    // Worldmap::IsLoaded() const
    void Worldmap::IsLoaded() {
        WorldmapLoader* this_00;

        this_00 = (WorldmapLoader*)std::unique_ptr<WorldmapLoader, std::default_delete<WorldmapLoader>>::operator->(
            (unique_ptr<WorldmapLoader, std::default_delete<WorldmapLoader>>*)&field_232);
        this_00->IsLoadComplete();
    }

    // 0x10016b5e0, 16 bytes, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // Worldmap::GetTileWidth() const
    /* game::GraphicsDefaults::GetSpriteModIconsID() const */

    undefined4 game::GraphicsDefaults::GetSpriteModIconsID() {
        return m_spriteModIconsID;
    }

} // namespace jag::oldscape::worldmap
