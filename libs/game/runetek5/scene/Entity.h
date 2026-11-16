// libs/game/runetek5/scene/Entity.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::game {
    class Entity {
    public:
        // virtual methods in vtable order
        virtual ~Entity();
        virtual OccludesView() const;
        virtual UsesFastPickingTests() const;
        virtual PickTest(graphics::PickingHelper&);
        virtual void MarkAsNoLongerAtTargetLOD();
        virtual NotifyPickable(unsigned int, bool, float);
        virtual GetLoadImportance() const;
        virtual void SetTranslation(math::Vector3T<float> const&);
        virtual GetPosition() const;
        virtual void SetTranslationY(float);
        virtual GetSmoothPosition() const;
        virtual void GetSoundPosition() const;
        virtual void MainLogic(graphics::RT7Core&, unsigned int, math::Matrix44T<float> const&);
        virtual int GetOverlayHeight() const;
        virtual GetTrackableType() const;
        virtual GetCombinedID() const;
        virtual void ToString() const;
        virtual int GetAnimationAudioBussType() const;
        virtual char GetAnimationAudioSoundType() const;
        NotifyMouseover(unsigned int);
        NotifyInteracted(unsigned int);
        AddPickableEntity(World&, math::Matrix44T<float> const&);
        GatherDrawableElements(graphics::DrawableQueue&, graphics::RT7Core&, math::Matrix44T<float> const&,
                               graphics::SceneViewData const&, graphics::EffectManager const&);
        Destruct();
        RenderDebug(graphics::RenderPassType) const;
        GetTrackableID() const;
        GetVarDomainType() const;
        GetWorldPriority() const;
        UsesTrianglePicking() const;
        CanRender() const;
        GetMaximumRemoveRoofLevel() const;
        void GetNode() const;
        void GetTranslation();
        void GetTranslation() const;
        GetWorld() const;
        GetPickingPrepassType() const;
        void SetMaximumRemoveRoofLevel(int);
        void SetWorld(shared_ptr<World> const&);
        SetLevel(int);
        GetLevel() const;
        void GetAABB() const;
        void GetAABB();
        void GetWorldPosition() const;
        void SetAABB(math::AABB const&);
        void SetCurrentLOD(LODLevel);
        GetTargetLOD() const;
        void SetOccludesView(bool);
        void RemoveAABB();
        void SetNDCProjectionTestEnabled(bool);
        int GetEntityType() const;
        void ResetWorld();
        void SetTargetLOD(LODLevel);
        GetBoundingSphere() const;
        GetBoundingCapsule() const;
        bool IsAtTargetLOD() const;
        GetCurrentLOD() const;
        void GetWorldAABB() const;
        Entity(graphics::GraphNode*, shared_ptr<World> const&, EntityType, int);
        void GetHeightMapLevel() const;
        int GetHeightMapLevel(int, int) const;
        GetFloorHeight(math::Vector3T<float> const&, HeightOffsetType) const;
        float GetRelativeFloorHeight(int, int, HeightOffsetType) const;
        void GetAbsoluteFloorHeight(int, int, HeightOffsetType) const;
        float GetCeilingHeight(math::Vector3T<float> const&) const;
        ulong GetRelativeCeilingHeight(int, int) const;
        void GetAbsoluteCeilingHeight(int, int) const;
        bool HasAABB() const;
        uint GetHeightMapLevelAtCoord(CoordFine const&, LinkMap const*);
        GetFloorHeightAtCoord(CoordFine const&, HeightMap const&, LinkMap const*, bool, HeightOffsetType);
        PickTestDebugCursor() const;
        static shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> /* 16 bytes */ NullEntity;
        static eastl::fixed_string<char, 256, true, eastl::allocator> /* 296 bytes */
            __m_toString; // = fixed_string<char,256,true,eastl::allocator>()

        // data members, from how the methods use this: 192 bytes
        undefined** field_0; // offset 0, vtable pointer
        undefined** field_8; // offset 8
        char _unknown_16[48];
        byte field_64;                // offset 64
        undefined1 field_65;          // offset 65
        undefined1 m_targetLOD;       // offset 66
        bool m_occludesView;          // offset 67
        int field_68;                 // offset 68
        int m_maximumRemoveRoofLevel; // offset 72
        char _unknown_76[40];
        undefined4 m_pickingPrepassType; // offset 116
        char _unknown_120[56];
        shared_ptr m_world; // offset 176
    };

    // 0x1001cd300, 16 bytes, inline, placed by class name and debug map
    // Entity::GetNode() const
    void Entity::GetNode() {
        (&field_56)->get();
    }

    // 0x1001cdb80, 32 bytes, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // Entity::GetPosition() const
    /* Entity::GetTranslation() */

    void Entity::GetTranslation() {
        GraphNode* this_00;

        this_00 = (GraphNode*)std::unique_ptr<graphics::GraphNode, graphics::GraphNodeDelete>::operator->(
            (unique_ptr<graphics::GraphNode, graphics::GraphNodeDelete>*)&field_56);
        this_00->GetTranslation();
    }

    // 0x1003eda90, 16 bytes, inline, placed by class name
    // Entity::SetMaximumRemoveRoofLevel(int)
    void Entity::SetMaximumRemoveRoofLevel(int param_1) {
        m_maximumRemoveRoofLevel = param_1;
    }

    // 0x1003f2030, 32 bytes, inline, placed by class name
    // Entity::SetWorld(shared_ptr<World> const&)
    void Entity::SetWorld(shared_ptr* param_1) {
        shared_ptr<World>::operator=((shared_ptr<World>*)m_world, param_1);
    }

    // 0x1003f6490, 16 bytes, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // Entity::SetLevel(int)
    /* graphics::TwoNodeBaseBlendTreeNode<unsigned long
   long>::SetBlendMode(graphics::BlendTreeNodeBlendMode) */

    void graphics::TwoNodeBaseBlendTreeNode<unsigned long long>::SetBlendMode(undefined4 param_2) {
        *(undefined4*)(this + 68) = param_2;
    }

    // 0x1003f7700, 32 bytes, inline, placed by class name
    // Entity::GetAABB() const
    /* Entity::GetAABB() */

    void Entity::GetAABB() {
        OpenGLView* this_00;

        this_00 = (OpenGLView*)std::unique_ptr<graphics::GraphNode, graphics::GraphNodeDelete>::operator->(
            (unique_ptr<graphics::GraphNode, graphics::GraphNodeDelete>*)&field_56);
        this_00->GetCursorMutex();
    }

    // 0x10042a4e0, 32 bytes, inline, placed by class name
    // Entity::GetWorldPosition() const
    void Entity::GetWorldPosition() {
        GraphNode* this_00;

        this_00 = (GraphNode*)std::unique_ptr<graphics::GraphNode, graphics::GraphNodeDelete>::operator->(
            (unique_ptr<graphics::GraphNode, graphics::GraphNodeDelete>*)&field_56);
        this_00->GetWorldTranslation();
    }

    // 0x10042af10, 48 bytes, inline, placed by class name
    // Entity::SetAABB(math::AABB const&)
    void Entity::SetAABB(AABB* param_1) {
        GraphNode* this_00;

        this_00 = (GraphNode*)std::unique_ptr<graphics::GraphNode, graphics::GraphNodeDelete>::operator->(
            (unique_ptr<graphics::GraphNode, graphics::GraphNodeDelete>*)&field_56);
        this_00->SetAABB(param_1);
    }

    // 0x10042d3e0, 16 bytes, inline, placed by class name
    // Entity::SetCurrentLOD(LODLevel)
    void Entity::SetCurrentLOD(undefined1 param_2) {
        field_65 = param_2;
    }

    // 0x10042d3f0, 16 bytes, inline, placed by class name
    // Entity::GetTargetLOD() const
    undefined1 Entity::GetTargetLOD() {
        return m_targetLOD;
    }

    // 0x10042d440, 16 bytes, inline, placed by class name
    // Entity::SetOccludesView(bool)
    void Entity::SetOccludesView(bool param_1) {
        m_occludesView = param_1;
    }

    // 0x100430d60, 32 bytes, inline, placed by class name
    // Entity::RemoveAABB()
    void Entity::RemoveAABB() {
        GraphNode* this_00;

        this_00 = (GraphNode*)std::unique_ptr<graphics::GraphNode, graphics::GraphNodeDelete>::operator->(
            (unique_ptr<graphics::GraphNode, graphics::GraphNodeDelete>*)&field_56);
        this_00->RemoveAABB();
    }

    // 0x100430d80, 48 bytes, inline, placed by class name
    // Entity::SetNDCProjectionTestEnabled(bool)
    void Entity::SetNDCProjectionTestEnabled(bool param_1) {
        GraphNode* this_00;

        this_00 = (GraphNode*)std::unique_ptr<graphics::GraphNode, graphics::GraphNodeDelete>::operator->(
            (unique_ptr<graphics::GraphNode, graphics::GraphNodeDelete>*)&field_56);
        this_00->SetNDCProjectionTestEnabled(param_1);
    }

    // 0x100431620, 16 bytes, inline, placed by class name
    // Entity::OccludesView() const
    undefined1 Entity::OccludesView() {
        return m_occludesView;
    }

    // 0x100431630, 48 bytes, inline, placed by class name
    // Entity::SetTranslation(math::Vector3T<float> const&)
    void Entity::SetTranslation(Vector3T* param_1) {
        GraphNode* this_00;

        this_00 = (GraphNode*)std::unique_ptr<graphics::GraphNode, graphics::GraphNodeDelete>::operator->(
            (unique_ptr<graphics::GraphNode, graphics::GraphNodeDelete>*)&field_56);
        this_00->SetTranslation(param_1);
    }

    // 0x100431660, 48 bytes, inline, placed by class name
    // Entity::SetTranslationY(float)
    void Entity::SetTranslationY(float param_1) {
        GraphNode* this_00;

        this_00 = (GraphNode*)std::unique_ptr<graphics::GraphNode, graphics::GraphNodeDelete>::operator->(
            (unique_ptr<graphics::GraphNode, graphics::GraphNodeDelete>*)&field_56);
        this_00->SetTranslationY(param_1);
    }

    // 0x100431690, 32 bytes, inline, placed by class name
    // Entity::GetSmoothPosition() const
    undefined8 Entity::GetSmoothPosition() {
        GraphNode* this_00;
        undefined8* puVar1;

        this_00 = (GraphNode*)std::unique_ptr<graphics::GraphNode, graphics::GraphNodeDelete>::operator->(
            (unique_ptr<graphics::GraphNode, graphics::GraphNodeDelete>*)&field_56);
        puVar1 = (undefined8*)this_00->GetTranslation();
        return *puVar1;
    }

    // 0x1004316b0, 16 bytes, inline, placed by class name
    // Entity::GetSoundPosition() const
    void Entity::GetSoundPosition() {
        GetWorldPosition(this);
    }

    // 0x1004316c0, 16 bytes, inline, placed by class name
    // Entity::GetCombinedID() const
    undefined4 Entity::GetCombinedID() {
        return EntityCombinedID::NO_ENTITY;
    }

    // 0x1004316d0, 64 bytes, inline, placed by class name
    // Entity::ToString() const
    void Entity::ToString() {
        char cVar1;
        undefined8 uVar2;

        cVar1 = GetEntityType(this);
        uVar2 = GetEntityTypeString((int)cVar1);
        eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::sprintf(
            &__m_toString, "{ %s }", uVar2);
        eastl::basic_string<char, BucketAllocatorEASTL>::begin();
    }

    // 0x100431b60, 32 bytes, inline, placed by class name
    // Entity::MainLogic(graphics::RT7Core&, unsigned int, math::Matrix44T<float> const&)
    void Entity::MainLogic(RT7Core* param_1, uint param_2, Matrix44T* param_3) {
        (*(code*)field_8[5])(&field_8);
    }

    // 0x1004325a0, 16 bytes, inline, placed by class name
    // Entity::GetEntityType() const
    int Entity::GetEntityType() {
        return (int)(char)field_64;
    }

    // 0x10043eda0, 32 bytes, inline, placed by class name
    // Entity::ResetWorld()
    void Entity::ResetWorld() {
        shared_ptr<World>::reset();
    }

    // 0x100443650, 16 bytes, inline, placed by class name
    // Entity::SetTargetLOD(LODLevel)
    void Entity::SetTargetLOD(undefined1 param_2) {
        m_targetLOD = param_2;
    }

    // 0x100443d30, 16 bytes, inline, placed by class name
    // Entity::GetBoundingSphere() const
    undefined1* Entity::GetBoundingSphere() {
        return &field_100;
    }

    // 0x100443d40, 16 bytes, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // Entity::GetBoundingCapsule() const
    /* EnvironmentOverride::GetFogOverrides() const */

    undefined8* EnvironmentOverride::GetFogOverrides() {
        return &m_fogOverrides;
    }

    // 0x1004450a0, 16 bytes, inline, placed by class name
    // Entity::IsAtTargetLOD() const
    bool Entity::IsAtTargetLOD() {
        return m_targetLOD == field_65;
    }

    // 0x100448110, 16 bytes, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // Entity::GetCurrentLOD() const
    /* graphics::ModularParticleEmitterTemplate::GetNumTilesPerRow() const */

    uchar graphics::ModularParticleEmitterTemplate::GetNumTilesPerRow() {
        return m_numTilesPerRow;
    }

    // 0x1004491b0, 32 bytes, inline, placed by class name
    // Entity::GetWorldAABB() const
    void Entity::GetWorldAABB() {
        GraphNode* this_00;

        this_00 = (GraphNode*)std::unique_ptr<graphics::GraphNode, graphics::GraphNodeDelete>::operator->(
            (unique_ptr<graphics::GraphNode, graphics::GraphNodeDelete>*)&field_56);
        this_00->GetWorldAABB();
    }

    // 0x10048f630, 32 bytes, inline, placed by class name
    // Entity::HasAABB() const
    bool Entity::HasAABB() {
        GraphNode* this_00;

        this_00 = (GraphNode*)std::unique_ptr<graphics::GraphNode, graphics::GraphNodeDelete>::operator->(
            (unique_ptr<graphics::GraphNode, graphics::GraphNodeDelete>*)&field_56);
        return this_00->HasAABB() != 0;
    }

    // 0x100493de0, 160 bytes, inline, placed by class name
    // Entity::Entity(graphics::GraphNode*, shared_ptr<World> const&, EntityType, int)::$_0::operator()(int, int, int, int, int, int) const
    /* Entity::Entity(graphics::GraphNode*, shared_ptr<World> const&,
   EntityType, int)::$_0::TEMPNAMEPLACEHOLDERVALUE(int, int, int, int, int, int) const */

    void Entity::Entity(graphics::GraphNode*, shared_ptr<World> const&, EntityType,
                        int)::$_0::operator()(int param_1, int param_2, int param_3, int param_4, int param_5,
                                              int param_6) {
        Entity* this_00;
        SoundManager* pSVar1;
        undefined8 uVar2;
        undefined8 uVar3;
        undefined8 uVar4;

        this_00 = *(Entity**)this;
        pSVar1 = (SoundManager*)Singleton<SoundManager>::InstancePtr();
        if (pSVar1 != (SoundManager*)0) {
            uVar2 = (*(code*)this_00->field_0[36])(this_00);
            uVar3 = GetWorldPosition(this_00);
            uVar4 = (*(code*)this_00->field_0[37])(this_00);
            pSVar1->PlaySEQSound(this_00, param_1, param_2, param_3, param_4, uVar2, param_5, uVar3, uVar4, param_6);
        }
    }

} // namespace jag::game

namespace jag {
    class EntityVisibilityEvaluator {
    public:
        void Update(bool, PathingEntity const&, float, graphics::RT7Core&, math::Rect<int> const&);
        static /* 48 bytes */ VISIBILITY_SAMPLING_INTERVAL_MS; // initialised in its definition
        static /* 4 bytes */ m_visibilityEnabled;              // = 1
        static /* 4 bytes */ m_visibilityRatioPixels;          // = 1043542835
        static /* 4 bytes */ m_visibilityRatioQueries;         // = 1051931443
        static float /* 4 bytes */ m_visibilitySpeedDown;      // = 5.0f
        static float /* 4 bytes */ m_visibilitySpeedUp;        // = 2.0f

        // data members, from how the methods use this: 1 bytes
        char _unknown_0[1];
    };

    class EntityWaypoint {
    public:
        GetCoord() const;
        GetMoveSpeed() const;
        GetLevel() const;
        GetTranslation() const;
        EntityWaypoint* operator=(EntityWaypoint&&);
        EntityWaypoint* operator=(EntityWaypoint const&);
        EntityWaypoint();
        bool IsValid() const;
        EntityWaypoint(game::CoordFine const&, MoveSpeed const*);

        // data members, from how the methods use this: 24 bytes
        uint field_0;        // offset 0
        float field_4;       // offset 4
        float field_8;       // offset 8
        float field_12;      // offset 12
        MoveSpeed* field_16; // offset 16
    };

    // 0x1003e8730, 48 bytes, inline, placed by class header (inline)
    // EntityWaypoint::operator=(EntityWaypoint&&)
    /* EntityWaypoint::TEMPNAMEPLACEHOLDERVALUE(EntityWaypoint const&) */

    EntityWaypoint* EntityWaypoint::operator=(EntityWaypoint* param_1) {
        game::CoordFine::operator=((CoordFine*)this, (CoordFine*)param_1);
        field_16 = param_1->field_16;
        return this;
    }

    // 0x1003e8d90, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // EntityWaypoint::EntityWaypoint(): jumps straight to the base-object constructor

    // 0x1003e9160, 96 bytes, inline, placed by class header (inline)
    // EntityWaypoint::IsValid() const
    bool EntityWaypoint::IsValid() {
        int iVar1;
        float* pfVar2;
        long lVar3;
        long* plVar4;

        iVar1 = GetX();
        if ((((-1 < iVar1) && (iVar1 = GetX(), iVar1 < 4)) &&
             (pfVar2 = (float*)y(), 0.0 < *pfVar2 || *pfVar2 == 0.0)) &&
            (lVar3 = y(), 0.0 < *(float*)(lVar3 + 8) || *(float*)(lVar3 + 8) == 0.0)) {
            plVar4 = (long*)GetScreen();
            return *plVar4 != 0;
        }
        return false;
    }

} // namespace jag
