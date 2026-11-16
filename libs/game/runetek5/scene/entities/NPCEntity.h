// libs/game/runetek5/scene/entities/NPCEntity.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag {
    class NPCEntity : public PathingEntity // base inferred from shared vtable slots
    {
    public:
        // virtual methods in vtable order
        virtual ~NPCEntity();
        virtual void DoReplaceHeld(const game::SeqType& arg1);
        virtual bool UsesTrianglePicking() const;
        virtual bool UsesFastPickingTests() const;
        virtual uint64_t PickTest(graphics::PickingHelper& pickingHelper);
        virtual void MainLogic(graphics::RT7Core& rt7Core, unsigned int arg2, const math::Matrix44T<float>& matrix44);
        virtual void GatherDrawableElements(graphics::DrawableQueue& drawableQueue, graphics::RT7Core& rt7Core,
                                            const math::Matrix44T<float>& matrix44,
                                            const graphics::SceneViewData& sceneViewData,
                                            const graphics::EffectManager& effectManager);
        virtual void GetOverlayHeight() const;
        virtual uint64_t GetVarDomainType() const;
        virtual uint64_t GetTrackableType() const;
        virtual EntityCombinedID GetCombinedID() const;
        virtual void ToString() const;
        virtual void NotifyInteracted(unsigned int arg1);
        virtual void NotifyMouseover(unsigned int arg1);
        virtual void NotifyPickable(unsigned int arg1, bool arg2, float arg3);
        virtual bool CanRender() const;
        virtual void Build(int arg1, bool arg2, PathingEntityPriorityData pathingEntityPriorityData);
        virtual bool UpdateAudio();
        virtual int CalculateWorldPriority(unsigned int arg1,
                                           PathingEntityPriorityData pathingEntityPriorityData) const;
        virtual uint8_t* GetHeadIcons(HardCodedSprites& hardCodedSprites);
        virtual void SetChatLine(const eastl::string& str, EntityChatLine::ChatColour chatColour,
                                 EntityChatLine::ChatEffect chatEffect);
        virtual uint64_t GetWalkSmoothing() const;
        virtual void ClearAppearance();
        virtual uint8_t* GetBodyModel(game::BuildRequest<graphics::Model, game::BuildModelMain>& buildRequest);
        virtual uint8_t* GetHeadModel(game::BuildRequest<graphics::Model, game::BuildModelMain>& buildRequest);
        virtual unsigned long IsAppearanceChangePending() const;
        virtual unsigned long GetBasID() const;
        virtual unsigned long RepeatLastOverrideAnimationFrameWhenFinished(int arg1) const;
        virtual void UpdateAABB();
        virtual void UpdateHighlighting(unsigned int arg1);
        virtual void SetAppearanceNPC(int arg1);
        virtual unsigned long AllowAudio() const;
        virtual void SetupNewNPCType();
        void DoUnreplaceHeld();
        NPCEntity(const PathingEntityParams& pathingEntityParams, const game::PlayerVarDomain* playerVarDomain,
                  graphics::GraphNode* graphNode, const shared_ptr<game::World>& world, game::EntityType entityType,
                  int arg6);
        void SetHeadIcon(int arg1, int arg2, int arg3);
        void SetHeadIconCustomisation(std::unique_ptr<game::NPCHeadIconCustomisation>&& npcHeadIconCustomisation);
        void ResetHeadIconSprites();
        void SetHeadIcons(const eastl::fixed_vector<int, 8ul>& arg1, const eastl::fixed_vector<int, 8ul>& arg2);
        uint8_t* GetEntityIcon();
        void SetBodyModel(const shared_ptr<graphics::Model>& model);
        void LoadNPCType();
        void SetBodyCustomisation(eastl::vector<int>&& arg1, eastl::vector<float>&& arg2,
                                  eastl::vector<math::Vector3T<float>>&& vector3s1,
                                  eastl::vector<math::Vector3T<float>>&& vector3s2,
                                  eastl::vector<eastl::vector<int>>&& arg5, eastl::vector<eastl::vector<int>>&& arg6,
                                  Array<unsigned short>&& arg7, Array<unsigned short>&& arg8, bool arg9,
                                  Array<unsigned char>&& arg10);
        uint64_t GetBodyModelPriority(unsigned int arg1);
        void SetHeadCustomisation(eastl::vector<int>&& arg1, Array<unsigned short>&& arg2,
                                  Array<unsigned short>&& arg3);
        void UpdateGridSize();
        void DebugPrimitiveOutput(const graphics::SceneViewData& sceneViewData);
        uint64_t FilterRenderPasses(const graphics::SceneViewData& sceneViewData);
        bool RefreshCachedHighlightType(unsigned int arg1);
        void SetVisibleCombatLevelToParent();
        shared_ptr GetNPCType() const;
        shared_ptr GetParentNPCType() const;
        int GetNPCTypeID() const;
        uint32_t GetHiddenOpsMask() const;
        uint32_t GetVisibleCombatLevel() const;
        static uint8_t m_ShowNPCEntity[11]; // = { 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
        static bool m_debugPrimitiveText;
        static bool m_debugPrimitiveTextOnMouseover;
        static bool m_debugShowNPCRouting;
        static bool m_debugShowNPCFacing;
        static int32_t m_debugShowNPCPosition;
        static shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>
            NullNPC; // = shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>()

    private:
        PlayerVarDomain* field_4176;
        int m_nPCTypeID;
        int field_4188;
        shared_ptr m_parentNPCType;
        shared_ptr m_nPCType;
        ActiveComponent field_4224;
        uint8_t _unknown_4248[8];
        ActiveComponent field_4256;
        uint8_t _unknown_4280[8];
        uint32_t field_4288;
        uint8_t _unknown_4292[20];
        ServerConnectionWorkItem field_4312;
        EntityHighlightType field_4328;
        unsigned int field_4332;
        uint8_t field_4336;
        uint8_t _unknown_4337[15];
        shared_ptr field_4352;
        uint8_t _unknown_4368[56];
        uint32_t m_visibleCombatLevel;
        uint32_t m_hiddenOpsMask;
        uint8_t _unknown_4432[88];
    };

    // 0x100418250
    void
    NPCEntity::SetHeadIconCustomisation(std::unique_ptr<game::NPCHeadIconCustomisation>&& npcHeadIconCustomisation) {
        field_4344 = npcHeadIconCustomisation;
    }

    // 0x10041af90
    shared_ptr NPCEntity::GetNPCType() const {
        return m_nPCType;
    }

    // 0x10041afa0
    shared_ptr NPCEntity::GetParentNPCType() const {
        return m_parentNPCType;
    }

    // 0x10041afb0
    int NPCEntity::GetNPCTypeID() const {
        return m_nPCTypeID;
    }

    // 0x10041b1c0
    uint32_t NPCEntity::GetHiddenOpsMask() const {
        return m_hiddenOpsMask;
    }

    // 0x10041b200
    uint32_t NPCEntity::GetVisibleCombatLevel() const {
        return m_visibleCombatLevel;
    }

    // 0x10041b600
    uint64_t NPCEntity::GetVarDomainType() const {
        return game::VarDomainType::NPC;
    }

    // 0x10041b630
    EntityCombinedID NPCEntity::GetCombinedID() const {
        int arg2 = GetSlotID();
        return local_10(1, arg2);
        return local_10[0];
    }

    // 0x10041b660
    void NPCEntity::NotifyInteracted(unsigned int arg1) {
        RefreshCachedHighlightType(arg1);
        field_4312->NotifyInteracted(arg1);
    }

    // 0x10041b690
    void NPCEntity::NotifyMouseover(unsigned int arg1) {
        RefreshCachedHighlightType(arg1);
        new (field_4312) oldscape::ServerConnectionWorkItem(arg1);
    }

    // 0x10041b6d0
    unsigned long NPCEntity::IsAppearanceChangePending() const {
        if (m_nPCTypeID == -1) {
            return 0;
        }
        return m_parentNPCType->operator_cast_to_bool() ^ 1;
    }

    // 0x10041dd00
    NPCEntity::~NPCEntity() {
        field_8 = &PTR__NPCEntity_100eff828;
        field_4352->~shared_ptr();
        field_4344.~unique_ptr();
        field_4304.~unique_ptr();
        field_4296.~unique_ptr();
        field_4256->~ActiveComponent();
        field_4224->~ActiveComponent();
        m_nPCType->~shared_ptr();
        m_parentNPCType->~shared_ptr();
    }

} // namespace jag
