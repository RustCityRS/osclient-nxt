// libs/game/runetek5/scene/worldmap/WorldMap.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

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
        WorldMap(graphics::RT7Core&, SceneManager&, ConfigProvider&, Js5ResourceProvider&, graphics::FontManager&,
                 graphics::FontHelpers&);
        void CreateRenderingResources();
        void Reset(bool);
        void DestroyRenderingResources();
        void CloseMap();
        void GetMapArea(CoordGrid&) const;
        void GetMapArea(int) const;
        void GetMapAreas(eastl::vector<MapArea*, BucketAllocatorEASTL>&, CoordGrid&) const;
        void SetMap(int, int, int, bool);
        void ContentZoomToEngineZoom(int) const;
        int EngineZoomToContentZoom(float) const;
        void SetZoomLevel(int);
        void GetZoomLevel() const;
        void MainLogic(CoordGrid const&, PlayerVarDomain const*, bool, bool);
        ulong HandleLoading(CoordGrid const&, PlayerVarDomain const*, bool, bool);
        void CheckGridPosition();
        void UpdateFlashList(eastl::vector_map<int, FlashState, eastl::less<int>, eastl::allocator,
                                               eastl::vector<eastl::pair<int, FlashState>, eastl::allocator>>&);
        void UpdateShouldRenderMapElementsList(PlayerVarDomain const*);
        void DoOverviewClick(float, float);
        GetLoadPercentage() const;
        bool LoadState_DataRequest();
        LoadState_MapAreaInit(CoordGrid const&);
        LoadState_MapAreaLoad(PlayerVarDomain const*);
        LoadState_F2POverlay();
        void LoadState_StaticElements(bool, bool);
        bool LoadState_Fonts();
        ulong LoadState_CompositeMap();
        ulong LoadState_Underlay();
        void LoadAreaData(PacketT<Array<unsigned char, eastl::allocator>>&);
        void ProcessingPendingLocations(PlayerVarDomain const*);
        IsF2PZone(int, int);
        ulong LoadStaticMapElements(bool);
        void LoadTileData(PacketT<Array<unsigned char, eastl::allocator>>&, unsigned char, unsigned char, unsigned int,
                          unsigned int);
        void AddPendingLocation(CoordGrid const&, int, int);
        void AddMapElement(shared_ptr<MapElementType> const&, CoordGrid const&, bool);
        GetLabelFont(int) const;
        void MainDrawLoading(graphics::GUIManager&, math::Rect<int>&, Language const*, int);
        void MainDraw(graphics::GUIManager&, math::Rect<int>&, bool);
        void UpdateTerrainTextures(unsigned long long, int, int, int, math::Rect<int>&);
        GetTypeDisabled(bool&, int) const;
        void RenderF2POverlay(graphics::GUIManager&, int, int, int, int, int);
        void RenderMapElements(graphics::GUIManager&, math::Rect<int>&, int, int, int, bool);
        void MainDrawOverview(graphics::GUIManager&, math::Rect<int>&);
        bool ShouldRenderMapElementTypeCache(shared_ptr<MapElementType>&, int);
        void StopCurrentFlashes();
        void SetFlashPerpetual(bool);
        void SetFlashTicks(int);
        void SetFlashLoops(int);
        void JumpToTargetCoord(CoordGrid const&, bool);
        int FindNearestMapElement(CoordGrid&, int, CoordGrid const&) const;
        void GetMapElementListStart(PlayerVarDomain&);
        GetMapElementListNext(PlayerVarDomain&);
        void SetMapElementDisabled(int, bool);
        void SetMapElementCategoryDisabled(int, bool);
        void SetMapElementFlashing(int);
        void SetMapElementCategoryFlashing(int);
        SetTextSizeDisabled(int, bool);
        SetTypeDisabled(int, bool);
        GetTextSizeDisabled(bool&, int) const;
        void DoDragStart(int, int);
        void DoDrag(int, int);
        GetSourceCoordAtScreenPosition(CoordGrid&, int, int, math::Rect<int>);
        void RenderMapElement(graphics::GUIManager&, math::Rect<int>&, int, int, int, shared_ptr<MapElementType>&,
                              MapElementInstance&, bool);
        ulong ShouldRenderMapElementType(shared_ptr<MapElementType>&, PlayerVarDomain const*, int);
        IsF2PTile(int, int);
        int GetDesiredTerrainTextureSize() const;
        bool IsMapSquareValid(int, int) const;
        GenerateTerrainTexture(unsigned int, unsigned int, short);
        static /* 4 bytes */ ZOOMLEVEL_CONTENT_MIN;                  // = 25
        static /* 4 bytes */ ZOOMLEVEL_CONTENT_MAX;                  // = 200
        static float /* 4 bytes */ ZOOMLEVEL_ENGINE_MIN;             // = 2.0f
        static float /* 4 bytes */ ZOOMLEVEL_ENGINE_MAX;             // = 16.0f
        static float /* 4 bytes */ ZOOMLEVEL_ENGINE_DEFAULT;         // = 8.0f
        static /* 112 bytes */ MSI_MIN_SIZE;                         // initialised in its definition
        static /* 8 bytes */ INV_MAPZONE_TEXEL_SIZE;                 // = 1040187392
        static MapElementInstance /* 36 bytes */ DUMMY_MEL_INSTANCE; // = MapElementInstance()

        // data members, from how the methods use this: 4216 bytes, the first 26 are VarDomainType
        char _unknown_26[6];
        Js5ResourceProvider* field_32; // offset 32
        FontManager* field_40;         // offset 40
        FontHelpers* field_48;         // offset 48
        int field_56;                  // offset 56
        uint field_60;                 // offset 60
        char _unknown_64[56];
        int field_120; // offset 120
        char _unknown_124[28];
        uint field_152; // offset 152
        uint field_156; // offset 156
        int field_160;  // offset 160
        int field_164;  // offset 164
        char _unknown_168[16];
        int field_184;   // offset 184
        int field_188;   // offset 188
        int field_192;   // offset 192
        int field_196;   // offset 196
        uint field_200;  // offset 200
        uint field_204;  // offset 204
        uint field_208;  // offset 208
        uint field_212;  // offset 212
        uint field_216;  // offset 216
        uint field_220;  // offset 220
        int field_224;   // offset 224
        int field_228;   // offset 228
        uint field_232;  // offset 232
        uint field_236;  // offset 236
        uint field_240;  // offset 240
        uint field_244;  // offset 244
        float field_248; // offset 248
        float field_252; // offset 252
        bool field_256;  // offset 256
        char _unknown_257[247];
        int field_504; // offset 504
        char _unknown_508[4];
        CommandLine* field_512; // offset 512
        undefined1 field_520;   // offset 520
        char _unknown_521[159];
        bool m_flashPerpetual; // offset 680
        char _unknown_681[3];
        int m_flashTicks; // offset 684
        int m_flashLoops; // offset 688
        bool field_692;   // offset 692
        bool field_693;   // offset 693
        bool field_694;   // offset 694
        bool field_695;   // offset 695
        bool field_696;   // offset 696
        bool field_697;   // offset 697
        char _unknown_698[38];
        uint field_736; // offset 736
        char _unknown_740[84];
        ulonglong field_824; // offset 824
        char _unknown_832[72];
        int field_904; // offset 904
        int field_908; // offset 908
        char _unknown_912[3104];
        shared_ptr field_4016; // offset 4016
        bool field_4032;       // offset 4032
        char _unknown_4033[7];
        undefined1 field_4040; // offset 4040
        char _unknown_4041[39];
        undefined1 field_4080; // offset 4080
        char _unknown_4081[63];
        undefined1 field_4144; // offset 4144
        char _unknown_4145[63];
        undefined1 field_4208; // offset 4208
        char _unknown_4209[7];
    };

    class WorldMap::FlashState {
    public:
        uint GetFlashColourRGBA(int) const;

        // data members, from how the methods use this: 12 bytes
        char _unknown_0[4];
        int field_4; // offset 4
        char _unknown_8[4];
    };

    class WorldMap::MSIInstance {
    public:
        MSIInstance();

        // data members, from how the methods use this: 36 bytes
        char _unknown_0[8];
        CoordGrid field_8; // offset 8
        char _unknown_24[4];
        undefined2 field_28; // offset 28
        char _unknown_30[6];
    };

    class WorldMap::MapElementInstance {
    public:
        MapElementInstance();
        MapElementInstance(MapElementInstance&&);

        // data members, from how the methods use this: 40 bytes
        char _unknown_0[16];
        undefined4 field_16; // offset 16
        CoordGrid field_20;  // offset 20
        char _unknown_36[4];
    };

    class WorldMap::PendingLocationType {
    public:
        PendingLocationType();
    };

    class WorldMap::TerrainUnderlayTexture {
    public:
        ~TerrainUnderlayTexture();
        TerrainUnderlayTexture();
        TerrainUnderlayTexture(TerrainUnderlayTexture&&);
        TerrainUnderlayTexture* operator=(TerrainUnderlayTexture&&);

        // data members, from how the methods use this: 32 bytes
        undefined8 field_0;  // offset 0
        undefined8 field_8;  // offset 8
        undefined2 field_16; // offset 16
        char _unknown_18[14];
    };

    class WorldMap::ZoneLine {
    public:
        ZoneLine(float, float, float, float, int);

        // data members, from how the methods use this: 24 bytes
        float field_0;  // offset 0
        float field_4;  // offset 4
        float field_8;  // offset 8
        float field_12; // offset 12
        int field_16;   // offset 16
        char _unknown_20[4];
    };

    // 0x1003c6710, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // WorldMap::MapElementInstance::MapElementInstance(): jumps straight to the base-object constructor

    // 0x1003ca910, 16 bytes, complete-object constructor, inline, placed by class name
    // WorldMap::ZoneLine::ZoneLine(float, float, float, float, int): jumps straight to the base-object constructor

    // 0x1003cf250, 48 bytes, inline, placed by class name
    // WorldMap::FlashState::GetFlashColourRGBA(int) const
    uint WorldMap::FlashState::GetFlashColourRGBA(int param_1) {
        int iVar1;
        int iVar2;

        iVar1 = field_4;
        iVar2 = param_1 - iVar1;
        if (iVar1 <= param_1 / 2) {
            iVar2 = iVar1;
        }
        return (iVar2 * 255) / param_1 | 4294901760;
    }

    // 0x1003cfc90, 16 bytes, complete-object destructor, inline, placed by class name
    // WorldMap::UpdateTerrainTextures(unsigned long long, int, int, int, math::Rect<int>&)::TerrainTextureUpdate::~TerrainTextureUpdate(): jumps straight to the base-object destructor

    // 0x1003d1af0, 48 bytes, base-object constructor, inline, placed by class name
    // WorldMap::MapElementInstance::MapElementInstance()
    void WorldMap::MapElementInstance::MapElementInstance() {
        _func_decltype_nullptr* in_RSI;

        new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(in_RSI);
        new (field_20) game::CoordGrid();
        *(undefined4*)(field_20 + 12) = 4294967295;
    }

    // 0x1003d1ee0, 32 bytes, base-object constructor, inline, placed by class name
    // WorldMap::ZoneLine::ZoneLine(float, float, float, float, int)
    void WorldMap::ZoneLine::ZoneLine(float param_1, float param_2, float param_3, float param_4, int param_5) {
        field_0 = param_1;
        field_8 = param_2;
        field_4 = param_3;
        field_12 = param_4;
        field_16 = param_5;
    }

    // 0x1003d1f00, 16 bytes, base-object destructor, inline, placed by class name
    // WorldMap::UpdateTerrainTextures(unsigned long long, int, int, int, math::Rect<int>&)::TerrainTextureUpdate::~TerrainTextureUpdate()
    /* ~TerrainTextureUpdate() */

    void WorldMap::UpdateTerrainTextures(unsigned long long, int, int, int,
                                         math::Rect<int>&)::TerrainTextureUpdate::~TerrainTextureUpdate() {
        ((this + 8))->~Array();
    }

    // 0x1003d5ab0, 16 bytes, complete-object destructor, inline, placed by class name
    // WorldMap::TerrainUnderlayTexture::~TerrainUnderlayTexture(): jumps straight to the base-object destructor

    // 0x1003d5ac0, 16 bytes, base-object destructor, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // WorldMap::TerrainUnderlayTexture::~TerrainUnderlayTexture()
    /* PacketView::~PacketView() */

    void PacketView::~PacketView() {
        (&field_24)->~shared_ptr();
    }

    // 0x1003d6a10, 16 bytes, complete-object constructor, inline, placed by class name
    // WorldMap::PendingLocationType::PendingLocationType(): jumps straight to the base-object constructor

    // 0x1003d6b00, 16 bytes, base-object constructor, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // WorldMap::PendingLocationType::PendingLocationType()
    /* StaticMapElement::StaticMapElement() */

    void StaticMapElement::StaticMapElement() {
        new (this) game::CoordGrid();
    }

    // 0x1003d6bb0, 16 bytes, complete-object constructor, inline, placed by class name
    // WorldMap::MSIInstance::MSIInstance(): jumps straight to the base-object constructor

    // 0x1003d6c80, 48 bytes, base-object constructor, inline, placed by class name
    // WorldMap::MSIInstance::MSIInstance()
    void WorldMap::MSIInstance::MSIInstance() {
        new (field_8) game::CoordGrid();
        *(undefined8*)(field_8 + 12) = 18446744073709551615;
        field_28 = 0;
    }

    // 0x1003d6fd0, 16 bytes, complete-object constructor, inline, placed by class name
    // WorldMap::MapElementInstance::MapElementInstance(WorldMap::MapElementInstance&&): jumps straight to the base-object constructor

    // 0x1003d70f0, 48 bytes, base-object constructor, inline, placed by class name
    // WorldMap::MapElementInstance::MapElementInstance(WorldMap::MapElementInstance&&)
    void WorldMap::MapElementInstance::MapElementInstance(MapElementInstance* param_1) {
        undefined8 uVar1;
        undefined1 uVar2;
        undefined1 uVar3;
        undefined1 uVar4;
        undefined1 uVar5;

        new (this) math::Rect<unsigned int>(param_1);
        *(undefined4*)(field_20 + 12) = *(undefined4*)(param_1->field_20 + 12);
        uVar2 = param_1->field_20[0];
        uVar3 = param_1->field_20[1];
        uVar4 = param_1->field_20[2];
        uVar5 = param_1->field_20[3];
        uVar1 = *(undefined8*)(param_1->field_20 + 4);
        field_16 = param_1->field_16;
        field_20[0] = uVar2;
        field_20[1] = uVar3;
        field_20[2] = uVar4;
        field_20[3] = uVar5;
        *(undefined8*)(field_20 + 4) = uVar1;
    }

    // 0x1003d7fa0, 16 bytes, complete-object constructor, inline, placed by class name
    // WorldMap::TerrainUnderlayTexture::TerrainUnderlayTexture(): jumps straight to the base-object constructor

    // 0x1003d8090, 32 bytes, base-object constructor, inline, placed by class name
    // WorldMap::TerrainUnderlayTexture::TerrainUnderlayTexture()
    void WorldMap::TerrainUnderlayTexture::TerrainUnderlayTexture() {
        _func_decltype_nullptr* in_RSI;

        field_0 = 0;
        field_8 = 0;
        field_16 = 65535;
        new (&field_24, in_RSI) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
    }

    // 0x1003d8130, 16 bytes, complete-object constructor, inline, placed by class name
    // WorldMap::TerrainUnderlayTexture::TerrainUnderlayTexture(WorldMap::TerrainUnderlayTexture&&): jumps straight to the base-object constructor

    // 0x1003d8250, 48 bytes, base-object constructor, inline, placed by class name
    // WorldMap::TerrainUnderlayTexture::TerrainUnderlayTexture(WorldMap::TerrainUnderlayTexture&&)
    void WorldMap::TerrainUnderlayTexture::TerrainUnderlayTexture(TerrainUnderlayTexture* param_1) {
        undefined8 uVar1;

        field_16 = param_1->field_16;
        uVar1 = param_1->field_8;
        field_0 = param_1->field_0;
        field_8 = uVar1;
        shared_ptr<oldscape::RSevenDebugPresetProvider>::shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(
            (shared_ptr<oldscape::RSevenDebugPresetProvider>*)&field_24, (shared_ptr*)&param_1->field_24);
    }

    // 0x1003d8540, 48 bytes, inline, placed by class name
    // WorldMap::TerrainUnderlayTexture::operator=(WorldMap::TerrainUnderlayTexture&&)
    /* WorldMap::TerrainUnderlayTexture::TEMPNAMEPLACEHOLDERVALUE(WorldMap::TerrainUnderlayTexture&&)
    */

    TerrainUnderlayTexture* WorldMap::TerrainUnderlayTexture::operator=(TerrainUnderlayTexture* param_1) {
        undefined8 uVar1;

        field_16 = param_1->field_16;
        uVar1 = param_1->field_8;
        field_0 = param_1->field_0;
        field_8 = uVar1;
        shared_ptr<graphics::SpriteAtlasReference>::operator=((shared_ptr<graphics::SpriteAtlasReference>*)&field_24,
                                                              (shared_ptr*)&param_1->field_24);
        return this;
    }

    // 0x1003d8590, 16 bytes, complete-object constructor, inline, placed by class name
    // WorldMap::UpdateTerrainTextures(unsigned long long, int, int, int, math::Rect<int>&)::TerrainTextureUpdate::TerrainTextureUpdate(TerrainTextureUpdate const&): jumps straight to the base-object constructor

    // 0x1003d8650, 32 bytes, base-object constructor, inline, placed by class name
    // WorldMap::UpdateTerrainTextures(unsigned long long, int, int, int, math::Rect<int>&)::TerrainTextureUpdate::TerrainTextureUpdate(TerrainTextureUpdate const&)
    /* TerrainTextureUpdate(TerrainTextureUpdate const&) */

    void WorldMap::UpdateTerrainTextures(
        unsigned long long, int, int, int,
        math::Rect<int>&)::TerrainTextureUpdate::TerrainTextureUpdate(TerrainTextureUpdate* param_1) {
        *(undefined8*)this = *(undefined8*)param_1;
        new ((this + 8)) Array<unsigned int, eastl::allocator>((Array*)(param_1 + 8));
    }

    // 0x1003d88a0, 16 bytes, complete-object constructor, inline, placed by class name
    // WorldMap::UpdateTerrainTextures(unsigned long long, int, int, int, math::Rect<int>&)::TerrainTextureUpdate::TerrainTextureUpdate(TerrainTextureUpdate&&): jumps straight to the base-object constructor

    // 0x1003d88c0, 32 bytes, base-object constructor, inline, placed by class name
    // WorldMap::UpdateTerrainTextures(unsigned long long, int, int, int, math::Rect<int>&)::TerrainTextureUpdate::TerrainTextureUpdate(TerrainTextureUpdate&&)
    /* TerrainTextureUpdate(TerrainTextureUpdate&&) */

    void WorldMap::UpdateTerrainTextures(
        unsigned long long, int, int, int,
        math::Rect<int>&)::TerrainTextureUpdate::TerrainTextureUpdate(TerrainTextureUpdate* param_1) {
        *(undefined8*)this = *(undefined8*)param_1;
        new ((this + 8)) Array<unsigned int, eastl::allocator>((Array*)(param_1 + 8));
    }

} // namespace jag::game
