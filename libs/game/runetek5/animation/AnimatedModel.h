// libs/game/runetek5/animation/AnimatedModel.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::game {
    class AnimatedModel {
    public:
        class AnimationDetails;
        class ModelAnimationSet;
        // virtual methods in vtable order
        virtual ~AnimatedModel();
        virtual void OnOverrideAnimationFinished(int arg1);
        virtual uint64_t RepeatLastOverrideAnimationFrameWhenFinished(int arg1) const;
        shared_ptr* GetOverrideAnimation() const;
        void UnSync();
        uint32_t GetDefaultAnimationSeqID() const;
        bool IsDefaultAnimationReadyAnim() const;
        void RememberOverrideAnimationPoint();
        void SetParticleSoftFadeEnabled(bool arg1);
        void SetParticleShadowsEnabled(bool arg1);
        void
        SetAnimationStateProviderOverride(const shared_ptr<graphics::AnimationStateProvider>& animationStateProvider);
        uint8_t* GetParticleSystems() const;
        uint8_t* GetModularParticleSystems() const;
        uint8_t* GetDefaultAnimation();
        int GetDefaultAnimationRunCount() const;
        void SetDefaultAnimationRunCount(int arg1);
        void RequestedOverrideAnimationIsPriority() const;
        void MayMove(int arg1) const;
        uint32_t GetOverrideAnimationRequestedSeqID() const;
        uint32_t GetOverrideAnimationSeqID() const;
        void SetOverrideDelay(unsigned int arg1);
        void SetOverridePriority(unsigned int arg1);
        uint8_t* GetOverrideAnimationModel() const;
        shared_ptr GetDefaultAnimationModel() const;
        void HasRequestedDefaultAnimation() const;
        uint8_t* GetCurrentAnimation();
        bool HasParticleSystems();
        uint32_t InUse() const;
        void IsDefaultAnimationInUse() const;
        void IsOverrideAnimationInUse() const;
        shared_ptr GetCurrentModel() const;
        void DebugOutputAnimationState<char, eastl::fixed_vector_allocator<1ul, 512ul, 1ul, 0ul, true>>(
            eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 512ul, 1ul, 0ul, true>>& str);
        void RestartOverrideAnimation(unsigned int arg1);
        void HasRequestedOverrideAnimation() const;
        void DebugOutputAnimationStateSingle<char, eastl::fixed_vector_allocator<1ul, 512ul, 1ul, 0ul, true>>(
            eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 512ul, 1ul, 0ul, true>>& str1,
            const char* str2, ModelAnimationSet& modelAnimationSet);
        AnimatedModel(graphics::RT7Core& rt7Core, AssetBuilder& assetBuilder, const ConfigProvider& configProvider,
                      graphics::AnimationLoopBehaviour animationLoopBehaviour, bool arg5,
                      const std::function<void(int, int, int, int, int, int)>& callback);
        void Destruct();
        void SetOverrideSourceTicks(unsigned int arg1, unsigned int arg2);
        bool Build(unsigned int arg1, unsigned int arg2, bool arg3, int arg4);
        void ServiceAnimationLoading(AnimationDetails& animationDetails, bool arg2, unsigned int arg3, int arg4,
                                     const shared_ptr<graphics::Model>& model1,
                                     const shared_ptr<graphics::Model>& model2, int arg7);
        void SetCurrentModel(const shared_ptr<graphics::Model>& model);
        void UpdateAnimationsState(unsigned int arg1, unsigned int arg2, int arg3);
        bool IsReady(unsigned int arg1, unsigned int arg2);
        bool IsLoaded() const;
        void GetCachedAnimation(int arg1, int arg2);
        long GetCachedAnimationKey(int arg1, int arg2);
        void PutCachedAnimation(const shared_ptr<AnimationWrapper>& animationWrapper, unsigned int arg2);
        void ResetAnimationState(unsigned int arg1);
        shared_ptr GetCurrentModel(unsigned int arg1);
        void ResetOverrideAnimation();
        void ResetDefaultAnimation();
        char* ToString() const;
        unsigned long RequestOverrideAnimation(bool arg1, int arg2, int arg3, bool arg4);
        unsigned long IsOverrideBlockingMovement(int arg1) const;
        void RequestDefaultAnimation(int arg1, bool arg2, bool arg3);
        void RequestDefaultAnimation(int arg1, bool arg2, const graphics::Model* model, bool arg4, bool arg5);
        void TranslateParticles(const math::Vector3T<float>& vector3);
        void SetPointLightBounds(const math::Vector3T<float>& vector3, int arg2, int arg3);
        void GatherDrawableElements(graphics::DrawableQueue& drawableQueue, graphics::RT7Core& rt7Core,
                                    const graphics::SceneViewData& sceneViewData,
                                    const graphics::EffectManager& effectManager);
        void ApplyAnimationStateToModel(unsigned int arg1, unsigned int arg2, int arg3);
        void DebugOuputRunningAnimation(unsigned int arg1, bool arg2, bool arg3);
        void SetWorldTransform(const math::Matrix44T<float>& matrix44, unsigned int arg2);
        void UpdateParticles(const math::Matrix44T<float>& matrix44, unsigned int arg2);

    private:
        uint8_t _unknown_8[16];
        RT7Core* field_24;
        AssetBuilder* field_32;
        ConfigProvider* field_40;
        uint8_t _unknown_48[1552];
        bool field_1600;
        uint8_t _unknown_1601[3];
        AnimationLoopBehaviour field_1604;
        uint8_t _unknown_1608[64];
        uint32_t m_defaultAnimationSeqID;
        uint8_t _unknown_1676[4];
        uint8_t m_defaultAnimation[16];
        shared_ptr m_defaultAnimationModel;
        uint8_t _unknown_1712[40];
        bool m_defaultAnimationReadyAnim;
        uint8_t _unknown_1753[27];
        int m_defaultAnimationRunCount;
        int field_1784;
        uint8_t _unknown_1788[20];
        shared_ptr field_1808;
        uint8_t _unknown_1824[40];
        bool field_1864;
        bool field_1865;
        uint8_t _unknown_1866[38];
        uint32_t m_overrideAnimationSeqID;
        uint8_t _unknown_1908[4];
        shared_ptr m_overrideAnimation;
        uint8_t m_overrideAnimationModel[16];
        uint8_t _unknown_1944[72];
        uint32_t m_overrideAnimationRequestedSeqID;
        uint8_t _unknown_2020[52];
        unsigned int m_overrideDelay;
        unsigned int m_overridePriority;
        uint8_t _unknown_2080[20];
        unsigned int m_overrideSourceTicks;
        uint8_t _unknown_2104[4];
        unsigned int field_2108;
        uint8_t _unknown_2112[16];
        shared_ptr field_2128;
        uint8_t _unknown_2144[96];
        uint64_t field_2240;
        uint64_t field_2248;
        uint64_t field_2256;
        uint64_t field_2264;
        uint64_t field_2272;
        uint64_t field_2280;
        uint64_t field_2288;
        uint64_t field_2296;
        shared_ptr m_currentModel;
        uint8_t _unknown_2320[8];
        shared_ptr field_2328;
        uint32_t field_2344;
        uint8_t _unknown_2348[4];
    };

    class AnimatedModel::AnimationDetails {
    public:
        void UnSync();
        uint32_t RequestedAnimationIsPriority() const;
        uint32_t InUse() const;
        bool HasRequestedAnimation() const;
        AnimationDetails(int arg1);
        ~AnimationDetails();
        void ClearAllAnimations();
        void IsReady(unsigned int arg1, unsigned int arg2);
        void IsActiveAnimationLoaded() const;
        void ActivateRequestedAnimation(bool arg1, unsigned int arg2);
        void ResetRequestedAnimation();
        uint64_t MayMove(int arg1) const;
        bool IsDelayed(int arg1) const;
        void ClearActiveAnimation();
        void ClearRequestedAnimation();
        void RememberAnimationPoint();

    private:
        int field_0;
        uint8_t _unknown_4[4];
        int field_8;
        uint8_t _unknown_12[4];
        shared_ptr field_16;
        uint8_t _unknown_32[36];
        unsigned int field_68;
        uint8_t _unknown_72[16];
        uint8_t field_88;
        uint8_t _unknown_89[7];
        unsigned int field_96;
        uint8_t _unknown_100[20];
        int field_120;
        uint8_t _unknown_124[52];
        uint32_t field_176;
        unsigned int field_180;
        uint8_t _unknown_184[16];
        uint8_t field_200;
        uint8_t _unknown_201[2];
        uint8_t field_203;
        int field_204;
        uint8_t _unknown_208[8];
        uint8_t field_216;
        uint8_t _unknown_217[3];
        int field_220;
        uint32_t field_224;
        uint8_t _unknown_228[4];
    };

    class AnimatedModel::ModelAnimationSet {
    public:
        bool InUse() const;
        void Reset();
        bool IsAnimationBuilt() const;
        bool IsDelayedAnimation(int arg1) const;
        unsigned long HasStarted() const;
        bool IsReady(unsigned int arg1, unsigned int arg2);
        ModelAnimationSet();
        ModelAnimationSet* swap(ModelAnimationSet& modelAnimationSet);
        ~ModelAnimationSet();
        uint32_t MayMove(int arg1) const;

    private:
        int field_0;
        uint8_t _unknown_4[4];
        shared_ptr field_8;
        uint8_t _unknown_24[32];
        unsigned int field_56;
        int field_60;
        uint8_t _unknown_64[16];
        uint8_t field_80;
        uint8_t field_81;
        uint8_t field_82;
        unsigned char field_83;
        int field_84;
        uint8_t _unknown_88[4];
        int field_92;
        unsigned char field_96;
        uint8_t _unknown_97[3];
        unsigned int field_100;
        unsigned int field_104;
        uint32_t field_108;
        uint8_t _unknown_112[4];
    };

    class AnimatedModelPair {
    public:
        ~AnimatedModelPair();
        AnimatedModelPair();

        uint8_t _unknown_0[24];
    };

    // 0x1003f1430
    shared_ptr* AnimatedModel::GetOverrideAnimation() const {
        return (shared_ptr*)m_overrideAnimation;
    }

    // 0x1003f1440
    void AnimatedModel::UnSync() {
        field_1896.UnSync();
    }

    // 0x1003f1460
    uint32_t AnimatedModel::GetDefaultAnimationSeqID() const {
        return m_defaultAnimationSeqID;
    }

    // 0x1003f1470
    bool AnimatedModel::IsDefaultAnimationReadyAnim() const {
        return m_defaultAnimationReadyAnim;
    }

    // 0x1003f2600
    void AnimatedModel::RememberOverrideAnimationPoint() {
        field_1896.RememberAnimationPoint();
    }

    // 0x1003f2620
    void AnimatedModel::SetParticleSoftFadeEnabled(bool arg1) {
        bool local_9 = arg1;
        (&field_2320)->operator=(&local_9);
    }

    // 0x1003f2650
    void AnimatedModel::SetParticleShadowsEnabled(bool arg1) {
        bool local_9 = arg1;
        (&field_2322)->operator=(&local_9);
    }

    // 0x1003f2b70
    void AnimatedModel::SetAnimationStateProviderOverride(
        const shared_ptr<graphics::AnimationStateProvider>& animationStateProvider) {
        *field_2328 = animationStateProvider;
    }

    // 0x1003f2ff0
    uint8_t* AnimatedModel::GetParticleSystems() const {
        return &field_2144;
    }

    // 0x1003f3000
    uint8_t* AnimatedModel::GetModularParticleSystems() const {
        return &field_2200;
    }

    // 0x1003f31e0
    uint8_t* AnimatedModel::GetDefaultAnimation() {
        return m_defaultAnimation;
    }

    // 0x1003f31f0
    int AnimatedModel::GetDefaultAnimationRunCount() const {
        return m_defaultAnimationRunCount;
    }

    // 0x1003f3200
    void AnimatedModel::SetDefaultAnimationRunCount(int arg1) {
        m_defaultAnimationRunCount = arg1;
    }

    // 0x1003f41a0
    void AnimatedModel::RequestedOverrideAnimationIsPriority() const {
        field_1896.RequestedAnimationIsPriority();
    }

    // 0x1003f4bd0
    void AnimatedModel::MayMove(int arg1) const {
        field_1896.MayMove(arg1);
    }

    // 0x1003f4cb0
    uint32_t AnimatedModel::GetOverrideAnimationRequestedSeqID() const {
        return m_overrideAnimationRequestedSeqID;
    }

    // 0x1003f4cc0
    uint32_t AnimatedModel::GetOverrideAnimationSeqID() const {
        return m_overrideAnimationSeqID;
    }

    // 0x1003f6a90
    void AnimatedModel::SetOverrideDelay(unsigned int arg1) {
        m_overrideDelay = arg1;
    }

    // 0x1003f6aa0
    void AnimatedModel::SetOverridePriority(unsigned int arg1) {
        m_overridePriority = arg1;
    }

    // 0x100400000
    void AnimatedModel::AnimationDetails::UnSync() {
        field_184.UnSync();
    }

    // 0x100401510
    uint32_t AnimatedModel::AnimationDetails::RequestedAnimationIsPriority() const {
        return field_68 <= field_180;
    }

    // 0x100418bd0
    uint8_t* AnimatedModel::GetOverrideAnimationModel() const {
        return m_overrideAnimationModel;
    }

    // 0x100418be0
    shared_ptr AnimatedModel::GetDefaultAnimationModel() const {
        return m_defaultAnimationModel;
    }

    // 0x100418bf0
    void AnimatedModel::HasRequestedDefaultAnimation() const {
        field_1664.HasRequestedAnimation();
    }

    // 0x100419c30
    uint8_t* AnimatedModel::GetCurrentAnimation() {
        bool cVar1 = m_overrideAnimation->operator_cast_to_bool();
        uint8_t* puVar2 = m_defaultAnimation;
        if (cVar1) {
            puVar2 = m_overrideAnimation;
        }
        return puVar2;
    }

    // 0x10041a320
    bool AnimatedModel::HasParticleSystems() {
        return field_2144.empty() ^ 1;
    }

    // 0x10042c8d0
    uint32_t AnimatedModel::InUse() const {
        bool cVar1 = field_1664.InUse();
        uint32_t uVar2 = 1;
        if (!cVar1) {
            uVar2 = field_1896.InUse();
        }
        return uVar2;
    }

    // 0x10042edc0
    void AnimatedModel::IsDefaultAnimationInUse() const {
        field_1664.InUse();
    }

    // 0x10042ede0
    void AnimatedModel::IsOverrideAnimationInUse() const {
        field_1896.InUse();
    }

    // 0x10042f350
    shared_ptr AnimatedModel::GetCurrentModel() const {
        return m_currentModel;
    }

    // 0x10042fe20
    void AnimatedModel::DebugOutputAnimationState<char, eastl::fixed_vector_allocator<1ul, 512ul, 1ul, 0ul, true>>(
        eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 512ul, 1ul, 0ul, true>>& str) {
        DebugOutputAnimationStateSingle<char, eastl::fixed_vector_allocator<1ul, 512ul, 1ul, 0ul, true>>(
            this, str, "anim", (ModelAnimationSet*)&m_defaultAnimationSeqID);
        DebugOutputAnimationStateSingle<char, eastl::fixed_vector_allocator<1ul, 512ul, 1ul, 0ul, true>>(
            this, str, "override", (ModelAnimationSet*)&m_overrideAnimationSeqID);
    }

    // 0x100431290
    void AnimatedModel::RestartOverrideAnimation(unsigned int arg1) {
        ((AnimationWrapper*)(*m_overrideAnimation).operator->())->Restart(arg1, 0);
    }

    // 0x1004312c0
    void AnimatedModel::HasRequestedOverrideAnimation() const {
        field_1896.HasRequestedAnimation();
    }

    // 0x100431e30
    uint32_t AnimatedModel::AnimationDetails::InUse() const {
        bool cVar1 = field_8.InUse();
        uint32_t uVar2 = 1;
        if (!cVar1) {
            uVar2 = field_120.InUse();
        }
        return uVar2;
    }

    // 0x100431e60
    bool AnimatedModel::ModelAnimationSet::InUse() const {
        bool cVar1 = field_8->operator_cast_to_bool();
        bool bVar2 = true;
        if (!cVar1) {
            bVar2 = field_0 != -1;
        }
        return bVar2;
    }

    // 0x100432540
    bool AnimatedModel::AnimationDetails::HasRequestedAnimation() const {
        return field_120 != -1;
    }

    // 0x1004399e0
    void
    AnimatedModel::DebugOutputAnimationStateSingle<char, eastl::fixed_vector_allocator<1ul, 512ul, 1ul, 0ul, true>>(
        eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 512ul, 1ul, 0ul, true>>& str1, const char* str2,
        AnimatedModel::ModelAnimationSet& modelAnimationSet) {
        int iVar1;
        unsigned int uVar3;
        unsigned int uVar4;
        unsigned int uVar5;
        unsigned int uVar6;
        unsigned int uVar7;
        AnimationWrapper* this_01;
        AnimationParameters* this_02;
        uint64_t uVar8;
        uint64_t uVar9;
        Model* pMVar10;
        uint64_t uVar11;
        uint8_t* puVar12;

        if (modelAnimationSet.field_0 != -1) {
            uVar3 = ((GraphicsApp*)GraphicsApp::Instance())->GetFrameCount();
            if (modelAnimationSet.field_64.IsCycleReady(uVar3) == '\0') {
                iVar1 = modelAnimationSet.field_0;
                puVar12 = &modelAnimationSet.field_24;
                pMVar10 = (Model*)(*puVar12).operator->();
                uVar3 = pMVar10->GetExternalID();
                pMVar10 = (Model*)(*puVar12).operator->();
                uVar4 = pMVar10->GetModelRawUniqueID();
                uVar8 = puVar12->end();
                str1.append_sprintf("\n%s[seq:%d ON %d(%d)] NOT READY %p", str2, iVar1, (unsigned long)uVar3,
                                    (unsigned long)uVar4, uVar8);
            } else {
                this_01 = (AnimationWrapper*)(modelAnimationSet.field_8).operator->();
                this_02 = (AnimationParameters*)this_01->GetAnimationParameters();
                uVar4 = this_02->GetTicksThroughAnimation();
                uVar5 = this_02->GetAnimationLength();
                uVar8 = this_02->GetCurrentIndex();
                uVar9 = this_02->GetFrameCount();
                uVar3 = modelAnimationSet.field_0;
                puVar12 = &modelAnimationSet.field_24;
                pMVar10 = (Model*)(*puVar12).operator->();
                uVar6 = pMVar10->GetExternalID();
                pMVar10 = (Model*)(*puVar12).operator->();
                uVar7 = pMVar10->GetModelRawUniqueID();
                uVar11 = puVar12->end();
                str1.append_sprintf("\n%s[seq:%d %d/%d (%d of %d) ON %d(%d)] %p", str2, (unsigned long)uVar3,
                                    (unsigned long)uVar4, (unsigned long)uVar5, uVar8, uVar9, (unsigned long)uVar6,
                                    (unsigned long)uVar7, uVar11);
            }
        }
    }

    // 0x1006679f0
    void AnimatedModel::SetCurrentModel(const shared_ptr<graphics::Model>& model) {
        Model* pMVar1;
        Model* this_01;
        MapSquare* this_02;
        Vector4T<float>* vector4;
        AnimationStateProvider* pAVar2;
        uint8_t* this_04;
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_48;
        float local_34;

        uint8_t* this_00 = m_currentModel;
        if (*this_00 != model) {
            if (model.operator_cast_to_bool()) {
                pMVar1 = (Model*)model.operator->();
                local_48 = shared_ptr();
                pMVar1->SetGeometryQuery(local_48);
            }
            if (this_00->operator_cast_to_bool()) {
                if (model.operator_cast_to_bool()) {
                    pMVar1 = (Model*)(*this_00).operator->();
                    pMVar1->ClearHighlight();
                    pMVar1 = (Model*)model.operator->();
                    this_01 = (Model*)(*this_00).operator->();
                    local_34 = (float)this_01->GetHighlightScale();
                    this_02 = (MapSquare*)(*this_00).operator->();
                    vector4 = (Vector4T<float>*)this_02->GetMapSquarePointLights();
                    pMVar1->SetHighlight(local_34, *vector4);
                }
            }
            this_04 = &field_1584;
            pAVar2 = (AnimationStateProvider*)(*this_04).operator->();
            pAVar2->WaitForAsyncTasks();
            pAVar2 = (AnimationStateProvider*)(*this_04).operator->();
            pAVar2->InvalidateAsyncUpdate();
            ((AnimationState*)(*this_04).operator->())->InvalidateSampled();
            *this_00 = model;
        }
    }

    // 0x100667eb0
    long AnimatedModel::GetCachedAnimationKey(int arg1, int arg2) {
        return (long)arg2 + ((unsigned long)(unsigned int)arg1 << 32);
    }

    // 0x1006682c0
    bool AnimatedModel::ModelAnimationSet::IsDelayedAnimation(int arg1) const {
        uint64_t uVar2;

        if (field_8->operator_cast_to_bool() == '\0') {
            uVar2 = 0;
        } else {
            uVar2 = ((AnimationWrapper*)(*field_8).operator->())->IsDelayedAnimation(arg1);
        }
        return uVar2;
    }

    // 0x100668300
    unsigned long AnimatedModel::ModelAnimationSet::HasStarted() const {
        int iVar2;
        AnimationWrapper* pAVar3;
        uint64_t unaff_R14;

        uint8_t* this_02 = field_8;
        bool cVar1 = this_02->operator_cast_to_bool();
        uint64_t uVar5 = (uint64_t)((unsigned long)unaff_R14 >> 8);
        unsigned long uVar4 = (((uint64_t)uVar5 << 8) | (uint8_t)1);
        if (cVar1) {
            pAVar3 = (AnimationWrapper*)(*this_02).operator->();
            iVar2 = ((AnimationParameters*)pAVar3->GetAnimationParameters())->GetTicksThroughAnimation();
            if (iVar2 < 1) {
                pAVar3 = (AnimationWrapper*)(*this_02).operator->();
                iVar2 = ((MapArea*)pAVar3->GetAnimationParameters())->GetAdvisedZoom();
                uVar4 = (((uint64_t)uVar5 << 8) | (uint8_t)(iVar2 != 0));
            }
        }
        return uVar4 & 4294967295;
    }

    // 0x100668620
    shared_ptr AnimatedModel::GetCurrentModel(unsigned int arg1) {
        uint8_t* puVar2;

        bool cVar1 = m_overrideAnimation->operator_cast_to_bool();
        if ((cVar1) && (cVar1 = field_1968.IsCycleReady(arg1), cVar1)) {
            return m_overrideAnimationModel;
        }
        cVar1 = m_defaultAnimation->operator_cast_to_bool();
        if (!cVar1) {
            cVar1 = field_1664.HasRequestedAnimation();
            if ((!cVar1) && (cVar1 = field_1896.HasRequestedAnimation(), !cVar1)) {
                return field_2128;
            }
            puVar2 = &graphics::Model::NullModel;
        } else {
            puVar2 = m_defaultAnimationModel;
        }
        return puVar2;
    }

    // 0x100668a40
    uint64_t AnimatedModel::AnimationDetails::MayMove(int arg1) const {
        uint64_t uVar2;

        if (field_8.MayMove(arg1) == '\0') {
            uVar2 = 0;
        } else {
            uVar2 = field_120.MayMove(arg1);
        }
        return uVar2;
    }

    // 0x100669560
    void AnimatedModel::AnimationDetails::ClearActiveAnimation() {
        field_8.Reset();
    }

    // 0x100669860
    void AnimatedModel::AnimationDetails::ClearRequestedAnimation() {
        field_120.Reset();
    }

    // 0x10066a060
    AnimatedModel::AnimationDetails::~AnimationDetails() {}

    // 0x10066a520
    uint32_t AnimatedModel::ModelAnimationSet::MayMove(int arg1) const {
        bool cVar1 = field_8->operator_cast_to_bool();
        uint32_t uVar2 = 1;
        if (cVar1) {
            uVar2 = ((AnimationWrapper*)(*field_8).operator->())->MayMove(arg1);
        }
        return uVar2;
    }

    // 0x10066a5a0
    AnimatedModel::ModelAnimationSet::~ModelAnimationSet() {
        field_64.UnSync();
        field_64.~ServerSyncingUser();
        field_40.~shared_ptr();
        field_24.~shared_ptr();
        field_8->~shared_ptr();
    }

} // namespace jag::game

namespace jag {
    class PendingSpotAnimation {
    public:
        PendingSpotAnimation(
            std::unique_ptr<SpotAnimation, MakeUniquePool<SpotAnimation, 64>::UniquePoolDeleter> spotAnimation);
        PendingSpotAnimation* operator=(PendingSpotAnimation&& pendingSpotAnimation);
        ~PendingSpotAnimation();
        PendingSpotAnimation(int arg1);
        PendingSpotAnimation();
        PendingSpotAnimation(PendingSpotAnimation&& pendingSpotAnimation);

        uint8_t _unknown_0[16];
    };

    // 0x1003f15f0
    PendingSpotAnimation* PendingSpotAnimation::operator=(PendingSpotAnimation&& pendingSpotAnimation) {
        std::swap<SpotAnimation, MakeUniquePool<SpotAnimation, 64>::UniquePoolDeleter>(*this, pendingSpotAnimation);
        field_8.swap(pendingSpotAnimation.field_8);
        return this;
    }

} // namespace jag
