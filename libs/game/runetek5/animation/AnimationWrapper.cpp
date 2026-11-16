// libs/game/runetek5/animation/AnimationWrapper.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.runetek5

#include "AnimationWrapper.h"

namespace jag::game {
    // 0x100024170: AnimationWrapper::GetSourceID() const has the same machine code as oldscape::option::IScriptOption::GetId() const

    // 0x1000b9950: AnimationWrapper::GetSource() const has the same machine code as oldscape::ScriptVarType::GetDefaultValue() const

    // 0x1001174c0: AnimationWrapper::SetReadyAnim(bool) has the same machine code as oldscape::ClientObj::SetEnabledOpsBitMask(unsigned char)

    // 0x1001cdf70: AnimationWrapper::SetAnimationLateness(int) has the same machine code as StaticPointLight::SetRGB(unsigned int)

    // 0x1003f6590: AnimationWrapper::GetAnimationParameters() has the same machine code as AnimationWrapper::GetAnimationParameters() const

    // 0x1003fab80: AnimationWrapper::IsReadyAnim() const has the same machine code as WaterType::OverrideDefaultWaterType() const

    // 0x100657ad0
    AnimationWrapper::AnimationWrapper(AssetBuilder& assetBuilder, const ConfigProvider& configProvider, int arg3,
                                       unsigned int arg4, graphics::AnimationLoopBehaviour animationLoopBehaviour,
                                       bool arg6, bool arg7)
        : MakeSharedPool<AnimationWrapper, 512>(), field_0(assetBuilder), m_sourceID(arg3),
          field_32(animationLoopBehaviour), field_36(arg4), field_40(arg6), field_41(arg7) {
        field_48.unique_ptr<true, void>();
        m_readyAnim = '\0';
        field_57 = 0;
        field_60 = -1;
        m_animationLateness = 0;
        field_68 = 0;
        new (&field_72) BuildRequest<graphics::Animation, BuildAnimationMain>();
        new (&field_112) std::function<void(int, int, int, int, int, int)>();
        LoadSeq(configProvider);
    }

    // 0x100657cf0
    uint64_t AnimationWrapper::Build(const ConfigProvider& configProvider, unsigned int arg2,
                                     const shared_ptr<graphics::Model>& model, unsigned int arg4) {

        if (!(HasFinishedBuilding())) {
            if (!((LoadSeq(configProvider))->operator_cast_to_bool())) {
                return 0;
            }
            GenerateAnimation(arg2, model, arg4);
        }
        return IsReady();
    }

    // 0x100657d60
    void AnimationWrapper::GenerateAnimation(unsigned int arg1, const shared_ptr<graphics::Model>& model,
                                             unsigned int arg3) {
        uint8_t* buildRequest;
        shared_ptr<SeqType>* this_00;
        SeqType* pSVar2;
        shared_ptr<graphics::Animation>* psVar4;
        MakeUniquePool<graphics::AnimationParameters, 512> local_60;
        shared_ptr<SeqType>* local_58;
        bool* local_50;
        unsigned int* local_48;
        int local_38;
        unsigned int local_34;

        unsigned int local_3c = arg3;
        if (!((&field_48)->operator_cast_to_bool())) {
            if (field_68 != arg1) {
                field_68 = arg1;
                field_72.Clear();
            }
            local_58 = (shared_ptr<SeqType>*)m_source;
            pSVar2 = (SeqType*)(*local_58).operator->();
            buildRequest = &field_72;
            if ((uint8_t*)pSVar2->GetAnimation(*field_0, *buildRequest, arg1, model) == DataStatus::READY) {
                if (buildRequest->IsTaskDone()) {
                    if (!(buildRequest->IsEmpty())) {
                        psVar4 = (shared_ptr<graphics::Animation>*)buildRequest->SSOBeginPtr();
                        if (((Skybox*)(*psVar4).operator->())->ShowSkybox()) {
                            psVar4 = (shared_ptr<graphics::Animation>*)buildRequest->SSOBeginPtr();
                            this_00 = local_58;
                            local_48 = &field_36;
                            local_50 = &field_40;
                            pSVar2 = (SeqType*)(*local_58).operator->();
                            local_38 = pSVar2->GetLoops();
                            pSVar2 = (SeqType*)(*this_00).operator->();
                            local_34 = pSVar2->GetMaxLoops();
                            MakeUniquePool<graphics::AnimationParameters, 512>::MakeUnique<
                                shared_ptr<graphics::Animation> const&, graphics::AnimationLoopBehaviour&,
                                unsigned int&, unsigned int&, bool&, int, unsigned int, bool&>(
                                &local_60, psVar4, &field_32, local_48, &local_3c, local_50, &local_38, &local_34,
                                &field_41);
                            field_48 = local_60;
                        }
                    }
                }
            }
        }
    }

    // 0x1006580a0
    void AnimationWrapper::Update(unsigned int arg1, int arg2) {
        uint8_t* this_01;
        SeqType* pSVar1;
        AnimationParameters* pAVar2;
        int iVar4;

        uint8_t* this_00 = &field_48;
        if (this_00->operator_cast_to_bool()) {
            this_01 = m_source;
            if (this_01->operator_cast_to_bool()) {
                pSVar1 = (SeqType*)(*this_01).operator->();
                pSVar1->CleanCache();
                pSVar1 = (SeqType*)(*this_01).operator->();
                iVar4 = pSVar1->GetPreanimMove();
                if ((iVar4 == 3) && (0 < arg2)) {
                    field_57 = 1;
                } else {
                    pSVar1 = (SeqType*)(*this_01).operator->();
                    iVar4 = pSVar1->GetPreanimMove();
                    if (iVar4 == 1) {
                        pAVar2 = (AnimationParameters*)(*this_00).operator->();
                        if (arg2 < 1) {
                            pAVar2->SetDelay(0);
                        } else {
                            pAVar2->SetDelayResumeAtTime(arg1);
                        }
                    }
                    pAVar2 = (AnimationParameters*)(*this_00).operator->();
                    pAVar2->Update(arg1);
                    pAVar2 = (AnimationParameters*)(*this_00).operator->();
                    if (!(pAVar2->IsDelayed())) {
                        ProcessAudio();
                    }
                }
            }
        }
    }

    // 0x1006581b0
    void AnimationWrapper::ProcessAudio() {
        uint8_t* this_00;
        unsigned int uVar1;
        uint8_t bVar3;
        int iVar5;
        int arg4;
        SeqType* pSVar6;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_02;
        Array<VarValue>* this_03;
        unsigned int* puVar7;
        unsigned long uVar8;
        unsigned long arg1;
        bool bVar9;
        unsigned int arg1_00;

        int iVar4 = ((AnimationParameters*)field_48.operator->())->GetCurrentIndex();
        if (iVar4 != field_60) {
            this_00 = m_source;
            if (this_00->operator_cast_to_bool()) {
                if (iVar4 == 0) {
                    arg1 = 18446744073709551615;
                } else {
                    arg1 = (unsigned long)field_60;
                }
                pSVar6 = (SeqType*)(*this_00).operator->();
                if (pSVar6->HasSounds()) {
                    pSVar6 = (SeqType*)(*this_00).operator->();
                    this_02 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)pSVar6->GetSounds();
                    bVar9 = false;
                    do {
                        arg1 = arg1 + 1;
                        if ((long)iVar4 <= (long)arg1) {
                            bVar9 = true;
                        }
                        iVar5 = this_02->end();
                        if ((long)iVar5 <= (long)arg1)
                            break;
                        this_03 = (Array<VarValue>*)(*this_02)[arg1];
                        if (!(this_03->empty())) {
                            puVar7 = (unsigned int*)(*this_03)[0];
                            uVar1 = *puVar7;
                            arg1_00 = uVar1 >> 8;
                            uVar8 = this_03->end();
                            if (1 < uVar8) {
                                iVar5 = this_03->end();
                                iVar5 = math::Rand(iVar5);
                                if (0 < iVar5) {
                                    puVar7 = (unsigned int*)(*this_03)[(long)iVar5];
                                    arg1_00 = *puVar7;
                                }
                            }
                            pSVar6 = (SeqType*)(*this_00).operator->();
                            bVar3 = pSVar6->GetVolume((unsigned int)arg1);
                            pSVar6 = (SeqType*)(*this_00).operator->();
                            iVar5 = pSVar6->GetRandomRateForSound((unsigned int)arg1);
                            if ((&field_112)->operator_cast_to_bool()) {
                                pSVar6 = (SeqType*)(*this_00).operator->();
                                arg4 = pSVar6->GetTertiaryVolumeFactor();
                                std::function<void(int, int, int, int, int, int)>::operator()(
                                    (function<void(int, int, int, int, int, int)>*)&field_112, arg1_00, uVar1 >> 5 & 7,
                                    (unsigned int)bVar3, arg4, uVar1 & 31, iVar5);
                            }
                        }
                    } while (!bVar9);
                }
            }
        }
        field_60 = iVar4;
    }

    // 0x1006583c0
    void AnimationWrapper::ApplyToAnimationState(int arg1, graphics::AnimationState& animationState, bool arg3) {
        SeqType* this_00;
        AnimationParameters* animationParameters;
        shared_ptr<SeqGroupType> local_40;

        if (!(IsReady())) {
            LogAssert("IsReady()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/animation/"
                      "AnimationWrapper.cpp",
                      118, "AnimationWrapper: Cannot update animation state when not ready for use!");
        }
        if (arg3) {
            this_00 = (SeqType*)(*m_source).operator->();
            if ((this_00->GetSeqGroup())->operator_cast_to_bool()) {
                static_pointer_cast<graphics::WalkMergeDataProvider, shared_ptr<SeqGroupType>>(&local_40);
                animationState.SetAnimationChannelTransformMask(arg1, local_40);
            }
        } else {
            local_40 = shared_ptr();
            animationState.SetAnimationChannelTransformMask(arg1, local_40);
            animationState.ResetChannel(1 - arg1);
        }
        animationParameters = (AnimationParameters*)*field_48;
        animationState.SetAnimationOnChannel(*animationParameters, arg1);
    }

    // 0x100658510
    bool AnimationWrapper::MayMove(int arg1) {
        SeqType* this_00;
        int iVar2;

        bool cVar1 = m_source->operator_cast_to_bool();
        bool bVar3 = true;
        if (cVar1) {
            this_00 = (SeqType*)(*m_source).operator->();
            if (arg1 < 1) {
                iVar2 = this_00->GetPostanimMove();
            } else {
                iVar2 = this_00->GetPreanimMove();
            }
            bVar3 = iVar2 != 0;
        }
        return bVar3;
    }

    // 0x100658730
    bool AnimationWrapper::ShouldBeFinished() const {
        int iVar1;
        bool bVar2;

        auto pAVar5 = field_48.operator->();
        int iVar3 = pAVar5->GetTicksThroughAnimation();
        if ((field_32 & 4294967293) == 0) {
            iVar1 = m_animationLateness;
            pAVar5 = (AnimationParameters*)field_48.operator->();
            bVar2 = pAVar5->GetAnimationLength() <= iVar3 + iVar1;
        } else {
            bVar2 = false;
        }
        return bVar2;
    }

    // 0x100658790
    bool AnimationWrapper::ShouldBeFinishedOrLooping() const {
        int iVar5;

        auto pAVar3 = field_48.operator->();
        int iVar4 = pAVar3->GetTicksThroughAnimation();
        AnimationLoopBehaviour AVar1 = field_32;
        int iVar2 = m_animationLateness;
        pAVar3 = (AnimationParameters*)field_48.operator->();
        if (AVar1 == 2) {
            iVar5 = pAVar3->GetAnimationLength();
        } else {
            iVar5 = pAVar3->GetPreLoopLength();
        }
        return iVar5 <= iVar2 + iVar4;
    }

} // namespace jag::game

namespace jag {
    // 0x1006584e0
    shared_ptr<graphics::WalkMergeDataProvider>
    static_pointer_cast<graphics::WalkMergeDataProvider, shared_ptr<game::SeqGroupType>>(
        const shared_ptr<game::SeqGroupType>& seqGroupType) {
        shared_ptr<game::SeqGroupType>* in_RSI;
        shared_ptr_static_cast local_18;

        seqGroupType.shared_ptr<game::SeqGroupType>(*in_RSI, local_18);
        return seqGroupType;
    }

} // namespace jag
