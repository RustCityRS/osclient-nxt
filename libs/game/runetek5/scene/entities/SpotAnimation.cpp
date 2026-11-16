// libs/game/runetek5/scene/entities/SpotAnimation.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.runetek5

#include "SpotAnimation.h"

namespace jag {
    // 0x1003f0f60
    uint64_t SpotAnimation::AbortOnMove() {

        if (field_256->operator_cast_to_bool()) {
            if (field_376->operator_cast_to_bool()) {
                if (((EffectAnimType*)(*field_256).operator->())->GetObeyExtraSeqSettings()) {
                    return ((AnimationWrapper*)(*field_376).operator->())->AbortOnMove();
                }
            }
        }
        return 0;
    }

    // 0x1003f1a70
    unsigned long SpotAnimation::Build(unsigned int arg1) {
        shared_ptr* this_01;
        uint8_t bVar3;
        int iVar4;
        shared_ptr<game::EffectAnimType>* effectAnimType;
        Input* this_02;
        EffectAnimType* pEVar6;
        shared_ptr<graphics::Model>* model;
        ModelCopyType* modelCopyType;
        float* pfVar7;
        LinkMap* linkMap;
        AnimationWrapper* pAVar8;
        unsigned long unaff_R15;
        float fVar10;
        QuaternionT<float> local_68;
        int local_50;
        int local_4c;
        DataStatus* local_48;
        shared_ptr* local_40;
        unsigned int local_38;
        bool local_31;

        auto plVar5 = GraphicsApp::Instance();
        bool cVar2 = (**(void (**)(...))(*plVar5 + 224))(plVar5);
        if (!cVar2) {
            LogAssert("GraphicsApp::Instance()->IsInsideMainLogic()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/"
                      "entities/SpotAnimation.cpp",
                      100, nullptr);
        }
        uint8_t* this_00 = field_256;
        cVar2 = this_00->operator_cast_to_bool();
        if (!cVar2) {
            unaff_R15 = 0;
            effectAnimType = field_208->GetConfig<game::EffectAnimType>(m_effectAnimID, nullptr);
            *this_00 = *effectAnimType;
            cVar2 = this_00->operator_cast_to_bool();
            if (!cVar2)
                goto LAB_1003f1e43;
            this_02 = (Input*)(*this_00).operator->();
            fVar10 = (float)this_02->GetMouseX();
            if (fVar10 != 0.0) {
                local_40 = (shared_ptr*)(((uint64_t)local_40._4_4_ << 32) | (uint32_t)fVar10);
                local_68 = math::QuaternionT<float>();
                local_68.FromAxisAngle(*PTR_UP_100ee66d0, local_40._0_4_ + field_240);
                GetNode()->SetRotation(local_68);
            }
            if (field_244 == 4294967295) {
                pEVar6 = (EffectAnimType*)(*this_00).operator->();
                bVar3 = pEVar6->GetObeyExtraSeqSettings();
                field_244 = (unsigned int)(bVar3 ^ 1) * 2;
            }
        }
        uint8_t* puVar1 = field_272;
        cVar2 = puVar1->operator_cast_to_bool();
        uint64_t uVar9 = (uint64_t)(unaff_R15 >> 8);
        local_40 = (shared_ptr*)puVar1;
        if (!cVar2) {
            cVar2 = puVar1->operator_cast_to_bool();
            if (!cVar2) {
                pEVar6 = (EffectAnimType*)(*this_00).operator->();
                model = (shared_ptr<graphics::Model>*)pEVar6->GetModel(local_48, field_192);
                this_01 = local_40;
                *local_40 = *model;
                cVar2 = shared_ptr::operator_cast_to_bool(this_01);
                if (!cVar2) {
                    if ((uint8_t*)(((uint64_t)local_48._4_4_ << 32) | (uint32_t)((int)local_48)) ==
                        DataStatus::MISSING) {
                        field_436.UnSync();
                        unaff_R15 = (((uint64_t)uVar9 << 8) | (uint8_t)1);
                        goto LAB_1003f1e43;
                    }
                } else {
                    cVar2 = ((Model*)(*this_01).operator->())->IsLoaded();
                    if (cVar2) {
                        modelCopyType = (ModelCopyType*)**this_01;
                        local_38 = 2;
                        MakeSharedPool<graphics::Model, 3072>::MakeShared<graphics::Model&, graphics::ModelCopyType>(
                            &local_68, modelCopyType);
                        *this_01 = local_68;
                        goto LAB_1003f1c7a;
                    }
                    this_01->reset();
                }
                unaff_R15 = 0;
                goto LAB_1003f1e43;
            }
        LAB_1003f1c7a:
            if (field_216 == '\0') {
                pfVar7 = (float*)GetWorldPosition();
                linkMap = ((World*)field_176.operator->())->GetLinkMap();
                local_50 = GetDuration();
                fVar10 = (float)::floor(*pfVar7 * 0.0078125f);
                local_4c = (int)fVar10;
                fVar10 = (float)::floor(pfVar7[2] * 0.0078125f);
                iVar4 = game::RemoveRoof::CalculateMaxRemoveRoofLevel(*linkMap, local_50, local_4c, (int)fVar10, 1, 1);
                SetMaximumRemoveRoofLevel(iVar4);
            }
        }
        puVar1 = field_376;
        cVar2 = puVar1->operator_cast_to_bool();
        if (!cVar2) {
            iVar4 = ((MSIType*)(*this_00).operator->())->GetTint();
            local_48._0_4_ = iVar4;
            if (iVar4 == -1) {
                field_436.SetReady(true);
                unaff_R15 = (((uint64_t)uVar9 << 8) | (uint8_t)1);
                goto LAB_1003f1e43;
            }
            local_38 = local_38 & 4294967040;
            local_31 = false;
            MakeSharedPool<game::AnimationWrapper, 512>::MakeShared<
                game::AssetBuilder&, game::ConfigProvider&, int&, int&, graphics::AnimationLoopBehaviour&, bool, bool>(
                &local_68, field_200, field_208, (int*)&local_48, &field_248, &field_244, (bool*)&local_38, &local_31);
            *puVar1 = local_68;
            pAVar8 = (AnimationWrapper*)(*puVar1).operator->();
            pAVar8->SetAudioTrigger(field_128);
            if (iVar4 == -1)
                goto LAB_1003f1e43;
        }
        pAVar8 = (AnimationWrapper*)(*puVar1).operator->();
        cVar2 = pAVar8->IsReady();
        if (!cVar2) {
            pAVar8 = (AnimationWrapper*)(*puVar1).operator->();
            pAVar8->Build(*field_208, m_effectAnimID, *local_40, arg1);
        }
        pAVar8 = (AnimationWrapper*)(*puVar1).operator->();
        cVar2 = pAVar8->IsReady();
        if (cVar2) {
            field_424 = '\x01';
            field_436.SetReady(true);
        }
        unaff_R15 = (((uint64_t)uVar9 << 8) | (uint8_t)(field_424 != '\0'));
    LAB_1003f1e43:
        return unaff_R15 & 4294967041;
    }

    // 0x1003f1e90
    bool SpotAnimation::IsReady() {
        uint64_t uVar1;

        if (field_424 == '\0') {
            uVar1 = 0;
        } else {
            uVar1 = field_436.IsCycleReady(((GraphicsApp*)GraphicsApp::Instance())->GetFrameCount());
        }
        return uVar1;
    }

    // 0x1003f1f10
    unsigned long SpotAnimation::IsFinished() {
        bool cVar1;
        int iVar2;
        shared_ptr<graphics::ParticleSystem>* this_01;
        shared_ptr<graphics::ParticleSystem>* psVar3;
        shared_ptr<graphics::ModularParticleSystem>* this_03;
        shared_ptr<graphics::ModularParticleSystem>* psVar4;
        ModularParticleSystem* pMVar5;
        uint8_t* this_04;
        unsigned long uVar6;

        if (field_424 != '\0') {
            cVar1 = field_376->operator_cast_to_bool();
            if (cVar1) {
                cVar1 = ((AnimationWrapper*)(*field_376).operator->())->IsFinished();
                if (!cVar1)
                    goto LAB_1003f1f55;
            }
            field_432 = '\x01';
        }
    LAB_1003f1f55:
        if (field_432 == '\0') {
        LAB_1003f2013:
            uVar6 = 0;
        } else {
            this_01 = (shared_ptr<graphics::ParticleSystem>*)field_288.HeapBeginPtr();
            psVar3 = (shared_ptr<graphics::ParticleSystem>*)field_288.end();
            for (; this_01 != psVar3; this_01 = this_01 + 16) {
                iVar2 = ((ParticleSystem*)(*this_01).operator->())->GetParticleCount();
                if (iVar2 != 0)
                    goto LAB_1003f2013;
            }
            this_04 = &field_344;
            this_03 = (shared_ptr<graphics::ModularParticleSystem>*)this_04->HeapBeginPtr();
            psVar4 = (shared_ptr<graphics::ModularParticleSystem>*)this_04->end();
            uVar6 = (((uint64_t)((int64_t)((unsigned long)this_04 >> 8)) << 8) | (uint8_t)(this_03 == psVar4));
            if (this_03 != psVar4) {
                pMVar5 = (ModularParticleSystem*)(*this_03).operator->();
                iVar2 = pMVar5->GetParticleCount();
                while (iVar2 == 0) {
                    this_03 = this_03 + 16;
                    uVar6 = (((uint64_t)((int64_t)(uVar6 >> 8)) << 8) | (uint8_t)(this_03 == psVar4));
                    if (this_03 == psVar4)
                        break;
                    pMVar5 = (ModularParticleSystem*)(*this_03).operator->();
                    iVar2 = pMVar5->GetParticleCount();
                }
            }
        }
        return uVar6 & 4294967295;
    }

    // 0x1003f4bf0
    bool SpotAnimation::IsDelayed() const {
        bool bVar3 = true;
        if (field_248 == 0) {
            if (field_376->operator_cast_to_bool() == '\0') {
                bVar3 = false;
            } else {
                bVar3 = ((AnimationWrapper*)(*field_376).operator->())->GetDelay() != 0;
            }
        }
        return bVar3;
    }

    // 0x1003f4c40
    unsigned long SpotAnimation::MayMove(int arg1) {
        unsigned int uVar2;
        uint64_t unaff_R15;

        bool cVar1 = field_256->operator_cast_to_bool();
        unsigned long uVar3 = (((uint64_t)((int64_t)((unsigned long)unaff_R15 >> 8)) << 8) | (uint8_t)1);
        if (cVar1) {
            cVar1 = field_376->operator_cast_to_bool();
            if (cVar1) {
                cVar1 = ((EffectAnimType*)(*field_256).operator->())->GetObeyExtraSeqSettings();
                if (cVar1) {
                    uVar2 = ((AnimationWrapper*)(*field_376).operator->())->MayMove(arg1);
                    uVar3 = (unsigned long)uVar2;
                }
            }
        }
        return uVar3 & 4294967295;
    }

    // 0x1003f4f50
    void SpotAnimation::TranslateParticles(const math::Vector3T<float>& vector3) {
        auto this_00 = field_288.HeapBeginPtr();
        auto psVar1 = field_288.end();
        for (; this_00 != psVar1; this_00 = this_00 + 16) {
            ((ParticleSystem*)(*this_00).operator->())->TranslateParticles(vector3);
        }
        auto this_02 = field_344.HeapBeginPtr();
        auto psVar2 = field_344.end();
        for (; this_02 != psVar2; this_02 = this_02 + 16) {
            ((ModularParticleSystem*)(*this_02).operator->())->TranslateParticles(vector3);
        }
    }

    // 0x1003f5190: SpotAnimation::GetEffectAnimID() const has the same machine code as game::BASType::GetHillRotateWidth() const

    // 0x1003f7fb0
    SpotAnimation::SpotAnimation(graphics::RT7Core& rt7Core, game::AssetBuilder& assetBuilder,
                                 game::ConfigProvider& configProvider, graphics::GraphNode* graphNode,
                                 const shared_ptr<game::World>& world, SpotAnimPosition spotAnimPosition,
                                 SpotAnimData spotAnimData)
        : game::Entity(graphNode, world, 4, in_stack_00000018), MakeUniquePool<SpotAnimation, 64>() {
        uint32_t in_stack_0000000c;
        float in_stack_00000014;
        int in_stack_00000018;
        uint8_t in_stack_00000020;
        uint32_t in_stack_00000024;
        uint32_t in_stack_00000028;
        char in_stack_0000002c;
        uint8_t in_stack_0000002d;
        unsigned int in_stack_00000034;

        field_8 = &PTR__SpotAnimation_100efee20;
        field_192 = rt7Core;
        field_200 = assetBuilder;
        field_208 = configProvider;
        field_216 = in_stack_00000020;
        m_effectAnimID = in_stack_00000024;
        field_224 = (((uint64_t)in_stack_0000000c << 32) | (uint32_t)spotAnimPosition);
        field_232 = spotAnimData;
        field_236 = in_stack_00000018;
        field_240 = in_stack_00000014;
        field_244 = 4294967295;
        field_248 = in_stack_00000028;
        new (field_256) shared_ptr();
        new (field_272) shared_ptr();
        new (&field_288) eastl::fixed_vector<shared_ptr<graphics::ParticleSystem>, 1ul>();
        new (&field_344) eastl::vector<shared_ptr<graphics::ModularParticleSystem>>();
        new (field_376) shared_ptr();
        MakeSharedPool<graphics::AnimationState, 256>::MakeShared<>();
        new (&field_408) shared_ptr();
        field_424 = '\0';
        field_425 = 0;
        field_426 = 1;
        m_combinedID = game::EntityCombinedID::NO_ENTITY;
        field_432 = '\0';
        field_433 = 0;
        field_434 = in_stack_0000002d;
        uint8_t* this_00 = &field_436;
        new (this_00) game::ServerSyncingUser(0);
        field_452 = 0;
        m_hidden = false;
        if (in_stack_0000002c != '\0') {
            field_244 = 1;
        }
        if (field_434 != '\0') {
            this_00->~AutoSingleton();
            this_00->Sync(in_stack_00000034);
        }
        SetInitialPosition();
    }

    // 0x1003f8270
    void SpotAnimation::SetInitialPosition() {
        auto pGVar1 = GetNode();
        local_30.Vector3T<int>(field_224);
        pGVar1->SetTranslation(local_30);
        Vector3T<float> local_30;
        local_30.FromAxisAngle(*PTR_UP_100ee66d0, field_240);
        pGVar1 = GetNode();
        pGVar1->SetRotation(local_30);
    }

    // 0x1003f8330
    SpotAnimation::~SpotAnimation() {
        field_8 = &PTR__SpotAnimation_100efee20;
        Destruct();
        field_436.~ServerSyncingUser();
        field_408.~shared_ptr();
        field_392.~shared_ptr();
        field_376->~shared_ptr();
        field_344.~vector();
        field_288.~fixed_vector();
        field_272->~shared_ptr();
        field_256->~shared_ptr();
    }

    // 0x1003f8490
    void SpotAnimation::ReSync(SpotAnimData spotAnimData) {
        uint32_t in_register_0000003c;
        uint32_t in_stack_00000010;
        unsigned int in_stack_0000001c;

        long lVar1 = (((uint64_t)in_register_0000003c << 32) | (uint32_t)spotAnimData);
        *(uint8_t*)(lVar1 + 452) = 1;
        *(uint32_t*)(lVar1 + 248) = in_stack_00000010;
        ((lVar1 + 436))->UnSync();
        ((lVar1 + 436))->Sync(in_stack_0000001c);
    }

    // 0x1003f8710
    void SpotAnimation::Destruct() {
        World* pWVar2;
        DetachedParticleSystemsDrawable* pDVar3;

        auto this_00 = GetWorld();
        if (shared_ptr::operator_cast_to_bool(this_00) != '\0') {
            pWVar2 = (World*)(*this_00).operator->();
            pDVar3 = pWVar2->GetDetachedParticleSystems();
            pDVar3->Add(field_288);
            pWVar2 = (World*)(*this_00).operator->();
            pDVar3 = pWVar2->GetDetachedParticleSystems();
            pDVar3->Add(field_344);
        }
        ((AnimationState*)field_392.operator->())->ClearState();
        GetNode()->Detach();
        (*(void (*)(...))field_8[3])(&field_8);
        field_288.clear();
        field_344.clear();
    }

    // 0x1003f87c0
    uint8_t* SpotAnimation::GetSeqType() const {
        NXTPixToolkit* this_00;
        uint8_t* puVar2;

        if (field_376->operator_cast_to_bool() == '\0') {
            puVar2 = &game::SeqType::NullSeqType;
        } else {
            this_00 = (NXTPixToolkit*)(*field_376).operator->();
            puVar2 = (uint8_t*)this_00->GetScreen();
        }
        return puVar2;
    }

    // 0x1003f8800
    uint32_t SpotAnimation::GetDuplicateBehaviour() const {
        NXTPixToolkit* pNVar3;
        shared_ptr<game::SeqType>* this_01;

        uint8_t* this_03 = field_376;
        bool cVar1 = this_03->operator_cast_to_bool();
        uint32_t uVar2 = 0;
        if (cVar1) {
            pNVar3 = (NXTPixToolkit*)(*this_03).operator->();
            cVar1 = (pNVar3->GetScreen())->operator_cast_to_bool();
            if (cVar1) {
                pNVar3 = (NXTPixToolkit*)(*this_03).operator->();
                this_01 = (shared_ptr<game::SeqType>*)pNVar3->GetScreen();
                uVar2 = ((SeqType*)(*this_01).operator->())->GetDuplicateBehaviour();
            }
        }
        return uVar2;
    }

    // 0x1003f8870
    void SpotAnimation::MainLogic(graphics::RT7Core& rt7Core, unsigned int arg2,
                                  const math::Matrix44T<float>& matrix44) {
        uint32_t uVar2;
        LogStream* this_00;
        int iVar5;
        int arg2_00;
        uint32_t uVar6;
        uint32_t uVar7;
        AnimationWrapper* pAVar8;
        shared_ptr<game::World>* psVar9;
        World* pWVar10;
        HeightMap* this_03;
        NXTPixToolkit* this_04;
        AABB* aabb;
        RT7Core* pRVar11;
        vector_map<int, graphics::FaceGroupRenderMasks>* pvVar12;
        Vector3T<float>* vector3;
        shared_ptr<oldscape::midi2::MidiPlayerMainThread>* midiPlayerMainThread;
        IrradianceEffect* this_05;
        MapSquare* this_06;
        Logger* pLVar13;
        AnimationParameters* pAVar14;
        AnimationState* animationState;
        Model* pMVar15;
        Matrix44T<float>* pMVar16;
        LogStream* pLVar17;
        uint8_t local_1a8[16];
        AnimationStateProvider local_128;
        uint64_t uStack_110;
        uint64_t local_108;
        uint64_t uStack_100;
        uint64_t local_f8;
        uint64_t uStack_f0;
        LogStream local_c8;

        (*(void (*)(...))field_8[5])(&field_8);
        bool cVar3 = CanRender();
        if (!cVar3)
            goto LAB_1003f8cc1;
        Matrix44T<float>* local_d0 = matrix44;
        unsigned int arg1 = ((GraphicsApp*)GraphicsApp::Instance())->GetFrameCount();
        uint8_t* puVar1 = field_376;
        cVar3 = puVar1->operator_cast_to_bool();
        LogStream* local_d8 = (LogStream*)puVar1;
        if (!cVar3) {
            new ((local_1a8 + 16)) shared_ptr();
            field_408 = (*((local_1a8 + 16)));
            ((local_1a8 + 16))->~shared_ptr();
            pMVar16 = local_d0;
        } else {
            pAVar8 = (AnimationWrapper*)(*puVar1).operator->();
            cVar3 = pAVar8->IsReady();
            if (!cVar3)
                goto LAB_1003f8cc1;
            puVar1 = &field_436;
            puVar1->SetReady(true);
            cVar3 = puVar1->IsCycleReady(arg1);
            if (!cVar3)
                goto LAB_1003f8cc1;
            puVar1->UnSync();
            pLVar17 = local_d8;
            pAVar8 = (AnimationWrapper*)(*local_d8).operator->();
            pAVar8->Update(arg2, 0);
            pMVar16 = local_d0;
            pAVar8 = (AnimationWrapper*)(*pLVar17).operator->();
            cVar3 = pAVar8->IsFinished();
            pLVar17 = local_d8;
            if (cVar3)
                goto LAB_1003f8cc1;
            if ((field_452 != '\0') || (field_425 == '\0')) {
                if (field_425 == '\0') {
                    pAVar8 = (AnimationWrapper*)(*local_d8).operator->();
                    pAVar8->Reset(arg2, field_248);
                } else if (field_452 != '\0') {
                    pAVar8 = (AnimationWrapper*)(*local_d8).operator->();
                    pAVar8->ResetLoopCounter();
                }
                pAVar8 = (AnimationWrapper*)(*pLVar17).operator->();
                pAVar8->SetDelay(field_248);
                field_248 = 0;
                field_425 = 1;
                field_452 = 0;
            }
            pAVar8 = (AnimationWrapper*)(*pLVar17).operator->();
            animationState = (AnimationState*)*field_392;
            pAVar8->ApplyToAnimationState(0, *animationState, false);
            field_408 = field_392;
            puVar1 = field_272;
            cVar3 = puVar1->operator_cast_to_bool();
            if (cVar3) {
                pMVar15 = (Model*)(*puVar1).operator->();
                cVar3 = pMVar15->IsLoaded();
                if (cVar3) {
                    pMVar15 = (Model*)(*puVar1).operator->();
                    new ((local_1a8 + 16)) shared_ptr(&field_408);
                    pMVar15->SetAnimationStateProvider(*((local_1a8 + 16)));
                    ((local_1a8 + 16))->~shared_ptr();
                }
            }
        }
        puVar1 = field_272;
        cVar3 = puVar1->operator_cast_to_bool();
        if (cVar3) {
            local_128._vptr = *(AnimationStateProvider_vtbl**)pMVar16;
            local_128._8_8_ = *(uint64_t*)(pMVar16 + 8);
            local_128._16_8_ = *(uint64_t*)(pMVar16 + 16);
            uStack_110 = *(uint64_t*)(pMVar16 + 24);
            local_108 = *(uint64_t*)(pMVar16 + 32);
            uStack_100 = *(uint64_t*)(pMVar16 + 40);
            local_f8 = *(uint64_t*)(pMVar16 + 48);
            uStack_f0 = *(uint64_t*)(pMVar16 + 56);
            cVar3 = field_256->operator_cast_to_bool();
            if (cVar3) {
                cVar3 = ((EffectAnimType*)(*field_256).operator->())->ShouldHillRotate();
                if (cVar3) {
                    psVar9 = (shared_ptr<game::World>*)GetWorld();
                    pWVar10 = (World*)(*psVar9).operator->();
                    this_03 = pWVar10->GetHeightMap();
                    iVar5 = field_236;
                    this_04 = (NXTPixToolkit*)(*puVar1).operator->();
                    aabb = (AABB*)this_04->GetScreen();
                    this_03->ApplyHillRotation(iVar5, *aabb, local_128, 1);
                }
            }
            pRVar11 = (RT7Core*)(*puVar1).operator->();
            local_d0 = (Matrix44T<float>*)&field_288;
            pvVar12 = (vector_map<int, graphics::FaceGroupRenderMasks>*)field_408.end();
            graphics::Model::UpdateParticleEmitters(*pRVar11, rt7Core, *local_d0, &local_128, pvVar12, false);
            local_d0 = (Matrix44T<float>*)puVar1;
            pRVar11 = (RT7Core*)(*puVar1).operator->();
            pvVar12 = (vector_map<int, graphics::FaceGroupRenderMasks>*)field_408.end();
            graphics::Model::UpdateModularParticleSystems(*pRVar11, rt7Core, field_344, &local_128, pvVar12, false);
            iVar5 = GetDuration();
            vector3 = (Vector3T<float>*)GetWorldPosition();
            new (local_1a8) game::CoordFine(iVar5, vector3);
            psVar9 = (shared_ptr<game::World>*)GetWorld();
            pWVar10 = (World*)(*psVar9).operator->();
            iVar5 = local_1a8->GetMapSquareX();
            arg2_00 = local_1a8->GetMapSquareZ();
            midiPlayerMainThread =
                (shared_ptr<oldscape::midi2::MidiPlayerMainThread>*)pWVar10->GetMapSquare(iVar5, arg2_00);
            if (*midiPlayerMainThread != nullptr) {
                pMVar15 = (Model*)(*local_d0).operator->();
                this_05 = (IrradianceEffect*)pMVar15->GetIrradianceEffect();
                this_06 = (MapSquare*)(*midiPlayerMainThread).operator->();
                *((local_1a8 + 16)) = this_06->GetIrradianceSHConsts();
                this_05->SetCoefficients(*((local_1a8 + 16)));
            }
            this_00 = local_d8;
            pLVar17 = local_d8;
            cVar3 = local_d8->operator_cast_to_bool();
            if (cVar3) {
                pLVar13 = logger::default_logger();
                local_c8 = logger::LogStream(LOGGER_SPOTANIM);
                uVar2 = m_effectAnimID;
                pAVar8 = (AnimationWrapper*)(*this_00).operator->();
                pAVar14 = (AnimationParameters*)pAVar8->GetAnimationParameters();
                uVar6 = pAVar14->GetTicksThroughAnimation();
                pAVar8 = (AnimationWrapper*)(*this_00).operator->();
                pAVar14 = (AnimationParameters*)pAVar8->GetAnimationParameters();
                uVar7 = pAVar14->GetAnimationLength();
                ((uint8_t)pLVar13)
                    ->Log(nullptr, (LogLevel)&local_c8, 8, 14422942, 363, "Playing SPOTANIM %d[%d/%d]", uVar2, uVar6,
                          uVar7);
                pLVar17 = &local_c8;
                pLVar17->~LogStream();
            }
            ((ModelUpdateManager*)pLVar17->Instance())->AddToUpdateList(*local_d0);
            field_433 = 1;
        }
    LAB_1003f8cc1:
    }

    // 0x1003f8f00
    void SpotAnimation::GatherDrawableElements(graphics::DrawableQueue& drawableQueue, graphics::RT7Core& rt7Core,
                                               const math::Matrix44T<float>& matrix44,
                                               const graphics::SceneViewData& sceneViewData,
                                               const graphics::EffectManager& effectManager) {
        uint8_t* this_00;
        bool cVar1;
        Model* pMVar3;
        Vector3T<float>* vector3;
        shared_ptr<graphics::ParticleSystem>* this_02;
        shared_ptr<graphics::ParticleSystem>* psVar4;
        long* plVar5;
        shared_ptr<graphics::ModularParticleSystem>* this_03;
        shared_ptr<graphics::ModularParticleSystem>* psVar6;

        if (((m_hidden == false) && (cVar1 = CanRender(), cVar1)) && (field_433 != '\0')) {
            cVar1 = field_376->operator_cast_to_bool();
            if (cVar1) {
                if (((AnimationWrapper*)(*field_376).operator->())->GetDelay() != 0) {
                    return;
                }
            }
            cVar1 = FilterRenderPasses(sceneViewData);
            if (cVar1) {
                if (field_432 == '\0') {
                    this_00 = field_272;
                    pMVar3 = (Model*)(*this_00).operator->();
                    pMVar3->SetWorldTransform(matrix44);
                    pMVar3 = (Model*)(*this_00).operator->();
                    vector3 = (Vector3T<float>*)GetWorldPosition();
                    pMVar3->SetPointLightBounds(*vector3, 1, 1);
                    pMVar3 = (Model*)(*this_00).operator->();
                    pMVar3->GatherDrawableElements(drawableQueue, rt7Core, sceneViewData, effectManager);
                }
                this_02 = (shared_ptr<graphics::ParticleSystem>*)field_288.HeapBeginPtr();
                psVar4 = (shared_ptr<graphics::ParticleSystem>*)field_288.end();
                for (; this_02 != psVar4; this_02 = this_02 + 16) {
                    plVar5 = (long*)(*this_02).operator->();
                    (**(void (**)(...))(*plVar5 + 16))(plVar5, drawableQueue, rt7Core, sceneViewData, effectManager);
                }
                this_03 = (shared_ptr<graphics::ModularParticleSystem>*)field_344.HeapBeginPtr();
                psVar6 = (shared_ptr<graphics::ModularParticleSystem>*)field_344.end();
                for (; this_03 != psVar6; this_03 = this_03 + 16) {
                    plVar5 = ((ModularParticleSystem*)(*this_03).operator->())->GetDrawable();
                    (**(void (**)(...))(*plVar5 + 16))(plVar5, drawableQueue, rt7Core, sceneViewData, effectManager);
                }
            }
        }
    }

    // 0x1003f90c0
    uint64_t SpotAnimation::FilterRenderPasses(const graphics::SceneViewData& sceneViewData) {

        if (sceneViewData.HasShadowPass()) {
            if (field_256->operator_cast_to_bool()) {
                if (!(((AnimationParameters*)(*field_256).operator->())->GetPaused())) {
                    return 0;
                }
            }
        }
        return 1;
    }

    // 0x1003f9110
    unsigned long SpotAnimation::CanRender() const {
        bool cVar1;
        int iVar2;
        int arg2;
        int arg3;
        shared_ptr* this_01;
        World* pWVar3;
        RemoveRoof* this_02;
        Vector3T<float>* vector3;
        uint64_t unaff_R14;
        unsigned long uVar4;
        uint8_t local_50[32];

        if (field_424 != '\0') {
            cVar1 = field_376->operator_cast_to_bool();
            if (cVar1) {
                cVar1 = ((AnimationWrapper*)(*field_376).operator->())->HasAnimationParameters();
                if (!cVar1)
                    goto LAB_1003f922e;
            }
            uVar4 = (((uint64_t)((int64_t)((unsigned long)unaff_R14 >> 8)) << 8) | (uint8_t)1);
            if (field_216 != '\0')
                goto LAB_1003f9231;
            this_01 = (shared_ptr*)GetWorld();
            cVar1 = shared_ptr::operator_cast_to_bool(this_01);
            if (!cVar1)
                goto LAB_1003f9231;
            pWVar3 = (World*)(*this_01).operator->();
            cVar1 = pWVar3->IsRemoveRoofSelective();
            if (!cVar1) {
                iVar2 = GetDuration();
                arg2 = GetWrapMode();
                pWVar3 = (World*)(*this_01).operator->();
                arg3 = pWVar3->GetMaxRenderLevel();
                cVar1 = game::LinkConstants::IsAffectedByMaxRenderLevel(iVar2, arg2, arg3);
            } else {
                pWVar3 = (World*)(*this_01).operator->();
                this_02 = (RemoveRoof*)pWVar3->GetRemoveRoof();
                cVar1 = this_02->AnyRoofRemoved();
                if (!cVar1)
                    goto LAB_1003f9231;
                iVar2 = field_236;
                vector3 = (Vector3T<float>*)GetTranslation();
                new (local_50) game::CoordFine(iVar2, vector3);
                new ((local_50 + 16)) game::CoordGrid(local_50);
                cVar1 = this_02->IsRoofRemoved(*((local_50 + 16)));
            }
            if (!cVar1)
                goto LAB_1003f9231;
        }
    LAB_1003f922e:
        uVar4 = 0;
    LAB_1003f9231:
        return uVar4 & 4294967295;
    }

} // namespace jag

namespace jag::input {
    // 0x1003f8580: Input::GetMouseX() const has the same machine code as game::EffectAnimType::GetRotation() const

} // namespace jag::input

// 0x1003f85a0
void floor(float arg1) {
    _floorf();
}
