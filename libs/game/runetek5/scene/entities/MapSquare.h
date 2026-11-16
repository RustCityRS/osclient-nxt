// libs/game/runetek5/scene/entities/MapSquare.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::game {
    class MapSquare : public Entity // base inferred from shared vtable slots
    {
    public:
        class MapSquarePos;
        // virtual methods in vtable order
        virtual ~MapSquare();
        virtual bool IsVisibleEntity() const;
        virtual void Destruct();
        unsigned int GetMapSquareX() const;
        uint8_t* GetTerrain() const;
        vector<int, eastl::fixed_vector_allocator<4ul, _8ul, _4ul, _0ul, true> _>* GetLocations() const;
        vector<int, eastl::fixed_vector_allocator<4ul, _8ul, _4ul, _0ul, true> _>* GetLocations();
        MapSquare(graphics::GraphNode* graphNode, const shared_ptr<World>& world, int arg3, int arg4,
                  const shared_ptr<ClientCompositeData>& clientCompositeData);
        void SetDefaultIrradianceSHConsts();
        unsigned int Build(graphics::RT7Core* rt7Core, Js5ResourceProvider* js5ResourceProvider,
                           ConfigProvider* configProvider, PlayerVarDomain* playerVarDomain, AssetBuilder* assetBuilder,
                           const math::Vector3T<float>& vector3, int arg7, int arg8, unsigned int arg9, bool arg10,
                           bool arg11);
        unsigned long LoadEnvironment(Js5ResourceProvider* js5ResourceProvider);
        uint64_t LoadWaterPatches(Js5ResourceProvider* js5ResourceProvider, ConfigProvider* configProvider);
        uint32_t LoadTerrain(ConfigProvider* configProvider, const LODLevel& lodLevel, graphics::RT7Core* rt7Core,
                             AssetBuilder* assetBuilder, int arg5);
        uint8_t LoadLocations(graphics::RT7Core* rt7Core, Js5ResourceProvider* js5ResourceProvider,
                              ConfigProvider* configProvider, PlayerVarDomain* playerVarDomain,
                              AssetBuilder* assetBuilder, const math::Vector3T<float>& vector3, int arg7,
                              unsigned int arg8, bool arg9, bool arg10, const LODLevel& lodLevel,
                              const LODSettings& lodSettings);
        void DestroyEnvironmentLoader();
        void DestroyTerrain();
        void DestroyLocations();
        void DestroyPointLighting();
        void DestroyOldEnvironmentLoader();
        void PrepareForNewEnvironmentLoader();
        void DestroyOldTerrain();
        void PrepareForNewTerrain();
        void RebuildTerrain();
        void SetTerrainBlending(bool arg1);
        void RebuildArea(int arg1, int arg2, int arg3, int arg4);
        void PrepareForNewPointLights();
        uint8_t* GetTileHeight(int& arg1, int arg2, int arg3, int arg4, bool arg5,
                               HeightOffsetType heightOffsetType) const;
        uint8_t* GetFineHeight(int& arg1, int arg2, int arg3, int arg4, bool arg5,
                               HeightOffsetType heightOffsetType) const;
        uint32_t GetFineWaterDepth(int arg1, int arg2, int arg3) const;
        uint32_t GetTileLink(int arg1, int arg2, int arg3) const;
        uint32_t GetRemoveRoofID(int arg1, int arg2, int arg3) const;
        uint8_t GetUnderworldData(int arg1, int arg2) const;
        shared_ptr* GetHeightMap(int arg1) const;
        shared_ptr* GetWaterHeights() const;
        void AddLocationHeightOffset(int arg1, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7);
        void RemoveLocationHeightOffset(int arg1, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7);
        uint64_t* GetLocationContainer(int arg1, int arg2) const;
        bool ZoneMapSame(const shared_ptr<ClientCompositeData>& clientCompositeData) const;
        unsigned long ZoneLevelsEqual(const shared_ptr<ClientCompositeData>& clientCompositeData1,
                                      const shared_ptr<ClientCompositeData>& clientCompositeData2, int arg3, int arg4,
                                      int arg5);
        void RebuildRegion(const shared_ptr<ClientCompositeData>& clientCompositeData, bool arg2);
        void HideLocations(LocShape locShape);
        uint8_t* GetLocationContainers() const;
        void UnhideLocations(LocShape locShape);
        void PrioritiseLocations(int arg1, const math::Vector3T<float>& vector3, int arg3, bool arg4,
                                 const LODSettings& lodSettings);
        void BuildLocations(bool& arg1, graphics::RT7Core* rt7Core, Js5ResourceProvider* js5ResourceProvider,
                            ConfigProvider* configProvider, AssetBuilder* assetBuilder, unsigned int arg6, bool arg7,
                            bool arg8);
        void SetIrradianceSHConsts(const graphics::IrradianceSHCoefConsts& irradianceSHCoefConsts,
                                   unsigned long long arg2);
        void SkipIrradianceSHConstTransition();
        void SetMultiLocState(int arg1, int arg2);
        void IncrementMultiLocState(int arg1);
        void IncrementAllMultiLocStates();
        shared_ptr GetClientCompositeData() const;
        int GetMapSquareZ() const;
        auto GetIrradianceSHConsts() const;
        WorldmapRenderer GetMapSquarePointLights();
        bool IsTerrainBuilt();
        EnvironmentLoader* GetEnvironmentLoader();
        void GetLightSourcesLocal() const;
        bool HasBuiltPriorityZones() const;
        bool IsPrioritySquare() const;
        bool IsPartialMapBuild();
        void SetIsPartialMapBuild(bool arg1);
        void RecheckLocationContainers();
        bool IsInitialLightProbeSubmitted() const;
        uint16_t GetMapSquarePosition() const;
        void InitialLightProbeSubmitted();
        uint8_t GetStaticPointLightsLoaded() const;
        void GetLightSourcesRemote() const;
        void GetLightSourcesDynamic() const;
        uint8_t* GetWaterPatches() const;
        static shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>
            NullMapSquare; // = shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>()
        static eastl::vector<shared_ptr<LightSource>> NullLightList; // = vector<shared_ptr<LightSource>>()
        static eastl::vector<shared_ptr<graphics::WaterPatch>>
            NullWaterPatchList; // = vector<shared_ptr<graphics::WaterPatch>>()

    private:
        unsigned int m_mapSquareX;
        int m_mapSquareZ;
        shared_ptr m_clientCompositeData;
        char m_prioritySquare;
        uint8_t m_hasBuiltPriorityZones;
        uint8_t _unknown_218[2];
        int field_220;
        int field_224;
        int field_228;
        int field_232;
        uint8_t field_236;
        uint8_t _unknown_237[11];
        bool m_terrainBlending;
        uint8_t _unknown_249[7];
        WorldmapRenderer m_mapSquarePointLights;
        uint8_t _unknown_552[192];
        uint8_t field_744;
        uint8_t _unknown_745[359];
        bool m_partialMapBuild;
        uint8_t _unknown_1105[3];
        uint32_t field_1108;
        uint8_t m_initialLightProbeSubmitted;
        uint8_t _unknown_1113[7];
        WorldmapAreaMetadata field_1120;
        uint8_t _unknown_1524[21636];
    };

    class MapSquare::MapSquarePos {
    public:
        MapSquarePos(unsigned int arg1, unsigned int arg2);
        bool operator==(const MapSquarePos& mapSquarePos) const;
        void operator<(const MapSquarePos& mapSquarePos) const;

    private:
        char field_0;
        unsigned char field_1;
        uint8_t _unknown_2[7];
    };

    class MapSquareEnvInfo {
    public:
        ~MapSquareEnvInfo();
        MapSquareEnvInfo(MapSquare::MapSquarePos mapSquarePos,
                         const shared_ptr<MapEnvironmentSettings>& mapEnvironmentSettings);
        unsigned long hash() const;
        MapSquareEnvInfo(const MapSquareEnvInfo& mapSquareEnvInfo);
        MapSquareEnvInfo(MapSquareEnvInfo&& mapSquareEnvInfo);
        uint64_t operator==(const MapSquareEnvInfo& mapSquareEnvInfo) const;

    private:
        unsigned char field_0;
        unsigned char field_1;
        uint8_t _unknown_2[6];
        shared_ptr field_8;
    };

    class MapSquareEnvIrradianceInfo {
    public:
        ~MapSquareEnvIrradianceInfo();
        MapSquareEnvIrradianceInfo(const MapSquareEnvIrradianceInfo& mapSquareEnvIrradianceInfo);
        MapSquareEnvIrradianceInfo(MapSquareEnvIrradianceInfo&& mapSquareEnvIrradianceInfo);
        MapSquareEnvIrradianceInfo(const MapSquareEnvInfo& mapSquareEnvInfo, unsigned long arg2,
                                   const graphics::IrradianceSHCoefConsts& irradianceSHCoefConsts);

    private:
        uint8_t field_0;
        uint8_t _unknown_1[31];
        unsigned long field_32;
        uint64_t field_40;
        uint64_t field_48;
        uint64_t field_56;
        uint64_t field_64;
        uint64_t field_72;
        uint64_t field_80;
        uint64_t field_88;
        uint64_t field_96;
        uint64_t field_104;
        uint64_t field_112;
        uint64_t field_120;
        uint64_t field_128;
        uint64_t field_136;
        uint64_t field_144;
        uint64_t field_152;
    };

    class MapSquareLocation {
    public:
        ~MapSquareLocation();
        MapSquareLocation(signed char arg1, signed char arg2, signed char arg3, int arg4, const LocData& locData,
                          bool arg6, bool arg7, signed char arg8, const shared_ptr<LocType>& locType,
                          unsigned short arg10, bool arg11);
        MapSquareLocation(signed char arg1, signed char arg2, signed char arg3, int arg4, const LocData& locData,
                          bool arg6, bool arg7, bool arg8);

    private:
        int field_0;
        schar field_4;
        schar field_5;
        schar field_6;
        uint8_t _unknown_7[1];
        LocData field_8;
        uint8_t _unknown_40[20];
        bool field_60;
        bool field_61;
        schar field_62;
        uint8_t _unknown_63[1];
        unsigned short field_64;
        bool field_66;
        uint8_t field_67;
        uint8_t _unknown_68[12];
    };

    class MapSquareStatus {
    public:
        ~MapSquareStatus();
        MapSquareStatus(MapSquareStatus&& mapSquareStatus);
        MapSquareStatus();

    private:
        uint8_t _unknown_0[16];
        uint8_t* field_16;
    };

    // 0x1003c2110
    vector<int, eastl::fixed_vector_allocator<4ul, _8ul, _4ul, _0ul, true> _>* MapSquare::GetLocations() const {
        return (vector<int, eastl::fixed_vector_allocator<4ul, _8ul, _4ul, _0ul, true> _>*)&field_712;
    }

    // 0x1004140b0
    uint8_t* MapSquare::GetLocationContainers() const {
        return &field_752;
    }

    // 0x100414eb0
    shared_ptr MapSquare::GetClientCompositeData() const {
        return &field_200;
    }

    // 0x10042ee90
    auto MapSquare::GetIrradianceSHConsts() const {
        unsigned long long arg1 = FrameTime::GetCurrentTimeMS();
        auto result = field_848.GetValue(arg1);
        return result;
    }

    // 0x10043dc90
    bool MapSquare::IsTerrainBuilt() {
        uint64_t uVar2;

        if ((&field_240)->operator_cast_to_bool() == '\0') {
            uVar2 = 0;
        } else {
            uVar2 = ((Entity*)field_240.operator->())->IsAtTargetLOD();
        }
        return uVar2;
    }

    // 0x100441600
    EnvironmentLoader* MapSquare::GetEnvironmentLoader() {
        return (EnvironmentLoader*)field_704.get();
    }

    // 0x100441b90
    void MapSquare::GetLightSourcesLocal() const {
        m_mapSquarePointLights->GetDefaultValue();
    }

    // 0x100442fb0
    bool MapSquare::HasBuiltPriorityZones() const {
        return m_hasBuiltPriorityZones;
    }

    // 0x100442fc0
    bool MapSquare::IsPrioritySquare() const {
        return m_prioritySquare;
    }

    // 0x100443440
    bool MapSquare::IsPartialMapBuild() {
        return m_partialMapBuild;
    }

    // 0x100443640
    void MapSquare::SetIsPartialMapBuild(bool arg1) {
        m_partialMapBuild = arg1;
    }

    // 0x100443660
    void MapSquare::RecheckLocationContainers() {
        field_236 = 1;
    }

    // 0x100443670
    bool MapSquare::IsInitialLightProbeSubmitted() const {
        return m_initialLightProbeSubmitted;
    }

    // 0x100443680
    uint16_t MapSquare::GetMapSquarePosition() const {
        uint16_t uVar1;
        uint8_t local_a[2];

        new (local_a) MapSquarePos(m_mapSquareX, m_mapSquareZ);
        uVar1._0_1_ = local_a[0];
        uVar1._1_1_ = local_a[1];
        return uVar1;
    }

    // 0x1004436b0
    void MapSquare::InitialLightProbeSubmitted() {
        m_initialLightProbeSubmitted = 1;
    }

    // 0x10044c940
    MapSquare::MapSquarePos::MapSquarePos(unsigned int arg1, unsigned int arg2) {
        field_0 = (char)arg1;
        field_1 = (unsigned char)arg2;
        if (255 < arg1) {
            LogAssert("x <= std::numeric_limits<decltype(m_mapSquareX)>::max()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/"
                      "entities/MapSquare.h",
                      92, nullptr);
        }
        if (255 < arg2) {
            LogAssert("z <= std::numeric_limits<decltype(m_mapSquareZ)>::max()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/"
                      "entities/MapSquare.h",
                      93, nullptr);
        }
    }

    // 0x100450450
    MapSquareStatus::MapSquareStatus(MapSquareStatus&& mapSquareStatus) {
        shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(mapSquareStatus);
        field_16 = mapSquareStatus.field_16;
    }

    // 0x1004504d0
    MapSquareStatus::MapSquareStatus() : shared_ptr() {
        field_16 = DataStatus::MISSING;
    }

    // 0x100468930
    uint8_t MapSquare::GetStaticPointLightsLoaded() const {
        if (m_partialMapBuild == false) {
            return m_mapSquarePointLights->IsValid();
        }
        return 1;
    }

    // 0x100468950
    void MapSquare::GetLightSourcesRemote() const {
        m_mapSquarePointLights->GetLogStreams();
    }

    // 0x100468970
    void MapSquare::GetLightSourcesDynamic() const {
        m_mapSquarePointLights->GetLightSourcesDynamic();
    }

    // 0x100468c40
    uint8_t* MapSquare::GetWaterPatches() const {
        unique_ptr<Terrain, MakeUniquePool<Terrain, 32>::UniquePoolDeleter>* this_01;
        Terrain* this_02;
        uint8_t* puVar2;

        auto this_00 = GetParentLocationType();
        if (std::unique_ptr::operator_cast_to_bool(this_00) == '\0') {
            puVar2 = &NullWaterPatchList;
        } else {
            this_01 = (unique_ptr<Terrain, MakeUniquePool<Terrain, 32>::UniquePoolDeleter>*)GetParentLocationType();
            this_02 = (Terrain*)(*this_01).operator->();
            puVar2 = (uint8_t*)this_02->GetWaterPatches();
        }
        return puVar2;
    }

    // 0x1004784d0
    unsigned long MapSquareEnvInfo::hash() const {
        unsigned long arg2;

        return local_20 = 0;
        if (field_8->operator_cast_to_bool() != '\0') {
            arg2 = ((MapEnvironmentSettings*)(*field_8).operator->())->hash();
            hash_combine(&local_20, arg2);
        }
        hash_combine<unsigned char>(&local_20, &field_0);
        hash_combine<unsigned char>(&local_20, &field_1);
        return local_20;
    }

    // 0x10047f400
    MapSquareEnvInfo::MapSquareEnvInfo(MapSquare::MapSquarePos mapSquarePos,
                                       const shared_ptr<MapEnvironmentSettings>& mapEnvironmentSettings) {
        shared_ptr<oldscape::dash3d::GroundDecor>* in_RDX;

        field_0 = (char)mapEnvironmentSettings;
        field_1 = (char)((unsigned long)mapEnvironmentSettings >> 8);
        new (field_8) shared_ptr(in_RDX);
    }

    // 0x10047f580
    MapSquareEnvIrradianceInfo::MapSquareEnvIrradianceInfo(const MapSquareEnvIrradianceInfo& mapSquareEnvIrradianceInfo)
        : field_0(mapSquareEnvIrradianceInfo.field_0), field_8(mapSquareEnvIrradianceInfo.field_8) {
        uint64_t uVar1 = mapSquareEnvIrradianceInfo.field_152;
        field_144 = mapSquareEnvIrradianceInfo.field_144;
        field_152 = uVar1;
        uVar1 = mapSquareEnvIrradianceInfo.field_136;
        field_128 = mapSquareEnvIrradianceInfo.field_128;
        field_136 = uVar1;
        uVar1 = mapSquareEnvIrradianceInfo.field_120;
        field_112 = mapSquareEnvIrradianceInfo.field_112;
        field_120 = uVar1;
        uVar1 = mapSquareEnvIrradianceInfo.field_104;
        field_96 = mapSquareEnvIrradianceInfo.field_96;
        field_104 = uVar1;
        unsigned long uVar2 = mapSquareEnvIrradianceInfo.field_32;
        uVar1 = mapSquareEnvIrradianceInfo.field_40;
        uint64_t uVar3 = mapSquareEnvIrradianceInfo.field_48;
        uint64_t uVar4 = mapSquareEnvIrradianceInfo.field_56;
        uint64_t uVar5 = mapSquareEnvIrradianceInfo.field_64;
        uint64_t uVar6 = mapSquareEnvIrradianceInfo.field_72;
        uint64_t uVar7 = mapSquareEnvIrradianceInfo.field_88;
        field_80 = mapSquareEnvIrradianceInfo.field_80;
        field_88 = uVar7;
        field_64 = uVar5;
        field_72 = uVar6;
        field_48 = uVar3;
        field_56 = uVar4;
        field_32 = uVar2;
        field_40 = uVar1;
    }

    // 0x10047f610
    MapSquareEnvInfo::MapSquareEnvInfo(const MapSquareEnvInfo& mapSquareEnvInfo) {
        unsigned char uVar1 = mapSquareEnvInfo.field_1;
        field_0 = mapSquareEnvInfo.field_0;
        field_1 = uVar1;
        new (field_8) shared_ptr(mapSquareEnvInfo.field_8);
    }

    // 0x10047f680
    MapSquareEnvIrradianceInfo::MapSquareEnvIrradianceInfo(MapSquareEnvIrradianceInfo&& mapSquareEnvIrradianceInfo)
        : field_0(mapSquareEnvIrradianceInfo.field_0), field_8(mapSquareEnvIrradianceInfo.field_8) {
        uint64_t uVar1 = mapSquareEnvIrradianceInfo.field_152;
        field_144 = mapSquareEnvIrradianceInfo.field_144;
        field_152 = uVar1;
        uVar1 = mapSquareEnvIrradianceInfo.field_136;
        field_128 = mapSquareEnvIrradianceInfo.field_128;
        field_136 = uVar1;
        uVar1 = mapSquareEnvIrradianceInfo.field_120;
        field_112 = mapSquareEnvIrradianceInfo.field_112;
        field_120 = uVar1;
        uVar1 = mapSquareEnvIrradianceInfo.field_104;
        field_96 = mapSquareEnvIrradianceInfo.field_96;
        field_104 = uVar1;
        unsigned long uVar2 = mapSquareEnvIrradianceInfo.field_32;
        uVar1 = mapSquareEnvIrradianceInfo.field_40;
        uint64_t uVar3 = mapSquareEnvIrradianceInfo.field_48;
        uint64_t uVar4 = mapSquareEnvIrradianceInfo.field_56;
        uint64_t uVar5 = mapSquareEnvIrradianceInfo.field_64;
        uint64_t uVar6 = mapSquareEnvIrradianceInfo.field_72;
        uint64_t uVar7 = mapSquareEnvIrradianceInfo.field_88;
        field_80 = mapSquareEnvIrradianceInfo.field_80;
        field_88 = uVar7;
        field_64 = uVar5;
        field_72 = uVar6;
        field_48 = uVar3;
        field_56 = uVar4;
        field_32 = uVar2;
        field_40 = uVar1;
    }

    // 0x10047f710
    MapSquareEnvInfo::MapSquareEnvInfo(MapSquareEnvInfo&& mapSquareEnvInfo) {
        unsigned char uVar1 = mapSquareEnvInfo.field_1;
        field_0 = mapSquareEnvInfo.field_0;
        field_1 = uVar1;
        field_8->shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(mapSquareEnvInfo.field_8);
    }

    // 0x100480ba0
    uint64_t MapSquareEnvInfo::operator==(const MapSquareEnvInfo& mapSquareEnvInfo) const {
        MapEnvironmentSettings* this_00;
        MapEnvironmentSettings* mapEnvironmentSettings;
        uint64_t uVar1;

        if ((field_0 == mapSquareEnvInfo.field_0) && (field_1 == mapSquareEnvInfo.field_1)) {
            this_00 = (MapEnvironmentSettings*)**field_8;
            mapEnvironmentSettings = (MapEnvironmentSettings*)*mapSquareEnvInfo.field_8;
            uVar1 = *this_00 == *mapEnvironmentSettings;
        } else {
            uVar1 = 0;
        }
        return uVar1;
    }

    // 0x100480c20
    bool MapSquare::MapSquarePos::operator==(const MapSquare::MapSquarePos& mapSquarePos) const {
        if (field_0 == mapSquarePos.field_0) {
            return field_1 == mapSquarePos.field_1;
        }
        return false;
    }

    // 0x100480ed0
    void MapSquare::MapSquarePos::operator<(const MapSquare::MapSquarePos& mapSquarePos) const {
        uint64_t extraout_RDX;
        uint64_t extraout_RDX_00;

        uint64_t local_30 = std::tie<unsigned char const, unsigned char const>(*this, field_1);
        uint64_t local_28 = extraout_RDX;
        uint64_t local_20 = std::tie<unsigned char const, unsigned char const>(mapSquarePos, mapSquarePos.field_1);
        uint64_t local_18 = extraout_RDX_00;
        std::operator<((tuple<unsigned char const&, unsigned char const&>*)&local_30,
                       (tuple<unsigned char const&, unsigned char const&>*)&local_20);
    }

    // 0x100483490
    MapSquareEnvIrradianceInfo::MapSquareEnvIrradianceInfo(
        const MapSquareEnvInfo& mapSquareEnvInfo, unsigned long arg2,
        const graphics::IrradianceSHCoefConsts& irradianceSHCoefConsts)
        : field_0(1), field_8(mapSquareEnvInfo), field_32(arg2) {
        uint64_t uVar1 = *(uint64_t*)&irradianceSHCoefConsts.field_8;
        uint64_t uVar2 = *(uint64_t*)&irradianceSHCoefConsts.field_16;
        uint64_t uVar3 = *(uint64_t*)&irradianceSHCoefConsts.field_24;
        uint64_t uVar4 = *(uint64_t*)&irradianceSHCoefConsts.field_32;
        uint64_t uVar5 = *(uint64_t*)&irradianceSHCoefConsts.field_40;
        uint64_t uVar6 = *(uint64_t*)&irradianceSHCoefConsts.field_48;
        uint64_t uVar7 = *(uint64_t*)&irradianceSHCoefConsts.field_56;
        field_48 = *(uint64_t*)irradianceSHCoefConsts;
        field_56 = uVar1;
        field_64 = uVar2;
        field_72 = uVar3;
        field_80 = uVar4;
        field_88 = uVar5;
        field_96 = uVar6;
        field_104 = uVar7;
        uVar1 = *(uint64_t*)&irradianceSHCoefConsts.field_72;
        field_112 = *(uint64_t*)&irradianceSHCoefConsts.field_64;
        field_120 = uVar1;
        uVar1 = *(uint64_t*)&irradianceSHCoefConsts.field_88;
        field_128 = *(uint64_t*)&irradianceSHCoefConsts.field_80;
        field_136 = uVar1;
        uVar1 = *(uint64_t*)(irradianceSHCoefConsts + 1);
        field_144 = *(uint64_t*)&irradianceSHCoefConsts.field_96;
        field_152 = uVar1;
    }

} // namespace jag::game
