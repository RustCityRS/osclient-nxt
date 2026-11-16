// libs/game/runetek5/scene/minimap/MiniMap.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::game {
    class MiniMap {
    public:
        class MapElementListEntry;
        class MapSquareState;
        // virtual methods in vtable order
        virtual ~MiniMap();
        void RegisterTweakVars(tweak::ContainerGroup&);
        MiniMap(graphics::RT7Core&, ConfigProvider&, SceneManager&, PlayerVarDomain*, int, int, int);
        void CalcBuildMapSquares(int, int) const;
        void CreateRenderingResources();
        void DestroyRenderingResources();
        void CreateCompositingRT();
        void DestroyCompositingRT();
        void RenderToGUI(graphics::GUIManager&, math::Rect<int> const&);
        GetMiniMapRenderTexture();
        void ForceBaseUpdate();
        void RebuildTileListAndReprioritise(CoordFine&, int, int);
        void UpdateBaseRT(int);
        void ClearMinimapDepth(render::RenderTargets const&, math::Rect<int> const&, float);
        void CheckPendingLocationChangeRequests();
        void ForceBaseUpdate(shared_ptr<ChangeLocationRequest> const&);
        FindMapSquareState(MapSquareState*&, int, int);
        void MakeMapSquareStatePending(int, int);
        void ResizeRenderBuffer(int, int);
        void MainDraw(unsigned int, unsigned int, shared_ptr<World> const&, CoordFine const&, float, float,
                      std::function<void(MiniMap&, CoordFine const&)> const&);
        void SetAllSquaresIncomplete();
        void CheckMapElementList(World const&);
        void UpdateBase(unsigned int, World&, CoordFine const&);
        void BuildBase(CoordFine const&);
        void RenderLayers(World const&, CoordFine const&, float,
                          std::function<void(MiniMap&, CoordFine const&)> const&);
        void SetupBaseCameraFrameBuffer(graphics::SceneViewData&, CoordFine const&);
        void PutSquareAtTopOfPendingList(int, int);
        void CheckClearingRequirements(render::RenderContext&, render::RenderTargets const*);
        ulong RenderMapSquareIntoBase(unsigned int, World&, MapSquareState&, CoordFine const&, bool, bool);
        void SetupMiniMapCameraCompositeBuffer(graphics::SceneViewData&, CoordFine const&, float);
        void PrepareRebuildList(int, int);
        uint BuildMapElementList(World const&, int);
        ulong AddPendingMapElement(int, int, StaticMapElement const&, int, int, int, int);
        ulong FindMapSquareStateInList(MapSquareState*&, int, int,
                                       eastl::fixed_list<MapSquareState, 16ul, true, eastl::allocator>&);
        uint NeighboursLODLevel(MapSquareState const&);
        bool NeighboursTerrainDrawn(MapSquareState const&);
        RenderTerrainIntoBase(unsigned int, World&, MapSquareState&, CoordFine const&, MapSquare const&);
        ulong RenderLocationsIntoBase(unsigned int, World&, MapSquareState&, CoordFine const&, MapSquare const&);
        RenderMiniMapIcons(eastl::vector<shared_ptr<Location>, eastl::allocator> const&, MapSquareState&, int, int,
                           LinkMap const&, bool);
        ulong DrawMSI(int, int, MapSquareLocation const&, MSIType&, LocType const&, graphics::GUIManager&);
        ulong RenderLocationLinesIntoBase(World&, MapSquareState&, CoordFine const&, MapSquare const&);
        void DrawMapElement(MapElementListEntry&);
        void DrawDebugTileProgress(World const&, CoordFine const&);
        void DrawMapElement(shared_ptr<MapElementType> const&, int, int, MapElementListEntry*);
        void DrawMapElement(int, int, int);
        void DrawPolygon(MapElementType::Polygon const*, int, int);
        void DrawSprite(shared_ptr<graphics::SpriteAtlasReference> const&, int, int, int, int, int, int);
        GetScreenPosition(int, int, graphics::SceneViewData const&);
        void DrawSpriteReference(shared_ptr<graphics::SpriteAtlasReference> const&, int, int);
        void DrawSquare(int, int);
        void DrawSpriteReference(shared_ptr<graphics::SpriteAtlasReference> const&, int, int, int, int);
        void DrawMapArrowEdge(float, shared_ptr<graphics::SpriteAtlasReference> const&, int, int,
                              math::Vector3T<float> const&);
        void RotateAroundOrigin(math::Vector3T<float>&, math::Vector3T<float> const&, float);
        IsWithinMap(CoordFine const&);
        void DrawLoggedInPlayer();
        static /* 4 bytes */ TILES_PER_UPDATE;           // = 9
        static /* 1 bytes */ ENABLE_TERRAIN_PASS;        // = 1
        static /* 1 bytes */ ENABLE_LOC_PASS;            // = 1
        static /* 1 bytes */ ENABLE_LINES_PASS;          // = 1
        static /* 1 bytes */ ENABLE_BASE_LAYER;          // = 1
        static /* 1 bytes */ ENABLE_CUSTOM_LAYER;        // = 1
        static /* 1 bytes */ DEBUG_ISOLATE_X;            // = 50
        static /* 1 bytes */ DEBUG_ISOLATE_Z;            // = 50
        static /* 1 bytes */ MINIMAP_RENDER_FORMAT;      // = 18
        static /* 1 bytes */ MINIMAP_COMPOSITING_FORMAT; // = 18
        static /* 1 bytes */ DRAW_MINIMAP;               // = 1
        static /* 1 bytes */ ENABLE_ENVIRONMENT_TINTING;
        static /* 1 bytes */ DEBUG_BASE_RT;
        static /* 1 bytes */ DEBUG_BASE_DEPTH_BUFFER;
        static /* 1 bytes */ DEBUG_COMPOSITE_RT;
        static /* 1 bytes */ DEBUG_TILE_PROGRESS;
        static /* 1 bytes */ FORCE_TERRAIN_REDRAWS;
        static /* 1 bytes */ FORCE_LINE_REDRAWS;
        static /* 1 bytes */ FORCE_TOTAL_REBUILD;
        static /* 4 bytes */ DEBUG_ISOLATE_TILE;

        // data members, from how the methods use this: 6515920 bytes
        undefined** field_0;       // offset 0, vtable pointer
        RT7Core* field_8;          // offset 8
        ConfigProvider* field_16;  // offset 16
        SceneManager* field_24;    // offset 24
        PlayerVarDomain* field_32; // offset 32
        undefined8 field_40;       // offset 40
        char _unknown_48[32];
        SceneViewData field_80; // offset 80
        char _unknown_744[8];
        undefined1 field_752; // offset 752
        char _unknown_753[63];
        DirectionalLight field_816; // offset 816
        char _unknown_968[40];
        undefined4 field_1008; // offset 1008
        undefined1 field_1012; // offset 1012
        undefined1 field_1013; // offset 1013
        undefined1 field_1014; // offset 1014
        char _unknown_1015[33];
        float field_1048;      // offset 1048
        float field_1052;      // offset 1052
        undefined1 field_1056; // offset 1056
        char _unknown_1057[3];
        undefined4 field_1060; // offset 1060
        uint field_1064;       // offset 1064
        char _unknown_1068[36];
        undefined1 field_1104; // offset 1104
        char _unknown_1105[3];
        int field_1108;  // offset 1108
        uint field_1112; // offset 1112
        uint field_1116; // offset 1116
        int field_1120;  // offset 1120
        uint field_1124; // offset 1124
        int field_1128;  // offset 1128
        char _unknown_1132[4];
        RenderTargetsManager* field_1136; // offset 1136
        shared_ptr field_1144;            // offset 1144
        uint field_1160;                  // offset 1160
        char _unknown_1164[4];
        shared_ptr field_1168; // offset 1168
        char _unknown_1184[16];
        float field_1200; // offset 1200
        char _unknown_1204[36];
        int field_1240; // offset 1240
        char _unknown_1244[28];
        float field_1272;      // offset 1272
        int field_1276;        // offset 1276
        int field_1280;        // offset 1280
        int field_1284;        // offset 1284
        uint field_1288;       // offset 1288
        int field_1292;        // offset 1292
        int field_1296;        // offset 1296
        int field_1300;        // offset 1300
        uint field_1304;       // offset 1304
        char field_1308;       // offset 1308
        byte field_1309;       // offset 1309
        undefined1 field_1310; // offset 1310
        char _unknown_1311[97];
        int field_1408;        // offset 1408
        undefined4 field_1412; // offset 1412
        undefined4 field_1416; // offset 1416
        uint field_1420;       // offset 1420
        undefined1 field_1424; // offset 1424
        char _unknown_1425[98271];
        undefined1 field_99696; // offset 99696
        char _unknown_99697[6416223];
    };

    class MiniMap::MapElementListEntry {
    public:
        ~MapElementListEntry();
        MapElementListEntry(MapElementListEntry&&);
        MapElementListEntry* operator=(MapElementListEntry&&);
        MapElementListEntry();
        MapElementListEntry* operator=(MapElementListEntry const&);
        MapElementListEntry(MapElementListEntry const&);

        // data members, from how the methods use this: 40 bytes
        undefined8 field_0; // offset 0
        undefined4 field_8; // offset 8
        char _unknown_12[28];
    };

    class MiniMap::MapSquareState {
    public:
        class IconState;
        class TileState;
        MapSquareState();
        void swap(MapSquareState&);
        ~MapSquareState();

        // data members, from how the methods use this: 5760 bytes
        uint field_0;        // offset 0
        uint field_4;        // offset 4
        undefined4 field_8;  // offset 8
        undefined1 field_12; // offset 12
        char _unknown_13[1579];
        TileState field_1592; // offset 1592
        char _unknown_1664[4088];
        undefined1 field_5752; // offset 5752
        char _unknown_5753[7];
    };

    class MiniMap::MapSquareState::IconState {
    public:
        void ResetProgress();
        GetProgress(int, int) const;
        void SetProgress(int, int, LODLevel);
        IconState();
        uint GetKey(int, int) const;

        // data members, from how the methods use this: 4104 bytes
        char _unknown_0[4096];
        bool field_4096; // offset 4096
        char _unknown_4097[7];
    };

    class MiniMap::MapSquareState::TileState {
    public:
        void SetProgress(CoordGrid const&, LODLevel);
        void ResetProgress();
        GetProgress(LocationContainer const&) const;
        void SetProgress(LocationContainer const&);
        void SetProgress(LocationContainer const&, LODLevel);
        TileState();
        void GetKey(LocationContainer const&) const;
        void GetKey(CoordGrid const&) const;
        GetProgress(CoordGrid const&) const;
        uint GetKey(int, int) const;

        // data members, from how the methods use this: 72 bytes
        char _unknown_0[64];
        bool field_64; // offset 64
        char _unknown_65[7];
    };

    // 0x1003bcf50, 48 bytes, inline, placed by class name
    // MiniMap::GetMiniMapRenderTexture()
    undefined8 MiniMap::GetMiniMapRenderTexture() {
        RenderTargets* this_00;
        vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>* this_01;
        undefined8* puVar1;

        this_00 = (RenderTargets*)shared_ptr<render::RenderTargets>::operator->(
            (shared_ptr<render::RenderTargets>*)field_1168);
        this_01 = (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>*)
                      this_00->GetColourTargetTextures();
        puVar1 = (undefined8*)
            eastl::vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true,
                                                                          eastl::allocator>>::operator[](this_01, 0);
        return *puVar1;
    }

    // 0x1003bfed0, 16 bytes, complete-object constructor, inline, placed by class name
    // MiniMap::MapSquareState::MapSquareState(): jumps straight to the base-object constructor

    // 0x1003bfee0, 144 bytes, inline, placed by class name
    // MiniMap::MapSquareState::swap(MiniMap::MapSquareState&)
    void MiniMap::MapSquareState::swap(MapSquareState* param_1) {
        eastl::swap<unsigned int>(&field_0, &param_1->field_0);
        eastl::swap<unsigned int>(&field_4, &param_1->field_4);
        eastl::swap<unsigned int>(&field_8, &param_1->field_8);
        eastl::swap<signed char>((signed*)&field_12, (signed*)&param_1->field_12);
        (&field_16, (fixed_vector*)&param_1->field_16)->swap();
        eastl::swap<MiniMap::MapSquareState::TileState>((TileState*)field_1592, (TileState*)param_1->field_1592);
        eastl::swap<MiniMap::MapSquareState::IconState>((IconState*)(field_1592 + 64),
                                                        (IconState*)(param_1->field_1592 + 64));
        eastl::swap<signed char>((signed*)&field_5752, (signed*)&param_1->field_5752);
    }

    // 0x1003c0050, 16 bytes, complete-object destructor, inline, placed by class name
    // MiniMap::MapSquareState::~MapSquareState(): jumps straight to the base-object destructor

    // 0x1003c2ed0, 2000 bytes, inline, placed by class name
    // MiniMap::DrawDebugTileProgress(World const&, CoordFine const&)::$_1::operator()(unsigned int, eastl::fixed_list<MiniMap::MapSquareState, 16ul, true, eastl::allocator> const&, int, int) const
    /* MiniMap::DrawDebugTileProgress(World const&, CoordFine
   const&)::$_1::TEMPNAMEPLACEHOLDERVALUE(unsigned int,
   eastl::fixed_list<MiniMap::MapSquareState, 16ul, true, eastl::allocator> const&, int,
   int) const */

    void MiniMap::DrawDebugTileProgress(World_const&, CoordFine_const&)::$_1 ::operator()(uint param_1,
                                                                                          fixed_list* param_2,
                                                                                          int param_3, int param_4) {
        MiniMap* pMVar1;
        FontHelpers* pFVar2;
        bool bVar4;
        char cVar5;
        undefined1 uVar6;
        byte bVar7;
        int iVar8;
        uint* puVar9;
        vector* pvVar10;
        int* piVar11;
        Layout* pLVar12;
        FontMetrics* pFVar13;
        shared_ptr* this_00;
        HTTPRequest* this_01;
        shared_ptr* psVar14;
        ModularParticleEmitterTemplate* pMVar15;
        undefined8 uVar16;
        Entity* pEVar17;
        undefined8 uVar18;
        ulong uVar19;
        hashtable_iterator_base* extraout_RDX;
        uint uVar20;
        hashtable_iterator_base* phVar21;
        fixed_string* pfVar23;
        int iVar24;
        int iVar25;
        ulong uVar26;
        undefined1 auVar27[16];
        StringView SVar28;
        StringView SVar29;
        StringView SVar30;
        StringView SVar31;
        TextFlags in_stack_fffffffffffffdd8;
        undefined7 in_stack_fffffffffffffdd9;
        CoordGrid local_220;
        optional<int> local_210[8];
        StringView local_208;
        StringView local_1f8;
        StringView local_1e8;
        StringView local_1d8;
        TextProperties local_1c8;
        MapSquareState* local_1a0;
        optional<int> local_198[8];
        ulong local_190;
        ulong local_188;
        ulong local_180;
        undefined8 local_178;
        shared_ptr local_170;
        MapSquareState* local_160;
        weak_ptr<oldscape::dash3d::Wall>* local_158;
        int local_144;
        int local_140;
        int local_13c;
        int local_138;
        uint local_134;
        undefined8 local_130;
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_128[16];
        ulong local_118;
        int local_10c;
        MiniMap* local_108;
        ulong local_100;
        uint local_f4;
        uint local_f0;
        uint local_ec;
        TextFlags local_e8[8];
        int local_e0[42];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        pMVar1 = field_0;
        if (param_4 == -1) {
            param_2->size();
        }
        iVar8 = pMVar1->field_8->GetInterfaceWidth();
        if (iVar8 < 0) {
            iVar8 = iVar8 + 3;
        }
        local_10c = (int)(CONCAT44(iVar8 >> 31, iVar8 >> 2) / (long)pMVar1->field_1108);
        local_130 = eastl::list<jag::console::Line, eastl::allocator>::begin();
        auVar27 = eastl::list<jag::console::Line, eastl::allocator>::end();
        local_178 = auVar27._0_8_;
        phVar21 = (hashtable_iterator_base*)&local_178;
        bVar4 = eastl::operator!=((eastl*)&local_130, phVar21, auVar27._8_8_);
        if (bVar4) {
            local_158 = (weak_ptr<oldscape::dash3d::Wall>*)&pMVar1->field_48;
            local_138 = local_10c / 2;
            local_180 = (ulong)(uint)(local_10c / 9);
            do {
                puVar9 =
                    (uint*)eastl::ListIterator<jag::console::Line, jag::console::Line*, jag::console::Line&>::operator*(
                        (ListIterator<jag::console::Line, jag::console::Line*, jag::console::Line&>*)&local_130);
                local_f0 = *puVar9;
                iVar25 = local_f0 - pMVar1->field_1304;
                local_ec = puVar9[1];
                uVar20 = ~local_ec;
                iVar8 = pMVar1->field_1280;
                shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>::shared_ptr(
                    local_128, (_func_decltype_nullptr*)phVar21);
                iVar24 = local_10c;
                iVar25 = iVar25 * local_10c;
                pvVar10 = local_128->SSOBeginPtr(phVar21);
                *(int*)pvVar10 = iVar25;
                piVar11 = (int*)local_128->qw();
                *piVar11 = iVar24;
                piVar11 = (int*)local_128->y();
                *piVar11 = (uVar20 + iVar8) * iVar24 + 100;
                piVar11 = (int*)local_128->second();
                *piVar11 = iVar24;
                if (param_1 != 4294967295) {
                    ((__1*)this[1].field_0)->AddColouredRectangle(local_128, param_1, 1);
                }
                cVar5 = local_158->expired();
                if (cVar5 == '\0') {
                    weak_ptr<oldscape::rs2lib::IfType>::lock();
                    bVar4 = shared_ptr::operator_cast_to_bool(&local_170);
                    if (bVar4) {
                        local_e0[0] = 1;
                        graphics::TextFlags::TextFlags(local_e8, local_e0, 1);
                        new (&local_1c8) graphics::TextProperties(&local_170, in_stack_fffffffffffffdd8);
                        local_e0[0] = 255;
                        eastl::optional<int>::optional(local_210, local_e0);
                        local_1c8.SetColours(4294967295, local_210);
                        pLVar12 =
                            (Layout*)shared_ptr<graphics::Font>::operator->((shared_ptr<graphics::Font>*)&local_170);
                        pvVar10 = eastl::string::Layout::SSOBeginPtr(pLVar12, (type*)4294967295);
                        pFVar13 = (FontMetrics*)shared_ptr<graphics::FontMetrics>::operator->(
                            (shared_ptr<graphics::FontMetrics>*)pvVar10);
                        uVar6 = pFVar13->GetMaxAscent();
                        local_118 = CONCAT71(local_118._1_7_, uVar6);
                        pLVar12 =
                            (Layout*)shared_ptr<graphics::Font>::operator->((shared_ptr<graphics::Font>*)&local_170);
                        pvVar10 = eastl::string::Layout::SSOBeginPtr(pLVar12, (type*)4294967295);
                        pFVar13 = (FontMetrics*)shared_ptr<graphics::FontMetrics>::operator->(
                            (shared_ptr<graphics::FontMetrics>*)pvVar10);
                        uVar6 = pFVar13->GetMaxDescent();
                        local_f4 = CONCAT31(local_f4._1_3_, uVar6);
                        puVar9 = (uint*)local_128->y();
                        local_100 = (ulong)*puVar9;
                        new (local_e0) eastl::fixed_string<char, 128, true, eastl::allocator>();
                        eastl::basic_string<
                            char, eastl::fixed_vector_allocator<1ul, 128ul, 1ul, 0ul, true, eastl::allocator>>::
                            sprintf((char*)local_e0, "%d,%d", (ulong)local_f0, (ulong)local_ec);
                        pFVar2 = (FontHelpers*)pMVar1->field_40;
                        pfVar23 = (fixed_string*)local_e0;
                        StringView::StringView<eastl::fixed_string<char, 40, true, eastl::allocator>>(&local_208,
                                                                                                      pfVar23);
                        pvVar10 = local_128->SSOBeginPtr(pfVar23);
                        SVar28.field_8._0_4_ = *(undefined4*)pvVar10;
                        SVar28.field_0 = (ulong)&local_208;
                        SVar28.field_8._4_4_ = 0;
                        pFVar2->DrawString(
                            SVar28, (int)local_100, 0, (uint)&local_1c8,
                            (TextProperties*)CONCAT71(in_stack_fffffffffffffdd9, in_stack_fffffffffffffdd8));
                        iVar8 = ((__1*)this[2].field_0)->GetMapSquareMinX();
                        uVar20 = local_f0;
                        if ((((iVar8 <= (int)local_f0) &&
                              (iVar8 = ((__1*)this[2].field_0)->GetMapSquareMaxX(), (int)uVar20 <= iVar8)) &&
                             (iVar8 = ((__1*)this[2].field_0)->GetMapSquareMinZ(), iVar8 <= (int)local_ec)) &&
                            (iVar8 = ((__1*)this[2].field_0)->GetMapSquareMaxZ(), (int)local_ec <= iVar8)) {
                            this_00 = (shared_ptr*)((__1*)this[2].field_0)->GetMapSquare(uVar20, local_ec);
                            bVar4 = shared_ptr::operator_cast_to_bool(this_00);
                            if (bVar4) {
                                local_108 = pMVar1;
                                this_01 =
                                    (HTTPRequest*)shared_ptr<MapSquare>::operator->((shared_ptr<MapSquare>*)this_00);
                                psVar14 = (shared_ptr*)this_01->GetContentType();
                                bVar4 = operator!=(psVar14, (_func_decltype_nullptr*)0);
                                iVar8 = (local_f4 & 255) + (uint)(byte)local_118;
                                iVar24 = (int)local_100 + iVar8;
                                local_134 = param_1;
                                cVar5 = FindMapSquareState(local_108, &local_1a0, local_f0, local_ec);
                                if (cVar5 == '\0') {
                                    pMVar15 = (ModularParticleEmitterTemplate*)shared_ptr<MapSquare>::operator->(
                                        (shared_ptr<MapSquare>*)this_00);
                                    uVar6 = pMVar15->GetNumTilesPerRow();
                                    uVar16 = LODLevelToString(uVar6);
                                    pEVar17 =
                                        (Entity*)shared_ptr<MapSquare>::operator->((shared_ptr<MapSquare>*)this_00);
                                    uVar6 = pEVar17->GetTargetLOD();
                                    uVar18 = LODLevelToString(uVar6);
                                    eastl::basic_string<
                                        char, eastl::fixed_vector_allocator<1ul, 128ul, 1ul, 0ul, true,
                                                                            eastl::allocator>>::sprintf((char*)local_e0,
                                                                                                        "%s/%s", uVar16,
                                                                                                        uVar18);
                                    pFVar2 = (FontHelpers*)local_108->field_40;
                                    pfVar23 = (fixed_string*)local_e0;
                                    StringView::StringView<eastl::fixed_string<char, 40, true, eastl::allocator>>(
                                        &local_1d8, pfVar23);
                                    pvVar10 = local_128->SSOBeginPtr(pfVar23);
                                    SVar31.field_8._0_4_ = *(undefined4*)pvVar10;
                                    SVar31.field_0 = (ulong)&local_1d8;
                                    SVar31.field_8._4_4_ = 0;
                                    pFVar2->DrawString(SVar31, iVar24, 0, (uint)&local_1c8,
                                                       (TextProperties*)CONCAT71(in_stack_fffffffffffffdd9,
                                                                                 in_stack_fffffffffffffdd8));
                                } else {
                                    pMVar15 = (ModularParticleEmitterTemplate*)shared_ptr<MapSquare>::operator->(
                                        (shared_ptr<MapSquare>*)this_00);
                                    uVar6 = pMVar15->GetNumTilesPerRow();
                                    uVar16 = LODLevelToString(uVar6);
                                    pEVar17 =
                                        (Entity*)shared_ptr<MapSquare>::operator->((shared_ptr<MapSquare>*)this_00);
                                    uVar6 = pEVar17->GetTargetLOD();
                                    uVar18 = LODLevelToString(uVar6);
                                    local_160 = local_1a0;
                                    eastl::basic_string<
                                        char, eastl::fixed_vector_allocator<1ul, 128ul, 1ul, 0ul, true,
                                                                            eastl::allocator>>::sprintf((char*)local_e0,
                                                                                                        "%s/%s (%d)",
                                                                                                        uVar16, uVar18);
                                    pFVar2 = (FontHelpers*)local_108->field_40;
                                    pfVar23 = (fixed_string*)local_e0;
                                    StringView::StringView<eastl::fixed_string<char, 40, true, eastl::allocator>>(
                                        &local_1f8, pfVar23);
                                    pvVar10 = local_128->SSOBeginPtr(pfVar23);
                                    SVar29.field_8._0_4_ = *(undefined4*)pvVar10;
                                    SVar29.field_0 = (ulong)&local_1f8;
                                    SVar29.field_8._4_4_ = 0;
                                    pFVar2->DrawString(SVar29, iVar24, 0, (uint)&local_1c8,
                                                       (TextProperties*)CONCAT71(in_stack_fffffffffffffdd9,
                                                                                 in_stack_fffffffffffffdd8));
                                    local_160 = (MapSquareState*)local_160->field_1592;
                                    uVar20 = 2 - bVar4;
                                    local_118 = (ulong)uVar20;
                                    local_100 = (ulong)(uint)((int)local_100 + iVar8 * 9);
                                    local_190 = (ulong)(iVar8 * uVar20);
                                    local_13c = uVar20 * 8;
                                    uVar19 = 0;
                                    do {
                                        local_f4 = (int)uVar19 * 8;
                                        local_140 = ((int)uVar19 + -4) * (int)local_180 + local_138;
                                        iVar8 = 0;
                                        uVar20 = 0;
                                        uVar26 = local_100 & 4294967295;
                                        local_188 = uVar19;
                                        do {
                                            new (&local_220) game::CoordGrid(0, local_f0, local_ec, local_f4, uVar20);
                                            bVar7 = local_160->GetProgress(&local_220);
                                            local_144 = 255;
                                            eastl::optional<int>::optional(local_198, &local_144);
                                            local_1c8.SetColours(-(uint)(bVar7 == 0) | (uint)bVar7 * 1048576 - 8355712,
                                                                 local_198);
                                            eastl::basic_string<char, eastl::fixed_vector_allocator<
                                                                          1ul, 128ul, 1ul, 0ul, true,
                                                                          eastl::allocator>>::sprintf((char*)local_e0,
                                                                                                      "%d",
                                                                                                      (ulong)bVar7);
                                            pFVar2 = (FontHelpers*)local_108->field_40;
                                            pfVar23 = (fixed_string*)local_e0;
                                            StringView::StringView<
                                                eastl::fixed_string<char, 40, true, eastl::allocator>>(&local_1e8,
                                                                                                       pfVar23);
                                            pvVar10 = local_128->SSOBeginPtr(pfVar23);
                                            SVar30.field_8._0_4_ = *(int*)pvVar10 + local_140;
                                            SVar30.field_0 = (ulong)&local_1e8;
                                            SVar30.field_8._4_4_ = 0;
                                            pFVar2->DrawString(SVar30, (int)uVar26, 0, (uint)&local_1c8,
                                                               (TextProperties*)CONCAT71(in_stack_fffffffffffffdd9,
                                                                                         in_stack_fffffffffffffdd8));
                                            uVar26 = (ulong)(uint)((int)uVar26 - (int)local_190);
                                            uVar20 = uVar20 + local_13c;
                                            iVar8 = iVar8 + (int)local_118;
                                        } while (iVar8 < 8);
                                        uVar20 = (int)local_188 + (int)local_118;
                                        uVar19 = (ulong)uVar20;
                                    } while ((int)uVar20 < 8);
                                }
                            }
                        }
                        /* WARNING: Subroutine does not return */
                        local_e0->~fixed_string();
                    }
                    local_170.~shared_ptr();
                }
                eastl::ListIterator<jag::console::Line, jag::console::Line*, jag::console::Line&>::operator++(
                    (ListIterator<jag::console::Line, jag::console::Line*, jag::console::Line&>*)&local_130);
                phVar21 = (hashtable_iterator_base*)&local_178;
                bVar4 = eastl::operator!=((eastl*)&local_130, phVar21, extraout_RDX);
            } while (bVar4);
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x1003d06c0, 96 bytes, base-object constructor, inline, placed by class name
    // MiniMap::MapSquareState::MapSquareState()
    void MiniMap::MapSquareState::MapSquareState() {
        field_0 = 4294967295;
        field_4 = 4294967295;
        field_8 = 0;
        field_12 = 5;
        new (&field_16) eastl::fixed_vector<MiniMap::MapElementListEntry, 32ul, true, eastl::allocator>();
        new (field_1592) TileState();
        new ((field_1592 + 64)) IconState();
        field_5752 = 5;
    }

    // 0x1003d0950, 16 bytes, complete-object destructor, inline, placed by class name
    // MiniMap::MapElementListEntry::~MapElementListEntry(): jumps straight to the base-object destructor

    // 0x1003d0960, 48 bytes, base-object destructor, inline, placed by class name
    // MiniMap::MapElementListEntry::~MapElementListEntry()
    void MiniMap::MapElementListEntry::~MapElementListEntry() {
        (&field_32)->~shared_ptr();
        (&field_16)->~shared_ptr();
    }

    // 0x1003d1310, 16 bytes, complete-object constructor, inline, placed by class name
    // MiniMap::MapElementListEntry::MapElementListEntry(MiniMap::MapElementListEntry&&): jumps straight to the base-object constructor

    // 0x1003d1340, 96 bytes, base-object constructor, inline, placed by class name
    // MiniMap::MapElementListEntry::MapElementListEntry(MiniMap::MapElementListEntry&&)
    void MiniMap::MapElementListEntry::MapElementListEntry(MapElementListEntry* param_1) {
        field_8 = param_1->field_8;
        field_0 = param_1->field_0;
        shared_ptr<oldscape::RSevenDebugPresetProvider>::shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(
            (shared_ptr<oldscape::RSevenDebugPresetProvider>*)&field_16, (shared_ptr*)&param_1->field_16);
        shared_ptr<oldscape::RSevenDebugPresetProvider>::shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(
            (shared_ptr<oldscape::RSevenDebugPresetProvider>*)&field_32, (shared_ptr*)&param_1->field_32);
    }

    // 0x1003d1470, 64 bytes, inline, placed by class name
    // MiniMap::MapElementListEntry::operator=(MiniMap::MapElementListEntry&&)
    /* MiniMap::MapElementListEntry::TEMPNAMEPLACEHOLDERVALUE(MiniMap::MapElementListEntry&&)
    */

    MapElementListEntry* MiniMap::MapElementListEntry::operator=(MapElementListEntry* param_1) {
        field_8 = param_1->field_8;
        field_0 = param_1->field_0;
        shared_ptr<MapElementType>::operator=((shared_ptr<MapElementType>*)&field_16, (shared_ptr*)&param_1->field_16);
        shared_ptr<MapElementType>::operator=((shared_ptr<MapElementType>*)&field_32, (shared_ptr*)&param_1->field_32);
        return this;
    }

    // 0x1003d1550, 16 bytes, base-object destructor, inline, placed by class name
    // MiniMap::MapSquareState::~MapSquareState()
    void MiniMap::MapSquareState::~MapSquareState() {
        (&field_16)->~fixed_vector();
    }

    // 0x1003d3a30, 16 bytes, complete-object constructor, inline, placed by class name
    // MiniMap::MapElementListEntry::MapElementListEntry(): jumps straight to the base-object constructor

    // 0x1003d3a40, 80 bytes, base-object constructor, inline, placed by class name
    // MiniMap::MapElementListEntry::MapElementListEntry()
    void MiniMap::MapElementListEntry::MapElementListEntry() {
        _func_decltype_nullptr* in_RSI;

        field_8 = 4294967295;
        new (&field_16, in_RSI) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        new (&field_32, in_RSI) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
    }

    // 0x1003d46b0, 64 bytes, inline, placed by class name
    // MiniMap::MapElementListEntry::operator=(MiniMap::MapElementListEntry const&)
    /* MiniMap::MapElementListEntry::TEMPNAMEPLACEHOLDERVALUE(MiniMap::MapElementListEntry
   const&) */

    MapElementListEntry* MiniMap::MapElementListEntry::operator=(MapElementListEntry* param_1) {
        field_8 = param_1->field_8;
        field_0 = param_1->field_0;
        shared_ptr<MapElementType>::operator=((shared_ptr<MapElementType>*)&field_16, (shared_ptr*)&param_1->field_16);
        shared_ptr<MapElementType>::operator=((shared_ptr<MapElementType>*)&field_32, (shared_ptr*)&param_1->field_32);
        return this;
    }

    // 0x1003d4790, 16 bytes, complete-object constructor, inline, placed by class name
    // MiniMap::MapElementListEntry::MapElementListEntry(MiniMap::MapElementListEntry const&): jumps straight to the base-object constructor

    // 0x1003d47a0, 96 bytes, base-object constructor, inline, placed by class name
    // MiniMap::MapElementListEntry::MapElementListEntry(MiniMap::MapElementListEntry const&)
    void MiniMap::MapElementListEntry::MapElementListEntry(MapElementListEntry* param_1) {
        field_8 = param_1->field_8;
        field_0 = param_1->field_0;
        new (&field_16, (shared_ptr*)&param_1->field_16) shared_ptr<oldscape::dash3d::Decor>();
        new (&field_32, (shared_ptr*)&param_1->field_32) shared_ptr<oldscape::dash3d::Decor>();
    }

} // namespace jag::game
