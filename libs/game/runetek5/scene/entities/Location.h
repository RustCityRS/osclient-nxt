// libs/game/runetek5/scene/entities/Location.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::game {
    class Location : public CombinedLocation // base inferred from shared vtable slots
    {
    public:
        class VFXData;
        // virtual methods in vtable order
        virtual ~Location();
        virtual bool IsAnimatable() const;
        virtual bool UsesTrianglePicking() const;
        virtual bool UsesFastPickingTests() const;
        virtual unsigned long PickTest(graphics::PickingHelper& pickingHelper);
        virtual void MainLogic(graphics::RT7Core& rt7Core, unsigned int arg2, const math::Matrix44T<float>& matrix44);
        virtual void GatherDrawableElements(graphics::DrawableQueue& drawableQueue, graphics::RT7Core& rt7Core,
                                            const math::Matrix44T<float>& matrix44,
                                            const graphics::SceneViewData& sceneViewData,
                                            const graphics::EffectManager& effectManager);
        virtual void AddPickableEntity(World& world, const math::Matrix44T<float>& matrix44);
        virtual void Destruct();
        virtual void NotifyInteracted(unsigned int arg1);
        virtual void NotifyMouseover(unsigned int arg1);
        virtual void NotifyPickable(unsigned int arg1, bool arg2, float arg3);
        virtual bool CanRender() const;
        virtual int GetID() const;
        virtual void RequestOverrideAnimation(int arg1, int arg2, unsigned int arg3, unsigned int arg4);
        virtual shared_ptr GetLocationType() const;
        virtual shared_ptr GetParentLocationType() const;
        virtual uint8_t GetShape() const;
        virtual uint8_t GetRotation90() const;
        virtual math::RotTransScale GetTransform() const;
        virtual void GetLocationLength() const;
        virtual void GetLocationWidth() const;
        virtual int GetAttachedWallWidth() const;
        virtual unsigned long UpdateAudio();
        uint8_t* GetServerPosition() const;
        void GetParentTypeID();
        void SetMultiLocState(int arg1);
        void IncrementMultiLocIndex();
        void SetPlayerVarDomain(PlayerVarDomain* playerVarDomain, ConfigProvider* configProvider);
        uint8_t GetLocationLOD() const;
        void SetAttachedWallWidth(int arg1);
        bool IsHidden() const;
        unsigned long IsStillBuilding() const;
        void SetLocationLOD(LODLevel arg1);
        Location(graphics::GraphNode* graphNode, const shared_ptr<World>& world, int arg3, int arg4,
                 const LocData& locData, bool arg6, bool arg7, int arg8, int arg9, int arg10, int arg11,
                 const shared_ptr<graphics::Model>& model);
        Location(graphics::GraphNode* graphNode, const shared_ptr<World>& world, int arg3, int arg4,
                 const LocData& locData, bool arg6, bool arg7, int arg8, int arg9, int arg10, int arg11,
                 const shared_ptr<ChangeLocationRequest>& changeLocationRequest,
                 const shared_ptr<LocTypeCustomisation>& locTypeCustomisation);
        Location(graphics::GraphNode* graphNode, const shared_ptr<World>& world, int arg3, int arg4,
                 const LocData& locData, bool arg6, bool arg7, int arg8, int arg9, int arg10, int arg11, int arg12,
                 int arg13, bool arg14);
        void Hide();
        void ClearAnimationState();
        unsigned long UpdateHeightMap(HeightChangeType heightChangeType);
        void Unhide();
        void BeginPlayingDefaultAnimation();
        uint64_t GetDefaultAnimationToPlay() const;
        void BeginPlayingOverrideAnimation();
        unsigned long GetOverrideAnimationToPlay() const;
        void ActivateRoofRemove();
        void DeactivateRoofRemove();
        void ClearJobResources();
        void UpdateRandomSounds(unsigned int arg1);
        unsigned long NeedsAnimatedModel() const;
        bool GetDefaultModel(AnimatedModelPair& animatedModelPair, int arg2);
        unsigned long Build(graphics::RT7Core& rt7Core, Js5ResourceProvider& js5ResourceProvider,
                            ConfigProvider& configProvider, AssetBuilder& assetBuilder, unsigned int arg5,
                            PlayerVarDomain* playerVarDomain);
        unsigned long BuildModel(graphics::RT7Core& rt7Core, AssetBuilder& assetBuilder, int arg3, int arg4);
        unsigned long BuildAnimatedModel(graphics::RT7Core& rt7Core, ConfigProvider& configProvider,
                                         AssetBuilder& assetBuilder);
        void BuildVFX(graphics::RT7Core& rt7Core);
        void BlockFadeIn();
        void UpdateLocalRenderEnv(graphics::Model& model);
        void UpdateHighlighting(unsigned int arg1);
        uint64_t FilterRenderPasses(const graphics::SceneViewData& sceneViewData) const;
        bool IsLocationRoofRemoved(const graphics::SceneViewData& sceneViewData);
        void DebugPrimitiveOutput(const graphics::SceneViewData& sceneViewData) const;
        bool IsLocationRoofRemovedSelective(RemoveRoof& removeRoof, const World& world);
        bool IsLocationRoofRemovedNonSelective(const graphics::SceneViewData& sceneViewData, World& world);
        bool RepeatLastOverrideAnimationFrameWhenFinished(int arg1) const;
        uint32_t GetHighlightType() const;
        void SetIsWDDBothOffsetMember(bool arg1);
        void SetBuiltGridSize(int arg1, int arg2);
        static bool m_ShowLocations; // = 1
        static bool m_enableFadeIn;  // = 1
        static shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>
            NullLocation; // = shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>()
        static bool m_debugPrimitiveText;
        static bool m_debugPrimitiveTextOnMouseover;
        static int16_t m_debugPrimitiveAABBOnHighlight;

    private:
        uint8_t _unknown_649[23];
        bool field_672;
        uint8_t _unknown_673[103];
        shared_ptr field_776;
        char field_792;
        uint8_t _unknown_793[3];
        EntityHighlightState field_796;
        uint8_t _unknown_816[8];
        int field_824;
        int field_828;
        unsigned int field_832;
        unsigned int field_836;
        unsigned int field_840;
        uint8_t _unknown_844[12];
    };

    class Location::VFXData {
    public:
        ~VFXData();
        VFXData();
        VFXData(VFXData&& vfxData);

        uint8_t _unknown_0[24];
    };

    class LocationAudioProperties {
    public:
        ~LocationAudioProperties();
        int GenerateBackgroundSoundRandomRate() const;
        LocationAudioProperties();
        LocationAudioProperties(LocationAudioProperties&& locationAudioProperties);
        LocationAudioProperties* operator=(const LocationAudioProperties& locationAudioProperties);
        LocationAudioProperties(const LocationAudioProperties& locationAudioProperties);

    private:
        uint64_t field_0;
        uint16_t field_8;
        uint16_t field_10;
        int field_12;
        int field_16;
        uint8_t field_20;
        uint8_t _unknown_21[27];
        uint64_t field_48;
        uint8_t field_56;
        uint8_t _unknown_57[3];
        uint64_t field_60;
        uint32_t field_68;
        uint32_t field_72;
        uint8_t _unknown_76[4];
    };

    // 0x10040ce40
    void Location::GetParentTypeID() {
        ((GameToken*)(*m_parentLocationType).operator->())->GetStatus();
    }

    // 0x10040ce60
    void Location::SetMultiLocState(int arg1) {
        if (m_parentLocationType->operator_cast_to_bool() != '\0') {
            ((LocType*)(*m_parentLocationType).operator->())->SetMultiLocIndex(arg1);
        }
    }

    // 0x10040cf20
    void Location::IncrementMultiLocIndex() {
        if (m_parentLocationType->operator_cast_to_bool() != '\0') {
            ((LocType*)(*m_parentLocationType).operator->())->IncrementMultiLocIndex();
        }
    }

    // 0x10040e120
    void Location::SetPlayerVarDomain(PlayerVarDomain* playerVarDomain, ConfigProvider* configProvider) {
        m_pPlayerVarDomain = playerVarDomain;
        field_216 = configProvider;
    }

    // 0x10040e820
    void LocationContainerLocation::ClearBuiltData() {
        field_16->Clear();
        field_56.clear();
        field_80.clear();
        field_105 = 255;
    }

    // 0x10040eb40
    uint8_t Location::GetLocationLOD() const {
        return m_locationLOD;
    }

    // 0x10040f420
    void Location::SetAttachedWallWidth(int arg1) {
        m_linkObjType = arg1;
    }

    // 0x10040f720
    bool Location::IsHidden() const {
        return m_hidden;
    }

    // 0x100410d10
    unsigned long Location::IsStillBuilding() const {
        unsigned int uVar2;
        shared_ptr<graphics::Model>* this_00;
        uint64_t unaff_R14;

        bool cVar1 = field_680.IsTaskDone();
        unsigned long uVar3 = (((uint64_t)((int64_t)((unsigned long)unaff_R14 >> 8)) << 8) | (uint8_t)1);
        if (cVar1) {
            this_00 = (shared_ptr<graphics::Model>*)field_680.SSOBeginPtr();
            cVar1 = ((Model*)(*this_00).operator->())->IsLoaded();
            if (cVar1) {
                uVar2 = field_496->operator_cast_to_bool();
                uVar3 = (unsigned long)uVar2;
            }
        }
        return uVar3 & 4294967295;
    }

    // 0x10042ead0
    void Location::BlockFadeIn() {
        field_237 = '\x01';
    }

    // 0x100431720
    void Location::NotifyInteracted(unsigned int arg1) {
        field_796->NotifyInteracted(arg1);
    }

    // 0x100431740
    void Location::NotifyMouseover(unsigned int arg1) {
        new (field_796) oldscape::ServerConnectionWorkItem(arg1);
    }

    // 0x100431760
    shared_ptr Location::GetLocationType() const {
        return m_mapSquarePointLights;
    }

    // 0x100431770
    uint8_t Location::GetShape() const {
        return field_352->GetShape();
    }

    // 0x100431790
    uint8_t Location::GetRotation90() const {
        return field_352->GetRot();
    }

    // 0x1004317b0
    math::RotTransScale Location::GetTransform() const {
        RotTransScale* rotTransScale;

        rotTransScale = (RotTransScale*)field_352->y();
        return math::RotTransScale(*rotTransScale);
    }

    // 0x1004317e0
    void Location::GetLocationLength() const {
        LocType* this_00 = (LocType*)(*m_locationType).operator->();
        uint8_t bVar1 = field_352->GetRot();
        this_00->GetGridLength((unsigned int)bVar1);
    }

    // 0x100431820
    void Location::GetLocationWidth() const {
        LocType* this_00 = (LocType*)(*m_locationType).operator->();
        uint8_t bVar1 = field_352->GetRot();
        this_00->GetGridWidth((unsigned int)bVar1);
    }

    // 0x100431860
    int Location::GetAttachedWallWidth() const {
        return m_linkObjType;
    }

    // 0x100432420
    Location::VFXData::VFXData() : shared_ptr() {
        new (&field_16) shared_ptr();
    }

    // 0x10043a0f0
    Location::VFXData::VFXData(Location::VFXData&& vfxData) {
        shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(vfxData);
        field_16.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(vfxData.field_16);
    }

    // 0x10064c9e0
    void Location::SetIsWDDBothOffsetMember(bool arg1) {
        m_isWDDBothOffsetMember = arg1;
    }

    // 0x10064c9f0
    void Location::SetBuiltGridSize(int arg1, int arg2) {
        m_builtGridSize = arg1;
        field_452 = arg2;
    }

} // namespace jag::game

namespace jag::oldscape::rs2lib::worldmap {
    class LocationData {
    public:
        LocationData(int arg1, int arg2, int arg3);
        void Set(int waterNormalParamsEncoding, int waterNormalParamGroup, int arg3);
        LocationData(int waterNormalParamsEncoding, int waterNormalParamGroup, int arg3);

    private:
        WaterNormalParamsEncoding field_0;
        WaterNormalParamGroup field_4;
        int field_8;
        uint8_t _unknown_12[4];
    };

} // namespace jag::oldscape::rs2lib::worldmap

namespace jag {
    // 0x10040e610
    shared_ptr_if_not_array<game::BuildCombinedLocationMain>::type
    bucket_make_shared<game::BuildCombinedLocationMain, graphics::RT7Core&, int, game::LocationContainer*,
                       eastl::vector<game::LocationContainerLocation>&, int&, int&, bool>(
        graphics::RT7Core& rt7Core, int&& arg2, game::LocationContainer*&& arg3,
        eastl::vector<game::LocationContainerLocation>& locationContainerLocations, int& arg5, int& arg6, bool&& arg7) {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        bool* in_stack_00000010;
        BuildCombinedLocationMain* local_40[2];

        auto local_48 = BucketManager::Allocate(280, 0, 16);
        if (local_48 == nullptr) {
            new (rt7Core) shared_ptr();
        } else {
            local_40[0] =
                placement_new<game::BuildCombinedLocationMain, graphics::RT7Core&, int, game::LocationContainer*,
                              eastl::vector<game::LocationContainerLocation>&, int&, int&, bool>(
                    local_48 + 48, (RT7Core*)arg2, (int*)arg3, (LocationContainer**)locationContainerLocations,
                    (vector<game::LocationContainerLocation>*)arg5, arg6, (int*)arg7, in_stack_00000010);
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<BucketRefCounter<game::BuildCombinedLocationMain>,
                              managed_ptr_counter_and_data<BucketRefCounter<game::BuildCombinedLocationMain>,
                                                           game::BuildCombinedLocationMain>*&,
                              game::BuildCombinedLocationMain*&>(local_48, &local_48, local_40);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (rt7Core) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_40[0]);
        }
        return rt7Core;
    }

} // namespace jag
