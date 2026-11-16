// libs/game/runetek5/scene/Entity.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::game {
    class Entity {
    public:
        // virtual methods in vtable order
        virtual ~Entity();
        virtual uint8_t OccludesView() const;
        virtual bool UsesFastPickingTests() const;
        virtual uint64_t PickTest(graphics::PickingHelper& arg1);
        virtual void MarkAsNoLongerAtTargetLOD();
        virtual void NotifyPickable(unsigned int arg1, bool arg2, float arg3);
        virtual uint64_t GetLoadImportance() const;
        virtual void SetTranslation(const math::Vector3T<float>& vector3);
        virtual void GetPosition() const;
        virtual void SetTranslationY(float arg1);
        virtual uint64_t GetSmoothPosition() const;
        virtual void GetSoundPosition() const;
        virtual void MainLogic(graphics::RT7Core& rt7Core, unsigned int arg2, const math::Matrix44T<float>& matrix44);
        virtual int GetOverlayHeight() const;
        virtual uint64_t GetTrackableType() const;
        virtual uint32_t GetCombinedID() const;
        virtual void ToString() const;
        virtual int GetAnimationAudioBussType() const;
        virtual char GetAnimationAudioSoundType() const;
        void NotifyMouseover(unsigned int arg1);
        void NotifyInteracted(unsigned int arg1);
        void AddPickableEntity(World& arg1, const math::Matrix44T<float>& arg2);
        void GatherDrawableElements(graphics::DrawableQueue& arg1, graphics::RT7Core& arg2,
                                    const math::Matrix44T<float>& arg3, const graphics::SceneViewData& arg4,
                                    const graphics::EffectManager& arg5);
        void Destruct();
        void RenderDebug(graphics::RenderPassType arg1) const;
        uint64_t GetTrackableID() const;
        uint64_t GetVarDomainType() const;
        uint64_t GetWorldPriority() const;
        bool UsesTrianglePicking() const;
        bool CanRender() const;
        int GetMaximumRemoveRoofLevel() const;
        GraphNode* GetNode() const;
        void GetTranslation();
        void GetTranslation() const;
        shared_ptr GetWorld() const;
        uint32_t GetPickingPrepassType() const;
        void SetMaximumRemoveRoofLevel(int arg1);
        void SetWorld(const shared_ptr<World>& world);
        void SetLevel(int arg1);
        int GetLevel() const;
        void GetAABB() const;
        void GetAABB();
        void GetWorldPosition() const;
        void SetAABB(const math::AABB& aabb);
        void SetCurrentLOD(LODLevel lodLevel);
        char GetTargetLOD() const;
        void SetOccludesView(bool arg1);
        void RemoveAABB();
        void SetNDCProjectionTestEnabled(bool arg1);
        int GetEntityType() const;
        void ResetWorld();
        void SetTargetLOD(LODLevel lodLevel);
        uint8_t* GetBoundingSphere() const;
        uint64_t* GetBoundingCapsule() const;
        bool IsAtTargetLOD() const;
        uint8_t GetCurrentLOD() const;
        void GetWorldAABB() const;
        Entity(graphics::GraphNode* graphNode, const shared_ptr<World>& world, EntityType entityType, int arg4);
        void GetHeightMapLevel() const;
        int GetHeightMapLevel(int arg1, int arg2) const;
        uint64_t GetFloorHeight(const math::Vector3T<float>& vector3, HeightOffsetType heightOffsetType) const;
        float GetRelativeFloorHeight(int arg1, int arg2, HeightOffsetType heightOffsetType) const;
        void GetAbsoluteFloorHeight(int arg1, int arg2, HeightOffsetType heightOffsetType) const;
        float GetCeilingHeight(const math::Vector3T<float>& vector3) const;
        unsigned long GetRelativeCeilingHeight(int arg1, int arg2) const;
        void GetAbsoluteCeilingHeight(int arg1, int arg2) const;
        bool HasAABB() const;
        unsigned int GetHeightMapLevelAtCoord(const CoordFine& coordFine, const LinkMap* linkMap);
        int GetFloorHeightAtCoord(const CoordFine& coordFine, const HeightMap& heightMap, const LinkMap* linkMap,
                                  bool arg4, HeightOffsetType heightOffsetType);
        uint64_t PickTestDebugCursor() const;
        static shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>
            NullEntity; // = shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>()
        static eastl::fixed_string<char, 256> __m_toString; // = fixed_string<char, 256>()

    private:
        uint8_t** field_8;
        uint8_t _unknown_16[48];
        uint8_t field_64;
        uint8_t m_currentLOD;
        char m_targetLOD;
        bool m_occludesView;
        int m_level;
        int m_maximumRemoveRoofLevel;
        uint8_t _unknown_76[40];
        uint32_t m_pickingPrepassType;
        uint8_t _unknown_120[56];
        shared_ptr m_world;
    };

    // 0x1001cd300
    GraphNode* Entity::GetNode() const {
        return (GraphNode*)field_56.get();
    }

    // 0x1001cdb80
    void Entity::GetPosition() const {
        ((GraphNode*)field_56.operator->())->GetTranslation();
    }

    // 0x1003eda90
    void Entity::SetMaximumRemoveRoofLevel(int arg1) {
        m_maximumRemoveRoofLevel = arg1;
    }

    // 0x1003f2030
    void Entity::SetWorld(const shared_ptr<World>& world) {
        *m_world = world;
    }

    // 0x1003f6490
    void Entity::SetLevel(int arg1) {
        *(int*)(this + 68) = arg1;
    }

    // 0x1003f7700
    void Entity::GetAABB() const {
        ((OpenGLView*)field_56.operator->())->GetCursorMutex();
    }

    // 0x10042a4e0
    void Entity::GetWorldPosition() const {
        ((GraphNode*)field_56.operator->())->GetWorldTranslation();
    }

    // 0x10042af10
    void Entity::SetAABB(const math::AABB& aabb) {
        ((GraphNode*)field_56.operator->())->SetAABB(aabb);
    }

    // 0x10042d3e0
    void Entity::SetCurrentLOD(LODLevel lodLevel) {
        m_currentLOD = (uint8_t)lodLevel;
    }

    // 0x10042d3f0
    char Entity::GetTargetLOD() const {
        return m_targetLOD;
    }

    // 0x10042d440
    void Entity::SetOccludesView(bool arg1) {
        m_occludesView = arg1;
    }

    // 0x100430d60
    void Entity::RemoveAABB() {
        ((GraphNode*)field_56.operator->())->RemoveAABB();
    }

    // 0x100430d80
    void Entity::SetNDCProjectionTestEnabled(bool arg1) {
        ((GraphNode*)field_56.operator->())->SetNDCProjectionTestEnabled(arg1);
    }

    // 0x100431620
    uint8_t Entity::OccludesView() const {
        return m_occludesView;
    }

    // 0x100431630
    void Entity::SetTranslation(const math::Vector3T<float>& vector3) {
        ((GraphNode*)field_56.operator->())->SetTranslation(vector3);
    }

    // 0x100431660
    void Entity::SetTranslationY(float arg1) {
        ((GraphNode*)field_56.operator->())->SetTranslationY(arg1);
    }

    // 0x100431690
    uint64_t Entity::GetSmoothPosition() const {
        auto this_00 = field_56.operator->();
        auto puVar1 = this_00->GetTranslation();
        return *puVar1;
    }

    // 0x1004316b0
    void Entity::GetSoundPosition() const {
        GetWorldPosition();
    }

    // 0x1004316c0
    uint32_t Entity::GetCombinedID() const {
        return EntityCombinedID::NO_ENTITY;
    }

    // 0x1004316d0
    void Entity::ToString() const {
        bool cVar1 = GetEntityType();
        uint64_t uVar2 = GetEntityTypeString((int)cVar1);
        __m_toString.sprintf("{ %s }", uVar2);
        eastl::basic_string<char, BucketAllocatorEASTL>::begin();
    }

    // 0x100431b60
    void Entity::MainLogic(graphics::RT7Core& rt7Core, unsigned int arg2, const math::Matrix44T<float>& matrix44) {
        (*(void (*)(...))field_8[5])(&field_8);
    }

    // 0x1004325a0
    int Entity::GetEntityType() const {
        return (int)(char)field_64;
    }

    // 0x10043eda0
    void Entity::ResetWorld() {
        m_world->reset();
    }

    // 0x100443650
    void Entity::SetTargetLOD(LODLevel lodLevel) {
        m_targetLOD = (char)lodLevel;
    }

    // 0x100443d30
    uint8_t* Entity::GetBoundingSphere() const {
        return &field_100;
    }

    // 0x100443d40
    uint64_t* Entity::GetBoundingCapsule() const {
        return &m_fogOverrides;
    }

    // 0x1004450a0
    bool Entity::IsAtTargetLOD() const {
        return m_targetLOD == m_currentLOD;
    }

    // 0x100448110
    uint8_t Entity::GetCurrentLOD() const {
        return m_numTilesPerRow;
    }

    // 0x1004491b0
    void Entity::GetWorldAABB() const {
        ((GraphNode*)field_56.operator->())->GetWorldAABB();
    }

    // 0x10048f630
    bool Entity::HasAABB() const {
        return ((GraphNode*)field_56.operator->())->HasAABB() != 0;
    }

    // 0x100493de0
    void Entity::Entity(graphics::GraphNode*, shared_ptr<World> const&, EntityType,
                        int)::$_0::operator()(int arg1, int arg2, int arg3, int arg4, int arg5, int arg6) const {
        uint8_t uVar1;
        uint8_t uVar2;
        uint64_t extraout_var;
        Vector3T<float>* vector3;
        uint64_t extraout_var_00;

        Entity* this_00 = *(Entity**)this;
        auto this_01 = InstancePtr();
        if (this_01 != nullptr) {
            uVar1 = this_00->GetAnimationAudioBussType();
            vector3 = (Vector3T<float>*)GetWorldPosition(this_00);
            uVar2 = this_00->GetAnimationAudioSoundType();
            this_01->PlaySEQSound(this_00, arg1, arg2, arg3, arg4,
                                  (BussType)(((uint64_t)extraout_var << 8) | (uint8_t)uVar1), arg5, *vector3,
                                  (SoundType)(((uint64_t)extraout_var_00 << 8) | (uint8_t)uVar2), arg6);
        }
    }

} // namespace jag::game

namespace jag {
    class EntityVisibilityEvaluator {
    public:
        void Update(bool arg1, const PathingEntity& pathingEntity, float arg3, graphics::RT7Core& rt7Core,
                    const math::Rect<int>& rect);
        static int32_t VISIBILITY_SAMPLING_INTERVAL_MS[12]; // initialised in its definition
        static int32_t m_visibilityEnabled;                 // = 1
        static int32_t m_visibilityRatioPixels;             // = 1043542835
        static int32_t m_visibilityRatioQueries;            // = 1051931443
        static float m_visibilitySpeedDown;                 // = 5.0f
        static float m_visibilitySpeedUp;                   // = 2.0f

        uint8_t _unknown_0[1];
    };

    class EntityWaypoint {
    public:
        void GetCoord() const;
        MoveSpeed* GetMoveSpeed() const;
        unsigned int GetLevel() const;
        Vector2T<int>* GetTranslation() const;
        EntityWaypoint* operator=(EntityWaypoint&& entityWaypoint);
        EntityWaypoint* operator=(const EntityWaypoint& entityWaypoint);
        EntityWaypoint();
        bool IsValid() const;
        EntityWaypoint(const game::CoordFine& coordFine, const MoveSpeed* moveSpeed);

    private:
        unsigned int m_level;
        float field_4;
        float field_8;
        float field_12;
        MoveSpeed* m_pMoveSpeed;
    };

    // 0x1003e8730
    EntityWaypoint* EntityWaypoint::operator=(EntityWaypoint&& entityWaypoint) {
        *this = entityWaypoint;
        m_pMoveSpeed = entityWaypoint.m_pMoveSpeed;
        return this;
    }

    // 0x1003e9160
    bool EntityWaypoint::IsValid() const {
        float* pfVar2;
        long lVar3;
        long* plVar4;

        int iVar1 = GetX();
        if ((((-1 < iVar1) && (iVar1 = GetX(), iVar1 < 4)) &&
             (pfVar2 = (float*)y(), 0.0 < *pfVar2 || *pfVar2 == 0.0)) &&
            (lVar3 = y(), 0.0 < *(float*)(lVar3 + 8) || *(float*)(lVar3 + 8) == 0.0)) {
            plVar4 = (long*)GetScreen();
            return *plVar4 != 0;
        }
        return false;
    }

} // namespace jag
