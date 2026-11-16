// libs/game/runetek5/scene/entities/LocationContainer.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.game.runetek5

namespace jag::game {
    class LocationContainer : public MapSquare // base inferred from shared vtable slots
    {
    public:
        // virtual methods in vtable order
        virtual ~LocationContainer();
        virtual IsVisibleEntity() const;
        virtual void GetLoadImportance() const;
        virtual float GetLoadProgress() const;
        virtual void Destruct();
        GetDynamicChangedLocations() const;
        GetDynamicMultiLocations() const;
        int GetMinGridX() const;
        int GetMinGridZ() const;
        LocationContainer(ConfigProvider*, PlayerVarDomain*, graphics::GraphNode*, shared_ptr<World> const&, int, int,
                          int, int, int, int, eastl::vector<shared_ptr<MapSquareLocation>, eastl::allocator> const&);
        void PrepareLocationLists(eastl::vector<shared_ptr<MapSquareLocation>, eastl::allocator> const&);
        OverlapsArea(int, int, int, int);
        LodLevelToPriority(LODLevel);
        LocationNeedsProcessing(MapSquareLocation const&) const;
        byte CalculateLocationLOD(MapSquareLocation const&, LinkMap const&);
        bool IsLocationIndoors(MapSquareLocation const&, LinkMap const&);
        void UpdateLOD(StaticLocationLODContainer&, LODLevel);
        void SetMultiLocState(int, int);
        void IncrementMultiLocState(int);
        void IncrementAllMultiLocStates();
        void Build(graphics::RT7Core&, Js5ResourceProvider&, ConfigProvider&, AssetBuilder&, int, bool, bool);
        ulong BuildAllLocationsAtLOD(graphics::RT7Core&, AssetBuilder&, StaticLocationLODContainer&, AssetJobPriority,
                                     LODLevel);
        void BuildAllLocationsUncombined(StaticLocationLODContainer&);
        void DestructAllBuiltLocationsAtLOD(LODLevel);
        ulong BuildStaticUncombinableLocations(graphics::RT7Core&, Js5ResourceProvider&, ConfigProvider&, AssetBuilder&,
                                               unsigned int);
        ulong BuildDynamicLocations(eastl::vector<shared_ptr<Location>, eastl::allocator>&, graphics::RT7Core&,
                                    Js5ResourceProvider&, ConfigProvider&, AssetBuilder&, unsigned int);
        void BuildMultiLocations(graphics::RT7Core&, Js5ResourceProvider&, ConfigProvider&, AssetBuilder&,
                                 unsigned int);
        void LoadLocationModels(bool&, bool&, graphics::RT7Core&, AssetBuilder&,
                                eastl::vector<LocationContainerLocation, eastl::allocator>&, AssetJobPriority,
                                HeightMap const&, LinkMap const&);
        long ChangeLocation(ChangeLocationRequest const&);
        long FindLocation(ChangeLocationRequest const&, bool);
        long UnhideCombinedLocationSection(ChangeLocationRequest const&);
        bool DeleteUncombinedLocation(eastl::vector<shared_ptr<Location>, eastl::allocator>&,
                                      ChangeLocationRequest const&, Location const*, bool);
        void DeleteLocation(ChangeLocationRequest const&, Location const*);
        HideLocation(ChangeLocationRequest const&);
        ulong LocationsMatch(ChangeLocationRequest const&, shared_ptr<Location> const&, bool);
        HideLocationLOD(ChangeLocationRequest const&, StaticLocationLODContainer&);
        void HideLocations(LocShape);
        void UnhideLocations(LocShape);
        UnhideCombinedLocationSectionLOD(ChangeLocationRequest const&, StaticLocationLODContainer&);
        ulong ResetLocation(ChangeLocationRequest const&);
        void ResetArea(CoordFine const&, CoordFine const&);
        void ResetAllChangedAreas(CoordFine const&, CoordFine const&);
        void ResetLODArea(CoordFine const&, CoordFine const&, StaticLocationLODContainer&);
        void ResetChangedAreasFromList(eastl::vector<shared_ptr<Location>, eastl::allocator> const&, CoordFine const&,
                                       CoordFine const&);
        long* AnimateLocation(ChangeLocationRequest const&);
        shared_ptr* FindLocationInList(eastl::vector<shared_ptr<Location>, eastl::allocator> const&,
                                       ChangeLocationRequest const&);
        FindLocationInLOD(StaticLocationLODContainer&, ChangeLocationRequest const&);
        long FindLocation(CoordGrid const&, int);
        shared_ptr<Location>* FindLocationInList(eastl::vector<shared_ptr<Location>, eastl::allocator> const&,
                                                 CoordGrid const&, int);
        FindLocationInLOD(StaticLocationLODContainer&, CoordGrid const&, int);
        FindLocationInLOD(StaticLocationLODContainer&, CoordGrid const&, LocShape);
        bool StaticLocationTexturesReady() const;
        bool StaticLocationShadersReady() const;
        ulong StaticUncombinableLocationsBuilt() const;
        AllStaticLocationsReady() const;
        HasLocations() const;
        ulong IsHighPriority() const;
        HasStartedBuild() const;
        SetHasStartedBuild(bool);
        int GetMapSquareX() const;
        int GetMapSquareZ() const;
        int GetGridSizeX() const;
        int GetGridSizeZ() const;
        ConfigProvider* GetConfigProvider() const;
        static /* 8 bytes */ NullContainer;

        // data members, from how the methods use this: 472 bytes
        undefined** field_0; // offset 0, vtable pointer
        undefined** field_8; // offset 8
        char _unknown_16[48];
        byte field_64;       // offset 64
        undefined1 field_65; // offset 65
        undefined1 field_66; // offset 66
        bool field_67;       // offset 67
        int field_68;        // offset 68
        int field_72;        // offset 72
        char _unknown_76[40];
        undefined4 field_116; // offset 116
        char _unknown_120[56];
        shared_ptr field_176;              // offset 176
        ConfigProvider* m_pConfigProvider; // offset 192
        PlayerVarDomain* field_200;        // offset 200
        byte field_208;                    // offset 208
        char _unknown_209[3];
        int m_mapSquareX;             // offset 212
        int m_mapSquareZ;             // offset 216
        int m_minGridX;               // offset 220
        int m_minGridZ;               // offset 224
        int field_228;                // offset 228
        int field_232;                // offset 232
        undefined1 m_hasStartedBuild; // offset 236
        char _unknown_237[115];
        ChangeLocationRequest field_352; // offset 352
    };

    class LocationContainerLocation {
    public:
        LocationContainerLocation(shared_ptr<MapSquareLocation> const&, signed char);
        ~LocationContainerLocation();
        void ClearBuiltData();
        LocationContainerLocation* operator=(LocationContainerLocation const&);
        LocationContainerLocation(LocationContainerLocation const&);
        LocationContainerLocation(LocationContainerLocation&&);

        // data members, from how the methods use this: 112 bytes
        char _unknown_0[16];
        ActiveComponent field_16; // offset 16
        char _unknown_40[8];
        undefined8 field_48; // offset 48
        char _unknown_56[48];
        undefined1 field_104; // offset 104
        undefined1 field_105; // offset 105
        char _unknown_106[6];
    };

    class StaticLocationLODContainer {
    public:
        StaticLocationLODContainer();
        StaticLocationLODContainer* operator=(StaticLocationLODContainer const&);
        ~StaticLocationLODContainer();
        void Destruct();

        // data members, from how the methods use this: 88 bytes
        char _unknown_0[32];
        shared_ptr field_32; // offset 32
        char _unknown_48[32];
        undefined2 field_80; // offset 80
        char _unknown_82[6];
    };

    // 0x1003c1fc0, 16 bytes, inline, placed by class name and debug map
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // LocationContainer::GetDynamicChangedLocations() const
    /* graphics::Model::GetPointLightBounds() const */

    undefined1* graphics::Model::GetPointLightBounds() {
        return &field_320;
    }

    // 0x1003c2100, 16 bytes, inline, placed by class name and debug map
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // LocationContainer::GetDynamicMultiLocations() const
    /* ui::Component::GetSwipeConfig() */

    undefined1* ui::Component::GetSwipeConfig() {
        return &field_288;
    }

    // 0x10040c270, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // StaticLocationLODContainer::StaticLocationLODContainer(): jumps straight to the base-object constructor

    // 0x10040c2a0, 64 bytes, inline, placed by class header (inline)
    // StaticLocationLODContainer::operator=(StaticLocationLODContainer const&)
    /* StaticLocationLODContainer::TEMPNAMEPLACEHOLDERVALUE(StaticLocationLODContainer
   const&) */

    StaticLocationLODContainer* StaticLocationLODContainer::operator=(StaticLocationLODContainer* param_1) {
        eastl::vector<LocationContainerLocation, eastl::allocator>::operator=(
            (vector<LocationContainerLocation, eastl::allocator>*)this, (vector*)param_1);
        shared_ptr<BuildCombinedLocationMain>::operator=((shared_ptr<BuildCombinedLocationMain>*)field_32,
                                                         (shared_ptr*)param_1->field_32);
        eastl::vector<shared_ptr<CombinedLocation>, eastl::allocator>::operator=(
            (vector<shared_ptr<CombinedLocation>, eastl::allocator>*)&field_48, (vector*)&param_1->field_48);
        field_80 = param_1->field_80;
        return this;
    }

    // 0x10040c2e0, 16 bytes, complete-object destructor, inline, placed by class header (inline)
    // StaticLocationLODContainer::~StaticLocationLODContainer(): jumps straight to the base-object destructor

    // 0x10040c9e0, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // LocationContainerLocation::LocationContainerLocation(shared_ptr<MapSquareLocation> const&, signed char): jumps straight to the base-object constructor

    // 0x10040ca40, 16 bytes, complete-object destructor, inline, placed by class header (inline)
    // LocationContainerLocation::~LocationContainerLocation(): jumps straight to the base-object destructor

    // 0x100414b00, 16 bytes, inline, placed by class name
    // LocationContainer::HasStartedBuild() const
    undefined1 LocationContainer::HasStartedBuild() {
        return m_hasStartedBuild;
    }

    // 0x100414b10, 16 bytes, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // LocationContainer::SetHasStartedBuild(bool)
    /* Location::SetLocationLOD(LODLevel) */

    void Location::SetLocationLOD(undefined1 param_2) {
        m_locationLOD = param_2;
    }

    // 0x10041b580, 16 bytes, complete-object destructor, inline, placed by class name
    // LocationContainer::~LocationContainer(): jumps straight to the base-object destructor

    // 0x10041b590, 32 bytes, deleting destructor, inline, placed by class name
    // LocationContainer::~LocationContainer()
    void LocationContainer::~LocationContainer() {
        ~LocationContainer(this);
        operator_delete(this);
    }

    // 0x10041b7f0, 96 bytes, base-object constructor, inline, placed by class header (inline)
    // StaticLocationLODContainer::StaticLocationLODContainer()
    void StaticLocationLODContainer::StaticLocationLODContainer() {
        _func_decltype_nullptr* in_RSI;

        new (this) eastl::vector<LocationContainerLocation, eastl::allocator>();
        new (field_32, in_RSI) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        new (&field_48) eastl::vector<shared_ptr<CombinedLocation>, eastl::allocator>();
        field_80 = 0;
    }

    // 0x10041be20, 80 bytes, inline, placed by class header (inline)
    // LocationContainerLocation::operator=(LocationContainerLocation const&)
    /* LocationContainerLocation::TEMPNAMEPLACEHOLDERVALUE(LocationContainerLocation
   const&) */

    LocationContainerLocation* LocationContainerLocation::operator=(LocationContainerLocation* param_1) {
        undefined1 uVar1;

        shared_ptr<MapSquareLocation>::operator=((shared_ptr<MapSquareLocation>*)this, (shared_ptr*)param_1);
        BuildRequest<graphics::Model, BuildModelMain>::operator=(
            (BuildRequest<graphics::Model, BuildModelMain>*)field_16, (BuildRequest*)param_1->field_16);
        field_48 = param_1->field_48;
        graphics::HillData::operator=((HillData*)&field_56, (HillData*)&param_1->field_56);
        uVar1 = param_1->field_105;
        field_104 = param_1->field_104;
        field_105 = uVar1;
        return this;
    }

    // 0x10041dc80, 128 bytes, base-object destructor, inline, placed by class name
    // LocationContainer::~LocationContainer()
    void LocationContainer::~LocationContainer() {
        field_0 = &PTR__LocationContainer_100eff2d0;
        field_8 = &PTR__LocationContainer_100eff410;
        ((field_352 + 32))->~array();
        field_352->~vector();
        (&field_320)->~vector();
        (&field_288)->~vector();
        (&field_272)->~shared_ptr();
        (&field_240)->~vector();
        ~Entity();
    }

    // 0x10041fe50, 112 bytes, inline, placed by class name
    // LocationContainer::DeleteUncombinedLocation(eastl::vector<shared_ptr<Location>, eastl::allocator>&, ChangeLocationRequest const&, Location const*, bool)::$_0::operator()(shared_ptr<Location> const&) const
    /* LocationContainer::DeleteUncombinedLocation(eastl::vector<shared_ptr<Location>,
   eastl::allocator>&, ChangeLocationRequest const&, Location const*,
   bool)::$_0::TEMPNAMEPLACEHOLDERVALUE(shared_ptr<Location> const&) const */

    undefined4 LocationContainer::DeleteUncombinedLocation(eastl::vector<shared_ptr<Location>, eastl::allocator>&,
                                                           ChangeLocationRequest_const&, Location_const*,
                                                           bool)::$_0::operator()(shared_ptr* param_1) {
        undefined4 uVar2;
        long lVar3;
        Location* this_00;

        lVar3 = param_1->end();
        if (lVar3 == **(long**)this) {
            uVar2 = 0;
        } else {
            uVar2 = 0;
            if (LocationsMatch((LocationContainer*)param_1, *(ChangeLocationRequest**)(this + 16), param_1, false) !=
                '\0') {
                if (**(char**)(this + 24) == '\0') {
                    uVar2 = 1;
                } else {
                    this_00 = (Location*)shared_ptr<Location>::operator->((shared_ptr<Location>*)param_1);
                    uVar2 = this_00->IsStillBuilding();
                }
            }
        }
        return uVar2;
    }

    // 0x100444920, 16 bytes, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // LocationContainer::GetMapSquareX() const
    /* GraphicsDefaults::GetObjStackColourUnits() const */

    undefined4 GraphicsDefaults::GetObjStackColourUnits() {
        return m_objStackColourUnits;
    }

    // 0x100444930, 16 bytes, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // LocationContainer::GetMapSquareZ() const
    /* GraphicsDefaults::GetObjStackColourThousands() const */

    undefined4 GraphicsDefaults::GetObjStackColourThousands() {
        return m_objStackColourThousands;
    }

    // 0x100444940, 32 bytes, inline, placed by class name
    // LocationContainer::GetGridSizeX() const
    int LocationContainer::GetGridSizeX() {
        return field_228 - m_minGridX;
    }

    // 0x100444960, 32 bytes, inline, placed by class name
    // LocationContainer::GetGridSizeZ() const
    int LocationContainer::GetGridSizeZ() {
        return field_232 - m_minGridZ;
    }

    // 0x10064c760, 16 bytes, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // LocationContainer::GetConfigProvider() const
    /* graphics::Material::GetWrapU() const */

    undefined* graphics::Material::GetWrapU() {
        return m_pWrapU;
    }

} // namespace jag::game

namespace jag::testframework {
    // 0x1003c1fc0: the linker folded this into game::LocationContainer::GetDynamicChangedLocations() const, which has identical code
    TestResultsWriter::GetResultsFormatted() const;

} // namespace jag::testframework
