// libs/game/runetek5/scene/entities/LocationContainer.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.game.runetek5

namespace jag::game {
    class LocationContainer : public MapSquare // base inferred from shared vtable slots
    {
    public:
        // virtual methods in vtable order
        virtual ~LocationContainer();
        virtual bool IsVisibleEntity() const;
        virtual void GetLoadImportance() const;
        virtual float GetLoadProgress() const;
        virtual void Destruct();
        uint8_t* GetDynamicChangedLocations() const;
        uint8_t* GetDynamicMultiLocations() const;
        int GetMinGridX() const;
        int GetMinGridZ() const;
        LocationContainer(ConfigProvider* configProvider, PlayerVarDomain* playerVarDomain,
                          graphics::GraphNode* graphNode, const shared_ptr<World>& world, int arg5, int arg6, int arg7,
                          int arg8, int arg9, int arg10,
                          const eastl::vector<shared_ptr<MapSquareLocation>>& mapSquareLocations);
        void PrepareLocationLists(const eastl::vector<shared_ptr<MapSquareLocation>>& mapSquareLocations);
        uint32_t OverlapsArea(int arg1, int arg2, int arg3, int arg4);
        uint32_t LodLevelToPriority(LODLevel lodLevel);
        uint64_t LocationNeedsProcessing(const MapSquareLocation& mapSquareLocation) const;
        uint8_t CalculateLocationLOD(const MapSquareLocation& mapSquareLocation, const LinkMap& linkMap);
        bool IsLocationIndoors(const MapSquareLocation& mapSquareLocation, const LinkMap& linkMap);
        void UpdateLOD(StaticLocationLODContainer& staticLocationLODContainer, LODLevel lodLevel);
        void SetMultiLocState(int arg1, int arg2);
        void IncrementMultiLocState(int arg1);
        void IncrementAllMultiLocStates();
        void Build(graphics::RT7Core& rt7Core, Js5ResourceProvider& js5ResourceProvider, ConfigProvider& configProvider,
                   AssetBuilder& assetBuilder, int arg5, bool arg6, bool arg7);
        unsigned long BuildAllLocationsAtLOD(graphics::RT7Core& rt7Core, AssetBuilder& assetBuilder,
                                             StaticLocationLODContainer& staticLocationLODContainer,
                                             AssetJobPriority assetJobPriority, LODLevel lodLevel);
        void BuildAllLocationsUncombined(StaticLocationLODContainer& staticLocationLODContainer);
        void DestructAllBuiltLocationsAtLOD(LODLevel lodLevel);
        unsigned long BuildStaticUncombinableLocations(graphics::RT7Core& rt7Core,
                                                       Js5ResourceProvider& js5ResourceProvider,
                                                       ConfigProvider& configProvider, AssetBuilder& assetBuilder,
                                                       unsigned int arg5);
        unsigned long BuildDynamicLocations(eastl::vector<shared_ptr<Location>>& locations, graphics::RT7Core& rt7Core,
                                            Js5ResourceProvider& js5ResourceProvider, ConfigProvider& configProvider,
                                            AssetBuilder& assetBuilder, unsigned int arg6);
        void BuildMultiLocations(graphics::RT7Core& rt7Core, Js5ResourceProvider& js5ResourceProvider,
                                 ConfigProvider& configProvider, AssetBuilder& assetBuilder, unsigned int arg5);
        void LoadLocationModels(bool& arg1, bool& arg2, graphics::RT7Core& rt7Core, AssetBuilder& assetBuilder,
                                eastl::vector<LocationContainerLocation>& locationContainerLocations,
                                AssetJobPriority assetJobPriority, const HeightMap& heightMap, const LinkMap& linkMap);
        long ChangeLocation(const ChangeLocationRequest& changeLocationRequest);
        long FindLocation(const ChangeLocationRequest& changeLocationRequest, bool arg2);
        long UnhideCombinedLocationSection(const ChangeLocationRequest& changeLocationRequest);
        bool DeleteUncombinedLocation(eastl::vector<shared_ptr<Location>>& locations,
                                      const ChangeLocationRequest& changeLocationRequest, const Location* location,
                                      bool arg4);
        void DeleteLocation(const ChangeLocationRequest& changeLocationRequest, const Location* location);
        uint64_t HideLocation(const ChangeLocationRequest& changeLocationRequest);
        unsigned long LocationsMatch(const ChangeLocationRequest& changeLocationRequest,
                                     const shared_ptr<Location>& location, bool arg3);
        uint64_t HideLocationLOD(const ChangeLocationRequest& changeLocationRequest,
                                 StaticLocationLODContainer& staticLocationLODContainer);
        void HideLocations(LocShape locShape);
        void UnhideLocations(LocShape locShape);
        uint64_t UnhideCombinedLocationSectionLOD(const ChangeLocationRequest& changeLocationRequest,
                                                  StaticLocationLODContainer& staticLocationLODContainer);
        unsigned long ResetLocation(const ChangeLocationRequest& changeLocationRequest);
        void ResetArea(const CoordFine& coordFine1, const CoordFine& coordFine2);
        void ResetAllChangedAreas(const CoordFine& coordFine1, const CoordFine& coordFine2);
        void ResetLODArea(const CoordFine& coordFine1, const CoordFine& coordFine2,
                          StaticLocationLODContainer& staticLocationLODContainer);
        void ResetChangedAreasFromList(const eastl::vector<shared_ptr<Location>>& locations,
                                       const CoordFine& coordFine1, const CoordFine& coordFine2);
        long* AnimateLocation(const ChangeLocationRequest& changeLocationRequest);
        shared_ptr<Location>* FindLocationInList(const eastl::vector<shared_ptr<Location>>& locations,
                                                 const ChangeLocationRequest& changeLocationRequest);
        uint64_t FindLocationInLOD(StaticLocationLODContainer& staticLocationLODContainer,
                                   const ChangeLocationRequest& changeLocationRequest);
        long FindLocation(const CoordGrid& coordGrid, int arg2);
        shared_ptr<Location>* FindLocationInList(const eastl::vector<shared_ptr<Location>>& locations,
                                                 const CoordGrid& coordGrid, int arg3);
        uint64_t FindLocationInLOD(StaticLocationLODContainer& staticLocationLODContainer, const CoordGrid& coordGrid,
                                   int arg3);
        uint64_t FindLocationInLOD(StaticLocationLODContainer& staticLocationLODContainer, const CoordGrid& coordGrid,
                                   LocShape locShape);
        bool StaticLocationTexturesReady() const;
        bool StaticLocationShadersReady() const;
        unsigned long StaticUncombinableLocationsBuilt() const;
        uint64_t AllStaticLocationsReady() const;
        bool HasLocations() const;
        unsigned long IsHighPriority() const;
        bool HasStartedBuild() const;
        void SetHasStartedBuild(bool arg1);
        int GetMapSquareX() const;
        int GetMapSquareZ() const;
        int GetGridSizeX() const;
        int GetGridSizeZ() const;
        ConfigProvider* GetConfigProvider() const;
        static int64_t NullContainer;

    private:
        uint8_t** field_8;
        uint8_t _unknown_16[48];
        uint8_t field_64;
        uint8_t field_65;
        char field_66;
        bool field_67;
        int field_68;
        int field_72;
        uint8_t _unknown_76[40];
        uint32_t field_116;
        uint8_t _unknown_120[56];
        shared_ptr field_176;
        ConfigProvider* m_pConfigProvider;
        PlayerVarDomain* field_200;
        uint8_t field_208;
        uint8_t _unknown_209[3];
        int m_mapSquareX;
        int m_mapSquareZ;
        int m_minGridX;
        int m_minGridZ;
        int field_228;
        int field_232;
        uint8_t m_hasStartedBuild;
        uint8_t _unknown_237[115];
        ChangeLocationRequest field_352;
        uint8_t _unknown_472[22212];
    };

    class LocationContainerLocation {
    public:
        LocationContainerLocation(const shared_ptr<MapSquareLocation>& mapSquareLocation, signed char arg2);
        ~LocationContainerLocation();
        void ClearBuiltData();
        LocationContainerLocation* operator=(const LocationContainerLocation& locationContainerLocation);
        LocationContainerLocation(const LocationContainerLocation& locationContainerLocation);
        LocationContainerLocation(LocationContainerLocation&& locationContainerLocation);

    private:
        uint8_t _unknown_0[16];
        ActiveComponent field_16;
        uint8_t _unknown_40[8];
        uint64_t field_48;
        uint8_t _unknown_56[48];
        schar field_104;
        uint8_t field_105;
        uint8_t _unknown_106[6];
    };

    class StaticLocationLODContainer {
    public:
        StaticLocationLODContainer();
        StaticLocationLODContainer* operator=(const StaticLocationLODContainer& staticLocationLODContainer);
        ~StaticLocationLODContainer();
        void Destruct();

    private:
        uint8_t _unknown_0[32];
        shared_ptr field_32;
        uint8_t _unknown_48[32];
        uint16_t field_80;
        uint8_t _unknown_82[6];
    };

    // 0x1003c1fc0
    uint8_t* LocationContainer::GetDynamicChangedLocations() const {
        return &field_320;
    }

    // 0x1003c2100
    uint8_t* LocationContainer::GetDynamicMultiLocations() const {
        return &field_288;
    }

    // 0x10040c2a0
    StaticLocationLODContainer*
    StaticLocationLODContainer::operator=(const StaticLocationLODContainer& staticLocationLODContainer) {
        *this = staticLocationLODContainer;
        *field_32 = staticLocationLODContainer.field_32;
        field_48 = staticLocationLODContainer.field_48;
        field_80 = staticLocationLODContainer.field_80;
        return this;
    }

    // 0x100414b00
    bool LocationContainer::HasStartedBuild() const {
        return m_hasStartedBuild;
    }

    // 0x100414b10
    void LocationContainer::SetHasStartedBuild(bool arg1) {
        m_locationLOD = arg1;
    }

    // 0x10041b7f0
    StaticLocationLODContainer::StaticLocationLODContainer()
        : eastl::vector<LocationContainerLocation>(), field_80(0) {}

    // 0x10041be20
    LocationContainerLocation*
    LocationContainerLocation::operator=(const LocationContainerLocation& locationContainerLocation) {
        *this = locationContainerLocation;
        *field_16 = locationContainerLocation.field_16;
        field_48 = locationContainerLocation.field_48;
        field_56 = locationContainerLocation.field_56;
        uint8_t uVar1 = locationContainerLocation.field_105;
        field_104 = locationContainerLocation.field_104;
        field_105 = uVar1;
        return this;
    }

    // 0x10041dc80
    LocationContainer::~LocationContainer() {
        field_8 = &PTR__LocationContainer_100eff410;
        ((field_352 + 32))->~array();
        field_352->~vector();
        field_320.~vector();
        field_288.~vector();
        field_272.~shared_ptr();
        field_240.~vector();
    }

    // 0x10041fe50
    uint32_t
    LocationContainer::DeleteUncombinedLocation(eastl::vector<shared_ptr<Location>>&, ChangeLocationRequest const&,
                                                Location const*,
                                                bool)::$_0::operator()(const shared_ptr<Location>& location) const {
        uint32_t uVar2;

        if (location.end() == **(long**)this) {
            uVar2 = 0;
        } else {
            uVar2 = 0;
            if (LocationsMatch((LocationContainer*)location, *(ChangeLocationRequest**)(this + 16), location, false) !=
                '\0') {
                if (**(char**)(this + 24) == '\0') {
                    uVar2 = 1;
                } else {
                    uVar2 = ((Location*)location.operator->())->IsStillBuilding();
                }
            }
        }
        return uVar2;
    }

    // 0x100444920
    int LocationContainer::GetMapSquareX() const {
        return m_objStackColourUnits;
    }

    // 0x100444930
    int LocationContainer::GetMapSquareZ() const {
        return m_objStackColourThousands;
    }

    // 0x100444940
    int LocationContainer::GetGridSizeX() const {
        return field_228 - m_minGridX;
    }

    // 0x100444960
    int LocationContainer::GetGridSizeZ() const {
        return field_232 - m_minGridZ;
    }

    // 0x10064c760
    ConfigProvider* LocationContainer::GetConfigProvider() const {
        return m_pWrapU;
    }

} // namespace jag::game

namespace jag::testframework {
    // 0x1003c1fc0: TestResultsWriter::GetResultsFormatted() const has the same machine code as game::LocationContainer::GetDynamicChangedLocations() const

} // namespace jag::testframework
