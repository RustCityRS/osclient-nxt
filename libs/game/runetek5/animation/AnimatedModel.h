// libs/game/runetek5/animation/AnimatedModel.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::game {
    class AnimatedModel {
    public:
        class AnimationDetails;
        class ModelAnimationSet;
        // virtual methods in vtable order
        virtual ~AnimatedModel();
        virtual OnOverrideAnimationFinished(int);
        virtual RepeatLastOverrideAnimationFrameWhenFinished(int) const;
        GetOverrideAnimation() const;
        void UnSync();
        GetDefaultAnimationSeqID() const;
        IsDefaultAnimationReadyAnim() const;
        void RememberOverrideAnimationPoint();
        void SetParticleSoftFadeEnabled(bool);
        void SetParticleShadowsEnabled(bool);
        void SetAnimationStateProviderOverride(shared_ptr<graphics::AnimationStateProvider> const&);
        GetParticleSystems() const;
        GetModularParticleSystems() const;
        GetDefaultAnimation();
        int GetDefaultAnimationRunCount() const;
        void SetDefaultAnimationRunCount(int);
        void RequestedOverrideAnimationIsPriority() const;
        void MayMove(int) const;
        int GetOverrideAnimationRequestedSeqID() const;
        int GetOverrideAnimationSeqID() const;
        void SetOverrideDelay(unsigned int);
        void SetOverridePriority(unsigned int);
        GetOverrideAnimationModel() const;
        GetDefaultAnimationModel() const;
        void HasRequestedDefaultAnimation() const;
        GetCurrentAnimation();
        byte HasParticleSystems();
        InUse() const;
        void IsDefaultAnimationInUse() const;
        void IsOverrideAnimationInUse() const;
        GetCurrentModel() const;
        void
        DebugOutputAnimationState<char, eastl::fixed_vector_allocator<1ul, 512ul, 1ul, 0ul, true, eastl::allocator>>(
            eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 512ul, 1ul, 0ul, true, eastl::allocator>>&);
        void RestartOverrideAnimation(unsigned int);
        void HasRequestedOverrideAnimation() const;
        void
        DebugOutputAnimationStateSingle<char,
                                        eastl::fixed_vector_allocator<1ul, 512ul, 1ul, 0ul, true, eastl::allocator>>(
            eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 512ul, 1ul, 0ul, true, eastl::allocator>>&,
            char const*, ModelAnimationSet&);
        AnimatedModel(graphics::RT7Core&, AssetBuilder&, ConfigProvider const&, graphics::AnimationLoopBehaviour, bool,
                      std::function<void(int, int, int, int, int, int)> const&);
        void Destruct();
        void SetOverrideSourceTicks(unsigned int, unsigned int);
        bool Build(unsigned int, unsigned int, bool, int);
        void ServiceAnimationLoading(AnimationDetails&, bool, unsigned int, int, shared_ptr<graphics::Model> const&,
                                     shared_ptr<graphics::Model> const&, int);
        void SetCurrentModel(shared_ptr<graphics::Model> const&);
        void UpdateAnimationsState(unsigned int, unsigned int, int);
        IsReady(unsigned int, unsigned int);
        IsLoaded() const;
        void GetCachedAnimation(int, int);
        long GetCachedAnimationKey(int, int);
        void PutCachedAnimation(shared_ptr<AnimationWrapper> const&, unsigned int);
        void ResetAnimationState(unsigned int);
        GetCurrentModel(unsigned int);
        void ResetOverrideAnimation();
        void ResetDefaultAnimation();
        char* ToString() const;
        ulong RequestOverrideAnimation(bool, int, int, bool);
        ulong IsOverrideBlockingMovement(int) const;
        void RequestDefaultAnimation(int, bool, bool);
        void RequestDefaultAnimation(int, bool, graphics::Model const*, bool, bool);
        void TranslateParticles(math::Vector3T<float> const&);
        void SetPointLightBounds(math::Vector3T<float> const&, int, int);
        void GatherDrawableElements(graphics::DrawableQueue&, graphics::RT7Core&, graphics::SceneViewData const&,
                                    graphics::EffectManager const&);
        void ApplyAnimationStateToModel(unsigned int, unsigned int, int);
        void DebugOuputRunningAnimation(unsigned int, bool, bool);
        void SetWorldTransform(math::Matrix44T<float> const&, unsigned int);
        void UpdateParticles(math::Matrix44T<float> const&, unsigned int);

        // data members, from how the methods use this: 2352 bytes
        undefined** field_0; // offset 0, vtable pointer
        char _unknown_8[16];
        RT7Core* field_24;        // offset 24
        undefined8 field_32;      // offset 32
        ConfigProvider* field_40; // offset 40
        ulonglong field_48;       // offset 48
        char _unknown_56[1528];
        shared_ptr field_1584; // offset 1584
        undefined1 field_1600; // offset 1600
        char _unknown_1601[3];
        undefined4 field_1604; // offset 1604
        char _unknown_1608[56];
        int field_1664; // offset 1664
        char _unknown_1668[4];
        undefined4 m_defaultAnimationSeqID; // offset 1672
        char _unknown_1676[4];
        shared_ptr m_defaultAnimation;      // offset 1680
        shared_ptr m_defaultAnimationModel; // offset 1696
        char _unknown_1712[40];
        bool m_defaultAnimationReadyAnim; // offset 1752
        char _unknown_1753[27];
        int m_defaultAnimationRunCount; // offset 1780
        int field_1784;                 // offset 1784
        char _unknown_1788[20];
        shared_ptr field_1808; // offset 1808
        char _unknown_1824[40];
        bool field_1864; // offset 1864
        bool field_1865; // offset 1865
        char _unknown_1866[30];
        int field_1896; // offset 1896
        char _unknown_1900[4];
        int m_overrideAnimationSeqID; // offset 1904
        char _unknown_1908[4];
        shared_ptr m_overrideAnimation;      // offset 1912
        shared_ptr m_overrideAnimationModel; // offset 1928
        char _unknown_1944[16];
        int field_1960; // offset 1960
        char _unknown_1964[52];
        int m_overrideAnimationRequestedSeqID; // offset 2016
        char _unknown_2020[52];
        uint m_overrideDelay;    // offset 2072
        uint m_overridePriority; // offset 2076
        char _unknown_2080[17];
        bool field_2097;       // offset 2097
        undefined1 field_2098; // offset 2098
        char _unknown_2099[1];
        uint m_overrideSourceTicks; // offset 2100
        char _unknown_2104[4];
        uint field_2108; // offset 2108
        char _unknown_2112[16];
        shared_ptr field_2128; // offset 2128
        char _unknown_2144[96];
        undefined8 field_2240;     // offset 2240
        undefined8 field_2248;     // offset 2248
        undefined8 field_2256;     // offset 2256
        undefined8 field_2264;     // offset 2264
        undefined8 field_2272;     // offset 2272
        undefined8 field_2280;     // offset 2280
        undefined8 field_2288;     // offset 2288
        undefined8 field_2296;     // offset 2296
        shared_ptr m_currentModel; // offset 2304
        char _unknown_2320[8];
        shared_ptr field_2328; // offset 2328
        undefined4 field_2344; // offset 2344
        char _unknown_2348[4];
    };

    class AnimatedModel::AnimationDetails {
    public:
        void UnSync();
        RequestedAnimationIsPriority() const;
        InUse() const;
        bool HasRequestedAnimation() const;
        AnimationDetails(int);
        ~AnimationDetails();
        void ClearAllAnimations();
        void IsReady(unsigned int, unsigned int);
        void IsActiveAnimationLoaded() const;
        void ActivateRequestedAnimation(bool, unsigned int);
        void ResetRequestedAnimation();
        MayMove(int) const;
        bool IsDelayed(int) const;
        void ClearActiveAnimation();
        void ClearRequestedAnimation();
        void RememberAnimationPoint();

        // data members, from how the methods use this: 232 bytes
        int field_0; // offset 0
        char _unknown_4[4];
        int field_8; // offset 8
        char _unknown_12[4];
        shared_ptr field_16; // offset 16
        char _unknown_32[36];
        uint field_68; // offset 68
        char _unknown_72[16];
        bool field_88; // offset 88
        char _unknown_89[7];
        uint field_96; // offset 96
        char _unknown_100[20];
        int field_120; // offset 120
        char _unknown_124[52];
        undefined4 field_176; // offset 176
        uint field_180;       // offset 180
        char _unknown_184[16];
        undefined1 field_200; // offset 200
        char _unknown_201[2];
        undefined1 field_203; // offset 203
        int field_204;        // offset 204
        char _unknown_208[8];
        undefined1 field_216; // offset 216
        char _unknown_217[3];
        int field_220;        // offset 220
        undefined4 field_224; // offset 224
        char _unknown_228[4];
    };

    class AnimatedModel::ModelAnimationSet {
    public:
        InUse() const;
        void Reset();
        bool IsAnimationBuilt() const;
        IsDelayedAnimation(int) const;
        ulong HasStarted() const;
        IsReady(unsigned int, unsigned int);
        ModelAnimationSet();
        ModelAnimationSet* swap(ModelAnimationSet&);
        ~ModelAnimationSet();
        MayMove(int) const;

        // data members, from how the methods use this: 116 bytes
        uint field_0; // offset 0
        char _unknown_4[4];
        shared_ptr field_8; // offset 8
        char _unknown_24[32];
        uint field_56; // offset 56
        uint field_60; // offset 60
        char _unknown_64[18];
        undefined1 field_82; // offset 82
        char field_83;       // offset 83
        uint field_84;       // offset 84
        char _unknown_88[4];
        uint field_92; // offset 92
        char field_96; // offset 96
        char _unknown_97[3];
        uint field_100;       // offset 100
        uint field_104;       // offset 104
        undefined4 field_108; // offset 108
        char _unknown_112[4];
    };

    class AnimatedModelPair {
    public:
        ~AnimatedModelPair();
        AnimatedModelPair();

        // data members, from how the methods use this: 24 bytes
        char _unknown_0[24];
    };

    // 0x1003f1430, 16 bytes, inline, placed by class name and debug map
    // AnimatedModel::GetOverrideAnimation() const
    undefined1* AnimatedModel::GetOverrideAnimation() {
        return m_overrideAnimation;
    }

    // 0x1003f1440, 32 bytes, inline, placed by class name and debug map
    // AnimatedModel::UnSync()
    void AnimatedModel::UnSync() {
        (&field_1896)->UnSync();
    }

    // 0x1003f1460, 16 bytes, inline, placed by class name and debug map
    // AnimatedModel::GetDefaultAnimationSeqID() const
    undefined4 AnimatedModel::GetDefaultAnimationSeqID() {
        return m_defaultAnimationSeqID;
    }

    // 0x1003f1470, 16 bytes, inline, placed by class name and debug map
    // AnimatedModel::IsDefaultAnimationReadyAnim() const
    undefined1 AnimatedModel::IsDefaultAnimationReadyAnim() {
        return m_defaultAnimationReadyAnim;
    }

    // 0x1003f2600, 32 bytes, inline, placed by class name
    // AnimatedModel::RememberOverrideAnimationPoint()
    void AnimatedModel::RememberOverrideAnimationPoint() {
        (&field_1896)->RememberAnimationPoint();
    }

    // 0x1003f2620, 48 bytes, inline, placed by class name
    // AnimatedModel::SetParticleSoftFadeEnabled(bool)
    void AnimatedModel::SetParticleSoftFadeEnabled(bool param_1) {
        bool local_9;

        local_9 = param_1;
        eastl::optional<bool>::operator=((optional<bool>*)&field_2320, &local_9);
    }

    // 0x1003f2650, 48 bytes, inline, placed by class name
    // AnimatedModel::SetParticleShadowsEnabled(bool)
    void AnimatedModel::SetParticleShadowsEnabled(bool param_1) {
        bool local_9;

        local_9 = param_1;
        eastl::optional<bool>::operator=((optional<bool>*)&field_2322, &local_9);
    }

    // 0x1003f2b70, 32 bytes, inline, placed by class name
    // AnimatedModel::SetAnimationStateProviderOverride(shared_ptr<graphics::AnimationStateProvider> const&)
    void AnimatedModel::SetAnimationStateProviderOverride(shared_ptr* param_1) {
        shared_ptr<graphics::AnimationStateProvider>::operator=(
            (shared_ptr<graphics::AnimationStateProvider>*)field_2328, param_1);
    }

    // 0x1003f2ff0, 16 bytes, inline, placed by class name
    // AnimatedModel::GetParticleSystems() const
    undefined1* AnimatedModel::GetParticleSystems() {
        return &field_2144;
    }

    // 0x1003f3000, 16 bytes, inline, placed by class name
    // AnimatedModel::GetModularParticleSystems() const
    undefined1* AnimatedModel::GetModularParticleSystems() {
        return &field_2200;
    }

    // 0x1003f31e0, 16 bytes, inline, placed by class name
    // AnimatedModel::GetDefaultAnimation()
    undefined1* AnimatedModel::GetDefaultAnimation() {
        return m_defaultAnimation;
    }

    // 0x1003f31f0, 16 bytes, inline, placed by class name
    // AnimatedModel::GetDefaultAnimationRunCount() const
    int AnimatedModel::GetDefaultAnimationRunCount() {
        return m_defaultAnimationRunCount;
    }

    // 0x1003f3200, 16 bytes, inline, placed by class name
    // AnimatedModel::SetDefaultAnimationRunCount(int)
    void AnimatedModel::SetDefaultAnimationRunCount(int param_1) {
        m_defaultAnimationRunCount = param_1;
    }

    // 0x1003f41a0, 32 bytes, inline, placed by class name
    // AnimatedModel::RequestedOverrideAnimationIsPriority() const
    void AnimatedModel::RequestedOverrideAnimationIsPriority() {
        (&field_1896)->RequestedAnimationIsPriority();
    }

    // 0x1003f4bd0, 32 bytes, inline, placed by class name
    // AnimatedModel::MayMove(int) const
    void AnimatedModel::MayMove(int param_1) {
        (&field_1896, param_1)->MayMove();
    }

    // 0x1003f4cb0, 16 bytes, inline, placed by class name
    // AnimatedModel::GetOverrideAnimationRequestedSeqID() const
    int AnimatedModel::GetOverrideAnimationRequestedSeqID() {
        return m_overrideAnimationRequestedSeqID;
    }

    // 0x1003f4cc0, 16 bytes, inline, placed by class name
    // AnimatedModel::GetOverrideAnimationSeqID() const
    int AnimatedModel::GetOverrideAnimationSeqID() {
        return m_overrideAnimationSeqID;
    }

    // 0x1003f6a90, 16 bytes, inline, placed by class name
    // AnimatedModel::SetOverrideDelay(unsigned int)
    void AnimatedModel::SetOverrideDelay(uint param_1) {
        m_overrideDelay = param_1;
    }

    // 0x1003f6aa0, 16 bytes, inline, placed by class name
    // AnimatedModel::SetOverridePriority(unsigned int)
    void AnimatedModel::SetOverridePriority(uint param_1) {
        m_overridePriority = param_1;
    }

    // 0x100400000, 32 bytes, inline, placed by class name
    // AnimatedModel::AnimationDetails::UnSync()
    void AnimatedModel::AnimationDetails::UnSync() {
        (&field_184)->UnSync();
    }

    // 0x100401510, 32 bytes, inline, placed by class name
    // AnimatedModel::AnimationDetails::RequestedAnimationIsPriority() const
    undefined4 AnimatedModel::AnimationDetails::RequestedAnimationIsPriority() {
        return CONCAT31((int3)(field_180 >> 8), field_68 <= field_180);
    }

    // 0x100418bd0, 16 bytes, inline, placed by class name
    // AnimatedModel::GetOverrideAnimationModel() const
    undefined1* AnimatedModel::GetOverrideAnimationModel() {
        return m_overrideAnimationModel;
    }

    // 0x100418be0, 16 bytes, inline, placed by class name
    // AnimatedModel::GetDefaultAnimationModel() const
    undefined1* AnimatedModel::GetDefaultAnimationModel() {
        return m_defaultAnimationModel;
    }

    // 0x100418bf0, 32 bytes, inline, placed by class name
    // AnimatedModel::HasRequestedDefaultAnimation() const
    void AnimatedModel::HasRequestedDefaultAnimation() {
        (&field_1664)->HasRequestedAnimation();
    }

    // 0x100419c30, 48 bytes, inline, placed by class name
    // AnimatedModel::GetCurrentAnimation()
    undefined1* AnimatedModel::GetCurrentAnimation() {
        bool bVar1;
        undefined1* puVar2;

        bVar1 = m_overrideAnimation->operator_cast_to_bool();
        puVar2 = m_defaultAnimation;
        if (bVar1) {
            puVar2 = m_overrideAnimation;
        }
        return puVar2;
    }

    // 0x10041a320, 32 bytes, inline, placed by class name
    // AnimatedModel::HasParticleSystems()
    byte AnimatedModel::HasParticleSystems() {
        byte bVar1;

        bVar1 = (&field_2144)->empty();
        return bVar1 ^ 1;
    }

    // 0x10042c8d0, 64 bytes, inline, placed by class name
    // AnimatedModel::InUse() const
    undefined4 AnimatedModel::InUse() {
        char cVar1;
        undefined4 uVar2;

        cVar1 = (&field_1664)->InUse();
        uVar2 = 1;
        if (cVar1 == '\0') {
            uVar2 = (&field_1896)->InUse();
        }
        return uVar2;
    }

    // 0x10042edc0, 32 bytes, inline, placed by class name
    // AnimatedModel::IsDefaultAnimationInUse() const
    void AnimatedModel::IsDefaultAnimationInUse() {
        (&field_1664)->InUse();
    }

    // 0x10042ede0, 32 bytes, inline, placed by class name
    // AnimatedModel::IsOverrideAnimationInUse() const
    void AnimatedModel::IsOverrideAnimationInUse() {
        (&field_1896)->InUse();
    }

    // 0x10042f350, 16 bytes, inline, placed by class name
    // AnimatedModel::GetCurrentModel() const
    undefined1* AnimatedModel::GetCurrentModel() {
        return m_currentModel;
    }

    // 0x10042fe20, 64 bytes, inline, placed by class name
    // void AnimatedModel::DebugOutputAnimationState<char, eastl::fixed_vector_allocator<1ul, 512ul, 1ul, 0ul, true, eastl::allocator> >(eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 512ul, 1ul, 0ul, true, eastl::allocator> >&)
    void AnimatedModel::DebugOutputAnimationState<
        char, eastl::fixed_vector_allocator<1ul, 512ul, 1ul, 0ul, true, eastl::allocator>>(basic_string* param_1) {
        DebugOutputAnimationStateSingle<char,
                                        eastl::fixed_vector_allocator<1ul, 512ul, 1ul, 0ul, true, eastl::allocator>>(
            this, param_1, "anim", (ModelAnimationSet*)&m_defaultAnimationSeqID);
        DebugOutputAnimationStateSingle<char,
                                        eastl::fixed_vector_allocator<1ul, 512ul, 1ul, 0ul, true, eastl::allocator>>(
            this, param_1, "override", (ModelAnimationSet*)&m_overrideAnimationSeqID);
    }

    // 0x100431290, 48 bytes, inline, placed by class name
    // AnimatedModel::RestartOverrideAnimation(unsigned int)
    void AnimatedModel::RestartOverrideAnimation(uint param_1) {
        AnimationWrapper* this_00;

        this_00 = (AnimationWrapper*)shared_ptr<AnimationWrapper>::operator->(
            (shared_ptr<AnimationWrapper>*)m_overrideAnimation);
        this_00->Restart(param_1, 0);
    }

    // 0x1004312c0, 32 bytes, inline, placed by class name
    // AnimatedModel::HasRequestedOverrideAnimation() const
    void AnimatedModel::HasRequestedOverrideAnimation() {
        (&field_1896)->HasRequestedAnimation();
    }

    // 0x100431e30, 48 bytes, inline, placed by class name
    // AnimatedModel::AnimationDetails::InUse() const
    undefined4 AnimatedModel::AnimationDetails::InUse() {
        char cVar1;
        undefined4 uVar2;

        cVar1 = (&field_8)->InUse();
        uVar2 = 1;
        if (cVar1 == '\0') {
            uVar2 = (&field_120)->InUse();
        }
        return uVar2;
    }

    // 0x100431e60, 48 bytes, inline, placed by class name
    // AnimatedModel::ModelAnimationSet::InUse() const
    undefined4 AnimatedModel::ModelAnimationSet::InUse() {
        bool bVar1;
        undefined3 extraout_var;
        undefined4 uVar2;

        bVar1 = field_8->operator_cast_to_bool();
        uVar2 = CONCAT31(extraout_var, 1);
        if (!bVar1) {
            uVar2 = CONCAT31(extraout_var, field_0 != 4294967295);
        }
        return uVar2;
    }

    // 0x100432540, 16 bytes, inline, placed by class name
    // AnimatedModel::AnimationDetails::HasRequestedAnimation() const
    bool AnimatedModel::AnimationDetails::HasRequestedAnimation() {
        return field_120 != -1;
    }

    // 0x1004399e0, 368 bytes, inline, placed by class name
    // void AnimatedModel::DebugOutputAnimationStateSingle<char, eastl::fixed_vector_allocator<1ul, 512ul, 1ul, 0ul, true, eastl::allocator> >(eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 512ul, 1ul, 0ul, true, eastl::allocator> >&, char const*, AnimatedModel::ModelAnimationSet&)
    void AnimatedModel::DebugOutputAnimationStateSingle<
        char, eastl::fixed_vector_allocator<1ul, 512ul, 1ul, 0ul, true, eastl::allocator>>(basic_string* param_1,
                                                                                           char* param_2,
                                                                                           ModelAnimationSet* param_3) {
        uint uVar2;
        uint uVar3;
        uint uVar4;
        uint uVar5;
        uint uVar6;
        GraphicsApp* this_00;
        AnimationWrapper* this_01;
        AnimationParameters* this_02;
        undefined8 uVar7;
        undefined8 uVar8;
        Model* pMVar9;
        undefined8 uVar10;
        undefined1* puVar11;

        if (param_3->field_0 != 4294967295) {
            this_00 = (GraphicsApp*)Instance();
            uVar2 = this_00->GetFrameCount();
            if ((&param_3->field_64, uVar2)->IsCycleReady() == '\0') {
                uVar2 = param_3->field_0;
                puVar11 = &param_3->field_24;
                pMVar9 = (Model*)shared_ptr<graphics::Model>::operator->((shared_ptr<graphics::Model>*)puVar11);
                uVar3 = pMVar9->GetExternalID();
                pMVar9 = (Model*)shared_ptr<graphics::Model>::operator->((shared_ptr<graphics::Model>*)puVar11);
                uVar4 = pMVar9->GetModelRawUniqueID();
                uVar7 = puVar11->end();
                eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 512ul, 1ul, 0ul, true, eastl::allocator>>::
                    append_sprintf((char*)param_1, "\n%s[seq:%d ON %d(%d)] NOT READY %p", param_2, uVar2, (ulong)uVar3,
                                   (ulong)uVar4, uVar7);
            } else {
                this_01 = (AnimationWrapper*)shared_ptr<AnimationWrapper>::operator->(
                    (shared_ptr<AnimationWrapper>*)param_3->field_8);
                this_02 = (AnimationParameters*)this_01->GetAnimationParameters();
                uVar3 = this_02->GetTicksThroughAnimation();
                uVar4 = this_02->GetAnimationLength();
                uVar7 = this_02->GetCurrentIndex();
                uVar8 = this_02->GetFrameCount();
                uVar2 = param_3->field_0;
                puVar11 = &param_3->field_24;
                pMVar9 = (Model*)shared_ptr<graphics::Model>::operator->((shared_ptr<graphics::Model>*)puVar11);
                uVar5 = pMVar9->GetExternalID();
                pMVar9 = (Model*)shared_ptr<graphics::Model>::operator->((shared_ptr<graphics::Model>*)puVar11);
                uVar6 = pMVar9->GetModelRawUniqueID();
                uVar10 = puVar11->end();
                eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 512ul, 1ul, 0ul, true, eastl::allocator>>::
                    append_sprintf((char*)param_1, "\n%s[seq:%d %d/%d (%d of %d) ON %d(%d)] %p", param_2, (ulong)uVar2,
                                   (ulong)uVar3, (ulong)uVar4, uVar7, uVar8, (ulong)uVar5, (ulong)uVar6, uVar10);
            }
        }
    }

    // 0x100667000, 16 bytes, complete-object destructor, inline, placed by class name
    // AnimatedModel::AnimationDetails::~AnimationDetails(): jumps straight to the base-object destructor

    // 0x100667600, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // AnimatedModelPair::AnimatedModelPair(): jumps straight to the base-object constructor

    // 0x1006679f0, 320 bytes, inline, placed by class name
    // AnimatedModel::SetCurrentModel(shared_ptr<graphics::Model> const&)
    void AnimatedModel::SetCurrentModel(shared_ptr* param_1) {
        undefined1* this_00;
        Model* pMVar1;
        Model* this_01;
        MapSquare* this_02;
        Vector4T* pVVar2;
        AnimationStateProvider* pAVar3;
        AnimationState* this_03;
        bool bVar4;
        undefined1* this_04;
        shared_ptr local_48;
        float local_34;

        this_00 = m_currentModel;
        bVar4 = operator!=((shared_ptr*)this_00, param_1);
        if (bVar4) {
            bVar4 = shared_ptr::operator_cast_to_bool(param_1);
            if (bVar4) {
                pMVar1 = (Model*)shared_ptr<graphics::Model>::operator->((shared_ptr<graphics::Model>*)param_1);
                new (&local_48) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(0);
                pMVar1->SetGeometryQuery(&local_48);
                local_48.~shared_ptr();
            }
            bVar4 = this_00->operator_cast_to_bool();
            if (bVar4) {
                bVar4 = shared_ptr::operator_cast_to_bool(param_1);
                if (bVar4) {
                    pMVar1 = (Model*)shared_ptr<graphics::Model>::operator->((shared_ptr<graphics::Model>*)this_00);
                    pMVar1->ClearHighlight();
                    pMVar1 = (Model*)shared_ptr<graphics::Model>::operator->((shared_ptr<graphics::Model>*)param_1);
                    this_01 = (Model*)shared_ptr<graphics::Model>::operator->((shared_ptr<graphics::Model>*)this_00);
                    local_34 = (float)this_01->GetHighlightScale();
                    this_02 =
                        (MapSquare*)shared_ptr<graphics::Model>::operator->((shared_ptr<graphics::Model>*)this_00);
                    pVVar2 = (Vector4T*)this_02->GetMapSquarePointLights();
                    pMVar1->SetHighlight(local_34, pVVar2);
                }
            }
            this_04 = field_1584;
            pAVar3 = (AnimationStateProvider*)shared_ptr<graphics::AnimationState>::operator->(
                (shared_ptr<graphics::AnimationState>*)this_04);
            pAVar3->WaitForAsyncTasks();
            pAVar3 = (AnimationStateProvider*)shared_ptr<graphics::AnimationState>::operator->(
                (shared_ptr<graphics::AnimationState>*)this_04);
            pAVar3->InvalidateAsyncUpdate();
            this_03 = (AnimationState*)shared_ptr<graphics::AnimationState>::operator->(
                (shared_ptr<graphics::AnimationState>*)this_04);
            this_03->InvalidateSampled();
            shared_ptr<graphics::Model>::operator=((shared_ptr<graphics::Model>*)this_00, param_1);
        }
    }

    // 0x100667eb0, 16 bytes, inline, placed by class name
    // AnimatedModel::GetCachedAnimationKey(int, int)
    long AnimatedModel::GetCachedAnimationKey(int param_1, int param_2) {
        return (long)param_2 + ((ulong)(uint)param_1 << 32);
    }

    // 0x1006682c0, 64 bytes, inline, placed by class name
    // AnimatedModel::ModelAnimationSet::IsDelayedAnimation(int) const
    undefined8 AnimatedModel::ModelAnimationSet::IsDelayedAnimation(int param_1) {
        AnimationWrapper* this_00;
        undefined8 uVar2;

        if (field_8->operator_cast_to_bool()) {
            this_00 =
                (AnimationWrapper*)shared_ptr<AnimationWrapper>::operator->((shared_ptr<AnimationWrapper>*)field_8);
            uVar2 = this_00->IsDelayedAnimation(param_1);
        } else {
            uVar2 = 0;
        }
        return uVar2;
    }

    // 0x100668300, 96 bytes, inline, placed by class name
    // AnimatedModel::ModelAnimationSet::HasStarted() const
    ulong AnimatedModel::ModelAnimationSet::HasStarted() {
        bool bVar1;
        int iVar2;
        AnimationWrapper* pAVar3;
        AnimationParameters* this_00;
        MapArea* this_01;
        undefined1* this_02;
        undefined8 unaff_R14;
        undefined7 uVar5;
        ulong uVar4;

        this_02 = field_8;
        bVar1 = this_02->operator_cast_to_bool();
        uVar5 = (undefined7)((ulong)unaff_R14 >> 8);
        uVar4 = CONCAT71(uVar5, 1);
        if (bVar1) {
            pAVar3 =
                (AnimationWrapper*)shared_ptr<AnimationWrapper>::operator->((shared_ptr<AnimationWrapper>*)this_02);
            this_00 = (AnimationParameters*)pAVar3->GetAnimationParameters();
            iVar2 = this_00->GetTicksThroughAnimation();
            if (iVar2 < 1) {
                pAVar3 =
                    (AnimationWrapper*)shared_ptr<AnimationWrapper>::operator->((shared_ptr<AnimationWrapper>*)this_02);
                this_01 = (MapArea*)pAVar3->GetAnimationParameters();
                iVar2 = this_01->GetAdvisedZoom();
                uVar4 = CONCAT71(uVar5, iVar2 != 0);
            }
        }
        return uVar4 & 4294967295;
    }

    // 0x100668620, 144 bytes, inline, placed by class name
    // AnimatedModel::GetCurrentModel(unsigned int)
    undefined1* AnimatedModel::GetCurrentModel(uint param_1) {
        bool bVar1;
        char cVar2;
        undefined1* puVar3;

        bVar1 = m_overrideAnimation->operator_cast_to_bool();
        if ((bVar1) && (cVar2 = (&field_1968, param_1)->IsCycleReady(), cVar2 != '\0')) {
            return m_overrideAnimationModel;
        }
        bVar1 = m_defaultAnimation->operator_cast_to_bool();
        if (bVar1) {
            puVar3 = m_defaultAnimationModel;
        } else {
            cVar2 = (&field_1664)->HasRequestedAnimation();
            if ((cVar2 == '\0') && (cVar2 = (&field_1896)->HasRequestedAnimation(), cVar2 == '\0')) {
                return field_2128;
            }
            puVar3 = &graphics::Model::NullModel;
        }
        return puVar3;
    }

    // 0x100668a40, 64 bytes, inline, placed by class name
    // AnimatedModel::AnimationDetails::MayMove(int) const
    undefined8 AnimatedModel::AnimationDetails::MayMove(int param_1) {
        undefined8 uVar2;

        if ((&field_8, param_1)->MayMove() == '\0') {
            uVar2 = 0;
        } else {
            uVar2 = (&field_120, param_1)->MayMove();
        }
        return uVar2;
    }

    // 0x100669560, 16 bytes, inline, placed by class name
    // AnimatedModel::AnimationDetails::ClearActiveAnimation()
    void AnimatedModel::AnimationDetails::ClearActiveAnimation() {
        (&field_8)->Reset();
    }

    // 0x100669850, 16 bytes, complete-object destructor, inline, placed by class name
    // AnimatedModel::ModelAnimationSet::~ModelAnimationSet(): jumps straight to the base-object destructor

    // 0x100669860, 16 bytes, inline, placed by class name
    // AnimatedModel::AnimationDetails::ClearRequestedAnimation()
    void AnimatedModel::AnimationDetails::ClearRequestedAnimation() {
        (&field_120)->Reset();
    }

    // 0x10066a060, 48 bytes, base-object destructor, inline, placed by class name
    // AnimatedModel::AnimationDetails::~AnimationDetails()
    void AnimatedModel::AnimationDetails::~AnimationDetails() {
        (&field_120)->~ModelAnimationSet();
        (&field_8)->~ModelAnimationSet();
    }

    // 0x10066a520, 64 bytes, inline, placed by class name
    // AnimatedModel::ModelAnimationSet::MayMove(int) const
    undefined4 AnimatedModel::ModelAnimationSet::MayMove(int param_1) {
        AnimationWrapper* this_00;
        bool bVar1;
        undefined3 extraout_var;
        undefined4 uVar2;

        bVar1 = field_8->operator_cast_to_bool();
        uVar2 = CONCAT31(extraout_var, 1);
        if (bVar1) {
            this_00 =
                (AnimationWrapper*)shared_ptr<AnimationWrapper>::operator->((shared_ptr<AnimationWrapper>*)field_8);
            uVar2 = this_00->MayMove(param_1);
        }
        return uVar2;
    }

    // 0x10066a5a0, 128 bytes, base-object destructor, inline, placed by class name
    // AnimatedModel::ModelAnimationSet::~ModelAnimationSet()
    void AnimatedModel::ModelAnimationSet::~ModelAnimationSet() {
        (&field_64)->UnSync();
        (&field_64)->~ServerSyncingUser();
        (&field_40)->~shared_ptr();
        (&field_24)->~shared_ptr();
        field_8->~shared_ptr();
    }

} // namespace jag::game

namespace jag {
    class PendingSpotAnimation {
    public:
        PendingSpotAnimation(std::unique_ptr<SpotAnimation, MakeUniquePool<SpotAnimation, 64>::UniquePoolDeleter>);
        PendingSpotAnimation* operator=(PendingSpotAnimation&&);
        ~PendingSpotAnimation();
        PendingSpotAnimation(int);
        PendingSpotAnimation();
        PendingSpotAnimation(PendingSpotAnimation&&);

        // data members, from how the methods use this: 16 bytes
        char _unknown_0[16];
    };

    // 0x1003f1520, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // PendingSpotAnimation::PendingSpotAnimation(std::unique_ptr<SpotAnimation, MakeUniquePool<SpotAnimation, 64>::UniquePoolDeleter>): jumps straight to the base-object constructor

    // 0x1003f15f0, 48 bytes, inline, placed by debug map only (low confidence)
    // PendingSpotAnimation::operator=(PendingSpotAnimation&&)
    /* PendingSpotAnimation::TEMPNAMEPLACEHOLDERVALUE(PendingSpotAnimation&&) */

    PendingSpotAnimation* PendingSpotAnimation::operator=(PendingSpotAnimation* param_1) {
        std::swap<SpotAnimation, MakeUniquePool<SpotAnimation, 64>::UniquePoolDeleter>((unique_ptr*)this,
                                                                                       (unique_ptr*)param_1);
        (&field_8, (ServerSyncingUser*)&param_1->field_8)->swap();
        return this;
    }

    // 0x1003f1620, 16 bytes, complete-object destructor, inline, placed by debug map only (low confidence)
    // PendingSpotAnimation::~PendingSpotAnimation(): jumps straight to the base-object destructor

    // 0x1003f1770, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // PendingSpotAnimation::PendingSpotAnimation(int): jumps straight to the base-object constructor

} // namespace jag
