// libs/game/runetek5/scene/entities/PathingEntity.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag {
    class PathingEntity {
    public:
        // virtual methods in vtable order
        virtual ~PathingEntity();
        virtual bool ShouldAnimate() const;
        virtual void TestIntersection(const math::Vector3T<float>& vector31, const math::Vector3T<float>& vector32,
                                      int arg3) const;
        virtual void OnModelChange();
        virtual float GetLoadProgress() const;
        virtual void SetTranslation(const math::Vector3T<float>& vector3);
        virtual uint8_t* GetTranslation() const;
        virtual void SetTranslationY(float arg1);
        virtual uint64_t HideChatLine();
        virtual uint64_t GetSmoothPosition() const;
        virtual void MainLogic(graphics::RT7Core& rt7Core, unsigned int arg2, const math::Matrix44T<float>& matrix44);
        virtual void GatherDrawableElements(graphics::DrawableQueue& drawableQueue, graphics::RT7Core& rt7Core,
                                            const math::Matrix44T<float>& matrix44,
                                            const graphics::SceneViewData& sceneViewData,
                                            const graphics::EffectManager& effectManager);
        virtual void AddPickableEntity(game::World& world, const math::Matrix44T<float>& matrix44);
        virtual void GetOverlayHeight() const;
        virtual void Destruct();
        virtual int GetWorldPriority() const;
        virtual uint64_t CalculateWorldPriority(unsigned int arg1, PathingEntityPriorityData arg2) const;
        virtual void GetTrackableID() const;
        virtual bool CanRender() const;
        virtual unsigned long Build(int arg1, bool arg2, PathingEntityPriorityData pathingEntityPriorityData);
        virtual void UpdateAudio();
        virtual void __pure_slot_43() = 0;
        virtual void __pure_slot_45() = 0;
        virtual void TeleportFine(const game::CoordFine& coordFine, bool arg2);
        virtual void TeleportFine(int arg1, const game::CoordFine& coordFine, bool arg3);
        virtual void CanSetFacing() const;
        virtual unsigned long UpdatePosition(int arg1);
        virtual void ClearAppearance();
        void UpdateHighlighting(unsigned int arg1);
        bool IsInPlayersClan() const;
        bool IsMiniMapHidden() const;
        uint64_t GetWalkSmoothing() const;
        bool IsInPlayersGroup() const;
        bool IsFullySoftHidden() const;
        uint64_t RepeatLastOverrideAnimationFrameWhenFinished(int arg1) const;
        bool IsPlayer() const;
        uint8_t LineIntersectionSupport() const;
        PathingEntityAnimatedModel GetAnimatedModel() const;
        PathingEntity(const PathingEntityParams& pathingEntityParams, graphics::GraphNode* graphNode,
                      const shared_ptr<game::World>& world, game::EntityType entityType, int arg5);
        void AddRouteWaypointFine(const game::CoordFine& coordFine, const MoveSpeed* moveSpeed, bool arg3);
        void SetPathingEntityChatLine(const eastl::string& str, EntityChatLine::ChatColour chatColour,
                                      EntityChatLine::ChatEffect chatEffect, unsigned long long arg4);
        uint8_t* GetChatLine();
        auto GetDisplayNameWithExtras(bool arg1);
        void SetTitle(int arg1, game::PlayerGender playerGender);
        void GetPositionFine(game::CoordFine& coordFine) const;
        void AbortAnimationsOnMove();
        void SetExactMove(int arg1, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7, int arg8, float arg9,
                          unsigned int arg10);
        int GetHeightForLevel(int arg1, math::Vector3T<float>& vector3);
        void SetBasID(int arg1);
        void SetSpotAnimation(
            std::unique_ptr<SpotAnimation, MakeUniquePool<SpotAnimation, 64>::UniquePoolDeleter>&& spotAnimation,
            int arg2);
        void ResetSpotAnimation(int arg1, int arg2);
        void GetSpotAnimation(int arg1);
        void UpdateSpotAnimations(unsigned int arg1);
        unsigned long GetRequestedDefaultOrOverrideModel(game::AnimatedModelPair& animatedModelPair,
                                                         PathingEntityModels& pathingEntityModels);
        uint32_t GetReplaceHeldModel(game::AnimatedModelPair& animatedModelPair,
                                     PathingEntityModels& pathingEntityModels, int arg3);
        void GetDefaultModel(game::AnimatedModelPair& animatedModelPair, int arg2);
        void GetOverrideModel(game::AnimatedModelPair& animatedModelPair, int arg2);
        void UpdateIrradianceForModel(graphics::Model& model);
        void BuildAnimStateMachine();
        void DestroySpotAnimations();
        void RequestReadyAnimation();
        void SetGridSize(int arg1);
        void GetPositionGrid(game::CoordGrid& coordGrid, bool arg2) const;
        void GetDestinationPositionGrid(game::CoordGrid& coordGrid);
        void GetDestinationPositionFine(game::CoordFine& coordFine);
        uint8_t* GetCurrentMoveSpeed();
        void GetCameraFollowPosition(math::Vector3T<float>& vector3);
        void UpdateGroundHeight();
        bool IsDoingAnExactMove() const;
        void UpdateEntity(int arg1);
        void UpdatePostTransform();
        void SetFacingGradual();
        void AttachToNode(graphics::GraphNode* graphNode, const shared_ptr<game::World>& world);
        bool EnsureBASType();
        uint32_t AttachToWorld();
        uint64_t DoPendingExactMoves(int arg1);
        unsigned int MoveAlongRoute(int arg1, const MoveSpeed** arg2, float* arg3);
        void SelectMovementAnimation(const MoveSpeed* moveSpeed, float arg2);
        void UpdatePositionFromCurrentTime(unsigned int arg1);
        Matrix44T<float>* CalculateWorldTransformationMatrix();
        unsigned long IsAnimationBlockingMovement();
        void SelectBaseAnimation(const MoveSpeed* moveSpeed, float arg2);
        void DoExactMove1(int arg1);
        void DoExactMove2(int arg1);
        void DestroyPendingSpotAnimations();
        void DestroySpotAnimationType(int arg1);
        void DestroyPendingSpotAnimationType(int arg1);
        void TranslateParticles(const math::Vector3T<float>& vector3);
        void OnOverrideAnimationFinished(int arg1);
        void CalculateHillRotateTransform(int arg1, int arg2, int arg3, int arg4);
        void SetFacingImmediate(float arg1);
        void CheckAnimationJoinsOnMovement(int arg1);
        int GetMaxRemoveRoofLevel(const game::LinkMap& linkMap, int arg2, int arg3, int arg4, int arg5);
        void RecalculateMaxRemoveRoofLevel();
        unsigned long GetOverlayHeightPathingEntity() const;
        void RequestAnimationInner(const std::array<int, 4ul>& arg1, int arg2, bool arg3, unsigned int arg4,
                                   unsigned int arg5);
        void SetupTint(unsigned int arg1, unsigned int arg2, unsigned int arg3, unsigned int arg4);
        unsigned long IsNonCentredEntity();
        void ResetHitmarksAndHeadbars();
        void AddHitmark(int arg1, int arg2, int arg3, int arg4, unsigned int arg5, unsigned int arg6);
        void AddHeadbar(int arg1, int arg2, unsigned int arg3, int arg4, int arg5, int arg6, int arg7,
                        unsigned int arg8);
        void ClearHeadbar(int arg1);
        void DebugRenderRouting(unsigned int arg1);
        void DebugRenderFacing();
        void DebugRenderPosition(unsigned int arg1);
        int GetBasID() const;
        uint8_t* GetDisplayName() const;
        void SetDisplayName(const char* str);
        void DecrementAnimationRoutePending();
        char GetHiddenByOtherEntity() const;
        int GetGridSize() const;
        uint32_t GetSlotID() const;
        static const char* TITLE_TAG; // = "<name>"
        static int16_t m_showHillRotateCorners;
        static int64_t NullSpotAnimation;

    private:
        uint8_t** field_8;
        uint8_t _unknown_16[48];
        uint8_t field_64;
        uint8_t field_65;
        char field_66;
        bool field_67;
        unsigned int field_68;
        TextWrapMode field_72;
        uint8_t _unknown_76[40];
        uint32_t field_116;
        uint8_t _unknown_120[56];
        shared_ptr field_176;
        uint8_t _unknown_192[16];
        RT7Core* field_208;
        AssetBuilder* field_216;
        ConfigProvider* field_224;
        SceneManager* field_232;
        uint32_t m_slotID;
        uint8_t _unknown_244[172];
        unsigned long field_416;
        EntityVarDomain field_424;
        uint8_t _unknown_456[48];
        uint64_t field_504;
        int field_512;
        int m_gridSize;
        uint8_t _unknown_520[4];
        uint8_t field_524;
        uint8_t _unknown_525[19];
        unsigned int field_544;
        unsigned int field_548;
        FacingController field_552;
        uint8_t _unknown_716[8];
        float m_translationY;
        uint32_t field_728;
        uint8_t _unknown_732[68];
        uint32_t field_800;
        uint8_t _unknown_804[60];
        PathingEntityAnimatedModel m_animatedModel;
        uint8_t _unknown_3224[8];
        uint64_t field_3232;
        uint8_t _unknown_3240[168];
        char field_3408;
        uint8_t _unknown_3409[79];
        bool field_3488;
        uint8_t _unknown_3489[1];
        short m_worldPriority;
        char m_hiddenByOtherEntity;
        uint8_t _unknown_3493[3];
        uint32_t field_3496;
        int field_3500;
        uint8_t _unknown_3504[4];
        float field_3508;
        uint8_t _unknown_3512[4];
        int field_3516;
        uint8_t _unknown_3520[4];
        float field_3524;
        uint8_t _unknown_3528[4];
        unsigned int field_3532;
        unsigned int field_3536;
        float field_3540;
        uint8_t _unknown_3544[304];
        int m_basID;
        uint8_t _unknown_3852[4];
        shared_ptr field_3856;
        int field_3872;
        uint8_t _unknown_3876[4];
        shared_ptr field_3880;
        shared_ptr field_3896;
        shared_ptr field_3912;
        VariableList field_3928;
        uint8_t _unknown_4056[112];
        uint8_t field_4168;
        uint8_t field_4169;
        uint8_t field_4170;
        uint8_t field_4171;
        uint8_t _unknown_4172[4];
    };

    class PathingEntityModels {
    public:
        PathingEntityModels();
        ~PathingEntityModels();
        void Clear();

        uint8_t _unknown_0[40];
    };

    // 0x1003dad60
    PathingEntityAnimatedModel PathingEntity::GetAnimatedModel() const {
        return &field_864;
    }

    // 0x1003f1400
    void PathingEntityModels::Clear() {
        field_32.reset();
        Clear();
    }

    // 0x1003f3790
    bool PathingEntity::IsDoingAnExactMove() const {
        bool bVar1 = true;
        if ((int)field_3532 <= field_512) {
            bVar1 = field_512 < (int)field_3536;
        }
        return bVar1;
    }

    // 0x1003fdc60
    void PathingEntity::GetOverlayHeight() const {
        GetOverlayHeightPathingEntity();
    }

    // 0x1003fdc70
    int PathingEntity::GetBasID() const {
        return m_basID;
    }

    // 0x100417cf0
    uint8_t* PathingEntity::GetDisplayName() const {
        return &field_248;
    }

    // 0x100418f10
    void PathingEntity::SetDisplayName(const char* str) {
        field_248 = str;
    }

    // 0x1004190f0
    void PathingEntity::DecrementAnimationRoutePending() {
        field_800 = eastl::max<int>(0, field_800 - 1);
    }

    // 0x100419ee0
    char PathingEntity::GetHiddenByOtherEntity() const {
        return m_hiddenByOtherEntity;
    }

    // 0x100419ef0
    int PathingEntity::GetGridSize() const {
        return m_gridSize;
    }

    // 0x10041b610
    int PathingEntity::GetWorldPriority() const {
        return (int)m_worldPriority;
    }

    // 0x10041b620
    void PathingEntity::GetTrackableID() const {
        GetSlotID();
    }

    // 0x10041b6c0
    void PathingEntity::CanSetFacing() const {
        CanRender();
    }

    // 0x10041dd90
    uint32_t PathingEntity::GetSlotID() const {
        return m_slotID;
    }

} // namespace jag

namespace jag::math {
    // 0x1003dad70
    Vector2T<float> operator/ <float>(const Vector2T<float>& vector21, const Vector2T<float>& vector22) {

        return local_10(*(float*)vector21 / *(float*)vector22, *(float*)(vector21 + 4) / *(float*)(vector22 + 4));
        return local_10;
    }

    // 0x1003dada0
    Vector2T<float> operator* <float>(const Vector2T<float>& vector21, const Vector2T<float>& vector22) {

        return local_10(*(float*)vector22 * *(float*)vector21, *(float*)(vector22 + 4) * *(float*)(vector21 + 4));
        return local_10;
    }

} // namespace jag::math
