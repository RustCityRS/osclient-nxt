// libs/game/runetek5/scene/entities/NPCEntity.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag {
    class NPCEntity : public PathingEntity // base inferred from shared vtable slots
    {
    public:
        // virtual methods in vtable order
        virtual ~NPCEntity();
        virtual DoReplaceHeld(game::SeqType const&);
        virtual bool UsesTrianglePicking() const;
        virtual UsesFastPickingTests() const;
        virtual PickTest(graphics::PickingHelper&);
        virtual void MainLogic(graphics::RT7Core&, unsigned int, math::Matrix44T<float> const&);
        virtual void GatherDrawableElements(graphics::DrawableQueue&, graphics::RT7Core&, math::Matrix44T<float> const&,
                                            graphics::SceneViewData const&, graphics::EffectManager const&);
        virtual void GetOverlayHeight() const;
        virtual GetVarDomainType() const;
        virtual GetTrackableType() const;
        virtual uint GetCombinedID() const;
        virtual void ToString() const;
        virtual void NotifyInteracted(unsigned int);
        virtual void NotifyMouseover(unsigned int);
        virtual void NotifyPickable(unsigned int, bool, float);
        virtual CanRender() const;
        virtual void Build(int, bool, PathingEntityPriorityData);
        virtual bool UpdateAudio();
        virtual int CalculateWorldPriority(unsigned int, PathingEntityPriorityData) const;
        virtual GetHeadIcons(HardCodedSprites&);
        virtual void SetChatLine(eastl::basic_string<char, BucketAllocatorEASTL> const&, EntityChatLine::ChatColour,
                                 EntityChatLine::ChatEffect);
        virtual GetWalkSmoothing() const;
        virtual void ClearAppearance();
        virtual GetBodyModel(game::BuildRequest<graphics::Model, game::BuildModelMain>&);
        virtual GetHeadModel(game::BuildRequest<graphics::Model, game::BuildModelMain>&);
        virtual ulong IsAppearanceChangePending() const;
        virtual ulong GetBasID() const;
        virtual ulong RepeatLastOverrideAnimationFrameWhenFinished(int) const;
        virtual void UpdateAABB();
        virtual void UpdateHighlighting(unsigned int);
        virtual void SetAppearanceNPC(int);
        virtual ulong AllowAudio() const;
        virtual void SetupNewNPCType();
        DoUnreplaceHeld();
        NPCEntity(PathingEntityParams const&, game::PlayerVarDomain const*, graphics::GraphNode*,
                  shared_ptr<game::World> const&, game::EntityType, int);
        void SetHeadIcon(int, int, int);
        void SetHeadIconCustomisation(
            std::unique_ptr<game::NPCHeadIconCustomisation, std::default_delete<game::NPCHeadIconCustomisation>>&&);
        void ResetHeadIconSprites();
        void SetHeadIcons(eastl::fixed_vector<int, 8ul, true, eastl::allocator> const&,
                          eastl::fixed_vector<int, 8ul, true, eastl::allocator> const&);
        GetEntityIcon();
        void SetBodyModel(shared_ptr<graphics::Model> const&);
        void LoadNPCType();
        void SetBodyCustomisation(eastl::vector<int, eastl::allocator>&&, eastl::vector<float, eastl::allocator>&&,
                                  eastl::vector<math::Vector3T<float>, eastl::allocator>&&,
                                  eastl::vector<math::Vector3T<float>, eastl::allocator>&&,
                                  eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>&&,
                                  eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>&&,
                                  Array<unsigned short, eastl::allocator>&&, Array<unsigned short, eastl::allocator>&&,
                                  bool, Array<unsigned char, eastl::allocator>&&);
        GetBodyModelPriority(unsigned int);
        void SetHeadCustomisation(eastl::vector<int, eastl::allocator>&&, Array<unsigned short, eastl::allocator>&&,
                                  Array<unsigned short, eastl::allocator>&&);
        void UpdateGridSize();
        void DebugPrimitiveOutput(graphics::SceneViewData const&);
        FilterRenderPasses(graphics::SceneViewData const&);
        bool RefreshCachedHighlightType(unsigned int);
        void SetVisibleCombatLevelToParent();
        shared_ptr GetNPCType() const;
        shared_ptr GetParentNPCType() const;
        int GetNPCTypeID() const;
        GetHiddenOpsMask() const;
        GetVisibleCombatLevel() const;
        static /* 11 bytes */ m_ShowNPCEntity; // = { 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
        static /* 1 bytes */ m_debugPrimitiveText;
        static /* 1 bytes */ m_debugPrimitiveTextOnMouseover;
        static /* 1 bytes */ m_debugShowNPCRouting;
        static /* 1 bytes */ m_debugShowNPCFacing;
        static /* 4 bytes */ m_debugShowNPCPosition;
        static shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> /* 16 bytes */ NullNPC;

        // data members, from how the methods use this: 4436 bytes, the first 4176 are PathingEntity
        ConfigProvider* field_4176; // offset 4176
        int m_nPCTypeID;            // offset 4184
        int field_4188;             // offset 4188
        shared_ptr m_parentNPCType; // offset 4192
        shared_ptr m_nPCType;       // offset 4208
        ActiveComponent field_4224; // offset 4224
        char _unknown_4248[8];
        ActiveComponent field_4256; // offset 4256
        char _unknown_4280[8];
        undefined4 field_4288; // offset 4288
        char _unknown_4292[20];
        ServerConnectionWorkItem field_4312; // offset 4312
        int field_4328;                      // offset 4328
        uint field_4332;                     // offset 4332
        undefined1 field_4336;               // offset 4336
        char _unknown_4337[15];
        shared_ptr field_4352; // offset 4352
        char _unknown_4368[56];
        undefined4 m_visibleCombatLevel; // offset 4424
        undefined4 m_hiddenOpsMask;      // offset 4428
        char _unknown_4432[4];
    };

    // 0x100418250, 32 bytes, inline, placed by class name
    // NPCEntity::SetHeadIconCustomisation(std::unique_ptr<game::NPCHeadIconCustomisation, std::default_delete<game::NPCHeadIconCustomisation> >&&)
    /* NPCEntity::SetHeadIconCustomisation(std::unique_ptr<game::NPCHeadIconCustomisation,
   std::default_delete<game::NPCHeadIconCustomisation> >&&) */

    void NPCEntity::SetHeadIconCustomisation(unique_ptr* param_1) {
        std::unique_ptr<game::NPCHeadIconCustomisation, std::default_delete<game::NPCHeadIconCustomisation>>::operator=(
            (unique_ptr<game::NPCHeadIconCustomisation,
                        std::default_delete<game::NPCHeadIconCustomisation>>*)&field_4344,
            param_1);
    }

    // 0x10041af90, 16 bytes, inline, placed by class name
    // NPCEntity::GetNPCType() const
    undefined1* NPCEntity::GetNPCType() {
        return m_nPCType;
    }

    // 0x10041afa0, 16 bytes, inline, placed by class name
    // NPCEntity::GetParentNPCType() const
    undefined1* NPCEntity::GetParentNPCType() {
        return m_parentNPCType;
    }

    // 0x10041afb0, 16 bytes, inline, placed by class name
    // NPCEntity::GetNPCTypeID() const
    int NPCEntity::GetNPCTypeID() {
        return m_nPCTypeID;
    }

    // 0x10041b1c0, 16 bytes, inline, placed by class name
    // NPCEntity::GetHiddenOpsMask() const
    undefined4 NPCEntity::GetHiddenOpsMask() {
        return m_hiddenOpsMask;
    }

    // 0x10041b200, 16 bytes, inline, placed by class name
    // NPCEntity::GetVisibleCombatLevel() const
    undefined4 NPCEntity::GetVisibleCombatLevel() {
        return m_visibleCombatLevel;
    }

    // 0x10041b5d0, 16 bytes, complete-object destructor, inline, placed by class name
    // NPCEntity::~NPCEntity(): jumps straight to the base-object destructor

    // 0x10041b5e0, 32 bytes, deleting destructor, inline, placed by class name
    // NPCEntity::~NPCEntity()
    void NPCEntity::~NPCEntity() {
        ~NPCEntity(this);
        operator_delete(this);
    }

    // 0x10041b600, 16 bytes, inline, placed by class name
    // NPCEntity::GetVarDomainType() const
    undefined8 NPCEntity::GetVarDomainType() {
        return game::VarDomainType::NPC;
    }

    // 0x10041b630, 48 bytes, inline, placed by class name
    // NPCEntity::GetCombinedID() const
    uint NPCEntity::GetCombinedID() {
        undefined4 uVar1;
        EntityCombinedID local_10[2];

        uVar1 = GetSlotID();
        game::EntityCombinedID::EntityCombinedID(local_10, 1, uVar1);
        return local_10[0].m_entityID;
    }

    // 0x10041b660, 48 bytes, inline, placed by class name
    // NPCEntity::NotifyInteracted(unsigned int)
    void NPCEntity::NotifyInteracted(uint param_1) {
        RefreshCachedHighlightType(this, param_1);
        game::EntityHighlightState::NotifyInteracted((int)this + 4312);
    }

    // 0x10041b690, 48 bytes, inline, placed by class name
    // NPCEntity::NotifyMouseover(unsigned int)
    void NPCEntity::NotifyMouseover(uint param_1) {
        RefreshCachedHighlightType(this, param_1);
        new (field_4312, param_1) oldscape::ServerConnectionWorkItem();
    }

    // 0x10041b6d0, 48 bytes, inline, placed by class name
    // NPCEntity::IsAppearanceChangePending() const
    ulong NPCEntity::IsAppearanceChangePending() {
        bool bVar1;
        undefined7 extraout_var;

        if (m_nPCTypeID == -1) {
            return 0;
        }
        bVar1 = m_parentNPCType->operator_cast_to_bool();
        return CONCAT71(extraout_var, bVar1) ^ 1;
    }

    // 0x10041dd00, 144 bytes, base-object destructor, inline, placed by class name
    // NPCEntity::~NPCEntity()
    void NPCEntity::~NPCEntity() {
        field_0 = &PTR__NPCEntity_100eff5e0;
        field_8 = &PTR__NPCEntity_100eff828;
        field_4352->~shared_ptr();
        (&field_4344)->~unique_ptr();
        (&field_4304)->~unique_ptr();
        (&field_4296)->~unique_ptr();
        field_4256->~ActiveComponent();
        field_4224->~ActiveComponent();
        m_nPCType->~shared_ptr();
        m_parentNPCType->~shared_ptr();
        ~PathingEntity();
    }

} // namespace jag
