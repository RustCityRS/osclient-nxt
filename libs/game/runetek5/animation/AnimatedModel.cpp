// libs/game/runetek5/animation/AnimatedModel.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.game.runetek5

#include "AnimatedModel.h"

namespace jag::game {
    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    AnimatedModel::OnOverrideAnimationFinished(int);

    // 0x100029ea0: the linker folded this into oldscape::InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long), which has identical code
    AnimatedModel::RepeatLastOverrideAnimationFrameWhenFinished(int) const;

    // 0x100666c90, 528 bytes, base-object constructor, placed by class name and debug map
    // AnimatedModel::AnimatedModel(graphics::RT7Core&, AssetBuilder&, ConfigProvider const&, graphics::AnimationLoopBehaviour, bool, std::function<void (int, int, int, int, int, int)> const&)
    /* AnimatedModel::AnimatedModel(graphics::RT7Core&, AssetBuilder&,
   ConfigProvider const&, graphics::AnimationLoopBehaviour, bool, std::function<void
   (int, int, int, int, int, int)> const&) */

    void AnimatedModel::AnimatedModel(RT7Core* param_1, undefined8 param_2, ConfigProvider* param_3, undefined4 param_5,
                                      undefined1 param_6, function* param_7) {
        undefined8 uVar1;
        undefined8 uVar2;
        undefined8 uVar3;
        undefined8 uVar4;
        undefined8 uVar5;
        undefined8 uVar6;
        undefined8 uVar7;
        _func_decltype_nullptr* p_Var8;

        field_0 = &PTR__AnimatedModel_100f0df60;
        new (&field_8, (_func_decltype_nullptr*)param_1) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        field_24 = param_1;
        field_32 = param_2;
        field_40 = param_3;
        new (&field_48, 16, "AnimatedModel") LRUHashCache<AnimationWrapper, 16ul, 17ul, false, unsigned long long>();
        MakeSharedPool<graphics::AnimationState, 256>::MakeShared<>((shared_ptr*)field_1584,
                                                                    (MakeSharedPool<graphics::AnimationState, 256>*)16);
        field_1600 = param_6;
        field_1604 = param_5;
        std::function<void(int, int, int, int, int, int)>::function(
            (function<void(int, int, int, int, int, int)>*)&field_1616, param_7);
        new (&field_1664, 0) AnimationDetails();
        p_Var8 = (_func_decltype_nullptr*)&DAT_00000001;
        new (&field_1896, 1) AnimationDetails();
        new (field_2128, p_Var8) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        new (&field_2144) eastl::fixed_vector<shared_ptr<graphics::ParticleSystem>, 1ul, true, eastl::allocator>();
        new (&field_2200) eastl::vector<shared_ptr<graphics::ModularParticleSystem>, eastl::allocator>();
        uVar1 = *(undefined8*)PTR_IDENTITY_100ee6730;
        uVar2 = *(undefined8*)(PTR_IDENTITY_100ee6730 + 8);
        uVar3 = *(undefined8*)(PTR_IDENTITY_100ee6730 + 16);
        uVar4 = *(undefined8*)(PTR_IDENTITY_100ee6730 + 24);
        uVar5 = *(undefined8*)(PTR_IDENTITY_100ee6730 + 32);
        uVar6 = *(undefined8*)(PTR_IDENTITY_100ee6730 + 40);
        uVar7 = *(undefined8*)(PTR_IDENTITY_100ee6730 + 56);
        field_2288 = *(undefined8*)(PTR_IDENTITY_100ee6730 + 48);
        field_2296 = uVar7;
        field_2272 = uVar5;
        field_2280 = uVar6;
        field_2256 = uVar3;
        field_2264 = uVar4;
        field_2240 = uVar1;
        field_2248 = uVar2;
        new (m_currentModel, p_Var8) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        new (&field_2320) eastl::optional<bool>();
        new (&field_2322) eastl::optional<bool>();
        new (field_2328, p_Var8) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        field_2344 = 0;
    }

    // 0x100666fb0, 16 bytes, complete-object constructor, placed by class name and debug map
    // AnimatedModel::AnimationDetails::AnimationDetails(int): jumps straight to the base-object constructor

    // 0x100667030, 304 bytes, base-object destructor, placed by class name and debug map
    // AnimatedModel::~AnimatedModel()
    void AnimatedModel::~AnimatedModel() {
        field_0 = &PTR__AnimatedModel_100f0df60;
        Destruct(this);
        field_2328->~shared_ptr();
        m_currentModel->~shared_ptr();
        (&field_2200)->~vector();
        (&field_2144)->~fixed_vector();
        field_2128->~shared_ptr();
        (&field_1896)->~AnimationDetails();
        (&field_1664)->~AnimationDetails();
        std::function<void(int, int, int, int, int, int)>::~function(
            (function<void(int, int, int, int, int, int)>*)&field_1616);
        field_1584->~shared_ptr();
        (&field_48)->~LRUHashCache();
        (&field_8)->~weak_ptr();
    }

    // 0x100667160, 160 bytes, placed by class name and debug map
    // AnimatedModel::Destruct()
    void AnimatedModel::Destruct() {
        AnimationState* this_00;
        bool bVar2;

        (&field_48)->Reset();
        this_00 = (AnimationState*)shared_ptr<graphics::AnimationState>::operator->(
            (shared_ptr<graphics::AnimationState>*)field_1584);
        this_00->ClearState();
        (&field_1896)->ClearAllAnimations();
        (&field_1664)->ClearAllAnimations();
        (&field_2144)->clear();
        (&field_2200)->clear();
        if (InUse(this) == '\0') {
            bVar2 = m_currentModel->operator_cast_to_bool();
            if (bVar2) {
                shared_ptr<graphics::Model>::reset();
            }
        }
        bVar2 = field_2128->operator_cast_to_bool();
        if (bVar2) {
            shared_ptr<graphics::Model>::reset();
        }
    }

    // 0x100667200, 16 bytes, complete-object destructor, placed by class name and debug map
    // AnimatedModel::~AnimatedModel(): jumps straight to the base-object destructor

    // 0x100667210, 16 bytes, deleting destructor, placed by class name and debug map
    // AnimatedModel::~AnimatedModel()
    void AnimatedModel::~AnimatedModel() {
        code* pcVar1;

        /* WARNING: Does not return */
        pcVar1 = (code*)invalidInstructionException();
        (*pcVar1)();
    }

    // 0x100667260, 32 bytes, placed by class name and debug map
    // AnimatedModel::AnimationDetails::ClearAllAnimations()
    void AnimatedModel::AnimationDetails::ClearAllAnimations() {
        ClearActiveAnimation(this);
        ClearRequestedAnimation(this);
    }

    // 0x100667280, 32 bytes, placed by class name and debug map
    // AnimatedModel::SetOverrideSourceTicks(unsigned int, unsigned int)
    void AnimatedModel::SetOverrideSourceTicks(uint param_1, uint param_2) {
        m_overrideSourceTicks = param_1;
        field_2108 = param_2;
    }

    // 0x1006672a0, 864 bytes, placed by class name and debug map
    // AnimatedModel::Build(unsigned int, unsigned int, bool, int)
    bool AnimatedModel::Build(uint param_1, uint param_2, bool param_3, int param_4) {
        int* this_00;
        undefined1* this_01;
        undefined1* this_02;
        char cVar1;
        bool bVar2;
        long* plVar3;
        Model* pMVar4;
        vector* pvVar5;
        shared_ptr<graphics::ParticleSystem>* this_03;
        shared_ptr<graphics::ParticleSystem>* psVar6;
        ParticleSystem* this_04;
        long lVar7;
        undefined1 local_58[36];

        plVar3 = (long*)Instance();
        cVar1 = (**(code**)(*plVar3 + 224))(plVar3);
        if (cVar1 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("GraphicsApp::Instance()->IsInsideMainLogic()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/animation/"
                      "AnimatedModel.cpp",
                      136, (char*)0);
        }
        this_00 = &field_1896;
        cVar1 = this_00->HasRequestedAnimation();
        if ((cVar1 == '\0') && (cVar1 = (&field_1664)->HasRequestedAnimation(), cVar1 == '\0')) {
            bVar2 = m_currentModel->operator_cast_to_bool();
            if ((!bVar2) && (cVar1 = InUse(this), cVar1 == '\0')) {
                new (local_58) AnimatedModelPair();
                cVar1 = (*(code*)field_0[4])(this, (AnimatedModelPair*)local_58, 4294967295);
                if (cVar1 != '\0') {
                    shared_ptr<graphics::Model>::operator=((shared_ptr<graphics::Model>*)field_2128,
                                                           (shared_ptr*)local_58);
                    SetCurrentModel(this, (shared_ptr*)local_58);
                }
            LAB_1006674d9:
                local_58->~ActiveComponent();
            }
        } else {
            cVar1 = this_00->HasRequestedAnimation();
            if ((cVar1 != '\0') && (cVar1 = (&field_2080)->CanBuild(), cVar1 != '\0')) {
                new (local_58) AnimatedModelPair();
                cVar1 = (*(code*)field_0[5])(this, local_58, m_overrideAnimationRequestedSeqID);
                if (cVar1 != '\0') {
                    ServiceAnimationLoading(this, (AnimationDetails*)this_00, true, param_1, param_2,
                                            (shared_ptr*)local_58, (shared_ptr*)(local_58 + 16), param_4);
                }
                local_58->~ActiveComponent();
            }
            cVar1 = (&field_1664)->HasRequestedAnimation();
            if (((cVar1 != '\0') && (!param_3)) && (cVar1 = (&field_1848)->CanBuild(), cVar1 != '\0')) {
                new (local_58) AnimatedModelPair();
                cVar1 = (*(code*)field_0[4])(this, (AnimatedModelPair*)local_58, field_1784);
                if (cVar1 != '\0') {
                    shared_ptr<graphics::Model>::operator=((shared_ptr<graphics::Model>*)field_2128,
                                                           (shared_ptr*)local_58);
                    bVar2 = field_2128->operator_cast_to_bool();
                    if (bVar2) {
                        ServiceAnimationLoading(this, (AnimationDetails*)&field_1664, false, param_1, param_2,
                                                (shared_ptr*)local_58, (shared_ptr*)(local_58 + 16), param_4);
                    } else {
                        (&m_defaultAnimationSeqID)->Reset();
                        (&field_1784)->Reset();
                        (&m_overrideAnimationSeqID)->Reset();
                        (&m_overrideAnimationRequestedSeqID)->Reset();
                        shared_ptr<graphics::Model>::reset();
                    }
                }
                goto LAB_1006674d9;
            }
        }
        UpdateAnimationsState(this, param_1, param_2, param_4);
        this_01 = m_currentModel;
        bVar2 = this_01->operator_cast_to_bool();
        if (bVar2) {
            pMVar4 = (Model*)shared_ptr<graphics::Model>::operator->((shared_ptr<graphics::Model>*)this_01);
            cVar1 = pMVar4->HasParticleEmitters();
            this_02 = &field_2144;
            if (cVar1 == '\0') {
                this_02->clear();
            } else {
                cVar1 = this_02->empty();
                if (cVar1 == '\0') {
                    pMVar4 = (Model*)shared_ptr<graphics::Model>::operator->((shared_ptr<graphics::Model>*)this_01);
                    pvVar5 = (vector*)pMVar4->GetParticleEmitters();
                    this_03 = (shared_ptr<graphics::ParticleSystem>*)this_02->HeapBeginPtr();
                    psVar6 = (shared_ptr<graphics::ParticleSystem>*)this_02->end();
                    for (; this_03 != psVar6; this_03 = this_03 + 16) {
                        this_04 = (ParticleSystem*)shared_ptr<graphics::ParticleSystem>::operator->(this_03);
                        this_04->KeepActiveParticleEmitters(pvVar5);
                    }
                }
            }
            pMVar4 = (Model*)shared_ptr<graphics::Model>::operator->((shared_ptr<graphics::Model>*)this_01);
            cVar1 = pMVar4->HasVFXs();
            if (cVar1 != '\0')
                goto LAB_1006675b4;
        } else {
            (&field_2144)->clear();
        }
        (&field_2200)->clear();
    LAB_1006675b4:
        (&field_48, 1000)->Clean();
        lVar7 = this_01->end();
        return lVar7 != 0;
    }

    // 0x100667610, 880 bytes, placed by class name and debug map
    // AnimatedModel::ServiceAnimationLoading(AnimatedModel::AnimationDetails&, bool, unsigned int, int, shared_ptr<graphics::Model> const&, shared_ptr<graphics::Model> const&, int)
    void AnimatedModel::ServiceAnimationLoading(AnimationDetails* param_1, bool param_2, uint param_3, int param_4,
                                                shared_ptr* param_5, shared_ptr* param_6, int param_7) {
        undefined1* this_00;
        int* piVar1;
        ConfigProvider* pCVar2;
        AnimatedModel* pAVar3;
        undefined4 uVar4;
        bool bVar5;
        char cVar6;
        uint uVar7;
        int iVar8;
        Model* this_01;
        shared_ptr* psVar9;
        AnimationWrapper* pAVar10;
        CommandLine* this_02;
        AnimationState* this_03;
        undefined7 in_register_00000011;
        bool* in_stack_ffffffffffffff78;
        shared_ptr local_80;
        ConfigProvider* local_70;
        shared_ptr* local_68;
        int local_5c;
        uint local_54;
        AnimationDetails* local_50;
        uint local_44;
        AnimatedModel* local_40;
        undefined4 local_38;
        byte local_31;

        local_38 = (undefined4)CONCAT71(in_register_00000011, param_2);
        local_40 = this;
        if (param_1->field_120 == -1) {
            /* WARNING: Subroutine does not return */
            LogAssert("animationDetails.m_requested.m_seqID != -1",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/animation/"
                      "AnimatedModel.cpp",
                      302, (char*)0);
        }
        this_01 = (Model*)shared_ptr<graphics::Model>::operator->((shared_ptr<graphics::Model>*)param_6);
        uVar7 = this_01->GetModelRawUniqueID();
        shared_ptr<graphics::Model>::operator=((shared_ptr<graphics::Model>*)&param_1->field_144, param_5);
        psVar9 = (shared_ptr*)&param_1->field_160;
        shared_ptr<graphics::Model>::operator=((shared_ptr<graphics::Model>*)psVar9, param_6);
        this_00 = &param_1->field_128;
        bVar5 = this_00->operator_cast_to_bool();
        pAVar3 = local_40;
        local_50 = param_1;
        if (!bVar5) {
            local_70 = (ConfigProvider*)&param_1->field_120;
            local_68 = psVar9;
            local_54 = uVar7;
            local_44 = param_4;
            psVar9 = (shared_ptr*)GetCachedAnimation(local_40, *(int*)local_70, uVar7);
            bVar5 = shared_ptr::operator_cast_to_bool(psVar9);
            pCVar2 = local_70;
            if (bVar5) {
                shared_ptr<AnimationWrapper>::operator=((shared_ptr<AnimationWrapper>*)this_00, psVar9);
                if (((char)local_38 != '\0') && (local_50->field_216 == '\0')) {
                    pAVar10 = (AnimationWrapper*)shared_ptr<AnimationWrapper>::operator->(
                        (shared_ptr<AnimationWrapper>*)this_00);
                    pAVar10->Restart(local_44, local_50->field_176);
                }
                this_02 =
                    (CommandLine*)shared_ptr<AnimationWrapper>::operator->((shared_ptr<AnimationWrapper>*)this_00);
                iVar8 = this_02->GetPos();
                uVar7 = local_54;
                if (iVar8 != *(int*)&pCVar2->field_0) {
                    /* WARNING: Subroutine does not return */
                    LogAssert("requestedModelSet.m_animation->GetSourceID() == requestedModelSet.m_seqID",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                              "animation/AnimatedModel.cpp",
                              326, (char*)0);
                }
            } else {
                local_5c = 0;
                local_31 = ((byte)local_38 ^ 1) & pAVar3->field_1600 != '\0';
                MakeSharedPool<AnimationWrapper, 512>::MakeShared<AssetBuilder&, ConfigProvider_const&, int&, int,
                                                                  graphics::AnimationLoopBehaviour&, bool, bool&>(
                    &local_80, (MakeSharedPool<AnimationWrapper, 512>*)pAVar3->field_32,
                    (AssetBuilder*)pAVar3->field_40, local_70, &local_5c, &pAVar3->field_1604, &local_31,
                    (bool*)&param_1->field_201, in_stack_ffffffffffffff78);
                shared_ptr<AnimationWrapper>::operator=((shared_ptr<AnimationWrapper>*)this_00, &local_80);
                local_80.~shared_ptr();
                pAVar10 =
                    (AnimationWrapper*)shared_ptr<AnimationWrapper>::operator->((shared_ptr<AnimationWrapper>*)this_00);
                pAVar10->SetAudioTrigger((function*)&pAVar3->field_1616);
                uVar7 = local_54;
                PutCachedAnimation(pAVar3, (shared_ptr*)this_00, local_54);
            }
            param_4 = local_44;
            psVar9 = local_68;
            pAVar10 =
                (AnimationWrapper*)shared_ptr<AnimationWrapper>::operator->((shared_ptr<AnimationWrapper>*)this_00);
            pAVar10->SetReadyAnim((bool)(~(byte)local_38 & local_50->field_200 != '\0'));
        }
        pAVar10 = (AnimationWrapper*)shared_ptr<AnimationWrapper>::operator->((shared_ptr<AnimationWrapper>*)this_00);
        cVar6 = pAVar10->Build(local_40->field_40, uVar7, psVar9, param_4);
        uVar4 = local_38;
        if (cVar6 == '\0') {
            return;
        }
        (&local_50->field_184, true)->SetReady();
        pAVar3 = local_40;
        bVar5 = SUB41(uVar4, 0);
        cVar6 = bVar5;
        if (bVar5 == false) {
            cVar6 = HasRequestedOverrideAnimation(local_40);
            if (cVar6 == '\0') {
                piVar1 = &pAVar3->m_overrideAnimationSeqID;
                cVar6 = piVar1->IsDelayedAnimation(param_7);
                if (cVar6 != '\0')
                    goto LAB_1006678ca;
                cVar6 = piVar1->HasStarted();
            } else {
                cVar6 = (&pAVar3->m_overrideAnimationRequestedSeqID, param_7)->IsDelayedAnimation();
            }
        }
        if (cVar6 == '\0') {
            return;
        }
    LAB_1006678ca:
        if (bVar5 != false) {
            cVar6 = (&local_40->m_overrideAnimationSeqID)->InUse();
            if ((cVar6 != '\0') &&
                (cVar6 = (&local_40->m_overrideAnimationRequestedSeqID, param_3, param_4)->IsReady(), cVar6 == '\0')) {
                return;
            }
            if (bVar5 != false) {
                if (local_40->field_2000 == '\0') {
                    this_03 = (AnimationState*)shared_ptr<graphics::AnimationState>::operator->(
                        (shared_ptr<graphics::AnimationState>*)local_40->field_1584);
                    this_03->ClearState();
                }
                piVar1 = &local_50->field_8;
                cVar6 = piVar1->InUse();
                if (cVar6 != '\0') {
                    (*(code*)local_40->field_0[2])(local_40, *piVar1);
                }
            }
        }
        local_50->ActivateRequestedAnimation(bVar5, param_4);
    }

    // 0x100667980, 112 bytes, placed by class name and debug map
    // AnimatedModel::ModelAnimationSet::Reset()
    void AnimatedModel::ModelAnimationSet::Reset() {
        field_0 = 4294967295;
        shared_ptr<AnimationWrapper>::reset();
        shared_ptr<graphics::Model>::reset();
        shared_ptr<graphics::Model>::reset();
        field_56 = 0;
        field_60 = 5;
        (&field_64)->UnSync();
        field_92 = 0;
        field_96 = '\0';
        field_100 = 0;
        field_104 = 0;
        field_108 = 0;
        *(undefined8*)&field_80 = 0;
    }

    // 0x100667b30, 304 bytes, placed by class name and debug map
    // AnimatedModel::UpdateAnimationsState(unsigned int, unsigned int, int)
    void AnimatedModel::UpdateAnimationsState(uint param_1, uint param_2, int param_3) {
        undefined1* this_00;
        int iVar1;
        char cVar2;
        AnimationWrapper* pAVar3;
        AnimationState* this_01;

        cVar2 = (&field_1896, param_1, param_2)->IsReady();
        if (cVar2 != '\0') {
            pAVar3 = (AnimationWrapper*)shared_ptr<AnimationWrapper>::operator->(
                (shared_ptr<AnimationWrapper>*)m_overrideAnimation);
            pAVar3->Update(param_2, param_3);
            pAVar3 = (AnimationWrapper*)shared_ptr<AnimationWrapper>::operator->(
                (shared_ptr<AnimationWrapper>*)m_overrideAnimation);
            cVar2 = pAVar3->IsFinished();
            if (cVar2 != '\0') {
                iVar1 = m_overrideAnimationSeqID;
                cVar2 = (*(code*)field_0[3])(this, iVar1);
                if (cVar2 == '\0') {
                    this_01 = (AnimationState*)shared_ptr<graphics::AnimationState>::operator->(
                        (shared_ptr<graphics::AnimationState>*)field_1584);
                    this_01->ClearState();
                    (&field_1896)->ClearActiveAnimation();
                    (*(code*)field_0[2])(this, iVar1);
                }
            }
        }
        cVar2 = (&field_1664, param_1, param_2)->IsReady();
        if (cVar2 != '\0') {
            this_00 = m_defaultAnimation;
            pAVar3 =
                (AnimationWrapper*)shared_ptr<AnimationWrapper>::operator->((shared_ptr<AnimationWrapper>*)this_00);
            pAVar3->Update(param_2, param_3);
            pAVar3 =
                (AnimationWrapper*)shared_ptr<AnimationWrapper>::operator->((shared_ptr<AnimationWrapper>*)this_00);
            cVar2 = pAVar3->IsFinished();
            if (cVar2 != '\0') {
                pAVar3 =
                    (AnimationWrapper*)shared_ptr<AnimationWrapper>::operator->((shared_ptr<AnimationWrapper>*)this_00);
                pAVar3->Reset(param_2, 0);
                m_defaultAnimationRunCount = m_defaultAnimationRunCount + 1;
            }
        }
        ApplyAnimationStateToModel(this, param_1, param_2, param_3);
    }

    // 0x100667ce0, 112 bytes, placed by class name and debug map
    // AnimatedModel::IsReady(unsigned int, unsigned int)
    undefined4 AnimatedModel::IsReady(uint param_1, uint param_2) {
        char cVar1;
        undefined4 uVar2;

        if ((m_overrideAnimationRequestedSeqID != -1) &&
            (cVar1 = (&field_1896, param_1, param_2)->IsReady(), cVar1 != '\0')) {
            return 1;
        }
        if (field_1784 == -1) {
            uVar2 = 1;
        } else {
            uVar2 = (&field_1664, param_1, param_2)->IsReady();
        }
        return uVar2;
    }

    // 0x100667d50, 16 bytes, placed by class name and debug map
    // AnimatedModel::AnimationDetails::IsReady(unsigned int, unsigned int)
    void AnimatedModel::AnimationDetails::IsReady(uint param_1, uint param_2) {
        (&field_8, param_1, param_2)->IsReady();
    }

    // 0x100667d60, 176 bytes, placed by class name and debug map
    // AnimatedModel::IsLoaded() const
    undefined8 AnimatedModel::IsLoaded() {
        undefined1* this_00;
        char cVar1;
        bool bVar2;
        Model* pMVar3;

        cVar1 = (&field_1896)->IsActiveAnimationLoaded();
        if ((cVar1 != '\0') || (cVar1 = (&field_1664)->IsActiveAnimationLoaded(), cVar1 != '\0')) {
            this_00 = m_currentModel;
            bVar2 = this_00->operator_cast_to_bool();
            if (!bVar2) {
                bVar2 = field_2128->operator_cast_to_bool();
                if (!bVar2) {
                    return 1;
                }
            }
            bVar2 = this_00->operator_cast_to_bool();
            if (bVar2) {
                pMVar3 = (Model*)shared_ptr<graphics::Model>::operator->((shared_ptr<graphics::Model>*)this_00);
                cVar1 = pMVar3->IsReadyToRender();
                if (cVar1 != '\0') {
                    return 1;
                }
            }
            bVar2 = field_2128->operator_cast_to_bool();
            if (bVar2) {
                pMVar3 = (Model*)shared_ptr<graphics::Model>::operator->((shared_ptr<graphics::Model>*)field_2128);
                return pMVar3->IsReadyToRender();
            }
        }
        return 0;
    }

    // 0x100667e10, 16 bytes, placed by class name and debug map
    // AnimatedModel::AnimationDetails::IsActiveAnimationLoaded() const
    void AnimatedModel::AnimationDetails::IsActiveAnimationLoaded() {
        (&field_8)->IsAnimationBuilt();
    }

    // 0x100667e20, 80 bytes, placed by class name and debug map
    // AnimatedModel::ModelAnimationSet::IsAnimationBuilt() const
    bool AnimatedModel::ModelAnimationSet::IsAnimationBuilt() {
        char cVar1;
        bool bVar2;
        AnimationWrapper* this_00;

        cVar1 = InUse(this);
        bVar2 = true;
        if (cVar1 != '\0') {
            bVar2 = field_8->operator_cast_to_bool();
            if (bVar2) {
                this_00 =
                    (AnimationWrapper*)shared_ptr<AnimationWrapper>::operator->((shared_ptr<AnimationWrapper>*)field_8);
                cVar1 = this_00->IsReady();
                if (cVar1 != '\0') {
                    return field_83 != '\0';
                }
            }
            bVar2 = false;
        }
        return bVar2;
    }

    // 0x100667e80, 48 bytes, placed by class name and debug map
    // AnimatedModel::GetCachedAnimation(int, int)
    void AnimatedModel::GetCachedAnimation(int param_1, int param_2) {
        GetCachedAnimationKey(param_1, param_2);
        LRUHashCache<AnimationWrapper, 16ul, 17ul, false, unsigned long long>::Find(&field_48);
    }

    // 0x100667f60, 128 bytes, placed by class name and debug map
    // AnimatedModel::PutCachedAnimation(shared_ptr<AnimationWrapper> const&, unsigned int)
    void AnimatedModel::PutCachedAnimation(shared_ptr* param_1, uint param_2) {
        int iVar1;
        long lVar2;
        CommandLine* this_00;
        ulonglong local_28;

        lVar2 = param_1->end();
        if (lVar2 == 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("animationWrapper.get() != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/animation/"
                      "AnimatedModel.cpp",
                      294, (char*)0);
        }
        this_00 = (CommandLine*)shared_ptr<AnimationWrapper>::operator->((shared_ptr<AnimationWrapper>*)param_1);
        iVar1 = this_00->GetPos();
        local_28 = GetCachedAnimationKey(iVar1, param_2);
        (&field_48, param_1, 1, &local_28)->Put();
    }

    // 0x100668360, 272 bytes, placed by class name and debug map
    // AnimatedModel::ModelAnimationSet::IsReady(unsigned int, unsigned int)
    undefined8 AnimatedModel::ModelAnimationSet::IsReady(uint param_1, uint param_2) {
        undefined1* this_00;
        undefined1* this_01;
        char cVar2;
        AnimationWrapper* pAVar3;
        uint uVar4;
        uint uVar5;
        uint uVar6;

        this_00 = field_8;
        if (!this_00->operator_cast_to_bool()) {
            return 0;
        }
        pAVar3 = (AnimationWrapper*)shared_ptr<AnimationWrapper>::operator->((shared_ptr<AnimationWrapper>*)this_00);
        cVar2 = pAVar3->IsReady();
        if (cVar2 == '\0') {
            return 0;
        }
        if (field_82 == '\0') {
            if (field_83 != '\0') {
                return 1;
            }
            field_83 = '\x01';
            cVar2 = field_96;
            pAVar3 =
                (AnimationWrapper*)shared_ptr<AnimationWrapper>::operator->((shared_ptr<AnimationWrapper>*)this_00);
            if (cVar2 == '\0') {
                uVar6 = field_56;
                goto LAB_100668450;
            }
            uVar6 = field_56;
            uVar5 = field_100;
            uVar4 = field_104;
        } else {
            this_01 = &field_64;
            this_01->SetReady(true);
            cVar2 = this_01->IsCycleReady(param_1);
            if (cVar2 == '\0') {
                return 0;
            }
            if (field_83 != '\0') {
                return 1;
            }
            this_01->UnSync();
            field_83 = '\x01';
            cVar2 = field_96;
            pAVar3 =
                (AnimationWrapper*)shared_ptr<AnimationWrapper>::operator->((shared_ptr<AnimationWrapper>*)this_00);
            if (cVar2 == '\0') {
                uVar6 = field_56;
            LAB_100668450:
                pAVar3->Reset(param_2, uVar6);
                goto LAB_100668458;
            }
            uVar6 = field_56;
            uVar5 = field_100;
            uVar4 = field_104;
        }
        pAVar3->ResetToTime(param_2, uVar5, uVar4, uVar6);
    LAB_100668458:
        field_56 = 0;
        return 1;
    }

    // 0x100668470, 352 bytes, placed by class name and debug map
    // AnimatedModel::AnimationDetails::ActivateRequestedAnimation(bool, unsigned int)
    void AnimatedModel::AnimationDetails::ActivateRequestedAnimation(bool param_1, uint param_2) {
        int* this_00;
        bool bVar1;
        int iVar2;
        int iVar3;
        NXTPixToolkit* pNVar4;
        shared_ptr* this_01;
        shared_ptr<SeqType>* this_02;
        GameToken* this_03;
        AnimationParameters* this_04;
        AnimationWrapper* pAVar5;
        PlayerGroupMember* pPVar6;

        this_00 = &field_120;
        if (field_120 != -1) {
            pNVar4 =
                (NXTPixToolkit*)shared_ptr<AnimationWrapper>::operator->((shared_ptr<AnimationWrapper>*)&field_128);
            this_01 = (shared_ptr*)pNVar4->GetScreen();
            bVar1 = shared_ptr::operator_cast_to_bool(this_01);
            if (bVar1) {
                pNVar4 =
                    (NXTPixToolkit*)shared_ptr<AnimationWrapper>::operator->((shared_ptr<AnimationWrapper>*)&field_128);
                this_02 = (shared_ptr<SeqType>*)pNVar4->GetScreen();
                this_03 = (GameToken*)shared_ptr<SeqType>::operator->(this_02);
                iVar2 = this_03->GetStatus();
                if (iVar2 == *this_00) {
                    iVar2 = param_2 - field_204;
                    if (param_1) {
                        field_216 = 1;
                        field_220 = iVar2;
                    } else if (field_8 == field_120) {
                        field_216 = 1;
                        bVar1 = field_16->operator_cast_to_bool();
                        if (bVar1) {
                            pAVar5 = (AnimationWrapper*)shared_ptr<AnimationWrapper>::operator->(
                                (shared_ptr<AnimationWrapper>*)field_16);
                            this_04 = (AnimationParameters*)pAVar5->GetAnimationParameters();
                            iVar3 = this_04->GetTicksThroughAnimation();
                            if (field_220 < iVar3) {
                                field_220 = iVar3;
                            }
                        } else {
                            field_220 = 0;
                        }
                    }
                    (&field_8, (ModelAnimationSet*)this_00)->swap();
                    this_00->Reset();
                    pAVar5 = (AnimationWrapper*)shared_ptr<AnimationWrapper>::operator->(
                        (shared_ptr<AnimationWrapper>*)field_16);
                    pAVar5->SetReadyAnim(field_88);
                    field_96 = param_2;
                    pPVar6 = (PlayerGroupMember*)shared_ptr<AnimationWrapper>::operator->(
                        (shared_ptr<AnimationWrapper>*)field_16);
                    pPVar6->SetStatus(iVar2 + 1);
                    return;
                }
            }
        }
        /* WARNING: Subroutine does not return */
        LogAssert("m_requested.m_seqID != -1 && m_requested.m_animation->GetSource() && "
                  "(int)m_requested.m_animation->GetSource()->GetMyID() == m_requested.m_seqID",
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/animation/"
                  "AnimatedModel.cpp",
                  915, (char*)0);
    }

    // 0x1006685d0, 80 bytes, placed by class name and debug map
    // AnimatedModel::ResetAnimationState(unsigned int)
    void AnimatedModel::ResetAnimationState(uint param_1) {
        AnimationState* this_00;
        Model* this_01;
        shared_ptr* this_02;

        this_00 = (AnimationState*)shared_ptr<graphics::AnimationState>::operator->(
            (shared_ptr<graphics::AnimationState>*)field_1584);
        this_00->ClearState();
        this_02 = (shared_ptr*)GetCurrentModel(this, param_1);
        if (shared_ptr::operator_cast_to_bool(this_02)) {
            this_01 = (Model*)shared_ptr<graphics::Model>::operator->((shared_ptr<graphics::Model>*)this_02);
            this_01->ClearAnimationState();
        }
    }

    // 0x1006686b0, 80 bytes, placed by class name and debug map
    // AnimatedModel::ResetOverrideAnimation()
    void AnimatedModel::ResetOverrideAnimation() {
        int iVar1;
        AnimationState* this_00;

        iVar1 = m_overrideAnimationSeqID;
        (&field_1896)->ClearAllAnimations();
        this_00 = (AnimationState*)shared_ptr<graphics::AnimationState>::operator->(
            (shared_ptr<graphics::AnimationState>*)field_1584);
        this_00->ClearState();
        if (iVar1 != -1) {
            (*(code*)field_0[2])(this, iVar1);
        }
    }

    // 0x100668700, 64 bytes, placed by class name and debug map
    // AnimatedModel::ResetDefaultAnimation()
    void AnimatedModel::ResetDefaultAnimation() {
        AnimationState* this_00;

        (&field_1664)->ClearAllAnimations();
        this_00 = (AnimationState*)shared_ptr<graphics::AnimationState>::operator->(
            (shared_ptr<graphics::AnimationState>*)field_1584);
        this_00->ClearState();
    }

    // 0x100668740, 112 bytes, placed by class name and debug map
    // AnimatedModel::ToString() const
    char* AnimatedModel::ToString() {
        long* plVar2;
        char* pcVar3;
        shared_ptr local_20;

        weak_ptr<oldscape::rs2lib::IfType>::lock();
        if (shared_ptr::operator_cast_to_bool(&local_20)) {
            plVar2 = (long*)shared_ptr<Entity>::operator->((shared_ptr<Entity>*)&local_20);
            pcVar3 = (char*)(**(code**)(*plVar2 + 248))(plVar2);
        } else {
            pcVar3 = "AnimatedModel";
        }
        local_20.~shared_ptr();
        return pcVar3;
    }

    // 0x1006687f0, 288 bytes, placed by class name and debug map
    // AnimatedModel::RequestOverrideAnimation(bool, int, int, bool)
    ulong AnimatedModel::RequestOverrideAnimation(bool param_1, int param_2, int param_3, bool param_4) {
        undefined1* this_00;
        int iVar1;
        bool bVar2;
        int iVar3;
        CommandLine* this_01;
        undefined8 unaff_R14;
        ulong uVar4;

        if (param_2 != -1) {
            uVar4 = CONCAT71((int7)((ulong)unaff_R14 >> 8), 1);
            if (m_overrideAnimationRequestedSeqID == param_2)
                goto LAB_1006688fa;
            iVar1 = m_overrideAnimationSeqID;
            this_00 = m_overrideAnimation;
            bVar2 = this_00->operator_cast_to_bool();
            iVar3 = -1;
            if (bVar2) {
                this_01 =
                    (CommandLine*)shared_ptr<AnimationWrapper>::operator->((shared_ptr<AnimationWrapper>*)this_00);
                iVar3 = this_01->GetPos();
            }
            if (iVar1 != iVar3) {
                /* WARNING: Subroutine does not return */
                LogAssert("m_overrideAnimation.m_active.m_seqID == (m_overrideAnimation.m_active.m_animation ? "
                          "m_overrideAnimation.m_active.m_animation->GetSourceID() : -1)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                          "animation/AnimatedModel.cpp",
                          480, (char*)0);
            }
            bVar2 = this_00->operator_cast_to_bool();
            if ((!bVar2) || (m_overrideAnimationSeqID != param_2)) {
                if (param_3 == 0) {
                    param_3 = m_overrideDelay;
                }
                (&field_1896)->ResetRequestedAnimation();
                shared_ptr<AnimationWrapper>::reset();
                m_overrideAnimationRequestedSeqID = param_2;
                m_overrideDelay = param_3;
                field_2097 = param_4;
                if ((param_1) && (field_2108 != 0)) {
                    field_2098 = 1;
                    (&field_2080, field_2108)->Sync();
                }
                goto LAB_1006688fa;
            }
        }
        uVar4 = 0;
    LAB_1006688fa:
        return uVar4 & 4294967295;
    }

    // 0x100668910, 64 bytes, placed by class name and debug map
    // AnimatedModel::AnimationDetails::ResetRequestedAnimation()
    void AnimatedModel::AnimationDetails::ResetRequestedAnimation() {
        field_120 = -1;
        field_176 = 0;
        field_203 = 0;
        field_200 = 0;
        (&field_184)->UnSync();
    }

    // 0x100668990, 176 bytes, placed by class name and debug map
    // AnimatedModel::IsOverrideBlockingMovement(int) const
    /* WARNING: Removing unreachable block (ram,4301687330) */
    /* AnimatedModel::IsOverrideBlockingMovement(int) const */

    ulong AnimatedModel::IsOverrideBlockingMovement(int param_1) {
        char cVar1;
        byte extraout_AL;
        undefined7 extraout_var;
        shared_ptr* this_00;
        SeqType* this_01;
        undefined8 uVar3;
        undefined7 uVar4;
        byte bVar5;

        cVar1 = (&m_overrideAnimationSeqID)->InUse();
        if (cVar1 == '\0') {
            cVar1 = (&m_overrideAnimationRequestedSeqID)->InUse();
            if ((cVar1 != '\0') && (m_overrideDelay == 0)) {
                this_00 =
                    ConfigProvider::GetConfig<SeqType>(field_40, m_overrideAnimationRequestedSeqID, (DataStatus**)0);
                if (shared_ptr::operator_cast_to_bool(this_00)) {
                    this_01 = (SeqType*)shared_ptr<SeqType>::operator->((shared_ptr<SeqType>*)this_00);
                    if (param_1 < 1) {
                        uVar3 = this_01->GetPostanimMove();
                    } else {
                        uVar3 = this_01->GetPreanimMove();
                    }
                    bVar5 = (int)uVar3 == 0;
                    uVar4 = (undefined7)((ulong)uVar3 >> 8);
                    goto LAB_100668a36;
                }
            }
        } else if (field_1960 == 0) {
            (&field_1896, param_1)->MayMove();
            bVar5 = extraout_AL ^ 1;
            uVar4 = extraout_var;
            goto LAB_100668a36;
        }
        bVar5 = 0;
        uVar4 = 0;
    LAB_100668a36:
        return CONCAT71(uVar4, bVar5) & 18446744073709551361;
    }

    // 0x100668b90, 80 bytes, placed by class name and debug map
    // AnimatedModel::RequestDefaultAnimation(int, bool, bool)
    void AnimatedModel::RequestDefaultAnimation(int param_1, bool param_2, bool param_3) {
        Model* pMVar1;

        pMVar1 = (Model*)m_defaultAnimationModel->end();
        RequestDefaultAnimation(this, param_1, param_2, pMVar1, true, param_3);
    }

    // 0x100668be0, 288 bytes, placed by class name and debug map
    // AnimatedModel::RequestDefaultAnimation(int, bool, graphics::Model const*, bool, bool)
    void AnimatedModel::RequestDefaultAnimation(int param_1, bool param_2, Model* param_3, bool param_4, bool param_5) {
        Model* pMVar1;
        AnimationWrapper* this_00;
        bool bVar2;
        int iVar3;
        int iVar4;

        if (param_1 != -1) {
            if (!param_5) {
                if ((m_defaultAnimationSeqID == param_1) && (param_3 != (Model*)0)) {
                    bVar2 = m_defaultAnimationModel->operator_cast_to_bool();
                    if (bVar2) {
                        iVar3 = param_3->GetExternalID();
                        pMVar1 = (Model*)shared_ptr<graphics::Model>::operator->(
                            (shared_ptr<graphics::Model>*)m_defaultAnimationModel);
                        iVar4 = pMVar1->GetExternalID();
                        if (iVar3 == iVar4) {
                            m_defaultAnimationReadyAnim = param_2;
                            this_00 = (AnimationWrapper*)shared_ptr<AnimationWrapper>::operator->(
                                (shared_ptr<AnimationWrapper>*)m_defaultAnimation);
                            this_00->SetReadyAnim(param_2);
                            return;
                        }
                    }
                }
                if ((field_1784 == param_1) && (param_3 != (Model*)0)) {
                    bVar2 = field_1808->operator_cast_to_bool();
                    if (bVar2) {
                        iVar3 = param_3->GetExternalID();
                        pMVar1 =
                            (Model*)shared_ptr<graphics::Model>::operator->((shared_ptr<graphics::Model>*)field_1808);
                        iVar4 = pMVar1->GetExternalID();
                        if (iVar3 == iVar4) {
                            field_1864 = param_2;
                            return;
                        }
                    }
                }
            }
            shared_ptr<AnimationWrapper>::reset();
            field_1784 = param_1;
            field_1864 = param_2;
            field_1865 = param_4;
        }
    }

    // 0x100668d00, 176 bytes, placed by class name and debug map
    // AnimatedModel::TranslateParticles(math::Vector3T<float> const&)
    void AnimatedModel::TranslateParticles(Vector3T* param_1) {
        shared_ptr<graphics::ParticleSystem>* this_00;
        shared_ptr<graphics::ParticleSystem>* psVar1;
        ParticleSystem* this_01;
        shared_ptr<graphics::ModularParticleSystem>* this_02;
        shared_ptr<graphics::ModularParticleSystem>* psVar2;
        ModularParticleSystem* this_03;

        this_00 = (shared_ptr<graphics::ParticleSystem>*)(&field_2144)->HeapBeginPtr();
        psVar1 = (shared_ptr<graphics::ParticleSystem>*)(&field_2144)->end();
        for (; this_00 != psVar1; this_00 = this_00 + 16) {
            this_01 = (ParticleSystem*)shared_ptr<graphics::ParticleSystem>::operator->(this_00);
            this_01->TranslateParticles(param_1);
        }
        this_02 = (shared_ptr<graphics::ModularParticleSystem>*)(&field_2200)->HeapBeginPtr();
        psVar2 = (shared_ptr<graphics::ModularParticleSystem>*)(&field_2200)->end();
        for (; this_02 != psVar2; this_02 = this_02 + 16) {
            this_03 = (ModularParticleSystem*)shared_ptr<graphics::ModularParticleSystem>::operator->(this_02);
            this_03->TranslateParticles(param_1);
        }
    }

    // 0x100668db0, 80 bytes, placed by class name and debug map
    // AnimatedModel::SetPointLightBounds(math::Vector3T<float> const&, int, int)
    void AnimatedModel::SetPointLightBounds(Vector3T* param_1, int param_2, int param_3) {
        Model* this_00;
        shared_ptr* this_01;

        this_01 = (shared_ptr*)GetCurrentModel(this);
        if (shared_ptr::operator_cast_to_bool(this_01)) {
            this_00 = (Model*)shared_ptr<graphics::Model>::operator->((shared_ptr<graphics::Model>*)this_01);
            this_00->SetPointLightBounds(param_1, param_2, param_3);
        }
    }

    // 0x100668e00, 320 bytes, placed by class name and debug map
    // AnimatedModel::GatherDrawableElements(graphics::DrawableQueue&, graphics::RT7Core&, graphics::SceneViewData const&, graphics::EffectManager const&)
    void AnimatedModel::GatherDrawableElements(DrawableQueue* param_1, RT7Core* param_2, SceneViewData* param_3,
                                               EffectManager* param_4) {
        Model* pMVar1;
        ModularParticleSystem* this_00;
        shared_ptr* this_01;
        shared_ptr<graphics::ParticleSystem>* psVar3;
        long* plVar4;
        shared_ptr<graphics::ModularParticleSystem>* psVar5;
        shared_ptr<graphics::ParticleSystem>* this_02;
        shared_ptr<graphics::ModularParticleSystem>* this_03;

        this_01 = (shared_ptr*)GetCurrentModel(this);
        if (shared_ptr::operator_cast_to_bool(this_01)) {
            pMVar1 = (Model*)shared_ptr<graphics::Model>::operator->((shared_ptr<graphics::Model>*)this_01);
            pMVar1->SetWorldTransform((Matrix44T*)&field_2240);
            this_02 = (shared_ptr<graphics::ParticleSystem>*)(&field_2144)->HeapBeginPtr();
            psVar3 = (shared_ptr<graphics::ParticleSystem>*)(&field_2144)->end();
            for (; this_02 != psVar3; this_02 = this_02 + 16) {
                plVar4 = (long*)shared_ptr<graphics::ParticleSystem>::operator->(this_02);
                (**(code**)(*plVar4 + 16))(plVar4, param_1, param_2, param_3, param_4);
            }
            this_03 = (shared_ptr<graphics::ModularParticleSystem>*)(&field_2200)->HeapBeginPtr();
            psVar5 = (shared_ptr<graphics::ModularParticleSystem>*)(&field_2200)->end();
            for (; this_03 != psVar5; this_03 = this_03 + 16) {
                this_00 = (ModularParticleSystem*)shared_ptr<graphics::ModularParticleSystem>::operator->(this_03);
                plVar4 = (long*)this_00->GetDrawable();
                (**(code**)(*plVar4 + 16))(plVar4, param_1, param_2, param_3, param_4);
            }
            pMVar1 = (Model*)shared_ptr<graphics::Model>::operator->((shared_ptr<graphics::Model>*)this_01);
            pMVar1->GatherDrawableElements(param_1, param_2, param_3, param_4);
        }
    }

    // 0x100668f40, 544 bytes, placed by class name and debug map
    // AnimatedModel::ApplyAnimationStateToModel(unsigned int, unsigned int, int)
    void AnimatedModel::ApplyAnimationStateToModel(uint param_1, uint param_2, int param_3) {
        int iVar1;
        char cVar2;
        byte bVar3;
        bool bVar4;
        undefined8 uVar5;
        ulong uVar6;
        AnimationWrapper* pAVar7;
        Model* pMVar8;
        AnimationState* pAVar9;
        shared_ptr* psVar10;
        shared_ptr local_48;
        uint local_38;
        undefined4 local_34;

        cVar2 = (&field_1896, param_1, param_2)->IsReady();
        if (cVar2 == '\0') {
            bVar3 = 0;
        } else {
            bVar3 = (&field_1896, param_3)->IsDelayed();
            bVar3 = bVar3 ^ 1;
        }
        cVar2 = (&field_1664, param_1, param_2)->IsReady();
        if ((cVar2 == '\0') || ((bVar3 != 0 && (m_defaultAnimationReadyAnim != false)))) {
            uVar6 = 0;
            if (bVar3 != 0)
                goto LAB_100668ff9;
        LAB_100669062:
            if ((char)uVar6 == '\0')
                goto LAB_100669076;
            psVar10 = (shared_ptr*)m_defaultAnimationModel;
        } else {
            pAVar7 = (AnimationWrapper*)shared_ptr<AnimationWrapper>::operator->(
                (shared_ptr<AnimationWrapper>*)m_defaultAnimation);
            iVar1 = field_1664;
            pAVar9 = (AnimationState*)shared_ptr<graphics::AnimationState>::operator*(
                (shared_ptr<graphics::AnimationState>*)field_1584);
            uVar5 = pAVar7->ApplyToAnimationState(iVar1, pAVar9, false);
            uVar6 = CONCAT71((int7)((ulong)uVar5 >> 8), 1);
            if (bVar3 == 0)
                goto LAB_100669062;
        LAB_100668ff9:
            local_38 = (uint)uVar6;
            if (cVar2 == '\0') {
                local_34 = 0;
            } else {
                local_34 = (undefined4)CONCAT71((int7)(uVar6 >> 8), m_defaultAnimationReadyAnim == false);
            }
            pAVar7 = (AnimationWrapper*)shared_ptr<AnimationWrapper>::operator->(
                (shared_ptr<AnimationWrapper>*)m_overrideAnimation);
            iVar1 = field_1896;
            pAVar9 = (AnimationState*)shared_ptr<graphics::AnimationState>::operator*(
                (shared_ptr<graphics::AnimationState>*)field_1584);
            pAVar7->ApplyToAnimationState(iVar1, pAVar9, local_34._0_1_);
            uVar6 = (ulong)local_38;
            if (bVar3 == 0)
                goto LAB_100669062;
            psVar10 = (shared_ptr*)m_overrideAnimationModel;
        }
        SetCurrentModel(this, psVar10);
    LAB_100669076:
        if ((cVar2 != '\0' || bVar3 != 0) || (bVar4 = field_2328->operator_cast_to_bool(), bVar4)) {
            bVar4 = m_currentModel->operator_cast_to_bool();
            if (bVar4) {
                bVar4 = field_2328->operator_cast_to_bool();
                pMVar8 = (Model*)shared_ptr<graphics::Model>::operator->((shared_ptr<graphics::Model>*)m_currentModel);
                if (bVar4) {
                    pMVar8->SetAnimationStateProvider(field_2328);
                } else {
                    new (&local_48) shared_ptr<oldscape::dash3d::Decor>(field_1584);
                    pMVar8->SetAnimationStateProvider(&local_48);
                    local_48.~shared_ptr();
                }
            }
        } else {
            pAVar9 = (AnimationState*)shared_ptr<graphics::AnimationState>::operator->(
                (shared_ptr<graphics::AnimationState>*)field_1584);
            pAVar9->ClearState();
            bVar4 = m_currentModel->operator_cast_to_bool();
            if (bVar4) {
                pMVar8 = (Model*)shared_ptr<graphics::Model>::operator->((shared_ptr<graphics::Model>*)m_currentModel);
                pMVar8->ClearAnimationState();
            }
        }
    }

    // 0x100669160, 96 bytes, placed by class name and debug map
    // AnimatedModel::AnimationDetails::IsDelayed(int) const
    bool AnimatedModel::AnimationDetails::IsDelayed(int param_1) {
        char cVar1;
        bool bVar2;
        AnimationWrapper* pAVar4;
        undefined1* this_00;

        cVar1 = (&field_8, param_1)->IsDelayedAnimation();
        bVar2 = true;
        if (cVar1 == '\0') {
            this_00 = field_16;
            bVar2 = this_00->operator_cast_to_bool();
            if (bVar2) {
                pAVar4 =
                    (AnimationWrapper*)shared_ptr<AnimationWrapper>::operator->((shared_ptr<AnimationWrapper>*)this_00);
                cVar1 = pAVar4->IsReady();
                if (cVar1 != '\0') {
                    pAVar4 = (AnimationWrapper*)shared_ptr<AnimationWrapper>::operator->(
                        (shared_ptr<AnimationWrapper>*)this_00);
                    return pAVar4->GetDelay() != 0;
                }
            }
            bVar2 = false;
        }
        return bVar2;
    }

    // 0x100669200, 16 bytes, placed by class name and debug map
    // AnimatedModel::DebugOuputRunningAnimation(unsigned int, bool, bool)
    void AnimatedModel::DebugOuputRunningAnimation(uint param_1, bool param_2, bool param_3) {}

    // 0x100669210, 64 bytes, placed by class name and debug map
    // AnimatedModel::SetWorldTransform(math::Matrix44T<float> const&, unsigned int)
    void AnimatedModel::SetWorldTransform(Matrix44T* param_1, uint param_2) {
        math::Matrix44T<float>::operator=((Matrix44T<float>*)&field_2240, param_1);
        UpdateParticles(this, (Matrix44T*)&field_2240, param_2);
    }

    // 0x100669250, 640 bytes, placed by class name and debug map
    // AnimatedModel::UpdateParticles(math::Matrix44T<float> const&, unsigned int)
    void AnimatedModel::UpdateParticles(Matrix44T* param_1, uint param_2) {
        RT7Core* pRVar1;
        AnimationStateProvider* pAVar2;
        Model* pMVar3;
        LoginManager* this_00;
        RenderMaterial* this_01;
        undefined8 uVar4;
        Drawable* pDVar5;
        ModularParticleSystem* this_02;
        Layout* this_03;
        bool bVar6;
        char cVar7;
        shared_ptr* this_04;
        shared_ptr<graphics::ParticleSystem>* psVar8;
        shared_ptr<graphics::ModularParticleSystem>* psVar9;
        shared_ptr<graphics::ParticleSystem>* psVar10;
        shared_ptr<graphics::ModularParticleSystem>* this_05;
        shared_ptr<oldscape::dash3d::Decor> local_50[16];
        vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>* local_40;
        Model* local_38;

        this_04 = (shared_ptr*)GetCurrentModel(this, param_2);
        bVar6 = shared_ptr::operator_cast_to_bool(this_04);
        if (bVar6) {
            bVar6 = field_2328->operator_cast_to_bool();
            if (bVar6) {
                shared_ptr<oldscape::dash3d::Decor>::shared_ptr(local_50, (shared_ptr*)field_2328);
            } else {
                shared_ptr<oldscape::dash3d::Decor>::shared_ptr(local_50, (shared_ptr*)field_1584);
            }
            local_38 = (Model*)shared_ptr<graphics::Model>::operator->((shared_ptr<graphics::Model>*)this_04);
            pRVar1 = field_24;
            pAVar2 = (AnimationStateProvider*)local_50->end();
            pMVar3 = local_38;
            local_38 = (Model*)&field_2144;
            pMVar3->UpdateParticleEmitters(pRVar1, (fixed_vector*)&field_2144, param_1, pAVar2, (vector_map*)0, false);
            pMVar3 = (Model*)shared_ptr<graphics::Model>::operator->((shared_ptr<graphics::Model>*)this_04);
            pRVar1 = field_24;
            pAVar2 = (AnimationStateProvider*)local_50->end();
            local_40 =
                (vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>*)&field_2200;
            pMVar3->UpdateModularParticleSystems(pRVar1, (vector*)&field_2200, param_1, pAVar2, (vector_map*)0, false);
            cVar7 = local_38->empty();
            if (cVar7 == '\0') {
                bVar6 = (&field_2320)->IsNull();
                pMVar3 = local_38;
                if (bVar6) {
                    psVar10 = (shared_ptr<graphics::ParticleSystem>*)local_38->HeapBeginPtr();
                    psVar8 = (shared_ptr<graphics::ParticleSystem>*)pMVar3->end();
                    for (; psVar10 != psVar8; psVar10 = psVar10 + 16) {
                        this_00 = (LoginManager*)shared_ptr<graphics::ParticleSystem>::operator->(psVar10);
                        this_01 = (RenderMaterial*)this_00->GetDevCredentialsOutputDirectory();
                        uVar4 = eastl::optional<bool>::value();
                        this_01->SetOption(1, *(bool*)uVar4);
                    }
                    (&field_2320)->reset();
                }
            }
            cVar7 = local_38->empty();
            if ((cVar7 == '\0') ||
                (cVar7 = eastl::vector<
                     int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>::empty(local_40),
                 cVar7 == '\0')) {
                bVar6 = (&field_2322)->IsNull();
                pMVar3 = local_38;
                if (bVar6) {
                    psVar10 = (shared_ptr<graphics::ParticleSystem>*)local_38->HeapBeginPtr();
                    psVar8 = (shared_ptr<graphics::ParticleSystem>*)pMVar3->end();
                    this_03 = (Layout*)local_40;
                    for (; local_40 =
                               (vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>*)
                                   this_03,
                           psVar10 != psVar8;
                         psVar10 = psVar10 + 16) {
                        pDVar5 = (Drawable*)shared_ptr<graphics::ParticleSystem>::operator->(psVar10);
                        uVar4 = eastl::optional<bool>::value();
                        pDVar5->SetRenderFlag(1, *(bool*)uVar4);
                        this_03 = (Layout*)local_40;
                    }
                    this_05 = (shared_ptr<graphics::ModularParticleSystem>*)eastl::basic_string<
                        char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                            eastl::allocator>>::Layout::HeapBeginPtr(this_03);
                    psVar9 = (shared_ptr<graphics::ModularParticleSystem>*)this_03->end();
                    for (; this_05 != psVar9; this_05 = this_05 + 16) {
                        this_02 =
                            (ModularParticleSystem*)shared_ptr<graphics::ModularParticleSystem>::operator->(this_05);
                        pDVar5 = (Drawable*)this_02->GetDrawable();
                        uVar4 = eastl::optional<bool>::value();
                        pDVar5->SetRenderFlag(1, *(bool*)uVar4);
                    }
                    (&field_2322)->reset();
                }
            }
            local_50->~shared_ptr();
            return;
        }
    }

    // 0x100669570, 192 bytes, base-object constructor, placed by class name
    // AnimatedModel::ModelAnimationSet::ModelAnimationSet()
    void AnimatedModel::ModelAnimationSet::ModelAnimationSet() {
        _func_decltype_nullptr* in_RSI;

        field_0 = 4294967295;
        new (field_8, in_RSI) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        new (&field_24, in_RSI) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        new (&field_40, in_RSI) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        field_56 = 0;
        field_60 = 5;
        new (&field_64, 0) ServerSyncingUser();
        field_100 = 0;
        field_104 = 0;
        field_108 = 0;
        *(undefined8*)&field_80 = 0;
        *(undefined8*)&field_88 = 0;
        field_96 = '\0';
        (&field_64, "Animation")->~AutoSingleton();
    }

    // 0x100669630, 16 bytes, complete-object constructor, placed by class name
    // AnimatedModel::ModelAnimationSet::ModelAnimationSet(): jumps straight to the base-object constructor

    // 0x100669640, 240 bytes, placed by class name
    // AnimatedModel::ModelAnimationSet::swap(AnimatedModel::ModelAnimationSet&)
    ModelAnimationSet* AnimatedModel::ModelAnimationSet::swap(ModelAnimationSet* param_1) {
        eastl::swap<unsigned int>(&field_0, &param_1->field_0);
        (field_8, (shared_ptr*)param_1->field_8)->swap();
        (&field_24, (shared_ptr*)&param_1->field_24)->swap();
        (&field_40, (shared_ptr*)&param_1->field_40)->swap();
        eastl::swap<unsigned int>(&field_56, &param_1->field_56);
        eastl::swap<unsigned int>(&field_60, &param_1->field_60);
        (&field_64, (ServerSyncingUser*)&param_1->field_64)->swap();
        eastl::swap<signed char>((signed*)&field_80, (signed*)&param_1->field_80);
        eastl::swap<signed char>((signed*)&field_81, (signed*)&param_1->field_81);
        eastl::swap<signed char>((signed*)&field_82, (signed*)&param_1->field_82);
        eastl::swap<signed char>((signed*)&field_83, (signed*)&param_1->field_83);
        eastl::swap<unsigned int>(&field_84, &param_1->field_84);
        eastl::swap<unsigned int>(&field_92, &param_1->field_92);
        eastl::swap<signed char>((signed*)&field_96, (signed*)&param_1->field_96);
        eastl::swap<unsigned int>(&field_100, &param_1->field_100);
        eastl::swap<unsigned int>(&field_104, &param_1->field_104);
        eastl::swap<unsigned int>(&field_108, &param_1->field_108);
        return this;
    }

    // 0x100669810, 64 bytes, base-object constructor, placed by class name
    // AnimatedModel::AnimationDetails::AnimationDetails(int)
    void AnimatedModel::AnimationDetails::AnimationDetails(int param_1) {
        field_0 = param_1;
        new (&field_8) ModelAnimationSet();
        new (&field_120) ModelAnimationSet();
    }

    // 0x100669910, 144 bytes, placed by class name
    // AnimatedModel::AnimationDetails::RememberAnimationPoint()
    void AnimatedModel::AnimationDetails::RememberAnimationPoint() {
        undefined1* this_00;
        AnimationWrapper* pAVar1;
        AnimationParameters* this_01;
        MapArea* this_02;
        int iVar4;
        undefined4 uVar5;

        this_00 = field_16;
        if (this_00->operator_cast_to_bool()) {
            if ((&field_120)->InUse() == '\0') {
                pAVar1 =
                    (AnimationWrapper*)shared_ptr<AnimationWrapper>::operator->((shared_ptr<AnimationWrapper>*)this_00);
                this_01 = (AnimationParameters*)pAVar1->GetAnimationParameters();
                iVar4 = this_01->GetTicksThroughAnimation();
                pAVar1 =
                    (AnimationWrapper*)shared_ptr<AnimationWrapper>::operator->((shared_ptr<AnimationWrapper>*)this_00);
                this_02 = (MapArea*)pAVar1->GetAnimationParameters();
                uVar5 = this_02->GetAdvisedZoom();
                field_120 = field_8;
                field_216 = 1;
                field_220 = iVar4;
                field_224 = uVar5;
            }
        }
    }

} // namespace jag::game
