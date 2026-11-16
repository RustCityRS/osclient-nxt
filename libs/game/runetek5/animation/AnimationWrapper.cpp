// libs/game/runetek5/animation/AnimationWrapper.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.game.runetek5

#include "AnimationWrapper.h"

namespace jag::game {
    // 0x100024170: the linker folded this into oldscape::option::IScriptOption::GetId() const, which has identical code
    int AnimationWrapper::GetSourceID() const;

    // 0x1000b9950: the linker folded this into oldscape::ScriptVarType::GetDefaultValue() const, which has identical code
    shared_ptr AnimationWrapper::GetSource() const;

    // 0x1001174c0: the linker folded this into oldscape::ClientObj::SetEnabledOpsBitMask(unsigned char), which has identical code
    AnimationWrapper::SetReadyAnim(bool);

    // 0x1001cdf70: the linker folded this into StaticPointLight::SetRGB(unsigned int), which has identical code
    AnimationWrapper::SetAnimationLateness(int);

    // 0x1003f6590: the linker folded this into AnimationWrapper::GetAnimationParameters() const, which has identical code
    AnimationWrapper::GetAnimationParameters();

    // 0x1003fab80: the linker folded this into WaterType::OverrideDefaultWaterType() const, which has identical code
    bool AnimationWrapper::IsReadyAnim() const;

    // 0x100657ad0, 224 bytes, base-object constructor, placed by class name and debug map
    // AnimationWrapper::AnimationWrapper(AssetBuilder&, ConfigProvider const&, int, unsigned int, graphics::AnimationLoopBehaviour, bool, bool)
    void AnimationWrapper::AnimationWrapper(AssetBuilder* param_1, ConfigProvider* param_2, int param_3,
                                            undefined4 param_4, uint param_6, undefined1 param_7, bool param_8) {
        new (this) MakeSharedPool<AnimationWrapper, 512>();
        field_0 = param_1;
        m_sourceID = param_3;
        new (m_source, (_func_decltype_nullptr*)param_1) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        field_32 = param_6;
        field_36 = param_4;
        field_40 = param_7;
        field_41 = param_8;
        std::unique_ptr<graphics::AnimationParameters,
                        MakeUniquePool<graphics::AnimationParameters, 512>::UniquePoolDeleter>::unique_ptr<true,
                                                                                                           void>(
            (unique_ptr<graphics::AnimationParameters,
                        MakeUniquePool<graphics::AnimationParameters, 512>::UniquePoolDeleter>*)&field_48);
        m_readyAnim = false;
        field_57 = 0;
        field_60 = -1;
        m_animationLateness = 0;
        field_68 = 0;
        new (&field_72) BuildRequest<graphics::Animation, BuildAnimationMain>();
        std::function<void(int, int, int, int, int, int)>::function(
            (function<void(int, int, int, int, int, int)>*)&field_112);
        LoadSeq(this, param_2);
    }

    // 0x100657cd0, 32 bytes, complete-object constructor, placed by class name and debug map
    // AnimationWrapper::AnimationWrapper(AssetBuilder&, ConfigProvider const&, int, unsigned int, graphics::AnimationLoopBehaviour, bool, bool)
    void AnimationWrapper::AnimationWrapper() {
        AnimationWrapper();
    }

    // 0x100657cf0, 112 bytes, placed by class name and debug map
    // AnimationWrapper::Build(ConfigProvider const&, unsigned int, shared_ptr<graphics::Model> const&, unsigned int)
    undefined8 AnimationWrapper::Build(ConfigProvider* param_1, uint param_2, shared_ptr* param_3, uint param_4) {
        shared_ptr* this_00;

        if (HasFinishedBuilding(this) == '\0') {
            this_00 = (shared_ptr*)LoadSeq(this, param_1);
            if (!shared_ptr::operator_cast_to_bool(this_00)) {
                return 0;
            }
            GenerateAnimation(this, param_2, param_3, param_4);
        }
        return IsReady(this);
    }

    // 0x100657d60, 352 bytes, placed by class name and debug map
    // AnimationWrapper::GenerateAnimation(unsigned int, shared_ptr<graphics::Model> const&, unsigned int)
    void AnimationWrapper::GenerateAnimation(uint param_1, shared_ptr* param_2, uint param_3) {
        undefined1* this_00;
        shared_ptr<SeqType>* this_01;
        char cVar2;
        SeqType* pSVar3;
        undefined* puVar4;
        vector* this_02;
        Skybox* this_03;
        shared_ptr* psVar5;
        AssetBuilder* pAVar6;
        MakeUniquePool<graphics::AnimationParameters, 512> local_60[8];
        shared_ptr<SeqType>* local_58;
        bool* local_50;
        uint* local_48;
        uint local_3c;
        int local_38;
        uint local_34;

        local_3c = param_3;
        if (!(&field_48)->operator_cast_to_bool()) {
            if (field_68 != param_1) {
                field_68 = param_1;
                (&field_72)->Clear();
            }
            local_58 = (shared_ptr<SeqType>*)m_source;
            pSVar3 = (SeqType*)shared_ptr<SeqType>::operator->(local_58);
            pAVar6 = field_0;
            this_00 = &field_72;
            puVar4 = (undefined*)pSVar3->GetAnimation(pAVar6, this_00, param_1, param_2);
            if (puVar4 == DataStatus::READY) {
                cVar2 = this_00->IsTaskDone();
                if (cVar2 != '\0') {
                    cVar2 = this_00->IsEmpty();
                    if (cVar2 == '\0') {
                        this_02 = this_00->SSOBeginPtr(pAVar6);
                        this_03 = (Skybox*)shared_ptr<graphics::Animation>::operator->(
                            (shared_ptr<graphics::Animation>*)this_02);
                        cVar2 = this_03->ShowSkybox();
                        if (cVar2 != '\0') {
                            psVar5 = (shared_ptr*)this_00->SSOBeginPtr(pAVar6);
                            this_01 = local_58;
                            local_48 = &field_36;
                            local_50 = (bool*)&field_40;
                            pSVar3 = (SeqType*)shared_ptr<SeqType>::operator->(local_58);
                            local_38 = pSVar3->GetLoops();
                            pSVar3 = (SeqType*)shared_ptr<SeqType>::operator->(this_01);
                            local_34 = pSVar3->GetMaxLoops();
                            MakeUniquePool<graphics::AnimationParameters, 512>::MakeUnique<
                                shared_ptr<graphics::Animation> const&, graphics::AnimationLoopBehaviour&,
                                unsigned int&, unsigned int&, bool&, int, unsigned int, bool&>(
                                local_60, psVar5, (AnimationLoopBehaviour*)&field_32, local_48, &local_3c, local_50,
                                &local_38, &local_34, &field_41);
                            std::unique_ptr<graphics::AnimationParameters,
                                            MakeUniquePool<graphics::AnimationParameters, 512>::UniquePoolDeleter>::
                            operator=(
                                (unique_ptr<
                                    graphics::AnimationParameters,
                                    MakeUniquePool<graphics::AnimationParameters, 512>::UniquePoolDeleter>*)&field_48,
                                (unique_ptr*)local_60);
                            local_60->~unique_ptr();
                        }
                    }
                }
            }
        }
    }

    // 0x1006580a0, 240 bytes, placed by class name and debug map
    // AnimationWrapper::Update(unsigned int, int)
    void AnimationWrapper::Update(uint param_1, int param_2) {
        undefined1* this_00;
        undefined1* this_01;
        SeqType* pSVar1;
        AnimationParameters* pAVar2;
        bool bVar3;
        int iVar5;

        this_00 = &field_48;
        bVar3 = this_00->operator_cast_to_bool();
        if (bVar3) {
            this_01 = m_source;
            bVar3 = this_01->operator_cast_to_bool();
            if (bVar3) {
                pSVar1 = (SeqType*)shared_ptr<SeqType>::operator->((shared_ptr<SeqType>*)this_01);
                pSVar1->CleanCache();
                pSVar1 = (SeqType*)shared_ptr<SeqType>::operator->((shared_ptr<SeqType>*)this_01);
                iVar5 = pSVar1->GetPreanimMove();
                if ((iVar5 == 3) && (0 < param_2)) {
                    field_57 = 1;
                } else {
                    pSVar1 = (SeqType*)shared_ptr<SeqType>::operator->((shared_ptr<SeqType>*)this_01);
                    iVar5 = pSVar1->GetPreanimMove();
                    if (iVar5 == 1) {
                        pAVar2 =
                            (AnimationParameters*)
                                std::unique_ptr<graphics::AnimationParameters,
                                                MakeUniquePool<graphics::AnimationParameters, 512>::UniquePoolDeleter>::
                                operator->(
                                    (unique_ptr<graphics::AnimationParameters,
                                                MakeUniquePool<graphics::AnimationParameters, 512>::UniquePoolDeleter>*)
                                        this_00);
                        if (param_2 < 1) {
                            pAVar2->SetDelay(0);
                        } else {
                            pAVar2->SetDelayResumeAtTime(param_1);
                        }
                    }
                    pAVar2 =
                        (AnimationParameters*)
                            std::unique_ptr<graphics::AnimationParameters,
                                            MakeUniquePool<graphics::AnimationParameters, 512>::UniquePoolDeleter>::
                            operator->(
                                (unique_ptr<graphics::AnimationParameters,
                                            MakeUniquePool<graphics::AnimationParameters, 512>::UniquePoolDeleter>*)
                                    this_00);
                    pAVar2->Update(param_1);
                    pAVar2 =
                        (AnimationParameters*)
                            std::unique_ptr<graphics::AnimationParameters,
                                            MakeUniquePool<graphics::AnimationParameters, 512>::UniquePoolDeleter>::
                            operator->(
                                (unique_ptr<graphics::AnimationParameters,
                                            MakeUniquePool<graphics::AnimationParameters, 512>::UniquePoolDeleter>*)
                                    this_00);
                    if (pAVar2->IsDelayed() == '\0') {
                        ProcessAudio(this);
                    }
                }
            }
        }
    }

    // 0x1006581b0, 528 bytes, placed by class name and debug map
    // AnimationWrapper::ProcessAudio()
    void AnimationWrapper::ProcessAudio() {
        undefined1* this_00;
        uint uVar1;
        bool bVar2;
        char cVar3;
        byte bVar4;
        int iVar6;
        int iVar7;
        AnimationParameters* this_01;
        SeqType* pSVar8;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_02;
        Array<VarValue, eastl::allocator>* this_03;
        uint* puVar9;
        ulong uVar10;
        ulong uVar11;
        uint uVar12;

        this_01 =
            (AnimationParameters*)std::unique_ptr<
                graphics::AnimationParameters, MakeUniquePool<graphics::AnimationParameters, 512>::UniquePoolDeleter>::
            operator->((unique_ptr<graphics::AnimationParameters,
                                   MakeUniquePool<graphics::AnimationParameters, 512>::UniquePoolDeleter>*)&field_48);
        iVar6 = this_01->GetCurrentIndex();
        if (iVar6 != field_60) {
            this_00 = m_source;
            bVar2 = this_00->operator_cast_to_bool();
            if (bVar2) {
                if (iVar6 == 0) {
                    uVar11 = 18446744073709551615;
                } else {
                    uVar11 = (ulong)field_60;
                }
                pSVar8 = (SeqType*)shared_ptr<SeqType>::operator->((shared_ptr<SeqType>*)this_00);
                cVar3 = pSVar8->HasSounds();
                if (cVar3 != '\0') {
                    pSVar8 = (SeqType*)shared_ptr<SeqType>::operator->((shared_ptr<SeqType>*)this_00);
                    this_02 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)pSVar8->GetSounds();
                    bVar2 = false;
                    do {
                        uVar11 = uVar11 + 1;
                        if ((long)iVar6 <= (long)uVar11) {
                            bVar2 = true;
                        }
                        iVar7 = eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(this_02);
                        if ((long)iVar7 <= (long)uVar11)
                            break;
                        this_03 = (Array<VarValue, eastl::allocator>*)
                            Array<Array<unsigned int, eastl::allocator>, eastl::allocator>::operator[](
                                (Array<Array<unsigned int, eastl::allocator>, eastl::allocator>*)this_02, uVar11);
                        cVar3 = this_03->empty();
                        if (cVar3 == '\0') {
                            puVar9 = (uint*)Array<unsigned int, eastl::allocator>::operator[](
                                (Array<unsigned int, eastl::allocator>*)this_03, 0);
                            uVar1 = *puVar9;
                            uVar12 = uVar1 >> 8;
                            uVar10 = this_03->end();
                            if (1 < uVar10) {
                                iVar7 = this_03->end();
                                iVar7 = math::Rand(iVar7);
                                if (0 < iVar7) {
                                    puVar9 = (uint*)Array<unsigned int, eastl::allocator>::operator[](
                                        (Array<unsigned int, eastl::allocator>*)this_03, (long)iVar7);
                                    uVar12 = *puVar9;
                                }
                            }
                            pSVar8 = (SeqType*)shared_ptr<SeqType>::operator->((shared_ptr<SeqType>*)this_00);
                            bVar4 = pSVar8->GetVolume((uint)uVar11);
                            pSVar8 = (SeqType*)shared_ptr<SeqType>::operator->((shared_ptr<SeqType>*)this_00);
                            pSVar8->GetRandomRateForSound((uint)uVar11);
                            if ((&field_112)->operator_cast_to_bool()) {
                                pSVar8 = (SeqType*)shared_ptr<SeqType>::operator->((shared_ptr<SeqType>*)this_00);
                                iVar7 = pSVar8->GetTertiaryVolumeFactor();
                                std::function<void(int, int, int, int, int, int)>::operator()(
                                    (int)&field_112, uVar12, uVar1 >> 5 & 7, (uint)bVar4, iVar7, uVar1 & 31);
                            }
                        }
                    } while (!bVar2);
                }
            }
        }
        field_60 = iVar6;
    }

    // 0x1006583c0, 272 bytes, placed by class name and debug map
    // AnimationWrapper::ApplyToAnimationState(int, graphics::AnimationState&, bool)
    void AnimationWrapper::ApplyToAnimationState(int param_1, AnimationState* param_2, bool param_3) {
        SeqType* this_00;
        shared_ptr* this_01;
        AnimationParameters* pAVar3;
        shared_ptr* extraout_RDX;
        shared_ptr local_40;

        if (IsReady(this) == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("IsReady()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/animation/"
                      "AnimationWrapper.cpp",
                      118, "AnimationWrapper: Cannot update animation state when not ready for use!");
        }
        if (param_3) {
            this_00 = (SeqType*)shared_ptr<SeqType>::operator->((shared_ptr<SeqType>*)m_source);
            this_01 = (shared_ptr*)this_00->GetSeqGroup();
            if (shared_ptr::operator_cast_to_bool(this_01)) {
                static_pointer_cast<graphics::WalkMergeDataProvider, shared_ptr<SeqGroupType>>(&local_40, (jag*)this_01,
                                                                                               extraout_RDX);
                param_2->SetAnimationChannelTransformMask(param_1, &local_40);
                local_40.~shared_ptr();
            }
        } else {
            new (&local_40) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(0);
            param_2->SetAnimationChannelTransformMask(param_1, &local_40);
            local_40.~shared_ptr();
            param_2->ResetChannel(1 - param_1);
        }
        pAVar3 = (AnimationParameters*)std::unique_ptr<
            graphics::AnimationParameters, MakeUniquePool<graphics::AnimationParameters, 512>::UniquePoolDeleter>::
        operator*((unique_ptr<graphics::AnimationParameters,
                              MakeUniquePool<graphics::AnimationParameters, 512>::UniquePoolDeleter>*)&field_48);
        param_2->SetAnimationOnChannel(pAVar3, param_1);
    }

    // 0x100658510, 80 bytes, placed by class name and debug map
    // AnimationWrapper::MayMove(int)
    bool AnimationWrapper::MayMove(int param_1) {
        SeqType* this_00;
        bool bVar1;
        int iVar2;
        bool bVar3;

        bVar1 = m_source->operator_cast_to_bool();
        bVar3 = true;
        if (bVar1) {
            this_00 = (SeqType*)shared_ptr<SeqType>::operator->((shared_ptr<SeqType>*)m_source);
            if (param_1 < 1) {
                iVar2 = this_00->GetPostanimMove();
            } else {
                iVar2 = this_00->GetPreanimMove();
            }
            bVar3 = iVar2 != 0;
        }
        return bVar3;
    }

    // 0x100658730, 96 bytes, placed by class name and debug map
    // AnimationWrapper::ShouldBeFinished() const
    bool AnimationWrapper::ShouldBeFinished() {
        int iVar1;
        bool bVar2;
        int iVar3;
        AnimationParameters* pAVar5;

        pAVar5 =
            (AnimationParameters*)std::unique_ptr<
                graphics::AnimationParameters, MakeUniquePool<graphics::AnimationParameters, 512>::UniquePoolDeleter>::
            operator->((unique_ptr<graphics::AnimationParameters,
                                   MakeUniquePool<graphics::AnimationParameters, 512>::UniquePoolDeleter>*)&field_48);
        iVar3 = pAVar5->GetTicksThroughAnimation();
        if ((field_32 & 4294967293) == 0) {
            iVar1 = m_animationLateness;
            pAVar5 =
                (AnimationParameters*)
                    std::unique_ptr<graphics::AnimationParameters,
                                    MakeUniquePool<graphics::AnimationParameters, 512>::UniquePoolDeleter>::
                    operator->(
                        (unique_ptr<graphics::AnimationParameters,
                                    MakeUniquePool<graphics::AnimationParameters, 512>::UniquePoolDeleter>*)&field_48);
            bVar2 = pAVar5->GetAnimationLength() <= iVar3 + iVar1;
        } else {
            bVar2 = false;
        }
        return bVar2;
    }

    // 0x100658790, 96 bytes, placed by class name and debug map
    // AnimationWrapper::ShouldBeFinishedOrLooping() const
    bool AnimationWrapper::ShouldBeFinishedOrLooping() {
        uint uVar1;
        int iVar2;
        AnimationParameters* pAVar3;
        int iVar4;
        int iVar5;

        pAVar3 =
            (AnimationParameters*)std::unique_ptr<
                graphics::AnimationParameters, MakeUniquePool<graphics::AnimationParameters, 512>::UniquePoolDeleter>::
            operator->((unique_ptr<graphics::AnimationParameters,
                                   MakeUniquePool<graphics::AnimationParameters, 512>::UniquePoolDeleter>*)&field_48);
        iVar4 = pAVar3->GetTicksThroughAnimation();
        uVar1 = field_32;
        iVar2 = m_animationLateness;
        pAVar3 =
            (AnimationParameters*)std::unique_ptr<
                graphics::AnimationParameters, MakeUniquePool<graphics::AnimationParameters, 512>::UniquePoolDeleter>::
            operator->((unique_ptr<graphics::AnimationParameters,
                                   MakeUniquePool<graphics::AnimationParameters, 512>::UniquePoolDeleter>*)&field_48);
        if (uVar1 == 2) {
            iVar5 = pAVar3->GetAnimationLength();
        } else {
            iVar5 = pAVar3->GetPreLoopLength();
        }
        return iVar5 <= iVar2 + iVar4;
    }

} // namespace jag::game

namespace jag {
    // 0x1006584e0, 32 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr<graphics::WalkMergeDataProvider> static_pointer_cast<graphics::WalkMergeDataProvider, shared_ptr<game::SeqGroupType> >(shared_ptr<game::SeqGroupType> const&)
    shared_ptr* jag::static_pointer_cast<graphics::WalkMergeDataProvider, shared_ptr<game::SeqGroupType>>(
        shared_ptr* __return_storage_ptr__, jag* this, shared_ptr* param_1) {
        shared_ptr<graphics::WalkMergeDataProvider>::shared_ptr<game::SeqGroupType>(__return_storage_ptr__,
                                                                                    (shared_ptr_static_cast*)this);
        return __return_storage_ptr__;
    }

} // namespace jag
