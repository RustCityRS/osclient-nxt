// libs/game/runetek5/scene/entities/Location.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::game {
    class Location : public CombinedLocation // base inferred from shared vtable slots
    {
    public:
        class VFXData;
        // virtual methods in vtable order
        virtual ~Location();
        virtual IsAnimatable() const;
        virtual bool UsesTrianglePicking() const;
        virtual UsesFastPickingTests() const;
        virtual ulong PickTest(graphics::PickingHelper&);
        virtual void MainLogic(graphics::RT7Core&, unsigned int, math::Matrix44T<float> const&);
        virtual void GatherDrawableElements(graphics::DrawableQueue&, graphics::RT7Core&, math::Matrix44T<float> const&,
                                            graphics::SceneViewData const&, graphics::EffectManager const&);
        virtual void AddPickableEntity(World&, math::Matrix44T<float> const&);
        virtual void Destruct();
        virtual void NotifyInteracted(unsigned int);
        virtual void NotifyMouseover(unsigned int);
        virtual void NotifyPickable(unsigned int, bool, float);
        virtual CanRender() const;
        virtual int GetID() const;
        virtual void RequestOverrideAnimation(int, int, unsigned int, unsigned int);
        virtual shared_ptr GetLocationType() const;
        virtual shared_ptr GetParentLocationType() const;
        virtual GetShape() const;
        virtual GetRotation90() const;
        virtual GetTransform() const;
        virtual void GetLocationLength() const;
        virtual void GetLocationWidth() const;
        virtual int GetAttachedWallWidth() const;
        virtual ulong UpdateAudio();
        GetServerPosition() const;
        void GetParentTypeID();
        void SetMultiLocState(int);
        void IncrementMultiLocIndex();
        void SetPlayerVarDomain(PlayerVarDomain*, ConfigProvider*);
        GetLocationLOD() const;
        SetAttachedWallWidth(int);
        IsHidden() const;
        ulong IsStillBuilding() const;
        void SetLocationLOD(LODLevel);
        Location(graphics::GraphNode*, shared_ptr<World> const&, int, int, LocData const&, bool, bool, int, int, int,
                 int, shared_ptr<graphics::Model> const&);
        Location(graphics::GraphNode*, shared_ptr<World> const&, int, int, LocData const&, bool, bool, int, int, int,
                 int, shared_ptr<ChangeLocationRequest> const&, shared_ptr<LocTypeCustomisation> const&);
        Location(graphics::GraphNode*, shared_ptr<World> const&, int, int, LocData const&, bool, bool, int, int, int,
                 int, int, int, bool);
        void Hide();
        void ClearAnimationState();
        ulong UpdateHeightMap(HeightChangeType);
        void Unhide();
        void BeginPlayingDefaultAnimation();
        GetDefaultAnimationToPlay() const;
        void BeginPlayingOverrideAnimation();
        ulong GetOverrideAnimationToPlay() const;
        void ActivateRoofRemove();
        void DeactivateRoofRemove();
        void ClearJobResources();
        void UpdateRandomSounds(unsigned int);
        ulong NeedsAnimatedModel() const;
        bool GetDefaultModel(AnimatedModelPair&, int);
        ulong Build(graphics::RT7Core&, Js5ResourceProvider&, ConfigProvider&, AssetBuilder&, unsigned int,
                    PlayerVarDomain*);
        ulong BuildModel(graphics::RT7Core&, AssetBuilder&, int, int);
        ulong BuildAnimatedModel(graphics::RT7Core&, ConfigProvider&, AssetBuilder&);
        void BuildVFX(graphics::RT7Core&);
        void BlockFadeIn();
        void UpdateLocalRenderEnv(graphics::Model&);
        void UpdateHighlighting(unsigned int);
        FilterRenderPasses(graphics::SceneViewData const&) const;
        IsLocationRoofRemoved(graphics::SceneViewData const&);
        void DebugPrimitiveOutput(graphics::SceneViewData const&) const;
        IsLocationRoofRemovedSelective(RemoveRoof&, World const&);
        IsLocationRoofRemovedNonSelective(graphics::SceneViewData const&, World&);
        bool RepeatLastOverrideAnimationFrameWhenFinished(int) const;
        GetHighlightType() const;
        void SetIsWDDBothOffsetMember(bool);
        void SetBuiltGridSize(int, int);
        static /* 1 bytes */ m_ShowLocations; // = 1
        static /* 1 bytes */ m_enableFadeIn;  // = 1
        static shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> /* 16 bytes */ NullLocation;
        static /* 1 bytes */ m_debugPrimitiveText;
        static /* 1 bytes */ m_debugPrimitiveTextOnMouseover;
        static /* 6 bytes */ m_debugPrimitiveAABBOnHighlight;

        // data members, from how the methods use this: 856 bytes, the first 649 are CombinedLocation
        char _unknown_649[23];
        bool field_672; // offset 672
        char _unknown_673[39];
        undefined1 field_712; // offset 712
        char _unknown_713[31];
        undefined1 field_744; // offset 744
        char _unknown_745[31];
        shared_ptr field_776; // offset 776
        char field_792;       // offset 792
        char _unknown_793[3];
        EntityHighlightState field_796; // offset 796
        char _unknown_816[8];
        int field_824;  // offset 824
        int field_828;  // offset 828
        uint field_832; // offset 832
        uint field_836; // offset 836
        uint field_840; // offset 840
        char _unknown_844[12];
    };

    class Location::VFXData {
    public:
        ~VFXData();
        VFXData();
        VFXData(VFXData&&);

        // data members, from how the methods use this: 24 bytes
        char _unknown_0[24];
    };

    class LocationAudioProperties {
    public:
        ~LocationAudioProperties();
        int GenerateBackgroundSoundRandomRate() const;
        LocationAudioProperties();
        LocationAudioProperties(LocationAudioProperties&&);
        LocationAudioProperties* operator=(LocationAudioProperties const&);
        LocationAudioProperties(LocationAudioProperties const&);

        // data members, from how the methods use this: 80 bytes
        undefined8 field_0;  // offset 0
        undefined2 field_8;  // offset 8
        undefined2 field_10; // offset 10
        int field_12;        // offset 12
        int field_16;        // offset 16
        undefined1 field_20; // offset 20
        char _unknown_21[27];
        undefined8 field_48; // offset 48
        undefined1 field_56; // offset 56
        char _unknown_57[3];
        undefined8 field_60; // offset 60
        undefined4 field_68; // offset 68
        undefined4 field_72; // offset 72
        char _unknown_76[4];
    };

    // 0x10040ce40, 32 bytes, inline, placed by class name and debug map
    // Location::GetParentTypeID()
    void Location::GetParentTypeID() {
        GameToken* this_00;

        this_00 = (GameToken*)shared_ptr<LocType>::operator->((shared_ptr<LocType>*)m_parentLocationType);
        this_00->GetStatus();
    }

    // 0x10040ce60, 64 bytes, inline, placed by class name and debug map
    // Location::SetMultiLocState(int)
    void Location::SetMultiLocState(int param_1) {
        LocType* this_00;

        if (m_parentLocationType->operator_cast_to_bool()) {
            this_00 = (LocType*)shared_ptr<LocType>::operator->((shared_ptr<LocType>*)m_parentLocationType);
            this_00->SetMultiLocIndex(param_1);
        }
    }

    // 0x10040cf20, 64 bytes, inline, placed by class name and debug map
    // Location::IncrementMultiLocIndex()
    void Location::IncrementMultiLocIndex() {
        LocType* this_00;

        if (m_parentLocationType->operator_cast_to_bool()) {
            this_00 = (LocType*)shared_ptr<LocType>::operator->((shared_ptr<LocType>*)m_parentLocationType);
            this_00->IncrementMultiLocIndex();
        }
    }

    // 0x10040e120, 32 bytes, inline, placed by class name and debug map
    // Location::SetPlayerVarDomain(PlayerVarDomain*, ConfigProvider*)
    void Location::SetPlayerVarDomain(PlayerVarDomain* param_1, ConfigProvider* param_2) {
        m_pPlayerVarDomain = param_1;
        field_216 = param_2;
    }

    // 0x10040e820, 48 bytes, inline, placed by debug map only (low confidence)
    // LocationContainerLocation::ClearBuiltData()
    void LocationContainerLocation::ClearBuiltData() {
        field_16->Clear();
        (&field_56)->clear();
        (&field_80)->clear();
        field_105 = 255;
    }

    // 0x10040eb40, 16 bytes, inline, placed by class name and debug map
    // Location::GetLocationLOD() const
    undefined1 Location::GetLocationLOD() {
        return m_locationLOD;
    }

    // 0x10040f420, 16 bytes, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // Location::SetAttachedWallWidth(int)
    /* ui::Text::SetLinkObjType(int) */

    void ui::Text::SetLinkObjType(int param_1) {
        m_linkObjType = param_1;
    }

    // 0x10040f720, 16 bytes, inline, placed by class name
    // Location::IsHidden() const
    undefined1 Location::IsHidden() {
        return m_hidden;
    }

    // 0x100410d10, 96 bytes, inline, placed by class name
    // Location::IsStillBuilding() const
    ulong Location::IsStillBuilding() {
        char cVar1;
        bool bVar2;
        vector* this_00;
        Model* this_01;
        undefined7 extraout_var;
        type* in_RSI;
        undefined8 unaff_R14;
        ulong uVar3;

        cVar1 = (&field_680)->IsTaskDone();
        uVar3 = CONCAT71((int7)((ulong)unaff_R14 >> 8), 1);
        if (cVar1 != '\0') {
            this_00 = (&field_680, in_RSI)->SSOBeginPtr();
            this_01 = (Model*)shared_ptr<graphics::Model>::operator->((shared_ptr<graphics::Model>*)this_00);
            cVar1 = this_01->IsLoaded();
            if (cVar1 != '\0') {
                bVar2 = field_496->operator_cast_to_bool();
                uVar3 = CONCAT71(extraout_var, bVar2) & 4294967295;
            }
        }
        return uVar3 & 4294967295;
    }

    // 0x10042ead0, 16 bytes, inline, placed by class name
    // Location::BlockFadeIn()
    void Location::BlockFadeIn() {
        field_237 = '\x01';
    }

    // 0x100430ed0, 16 bytes, complete-object constructor, inline, placed by class name
    // Location::VFXData::VFXData(): jumps straight to the base-object constructor

    // 0x100431720, 32 bytes, inline, placed by class name
    // Location::NotifyInteracted(unsigned int)
    void Location::NotifyInteracted(uint param_1) {
        EntityHighlightState::NotifyInteracted((int)this + 796);
    }

    // 0x100431740, 32 bytes, inline, placed by class name
    // Location::NotifyMouseover(unsigned int)
    void Location::NotifyMouseover(uint param_1) {
        new (field_796) oldscape::ServerConnectionWorkItem();
    }

    // 0x100431760, 16 bytes, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // Location::GetLocationType() const
    /* MapSquare::GetMapSquarePointLights() */

    undefined1* MapSquare::GetMapSquarePointLights() {
        return m_mapSquarePointLights;
    }

    // 0x100431770, 32 bytes, inline, placed by class name
    // Location::GetShape() const
    undefined1 Location::GetShape() {
        return field_352->GetShape();
    }

    // 0x100431790, 32 bytes, inline, placed by class name
    // Location::GetRotation90() const
    undefined1 Location::GetRotation90() {
        return field_352->GetRot();
    }

    // 0x1004317b0, 48 bytes, inline, placed by class name
    // Location::GetTransform() const
    Location* Location::GetTransform() {
        RotTransScale* pRVar1;
        long in_RSI;

        pRVar1 = (RotTransScale*)((in_RSI + 352))->y();
        new (this) math::RotTransScale(pRVar1);
        return this;
    }

    // 0x1004317e0, 64 bytes, inline, placed by class name
    // Location::GetLocationLength() const
    void Location::GetLocationLength() {
        LocType* pLVar1;
        undefined1 uVar2;

        pLVar1 = (LocType*)shared_ptr<LocType>::operator->((shared_ptr<LocType>*)m_locationType);
        uVar2 = field_352->GetRot();
        pLVar1->GetGridLength(uVar2);
    }

    // 0x100431820, 64 bytes, inline, placed by class name
    // Location::GetLocationWidth() const
    void Location::GetLocationWidth() {
        LocType* pLVar1;
        undefined1 uVar2;

        pLVar1 = (LocType*)shared_ptr<LocType>::operator->((shared_ptr<LocType>*)m_locationType);
        uVar2 = field_352->GetRot();
        pLVar1->GetGridWidth(uVar2);
    }

    // 0x100431860, 16 bytes, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // Location::GetAttachedWallWidth() const
    /* ui::Text::GetLinkObjType() const */

    int ui::Text::GetLinkObjType() {
        return m_linkObjType;
    }

    // 0x100432420, 48 bytes, base-object constructor, inline, placed by class name
    // Location::VFXData::VFXData()
    void Location::VFXData::VFXData() {
        _func_decltype_nullptr* in_RSI;

        new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(in_RSI);
        new (&field_16, in_RSI) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
    }

    // 0x10043a020, 16 bytes, complete-object constructor, inline, placed by class name
    // Location::VFXData::VFXData(Location::VFXData&&): jumps straight to the base-object constructor

    // 0x10043a0f0, 64 bytes, base-object constructor, inline, placed by class name
    // Location::VFXData::VFXData(Location::VFXData&&)
    void Location::VFXData::VFXData(VFXData* param_1) {
        shared_ptr<oldscape::RSevenDebugPresetProvider>::shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(
            (shared_ptr<oldscape::RSevenDebugPresetProvider>*)this, (shared_ptr*)param_1);
        shared_ptr<oldscape::RSevenDebugPresetProvider>::shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(
            (shared_ptr<oldscape::RSevenDebugPresetProvider>*)&field_16, (shared_ptr*)&param_1->field_16);
    }

    // 0x10064c9e0, 16 bytes, inline, placed by class name
    // Location::SetIsWDDBothOffsetMember(bool)
    void Location::SetIsWDDBothOffsetMember(bool param_1) {
        m_isWDDBothOffsetMember = param_1;
    }

    // 0x10064c9f0, 32 bytes, inline, placed by class name
    // Location::SetBuiltGridSize(int, int)
    void Location::SetBuiltGridSize(int param_1, int param_2) {
        m_builtGridSize = param_1;
        field_452 = param_2;
    }

} // namespace jag::game

namespace jag::oldscape::rs2lib::worldmap {
    class LocationData {
    public:
        LocationData(int, int, int);
        void Set(int, int, int);

        // data members, from how the methods use this: 16 bytes
        int field_0; // offset 0
        int field_4; // offset 4
        int field_8; // offset 8
        char _unknown_12[4];
    };

} // namespace jag::oldscape::rs2lib::worldmap

namespace jag {
    // 0x10040e610, 208 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<game::BuildCombinedLocationMain>::type bucket_make_shared<game::BuildCombinedLocationMain, graphics::RT7Core&, int, game::LocationContainer*, eastl::vector<game::LocationContainerLocation, eastl::allocator>&, int&, int&, bool>(graphics::RT7Core&, int&&, game::LocationContainer*&&, eastl::vector<game::LocationContainerLocation, eastl::allocator>&, int&, int&, bool&&)
    jag* jag::bucket_make_shared<game::BuildCombinedLocationMain, graphics::RT7Core&, int, game::LocationContainer*,
                                 eastl::vector<game::LocationContainerLocation, eastl::allocator>&, int&, int&, bool>(
        RT7Core* param_1, int* param_2, LocationContainer** param_3, vector* param_4, int* param_5, int* param_6,
        bool* param_7) {
        BucketRefCounter* pBVar1;
        managed_ptr_counter_and_data* local_48;
        BuildCombinedLocationMain* local_40[2];

        local_48 = (managed_ptr_counter_and_data*)BucketManager::Allocate(280, 0, 16);
        if (local_48 == (managed_ptr_counter_and_data*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(0);
        } else {
            local_40[0] =
                placement_new<game::BuildCombinedLocationMain, graphics::RT7Core&, int, game::LocationContainer*,
                              eastl::vector<game::LocationContainerLocation, eastl::allocator>&, int&, int&, bool>(
                    local_48 + 48, param_1, param_2, param_3, param_4, param_5, param_6, param_7);
            pBVar1 = placement_new<BucketRefCounter<game::BuildCombinedLocationMain>,
                                   managed_ptr_counter_and_data<BucketRefCounter<game::BuildCombinedLocationMain>,
                                                                game::BuildCombinedLocationMain>*&,
                                   game::BuildCombinedLocationMain*&>(local_48, &local_48, local_40);
            pBVar1->~AutoSingleton(local_40[0]);
            pBVar1->~AutoSingleton(local_40[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(pBVar1, local_40[0]);
        }
        return this;
    }

} // namespace jag
