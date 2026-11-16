// libs/game/runetek5/scene/entities/PathingEntity.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.runetek5

#include "PathingEntity.h"

namespace jag {
    // 0x100f38528
    const char* PathingEntity::TITLE_TAG = "<name>";

    // 0x1039b4cba
    int16_t PathingEntity::m_showHillRotateCorners;

    // 0x1039b4d50
    int64_t PathingEntity::NullSpotAnimation;

    // 0x100009e70: PathingEntity::OnModelChange() has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

    // 0x100009e70: PathingEntity::UpdateHighlighting(unsigned int) has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

    // 0x100029ea0: PathingEntity::HideChatLine() has the same machine code as oldscape::InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long)

    // 0x100029ea0: PathingEntity::IsInPlayersClan() const has the same machine code as oldscape::InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long)

    // 0x100029ea0: PathingEntity::IsMiniMapHidden() const has the same machine code as oldscape::InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long)

    // 0x100029ea0: PathingEntity::GetWalkSmoothing() const has the same machine code as oldscape::InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long)

    // 0x100029ea0: PathingEntity::IsInPlayersGroup() const has the same machine code as oldscape::InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long)

    // 0x100029ea0: PathingEntity::IsFullySoftHidden() const has the same machine code as oldscape::InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long)

    // 0x100029ea0: PathingEntity::RepeatLastOverrideAnimationFrameWhenFinished(int) const has the same machine code as oldscape::InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long)

    // 0x100029ea0: PathingEntity::IsPlayer() const has the same machine code as oldscape::InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long)

    // 0x10002d860: PathingEntity::ShouldAnimate() const has the same machine code as oldscape::option::Option<int>::IsValidValue(int const&) const

    // 0x10002d860: PathingEntity::LineIntersectionSupport() const has the same machine code as oldscape::option::Option<int>::IsValidValue(int const&) const

    // 0x100120420: PathingEntity::CalculateWorldPriority(unsigned int, PathingEntityPriorityData) const has the same machine code as oldscape::javapal::GameShell::GetVisibleAppHeight()

    // 0x1003eff50
    PathingEntity::PathingEntity(const PathingEntityParams& pathingEntityParams, graphics::GraphNode* graphNode,
                                 const shared_ptr<game::World>& world, game::EntityType entityType, int arg5)
        : game::Entity(graphNode, world, entityType, arg5) {
        uint8_t local_128[24];
        uint8_t local_78[64];

        field_8 = &PTR__PathingEntity_100efec98;
        field_208 = *(RT7Core**)(pathingEntityParams + 24);
        field_216 = *(AssetBuilder**)pathingEntityParams;
        field_224 = *(ConfigProvider**)(pathingEntityParams + 8);
        field_232 = *(SceneManager**)(pathingEntityParams + 16);
        m_slotID = *(uint32_t*)(pathingEntityParams + 32);
        uint8_t* local_108 = &field_192;
        new (&field_248) eastl::fixed_string<char, 64>();
        uint8_t* local_100 = &field_248;
        new (&field_352) eastl::string();
        uint8_t* local_f8 = &field_352;
        new (&field_384) eastl::string();
        field_416 = 0;
        uint8_t* local_e8 = field_424;
        uint8_t* local_f0 = &field_384;
        new (local_e8) game::EntityVarDomain(this);
        field_504 = 0;
        *(uint64_t*)&m_gridSize = 1288490188801;
        field_524 = 0;
        new (&field_528) ImVec4(0.0, 0.0, 0.0, 0.0);
        field_544 = 0;
        field_548 = 0;
        FacingController* local_80 = (FacingController*)field_552;
        new (local_80) FacingController();
        *local_78 = std::make_unique<EntitySmoothRoute>();
        unique_ptr<EntityRoute>* local_88 = (unique_ptr<EntityRoute>*)(field_552 + 160);
        local_88->unique_ptr<EntitySmoothRoute, std::default_delete<EntitySmoothRoute>, void, void>(*local_78);
        new (&field_720) math::Vector3T();
        new (&field_736) math::Transitionable<math::Vector3T<double>>();
        field_800 = 0;
        uint8_t* local_e0 = &field_808;
        new (local_e0) eastl::fixed_vector<int, 4ul>();
        uint8_t* local_d8 = m_animatedModel;
        new (local_d8) PathingEntityAnimatedModel(*field_208, *field_216, *field_224, 0, false, field_128, *this);
        field_3232 = 0;
        uint8_t* local_d0 = &field_3240;
        new (local_d0) PathingEntityModels();
        uint8_t* local_c8 = &field_3288;
        new (local_c8) PathingEntityModels();
        new (&field_3344) math::Matrix44T<float>();
        field_3408 = '\0';
        new (&field_3424) math::Matrix44T<float>();
        field_3488 = false;
        m_worldPriority = -1;
        m_hiddenByOtherEntity = '\x01';
        field_3493 = 0;
        field_3496 = 0;
        new (&field_3500) game::CoordFine();
        new (&field_3516) game::CoordFine();
        field_3532 = 4294967295;
        field_3536 = 4294967295;
        *(uint64_t*)&field_3540 = 18446744069414584320;
        uint8_t* local_c0 = &field_3552;
        new (local_c0) eastl::fixed_vector<HardCodedSprites::SpriteReference, 8ul>();
        &field_3784->unique_ptr<true, void>();
        uint8_t* local_b0 = &field_3792;
        new (local_b0) EntityChatLine();
        m_basID = -1;
        uint8_t* local_a8 = field_3856;
        new (local_a8) shared_ptr();
        field_3872 = -1;
        uint8_t* local_a0 = field_3880;
        new (local_a0) shared_ptr();
        uint8_t* local_98 = field_3896;
        new (local_98) shared_ptr();
        uint8_t* local_90 = field_3912;
        new (local_90) shared_ptr();
        new (field_3928) graphics::VariableList();
        new (&field_4088)
            eastl::vector_map<int,
                              std::unique_ptr<SpotAnimation, MakeUniquePool<SpotAnimation, 64>::UniquePoolDeleter>>();
        new (&field_4128) eastl::vector_map<int, PendingSpotAnimation>();
        field_4168 = 1;
        field_4169 = 0;
        field_4170 = 1;
        field_4171 = 0;
        if ((((field_208 == nullptr) || (field_216 == nullptr)) || (field_224 == nullptr)) || (field_232 == nullptr)) {
            LogAssert("m_rt7Core && m_assetBuilder && m_configProvider && m_sceneManager",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/"
                      "entities/PathingEntity.cpp",
                      85, nullptr);
        }
        SetNDCProjectionTestEnabled(false);
        EntityRoute* this_00 = (EntityRoute*)(*local_88).operator->();
        local_78._0_8_ = PTR_DecrementAnimationRoutePending_100ee5988;
        local_78._8_4_ = 0.0;
        local_78._12_4_ = 0.0;
        PathingEntity** arg2 = (PathingEntity**)local_78;
        PathingEntity* local_110 = this;
        member_function_ptr mVar1 =
            std::bind<void (PathingEntity::*)(), PathingEntity*>((void__jag__PathingEntity________)local_128, *arg2);
        mVar1.ptr = arg2;
        ((local_78 + 16))->function<std::__bind<void (PathingEntity::*)(), PathingEntity*>, void>(mVar1);
        this_00->SetWaypointReachedCallback((local_78 + 16));
        ((local_78 + 16))->~function();
        new (local_78) game::CoordFine(0, 0.0, 0.0, 0.0);
        AddRouteWaypointFine(*local_78, (MoveSpeed*)MoveSpeed::STATIONARY, false);
        local_80->SetBaseTurnSpeed(256);
    }

    // 0x1003f0710
    void PathingEntity::AddRouteWaypointFine(const game::CoordFine& coordFine, const MoveSpeed* moveSpeed, bool arg3) {
        unique_ptr* this_01;
        uint64_t in_register_00000009;

        uint32_t local_34 = (uint32_t)(((uint64_t)in_register_00000009 << 8) | (uint8_t)arg3);
        if (*(int*)(MoveSpeed::RUN + 8) < *(int*)(moveSpeed + 8)) {
            LogAssert("moveSpeed->id <= MoveSpeed::RUN->id",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/"
                      "entities/PathingEntity.cpp",
                      151, nullptr);
        }
        CoordFine local_48;
        GetPositionFine(local_48);
        long* plVar2 = (long*)(*((field_552 + 160))).operator->();
        (**(void (**)(...))(*plVar2 + 16))(plVar2, &local_48, coordFine, moveSpeed);
        auto this_00 = field_4088.HeapBeginPtr();
        auto pcVar3 = field_4088.end();
        for (; this_00 != pcVar3; this_00 = this_00 + 16) {
            this_00->first();
            this_01 = (unique_ptr*)eastl::compressed_pair<std::deque<ThreadPool::TaskInfo>*>::second();
            if (std::unique_ptr::operator_cast_to_bool(this_01)) {
                if (((SpotAnimation*)(*this_01).operator->())->AbortOnMove()) {
                    this_01->reset(nullptr);
                }
            }
        }
        if (((char)local_34 == '\0') || (field_64 == 1)) {
            AbortAnimationsOnMove();
        }
    }

    // 0x1003f08d0
    PathingEntity::~PathingEntity() {
        field_8 = &PTR__PathingEntity_100efec98;
        field_4128.~vector_map();
        field_4088.~vector_map();
        field_3928->~VariableList();
        field_3912->~shared_ptr();
        field_3896->~shared_ptr();
        field_3880->~shared_ptr();
        field_3856->~shared_ptr();
        field_3792.~__alt();
        field_3784.~unique_ptr();
        field_3552.~fixed_vector();
        field_3288.~PathingEntityModels();
        field_3240.~PathingEntityModels();
        m_animatedModel->~LocationAnimatedModel();
        field_808.~fixed_vector();
        ((field_552 + 160))->~unique_ptr();
        field_552->~FacingController();
        field_424->~EntityVarDomain();
        field_384.~basic_string();
        field_352.~basic_string();
        field_248.~fixed_string();
    }

    // 0x1003f0a40
    void PathingEntity::SetPathingEntityChatLine(const eastl::basic_string<char, BucketAllocatorEASTL>& str,
                                                 EntityChatLine::ChatColour chatColour,
                                                 EntityChatLine::ChatEffect chatEffect, unsigned long long arg4) {
        field_3792.Init(str, chatColour, chatEffect, arg4);
    }

    // 0x1003f0a60
    uint8_t* PathingEntity::GetChatLine() {
        uint8_t* puVar2;

        bool cVar1 = GetWalkSmoothing();
        if (!cVar1) {
            cVar1 = field_3792.IsInit();
            puVar2 = nullptr;
            if (cVar1) {
                puVar2 = &field_3792;
            }
        } else {
            puVar2 = nullptr;
        }
        return puVar2;
    }

    // 0x1003f0aa0
    auto PathingEntity::GetDisplayNameWithExtras(bool arg1) {
        unsigned long arg1_00;
        char* pcVar2;
        long lVar3;
        unsigned long* puVar4;
        size_t arg2;
        uint64_t in_register_00000011;
        size_t local_50;
        eastl local_48;
        unsigned long local_30;

        if ((int)(((uint64_t)in_register_00000011 << 8) | (uint8_t)arg1) == 0) {
            pcVar2 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        } else {
            pcVar2 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        }
        eastl::destruct<oldscape::highlight::NpcUID*>(&local_48);
        basic_string<char, BucketAllocatorEASTL> local_68(pcVar2, &local_48);
        uint8_t* this_00 = &field_384;
        if (*this_00 == "" == '\0') {
            lVar3 = this_00->size();
            if (lVar3 != 1) {
                local_48 = eastl::basic_string<char, BucketAllocatorEASTL>();
                lVar3 = this_00->size();
                local_30 = local_68.size();
                local_50 = _strlen(TITLE_TAG);
                puVar4 = std::max<unsigned long>(local_30, local_50);
                local_48.reserve(lVar3 + *puVar4);
                pcVar2 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                local_48.append(pcVar2);
                arg2 = _strlen(TITLE_TAG);
                arg1_00 = field_416;
                pcVar2 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                local_48.replace(arg1_00, arg2, pcVar2);
                pcVar2 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                local_30.destruct<oldscape::highlight::NpcUID*>();
                auto result(pcVar2, &local_30);
                goto LAB_1003f0bf6;
            }
        }
        new (&result) eastl::basic_string<char, BucketAllocatorEASTL>(local_68);
    LAB_1003f0bf6:
        return result;
    }

    // 0x1003f0ce0
    void PathingEntity::SetTitle(int arg1, game::PlayerGender playerGender) {
        int arg1_00;
        shared_ptr<game::EnumType>* this_01;
        char* str;
        unsigned long uVar1;

        if (arg1 == -1) {
            (&field_384)->assign("");
            uVar1 = 0;
        } else {
            arg1_00 = ((CustomizationDefaults*)field_224->GetCustomizationDefaults())->GetTitleEnum(playerGender);
            this_01 = field_224->GetConfig<game::EnumType>(arg1_00, nullptr);
            (((EnumType*)(*this_01).operator->())->GetOutputString(arg1))->GetString();
            str = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            (&field_384)->assign(str);
            uVar1 = field_384.find(TITLE_TAG, 0);
        }
        field_416 = uVar1;
    }

    // 0x1003f0ef0
    void PathingEntity::GetPositionFine(game::CoordFine& coordFine) const {
        uint64_t extraout_var;

        coordFine.field_0 = GetDuration();
        uint8_t uVar1 = GetTranslation();
        coordFine.field_4.SetXYZ(*((Vector3T<float>*)(((uint64_t)extraout_var << 8) | (uint8_t)uVar1)));
    }

    // 0x1003f1000
    void PathingEntity::AbortAnimationsOnMove() {
        if (m_animatedModel->AbortAnimationsOnMove() != '\0') {
            field_808.clear();
        }
    }

    // 0x1003f1030
    void PathingEntity::SetExactMove(int arg1, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7, int arg8,
                                     float arg9, unsigned int arg10) {
        long* plVar5;
        Vector2T<int>* this_02;
        Vector3T<float>* vector3;
        uint8_t local_60[28];

        field_3532 = arg7 + arg10;
        field_3536 = arg10 + arg8;
        field_3540 = arg9;
        int local_40 = arg4;
        int local_3c = arg3;
        int local_38 = arg5;
        int local_34 = arg2;
        new ((local_60 + 16)) math::Vector3T();
        unique_ptr<EntityRoute>* this_01 = (unique_ptr<EntityRoute>*)(field_552 + 160);
        EntityRoute* pEVar4 = (EntityRoute*)(*this_01).operator->();
        int iVar3 = pEVar4->Length();
        if (iVar3 == 0) {
            vector3 = (Vector3T<float>*)GetTranslation();
        } else {
            plVar5 = (long*)(*this_01).operator->();
            (**(void (**)(...))(*plVar5 + 32))(plVar5);
            pEVar4 = (EntityRoute*)(*this_01).operator->();
            this_02 = (Vector2T<int>*)pEVar4->GetLastWaypoint();
            vector3 = (Vector3T<float>*)this_02->y();
        }
        Vector4T<float>* this_00 = (Vector4T<float>*)(local_60 + 16);
        this_00->SetXYZ(*vector3);
        local_40 = local_40 << 7;
        local_3c = local_3c << 7;
        int iVar8 = local_34 * 128;
        iVar3 = arg1 * 128;
        local_38 = local_38 + field_68;
        local_34 = arg6 + field_68;
        auto pfVar6 = this_00->SSOBeginPtr();
        float fVar1 = *pfVar6;
        pfVar6 = (float*)this_00->second();
        float fVar2 = *pfVar6;
        pfVar6 = (float*)this_00->SSOBeginPtr();
        int iVar9 = (int)*pfVar6 + local_3c;
        pfVar6 = (float*)this_00->second();
        int iVar7 = (int)*pfVar6 + local_40;
        new (local_60) game::CoordFine(local_38, (float)((int)fVar1 + iVar3), (float)((int)fVar2 + iVar8));
        field_3500 = *local_60;
        new (local_60) game::CoordFine(local_34, (float)iVar9, (float)iVar7);
        field_3516 = *local_60;
        iVar3 = GetHeightForLevel(field_3500, field_3504);
        field_3508 = (float)iVar3;
        iVar3 = GetHeightForLevel(field_3516, field_3520);
        field_3524 = (float)iVar3;
        field_800 = 0;
    }

    // 0x1003f1200
    int PathingEntity::GetHeightForLevel(int arg1, math::Vector3T<float>& vector3) {
        float fVar1;
        uint8_t bVar2;
        int iVar3;
        LinkMap* this_02;
        HeightMap* this_03;
        float* pfVar4;
        uint8_t local_50[32];

        auto this_00 = GetWorld();
        auto this_01 = this_00->end();
        if (this_01 == nullptr) {
            iVar3 = 0;
        } else {
            new (local_50) game::CoordFine(arg1, vector3);
            if (arg1 < 3) {
                this_02 = this_01->GetLinkMap();
                new ((local_50 + 16)) game::CoordGrid(local_50);
                bVar2 = this_02->IsLinkBelow(*((local_50 + 16)));
                arg1 = arg1 + (unsigned int)bVar2;
            }
            this_03 = this_01->GetHeightMap();
            pfVar4 = (float*)vector3.SSOBeginPtr();
            fVar1 = *pfVar4;
            pfVar4 = (float*)vector3.second();
            this_03->GetFineHeight(*((local_50 + 16)), arg1, (int)fVar1, (int)*pfVar4, true, 1);
            iVar3 = local_50._16_4_ + 5;
        }
        return iVar3;
    }

    // 0x1003f12d0
    void PathingEntity::SetBasID(int arg1) {
        uint8_t* this_00 = field_3856;
        if (this_00->operator_cast_to_bool() != '\0') {
            if (((GameToken*)(*this_00).operator->())->GetStatus() == arg1) {
                return;
            }
        }
        m_basID = arg1;
        this_00->reset();
    }

    // 0x1003f1330
    void PathingEntity::ClearAppearance() {
        bool arg2;

        field_3240.Clear();
        field_3288.Clear();
        field_3856->reset();
        uint8_t* this_00 = m_animatedModel;
        auto psVar3 = this_00->GetOverrideAnimation();
        if (shared_ptr::operator_cast_to_bool(psVar3)) {
            field_4169 = 1;
        }
        psVar3 = (shared_ptr*)this_00->GetCurrentModel();
        if (!(shared_ptr::operator_cast_to_bool(psVar3))) {
            this_00->UnSync();
        }
        field_4168 = 1;
        field_3552.clear();
        (*(void (*)(...))field_8[3])(&field_8);
        int iVar2 = this_00->GetDefaultAnimationSeqID();
        if (iVar2 != -1) {
            iVar2 = this_00->GetDefaultAnimationSeqID();
            arg2 = (bool)this_00->IsDefaultAnimationReadyAnim();
            this_00->RequestDefaultAnimation(iVar2, arg2, true);
        }
    }

    // 0x1003f1480
    void PathingEntity::SetSpotAnimation(
        std::unique_ptr<SpotAnimation, MakeUniquePool<SpotAnimation, 64>::UniquePoolDeleter>&& spotAnimation,
        int arg2) {
        unique_ptr<SpotAnimation, MakeUniquePool<SpotAnimation, 64>::UniquePoolDeleter> local_28(spotAnimation);
        PendingSpotAnimation local_40(&local_28);
        PendingSpotAnimation* this_00 = &field_4128[arg2];
        *this_00 = local_40;
    }

    // 0x1003f1630
    void PathingEntity::ResetSpotAnimation(int arg1, int arg2) {
        PendingSpotAnimation* this_00;
        PendingSpotAnimation local_30;

        if (arg2 == 0) {
            ((unique_ptr<SpotAnimation, MakeUniquePool<SpotAnimation, 64>::UniquePoolDeleter>*)field_4088[arg1])
                ->reset(nullptr);
        } else {
            local_30 = PendingSpotAnimation(arg2);
            this_00 = &field_4128[arg1];
            *this_00 = local_30;
        }
    }

    // 0x1003f1780
    void PathingEntity::GetSpotAnimation(int arg1) {
        field_4088[arg1];
    }

    // 0x1003f17b0
    void PathingEntity::UpdateSpotAnimations(unsigned int arg1) {
        bool cVar1;
        int iVar2;
        unique_ptr* puVar5;
        SpotAnimation* pSVar6;
        unique_ptr<SpotAnimation, MakeUniquePool<SpotAnimation, _64>::UniquePoolDeleter>* spotAnimation;
        int* arg1_01;
        unique_ptr<SpotAnimation, MakeUniquePool<SpotAnimation, 64>::UniquePoolDeleter>* puVar7;
        GraphNode* this_03;
        shared_ptr<game::World>* world;
        CommandLine* this_05;
        bool arg1_02;

        unsigned int arg1_00 = ((GraphicsApp*)GraphicsApp::Instance())->GetFrameCount();
        uint8_t* this_00 = &field_4128;
        auto pcVar3 = this_00->HeapBeginPtr();
        auto pcVar4 = this_00->end();
        for (; pcVar3 != pcVar4; pcVar3 = pcVar3 + 32) {
            pcVar3->first();
            puVar5 = (unique_ptr*)eastl::compressed_pair<std::deque<ThreadPool::TaskInfo>*>::second();
            cVar1 = std::unique_ptr::operator_cast_to_bool(puVar5);
            if (cVar1) {
                pSVar6 = (SpotAnimation*)**puVar5;
                pSVar6->Build(arg1);
            }
        }
        pcVar3 = (compressed_pair<eastl::string*>*)this_00->HeapBeginPtr();
        pcVar4 = (compressed_pair<eastl::string*>*)this_00->end();
        uint8_t* this_02 = &field_4088;
        do {
            if (pcVar3 == pcVar4) {
                pcVar3 = (compressed_pair<eastl::string*>*)this_02->HeapBeginPtr();
                pcVar4 = (compressed_pair<eastl::string*>*)this_02->end();
                for (; pcVar3 != pcVar4; pcVar3 = pcVar3 + 16) {
                    pcVar3->first();
                    puVar7 = (unique_ptr<SpotAnimation, MakeUniquePool<SpotAnimation, 64>::UniquePoolDeleter>*)
                        eastl::compressed_pair<std::deque<ThreadPool::TaskInfo>*>::second();
                    cVar1 = puVar7->operator_cast_to_bool();
                    if (cVar1) {
                        pSVar6 = (SpotAnimation*)**puVar7;
                        pSVar6->Build(arg1);
                        if (m_worldPriority == -1) {
                            arg1_02 = true;
                        } else {
                            arg1_02 = m_hiddenByOtherEntity != '\0';
                        }
                        pSVar6->SetHidden(arg1_02);
                        cVar1 = pSVar6->IsFinished();
                        if (!cVar1) {
                            this_03 = pSVar6->GetNode();
                            cVar1 = this_03->IsAttached();
                            if (!cVar1) {
                                GetNode()->AddChild(this_03);
                                world = (shared_ptr<game::World>*)GetWorld();
                                pSVar6->SetWorld(*world);
                            }
                        } else {
                            puVar7->reset(nullptr);
                        }
                    }
                }
                return;
            }
            arg1_01 = (int*)pcVar3->first();
            puVar5 = (unique_ptr*)eastl::compressed_pair<std::deque<ThreadPool::TaskInfo>*>::second();
            cVar1 = std::unique_ptr::operator_cast_to_bool(puVar5);
            if (!cVar1) {
            LAB_1003f1909:
                this_05 = (CommandLine*)(puVar5 + 8);
                iVar2 = this_05->GetPos();
                if ((0 < iVar2) && (cVar1 = this_05->IsCycleReady(arg1_00), cVar1)) {
                    puVar7 = (unique_ptr<SpotAnimation,
                                         MakeUniquePool<SpotAnimation, 64>::UniquePoolDeleter>*)(*this_02)[*arg1_01];
                    puVar7->reset(nullptr);
                    this_05->UnSync();
                }
            } else {
                pSVar6 = (SpotAnimation*)(*puVar5).operator->();
                cVar1 = pSVar6->IsReady();
                if (!cVar1)
                    goto LAB_1003f1909;
                spotAnimation =
                    (unique_ptr<SpotAnimation,
                                MakeUniquePool<SpotAnimation, _64>::UniquePoolDeleter>*)(*this_00)[*arg1_01];
                puVar7 = (unique_ptr<SpotAnimation,
                                     MakeUniquePool<SpotAnimation, 64>::UniquePoolDeleter>*)(*this_02)[*arg1_01];
                *puVar7 = *spotAnimation;
                puVar7 = (unique_ptr<SpotAnimation,
                                     MakeUniquePool<SpotAnimation, 64>::UniquePoolDeleter>*)(*this_00)[*arg1_01];
                puVar7->reset(nullptr);
            }
            pcVar3 = pcVar3 + 32;
        } while (true);
    }

    // 0x1003f2050
    unsigned long PathingEntity::GetRequestedDefaultOrOverrideModel(game::AnimatedModelPair& animatedModelPair,
                                                                    PathingEntityModels& pathingEntityModels) {
        bool cVar1;
        shared_ptr<oldscape::ClientScript>* clientScript2;
        ModelCopyType* modelCopyType;
        shared_ptr<graphics::Model>* psVar4;
        unsigned long uVar5;
        uint32_t local_3c;
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_38;

        ActiveComponent local_60;
        if ((uint8_t*)(*this->_vptr[1]._dtor)(this, &local_60) == DataStatus::READY) {
            cVar1 = local_60.IsEmpty();
            if (cVar1) {
            LAB_1003f20a3:
                cVar1 = local_60.IsEmpty();
                if (!cVar1) {
                    this = (PathingEntity*)pathingEntityModels.SSOBeginPtr();
                    clientScript2 = (shared_ptr<oldscape::ClientScript>*)local_60.SSOBeginPtr();
                    if (*this != *clientScript2) {
                        pathingEntityModels = local_60;
                        psVar4 = (shared_ptr<graphics::Model>*)pathingEntityModels.SSOBeginPtr();
                        modelCopyType = (ModelCopyType*)**psVar4;
                        local_3c = 2;
                        MakeSharedPool<graphics::Model, 3072>::MakeShared<graphics::Model&, graphics::ModelCopyType>(
                            &local_38, modelCopyType);
                        pathingEntityModels.field_32 = local_38;
                        goto LAB_1003f2164;
                    }
                } else {
                    pathingEntityModels.Clear();
                    local_38 = shared_ptr();
                    pathingEntityModels.field_32 = local_38;
                LAB_1003f2164:
                }
                animatedModelPair = pathingEntityModels.field_32;
                psVar4 = (shared_ptr<graphics::Model>*)pathingEntityModels.SSOBeginPtr();
                uVar5 = (((uint64_t)((int64_t)((unsigned long)this >> 8)) << 8) | (uint8_t)1);
                animatedModelPair.field_16 = *psVar4;
                goto LAB_1003f2192;
            }
            cVar1 = local_60.IsTaskDone();
            if (cVar1) {
                psVar4 = (shared_ptr<graphics::Model>*)local_60.SSOBeginPtr();
                cVar1 = ((Model*)(*psVar4).operator->())->IsReadyToRender();
                if (cVar1)
                    goto LAB_1003f20a3;
            }
        }
        uVar5 = 0;
    LAB_1003f2192:
        return uVar5 & 4294967295;
    }

    // 0x1003f21e0
    uint32_t PathingEntity::GetReplaceHeldModel(game::AnimatedModelPair& animatedModelPair,
                                                PathingEntityModels& pathingEntityModels, int arg3) {
        uint64_t uVar3;

        uint32_t uVar2 = 0;
        auto this_00 = field_224->GetConfig<game::SeqType>(arg3, nullptr);
        if (shared_ptr::operator_cast_to_bool(this_00) != '\0') {
            uVar3 = **this_00;
            (*this->_vptr[1].OccludesView)(this, uVar3);
            uVar2 = GetRequestedDefaultOrOverrideModel(animatedModelPair, pathingEntityModels);
            (*this->_vptr[1].LineIntersectionSupport)(this);
        }
        return uVar2;
    }

    // 0x1003f22a0
    void PathingEntity::GetDefaultModel(game::AnimatedModelPair& animatedModelPair, int arg2) {
        GetReplaceHeldModel(animatedModelPair, field_3240, arg2);
    }

    // 0x1003f22c0
    void PathingEntity::GetOverrideModel(game::AnimatedModelPair& animatedModelPair, int arg2) {
        GetReplaceHeldModel(animatedModelPair, field_3288, arg2);
    }

    // 0x1003f22e0
    unsigned long PathingEntity::Build(int arg1, bool arg2, PathingEntityPriorityData pathingEntityPriorityData) {
        uint64_t extraout_var;
        Model* pMVar8;
        Layout* this_02;
        unique_ptr<graphics::GeometryBatchInstance,
                   MakeUniquePool<graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>* this_03;
        unique_ptr<graphics::GeometryBatchInstance,
                   MakeUniquePool<graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>* puVar9;
        GeometryBatchInstance* this_04;
        RenderMaterial* this_05;
        EffectList* pEVar10;
        PathingEntity* this_06;
        unsigned long uVar11;
        uint32_t in_register_0000000c;
        enable_shared_from_this<PathingEntity> local_48;
        unsigned int local_34;

        auto plVar5 = GraphicsApp::Instance();
        char cVar2 = (**(void (**)(...))(*plVar5 + 224))(plVar5);
        if (!cVar2) {
            LogAssert("GraphicsApp::Instance()->IsInsideMainLogic()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/"
                      "entities/PathingEntity.cpp",
                      418, nullptr);
        }
        local_48.shared_from_this();
        ((m_animatedModel + 8))->operator=(&local_48);
        uint8_t* puVar1 = m_animatedModel;
        uint8_t uVar3 =
            CalculateWorldPriority((unsigned long)(unsigned int)arg1,
                                   (((uint64_t)in_register_0000000c << 32) | (uint32_t)pathingEntityPriorityData));
        m_worldPriority = (short)(((uint64_t)extraout_var << 8) | (uint8_t)uVar3);
        if (field_4169 != '\0') {
            puVar1->RememberOverrideAnimationPoint();
            field_4169 = 0;
        }
        unsigned int arg1_00 = ((GraphicsApp*)GraphicsApp::Instance())->GetFrameCount();
        bool bVar4 = (bool)(*this->_vptr[1].LineIntersectionSupport__2)(this);
        puVar1->Build(arg1_00, arg1, bVar4, field_800);
        auto this_01 = puVar1->GetCurrentModel();
        cVar2 = this_01->operator_cast_to_bool();
        if (cVar2) {
            this_06 = this_01;
            if (this_01->end() != field_3232) {
                local_34 = arg1;
                field_3232 = this_01->end();
                puVar1->SetParticleSoftFadeEnabled(false);
                cVar2 = GetEntityType();
                if (cVar2 == '\x02') {
                    puVar1->SetParticleShadowsEnabled(false);
                }
                pMVar8 = (Model*)(*this_01).operator->();
                this_02 = (Layout*)pMVar8->GetBatchList();
                this_03 = (unique_ptr<graphics::GeometryBatchInstance,
                                      MakeUniquePool<graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>*)
                              this_02->HeapBeginPtr();
                puVar9 = (unique_ptr<graphics::GeometryBatchInstance,
                                     MakeUniquePool<graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>*)
                             this_02->end();
                for (; this_03 != puVar9; this_03 = this_03 + 8) {
                    this_04 = (GeometryBatchInstance*)(*this_03).operator->();
                    this_05 = (RenderMaterial*)this_04->GetMaterial();
                    pEVar10 = (EffectList*)this_05->GetRenderPassEffect(4);
                    pEVar10->Set(117, false);
                    pEVar10 = (EffectList*)this_05->GetRenderPassEffect(3);
                    pEVar10->Set(117, false);
                }
                pMVar8 = (Model*)**this_01;
                UpdateIrradianceForModel(*pMVar8);
                field_4168 = 1;
                (*this->_vptr[1].GetLoadImportance)(this);
                this_06 = this;
                (*this->_vptr[1].GetTranslation)();
                arg1 = local_34;
            }
            if (field_524 != '\0') {
                this_06 = (PathingEntity*)(*this_01).operator->();
                this_06->SetFadeTime(300);
                field_524 = 0;
            }
            ((ModelUpdateManager*)this_06->Instance())->AddToUpdateList(*this_01);
        }
        UpdateSpotAnimations(arg1);
        BuildAnimStateMachine();
        puVar1 = &field_3792;
        cVar2 = puVar1->IsInit();
        if (cVar2) {
            uVar11 = FrameTime::GetCurrentTimeMS();
            if (puVar1->capacity() < uVar11) {
                puVar1->Destroy();
            }
        }
        bVar4 = *this_01 != nullptr;
        if (bVar4) {
            (*this->_vptr[1].SetTranslation)((Vector3T<float>*)this);
        }
        return bVar4 & 4294967295;
    }

    // 0x1003f2690
    void PathingEntity::UpdateIrradianceForModel(graphics::Model& model) {
        uint8_t local_38[16];

        new (local_38) game::CoordFine();
        GetPositionFine(*local_38);
        auto this_00 = GetWorld();
        World* this_01 = (World*)(*this_00).operator->();
        int arg1 = local_38->GetMapSquareX();
        int arg2 = local_38->GetMapSquareZ();
        auto this_02 = this_01->GetMapSquare(arg1, arg2);
        auto this_03 = this_02->end();
        if (this_03 != nullptr) {
            ((IrradianceEffect*)model.GetIrradianceEffect())->SetCoefficients(this_03->GetIrradianceSHConsts());
        }
    }

    // 0x1003f2740
    void PathingEntity::BuildAnimStateMachine() {
        uint8_t* this_01;
        uint8_t* this_02;
        int iVar1;
        shared_ptr<oldscape::ClientScript>* clientScript1;
        LoginManager* this_04;
        shared_ptr<oldscape::ClientScript>* clientScript2;
        RT5AnimationResourceManager* pRVar4;
        shared_ptr<graphics::Model>* model;
        long* plVar6;
        uint8_t* this_05;
        shared_ptr<oldscape::dash3d::Decor> local_50;
        ReturnValue local_40;

        uint8_t* this_00 = m_animatedModel;
        bool cVar2 = (this_00->GetCurrentModel())->operator_cast_to_bool();
        if (cVar2) {
            iVar1 = field_3872;
            this_01 = field_3896;
            cVar2 = this_01->operator_cast_to_bool();
            if (iVar1 == -1) {
                if (cVar2) {
                    local_40 = shared_ptr();
                    this_00->SetAnimationStateProviderOverride(local_40);
                    field_3912->reset();
                    this_01->reset();
                    field_3880->reset();
                }
            } else if (!cVar2) {
                make_shared<game::RT5AnimationResourceManager, game::AssetBuilder&, game::ConfigProvider const&>(
                    &local_40, field_216, field_224);
                *this_01 = local_40;
                local_40.GetAnimationStateMachineProvider((int)field_224);
                *field_3880 = local_40;
            }
            cVar2 = this_01->operator_cast_to_bool();
            if (cVar2) {
                cVar2 = field_3880->operator_cast_to_bool();
                if (cVar2) {
                    clientScript1 = (shared_ptr<oldscape::ClientScript>*)this_00->GetCurrentModel();
                    this_04 = (LoginManager*)(*this_01).operator->();
                    clientScript2 = (shared_ptr<oldscape::ClientScript>*)this_04->GetDevCredentialsOutputDirectory();
                    if (*clientScript1 != *clientScript2) {
                        local_40 = shared_ptr();
                        this_00->SetAnimationStateProviderOverride(local_40);
                        field_3912->reset();
                        pRVar4 = (RT5AnimationResourceManager*)(*this_01).operator->();
                        model = (shared_ptr<graphics::Model>*)this_00->GetCurrentModel();
                        pRVar4->SetModel(*model);
                        pRVar4 = (RT5AnimationResourceManager*)(*this_01).operator->();
                        pRVar4->SetBASType(*field_3856);
                    }
                    this_02 = field_3912;
                    cVar2 = this_02->operator_cast_to_bool();
                    if (!cVar2) {
                        this_05 = field_3928;
                        if (this_05->size() == 0) {
                            this_05->AddUintVariable("AnimMode", 0, 100, 0);
                        }
                        plVar6 = (long*)(*field_3880).operator->();
                        local_50 = shared_ptr(this_01);
                        (**(void (**)(...))(*plVar6 + 16))(&local_40, plVar6, this_05, &local_50);
                        *this_02 = local_40;
                        local_40 = shared_ptr(this_02);
                        this_00->SetAnimationStateProviderOverride(local_40);
                    }
                }
            }
        }
    }

    // 0x1003f2ec0
    void PathingEntity::Destruct() {
        World* pWVar2;
        DetachedParticleSystemsDrawable* pDVar3;
        fixed_vector<shared_ptr<graphics::ParticleSystem>, _1ul>* particleSystems;
        vector<shared_ptr<graphics::ModularParticleSystem>>* modularParticleSystems;
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_38;

        auto this_00 = GetWorld();
        if (shared_ptr::operator_cast_to_bool(this_00)) {
            pWVar2 = (World*)(*this_00).operator->();
            pDVar3 = pWVar2->GetDetachedParticleSystems();
            particleSystems =
                (fixed_vector<shared_ptr<graphics::ParticleSystem>, _1ul>*)m_animatedModel->GetParticleSystems();
            pDVar3->Add(*particleSystems);
            pWVar2 = (World*)(*this_00).operator->();
            pDVar3 = pWVar2->GetDetachedParticleSystems();
            modularParticleSystems =
                (vector<shared_ptr<graphics::ModularParticleSystem>>*)m_animatedModel->GetModularParticleSystems();
            pDVar3->Add(*modularParticleSystems);
        }
        if (field_3896->operator_cast_to_bool()) {
            local_38 = shared_ptr();
            m_animatedModel->SetAnimationStateProviderOverride(local_38);
            field_3912->reset();
            field_3880->reset();
            field_3896->reset();
        }
        ClearAppearance();
        m_animatedModel->Destruct();
        DestroySpotAnimations();
    }

    // 0x1003f3010
    void PathingEntity::DestroySpotAnimations() {
        unique_ptr<SpotAnimation, MakeUniquePool<SpotAnimation, 64>::UniquePoolDeleter>* this_00;

        auto this_01 = field_4088.HeapBeginPtr();
        auto pcVar2 = field_4088.end();
        for (; this_01 != pcVar2; this_01 = this_01 + 16) {
            this_01->first();
            this_00 = (unique_ptr<SpotAnimation, MakeUniquePool<SpotAnimation, 64>::UniquePoolDeleter>*)
                eastl::compressed_pair<std::deque<ThreadPool::TaskInfo>*>::second();
            if (this_00->operator_cast_to_bool() != '\0') {
                this_00->reset(nullptr);
            }
        }
    }

    // 0x1003f3090
    void PathingEntity::RequestReadyAnimation() {
        int iVar4;
        int iVar5;

        if (!(field_3856->operator_cast_to_bool())) {
            return;
        }
        BASType* this_00 = (BASType*)**field_3856;
        uint8_t* this_02 = m_animatedModel;
        auto pvVar1 = this_02->GetDefaultAnimation();
        auto this_01 = pvVar1->end();
        if (this_01 != nullptr) {
            iVar4 = this_02->GetDefaultAnimationSeqID();
            if (this_00->IsReadyRandom(iVar4)) {
                iVar4 = this_02->GetDefaultAnimationRunCount();
                if (iVar4 < 1) {
                    return;
                }
                this_02->SetDefaultAnimationRunCount(0);
                iVar4 = this_02->GetDefaultAnimationSeqID();
                iVar4 = this_00->GetReadyAnim(iVar4);
                goto LAB_1003f3170;
            }
        }
        iVar4 = this_02->GetDefaultAnimationSeqID();
        iVar4 = this_00->GetReadyAnim(iVar4);
        pvVar1 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)this_02->GetDefaultAnimationModel();
        long lVar2 = pvVar1->end();
        if (iVar4 == -1) {
            if (!(this_02->HasRequestedDefaultAnimation())) {
                this_02->ResetDefaultAnimation();
                return;
            }
            return;
        }
        if (((this_01 != nullptr) && (lVar2 != 0)) && (iVar5 = this_01->GetPos(), iVar4 == iVar5)) {
            return;
        }
    LAB_1003f3170:
        this_02->RequestDefaultAnimation(iVar4, true, true);
    }

    // 0x1003f3210
    void PathingEntity::SetGridSize(int arg1) {
        uint8_t uVar1;
        uint64_t extraout_var;
        float* pfVar3;
        long* plVar4;
        uint64_t local_38;
        uint32_t local_30;
        float local_2c;

        int iVar5 = arg1 - m_gridSize;
        if (iVar5 != 0) {
            uVar1 = GetTranslation();
            local_38 = *(uint64_t*)(((uint64_t)extraout_var << 8) | (uint8_t)uVar1);
            local_30 = *(uint32_t*)((uint64_t*)(((uint64_t)extraout_var << 8) | (uint8_t)uVar1) + 1);
            if (!local_38 != *PTR_ZERO_100ee66e8) {
                LogAssert("tempVec != math::Vector3::ZERO",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/"
                          "entities/PathingEntity.cpp",
                          696, "Can\'t change NPC size before NPC has been translated for the first time");
            }
            local_2c = (float)(iVar5 * 128) * 0.5;
            pfVar3 = (float*)local_38.SSOBeginPtr();
            *pfVar3 = *pfVar3 + local_2c;
            pfVar3 = (float*)local_38.second();
            *pfVar3 = local_2c + *pfVar3;
            SetTranslation();
            plVar4 = (long*)(*((field_552 + 160))).operator->();
            (**(void (**)(...))(*plVar4 + 40))(plVar4, m_gridSize, arg1);
            m_gridSize = arg1;
        }
    }

    // 0x1003f3310
    void PathingEntity::GetPositionGrid(game::CoordGrid& coordGrid, bool arg2) const {
        uint64_t extraout_var;
        uint32_t in_register_00000011;

        uint8_t uVar1 = GetTranslation();
        float fVar4 = 0.0;
        if ((((uint32_t)in_register_00000011 << 8) | (uint8_t)arg2) == 0) {
            fVar4 = (float)(m_gridSize / 2);
        }
        coordGrid.field_0 = GetDuration();
        float* pfVar3 = (float*)(*((Vector3T<float>*)(((uint64_t)extraout_var << 8) | (uint8_t)uVar1)))[0];
        coordGrid.field_4 = (unsigned int)(long)(*pfVar3 * 0.0078125f - fVar4);
        pfVar3 = (float*)(*((Vector3T<float>*)(((uint64_t)extraout_var << 8) | (uint8_t)uVar1)))[2];
        coordGrid.field_8 = (unsigned int)(long)(*pfVar3 * 0.0078125f - fVar4);
    }

    // 0x1003f33c0
    void PathingEntity::GetDestinationPositionGrid(game::CoordGrid& coordGrid) {
        CoordMapSquare* this_00;
        Vector3T<float>* pVVar4;
        float* pfVar5;
        float fVar6;

        EntityRoute* pEVar3 = (EntityRoute*)(*((field_552 + 160))).operator->();
        int iVar1 = pEVar3->Length();
        if (iVar1 == 0) {
            GetPositionGrid(coordGrid, false);
        } else {
            iVar1 = m_gridSize;
            pEVar3 = (EntityRoute*)(*((field_552 + 160))).operator->();
            this_00 = (CoordMapSquare*)pEVar3->GetLastWaypoint();
            coordGrid.field_0 = this_00->GetX();
            pVVar4 = (Vector3T<float>*)this_00->y();
            pfVar5 = (float*)(*pVVar4)[0];
            fVar6 = (float)(iVar1 / 2);
            coordGrid.field_4 = (unsigned int)(long)(*pfVar5 * 0.0078125f - fVar6);
            pVVar4 = (Vector3T<float>*)this_00->y();
            pfVar5 = (float*)(*pVVar4)[2];
            coordGrid.field_8 = (unsigned int)(long)(*pfVar5 * 0.0078125f - fVar6);
        }
    }

    // 0x1003f34a0
    void PathingEntity::GetDestinationPositionFine(game::CoordFine& coordFine) {
        Layout* this_00;
        CoordFine* coordFine_00;

        EntityRoute* pEVar1 = (EntityRoute*)(*((field_552 + 160))).operator->();
        if (pEVar1->Length() == 0) {
            GetPositionFine(coordFine);
        } else {
            pEVar1 = (EntityRoute*)(*((field_552 + 160))).operator->();
            this_00 = (Layout*)pEVar1->GetLastWaypoint();
            coordFine_00 = (CoordFine*)this_00->SSOBeginPtr();
            coordFine = *coordFine_00;
        }
    }

    // 0x1003f3510
    uint8_t* PathingEntity::GetCurrentMoveSpeed() {
        NXTPixToolkit* this_00;
        uint8_t** ppuVar3;

        EntityRoute* pEVar2 = (EntityRoute*)(*((field_552 + 160))).operator->();
        if (pEVar2->Length() == 0) {
            ppuVar3 = &MoveSpeed::STATIONARY;
        } else {
            pEVar2 = (EntityRoute*)(*((field_552 + 160))).operator->();
            this_00 = (NXTPixToolkit*)pEVar2->GetLastWaypoint();
            ppuVar3 = (uint8_t**)this_00->GetScreen();
        }
        return *ppuVar3;
    }

    // 0x1003f3560
    void PathingEntity::GetCameraFollowPosition(math::Vector3T<float>& vector3) {
        uint64_t local_30[2];

        auto local_48 = field_736.GetValue(FrameTime::GetCurrentTimeNS());
        local_30[0] = math::Vector3FromVector3T<double>(local_48);
        vector3.SetXYZ(*local_30);
        float* pfVar1 = &vector3[1];
        *pfVar1 = *pfVar1 + 1024.0;
    }

    // 0x1003f3700
    void PathingEntity::UpdateGroundHeight() {
        GraphNode* this_00;
        Vector3T<float>* pVVar3;

        bool cVar1 = IsDoingAnExactMove();
        if ((!cVar1) || (field_3500 == field_3516)) {
            this_00 = GetNode();
            cVar1 = this_00->IsAttached();
            if (cVar1) {
                pVVar3 = (Vector3T<float>*)GetTranslation();
                if (*pVVar3 != *PTR_ZERO_100ee66e8) {
                    pVVar3 = (Vector3T<float>*)this_00->GetWorldTranslation();
                    SetTranslationY((float)GetFloorHeight(*pVVar3, 1) + 5.0);
                }
            }
        }
    }

    // 0x1003f37b0
    void PathingEntity::UpdateEntity(int arg1) {
        field_512 = arg1;
        UpdatePosition((int)this);
        UpdateGroundHeight();
        UpdatePostTransform();
        if (CanSetFacing() != '\0') {
            SetFacingGradual();
        }
    }

    // 0x1003f3800
    void PathingEntity::UpdatePostTransform() {
        int iVar2;
        int arg2;
        int arg3;
        int arg4;
        LocationContainer* this_00;

        if (field_3856->operator_cast_to_bool() == '\0') {
        LAB_1003f3886:
            field_3344.SetToIdentity();
            field_4171 = 0;
        } else {
            this_00 = (LocationContainer*)**field_3856;
            iVar2 = this_00->GetEffectAnimID();
            if (iVar2 == 0) {
                iVar2 = this_00->GetMinGridZ();
                if (iVar2 == 0)
                    goto LAB_1003f3886;
            }
            iVar2 = this_00->GetEffectAnimID();
            arg2 = this_00->GetMinGridZ();
            arg3 = this_00->GetObjStackColourTrillions();
            arg4 = this_00->GetID();
            CalculateHillRotateTransform(iVar2, arg2, arg3, arg4);
        }
    }

    // 0x1003f38b0
    void PathingEntity::SetFacingGradual() {
        bool arg4;

        auto pGVar3 = field_56.operator->();
        auto pQVar4 = pGVar3->GetRotation();
        CoordGrid local_40;
        GetPositionGrid(local_40, true);
        ColourHSL local_50((float)local_40.field_4, (float)(int)local_40.field_0, (float)local_40.field_8);
        auto vector32 = GetTranslation();
        if (((EntityRoute*)(*((field_552 + 160))).operator->())->HasMovement() == '\0') {
            arg4 = false;
        } else {
            arg4 = ((HitmarkType*)(*((field_552 + 160))).operator->())->GetDuration() == 0;
        }
        pGVar3 = (GraphNode*)field_56.operator->();
        pQVar4 = (QuaternionT<float>*)field_552->GetNextRotation(local_50, *vector32, *pQVar4, arg4);
        pGVar3->SetRotation(*pQVar4);
    }

    // 0x1003f39a0
    void PathingEntity::AttachToNode(graphics::GraphNode* graphNode, const shared_ptr<game::World>& world) {
        (((World*)world.operator->())->GetRootNode())->AddChild(graphNode);
        SetWorld(world);
    }

    // 0x1003f39f0
    bool PathingEntity::EnsureBASType() {
        ConfigProvider* this_01;
        uint8_t uVar2;
        uint64_t extraout_var;
        uint64_t extraout_var_00;
        shared_ptr<game::BASType>* basType;
        Logger* this_02;
        uint64_t extraout_var_01;
        int arg3;
        int arg3_00;
        int arg3_01;
        Vector3T<float>* in_RSI;
        DataStatus* local_28;

        uint8_t* this_00 = field_3856;
        if (this_00->operator_cast_to_bool() == '\0') {
            uVar2 = (*this->_vptr[1].TestIntersection)((Vector3T<float>*)this, in_RSI, arg3);
            if ((int)(((uint64_t)extraout_var << 8) | (uint8_t)uVar2) == -1) {
                return false;
            }
            this_01 = field_224;
            uVar2 = (*this->_vptr[1].TestIntersection)((Vector3T<float>*)this, in_RSI, arg3_00);
            basType =
                this_01->GetConfig<game::BASType>((int)(((uint64_t)extraout_var_00 << 8) | (uint8_t)uVar2), &local_28);
            *this_00 = *basType;
            if (local_28 == (DataStatus*)DataStatus::MISSING) {
                this_02 = logger::default_logger();
                uVar2 = (*this->_vptr[1].TestIntersection)((Vector3T<float>*)this, (Vector3T<float>*)basType, arg3_01);
                this_02->Log(true, 2,
                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                             "scene/entities/PathingEntity.cpp",
                             838, "BAS %d is missing - no animations will be played on this entity",
                             (int)(((uint64_t)extraout_var_01 << 8) | (uint8_t)uVar2));
            }
        }
        return *this_00 != nullptr;
    }

    // 0x1003f3ac0
    uint32_t PathingEntity::AttachToWorld() {
        GraphNode* this_01;

        auto this_00 = field_232->GetActiveWorld();
        uint32_t uVar2 = shared_ptr::operator_cast_to_bool(this_00);
        if ((char)uVar2 != '\0') {
            this_01 = GetNode();
            if (this_01->IsAttached() == '\0') {
                (*this->_vptr[1].GetLoadProgress)(this, this_01, this_00);
            }
        }
        return uVar2;
    }

    // 0x1003f3b20
    unsigned long PathingEntity::UpdatePosition(int arg1) {
        unsigned int uVar2;
        uint64_t unaff_RBX;
        unsigned long uVar3;
        MoveSpeed* local_30;
        float local_24;

        bool cVar1 = AttachToWorld();
        if (!cVar1) {
            uVar3 = 0;
        } else {
            cVar1 = DoPendingExactMoves(arg1);
            uVar3 = (((uint64_t)((int64_t)((unsigned long)unaff_RBX >> 8)) << 8) | (uint8_t)1);
            if (!cVar1) {
                local_30 = (MoveSpeed*)MoveSpeed::STATIONARY;
                local_24 = 0.0;
                uVar2 = MoveAlongRoute(arg1, &local_30, &local_24);
                uVar3 = (unsigned long)uVar2;
                SelectMovementAnimation(local_30, local_24);
            }
        }
        return uVar3 & 4294967295;
    }

    // 0x1003f3ba0
    uint64_t PathingEntity::DoPendingExactMoves(int arg1) {
        uint8_t* this_00;
        int* piVar2;
        uint64_t uVar3;

        bool cVar1 = IsDoingAnExactMove();
        if (cVar1) {
            cVar1 = CanRender();
            if (cVar1) {
                cVar1 = field_808.empty();
                if (!cVar1) {
                    this_00 = m_animatedModel;
                    cVar1 = this_00->HasRequestedOverrideAnimation();
                    if (!cVar1) {
                        cVar1 = this_00->IsOverrideAnimationInUse();
                        if (cVar1) {
                            cVar1 = this_00->RequestedOverrideAnimationIsPriority();
                            if (!cVar1)
                                goto LAB_1003f3c42;
                        }
                        SelectBaseAnimation((MoveSpeed*)MoveSpeed::STATIONARY, 0.0);
                        piVar2 = &field_808[0];
                        this_00->RequestOverrideAnimation(true, *piVar2, 0, true);
                    }
                }
            }
        }
    LAB_1003f3c42:
        if (field_3532 == 4294967295) {
        LAB_1003f3c9a:
            uVar3 = 0;
        } else {
            if (field_3536 == 4294967295) {
                LogAssert("m_exactMoveTime2 != -1",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/"
                          "entities/PathingEntity.cpp",
                          962, nullptr);
            }
            if (arg1 < (int)field_3532) {
                DoExactMove1(arg1);
            } else {
                if ((int)field_3536 < arg1)
                    goto LAB_1003f3c9a;
                DoExactMove2(arg1);
            }
            uVar3 = 1;
        }
        return uVar3;
    }

    // 0x1003f3cc0
    unsigned int PathingEntity::MoveAlongRoute(int arg1, const MoveSpeed** arg2, float* arg3) {
        unique_ptr<EntityRoute>* this_00;
        MoveSpeed** ppMVar1;
        bool arg3_00;
        EntityRoute* pEVar3;
        long* plVar4;
        Layout* this_01;
        CoordFine local_78;
        MoveSpeed* local_58;
        float local_50;
        float* local_48;
        MoveSpeed** local_38;

        unsigned int uVar2 = IsAnimationBlockingMovement();
        if ((char)uVar2 == '\0') {
            local_48 = arg3;
            local_38 = arg2;
            local_78 = game::CoordFine();
            GetPositionFine(local_78);
            this_00 = (unique_ptr<EntityRoute>*)(field_552 + 160);
            plVar4 = (long*)(*this_00).operator->();
            (**(void (**)(...))(*plVar4 + 48))(&local_78.field_16, plVar4, &local_78, field_552, m_gridSize);
            ppMVar1 = local_38;
            if (local_78._16_4_ == 2) {
                pEVar3 = (EntityRoute*)(*this_00).operator->();
                this_01 = (Layout*)pEVar3->GetLastWaypoint();
                arg3_00 = (bool)this_01->SSOBeginPtr();
                TeleportFine((int)this, (CoordFine*)arg1, arg3_00);
            } else if (local_78._16_4_ == 1) {
                field_552->SetFaceMovement(local_50);
                SetTranslation();
            } else {
                local_38 = ppMVar1;
                if (local_78._16_4_ == 0) {
                    pEVar3 = (EntityRoute*)(*this_00).operator->();
                    pEVar3->ResetStalledTickCount();
                    SetTranslation();
                    local_38 = ppMVar1;
                }
            }
            if (local_38 != nullptr) {
                *local_38 = local_58;
            }
            if (local_48 != nullptr) {
                *local_48 = local_50;
            }
        } else {
            pEVar3 = (EntityRoute*)(*((field_552 + 160))).operator->();
            pEVar3->AddStalledTick();
        }
        return uVar2 ^ 1;
    }

    // 0x1003f3e20
    void PathingEntity::SelectMovementAnimation(const MoveSpeed* moveSpeed, float arg2) {
        uint8_t* this_00;
        int arg2_00;
        int* piVar1;
        int iVar3;

        SelectBaseAnimation(moveSpeed, arg2);
        if (!(field_808.empty())) {
            piVar1 = &field_808[(long)*(int*)(moveSpeed + 8) + 1];
            arg2_00 = *piVar1;
            this_00 = m_animatedModel;
            iVar3 = this_00->GetOverrideAnimationRequestedSeqID();
            if (iVar3 != arg2_00) {
                iVar3 = this_00->GetOverrideAnimationSeqID();
                if (iVar3 != arg2_00) {
                    if (this_00->RequestOverrideAnimation(true, arg2_00, 0, false)) {
                        field_800 = ((EntityRoute*)(*((field_552 + 160))).operator->())->Length();
                    }
                }
            }
        }
    }

    // 0x1003f3ec0
    void PathingEntity::UpdatePositionFromCurrentTime(unsigned int arg1) {
        uint64_t local_28[2];

        local_28[0] = GetSmoothPosition();
        ((GraphNode*)field_56.operator->())->SetTranslation(*local_28);
        auto matrix44 = CalculateWorldTransformationMatrix();
        m_animatedModel->SetWorldTransform(*matrix44, arg1);
    }

    // 0x1003f3f20
    uint64_t PathingEntity::GetSmoothPosition() const {
        unsigned int uVar1;
        unsigned int uVar2;
        Vector3T<float>* vector3;
        uint64_t local_40[2];
        uint32_t local_30[4];

        new (local_30) math::Vector3T();
        if (field_3532 != 4294967295) {
            uVar1 = field_3532 - field_512;
            uVar2 = -uVar1;
            if ((int)uVar2 < 0) {
                uVar2 = uVar1;
            }
            if (uVar2 < 2) {
                vector3 = (Vector3T<float>*)&field_3504;
                goto LAB_1003f3f9a;
            }
        }
        auto local_58 = field_736.GetValue(FrameTime::GetCurrentTimeNS());
        local_40[0] = math::Vector3FromVector3T<double>(local_58);
        vector3 = (Vector3T<float>*)local_40;
    LAB_1003f3f9a:
        local_30->SetXYZ(*vector3);
        float fVar3 = (float)GetFloorHeight(*local_30, 1);
        return (((uint64_t)(fVar3 + 5.0) << 32) | (uint32_t)local_30[0]);
    }

    // 0x1003f3fe0
    Matrix44T<float>* PathingEntity::CalculateWorldTransformationMatrix() {
        Matrix44T<float> local_68;

        Matrix44T<float>* pMVar2 = GetNode()->GetWorldTransformationMatrix();
        char cVar1 = field_3408;
        if (cVar1) {
            local_68* field_3344;
            field_3424 = local_68;
        }
        field_3488 = cVar1;
        Matrix44T<float>* pMVar3 = (Matrix44T<float>*)&field_3424;
        if (!cVar1) {
            pMVar3 = pMVar2;
        }
        return pMVar3;
    }

    // 0x1003f4060
    unsigned long PathingEntity::IsAnimationBlockingMovement() {
        compressed_pair<eastl::string*>* this_01;
        compressed_pair<eastl::string*>* pcVar3;
        unique_ptr* this_02;
        SpotAnimation* pSVar4;
        uint64_t unaff_R15;

        uint8_t* puVar1 = m_animatedModel;
        bool cVar2 = puVar1->IsOverrideBlockingMovement(field_800);
        uint64_t uVar6 = (uint64_t)((unsigned long)unaff_R15 >> 8);
        bool bVar5 = true;
        if (!cVar2) {
            cVar2 = shared_ptr::operator_cast_to_bool(puVar1->GetOverrideAnimation());
            if ((!cVar2) || (cVar2 = puVar1->MayMove(field_800), cVar2)) {
                puVar1 = &field_4088;
                this_01 = (compressed_pair<eastl::string*>*)puVar1->HeapBeginPtr();
                pcVar3 = (compressed_pair<eastl::string*>*)puVar1->end();
                uVar6 = (uint64_t)((unsigned long)puVar1 >> 8);
                for (; bVar5 = this_01 != pcVar3, bVar5; this_01 = this_01 + 16) {
                    this_01->first();
                    this_02 = (unique_ptr*)eastl::compressed_pair<std::deque<ThreadPool::TaskInfo>*>::second();
                    cVar2 = std::unique_ptr::operator_cast_to_bool(this_02);
                    if (cVar2) {
                        pSVar4 = (SpotAnimation*)(*this_02).operator->();
                        cVar2 = pSVar4->IsDelayed();
                        if (cVar2) {
                            pSVar4 = (SpotAnimation*)(*this_02).operator->();
                            cVar2 = pSVar4->MayMove(field_800);
                            if (!cVar2)
                                break;
                        }
                    }
                }
            }
        }
        return bVar5 & 4294967295;
    }

    // 0x1003f41c0
    void PathingEntity::SelectBaseAnimation(const MoveSpeed* moveSpeed, float arg2) {
        uint8_t* this_00;
        int iVar2;
        QuaternionT<float>* pQVar3;
        float* pfVar4;
        unsigned int arg2_00;
        uint8_t local_48[16];
        float local_38;

        float local_34 = arg2;
        bool cVar1 = EnsureBASType();
        if (!cVar1) {
            return;
        }
        cVar1 = field_3928->HasUintVariable("AnimMode");
        if (cVar1) {
            if ((MoveSpeed*)MoveSpeed::STATIONARY == moveSpeed) {
                arg2_00 = 0;
            } else if ((MoveSpeed*)MoveSpeed::WALK == moveSpeed) {
                arg2_00 = 1;
            } else {
                if ((MoveSpeed*)MoveSpeed::RUN != moveSpeed)
                    goto LAB_1003f4246;
                arg2_00 = 2;
            }
            field_3928->SetUintVariable("AnimMode", arg2_00);
        }
    LAB_1003f4246:
        **field_3856;
        if ((MoveSpeed*)MoveSpeed::STATIONARY == moveSpeed) {
            cVar1 = field_552->IsFinished();
            if (!cVar1) {
                cVar1 = field_552->IsTurningLeft();
                if (!cVar1) {
                    iVar2 = game::BASType::GetReadyTurnRight();
                } else {
                    iVar2 = game::BASType::GetReadyTurnLeft();
                }
                if (iVar2 != -1)
                    goto LAB_1003f4838;
            }
            RequestReadyAnimation();
        } else {
            new (local_48) math::ColourHSL(0.0, 0.0, -1.0);
            pQVar3 = GetNode()->GetRotation();
            *local_48 *= pQVar3;
            pfVar4 = (float*)(*local_48)[0];
            local_38 = *pfVar4;
            pfVar4 = (float*)(*local_48)[2];
            local_38 = (float)math::conversion::JagAtan2(local_38, *pfVar4);
            local_48->Set(0.0, 0.0, -1.0);
            this_00 = field_552;
            pQVar3 = (QuaternionT<float>*)this_00->GetFinalRotation();
            *local_48 *= pQVar3;
            pfVar4 = (float*)(*local_48)[0];
            local_48._12_4_ = *pfVar4;
            pfVar4 = (float*)(*local_48)[2];
            local_48._12_4_ = math::conversion::PrincipleAngle(
                (float)math::conversion::JagAtan2((float)local_48._12_4_, *pfVar4) - local_38);
            cVar1 = this_00->FacingEntity();
            if (((!cVar1) || (0.7853982f < (float)local_48._12_4_)) || ((float)local_48._12_4_ < -0.7853982)) {
                cVar1 = this_00->IsFinished();
                if (!cVar1) {
                    if (((MoveSpeed*)MoveSpeed::RUN == moveSpeed) &&
                        (iVar2 = game::BASType::GetRunForward(), iVar2 != -1)) {
                        cVar1 = this_00->IsTurningLeft();
                        if ((!cVar1) || (iVar2 = game::BASType::GetRunTurnLeft(), iVar2 == -1)) {
                            cVar1 = this_00->IsTurningLeft();
                            if ((cVar1) || (iVar2 = game::BASType::GetRunTurnRight(), iVar2 == -1))
                                goto LAB_1003f47ee;
                            iVar2 = game::BASType::GetRunTurnRight();
                        } else {
                            iVar2 = game::BASType::GetRunTurnLeft();
                        }
                    } else if (((MoveSpeed*)MoveSpeed::CRAWL == moveSpeed) &&
                               (iVar2 = game::BASType::GetCrawlForward(), iVar2 != -1)) {
                        cVar1 = this_00->IsTurningLeft();
                        if ((!cVar1) || (iVar2 = game::BASType::GetCrawlTurnLeft(), iVar2 == -1)) {
                            cVar1 = this_00->IsTurningLeft();
                            if ((cVar1) || (iVar2 = game::BASType::GetCrawlTurnRight(), iVar2 == -1))
                                goto LAB_1003f4829;
                            iVar2 = game::BASType::GetCrawlTurnRight();
                        } else {
                            iVar2 = game::BASType::GetCrawlTurnLeft();
                        }
                    } else {
                        cVar1 = this_00->IsTurningLeft();
                        if ((!cVar1) || (iVar2 = game::BASType::GetWalkTurnLeft(), iVar2 == -1)) {
                            cVar1 = this_00->IsTurningLeft();
                            if ((cVar1) || (iVar2 = game::BASType::GetWalkTurnRight(), iVar2 == -1))
                                goto LAB_1003f462b;
                            iVar2 = game::BASType::GetWalkTurnRight();
                        } else {
                            iVar2 = game::BASType::GetWalkTurnLeft();
                        }
                    }
                } else if (((MoveSpeed*)MoveSpeed::RUN == moveSpeed) &&
                           (iVar2 = game::BASType::GetRunForward(), iVar2 != -1)) {
                LAB_1003f47ee:
                    iVar2 = game::BASType::GetRunForward();
                } else if (((MoveSpeed*)MoveSpeed::CRAWL == moveSpeed) &&
                           (iVar2 = game::BASType::GetCrawlForward(), iVar2 != -1)) {
                LAB_1003f4829:
                    iVar2 = game::BASType::GetCrawlForward();
                } else {
                LAB_1003f462b:
                    iVar2 = game::BASType::GetWalkForward();
                }
            } else {
                local_34 = (float)math::conversion::PrincipleAngle(local_34 - local_38);
                if (((MoveSpeed*)MoveSpeed::RUN == moveSpeed) &&
                    (iVar2 = game::BASType::GetRunForward(), iVar2 != -1)) {
                    if ((local_34 < 0.7853982f) ||
                        ((2.3561945f < local_34 || (iVar2 = game::BASType::GetRunRight(), iVar2 == -1)))) {
                        if ((-0.7853982 < local_34) ||
                            ((local_34 < -2.3561945 || (iVar2 = game::BASType::GetRunLeft(), iVar2 == -1)))) {
                            if (((local_34 <= 2.3561945f) && (-2.3561945 <= local_34)) ||
                                (iVar2 = game::BASType::GetRunBackward(), iVar2 == -1))
                                goto LAB_1003f47ee;
                            iVar2 = game::BASType::GetRunBackward();
                        } else {
                            iVar2 = game::BASType::GetRunLeft();
                        }
                    } else {
                        iVar2 = game::BASType::GetRunRight();
                    }
                } else if (((MoveSpeed*)MoveSpeed::CRAWL == moveSpeed) &&
                           (iVar2 = game::BASType::GetCrawlForward(), iVar2 != -1)) {
                    if ((local_34 < 0.7853982f) ||
                        ((2.3561945f < local_34 || (iVar2 = game::BASType::GetCrawlRight(), iVar2 == -1)))) {
                        if ((-0.7853982 < local_34) ||
                            ((local_34 < -2.3561945 || (iVar2 = game::BASType::GetCrawlLeft(), iVar2 == -1)))) {
                            if (((local_34 <= 2.3561945f) && (-2.3561945 <= local_34)) ||
                                (iVar2 = game::BASType::GetCrawlBackward(), iVar2 == -1))
                                goto LAB_1003f4829;
                            iVar2 = game::BASType::GetCrawlBackward();
                        } else {
                            iVar2 = game::BASType::GetCrawlLeft();
                        }
                    } else {
                        iVar2 = game::BASType::GetCrawlRight();
                    }
                } else if (((local_34 < 0.7853982f) || (2.3561945f < local_34)) ||
                           (iVar2 = game::BASType::GetWalkRight(), iVar2 == -1)) {
                    if (((-0.7853982 < local_34) || (local_34 < -2.3561945)) ||
                        (iVar2 = game::BASType::GetWalkLeft(), iVar2 == -1)) {
                        if (((local_34 <= 2.3561945f) && (-2.3561945 <= local_34)) ||
                            (iVar2 = game::BASType::GetWalkBackward(), iVar2 == -1))
                            goto LAB_1003f462b;
                        iVar2 = game::BASType::GetWalkBackward();
                    } else {
                        iVar2 = game::BASType::GetWalkLeft();
                    }
                } else {
                    iVar2 = game::BASType::GetWalkRight();
                }
            }
        LAB_1003f4838:
            m_animatedModel->RequestDefaultAnimation(iVar2, false, false);
        }
    }

    // 0x1003f4860
    void PathingEntity::DoExactMove1(int arg1) {
        Vector3T<double> local_58;

        unsigned int uVar1 = field_3532;
        auto puVar3 = GetTranslation();
        uint64_t local_40 = *puVar3;
        uint32_t local_38 = *(uint32_t*)(puVar3 + 1);
        uint8_t* this_00 = &field_3504;
        auto pfVar4 = this_00->SSOBeginPtr();
        float local_2c = *pfVar4;
        pfVar4 = (float*)local_40.SSOBeginPtr();
        float local_30 = 1.0 / (float)(int)(uVar1 - arg1);
        local_2c = (local_2c - *pfVar4) * local_30;
        pfVar4 = (float*)local_40.SSOBeginPtr();
        *pfVar4 = local_2c + *pfVar4;
        pfVar4 = (float*)this_00->second();
        local_2c = *pfVar4;
        pfVar4 = (float*)local_40.second();
        local_2c = (local_2c - *pfVar4) * local_30;
        pfVar4 = (float*)local_40.second();
        *pfVar4 = local_2c + *pfVar4;
        int iVar2 = GetHeightForLevel(field_3500, local_40);
        float local_34 = (float)iVar2;
        pfVar4 = (float*)this_00->y();
        local_2c = *pfVar4;
        pfVar4 = (float*)local_40.y();
        local_2c = (local_2c - *pfVar4) * local_30 + local_34;
        pfVar4 = (float*)local_40.y();
        *pfVar4 = local_2c;
        field_720.SetXYZ(field_3520);
        local_58.Vector3T<float>(local_40);
        field_736.SetValue(local_58, 0, 0);
        ((EntityRoute*)(*((field_552 + 160))).operator->())->ResetStalledTickCount();
        field_552->SetFaceMovement(field_3540);
        SetFacingGradual();
    }

    // 0x1003f4a10
    void PathingEntity::DoExactMove2(int arg1) {
        uint8_t* vector3;
        int iVar4;
        Vector3T<double>* vector3_00;
        int iVar5;
        float in_XMM1_Da;
        uint64_t local_60;
        float local_58;
        uint64_t local_48;
        float local_40;
        Vector3T<float>* local_38;

        unsigned int uVar1 = field_3532;
        if ((int)uVar1 < arg1) {
            iVar5 = field_3536 - uVar1;
            local_38 = (Vector3T<float>*)&field_3504;
            iVar4 = GetHeightForLevel(field_3500, *local_38);
            field_3508 = (float)iVar4;
            vector3 = &field_3520;
            iVar4 = GetHeightForLevel(field_3516, *vector3);
            field_3524 = (float)iVar4;
            in_XMM1_Da = (float)iVar5;
            local_48 =
                math::Lerp<math::Vector3T<float>, float>(*local_38, *vector3, (float)(int)(arg1 - uVar1) / in_XMM1_Da);
            local_40 = in_XMM1_Da;
            field_720.SetXYZ(*vector3);
            local_60.Vector3T<float>(local_48);
            field_736.SetValue(local_60, 0, 0);
            ((EntityRoute*)(*((field_552 + 160))).operator->())->ResetStalledTickCount();
            SetFacingImmediate(field_3540);
            if (field_3536 != arg1) {
                if ((field_3500 == field_3516 == '\0') || (iVar5 != 1))
                    goto LAB_1003f4b44;
            }
            CheckAnimationJoinsOnMovement(arg1);
        }
    LAB_1003f4b44:
        if ((int)field_3536 <= arg1) {
            vector3_00 = (Vector3T<double>*)field_736.get_overflow_allocator();
            local_60 = math::Vector3FromVector3T<double>(*vector3_00);
            local_58 = in_XMM1_Da;
            if (!local_60 == field_3520) {
                LogAssert("math::Vector3FromVector3T(m_apparentTranslation.GetEndValue()) == "
                          "m_exactMovePosition2.m_translation",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/"
                          "entities/PathingEntity.cpp",
                          1407, nullptr);
            }
            field_3532 = 4294967295;
            field_3536 = 4294967295;
            field_720.SetXYZ(field_3520);
        }
    }

    // 0x1003f4cd0
    void PathingEntity::DestroyPendingSpotAnimations() {
        unique_ptr<SpotAnimation, MakeUniquePool<SpotAnimation, 64>::UniquePoolDeleter>* this_00;

        auto this_01 = field_4128.HeapBeginPtr();
        auto pcVar2 = field_4128.end();
        for (; this_01 != pcVar2; this_01 = this_01 + 32) {
            this_01->first();
            this_00 = (unique_ptr<SpotAnimation, MakeUniquePool<SpotAnimation, 64>::UniquePoolDeleter>*)
                eastl::compressed_pair<std::deque<ThreadPool::TaskInfo>*>::second();
            if (this_00->operator_cast_to_bool() != '\0') {
                this_00->reset(nullptr);
            }
        }
    }

    // 0x1003f4d50
    void PathingEntity::DestroySpotAnimationType(int arg1) {
        int* arg1_00;
        unique_ptr<SpotAnimation, MakeUniquePool<SpotAnimation, 64>::UniquePoolDeleter>* puVar4;

        uint8_t* this_02 = &field_4088;
        auto this_01 = this_02->HeapBeginPtr();
        auto pcVar3 = this_02->end();
        for (; this_01 != pcVar3; this_01 = this_01 + 16) {
            arg1_00 = (int*)this_01->first();
            puVar4 = (unique_ptr<SpotAnimation, MakeUniquePool<SpotAnimation, 64>::UniquePoolDeleter>*)
                eastl::compressed_pair<std::deque<ThreadPool::TaskInfo>*>::second();
            if (puVar4->operator_cast_to_bool() != '\0') {
                if (((SpotAnimation*)(*puVar4).operator->())->GetEffectAnimID() == arg1) {
                    puVar4 = (unique_ptr<SpotAnimation,
                                         MakeUniquePool<SpotAnimation, 64>::UniquePoolDeleter>*)(*this_02)[*arg1_00];
                    puVar4->reset(nullptr);
                }
            }
        }
    }

    // 0x1003f4e00
    void PathingEntity::DestroyPendingSpotAnimationType(int arg1) {
        int* arg1_00;
        unique_ptr<SpotAnimation, MakeUniquePool<SpotAnimation, 64>::UniquePoolDeleter>* puVar4;

        uint8_t* this_02 = &field_4128;
        auto this_01 = this_02->HeapBeginPtr();
        auto pcVar3 = this_02->end();
        for (; this_01 != pcVar3; this_01 = this_01 + 32) {
            arg1_00 = (int*)this_01->first();
            puVar4 = (unique_ptr<SpotAnimation, MakeUniquePool<SpotAnimation, 64>::UniquePoolDeleter>*)
                eastl::compressed_pair<std::deque<ThreadPool::TaskInfo>*>::second();
            if (puVar4->operator_cast_to_bool() != '\0') {
                if (((SpotAnimation*)(*puVar4).operator->())->GetEffectAnimID() == arg1) {
                    puVar4 = (unique_ptr<SpotAnimation,
                                         MakeUniquePool<SpotAnimation, 64>::UniquePoolDeleter>*)(*this_02)[*arg1_00];
                    puVar4->reset(nullptr);
                }
            }
        }
    }

    // 0x1003f4eb0
    void PathingEntity::TranslateParticles(const math::Vector3T<float>& vector3) {
        unique_ptr<SpotAnimation, MakeUniquePool<SpotAnimation, 64>::UniquePoolDeleter>* this_01;

        m_animatedModel->TranslateParticles(vector3);
        auto this_02 = field_4088.HeapBeginPtr();
        auto pcVar2 = field_4088.end();
        for (; this_02 != pcVar2; this_02 = this_02 + 16) {
            this_02->first();
            this_01 = (unique_ptr<SpotAnimation, MakeUniquePool<SpotAnimation, 64>::UniquePoolDeleter>*)
                eastl::compressed_pair<std::deque<ThreadPool::TaskInfo>*>::second();
            if (this_01->operator_cast_to_bool() != '\0') {
                ((SpotAnimation*)(*this_01).operator->())->TranslateParticles(vector3);
            }
        }
    }

    // 0x1003f5000
    void PathingEntity::OnOverrideAnimationFinished(int arg1) {
        unique_ptr<EntityRoute>* this_01;
        EntityRoute* pEVar4;
        NXTPixToolkit* this_02;
        long* plVar5;
        Vector3T<double> local_40;

        uint8_t* this_00 = &field_808;
        auto piVar2 = this_00->HeapBeginPtr();
        auto piVar3 = this_00->end();
        do {
            if (piVar2 == piVar3) {
            LAB_1003f5058:
                if (!(IsDoingAnExactMove())) {
                    this_01 = (unique_ptr<EntityRoute>*)(field_552 + 160);
                    pEVar4 = (EntityRoute*)(*this_01).operator->();
                    if (pEVar4->HasMovement()) {
                        pEVar4 = (EntityRoute*)(*this_01).operator->();
                        this_02 = (NXTPixToolkit*)pEVar4->GetLastWaypoint();
                        plVar5 = (long*)this_02->GetScreen();
                        if ((uint8_t*)*plVar5 != MoveSpeed::STATIONARY) {
                            return;
                        }
                    }
                    local_40.Vector3T<float>(field_720);
                    field_736.SetValue(local_40, 0, 0);
                    pEVar4 = (EntityRoute*)(*this_01).operator->();
                    pEVar4->ResetStalledTickCount();
                }
                return;
            }
            if (*piVar2 == arg1) {
                this_00->clear();
                goto LAB_1003f5058;
            }
            piVar2 = piVar2 + 1;
        } while (true);
    }

    // 0x1003f51b0
    void PathingEntity::CalculateHillRotateTransform(int arg1, int arg2, int arg3, int arg4) {
        Vector3T<float>* pVVar4;
        long* plVar5;
        char* str;
        unsigned int extraout_XMM0_Db;
        unsigned int extraout_XMM0_Dc;
        unsigned int extraout_XMM0_Dc_00;
        unsigned int extraout_XMM0_Dd;
        unsigned int extraout_XMM0_Dd_00;
        float fVar10;
        ColourHSL local_1c8;
        uint8_t local_1b0[12];
        uint8_t local_188[16];
        ColourHSL local_158;
        uint64_t local_138;
        ColourHSL local_128;
        SideBarData local_118;
        uint64_t local_f8;
        unsigned int uStack_f0;
        unsigned int uStack_ec;
        ColourHSL local_e0;

        uint8_t* this_00 = &field_3344;
        this_00->SetToIdentity();
        field_3408 = '\0';
        local_138._0_4_ = (float)arg1 * 0.5;
        local_188 = (unsigned __int128)((unsigned int)((float)arg2 * 0.5));
        local_138._4_4_ = extraout_XMM0_Db;
        unsigned int uStack_130 = extraout_XMM0_Dc;
        unsigned int uStack_12c = extraout_XMM0_Dd;
        ColourHSL local_1d8(0.0, 0.0, 1.0);
        auto pGVar2 = GetNode();
        auto quaternion = pGVar2->GetRotation();
        local_1d8 *= quaternion;
        auto pfVar3 = local_1d8.SSOBeginPtr();
        local_f8._0_4_ = *pfVar3;
        pfVar3 = (float*)local_1d8.second();
        float local_e4 = (float)atan2((float)local_f8, *pfVar3);
        local_f8._0_4_ = (float)::sin(local_e4);
        local_e4 = (float)::cos(local_e4);
        unsigned int uStack_1a4 = local_138._4_4_ ^ 2147483648;
        unsigned int uStack_1a0 = uStack_130 ^ 2147483648;
        unsigned int uStack_19c = uStack_12c ^ 2147483648;
        unsigned int uStack_194 = local_188._4_4_ ^ 2147483648;
        unsigned int uStack_190 = local_188._8_4_ ^ 2147483648;
        unsigned int uStack_18c = local_188._12_4_ ^ 2147483648;
        float local_164 = (float)local_f8 * -(float)local_188._0_4_;
        float local_16c = local_e4 * -(float)local_138;
        float fVar9 = local_16c + local_164;
        float local_198 = -(float)local_188._0_4_ * local_e4;
        local_1b0._8_4_ = -(float)local_138 * (float)local_f8;
        float fVar6 = local_198 - (float)local_1b0._8_4_;
        float local_fc = (float)GetRelativeFloorHeight((int)fVar9, (int)fVar6, 0);
        if (m_showHillRotateCorners != '\0') {
            pGVar2 = (GraphNode*)field_56.operator->();
            pVVar4 = (Vector3T<float>*)pGVar2->GetWorldTranslation();
            fVar10 = local_fc;
            local_158 = math::ColourHSL((float)(int)fVar9, local_fc, (float)(int)fVar6);
            local_e0[0]._0_8_ = *pVVar4 + local_158;
            local_e0[0].field_8 = fVar10;
            plVar5 = DebugPrimitiveCollectorBasic::GetCollector("");
            if (plVar5 != nullptr) {
                fVar6 = 200.0;
                local_128 = math::ColourHSL(0.0, 200.0, 0.0);
                local_158[0]._0_8_ = local_e0 + local_128;
                local_158[0].field_8 = fVar6;
                local_118 = oldscape::sidebars::SideBarData(-10420225, 1);
                (**(void (**)(...))(*plVar5 + 24))(plVar5, &local_e0, &local_158);
            }
        }
        float local_168 = local_e4 * (float)local_138;
        fVar9 = local_164 + local_168;
        local_138._0_4_ = (float)local_138 * (float)local_f8;
        fVar6 = local_198 - (float)local_138;
        local_198 = (float)GetRelativeFloorHeight((int)fVar9, (int)fVar6, 0);
        if (m_showHillRotateCorners != '\0') {
            pGVar2 = (GraphNode*)field_56.operator->();
            pVVar4 = (Vector3T<float>*)pGVar2->GetWorldTranslation();
            fVar10 = local_198;
            local_158 = math::ColourHSL((float)(int)fVar9, local_198, (float)(int)fVar6);
            local_e0[0]._0_8_ = *pVVar4 + local_158;
            local_e0[0].field_8 = fVar10;
            plVar5 = DebugPrimitiveCollectorBasic::GetCollector("");
            if (plVar5 != nullptr) {
                fVar6 = 200.0;
                local_128 = math::ColourHSL(0.0, 200.0, 0.0);
                local_158[0]._0_8_ = local_e0 + local_128;
                local_158[0].field_8 = fVar6;
                local_118 = oldscape::sidebars::SideBarData(-10420225, 1);
                (**(void (**)(...))(*plVar5 + 24))(plVar5, &local_e0, &local_158);
            }
        }
        local_f8._0_4_ = (float)local_f8 * (float)local_188._0_4_;
        fVar9 = local_16c + (float)local_f8;
        local_e4 = local_e4 * (float)local_188._0_4_;
        fVar6 = local_e4 - (float)local_1b0._8_4_;
        uint32_t uVar7 = GetRelativeFloorHeight((int)fVar9, (int)fVar6, 0);
        local_188._0_4_ = uVar7;
        if (m_showHillRotateCorners != '\0') {
            pGVar2 = (GraphNode*)field_56.operator->();
            pVVar4 = (Vector3T<float>*)pGVar2->GetWorldTranslation();
            fVar10 = (float)local_188._0_4_;
            local_158 = math::ColourHSL((float)(int)fVar9, (float)local_188._0_4_, (float)(int)fVar6);
            local_e0[0]._0_8_ = *pVVar4 + local_158;
            local_e0[0].field_8 = fVar10;
            plVar5 = DebugPrimitiveCollectorBasic::GetCollector("");
            if (plVar5 != nullptr) {
                fVar6 = 200.0;
                local_128 = math::ColourHSL(0.0, 200.0, 0.0);
                local_158[0]._0_8_ = local_e0 + local_128;
                local_158[0].field_8 = fVar6;
                local_118 = oldscape::sidebars::SideBarData(-10420225, 1);
                (**(void (**)(...))(*plVar5 + 24))(plVar5, &local_e0, &local_158);
            }
        }
        fVar6 = local_168 + (float)local_f8;
        fVar9 = local_e4 - (float)local_138;
        local_f8._0_4_ = (float)GetRelativeFloorHeight((int)fVar6, (int)fVar9, 0);
        if (m_showHillRotateCorners != '\0') {
            pGVar2 = (GraphNode*)field_56.operator->();
            pVVar4 = (Vector3T<float>*)pGVar2->GetWorldTranslation();
            fVar10 = (float)local_f8;
            local_e0 = math::ColourHSL((float)(int)fVar6, (float)local_f8, (float)(int)fVar9);
            local_128._0_8_ = *pVVar4 + local_e0;
            local_128.field_8 = fVar10;
            plVar5 = DebugPrimitiveCollectorBasic::GetCollector("");
            if (plVar5 != nullptr) {
                fVar6 = 200.0;
                local_158 = math::ColourHSL(0.0, 200.0, 0.0);
                local_e0[0]._0_8_ = local_128 + local_158;
                local_e0[0].field_8 = fVar6;
                local_118 = oldscape::sidebars::SideBarData(-10420225, 1);
                (**(void (**)(...))(*plVar5 + 24))(plVar5, &local_128, &local_e0, &local_118);
            }
            local_e0 = eastl::fixed_string<char, 128>();
            local_e0.append_sprintf("HillRotate [Wid=%d, Len=%d, LimX=%d, LimZ=%d]", (unsigned long)(unsigned int)arg1,
                                    (unsigned long)(unsigned int)arg2, (unsigned long)(unsigned int)arg3,
                                    (unsigned long)(unsigned int)arg4);
            plVar5 = DebugPrimitiveCollectorBasic::GetCollector("");
            if (plVar5 != nullptr) {
                pGVar2 = (GraphNode*)field_56.operator->();
                pVVar4 = (Vector3T<float>*)pGVar2->GetWorldTranslation();
                uVar7 = 1133903872;
                local_1c8 = math::ColourHSL(0.0, 300.0, 0.0);
                local_118._0_8_ = *pVVar4 + local_1c8;
                local_118._8_4_ = uVar7;
                str = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                local_158 = eastl::string(str);
                new (local_1b0) oldscape::sidebars::SideBarData(-8323073, 1);
                (**(void (**)(...))(*plVar5 + 136))(plVar5, &local_118, &local_158, local_1b0);
            }
        }
        local_e4 = (float)eastl::max_alt(local_fc, local_198);
        local_1b0._8_4_ = eastl::max_alt((float)local_188._0_4_, (float)local_f8);
        local_f8._0_4_ = (float)eastl::max_alt(local_198, (float)local_f8);
        local_138._0_4_ = (float)eastl::max_alt(local_fc, (float)local_188._0_4_);
        if ((unsigned int)arg2 != 0) {
            fVar6 = (float)arg2;
            fVar9 = (float)atan2(local_e4 - (float)local_1b0._8_4_, (float)arg2);
            fVar6 = (float)fmod(fVar9, fVar6);
            if (fVar6 != 0.0) {
                if ((unsigned int)arg3 != 0) {
                    local_e4 = fVar6;
                    fVar9 = (float)math::conversion::JagexAngleToRadians((unsigned int)arg3);
                    if (local_e4 <= 3.1415927f) {
                        fVar6 = local_e4;
                        if (local_e4 <= fVar9)
                            goto LAB_1003f5a00;
                    } else {
                        fVar9 = (float)eastl::min<float>(local_e4, 6.2831855f - fVar9);
                    }
                    fVar6 = fVar9;
                }
            LAB_1003f5a00:
                math::Matrix33RotationX<float>(fVar6);
                *this_00 *= &local_e0;
                field_3408 = '\x01';
            }
        }
        local_f8 = (((uint64_t)local_f8._4_4_ << 32) | (uint32_t)((float)local_f8));
        if ((unsigned int)arg1 == 0)
            goto LAB_1003f5ae7;
        fVar6 = (float)arg1;
        fVar9 = (float)atan2((float)local_138 - (float)local_f8, (float)arg1);
        unsigned long uVar8 = fmod(fVar9, fVar6);
        unsigned long uVar1 = (((uint64_t)local_f8._4_4_ << 32) | (uint32_t)((float)local_f8));
        local_f8 = uVar1;
        if ((float)uVar8 == 0.0)
            goto LAB_1003f5ae7;
        local_f8 = uVar8 ^ 9223372039002259456;
        local_f8._0_4_ = (float)local_f8;
        if ((unsigned int)arg4 != 0) {
            uStack_f0 = extraout_XMM0_Dc_00 ^ 2147483648;
            uStack_ec = extraout_XMM0_Dd_00 ^ 2147483648;
            local_138 = uVar8;
            fVar6 = (float)math::conversion::JagexAngleToRadians((unsigned int)arg4);
            if (-3.1415927 <= (float)local_138) {
                uVar1 = local_f8;
                if ((float)local_f8 <= fVar6)
                    goto LAB_1003f5ac1;
            } else {
                fVar6 = (float)eastl::min<float>((float)local_f8, 6.2831855f - fVar6);
                uVar1 = local_f8;
            }
            local_f8._0_4_ = fVar6;
        }
    LAB_1003f5ac1:
        math::Matrix33RotationZ<float>((float)local_f8);
        local_f8 = uVar1;
        *this_00 *= &local_e0;
        field_3408 = '\x01';
    LAB_1003f5ae7:
    }

    // 0x1003f5bc0
    void PathingEntity::SetTranslation(const math::Vector3T<float>& vector3) {
        long long arg2;
        float in_XMM1_Da;
        uint64_t local_50[2];

        uint32_t local_38 = *(uint32_t*)(vector3 + 8);
        uint64_t local_40 = *(uint64_t*)vector3;
        float fVar3 = (float)GetFloorHeight(vector3, 1);
        local_40 = (((uint64_t)(fVar3 + 5.0) << 32) | (uint32_t)((uint32_t)local_40));
        field_720.SetXYZ(local_40);
        if (m_animatedModel->MayMove(field_800) == '\0') {
            return;
        }
        int iVar2 = ((GraphicsApp*)BaseApp::GetAppInstance())->GetMainLoopInterval();
        unsigned long long arg1 = FrameTime::GetCurrentTimeNS();
        auto local_68 = field_736.GetValue(arg1);
        local_50[0] = math::Vector3FromVector3T<double>(local_68);
        if (in_XMM1_Da == 0.0 && (float)local_50[0] == 0.0) {
            local_68.Vector3T<float>(local_40);
        } else {
            local_68[0] = (ReturnValue)local_40 - *local_50;
            fVar3 = (float)local_68.Length();
            if (fVar3 < 64.0) {
                math::Vector3TFromVector3<double>(local_68);
                arg2 = (unsigned long)(unsigned int)(iVar2 * 2) * 1000000;
                goto LAB_1003f5cf4;
            }
            math::Vector3TFromVector3<double>(local_68);
        }
        arg2 = 0;
        arg1 = 0;
    LAB_1003f5cf4:
        field_736.SetValue(local_68, arg2, arg1);
        field_4170 = 1;
    }

    // 0x1003f5da0
    uint8_t* PathingEntity::GetTranslation() const {
        return &field_720;
    }

    // 0x1003f5db0
    void PathingEntity::SetTranslationY(float arg1) {
        m_translationY = arg1;
    }

    // 0x1003f5de0
    void PathingEntity::SetFacingImmediate(float arg1) {

        QuaternionT<float> local_30;
        local_30.FromAxisAngle(*PTR_UP_100ee66d0, arg1);
        ((GraphNode*)field_56.operator->())->SetRotation(local_30);
    }

    // 0x1003f5e60
    void PathingEntity::CheckAnimationJoinsOnMovement(int arg1) {
        int iVar2;
        unsigned int arg2;
        unsigned int arg3;
        shared_ptr* this_00;
        AnimationWrapper* this_01;
        shared_ptr<game::AnimationWrapper>* this_02;
        AnimationWrapper* this_03;

        uint8_t* this_06 = m_animatedModel;
        int iVar1 = this_06->GetDefaultAnimationSeqID();
        if (iVar1 != -1) {
            iVar1 = this_06->GetDefaultAnimationSeqID();
            iVar2 = this_06->GetOverrideAnimationSeqID();
            if (iVar1 == iVar2) {
                this_00 = this_06->GetOverrideAnimation();
                this_01 = (AnimationWrapper*)this_00->end();
                this_02 = (shared_ptr<game::AnimationWrapper>*)this_06->GetDefaultAnimation();
                this_03 = (AnimationWrapper*)(*this_02).operator->();
                arg2 = ((AnimationParameters*)this_01->GetAnimationParameters())->GetTicksThroughAnimation();
                arg3 = ((MapArea*)this_01->GetAnimationParameters())->GetAdvisedZoom();
                this_03->ResetToTime(arg1, arg2, arg3, 0);
            }
        }
    }

    // 0x1003f5f00
    int PathingEntity::GetMaxRemoveRoofLevel(const game::LinkMap& linkMap, int arg2, int arg3, int arg4, int arg5) {
        int iVar1;
        unsigned int uVar2;
        uint8_t bVar4;
        int arg3_00;
        char cVar5;
        unsigned int unaff_R13D;
        int arg2_00;
        unsigned int arg1;

        do {
            cVar5 = (char)unaff_R13D;
            bVar4 = (char)arg2 - 1;
            arg2 = (int)bVar4;
            if ((char)bVar4 < '\0') {
                iVar1 = 2;
                break;
            }
            iVar1 = 5;
            if (0 < arg5) {
                arg1 = (unsigned int)(char)bVar4;
                arg2_00 = arg3;
                do {
                    iVar1 = 8;
                    if (arg5 < 1) {
                    joined_r0x0001003f6025:
                        if (0 < arg5)
                            goto LAB_1003f5f53;
                    } else {
                        uVar2 = linkMap.GetTileLink(arg1, arg2_00, arg4);
                        unaff_R13D = unaff_R13D & 255;
                        if ((uVar2 & 4) != 0) {
                            unaff_R13D = arg1;
                        }
                        if (uVar2 == 4294967295) {
                            unaff_R13D = 255;
                        }
                        if (((uVar2 & 4) != 0) || (arg3_00 = arg4, uVar2 == 4294967295)) {
                            iVar1 = 1;
                            goto joined_r0x0001003f6025;
                        }
                        do {
                            arg3_00 = arg3_00 + 1;
                            if (arg5 + arg4 <= arg3_00) {
                                iVar1 = 8;
                                goto joined_r0x0001003f604c;
                            }
                            uVar2 = linkMap.GetTileLink(arg1, arg2_00, arg3_00);
                            unaff_R13D = unaff_R13D & 255;
                            if ((uVar2 & 4) != 0) {
                                unaff_R13D = arg1;
                            }
                            if (uVar2 == 4294967295) {
                                unaff_R13D = 255;
                            }
                        } while (((uVar2 & 4) == 0) && (uVar2 != 4294967295));
                        iVar1 = 1;
                    joined_r0x0001003f604c:
                        if (arg3_00 < arg5 + arg4)
                            goto LAB_1003f5f53;
                    }
                    arg2_00 = arg2_00 + 1;
                } while (arg2_00 < arg5 + arg3);
                iVar1 = 5;
            }
        LAB_1003f5f53:
            cVar5 = (char)unaff_R13D;
        } while (iVar1 == 5);
        bool cVar3 = -1;
        if (iVar1 != 2) {
            cVar3 = cVar5;
        }
        return (int)cVar3;
    }

    // 0x1003f60b0
    void PathingEntity::RecalculateMaxRemoveRoofLevel() {
        float fVar1;
        uint8_t uVar2;
        bool cVar3;
        int arg2;
        uint64_t extraout_var;
        PathingEntity* this_02;
        LinkMap* linkMap;
        float* pfVar4;

        auto this_00 = field_232->GetActiveWorld();
        auto this_01 = this_00->end();
        if (this_01 != nullptr) {
            uVar2 = GetTranslation();
            this_02 = (PathingEntity*)(((uint64_t)extraout_var << 8) | (uint8_t)uVar2);
            linkMap = this_01->GetLinkMap();
            arg2 = GetDuration();
            pfVar4 = (float*)this_02->SSOBeginPtr();
            fVar1 = *pfVar4;
            pfVar4 = (float*)this_02->second();
            cVar3 = GetMaxRemoveRoofLevel(this_02, linkMap, arg2, (int)(fVar1 * 0.0078125f),
                                          (int)(*pfVar4 * 0.0078125f), m_gridSize);
            if (cVar3 != -1) {
                SetMaximumRemoveRoofLevel((int)cVar3);
            }
            field_4170 = 0;
        }
    }

    // 0x1003f6170
    void PathingEntity::TeleportFine(int arg1, const game::CoordFine& coordFine, bool arg3) {
        TeleportFine((uint8_t)coordFine);
        CheckAnimationJoinsOnMovement(arg1);
    }

    // 0x1003f61a0
    void PathingEntity::TeleportFine(const game::CoordFine& coordFine, bool arg2) {
        uint8_t* this_00;
        bool cVar2;
        unsigned int uVar3;
        float* pfVar4;
        shared_ptr* this_02;
        AnimationWrapper* this_03;
        unsigned long long arg1;
        unsigned int uVar6;
        uint64_t in_register_00000011;
        uint64_t local_90[2];
        uint64_t local_80[2];
        uint8_t local_70[24];
        AnimatedModel* local_48;
        uint64_t local_40;

        int iVar7 = (int)(((uint64_t)in_register_00000011 << 8) | (uint8_t)arg2);
        if (iVar7 == 0) {
            new (local_70) game::CoordFine();
            GetDestinationPositionFine(*local_70);
            local_40 = coordFine.field_4 - (*((local_70 + 4)));
            uVar6 = coordFine.field_0;
            uVar3 = GetDuration();
            if (uVar6 == uVar3) {
                pfVar4 = (float*)local_40.SSOBeginPtr();
                uVar6 = -(int)*pfVar4;
                if ((int)uVar6 < 0) {
                    uVar6 = (int)*pfVar4;
                }
                if (uVar6 < 1025) {
                    pfVar4 = (float*)local_40.second();
                    uVar6 = -(int)*pfVar4;
                    if ((int)uVar6 < 0) {
                        uVar6 = (int)*pfVar4;
                    }
                    if (uVar6 < 1025) {
                        AddRouteWaypointFine(coordFine, (MoveSpeed*)MoveSpeed::WALK, true);
                        return;
                    }
                }
            }
        }
        local_48 = (AnimatedModel*)(((uint64_t)local_48._4_4_ << 32) | (uint32_t)iVar7);
        long* plVar5 = (long*)(*((field_552 + 160))).operator->();
        (**(void (**)(...))(*plVar5 + 56))(plVar5);
        field_800 = 0;
        ((EntityRoute*)(*((field_552 + 160))).operator->())->ResetStalledTickCount();
        SetBlendMode(coordFine.field_0);
        float local_38 = coordFine.field_12;
        local_40._0_4_ = coordFine.field_4;
        local_40._4_4_ = coordFine.field_8;
        float fVar8 = (float)GetFloorHeight(coordFine.field_4, 1);
        local_40 = (((uint64_t)(fVar8 + 5.0) << 32) | (uint32_t)((uint32_t)local_40));
        Vector3T<float>* local_50 = (Vector3T<float>*)&field_720;
        uint32_t local_98 = field_728;
        uint64_t local_a0 = *(uint64_t*)&field_720;
        local_50->SetXYZ(local_40);
        AddRouteWaypointFine(coordFine, (MoveSpeed*)MoveSpeed::STATIONARY, true);
        Transitionable<math::Vector3T<double>>* local_58 = (Transitionable<math::Vector3T<double>>*)&field_736;
        auto vector31 = local_58->get_overflow_allocator();
        bool bVar1 = *vector31 == *PTR_ZERO_100ee66c0;
        if (bVar1)
            goto LAB_1003f63fa;
        if ((char)local_48 != '\0') {
            this_00 = m_animatedModel;
            cVar2 = this_00->MayMove(field_800);
            if (!cVar2) {
                local_48 = (AnimatedModel*)this_00;
                this_02 = this_00->GetOverrideAnimation();
                this_03 = (AnimationWrapper*)this_02->end();
                if ((this_03 != nullptr) && (cVar2 = this_03->ShouldBeFinishedOrLooping(), !cVar2))
                    goto LAB_1003f639d;
                local_48->ResetOverrideAnimation();
            } else {
                this_00->AbortAnimationsOnMove();
            }
            bVar1 = true;
        }
    LAB_1003f639d:
        local_70._0_8_ = coordFine.field_4 - local_a0;
        if (field_68 == coordFine.field_0) {
            pfVar4 = (float*)local_70->SSOBeginPtr();
            uVar6 = -(int)*pfVar4;
            if ((int)uVar6 < 0) {
                uVar6 = (int)*pfVar4;
            }
            if (uVar6 < 257) {
                pfVar4 = (float*)local_70->second();
                uVar6 = -(int)*pfVar4;
                if ((int)uVar6 < 0) {
                    uVar6 = (int)*pfVar4;
                }
                if (uVar6 < 257)
                    goto LAB_1003f63fa;
            }
        }
        bVar1 = true;
    LAB_1003f63fa:
        if (bVar1 == false) {
            arg1 = FrameTime::GetCurrentTimeMS();
            *local_70 = local_58->GetValue(arg1);
            local_80[0] = math::Vector3FromVector3T<double>(*local_70);
            local_90[0] = *local_50 - *local_80;
            TranslateParticles(*local_90);
        } else {
            local_70->Vector3T<float>(*local_50);
            local_58->SetValue(*local_70, 0, 0);
        }
    }

    // 0x1003f65b0
    unsigned long PathingEntity::GetOverlayHeightPathingEntity() const {
        BASType* pBVar3;
        unsigned long uVar4;
        Vector2T<int>* this_02;
        float* pfVar6;

        uint8_t* this_00 = field_3856;
        if (this_00->operator_cast_to_bool() != '\0') {
            pBVar3 = (BASType*)(*this_00).operator->();
            if (pBVar3->GetOverlayHeight() != -1) {
                pBVar3 = (BASType*)(*this_00).operator->();
                uVar4 = pBVar3->GetOverlayHeight();
                return uVar4;
            }
        }
        auto this_01 = m_animatedModel->GetCurrentModel();
        auto pNVar5 = this_01->end();
        if (pNVar5 == nullptr) {
            uVar4 = 200;
        } else {
            pNVar5 = (NXTPixToolkit*)pNVar5->GetScreen();
            this_02 = (Vector2T<int>*)pNVar5->GetScreen();
            pfVar6 = (float*)this_02->y();
            uVar4 = (unsigned long)(unsigned int)(int)*pfVar6;
        }
        return uVar4;
    }

    // 0x1003f6650
    void PathingEntity::RequestAnimationInner(const std::array<int, 4ul>& arg1, int arg2, bool arg3, unsigned int arg4,
                                              unsigned int arg5) {
        ConfigProvider* this_00;
        PathingEntity* pPVar1;
        unsigned int uVar3;
        unsigned int uVar4;
        uint32_t uVar5;
        int iVar6;
        int* piVar8;
        shared_ptr<game::SeqType>* psVar9;
        SeqType* pSVar10;
        uint32_t* puVar11;
        unsigned long arg1_01;
        shared_ptr* this_02;
        NXTPixToolkit* this_03;
        uint64_t in_register_00000009;
        uint8_t* this_04;
        unsigned long uVar12;
        shared_ptr local_80;
        shared_ptr local_68;

        uint32_t local_58 = (uint32_t)(((uint64_t)in_register_00000009 << 8) | (uint8_t)arg3);
        vector<int, eastl::fixed_vector_allocator<4ul, 4ul, 4ul, 0ul, true>>* this_05 =
            (vector<int, eastl::fixed_vector_allocator<4ul, 4ul, 4ul, 0ul, true>>*)&field_808;
        bool cVar2 = this_05->empty();
        array<int, _4ul>* local_50 = arg1;
        if (!cVar2) {
            uVar12 = 0;
            do {
                arg1_01 = uVar12;
                piVar8 = (int*)(*this_05)[arg1_01];
                iVar6 = *piVar8;
                piVar8 = &arg1[arg1_01];
                if (iVar6 != *piVar8)
                    goto LAB_1003f6691;
                uVar12 = arg1_01 + 1;
            } while (arg1_01 + 1 != 4);
            this_02 = m_animatedModel->GetOverrideAnimation();
            this_03 = (NXTPixToolkit*)this_02->end();
            if ((this_03 != nullptr) && (cVar2 = this_03->IsReady(), cVar2)) {
                psVar9 = (shared_ptr<game::SeqType>*)this_03->GetScreen();
                pSVar10 = (SeqType*)(*psVar9).operator->();
                iVar6 = pSVar10->GetDuplicateBehaviour();
                if (iVar6 == 2) {
                    this_03->ResetLoopCounter();
                } else if (iVar6 == 1) {
                    this_03->Reset(arg4, (unsigned int)arg2);
                }
            }
            arg1 = local_50;
            if (2 < arg1_01) {
                return;
            }
        }
    LAB_1003f6691:
        uint64_t uVar7 = this_05->empty();
        unsigned int local_38 = (unsigned int)uVar7;
        unsigned int local_34 = (unsigned int)(((uint64_t)((int64_t)((unsigned long)uVar7 >> 8)) << 8) | (uint8_t)1);
        uVar12 = 0;
        unsigned int arg1_00 = 0;
        vector<int, eastl::fixed_vector_allocator<4ul, 4ul, 4ul, 0ul, true>>* local_70 = this_05;
        do {
            local_68 = shared_ptr();
            piVar8 = &arg1[uVar12];
            if (*piVar8 != -1) {
                psVar9 = field_224->GetConfig<game::SeqType>(*piVar8, nullptr);
                local_68 = *psVar9;
                cVar2 = shared_ptr::operator_cast_to_bool(&local_68);
                if (cVar2) {
                    pSVar10 = (SeqType*)local_68.operator->();
                    uVar3 = pSVar10->GetPriority();
                    arg1_00 = eastl::max<unsigned int>(arg1_00, uVar3);
                }
                local_34 = 0;
            }
            if ((local_38 & 1) == 0) {
                local_80 = shared_ptr();
                piVar8 = (int*)(*this_05)[uVar12];
                if (*piVar8 != -1) {
                    this_00 = field_224;
                    piVar8 = (int*)(*this_05)[uVar12];
                    psVar9 = this_00->GetConfig<game::SeqType>(*piVar8, nullptr);
                    local_80 = *psVar9;
                }
                cVar2 = shared_ptr::operator_cast_to_bool(&local_80);
                uVar4 = 0;
                uVar3 = 0;
                if (cVar2) {
                    pSVar10 = (SeqType*)local_80.operator->();
                    uVar3 = pSVar10->GetPriority();
                }
                cVar2 = shared_ptr::operator_cast_to_bool(&local_68);
                if (cVar2) {
                    pSVar10 = (SeqType*)local_68.operator->();
                    uVar4 = pSVar10->GetPriority();
                }
                local_38 = local_38 & 255;
                if (uVar3 <= uVar4) {
                    local_38 = 1;
                    arg1_00 = uVar4;
                }
                this_05 = local_70;
                arg1 = local_50;
            }
            pPVar1 = this;
            uVar12 = uVar12 + 1;
        } while (uVar12 != 4);
        if ((((uint8_t)local_38 | (uint8_t)local_34) & 1) != 0) {
            if ((char)local_58 != '\0') {
                uVar5 = ((EntityRoute*)(*((field_552 + 160))).operator->())->Length();
                pPVar1->field_800 = uVar5;
            }
            if ((local_34 & 1) == 0) {
                this_04 = m_animatedModel;
                this_04->SetOverrideDelay((unsigned int)arg2);
                this_04->SetOverrideSourceTicks(arg4, arg5);
                this_04->SetOverridePriority(arg1_00);
                this_05->resize(4);
                uVar12 = 0;
                do {
                    puVar11 = &arg1[uVar12];
                    uVar5 = *puVar11;
                    puVar11 = (uint32_t*)(*this_05)[uVar12];
                    *puVar11 = uVar5;
                    uVar12 = uVar12 + 1;
                    arg1 = local_50;
                } while (uVar12 != 4);
            } else {
                this_05->clear();
                m_animatedModel->ResetOverrideAnimation();
            }
        }
    }

    // 0x1003f6c40
    void PathingEntity::UpdateAudio() {
        field_8.UpdateAudio();
    }

    // 0x1003f6c60
    void PathingEntity::MainLogic(graphics::RT7Core& rt7Core, unsigned int arg2,
                                  const math::Matrix44T<float>& matrix44) {
        int iVar2;
        int arg2_00;
        unsigned int uVar3;
        long* plVar4;
        Matrix44T<float>* pMVar5;
        shared_ptr* this_01;
        shared_ptr<game::World>* this_02;
        World* this_03;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_04;
        MapSquare* this_05;
        Model* pMVar6;
        CommandLine* this_07;
        Vector4T<float>* vector4;
        uint8_t local_68[16];
        Matrix44T<float>* local_48;
        AnimatedModel* local_40;

        if (field_3896->operator_cast_to_bool()) {
            plVar4 = (long*)(*field_3896).operator->();
            (**(void (**)(...))(*plVar4 + 16))(plVar4);
        }
        if (field_3912->operator_cast_to_bool()) {
            plVar4 = (long*)(*field_3912).operator->();
            (**(void (**)(...))(*plVar4 + 64))(plVar4, arg2);
        }
        UpdateAudio();
        uint64_t local_58 = GetSmoothPosition();
        ((GraphNode*)field_56.operator->())->SetTranslation(local_58);
        if (!(GetWalkSmoothing())) {
            (*this->_vptr[1].GetLoadImportance)(this);
            pMVar5 = (Matrix44T<float>*)CalculateWorldTransformationMatrix();
            this_01 = (shared_ptr*)m_animatedModel->GetCurrentModel();
            if (shared_ptr::operator_cast_to_bool(this_01)) {
                local_48 = pMVar5;
                local_40 = (AnimatedModel*)m_animatedModel;
                new (local_68) game::CoordFine();
                GetPositionFine(*local_68);
                this_02 = (shared_ptr<game::World>*)GetWorld();
                this_03 = (World*)(*this_02).operator->();
                iVar2 = local_68->GetMapSquareX();
                arg2_00 = local_68->GetMapSquareZ();
                this_04 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)this_03->GetMapSquare(
                    iVar2, arg2_00);
                this_05 = (MapSquare*)this_04->end();
                if (this_05 != nullptr) {
                    pMVar6 = (Model*)(*this_01).operator->();
                    ((IrradianceEffect*)pMVar6->GetIrradianceEffect())
                        ->SetCoefficients(this_05->GetIrradianceSHConsts());
                }
                this_07 = (CommandLine*)(*this_01).operator->();
                iVar2 = GetDuration();
                this_07->SetSelectionStart(iVar2);
                uVar3 = ((GraphicsApp*)GraphicsApp::Instance())->GetFrameCount();
                local_40->SetWorldTransform(*local_48, uVar3);
                uVar3 = arg2;
                if (field_4170 != '\0') {
                    RecalculateMaxRemoveRoofLevel();
                }
                if (((*(float*)&field_540 <= 0.0) || (uVar3 <= field_544)) || (field_548 <= uVar3)) {
                    vector4 = (Vector4T<float>*)PTR_ZERO_100ee6708;
                } else {
                    vector4 = (Vector4T<float>*)&field_528;
                }
                pMVar6 = (Model*)(*this_01).operator->();
                pMVar6->SetTint(*vector4);
                ((ModelUpdateManager*)pMVar6->Instance())->AddToUpdateList(*this_01);
            }
        }
    }

    // 0x1003f6e90
    void PathingEntity::SetupTint(unsigned int arg1, unsigned int arg2, unsigned int arg3, unsigned int arg4) {
        uint64_t local_28[2];

        field_544 = arg1;
        field_548 = arg2;
        local_28[0] = math::Colour3FromR8G8B8A8(arg3);
        field_528.Set(*local_28, (float)arg4 * 0.0078125f);
    }

    // 0x1003f6ef0
    void PathingEntity::GatherDrawableElements(graphics::DrawableQueue& drawableQueue, graphics::RT7Core& rt7Core,
                                               const math::Matrix44T<float>& matrix44,
                                               const graphics::SceneViewData& sceneViewData,
                                               const graphics::EffectManager& effectManager) {
        uint8_t bVar2;
        int iVar3;
        Vector3T<float>* vector3;

        if (((CanRender() != '\0') && (m_worldPriority != -1)) && (m_hiddenByOtherEntity == '\0')) {
            bVar2 = IsNonCentredEntity();
            iVar3 = GetGridSize();
            vector3 = (Vector3T<float>*)GetWorldPosition();
            m_animatedModel->SetPointLightBounds(*vector3, (unsigned int)bVar2 + iVar3, (unsigned int)bVar2 + iVar3);
            m_animatedModel->GatherDrawableElements(drawableQueue, rt7Core, sceneViewData, effectManager);
        }
    }

    // 0x1003f6fa0
    unsigned long PathingEntity::IsNonCentredEntity() {
        uint64_t unaff_R14;

        auto this_00 = GetWorldPosition();
        unsigned int uVar1 = GetGridSize();
        auto pfVar2 = this_00->SSOBeginPtr();
        unsigned long uVar3 = (((uint64_t)((int64_t)((unsigned long)unaff_R14 >> 8)) << 8) | (uint8_t)1);
        if ((uVar1 & 1) == 0) {
            if ((((int)*pfVar2 & 127U) != 0) || (pfVar2 = (float*)this_00->second(), ((int)*pfVar2 & 127U) != 0))
                goto LAB_1003f7008;
        } else if ((((int)*pfVar2 & 127U) != 64) || (pfVar2 = (float*)this_00->second(), ((int)*pfVar2 & 127U) != 64))
            goto LAB_1003f7008;
        uVar3 = 0;
    LAB_1003f7008:
        return uVar3 & 4294967295;
    }

    // 0x1003f7020
    void PathingEntity::AddPickableEntity(game::World& world, const math::Matrix44T<float>& matrix44) {
        uint8_t* this_00;
        PathingEntity* pPVar1;
        int iVar3;
        int arg4;
        unsigned int uVar4;
        SceneManager* pSVar5;
        Minimap* this_01;
        GraphNode* pGVar6;
        AABB* pAVar7;
        uint64_t uVar8;
        long* plVar9;
        shared_ptr<game::World>* this_02;
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* this_03;
        CoordMapSquare* pCVar10;
        float* pfVar11;
        char* str;
        unsigned int uVar12;
        uint32_t uVar13;
        float fVar14;
        eastl::string local_1c8;
        Vector2T<int> local_1a8;
        uint64_t local_1a0[2];
        uint8_t local_188[16];
        Matrix44T<float>* local_178;
        PathingEntity* local_170;
        Capsule2D* local_168;
        SideBarData local_160;

        if (CanRender()) {
            pSVar5 = (SceneManager*)world.size();
            this_01 = (Minimap*)pSVar5->GetGameSceneRect();
            local_168 = (Capsule2D*)&field_76;
            local_178 = world.GetLastCameraProjectionMatrix();
            local_188._8_8_ = world.GetLastViewProjectionMatrix();
            iVar3 = this_01->GetPos();
            local_170 = this;
            arg4 = this_01->GetLevel();
            pGVar6 = local_170->GetNode();
            pAVar7 = (AABB*)pGVar6->GetWorldAABB();
            local_168->FillFromAABB(*local_178, *local_188._8_8_, iVar3, arg4, *pAVar7);
            this_00 = &local_170->field_100;
            local_168 = (Capsule2D*)world.GetLastCameraViewMatrix();
            local_178 = world.GetLastCameraProjectionMatrix();
            local_188._8_8_ = world.GetLastViewProjectionMatrix();
            iVar3 = this_01->GetPos();
            uVar4 = this_01->GetLevel();
            pGVar6 = local_170->GetNode();
            pGVar6->GetWorldAABB();
            pPVar1 = local_170;
            if (math::Sphere2D::Set(*this_00, *local_168, *local_178, local_188._8_4_, iVar3,
                                    *((AABB*)(unsigned long)uVar4))) {
                if (game::World::m_debugPicking != '\0') {
                    pGVar6 = pPVar1->GetNode();
                    uVar8 = pGVar6->GetWorldAABB();
                    plVar9 = DebugPrimitiveCollectorBasic::GetCollector("");
                    if (plVar9 != nullptr) {
                        local_160 = oldscape::sidebars::SideBarData(-12566273, 3);
                        (**(void (**)(...))(*plVar9 + 72))(plVar9, uVar8, &local_160);
                    }
                    local_1a8 = math::Vector2T();
                    this_02 = (shared_ptr<game::World>*)local_170->GetWorld();
                    this_03 = (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                                         eastl::use_first<eastl::pair<long long const, unsigned int>>,
                                         eastl::equal_to<long long>, eastl::hash<long long>, eastl::mod_range_hashing,
                                         eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
                                         true>*)(*this_02)
                                  .operator->();
                    pSVar5 = (SceneManager*)this_03->size();
                    pCVar10 = (CoordMapSquare*)pSVar5->GetGameSceneRect();
                    iVar3 = pCVar10->GetX();
                    local_168._0_4_ = (float)iVar3;
                    iVar3 = ((CoordMapSquare*)this_00->SSOBeginPtr())->GetX();
                    local_168._0_4_ = (float)iVar3 + local_168._0_4_;
                    pfVar11 = (float*)local_1a8.SSOBeginPtr();
                    *pfVar11 = local_168._0_4_;
                    iVar3 = pCVar10->GetZ();
                    local_168._0_4_ = (float)iVar3;
                    pCVar10 = (CoordMapSquare*)this_00->SSOBeginPtr();
                    iVar3 = pCVar10->GetZ();
                    local_168._0_4_ = (float)iVar3 + local_168._0_4_;
                    pfVar11 = (float*)local_1a8.y();
                    *pfVar11 = local_168._0_4_;
                    iVar3 = this_00->GetPos();
                    plVar9 = DebugPrimitiveCollectorBasic::GetCollector("");
                    if (plVar9 != nullptr) {
                        local_168._0_4_ = (float)iVar3;
                        local_160 = oldscape::sidebars::SideBarData(1077952767, 0);
                        (**(void (**)(...))(*plVar9 + 160))(local_168._0_4_, plVar9, &local_1a8, 1, &local_160);
                    }
                    local_160 = eastl::fixed_string<char, 256>();
                    pPVar1 = local_170;
                    pGVar6 = local_170->GetNode();
                    pAVar7 = (AABB*)pGVar6->GetWorldAABB();
                    uVar13 = pAVar7->GetWidth();
                    local_168 = (Capsule2D*)(((uint64_t)local_168._4_4_ << 32) | (uint32_t)uVar13);
                    pGVar6 = pPVar1->GetNode();
                    pAVar7 = (AABB*)pGVar6->GetWorldAABB();
                    uVar13 = pAVar7->GetHeight();
                    local_178 = (Matrix44T<float>*)(((uint64_t)local_178._4_4_ << 32) | (uint32_t)uVar13);
                    pGVar6 = pPVar1->GetNode();
                    pAVar7 = (AABB*)pGVar6->GetWorldAABB();
                    uVar12 = (unsigned int)local_168._0_4_;
                    uVar4 = (unsigned int)local_178._0_4_;
                    fVar14 = (float)pAVar7->GetLength();
                    local_160.sprintf("Pick[PathingEntity] [aabb %d x %d x %d]", (unsigned long)uVar12,
                                      (unsigned long)uVar4, (unsigned long)(unsigned int)(int)fVar14);
                    plVar9 = DebugPrimitiveCollectorBasic::GetCollector("");
                    if (plVar9 != nullptr) {
                        pGVar6 = pPVar1->GetNode();
                        pAVar7 = (AABB*)pGVar6->GetWorldAABB();
                        local_1a0[0] = pAVar7->GetCentrePos();
                        str = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                        local_1c8 = eastl::string(str);
                        new (local_188) oldscape::sidebars::SideBarData(1077952767, 0);
                        (**(void (**)(...))(*plVar9 + 136))(plVar9, local_1a0, &local_1c8, local_188);
                    }
                }
                local_1c8.shared_from_this();
                local_160.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(local_1c8);
                world.AddPickableEntity(local_160);
            }
        }
    }

    // 0x1003f7550
    bool PathingEntity::CanRender() const {
        unsigned int arg1;
        bool cVar1;
        int iVar2;
        int arg2;
        int arg3;
        shared_ptr* this_02;
        World* pWVar3;
        RemoveRoof* this_03;
        Vector3T<float>* vector3;
        uint8_t local_48[32];

        auto this_00 = m_animatedModel->GetCurrentModel();
        auto this_01 = this_00->end();
        if (((this_01 != nullptr) && (cVar1 = GetWalkSmoothing(), !cVar1)) &&
            (iVar2 = this_01->GetTotalBatchCount(), iVar2 != 0)) {
            this_02 = (shared_ptr*)GetWorld();
            cVar1 = shared_ptr::operator_cast_to_bool(this_02);
            if (!cVar1) {
                return 0;
            }
            pWVar3 = (World*)(*this_02).operator->();
            cVar1 = pWVar3->IsRemoveRoofSelective();
            if (!cVar1) {
                iVar2 = GetDuration();
                arg2 = GetWrapMode();
                pWVar3 = (World*)(*this_02).operator->();
                arg3 = pWVar3->GetMaxRenderLevel();
                cVar1 = game::LinkConstants::IsAffectedByMaxRenderLevel(iVar2, arg2, arg3);
            } else {
                pWVar3 = (World*)(*this_02).operator->();
                this_03 = (RemoveRoof*)pWVar3->GetRemoveRoof();
                cVar1 = this_03->AnyRoofRemoved();
                if (!cVar1) {
                    return 1;
                }
                arg1 = field_68;
                vector3 = (Vector3T<float>*)GetWorldPosition();
                new (local_48) game::CoordFine(arg1, vector3);
                new ((local_48 + 16)) game::CoordGrid(local_48);
                cVar1 = this_03->IsRoofRemoved(*((local_48 + 16)));
            }
            if (!cVar1) {
                return 1;
            }
        }
        return 0;
    }

    // 0x1003f7680
    void PathingEntity::TestIntersection(const math::Vector3T<float>& vector31, const math::Vector3T<float>& vector32,
                                         int arg3) const {
        ReturnValue local_30 = (ReturnValue)vector32 - vector31;
        ReturnValue* pRVar1 = local_30 = math::Vector3T<float>::Normalize();
        ReturnValue local_40 = *pRVar1;
        uint32_t local_38 = *(uint32_t*)(pRVar1 + 1);
        auto aabb = GetAABB();
        Matrix44T<float>* matrix44 = GetNode()->GetWorldTransformationMatrix();
        math::TestIntersection(0.0, vector31, local_40, *aabb, *matrix44);
    }

    // 0x1003f7720
    void PathingEntity::ResetHitmarksAndHeadbars() {
        auto local_20 = std::make_unique<HitmarksAndHeadbars, game::ConfigProvider const&>(*field_224);
        field_3784 = local_20;
    }

    // 0x1003f7800
    void PathingEntity::AddHitmark(int arg1, int arg2, int arg3, int arg4, unsigned int arg5, unsigned int arg6) {
        uint32_t in_register_0000003c;
        unsigned int in_stack_00000008;

        ((HitmarksAndHeadbars*)(*((unique_ptr<HitmarksAndHeadbars>*)((((uint64_t)in_register_0000003c << 32) |
                                                                      (uint32_t)arg1) +
                                                                     3784)))
             .operator->())
            ->AddHitmark(*(*(ConfigProvider**)((((uint64_t)in_register_0000003c << 32) | (uint32_t)arg1) + 224)), arg2,
                         arg3, arg4, arg5, arg6, in_stack_00000008);
    }

    // 0x1003f7870
    void PathingEntity::AddHeadbar(int arg1, int arg2, unsigned int arg3, int arg4, int arg5, int arg6, int arg7,
                                   unsigned int arg8) {
        ((HitmarksAndHeadbars*)field_3784.operator->())
            ->AddHeadbar(*field_224, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8);
    }

    // 0x1003f78e0
    void PathingEntity::ClearHeadbar(int arg1) {
        ((HitmarksAndHeadbars*)field_3784.operator->())->ClearHeadbar(arg1);
    }

    // 0x1003f7910
    float PathingEntity::GetLoadProgress() const {
        float fVar5;

        bool cVar2 = m_animatedModel->IsLoaded();
        if (!cVar2) {
            return 0.0;
        }
        auto this_00 = m_animatedModel->GetCurrentModel();
        auto this_01 = this_00->end();
        if (this_01 == nullptr) {
            return 1.0;
        }
        World* pWVar1 = (World*)(*field_176).operator->();
        uint8_t bVar3 = pWVar1->GetLoadingIncludesTextures();
        pWVar1 = (World*)(*field_176).operator->();
        uint8_t bVar4 = pWVar1->GetLoadingIncludesShaders();
        if ((bVar3 == 0) || (cVar2 = this_01->TexturesReady(), !cVar2)) {
            fVar5 = 1.0;
        } else {
            fVar5 = 2.0;
        }
        if ((bVar4 != 0) && (cVar2 = this_01->ShadersReady(), cVar2)) {
            fVar5 = fVar5 + 1.0;
        }
        return fVar5 / (float)((unsigned int)bVar3 + (unsigned int)bVar4 + 1);
    }

    // 0x1003f7a00
    void PathingEntity::DebugRenderRouting(unsigned int arg1) {
        long* plVar2;
        World* pWVar3;
        HeightMap* pHVar4;
        LinkMap* pLVar5;
        uint8_t local_40[16];

        uint8_t* this_00 = field_176;
        if (this_00->operator_cast_to_bool() != '\0') {
            new (local_40) game::CoordFine();
            GetPositionFine(*local_40);
            plVar2 = (long*)(*((field_552 + 160))).operator->();
            pWVar3 = (World*)(*this_00).operator->();
            pHVar4 = pWVar3->GetHeightMap();
            pWVar3 = (World*)(*this_00).operator->();
            pLVar5 = pWVar3->GetLinkMap();
            (**(void (**)(...))(*plVar2 + 64))(plVar2, (CoordFine*)local_40, pHVar4, pLVar5, arg1);
        }
    }

    // 0x1003f7aa0
    void PathingEntity::DebugRenderFacing() {
        World* pWVar2;
        HeightMap* heightMap;
        LinkMap* linkMap;
        uint8_t local_38[16];

        uint8_t* this_00 = field_176;
        if (this_00->operator_cast_to_bool() != '\0') {
            new (local_38) game::CoordFine();
            GetPositionFine(*local_38);
            pWVar2 = (World*)(*this_00).operator->();
            heightMap = pWVar2->GetHeightMap();
            pWVar2 = (World*)(*this_00).operator->();
            linkMap = pWVar2->GetLinkMap();
            field_552->RenderDebug(*local_38, *heightMap, *linkMap);
        }
    }

    // 0x1003f7b30
    void PathingEntity::DebugRenderPosition(unsigned int arg1) {
        unsigned long uVar1;
        char* pcVar5;
        uint32_t extraout_XMM0_Da;
        uint32_t extraout_XMM0_Db;
        uint32_t in_XMM1_Da;
        uint8_t local_1e8[32];
        uint8_t local_1b8[40];
        uint8_t local_190[8];
        SideBarData local_188;
        uint64_t local_178;
        uint32_t local_170;
        unsigned long local_158[2];

        new (local_190) oldscape::sidebars::SideBarData(arg1 & 16777215 | 536870912, 1);
        GetSmoothPosition();
        unsigned long local_168 = (((uint64_t)extraout_XMM0_Db << 32) | (uint32_t)extraout_XMM0_Da);
        local_158[1]._0_4_ = field_728;
        local_158[0] = *(unsigned long*)&field_720;
        uint32_t local_160 = in_XMM1_Da;
        new (local_1e8) game::CoordFine(field_68, &local_168);
        new ((local_1e8 + 16)) game::CoordFine(field_68, local_158);
        auto plVar3 = DebugPrimitiveCollectorBasic::GetCollector("");
        if (plVar3 != nullptr) {
            (**(void (**)(...))(*plVar3 + 24))(plVar3, &local_168, local_158, local_190);
        }
        fixed_string<char, 256> local_148;
        uint64_t uVar4 = ((local_1e8 + 16))->ToString();
        local_148.sprintf("Server\n%s", uVar4);
        plVar3 = DebugPrimitiveCollectorBasic::GetCollector("");
        if (plVar3 != nullptr) {
            pcVar5 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            new ((local_1b8 + 8)) eastl::string(pcVar5);
            local_188 = oldscape::sidebars::SideBarData(-16728064, 1);
            (**(void (**)(...))(*plVar3 + 136))(plVar3, local_158, local_1b8 + 8, &local_188);
            ((local_1b8 + 8))->~basic_string();
        }
        local_188._8_4_ = (uint32_t)local_158[1];
        local_188.field_0 = (uint32_t)local_158[0];
        local_188.field_4 = local_158[0]._4_4_;
        uVar4 = local_188._0_8_;
        local_188.field_4 = (int)(local_158[0] >> 32);
        float fVar6 = -(float)local_188.field_4;
        local_188._0_8_ = uVar4;
        local_1c8 = math::PlaneT<float>(PTR_UP_100ee66d0, fVar6);
        local_188.field_4 = 0;
        plVar3 = DebugPrimitiveCollectorBasic::GetCollector("");
        if (plVar3 != nullptr) {
            (**(void (**)(...))(*plVar3 + 104))(plVar3, &local_188, &local_1c8, 64, 64, local_190);
        }
        if (local_168 != *local_158) {
            uVar4 = local_1e8->ToString();
            local_148.sprintf("Apparent\n%s", uVar4);
            plVar3 = DebugPrimitiveCollectorBasic::GetCollector("");
            if (plVar3 != nullptr) {
                pcVar5 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                new ((local_1b8 + 8)) eastl::string(pcVar5);
                new (local_1b8) oldscape::sidebars::SideBarData(-4194304, 1);
                (**(void (**)(...))(*plVar3 + 136))(plVar3, &local_168, local_1b8 + 8, local_1b8);
                ((local_1b8 + 8))->~basic_string();
            }
            local_170 = local_160;
            local_178 = local_168;
            uVar1 = local_178;
            local_178._4_4_ = (float)(local_168 >> 32);
            fVar6 = -local_178._4_4_;
            local_178 = uVar1;
            new ((local_1b8 + 8)) math::PlaneT<float>(PTR_UP_100ee66d0, fVar6);
            local_178 = local_178 & 4294967295;
            plVar3 = DebugPrimitiveCollectorBasic::GetCollector("");
            if (plVar3 != nullptr) {
                (**(void (**)(...))(*plVar3 + 104))(plVar3, &local_178, local_1b8 + 8, 64, 64, local_190);
            }
        }
    }

} // namespace jag
