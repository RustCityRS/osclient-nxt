// libs/game/runetek5/scene/entities/MapSquare.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::game {
    class MapSquare : public Entity // base inferred from shared vtable slots
    {
    public:
        class MapSquarePos;
        // virtual methods in vtable order
        virtual ~MapSquare();
        virtual IsVisibleEntity() const;
        virtual void Destruct();
        uint GetMapSquareX() const;
        GetTerrain() const;
        GetLocations() const;
        GetLocations();
        MapSquare(graphics::GraphNode*, shared_ptr<World> const&, int, int, shared_ptr<ClientCompositeData> const&);
        void SetDefaultIrradianceSHConsts();
        uint Build(graphics::RT7Core*, Js5ResourceProvider*, ConfigProvider*, PlayerVarDomain*, AssetBuilder*,
                   math::Vector3T<float> const&, int, int, unsigned int, bool, bool);
        ulong LoadEnvironment(Js5ResourceProvider*);
        LoadWaterPatches(Js5ResourceProvider*, ConfigProvider*);
        LoadTerrain(ConfigProvider*, LODLevel const&, graphics::RT7Core*, AssetBuilder*, int);
        LoadLocations(graphics::RT7Core*, Js5ResourceProvider*, ConfigProvider*, PlayerVarDomain*, AssetBuilder*,
                      math::Vector3T<float> const&, int, unsigned int, bool, bool, LODLevel const&, LODSettings const&);
        void DestroyEnvironmentLoader();
        void DestroyTerrain();
        void DestroyLocations();
        void DestroyPointLighting();
        void DestroyOldEnvironmentLoader();
        void PrepareForNewEnvironmentLoader();
        void DestroyOldTerrain();
        void PrepareForNewTerrain();
        void RebuildTerrain();
        void SetTerrainBlending(bool);
        void RebuildArea(int, int, int, int);
        void PrepareForNewPointLights();
        GetTileHeight(int&, int, int, int, bool, HeightOffsetType) const;
        GetFineHeight(int&, int, int, int, bool, HeightOffsetType) const;
        GetFineWaterDepth(int, int, int) const;
        GetTileLink(int, int, int) const;
        GetRemoveRoofID(int, int, int) const;
        GetUnderworldData(int, int) const;
        GetHeightMap(int) const;
        GetWaterHeights() const;
        void AddLocationHeightOffset(int, int, int, int, int, int, int);
        void RemoveLocationHeightOffset(int, int, int, int, int, int, int);
        GetLocationContainer(int, int) const;
        bool ZoneMapSame(shared_ptr<ClientCompositeData> const&) const;
        ulong ZoneLevelsEqual(shared_ptr<ClientCompositeData> const&, shared_ptr<ClientCompositeData> const&, int, int,
                              int);
        void RebuildRegion(shared_ptr<ClientCompositeData> const&, bool);
        void HideLocations(LocShape);
        GetLocationContainers() const;
        void UnhideLocations(LocShape);
        void PrioritiseLocations(int, math::Vector3T<float> const&, int, bool, LODSettings const&);
        void BuildLocations(bool&, graphics::RT7Core*, Js5ResourceProvider*, ConfigProvider*, AssetBuilder*,
                            unsigned int, bool, bool);
        void SetIrradianceSHConsts(graphics::IrradianceSHCoefConsts const&, unsigned long long);
        void SkipIrradianceSHConstTransition();
        void SetMultiLocState(int, int);
        void IncrementMultiLocState(int);
        void IncrementAllMultiLocStates();
        shared_ptr GetClientCompositeData() const;
        uint GetMapSquareZ() const;
        MapSquare* GetIrradianceSHConsts() const;
        WorldmapRenderer GetMapSquarePointLights();
        IsTerrainBuilt();
        void GetEnvironmentLoader();
        void GetLightSourcesLocal() const;
        HasBuiltPriorityZones() const;
        char IsPrioritySquare() const;
        IsPartialMapBuild();
        void SetIsPartialMapBuild(bool);
        void RecheckLocationContainers();
        IsInitialLightProbeSubmitted() const;
        GetMapSquarePosition() const;
        void InitialLightProbeSubmitted();
        GetStaticPointLightsLoaded() const;
        void GetLightSourcesRemote() const;
        void GetLightSourcesDynamic() const;
        GetWaterPatches() const;
        static shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> /* 16 bytes */ NullMapSquare;
        static eastl::vector<shared_ptr<LightSource>, eastl::allocator> /* 32 bytes */
            NullLightList; // = vector<shared_ptr<LightSource>,eastl::allocator>()
        static eastl::vector<shared_ptr<graphics::WaterPatch>, eastl::allocator> /* 32 bytes */
            NullWaterPatchList; // = vector<shared_ptr<graphics::WaterPatch>,eastl::allocator>()

        // data members, from how the methods use this: 23160 bytes, the first 192 are Entity
        uint m_mapSquareX;                  // offset 192
        uint m_mapSquareZ;                  // offset 196
        shared_ptr m_clientCompositeData;   // offset 200
        char m_prioritySquare;              // offset 216
        undefined1 m_hasBuiltPriorityZones; // offset 217
        char _unknown_218[2];
        int field_220;        // offset 220
        int field_224;        // offset 224
        int field_228;        // offset 228
        int field_232;        // offset 232
        undefined1 field_236; // offset 236
        char _unknown_237[11];
        bool m_terrainBlending; // offset 248
        char _unknown_249[7];
        WorldmapRenderer m_mapSquarePointLights; // offset 256
        char _unknown_552[192];
        undefined1 field_744; // offset 744
        char _unknown_745[359];
        bool m_partialMapBuild; // offset 1104
        char _unknown_1105[3];
        undefined4 field_1108;                   // offset 1108
        undefined1 m_initialLightProbeSubmitted; // offset 1112
        char _unknown_1113[7];
        WorldmapAreaMetadata field_1120; // offset 1120
        char _unknown_1524[21636];
    };

    class MapSquare::MapSquarePos {
    public:
        MapSquarePos(unsigned int, unsigned int);
        bool operator==(MapSquarePos const&) const;
        void operator<(MapSquarePos const&) const;

        // data members, from how the methods use this: 9 bytes
        char field_0;  // offset 0
        uchar field_1; // offset 1
        char _unknown_2[7];
    };

    class MapSquareEnvInfo {
    public:
        ~MapSquareEnvInfo();
        MapSquareEnvInfo(MapSquare::MapSquarePos, shared_ptr<MapEnvironmentSettings> const&);
        ulong hash() const;
        MapSquareEnvInfo(MapSquareEnvInfo const&);
        MapSquareEnvInfo(MapSquareEnvInfo&&);
        operator==(MapSquareEnvInfo const&) const;

        // data members, from how the methods use this: 24 bytes
        uchar field_0; // offset 0
        uchar field_1; // offset 1
        char _unknown_2[6];
        shared_ptr field_8; // offset 8
    };

    class MapSquareEnvIrradianceInfo {
    public:
        ~MapSquareEnvIrradianceInfo();
        MapSquareEnvIrradianceInfo(MapSquareEnvIrradianceInfo const&);
        MapSquareEnvIrradianceInfo(MapSquareEnvIrradianceInfo&&);
        MapSquareEnvIrradianceInfo(MapSquareEnvInfo const&, unsigned long, graphics::IrradianceSHCoefConsts const&);

        // data members, from how the methods use this: 160 bytes
        undefined1 field_0; // offset 0
        char _unknown_1[31];
        ulong field_32;       // offset 32
        undefined8 field_40;  // offset 40
        undefined8 field_48;  // offset 48
        undefined8 field_56;  // offset 56
        undefined8 field_64;  // offset 64
        undefined8 field_72;  // offset 72
        undefined8 field_80;  // offset 80
        undefined8 field_88;  // offset 88
        undefined8 field_96;  // offset 96
        undefined8 field_104; // offset 104
        undefined8 field_112; // offset 112
        undefined8 field_120; // offset 120
        undefined8 field_128; // offset 128
        undefined8 field_136; // offset 136
        undefined8 field_144; // offset 144
        undefined8 field_152; // offset 152
    };

    class MapSquareLocation {
    public:
        ~MapSquareLocation();
        MapSquareLocation(signed char, signed char, signed char, int, LocData const&, bool, bool, signed char,
                          shared_ptr<LocType> const&, unsigned short, bool);
        MapSquareLocation(signed char, signed char, signed char, int, LocData const&, bool, bool, bool);

        // data members, from how the methods use this: 80 bytes
        undefined4 field_0; // offset 0
        undefined1 field_4; // offset 4
        undefined1 field_5; // offset 5
        undefined1 field_6; // offset 6
        char _unknown_7[1];
        LocData field_8; // offset 8
        char _unknown_40[20];
        undefined1 field_60; // offset 60
        undefined1 field_61; // offset 61
        undefined1 field_62; // offset 62
        char _unknown_63[1];
        undefined2 field_64; // offset 64
        undefined1 field_66; // offset 66
        undefined1 field_67; // offset 67
        char _unknown_68[12];
    };

    class MapSquareStatus {
    public:
        ~MapSquareStatus();
        MapSquareStatus(MapSquareStatus&&);
        MapSquareStatus();

        // data members, from how the methods use this: 24 bytes
        char _unknown_0[16];
        undefined* field_16; // offset 16
    };

    // 0x1003c2110, 16 bytes, inline, placed by class name and debug map
    // MapSquare::GetLocations() const
    /* MapSquare::GetLocations() */

    undefined1* MapSquare::GetLocations() {
        return &field_712;
    }

    // 0x1004140b0, 16 bytes, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // MapSquare::GetLocationContainers() const
    /* graphics::Model::GetParticleEffectors() const */

    undefined1* graphics::Model::GetParticleEffectors() {
        return &field_752;
    }

    // 0x100414eb0, 16 bytes, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // MapSquare::GetClientCompositeData() const
    /* http::HTTPRequest::GetContentType() const */

    undefined1* http::HTTPRequest::GetContentType() {
        return &field_200;
    }

    // 0x10042ee90, 48 bytes, inline, placed by class name
    // MapSquare::GetIrradianceSHConsts() const
    MapSquare* MapSquare::GetIrradianceSHConsts() {
        long in_RSI;

        FrameTime::GetCurrentTimeMS();
        GetValue(in_RSI + 848);
        return this;
    }

    // 0x10043dc90, 64 bytes, inline, placed by class name
    // MapSquare::IsTerrainBuilt()
    undefined8 MapSquare::IsTerrainBuilt() {
        Entity* this_00;
        undefined8 uVar2;

        if ((&field_240)->operator_cast_to_bool()) {
            this_00 = (Entity*)std::unique_ptr<Terrain, MakeUniquePool<Terrain, 32>::UniquePoolDeleter>::operator->(
                (unique_ptr<Terrain, MakeUniquePool<Terrain, 32>::UniquePoolDeleter>*)&field_240);
            uVar2 = this_00->IsAtTargetLOD();
        } else {
            uVar2 = 0;
        }
        return uVar2;
    }

    // 0x100441600, 32 bytes, inline, placed by class name
    // MapSquare::GetEnvironmentLoader()
    void MapSquare::GetEnvironmentLoader() {
        (&field_704)->get();
    }

    // 0x100441b90, 32 bytes, inline, placed by class name
    // MapSquare::GetLightSourcesLocal() const
    void MapSquare::GetLightSourcesLocal() {
        m_mapSquarePointLights->GetDefaultValue();
    }

    // 0x100442fb0, 16 bytes, inline, placed by class name
    // MapSquare::HasBuiltPriorityZones() const
    undefined1 MapSquare::HasBuiltPriorityZones() {
        return m_hasBuiltPriorityZones;
    }

    // 0x100442fc0, 16 bytes, inline, placed by class name
    // MapSquare::IsPrioritySquare() const
    char MapSquare::IsPrioritySquare() {
        return m_prioritySquare;
    }

    // 0x100443440, 16 bytes, inline, placed by class name
    // MapSquare::IsPartialMapBuild()
    undefined1 MapSquare::IsPartialMapBuild() {
        return m_partialMapBuild;
    }

    // 0x100443640, 16 bytes, inline, placed by class name
    // MapSquare::SetIsPartialMapBuild(bool)
    void MapSquare::SetIsPartialMapBuild(bool param_1) {
        m_partialMapBuild = param_1;
    }

    // 0x100443660, 16 bytes, inline, placed by class name
    // MapSquare::RecheckLocationContainers()
    void MapSquare::RecheckLocationContainers() {
        field_236 = 1;
    }

    // 0x100443670, 16 bytes, inline, placed by class name
    // MapSquare::IsInitialLightProbeSubmitted() const
    undefined1 MapSquare::IsInitialLightProbeSubmitted() {
        return m_initialLightProbeSubmitted;
    }

    // 0x100443680, 48 bytes, inline, placed by class name
    // MapSquare::GetMapSquarePosition() const
    undefined2 MapSquare::GetMapSquarePosition() {
        undefined2 uVar1;
        undefined1 local_a[2];

        new (local_a) MapSquarePos(m_mapSquareX, m_mapSquareZ);
        uVar1._0_1_ = local_a[0];
        uVar1._1_1_ = local_a[1];
        return uVar1;
    }

    // 0x1004436b0, 16 bytes, inline, placed by class name
    // MapSquare::InitialLightProbeSubmitted()
    void MapSquare::InitialLightProbeSubmitted() {
        m_initialLightProbeSubmitted = 1;
    }

    // 0x10044c930, 16 bytes, complete-object constructor, inline, placed by class name
    // MapSquare::MapSquarePos::MapSquarePos(unsigned int, unsigned int): jumps straight to the base-object constructor

    // 0x10044c940, 112 bytes, base-object constructor, inline, placed by class name
    // MapSquare::MapSquarePos::MapSquarePos(unsigned int, unsigned int)
    void MapSquare::MapSquarePos::MapSquarePos(uint param_1, uint param_2) {
        field_0 = (char)param_1;
        field_1 = (uchar)param_2;
        if (255 < param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("x <= std::numeric_limits<decltype(m_mapSquareX)>::max()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/"
                      "entities/MapSquare.h",
                      92, (char*)0);
        }
        if (255 < param_2) {
            /* WARNING: Subroutine does not return */
            LogAssert("z <= std::numeric_limits<decltype(m_mapSquareZ)>::max()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/"
                      "entities/MapSquare.h",
                      93, (char*)0);
        }
    }

    // 0x100450440, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // MapSquareStatus::MapSquareStatus(MapSquareStatus&&): jumps straight to the base-object constructor

    // 0x100450450, 32 bytes, base-object constructor, inline, placed by class header (inline)
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // MapSquareStatus::MapSquareStatus(MapSquareStatus&&)
    /* MapArea::CompositeTextureMeta::CompositeTextureMeta(MapArea::CompositeTextureMeta&&)
    */

    void MapArea::CompositeTextureMeta::CompositeTextureMeta(CompositeTextureMeta* param_1) {
        shared_ptr<oldscape::RSevenDebugPresetProvider>::shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(
            (shared_ptr<oldscape::RSevenDebugPresetProvider>*)this, (shared_ptr*)param_1);
        field_16 = param_1->field_16;
    }

    // 0x1004504c0, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // MapSquareStatus::MapSquareStatus(): jumps straight to the base-object constructor

    // 0x1004504d0, 48 bytes, base-object constructor, inline, placed by class header (inline)
    // MapSquareStatus::MapSquareStatus()
    void MapSquareStatus::MapSquareStatus() {
        _func_decltype_nullptr* in_RSI;

        new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(in_RSI);
        field_16 = DataStatus::MISSING;
    }

    // 0x100468930, 32 bytes, inline, placed by class name
    // MapSquare::GetStaticPointLightsLoaded() const
    undefined1 MapSquare::GetStaticPointLightsLoaded() {
        undefined1 uVar1;

        if (m_partialMapBuild == false) {
            uVar1 = m_mapSquarePointLights->IsValid();
            return uVar1;
        }
        return 1;
    }

    // 0x100468950, 32 bytes, inline, placed by class name
    // MapSquare::GetLightSourcesRemote() const
    void MapSquare::GetLightSourcesRemote() {
        m_mapSquarePointLights->GetLogStreams();
    }

    // 0x100468970, 32 bytes, inline, placed by class name
    // MapSquare::GetLightSourcesDynamic() const
    void MapSquare::GetLightSourcesDynamic() {
        m_mapSquarePointLights->GetLightSourcesDynamic();
    }

    // 0x100468c40, 80 bytes, inline, placed by class name
    // MapSquare::GetWaterPatches() const
    undefined1* MapSquare::GetWaterPatches() {
        bool bVar1;
        unique_ptr* this_00;
        unique_ptr<Terrain, MakeUniquePool<Terrain, 32>::UniquePoolDeleter>* this_01;
        Terrain* this_02;
        undefined1* puVar2;

        this_00 = (unique_ptr*)GetParentLocationType();
        bVar1 = std::unique_ptr::operator_cast_to_bool(this_00);
        if (bVar1) {
            this_01 = (unique_ptr<Terrain, MakeUniquePool<Terrain, 32>::UniquePoolDeleter>*)GetParentLocationType();
            this_02 =
                (Terrain*)std::unique_ptr<Terrain, MakeUniquePool<Terrain, 32>::UniquePoolDeleter>::operator->(this_01);
            puVar2 = (undefined1*)this_02->GetWaterPatches();
        } else {
            puVar2 = &NullWaterPatchList;
        }
        return puVar2;
    }

    // 0x1004784c0, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // MapSquareEnvInfo::MapSquareEnvInfo(MapSquare::MapSquarePos, shared_ptr<MapEnvironmentSettings> const&): jumps straight to the base-object constructor

    // 0x1004784d0, 112 bytes, inline, placed by class header (inline)
    // MapSquareEnvInfo::hash() const
    ulong MapSquareEnvInfo::hash() {
        MapEnvironmentSettings* this_00;
        ulong uVar2;
        ulong local_20;

        local_20 = 0;
        if (field_8->operator_cast_to_bool()) {
            this_00 = (MapEnvironmentSettings*)shared_ptr<MapEnvironmentSettings>::operator->(
                (shared_ptr<MapEnvironmentSettings>*)field_8);
            uVar2 = this_00->hash();
            hash_combine(&local_20, uVar2);
        }
        hash_combine<unsigned char>(&local_20, &field_0);
        hash_combine<unsigned char>(&local_20, &field_1);
        return local_20;
    }

    // 0x10047f400, 32 bytes, base-object constructor, inline, placed by class header (inline)
    // MapSquareEnvInfo::MapSquareEnvInfo(MapSquare::MapSquarePos, shared_ptr<MapEnvironmentSettings> const&)
    void MapSquareEnvInfo::MapSquareEnvInfo(MapSquarePos param_1, shared_ptr* param_2) {
        shared_ptr* in_RDX;

        field_0 = (char)param_2;
        field_1 = (char)((ulong)param_2 >> 8);
        new (field_8, in_RDX) shared_ptr<oldscape::dash3d::Decor>();
    }

    // 0x10047f570, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // MapSquareEnvIrradianceInfo::MapSquareEnvIrradianceInfo(MapSquareEnvIrradianceInfo const&): jumps straight to the base-object constructor

    // 0x10047f580, 128 bytes, base-object constructor, inline, placed by class header (inline)
    // MapSquareEnvIrradianceInfo::MapSquareEnvIrradianceInfo(MapSquareEnvIrradianceInfo const&)
    void MapSquareEnvIrradianceInfo::MapSquareEnvIrradianceInfo(MapSquareEnvIrradianceInfo* param_1) {
        undefined8 uVar1;
        ulong uVar2;
        undefined8 uVar3;
        undefined8 uVar4;
        undefined8 uVar5;
        undefined8 uVar6;
        undefined8 uVar7;

        field_0 = param_1->field_0;
        new (&field_8, (MapSquareEnvInfo*)&param_1->field_8) MapSquareEnvInfo();
        uVar1 = param_1->field_152;
        field_144 = param_1->field_144;
        field_152 = uVar1;
        uVar1 = param_1->field_136;
        field_128 = param_1->field_128;
        field_136 = uVar1;
        uVar1 = param_1->field_120;
        field_112 = param_1->field_112;
        field_120 = uVar1;
        uVar1 = param_1->field_104;
        field_96 = param_1->field_96;
        field_104 = uVar1;
        uVar2 = param_1->field_32;
        uVar1 = param_1->field_40;
        uVar3 = param_1->field_48;
        uVar4 = param_1->field_56;
        uVar5 = param_1->field_64;
        uVar6 = param_1->field_72;
        uVar7 = param_1->field_88;
        field_80 = param_1->field_80;
        field_88 = uVar7;
        field_64 = uVar5;
        field_72 = uVar6;
        field_48 = uVar3;
        field_56 = uVar4;
        field_32 = uVar2;
        field_40 = uVar1;
    }

    // 0x10047f600, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // MapSquareEnvInfo::MapSquareEnvInfo(MapSquareEnvInfo const&): jumps straight to the base-object constructor

    // 0x10047f610, 32 bytes, base-object constructor, inline, placed by class header (inline)
    // MapSquareEnvInfo::MapSquareEnvInfo(MapSquareEnvInfo const&)
    void MapSquareEnvInfo::MapSquareEnvInfo(MapSquareEnvInfo* param_1) {
        uchar uVar1;

        uVar1 = param_1->field_1;
        field_0 = param_1->field_0;
        field_1 = uVar1;
        new (field_8, (shared_ptr*)param_1->field_8) shared_ptr<oldscape::dash3d::Decor>();
    }

    // 0x10047f670, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // MapSquareEnvIrradianceInfo::MapSquareEnvIrradianceInfo(MapSquareEnvIrradianceInfo&&): jumps straight to the base-object constructor

    // 0x10047f680, 128 bytes, base-object constructor, inline, placed by class header (inline)
    // MapSquareEnvIrradianceInfo::MapSquareEnvIrradianceInfo(MapSquareEnvIrradianceInfo&&)
    void MapSquareEnvIrradianceInfo::MapSquareEnvIrradianceInfo(MapSquareEnvIrradianceInfo* param_1) {
        undefined8 uVar1;
        ulong uVar2;
        undefined8 uVar3;
        undefined8 uVar4;
        undefined8 uVar5;
        undefined8 uVar6;
        undefined8 uVar7;

        field_0 = param_1->field_0;
        new (&field_8, (MapSquareEnvInfo*)&param_1->field_8) MapSquareEnvInfo();
        uVar1 = param_1->field_152;
        field_144 = param_1->field_144;
        field_152 = uVar1;
        uVar1 = param_1->field_136;
        field_128 = param_1->field_128;
        field_136 = uVar1;
        uVar1 = param_1->field_120;
        field_112 = param_1->field_112;
        field_120 = uVar1;
        uVar1 = param_1->field_104;
        field_96 = param_1->field_96;
        field_104 = uVar1;
        uVar2 = param_1->field_32;
        uVar1 = param_1->field_40;
        uVar3 = param_1->field_48;
        uVar4 = param_1->field_56;
        uVar5 = param_1->field_64;
        uVar6 = param_1->field_72;
        uVar7 = param_1->field_88;
        field_80 = param_1->field_80;
        field_88 = uVar7;
        field_64 = uVar5;
        field_72 = uVar6;
        field_48 = uVar3;
        field_56 = uVar4;
        field_32 = uVar2;
        field_40 = uVar1;
    }

    // 0x10047f700, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // MapSquareEnvInfo::MapSquareEnvInfo(MapSquareEnvInfo&&): jumps straight to the base-object constructor

    // 0x10047f710, 32 bytes, base-object constructor, inline, placed by class header (inline)
    // MapSquareEnvInfo::MapSquareEnvInfo(MapSquareEnvInfo&&)
    void MapSquareEnvInfo::MapSquareEnvInfo(MapSquareEnvInfo* param_1) {
        uchar uVar1;

        uVar1 = param_1->field_1;
        field_0 = param_1->field_0;
        field_1 = uVar1;
        shared_ptr<oldscape::RSevenDebugPresetProvider>::shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(
            (shared_ptr<oldscape::RSevenDebugPresetProvider>*)field_8, (shared_ptr*)param_1->field_8);
    }

    // 0x100480ba0, 80 bytes, inline, placed by class header (inline)
    // MapSquareEnvInfo::operator==(MapSquareEnvInfo const&) const
    /* MapSquareEnvInfo::TEMPNAMEPLACEHOLDERVALUE(MapSquareEnvInfo const&) const
    */

    undefined8 MapSquareEnvInfo::operator==(MapSquareEnvInfo* param_1) {
        MapEnvironmentSettings* this_00;
        MapEnvironmentSettings* pMVar1;
        undefined8 uVar2;

        if ((field_0 == param_1->field_0) && (field_1 == param_1->field_1)) {
            this_00 = (MapEnvironmentSettings*)shared_ptr<MapEnvironmentSettings>::operator*(
                (shared_ptr<MapEnvironmentSettings>*)field_8);
            pMVar1 = (MapEnvironmentSettings*)shared_ptr<MapEnvironmentSettings>::operator*(
                (shared_ptr<MapEnvironmentSettings>*)param_1->field_8);
            uVar2 = MapEnvironmentSettings::operator==(this_00, pMVar1);
        } else {
            uVar2 = 0;
        }
        return uVar2;
    }

    // 0x100480c20, 32 bytes, inline, placed by class name
    // MapSquare::MapSquarePos::operator==(MapSquare::MapSquarePos const&) const
    /* MapSquare::MapSquarePos::TEMPNAMEPLACEHOLDERVALUE(MapSquare::MapSquarePos
   const&) const */

    bool MapSquare::MapSquarePos::operator==(MapSquarePos* param_1) {
        if (field_0 == param_1->field_0) {
            return field_1 == param_1->field_1;
        }
        return false;
    }

    // 0x100480ed0, 80 bytes, inline, placed by class name
    // MapSquare::MapSquarePos::operator<(MapSquare::MapSquarePos const&) const
    /* MapSquare::MapSquarePos::TEMPNAMEPLACEHOLDERVALUE(MapSquare::MapSquarePos
   const&) const */

    void MapSquare::MapSquarePos::operator<(MapSquarePos* param_1) {
        undefined8 extraout_RDX;
        undefined8 extraout_RDX_00;
        undefined8 local_30;
        undefined8 local_28;
        undefined8 local_20;
        undefined8 local_18;

        local_30 = std::tie<unsigned char const, unsigned char const>((uchar*)this, &field_1);
        local_28 = extraout_RDX;
        local_20 = std::tie<unsigned char const, unsigned char const>((uchar*)param_1, &param_1->field_1);
        local_18 = extraout_RDX_00;
        std::operator<((tuple*)&local_30, (tuple*)&local_20);
    }

    // 0x100483420, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // MapSquareEnvIrradianceInfo::MapSquareEnvIrradianceInfo(MapSquareEnvInfo const&, unsigned long, graphics::IrradianceSHCoefConsts const&): jumps straight to the base-object constructor

    // 0x100483490, 128 bytes, base-object constructor, inline, placed by class header (inline)
    // MapSquareEnvIrradianceInfo::MapSquareEnvIrradianceInfo(MapSquareEnvInfo const&, unsigned long, graphics::IrradianceSHCoefConsts const&)
    void MapSquareEnvIrradianceInfo::MapSquareEnvIrradianceInfo(MapSquareEnvInfo* param_1, ulong param_2,
                                                                IrradianceSHCoefConsts* param_3) {
        undefined8 uVar1;
        undefined8 uVar2;
        undefined8 uVar3;
        undefined8 uVar4;
        undefined8 uVar5;
        undefined8 uVar6;
        undefined8 uVar7;

        field_0 = 1;
        new (&field_8, param_1) MapSquareEnvInfo();
        field_32 = param_2;
        uVar1 = *(undefined8*)&param_3->field_8;
        uVar2 = *(undefined8*)&param_3->field_16;
        uVar3 = *(undefined8*)&param_3->field_24;
        uVar4 = *(undefined8*)&param_3->field_32;
        uVar5 = *(undefined8*)&param_3->field_40;
        uVar6 = *(undefined8*)&param_3->field_48;
        uVar7 = *(undefined8*)&param_3->field_56;
        field_48 = *(undefined8*)param_3;
        field_56 = uVar1;
        field_64 = uVar2;
        field_72 = uVar3;
        field_80 = uVar4;
        field_88 = uVar5;
        field_96 = uVar6;
        field_104 = uVar7;
        uVar1 = *(undefined8*)&param_3->field_72;
        field_112 = *(undefined8*)&param_3->field_64;
        field_120 = uVar1;
        uVar1 = *(undefined8*)&param_3->field_88;
        field_128 = *(undefined8*)&param_3->field_80;
        field_136 = uVar1;
        uVar1 = *(undefined8*)(param_3 + 1);
        field_144 = *(undefined8*)&param_3->field_96;
        field_152 = uVar1;
    }

} // namespace jag::game
