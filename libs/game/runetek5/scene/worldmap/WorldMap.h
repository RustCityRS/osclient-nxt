// libs/game/runetek5/scene/worldmap/WorldMap.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::game {
    class WorldMap : public VarDomainType // base inferred from shared vtable slots
    {
    public:
        class FlashState;
        class MSIInstance;
        class MapElementInstance;
        class PendingLocationType;
        class TerrainUnderlayTexture;
        class ZoneLine;
        // virtual methods in vtable order
        virtual ~WorldMap();
        WorldMap(graphics::RT7Core& rt7Core, SceneManager& sceneManager, ConfigProvider& configProvider,
                 Js5ResourceProvider& js5ResourceProvider, graphics::FontManager& fontManager,
                 graphics::FontHelpers& fontHelpers);
        void CreateRenderingResources();
        void Reset(bool arg1);
        void DestroyRenderingResources();
        void CloseMap();
        void GetMapArea(CoordGrid& coordGrid) const;
        void GetMapArea(int arg1) const;
        void GetMapAreas(eastl::vector<MapArea*>& mapAreas, CoordGrid& coordGrid) const;
        void SetMap(int arg1, int arg2, int arg3, bool arg4);
        void ContentZoomToEngineZoom(int arg1) const;
        int EngineZoomToContentZoom(float arg1) const;
        void SetZoomLevel(int arg1);
        void GetZoomLevel() const;
        void MainLogic(const CoordGrid& coordGrid, const PlayerVarDomain* playerVarDomain, bool arg3, bool arg4);
        unsigned long HandleLoading(const CoordGrid& coordGrid, const PlayerVarDomain* playerVarDomain, bool arg3,
                                    bool arg4);
        void CheckGridPosition();
        void UpdateFlashList(eastl::vector_map<int, FlashState>& arg1);
        void UpdateShouldRenderMapElementsList(const PlayerVarDomain* playerVarDomain);
        void DoOverviewClick(float arg1, float arg2);
        uint32_t GetLoadPercentage() const;
        bool LoadState_DataRequest();
        uint64_t LoadState_MapAreaInit(const CoordGrid& coordGrid);
        uint64_t LoadState_MapAreaLoad(const PlayerVarDomain* playerVarDomain);
        uint64_t LoadState_F2POverlay();
        void LoadState_StaticElements(bool arg1, bool arg2);
        bool LoadState_Fonts();
        unsigned long LoadState_CompositeMap();
        unsigned long LoadState_Underlay();
        void LoadAreaData(PacketT<Array<unsigned char>>& arg1);
        void ProcessingPendingLocations(const PlayerVarDomain* playerVarDomain);
        bool IsF2PZone(int arg1, int arg2);
        unsigned long LoadStaticMapElements(bool arg1);
        void LoadTileData(PacketT<Array<unsigned char>>& arg1, unsigned char arg2, unsigned char arg3,
                          unsigned int arg4, unsigned int arg5);
        void AddPendingLocation(const CoordGrid& coordGrid, int arg2, int arg3);
        void AddMapElement(const shared_ptr<MapElementType>& mapElementType, const CoordGrid& coordGrid, bool arg3);
        uint8_t* GetLabelFont(int arg1) const;
        void MainDrawLoading(graphics::GUIManager& guiManager, math::Rect<int>& rect, const Language* language,
                             int arg4);
        void MainDraw(graphics::GUIManager& guiManager, math::Rect<int>& rect, bool arg3);
        void UpdateTerrainTextures(unsigned long long arg1, int arg2, int arg3, int arg4, math::Rect<int>& rect);
        uint64_t GetTypeDisabled(bool& arg1, int arg2) const;
        void RenderF2POverlay(graphics::GUIManager& guiManager, int arg2, int arg3, int arg4, int arg5, int arg6);
        void RenderMapElements(graphics::GUIManager& guiManager, math::Rect<int>& rect, int arg3, int arg4, int arg5,
                               bool arg6);
        void MainDrawOverview(graphics::GUIManager& guiManager, math::Rect<int>& rect);
        bool ShouldRenderMapElementTypeCache(shared_ptr<MapElementType>& mapElementType, int arg2);
        void StopCurrentFlashes();
        void SetFlashPerpetual(bool arg1);
        void SetFlashTicks(int arg1);
        void SetFlashLoops(int arg1);
        void JumpToTargetCoord(const CoordGrid& coordGrid, bool arg2);
        int FindNearestMapElement(CoordGrid& coordGrid1, int arg2, const CoordGrid& coordGrid2) const;
        void GetMapElementListStart(PlayerVarDomain& playerVarDomain);
        uint8_t* GetMapElementListNext(PlayerVarDomain& playerVarDomain);
        void SetMapElementDisabled(int arg1, bool arg2);
        void SetMapElementCategoryDisabled(int arg1, bool arg2);
        void SetMapElementFlashing(int arg1);
        void SetMapElementCategoryFlashing(int arg1);
        uint64_t SetTextSizeDisabled(int arg1, bool arg2);
        uint64_t SetTypeDisabled(int arg1, bool arg2);
        uint64_t GetTextSizeDisabled(bool& arg1, int arg2) const;
        void DoDragStart(int arg1, int arg2);
        void DoDrag(int arg1, int arg2);
        uint64_t GetSourceCoordAtScreenPosition(CoordGrid& coordGrid, int arg2, int arg3, math::Rect<int> rect);
        void RenderMapElement(graphics::GUIManager& guiManager, math::Rect<int>& rect, int arg3, int arg4, int arg5,
                              shared_ptr<MapElementType>& mapElementType, MapElementInstance& mapElementInstance,
                              bool arg8);
        unsigned long ShouldRenderMapElementType(shared_ptr<MapElementType>& mapElementType,
                                                 const PlayerVarDomain* playerVarDomain, int arg3);
        bool IsF2PTile(int arg1, int arg2);
        int GetDesiredTerrainTextureSize() const;
        bool IsMapSquareValid(int arg1, int arg2) const;
        auto GenerateTerrainTexture(unsigned int arg1, unsigned int arg2, short arg3);
        static int32_t ZOOMLEVEL_CONTENT_MIN;         // = 25
        static int32_t ZOOMLEVEL_CONTENT_MAX;         // = 200
        static float ZOOMLEVEL_ENGINE_MIN;            // = 2.0f
        static float ZOOMLEVEL_ENGINE_MAX;            // = 16.0f
        static float ZOOMLEVEL_ENGINE_DEFAULT;        // = 8.0f
        static int32_t MSI_MIN_SIZE[28];              // initialised in its definition
        static int64_t INV_MAPZONE_TEXEL_SIZE;        // = 1040187392
        static MapElementInstance DUMMY_MEL_INSTANCE; // = MapElementInstance()

    private:
        uint8_t _unknown_26[6];
        Js5ResourceProvider* field_32;
        FontManager* field_40;
        FontHelpers* field_48;
        int field_56;
        unsigned int field_60;
        uint8_t _unknown_64[56];
        int field_120;
        uint8_t _unknown_124[28];
        unsigned int field_152;
        unsigned int field_156;
        int field_160;
        int field_164;
        uint8_t _unknown_168[16];
        int field_184;
        int field_188;
        int field_192;
        int field_196;
        unsigned int field_200;
        unsigned int field_204;
        unsigned int field_208;
        unsigned int field_212;
        unsigned int field_216;
        unsigned int field_220;
        int field_224;
        int field_228;
        unsigned int field_232;
        unsigned int field_236;
        unsigned int field_240;
        unsigned int field_244;
        float field_248;
        float field_252;
        bool field_256;
        uint8_t _unknown_257[247];
        int field_504;
        uint8_t _unknown_508[4];
        CommandLine* field_512;
        uint8_t field_520;
        uint8_t _unknown_521[159];
        bool m_flashPerpetual;
        uint8_t _unknown_681[3];
        int m_flashTicks;
        int m_flashLoops;
        bool field_692;
        bool field_693;
        bool field_694;
        bool field_695;
        bool field_696;
        bool field_697;
        uint8_t _unknown_698[38];
        unsigned int field_736;
        uint8_t _unknown_740[84];
        unsigned long long field_824;
        uint8_t _unknown_832[72];
        int field_904;
        int field_908;
        uint8_t _unknown_912[3104];
        shared_ptr field_4016;
        bool field_4032;
        uint8_t _unknown_4033[183];
    };

    class WorldMap::FlashState {
    public:
        unsigned int GetFlashColourRGBA(int arg1) const;

    private:
        uint8_t _unknown_0[4];
        int field_4;
        uint8_t _unknown_8[4];
    };

    class WorldMap::MSIInstance {
    public:
        MSIInstance();

    private:
        uint8_t _unknown_0[8];
        CoordGrid field_8;
        uint8_t _unknown_24[4];
        uint16_t field_28;
        uint8_t _unknown_30[6];
    };

    class WorldMap::MapElementInstance {
    public:
        MapElementInstance();
        MapElementInstance(MapElementInstance&& mapElementInstance);

    private:
        uint8_t _unknown_0[16];
        uint32_t field_16;
        CoordGrid field_20;
        uint8_t _unknown_36[4];
    };

    class WorldMap::PendingLocationType {
    public:
        PendingLocationType();
    };

    class WorldMap::TerrainUnderlayTexture {
    public:
        ~TerrainUnderlayTexture();
        TerrainUnderlayTexture();
        TerrainUnderlayTexture(TerrainUnderlayTexture&& terrainUnderlayTexture);
        TerrainUnderlayTexture* operator=(TerrainUnderlayTexture&& terrainUnderlayTexture);

    private:
        uint64_t field_0;
        uint64_t field_8;
        uint16_t field_16;
        uint8_t _unknown_18[14];
    };

    class WorldMap::ZoneLine {
    public:
        ZoneLine(float arg1, float arg2, float arg3, float arg4, int arg5);

    private:
        float field_0;
        float field_4;
        float field_8;
        float field_12;
        int field_16;
        uint8_t _unknown_20[4];
    };

    // 0x1003cf250
    unsigned int WorldMap::FlashState::GetFlashColourRGBA(int arg1) const {
        int iVar1 = field_4;
        int iVar2 = arg1 - iVar1;
        if (iVar1 <= arg1 / 2) {
            iVar2 = iVar1;
        }
        return (iVar2 * 255) / arg1 | 4294901760;
    }

    // 0x1003d1af0
    WorldMap::MapElementInstance::MapElementInstance() : shared_ptr() {
        *(uint32_t*)(field_20 + 12) = 4294967295;
    }

    // 0x1003d1ee0
    WorldMap::ZoneLine::ZoneLine(float arg1, float arg2, float arg3, float arg4, int arg5)
        : field_0(arg1), field_8(arg2), field_4(arg3), field_12(arg4), field_16(arg5) {}

    // 0x1003d1f00
    WorldMap::UpdateTerrainTextures(unsigned long long, int, int, int,
                                    math::Rect<int>&)::TerrainTextureUpdate::~TerrainTextureUpdate() {
        ((this + 8))->~Array();
    }

    // 0x1003d5ac0
    WorldMap::TerrainUnderlayTexture::~TerrainUnderlayTexture() {
        field_24.~shared_ptr();
    }

    // 0x1003d6b00
    WorldMap::PendingLocationType::PendingLocationType() : game::CoordGrid() {}

    // 0x1003d6c80
    WorldMap::MSIInstance::MSIInstance() {
        new (field_8) game::CoordGrid();
        *(uint64_t*)(field_8 + 12) = 18446744073709551615;
        field_28 = 0;
    }

    // 0x1003d70f0
    WorldMap::MapElementInstance::MapElementInstance(WorldMap::MapElementInstance&& mapElementInstance)
        : math::Rect(mapElementInstance) {
        *(uint32_t*)(field_20 + 12) = *(uint32_t*)(mapElementInstance.field_20 + 12);
        uint8_t uVar2 = mapElementInstance.field_20[0];
        uint8_t uVar3 = mapElementInstance.field_20[1];
        uint8_t uVar4 = mapElementInstance.field_20[2];
        uint8_t uVar5 = mapElementInstance.field_20[3];
        uint64_t uVar1 = *(uint64_t*)(mapElementInstance.field_20 + 4);
        field_16 = mapElementInstance.field_16;
        field_20[0] = uVar2;
        field_20[1] = uVar3;
        field_20[2] = uVar4;
        field_20[3] = uVar5;
        *(uint64_t*)(field_20 + 4) = uVar1;
    }

    // 0x1003d8090
    WorldMap::TerrainUnderlayTexture::TerrainUnderlayTexture() : field_0(0), field_8(0), field_16(65535) {
        new (&field_24) shared_ptr();
    }

    // 0x1003d8250
    WorldMap::TerrainUnderlayTexture::TerrainUnderlayTexture(WorldMap::TerrainUnderlayTexture&& terrainUnderlayTexture)
        : field_16(terrainUnderlayTexture.field_16) {
        uint64_t uVar1 = terrainUnderlayTexture.field_8;
        field_0 = terrainUnderlayTexture.field_0;
        field_8 = uVar1;
        field_24.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(terrainUnderlayTexture.field_24);
    }

    // 0x1003d8540
    TerrainUnderlayTexture*
    WorldMap::TerrainUnderlayTexture::operator=(WorldMap::TerrainUnderlayTexture&& terrainUnderlayTexture) {
        field_16 = terrainUnderlayTexture.field_16;
        uint64_t uVar1 = terrainUnderlayTexture.field_8;
        field_0 = terrainUnderlayTexture.field_0;
        field_8 = uVar1;
        field_24 = terrainUnderlayTexture.field_24;
        return this;
    }

    // 0x1003d8650
    WorldMap::UpdateTerrainTextures(
        unsigned long long, int, int, int,
        math::Rect<int>&)::TerrainTextureUpdate::TerrainTextureUpdate(const TerrainTextureUpdate&
                                                                          terrainTextureUpdate) {
        *(uint64_t*)this = *(uint64_t*)terrainTextureUpdate;
        new ((this + 8)) Array<unsigned int>((terrainTextureUpdate + 8));
    }

    // 0x1003d88c0
    WorldMap::UpdateTerrainTextures(
        unsigned long long, int, int, int,
        math::Rect<int>&)::TerrainTextureUpdate::TerrainTextureUpdate(TerrainTextureUpdate&& terrainTextureUpdate) {
        *(uint64_t*)this = *(uint64_t*)terrainTextureUpdate;
        new ((this + 8)) Array<unsigned int>((terrainTextureUpdate + 8));
    }

} // namespace jag::game
