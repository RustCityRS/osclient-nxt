// libs/game/runetek5/scene/entities/PathingEntity.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag {
    class PathingEntity {
    public:
        // virtual methods in vtable order
        virtual ~PathingEntity();
        virtual ShouldAnimate() const;
        virtual void TestIntersection(math::Vector3T<float> const&, math::Vector3T<float> const&, int) const;
        virtual OnModelChange();
        virtual float GetLoadProgress() const;
        virtual void SetTranslation(math::Vector3T<float> const&);
        virtual GetTranslation() const;
        virtual void SetTranslationY(float);
        virtual HideChatLine();
        virtual GetSmoothPosition() const;
        virtual void MainLogic(graphics::RT7Core&, unsigned int, math::Matrix44T<float> const&);
        virtual void GatherDrawableElements(graphics::DrawableQueue&, graphics::RT7Core&, math::Matrix44T<float> const&,
                                            graphics::SceneViewData const&, graphics::EffectManager const&);
        virtual void AddPickableEntity(game::World&, math::Matrix44T<float> const&);
        virtual void GetOverlayHeight() const;
        virtual void Destruct();
        virtual int GetWorldPriority() const;
        virtual CalculateWorldPriority(unsigned int, PathingEntityPriorityData) const;
        virtual void GetTrackableID() const;
        virtual CanRender() const;
        virtual ulong Build(int, bool, PathingEntityPriorityData);
        virtual void UpdateAudio();
        virtual void __pure_slot_43() = 0;
        virtual void __pure_slot_45() = 0;
        virtual void TeleportFine(game::CoordFine const&, bool);
        virtual void TeleportFine(int, game::CoordFine const&, bool);
        virtual void CanSetFacing() const;
        virtual ulong UpdatePosition(int);
        virtual void ClearAppearance();
        UpdateHighlighting(unsigned int);
        IsInPlayersClan() const;
        IsMiniMapHidden() const;
        GetWalkSmoothing() const;
        IsInPlayersGroup() const;
        IsFullySoftHidden() const;
        RepeatLastOverrideAnimationFrameWhenFinished(int) const;
        IsPlayer() const;
        LineIntersectionSupport() const;
        PathingEntityAnimatedModel GetAnimatedModel() const;
        PathingEntity(PathingEntityParams const&, graphics::GraphNode*, shared_ptr<game::World> const&,
                      game::EntityType, int);
        void AddRouteWaypointFine(game::CoordFine const&, MoveSpeed const*, bool);
        void SetPathingEntityChatLine(eastl::basic_string<char, BucketAllocatorEASTL> const&,
                                      EntityChatLine::ChatColour, EntityChatLine::ChatEffect, unsigned long long);
        GetChatLine();
        GetDisplayNameWithExtras(bool);
        void SetTitle(int, game::PlayerGender);
        void GetPositionFine(game::CoordFine&) const;
        void AbortAnimationsOnMove();
        void SetExactMove(int, int, int, int, int, int, int, int, float, unsigned int);
        int GetHeightForLevel(int, math::Vector3T<float>&);
        void SetBasID(int);
        void SetSpotAnimation(std::unique_ptr<SpotAnimation, MakeUniquePool<SpotAnimation, 64>::UniquePoolDeleter>&&,
                              int);
        void ResetSpotAnimation(int, int);
        void GetSpotAnimation(int);
        void UpdateSpotAnimations(unsigned int);
        ulong GetRequestedDefaultOrOverrideModel(game::AnimatedModelPair&, PathingEntityModels&);
        GetReplaceHeldModel(game::AnimatedModelPair&, PathingEntityModels&, int);
        void GetDefaultModel(game::AnimatedModelPair&, int);
        void GetOverrideModel(game::AnimatedModelPair&, int);
        void UpdateIrradianceForModel(graphics::Model&);
        void BuildAnimStateMachine();
        void DestroySpotAnimations();
        void RequestReadyAnimation();
        void SetGridSize(int);
        void GetPositionGrid(game::CoordGrid&, bool) const;
        void GetDestinationPositionGrid(game::CoordGrid&);
        void GetDestinationPositionFine(game::CoordFine&);
        GetCurrentMoveSpeed();
        void GetCameraFollowPosition(math::Vector3T<float>&);
        void UpdateGroundHeight();
        bool IsDoingAnExactMove() const;
        void UpdateEntity(int);
        void UpdatePostTransform();
        void SetFacingGradual();
        void AttachToNode(graphics::GraphNode*, shared_ptr<game::World> const&);
        bool EnsureBASType();
        ulong AttachToWorld();
        DoPendingExactMoves(int);
        uint MoveAlongRoute(int, MoveSpeed const**, float*);
        void SelectMovementAnimation(MoveSpeed const*, float);
        void UpdatePositionFromCurrentTime(unsigned int);
        Matrix44T* CalculateWorldTransformationMatrix();
        ulong IsAnimationBlockingMovement();
        void SelectBaseAnimation(MoveSpeed const*, float);
        void DoExactMove1(int);
        void DoExactMove2(int);
        void DestroyPendingSpotAnimations();
        void DestroySpotAnimationType(int);
        void DestroyPendingSpotAnimationType(int);
        void TranslateParticles(math::Vector3T<float> const&);
        void OnOverrideAnimationFinished(int);
        void CalculateHillRotateTransform(int, int, int, int);
        void SetFacingImmediate(float);
        void CheckAnimationJoinsOnMovement(int);
        int GetMaxRemoveRoofLevel(game::LinkMap const&, int, int, int, int);
        void RecalculateMaxRemoveRoofLevel();
        ulong GetOverlayHeightPathingEntity() const;
        void RequestAnimationInner(std::array<int, 4ul> const&, int, bool, unsigned int, unsigned int);
        void SetupTint(unsigned int, unsigned int, unsigned int, unsigned int);
        ulong IsNonCentredEntity();
        void ResetHitmarksAndHeadbars();
        void AddHitmark(int, int, int, int, unsigned int, unsigned int);
        void AddHeadbar(int, int, unsigned int, int, int, int, int, unsigned int);
        void ClearHeadbar(int);
        void DebugRenderRouting(unsigned int);
        void DebugRenderFacing();
        void DebugRenderPosition(unsigned int);
        int GetBasID() const;
        GetDisplayName() const;
        void SetDisplayName(char const*);
        void DecrementAnimationRoutePending();
        char GetHiddenByOtherEntity() const;
        int GetGridSize() const;
        GetSlotID() const;
        static /* 8 bytes */ TITLE_TAG; // = "<name>"
        static /* 6 bytes */ m_showHillRotateCorners;
        static /* 8 bytes */ NullSpotAnimation;

        // data members, from how the methods use this: 4176 bytes
        undefined** field_0; // offset 0, vtable pointer
        undefined** field_8; // offset 8
        char _unknown_16[48];
        byte field_64;       // offset 64
        undefined1 field_65; // offset 65
        undefined1 field_66; // offset 66
        bool field_67;       // offset 67
        uint field_68;       // offset 68
        int field_72;        // offset 72
        char _unknown_76[40];
        undefined4 field_116; // offset 116
        char _unknown_120[8];
        undefined1 field_128; // offset 128
        char _unknown_129[47];
        shared_ptr field_176; // offset 176
        char _unknown_192[16];
        _func_decltype_nullptr* field_208; // offset 208
        AssetBuilder* field_216;           // offset 216
        ConfigProvider* field_224;         // offset 224
        SceneManager* field_232;           // offset 232
        undefined4 m_slotID;               // offset 240
        char _unknown_244[172];
        undefined8 field_416;      // offset 416
        EntityVarDomain field_424; // offset 424
        char _unknown_456[48];
        undefined8 field_504; // offset 504
        int field_512;        // offset 512
        int m_gridSize;       // offset 516
        char _unknown_520[4];
        undefined1 field_524; // offset 524
        char _unknown_525[15];
        float field_540;            // offset 540
        uint field_544;             // offset 544
        uint field_548;             // offset 548
        FacingController field_552; // offset 552
        char _unknown_716[8];
        float m_translationY; // offset 724
        undefined4 field_728; // offset 728
        char _unknown_732[4];
        undefined1 field_736; // offset 736
        char _unknown_737[63];
        undefined4 field_800; // offset 800
        char _unknown_804[60];
        PathingEntityAnimatedModel m_animatedModel; // offset 864
        char _unknown_3224[8];
        undefined8 field_3232; // offset 3232
        char _unknown_3240[168];
        char field_3408; // offset 3408
        char _unknown_3409[79];
        bool field_3488; // offset 3488
        char _unknown_3489[1];
        short m_worldPriority;      // offset 3490
        char m_hiddenByOtherEntity; // offset 3492
        char _unknown_3493[3];
        undefined4 field_3496; // offset 3496
        int field_3500;        // offset 3500
        char _unknown_3504[4];
        float field_3508; // offset 3508
        char _unknown_3512[4];
        int field_3516; // offset 3516
        char _unknown_3520[4];
        float field_3524; // offset 3524
        char _unknown_3528[4];
        uint field_3532;  // offset 3532
        uint field_3536;  // offset 3536
        float field_3540; // offset 3540
        char _unknown_3544[304];
        int m_basID; // offset 3848
        char _unknown_3852[4];
        shared_ptr field_3856; // offset 3856
        int field_3872;        // offset 3872
        char _unknown_3876[4];
        shared_ptr field_3880;   // offset 3880
        shared_ptr field_3896;   // offset 3896
        shared_ptr field_3912;   // offset 3912
        VariableList field_3928; // offset 3928
        char _unknown_4056[112];
        undefined1 field_4168; // offset 4168
        undefined1 field_4169; // offset 4169
        undefined1 field_4170; // offset 4170
        undefined1 field_4171; // offset 4171
        char _unknown_4172[4];
    };

    class PathingEntityModels {
    public:
        PathingEntityModels();
        ~PathingEntityModels();
        void Clear();

        // data members, from how the methods use this: 40 bytes
        char _unknown_0[40];
    };

    // 0x1003dad60, 16 bytes, inline, placed by class name and debug map
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // PathingEntity::GetAnimatedModel() const
    /* game::Terrain::GetLightProbe() */

    undefined1* game::Terrain::GetLightProbe() {
        return &field_864;
    }

    // 0x1003f1400, 48 bytes, inline, placed by class header (inline)
    // PathingEntityModels::Clear()
    void PathingEntityModels::Clear() {
        shared_ptr<graphics::Model>::reset();
        Clear();
    }

    // 0x1003f3790, 32 bytes, inline, placed by class name
    // PathingEntity::IsDoingAnExactMove() const
    bool PathingEntity::IsDoingAnExactMove() {
        bool bVar1;

        bVar1 = true;
        if ((int)field_3532 <= field_512) {
            bVar1 = field_512 < (int)field_3536;
        }
        return bVar1;
    }

    // 0x1003fdc60, 16 bytes, inline, placed by class name
    // PathingEntity::GetOverlayHeight() const
    void PathingEntity::GetOverlayHeight() {
        GetOverlayHeightPathingEntity(this);
    }

    // 0x1003fdc70, 16 bytes, inline, placed by class name
    // PathingEntity::GetBasID() const
    int PathingEntity::GetBasID() {
        return m_basID;
    }

    // 0x100417cf0, 16 bytes, inline, placed by class name
    // PathingEntity::GetDisplayName() const
    undefined1* PathingEntity::GetDisplayName() {
        return &field_248;
    }

    // 0x100418f10, 32 bytes, inline, placed by class name
    // PathingEntity::SetDisplayName(char const*)
    void PathingEntity::SetDisplayName(char* param_1) {
        eastl::fixed_string<char, 16, true, eastl::allocator>::operator=(
            (fixed_string<char, 16, true, eastl::allocator>*)&field_248, param_1);
    }

    // 0x1004190f0, 48 bytes, inline, placed by class name
    // PathingEntity::DecrementAnimationRoutePending()
    void PathingEntity::DecrementAnimationRoutePending() {
        field_800 = eastl::max<int>(0, field_800 + -1);
    }

    // 0x100419ee0, 16 bytes, inline, placed by class name
    // PathingEntity::GetHiddenByOtherEntity() const
    char PathingEntity::GetHiddenByOtherEntity() {
        return m_hiddenByOtherEntity;
    }

    // 0x100419ef0, 16 bytes, inline, placed by class name
    // PathingEntity::GetGridSize() const
    int PathingEntity::GetGridSize() {
        return m_gridSize;
    }

    // 0x10041b610, 16 bytes, inline, placed by class name
    // PathingEntity::GetWorldPriority() const
    int PathingEntity::GetWorldPriority() {
        return (int)m_worldPriority;
    }

    // 0x10041b620, 16 bytes, inline, placed by class name
    // PathingEntity::GetTrackableID() const
    void PathingEntity::GetTrackableID() {
        GetSlotID(this);
    }

    // 0x10041b6c0, 16 bytes, inline, placed by class name
    // PathingEntity::CanSetFacing() const
    void PathingEntity::CanSetFacing() {
        (*(code*)field_0[35])();
    }

    // 0x10041dd90, 16 bytes, inline, placed by class name
    // PathingEntity::GetSlotID() const
    undefined4 PathingEntity::GetSlotID() {
        return m_slotID;
    }

} // namespace jag

namespace jag::math {
    // 0x1003dad70, 48 bytes, inline, placed by debug map only (low confidence)
    // Vector2T<float> operator/<float>(Vector2T<float> const&, Vector2T<float> const&)
    /* Vector2T<float> TEMPNAMEPLACEHOLDERVALUE(Vector2T<float> const&,
   Vector2T<float> const&) */

    undefined8 operator/(Vector2T* param_1, Vector2T* param_2) {
        undefined8 local_10;

        new (&local_10)
            Point<float>(*(float*)param_1 / *(float*)param_2, *(float*)(param_1 + 4) / *(float*)(param_2 + 4));
        return local_10;
    }

    // 0x1003dada0, 48 bytes, inline, placed by debug map only (low confidence)
    // Vector2T<float> operator*<float>(Vector2T<float> const&, Vector2T<float> const&)
    /* Vector2T<float> TEMPNAMEPLACEHOLDERVALUE(Vector2T<float> const&,
   Vector2T<float> const&) */

    undefined8 operator*(Vector2T* param_1, Vector2T* param_2) {
        undefined8 local_10;

        new (&local_10)
            Point<float>(*(float*)param_2 * *(float*)param_1, *(float*)(param_2 + 4) * *(float*)(param_1 + 4));
        return local_10;
    }

} // namespace jag::math
