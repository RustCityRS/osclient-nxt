// libs/game/runetek5/scene/minimap/MiniMap.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::game {
    class MiniMap {
    public:
        class MapElementListEntry;
        class MapSquareState;
        // virtual methods in vtable order
        virtual ~MiniMap();
        void RegisterTweakVars(tweak::ContainerGroup& containerGroup);
        MiniMap(graphics::RT7Core& rt7Core, ConfigProvider& configProvider, SceneManager& sceneManager,
                PlayerVarDomain* playerVarDomain, int arg5, int arg6, int arg7);
        void CalcBuildMapSquares(int arg1, int arg2) const;
        void CreateRenderingResources();
        void DestroyRenderingResources();
        void CreateCompositingRT();
        void DestroyCompositingRT();
        void RenderToGUI(graphics::GUIManager& guiManager, const math::Rect<int>& rect);
        uint64_t GetMiniMapRenderTexture();
        void ForceBaseUpdate();
        void RebuildTileListAndReprioritise(CoordFine& coordFine, int arg2, int arg3);
        void UpdateBaseRT(int arg1);
        void ClearMinimapDepth(const render::RenderTargets& renderTargets, const math::Rect<int>& rect, float arg3);
        void CheckPendingLocationChangeRequests();
        void ForceBaseUpdate(const shared_ptr<ChangeLocationRequest>& changeLocationRequest);
        uint32_t FindMapSquareState(MapSquareState*& arg1, int arg2, int arg3);
        void MakeMapSquareStatePending(int arg1, int arg2);
        void ResizeRenderBuffer(int arg1, int arg2);
        void MainDraw(unsigned int arg1, unsigned int arg2, const shared_ptr<World>& world, const CoordFine& coordFine,
                      float arg5, float arg6, std::function<void(MiniMap&, CoordFine const&)> const& callback);
        void SetAllSquaresIncomplete();
        void CheckMapElementList(const World& world);
        void UpdateBase(unsigned int arg1, World& world, const CoordFine& coordFine);
        void BuildBase(const CoordFine& coordFine);
        void RenderLayers(const World& world, const CoordFine& coordFine, float arg3,
                          std::function<void(MiniMap&, CoordFine const&)> const& callback);
        void SetupBaseCameraFrameBuffer(graphics::SceneViewData& sceneViewData, const CoordFine& coordFine);
        void PutSquareAtTopOfPendingList(int arg1, int arg2);
        void CheckClearingRequirements(render::RenderContext& renderContext,
                                       const render::RenderTargets* renderTargets);
        unsigned long RenderMapSquareIntoBase(unsigned int arg1, World& world, MapSquareState& mapSquareState,
                                              const CoordFine& coordFine, bool arg5, bool arg6);
        void SetupMiniMapCameraCompositeBuffer(graphics::SceneViewData& sceneViewData, const CoordFine& coordFine,
                                               float arg3);
        void PrepareRebuildList(int arg1, int arg2);
        unsigned int BuildMapElementList(const World& world, int arg2);
        uint32_t AddPendingMapElement(int arg1, int arg2, const StaticMapElement& staticMapElement, int arg4, int arg5,
                                      int arg6, int arg7);
        uint32_t FindMapSquareStateInList(MapSquareState*& arg1, int arg2, int arg3,
                                          eastl::fixed_list<MapSquareState, 16ul>& fixed_list);
        unsigned int NeighboursLODLevel(const MapSquareState& mapSquareState);
        bool NeighboursTerrainDrawn(const MapSquareState& mapSquareState);
        uint64_t RenderTerrainIntoBase(unsigned int arg1, World& world, MapSquareState& mapSquareState,
                                       const CoordFine& coordFine, const MapSquare& mapSquare);
        unsigned long RenderLocationsIntoBase(unsigned int arg1, World& world, MapSquareState& mapSquareState,
                                              const CoordFine& coordFine, const MapSquare& mapSquare);
        uint64_t RenderMiniMapIcons(const eastl::vector<shared_ptr<Location>>& locations,
                                    MapSquareState& mapSquareState, int arg3, int arg4, const LinkMap& linkMap,
                                    bool arg6);
        void DrawMSI(int arg1, int arg2, const MapSquareLocation& mapSquareLocation, MSIType& msiType,
                     const LocType& locType, graphics::GUIManager& guiManager);
        unsigned long RenderLocationLinesIntoBase(World& world, MapSquareState& mapSquareState,
                                                  const CoordFine& coordFine, const MapSquare& mapSquare);
        void DrawMapElement(MapElementListEntry& mapElementListEntry);
        void DrawDebugTileProgress(const World& world, const CoordFine& coordFine);
        void DrawMapElement(const shared_ptr<MapElementType>& mapElementType, int arg2, int arg3,
                            MapElementListEntry* mapElementListEntry);
        void DrawMapElement(int arg1, int arg2, int arg3);
        void DrawPolygon(const MapElementType::Polygon* polygon, int arg2, int arg3);
        void DrawSprite(const shared_ptr<graphics::SpriteAtlasReference>& spriteAtlasReference, int arg2, int arg3,
                        int arg4, int arg5, int arg6, int arg7);
        MiniMap* GetScreenPosition(int arg1, int arg2, const graphics::SceneViewData& sceneViewData);
        void DrawSpriteReference(const shared_ptr<graphics::SpriteAtlasReference>& spriteAtlasReference, int arg2,
                                 int arg3);
        void DrawSquare(int arg1, int arg2);
        void DrawSpriteReference(const shared_ptr<graphics::SpriteAtlasReference>& spriteAtlasReference, int arg2,
                                 int arg3, int arg4, int arg5);
        void DrawMapArrowEdge(float arg1, const shared_ptr<graphics::SpriteAtlasReference>& spriteAtlasReference,
                              int arg3, int arg4, const math::Vector3T<float>& vector3);
        void RotateAroundOrigin(math::Vector3T<float>& vector31, const math::Vector3T<float>& vector32, float arg3);
        bool IsWithinMap(const CoordFine& coordFine);
        void DrawLoggedInPlayer();
        static int32_t TILES_PER_UPDATE;           // = 9
        static bool ENABLE_TERRAIN_PASS;           // = 1
        static bool ENABLE_LOC_PASS;               // = 1
        static bool ENABLE_LINES_PASS;             // = 1
        static bool ENABLE_BASE_LAYER;             // = 1
        static bool ENABLE_CUSTOM_LAYER;           // = 1
        static uint8_t DEBUG_ISOLATE_X;            // = 50
        static uint8_t DEBUG_ISOLATE_Z;            // = 50
        static uint8_t MINIMAP_RENDER_FORMAT;      // = 18
        static uint8_t MINIMAP_COMPOSITING_FORMAT; // = 18
        static bool DRAW_MINIMAP;                  // = 1
        static bool ENABLE_ENVIRONMENT_TINTING;
        static bool DEBUG_BASE_RT;
        static bool DEBUG_BASE_DEPTH_BUFFER;
        static bool DEBUG_COMPOSITE_RT;
        static bool DEBUG_TILE_PROGRESS;
        static bool FORCE_TERRAIN_REDRAWS;
        static bool FORCE_LINE_REDRAWS;
        static bool FORCE_TOTAL_REBUILD;
        static bool DEBUG_ISOLATE_TILE;

    private:
        RT7Core* field_8;
        ConfigProvider* field_16;
        SceneManager* field_24;
        PlayerVarDomain* field_32;
        uint64_t field_40;
        uint8_t _unknown_48[32];
        GraphNode field_80;
        uint8_t _unknown_600[216];
        DirectionalLight field_816;
        uint8_t _unknown_968[40];
        uint32_t field_1008;
        uint8_t field_1012;
        uint8_t field_1013;
        uint8_t field_1014;
        uint8_t _unknown_1015[33];
        float field_1048;
        float field_1052;
        uint8_t field_1056;
        uint8_t _unknown_1057[3];
        uint32_t field_1060;
        unsigned int field_1064;
        uint8_t _unknown_1068[36];
        uint8_t field_1104;
        uint8_t _unknown_1105[3];
        int field_1108;
        unsigned int field_1112;
        unsigned int field_1116;
        int field_1120;
        unsigned int field_1124;
        int field_1128;
        uint8_t _unknown_1132[4];
        RenderTargetsManager* field_1136;
        shared_ptr field_1144;
        unsigned int field_1160;
        uint8_t _unknown_1164[36];
        float field_1200;
        uint8_t _unknown_1204[36];
        int field_1240;
        uint8_t _unknown_1244[28];
        float field_1272;
        int field_1276;
        int field_1280;
        int field_1284;
        int field_1288;
        int field_1292;
        int field_1296;
        int field_1300;
        int field_1304;
        char field_1308;
        uint8_t field_1309;
        uint8_t field_1310;
        uint8_t _unknown_1311[97];
        int field_1408;
        uint32_t field_1412;
        uint32_t field_1416;
        int field_1420;
        uint8_t _unknown_1424[6514496];
    };

    class MiniMap::MapElementListEntry {
    public:
        ~MapElementListEntry();
        MapElementListEntry(MapElementListEntry&& mapElementListEntry);
        MapElementListEntry* operator=(MapElementListEntry&& mapElementListEntry);
        MapElementListEntry();
        MapElementListEntry* operator=(const MapElementListEntry& mapElementListEntry);
        MapElementListEntry(const MapElementListEntry& mapElementListEntry);

    private:
        uint64_t field_0;
        uint32_t field_8;
        uint8_t _unknown_12[28];
    };

    class MiniMap::MapSquareState {
    public:
        class IconState;
        class TileState;
        MapSquareState();
        void swap(MapSquareState& mapSquareState);
        ~MapSquareState();

    private:
        int field_0;
        int field_4;
        uint32_t field_8;
        uint8_t field_12;
        uint8_t _unknown_13[1579];
        TileState field_1592;
        uint8_t _unknown_1664[4088];
        uint8_t field_5752;
        uint8_t _unknown_5753[7];
    };

    class MiniMap::MapSquareState::IconState {
    public:
        void ResetProgress();
        uint8_t GetProgress(int arg1, int arg2) const;
        void SetProgress(int arg1, int arg2, LODLevel lodLevel);
        IconState();
        unsigned int GetKey(int arg1, int arg2) const;

    private:
        uint8_t _unknown_0[4096];
        LODLevel field_4096;
        uint8_t _unknown_4100[4];
    };

    class MiniMap::MapSquareState::TileState {
    public:
        void SetProgress(const CoordGrid& coordGrid, LODLevel lodLevel);
        void ResetProgress();
        uint8_t GetProgress(const LocationContainer& locationContainer) const;
        void SetProgress(const LocationContainer& locationContainer);
        void SetProgress(const LocationContainer& locationContainer, LODLevel lodLevel);
        TileState();
        void GetKey(const LocationContainer& locationContainer) const;
        void GetKey(const CoordGrid& coordGrid) const;
        uint8_t GetProgress(const CoordGrid& coordGrid) const;
        unsigned int GetKey(int arg1, int arg2) const;

    private:
        uint8_t _unknown_0[64];
        LODLevel field_64;
        uint8_t _unknown_68[4];
    };

    // 0x1003bcf50
    uint64_t MiniMap::GetMiniMapRenderTexture() {
        auto this_00 = field_1168.operator->();
        auto this_01 = this_00->GetColourTargetTextures();
        uint64_t* puVar1 = (uint64_t*)(*this_01)[0];
        return *puVar1;
    }

    // 0x1003bfee0
    void MiniMap::MapSquareState::swap(MiniMap::MapSquareState& mapSquareState) {
        eastl::swap<unsigned int>(field_0, mapSquareState.field_0);
        eastl::swap<unsigned int>(field_4, mapSquareState.field_4);
        eastl::swap<unsigned int>(field_8, mapSquareState.field_8);
        eastl::swap<signed char>(field_12, mapSquareState.field_12);
        field_16.swap(mapSquareState.field_16);
        eastl::swap<MiniMap::MapSquareState::TileState>(*field_1592, mapSquareState.field_1592);
        eastl::swap<MiniMap::MapSquareState::IconState>(*((field_1592 + 64)), *((mapSquareState.field_1592 + 64)));
        eastl::swap<signed char>(field_5752, mapSquareState.field_5752);
    }

    // 0x1003c2ed0
    void MiniMap::DrawDebugTileProgress(World const&, CoordFine const&)::$_1::operator()(
        unsigned int arg1, const eastl::fixed_list<MiniMap::MapSquareState, 16ul>& fixed_list, int arg3,
        int arg4) const {
        FontHelpers* pFVar2;
        uint8_t uVar5;
        bool bVar6;
        uint8_t bVar7;
        unsigned int* puVar9;
        int* piVar10;
        Layout* pLVar11;
        shared_ptr<graphics::FontMetrics>* psVar12;
        FontMetrics* pFVar13;
        shared_ptr* this_00;
        HTTPRequest* this_01;
        shared_ptr<oldscape::midi2::MidiPlayerMainThread>* midiPlayerMainThread;
        ModularParticleEmitterTemplate* pMVar14;
        uint64_t uVar15;
        Entity* pEVar16;
        uint64_t uVar17;
        unsigned long uVar18;
        unsigned int uVar19;
        int iVar20;
        int iVar21;
        unsigned long uVar22;
        CoordGrid local_220;
        optional<int> local_210;
        StringView local_208;
        StringView local_1f8;
        StringView local_1e8;
        StringView local_1d8;
        TextProperties local_1c8;
        MapSquareState* local_1a0;
        optional<int> local_198;
        unsigned long local_190;
        unsigned long local_188;
        unsigned long local_180;
        shared_ptr local_170;
        MapSquareState* local_160;
        weak_ptr<oldscape::dash3d::Wall>* local_158;
        int local_140;
        int local_13c;
        int local_138;
        unsigned int local_134;
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_128;
        unsigned long local_118;
        MiniMap* local_108;
        unsigned long local_100;
        unsigned int local_f4;
        unsigned int local_f0;
        unsigned int local_ec;
        TextFlags local_e8;
        unsigned int local_e0[42];

        MiniMap* pMVar1 = field_0;
        if (arg4 == -1) {
            fixed_list.size();
        }
        int iVar8 = pMVar1->field_8->GetInterfaceWidth();
        if (iVar8 < 0) {
            iVar8 = iVar8 + 3;
        }
        int local_10c = (int)((((uint64_t)(iVar8 >> 31) << 32) | (uint32_t)(iVar8 >> 2)) / (long)pMVar1->field_1108);
        uint64_t local_130 = fixed_list.begin();
        uint64_t local_178 = fixed_list.end();
        bool cVar4 = local_130 != local_178;
        if (cVar4) {
            local_158 = (weak_ptr<oldscape::dash3d::Wall>*)&pMVar1->field_48;
            local_138 = local_10c / 2;
            local_180 = (unsigned long)(unsigned int)(local_10c / 9);
            do {
                puVar9 = (unsigned int*)*local_130;
                local_f0 = *puVar9;
                iVar21 = local_f0 - pMVar1->field_1304;
                local_ec = puVar9[1];
                uVar19 = ~local_ec;
                iVar8 = pMVar1->field_1280;
                local_128 = shared_ptr();
                iVar20 = local_10c;
                iVar21 = iVar21 * local_10c;
                piVar10 = (int*)local_128.SSOBeginPtr();
                *piVar10 = iVar21;
                piVar10 = (int*)local_128.qw();
                *piVar10 = iVar20;
                piVar10 = (int*)local_128.y();
                *piVar10 = (uVar19 + iVar8) * iVar20 + 100;
                piVar10 = (int*)local_128.second();
                *piVar10 = iVar20;
                if (arg1 != 4294967295) {
                    this[1].field_0->AddColouredRectangle(local_128, arg1, 1);
                }
                cVar4 = local_158->expired();
                if (!cVar4) {
                    local_170 = local_158->lock();
                    cVar4 = shared_ptr::operator_cast_to_bool(&local_170);
                    if (cVar4) {
                        local_e0[0] = 1;
                        local_e8 = graphics::TextFlags(local_e0);
                        local_1c8 = graphics::TextProperties(local_170, local_e8[0]);
                        local_e0[0] = 255;
                        local_210 = eastl::optional(*local_e0);
                        local_1c8.SetColours(4294967295, &local_210);
                        pLVar11 = (Layout*)local_170.operator->();
                        psVar12 = (shared_ptr<graphics::FontMetrics>*)pLVar11->SSOBeginPtr();
                        pFVar13 = (FontMetrics*)(*psVar12).operator->();
                        uVar5 = pFVar13->GetMaxAscent();
                        local_118 = (((uint64_t)local_118._1_7_ << 8) | (uint8_t)uVar5);
                        pLVar11 = (Layout*)local_170.operator->();
                        psVar12 = (shared_ptr<graphics::FontMetrics>*)pLVar11->SSOBeginPtr();
                        pFVar13 = (FontMetrics*)(*psVar12).operator->();
                        uVar5 = pFVar13->GetMaxDescent();
                        local_f4 = (((uint32_t)local_f4._1_3_ << 8) | (uint8_t)uVar5);
                        puVar9 = (unsigned int*)local_128.y();
                        local_100 = (unsigned long)*puVar9;
                        new (local_e0) eastl::fixed_string<char, 128>();
                        local_e0->sprintf("%d,%d", (unsigned long)local_f0, (unsigned long)local_ec);
                        pFVar2 = (FontHelpers*)pMVar1->field_40;
                        local_208.StringView<eastl::fixed_string<char, 40>>(*local_e0);
                        piVar10 = (int*)local_128.SSOBeginPtr();
                        pFVar2->DrawString(&local_208, *piVar10, (int)local_100, 0, local_1c8);
                        iVar8 = this[2].field_0->GetMapSquareMinX();
                        uVar19 = local_f0;
                        if ((((iVar8 <= (int)local_f0) &&
                              (iVar8 = this[2].field_0->GetMapSquareMaxX(), (int)uVar19 <= iVar8)) &&
                             (iVar8 = this[2].field_0->GetMapSquareMinZ(), iVar8 <= (int)local_ec)) &&
                            (iVar8 = this[2].field_0->GetMapSquareMaxZ(), (int)local_ec <= iVar8)) {
                            this_00 = (shared_ptr*)this[2].field_0->GetMapSquare(uVar19, local_ec);
                            cVar4 = shared_ptr::operator_cast_to_bool(this_00);
                            if (cVar4) {
                                local_108 = pMVar1;
                                this_01 = (HTTPRequest*)(*this_00).operator->();
                                midiPlayerMainThread =
                                    (shared_ptr<oldscape::midi2::MidiPlayerMainThread>*)this_01->GetContentType();
                                bVar6 = *midiPlayerMainThread != nullptr;
                                iVar8 = (local_f4 & 255) + (unsigned int)(uint8_t)local_118;
                                iVar20 = (int)local_100 + iVar8;
                                local_134 = arg1;
                                cVar4 = FindMapSquareState(local_108, &local_1a0, local_f0, local_ec);
                                if (!cVar4) {
                                    pMVar14 = (ModularParticleEmitterTemplate*)(*this_00).operator->();
                                    bVar7 = pMVar14->GetNumTilesPerRow();
                                    uVar15 = LODLevelToString((unsigned int)bVar7);
                                    pEVar16 = (Entity*)(*this_00).operator->();
                                    bVar7 = pEVar16->GetTargetLOD();
                                    uVar17 = LODLevelToString((unsigned int)bVar7);
                                    local_e0->sprintf("%s/%s", uVar15, uVar17);
                                    pFVar2 = (FontHelpers*)local_108->field_40;
                                    local_1d8.StringView<eastl::fixed_string<char, 40>>(*local_e0);
                                    piVar10 = (int*)local_128.SSOBeginPtr();
                                    pFVar2->DrawString(&local_1d8, *piVar10, iVar20, 0, local_1c8);
                                } else {
                                    pMVar14 = (ModularParticleEmitterTemplate*)(*this_00).operator->();
                                    bVar7 = pMVar14->GetNumTilesPerRow();
                                    uVar15 = LODLevelToString((unsigned int)bVar7);
                                    pEVar16 = (Entity*)(*this_00).operator->();
                                    bVar7 = pEVar16->GetTargetLOD();
                                    uVar17 = LODLevelToString((unsigned int)bVar7);
                                    local_160 = local_1a0;
                                    local_e0->sprintf("%s/%s (%d)", uVar15, uVar17);
                                    pFVar2 = (FontHelpers*)local_108->field_40;
                                    local_1f8.StringView<eastl::fixed_string<char, 40>>(*local_e0);
                                    piVar10 = (int*)local_128.SSOBeginPtr();
                                    pFVar2->DrawString(&local_1f8, *piVar10, iVar20, 0, local_1c8);
                                    local_160 = (MapSquareState*)local_160->field_1592;
                                    uVar19 = 2 - bVar6;
                                    local_118 = (unsigned long)uVar19;
                                    local_100 = (unsigned long)(unsigned int)((int)local_100 + iVar8 * 9);
                                    local_190 = (unsigned long)(iVar8 * uVar19);
                                    local_13c = uVar19 * 8;
                                    uVar18 = 0;
                                    do {
                                        local_f4 = (int)uVar18 * 8;
                                        local_140 = ((int)uVar18 - 4) * (int)local_180 + local_138;
                                        iVar8 = 0;
                                        uVar19 = 0;
                                        uVar22 = local_100 & 4294967295;
                                        local_188 = uVar18;
                                        do {
                                            local_220 = game::CoordGrid(0, local_f0, local_ec, local_f4, uVar19);
                                            bVar7 = local_160->GetProgress(local_220);
                                            local_198 = eastl::optional(255);
                                            local_1c8.SetColours(-(unsigned int)(bVar7 == 0) |
                                                                     (unsigned int)bVar7 * 1048576 - 8355712,
                                                                 &local_198);
                                            local_e0->sprintf("%d", (unsigned long)bVar7);
                                            pFVar2 = (FontHelpers*)local_108->field_40;
                                            local_1e8.StringView<eastl::fixed_string<char, 40>>(*local_e0);
                                            piVar10 = (int*)local_128.SSOBeginPtr();
                                            pFVar2->DrawString(&local_1e8, *piVar10 + local_140, (int)uVar22, 0,
                                                               local_1c8);
                                            uVar22 = (unsigned long)(unsigned int)((int)uVar22 - (int)local_190);
                                            uVar19 = uVar19 + local_13c;
                                            iVar8 = iVar8 + (int)local_118;
                                        } while (iVar8 < 8);
                                        uVar19 = (int)local_188 + (int)local_118;
                                        uVar18 = (unsigned long)uVar19;
                                    } while ((int)uVar19 < 8);
                                }
                            }
                        }
                    }
                }
                ++local_130;
                cVar4 = local_130 != local_178;
            } while (cVar4);
        }
    }

    // 0x1003d06c0
    MiniMap::MapSquareState::MapSquareState() : field_0(-1), field_4(-1), field_8(0), field_12(5) {
        new ((field_1592 + 64)) IconState();
        field_5752 = 5;
    }

    // 0x1003d0960
    MiniMap::MapElementListEntry::~MapElementListEntry() {
        field_32.~shared_ptr();
        field_16.~shared_ptr();
    }

    // 0x1003d1340
    MiniMap::MapElementListEntry::MapElementListEntry(MiniMap::MapElementListEntry&& mapElementListEntry)
        : field_8(mapElementListEntry.field_8), field_0(mapElementListEntry.field_0) {
        field_16.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(mapElementListEntry.field_16);
        field_32.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(mapElementListEntry.field_32);
    }

    // 0x1003d1470
    MapElementListEntry* MiniMap::MapElementListEntry::operator=(MiniMap::MapElementListEntry&& mapElementListEntry) {
        field_8 = mapElementListEntry.field_8;
        field_0 = mapElementListEntry.field_0;
        field_16 = mapElementListEntry.field_16;
        field_32 = mapElementListEntry.field_32;
        return this;
    }

    // 0x1003d1550
    MiniMap::MapSquareState::~MapSquareState() {
        field_16.~fixed_vector();
    }

    // 0x1003d3a40
    MiniMap::MapElementListEntry::MapElementListEntry() : field_8(4294967295) {
        new (&field_16) shared_ptr();
        new (&field_32) shared_ptr();
    }

    // 0x1003d46b0
    MapElementListEntry*
    MiniMap::MapElementListEntry::operator=(const MiniMap::MapElementListEntry& mapElementListEntry) {
        field_8 = mapElementListEntry.field_8;
        field_0 = mapElementListEntry.field_0;
        field_16 = mapElementListEntry.field_16;
        field_32 = mapElementListEntry.field_32;
        return this;
    }

    // 0x1003d47a0
    MiniMap::MapElementListEntry::MapElementListEntry(const MiniMap::MapElementListEntry& mapElementListEntry)
        : field_8(mapElementListEntry.field_8), field_0(mapElementListEntry.field_0),
          field_16(&mapElementListEntry.field_16), field_32(&mapElementListEntry.field_32) {}

} // namespace jag::game
