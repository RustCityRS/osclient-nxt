// libs/game/runetek5/scene/entities/SpotAnimation.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.game.runetek5

#include "SpotAnimation.h"

namespace jag {
    // 0x1003f0f60, 96 bytes, placed by class name and debug map
    // SpotAnimation::AbortOnMove()
    undefined8 SpotAnimation::AbortOnMove() {
        bool bVar1;
        EffectAnimType* this_00;
        AnimationWrapper* this_01;

        bVar1 = field_256->operator_cast_to_bool();
        if (bVar1) {
            bVar1 = field_376->operator_cast_to_bool();
            if (bVar1) {
                this_00 = (EffectAnimType*)shared_ptr<game::EffectAnimType>::operator->(
                    (shared_ptr<game::EffectAnimType>*)field_256);
                if (this_00->GetObeyExtraSeqSettings() != '\0') {
                    this_01 = (AnimationWrapper*)shared_ptr<game::AnimationWrapper>::operator->(
                        (shared_ptr<game::AnimationWrapper>*)field_376);
                    return this_01->AbortOnMove();
                }
            }
        }
        return 0;
    }

    // 0x1003f1a70, 1056 bytes, placed by class name
    // SpotAnimation::Build(unsigned int)
    /* WARNING: Removing unreachable block (ram,4299103286) */
    /* SpotAnimation::Build(unsigned int) */

    ulong SpotAnimation::Build(uint param_1) {
        QuaternionT<float>* this_00;
        undefined1* this_01;
        undefined1* puVar1;
        char cVar2;
        bool bVar3;
        byte bVar4;
        int iVar5;
        long* plVar6;
        shared_ptr* psVar7;
        Input* this_02;
        GraphNode* this_03;
        EffectAnimType* pEVar8;
        shared_ptr* psVar9;
        Model* this_04;
        MakeSharedPool<graphics::Model, 3072>* this_05;
        float* pfVar10;
        World* this_06;
        LinkMap* pLVar11;
        MSIType* this_07;
        AnimationWrapper* pAVar12;
        ModelCopyType* pMVar13;
        ulong unaff_R15;
        undefined7 uVar14;
        float fVar15;
        float fVar16;
        bool* in_stack_ffffffffffffff98;
        QuaternionT<float> aQStack_5e[6];
        undefined8 local_48;
        shared_ptr* local_40;
        uint local_38;
        bool local_31;

        plVar6 = (long*)Instance();
        pMVar13 = (ModelCopyType*)*plVar6;
        cVar2 = (**(code**)(pMVar13 + 224))(plVar6);
        if (cVar2 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("GraphicsApp::Instance()->IsInsideMainLogic()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/"
                      "entities/SpotAnimation.cpp",
                      100, (char*)0);
        }
        this_01 = field_256;
        bVar3 = this_01->operator_cast_to_bool();
        if (!bVar3) {
            unaff_R15 = 0;
            psVar7 = game::ConfigProvider::GetConfig<game::EffectAnimType>(field_208, m_effectAnimID, (DataStatus**)0);
            shared_ptr<game::EffectAnimType>::operator=((shared_ptr<game::EffectAnimType>*)this_01, psVar7);
            bVar3 = this_01->operator_cast_to_bool();
            if (!bVar3)
                goto LAB_1003f1e43;
            this_02 = (Input*)shared_ptr<game::EffectAnimType>::operator->((shared_ptr<game::EffectAnimType>*)this_01);
            fVar15 = (float)this_02->GetMouseX();
            if (fVar15 != 0.0) {
                this_00 = aQStack_5e + -10;
                local_40 = (shared_ptr*)CONCAT44(local_40._4_4_, fVar15);
                math::QuaternionT<float>::QuaternionT(this_00);
                this_00->FromAxisAngle(PTR_UP_100ee66d0, local_40._0_4_ + field_240);
                this_03 = (GraphNode*)GetNode();
                this_03->SetRotation(this_00);
            }
            if (field_244 == 4294967295) {
                pEVar8 = (EffectAnimType*)shared_ptr<game::EffectAnimType>::operator->(
                    (shared_ptr<game::EffectAnimType>*)this_01);
                bVar4 = pEVar8->GetObeyExtraSeqSettings();
                field_244 = (uint)(bVar4 ^ 1) * 2;
            }
        }
        puVar1 = field_272;
        bVar3 = puVar1->operator_cast_to_bool();
        uVar14 = (undefined7)(unaff_R15 >> 8);
        local_40 = (shared_ptr*)puVar1;
        if (!bVar3) {
            bVar3 = puVar1->operator_cast_to_bool();
            if (!bVar3) {
                pEVar8 = (EffectAnimType*)shared_ptr<game::EffectAnimType>::operator->(
                    (shared_ptr<game::EffectAnimType>*)this_01);
                psVar9 = (shared_ptr*)pEVar8->GetModel((DataStatus**)&local_48, field_192);
                psVar7 = local_40;
                shared_ptr<graphics::Model>::operator=((shared_ptr<graphics::Model>*)local_40, psVar9);
                bVar3 = shared_ptr::operator_cast_to_bool(psVar7);
                if (bVar3) {
                    this_04 = (Model*)shared_ptr<graphics::Model>::operator->((shared_ptr<graphics::Model>*)psVar7);
                    cVar2 = this_04->IsLoaded();
                    if (cVar2 != '\0') {
                        this_05 = (MakeSharedPool<graphics::Model, 3072>*)shared_ptr<graphics::Model>::operator*(
                            (shared_ptr<graphics::Model>*)psVar7);
                        local_38 = 2;
                        MakeSharedPool<graphics::Model, 3072>::MakeShared<graphics::Model&, graphics::ModelCopyType>(
                            (shared_ptr*)(aQStack_5e + -10), this_05, (Model*)&local_38, pMVar13);
                        shared_ptr<graphics::Model>::operator=((shared_ptr<graphics::Model>*)psVar7,
                                                               (shared_ptr*)(aQStack_5e + -10));
                        ((aQStack_5e + -10))->~shared_ptr();
                        goto LAB_1003f1c7a;
                    }
                    shared_ptr<graphics::Model>::reset();
                } else if ((undefined*)CONCAT44(local_48._4_4_, (int)local_48) == DataStatus::MISSING) {
                    (&field_436)->UnSync();
                    unaff_R15 = CONCAT71(uVar14, 1);
                    goto LAB_1003f1e43;
                }
                unaff_R15 = 0;
                goto LAB_1003f1e43;
            }
        LAB_1003f1c7a:
            if (field_216 == '\0') {
                pfVar10 = (float*)GetWorldPosition();
                this_06 = (World*)shared_ptr<game::World>::operator->((shared_ptr<game::World>*)&field_176);
                pLVar11 = (LinkMap*)this_06->GetLinkMap();
                iVar5 = GetDuration();
                fVar15 = (float)floor(*pfVar10 * 0.0078125);
                fVar16 = (float)floor(pfVar10[2] * 0.0078125);
                iVar5 = game::RemoveRoof::CalculateMaxRemoveRoofLevel(pLVar11, iVar5, (int)fVar15, (int)fVar16, 1, 1);
                SetMaximumRemoveRoofLevel(iVar5);
            }
        }
        puVar1 = field_376;
        bVar3 = puVar1->operator_cast_to_bool();
        if (!bVar3) {
            this_07 =
                (MSIType*)shared_ptr<game::EffectAnimType>::operator->((shared_ptr<game::EffectAnimType>*)this_01);
            iVar5 = this_07->GetTint();
            local_48._0_4_ = iVar5;
            if (iVar5 == -1) {
                (&field_436, true)->SetReady();
                unaff_R15 = CONCAT71(uVar14, 1);
                goto LAB_1003f1e43;
            }
            local_38 = local_38 & 4294967040;
            local_31 = false;
            MakeSharedPool<game::AnimationWrapper, 512>::MakeShared<
                game::AssetBuilder&, game::ConfigProvider&, int&, int&, graphics::AnimationLoopBehaviour&, bool, bool>(
                (shared_ptr*)(aQStack_5e + -10), field_200, (AssetBuilder*)field_208, (ConfigProvider*)&local_48,
                &field_248, (int*)&field_244, (AnimationLoopBehaviour*)&local_38, &local_31, in_stack_ffffffffffffff98);
            shared_ptr<game::AnimationWrapper>::operator=((shared_ptr<game::AnimationWrapper>*)puVar1,
                                                          (shared_ptr*)(aQStack_5e + -10));
            ((aQStack_5e + -10))->~shared_ptr();
            pAVar12 = (AnimationWrapper*)shared_ptr<game::AnimationWrapper>::operator->(
                (shared_ptr<game::AnimationWrapper>*)puVar1);
            pAVar12->SetAudioTrigger((function*)&field_128);
            if (iVar5 == -1)
                goto LAB_1003f1e43;
        }
        pAVar12 = (AnimationWrapper*)shared_ptr<game::AnimationWrapper>::operator->(
            (shared_ptr<game::AnimationWrapper>*)puVar1);
        cVar2 = pAVar12->IsReady();
        if (cVar2 == '\0') {
            pAVar12 = (AnimationWrapper*)shared_ptr<game::AnimationWrapper>::operator->(
                (shared_ptr<game::AnimationWrapper>*)puVar1);
            pAVar12->Build(field_208, m_effectAnimID, local_40, param_1);
        }
        pAVar12 = (AnimationWrapper*)shared_ptr<game::AnimationWrapper>::operator->(
            (shared_ptr<game::AnimationWrapper>*)puVar1);
        cVar2 = pAVar12->IsReady();
        if (cVar2 != '\0') {
            field_424 = '\x01';
            (&field_436, true)->SetReady();
        }
        unaff_R15 = CONCAT71(uVar14, field_424 != '\0');
    LAB_1003f1e43:
        return unaff_R15 & 4294967041;
    }

    // 0x1003f1e90, 64 bytes, placed by class name
    // SpotAnimation::IsReady()
    undefined8 SpotAnimation::IsReady() {
        uint uVar1;
        GraphicsApp* this_00;
        undefined8 uVar2;

        if (field_424 == '\0') {
            uVar2 = 0;
        } else {
            this_00 = (GraphicsApp*)Instance();
            uVar1 = this_00->GetFrameCount();
            uVar2 = (&field_436, uVar1)->IsCycleReady();
        }
        return uVar2;
    }

    // 0x1003f1f10, 288 bytes, placed by class name
    // SpotAnimation::IsFinished()
    ulong SpotAnimation::IsFinished() {
        int iVar3;
        AnimationWrapper* this_00;
        shared_ptr<graphics::ParticleSystem>* this_01;
        shared_ptr<graphics::ParticleSystem>* psVar4;
        ParticleSystem* this_02;
        shared_ptr<graphics::ModularParticleSystem>* this_03;
        shared_ptr<graphics::ModularParticleSystem>* psVar5;
        ModularParticleSystem* pMVar6;
        undefined1* this_04;
        ulong uVar7;

        if (field_424 != '\0') {
            if (field_376->operator_cast_to_bool()) {
                this_00 = (AnimationWrapper*)shared_ptr<game::AnimationWrapper>::operator->(
                    (shared_ptr<game::AnimationWrapper>*)field_376);
                if (this_00->IsFinished() == '\0')
                    goto LAB_1003f1f55;
            }
            field_432 = true;
        }
    LAB_1003f1f55:
        if (field_432 == false) {
        LAB_1003f2013:
            uVar7 = 0;
        } else {
            this_01 = (shared_ptr<graphics::ParticleSystem>*)(&field_288)->HeapBeginPtr();
            psVar4 = (shared_ptr<graphics::ParticleSystem>*)(&field_288)->end();
            for (; this_01 != psVar4; this_01 = this_01 + 16) {
                this_02 = (ParticleSystem*)shared_ptr<graphics::ParticleSystem>::operator->(this_01);
                iVar3 = this_02->GetParticleCount();
                if (iVar3 != 0)
                    goto LAB_1003f2013;
            }
            this_04 = &field_344;
            this_03 = (shared_ptr<graphics::ModularParticleSystem>*)this_04->HeapBeginPtr();
            psVar5 = (shared_ptr<graphics::ModularParticleSystem>*)this_04->end();
            uVar7 = CONCAT71((int7)((ulong)this_04 >> 8), this_03 == psVar5);
            if (this_03 != psVar5) {
                pMVar6 = (ModularParticleSystem*)shared_ptr<graphics::ModularParticleSystem>::operator->(this_03);
                iVar3 = pMVar6->GetParticleCount();
                while (iVar3 == 0) {
                    this_03 = this_03 + 16;
                    uVar7 = CONCAT71((int7)(uVar7 >> 8), this_03 == psVar5);
                    if (this_03 == psVar5)
                        break;
                    pMVar6 = (ModularParticleSystem*)shared_ptr<graphics::ModularParticleSystem>::operator->(this_03);
                    iVar3 = pMVar6->GetParticleCount();
                }
            }
        }
        return uVar7 & 4294967295;
    }

    // 0x1003f4bf0, 80 bytes, placed by class name
    // SpotAnimation::IsDelayed() const
    bool SpotAnimation::IsDelayed() {
        bool bVar1;
        AnimationWrapper* this_00;

        bVar1 = true;
        if (field_248 == 0) {
            bVar1 = field_376->operator_cast_to_bool();
            if (bVar1) {
                this_00 = (AnimationWrapper*)shared_ptr<game::AnimationWrapper>::operator->(
                    (shared_ptr<game::AnimationWrapper>*)field_376);
                bVar1 = this_00->GetDelay() != 0;
            } else {
                bVar1 = false;
            }
        }
        return bVar1;
    }

    // 0x1003f4c40, 112 bytes, placed by class name
    // SpotAnimation::MayMove(int)
    ulong SpotAnimation::MayMove(int param_1) {
        bool bVar1;
        uint uVar3;
        EffectAnimType* this_00;
        AnimationWrapper* this_01;
        undefined8 unaff_R15;
        ulong uVar4;

        bVar1 = field_256->operator_cast_to_bool();
        uVar4 = CONCAT71((int7)((ulong)unaff_R15 >> 8), 1);
        if (bVar1) {
            bVar1 = field_376->operator_cast_to_bool();
            if (bVar1) {
                this_00 = (EffectAnimType*)shared_ptr<game::EffectAnimType>::operator->(
                    (shared_ptr<game::EffectAnimType>*)field_256);
                if (this_00->GetObeyExtraSeqSettings() != '\0') {
                    this_01 = (AnimationWrapper*)shared_ptr<game::AnimationWrapper>::operator->(
                        (shared_ptr<game::AnimationWrapper>*)field_376);
                    uVar3 = this_01->MayMove(param_1);
                    uVar4 = (ulong)uVar3;
                }
            }
        }
        return uVar4 & 4294967295;
    }

    // 0x1003f4f50, 176 bytes, placed by class name
    // SpotAnimation::TranslateParticles(math::Vector3T<float> const&)
    void SpotAnimation::TranslateParticles(Vector3T* param_1) {
        shared_ptr<graphics::ParticleSystem>* this_00;
        shared_ptr<graphics::ParticleSystem>* psVar1;
        ParticleSystem* this_01;
        shared_ptr<graphics::ModularParticleSystem>* this_02;
        shared_ptr<graphics::ModularParticleSystem>* psVar2;
        ModularParticleSystem* this_03;

        this_00 = (shared_ptr<graphics::ParticleSystem>*)(&field_288)->HeapBeginPtr();
        psVar1 = (shared_ptr<graphics::ParticleSystem>*)(&field_288)->end();
        for (; this_00 != psVar1; this_00 = this_00 + 16) {
            this_01 = (ParticleSystem*)shared_ptr<graphics::ParticleSystem>::operator->(this_00);
            this_01->TranslateParticles(param_1);
        }
        this_02 = (shared_ptr<graphics::ModularParticleSystem>*)(&field_344)->HeapBeginPtr();
        psVar2 = (shared_ptr<graphics::ModularParticleSystem>*)(&field_344)->end();
        for (; this_02 != psVar2; this_02 = this_02 + 16) {
            this_03 = (ModularParticleSystem*)shared_ptr<graphics::ModularParticleSystem>::operator->(this_02);
            this_03->TranslateParticles(param_1);
        }
    }

    // 0x1003f5190: the linker folded this into game::BASType::GetHillRotateWidth() const, which has identical code
    SpotAnimation::GetEffectAnimID() const;

    // 0x1003f7fb0, 608 bytes, base-object constructor, placed by class name
    // SpotAnimation::SpotAnimation(graphics::RT7Core&, game::AssetBuilder&, game::ConfigProvider&, graphics::GraphNode*, shared_ptr<game::World> const&, SpotAnimPosition, SpotAnimData)
    void SpotAnimation::SpotAnimation(RT7Core* param_1, MakeSharedPool<game::AnimationWrapper, 512>* param_2,
                                      ConfigProvider* param_3, MakeSharedPool<graphics::AnimationState, 256>* param_4,
                                      undefined8 param_5, undefined8 param_7, undefined8 param_8, int param_9,
                                      undefined8 param_10, undefined8 param_11, undefined8 param_12) {
        undefined1* this_00;

        new (this) game::Entity(param_4, param_5, 4, param_9);
        new (this) MakeUniquePool<SpotAnimation, 64>();
        field_0 = &PTR__SpotAnimation_100efece0;
        field_8 = &PTR__SpotAnimation_100efee20;
        field_192 = param_1;
        field_200 = param_2;
        field_208 = param_3;
        field_216 = (undefined1)param_10;
        m_effectAnimID = param_10._4_4_;
        field_224 = param_7;
        field_232 = (undefined4)param_8;
        field_236 = param_9;
        field_240 = param_8._4_4_;
        field_244 = 4294967295;
        field_248 = (undefined4)param_11;
        new (field_256, (_func_decltype_nullptr*)param_4)
            shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        new (field_272, (_func_decltype_nullptr*)param_4)
            shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        new (&field_288) eastl::fixed_vector<shared_ptr<graphics::ParticleSystem>, 1ul, true, eastl::allocator>();
        new (&field_344) eastl::vector<shared_ptr<graphics::ModularParticleSystem>, eastl::allocator>();
        new (field_376, (_func_decltype_nullptr*)param_4)
            shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        MakeSharedPool<graphics::AnimationState, 256>::MakeShared<>((shared_ptr*)field_392, param_4);
        new (field_408, (_func_decltype_nullptr*)param_4)
            shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        field_424 = '\0';
        field_425 = 0;
        field_426 = 1;
        m_combinedID = game::EntityCombinedID::NO_ENTITY;
        field_432 = false;
        field_433 = 0;
        field_434 = param_11._5_1_;
        this_00 = &field_436;
        new (this_00) game::ServerSyncingUser(0);
        field_452 = 0;
        m_hidden = false;
        if (param_11._4_1_ != '\0') {
            field_244 = 1;
        }
        if (field_434 != '\0') {
            this_00->~AutoSingleton("SpotAnimation");
            this_00->Sync(param_12._4_4_);
        }
        SetInitialPosition(this);
    }

    // 0x1003f8270, 128 bytes, placed by class name
    // SpotAnimation::SetInitialPosition()
    void SpotAnimation::SetInitialPosition() {
        GraphNode* pGVar1;
        Vector3T<float> local_30[16];

        pGVar1 = (GraphNode*)GetNode();
        math::Vector3T<float>::Vector3T<int>(local_30, (Vector3T*)&field_224);
        pGVar1->SetTranslation(local_30);
        new (local_30) math::QuaternionT<float>();
        local_30->FromAxisAngle(PTR_UP_100ee66d0, field_240);
        pGVar1 = (GraphNode*)GetNode();
        pGVar1->SetRotation(local_30);
    }

    // 0x1003f82f0, 64 bytes, complete-object constructor, placed by class name
    // SpotAnimation::SpotAnimation(graphics::RT7Core&, game::AssetBuilder&, game::ConfigProvider&, graphics::GraphNode*, shared_ptr<game::World> const&, SpotAnimPosition, SpotAnimData)
    void SpotAnimation::SpotAnimation() {
        SpotAnimation();
    }

    // 0x1003f8330, 272 bytes, base-object destructor, placed by class name
    // SpotAnimation::~SpotAnimation()
    void SpotAnimation::~SpotAnimation() {
        field_0 = &PTR__SpotAnimation_100efece0;
        field_8 = &PTR__SpotAnimation_100efee20;
        Destruct(this);
        (&field_436)->~ServerSyncingUser();
        field_408->~shared_ptr();
        field_392->~shared_ptr();
        field_376->~shared_ptr();
        (&field_344)->~vector();
        (&field_288)->~fixed_vector();
        field_272->~shared_ptr();
        field_256->~shared_ptr();
        ~Entity();
    }

    // 0x1003f8440, 16 bytes, complete-object destructor, placed by class name
    // SpotAnimation::~SpotAnimation(): jumps straight to the base-object destructor

    // 0x1003f8460, 32 bytes, deleting destructor, placed by class name
    // SpotAnimation::~SpotAnimation()
    void SpotAnimation::~SpotAnimation() {
        ~SpotAnimation(this);
        operator_delete(this);
    }

    // 0x1003f8490, 64 bytes, placed by class name
    // SpotAnimation::ReSync(SpotAnimData)
    void SpotAnimation::ReSync() {
        undefined4 in_stack_00000010;
        undefined8 in_stack_00000018;

        field_452 = 1;
        field_248 = in_stack_00000010;
        (&field_436)->UnSync();
        (&field_436, in_stack_00000018._4_4_)->Sync();
    }

    // 0x1003f8710, 176 bytes, placed by class name
    // SpotAnimation::Destruct()
    void SpotAnimation::Destruct() {
        shared_ptr* this_00;
        World* pWVar2;
        DetachedParticleSystemsDrawable* pDVar3;
        AnimationState* this_01;
        GraphNode* this_02;

        this_00 = (shared_ptr*)GetWorld();
        if (shared_ptr::operator_cast_to_bool(this_00)) {
            pWVar2 = (World*)shared_ptr<game::World>::operator->((shared_ptr<game::World>*)this_00);
            pDVar3 = (DetachedParticleSystemsDrawable*)pWVar2->GetDetachedParticleSystems();
            pDVar3->Add((fixed_vector*)&field_288);
            pWVar2 = (World*)shared_ptr<game::World>::operator->((shared_ptr<game::World>*)this_00);
            pDVar3 = (DetachedParticleSystemsDrawable*)pWVar2->GetDetachedParticleSystems();
            pDVar3->Add((vector*)&field_344);
        }
        this_01 = (AnimationState*)shared_ptr<graphics::AnimationState>::operator->(
            (shared_ptr<graphics::AnimationState>*)field_392);
        this_01->ClearState();
        this_02 = (GraphNode*)GetNode();
        this_02->Detach();
        (*(code*)field_8[3])(&field_8);
        (&field_288)->clear();
        (&field_344)->clear();
    }

    // 0x1003f87c0, 64 bytes, placed by class name
    // SpotAnimation::GetSeqType() const
    undefined1* SpotAnimation::GetSeqType() {
        NXTPixToolkit* this_00;
        undefined1* puVar2;

        if (field_376->operator_cast_to_bool()) {
            this_00 = (NXTPixToolkit*)shared_ptr<game::AnimationWrapper>::operator->(
                (shared_ptr<game::AnimationWrapper>*)field_376);
            puVar2 = (undefined1*)this_00->GetScreen();
        } else {
            puVar2 = &game::SeqType::NullSeqType;
        }
        return puVar2;
    }

    // 0x1003f8800, 112 bytes, placed by class name
    // SpotAnimation::GetDuplicateBehaviour() const
    undefined4 SpotAnimation::GetDuplicateBehaviour() {
        bool bVar1;
        undefined4 uVar2;
        NXTPixToolkit* pNVar3;
        shared_ptr* this_00;
        shared_ptr<game::SeqType>* this_01;
        SeqType* this_02;
        undefined1* this_03;

        this_03 = field_376;
        bVar1 = this_03->operator_cast_to_bool();
        uVar2 = 0;
        if (bVar1) {
            pNVar3 = (NXTPixToolkit*)shared_ptr<game::AnimationWrapper>::operator->(
                (shared_ptr<game::AnimationWrapper>*)this_03);
            this_00 = (shared_ptr*)pNVar3->GetScreen();
            bVar1 = shared_ptr::operator_cast_to_bool(this_00);
            if (bVar1) {
                pNVar3 = (NXTPixToolkit*)shared_ptr<game::AnimationWrapper>::operator->(
                    (shared_ptr<game::AnimationWrapper>*)this_03);
                this_01 = (shared_ptr<game::SeqType>*)pNVar3->GetScreen();
                this_02 = (SeqType*)shared_ptr<game::SeqType>::operator->(this_01);
                uVar2 = this_02->GetDuplicateBehaviour();
            }
        }
        return uVar2;
    }

    // 0x1003f8870, 1472 bytes, placed by class name
    // SpotAnimation::MainLogic(graphics::RT7Core&, unsigned int, math::Matrix44T<float> const&)
    void SpotAnimation::MainLogic(RT7Core* param_1, uint param_2, Matrix44T* param_3) {
        undefined1* puVar1;
        undefined4 uVar2;
        LogStream* this_00;
        char cVar4;
        bool bVar5;
        uint uVar6;
        int iVar7;
        int iVar8;
        undefined4 uVar9;
        undefined4 uVar10;
        GraphicsApp* pGVar11;
        AnimationWrapper* pAVar12;
        EffectAnimType* this_01;
        shared_ptr<game::World>* psVar13;
        World* pWVar14;
        HeightMap* pHVar15;
        NXTPixToolkit* this_02;
        undefined8 uVar16;
        AnimationStateProvider* pAVar17;
        Vector3T* pVVar18;
        shared_ptr* this_03;
        IrradianceEffect* this_04;
        AnimationParameters* pAVar19;
        ModelUpdateManager* this_05;
        AnimationState* pAVar20;
        Model* pMVar21;
        Matrix44T* pMVar22;
        LogStream* pLVar23;
        undefined1 local_1a8[16];
        shared_ptr local_198[7];
        Matrix44T local_128;
        undefined8 uStack_f0;
        LogStream* local_d8;
        Matrix44T* local_d0;
        LogStream local_c8;
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        (*(code*)field_8[5])(&field_8);
        pGVar11 = (GraphicsApp*)this;
        cVar4 = (*(code*)field_0[35])();
        if (cVar4 == '\0')
            goto LAB_1003f8cc1;
        local_d0 = param_3;
        pGVar11 = (GraphicsApp*)pGVar11->Instance();
        uVar6 = pGVar11->GetFrameCount();
        puVar1 = field_376;
        bVar5 = puVar1->operator_cast_to_bool();
        local_d8 = (LogStream*)puVar1;
        if (bVar5) {
            pAVar12 = (AnimationWrapper*)shared_ptr<game::AnimationWrapper>::operator->(
                (shared_ptr<game::AnimationWrapper>*)puVar1);
            cVar4 = pAVar12->IsReady();
            if (cVar4 == '\0')
                goto LAB_1003f8cc1;
            puVar1 = &field_436;
            puVar1->SetReady(true);
            cVar4 = puVar1->IsCycleReady(uVar6);
            if (cVar4 == '\0')
                goto LAB_1003f8cc1;
            puVar1->UnSync();
            pLVar23 = local_d8;
            pAVar12 = (AnimationWrapper*)shared_ptr<game::AnimationWrapper>::operator->(
                (shared_ptr<game::AnimationWrapper>*)local_d8);
            pAVar12->Update(param_2, 0);
            pMVar22 = local_d0;
            pAVar12 = (AnimationWrapper*)shared_ptr<game::AnimationWrapper>::operator->(
                (shared_ptr<game::AnimationWrapper>*)pLVar23);
            cVar4 = pAVar12->IsFinished();
            pLVar23 = local_d8;
            if (cVar4 != '\0')
                goto LAB_1003f8cc1;
            if ((field_452 != '\0') || (field_425 == '\0')) {
                if (field_425 == '\0') {
                    pAVar12 = (AnimationWrapper*)shared_ptr<game::AnimationWrapper>::operator->(
                        (shared_ptr<game::AnimationWrapper>*)local_d8);
                    pAVar12->Reset(param_2, field_248);
                } else if (field_452 != '\0') {
                    pAVar12 = (AnimationWrapper*)shared_ptr<game::AnimationWrapper>::operator->(
                        (shared_ptr<game::AnimationWrapper>*)local_d8);
                    pAVar12->ResetLoopCounter();
                }
                pAVar12 = (AnimationWrapper*)shared_ptr<game::AnimationWrapper>::operator->(
                    (shared_ptr<game::AnimationWrapper>*)pLVar23);
                pAVar12->SetDelay(field_248);
                field_248 = 0;
                field_425 = 1;
                field_452 = 0;
            }
            pAVar12 = (AnimationWrapper*)shared_ptr<game::AnimationWrapper>::operator->(
                (shared_ptr<game::AnimationWrapper>*)pLVar23);
            pAVar20 = (AnimationState*)shared_ptr<graphics::AnimationState>::operator*(
                (shared_ptr<graphics::AnimationState>*)field_392);
            pAVar12->ApplyToAnimationState(0, pAVar20, false);
            shared_ptr<graphics::AnimationState>::operator=((shared_ptr<graphics::AnimationState>*)field_408,
                                                            (shared_ptr*)field_392);
            puVar1 = field_272;
            bVar5 = puVar1->operator_cast_to_bool();
            if (bVar5) {
                pMVar21 = (Model*)shared_ptr<graphics::Model>::operator->((shared_ptr<graphics::Model>*)puVar1);
                cVar4 = pMVar21->IsLoaded();
                if (cVar4 != '\0') {
                    pMVar21 = (Model*)shared_ptr<graphics::Model>::operator->((shared_ptr<graphics::Model>*)puVar1);
                    new ((local_1a8 + 16)) shared_ptr<oldscape::dash3d::Decor>(field_408);
                    pMVar21->SetAnimationStateProvider((shared_ptr*)(local_1a8 + 16));
                    ((local_1a8 + 16))->~shared_ptr();
                }
            }
        } else {
            new ((local_1a8 + 16)) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(0);
            shared_ptr<graphics::AnimationState>::operator=((shared_ptr<graphics::AnimationState>*)field_408,
                                                            (shared_ptr*)(local_1a8 + 16));
            ((local_1a8 + 16))->~shared_ptr();
            pMVar22 = local_d0;
        }
        puVar1 = field_272;
        bVar5 = puVar1->operator_cast_to_bool();
        if (bVar5) {
            local_128._0_8_ = *(undefined8*)pMVar22;
            local_128._8_8_ = *(undefined8*)&pMVar22->field_8;
            local_128._16_8_ = *(undefined8*)&pMVar22->field_16;
            local_128._24_8_ = *(undefined8*)&pMVar22->field_24;
            local_128._32_8_ = *(undefined8*)&pMVar22->field_32;
            local_128._40_8_ = *(undefined8*)&pMVar22->field_40;
            local_128._48_8_ = *(undefined8*)&pMVar22->field_48;
            uStack_f0 = *(undefined8*)(pMVar22 + 1);
            bVar5 = field_256->operator_cast_to_bool();
            if (bVar5) {
                this_01 = (EffectAnimType*)shared_ptr<game::EffectAnimType>::operator->(
                    (shared_ptr<game::EffectAnimType>*)field_256);
                cVar4 = this_01->ShouldHillRotate();
                if (cVar4 != '\0') {
                    psVar13 = (shared_ptr<game::World>*)GetWorld();
                    pWVar14 = (World*)shared_ptr<game::World>::operator->(psVar13);
                    pHVar15 = (HeightMap*)pWVar14->GetHeightMap();
                    iVar7 = field_236;
                    this_02 =
                        (NXTPixToolkit*)shared_ptr<graphics::Model>::operator->((shared_ptr<graphics::Model>*)puVar1);
                    uVar16 = this_02->GetScreen();
                    pHVar15->ApplyHillRotation(iVar7, uVar16, &local_128, 1);
                }
            }
            pMVar21 = (Model*)shared_ptr<graphics::Model>::operator->((shared_ptr<graphics::Model>*)puVar1);
            local_d0 = (Matrix44T*)&field_288;
            pAVar17 = (AnimationStateProvider*)field_408->end();
            pMVar21->UpdateParticleEmitters(param_1, local_d0, &local_128, pAVar17, 0, field_432);
            local_d0 = (Matrix44T*)puVar1;
            pMVar21 = (Model*)shared_ptr<graphics::Model>::operator->((shared_ptr<graphics::Model>*)puVar1);
            pAVar17 = (AnimationStateProvider*)field_408->end();
            pMVar21->UpdateModularParticleSystems(param_1, (vector*)&field_344, &local_128, pAVar17, (vector_map*)0,
                                                  field_432);
            iVar7 = GetDuration();
            pVVar18 = (Vector3T*)GetWorldPosition();
            new (local_1a8) game::CoordFine(iVar7, pVVar18);
            psVar13 = (shared_ptr<game::World>*)GetWorld();
            pWVar14 = (World*)shared_ptr<game::World>::operator->(psVar13);
            iVar7 = local_1a8->GetMapSquareX();
            iVar8 = local_1a8->GetMapSquareZ();
            this_03 = (shared_ptr*)pWVar14->GetMapSquare(iVar7, iVar8);
            bVar5 = operator!=(this_03, (_func_decltype_nullptr*)0);
            if (bVar5) {
                pMVar21 = (Model*)shared_ptr<graphics::Model>::operator->((shared_ptr<graphics::Model>*)local_d0);
                this_04 = (IrradianceEffect*)pMVar21->GetIrradianceEffect();
                shared_ptr<game::MapSquare>::operator->((shared_ptr<game::MapSquare>*)this_03);
                ((local_1a8 + 16))->GetIrradianceSHConsts();
                this_04->SetCoefficients((IrradianceSHCoefConsts*)(local_1a8 + 16));
            }
            this_00 = local_d8;
            pLVar23 = local_d8;
            bVar5 = local_d8->operator_cast_to_bool();
            if (bVar5) {
                uVar16 = logger::default_logger();
                new (&local_c8) logger::LogStream((LogStream*)&LOGGER_SPOTANIM);
                uVar2 = m_effectAnimID;
                pAVar12 = (AnimationWrapper*)shared_ptr<game::AnimationWrapper>::operator->(
                    (shared_ptr<game::AnimationWrapper>*)this_00);
                pAVar19 = (AnimationParameters*)pAVar12->GetAnimationParameters();
                uVar9 = pAVar19->GetTicksThroughAnimation();
                pAVar12 = (AnimationWrapper*)shared_ptr<game::AnimationWrapper>::operator->(
                    (shared_ptr<game::AnimationWrapper>*)this_00);
                pAVar19 = (AnimationParameters*)pAVar12->GetAnimationParameters();
                uVar10 = pAVar19->GetAnimationLength();
                logger::Logger::Log(uVar16, 0, &local_c8, 8,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/"
                                    "runetek5/scene/entities/SpotAnimation.cpp",
                                    363, "Playing SPOTANIM %d[%d/%d]", uVar2, uVar9, uVar10);
                pLVar23 = &local_c8;
                pLVar23->~LogStream();
            }
            this_05 = (ModelUpdateManager*)pLVar23->Instance();
            this_05->AddToUpdateList(local_d0);
            field_433 = 1;
        }
    LAB_1003f8cc1:
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x1003f8f00, 448 bytes, placed by class name
    // SpotAnimation::GatherDrawableElements(graphics::DrawableQueue&, graphics::RT7Core&, math::Matrix44T<float> const&, graphics::SceneViewData const&, graphics::EffectManager const&)
    void SpotAnimation::GatherDrawableElements(DrawableQueue* param_1, RT7Core* param_2, Matrix44T* param_3,
                                               SceneViewData* param_4, EffectManager* param_5) {
        undefined1* this_00;
        char cVar1;
        AnimationWrapper* this_01;
        Model* pMVar4;
        Vector3T* pVVar5;
        shared_ptr<graphics::ParticleSystem>* this_02;
        shared_ptr<graphics::ParticleSystem>* psVar6;
        long* plVar7;
        shared_ptr<graphics::ModularParticleSystem>* this_03;
        shared_ptr<graphics::ModularParticleSystem>* psVar8;
        ModularParticleSystem* this_04;

        if (((m_hidden == false) && (cVar1 = (*(code*)field_0[35])(), cVar1 != '\0')) && (field_433 != '\0')) {
            if (field_376->operator_cast_to_bool()) {
                this_01 = (AnimationWrapper*)shared_ptr<game::AnimationWrapper>::operator->(
                    (shared_ptr<game::AnimationWrapper>*)field_376);
                if (this_01->GetDelay() != 0) {
                    return;
                }
            }
            cVar1 = FilterRenderPasses(this, param_4);
            if (cVar1 != '\0') {
                if (field_432 == false) {
                    this_00 = field_272;
                    pMVar4 = (Model*)shared_ptr<graphics::Model>::operator->((shared_ptr<graphics::Model>*)this_00);
                    pMVar4->SetWorldTransform(param_3);
                    pMVar4 = (Model*)shared_ptr<graphics::Model>::operator->((shared_ptr<graphics::Model>*)this_00);
                    pVVar5 = (Vector3T*)GetWorldPosition();
                    pMVar4->SetPointLightBounds(pVVar5, 1, 1);
                    pMVar4 = (Model*)shared_ptr<graphics::Model>::operator->((shared_ptr<graphics::Model>*)this_00);
                    pMVar4->GatherDrawableElements(param_1, param_2, param_4, param_5);
                }
                this_02 = (shared_ptr<graphics::ParticleSystem>*)(&field_288)->HeapBeginPtr();
                psVar6 = (shared_ptr<graphics::ParticleSystem>*)(&field_288)->end();
                for (; this_02 != psVar6; this_02 = this_02 + 16) {
                    plVar7 = (long*)shared_ptr<graphics::ParticleSystem>::operator->(this_02);
                    (**(code**)(*plVar7 + 16))(plVar7, param_1, param_2, param_4, param_5);
                }
                this_03 = (shared_ptr<graphics::ModularParticleSystem>*)(&field_344)->HeapBeginPtr();
                psVar8 = (shared_ptr<graphics::ModularParticleSystem>*)(&field_344)->end();
                for (; this_03 != psVar8; this_03 = this_03 + 16) {
                    this_04 = (ModularParticleSystem*)shared_ptr<graphics::ModularParticleSystem>::operator->(this_03);
                    plVar7 = (long*)this_04->GetDrawable();
                    (**(code**)(*plVar7 + 16))(plVar7, param_1, param_2, param_4, param_5);
                }
            }
        }
    }

    // 0x1003f90c0, 80 bytes, placed by class name
    // SpotAnimation::FilterRenderPasses(graphics::SceneViewData const&)
    undefined8 SpotAnimation::FilterRenderPasses(SceneViewData* param_1) {
        char extraout_AL;
        bool bVar1;
        char extraout_AL_00;
        undefined7 extraout_var;
        undefined7 extraout_var_00;
        AnimationParameters* this_00;
        undefined7 extraout_var_01;
        undefined7 uVar2;

        param_1->HasShadowPass();
        uVar2 = extraout_var;
        if (extraout_AL != '\0') {
            bVar1 = field_256->operator_cast_to_bool();
            uVar2 = extraout_var_00;
            if (bVar1) {
                this_00 = (AnimationParameters*)shared_ptr<game::EffectAnimType>::operator->(
                    (shared_ptr<game::EffectAnimType>*)field_256);
                this_00->GetPaused();
                uVar2 = extraout_var_01;
                if (extraout_AL_00 == '\0') {
                    return 0;
                }
            }
        }
        return CONCAT71(uVar2, 1);
    }

    // 0x1003f9110, 320 bytes, placed by class name
    // SpotAnimation::CanRender() const
    ulong SpotAnimation::CanRender() {
        bool bVar1;
        char cVar2;
        int iVar3;
        int iVar4;
        int iVar5;
        AnimationWrapper* this_00;
        shared_ptr* this_01;
        World* pWVar6;
        RemoveRoof* this_02;
        Vector3T* pVVar7;
        undefined8 unaff_R14;
        ulong uVar8;
        undefined1 local_50[32];

        if (field_424 != '\0') {
            bVar1 = field_376->operator_cast_to_bool();
            if (bVar1) {
                this_00 = (AnimationWrapper*)shared_ptr<game::AnimationWrapper>::operator->(
                    (shared_ptr<game::AnimationWrapper>*)field_376);
                cVar2 = this_00->HasAnimationParameters();
                if (cVar2 == '\0')
                    goto LAB_1003f922e;
            }
            uVar8 = CONCAT71((int7)((ulong)unaff_R14 >> 8), 1);
            if (field_216 != '\0')
                goto LAB_1003f9231;
            this_01 = (shared_ptr*)GetWorld();
            bVar1 = shared_ptr::operator_cast_to_bool(this_01);
            if (!bVar1)
                goto LAB_1003f9231;
            pWVar6 = (World*)shared_ptr<game::World>::operator->((shared_ptr<game::World>*)this_01);
            cVar2 = pWVar6->IsRemoveRoofSelective();
            if (cVar2 == '\0') {
                iVar3 = GetDuration();
                iVar4 = GetWrapMode();
                pWVar6 = (World*)shared_ptr<game::World>::operator->((shared_ptr<game::World>*)this_01);
                iVar5 = pWVar6->GetMaxRenderLevel();
                cVar2 = game::LinkConstants::IsAffectedByMaxRenderLevel(iVar3, iVar4, iVar5);
            } else {
                pWVar6 = (World*)shared_ptr<game::World>::operator->((shared_ptr<game::World>*)this_01);
                this_02 = (RemoveRoof*)pWVar6->GetRemoveRoof();
                cVar2 = this_02->AnyRoofRemoved();
                if (cVar2 == '\0')
                    goto LAB_1003f9231;
                iVar3 = field_236;
                pVVar7 = (Vector3T*)GetTranslation();
                new (local_50) game::CoordFine(iVar3, pVVar7);
                new ((local_50 + 16)) game::CoordGrid(local_50);
                cVar2 = this_02->IsRoofRemoved((CoordGrid*)(local_50 + 16));
            }
            if (cVar2 == '\0')
                goto LAB_1003f9231;
        }
    LAB_1003f922e:
        uVar8 = 0;
    LAB_1003f9231:
        return uVar8 & 4294967295;
    }

} // namespace jag

namespace jag::input {
    // 0x1003f8580: the linker folded this into game::EffectAnimType::GetRotation() const, which has identical code
    float Input::GetMouseX() const;

} // namespace jag::input

// 0x1003f85a0, 16 bytes, placed by neighbouring functions
// floor(float)
void floor(float param_1) {
    _floorf();
}
