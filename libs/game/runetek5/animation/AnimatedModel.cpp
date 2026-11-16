// libs/game/runetek5/animation/AnimatedModel.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.runetek5

#include "AnimatedModel.h"

namespace jag::game {
    // 0x100009e70: AnimatedModel::OnOverrideAnimationFinished(int) has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

    // 0x100029ea0: AnimatedModel::RepeatLastOverrideAnimationFrameWhenFinished(int) const has the same machine code as oldscape::InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long)

    // 0x100666c90
    AnimatedModel::AnimatedModel(graphics::RT7Core& rt7Core, AssetBuilder& assetBuilder,
                                 const ConfigProvider& configProvider,
                                 graphics::AnimationLoopBehaviour animationLoopBehaviour, bool arg5,
                                 const std::function<void(int, int, int, int, int, int)>& callback)
        : field_24(rt7Core), field_32(assetBuilder), field_40(configProvider), field_48(16, "AnimatedModel") {
        MakeSharedPool<graphics::AnimationState, 256>::MakeShared<>();
        field_1600 = arg5;
        field_1604 = animationLoopBehaviour;
        new (&field_1616) std::function<void(int, int, int, int, int, int)>(callback);
        new (&field_1664) AnimationDetails(0);
        new (&field_1896) AnimationDetails(1);
        new (field_2128) shared_ptr();
        new (&field_2144) eastl::fixed_vector<shared_ptr<graphics::ParticleSystem>, 1ul>();
        new (&field_2200) eastl::vector<shared_ptr<graphics::ModularParticleSystem>>();
        uint64_t uVar1 = *(uint64_t*)PTR_IDENTITY_100ee6730;
        uint64_t uVar2 = *(uint64_t*)(PTR_IDENTITY_100ee6730 + 8);
        uint64_t uVar3 = *(uint64_t*)(PTR_IDENTITY_100ee6730 + 16);
        uint64_t uVar4 = *(uint64_t*)(PTR_IDENTITY_100ee6730 + 24);
        uint64_t uVar5 = *(uint64_t*)(PTR_IDENTITY_100ee6730 + 32);
        uint64_t uVar6 = *(uint64_t*)(PTR_IDENTITY_100ee6730 + 40);
        uint64_t uVar7 = *(uint64_t*)(PTR_IDENTITY_100ee6730 + 56);
        field_2288 = *(uint64_t*)(PTR_IDENTITY_100ee6730 + 48);
        field_2296 = uVar7;
        field_2272 = uVar5;
        field_2280 = uVar6;
        field_2256 = uVar3;
        field_2264 = uVar4;
        field_2240 = uVar1;
        field_2248 = uVar2;
        new (m_currentModel) shared_ptr();
        new (&field_2320) eastl::optional();
        new (&field_2322) eastl::optional();
        new (field_2328) shared_ptr();
        field_2344 = 0;
    }

    // 0x100667030
    AnimatedModel::~AnimatedModel() {
        Destruct();
        field_2328->~shared_ptr();
        m_currentModel->~shared_ptr();
        field_2200.~vector();
        field_2144.~fixed_vector();
        field_2128->~shared_ptr();
        field_1896.~AnimationDetails();
        field_1664.~AnimationDetails();
        field_1616.~function();
        field_1584.~shared_ptr();
        field_48.~LRUHashCache();
        field_8.~weak_ptr();
    }

    // 0x100667160
    void AnimatedModel::Destruct() {

        field_48.Reset();
        ((AnimationState*)field_1584.operator->())->ClearState();
        field_1896.ClearAllAnimations();
        field_1664.ClearAllAnimations();
        field_2144.clear();
        field_2200.clear();
        if (!(InUse())) {
            if (m_currentModel->operator_cast_to_bool()) {
                m_currentModel->reset();
            }
        }
        if (field_2128->operator_cast_to_bool()) {
            field_2128->reset();
        }
    }

    // 0x100667260
    void AnimatedModel::AnimationDetails::ClearAllAnimations() {
        ClearActiveAnimation();
        ClearRequestedAnimation();
    }

    // 0x100667280
    void AnimatedModel::SetOverrideSourceTicks(unsigned int arg1, unsigned int arg2) {
        m_overrideSourceTicks = arg1;
        field_2108 = arg2;
    }

    // 0x1006672a0
    bool AnimatedModel::Build(unsigned int arg1, unsigned int arg2, bool arg3, int arg4) {
        uint8_t* this_00;
        Model* pMVar4;
        vector<shared_ptr<graphics::ModelParticleSource>>* modelParticleSources;
        shared_ptr<graphics::ParticleSystem>* this_01;
        shared_ptr<graphics::ParticleSystem>* psVar5;
        uint8_t local_58[36];

        auto plVar3 = GraphicsApp::Instance();
        bool cVar2 = (**(void (**)(...))(*plVar3 + 224))(plVar3);
        if (!cVar2) {
            LogAssert("GraphicsApp::Instance()->IsInsideMainLogic()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/animation/"
                      "AnimatedModel.cpp",
                      136, nullptr);
        }
        uint8_t* puVar1 = &field_1896;
        cVar2 = puVar1->HasRequestedAnimation();
        if ((!cVar2) && (cVar2 = field_1664.HasRequestedAnimation(), !cVar2)) {
            cVar2 = m_currentModel->operator_cast_to_bool();
            if ((!cVar2) && (cVar2 = InUse(), !cVar2)) {
                new (local_58) AnimatedModelPair();
                cVar2 = (*this->_vptr[1]._dtor)(this, (AnimatedModelPair*)local_58, 4294967295);
                if (cVar2) {
                    *field_2128 = *local_58;
                    SetCurrentModel(*local_58);
                }
            LAB_1006674d9:
            }
        } else {
            cVar2 = puVar1->HasRequestedAnimation();
            if ((cVar2) && (cVar2 = field_2080.CanBuild(), cVar2)) {
                new (local_58) AnimatedModelPair();
                cVar2 = (*this->_vptr[1]._deleting_dtor)(
                    this, local_58, (unsigned long)(unsigned int)m_overrideAnimationRequestedSeqID);
                if (cVar2) {
                    ServiceAnimationLoading(*puVar1, true, arg1, arg2, *local_58, *((local_58 + 16)), arg4);
                }
            }
            cVar2 = field_1664.HasRequestedAnimation();
            if (((cVar2) && (!arg3)) && (cVar2 = field_1848.CanBuild(), cVar2)) {
                new (local_58) AnimatedModelPair();
                cVar2 = (*this->_vptr[1]._dtor)(this, (AnimatedModelPair*)local_58,
                                                (unsigned long)(unsigned int)field_1784);
                if (cVar2) {
                    *field_2128 = *local_58;
                    cVar2 = field_2128->operator_cast_to_bool();
                    if (!cVar2) {
                        m_defaultAnimationSeqID.Reset();
                        field_1784.Reset();
                        m_overrideAnimationSeqID.Reset();
                        m_overrideAnimationRequestedSeqID.Reset();
                        m_currentModel->reset();
                    } else {
                        ServiceAnimationLoading(field_1664, false, arg1, arg2, *local_58, *((local_58 + 16)), arg4);
                    }
                }
                goto LAB_1006674d9;
            }
        }
        UpdateAnimationsState(arg1, arg2, arg4);
        puVar1 = m_currentModel;
        cVar2 = puVar1->operator_cast_to_bool();
        if (!cVar2) {
            field_2144.clear();
        } else {
            pMVar4 = (Model*)(*puVar1).operator->();
            cVar2 = pMVar4->HasParticleEmitters();
            this_00 = &field_2144;
            if (!cVar2) {
                this_00->clear();
            } else {
                cVar2 = this_00->empty();
                if (!cVar2) {
                    pMVar4 = (Model*)(*puVar1).operator->();
                    modelParticleSources =
                        (vector<shared_ptr<graphics::ModelParticleSource>>*)pMVar4->GetParticleEmitters();
                    this_01 = (shared_ptr<graphics::ParticleSystem>*)this_00->HeapBeginPtr();
                    psVar5 = (shared_ptr<graphics::ParticleSystem>*)this_00->end();
                    for (; this_01 != psVar5; this_01 = this_01 + 16) {
                        ((ParticleSystem*)(*this_01).operator->())->KeepActiveParticleEmitters(*modelParticleSources);
                    }
                }
            }
            pMVar4 = (Model*)(*puVar1).operator->();
            cVar2 = pMVar4->HasVFXs();
            if (cVar2)
                goto LAB_1006675b4;
        }
        field_2200.clear();
    LAB_1006675b4:
        field_48.Clean(1000);
        return puVar1->end() != 0;
    }

    // 0x100667610
    void AnimatedModel::ServiceAnimationLoading(AnimatedModel::AnimationDetails& animationDetails, bool arg2,
                                                unsigned int arg3, int arg4, const shared_ptr<graphics::Model>& model1,
                                                const shared_ptr<graphics::Model>& model2, int arg7) {
        int* piVar1;
        uint32_t* this_01;
        int iVar5;
        shared_ptr* this_03;
        AnimationWrapper* pAVar6;
        uint64_t in_register_00000011;
        MakeSharedPool<AnimationWrapper, 512> local_80;
        int* local_70;
        shared_ptr<graphics::Model>* local_68;
        int local_5c;
        unsigned int local_54;
        unsigned int local_44;
        bool local_31;

        uint32_t local_38 = (uint32_t)(((uint64_t)in_register_00000011 << 8) | (uint8_t)arg2);
        if (animationDetails.field_120 == -1) {
            LogAssert("animationDetails.m_requested.m_seqID != -1",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/animation/"
                      "AnimatedModel.cpp",
                      302, nullptr);
        }
        unsigned int arg2_00 = ((Model*)model2.operator->())->GetModelRawUniqueID();
        animationDetails.field_144 = model1;
        shared_ptr<graphics::Model>* this_06 = (shared_ptr<graphics::Model>*)&animationDetails.field_160;
        *this_06 = model2;
        uint8_t* this_00 = &animationDetails.field_128;
        bool cVar4 = this_00->operator_cast_to_bool();
        AnimatedModel* pAVar2 = this;
        AnimationDetails* local_50 = animationDetails;
        if (!cVar4) {
            local_70 = &animationDetails.field_120;
            local_68 = this_06;
            local_54 = arg2_00;
            local_44 = arg4;
            this_03 = (shared_ptr*)GetCachedAnimation(this, *local_70, arg2_00);
            cVar4 = shared_ptr::operator_cast_to_bool(this_03);
            piVar1 = local_70;
            if (!cVar4) {
                local_5c = 0;
                local_31 = (bool)(((uint8_t)local_38 ^ 1) & pAVar2->field_1600 != false);
                MakeSharedPool<AnimationWrapper, 512>::MakeShared<AssetBuilder&, ConfigProvider const&, int&, int,
                                                                  graphics::AnimationLoopBehaviour&, bool, bool&>(
                    &local_80, pAVar2->field_32, pAVar2->field_40, local_70, &local_5c, &pAVar2->field_1604, &local_31,
                    (bool*)&animationDetails.field_201);
                *this_00 = local_80;
                pAVar6 = (AnimationWrapper*)(*this_00).operator->();
                pAVar6->SetAudioTrigger(pAVar2->field_1616);
                arg2_00 = local_54;
                PutCachedAnimation(pAVar2, (shared_ptr<AnimationWrapper>*)this_00, local_54);
            } else {
                *this_00 = *this_03;
                if (((char)local_38 != '\0') && (local_50->field_216 == '\0')) {
                    pAVar6 = (AnimationWrapper*)(*this_00).operator->();
                    pAVar6->Restart(local_44, local_50->field_176);
                }
                iVar5 = ((CommandLine*)(*this_00).operator->())->GetPos();
                arg2_00 = local_54;
                if (iVar5 != *piVar1) {
                    LogAssert("requestedModelSet.m_animation->GetSourceID() == requestedModelSet.m_seqID",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                              "animation/AnimatedModel.cpp",
                              326, nullptr);
                }
            }
            arg4 = local_44;
            this_06 = local_68;
            pAVar6 = (AnimationWrapper*)(*this_00).operator->();
            pAVar6->SetReadyAnim(~(uint8_t)local_38 & local_50->field_200 != '\0');
        }
        pAVar6 = (AnimationWrapper*)(*this_00).operator->();
        cVar4 = pAVar6->Build(*field_40, arg2_00, *this_06, arg4);
        uint32_t uVar3 = local_38;
        if (!cVar4) {
            return;
        }
        local_50->field_184.SetReady(true);
        pAVar2 = this;
        bool arg1 = (uint8_t)uVar3;
        cVar4 = arg1;
        if (arg1 == false) {
            cVar4 = HasRequestedOverrideAnimation(this);
            if (!cVar4) {
                this_01 = &pAVar2->m_overrideAnimationSeqID;
                cVar4 = this_01->IsDelayedAnimation(arg7);
                if (cVar4)
                    goto LAB_1006678ca;
                cVar4 = this_01->HasStarted();
            } else {
                cVar4 = pAVar2->m_overrideAnimationRequestedSeqID.IsDelayedAnimation(arg7);
            }
        }
        if (!cVar4) {
            return;
        }
    LAB_1006678ca:
        if (arg1 != false) {
            cVar4 = m_overrideAnimationSeqID.InUse();
            if ((cVar4) && (cVar4 = m_overrideAnimationRequestedSeqID.IsReady(arg3, arg4), !cVar4)) {
                return;
            }
            if (arg1 != false) {
                if (field_2000 == '\0') {
                    ((AnimationState*)field_1584.operator->())->ClearState();
                }
                piVar1 = &local_50->field_8;
                cVar4 = piVar1->InUse();
                if (cVar4) {
                    this->OnOverrideAnimationFinished((unsigned long)(unsigned int)*piVar1);
                }
            }
        }
        local_50->ActivateRequestedAnimation(arg1, arg4);
    }

    // 0x100667980
    void AnimatedModel::ModelAnimationSet::Reset() {
        field_0 = -1;
        field_8->reset();
        field_24.reset();
        field_40.reset();
        field_56 = 0;
        field_60 = 5;
        field_64.UnSync();
        field_92 = 0;
        field_96 = '\0';
        field_100 = 0;
        field_104 = 0;
        field_108 = 0;
        field_80 = 0;
        field_81 = 0;
        field_82 = 0;
        field_83 = '\0';
        field_84 = 0;
    }

    // 0x100667b30
    void AnimatedModel::UpdateAnimationsState(unsigned int arg1, unsigned int arg2, int arg3) {
        uint8_t* this_00;
        unsigned int uVar1;
        AnimationWrapper* pAVar3;

        if (field_1896.IsReady(arg1, arg2)) {
            pAVar3 = (AnimationWrapper*)(*m_overrideAnimation).operator->();
            pAVar3->Update(arg2, arg3);
            pAVar3 = (AnimationWrapper*)(*m_overrideAnimation).operator->();
            if (pAVar3->IsFinished()) {
                uVar1 = m_overrideAnimationSeqID;
                if (!(RepeatLastOverrideAnimationFrameWhenFinished((unsigned long)uVar1))) {
                    ((AnimationState*)field_1584.operator->())->ClearState();
                    field_1896.ClearActiveAnimation();
                    OnOverrideAnimationFinished((unsigned long)uVar1);
                }
            }
        }
        if (field_1664.IsReady(arg1, arg2)) {
            this_00 = m_defaultAnimation;
            pAVar3 = (AnimationWrapper*)(*this_00).operator->();
            pAVar3->Update(arg2, arg3);
            pAVar3 = (AnimationWrapper*)(*this_00).operator->();
            if (pAVar3->IsFinished()) {
                pAVar3 = (AnimationWrapper*)(*this_00).operator->();
                pAVar3->Reset(arg2, 0);
                m_defaultAnimationRunCount = m_defaultAnimationRunCount + 1;
            }
        }
        ApplyAnimationStateToModel(arg1, arg2, arg3);
    }

    // 0x100667ce0
    bool AnimatedModel::IsReady(unsigned int arg1, unsigned int arg2) {
        bool cVar1;
        uint32_t uVar2;

        if ((m_overrideAnimationRequestedSeqID != -1) && (cVar1 = field_1896.IsReady(arg1, arg2), cVar1)) {
            return 1;
        }
        if (field_1784 == -1) {
            uVar2 = 1;
        } else {
            uVar2 = field_1664.IsReady(arg1, arg2);
        }
        return uVar2;
    }

    // 0x100667d50
    void AnimatedModel::AnimationDetails::IsReady(unsigned int arg1, unsigned int arg2) {
        field_8.IsReady(arg1, arg2);
    }

    // 0x100667d60
    bool AnimatedModel::IsLoaded() const {
        uint8_t* this_00;
        Model* pMVar2;

        bool cVar1 = field_1896.IsActiveAnimationLoaded();
        if ((cVar1) || (cVar1 = field_1664.IsActiveAnimationLoaded(), cVar1)) {
            this_00 = m_currentModel;
            cVar1 = this_00->operator_cast_to_bool();
            if (!cVar1) {
                cVar1 = field_2128->operator_cast_to_bool();
                if (!cVar1) {
                    return 1;
                }
            }
            cVar1 = this_00->operator_cast_to_bool();
            if (cVar1) {
                pMVar2 = (Model*)(*this_00).operator->();
                cVar1 = pMVar2->IsReadyToRender();
                if (cVar1) {
                    return 1;
                }
            }
            cVar1 = field_2128->operator_cast_to_bool();
            if (cVar1) {
                pMVar2 = (Model*)(*field_2128).operator->();
                return pMVar2->IsReadyToRender();
            }
        }
        return 0;
    }

    // 0x100667e10
    void AnimatedModel::AnimationDetails::IsActiveAnimationLoaded() const {
        field_8.IsAnimationBuilt();
    }

    // 0x100667e20
    bool AnimatedModel::ModelAnimationSet::IsAnimationBuilt() const {
        bool cVar1 = InUse();
        bool bVar2 = true;
        if (cVar1) {
            cVar1 = field_8->operator_cast_to_bool();
            if (cVar1) {
                cVar1 = ((AnimationWrapper*)(*field_8).operator->())->IsReady();
                if (cVar1) {
                    return field_83 != '\0';
                }
            }
            bVar2 = false;
        }
        return bVar2;
    }

    // 0x100667e80
    void AnimatedModel::GetCachedAnimation(int arg1, int arg2) {
        field_48.Find(GetCachedAnimationKey(arg1, arg2));
    }

    // 0x100667f60
    void AnimatedModel::PutCachedAnimation(const shared_ptr<AnimationWrapper>& animationWrapper, unsigned int arg2) {
        if (animationWrapper.end() == 0) {
            LogAssert("animationWrapper.get() != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/animation/"
                      "AnimatedModel.cpp",
                      294, nullptr);
        }
        unsigned long long local_28 =
            GetCachedAnimationKey(((CommandLine*)animationWrapper.operator->())->GetPos(), arg2);
        field_48.Put(animationWrapper, 1, local_28);
    }

    // 0x100668360
    bool AnimatedModel::ModelAnimationSet::IsReady(unsigned int arg1, unsigned int arg2) {
        uint8_t* this_01;
        unsigned char uVar1;
        unsigned int arg3;
        unsigned int arg2_00;
        unsigned int uVar4;

        uint8_t* this_00 = field_8;
        if (!(this_00->operator_cast_to_bool())) {
            return 0;
        }
        AnimationWrapper* pAVar3 = (AnimationWrapper*)(*this_00).operator->();
        if (!(pAVar3->IsReady())) {
            return 0;
        }
        if (field_82 == '\0') {
            if (field_83 != '\0') {
                return 1;
            }
            field_83 = '\x01';
            uVar1 = field_96;
            pAVar3 = (AnimationWrapper*)(*this_00).operator->();
            if (uVar1 == '\0') {
                uVar4 = field_56;
                goto LAB_100668450;
            }
            uVar4 = field_56;
            arg2_00 = field_100;
            arg3 = field_104;
        } else {
            this_01 = &field_64;
            this_01->SetReady(true);
            if (!(this_01->IsCycleReady(arg1))) {
                return 0;
            }
            if (field_83 != '\0') {
                return 1;
            }
            this_01->UnSync();
            field_83 = '\x01';
            uVar1 = field_96;
            pAVar3 = (AnimationWrapper*)(*this_00).operator->();
            if (uVar1 == '\0') {
                uVar4 = field_56;
            LAB_100668450:
                pAVar3->Reset(arg2, uVar4);
                goto LAB_100668458;
            }
            uVar4 = field_56;
            arg2_00 = field_100;
            arg3 = field_104;
        }
        pAVar3->ResetToTime(arg2, arg2_00, arg3, uVar4);
    LAB_100668458:
        field_56 = 0;
        return 1;
    }

    // 0x100668470
    void AnimatedModel::AnimationDetails::ActivateRequestedAnimation(bool arg1, unsigned int arg2) {
        int iVar2;
        int iVar3;
        NXTPixToolkit* pNVar4;
        shared_ptr<SeqType>* this_01;
        AnimationWrapper* pAVar5;

        int* modelAnimationSet = &field_120;
        if (field_120 != -1) {
            pNVar4 = (NXTPixToolkit*)field_128.operator->();
            if ((pNVar4->GetScreen())->operator_cast_to_bool()) {
                pNVar4 = (NXTPixToolkit*)field_128.operator->();
                this_01 = (shared_ptr<SeqType>*)pNVar4->GetScreen();
                iVar2 = ((GameToken*)(*this_01).operator->())->GetStatus();
                if (iVar2 == *modelAnimationSet) {
                    iVar2 = arg2 - field_204;
                    if (arg1) {
                        field_216 = 1;
                        field_220 = iVar2;
                    } else if (field_8 == field_120) {
                        field_216 = 1;
                        if (!(field_16->operator_cast_to_bool())) {
                            field_220 = 0;
                        } else {
                            pAVar5 = (AnimationWrapper*)(*field_16).operator->();
                            iVar3 =
                                ((AnimationParameters*)pAVar5->GetAnimationParameters())->GetTicksThroughAnimation();
                            if (field_220 < iVar3) {
                                field_220 = iVar3;
                            }
                        }
                    }
                    field_8.swap(*modelAnimationSet);
                    modelAnimationSet->Reset();
                    pAVar5 = (AnimationWrapper*)(*field_16).operator->();
                    pAVar5->SetReadyAnim(field_88);
                    field_96 = arg2;
                    ((PlayerGroupMember*)(*field_16).operator->())->SetStatus(iVar2 + 1);
                    return;
                }
            }
        }
        LogAssert("m_requested.m_seqID != -1 && m_requested.m_animation->GetSource() && "
                  "(int)m_requested.m_animation->GetSource()->GetMyID() == m_requested.m_seqID",
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/animation/"
                  "AnimatedModel.cpp",
                  915, nullptr);
    }

    // 0x1006685d0
    void AnimatedModel::ResetAnimationState(unsigned int arg1) {
        ((AnimationState*)field_1584.operator->())->ClearState();
        auto this_02 = GetCurrentModel(arg1);
        if (shared_ptr::operator_cast_to_bool(this_02) != '\0') {
            ((Model*)(*this_02).operator->())->ClearAnimationState();
        }
    }

    // 0x1006686b0
    void AnimatedModel::ResetOverrideAnimation() {
        unsigned int uVar1 = m_overrideAnimationSeqID;
        field_1896.ClearAllAnimations();
        ((AnimationState*)field_1584.operator->())->ClearState();
        if (uVar1 != 4294967295) {
            OnOverrideAnimationFinished((unsigned long)uVar1);
        }
    }

    // 0x100668700
    void AnimatedModel::ResetDefaultAnimation() {
        field_1664.ClearAllAnimations();
        ((AnimationState*)field_1584.operator->())->ClearState();
    }

    // 0x100668740
    char* AnimatedModel::ToString() const {
        long* plVar2;
        char* pcVar3;

        shared_ptr local_20 = field_8.lock();
        if (shared_ptr::operator_cast_to_bool(&local_20) == '\0') {
            pcVar3 = "AnimatedModel";
        } else {
            plVar2 = (long*)local_20.operator->();
            pcVar3 = (char*)(**(void (**)(...))(*plVar2 + 248))(plVar2);
        }
        return pcVar3;
    }

    // 0x1006687f0
    unsigned long AnimatedModel::RequestOverrideAnimation(bool arg1, int arg2, int arg3, bool arg4) {
        uint8_t* this_00;
        int iVar1;
        bool cVar2;
        int iVar3;
        uint64_t unaff_R14;
        unsigned long uVar4;

        if (arg2 != -1) {
            uVar4 = (((uint64_t)((int64_t)((unsigned long)unaff_R14 >> 8)) << 8) | (uint8_t)1);
            if (m_overrideAnimationRequestedSeqID == arg2)
                goto LAB_1006688fa;
            iVar1 = m_overrideAnimationSeqID;
            this_00 = m_overrideAnimation;
            cVar2 = this_00->operator_cast_to_bool();
            iVar3 = -1;
            if (cVar2) {
                iVar3 = ((CommandLine*)(*this_00).operator->())->GetPos();
            }
            if (iVar1 != iVar3) {
                LogAssert("m_overrideAnimation.m_active.m_seqID == (m_overrideAnimation.m_active.m_animation ? "
                          "m_overrideAnimation.m_active.m_animation->GetSourceID() : -1)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                          "animation/AnimatedModel.cpp",
                          480, nullptr);
            }
            cVar2 = this_00->operator_cast_to_bool();
            if ((!cVar2) || (m_overrideAnimationSeqID != arg2)) {
                if (arg3 == 0) {
                    arg3 = m_overrideDelay;
                }
                field_1896.ResetRequestedAnimation();
                field_2024.reset();
                m_overrideAnimationRequestedSeqID = arg2;
                m_overrideDelay = arg3;
                field_2097 = arg4;
                if ((arg1) && (field_2108 != 0)) {
                    field_2098 = 1;
                    field_2080.Sync(field_2108);
                }
                goto LAB_1006688fa;
            }
        }
        uVar4 = 0;
    LAB_1006688fa:
        return uVar4 & 4294967295;
    }

    // 0x100668910
    void AnimatedModel::AnimationDetails::ResetRequestedAnimation() {
        field_120 = -1;
        field_176 = 0;
        field_203 = 0;
        field_200 = 0;
        field_184.UnSync();
    }

    // 0x100668990
    unsigned long AnimatedModel::IsOverrideBlockingMovement(int arg1) const {
        uint8_t extraout_AL;
        uint64_t extraout_var;
        shared_ptr* this_00;
        SeqType* this_01;
        uint64_t uVar2;
        uint64_t uVar3;
        uint8_t bVar4;

        bool cVar1 = m_overrideAnimationSeqID.InUse();
        if (!cVar1) {
            cVar1 = m_overrideAnimationRequestedSeqID.InUse();
            if ((cVar1) && (m_overrideDelay == 0)) {
                this_00 = (shared_ptr*)field_40->GetConfig<SeqType>(m_overrideAnimationRequestedSeqID, nullptr);
                cVar1 = shared_ptr::operator_cast_to_bool(this_00);
                if (cVar1) {
                    this_01 = (SeqType*)(*this_00).operator->();
                    if (arg1 < 1) {
                        uVar2 = this_01->GetPostanimMove();
                    } else {
                        uVar2 = this_01->GetPreanimMove();
                    }
                    bVar4 = (int)uVar2 == 0;
                    uVar3 = (uint64_t)((unsigned long)uVar2 >> 8);
                    goto LAB_100668a36;
                }
            }
        } else if (*(int*)&field_1960 == 0) {
            field_1896.MayMove(arg1);
            bVar4 = extraout_AL ^ 1;
            uVar3 = extraout_var;
            goto LAB_100668a36;
        }
        bVar4 = 0;
        uVar3 = 0;
    LAB_100668a36:
        return bVar4 & 18446744073709551361;
    }

    // 0x100668b90
    void AnimatedModel::RequestDefaultAnimation(int arg1, bool arg2, bool arg3) {
        auto model = m_defaultAnimationModel->end();
        RequestDefaultAnimation(arg1, arg2, model, true, arg3);
    }

    // 0x100668be0
    void AnimatedModel::RequestDefaultAnimation(int arg1, bool arg2, const graphics::Model* model, bool arg4,
                                                bool arg5) {
        Model* pMVar1;
        int iVar3;
        int iVar4;

        if (arg1 != -1) {
            if (!arg5) {
                if ((m_defaultAnimationSeqID == arg1) && (model != nullptr)) {
                    if (m_defaultAnimationModel->operator_cast_to_bool()) {
                        iVar3 = model->GetExternalID();
                        pMVar1 = (Model*)(*m_defaultAnimationModel).operator->();
                        iVar4 = pMVar1->GetExternalID();
                        if (iVar3 == iVar4) {
                            m_defaultAnimationReadyAnim = arg2;
                            ((AnimationWrapper*)(*m_defaultAnimation).operator->())->SetReadyAnim(arg2);
                            return;
                        }
                    }
                }
                if ((field_1784 == arg1) && (model != nullptr)) {
                    if (field_1808->operator_cast_to_bool()) {
                        iVar3 = model->GetExternalID();
                        pMVar1 = (Model*)(*field_1808).operator->();
                        iVar4 = pMVar1->GetExternalID();
                        if (iVar3 == iVar4) {
                            field_1864 = arg2;
                            return;
                        }
                    }
                }
            }
            field_1792.reset();
            field_1784 = arg1;
            field_1864 = arg2;
            field_1865 = arg4;
        }
    }

    // 0x100668d00
    void AnimatedModel::TranslateParticles(const math::Vector3T<float>& vector3) {
        auto this_00 = field_2144.HeapBeginPtr();
        auto psVar1 = field_2144.end();
        for (; this_00 != psVar1; this_00 = this_00 + 16) {
            ((ParticleSystem*)(*this_00).operator->())->TranslateParticles(vector3);
        }
        auto this_02 = field_2200.HeapBeginPtr();
        auto psVar2 = field_2200.end();
        for (; this_02 != psVar2; this_02 = this_02 + 16) {
            ((ModularParticleSystem*)(*this_02).operator->())->TranslateParticles(vector3);
        }
    }

    // 0x100668db0
    void AnimatedModel::SetPointLightBounds(const math::Vector3T<float>& vector3, int arg2, int arg3) {
        auto this_01 = GetCurrentModel();
        if (shared_ptr::operator_cast_to_bool(this_01) != '\0') {
            ((Model*)(*this_01).operator->())->SetPointLightBounds(vector3, arg2, arg3);
        }
    }

    // 0x100668e00
    void AnimatedModel::GatherDrawableElements(graphics::DrawableQueue& drawableQueue, graphics::RT7Core& rt7Core,
                                               const graphics::SceneViewData& sceneViewData,
                                               const graphics::EffectManager& effectManager) {
        Model* pMVar2;
        shared_ptr<graphics::ParticleSystem>* this_01;
        shared_ptr<graphics::ParticleSystem>* psVar3;
        long* plVar4;
        shared_ptr<graphics::ModularParticleSystem>* this_02;
        shared_ptr<graphics::ModularParticleSystem>* psVar5;

        auto this_00 = GetCurrentModel();
        if (shared_ptr::operator_cast_to_bool(this_00) != '\0') {
            pMVar2 = (Model*)(*this_00).operator->();
            pMVar2->SetWorldTransform(field_2240);
            this_01 = (shared_ptr<graphics::ParticleSystem>*)field_2144.HeapBeginPtr();
            psVar3 = (shared_ptr<graphics::ParticleSystem>*)field_2144.end();
            for (; this_01 != psVar3; this_01 = this_01 + 16) {
                plVar4 = (long*)(*this_01).operator->();
                (**(void (**)(...))(*plVar4 + 16))(plVar4, drawableQueue, rt7Core, sceneViewData, effectManager);
            }
            this_02 = (shared_ptr<graphics::ModularParticleSystem>*)field_2200.HeapBeginPtr();
            psVar5 = (shared_ptr<graphics::ModularParticleSystem>*)field_2200.end();
            for (; this_02 != psVar5; this_02 = this_02 + 16) {
                plVar4 = ((ModularParticleSystem*)(*this_02).operator->())->GetDrawable();
                (**(void (**)(...))(*plVar4 + 16))(plVar4, drawableQueue, rt7Core, sceneViewData, effectManager);
            }
            pMVar2 = (Model*)(*this_00).operator->();
            pMVar2->GatherDrawableElements(drawableQueue, rt7Core, sceneViewData, effectManager);
        }
    }

    // 0x100668f40
    void AnimatedModel::ApplyAnimationStateToModel(unsigned int arg1, unsigned int arg2, int arg3) {
        int iVar1;
        uint8_t bVar3;
        uint64_t uVar4;
        unsigned long uVar5;
        AnimationWrapper* pAVar6;
        Model* pMVar7;
        AnimationState* pAVar8;
        shared_ptr<graphics::Model>* model;
        shared_ptr<oldscape::dash3d::Decor> local_48;
        unsigned int local_38;
        uint32_t local_34;

        bool cVar2 = field_1896.IsReady(arg1, arg2);
        if (!cVar2) {
            bVar3 = 0;
        } else {
            bVar3 = field_1896.IsDelayed(arg3);
            bVar3 = bVar3 ^ 1;
        }
        cVar2 = field_1664.IsReady(arg1, arg2);
        if ((!cVar2) || ((bVar3 != 0 && (m_defaultAnimationReadyAnim != false)))) {
            uVar5 = 0;
            if (bVar3 != 0)
                goto LAB_100668ff9;
        LAB_100669062:
            if ((char)uVar5 == '\0')
                goto LAB_100669076;
            model = (shared_ptr<graphics::Model>*)m_defaultAnimationModel;
        } else {
            pAVar6 = (AnimationWrapper*)(*m_defaultAnimation).operator->();
            iVar1 = *(int*)&field_1664;
            pAVar8 = (AnimationState*)*field_1584;
            uVar4 = pAVar6->ApplyToAnimationState(iVar1, *pAVar8, false);
            uVar5 = (((uint64_t)((int64_t)((unsigned long)uVar4 >> 8)) << 8) | (uint8_t)1);
            if (bVar3 == 0)
                goto LAB_100669062;
        LAB_100668ff9:
            local_38 = (unsigned int)uVar5;
            if (!cVar2) {
                local_34 = 0;
            } else {
                local_34 = (uint32_t)(((uint64_t)((int64_t)(uVar5 >> 8)) << 8) |
                                      (uint8_t)(m_defaultAnimationReadyAnim == false));
            }
            pAVar6 = (AnimationWrapper*)(*m_overrideAnimation).operator->();
            iVar1 = *(int*)&field_1896;
            pAVar8 = (AnimationState*)*field_1584;
            pAVar6->ApplyToAnimationState(iVar1, *pAVar8, local_34._0_1_);
            uVar5 = (unsigned long)local_38;
            if (bVar3 == 0)
                goto LAB_100669062;
            model = (shared_ptr<graphics::Model>*)m_overrideAnimationModel;
        }
        SetCurrentModel(*model);
    LAB_100669076:
        if ((!cVar2 && bVar3 == 0) && (cVar2 = field_2328->operator_cast_to_bool(), !cVar2)) {
            pAVar8 = (AnimationState*)field_1584.operator->();
            pAVar8->ClearState();
            cVar2 = m_currentModel->operator_cast_to_bool();
            if (cVar2) {
                pMVar7 = (Model*)(*m_currentModel).operator->();
                pMVar7->ClearAnimationState();
            }
        } else {
            cVar2 = m_currentModel->operator_cast_to_bool();
            if (cVar2) {
                cVar2 = field_2328->operator_cast_to_bool();
                pMVar7 = (Model*)(*m_currentModel).operator->();
                if (!cVar2) {
                    local_48 = shared_ptr(&field_1584);
                    pMVar7->SetAnimationStateProvider(local_48);
                } else {
                    pMVar7->SetAnimationStateProvider(*field_2328);
                }
            }
        }
    }

    // 0x100669160
    bool AnimatedModel::AnimationDetails::IsDelayed(int arg1) const {
        AnimationWrapper* pAVar4;
        uint8_t* this_00;

        bool cVar1 = field_8.IsDelayedAnimation(arg1);
        bool bVar2 = true;
        if (!cVar1) {
            this_00 = field_16;
            cVar1 = this_00->operator_cast_to_bool();
            if (cVar1) {
                pAVar4 = (AnimationWrapper*)(*this_00).operator->();
                cVar1 = pAVar4->IsReady();
                if (cVar1) {
                    pAVar4 = (AnimationWrapper*)(*this_00).operator->();
                    return pAVar4->GetDelay() != 0;
                }
            }
            bVar2 = false;
        }
        return bVar2;
    }

    // 0x100669200
    void AnimatedModel::DebugOuputRunningAnimation(unsigned int arg1, bool arg2, bool arg3) {}

    // 0x100669210
    void AnimatedModel::SetWorldTransform(const math::Matrix44T<float>& matrix44, unsigned int arg2) {
        field_2240 = matrix44;
        UpdateParticles(field_2240, arg2);
    }

    // 0x100669250
    void AnimatedModel::UpdateParticles(const math::Matrix44T<float>& matrix44, unsigned int arg2) {
        RT7Core* pRVar1;
        Layout* this_00;
        vector_map<int, graphics::FaceGroupRenderMasks>* pvVar3;
        RT7Core* pRVar4;
        shared_ptr<graphics::ParticleSystem>* psVar5;
        shared_ptr<graphics::ParticleSystem>* psVar6;
        LoginManager* this_02;
        RenderMaterial* this_03;
        uint64_t uVar7;
        Drawable* pDVar8;
        shared_ptr<graphics::ModularParticleSystem>* this_04;
        shared_ptr<graphics::ModularParticleSystem>* psVar9;
        ModularParticleSystem* this_05;
        uint8_t* puVar10;
        shared_ptr<oldscape::dash3d::Decor> local_50;
        vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true>>* local_40;
        RT7Core* local_38;

        auto this_01 = GetCurrentModel(arg2);
        bool cVar2 = shared_ptr::operator_cast_to_bool(this_01);
        if (cVar2) {
            cVar2 = field_2328->operator_cast_to_bool();
            if (!cVar2) {
                local_50 = shared_ptr(&field_1584);
            } else {
                local_50 = shared_ptr(field_2328);
            }
            local_38 = (RT7Core*)(*this_01).operator->();
            pRVar1 = field_24;
            pvVar3 = (vector_map<int, graphics::FaceGroupRenderMasks>*)local_50.end();
            pRVar4 = local_38;
            local_38 = (RT7Core*)&field_2144;
            graphics::Model::UpdateParticleEmitters(*pRVar4, *pRVar1, field_2144, matrix44, pvVar3, false);
            pRVar4 = (RT7Core*)(*this_01).operator->();
            pRVar1 = field_24;
            pvVar3 = (vector_map<int, graphics::FaceGroupRenderMasks>*)local_50.end();
            local_40 = (vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true>>*)&field_2200;
            graphics::Model::UpdateModularParticleSystems(*pRVar4, *pRVar1, field_2200, matrix44, pvVar3, false);
            cVar2 = local_38->empty();
            if (!cVar2) {
                puVar10 = &field_2320;
                cVar2 = puVar10->IsNull();
                pRVar1 = local_38;
                if (cVar2) {
                    psVar5 = (shared_ptr<graphics::ParticleSystem>*)local_38->HeapBeginPtr();
                    psVar6 = (shared_ptr<graphics::ParticleSystem>*)pRVar1->end();
                    for (; psVar5 != psVar6; psVar5 = psVar5 + 16) {
                        this_02 = (LoginManager*)(*psVar5).operator->();
                        this_03 = (RenderMaterial*)this_02->GetDevCredentialsOutputDirectory();
                        uVar7 = puVar10->value();
                        this_03->SetOption(1, *(bool*)uVar7);
                    }
                    puVar10->reset();
                }
            }
            cVar2 = local_38->empty();
            if ((!cVar2) || (cVar2 = local_40->empty(), !cVar2)) {
                puVar10 = &field_2322;
                cVar2 = puVar10->IsNull();
                pRVar1 = local_38;
                if (cVar2) {
                    psVar5 = (shared_ptr<graphics::ParticleSystem>*)local_38->HeapBeginPtr();
                    psVar6 = (shared_ptr<graphics::ParticleSystem>*)pRVar1->end();
                    this_00 = (Layout*)local_40;
                    for (; local_40 = (vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true>>*)this_00,
                           psVar5 != psVar6;
                         psVar5 = psVar5 + 16) {
                        pDVar8 = (Drawable*)(*psVar5).operator->();
                        uVar7 = puVar10->value();
                        pDVar8->SetRenderFlag(1, *(bool*)uVar7);
                        this_00 = (Layout*)local_40;
                    }
                    this_04 = (shared_ptr<graphics::ModularParticleSystem>*)this_00->HeapBeginPtr();
                    psVar9 = (shared_ptr<graphics::ModularParticleSystem>*)this_00->end();
                    for (; this_04 != psVar9; this_04 = this_04 + 16) {
                        this_05 = (ModularParticleSystem*)(*this_04).operator->();
                        pDVar8 = (Drawable*)this_05->GetDrawable();
                        uVar7 = puVar10->value();
                        pDVar8->SetRenderFlag(1, *(bool*)uVar7);
                    }
                    puVar10->reset();
                }
            }
        }
    }

    // 0x100669570
    AnimatedModel::ModelAnimationSet::ModelAnimationSet() : field_0(-1) {
        new (&field_24) shared_ptr();
        new (&field_40) shared_ptr();
        field_56 = 0;
        field_60 = 5;
        new (&field_64) ServerSyncingUser(0);
        field_100 = 0;
        field_104 = 0;
        field_108 = 0;
        field_80 = 0;
        field_81 = 0;
        field_82 = 0;
        field_83 = '\0';
        field_84 = 0;
        *(uint64_t*)&field_88 = 0;
        field_96 = '\0';
        field_64.~AutoSingleton();
    }

    // 0x100669640
    ModelAnimationSet* AnimatedModel::ModelAnimationSet::swap(AnimatedModel::ModelAnimationSet& modelAnimationSet) {
        eastl::swap<unsigned int>(field_0, modelAnimationSet.field_0);
        field_8->swap(modelAnimationSet.field_8);
        field_24.swap(modelAnimationSet.field_24);
        field_40.swap(modelAnimationSet.field_40);
        eastl::swap<unsigned int>(field_56, modelAnimationSet.field_56);
        eastl::swap<unsigned int>(field_60, modelAnimationSet.field_60);
        field_64.swap(modelAnimationSet.field_64);
        eastl::swap<signed char>(field_80, modelAnimationSet.field_80);
        eastl::swap<signed char>(field_81, modelAnimationSet.field_81);
        eastl::swap<signed char>(field_82, modelAnimationSet.field_82);
        eastl::swap<signed char>(field_83, modelAnimationSet.field_83);
        eastl::swap<unsigned int>(field_84, modelAnimationSet.field_84);
        eastl::swap<unsigned int>(field_92, modelAnimationSet.field_92);
        eastl::swap<signed char>(field_96, modelAnimationSet.field_96);
        eastl::swap<unsigned int>(field_100, modelAnimationSet.field_100);
        eastl::swap<unsigned int>(field_104, modelAnimationSet.field_104);
        eastl::swap<unsigned int>(field_108, modelAnimationSet.field_108);
        return this;
    }

    // 0x100669810
    AnimatedModel::AnimationDetails::AnimationDetails(int arg1) : field_0(arg1) {}

    // 0x100669910
    void AnimatedModel::AnimationDetails::RememberAnimationPoint() {
        AnimationWrapper* pAVar1;
        int iVar3;
        uint32_t uVar4;

        uint8_t* this_00 = field_16;
        if (this_00->operator_cast_to_bool()) {
            if (!(field_120.InUse())) {
                pAVar1 = (AnimationWrapper*)(*this_00).operator->();
                iVar3 = ((AnimationParameters*)pAVar1->GetAnimationParameters())->GetTicksThroughAnimation();
                pAVar1 = (AnimationWrapper*)(*this_00).operator->();
                uVar4 = ((MapArea*)pAVar1->GetAnimationParameters())->GetAdvisedZoom();
                field_120 = field_8;
                field_216 = 1;
                field_220 = iVar3;
                field_224 = uVar4;
            }
        }
    }

} // namespace jag::game
